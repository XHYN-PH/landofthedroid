#include "recomp.h"
#include "rec_mod.h"

void f_e1828c(void) {
  LOAD_REGS();
L_e1828c: /* e1828c: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* e1828f: push 0xe5ec4c */
  { uint32_t v = 0xe5ec4cu; esp -= 4; W32(esp, v); }
/* e18294: lea edx, [ebp - 0x70] */
  edx = (uint32_t)(ebp + 0xffffff90u);
/* e18297: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e18298: mov dword ptr [ebp - 0x70], ecx */
  W32((uint32_t)(ebp + 0xffffff90u), ecx);
/* e1829b: call 0xe25f60 */
  esp -= 4; W32(esp, 0xe182a0u); SPILL(); f_e25f60(); if (g_unwind) return; RELOAD();
  SPILL(); f_e182a0(); return;
}

void f_e182a0(void) {
  LOAD_REGS();
L_e182a0: /* e182a0: push 0xe2f044 */
  { uint32_t v = 0xe2f044u; esp -= 4; W32(esp, v); }
/* e182a5: push 0xe6344c */
  { uint32_t v = 0xe6344cu; esp -= 4; W32(esp, v); }
/* e182aa: call dword ptr [0xe65a5c] */
  esp -= 4; W32(esp, 0xe182b0u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* e182b0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e182b3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e182b5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e182b7: call 0xe25f60 */
  esp -= 4; W32(esp, 0xe182bcu); SPILL(); f_e25f60(); if (g_unwind) return; RELOAD();
/* e182bc: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* e182bf: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e182c1: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* e182c4: mov byte ptr [ebp - 4], 0x25 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x25u);
/* e182c8: jne 0xe182d0 */
  if (!zf) goto L_e182d0;
L_e182ca: /* e182ca: call dword ptr [0xe65dac] */
  esp -= 4; W32(esp, 0xe182d0u); SPILL(); call_ind(R32(0xe65dacu)); if (g_unwind) return; /* USER32!GetForegroundWindow */ RELOAD();
L_e182d0: /* e182d0: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* e182d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e182d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e182d5: call dword ptr [0xe65db0] */
  esp -= 4; W32(esp, 0xe182dbu); SPILL(); call_ind(R32(0xe65db0u)); if (g_unwind) return; /* USER32!GetWindowThreadProcessId */ RELOAD();
/* e182db: call dword ptr [0xe65c7c] */
  esp -= 4; W32(esp, 0xe182e1u); SPILL(); call_ind(R32(0xe65c7cu)); if (g_unwind) return; /* KERNEL32!GetCurrentProcessId */ RELOAD();
/* e182e1: cmp dword ptr [ebp - 0x18], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e182e4: je 0xe182f4 */
  if (zf) goto L_e182f4;
L_e182e6: /* e182e6: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* e182e9: mov ecx, dword ptr [edx + 0x70] */
  ecx = R32((uint32_t)(edx + 0x70u));
/* e182ec: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e182ee: call dword ptr [eax + 0x88] */
  { uint32_t t = R32((uint32_t)(eax + 0x88u)); esp -= 4; W32(esp, 0xe182f4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e182f4: /* e182f4: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e182f7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e182f9: mov esi, dword ptr [ecx + 0x1b0] */
  esi = R32((uint32_t)(ecx + 0x1b0u));
/* e182ff: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e18300: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e18301: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e18302: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0xe18308u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e18308: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e1830b: mov dword ptr [eax + 0x1b0], esi */
  W32((uint32_t)(eax + 0x1b0u), esi);
/* e18311: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e18314: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e18316: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e18317: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xe1831au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e1831a: mov eax, dword ptr [0xe6590c] */
  eax = R32((uint32_t)(0xe6590cu));
/* e1831f: cmp dword ptr [eax], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e18321: jne 0xe18331 */
  if (!zf) goto L_e18331;
L_e18323: /* e18323: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e18326: mov ecx, dword ptr [ecx + 0x6c] */
  ecx = R32((uint32_t)(ecx + 0x6cu));
/* e18329: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e1832b: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0xe18331u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e18331: /* e18331: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e18334: call dword ptr [0xe65b84] */
  esp -= 4; W32(esp, 0xe1833au); SPILL(); f_6c2cc0(); if (g_unwind) return; /* Engine!?GetOuterUClient@UViewport@@QBEPAVUClient@@XZ */ RELOAD();
/* e1833a: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e1833c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e1833d: mov ecx, eax */
  ecx = eax;
/* e1833f: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0xe18345u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e18345: xor eax, eax */
  eax = 0;
/* e18347: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e1834a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e18351: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e18352: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e18353: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e18354: mov esp, ebp */
  esp = ebp;
/* e18356: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e18357: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_e1835a(void) {
  LOAD_REGS();
L_e1835a: /* e1835a: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* e1835d: push 0xe5ec4c */
  { uint32_t v = 0xe5ec4cu; esp -= 4; W32(esp, v); }
/* e18362: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* e18365: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e18366: mov dword ptr [ebp - 0x58], eax */
  W32((uint32_t)(ebp + 0xffffffa8u), eax);
/* e18369: call 0xe25f60 */
  esp -= 4; W32(esp, 0xe1836eu); SPILL(); f_e25f60(); if (g_unwind) return; RELOAD();
  SPILL(); f_e1836e(); return;
}

void f_e1836e(void) {
  LOAD_REGS();
L_e1836e: /* e1836e: push 0xe2f024 */
  { uint32_t v = 0xe2f024u; esp -= 4; W32(esp, v); }
/* e18373: push 0xe63454 */
  { uint32_t v = 0xe63454u; esp -= 4; W32(esp, v); }
/* e18378: call dword ptr [0xe65a5c] */
  esp -= 4; W32(esp, 0xe1837eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* e1837e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e18381: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e18383: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e18385: call 0xe25f60 */
  esp -= 4; W32(esp, 0xe1838au); SPILL(); f_e25f60(); if (g_unwind) return; RELOAD();
/* e1838a: mov edx, dword ptr [0xe6590c] */
  edx = R32((uint32_t)(0xe6590cu));
/* e18390: cmp dword ptr [edx], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e18392: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* e18395: mov byte ptr [ebp - 4], 0x27 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x27u);
/* e18399: jne 0xe183b3 */
  if (!zf) goto L_e183b3;
L_e1839b: /* e1839b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e1839e: cmp dword ptr [ecx + 0x1b0], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x1b0u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e183a4: je 0xe183b3 */
  if (zf) goto L_e183b3;
L_e183a6: /* e183a6: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e183a8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e183a9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e183ab: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e183ad: call dword ptr [eax + 0xa0] */
  { uint32_t t = R32((uint32_t)(eax + 0xa0u)); esp -= 4; W32(esp, 0xe183b3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e183b3: /* e183b3: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e183b6: mov ecx, dword ptr [ecx + 0x6c] */
  ecx = R32((uint32_t)(ecx + 0x6cu));
/* e183b9: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e183bb: je 0xe183c5 */
  if (zf) goto L_e183c5;
L_e183bd: /* e183bd: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e183bf: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0xe183c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e183c5: /* e183c5: mov eax, dword ptr [0xe642a0] */
  eax = R32((uint32_t)(0xe642a0u));
/* e183ca: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e183cc: je 0xe183d4 */
  if (zf) goto L_e183d4;
L_e183ce: /* e183ce: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e183d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e183d1: call dword ptr [ecx + 0x1c] */
  { uint32_t t = R32((uint32_t)(ecx + 0x1cu)); esp -= 4; W32(esp, 0xe183d4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e183d4: /* e183d4: mov eax, dword ptr [0xe642a4] */
  eax = R32((uint32_t)(0xe642a4u));
/* e183d9: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e183db: je 0xe183e3 */
  if (zf) goto L_e183e3;
L_e183dd: /* e183dd: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e183df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e183e0: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0xe183e3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e183e3: /* e183e3: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e183e6: call dword ptr [0xe65b84] */
  esp -= 4; W32(esp, 0xe183ecu); SPILL(); f_6c2cc0(); if (g_unwind) return; /* Engine!?GetOuterUClient@UViewport@@QBEPAVUClient@@XZ */ RELOAD();
/* e183ec: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e183ef: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e183f1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e183f2: mov ecx, eax */
  ecx = eax;
/* e183f4: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0xe183fau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e183fa: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e183fd: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e183ff: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0xe18405u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e18405: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e18408: mov ecx, dword ptr [eax + 0x194] */
  ecx = R32((uint32_t)(eax + 0x194u));
/* e1840e: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* e18411: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e18412: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e18413: call 0xe25d92 */
  esp -= 4; W32(esp, 0xe18418u); SPILL(); f_e25d92(); if (g_unwind) return; RELOAD();
/* e18418: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e1841b: mov ecx, dword ptr [eax + 0x70] */
  ecx = R32((uint32_t)(eax + 0x70u));
/* e1841e: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e18420: je 0xe1842b */
  if (zf) goto L_e1842b;
L_e18422: /* e18422: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e18424: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e18425: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0xe1842bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e1842b: /* e1842b: xor eax, eax */
  eax = 0;
/* e1842d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e18430: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e18437: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e18438: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e18439: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e1843a: mov esp, ebp */
  esp = ebp;
/* e1843c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e1843d: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_e18440(void) {
  LOAD_REGS();
L_e18440: /* e18440: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* e18443: push 0xe5ec4c */
  { uint32_t v = 0xe5ec4cu; esp -= 4; W32(esp, v); }
/* e18448: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* e1844b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e1844c: mov dword ptr [ebp - 0x78], eax */
  W32((uint32_t)(ebp + 0xffffff88u), eax);
/* e1844f: call 0xe25f60 */
  esp -= 4; W32(esp, 0xe18454u); SPILL(); f_e25f60(); if (g_unwind) return; RELOAD();
  SPILL(); f_e18454(); return;
}

void f_e18454(void) {
  LOAD_REGS();
L_e18454: /* e18454: push 0xe2f008 */
  { uint32_t v = 0xe2f008u; esp -= 4; W32(esp, v); }
/* e18459: push 0xe6345c */
  { uint32_t v = 0xe6345cu; esp -= 4; W32(esp, v); }
/* e1845e: call dword ptr [0xe65a5c] */
  esp -= 4; W32(esp, 0xe18464u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* e18464: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e18467: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e18469: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e1846b: call 0xe25f60 */
  esp -= 4; W32(esp, 0xe18470u); SPILL(); f_e25f60(); if (g_unwind) return; RELOAD();
/* e18470: cmp eax, 0x112 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x112u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e18475: ja 0xe18dca */
  if ((!cf && !zf)) goto L_e18dca;
L_e1847b: /* e1847b: je 0xe18c96 */
  if (zf) goto L_e18c96;
L_e18481: /* e18481: lea ecx, [eax - 0x1f] */
  ecx = (uint32_t)(eax + 0xffffffe1u);
/* e18484: cmp ecx, 0xf0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xf0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e1848a: ja 0xe19ba2 */
  if ((!cf && !zf)) goto L_e19ba2;
L_e18490: /* e18490: movzx ecx, byte ptr [ecx + 0xe19c9c] */
  ecx = (uint32_t)(R8((uint32_t)(ecx + 0xe19c9cu)));
/* e18497: jmp dword ptr [ecx*4 + 0xe19c74] */
  switch (R32((uint32_t)(ecx*4 + 0xe19c74u))) {
    case 0xe1849eu: goto L_e1849e;
    case 0xe18583u: goto L_e18583;
    case 0xe18689u: goto L_e18689;
    case 0xe1879du: goto L_e1879d;
    case 0xe18a14u: goto L_e18a14;
    case 0xe18adcu: goto L_e18adc;
    case 0xe18af4u: goto L_e18af4;
    case 0xe18b49u: goto L_e18b49;
    case 0xe18c1fu: goto L_e18c1f;
    case 0xe19ba2u: goto L_e19ba2;
    default: guest_badjump(0xe18497, R32((uint32_t)(ecx*4 + 0xe19c74u))); return;
  }
L_e1849e: /* e1849e: mov edx, dword ptr [0xe6590c] */
  edx = R32((uint32_t)(0xe6590cu));
/* e184a4: cmp dword ptr [edx], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e184a6: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* e184a9: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* e184ad: jne 0xe184c7 */
  if (!zf) goto L_e184c7;
L_e184af: /* e184af: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e184b2: cmp dword ptr [ecx + 0x1b0], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x1b0u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e184b8: je 0xe184c7 */
  if (zf) goto L_e184c7;
L_e184ba: /* e184ba: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e184bc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e184bd: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e184bf: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e184c1: call dword ptr [eax + 0xa0] */
  { uint32_t t = R32((uint32_t)(eax + 0xa0u)); esp -= 4; W32(esp, 0xe184c7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e184c7: /* e184c7: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* e184ca: cmp ecx, 0xd */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e184cd: mov esi, ecx */
  esi = ecx;
/* e184cf: jne 0xe184ea */
  if (!zf) goto L_e184ea;
L_e184d1: /* e184d1: push 0x12 */
  { uint32_t v = 0x12u; esp -= 4; W32(esp, v); }
/* e184d3: call dword ptr [0xe65d98] */
  esp -= 4; W32(esp, 0xe184d9u); SPILL(); call_ind(R32(0xe65d98u)); if (g_unwind) return; /* USER32!GetKeyState */ RELOAD();
/* e184d9: test ah, ah */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(((eax >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* e184db: jns 0xe184fe */
  if (!sf) goto L_e184fe;
L_e184dd: /* e184dd: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e184e0: call 0xe1101e */
  esp -= 4; W32(esp, 0xe184e5u); SPILL(); f_e1101e(); if (g_unwind) return; RELOAD();
/* e184e5: jmp 0xe185ce */
  goto L_e185ce;
L_e184ea: /* e184ea: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e184ec: jl 0xe185d1 */
  if ((sf != of)) goto L_e185d1;
L_e184f2: /* e184f2: cmp ecx, 0xff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e184f8: jge 0xe185d1 */
  if ((sf == of)) goto L_e185d1;
L_e184fe: /* e184fe: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e18501: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e18502: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e18504: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e18505: call 0xe111c2 */
  esp -= 4; W32(esp, 0xe1850au); SPILL(); f_e111c2(); if (g_unwind) return; RELOAD();
/* e1850a: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1850c: je 0xe185ce */
  if (zf) goto L_e185ce;
L_e18512: /* e18512: mov ecx, dword ptr [0xe6590c] */
  ecx = R32((uint32_t)(0xe6590cu));
/* e18518: cmp dword ptr [ecx], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1851a: jmp 0xe185b2 */
  goto L_e185b2;
L_e1851f: /* e1851f: call dword ptr [0xe65e30] */
  esp -= 4; W32(esp, 0xe18525u); SPILL(); call_ind(R32(0xe65e30u)); if (g_unwind) return; /* USER32!PostMessageA */ RELOAD();
L_e18525: /* e18525: mov edx, dword ptr [0xe6590c] */
  edx = R32((uint32_t)(0xe6590cu));
/* e1852b: cmp dword ptr [edx], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1852d: je 0xe197b0 */
  if (zf) goto L_e197b0;
L_e18533: /* e18533: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e18536: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e18538: call dword ptr [eax + 0x84] */
  { uint32_t t = R32((uint32_t)(eax + 0x84u)); esp -= 4; W32(esp, 0xe1853eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e1853e: xor eax, eax */
  eax = 0;
/* e18540: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e18543: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e1854a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e1854b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e1854c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e1854d: mov esp, ebp */
  esp = ebp;
/* e1854f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e18550: ret 0xc */
  esp += 16; SPILL(); return;
L_e18583: /* e18583: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* e18586: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e18588: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* e1858b: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* e1858f: mov esi, ecx */
  esi = ecx;
/* e18591: jl 0xe185d1 */
  if ((sf != of)) goto L_e185d1;
L_e18593: /* e18593: cmp ecx, 0xff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e18599: jge 0xe185d1 */
  if ((sf == of)) goto L_e185d1;
L_e1859b: /* e1859b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e1859c: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* e1859e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e1859f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e185a2: call 0xe111c2 */
  esp -= 4; W32(esp, 0xe185a7u); SPILL(); f_e111c2(); if (g_unwind) return; RELOAD();
/* e185a7: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e185a9: je 0xe185ce */
  if (zf) goto L_e185ce;
L_e185ab: /* e185ab: mov eax, dword ptr [0xe6590c] */
  eax = R32((uint32_t)(0xe6590cu));
/* e185b0: cmp dword ptr [eax], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
L_e185b2: /* e185b2: je 0xe185ce */
  if (zf) goto L_e185ce;
L_e185b4: /* e185b4: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e185b7: call dword ptr [0xe65b54] */
  esp -= 4; W32(esp, 0xe185bdu); SPILL(); f_6c4c78(); if (g_unwind) return; /* Engine!?IsRealtime@UViewport@@QAEHXZ */ RELOAD();
/* e185bd: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e185bf: jne 0xe185ce */
  if (!zf) goto L_e185ce;
L_e185c1: /* e185c1: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e185c4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e185c6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e185c8: call dword ptr [edx + 0xa4] */
  { uint32_t t = R32((uint32_t)(edx + 0xa4u)); esp -= 4; W32(esp, 0xe185ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e185ce: /* e185ce: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
L_e185d1: /* e185d1: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e185d4: mov eax, dword ptr [eax + 0x19c] */
  eax = R32((uint32_t)(eax + 0x19cu));
/* e185da: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e185dc: je 0xe18525 */
  if (zf) goto L_e18525;
L_e185e2: /* e185e2: mov edx, dword ptr [0xe6590c] */
  edx = R32((uint32_t)(0xe6590cu));
/* e185e8: cmp dword ptr [edx], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e185ea: je 0xe197b0 */
  if (zf) goto L_e197b0;
L_e185f0: /* e185f0: cmp esi, 0x70 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e185f3: jne 0xe1861b */
  if (!zf) goto L_e1861b;
L_e185f5: /* e185f5: mov ecx, dword ptr [0xe65920] */
  ecx = R32((uint32_t)(0xe65920u));
/* e185fb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e185fd: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* e18600: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e18602: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* e18605: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e18606: push 0x71 */
  { uint32_t v = 0x71u; esp -= 4; W32(esp, v); }
/* e18608: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e18609: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e1860a: je 0xe1851f */
  if (zf) goto L_e1851f;
L_e18610: /* e18610: call dword ptr [0xe65e00] */
  esp -= 4; W32(esp, 0xe18616u); SPILL(); call_ind(R32(0xe65e00u)); if (g_unwind) return; /* USER32!PostMessageW */ RELOAD();
/* e18616: jmp 0xe18525 */
  goto L_e18525;
L_e1861b: /* e1861b: cmp esi, 9 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x9u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1861e: je 0xe18525 */
  if (zf) goto L_e18525;
L_e18624: /* e18624: cmp esi, 0xd */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e18627: je 0xe18525 */
  if (zf) goto L_e18525;
L_e1862d: /* e1862d: cmp esi, 0x12 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x12u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e18630: je 0xe18525 */
  if (zf) goto L_e18525;
L_e18636: /* e18636: mov edx, dword ptr [0xe65920] */
  edx = R32((uint32_t)(0xe65920u));
/* e1863c: cmp dword ptr [edx], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1863e: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* e18641: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e18642: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e18643: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* e18646: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e18647: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e18648: je 0xe1851f */
  if (zf) goto L_e1851f;
L_e1864e: /* e1864e: call dword ptr [0xe65e00] */
  esp -= 4; W32(esp, 0xe18654u); SPILL(); call_ind(R32(0xe65e00u)); if (g_unwind) return; /* USER32!PostMessageW */ RELOAD();
/* e18654: jmp 0xe18525 */
  goto L_e18525;
L_e18689: /* e18689: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* e1868c: cmp eax, 0xd */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1868f: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* e18692: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* e18696: je 0xe1873a */
  if (zf) goto L_e1873a;
L_e1869c: /* e1869c: mov ecx, dword ptr [ebx + 0x28] */
  ecx = R32((uint32_t)(ebx + 0x28u));
/* e1869f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e186a1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e186a2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e186a3: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e186a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e186a7: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0xe186adu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e186ad: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e186af: je 0xe18737 */
  if (zf) goto L_e18737;
L_e186b5: /* e186b5: mov ecx, dword ptr [0xe6590c] */
  ecx = R32((uint32_t)(0xe6590cu));
/* e186bb: cmp dword ptr [ecx], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e186bd: je 0xe197b0 */
  if (zf) goto L_e197b0;
L_e186c3: /* e186c3: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e186c6: call dword ptr [0xe65b54] */
  esp -= 4; W32(esp, 0xe186ccu); SPILL(); f_6c4c78(); if (g_unwind) return; /* Engine!?IsRealtime@UViewport@@QAEHXZ */ RELOAD();
/* e186cc: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e186ce: jne 0xe197b0 */
  if (!zf) goto L_e197b0;
L_e186d4: /* e186d4: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e186d7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e186d9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e186db: call dword ptr [edx + 0xa4] */
  { uint32_t t = R32((uint32_t)(edx + 0xa4u)); esp -= 4; W32(esp, 0xe186e1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e186e1: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e186e4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e186e6: call dword ptr [eax + 0x84] */
  { uint32_t t = R32((uint32_t)(eax + 0x84u)); esp -= 4; W32(esp, 0xe186ecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e186ec: xor eax, eax */
  eax = 0;
/* e186ee: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e186f1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e186f8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e186f9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e186fa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e186fb: mov esp, ebp */
  esp = ebp;
/* e186fd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e186fe: ret 0xc */
  esp += 16; SPILL(); return;
L_e18737: /* e18737: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
L_e1873a: /* e1873a: cmp dword ptr [ebp + 8], 0x106 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x106u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e18741: jne 0xe197b0 */
  if (!zf) goto L_e197b0;
L_e18747: /* e18747: mov ecx, dword ptr [0xe65920] */
  ecx = R32((uint32_t)(0xe65920u));
/* e1874d: cmp dword ptr [ecx], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1874f: je 0xe1876d */
  if (zf) goto L_e1876d;
L_e18751: /* e18751: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* e18754: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e18755: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e18756: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e18759: mov ecx, dword ptr [eax + 0x194] */
  ecx = R32((uint32_t)(eax + 0x194u));
/* e1875f: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* e18762: push 0x106 */
  { uint32_t v = 0x106u; esp -= 4; W32(esp, v); }
/* e18767: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e18768: jmp 0xe18bd6 */
  goto L_e18bd6;
L_e1876d: /* e1876d: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* e18770: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* e18773: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e18774: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e18775: mov eax, dword ptr [edx + 0x194] */
  eax = R32((uint32_t)(edx + 0x194u));
/* e1877b: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e1877e: push 0x106 */
  { uint32_t v = 0x106u; esp -= 4; W32(esp, v); }
/* e18783: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e18784: call dword ptr [0xe65d54] */
  esp -= 4; W32(esp, 0xe1878au); SPILL(); call_ind(R32(0xe65d54u)); if (g_unwind) return; /* USER32!DefWindowProcA */ RELOAD();
/* e1878a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e1878d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e18794: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e18795: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e18796: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e18797: mov esp, ebp */
  esp = ebp;
/* e18799: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e1879a: ret 0xc */
  esp += 16; SPILL(); return;
L_e1879d: /* e1879d: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* e187a0: test ah, 8 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e187a3: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* e187a6: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* e187aa: je 0xe188c5 */
  if (zf) goto L_e188c5;
L_e187b0: /* e187b0: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* e187b3: mov eax, dword ptr [edx + 0x194] */
  eax = R32((uint32_t)(edx + 0x194u));
/* e187b9: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e187bc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e187bd: call 0xe25d98 */
  esp -= 4; W32(esp, 0xe187c2u); SPILL(); f_e25d98(); if (g_unwind) return; RELOAD();
/* e187c2: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e187c4: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* e187c7: jne 0xe187e0 */
  if (!zf) goto L_e187e0;
L_e187c9: /* e187c9: mov edx, dword ptr [0xe6592c] */
  edx = R32((uint32_t)(0xe6592cu));
/* e187cf: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e187d1: push 0xe633bc */
  { uint32_t v = 0xe633bcu; esp -= 4; W32(esp, v); }
/* e187d6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e187d7: call dword ptr [0xe65904] */
  esp -= 4; W32(esp, 0xe187ddu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* e187dd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_e187e0: /* e187e0: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* e187e3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e187e5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e187e7: push 0x800 */
  { uint32_t v = 0x800u; esp -= 4; W32(esp, v); }
/* e187ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e187ed: call 0xe25daa */
  esp -= 4; W32(esp, 0xe187f2u); SPILL(); f_e25daa(); if (g_unwind) return; RELOAD();
/* e187f2: mov esi, eax */
  esi = eax;
/* e187f4: lea edi, [esi + esi + 2] */
  edi = (uint32_t)(esi + esi + 0x2u);
/* e187f8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e187f9: call 0xe110a0 */
  esp -= 4; W32(esp, 0xe187feu); SPILL(); f_e110a0(); if (g_unwind) return; RELOAD();
/* e187fe: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e18801: mov ebx, eax */
  ebx = eax;
/* e18803: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e18804: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e18805: call 0xe11127 */
  esp -= 4; W32(esp, 0xe1880au); SPILL(); f_e11127(); if (g_unwind) return; RELOAD();
/* e1880a: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* e1880d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e18810: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e18811: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e18812: push 0x800 */
  { uint32_t v = 0x800u; esp -= 4; W32(esp, v); }
/* e18817: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e18818: call 0xe25daa */
  esp -= 4; W32(esp, 0xe1881du); SPILL(); f_e25daa(); if (g_unwind) return; RELOAD();
/* e1881d: mov esi, eax */
  esi = eax;
/* e1881f: shr esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* e18821: xor edi, edi */
  edi = 0;
L_e18823: /* e18823: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e18826: cmp edi, dword ptr [ecx + 0x1bc] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x1bcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e1882c: jge 0xe1884a */
  if ((sf == of)) goto L_e1884a;
L_e1882e: /* e1882e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e18830: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e18832: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* e18834: call 0xe111c2 */
  esp -= 4; W32(esp, 0xe18839u); SPILL(); f_e111c2(); if (g_unwind) return; RELOAD();
/* e18839: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e1883c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e1883e: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* e18840: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* e18842: call 0xe111c2 */
  esp -= 4; W32(esp, 0xe18847u); SPILL(); f_e111c2(); if (g_unwind) return; RELOAD();
/* e18847: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* e18848: jmp 0xe18823 */
  goto L_e18823;
L_e1884a: /* e1884a: xor edi, edi */
  edi = 0;
/* e1884c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_e18850: /* e18850: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e18852: jge 0xe18884 */
  if ((sf == of)) goto L_e18884;
L_e18854: /* e18854: xor edx, edx */
  edx = 0;
/* e18856: mov dx, word ptr [ebx + edi*2] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx + edi*2))) & 0xffffu);
/* e1885a: movzx eax, dx */
  eax = (uint32_t)((edx & 0xffffu));
/* e1885d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e1885f: je 0xe18881 */
  if (zf) goto L_e18881;
L_e18861: /* e18861: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* e18864: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e18867: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e18869: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e1886a: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* e1886d: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* e18870: push 0xb9 */
  { uint32_t v = 0xb9u; esp -= 4; W32(esp, v); }
/* e18875: mov ecx, eax */
  ecx = eax;
/* e18877: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* e1887a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e1887b: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0xe18881u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e18881: /* e18881: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* e18882: jmp 0xe18850 */
  goto L_e18850;
L_e18884: /* e18884: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e18885: call 0xe111e5 */
  esp -= 4; W32(esp, 0xe1888au); SPILL(); f_e111e5(); if (g_unwind) return; RELOAD();
/* e1888a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e1888d: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* e18890: mov edx, dword ptr [ecx + 0x194] */
  edx = R32((uint32_t)(ecx + 0x194u));
/* e18896: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e18899: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e1889a: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* e1889d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e1889e: call 0xe25d9e */
  esp -= 4; W32(esp, 0xe188a3u); SPILL(); f_e25d9e(); if (g_unwind) return; RELOAD();
/* e188a3: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e188a6: mov dword ptr [ecx + 0x1bc], 0 */
  W32((uint32_t)(ecx + 0x1bcu), 0x0u);
/* e188b0: xor eax, eax */
  eax = 0;
/* e188b2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e188b5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e188bc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e188bd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e188be: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e188bf: mov esp, ebp */
  esp = ebp;
/* e188c1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e188c2: ret 0xc */
  esp += 16; SPILL(); return;
L_e188c5: /* e188c5: test al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e188c7: je 0xe18a2b */
  if (zf) goto L_e18a2b;
L_e188cd: /* e188cd: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* e188d0: mov eax, dword ptr [edx + 0x194] */
  eax = R32((uint32_t)(edx + 0x194u));
/* e188d6: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e188d9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e188da: call 0xe25d98 */
  esp -= 4; W32(esp, 0xe188dfu); SPILL(); f_e25d98(); if (g_unwind) return; RELOAD();
/* e188df: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e188e1: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* e188e4: jne 0xe188fd */
  if (!zf) goto L_e188fd;
L_e188e6: /* e188e6: mov edx, dword ptr [0xe6592c] */
  edx = R32((uint32_t)(0xe6592cu));
/* e188ec: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e188ee: push 0xe633dc */
  { uint32_t v = 0xe633dcu; esp -= 4; W32(esp, v); }
/* e188f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e188f4: call dword ptr [0xe65904] */
  esp -= 4; W32(esp, 0xe188fau); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* e188fa: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_e188fd: /* e188fd: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* e18900: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e18902: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e18904: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* e18906: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e18907: call 0xe25daa */
  esp -= 4; W32(esp, 0xe1890cu); SPILL(); f_e25daa(); if (g_unwind) return; RELOAD();
/* e1890c: mov esi, eax */
  esi = eax;
/* e1890e: lea edi, [esi + esi + 2] */
  edi = (uint32_t)(esi + esi + 0x2u);
/* e18912: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e18913: call 0xe110a0 */
  esp -= 4; W32(esp, 0xe18918u); SPILL(); f_e110a0(); if (g_unwind) return; RELOAD();
/* e18918: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e1891b: mov ebx, eax */
  ebx = eax;
/* e1891d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e1891e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e1891f: call 0xe11127 */
  esp -= 4; W32(esp, 0xe18924u); SPILL(); f_e11127(); if (g_unwind) return; RELOAD();
/* e18924: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* e18927: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e1892a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e1892b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e1892c: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* e1892e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e1892f: call 0xe25daa */
  esp -= 4; W32(esp, 0xe18934u); SPILL(); f_e25daa(); if (g_unwind) return; RELOAD();
/* e18934: mov edi, eax */
  edi = eax;
/* e18936: shr edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* e18938: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* e1893b: xor esi, esi */
  esi = 0;
/* e1893d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_e18940: /* e18940: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e18943: cmp esi, dword ptr [ecx + 0x1bc] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x1bcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e18949: jge 0xe18967 */
  if ((sf == of)) goto L_e18967;
L_e1894b: /* e1894b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e1894d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e1894f: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* e18951: call 0xe111c2 */
  esp -= 4; W32(esp, 0xe18956u); SPILL(); f_e111c2(); if (g_unwind) return; RELOAD();
/* e18956: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e18959: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e1895b: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* e1895d: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* e1895f: call 0xe111c2 */
  esp -= 4; W32(esp, 0xe18964u); SPILL(); f_e111c2(); if (g_unwind) return; RELOAD();
/* e18964: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* e18965: jmp 0xe18940 */
  goto L_e18940;
L_e18967: /* e18967: xor esi, esi */
  esi = 0;
/* e18969: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_e18970: /* e18970: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e18972: jge 0xe189a1 */
  if ((sf == of)) goto L_e189a1;
L_e18974: /* e18974: xor edx, edx */
  edx = 0;
/* e18976: mov dx, word ptr [ebx + esi*2] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx + esi*2))) & 0xffffu);
/* e1897a: movzx eax, dx */
  eax = (uint32_t)((edx & 0xffffu));
/* e1897d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e1897f: je 0xe1899e */
  if (zf) goto L_e1899e;
L_e18981: /* e18981: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* e18984: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e18987: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* e18989: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e1898a: push 0xb9 */
  { uint32_t v = 0xb9u; esp -= 4; W32(esp, v); }
/* e1898f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e18990: mov ecx, eax */
  ecx = eax;
/* e18992: call dword ptr [edi + 0x80] */
  { uint32_t t = R32((uint32_t)(edi + 0x80u)); esp -= 4; W32(esp, 0xe18998u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e18998: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e1899b: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
L_e1899e: /* e1899e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* e1899f: jmp 0xe18970 */
  goto L_e18970;
L_e189a1: /* e189a1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e189a2: call 0xe111e5 */
  esp -= 4; W32(esp, 0xe189a7u); SPILL(); f_e111e5(); if (g_unwind) return; RELOAD();
/* e189a7: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* e189aa: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* e189ad: mov eax, dword ptr [edx + 0x194] */
  eax = R32((uint32_t)(edx + 0x194u));
/* e189b3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e189b6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e189b7: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e189ba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e189bb: call 0xe25d9e */
  esp -= 4; W32(esp, 0xe189c0u); SPILL(); f_e25d9e(); if (g_unwind) return; RELOAD();
/* e189c0: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* e189c3: mov dword ptr [edx + 0x1bc], edi */
  W32((uint32_t)(edx + 0x1bcu), edi);
/* e189c9: xor eax, eax */
  eax = 0;
/* e189cb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e189ce: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e189d5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e189d6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e189d7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e189d8: mov esp, ebp */
  esp = ebp;
/* e189da: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e189db: ret 0xc */
  esp += 16; SPILL(); return;
L_e18a14: /* e18a14: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* e18a17: cmp ax, 1 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x1u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* e18a1b: mov byte ptr [ebp - 4], 0xf */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xfu);
/* e18a1f: je 0xe18a7e */
  if (zf) goto L_e18a7e;
L_e18a21: /* e18a21: mov ecx, dword ptr [0xe658a0] */
  ecx = R32((uint32_t)(0xe658a0u));
/* e18a27: cmp dword ptr [ecx], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e18a29: jne 0xe18a7e */
  if (!zf) goto L_e18a7e;
L_e18a2b: /* e18a2b: mov edx, dword ptr [0xe65920] */
  edx = R32((uint32_t)(0xe65920u));
/* e18a31: cmp dword ptr [edx], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e18a33: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e18a34: je 0xe18a50 */
  if (zf) goto L_e18a50;
L_e18a36: /* e18a36: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* e18a39: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* e18a3c: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* e18a3f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e18a40: mov eax, dword ptr [edx + 0x194] */
  eax = R32((uint32_t)(edx + 0x194u));
/* e18a46: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e18a47: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e18a4a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e18a4b: jmp 0xe18bd6 */
  goto L_e18bd6;
L_e18a50: /* e18a50: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* e18a53: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e18a56: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e18a59: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e18a5a: mov edx, dword ptr [ecx + 0x194] */
  edx = R32((uint32_t)(ecx + 0x194u));
/* e18a60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e18a61: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* e18a64: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e18a65: call dword ptr [0xe65d54] */
  esp -= 4; W32(esp, 0xe18a6bu); SPILL(); call_ind(R32(0xe65d54u)); if (g_unwind) return; /* USER32!DefWindowProcA */ RELOAD();
/* e18a6b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e18a6e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e18a75: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e18a76: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e18a77: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e18a78: mov esp, ebp */
  esp = ebp;
/* e18a7a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e18a7b: ret 0xc */
  esp += 16; SPILL(); return;
L_e18a7e: /* e18a7e: mov ecx, dword ptr [0xe6590c] */
  ecx = R32((uint32_t)(0xe6590cu));
/* e18a84: cmp dword ptr [ecx], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e18a86: je 0xe197b0 */
  if (zf) goto L_e197b0;
L_e18a8c: /* e18a8c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e18a8f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e18a91: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0xe18a97u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e18a97: xor eax, eax */
  eax = 0;
/* e18a99: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e18a9c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e18aa3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e18aa4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e18aa5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e18aa6: mov esp, ebp */
  esp = ebp;
/* e18aa8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e18aa9: ret 0xc */
  esp += 16; SPILL(); return;
L_e18adc: /* e18adc: mov eax, 1 */
  eax = 0x1u;
/* e18ae1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e18ae4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e18aeb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e18aec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e18aed: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e18aee: mov esp, ebp */
  esp = ebp;
/* e18af0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e18af1: ret 0xc */
  esp += 16; SPILL(); return;
L_e18af4: /* e18af4: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e18af7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e18af9: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* e18afc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e18afd: mov byte ptr [ebp - 4], 0x1d */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1du);
/* e18b01: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xe18b04u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e18b04: xor eax, eax */
  eax = 0;
/* e18b06: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e18b09: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e18b10: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e18b11: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e18b12: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e18b13: mov esp, ebp */
  esp = ebp;
/* e18b15: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e18b16: ret 0xc */
  esp += 16; SPILL(); return;
L_e18b49: /* e18b49: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* e18b4c: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e18b4e: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* e18b51: mov byte ptr [ebp - 4], 0x2b */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2bu);
/* e18b55: je 0xe197b0 */
  if (zf) goto L_e197b0;
L_e18b5b: /* e18b5b: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e18b5e: jne 0xe18b92 */
  if (!zf) goto L_e18b92;
L_e18b60: /* e18b60: mov edx, dword ptr [0xe65924] */
  edx = R32((uint32_t)(0xe65924u));
/* e18b66: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e18b68: push 0xe634d0 */
  { uint32_t v = 0xe634d0u; esp -= 4; W32(esp, v); }
/* e18b6d: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* e18b72: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e18b73: call dword ptr [0xe65928] */
  esp -= 4; W32(esp, 0xe18b79u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* e18b79: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e18b7c: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* e18b7f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e18b82: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e18b89: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e18b8a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e18b8b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e18b8c: mov esp, ebp */
  esp = ebp;
/* e18b8e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e18b8f: ret 0xc */
  esp += 16; SPILL(); return;
L_e18b92: /* e18b92: mov ecx, dword ptr [0xe65924] */
  ecx = R32((uint32_t)(0xe65924u));
/* e18b98: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e18b9a: push 0xe63504 */
  { uint32_t v = 0xe63504u; esp -= 4; W32(esp, v); }
/* e18b9f: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* e18ba4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e18ba5: call dword ptr [0xe65928] */
  esp -= 4; W32(esp, 0xe18babu); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* e18bab: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_e18bae: /* e18bae: mov eax, dword ptr [0xe65920] */
  eax = R32((uint32_t)(0xe65920u));
/* e18bb3: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e18bb5: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* e18bb8: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e18bbb: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e18bbd: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* e18bc0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e18bc1: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e18bc4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e18bc5: mov edx, dword ptr [ecx + 0x194] */
  edx = R32((uint32_t)(ecx + 0x194u));
/* e18bcb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e18bcc: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
L_e18bcf: /* e18bcf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_e18bd0: /* e18bd0: je 0xe19bce */
  if (zf) goto L_e19bce;
L_e18bd6: /* e18bd6: call dword ptr [0xe65d58] */
  esp -= 4; W32(esp, 0xe18bdcu); SPILL(); call_ind(R32(0xe65d58u)); if (g_unwind) return; /* USER32!DefWindowProcW */ RELOAD();
/* e18bdc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e18bdf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e18be6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e18be7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e18be8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e18be9: mov esp, ebp */
  esp = ebp;
/* e18beb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e18bec: ret 0xc */
  esp += 16; SPILL(); return;
L_e18c1f: /* e18c1f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e18c22: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* e18c25: mov byte ptr [ebp - 4], 0x2d */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2du);
/* e18c29: call dword ptr [0xe65900] */
  esp -= 4; W32(esp, 0xe18c2fu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* e18c2f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e18c30: mov eax, dword ptr [0xe65924] */
  eax = R32((uint32_t)(0xe65924u));
/* e18c35: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e18c37: push 0xe63530 */
  { uint32_t v = 0xe63530u; esp -= 4; W32(esp, v); }
/* e18c3c: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* e18c41: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e18c42: call dword ptr [0xe65928] */
  esp -= 4; W32(esp, 0xe18c48u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* e18c48: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e18c4b: xor eax, eax */
  eax = 0;
/* e18c4d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e18c50: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e18c57: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e18c58: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e18c59: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e18c5a: mov esp, ebp */
  esp = ebp;
/* e18c5c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e18c5d: ret 0xc */
  esp += 16; SPILL(); return;
L_e18c96: /* e18c96: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* e18c99: mov eax, ecx */
  eax = ecx;
/* e18c9b: and eax, 0xfff0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfff0u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e18ca0: cmp eax, 0xf140 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xf140u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e18ca5: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* e18ca8: mov byte ptr [ebp - 4], 0x29 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x29u);
/* e18cac: je 0xe18d39 */
  if (zf) goto L_e18d39;
L_e18cb2: /* e18cb2: cmp eax, 0xf170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xf170u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e18cb7: je 0xe18d6a */
  if (zf) goto L_e18d6a;
L_e18cbd: /* e18cbd: cmp eax, 0xf030 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xf030u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e18cc2: jne 0xe18ce1 */
  if (!zf) goto L_e18ce1;
L_e18cc4: /* e18cc4: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e18cc7: call 0xe1101e */
  esp -= 4; W32(esp, 0xe18cccu); SPILL(); f_e1101e(); if (g_unwind) return; RELOAD();
/* e18ccc: xor eax, eax */
  eax = 0;
/* e18cce: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e18cd1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e18cd8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e18cd9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e18cda: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e18cdb: mov esp, ebp */
  esp = ebp;
/* e18cdd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e18cde: ret 0xc */
  esp += 16; SPILL(); return;
L_e18ce1: /* e18ce1: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* e18ce4: test byte ptr [edx + 0x1a8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x1a8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e18ceb: je 0xe18d19 */
  if (zf) goto L_e18d19;
L_e18ced: /* e18ced: cmp eax, 0xf040 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xf040u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e18cf2: je 0xe197b0 */
  if (zf) goto L_e197b0;
L_e18cf8: /* e18cf8: cmp eax, 0xf050 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xf050u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e18cfd: je 0xe197b0 */
  if (zf) goto L_e197b0;
L_e18d03: /* e18d03: cmp eax, 0xf130 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xf130u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e18d08: je 0xe197b0 */
  if (zf) goto L_e197b0;
L_e18d0e: /* e18d0e: cmp eax, 0xf150 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xf150u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e18d13: je 0xe197b0 */
  if (zf) goto L_e197b0;
L_e18d19: /* e18d19: mov eax, dword ptr [0xe65920] */
  eax = R32((uint32_t)(0xe65920u));
/* e18d1e: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* e18d20: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* e18d23: mov edx, dword ptr [edx + 0x194] */
  edx = R32((uint32_t)(edx + 0x194u));
/* e18d29: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e18d2a: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* e18d2d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e18d2e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* e18d31: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e18d32: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e18d34: jmp 0xe18bcf */
  goto L_e18bcf;
L_e18d39: /* e18d39: mov ecx, dword ptr [0xe65924] */
  ecx = R32((uint32_t)(0xe65924u));
/* e18d3f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e18d41: push 0xe63464 */
  { uint32_t v = 0xe63464u; esp -= 4; W32(esp, v); }
/* e18d46: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* e18d4b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e18d4c: call dword ptr [0xe65928] */
  esp -= 4; W32(esp, 0xe18d52u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* e18d52: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e18d55: xor eax, eax */
  eax = 0;
/* e18d57: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e18d5a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e18d61: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e18d62: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e18d63: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e18d64: mov esp, ebp */
  esp = ebp;
/* e18d66: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e18d67: ret 0xc */
  esp += 16; SPILL(); return;
L_e18d6a: /* e18d6a: mov eax, dword ptr [0xe65924] */
  eax = R32((uint32_t)(0xe65924u));
/* e18d6f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e18d71: push 0xe63494 */
  { uint32_t v = 0xe63494u; esp -= 4; W32(esp, v); }
/* e18d76: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* e18d7b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e18d7c: call dword ptr [0xe65928] */
  esp -= 4; W32(esp, 0xe18d82u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* e18d82: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e18d85: xor eax, eax */
  eax = 0;
/* e18d87: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e18d8a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e18d91: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e18d92: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e18d93: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e18d94: mov esp, ebp */
  esp = ebp;
/* e18d96: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e18d97: ret 0xc */
  esp += 16; SPILL(); return;
L_e18dca: /* e18dca: cmp eax, 0x312 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x312u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e18dcf: ja 0xe19ba2 */
  if ((!cf && !zf)) goto L_e19ba2;
L_e18dd5: /* e18dd5: je 0xe197b0 */
  if (zf) goto L_e197b0;
L_e18ddb: /* e18ddb: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* e18dde: lea esi, [eax - 0x200] */
  esi = (uint32_t)(eax + 0xfffffe00u);
/* e18de4: cmp esi, 0x12 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x12u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e18de7: ja 0xe19ba5 */
  if ((!cf && !zf)) goto L_e19ba5;
L_e18ded: /* e18ded: movzx esi, byte ptr [esi + 0xe19db0] */
  esi = (uint32_t)(R8((uint32_t)(esi + 0xe19db0u)));
/* e18df4: jmp dword ptr [esi*4 + 0xe19d90] */
  switch (R32((uint32_t)(esi*4 + 0xe19d90u))) {
    case 0xe18dfbu: goto L_e18dfb;
    case 0xe18e68u: goto L_e18e68;
    case 0xe191a2u: goto L_e191a2;
    case 0xe193c9u: goto L_e193c9;
    case 0xe19451u: goto L_e19451;
    case 0xe194cbu: goto L_e194cb;
    case 0xe195c3u: goto L_e195c3;
    case 0xe19ba5u: goto L_e19ba5;
    default: guest_badjump(0xe18df4, R32((uint32_t)(esi*4 + 0xe19d90u))); return;
  }
L_e18dfb: /* e18dfb: mov ecx, dword ptr [0xe6590c] */
  ecx = R32((uint32_t)(0xe6590cu));
/* e18e01: cmp dword ptr [ecx], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e18e03: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* e18e06: je 0xe18e53 */
  if (zf) goto L_e18e53;
L_e18e08: /* e18e08: cmp dword ptr [edx + 0x88], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x88u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e18e0e: je 0xe18e53 */
  if (zf) goto L_e18e53;
L_e18e10: /* e18e10: cmp dword ptr [edx + 0x8c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x8cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e18e16: je 0xe18e53 */
  if (zf) goto L_e18e53;
L_e18e18: /* e18e18: test byte ptr [edx + 0x1a8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x1a8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e18e1f: jne 0xe18e53 */
  if (!zf) goto L_e18e53;
L_e18e21: /* e18e21: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* e18e24: mov ecx, dword ptr [ebx + 0x28] */
  ecx = R32((uint32_t)(ebx + 0x28u));
/* e18e27: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* e18e29: mov edi, eax */
  edi = eax;
/* e18e2b: shr edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* e18e2e: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* e18e31: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* e18e34: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e18e37: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* e18e3a: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* e18e3e: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* e18e41: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* e18e44: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e18e47: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* e18e4c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e18e4d: call dword ptr [esi + 0x98] */
  { uint32_t t = R32((uint32_t)(esi + 0x98u)); esp -= 4; W32(esp, 0xe18e53u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e18e53: /* e18e53: xor eax, eax */
  eax = 0;
/* e18e55: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e18e58: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e18e5f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e18e60: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e18e61: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e18e62: mov esp, ebp */
  esp = ebp;
/* e18e64: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e18e65: ret 0xc */
  esp += 16; SPILL(); return;
L_e18e68: /* e18e68: mov ecx, dword ptr [0xe6590c] */
  ecx = R32((uint32_t)(0xe6590cu));
/* e18e6e: cmp dword ptr [ecx], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e18e70: mov byte ptr [ebp - 4], 0x11 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x11u);
/* e18e74: je 0xe1917a */
  if (zf) goto L_e1917a;
L_e18e7a: /* e18e7a: cmp dword ptr [ebx + 0xc8], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0xc8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e18e80: jne 0xe1917a */
  if (!zf) goto L_e1917a;
L_e18e86: /* e18e86: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e18e89: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* e18e8c: mov edx, dword ptr [eax + 0x348] */
  edx = R32((uint32_t)(eax + 0x348u));
/* e18e92: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e18e93: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e18e96: lea edx, [eax + 0x17c] */
  edx = (uint32_t)(eax + 0x17cu);
/* e18e9c: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* e18e9e: mov esi, esp */
  esi = esp;
/* e18ea0: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* e18ea2: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* e18ea5: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* e18ea8: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* e18eab: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* e18eae: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e18eb1: lea edx, [eax + 0x170] */
  edx = (uint32_t)(eax + 0x170u);
/* e18eb7: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* e18eb9: mov esi, esp */
  esi = esp;
/* e18ebb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e18ebc: lea eax, [ecx + 0xd0] */
  eax = (uint32_t)(ecx + 0xd0u);
/* e18ec2: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* e18ec4: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* e18ec7: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* e18eca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e18ecb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e18ecc: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* e18ecf: lea ecx, [ebp - 0x388] */
  ecx = (uint32_t)(ebp + 0xfffffc78u);
/* e18ed5: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* e18ed8: call dword ptr [0xe65b80] */
  esp -= 4; W32(esp, 0xe18edeu); SPILL(); f_6cb2cb(); if (g_unwind) return; /* Engine!??0FCameraSceneNode@@QAE@PAVUViewport@@PAVFRenderTarget@@PAVAActor@@VFVector@@VFRotator@@M@Z */ RELOAD();
/* e18ede: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e18ee1: add ecx, 0xd0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xd0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e18ee7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e18ee9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e18eea: lea ecx, [ebp - 0x1a4] */
  ecx = (uint32_t)(ebp + 0xfffffe5cu);
/* e18ef0: mov byte ptr [ebp - 4], 0x12 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x12u);
/* e18ef4: call dword ptr [0xe65b7c] */
  esp -= 4; W32(esp, 0xe18efau); SPILL(); f_6cbd48(); if (g_unwind) return; /* Engine!??0FCanvasUtil@@QAE@PAVFRenderTarget@@PAVFRenderInterface@@@Z */ RELOAD();
/* e18efa: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* e18efd: movzx edx, ax */
  edx = (uint32_t)((eax & 0xffffu));
/* e18f00: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* e18f03: shr eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* e18f06: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* e18f09: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* e18f0c: lea eax, [ebp - 0xcc] */
  eax = (uint32_t)(ebp + 0xffffff34u);
/* e18f12: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e18f15: fstp dword ptr [ebp - 0xcc] */
  WF32((uint32_t)(ebp + 0xffffff34u), ST0); FPOP();
/* e18f1b: lea ecx, [ebp - 0x150] */
  ecx = (uint32_t)(ebp + 0xfffffeb0u);
/* e18f21: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* e18f24: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* e18f27: mov byte ptr [ebp - 4], 0x13 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x13u);
/* e18f2b: mov dword ptr [ebp - 0xc4], 0 */
  W32((uint32_t)(ebp + 0xffffff3cu), 0x0u);
/* e18f35: fstp dword ptr [ebp - 0xc8] */
  WF32((uint32_t)(ebp + 0xffffff38u), ST0); FPOP();
/* e18f3b: mov dword ptr [ebp - 0xc0], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff40u), 0x3f800000u);
/* e18f45: mov dword ptr [ebp - 0x20], esp */
  W32((uint32_t)(ebp + 0xffffffe0u), esp);
/* e18f48: mov eax, esp */
  eax = esp;
/* e18f4a: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* e18f4d: mov esi, dword ptr [ebp - 0x3c] */
  esi = R32((uint32_t)(ebp + 0xffffffc4u));
/* e18f50: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* e18f53: lea edi, [ebp - 0x98] */
  edi = (uint32_t)(ebp + 0xffffff68u);
/* e18f59: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* e18f5b: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* e18f5d: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* e18f5f: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* e18f62: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* e18f64: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* e18f67: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* e18f69: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* e18f6c: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* e18f6f: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* e18f72: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* e18f75: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* e18f78: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* e18f7b: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* e18f7e: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* e18f81: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* e18f84: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* e18f86: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* e18f88: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* e18f8a: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* e18f8c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e18f8e: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* e18f91: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* e18f94: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* e18f97: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* e18f9a: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* e18f9d: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* e18fa0: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* e18fa3: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* e18fa6: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* e18fa8: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* e18faa: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* e18fac: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* e18fae: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e18fb0: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* e18fb3: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* e18fb6: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* e18fb9: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* e18fbc: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* e18fbf: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* e18fc2: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* e18fc5: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* e18fc8: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* e18fca: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* e18fcc: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* e18fce: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* e18fd0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e18fd2: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* e18fd4: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* e18fd6: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* e18fd8: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* e18fdb: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* e18fde: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* e18fe1: mov ecx, dword ptr [ebp - 0x98] */
  ecx = R32((uint32_t)(ebp + 0xffffff68u));
/* e18fe7: mov edx, eax */
  edx = eax;
/* e18fe9: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* e18feb: mov ecx, dword ptr [ebp - 0x94] */
  ecx = R32((uint32_t)(ebp + 0xffffff6cu));
/* e18ff1: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* e18ff4: mov ecx, dword ptr [ebp - 0x90] */
  ecx = R32((uint32_t)(ebp + 0xffffff70u));
/* e18ffa: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* e18ffd: mov edx, dword ptr [ebp - 0x8c] */
  edx = R32((uint32_t)(ebp + 0xffffff74u));
/* e19003: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* e19006: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* e19009: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e1900a: lea ecx, [ebp - 0x388] */
  ecx = (uint32_t)(ebp + 0xfffffc78u);
/* e19010: call dword ptr [0xe65b78] */
  esp -= 4; W32(esp, 0xe19016u); SPILL(); f_6c7018(); if (g_unwind) return; /* Engine!?Deproject@FSceneNode@@QAE?AVFVector@@VFPlane@@@Z */ RELOAD();
/* e19016: mov ecx, dword ptr [ebx + 0x28] */
  ecx = R32((uint32_t)(ebx + 0x28u));
/* e19019: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e1901b: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* e1901e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e1901f: call dword ptr [edx + 0xb0] */
  { uint32_t t = R32((uint32_t)(edx + 0xb0u)); esp -= 4; W32(esp, 0xe19025u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e19025: lea ecx, [ebp - 0x1a4] */
  ecx = (uint32_t)(ebp + 0xfffffe5cu);
/* e1902b: mov byte ptr [ebp - 4], 0x12 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x12u);
/* e1902f: call dword ptr [0xe65b74] */
  esp -= 4; W32(esp, 0xe19035u); SPILL(); f_6caac4(); if (g_unwind) return; /* Engine!??1FCanvasUtil@@QAE@XZ */ RELOAD();
/* e19035: lea ecx, [ebp - 0x388] */
  ecx = (uint32_t)(ebp + 0xfffffc78u);
/* e1903b: mov byte ptr [ebp - 4], 0x11 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x11u);
/* e1903f: call dword ptr [0xe65b70] */
  esp -= 4; W32(esp, 0xe19045u); SPILL(); f_6c82c9(); if (g_unwind) return; /* Engine!??1FCameraSceneNode@@UAE@XZ */ RELOAD();
/* e19045: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e19048: mov edx, dword ptr [ecx + 0x19c] */
  edx = R32((uint32_t)(ecx + 0x19cu));
/* e1904e: mov esi, dword ptr [0xe65d5c] */
  esi = R32((uint32_t)(0xe65d5cu));
/* e19054: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e19055: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xe19057u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e19057: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e19058: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xe1905au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e1905a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e1905b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xe1905du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e1905d: mov ecx, dword ptr [0xe65920] */
  ecx = R32((uint32_t)(0xe65920u));
/* e19063: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e19065: xor esi, esi */
  esi = 0;
/* e19067: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e19069: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e1906a: push 0x8010 */
  { uint32_t v = 0x8010u; esp -= 4; W32(esp, v); }
/* e1906f: push 0x111 */
  { uint32_t v = 0x111u; esp -= 4; W32(esp, v); }
/* e19074: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e19075: je 0xe1907f */
  if (zf) goto L_e1907f;
L_e19077: /* e19077: call dword ptr [0xe65df8] */
  esp -= 4; W32(esp, 0xe1907du); SPILL(); call_ind(R32(0xe65df8u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* e1907d: jmp 0xe19085 */
  goto L_e19085;
L_e1907f: /* e1907f: call dword ptr [0xe65dfc] */
  esp -= 4; W32(esp, 0xe19085u); SPILL(); call_ind(R32(0xe65dfcu)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
L_e19085: /* e19085: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* e19088: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e1908b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e1908c: call 0xe110be */
  esp -= 4; W32(esp, 0xe19091u); SPILL(); f_e110be(); if (g_unwind) return; RELOAD();
/* e19091: mov ecx, dword ptr [ebx + 0x28] */
  ecx = R32((uint32_t)(ebx + 0x28u));
/* e19094: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* e19097: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* e19099: mov ebx, edx */
  ebx = edx;
/* e1909b: shr ebx, 0x10 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* e1909e: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* e190a1: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* e190a4: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e190a7: movzx edx, dx */
  edx = (uint32_t)((edx & 0xffffu));
/* e190aa: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* e190ae: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* e190b1: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* e190b4: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e190b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e190b8: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e190bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e190bc: call dword ptr [edi + 0x98] */
  { uint32_t t = R32((uint32_t)(edi + 0x98u)); esp -= 4; W32(esp, 0xe190c2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e190c2: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e190c5: cmp eax, 0x201 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x201u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e190ca: jne 0xe190e4 */
  if (!zf) goto L_e190e4;
L_e190cc: /* e190cc: mov dword ptr [0xe64910], esi */
  W32((uint32_t)(0xe64910u), esi);
/* e190d2: call dword ptr [0xe65d60] */
  esp -= 4; W32(esp, 0xe190d8u); SPILL(); call_ind(R32(0xe65d60u)); if (g_unwind) return; /* USER32!GetMessageTime */ RELOAD();
/* e190d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e190d9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e190db: mov dword ptr [0xe6490c], eax */
  W32((uint32_t)(0xe6490cu), eax);
/* e190e0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e190e2: jmp 0xe19120 */
  goto L_e19120;
L_e190e4: /* e190e4: cmp eax, 0x204 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x204u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e190e9: jne 0xe19103 */
  if (!zf) goto L_e19103;
L_e190eb: /* e190eb: mov dword ptr [0xe64908], esi */
  W32((uint32_t)(0xe64908u), esi);
/* e190f1: call dword ptr [0xe65d60] */
  esp -= 4; W32(esp, 0xe190f7u); SPILL(); call_ind(R32(0xe65d60u)); if (g_unwind) return; /* USER32!GetMessageTime */ RELOAD();
/* e190f7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e190f8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e190fa: mov dword ptr [0xe64904], eax */
  W32((uint32_t)(0xe64904u), eax);
/* e190ff: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e19101: jmp 0xe19120 */
  goto L_e19120;
L_e19103: /* e19103: cmp eax, 0x207 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x207u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e19108: jne 0xe19128 */
  if (!zf) goto L_e19128;
L_e1910a: /* e1910a: mov dword ptr [0xe64900], esi */
  W32((uint32_t)(0xe64900u), esi);
/* e19110: call dword ptr [0xe65d60] */
  esp -= 4; W32(esp, 0xe19116u); SPILL(); call_ind(R32(0xe65d60u)); if (g_unwind) return; /* USER32!GetMessageTime */ RELOAD();
/* e19116: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e19117: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e19119: mov dword ptr [0xe648fc], eax */
  W32((uint32_t)(0xe648fcu), eax);
/* e1911e: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
L_e19120: /* e19120: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e19123: call 0xe111c2 */
  esp -= 4; W32(esp, 0xe19128u); SPILL(); f_e111c2(); if (g_unwind) return; RELOAD();
L_e19128: /* e19128: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e1912b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e1912d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e1912f: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xe19132u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e19132: xor eax, eax */
  eax = 0;
/* e19134: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e19137: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e1913e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e1913f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e19140: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e19141: mov esp, ebp */
  esp = ebp;
/* e19143: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e19144: ret 0xc */
  esp += 16; SPILL(); return;
L_e1917a: /* e1917a: mov edx, dword ptr [0xe65920] */
  edx = R32((uint32_t)(0xe65920u));
/* e19180: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e19182: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* e19185: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* e19188: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1918a: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* e1918d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e1918e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e19191: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e19192: mov ecx, dword ptr [eax + 0x194] */
  ecx = R32((uint32_t)(eax + 0x194u));
/* e19198: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e19199: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* e1919c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e1919d: jmp 0xe18bd0 */
  goto L_e18bd0;
L_e191a2: /* e191a2: mov eax, dword ptr [0xe6590c] */
  eax = R32((uint32_t)(0xe6590cu));
/* e191a7: cmp dword ptr [eax], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e191a9: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* e191ac: mov byte ptr [ebp - 4], 0x17 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x17u);
/* e191b0: je 0xe18bae */
  if (zf) goto L_e18bae;
L_e191b6: /* e191b6: cmp dword ptr [ebx + 0xc8], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0xc8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e191bc: jne 0xe18bae */
  if (!zf) goto L_e18bae;
L_e191c2: /* e191c2: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* e191c5: mov dword ptr [ebp - 0xb0], edi */
  W32((uint32_t)(ebp + 0xffffff50u), edi);
/* e191cb: mov dword ptr [ebp - 0xac], edi */
  W32((uint32_t)(ebp + 0xffffff54u), edi);
/* e191d1: mov eax, dword ptr [edx + 0x194] */
  eax = R32((uint32_t)(edx + 0x194u));
/* e191d7: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* e191dd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e191de: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e191e1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e191e2: call dword ptr [0xe65d7c] */
  esp -= 4; W32(esp, 0xe191e8u); SPILL(); call_ind(R32(0xe65d7cu)); if (g_unwind) return; /* USER32!ClientToScreen */ RELOAD();
/* e191e8: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* e191eb: mov eax, dword ptr [edx + 0x1c0] */
  eax = R32((uint32_t)(edx + 0x1c0u));
/* e191f1: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e191f4: je 0xe19205 */
  if (zf) goto L_e19205;
L_e191f6: /* e191f6: mov ecx, dword ptr [ebp - 0xb0] */
  ecx = R32((uint32_t)(ebp + 0xffffff50u));
/* e191fc: mov ebx, eax */
  ebx = eax;
/* e191fe: sub ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* e19200: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* e19203: jmp 0xe1920b */
  goto L_e1920b;
L_e19205: /* e19205: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* e19208: movzx ebx, cx */
  ebx = (uint32_t)((ecx & 0xffffu));
L_e1920b: /* e1920b: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1920e: je 0xe1921e */
  if (zf) goto L_e1921e;
L_e19210: /* e19210: mov edi, dword ptr [edx + 0x1c4] */
  edi = R32((uint32_t)(edx + 0x1c4u));
/* e19216: sub edi, dword ptr [ebp - 0xac] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffff54u)));
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* e1921c: jmp 0xe19223 */
  goto L_e19223;
L_e1921e: /* e1921e: shr ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* e19221: mov edi, ecx */
  edi = ecx;
L_e19223: /* e19223: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e19226: cmp eax, 0x202 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x202u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1922b: jne 0xe1923c */
  if (!zf) goto L_e1923c;
L_e1922d: /* e1922d: call dword ptr [0xe65d60] */
  esp -= 4; W32(esp, 0xe19233u); SPILL(); call_ind(R32(0xe65d60u)); if (g_unwind) return; /* USER32!GetMessageTime */ RELOAD();
/* e19233: mov eax, 1 */
  eax = 0x1u;
/* e19238: mov esi, eax */
  esi = eax;
/* e1923a: jmp 0xe1925f */
  goto L_e1925f;
L_e1923c: /* e1923c: cmp eax, 0x208 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x208u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e19241: jne 0xe19252 */
  if (!zf) goto L_e19252;
L_e19243: /* e19243: call dword ptr [0xe65d60] */
  esp -= 4; W32(esp, 0xe19249u); SPILL(); call_ind(R32(0xe65d60u)); if (g_unwind) return; /* USER32!GetMessageTime */ RELOAD();
/* e19249: mov eax, 4 */
  eax = 0x4u;
/* e1924e: mov esi, eax */
  esi = eax;
/* e19250: jmp 0xe1925f */
  goto L_e1925f;
L_e19252: /* e19252: call dword ptr [0xe65d60] */
  esp -= 4; W32(esp, 0xe19258u); SPILL(); call_ind(R32(0xe65d60u)); if (g_unwind) return; /* USER32!GetMessageTime */ RELOAD();
/* e19258: mov eax, 2 */
  eax = 0x2u;
/* e1925d: mov esi, eax */
  esi = eax;
L_e1925f: /* e1925f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e19262: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e19264: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* e19266: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e19267: call 0xe111c2 */
  esp -= 4; W32(esp, 0xe1926cu); SPILL(); f_e111c2(); if (g_unwind) return; RELOAD();
/* e1926c: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* e1926f: mov ecx, dword ptr [edx + 0x6c] */
  ecx = R32((uint32_t)(edx + 0x6cu));
/* e19272: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e19274: call dword ptr [0xe65b8c] */
  esp -= 4; W32(esp, 0xe1927au); SPILL(); f_6cce4b(); if (g_unwind) return; /* Engine!?KeyDown@UInput@@QAEEH@Z */ RELOAD();
/* e1927a: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e1927c: jne 0xe192b5 */
  if (!zf) goto L_e192b5;
L_e1927e: /* e1927e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e19281: mov ecx, dword ptr [eax + 0x6c] */
  ecx = R32((uint32_t)(eax + 0x6cu));
/* e19284: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e19286: call dword ptr [0xe65b8c] */
  esp -= 4; W32(esp, 0xe1928cu); SPILL(); f_6cce4b(); if (g_unwind) return; /* Engine!?KeyDown@UInput@@QAEEH@Z */ RELOAD();
/* e1928c: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e1928e: jne 0xe192b5 */
  if (!zf) goto L_e192b5;
L_e19290: /* e19290: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e19293: mov ecx, dword ptr [ecx + 0x6c] */
  ecx = R32((uint32_t)(ecx + 0x6cu));
/* e19296: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e19298: call dword ptr [0xe65b8c] */
  esp -= 4; W32(esp, 0xe1929eu); SPILL(); f_6cce4b(); if (g_unwind) return; /* Engine!?KeyDown@UInput@@QAEEH@Z */ RELOAD();
/* e1929e: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e192a0: jne 0xe192b5 */
  if (!zf) goto L_e192b5;
L_e192a2: /* e192a2: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e192a5: test byte ptr [ecx + 0x1a8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x1a8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e192ac: jne 0xe1931e */
  if (!zf) goto L_e1931e;
L_e192ae: /* e192ae: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e192b0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e192b2: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xe192b5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e192b5: /* e192b5: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e192b8: test byte ptr [ecx + 0x1a8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x1a8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e192bf: jne 0xe1931e */
  if (!zf) goto L_e1931e;
L_e192c1: /* e192c1: mov eax, dword ptr [ecx + 0x88] */
  eax = R32((uint32_t)(ecx + 0x88u));
/* e192c7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e192c9: je 0xe1931e */
  if (zf) goto L_e1931e;
L_e192cb: /* e192cb: mov eax, dword ptr [ecx + 0x8c] */
  eax = R32((uint32_t)(ecx + 0x8cu));
/* e192d1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e192d3: je 0xe1931e */
  if (zf) goto L_e1931e;
L_e192d5: /* e192d5: mov eax, dword ptr [0xe64910] */
  eax = R32((uint32_t)(0xe64910u));
/* e192da: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e192dc: jne 0xe1931e */
  if (!zf) goto L_e1931e;
L_e192de: /* e192de: mov eax, dword ptr [0xe64908] */
  eax = R32((uint32_t)(0xe64908u));
/* e192e3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e192e5: jne 0xe1931e */
  if (!zf) goto L_e1931e;
L_e192e7: /* e192e7: mov eax, dword ptr [0xe64900] */
  eax = R32((uint32_t)(0xe64900u));
/* e192ec: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e192ee: jne 0xe1931e */
  if (!zf) goto L_e1931e;
L_e192f0: /* e192f0: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* e192f3: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e192f6: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e192f8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e192f9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e192fa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e192fb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e192fc: mov ecx, eax */
  ecx = eax;
/* e192fe: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0xe19304u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e19304: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e19307: call dword ptr [0xe65b54] */
  esp -= 4; W32(esp, 0xe1930du); SPILL(); f_6c4c78(); if (g_unwind) return; /* Engine!?IsRealtime@UViewport@@QAEHXZ */ RELOAD();
/* e1930d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e1930f: jne 0xe1931e */
  if (!zf) goto L_e1931e;
L_e19311: /* e19311: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e19314: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e19316: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e19318: call dword ptr [eax + 0xa4] */
  { uint32_t t = R32((uint32_t)(eax + 0xa4u)); esp -= 4; W32(esp, 0xe1931eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e1931e: /* e1931e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e19321: cmp eax, 0x202 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x202u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e19326: jne 0xe19347 */
  if (!zf) goto L_e19347;
L_e19328: /* e19328: mov dword ptr [0xe64910], 0 */
  W32((uint32_t)(0xe64910u), 0x0u);
/* e19332: xor eax, eax */
  eax = 0;
/* e19334: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e19337: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e1933e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e1933f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e19340: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e19341: mov esp, ebp */
  esp = ebp;
/* e19343: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e19344: ret 0xc */
  esp += 16; SPILL(); return;
L_e19347: /* e19347: cmp eax, 0x205 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x205u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1934c: jne 0xe1936d */
  if (!zf) goto L_e1936d;
L_e1934e: /* e1934e: mov dword ptr [0xe64908], 0 */
  W32((uint32_t)(0xe64908u), 0x0u);
/* e19358: xor eax, eax */
  eax = 0;
/* e1935a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e1935d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e19364: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e19365: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e19366: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e19367: mov esp, ebp */
  esp = ebp;
/* e19369: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e1936a: ret 0xc */
  esp += 16; SPILL(); return;
L_e1936d: /* e1936d: cmp eax, 0x208 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x208u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e19372: jne 0xe1937e */
  if (!zf) goto L_e1937e;
L_e19374: /* e19374: mov dword ptr [0xe64900], 0 */
  W32((uint32_t)(0xe64900u), 0x0u);
L_e1937e: /* e1937e: xor eax, eax */
  eax = 0;
/* e19380: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e19383: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e1938a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e1938b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e1938c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e1938d: mov esp, ebp */
  esp = ebp;
/* e1938f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e19390: ret 0xc */
  esp += 16; SPILL(); return;
L_e193c9: /* e193c9: mov dword ptr [ebx + 0xc8], 1 */
  W32((uint32_t)(ebx + 0xc8u), 0x1u);
/* e193d3: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e193d6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e193d8: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* e193db: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e193dc: mov byte ptr [ebp - 4], 0x19 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x19u);
/* e193e0: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xe193e3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e193e3: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e193e6: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e193e8: call dword ptr [eax + 0x88] */
  { uint32_t t = R32((uint32_t)(eax + 0x88u)); esp -= 4; W32(esp, 0xe193eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e193ee: mov eax, dword ptr [0xe642a0] */
  eax = R32((uint32_t)(0xe642a0u));
/* e193f3: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e193f5: je 0xe193fd */
  if (zf) goto L_e193fd;
L_e193f7: /* e193f7: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e193f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e193fa: call dword ptr [ecx + 0x20] */
  { uint32_t t = R32((uint32_t)(ecx + 0x20u)); esp -= 4; W32(esp, 0xe193fdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e193fd: /* e193fd: mov eax, dword ptr [0xe642a4] */
  eax = R32((uint32_t)(0xe642a4u));
/* e19402: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e19404: je 0xe1940c */
  if (zf) goto L_e1940c;
L_e19406: /* e19406: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e19408: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e19409: call dword ptr [edx + 0x20] */
  { uint32_t t = R32((uint32_t)(edx + 0x20u)); esp -= 4; W32(esp, 0xe1940cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e1940c: /* e1940c: xor eax, eax */
  eax = 0;
/* e1940e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e19411: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e19418: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e19419: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e1941a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e1941b: mov esp, ebp */
  esp = ebp;
/* e1941d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e1941e: ret 0xc */
  esp += 16; SPILL(); return;
L_e19451: /* e19451: mov dword ptr [ebx + 0xc8], edi */
  W32((uint32_t)(ebx + 0xc8u), edi);
/* e19457: mov eax, dword ptr [0xe642a0] */
  eax = R32((uint32_t)(0xe642a0u));
/* e1945c: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1945e: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* e19461: mov byte ptr [ebp - 4], 0x1b */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1bu);
/* e19465: je 0xe1946d */
  if (zf) goto L_e1946d;
L_e19467: /* e19467: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e19469: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e1946a: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0xe1946du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e1946d: /* e1946d: mov eax, dword ptr [0xe642a4] */
  eax = R32((uint32_t)(0xe642a4u));
/* e19472: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e19474: je 0xe197b0 */
  if (zf) goto L_e197b0;
L_e1947a: /* e1947a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e1947c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e1947d: call dword ptr [ecx + 0x1c] */
  { uint32_t t = R32((uint32_t)(ecx + 0x1cu)); esp -= 4; W32(esp, 0xe19480u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e19480: xor eax, eax */
  eax = 0;
/* e19482: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e19485: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e1948c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e1948d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e1948e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e1948f: mov esp, ebp */
  esp = ebp;
/* e19491: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e19492: ret 0xc */
  esp += 16; SPILL(); return;
L_e194cb: /* e194cb: mov ecx, dword ptr [0xe6590c] */
  ecx = R32((uint32_t)(0xe6590cu));
/* e194d1: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* e194d4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e194d6: shr esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* e194d9: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e194db: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* e194de: mov byte ptr [ebp - 4], 0x1f */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1fu);
/* e194e2: je 0xe197b0 */
  if (zf) goto L_e197b0;
L_e194e8: /* e194e8: cmp si, di */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* e194eb: je 0xe197b0 */
  if (zf) goto L_e197b0;
L_e194f1: /* e194f1: movsx edi, si */
  edi = (uint32_t)(int32_t)(int16_t)((esi & 0xffffu));
/* e194f4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e194f5: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e194f8: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* e194fb: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* e194fe: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e19501: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e19503: push 0xe7 */
  { uint32_t v = 0xe7u; esp -= 4; W32(esp, v); }
/* e19508: call 0xe111c2 */
  esp -= 4; W32(esp, 0xe1950du); SPILL(); f_e111c2(); if (g_unwind) return; RELOAD();
/* e1950d: test si, si */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 15) & 1;
  of = 0;
  }
/* e19510: jge 0xe1952e */
  if ((sf == of)) goto L_e1952e;
L_e19512: /* e19512: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e19515: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e19517: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e19519: push 0xed */
  { uint32_t v = 0xedu; esp -= 4; W32(esp, v); }
/* e1951e: call 0xe111c2 */
  esp -= 4; W32(esp, 0xe19523u); SPILL(); f_e111c2(); if (g_unwind) return; RELOAD();
/* e19523: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e19525: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* e19527: push 0xed */
  { uint32_t v = 0xedu; esp -= 4; W32(esp, v); }
/* e1952c: jmp 0xe1954a */
  goto L_e1954a;
L_e1952e: /* e1952e: jle 0xe19552 */
  if ((zf || sf != of)) goto L_e19552;
L_e19530: /* e19530: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e19533: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e19535: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e19537: push 0xec */
  { uint32_t v = 0xecu; esp -= 4; W32(esp, v); }
/* e1953c: call 0xe111c2 */
  esp -= 4; W32(esp, 0xe19541u); SPILL(); f_e111c2(); if (g_unwind) return; RELOAD();
/* e19541: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e19543: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* e19545: push 0xec */
  { uint32_t v = 0xecu; esp -= 4; W32(esp, v); }
L_e1954a: /* e1954a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e1954d: call 0xe111c2 */
  esp -= 4; W32(esp, 0xe19552u); SPILL(); f_e111c2(); if (g_unwind) return; RELOAD();
L_e19552: /* e19552: mov edx, dword ptr [0xe6590c] */
  edx = R32((uint32_t)(0xe6590cu));
/* e19558: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1955b: je 0xe197b0 */
  if (zf) goto L_e197b0;
L_e19561: /* e19561: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* e19564: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e19567: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e19568: call 0xe110be */
  esp -= 4; W32(esp, 0xe1956du); SPILL(); f_e110be(); if (g_unwind) return; RELOAD();
/* e1956d: mov ecx, dword ptr [ebx + 0x28] */
  ecx = R32((uint32_t)(ebx + 0x28u));
/* e19570: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e19572: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e19573: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e19574: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e19577: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e19578: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0xe1957eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e1957e: xor eax, eax */
  eax = 0;
/* e19580: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e19583: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e1958a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e1958b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e1958c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e1958d: mov esp, ebp */
  esp = ebp;
/* e1958f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e19590: ret 0xc */
  esp += 16; SPILL(); return;
L_e195c3: /* e195c3: mov eax, dword ptr [0xe6590c] */
  eax = R32((uint32_t)(0xe6590cu));
/* e195c8: cmp dword ptr [eax], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e195ca: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* e195cd: mov byte ptr [ebp - 4], 0x21 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x21u);
/* e195d1: je 0xe19af6 */
  if (zf) goto L_e19af6;
L_e195d7: /* e195d7: cmp dword ptr [ebx + 0xc8], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0xc8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e195dd: jne 0xe197b0 */
  if (!zf) goto L_e197b0;
L_e195e3: /* e195e3: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* e195e6: mov eax, dword ptr [edx + 0x194] */
  eax = R32((uint32_t)(edx + 0x194u));
/* e195ec: lea ecx, [ebp - 0xdc] */
  ecx = (uint32_t)(ebp + 0xffffff24u);
/* e195f2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e195f3: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e195f6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e195f7: call dword ptr [0xe65da4] */
  esp -= 4; W32(esp, 0xe195fdu); SPILL(); call_ind(R32(0xe65da4u)); if (g_unwind) return; /* USER32!GetClientRect */ RELOAD();
/* e195fd: mov edx, dword ptr [0xe6590c] */
  edx = R32((uint32_t)(0xe6590cu));
/* e19603: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e19605: xor ebx, ebx */
  ebx = 0;
/* e19607: mov bl, byte ptr [ebp + 0xc] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xcu))) & 0xffu);
/* e1960a: xor esi, esi */
  esi = 0;
/* e1960c: and ebx, 0x13 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x13u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* e1960f: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e19611: je 0xe19683 */
  if (zf) goto L_e19683;
L_e19613: /* e19613: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* e19616: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e19617: call dword ptr [0xe65dbc] */
  esp -= 4; W32(esp, 0xe1961du); SPILL(); call_ind(R32(0xe65dbcu)); if (g_unwind) return; /* USER32!GetCursorPos */ RELOAD();
/* e1961d: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* e19620: fild dword ptr [ebp - 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* e19623: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e19626: add ecx, 0xe0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xe0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e1962c: mov dword ptr [ebp - 0x30], esi */
  W32((uint32_t)(ebp + 0xffffffd0u), esi);
/* e1962f: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* e19632: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* e19635: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* e19637: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* e1963a: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* e1963d: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* e19640: mov edx, esi */
  edx = esi;
/* e19642: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* e19645: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e19648: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e1964a: call dword ptr [eax + 0x98] */
  { uint32_t t = R32((uint32_t)(eax + 0x98u)); esp -= 4; W32(esp, 0xe19650u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e19650: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* e19653: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e19654: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e19655: call dword ptr [0xe65d64] */
  esp -= 4; W32(esp, 0xe1965bu); SPILL(); call_ind(R32(0xe65d64u)); if (g_unwind) return; /* USER32!ScreenToClient */ RELOAD();
/* e1965b: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* e1965e: fild dword ptr [ebp - 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* e19661: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* e19664: add edx, 0xec */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xecu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e1966a: mov dword ptr [ebp - 0x30], esi */
  W32((uint32_t)(ebp + 0xffffffd0u), esi);
/* e1966d: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* e19670: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* e19673: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* e19675: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* e19678: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* e1967b: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* e1967e: mov eax, esi */
  eax = esi;
/* e19680: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
L_e19683: /* e19683: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e19686: test byte ptr [ecx + 0x1a8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x1a8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e1968d: jne 0xe19698 */
  if (!zf) goto L_e19698;
L_e1968f: /* e1968f: cmp dword ptr [ecx + 0x1c0], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x1c0u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e19696: je 0xe196b9 */
  if (zf) goto L_e196b9;
L_e19698: /* e19698: call dword ptr [0xe65860] */
  esp -= 4; W32(esp, 0xe1969eu); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* e1969e: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* e196a1: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e196a4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e196a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e196a7: call dword ptr [edx + 0xc0] */
  { uint32_t t = R32((uint32_t)(edx + 0xc0u)); esp -= 4; W32(esp, 0xe196adu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e196ad: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e196b0: jne 0xe197c5 */
  if (!zf) goto L_e197c5;
L_e196b6: /* e196b6: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_e196b9: /* e196b9: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e196bc: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* e196bf: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* e196c2: je 0xe196c9 */
  if (zf) goto L_e196c9;
L_e196c4: /* e196c4: mov esi, 1 */
  esi = 0x1u;
L_e196c9: /* e196c9: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e196cc: je 0xe196d1 */
  if (zf) goto L_e196d1;
L_e196ce: /* e196ce: or esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
L_e196d1: /* e196d1: test bl, 0x10 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e196d4: je 0xe196d9 */
  if (zf) goto L_e196d9;
L_e196d6: /* e196d6: or esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
L_e196d9: /* e196d9: mov ecx, dword ptr [ecx + 0x6c] */
  ecx = R32((uint32_t)(ecx + 0x6cu));
/* e196dc: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* e196de: call dword ptr [0xe65b8c] */
  esp -= 4; W32(esp, 0xe196e4u); SPILL(); f_6cce4b(); if (g_unwind) return; /* Engine!?KeyDown@UInput@@QAEEH@Z */ RELOAD();
/* e196e4: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e196e6: je 0xe196ee */
  if (zf) goto L_e196ee;
L_e196e8: /* e196e8: or esi, 0x100 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
L_e196ee: /* e196ee: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e196f1: mov ecx, dword ptr [eax + 0x6c] */
  ecx = R32((uint32_t)(eax + 0x6cu));
/* e196f4: push 0x11 */
  { uint32_t v = 0x11u; esp -= 4; W32(esp, v); }
/* e196f6: call dword ptr [0xe65b8c] */
  esp -= 4; W32(esp, 0xe196fcu); SPILL(); f_6cce4b(); if (g_unwind) return; /* Engine!?KeyDown@UInput@@QAEEH@Z */ RELOAD();
/* e196fc: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e196fe: je 0xe19706 */
  if (zf) goto L_e19706;
L_e19700: /* e19700: or esi, 0x80 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
L_e19706: /* e19706: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e19709: mov ecx, dword ptr [ecx + 0x6c] */
  ecx = R32((uint32_t)(ecx + 0x6cu));
/* e1970c: push 0x12 */
  { uint32_t v = 0x12u; esp -= 4; W32(esp, v); }
/* e1970e: call dword ptr [0xe65b8c] */
  esp -= 4; W32(esp, 0xe19714u); SPILL(); f_6cce4b(); if (g_unwind) return; /* Engine!?KeyDown@UInput@@QAEEH@Z */ RELOAD();
/* e19714: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e19716: je 0xe1971e */
  if (zf) goto L_e1971e;
L_e19718: /* e19718: or esi, 0x200 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
L_e1971e: /* e1971e: movsx eax, word ptr [ebp - 0x26] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(ebp + 0xffffffdau)));
/* e19722: sub eax, dword ptr [ebp - 0xd8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffff28u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* e19728: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* e1972b: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* e1972e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e19730: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* e19733: movsx eax, word ptr [ebp - 0x28] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(ebp + 0xffffffd8u)));
/* e19737: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* e1973a: sub eax, dword ptr [ebp - 0xdc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffff24u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* e19740: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e19743: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* e19746: movzx eax, bx */
  eax = (uint32_t)((ebx & 0xffffu));
/* e19749: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* e1974d: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* e19750: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e19753: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e19754: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e19757: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e19758: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0xe1975eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e1975e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e19761: call dword ptr [0xe65860] */
  esp -= 4; W32(esp, 0xe19767u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* e19767: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* e1976a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e1976d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e1976f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e19770: call dword ptr [edx + 0xc0] */
  { uint32_t t = R32((uint32_t)(edx + 0xc0u)); esp -= 4; W32(esp, 0xe19776u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e19776: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e19779: jne 0xe1978f */
  if (!zf) goto L_e1978f;
L_e1977b: /* e1977b: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* e1977e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e19781: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e19783: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e19785: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e19787: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e19788: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e19789: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0xe1978fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e1978f: /* e1978f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e19792: test byte ptr [ecx + 0x38], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x38u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e19796: je 0xe197b0 */
  if (zf) goto L_e197b0;
L_e19798: /* e19798: mov al, byte ptr [ecx + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x50u))) & 0xffu);
/* e1979b: cmp al, 6 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x6u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e1979d: ja 0xe197b0 */
  if ((!cf && !zf)) goto L_e197b0;
L_e1979f: /* e1979f: movzx edx, al */
  edx = (uint32_t)((eax & 0xffu));
/* e197a2: mov eax, dword ptr [ecx + edx*4 + 0x1dc] */
  eax = R32((uint32_t)(ecx + edx*4 + 0x1dcu));
/* e197a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e197aa: call dword ptr [0xe65dc4] */
  esp -= 4; W32(esp, 0xe197b0u); SPILL(); call_ind(R32(0xe65dc4u)); if (g_unwind) return; /* USER32!SetCursor */ RELOAD();
L_e197b0: /* e197b0: xor eax, eax */
  eax = 0;
/* e197b2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e197b5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e197bc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e197bd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e197be: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e197bf: mov esp, ebp */
  esp = ebp;
/* e197c1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e197c2: ret 0xc */
  esp += 16; SPILL(); return;
L_e197c5: /* e197c5: mov ecx, dword ptr [ebp - 0xdc] */
  ecx = R32((uint32_t)(ebp + 0xffffff24u));
/* e197cb: mov edx, dword ptr [ebp - 0xd4] */
  edx = R32((uint32_t)(ebp + 0xffffff2cu));
/* e197d1: lea eax, [edx + ecx] */
  eax = (uint32_t)(edx + ecx);
/* e197d4: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* e197d5: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* e197d7: mov edx, dword ptr [ebp - 0xd0] */
  edx = R32((uint32_t)(ebp + 0xffffff30u));
/* e197dd: mov ecx, eax */
  ecx = eax;
/* e197df: mov eax, dword ptr [ebp - 0xd8] */
  eax = R32((uint32_t)(ebp + 0xffffff28u));
/* e197e5: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e197e7: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* e197e8: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* e197ea: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* e197ed: sar ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* e197ef: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* e197f1: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* e197f4: mov dword ptr [ebp - 0x5c], esi */
  W32((uint32_t)(ebp + 0xffffffa4u), esi);
/* e197f7: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* e197fa: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
/* e197fd: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* e19800: mov dword ptr [ebp - 0x90], ecx */
  W32((uint32_t)(ebp + 0xffffff70u), ecx);
/* e19806: mov dword ptr [ebp - 0x8c], eax */
  W32((uint32_t)(ebp + 0xffffff74u), eax);
/* e1980c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_e19810: /* e19810: movsx edi, word ptr [ebp + 0x12] */
  edi = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(ebp + 0x12u)));
/* e19814: mov dword ptr [ebp - 0x3c], esi */
  W32((uint32_t)(ebp + 0xffffffc4u), esi);
/* e19817: movsx esi, si */
  esi = (uint32_t)(int32_t)(int16_t)((esi & 0xffffu));
/* e1981a: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* e1981c: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* e1981e: and edx, 0x13 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x13u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* e19821: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e19823: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* e19826: mov dword ptr [ebp - 0xa8], edi */
  W32((uint32_t)(ebp + 0xffffff58u), edi);
/* e1982c: mov ecx, esi */
  ecx = esi;
/* e1982e: jge 0xe19832 */
  if ((sf == of)) goto L_e19832;
L_e19830: /* e19830: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
L_e19832: /* e19832: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e19834: mov eax, edi */
  eax = edi;
/* e19836: jge 0xe1983a */
  if ((sf == of)) goto L_e1983a;
L_e19838: /* e19838: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
L_e1983a: /* e1983a: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* e1983d: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e1983f: mov ecx, dword ptr [ebp - 0x5c] */
  ecx = R32((uint32_t)(ebp + 0xffffffa4u));
/* e19842: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e19844: add ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* e19846: mov dword ptr [ebp - 0x5c], ecx */
  W32((uint32_t)(ebp + 0xffffffa4u), ecx);
/* e19849: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* e1984c: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* e1984f: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e19851: xor ebx, ebx */
  ebx = 0;
/* e19853: test dl, 1 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e19856: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* e19859: je 0xe19860 */
  if (zf) goto L_e19860;
L_e1985b: /* e1985b: mov ebx, 1 */
  ebx = 0x1u;
L_e19860: /* e19860: test dl, 2 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e19863: je 0xe19868 */
  if (zf) goto L_e19868;
L_e19865: /* e19865: or ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
L_e19868: /* e19868: test dl, 0x10 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e1986b: je 0xe19870 */
  if (zf) goto L_e19870;
L_e1986d: /* e1986d: or ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
L_e19870: /* e19870: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e19873: mov ecx, dword ptr [eax + 0x6c] */
  ecx = R32((uint32_t)(eax + 0x6cu));
/* e19876: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* e19878: call dword ptr [0xe65b8c] */
  esp -= 4; W32(esp, 0xe1987eu); SPILL(); f_6cce4b(); if (g_unwind) return; /* Engine!?KeyDown@UInput@@QAEEH@Z */ RELOAD();
/* e1987e: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e19880: je 0xe19888 */
  if (zf) goto L_e19888;
L_e19882: /* e19882: or ebx, 0x100 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
L_e19888: /* e19888: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e1988b: mov ecx, dword ptr [ecx + 0x6c] */
  ecx = R32((uint32_t)(ecx + 0x6cu));
/* e1988e: push 0x11 */
  { uint32_t v = 0x11u; esp -= 4; W32(esp, v); }
/* e19890: call dword ptr [0xe65b8c] */
  esp -= 4; W32(esp, 0xe19896u); SPILL(); f_6cce4b(); if (g_unwind) return; /* Engine!?KeyDown@UInput@@QAEEH@Z */ RELOAD();
/* e19896: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e19898: je 0xe198a0 */
  if (zf) goto L_e198a0;
L_e1989a: /* e1989a: or ebx, 0x80 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
L_e198a0: /* e198a0: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* e198a3: mov ecx, dword ptr [edx + 0x6c] */
  ecx = R32((uint32_t)(edx + 0x6cu));
/* e198a6: push 0x12 */
  { uint32_t v = 0x12u; esp -= 4; W32(esp, v); }
/* e198a8: call dword ptr [0xe65b8c] */
  esp -= 4; W32(esp, 0xe198aeu); SPILL(); f_6cce4b(); if (g_unwind) return; /* Engine!?KeyDown@UInput@@QAEEH@Z */ RELOAD();
/* e198ae: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e198b0: je 0xe198b8 */
  if (zf) goto L_e198b8;
L_e198b2: /* e198b2: or ebx, 0x200 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
L_e198b8: /* e198b8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e198ba: jne 0xe198c0 */
  if (!zf) goto L_e198c0;
L_e198bc: /* e198bc: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e198be: je 0xe198ed */
  if (zf) goto L_e198ed;
L_e198c0: /* e198c0: fild dword ptr [ebp - 0xa8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffff58u)); FPUSH(v); }
/* e198c6: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* e198c9: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* e198cc: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e198cf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e198d1: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e198d4: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* e198d8: mov dword ptr [ebp - 0x18], 1 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x1u);
/* e198df: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* e198e2: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e198e5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e198e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e198e7: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0xe198edu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e198ed: /* e198ed: mov ecx, dword ptr [0xe65920] */
  ecx = R32((uint32_t)(0xe65920u));
/* e198f3: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e198f6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e198f8: push 0x200 */
  { uint32_t v = 0x200u; esp -= 4; W32(esp, v); }
/* e198fd: push 0x200 */
  { uint32_t v = 0x200u; esp -= 4; W32(esp, v); }
/* e19902: je 0xe19920 */
  if (zf) goto L_e19920;
L_e19904: /* e19904: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* e19907: mov eax, dword ptr [edx + 0x194] */
  eax = R32((uint32_t)(edx + 0x194u));
/* e1990d: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e19910: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e19911: lea edx, [ebp - 0xf8] */
  edx = (uint32_t)(ebp + 0xffffff08u);
/* e19917: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e19918: call dword ptr [0xe65d68] */
  esp -= 4; W32(esp, 0xe1991eu); SPILL(); call_ind(R32(0xe65d68u)); if (g_unwind) return; /* USER32!PeekMessageW */ RELOAD();
/* e1991e: jmp 0xe1993a */
  goto L_e1993a;
L_e19920: /* e19920: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e19923: mov ecx, dword ptr [eax + 0x194] */
  ecx = R32((uint32_t)(eax + 0x194u));
/* e19929: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* e1992c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e1992d: lea eax, [ebp - 0xf8] */
  eax = (uint32_t)(ebp + 0xffffff08u);
/* e19933: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e19934: call dword ptr [0xe65d6c] */
  esp -= 4; W32(esp, 0xe1993au); SPILL(); call_ind(R32(0xe65d6cu)); if (g_unwind) return; /* USER32!PeekMessageA */ RELOAD();
L_e1993a: /* e1993a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e1993c: je 0xe1995d */
  if (zf) goto L_e1995d;
L_e1993e: /* e1993e: mov esi, dword ptr [ebp - 0xec] */
  esi = R32((uint32_t)(ebp + 0xffffff14u));
/* e19944: mov edx, dword ptr [ebp - 0xf0] */
  edx = R32((uint32_t)(ebp + 0xffffff10u));
/* e1994a: movsx ecx, word ptr [ebp - 0x3c] */
  ecx = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(ebp + 0xffffffc4u)));
/* e1994e: movsx eax, word ptr [ebp - 0x3a] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(ebp + 0xffffffc6u)));
/* e19952: mov dword ptr [ebp + 0x10], esi */
  W32((uint32_t)(ebp + 0x10u), esi);
/* e19955: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* e19958: jmp 0xe19810 */
  goto L_e19810;
L_e1995d: /* e1995d: cmp dword ptr [ebp - 0x5c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e19961: jle 0xe19990 */
  if ((zf || sf != of)) goto L_e19990;
L_e19963: /* e19963: mov al, byte ptr [ebp + 0xc] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xcu))) & 0xffu);
/* e19966: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e19968: je 0xe19974 */
  if (zf) goto L_e19974;
L_e1996a: /* e1996a: mov dword ptr [0xe64910], 1 */
  W32((uint32_t)(0xe64910u), 0x1u);
L_e19974: /* e19974: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e19976: je 0xe19982 */
  if (zf) goto L_e19982;
L_e19978: /* e19978: mov dword ptr [0xe64908], 1 */
  W32((uint32_t)(0xe64908u), 0x1u);
L_e19982: /* e19982: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e19984: je 0xe19990 */
  if (zf) goto L_e19990;
L_e19986: /* e19986: mov dword ptr [0xe64900], 1 */
  W32((uint32_t)(0xe64900u), 0x1u);
L_e19990: /* e19990: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* e19993: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e19995: je 0xe199ad */
  if (zf) goto L_e199ad;
L_e19997: /* e19997: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* e1999a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e1999b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e1999e: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e199a1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e199a3: push 0xe4 */
  { uint32_t v = 0xe4u; esp -= 4; W32(esp, v); }
/* e199a8: call 0xe111c2 */
  esp -= 4; W32(esp, 0xe199adu); SPILL(); f_e111c2(); if (g_unwind) return; RELOAD();
L_e199ad: /* e199ad: mov esi, dword ptr [ebp - 0x28] */
  esi = R32((uint32_t)(ebp + 0xffffffd8u));
/* e199b0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e199b2: je 0xe199d1 */
  if (zf) goto L_e199d1;
L_e199b4: /* e199b4: mov ecx, esi */
  ecx = esi;
/* e199b6: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
/* e199b8: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* e199bb: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* e199be: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e199bf: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e199c2: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e199c5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e199c7: push 0xe5 */
  { uint32_t v = 0xe5u; esp -= 4; W32(esp, v); }
/* e199cc: call 0xe111c2 */
  esp -= 4; W32(esp, 0xe199d1u); SPILL(); f_e111c2(); if (g_unwind) return; RELOAD();
L_e199d1: /* e199d1: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e199d3: jne 0xe199d9 */
  if (!zf) goto L_e199d9;
L_e199d5: /* e199d5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e199d7: je 0xe19a23 */
  if (zf) goto L_e19a23;
L_e199d9: /* e199d9: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e199dc: call dword ptr [0xe65860] */
  esp -= 4; W32(esp, 0xe199e2u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* e199e2: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* e199e5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e199e8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e199ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e199eb: call dword ptr [edx + 0xc0] */
  { uint32_t t = R32((uint32_t)(edx + 0xc0u)); esp -= 4; W32(esp, 0xe199f1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e199f1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e199f3: jne 0xe19a23 */
  if (!zf) goto L_e19a23;
L_e199f5: /* e199f5: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* e199f8: mov eax, dword ptr [edx + 0x194] */
  eax = R32((uint32_t)(edx + 0x194u));
/* e199fe: lea ecx, [ebp - 0x90] */
  ecx = (uint32_t)(ebp + 0xffffff70u);
/* e19a04: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e19a05: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e19a08: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e19a09: call dword ptr [0xe65d7c] */
  esp -= 4; W32(esp, 0xe19a0fu); SPILL(); call_ind(R32(0xe65d7cu)); if (g_unwind) return; /* USER32!ClientToScreen */ RELOAD();
/* e19a0f: mov edx, dword ptr [ebp - 0x8c] */
  edx = R32((uint32_t)(ebp + 0xffffff74u));
/* e19a15: mov eax, dword ptr [ebp - 0x90] */
  eax = R32((uint32_t)(ebp + 0xffffff70u));
/* e19a1b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e19a1c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e19a1d: call dword ptr [0xe65dc0] */
  esp -= 4; W32(esp, 0xe19a23u); SPILL(); call_ind(R32(0xe65dc0u)); if (g_unwind) return; /* USER32!SetCursorPos */ RELOAD();
L_e19a23: /* e19a23: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* e19a26: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e19a28: je 0xe19a75 */
  if (zf) goto L_e19a75;
L_e19a2a: /* e19a2a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e19a2d: call dword ptr [0xe65b54] */
  esp -= 4; W32(esp, 0xe19a33u); SPILL(); f_6c4c78(); if (g_unwind) return; /* Engine!?IsRealtime@UViewport@@QAEHXZ */ RELOAD();
/* e19a33: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e19a35: jne 0xe19a75 */
  if (!zf) goto L_e19a75;
L_e19a37: /* e19a37: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e19a3a: mov ecx, dword ptr [ecx + 0x6c] */
  ecx = R32((uint32_t)(ecx + 0x6cu));
/* e19a3d: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* e19a3f: call dword ptr [0xe65b8c] */
  esp -= 4; W32(esp, 0xe19a45u); SPILL(); f_6cce4b(); if (g_unwind) return; /* Engine!?KeyDown@UInput@@QAEEH@Z */ RELOAD();
/* e19a45: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e19a47: je 0xe19a68 */
  if (zf) goto L_e19a68;
L_e19a49: /* e19a49: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* e19a4c: xor esi, esi */
  esi = 0;
/* e19a4e: mov edi, edi */
  edi = edi;
L_e19a50: /* e19a50: cmp esi, dword ptr [edi + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e19a53: jge 0xe19a75 */
  if ((sf == of)) goto L_e19a75;
L_e19a55: /* e19a55: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* e19a58: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* e19a5b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e19a5d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e19a5f: call dword ptr [eax + 0xa4] */
  { uint32_t t = R32((uint32_t)(eax + 0xa4u)); esp -= 4; W32(esp, 0xe19a65u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e19a65: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* e19a66: jmp 0xe19a50 */
  goto L_e19a50;
L_e19a68: /* e19a68: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e19a6b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e19a6d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e19a6f: call dword ptr [edx + 0xa4] */
  { uint32_t t = R32((uint32_t)(edx + 0xa4u)); esp -= 4; W32(esp, 0xe19a75u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e19a75: /* e19a75: mov edi, dword ptr [0xe65d70] */
  edi = R32((uint32_t)(0xe65d70u));
/* e19a7b: mov ebx, dword ptr [0xe65d74] */
  ebx = R32((uint32_t)(0xe65d74u));
/* e19a81: mov esi, dword ptr [0xe65d6c] */
  esi = R32((uint32_t)(0xe65d6cu));
/* e19a87: jmp 0xe19a90 */
  goto L_e19a90;
L_e19a90: /* e19a90: mov eax, dword ptr [0xe65920] */
  eax = R32((uint32_t)(0xe65920u));
/* e19a95: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e19a98: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e19a9a: push 0x108 */
  { uint32_t v = 0x108u; esp -= 4; W32(esp, v); }
/* e19a9f: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* e19aa4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e19aa6: je 0xe19ab7 */
  if (zf) goto L_e19ab7;
L_e19aa8: /* e19aa8: lea ecx, [ebp - 0xf8] */
  ecx = (uint32_t)(ebp + 0xffffff08u);
/* e19aae: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e19aaf: call dword ptr [0xe65d68] */
  esp -= 4; W32(esp, 0xe19ab5u); SPILL(); call_ind(R32(0xe65d68u)); if (g_unwind) return; /* USER32!PeekMessageW */ RELOAD();
/* e19ab5: jmp 0xe19ac0 */
  goto L_e19ac0;
L_e19ab7: /* e19ab7: lea edx, [ebp - 0xf8] */
  edx = (uint32_t)(ebp + 0xffffff08u);
/* e19abd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e19abe: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xe19ac0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e19ac0: /* e19ac0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e19ac2: je 0xe19b5a */
  if (zf) goto L_e19b5a;
L_e19ac8: /* e19ac8: lea eax, [ebp - 0xf8] */
  eax = (uint32_t)(ebp + 0xffffff08u);
/* e19ace: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e19acf: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe19ad1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e19ad1: mov ecx, dword ptr [0xe65920] */
  ecx = R32((uint32_t)(0xe65920u));
/* e19ad7: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e19ada: je 0xe19ae7 */
  if (zf) goto L_e19ae7;
L_e19adc: /* e19adc: lea edx, [ebp - 0xf8] */
  edx = (uint32_t)(ebp + 0xffffff08u);
/* e19ae2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e19ae3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xe19ae5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e19ae5: jmp 0xe19a90 */
  goto L_e19a90;
L_e19ae7: /* e19ae7: lea eax, [ebp - 0xf8] */
  eax = (uint32_t)(ebp + 0xffffff08u);
/* e19aed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e19aee: call dword ptr [0xe65d78] */
  esp -= 4; W32(esp, 0xe19af4u); SPILL(); call_ind(R32(0xe65d78u)); if (g_unwind) return; /* USER32!DispatchMessageA */ RELOAD();
/* e19af4: jmp 0xe19a90 */
  goto L_e19a90;
L_e19af6: /* e19af6: lea ecx, [ebp - 0x90] */
  ecx = (uint32_t)(ebp + 0xffffff70u);
/* e19afc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e19afd: call dword ptr [0xe65dbc] */
  esp -= 4; W32(esp, 0xe19b03u); SPILL(); call_ind(R32(0xe65dbcu)); if (g_unwind) return; /* USER32!GetCursorPos */ RELOAD();
/* e19b03: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e19b06: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e19b08: call dword ptr [edx + 0x98] */
  { uint32_t t = R32((uint32_t)(edx + 0x98u)); esp -= 4; W32(esp, 0xe19b0eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e19b0e: lea ecx, [ebp - 0x90] */
  ecx = (uint32_t)(ebp + 0xffffff70u);
/* e19b14: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e19b15: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e19b16: call dword ptr [0xe65d64] */
  esp -= 4; W32(esp, 0xe19b1cu); SPILL(); call_ind(R32(0xe65d64u)); if (g_unwind) return; /* USER32!ScreenToClient */ RELOAD();
/* e19b1c: fild dword ptr [ebp - 0x90] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffff70u)); FPUSH(v); }
/* e19b22: mov edx, dword ptr [ebx + 0x2c] */
  edx = R32((uint32_t)(ebx + 0x2cu));
/* e19b25: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e19b27: fstp dword ptr [eax + 0x3c] */
  WF32((uint32_t)(eax + 0x3cu), ST0); FPOP();
/* e19b2a: mov ecx, dword ptr [ebx + 0x2c] */
  ecx = R32((uint32_t)(ebx + 0x2cu));
/* e19b2d: fild dword ptr [ebp - 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffff74u)); FPUSH(v); }
/* e19b33: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e19b35: fstp dword ptr [edx + 0x40] */
  WF32((uint32_t)(edx + 0x40u), ST0); FPOP();
/* e19b38: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e19b3b: test byte ptr [eax + 0x38], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x38u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e19b3f: je 0xe19b5a */
  if (zf) goto L_e19b5a;
L_e19b41: /* e19b41: mov cl, byte ptr [eax + 0x50] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x50u))) & 0xffu);
/* e19b44: cmp cl, 6 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x6u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e19b47: ja 0xe19b5a */
  if ((!cf && !zf)) goto L_e19b5a;
L_e19b49: /* e19b49: movzx ecx, cl */
  ecx = (uint32_t)((ecx & 0xffu));
/* e19b4c: mov edx, dword ptr [eax + ecx*4 + 0x1dc] */
  edx = R32((uint32_t)(eax + ecx*4 + 0x1dcu));
/* e19b53: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e19b54: call dword ptr [0xe65dc4] */
  esp -= 4; W32(esp, 0xe19b5au); SPILL(); call_ind(R32(0xe65dc4u)); if (g_unwind) return; /* USER32!SetCursor */ RELOAD();
L_e19b5a: /* e19b5a: xor eax, eax */
  eax = 0;
/* e19b5c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e19b5f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e19b66: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e19b67: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e19b68: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e19b69: mov esp, ebp */
  esp = ebp;
/* e19b6b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e19b6c: ret 0xc */
  esp += 16; SPILL(); return;
L_e19ba2: /* e19ba2: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
L_e19ba5: /* e19ba5: mov esi, dword ptr [0xe65920] */
  esi = R32((uint32_t)(0xe65920u));
/* e19bab: cmp dword ptr [esi], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e19bad: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* e19bb0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e19bb1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e19bb2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e19bb3: je 0xe19bc4 */
  if (zf) goto L_e19bc4;
L_e19bb5: /* e19bb5: mov edx, dword ptr [edx + 0x194] */
  edx = R32((uint32_t)(edx + 0x194u));
/* e19bbb: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* e19bbe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e19bbf: jmp 0xe18bd6 */
  goto L_e18bd6;
L_e19bc4: /* e19bc4: mov ecx, dword ptr [edx + 0x194] */
  ecx = R32((uint32_t)(edx + 0x194u));
/* e19bca: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* e19bcd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
L_e19bce: /* e19bce: call dword ptr [0xe65d54] */
  esp -= 4; W32(esp, 0xe19bd4u); SPILL(); call_ind(R32(0xe65d54u)); if (g_unwind) return; /* USER32!DefWindowProcA */ RELOAD();
/* e19bd4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e19bd7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e19bd8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e19bd9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e19be0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e19be1: mov esp, ebp */
  esp = ebp;
/* e19be3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e19be4: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_e18553(void) {
  LOAD_REGS();
L_e18553: /* e18553: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* e18556: push 0xe5ec4c */
  { uint32_t v = 0xe5ec4cu; esp -= 4; W32(esp, v); }
/* e1855b: lea edx, [ebp - 0x4c] */
  edx = (uint32_t)(ebp + 0xffffffb4u);
/* e1855e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e1855f: mov dword ptr [ebp - 0x4c], ecx */
  W32((uint32_t)(ebp + 0xffffffb4u), ecx);
/* e18562: call 0xe25f60 */
  esp -= 4; W32(esp, 0xe18567u); SPILL(); f_e25f60(); if (g_unwind) return; RELOAD();
  SPILL(); f_e18567(); return;
}

void f_e18567(void) {
  LOAD_REGS();
  goto L_e18567;
L_e1851f: /* e1851f: call dword ptr [0xe65e30] */
  esp -= 4; W32(esp, 0xe18525u); SPILL(); call_ind(R32(0xe65e30u)); if (g_unwind) return; /* USER32!PostMessageA */ RELOAD();
L_e18525: /* e18525: mov edx, dword ptr [0xe6590c] */
  edx = R32((uint32_t)(0xe6590cu));
/* e1852b: cmp dword ptr [edx], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1852d: je 0xe197b0 */
  if (zf) goto L_e197b0;
L_e18533: /* e18533: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e18536: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e18538: call dword ptr [eax + 0x84] */
  { uint32_t t = R32((uint32_t)(eax + 0x84u)); esp -= 4; W32(esp, 0xe1853eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e1853e: xor eax, eax */
  eax = 0;
/* e18540: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e18543: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e1854a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e1854b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e1854c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e1854d: mov esp, ebp */
  esp = ebp;
/* e1854f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e18550: ret 0xc */
  esp += 16; SPILL(); return;
L_e18567: /* e18567: push 0xe2efec */
  { uint32_t v = 0xe2efecu; esp -= 4; W32(esp, v); }
/* e1856c: push 0xe633a4 */
  { uint32_t v = 0xe633a4u; esp -= 4; W32(esp, v); }
/* e18571: call dword ptr [0xe65a5c] */
  esp -= 4; W32(esp, 0xe18577u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* e18577: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e1857a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e1857c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e1857e: call 0xe25f60 */
  esp -= 4; W32(esp, 0xe18583u); SPILL(); f_e25f60(); if (g_unwind) return; RELOAD();
/* e18583: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* e18586: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e18588: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* e1858b: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* e1858f: mov esi, ecx */
  esi = ecx;
/* e18591: jl 0xe185d1 */
  if ((sf != of)) goto L_e185d1;
L_e18593: /* e18593: cmp ecx, 0xff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e18599: jge 0xe185d1 */
  if ((sf == of)) goto L_e185d1;
L_e1859b: /* e1859b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e1859c: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* e1859e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e1859f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e185a2: call 0xe111c2 */
  esp -= 4; W32(esp, 0xe185a7u); SPILL(); f_e111c2(); if (g_unwind) return; RELOAD();
/* e185a7: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e185a9: je 0xe185ce */
  if (zf) goto L_e185ce;
L_e185ab: /* e185ab: mov eax, dword ptr [0xe6590c] */
  eax = R32((uint32_t)(0xe6590cu));
/* e185b0: cmp dword ptr [eax], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e185b2: je 0xe185ce */
  if (zf) goto L_e185ce;
L_e185b4: /* e185b4: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e185b7: call dword ptr [0xe65b54] */
  esp -= 4; W32(esp, 0xe185bdu); SPILL(); f_6c4c78(); if (g_unwind) return; /* Engine!?IsRealtime@UViewport@@QAEHXZ */ RELOAD();
/* e185bd: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e185bf: jne 0xe185ce */
  if (!zf) goto L_e185ce;
L_e185c1: /* e185c1: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e185c4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e185c6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e185c8: call dword ptr [edx + 0xa4] */
  { uint32_t t = R32((uint32_t)(edx + 0xa4u)); esp -= 4; W32(esp, 0xe185ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e185ce: /* e185ce: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
L_e185d1: /* e185d1: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e185d4: mov eax, dword ptr [eax + 0x19c] */
  eax = R32((uint32_t)(eax + 0x19cu));
/* e185da: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e185dc: je 0xe18525 */
  if (zf) goto L_e18525;
L_e185e2: /* e185e2: mov edx, dword ptr [0xe6590c] */
  edx = R32((uint32_t)(0xe6590cu));
/* e185e8: cmp dword ptr [edx], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e185ea: je 0xe197b0 */
  if (zf) goto L_e197b0;
L_e185f0: /* e185f0: cmp esi, 0x70 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e185f3: jne 0xe1861b */
  if (!zf) goto L_e1861b;
L_e185f5: /* e185f5: mov ecx, dword ptr [0xe65920] */
  ecx = R32((uint32_t)(0xe65920u));
/* e185fb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e185fd: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* e18600: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e18602: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* e18605: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e18606: push 0x71 */
  { uint32_t v = 0x71u; esp -= 4; W32(esp, v); }
/* e18608: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e18609: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e1860a: je 0xe1851f */
  if (zf) goto L_e1851f;
L_e18610: /* e18610: call dword ptr [0xe65e00] */
  esp -= 4; W32(esp, 0xe18616u); SPILL(); call_ind(R32(0xe65e00u)); if (g_unwind) return; /* USER32!PostMessageW */ RELOAD();
/* e18616: jmp 0xe18525 */
  goto L_e18525;
L_e1861b: /* e1861b: cmp esi, 9 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x9u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1861e: je 0xe18525 */
  if (zf) goto L_e18525;
L_e18624: /* e18624: cmp esi, 0xd */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e18627: je 0xe18525 */
  if (zf) goto L_e18525;
L_e1862d: /* e1862d: cmp esi, 0x12 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x12u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e18630: je 0xe18525 */
  if (zf) goto L_e18525;
L_e18636: /* e18636: mov edx, dword ptr [0xe65920] */
  edx = R32((uint32_t)(0xe65920u));
/* e1863c: cmp dword ptr [edx], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1863e: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* e18641: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e18642: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e18643: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* e18646: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e18647: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e18648: je 0xe1851f */
  if (zf) goto L_e1851f;
L_e1864e: /* e1864e: call dword ptr [0xe65e00] */
  esp -= 4; W32(esp, 0xe18654u); SPILL(); call_ind(R32(0xe65e00u)); if (g_unwind) return; /* USER32!PostMessageW */ RELOAD();
/* e18654: jmp 0xe18525 */
  goto L_e18525;
L_e197b0: /* e197b0: xor eax, eax */
  eax = 0;
/* e197b2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e197b5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e197bc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e197bd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e197be: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e197bf: mov esp, ebp */
  esp = ebp;
/* e197c1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e197c2: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_e18659(void) {
  LOAD_REGS();
L_e18659: /* e18659: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* e1865c: push 0xe5ec4c */
  { uint32_t v = 0xe5ec4cu; esp -= 4; W32(esp, v); }
/* e18661: lea edx, [ebp - 0x54] */
  edx = (uint32_t)(ebp + 0xffffffacu);
/* e18664: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e18665: mov dword ptr [ebp - 0x54], ecx */
  W32((uint32_t)(ebp + 0xffffffacu), ecx);
/* e18668: call 0xe25f60 */
  esp -= 4; W32(esp, 0xe1866du); SPILL(); f_e25f60(); if (g_unwind) return; RELOAD();
  SPILL(); f_e1866d(); return;
}

void f_e1866d(void) {
  LOAD_REGS();
L_e1866d: /* e1866d: push 0xe2efd4 */
  { uint32_t v = 0xe2efd4u; esp -= 4; W32(esp, v); }
/* e18672: push 0xe633ac */
  { uint32_t v = 0xe633acu; esp -= 4; W32(esp, v); }
/* e18677: call dword ptr [0xe65a5c] */
  esp -= 4; W32(esp, 0xe1867du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* e1867d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e18680: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e18682: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e18684: call 0xe25f60 */
  esp -= 4; W32(esp, 0xe18689u); SPILL(); f_e25f60(); if (g_unwind) return; RELOAD();
/* e18689: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* e1868c: cmp eax, 0xd */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1868f: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* e18692: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* e18696: je 0xe1873a */
  if (zf) goto L_e1873a;
L_e1869c: /* e1869c: mov ecx, dword ptr [ebx + 0x28] */
  ecx = R32((uint32_t)(ebx + 0x28u));
/* e1869f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e186a1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e186a2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e186a3: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e186a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e186a7: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0xe186adu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e186ad: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e186af: je 0xe18737 */
  if (zf) goto L_e18737;
L_e186b5: /* e186b5: mov ecx, dword ptr [0xe6590c] */
  ecx = R32((uint32_t)(0xe6590cu));
/* e186bb: cmp dword ptr [ecx], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e186bd: je 0xe197b0 */
  if (zf) goto L_e197b0;
L_e186c3: /* e186c3: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e186c6: call dword ptr [0xe65b54] */
  esp -= 4; W32(esp, 0xe186ccu); SPILL(); f_6c4c78(); if (g_unwind) return; /* Engine!?IsRealtime@UViewport@@QAEHXZ */ RELOAD();
/* e186cc: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e186ce: jne 0xe197b0 */
  if (!zf) goto L_e197b0;
L_e186d4: /* e186d4: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e186d7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e186d9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e186db: call dword ptr [edx + 0xa4] */
  { uint32_t t = R32((uint32_t)(edx + 0xa4u)); esp -= 4; W32(esp, 0xe186e1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e186e1: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e186e4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e186e6: call dword ptr [eax + 0x84] */
  { uint32_t t = R32((uint32_t)(eax + 0x84u)); esp -= 4; W32(esp, 0xe186ecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e186ec: xor eax, eax */
  eax = 0;
/* e186ee: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e186f1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e186f8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e186f9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e186fa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e186fb: mov esp, ebp */
  esp = ebp;
/* e186fd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e186fe: ret 0xc */
  esp += 16; SPILL(); return;
L_e18737: /* e18737: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
L_e1873a: /* e1873a: cmp dword ptr [ebp + 8], 0x106 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x106u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e18741: jne 0xe197b0 */
  if (!zf) goto L_e197b0;
L_e18747: /* e18747: mov ecx, dword ptr [0xe65920] */
  ecx = R32((uint32_t)(0xe65920u));
/* e1874d: cmp dword ptr [ecx], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1874f: je 0xe1876d */
  if (zf) goto L_e1876d;
L_e18751: /* e18751: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* e18754: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e18755: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e18756: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e18759: mov ecx, dword ptr [eax + 0x194] */
  ecx = R32((uint32_t)(eax + 0x194u));
/* e1875f: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* e18762: push 0x106 */
  { uint32_t v = 0x106u; esp -= 4; W32(esp, v); }
/* e18767: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e18768: jmp 0xe18bd6 */
  goto L_e18bd6;
L_e1876d: /* e1876d: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* e18770: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* e18773: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e18774: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e18775: mov eax, dword ptr [edx + 0x194] */
  eax = R32((uint32_t)(edx + 0x194u));
/* e1877b: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e1877e: push 0x106 */
  { uint32_t v = 0x106u; esp -= 4; W32(esp, v); }
/* e18783: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e18784: call dword ptr [0xe65d54] */
  esp -= 4; W32(esp, 0xe1878au); SPILL(); call_ind(R32(0xe65d54u)); if (g_unwind) return; /* USER32!DefWindowProcA */ RELOAD();
/* e1878a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e1878d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e18794: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e18795: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e18796: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e18797: mov esp, ebp */
  esp = ebp;
/* e18799: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e1879a: ret 0xc */
  esp += 16; SPILL(); return;
L_e18bd6: /* e18bd6: call dword ptr [0xe65d58] */
  esp -= 4; W32(esp, 0xe18bdcu); SPILL(); call_ind(R32(0xe65d58u)); if (g_unwind) return; /* USER32!DefWindowProcW */ RELOAD();
/* e18bdc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e18bdf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e18be6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e18be7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e18be8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e18be9: mov esp, ebp */
  esp = ebp;
/* e18beb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e18bec: ret 0xc */
  esp += 16; SPILL(); return;
L_e197b0: /* e197b0: xor eax, eax */
  eax = 0;
/* e197b2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e197b5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e197bc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e197bd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e197be: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e197bf: mov esp, ebp */
  esp = ebp;
/* e197c1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e197c2: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_e18701(void) {
  LOAD_REGS();
L_e18701: /* e18701: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* e18704: push 0xe5ec4c */
  { uint32_t v = 0xe5ec4cu; esp -= 4; W32(esp, v); }
/* e18709: lea edx, [ebp - 0xa4] */
  edx = (uint32_t)(ebp + 0xffffff5cu);
/* e1870f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e18710: mov dword ptr [ebp - 0xa4], ecx */
  W32((uint32_t)(ebp + 0xffffff5cu), ecx);
/* e18716: call 0xe25f60 */
  esp -= 4; W32(esp, 0xe1871bu); SPILL(); f_e25f60(); if (g_unwind) return; RELOAD();
  SPILL(); f_e1871b(); return;
}

void f_e1871b(void) {
  LOAD_REGS();
L_e1871b: /* e1871b: push 0xe2efc0 */
  { uint32_t v = 0xe2efc0u; esp -= 4; W32(esp, v); }
/* e18720: push 0xe633b4 */
  { uint32_t v = 0xe633b4u; esp -= 4; W32(esp, v); }
/* e18725: call dword ptr [0xe65a5c] */
  esp -= 4; W32(esp, 0xe1872bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* e1872b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e1872e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e18730: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e18732: call 0xe25f60 */
  esp -= 4; W32(esp, 0xe18737u); SPILL(); f_e25f60(); if (g_unwind) return; RELOAD();
/* e18737: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* e1873a: cmp dword ptr [ebp + 8], 0x106 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x106u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e18741: jne 0xe197b0 */
  if (!zf) goto L_e197b0;
L_e18747: /* e18747: mov ecx, dword ptr [0xe65920] */
  ecx = R32((uint32_t)(0xe65920u));
/* e1874d: cmp dword ptr [ecx], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1874f: je 0xe1876d */
  if (zf) goto L_e1876d;
L_e18751: /* e18751: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* e18754: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e18755: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e18756: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e18759: mov ecx, dword ptr [eax + 0x194] */
  ecx = R32((uint32_t)(eax + 0x194u));
/* e1875f: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* e18762: push 0x106 */
  { uint32_t v = 0x106u; esp -= 4; W32(esp, v); }
/* e18767: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e18768: jmp 0xe18bd6 */
  goto L_e18bd6;
L_e1876d: /* e1876d: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* e18770: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* e18773: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e18774: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e18775: mov eax, dword ptr [edx + 0x194] */
  eax = R32((uint32_t)(edx + 0x194u));
/* e1877b: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e1877e: push 0x106 */
  { uint32_t v = 0x106u; esp -= 4; W32(esp, v); }
/* e18783: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e18784: call dword ptr [0xe65d54] */
  esp -= 4; W32(esp, 0xe1878au); SPILL(); call_ind(R32(0xe65d54u)); if (g_unwind) return; /* USER32!DefWindowProcA */ RELOAD();
/* e1878a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e1878d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e18794: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e18795: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e18796: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e18797: mov esp, ebp */
  esp = ebp;
/* e18799: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e1879a: ret 0xc */
  esp += 16; SPILL(); return;
L_e18bd6: /* e18bd6: call dword ptr [0xe65d58] */
  esp -= 4; W32(esp, 0xe18bdcu); SPILL(); call_ind(R32(0xe65d58u)); if (g_unwind) return; /* USER32!DefWindowProcW */ RELOAD();
/* e18bdc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e18bdf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e18be6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e18be7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e18be8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e18be9: mov esp, ebp */
  esp = ebp;
/* e18beb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e18bec: ret 0xc */
  esp += 16; SPILL(); return;
L_e197b0: /* e197b0: xor eax, eax */
  eax = 0;
/* e197b2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e197b5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e197bc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e197bd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e197be: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e197bf: mov esp, ebp */
  esp = ebp;
/* e197c1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e197c2: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_e189de(void) {
  LOAD_REGS();
L_e189de: /* e189de: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* e189e1: push 0xe5ec4c */
  { uint32_t v = 0xe5ec4cu; esp -= 4; W32(esp, v); }
/* e189e6: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* e189ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e189ed: mov dword ptr [ebp - 0xa0], eax */
  W32((uint32_t)(ebp + 0xffffff60u), eax);
/* e189f3: call 0xe25f60 */
  esp -= 4; W32(esp, 0xe189f8u); SPILL(); f_e25f60(); if (g_unwind) return; RELOAD();
  SPILL(); f_e189f8(); return;
}

void f_e189f8(void) {
  LOAD_REGS();
L_e189f8: /* e189f8: push 0xe2ef90 */
  { uint32_t v = 0xe2ef90u; esp -= 4; W32(esp, v); }
/* e189fd: push 0xe633fc */
  { uint32_t v = 0xe633fcu; esp -= 4; W32(esp, v); }
/* e18a02: call dword ptr [0xe65a5c] */
  esp -= 4; W32(esp, 0xe18a08u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* e18a08: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e18a0b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e18a0d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e18a0f: call 0xe25f60 */
  esp -= 4; W32(esp, 0xe18a14u); SPILL(); f_e25f60(); if (g_unwind) return; RELOAD();
/* e18a14: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* e18a17: cmp ax, 1 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x1u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* e18a1b: mov byte ptr [ebp - 4], 0xf */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xfu);
/* e18a1f: je 0xe18a7e */
  if (zf) goto L_e18a7e;
L_e18a21: /* e18a21: mov ecx, dword ptr [0xe658a0] */
  ecx = R32((uint32_t)(0xe658a0u));
/* e18a27: cmp dword ptr [ecx], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e18a29: jne 0xe18a7e */
  if (!zf) goto L_e18a7e;
L_e18a2b: /* e18a2b: mov edx, dword ptr [0xe65920] */
  edx = R32((uint32_t)(0xe65920u));
/* e18a31: cmp dword ptr [edx], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e18a33: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e18a34: je 0xe18a50 */
  if (zf) goto L_e18a50;
L_e18a36: /* e18a36: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* e18a39: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* e18a3c: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* e18a3f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e18a40: mov eax, dword ptr [edx + 0x194] */
  eax = R32((uint32_t)(edx + 0x194u));
/* e18a46: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e18a47: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e18a4a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e18a4b: jmp 0xe18bd6 */
  goto L_e18bd6;
L_e18a50: /* e18a50: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* e18a53: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e18a56: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e18a59: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e18a5a: mov edx, dword ptr [ecx + 0x194] */
  edx = R32((uint32_t)(ecx + 0x194u));
/* e18a60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e18a61: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* e18a64: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e18a65: call dword ptr [0xe65d54] */
  esp -= 4; W32(esp, 0xe18a6bu); SPILL(); call_ind(R32(0xe65d54u)); if (g_unwind) return; /* USER32!DefWindowProcA */ RELOAD();
/* e18a6b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e18a6e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e18a75: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e18a76: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e18a77: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e18a78: mov esp, ebp */
  esp = ebp;
/* e18a7a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e18a7b: ret 0xc */
  esp += 16; SPILL(); return;
L_e18a7e: /* e18a7e: mov ecx, dword ptr [0xe6590c] */
  ecx = R32((uint32_t)(0xe6590cu));
/* e18a84: cmp dword ptr [ecx], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e18a86: je 0xe197b0 */
  if (zf) goto L_e197b0;
L_e18a8c: /* e18a8c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e18a8f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e18a91: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0xe18a97u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e18a97: xor eax, eax */
  eax = 0;
/* e18a99: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e18a9c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e18aa3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e18aa4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e18aa5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e18aa6: mov esp, ebp */
  esp = ebp;
/* e18aa8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e18aa9: ret 0xc */
  esp += 16; SPILL(); return;
L_e18bd6: /* e18bd6: call dword ptr [0xe65d58] */
  esp -= 4; W32(esp, 0xe18bdcu); SPILL(); call_ind(R32(0xe65d58u)); if (g_unwind) return; /* USER32!DefWindowProcW */ RELOAD();
/* e18bdc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e18bdf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e18be6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e18be7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e18be8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e18be9: mov esp, ebp */
  esp = ebp;
/* e18beb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e18bec: ret 0xc */
  esp += 16; SPILL(); return;
L_e197b0: /* e197b0: xor eax, eax */
  eax = 0;
/* e197b2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e197b5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e197bc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e197bd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e197be: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e197bf: mov esp, ebp */
  esp = ebp;
/* e197c1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e197c2: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_e18aac(void) {
  LOAD_REGS();
L_e18aac: /* e18aac: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* e18aaf: push 0xe5ec4c */
  { uint32_t v = 0xe5ec4cu; esp -= 4; W32(esp, v); }
/* e18ab4: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* e18ab7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e18ab8: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* e18abb: call 0xe25f60 */
  esp -= 4; W32(esp, 0xe18ac0u); SPILL(); f_e25f60(); if (g_unwind) return; RELOAD();
  SPILL(); f_e18ac0(); return;
}

void f_e18ac0(void) {
  LOAD_REGS();
L_e18ac0: /* e18ac0: push 0xe2ef70 */
  { uint32_t v = 0xe2ef70u; esp -= 4; W32(esp, v); }
/* e18ac5: push 0xe63404 */
  { uint32_t v = 0xe63404u; esp -= 4; W32(esp, v); }
/* e18aca: call dword ptr [0xe65a5c] */
  esp -= 4; W32(esp, 0xe18ad0u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* e18ad0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e18ad3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e18ad5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e18ad7: call 0xe25f60 */
  esp -= 4; W32(esp, 0xe18adcu); SPILL(); f_e25f60(); if (g_unwind) return; RELOAD();
/* e18adc: mov eax, 1 */
  eax = 0x1u;
/* e18ae1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e18ae4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e18aeb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e18aec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e18aed: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e18aee: mov esp, ebp */
  esp = ebp;
/* e18af0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e18af1: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_e18b19(void) {
  LOAD_REGS();
L_e18b19: /* e18b19: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* e18b1c: push 0xe5ec4c */
  { uint32_t v = 0xe5ec4cu; esp -= 4; W32(esp, v); }
/* e18b21: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* e18b24: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e18b25: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* e18b28: call 0xe25f60 */
  esp -= 4; W32(esp, 0xe18b2du); SPILL(); f_e25f60(); if (g_unwind) return; RELOAD();
  SPILL(); f_e18b2d(); return;
}

void f_e18b2d(void) {
  LOAD_REGS();
L_e18b2d: /* e18b2d: push 0xe2ef4c */
  { uint32_t v = 0xe2ef4cu; esp -= 4; W32(esp, v); }
/* e18b32: push 0xe63434 */
  { uint32_t v = 0xe63434u; esp -= 4; W32(esp, v); }
/* e18b37: call dword ptr [0xe65a5c] */
  esp -= 4; W32(esp, 0xe18b3du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* e18b3d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e18b40: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e18b42: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e18b44: call 0xe25f60 */
  esp -= 4; W32(esp, 0xe18b49u); SPILL(); f_e25f60(); if (g_unwind) return; RELOAD();
/* e18b49: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* e18b4c: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e18b4e: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* e18b51: mov byte ptr [ebp - 4], 0x2b */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2bu);
/* e18b55: je 0xe197b0 */
  if (zf) goto L_e197b0;
L_e18b5b: /* e18b5b: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e18b5e: jne 0xe18b92 */
  if (!zf) goto L_e18b92;
L_e18b60: /* e18b60: mov edx, dword ptr [0xe65924] */
  edx = R32((uint32_t)(0xe65924u));
/* e18b66: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e18b68: push 0xe634d0 */
  { uint32_t v = 0xe634d0u; esp -= 4; W32(esp, v); }
/* e18b6d: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* e18b72: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e18b73: call dword ptr [0xe65928] */
  esp -= 4; W32(esp, 0xe18b79u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* e18b79: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e18b7c: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* e18b7f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e18b82: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e18b89: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e18b8a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e18b8b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e18b8c: mov esp, ebp */
  esp = ebp;
/* e18b8e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e18b8f: ret 0xc */
  esp += 16; SPILL(); return;
L_e18b92: /* e18b92: mov ecx, dword ptr [0xe65924] */
  ecx = R32((uint32_t)(0xe65924u));
/* e18b98: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e18b9a: push 0xe63504 */
  { uint32_t v = 0xe63504u; esp -= 4; W32(esp, v); }
/* e18b9f: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* e18ba4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e18ba5: call dword ptr [0xe65928] */
  esp -= 4; W32(esp, 0xe18babu); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* e18bab: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e18bae: mov eax, dword ptr [0xe65920] */
  eax = R32((uint32_t)(0xe65920u));
/* e18bb3: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e18bb5: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* e18bb8: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e18bbb: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e18bbd: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* e18bc0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e18bc1: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e18bc4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e18bc5: mov edx, dword ptr [ecx + 0x194] */
  edx = R32((uint32_t)(ecx + 0x194u));
/* e18bcb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e18bcc: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* e18bcf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e18bd0: je 0xe19bce */
  if (zf) goto L_e19bce;
L_e18bd6: /* e18bd6: call dword ptr [0xe65d58] */
  esp -= 4; W32(esp, 0xe18bdcu); SPILL(); call_ind(R32(0xe65d58u)); if (g_unwind) return; /* USER32!DefWindowProcW */ RELOAD();
/* e18bdc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e18bdf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e18be6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e18be7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e18be8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e18be9: mov esp, ebp */
  esp = ebp;
/* e18beb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e18bec: ret 0xc */
  esp += 16; SPILL(); return;
L_e197b0: /* e197b0: xor eax, eax */
  eax = 0;
/* e197b2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e197b5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e197bc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e197bd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e197be: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e197bf: mov esp, ebp */
  esp = ebp;
/* e197c1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e197c2: ret 0xc */
  esp += 16; SPILL(); return;
L_e19bce: /* e19bce: call dword ptr [0xe65d54] */
  esp -= 4; W32(esp, 0xe19bd4u); SPILL(); call_ind(R32(0xe65d54u)); if (g_unwind) return; /* USER32!DefWindowProcA */ RELOAD();
/* e19bd4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e19bd7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e19bd8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e19bd9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e19be0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e19be1: mov esp, ebp */
  esp = ebp;
/* e19be3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e19be4: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_e18bef(void) {
  LOAD_REGS();
L_e18bef: /* e18bef: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* e18bf2: push 0xe5ec4c */
  { uint32_t v = 0xe5ec4cu; esp -= 4; W32(esp, v); }
/* e18bf7: lea edx, [ebp - 0x64] */
  edx = (uint32_t)(ebp + 0xffffff9cu);
/* e18bfa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e18bfb: mov dword ptr [ebp - 0x64], ecx */
  W32((uint32_t)(ebp + 0xffffff9cu), ecx);
/* e18bfe: call 0xe25f60 */
  esp -= 4; W32(esp, 0xe18c03u); SPILL(); f_e25f60(); if (g_unwind) return; RELOAD();
  SPILL(); f_e18c03(); return;
}

void f_e18c03(void) {
  LOAD_REGS();
L_e18c03: /* e18c03: push 0xe2ef34 */
  { uint32_t v = 0xe2ef34u; esp -= 4; W32(esp, v); }
/* e18c08: push 0xe63528 */
  { uint32_t v = 0xe63528u; esp -= 4; W32(esp, v); }
/* e18c0d: call dword ptr [0xe65a5c] */
  esp -= 4; W32(esp, 0xe18c13u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* e18c13: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e18c16: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e18c18: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e18c1a: call 0xe25f60 */
  esp -= 4; W32(esp, 0xe18c1fu); SPILL(); f_e25f60(); if (g_unwind) return; RELOAD();
/* e18c1f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e18c22: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* e18c25: mov byte ptr [ebp - 4], 0x2d */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2du);
/* e18c29: call dword ptr [0xe65900] */
  esp -= 4; W32(esp, 0xe18c2fu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* e18c2f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e18c30: mov eax, dword ptr [0xe65924] */
  eax = R32((uint32_t)(0xe65924u));
/* e18c35: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e18c37: push 0xe63530 */
  { uint32_t v = 0xe63530u; esp -= 4; W32(esp, v); }
/* e18c3c: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* e18c41: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e18c42: call dword ptr [0xe65928] */
  esp -= 4; W32(esp, 0xe18c48u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* e18c48: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e18c4b: xor eax, eax */
  eax = 0;
/* e18c4d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e18c50: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e18c57: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e18c58: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e18c59: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e18c5a: mov esp, ebp */
  esp = ebp;
/* e18c5c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e18c5d: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_e18c60(void) {
  LOAD_REGS();
L_e18c60: /* e18c60: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* e18c63: push 0xe5ec4c */
  { uint32_t v = 0xe5ec4cu; esp -= 4; W32(esp, v); }
/* e18c68: lea eax, [ebp - 0x84] */
  eax = (uint32_t)(ebp + 0xffffff7cu);
/* e18c6e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e18c6f: mov dword ptr [ebp - 0x84], edx */
  W32((uint32_t)(ebp + 0xffffff7cu), edx);
/* e18c75: call 0xe25f60 */
  esp -= 4; W32(esp, 0xe18c7au); SPILL(); f_e25f60(); if (g_unwind) return; RELOAD();
  SPILL(); f_e18c7a(); return;
}

void f_e18c7a(void) {
  LOAD_REGS();
  goto L_e18c7a;
L_e18bcf: /* e18bcf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e18bd0: je 0xe19bce */
  if (zf) goto L_e19bce;
L_e18bd6: /* e18bd6: call dword ptr [0xe65d58] */
  esp -= 4; W32(esp, 0xe18bdcu); SPILL(); call_ind(R32(0xe65d58u)); if (g_unwind) return; /* USER32!DefWindowProcW */ RELOAD();
/* e18bdc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e18bdf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e18be6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e18be7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e18be8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e18be9: mov esp, ebp */
  esp = ebp;
/* e18beb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e18bec: ret 0xc */
  esp += 16; SPILL(); return;
L_e18c7a: /* e18c7a: push 0xe2ef0c */
  { uint32_t v = 0xe2ef0cu; esp -= 4; W32(esp, v); }
/* e18c7f: push 0xe6356c */
  { uint32_t v = 0xe6356cu; esp -= 4; W32(esp, v); }
/* e18c84: call dword ptr [0xe65a5c] */
  esp -= 4; W32(esp, 0xe18c8au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* e18c8a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e18c8d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e18c8f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e18c91: call 0xe25f60 */
  esp -= 4; W32(esp, 0xe18c96u); SPILL(); f_e25f60(); if (g_unwind) return; RELOAD();
/* e18c96: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* e18c99: mov eax, ecx */
  eax = ecx;
/* e18c9b: and eax, 0xfff0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfff0u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e18ca0: cmp eax, 0xf140 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xf140u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e18ca5: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* e18ca8: mov byte ptr [ebp - 4], 0x29 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x29u);
/* e18cac: je 0xe18d39 */
  if (zf) goto L_e18d39;
L_e18cb2: /* e18cb2: cmp eax, 0xf170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xf170u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e18cb7: je 0xe18d6a */
  if (zf) goto L_e18d6a;
L_e18cbd: /* e18cbd: cmp eax, 0xf030 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xf030u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e18cc2: jne 0xe18ce1 */
  if (!zf) goto L_e18ce1;
L_e18cc4: /* e18cc4: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e18cc7: call 0xe1101e */
  esp -= 4; W32(esp, 0xe18cccu); SPILL(); f_e1101e(); if (g_unwind) return; RELOAD();
/* e18ccc: xor eax, eax */
  eax = 0;
/* e18cce: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e18cd1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e18cd8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e18cd9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e18cda: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e18cdb: mov esp, ebp */
  esp = ebp;
/* e18cdd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e18cde: ret 0xc */
  esp += 16; SPILL(); return;
L_e18ce1: /* e18ce1: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* e18ce4: test byte ptr [edx + 0x1a8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x1a8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e18ceb: je 0xe18d19 */
  if (zf) goto L_e18d19;
L_e18ced: /* e18ced: cmp eax, 0xf040 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xf040u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e18cf2: je 0xe197b0 */
  if (zf) goto L_e197b0;
L_e18cf8: /* e18cf8: cmp eax, 0xf050 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xf050u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e18cfd: je 0xe197b0 */
  if (zf) goto L_e197b0;
L_e18d03: /* e18d03: cmp eax, 0xf130 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xf130u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e18d08: je 0xe197b0 */
  if (zf) goto L_e197b0;
L_e18d0e: /* e18d0e: cmp eax, 0xf150 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xf150u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e18d13: je 0xe197b0 */
  if (zf) goto L_e197b0;
L_e18d19: /* e18d19: mov eax, dword ptr [0xe65920] */
  eax = R32((uint32_t)(0xe65920u));
/* e18d1e: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* e18d20: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* e18d23: mov edx, dword ptr [edx + 0x194] */
  edx = R32((uint32_t)(edx + 0x194u));
/* e18d29: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e18d2a: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* e18d2d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e18d2e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* e18d31: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e18d32: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e18d34: jmp 0xe18bcf */
  goto L_e18bcf;
L_e18d39: /* e18d39: mov ecx, dword ptr [0xe65924] */
  ecx = R32((uint32_t)(0xe65924u));
/* e18d3f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e18d41: push 0xe63464 */
  { uint32_t v = 0xe63464u; esp -= 4; W32(esp, v); }
/* e18d46: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* e18d4b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e18d4c: call dword ptr [0xe65928] */
  esp -= 4; W32(esp, 0xe18d52u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* e18d52: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e18d55: xor eax, eax */
  eax = 0;
/* e18d57: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e18d5a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e18d61: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e18d62: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e18d63: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e18d64: mov esp, ebp */
  esp = ebp;
/* e18d66: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e18d67: ret 0xc */
  esp += 16; SPILL(); return;
L_e18d6a: /* e18d6a: mov eax, dword ptr [0xe65924] */
  eax = R32((uint32_t)(0xe65924u));
/* e18d6f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e18d71: push 0xe63494 */
  { uint32_t v = 0xe63494u; esp -= 4; W32(esp, v); }
/* e18d76: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* e18d7b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e18d7c: call dword ptr [0xe65928] */
  esp -= 4; W32(esp, 0xe18d82u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* e18d82: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e18d85: xor eax, eax */
  eax = 0;
/* e18d87: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e18d8a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e18d91: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e18d92: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e18d93: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e18d94: mov esp, ebp */
  esp = ebp;
/* e18d96: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e18d97: ret 0xc */
  esp += 16; SPILL(); return;
L_e197b0: /* e197b0: xor eax, eax */
  eax = 0;
/* e197b2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e197b5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e197bc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e197bd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e197be: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e197bf: mov esp, ebp */
  esp = ebp;
/* e197c1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e197c2: ret 0xc */
  esp += 16; SPILL(); return;
L_e19bce: /* e19bce: call dword ptr [0xe65d54] */
  esp -= 4; W32(esp, 0xe19bd4u); SPILL(); call_ind(R32(0xe65d54u)); if (g_unwind) return; /* USER32!DefWindowProcA */ RELOAD();
/* e19bd4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e19bd7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e19bd8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e19bd9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e19be0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e19be1: mov esp, ebp */
  esp = ebp;
/* e19be3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e19be4: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_e18d9a(void) {
  LOAD_REGS();
L_e18d9a: /* e18d9a: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* e18d9d: push 0xe5ec4c */
  { uint32_t v = 0xe5ec4cu; esp -= 4; W32(esp, v); }
/* e18da2: lea eax, [ebp - 0x80] */
  eax = (uint32_t)(ebp + 0xffffff80u);
/* e18da5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e18da6: mov dword ptr [ebp - 0x80], edx */
  W32((uint32_t)(ebp + 0xffffff80u), edx);
/* e18da9: call 0xe25f60 */
  esp -= 4; W32(esp, 0xe18daeu); SPILL(); f_e25f60(); if (g_unwind) return; RELOAD();
  SPILL(); f_e18dae(); return;
}

void f_e18dae(void) {
  LOAD_REGS();
  goto L_e18dae;
L_e18bae: /* e18bae: mov eax, dword ptr [0xe65920] */
  eax = R32((uint32_t)(0xe65920u));
/* e18bb3: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e18bb5: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* e18bb8: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e18bbb: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e18bbd: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* e18bc0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e18bc1: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e18bc4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e18bc5: mov edx, dword ptr [ecx + 0x194] */
  edx = R32((uint32_t)(ecx + 0x194u));
/* e18bcb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e18bcc: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* e18bcf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_e18bd0: /* e18bd0: je 0xe19bce */
  if (zf) goto L_e19bce;
L_e18bd6: /* e18bd6: call dword ptr [0xe65d58] */
  esp -= 4; W32(esp, 0xe18bdcu); SPILL(); call_ind(R32(0xe65d58u)); if (g_unwind) return; /* USER32!DefWindowProcW */ RELOAD();
/* e18bdc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e18bdf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e18be6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e18be7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e18be8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e18be9: mov esp, ebp */
  esp = ebp;
/* e18beb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e18bec: ret 0xc */
  esp += 16; SPILL(); return;
L_e18dae: /* e18dae: push 0xe2eee8 */
  { uint32_t v = 0xe2eee8u; esp -= 4; W32(esp, v); }
/* e18db3: push 0xe634c8 */
  { uint32_t v = 0xe634c8u; esp -= 4; W32(esp, v); }
/* e18db8: call dword ptr [0xe65a5c] */
  esp -= 4; W32(esp, 0xe18dbeu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* e18dbe: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e18dc1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e18dc3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e18dc5: call 0xe25f60 */
  esp -= 4; W32(esp, 0xe18dcau); SPILL(); f_e25f60(); if (g_unwind) return; RELOAD();
/* e18dca: cmp eax, 0x312 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x312u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e18dcf: ja 0xe19ba2 */
  if ((!cf && !zf)) goto L_e19ba2;
L_e18dd5: /* e18dd5: je 0xe197b0 */
  if (zf) goto L_e197b0;
L_e18ddb: /* e18ddb: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* e18dde: lea esi, [eax - 0x200] */
  esi = (uint32_t)(eax + 0xfffffe00u);
/* e18de4: cmp esi, 0x12 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x12u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e18de7: ja 0xe19ba5 */
  if ((!cf && !zf)) goto L_e19ba5;
L_e18ded: /* e18ded: movzx esi, byte ptr [esi + 0xe19db0] */
  esi = (uint32_t)(R8((uint32_t)(esi + 0xe19db0u)));
/* e18df4: jmp dword ptr [esi*4 + 0xe19d90] */
  switch (R32((uint32_t)(esi*4 + 0xe19d90u))) {
    case 0xe18dfbu: goto L_e18dfb;
    case 0xe18e68u: goto L_e18e68;
    case 0xe191a2u: goto L_e191a2;
    case 0xe193c9u: goto L_e193c9;
    case 0xe19451u: goto L_e19451;
    case 0xe194cbu: goto L_e194cb;
    case 0xe195c3u: goto L_e195c3;
    case 0xe19ba5u: goto L_e19ba5;
    default: guest_badjump(0xe18df4, R32((uint32_t)(esi*4 + 0xe19d90u))); return;
  }
L_e18dfb: /* e18dfb: mov ecx, dword ptr [0xe6590c] */
  ecx = R32((uint32_t)(0xe6590cu));
/* e18e01: cmp dword ptr [ecx], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e18e03: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* e18e06: je 0xe18e53 */
  if (zf) goto L_e18e53;
L_e18e08: /* e18e08: cmp dword ptr [edx + 0x88], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x88u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e18e0e: je 0xe18e53 */
  if (zf) goto L_e18e53;
L_e18e10: /* e18e10: cmp dword ptr [edx + 0x8c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x8cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e18e16: je 0xe18e53 */
  if (zf) goto L_e18e53;
L_e18e18: /* e18e18: test byte ptr [edx + 0x1a8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x1a8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e18e1f: jne 0xe18e53 */
  if (!zf) goto L_e18e53;
L_e18e21: /* e18e21: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* e18e24: mov ecx, dword ptr [ebx + 0x28] */
  ecx = R32((uint32_t)(ebx + 0x28u));
/* e18e27: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* e18e29: mov edi, eax */
  edi = eax;
/* e18e2b: shr edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* e18e2e: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* e18e31: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* e18e34: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e18e37: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* e18e3a: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* e18e3e: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* e18e41: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* e18e44: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e18e47: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* e18e4c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e18e4d: call dword ptr [esi + 0x98] */
  { uint32_t t = R32((uint32_t)(esi + 0x98u)); esp -= 4; W32(esp, 0xe18e53u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e18e53: /* e18e53: xor eax, eax */
  eax = 0;
/* e18e55: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e18e58: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e18e5f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e18e60: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e18e61: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e18e62: mov esp, ebp */
  esp = ebp;
/* e18e64: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e18e65: ret 0xc */
  esp += 16; SPILL(); return;
L_e18e68: /* e18e68: mov ecx, dword ptr [0xe6590c] */
  ecx = R32((uint32_t)(0xe6590cu));
/* e18e6e: cmp dword ptr [ecx], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e18e70: mov byte ptr [ebp - 4], 0x11 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x11u);
/* e18e74: je 0xe1917a */
  if (zf) goto L_e1917a;
L_e18e7a: /* e18e7a: cmp dword ptr [ebx + 0xc8], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0xc8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e18e80: jne 0xe1917a */
  if (!zf) goto L_e1917a;
L_e18e86: /* e18e86: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e18e89: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* e18e8c: mov edx, dword ptr [eax + 0x348] */
  edx = R32((uint32_t)(eax + 0x348u));
/* e18e92: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e18e93: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e18e96: lea edx, [eax + 0x17c] */
  edx = (uint32_t)(eax + 0x17cu);
/* e18e9c: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* e18e9e: mov esi, esp */
  esi = esp;
/* e18ea0: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* e18ea2: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* e18ea5: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* e18ea8: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* e18eab: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* e18eae: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e18eb1: lea edx, [eax + 0x170] */
  edx = (uint32_t)(eax + 0x170u);
/* e18eb7: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* e18eb9: mov esi, esp */
  esi = esp;
/* e18ebb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e18ebc: lea eax, [ecx + 0xd0] */
  eax = (uint32_t)(ecx + 0xd0u);
/* e18ec2: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* e18ec4: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* e18ec7: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* e18eca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e18ecb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e18ecc: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* e18ecf: lea ecx, [ebp - 0x388] */
  ecx = (uint32_t)(ebp + 0xfffffc78u);
/* e18ed5: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* e18ed8: call dword ptr [0xe65b80] */
  esp -= 4; W32(esp, 0xe18edeu); SPILL(); f_6cb2cb(); if (g_unwind) return; /* Engine!??0FCameraSceneNode@@QAE@PAVUViewport@@PAVFRenderTarget@@PAVAActor@@VFVector@@VFRotator@@M@Z */ RELOAD();
/* e18ede: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e18ee1: add ecx, 0xd0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xd0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e18ee7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e18ee9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e18eea: lea ecx, [ebp - 0x1a4] */
  ecx = (uint32_t)(ebp + 0xfffffe5cu);
/* e18ef0: mov byte ptr [ebp - 4], 0x12 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x12u);
/* e18ef4: call dword ptr [0xe65b7c] */
  esp -= 4; W32(esp, 0xe18efau); SPILL(); f_6cbd48(); if (g_unwind) return; /* Engine!??0FCanvasUtil@@QAE@PAVFRenderTarget@@PAVFRenderInterface@@@Z */ RELOAD();
/* e18efa: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* e18efd: movzx edx, ax */
  edx = (uint32_t)((eax & 0xffffu));
/* e18f00: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* e18f03: shr eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* e18f06: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* e18f09: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* e18f0c: lea eax, [ebp - 0xcc] */
  eax = (uint32_t)(ebp + 0xffffff34u);
/* e18f12: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e18f15: fstp dword ptr [ebp - 0xcc] */
  WF32((uint32_t)(ebp + 0xffffff34u), ST0); FPOP();
/* e18f1b: lea ecx, [ebp - 0x150] */
  ecx = (uint32_t)(ebp + 0xfffffeb0u);
/* e18f21: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* e18f24: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* e18f27: mov byte ptr [ebp - 4], 0x13 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x13u);
/* e18f2b: mov dword ptr [ebp - 0xc4], 0 */
  W32((uint32_t)(ebp + 0xffffff3cu), 0x0u);
/* e18f35: fstp dword ptr [ebp - 0xc8] */
  WF32((uint32_t)(ebp + 0xffffff38u), ST0); FPOP();
/* e18f3b: mov dword ptr [ebp - 0xc0], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff40u), 0x3f800000u);
/* e18f45: mov dword ptr [ebp - 0x20], esp */
  W32((uint32_t)(ebp + 0xffffffe0u), esp);
/* e18f48: mov eax, esp */
  eax = esp;
/* e18f4a: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* e18f4d: mov esi, dword ptr [ebp - 0x3c] */
  esi = R32((uint32_t)(ebp + 0xffffffc4u));
/* e18f50: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* e18f53: lea edi, [ebp - 0x98] */
  edi = (uint32_t)(ebp + 0xffffff68u);
/* e18f59: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* e18f5b: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* e18f5d: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* e18f5f: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* e18f62: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* e18f64: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* e18f67: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* e18f69: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* e18f6c: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* e18f6f: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* e18f72: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* e18f75: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* e18f78: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* e18f7b: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* e18f7e: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* e18f81: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* e18f84: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* e18f86: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* e18f88: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* e18f8a: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* e18f8c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e18f8e: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* e18f91: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* e18f94: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* e18f97: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* e18f9a: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* e18f9d: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* e18fa0: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* e18fa3: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* e18fa6: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* e18fa8: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* e18faa: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* e18fac: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* e18fae: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e18fb0: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* e18fb3: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* e18fb6: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* e18fb9: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* e18fbc: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* e18fbf: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* e18fc2: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* e18fc5: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* e18fc8: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* e18fca: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* e18fcc: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* e18fce: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* e18fd0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e18fd2: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* e18fd4: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* e18fd6: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* e18fd8: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* e18fdb: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* e18fde: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* e18fe1: mov ecx, dword ptr [ebp - 0x98] */
  ecx = R32((uint32_t)(ebp + 0xffffff68u));
/* e18fe7: mov edx, eax */
  edx = eax;
/* e18fe9: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* e18feb: mov ecx, dword ptr [ebp - 0x94] */
  ecx = R32((uint32_t)(ebp + 0xffffff6cu));
/* e18ff1: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* e18ff4: mov ecx, dword ptr [ebp - 0x90] */
  ecx = R32((uint32_t)(ebp + 0xffffff70u));
/* e18ffa: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* e18ffd: mov edx, dword ptr [ebp - 0x8c] */
  edx = R32((uint32_t)(ebp + 0xffffff74u));
/* e19003: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* e19006: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* e19009: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e1900a: lea ecx, [ebp - 0x388] */
  ecx = (uint32_t)(ebp + 0xfffffc78u);
/* e19010: call dword ptr [0xe65b78] */
  esp -= 4; W32(esp, 0xe19016u); SPILL(); f_6c7018(); if (g_unwind) return; /* Engine!?Deproject@FSceneNode@@QAE?AVFVector@@VFPlane@@@Z */ RELOAD();
/* e19016: mov ecx, dword ptr [ebx + 0x28] */
  ecx = R32((uint32_t)(ebx + 0x28u));
/* e19019: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e1901b: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* e1901e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e1901f: call dword ptr [edx + 0xb0] */
  { uint32_t t = R32((uint32_t)(edx + 0xb0u)); esp -= 4; W32(esp, 0xe19025u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e19025: lea ecx, [ebp - 0x1a4] */
  ecx = (uint32_t)(ebp + 0xfffffe5cu);
/* e1902b: mov byte ptr [ebp - 4], 0x12 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x12u);
/* e1902f: call dword ptr [0xe65b74] */
  esp -= 4; W32(esp, 0xe19035u); SPILL(); f_6caac4(); if (g_unwind) return; /* Engine!??1FCanvasUtil@@QAE@XZ */ RELOAD();
/* e19035: lea ecx, [ebp - 0x388] */
  ecx = (uint32_t)(ebp + 0xfffffc78u);
/* e1903b: mov byte ptr [ebp - 4], 0x11 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x11u);
/* e1903f: call dword ptr [0xe65b70] */
  esp -= 4; W32(esp, 0xe19045u); SPILL(); f_6c82c9(); if (g_unwind) return; /* Engine!??1FCameraSceneNode@@UAE@XZ */ RELOAD();
/* e19045: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e19048: mov edx, dword ptr [ecx + 0x19c] */
  edx = R32((uint32_t)(ecx + 0x19cu));
/* e1904e: mov esi, dword ptr [0xe65d5c] */
  esi = R32((uint32_t)(0xe65d5cu));
/* e19054: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e19055: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xe19057u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e19057: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e19058: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xe1905au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e1905a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e1905b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xe1905du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e1905d: mov ecx, dword ptr [0xe65920] */
  ecx = R32((uint32_t)(0xe65920u));
/* e19063: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e19065: xor esi, esi */
  esi = 0;
/* e19067: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e19069: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e1906a: push 0x8010 */
  { uint32_t v = 0x8010u; esp -= 4; W32(esp, v); }
/* e1906f: push 0x111 */
  { uint32_t v = 0x111u; esp -= 4; W32(esp, v); }
/* e19074: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e19075: je 0xe1907f */
  if (zf) goto L_e1907f;
L_e19077: /* e19077: call dword ptr [0xe65df8] */
  esp -= 4; W32(esp, 0xe1907du); SPILL(); call_ind(R32(0xe65df8u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* e1907d: jmp 0xe19085 */
  goto L_e19085;
L_e1907f: /* e1907f: call dword ptr [0xe65dfc] */
  esp -= 4; W32(esp, 0xe19085u); SPILL(); call_ind(R32(0xe65dfcu)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
L_e19085: /* e19085: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* e19088: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e1908b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e1908c: call 0xe110be */
  esp -= 4; W32(esp, 0xe19091u); SPILL(); f_e110be(); if (g_unwind) return; RELOAD();
/* e19091: mov ecx, dword ptr [ebx + 0x28] */
  ecx = R32((uint32_t)(ebx + 0x28u));
/* e19094: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* e19097: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* e19099: mov ebx, edx */
  ebx = edx;
/* e1909b: shr ebx, 0x10 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* e1909e: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* e190a1: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* e190a4: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e190a7: movzx edx, dx */
  edx = (uint32_t)((edx & 0xffffu));
/* e190aa: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* e190ae: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* e190b1: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* e190b4: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e190b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e190b8: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e190bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e190bc: call dword ptr [edi + 0x98] */
  { uint32_t t = R32((uint32_t)(edi + 0x98u)); esp -= 4; W32(esp, 0xe190c2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e190c2: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e190c5: cmp eax, 0x201 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x201u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e190ca: jne 0xe190e4 */
  if (!zf) goto L_e190e4;
L_e190cc: /* e190cc: mov dword ptr [0xe64910], esi */
  W32((uint32_t)(0xe64910u), esi);
/* e190d2: call dword ptr [0xe65d60] */
  esp -= 4; W32(esp, 0xe190d8u); SPILL(); call_ind(R32(0xe65d60u)); if (g_unwind) return; /* USER32!GetMessageTime */ RELOAD();
/* e190d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e190d9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e190db: mov dword ptr [0xe6490c], eax */
  W32((uint32_t)(0xe6490cu), eax);
/* e190e0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e190e2: jmp 0xe19120 */
  goto L_e19120;
L_e190e4: /* e190e4: cmp eax, 0x204 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x204u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e190e9: jne 0xe19103 */
  if (!zf) goto L_e19103;
L_e190eb: /* e190eb: mov dword ptr [0xe64908], esi */
  W32((uint32_t)(0xe64908u), esi);
/* e190f1: call dword ptr [0xe65d60] */
  esp -= 4; W32(esp, 0xe190f7u); SPILL(); call_ind(R32(0xe65d60u)); if (g_unwind) return; /* USER32!GetMessageTime */ RELOAD();
/* e190f7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e190f8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e190fa: mov dword ptr [0xe64904], eax */
  W32((uint32_t)(0xe64904u), eax);
/* e190ff: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e19101: jmp 0xe19120 */
  goto L_e19120;
L_e19103: /* e19103: cmp eax, 0x207 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x207u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e19108: jne 0xe19128 */
  if (!zf) goto L_e19128;
L_e1910a: /* e1910a: mov dword ptr [0xe64900], esi */
  W32((uint32_t)(0xe64900u), esi);
/* e19110: call dword ptr [0xe65d60] */
  esp -= 4; W32(esp, 0xe19116u); SPILL(); call_ind(R32(0xe65d60u)); if (g_unwind) return; /* USER32!GetMessageTime */ RELOAD();
/* e19116: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e19117: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e19119: mov dword ptr [0xe648fc], eax */
  W32((uint32_t)(0xe648fcu), eax);
/* e1911e: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
L_e19120: /* e19120: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e19123: call 0xe111c2 */
  esp -= 4; W32(esp, 0xe19128u); SPILL(); f_e111c2(); if (g_unwind) return; RELOAD();
L_e19128: /* e19128: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e1912b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e1912d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e1912f: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xe19132u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e19132: xor eax, eax */
  eax = 0;
/* e19134: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e19137: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e1913e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e1913f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e19140: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e19141: mov esp, ebp */
  esp = ebp;
/* e19143: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e19144: ret 0xc */
  esp += 16; SPILL(); return;
L_e1917a: /* e1917a: mov edx, dword ptr [0xe65920] */
  edx = R32((uint32_t)(0xe65920u));
/* e19180: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e19182: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* e19185: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* e19188: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1918a: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* e1918d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e1918e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e19191: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e19192: mov ecx, dword ptr [eax + 0x194] */
  ecx = R32((uint32_t)(eax + 0x194u));
/* e19198: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e19199: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* e1919c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e1919d: jmp 0xe18bd0 */
  goto L_e18bd0;
L_e191a2: /* e191a2: mov eax, dword ptr [0xe6590c] */
  eax = R32((uint32_t)(0xe6590cu));
/* e191a7: cmp dword ptr [eax], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e191a9: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* e191ac: mov byte ptr [ebp - 4], 0x17 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x17u);
/* e191b0: je 0xe18bae */
  if (zf) goto L_e18bae;
L_e191b6: /* e191b6: cmp dword ptr [ebx + 0xc8], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0xc8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e191bc: jne 0xe18bae */
  if (!zf) goto L_e18bae;
L_e191c2: /* e191c2: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* e191c5: mov dword ptr [ebp - 0xb0], edi */
  W32((uint32_t)(ebp + 0xffffff50u), edi);
/* e191cb: mov dword ptr [ebp - 0xac], edi */
  W32((uint32_t)(ebp + 0xffffff54u), edi);
/* e191d1: mov eax, dword ptr [edx + 0x194] */
  eax = R32((uint32_t)(edx + 0x194u));
/* e191d7: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* e191dd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e191de: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e191e1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e191e2: call dword ptr [0xe65d7c] */
  esp -= 4; W32(esp, 0xe191e8u); SPILL(); call_ind(R32(0xe65d7cu)); if (g_unwind) return; /* USER32!ClientToScreen */ RELOAD();
/* e191e8: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* e191eb: mov eax, dword ptr [edx + 0x1c0] */
  eax = R32((uint32_t)(edx + 0x1c0u));
/* e191f1: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e191f4: je 0xe19205 */
  if (zf) goto L_e19205;
L_e191f6: /* e191f6: mov ecx, dword ptr [ebp - 0xb0] */
  ecx = R32((uint32_t)(ebp + 0xffffff50u));
/* e191fc: mov ebx, eax */
  ebx = eax;
/* e191fe: sub ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* e19200: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* e19203: jmp 0xe1920b */
  goto L_e1920b;
L_e19205: /* e19205: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* e19208: movzx ebx, cx */
  ebx = (uint32_t)((ecx & 0xffffu));
L_e1920b: /* e1920b: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1920e: je 0xe1921e */
  if (zf) goto L_e1921e;
L_e19210: /* e19210: mov edi, dword ptr [edx + 0x1c4] */
  edi = R32((uint32_t)(edx + 0x1c4u));
/* e19216: sub edi, dword ptr [ebp - 0xac] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffff54u)));
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* e1921c: jmp 0xe19223 */
  goto L_e19223;
L_e1921e: /* e1921e: shr ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* e19221: mov edi, ecx */
  edi = ecx;
L_e19223: /* e19223: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e19226: cmp eax, 0x202 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x202u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1922b: jne 0xe1923c */
  if (!zf) goto L_e1923c;
L_e1922d: /* e1922d: call dword ptr [0xe65d60] */
  esp -= 4; W32(esp, 0xe19233u); SPILL(); call_ind(R32(0xe65d60u)); if (g_unwind) return; /* USER32!GetMessageTime */ RELOAD();
/* e19233: mov eax, 1 */
  eax = 0x1u;
/* e19238: mov esi, eax */
  esi = eax;
/* e1923a: jmp 0xe1925f */
  goto L_e1925f;
L_e1923c: /* e1923c: cmp eax, 0x208 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x208u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e19241: jne 0xe19252 */
  if (!zf) goto L_e19252;
L_e19243: /* e19243: call dword ptr [0xe65d60] */
  esp -= 4; W32(esp, 0xe19249u); SPILL(); call_ind(R32(0xe65d60u)); if (g_unwind) return; /* USER32!GetMessageTime */ RELOAD();
/* e19249: mov eax, 4 */
  eax = 0x4u;
/* e1924e: mov esi, eax */
  esi = eax;
/* e19250: jmp 0xe1925f */
  goto L_e1925f;
L_e19252: /* e19252: call dword ptr [0xe65d60] */
  esp -= 4; W32(esp, 0xe19258u); SPILL(); call_ind(R32(0xe65d60u)); if (g_unwind) return; /* USER32!GetMessageTime */ RELOAD();
/* e19258: mov eax, 2 */
  eax = 0x2u;
/* e1925d: mov esi, eax */
  esi = eax;
L_e1925f: /* e1925f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e19262: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e19264: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* e19266: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e19267: call 0xe111c2 */
  esp -= 4; W32(esp, 0xe1926cu); SPILL(); f_e111c2(); if (g_unwind) return; RELOAD();
/* e1926c: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* e1926f: mov ecx, dword ptr [edx + 0x6c] */
  ecx = R32((uint32_t)(edx + 0x6cu));
/* e19272: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e19274: call dword ptr [0xe65b8c] */
  esp -= 4; W32(esp, 0xe1927au); SPILL(); f_6cce4b(); if (g_unwind) return; /* Engine!?KeyDown@UInput@@QAEEH@Z */ RELOAD();
/* e1927a: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e1927c: jne 0xe192b5 */
  if (!zf) goto L_e192b5;
L_e1927e: /* e1927e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e19281: mov ecx, dword ptr [eax + 0x6c] */
  ecx = R32((uint32_t)(eax + 0x6cu));
/* e19284: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e19286: call dword ptr [0xe65b8c] */
  esp -= 4; W32(esp, 0xe1928cu); SPILL(); f_6cce4b(); if (g_unwind) return; /* Engine!?KeyDown@UInput@@QAEEH@Z */ RELOAD();
/* e1928c: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e1928e: jne 0xe192b5 */
  if (!zf) goto L_e192b5;
L_e19290: /* e19290: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e19293: mov ecx, dword ptr [ecx + 0x6c] */
  ecx = R32((uint32_t)(ecx + 0x6cu));
/* e19296: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e19298: call dword ptr [0xe65b8c] */
  esp -= 4; W32(esp, 0xe1929eu); SPILL(); f_6cce4b(); if (g_unwind) return; /* Engine!?KeyDown@UInput@@QAEEH@Z */ RELOAD();
/* e1929e: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e192a0: jne 0xe192b5 */
  if (!zf) goto L_e192b5;
L_e192a2: /* e192a2: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e192a5: test byte ptr [ecx + 0x1a8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x1a8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e192ac: jne 0xe1931e */
  if (!zf) goto L_e1931e;
L_e192ae: /* e192ae: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e192b0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e192b2: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xe192b5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e192b5: /* e192b5: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e192b8: test byte ptr [ecx + 0x1a8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x1a8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e192bf: jne 0xe1931e */
  if (!zf) goto L_e1931e;
L_e192c1: /* e192c1: mov eax, dword ptr [ecx + 0x88] */
  eax = R32((uint32_t)(ecx + 0x88u));
/* e192c7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e192c9: je 0xe1931e */
  if (zf) goto L_e1931e;
L_e192cb: /* e192cb: mov eax, dword ptr [ecx + 0x8c] */
  eax = R32((uint32_t)(ecx + 0x8cu));
/* e192d1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e192d3: je 0xe1931e */
  if (zf) goto L_e1931e;
L_e192d5: /* e192d5: mov eax, dword ptr [0xe64910] */
  eax = R32((uint32_t)(0xe64910u));
/* e192da: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e192dc: jne 0xe1931e */
  if (!zf) goto L_e1931e;
L_e192de: /* e192de: mov eax, dword ptr [0xe64908] */
  eax = R32((uint32_t)(0xe64908u));
/* e192e3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e192e5: jne 0xe1931e */
  if (!zf) goto L_e1931e;
L_e192e7: /* e192e7: mov eax, dword ptr [0xe64900] */
  eax = R32((uint32_t)(0xe64900u));
/* e192ec: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e192ee: jne 0xe1931e */
  if (!zf) goto L_e1931e;
L_e192f0: /* e192f0: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* e192f3: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e192f6: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e192f8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e192f9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e192fa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e192fb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e192fc: mov ecx, eax */
  ecx = eax;
/* e192fe: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0xe19304u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e19304: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e19307: call dword ptr [0xe65b54] */
  esp -= 4; W32(esp, 0xe1930du); SPILL(); f_6c4c78(); if (g_unwind) return; /* Engine!?IsRealtime@UViewport@@QAEHXZ */ RELOAD();
/* e1930d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e1930f: jne 0xe1931e */
  if (!zf) goto L_e1931e;
L_e19311: /* e19311: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e19314: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e19316: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e19318: call dword ptr [eax + 0xa4] */
  { uint32_t t = R32((uint32_t)(eax + 0xa4u)); esp -= 4; W32(esp, 0xe1931eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e1931e: /* e1931e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e19321: cmp eax, 0x202 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x202u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e19326: jne 0xe19347 */
  if (!zf) goto L_e19347;
L_e19328: /* e19328: mov dword ptr [0xe64910], 0 */
  W32((uint32_t)(0xe64910u), 0x0u);
/* e19332: xor eax, eax */
  eax = 0;
/* e19334: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e19337: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e1933e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e1933f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e19340: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e19341: mov esp, ebp */
  esp = ebp;
/* e19343: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e19344: ret 0xc */
  esp += 16; SPILL(); return;
L_e19347: /* e19347: cmp eax, 0x205 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x205u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1934c: jne 0xe1936d */
  if (!zf) goto L_e1936d;
L_e1934e: /* e1934e: mov dword ptr [0xe64908], 0 */
  W32((uint32_t)(0xe64908u), 0x0u);
/* e19358: xor eax, eax */
  eax = 0;
/* e1935a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e1935d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e19364: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e19365: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e19366: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e19367: mov esp, ebp */
  esp = ebp;
/* e19369: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e1936a: ret 0xc */
  esp += 16; SPILL(); return;
L_e1936d: /* e1936d: cmp eax, 0x208 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x208u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e19372: jne 0xe1937e */
  if (!zf) goto L_e1937e;
L_e19374: /* e19374: mov dword ptr [0xe64900], 0 */
  W32((uint32_t)(0xe64900u), 0x0u);
L_e1937e: /* e1937e: xor eax, eax */
  eax = 0;
/* e19380: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e19383: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e1938a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e1938b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e1938c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e1938d: mov esp, ebp */
  esp = ebp;
/* e1938f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e19390: ret 0xc */
  esp += 16; SPILL(); return;
L_e193c9: /* e193c9: mov dword ptr [ebx + 0xc8], 1 */
  W32((uint32_t)(ebx + 0xc8u), 0x1u);
/* e193d3: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e193d6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e193d8: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* e193db: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e193dc: mov byte ptr [ebp - 4], 0x19 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x19u);
/* e193e0: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xe193e3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e193e3: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e193e6: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e193e8: call dword ptr [eax + 0x88] */
  { uint32_t t = R32((uint32_t)(eax + 0x88u)); esp -= 4; W32(esp, 0xe193eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e193ee: mov eax, dword ptr [0xe642a0] */
  eax = R32((uint32_t)(0xe642a0u));
/* e193f3: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e193f5: je 0xe193fd */
  if (zf) goto L_e193fd;
L_e193f7: /* e193f7: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e193f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e193fa: call dword ptr [ecx + 0x20] */
  { uint32_t t = R32((uint32_t)(ecx + 0x20u)); esp -= 4; W32(esp, 0xe193fdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e193fd: /* e193fd: mov eax, dword ptr [0xe642a4] */
  eax = R32((uint32_t)(0xe642a4u));
/* e19402: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e19404: je 0xe1940c */
  if (zf) goto L_e1940c;
L_e19406: /* e19406: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e19408: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e19409: call dword ptr [edx + 0x20] */
  { uint32_t t = R32((uint32_t)(edx + 0x20u)); esp -= 4; W32(esp, 0xe1940cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e1940c: /* e1940c: xor eax, eax */
  eax = 0;
/* e1940e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e19411: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e19418: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e19419: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e1941a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e1941b: mov esp, ebp */
  esp = ebp;
/* e1941d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e1941e: ret 0xc */
  esp += 16; SPILL(); return;
L_e19451: /* e19451: mov dword ptr [ebx + 0xc8], edi */
  W32((uint32_t)(ebx + 0xc8u), edi);
/* e19457: mov eax, dword ptr [0xe642a0] */
  eax = R32((uint32_t)(0xe642a0u));
/* e1945c: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1945e: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* e19461: mov byte ptr [ebp - 4], 0x1b */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1bu);
/* e19465: je 0xe1946d */
  if (zf) goto L_e1946d;
L_e19467: /* e19467: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e19469: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e1946a: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0xe1946du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e1946d: /* e1946d: mov eax, dword ptr [0xe642a4] */
  eax = R32((uint32_t)(0xe642a4u));
/* e19472: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e19474: je 0xe197b0 */
  if (zf) goto L_e197b0;
L_e1947a: /* e1947a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e1947c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e1947d: call dword ptr [ecx + 0x1c] */
  { uint32_t t = R32((uint32_t)(ecx + 0x1cu)); esp -= 4; W32(esp, 0xe19480u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e19480: xor eax, eax */
  eax = 0;
/* e19482: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e19485: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e1948c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e1948d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e1948e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e1948f: mov esp, ebp */
  esp = ebp;
/* e19491: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e19492: ret 0xc */
  esp += 16; SPILL(); return;
L_e194cb: /* e194cb: mov ecx, dword ptr [0xe6590c] */
  ecx = R32((uint32_t)(0xe6590cu));
/* e194d1: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* e194d4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e194d6: shr esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* e194d9: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e194db: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* e194de: mov byte ptr [ebp - 4], 0x1f */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1fu);
/* e194e2: je 0xe197b0 */
  if (zf) goto L_e197b0;
L_e194e8: /* e194e8: cmp si, di */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* e194eb: je 0xe197b0 */
  if (zf) goto L_e197b0;
L_e194f1: /* e194f1: movsx edi, si */
  edi = (uint32_t)(int32_t)(int16_t)((esi & 0xffffu));
/* e194f4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e194f5: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e194f8: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* e194fb: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* e194fe: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e19501: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e19503: push 0xe7 */
  { uint32_t v = 0xe7u; esp -= 4; W32(esp, v); }
/* e19508: call 0xe111c2 */
  esp -= 4; W32(esp, 0xe1950du); SPILL(); f_e111c2(); if (g_unwind) return; RELOAD();
/* e1950d: test si, si */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 15) & 1;
  of = 0;
  }
/* e19510: jge 0xe1952e */
  if ((sf == of)) goto L_e1952e;
L_e19512: /* e19512: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e19515: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e19517: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e19519: push 0xed */
  { uint32_t v = 0xedu; esp -= 4; W32(esp, v); }
/* e1951e: call 0xe111c2 */
  esp -= 4; W32(esp, 0xe19523u); SPILL(); f_e111c2(); if (g_unwind) return; RELOAD();
/* e19523: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e19525: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* e19527: push 0xed */
  { uint32_t v = 0xedu; esp -= 4; W32(esp, v); }
/* e1952c: jmp 0xe1954a */
  goto L_e1954a;
L_e1952e: /* e1952e: jle 0xe19552 */
  if ((zf || sf != of)) goto L_e19552;
L_e19530: /* e19530: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e19533: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e19535: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e19537: push 0xec */
  { uint32_t v = 0xecu; esp -= 4; W32(esp, v); }
/* e1953c: call 0xe111c2 */
  esp -= 4; W32(esp, 0xe19541u); SPILL(); f_e111c2(); if (g_unwind) return; RELOAD();
/* e19541: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e19543: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* e19545: push 0xec */
  { uint32_t v = 0xecu; esp -= 4; W32(esp, v); }
L_e1954a: /* e1954a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e1954d: call 0xe111c2 */
  esp -= 4; W32(esp, 0xe19552u); SPILL(); f_e111c2(); if (g_unwind) return; RELOAD();
L_e19552: /* e19552: mov edx, dword ptr [0xe6590c] */
  edx = R32((uint32_t)(0xe6590cu));
/* e19558: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1955b: je 0xe197b0 */
  if (zf) goto L_e197b0;
L_e19561: /* e19561: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* e19564: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e19567: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e19568: call 0xe110be */
  esp -= 4; W32(esp, 0xe1956du); SPILL(); f_e110be(); if (g_unwind) return; RELOAD();
/* e1956d: mov ecx, dword ptr [ebx + 0x28] */
  ecx = R32((uint32_t)(ebx + 0x28u));
/* e19570: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e19572: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e19573: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e19574: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e19577: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e19578: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0xe1957eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e1957e: xor eax, eax */
  eax = 0;
/* e19580: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e19583: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e1958a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e1958b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e1958c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e1958d: mov esp, ebp */
  esp = ebp;
/* e1958f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e19590: ret 0xc */
  esp += 16; SPILL(); return;
L_e195c3: /* e195c3: mov eax, dword ptr [0xe6590c] */
  eax = R32((uint32_t)(0xe6590cu));
/* e195c8: cmp dword ptr [eax], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e195ca: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* e195cd: mov byte ptr [ebp - 4], 0x21 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x21u);
/* e195d1: je 0xe19af6 */
  if (zf) goto L_e19af6;
L_e195d7: /* e195d7: cmp dword ptr [ebx + 0xc8], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0xc8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e195dd: jne 0xe197b0 */
  if (!zf) goto L_e197b0;
L_e195e3: /* e195e3: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* e195e6: mov eax, dword ptr [edx + 0x194] */
  eax = R32((uint32_t)(edx + 0x194u));
/* e195ec: lea ecx, [ebp - 0xdc] */
  ecx = (uint32_t)(ebp + 0xffffff24u);
/* e195f2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e195f3: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e195f6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e195f7: call dword ptr [0xe65da4] */
  esp -= 4; W32(esp, 0xe195fdu); SPILL(); call_ind(R32(0xe65da4u)); if (g_unwind) return; /* USER32!GetClientRect */ RELOAD();
/* e195fd: mov edx, dword ptr [0xe6590c] */
  edx = R32((uint32_t)(0xe6590cu));
/* e19603: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e19605: xor ebx, ebx */
  ebx = 0;
/* e19607: mov bl, byte ptr [ebp + 0xc] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xcu))) & 0xffu);
/* e1960a: xor esi, esi */
  esi = 0;
/* e1960c: and ebx, 0x13 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x13u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* e1960f: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e19611: je 0xe19683 */
  if (zf) goto L_e19683;
L_e19613: /* e19613: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* e19616: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e19617: call dword ptr [0xe65dbc] */
  esp -= 4; W32(esp, 0xe1961du); SPILL(); call_ind(R32(0xe65dbcu)); if (g_unwind) return; /* USER32!GetCursorPos */ RELOAD();
/* e1961d: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* e19620: fild dword ptr [ebp - 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* e19623: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e19626: add ecx, 0xe0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xe0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e1962c: mov dword ptr [ebp - 0x30], esi */
  W32((uint32_t)(ebp + 0xffffffd0u), esi);
/* e1962f: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* e19632: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* e19635: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* e19637: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* e1963a: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* e1963d: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* e19640: mov edx, esi */
  edx = esi;
/* e19642: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* e19645: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e19648: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e1964a: call dword ptr [eax + 0x98] */
  { uint32_t t = R32((uint32_t)(eax + 0x98u)); esp -= 4; W32(esp, 0xe19650u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e19650: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* e19653: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e19654: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e19655: call dword ptr [0xe65d64] */
  esp -= 4; W32(esp, 0xe1965bu); SPILL(); call_ind(R32(0xe65d64u)); if (g_unwind) return; /* USER32!ScreenToClient */ RELOAD();
/* e1965b: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* e1965e: fild dword ptr [ebp - 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* e19661: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* e19664: add edx, 0xec */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xecu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e1966a: mov dword ptr [ebp - 0x30], esi */
  W32((uint32_t)(ebp + 0xffffffd0u), esi);
/* e1966d: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* e19670: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* e19673: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* e19675: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* e19678: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* e1967b: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* e1967e: mov eax, esi */
  eax = esi;
/* e19680: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
L_e19683: /* e19683: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e19686: test byte ptr [ecx + 0x1a8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x1a8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e1968d: jne 0xe19698 */
  if (!zf) goto L_e19698;
L_e1968f: /* e1968f: cmp dword ptr [ecx + 0x1c0], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x1c0u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e19696: je 0xe196b9 */
  if (zf) goto L_e196b9;
L_e19698: /* e19698: call dword ptr [0xe65860] */
  esp -= 4; W32(esp, 0xe1969eu); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* e1969e: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* e196a1: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e196a4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e196a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e196a7: call dword ptr [edx + 0xc0] */
  { uint32_t t = R32((uint32_t)(edx + 0xc0u)); esp -= 4; W32(esp, 0xe196adu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e196ad: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e196b0: jne 0xe197c5 */
  if (!zf) goto L_e197c5;
L_e196b6: /* e196b6: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_e196b9: /* e196b9: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e196bc: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* e196bf: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* e196c2: je 0xe196c9 */
  if (zf) goto L_e196c9;
L_e196c4: /* e196c4: mov esi, 1 */
  esi = 0x1u;
L_e196c9: /* e196c9: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e196cc: je 0xe196d1 */
  if (zf) goto L_e196d1;
L_e196ce: /* e196ce: or esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
L_e196d1: /* e196d1: test bl, 0x10 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e196d4: je 0xe196d9 */
  if (zf) goto L_e196d9;
L_e196d6: /* e196d6: or esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
L_e196d9: /* e196d9: mov ecx, dword ptr [ecx + 0x6c] */
  ecx = R32((uint32_t)(ecx + 0x6cu));
/* e196dc: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* e196de: call dword ptr [0xe65b8c] */
  esp -= 4; W32(esp, 0xe196e4u); SPILL(); f_6cce4b(); if (g_unwind) return; /* Engine!?KeyDown@UInput@@QAEEH@Z */ RELOAD();
/* e196e4: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e196e6: je 0xe196ee */
  if (zf) goto L_e196ee;
L_e196e8: /* e196e8: or esi, 0x100 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
L_e196ee: /* e196ee: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e196f1: mov ecx, dword ptr [eax + 0x6c] */
  ecx = R32((uint32_t)(eax + 0x6cu));
/* e196f4: push 0x11 */
  { uint32_t v = 0x11u; esp -= 4; W32(esp, v); }
/* e196f6: call dword ptr [0xe65b8c] */
  esp -= 4; W32(esp, 0xe196fcu); SPILL(); f_6cce4b(); if (g_unwind) return; /* Engine!?KeyDown@UInput@@QAEEH@Z */ RELOAD();
/* e196fc: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e196fe: je 0xe19706 */
  if (zf) goto L_e19706;
L_e19700: /* e19700: or esi, 0x80 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
L_e19706: /* e19706: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e19709: mov ecx, dword ptr [ecx + 0x6c] */
  ecx = R32((uint32_t)(ecx + 0x6cu));
/* e1970c: push 0x12 */
  { uint32_t v = 0x12u; esp -= 4; W32(esp, v); }
/* e1970e: call dword ptr [0xe65b8c] */
  esp -= 4; W32(esp, 0xe19714u); SPILL(); f_6cce4b(); if (g_unwind) return; /* Engine!?KeyDown@UInput@@QAEEH@Z */ RELOAD();
/* e19714: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e19716: je 0xe1971e */
  if (zf) goto L_e1971e;
L_e19718: /* e19718: or esi, 0x200 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
L_e1971e: /* e1971e: movsx eax, word ptr [ebp - 0x26] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(ebp + 0xffffffdau)));
/* e19722: sub eax, dword ptr [ebp - 0xd8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffff28u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* e19728: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* e1972b: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* e1972e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e19730: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* e19733: movsx eax, word ptr [ebp - 0x28] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(ebp + 0xffffffd8u)));
/* e19737: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* e1973a: sub eax, dword ptr [ebp - 0xdc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffff24u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* e19740: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e19743: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* e19746: movzx eax, bx */
  eax = (uint32_t)((ebx & 0xffffu));
/* e19749: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* e1974d: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* e19750: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e19753: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e19754: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e19757: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e19758: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0xe1975eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e1975e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e19761: call dword ptr [0xe65860] */
  esp -= 4; W32(esp, 0xe19767u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* e19767: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* e1976a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e1976d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e1976f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e19770: call dword ptr [edx + 0xc0] */
  { uint32_t t = R32((uint32_t)(edx + 0xc0u)); esp -= 4; W32(esp, 0xe19776u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e19776: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e19779: jne 0xe1978f */
  if (!zf) goto L_e1978f;
L_e1977b: /* e1977b: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* e1977e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e19781: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e19783: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e19785: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e19787: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e19788: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e19789: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0xe1978fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e1978f: /* e1978f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e19792: test byte ptr [ecx + 0x38], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x38u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e19796: je 0xe197b0 */
  if (zf) goto L_e197b0;
L_e19798: /* e19798: mov al, byte ptr [ecx + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x50u))) & 0xffu);
/* e1979b: cmp al, 6 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x6u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e1979d: ja 0xe197b0 */
  if ((!cf && !zf)) goto L_e197b0;
L_e1979f: /* e1979f: movzx edx, al */
  edx = (uint32_t)((eax & 0xffu));
/* e197a2: mov eax, dword ptr [ecx + edx*4 + 0x1dc] */
  eax = R32((uint32_t)(ecx + edx*4 + 0x1dcu));
/* e197a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e197aa: call dword ptr [0xe65dc4] */
  esp -= 4; W32(esp, 0xe197b0u); SPILL(); call_ind(R32(0xe65dc4u)); if (g_unwind) return; /* USER32!SetCursor */ RELOAD();
L_e197b0: /* e197b0: xor eax, eax */
  eax = 0;
/* e197b2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e197b5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e197bc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e197bd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e197be: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e197bf: mov esp, ebp */
  esp = ebp;
/* e197c1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e197c2: ret 0xc */
  esp += 16; SPILL(); return;
L_e197c5: /* e197c5: mov ecx, dword ptr [ebp - 0xdc] */
  ecx = R32((uint32_t)(ebp + 0xffffff24u));
/* e197cb: mov edx, dword ptr [ebp - 0xd4] */
  edx = R32((uint32_t)(ebp + 0xffffff2cu));
/* e197d1: lea eax, [edx + ecx] */
  eax = (uint32_t)(edx + ecx);
/* e197d4: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* e197d5: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* e197d7: mov edx, dword ptr [ebp - 0xd0] */
  edx = R32((uint32_t)(ebp + 0xffffff30u));
/* e197dd: mov ecx, eax */
  ecx = eax;
/* e197df: mov eax, dword ptr [ebp - 0xd8] */
  eax = R32((uint32_t)(ebp + 0xffffff28u));
/* e197e5: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e197e7: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* e197e8: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* e197ea: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* e197ed: sar ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* e197ef: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* e197f1: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* e197f4: mov dword ptr [ebp - 0x5c], esi */
  W32((uint32_t)(ebp + 0xffffffa4u), esi);
/* e197f7: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* e197fa: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
/* e197fd: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* e19800: mov dword ptr [ebp - 0x90], ecx */
  W32((uint32_t)(ebp + 0xffffff70u), ecx);
/* e19806: mov dword ptr [ebp - 0x8c], eax */
  W32((uint32_t)(ebp + 0xffffff74u), eax);
/* e1980c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_e19810: /* e19810: movsx edi, word ptr [ebp + 0x12] */
  edi = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(ebp + 0x12u)));
/* e19814: mov dword ptr [ebp - 0x3c], esi */
  W32((uint32_t)(ebp + 0xffffffc4u), esi);
/* e19817: movsx esi, si */
  esi = (uint32_t)(int32_t)(int16_t)((esi & 0xffffu));
/* e1981a: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* e1981c: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* e1981e: and edx, 0x13 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x13u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* e19821: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e19823: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* e19826: mov dword ptr [ebp - 0xa8], edi */
  W32((uint32_t)(ebp + 0xffffff58u), edi);
/* e1982c: mov ecx, esi */
  ecx = esi;
/* e1982e: jge 0xe19832 */
  if ((sf == of)) goto L_e19832;
L_e19830: /* e19830: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
L_e19832: /* e19832: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e19834: mov eax, edi */
  eax = edi;
/* e19836: jge 0xe1983a */
  if ((sf == of)) goto L_e1983a;
L_e19838: /* e19838: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
L_e1983a: /* e1983a: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* e1983d: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e1983f: mov ecx, dword ptr [ebp - 0x5c] */
  ecx = R32((uint32_t)(ebp + 0xffffffa4u));
/* e19842: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e19844: add ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* e19846: mov dword ptr [ebp - 0x5c], ecx */
  W32((uint32_t)(ebp + 0xffffffa4u), ecx);
/* e19849: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* e1984c: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* e1984f: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e19851: xor ebx, ebx */
  ebx = 0;
/* e19853: test dl, 1 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e19856: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* e19859: je 0xe19860 */
  if (zf) goto L_e19860;
L_e1985b: /* e1985b: mov ebx, 1 */
  ebx = 0x1u;
L_e19860: /* e19860: test dl, 2 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e19863: je 0xe19868 */
  if (zf) goto L_e19868;
L_e19865: /* e19865: or ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
L_e19868: /* e19868: test dl, 0x10 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e1986b: je 0xe19870 */
  if (zf) goto L_e19870;
L_e1986d: /* e1986d: or ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
L_e19870: /* e19870: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e19873: mov ecx, dword ptr [eax + 0x6c] */
  ecx = R32((uint32_t)(eax + 0x6cu));
/* e19876: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* e19878: call dword ptr [0xe65b8c] */
  esp -= 4; W32(esp, 0xe1987eu); SPILL(); f_6cce4b(); if (g_unwind) return; /* Engine!?KeyDown@UInput@@QAEEH@Z */ RELOAD();
/* e1987e: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e19880: je 0xe19888 */
  if (zf) goto L_e19888;
L_e19882: /* e19882: or ebx, 0x100 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
L_e19888: /* e19888: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e1988b: mov ecx, dword ptr [ecx + 0x6c] */
  ecx = R32((uint32_t)(ecx + 0x6cu));
/* e1988e: push 0x11 */
  { uint32_t v = 0x11u; esp -= 4; W32(esp, v); }
/* e19890: call dword ptr [0xe65b8c] */
  esp -= 4; W32(esp, 0xe19896u); SPILL(); f_6cce4b(); if (g_unwind) return; /* Engine!?KeyDown@UInput@@QAEEH@Z */ RELOAD();
/* e19896: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e19898: je 0xe198a0 */
  if (zf) goto L_e198a0;
L_e1989a: /* e1989a: or ebx, 0x80 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
L_e198a0: /* e198a0: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* e198a3: mov ecx, dword ptr [edx + 0x6c] */
  ecx = R32((uint32_t)(edx + 0x6cu));
/* e198a6: push 0x12 */
  { uint32_t v = 0x12u; esp -= 4; W32(esp, v); }
/* e198a8: call dword ptr [0xe65b8c] */
  esp -= 4; W32(esp, 0xe198aeu); SPILL(); f_6cce4b(); if (g_unwind) return; /* Engine!?KeyDown@UInput@@QAEEH@Z */ RELOAD();
/* e198ae: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e198b0: je 0xe198b8 */
  if (zf) goto L_e198b8;
L_e198b2: /* e198b2: or ebx, 0x200 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
L_e198b8: /* e198b8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e198ba: jne 0xe198c0 */
  if (!zf) goto L_e198c0;
L_e198bc: /* e198bc: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e198be: je 0xe198ed */
  if (zf) goto L_e198ed;
L_e198c0: /* e198c0: fild dword ptr [ebp - 0xa8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffff58u)); FPUSH(v); }
/* e198c6: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* e198c9: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* e198cc: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e198cf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e198d1: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e198d4: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* e198d8: mov dword ptr [ebp - 0x18], 1 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x1u);
/* e198df: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* e198e2: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e198e5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e198e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e198e7: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0xe198edu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e198ed: /* e198ed: mov ecx, dword ptr [0xe65920] */
  ecx = R32((uint32_t)(0xe65920u));
/* e198f3: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e198f6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e198f8: push 0x200 */
  { uint32_t v = 0x200u; esp -= 4; W32(esp, v); }
/* e198fd: push 0x200 */
  { uint32_t v = 0x200u; esp -= 4; W32(esp, v); }
/* e19902: je 0xe19920 */
  if (zf) goto L_e19920;
L_e19904: /* e19904: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* e19907: mov eax, dword ptr [edx + 0x194] */
  eax = R32((uint32_t)(edx + 0x194u));
/* e1990d: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e19910: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e19911: lea edx, [ebp - 0xf8] */
  edx = (uint32_t)(ebp + 0xffffff08u);
/* e19917: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e19918: call dword ptr [0xe65d68] */
  esp -= 4; W32(esp, 0xe1991eu); SPILL(); call_ind(R32(0xe65d68u)); if (g_unwind) return; /* USER32!PeekMessageW */ RELOAD();
/* e1991e: jmp 0xe1993a */
  goto L_e1993a;
L_e19920: /* e19920: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e19923: mov ecx, dword ptr [eax + 0x194] */
  ecx = R32((uint32_t)(eax + 0x194u));
/* e19929: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* e1992c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e1992d: lea eax, [ebp - 0xf8] */
  eax = (uint32_t)(ebp + 0xffffff08u);
/* e19933: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e19934: call dword ptr [0xe65d6c] */
  esp -= 4; W32(esp, 0xe1993au); SPILL(); call_ind(R32(0xe65d6cu)); if (g_unwind) return; /* USER32!PeekMessageA */ RELOAD();
L_e1993a: /* e1993a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e1993c: je 0xe1995d */
  if (zf) goto L_e1995d;
L_e1993e: /* e1993e: mov esi, dword ptr [ebp - 0xec] */
  esi = R32((uint32_t)(ebp + 0xffffff14u));
/* e19944: mov edx, dword ptr [ebp - 0xf0] */
  edx = R32((uint32_t)(ebp + 0xffffff10u));
/* e1994a: movsx ecx, word ptr [ebp - 0x3c] */
  ecx = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(ebp + 0xffffffc4u)));
/* e1994e: movsx eax, word ptr [ebp - 0x3a] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(ebp + 0xffffffc6u)));
/* e19952: mov dword ptr [ebp + 0x10], esi */
  W32((uint32_t)(ebp + 0x10u), esi);
/* e19955: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* e19958: jmp 0xe19810 */
  goto L_e19810;
L_e1995d: /* e1995d: cmp dword ptr [ebp - 0x5c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e19961: jle 0xe19990 */
  if ((zf || sf != of)) goto L_e19990;
L_e19963: /* e19963: mov al, byte ptr [ebp + 0xc] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xcu))) & 0xffu);
/* e19966: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e19968: je 0xe19974 */
  if (zf) goto L_e19974;
L_e1996a: /* e1996a: mov dword ptr [0xe64910], 1 */
  W32((uint32_t)(0xe64910u), 0x1u);
L_e19974: /* e19974: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e19976: je 0xe19982 */
  if (zf) goto L_e19982;
L_e19978: /* e19978: mov dword ptr [0xe64908], 1 */
  W32((uint32_t)(0xe64908u), 0x1u);
L_e19982: /* e19982: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e19984: je 0xe19990 */
  if (zf) goto L_e19990;
L_e19986: /* e19986: mov dword ptr [0xe64900], 1 */
  W32((uint32_t)(0xe64900u), 0x1u);
L_e19990: /* e19990: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* e19993: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e19995: je 0xe199ad */
  if (zf) goto L_e199ad;
L_e19997: /* e19997: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* e1999a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e1999b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e1999e: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e199a1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e199a3: push 0xe4 */
  { uint32_t v = 0xe4u; esp -= 4; W32(esp, v); }
/* e199a8: call 0xe111c2 */
  esp -= 4; W32(esp, 0xe199adu); SPILL(); f_e111c2(); if (g_unwind) return; RELOAD();
L_e199ad: /* e199ad: mov esi, dword ptr [ebp - 0x28] */
  esi = R32((uint32_t)(ebp + 0xffffffd8u));
/* e199b0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e199b2: je 0xe199d1 */
  if (zf) goto L_e199d1;
L_e199b4: /* e199b4: mov ecx, esi */
  ecx = esi;
/* e199b6: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
/* e199b8: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* e199bb: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* e199be: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e199bf: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e199c2: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e199c5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e199c7: push 0xe5 */
  { uint32_t v = 0xe5u; esp -= 4; W32(esp, v); }
/* e199cc: call 0xe111c2 */
  esp -= 4; W32(esp, 0xe199d1u); SPILL(); f_e111c2(); if (g_unwind) return; RELOAD();
L_e199d1: /* e199d1: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e199d3: jne 0xe199d9 */
  if (!zf) goto L_e199d9;
L_e199d5: /* e199d5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e199d7: je 0xe19a23 */
  if (zf) goto L_e19a23;
L_e199d9: /* e199d9: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e199dc: call dword ptr [0xe65860] */
  esp -= 4; W32(esp, 0xe199e2u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* e199e2: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* e199e5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e199e8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e199ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e199eb: call dword ptr [edx + 0xc0] */
  { uint32_t t = R32((uint32_t)(edx + 0xc0u)); esp -= 4; W32(esp, 0xe199f1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e199f1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e199f3: jne 0xe19a23 */
  if (!zf) goto L_e19a23;
L_e199f5: /* e199f5: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* e199f8: mov eax, dword ptr [edx + 0x194] */
  eax = R32((uint32_t)(edx + 0x194u));
/* e199fe: lea ecx, [ebp - 0x90] */
  ecx = (uint32_t)(ebp + 0xffffff70u);
/* e19a04: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e19a05: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e19a08: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e19a09: call dword ptr [0xe65d7c] */
  esp -= 4; W32(esp, 0xe19a0fu); SPILL(); call_ind(R32(0xe65d7cu)); if (g_unwind) return; /* USER32!ClientToScreen */ RELOAD();
/* e19a0f: mov edx, dword ptr [ebp - 0x8c] */
  edx = R32((uint32_t)(ebp + 0xffffff74u));
/* e19a15: mov eax, dword ptr [ebp - 0x90] */
  eax = R32((uint32_t)(ebp + 0xffffff70u));
/* e19a1b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e19a1c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e19a1d: call dword ptr [0xe65dc0] */
  esp -= 4; W32(esp, 0xe19a23u); SPILL(); call_ind(R32(0xe65dc0u)); if (g_unwind) return; /* USER32!SetCursorPos */ RELOAD();
L_e19a23: /* e19a23: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* e19a26: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e19a28: je 0xe19a75 */
  if (zf) goto L_e19a75;
L_e19a2a: /* e19a2a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e19a2d: call dword ptr [0xe65b54] */
  esp -= 4; W32(esp, 0xe19a33u); SPILL(); f_6c4c78(); if (g_unwind) return; /* Engine!?IsRealtime@UViewport@@QAEHXZ */ RELOAD();
/* e19a33: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e19a35: jne 0xe19a75 */
  if (!zf) goto L_e19a75;
L_e19a37: /* e19a37: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e19a3a: mov ecx, dword ptr [ecx + 0x6c] */
  ecx = R32((uint32_t)(ecx + 0x6cu));
/* e19a3d: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* e19a3f: call dword ptr [0xe65b8c] */
  esp -= 4; W32(esp, 0xe19a45u); SPILL(); f_6cce4b(); if (g_unwind) return; /* Engine!?KeyDown@UInput@@QAEEH@Z */ RELOAD();
/* e19a45: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e19a47: je 0xe19a68 */
  if (zf) goto L_e19a68;
L_e19a49: /* e19a49: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* e19a4c: xor esi, esi */
  esi = 0;
/* e19a4e: mov edi, edi */
  edi = edi;
L_e19a50: /* e19a50: cmp esi, dword ptr [edi + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e19a53: jge 0xe19a75 */
  if ((sf == of)) goto L_e19a75;
L_e19a55: /* e19a55: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* e19a58: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* e19a5b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e19a5d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e19a5f: call dword ptr [eax + 0xa4] */
  { uint32_t t = R32((uint32_t)(eax + 0xa4u)); esp -= 4; W32(esp, 0xe19a65u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e19a65: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* e19a66: jmp 0xe19a50 */
  goto L_e19a50;
L_e19a68: /* e19a68: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e19a6b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e19a6d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e19a6f: call dword ptr [edx + 0xa4] */
  { uint32_t t = R32((uint32_t)(edx + 0xa4u)); esp -= 4; W32(esp, 0xe19a75u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e19a75: /* e19a75: mov edi, dword ptr [0xe65d70] */
  edi = R32((uint32_t)(0xe65d70u));
/* e19a7b: mov ebx, dword ptr [0xe65d74] */
  ebx = R32((uint32_t)(0xe65d74u));
/* e19a81: mov esi, dword ptr [0xe65d6c] */
  esi = R32((uint32_t)(0xe65d6cu));
/* e19a87: jmp 0xe19a90 */
  goto L_e19a90;
L_e19a90: /* e19a90: mov eax, dword ptr [0xe65920] */
  eax = R32((uint32_t)(0xe65920u));
/* e19a95: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e19a98: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e19a9a: push 0x108 */
  { uint32_t v = 0x108u; esp -= 4; W32(esp, v); }
/* e19a9f: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* e19aa4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e19aa6: je 0xe19ab7 */
  if (zf) goto L_e19ab7;
L_e19aa8: /* e19aa8: lea ecx, [ebp - 0xf8] */
  ecx = (uint32_t)(ebp + 0xffffff08u);
/* e19aae: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e19aaf: call dword ptr [0xe65d68] */
  esp -= 4; W32(esp, 0xe19ab5u); SPILL(); call_ind(R32(0xe65d68u)); if (g_unwind) return; /* USER32!PeekMessageW */ RELOAD();
/* e19ab5: jmp 0xe19ac0 */
  goto L_e19ac0;
L_e19ab7: /* e19ab7: lea edx, [ebp - 0xf8] */
  edx = (uint32_t)(ebp + 0xffffff08u);
/* e19abd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e19abe: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xe19ac0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e19ac0: /* e19ac0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e19ac2: je 0xe19b5a */
  if (zf) goto L_e19b5a;
L_e19ac8: /* e19ac8: lea eax, [ebp - 0xf8] */
  eax = (uint32_t)(ebp + 0xffffff08u);
/* e19ace: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e19acf: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe19ad1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e19ad1: mov ecx, dword ptr [0xe65920] */
  ecx = R32((uint32_t)(0xe65920u));
/* e19ad7: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e19ada: je 0xe19ae7 */
  if (zf) goto L_e19ae7;
L_e19adc: /* e19adc: lea edx, [ebp - 0xf8] */
  edx = (uint32_t)(ebp + 0xffffff08u);
/* e19ae2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e19ae3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xe19ae5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e19ae5: jmp 0xe19a90 */
  goto L_e19a90;
L_e19ae7: /* e19ae7: lea eax, [ebp - 0xf8] */
  eax = (uint32_t)(ebp + 0xffffff08u);
/* e19aed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e19aee: call dword ptr [0xe65d78] */
  esp -= 4; W32(esp, 0xe19af4u); SPILL(); call_ind(R32(0xe65d78u)); if (g_unwind) return; /* USER32!DispatchMessageA */ RELOAD();
/* e19af4: jmp 0xe19a90 */
  goto L_e19a90;
L_e19af6: /* e19af6: lea ecx, [ebp - 0x90] */
  ecx = (uint32_t)(ebp + 0xffffff70u);
/* e19afc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e19afd: call dword ptr [0xe65dbc] */
  esp -= 4; W32(esp, 0xe19b03u); SPILL(); call_ind(R32(0xe65dbcu)); if (g_unwind) return; /* USER32!GetCursorPos */ RELOAD();
/* e19b03: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e19b06: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e19b08: call dword ptr [edx + 0x98] */
  { uint32_t t = R32((uint32_t)(edx + 0x98u)); esp -= 4; W32(esp, 0xe19b0eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e19b0e: lea ecx, [ebp - 0x90] */
  ecx = (uint32_t)(ebp + 0xffffff70u);
/* e19b14: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e19b15: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e19b16: call dword ptr [0xe65d64] */
  esp -= 4; W32(esp, 0xe19b1cu); SPILL(); call_ind(R32(0xe65d64u)); if (g_unwind) return; /* USER32!ScreenToClient */ RELOAD();
/* e19b1c: fild dword ptr [ebp - 0x90] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffff70u)); FPUSH(v); }
/* e19b22: mov edx, dword ptr [ebx + 0x2c] */
  edx = R32((uint32_t)(ebx + 0x2cu));
/* e19b25: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e19b27: fstp dword ptr [eax + 0x3c] */
  WF32((uint32_t)(eax + 0x3cu), ST0); FPOP();
/* e19b2a: mov ecx, dword ptr [ebx + 0x2c] */
  ecx = R32((uint32_t)(ebx + 0x2cu));
/* e19b2d: fild dword ptr [ebp - 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffff74u)); FPUSH(v); }
/* e19b33: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e19b35: fstp dword ptr [edx + 0x40] */
  WF32((uint32_t)(edx + 0x40u), ST0); FPOP();
/* e19b38: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e19b3b: test byte ptr [eax + 0x38], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x38u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e19b3f: je 0xe19b5a */
  if (zf) goto L_e19b5a;
L_e19b41: /* e19b41: mov cl, byte ptr [eax + 0x50] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x50u))) & 0xffu);
/* e19b44: cmp cl, 6 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x6u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e19b47: ja 0xe19b5a */
  if ((!cf && !zf)) goto L_e19b5a;
L_e19b49: /* e19b49: movzx ecx, cl */
  ecx = (uint32_t)((ecx & 0xffu));
/* e19b4c: mov edx, dword ptr [eax + ecx*4 + 0x1dc] */
  edx = R32((uint32_t)(eax + ecx*4 + 0x1dcu));
/* e19b53: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e19b54: call dword ptr [0xe65dc4] */
  esp -= 4; W32(esp, 0xe19b5au); SPILL(); call_ind(R32(0xe65dc4u)); if (g_unwind) return; /* USER32!SetCursor */ RELOAD();
L_e19b5a: /* e19b5a: xor eax, eax */
  eax = 0;
/* e19b5c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e19b5f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e19b66: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e19b67: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e19b68: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e19b69: mov esp, ebp */
  esp = ebp;
/* e19b6b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e19b6c: ret 0xc */
  esp += 16; SPILL(); return;
L_e19ba2: /* e19ba2: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
L_e19ba5: /* e19ba5: mov esi, dword ptr [0xe65920] */
  esi = R32((uint32_t)(0xe65920u));
/* e19bab: cmp dword ptr [esi], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e19bad: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* e19bb0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e19bb1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e19bb2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e19bb3: je 0xe19bc4 */
  if (zf) goto L_e19bc4;
L_e19bb5: /* e19bb5: mov edx, dword ptr [edx + 0x194] */
  edx = R32((uint32_t)(edx + 0x194u));
/* e19bbb: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* e19bbe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e19bbf: jmp 0xe18bd6 */
  goto L_e18bd6;
L_e19bc4: /* e19bc4: mov ecx, dword ptr [edx + 0x194] */
  ecx = R32((uint32_t)(edx + 0x194u));
/* e19bca: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* e19bcd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
L_e19bce: /* e19bce: call dword ptr [0xe65d54] */
  esp -= 4; W32(esp, 0xe19bd4u); SPILL(); call_ind(R32(0xe65d54u)); if (g_unwind) return; /* USER32!DefWindowProcA */ RELOAD();
/* e19bd4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e19bd7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e19bd8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e19bd9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e19be0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e19be1: mov esp, ebp */
  esp = ebp;
/* e19be3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e19be4: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_e19147(void) {
  LOAD_REGS();
L_e19147: /* e19147: mov eax, dword ptr [ebp - 0xa8] */
  eax = R32((uint32_t)(ebp + 0xffffff58u));
/* e1914d: push 0xe5ec4c */
  { uint32_t v = 0xe5ec4cu; esp -= 4; W32(esp, v); }
/* e19152: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* e19155: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e19156: mov dword ptr [ebp - 0x6c], eax */
  W32((uint32_t)(ebp + 0xffffff94u), eax);
/* e19159: call 0xe25f60 */
  esp -= 4; W32(esp, 0xe1915eu); SPILL(); f_e25f60(); if (g_unwind) return; RELOAD();
  SPILL(); f_e1915e(); return;
}

void f_e1915e(void) {
  LOAD_REGS();
  goto L_e1915e;
L_e18bd0: /* e18bd0: je 0xe19bce */
  if (zf) goto L_e19bce;
L_e18bd6: /* e18bd6: call dword ptr [0xe65d58] */
  esp -= 4; W32(esp, 0xe18bdcu); SPILL(); call_ind(R32(0xe65d58u)); if (g_unwind) return; /* USER32!DefWindowProcW */ RELOAD();
/* e18bdc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e18bdf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e18be6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e18be7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e18be8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e18be9: mov esp, ebp */
  esp = ebp;
/* e18beb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e18bec: ret 0xc */
  esp += 16; SPILL(); return;
L_e1915e: /* e1915e: push 0xe2eec4 */
  { uint32_t v = 0xe2eec4u; esp -= 4; W32(esp, v); }
/* e19163: push 0xe6340c */
  { uint32_t v = 0xe6340cu; esp -= 4; W32(esp, v); }
/* e19168: call dword ptr [0xe65a5c] */
  esp -= 4; W32(esp, 0xe1916eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* e1916e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e19171: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e19173: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e19175: call 0xe25f60 */
  esp -= 4; W32(esp, 0xe1917au); SPILL(); f_e25f60(); if (g_unwind) return; RELOAD();
/* e1917a: mov edx, dword ptr [0xe65920] */
  edx = R32((uint32_t)(0xe65920u));
/* e19180: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e19182: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* e19185: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* e19188: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1918a: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* e1918d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e1918e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e19191: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e19192: mov ecx, dword ptr [eax + 0x194] */
  ecx = R32((uint32_t)(eax + 0x194u));
/* e19198: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e19199: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* e1919c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e1919d: jmp 0xe18bd0 */
  goto L_e18bd0;
L_e19bce: /* e19bce: call dword ptr [0xe65d54] */
  esp -= 4; W32(esp, 0xe19bd4u); SPILL(); call_ind(R32(0xe65d54u)); if (g_unwind) return; /* USER32!DefWindowProcA */ RELOAD();
/* e19bd4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e19bd7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e19bd8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e19bd9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e19be0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e19be1: mov esp, ebp */
  esp = ebp;
/* e19be3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e19be4: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_e19393(void) {
  LOAD_REGS();
L_e19393: /* e19393: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* e19396: push 0xe5ec4c */
  { uint32_t v = 0xe5ec4cu; esp -= 4; W32(esp, v); }
/* e1939b: lea edx, [ebp - 0x88] */
  edx = (uint32_t)(ebp + 0xffffff78u);
/* e193a1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e193a2: mov dword ptr [ebp - 0x88], ecx */
  W32((uint32_t)(ebp + 0xffffff78u), ecx);
/* e193a8: call 0xe25f60 */
  esp -= 4; W32(esp, 0xe193adu); SPILL(); f_e25f60(); if (g_unwind) return; RELOAD();
  SPILL(); f_e193ad(); return;
}

void f_e193ad(void) {
  LOAD_REGS();
L_e193ad: /* e193ad: push 0xe2eea8 */
  { uint32_t v = 0xe2eea8u; esp -= 4; W32(esp, v); }
/* e193b2: push 0xe6341c */
  { uint32_t v = 0xe6341cu; esp -= 4; W32(esp, v); }
/* e193b7: call dword ptr [0xe65a5c] */
  esp -= 4; W32(esp, 0xe193bdu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* e193bd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e193c0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e193c2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e193c4: call 0xe25f60 */
  esp -= 4; W32(esp, 0xe193c9u); SPILL(); f_e25f60(); if (g_unwind) return; RELOAD();
/* e193c9: mov dword ptr [ebx + 0xc8], 1 */
  W32((uint32_t)(ebx + 0xc8u), 0x1u);
/* e193d3: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e193d6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e193d8: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* e193db: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e193dc: mov byte ptr [ebp - 4], 0x19 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x19u);
/* e193e0: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xe193e3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e193e3: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e193e6: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e193e8: call dword ptr [eax + 0x88] */
  { uint32_t t = R32((uint32_t)(eax + 0x88u)); esp -= 4; W32(esp, 0xe193eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e193ee: mov eax, dword ptr [0xe642a0] */
  eax = R32((uint32_t)(0xe642a0u));
/* e193f3: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e193f5: je 0xe193fd */
  if (zf) goto L_e193fd;
L_e193f7: /* e193f7: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e193f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e193fa: call dword ptr [ecx + 0x20] */
  { uint32_t t = R32((uint32_t)(ecx + 0x20u)); esp -= 4; W32(esp, 0xe193fdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e193fd: /* e193fd: mov eax, dword ptr [0xe642a4] */
  eax = R32((uint32_t)(0xe642a4u));
/* e19402: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e19404: je 0xe1940c */
  if (zf) goto L_e1940c;
L_e19406: /* e19406: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e19408: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e19409: call dword ptr [edx + 0x20] */
  { uint32_t t = R32((uint32_t)(edx + 0x20u)); esp -= 4; W32(esp, 0xe1940cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e1940c: /* e1940c: xor eax, eax */
  eax = 0;
/* e1940e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e19411: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e19418: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e19419: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e1941a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e1941b: mov esp, ebp */
  esp = ebp;
/* e1941d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e1941e: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_e19421(void) {
  LOAD_REGS();
L_e19421: /* e19421: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* e19424: push 0xe5ec4c */
  { uint32_t v = 0xe5ec4cu; esp -= 4; W32(esp, v); }
/* e19429: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* e1942c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e1942d: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* e19430: call 0xe25f60 */
  esp -= 4; W32(esp, 0xe19435u); SPILL(); f_e25f60(); if (g_unwind) return; RELOAD();
  SPILL(); f_e19435(); return;
}

void f_e19435(void) {
  LOAD_REGS();
L_e19435: /* e19435: push 0xe2ee80 */
  { uint32_t v = 0xe2ee80u; esp -= 4; W32(esp, v); }
/* e1943a: push 0xe63424 */
  { uint32_t v = 0xe63424u; esp -= 4; W32(esp, v); }
/* e1943f: call dword ptr [0xe65a5c] */
  esp -= 4; W32(esp, 0xe19445u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* e19445: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e19448: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e1944a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e1944c: call 0xe25f60 */
  esp -= 4; W32(esp, 0xe19451u); SPILL(); f_e25f60(); if (g_unwind) return; RELOAD();
/* e19451: mov dword ptr [ebx + 0xc8], edi */
  W32((uint32_t)(ebx + 0xc8u), edi);
/* e19457: mov eax, dword ptr [0xe642a0] */
  eax = R32((uint32_t)(0xe642a0u));
/* e1945c: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1945e: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* e19461: mov byte ptr [ebp - 4], 0x1b */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1bu);
/* e19465: je 0xe1946d */
  if (zf) goto L_e1946d;
L_e19467: /* e19467: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e19469: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e1946a: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0xe1946du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e1946d: /* e1946d: mov eax, dword ptr [0xe642a4] */
  eax = R32((uint32_t)(0xe642a4u));
/* e19472: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e19474: je 0xe197b0 */
  if (zf) goto L_e197b0;
L_e1947a: /* e1947a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e1947c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e1947d: call dword ptr [ecx + 0x1c] */
  { uint32_t t = R32((uint32_t)(ecx + 0x1cu)); esp -= 4; W32(esp, 0xe19480u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e19480: xor eax, eax */
  eax = 0;
/* e19482: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e19485: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e1948c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e1948d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e1948e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e1948f: mov esp, ebp */
  esp = ebp;
/* e19491: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e19492: ret 0xc */
  esp += 16; SPILL(); return;
L_e197b0: /* e197b0: xor eax, eax */
  eax = 0;
/* e197b2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e197b5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e197bc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e197bd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e197be: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e197bf: mov esp, ebp */
  esp = ebp;
/* e197c1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e197c2: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_e19495(void) {
  LOAD_REGS();
L_e19495: /* e19495: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* e19498: push 0xe5ec4c */
  { uint32_t v = 0xe5ec4cu; esp -= 4; W32(esp, v); }
/* e1949d: lea eax, [ebp - 0x9c] */
  eax = (uint32_t)(ebp + 0xffffff64u);
/* e194a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e194a4: mov dword ptr [ebp - 0x9c], edx */
  W32((uint32_t)(ebp + 0xffffff64u), edx);
/* e194aa: call 0xe25f60 */
  esp -= 4; W32(esp, 0xe194afu); SPILL(); f_e25f60(); if (g_unwind) return; RELOAD();
  SPILL(); f_e194af(); return;
}

void f_e194af(void) {
  LOAD_REGS();
L_e194af: /* e194af: push 0xe2ee58 */
  { uint32_t v = 0xe2ee58u; esp -= 4; W32(esp, v); }
/* e194b4: push 0xe6342c */
  { uint32_t v = 0xe6342cu; esp -= 4; W32(esp, v); }
/* e194b9: call dword ptr [0xe65a5c] */
  esp -= 4; W32(esp, 0xe194bfu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* e194bf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e194c2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e194c4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e194c6: call 0xe25f60 */
  esp -= 4; W32(esp, 0xe194cbu); SPILL(); f_e25f60(); if (g_unwind) return; RELOAD();
/* e194cb: mov ecx, dword ptr [0xe6590c] */
  ecx = R32((uint32_t)(0xe6590cu));
/* e194d1: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* e194d4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e194d6: shr esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* e194d9: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e194db: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* e194de: mov byte ptr [ebp - 4], 0x1f */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1fu);
/* e194e2: je 0xe197b0 */
  if (zf) goto L_e197b0;
L_e194e8: /* e194e8: cmp si, di */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* e194eb: je 0xe197b0 */
  if (zf) goto L_e197b0;
L_e194f1: /* e194f1: movsx edi, si */
  edi = (uint32_t)(int32_t)(int16_t)((esi & 0xffffu));
/* e194f4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e194f5: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e194f8: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* e194fb: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* e194fe: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e19501: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e19503: push 0xe7 */
  { uint32_t v = 0xe7u; esp -= 4; W32(esp, v); }
/* e19508: call 0xe111c2 */
  esp -= 4; W32(esp, 0xe1950du); SPILL(); f_e111c2(); if (g_unwind) return; RELOAD();
/* e1950d: test si, si */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 15) & 1;
  of = 0;
  }
/* e19510: jge 0xe1952e */
  if ((sf == of)) goto L_e1952e;
L_e19512: /* e19512: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e19515: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e19517: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e19519: push 0xed */
  { uint32_t v = 0xedu; esp -= 4; W32(esp, v); }
/* e1951e: call 0xe111c2 */
  esp -= 4; W32(esp, 0xe19523u); SPILL(); f_e111c2(); if (g_unwind) return; RELOAD();
/* e19523: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e19525: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* e19527: push 0xed */
  { uint32_t v = 0xedu; esp -= 4; W32(esp, v); }
/* e1952c: jmp 0xe1954a */
  goto L_e1954a;
L_e1952e: /* e1952e: jle 0xe19552 */
  if ((zf || sf != of)) goto L_e19552;
L_e19530: /* e19530: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e19533: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e19535: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e19537: push 0xec */
  { uint32_t v = 0xecu; esp -= 4; W32(esp, v); }
/* e1953c: call 0xe111c2 */
  esp -= 4; W32(esp, 0xe19541u); SPILL(); f_e111c2(); if (g_unwind) return; RELOAD();
/* e19541: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e19543: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* e19545: push 0xec */
  { uint32_t v = 0xecu; esp -= 4; W32(esp, v); }
L_e1954a: /* e1954a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e1954d: call 0xe111c2 */
  esp -= 4; W32(esp, 0xe19552u); SPILL(); f_e111c2(); if (g_unwind) return; RELOAD();
L_e19552: /* e19552: mov edx, dword ptr [0xe6590c] */
  edx = R32((uint32_t)(0xe6590cu));
/* e19558: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1955b: je 0xe197b0 */
  if (zf) goto L_e197b0;
L_e19561: /* e19561: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* e19564: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e19567: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e19568: call 0xe110be */
  esp -= 4; W32(esp, 0xe1956du); SPILL(); f_e110be(); if (g_unwind) return; RELOAD();
/* e1956d: mov ecx, dword ptr [ebx + 0x28] */
  ecx = R32((uint32_t)(ebx + 0x28u));
/* e19570: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e19572: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e19573: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e19574: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e19577: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e19578: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0xe1957eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e1957e: xor eax, eax */
  eax = 0;
/* e19580: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e19583: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e1958a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e1958b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e1958c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e1958d: mov esp, ebp */
  esp = ebp;
/* e1958f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e19590: ret 0xc */
  esp += 16; SPILL(); return;
L_e197b0: /* e197b0: xor eax, eax */
  eax = 0;
/* e197b2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e197b5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e197bc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e197bd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e197be: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e197bf: mov esp, ebp */
  esp = ebp;
/* e197c1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e197c2: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_e19593(void) {
  LOAD_REGS();
L_e19593: /* e19593: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* e19596: push 0xe5ec4c */
  { uint32_t v = 0xe5ec4cu; esp -= 4; W32(esp, v); }
/* e1959b: lea edx, [ebp - 0x7c] */
  edx = (uint32_t)(ebp + 0xffffff84u);
/* e1959e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e1959f: mov dword ptr [ebp - 0x7c], ecx */
  W32((uint32_t)(ebp + 0xffffff84u), ecx);
/* e195a2: call 0xe25f60 */
  esp -= 4; W32(esp, 0xe195a7u); SPILL(); f_e25f60(); if (g_unwind) return; RELOAD();
  SPILL(); f_e195a7(); return;
}

void f_e195a7(void) {
  LOAD_REGS();
L_e195a7: /* e195a7: push 0xe2ee34 */
  { uint32_t v = 0xe2ee34u; esp -= 4; W32(esp, v); }
/* e195ac: push 0xe6343c */
  { uint32_t v = 0xe6343cu; esp -= 4; W32(esp, v); }
/* e195b1: call dword ptr [0xe65a5c] */
  esp -= 4; W32(esp, 0xe195b7u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* e195b7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e195ba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e195bc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e195be: call 0xe25f60 */
  esp -= 4; W32(esp, 0xe195c3u); SPILL(); f_e25f60(); if (g_unwind) return; RELOAD();
/* e195c3: mov eax, dword ptr [0xe6590c] */
  eax = R32((uint32_t)(0xe6590cu));
/* e195c8: cmp dword ptr [eax], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e195ca: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* e195cd: mov byte ptr [ebp - 4], 0x21 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x21u);
/* e195d1: je 0xe19af6 */
  if (zf) goto L_e19af6;
L_e195d7: /* e195d7: cmp dword ptr [ebx + 0xc8], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0xc8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e195dd: jne 0xe197b0 */
  if (!zf) goto L_e197b0;
L_e195e3: /* e195e3: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* e195e6: mov eax, dword ptr [edx + 0x194] */
  eax = R32((uint32_t)(edx + 0x194u));
/* e195ec: lea ecx, [ebp - 0xdc] */
  ecx = (uint32_t)(ebp + 0xffffff24u);
/* e195f2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e195f3: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e195f6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e195f7: call dword ptr [0xe65da4] */
  esp -= 4; W32(esp, 0xe195fdu); SPILL(); call_ind(R32(0xe65da4u)); if (g_unwind) return; /* USER32!GetClientRect */ RELOAD();
/* e195fd: mov edx, dword ptr [0xe6590c] */
  edx = R32((uint32_t)(0xe6590cu));
/* e19603: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e19605: xor ebx, ebx */
  ebx = 0;
/* e19607: mov bl, byte ptr [ebp + 0xc] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xcu))) & 0xffu);
/* e1960a: xor esi, esi */
  esi = 0;
/* e1960c: and ebx, 0x13 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x13u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* e1960f: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e19611: je 0xe19683 */
  if (zf) goto L_e19683;
L_e19613: /* e19613: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* e19616: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e19617: call dword ptr [0xe65dbc] */
  esp -= 4; W32(esp, 0xe1961du); SPILL(); call_ind(R32(0xe65dbcu)); if (g_unwind) return; /* USER32!GetCursorPos */ RELOAD();
/* e1961d: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* e19620: fild dword ptr [ebp - 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* e19623: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e19626: add ecx, 0xe0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xe0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e1962c: mov dword ptr [ebp - 0x30], esi */
  W32((uint32_t)(ebp + 0xffffffd0u), esi);
/* e1962f: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* e19632: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* e19635: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* e19637: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* e1963a: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* e1963d: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* e19640: mov edx, esi */
  edx = esi;
/* e19642: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* e19645: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e19648: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e1964a: call dword ptr [eax + 0x98] */
  { uint32_t t = R32((uint32_t)(eax + 0x98u)); esp -= 4; W32(esp, 0xe19650u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e19650: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* e19653: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e19654: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e19655: call dword ptr [0xe65d64] */
  esp -= 4; W32(esp, 0xe1965bu); SPILL(); call_ind(R32(0xe65d64u)); if (g_unwind) return; /* USER32!ScreenToClient */ RELOAD();
/* e1965b: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* e1965e: fild dword ptr [ebp - 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* e19661: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* e19664: add edx, 0xec */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xecu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e1966a: mov dword ptr [ebp - 0x30], esi */
  W32((uint32_t)(ebp + 0xffffffd0u), esi);
/* e1966d: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* e19670: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* e19673: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* e19675: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* e19678: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* e1967b: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* e1967e: mov eax, esi */
  eax = esi;
/* e19680: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
L_e19683: /* e19683: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e19686: test byte ptr [ecx + 0x1a8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x1a8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e1968d: jne 0xe19698 */
  if (!zf) goto L_e19698;
L_e1968f: /* e1968f: cmp dword ptr [ecx + 0x1c0], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x1c0u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e19696: je 0xe196b9 */
  if (zf) goto L_e196b9;
L_e19698: /* e19698: call dword ptr [0xe65860] */
  esp -= 4; W32(esp, 0xe1969eu); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* e1969e: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* e196a1: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e196a4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e196a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e196a7: call dword ptr [edx + 0xc0] */
  { uint32_t t = R32((uint32_t)(edx + 0xc0u)); esp -= 4; W32(esp, 0xe196adu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e196ad: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e196b0: jne 0xe197c5 */
  if (!zf) goto L_e197c5;
L_e196b6: /* e196b6: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_e196b9: /* e196b9: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e196bc: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* e196bf: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* e196c2: je 0xe196c9 */
  if (zf) goto L_e196c9;
L_e196c4: /* e196c4: mov esi, 1 */
  esi = 0x1u;
L_e196c9: /* e196c9: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e196cc: je 0xe196d1 */
  if (zf) goto L_e196d1;
L_e196ce: /* e196ce: or esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
L_e196d1: /* e196d1: test bl, 0x10 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e196d4: je 0xe196d9 */
  if (zf) goto L_e196d9;
L_e196d6: /* e196d6: or esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
L_e196d9: /* e196d9: mov ecx, dword ptr [ecx + 0x6c] */
  ecx = R32((uint32_t)(ecx + 0x6cu));
/* e196dc: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* e196de: call dword ptr [0xe65b8c] */
  esp -= 4; W32(esp, 0xe196e4u); SPILL(); f_6cce4b(); if (g_unwind) return; /* Engine!?KeyDown@UInput@@QAEEH@Z */ RELOAD();
/* e196e4: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e196e6: je 0xe196ee */
  if (zf) goto L_e196ee;
L_e196e8: /* e196e8: or esi, 0x100 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
L_e196ee: /* e196ee: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e196f1: mov ecx, dword ptr [eax + 0x6c] */
  ecx = R32((uint32_t)(eax + 0x6cu));
/* e196f4: push 0x11 */
  { uint32_t v = 0x11u; esp -= 4; W32(esp, v); }
/* e196f6: call dword ptr [0xe65b8c] */
  esp -= 4; W32(esp, 0xe196fcu); SPILL(); f_6cce4b(); if (g_unwind) return; /* Engine!?KeyDown@UInput@@QAEEH@Z */ RELOAD();
/* e196fc: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e196fe: je 0xe19706 */
  if (zf) goto L_e19706;
L_e19700: /* e19700: or esi, 0x80 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
L_e19706: /* e19706: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e19709: mov ecx, dword ptr [ecx + 0x6c] */
  ecx = R32((uint32_t)(ecx + 0x6cu));
/* e1970c: push 0x12 */
  { uint32_t v = 0x12u; esp -= 4; W32(esp, v); }
/* e1970e: call dword ptr [0xe65b8c] */
  esp -= 4; W32(esp, 0xe19714u); SPILL(); f_6cce4b(); if (g_unwind) return; /* Engine!?KeyDown@UInput@@QAEEH@Z */ RELOAD();
/* e19714: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e19716: je 0xe1971e */
  if (zf) goto L_e1971e;
L_e19718: /* e19718: or esi, 0x200 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
L_e1971e: /* e1971e: movsx eax, word ptr [ebp - 0x26] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(ebp + 0xffffffdau)));
/* e19722: sub eax, dword ptr [ebp - 0xd8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffff28u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* e19728: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* e1972b: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* e1972e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e19730: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* e19733: movsx eax, word ptr [ebp - 0x28] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(ebp + 0xffffffd8u)));
/* e19737: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* e1973a: sub eax, dword ptr [ebp - 0xdc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffff24u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* e19740: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e19743: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* e19746: movzx eax, bx */
  eax = (uint32_t)((ebx & 0xffffu));
/* e19749: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* e1974d: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* e19750: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e19753: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e19754: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e19757: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e19758: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0xe1975eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e1975e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e19761: call dword ptr [0xe65860] */
  esp -= 4; W32(esp, 0xe19767u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* e19767: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* e1976a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e1976d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e1976f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e19770: call dword ptr [edx + 0xc0] */
  { uint32_t t = R32((uint32_t)(edx + 0xc0u)); esp -= 4; W32(esp, 0xe19776u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e19776: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e19779: jne 0xe1978f */
  if (!zf) goto L_e1978f;
L_e1977b: /* e1977b: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* e1977e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e19781: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e19783: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e19785: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e19787: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e19788: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e19789: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0xe1978fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e1978f: /* e1978f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e19792: test byte ptr [ecx + 0x38], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x38u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e19796: je 0xe197b0 */
  if (zf) goto L_e197b0;
L_e19798: /* e19798: mov al, byte ptr [ecx + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x50u))) & 0xffu);
/* e1979b: cmp al, 6 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x6u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e1979d: ja 0xe197b0 */
  if ((!cf && !zf)) goto L_e197b0;
L_e1979f: /* e1979f: movzx edx, al */
  edx = (uint32_t)((eax & 0xffu));
/* e197a2: mov eax, dword ptr [ecx + edx*4 + 0x1dc] */
  eax = R32((uint32_t)(ecx + edx*4 + 0x1dcu));
/* e197a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e197aa: call dword ptr [0xe65dc4] */
  esp -= 4; W32(esp, 0xe197b0u); SPILL(); call_ind(R32(0xe65dc4u)); if (g_unwind) return; /* USER32!SetCursor */ RELOAD();
L_e197b0: /* e197b0: xor eax, eax */
  eax = 0;
/* e197b2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e197b5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e197bc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e197bd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e197be: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e197bf: mov esp, ebp */
  esp = ebp;
/* e197c1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e197c2: ret 0xc */
  esp += 16; SPILL(); return;
L_e197c5: /* e197c5: mov ecx, dword ptr [ebp - 0xdc] */
  ecx = R32((uint32_t)(ebp + 0xffffff24u));
/* e197cb: mov edx, dword ptr [ebp - 0xd4] */
  edx = R32((uint32_t)(ebp + 0xffffff2cu));
/* e197d1: lea eax, [edx + ecx] */
  eax = (uint32_t)(edx + ecx);
/* e197d4: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* e197d5: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* e197d7: mov edx, dword ptr [ebp - 0xd0] */
  edx = R32((uint32_t)(ebp + 0xffffff30u));
/* e197dd: mov ecx, eax */
  ecx = eax;
/* e197df: mov eax, dword ptr [ebp - 0xd8] */
  eax = R32((uint32_t)(ebp + 0xffffff28u));
/* e197e5: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e197e7: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* e197e8: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* e197ea: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* e197ed: sar ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* e197ef: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* e197f1: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* e197f4: mov dword ptr [ebp - 0x5c], esi */
  W32((uint32_t)(ebp + 0xffffffa4u), esi);
/* e197f7: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* e197fa: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
/* e197fd: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* e19800: mov dword ptr [ebp - 0x90], ecx */
  W32((uint32_t)(ebp + 0xffffff70u), ecx);
/* e19806: mov dword ptr [ebp - 0x8c], eax */
  W32((uint32_t)(ebp + 0xffffff74u), eax);
/* e1980c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_e19810: /* e19810: movsx edi, word ptr [ebp + 0x12] */
  edi = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(ebp + 0x12u)));
/* e19814: mov dword ptr [ebp - 0x3c], esi */
  W32((uint32_t)(ebp + 0xffffffc4u), esi);
/* e19817: movsx esi, si */
  esi = (uint32_t)(int32_t)(int16_t)((esi & 0xffffu));
/* e1981a: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* e1981c: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* e1981e: and edx, 0x13 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x13u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* e19821: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e19823: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* e19826: mov dword ptr [ebp - 0xa8], edi */
  W32((uint32_t)(ebp + 0xffffff58u), edi);
/* e1982c: mov ecx, esi */
  ecx = esi;
/* e1982e: jge 0xe19832 */
  if ((sf == of)) goto L_e19832;
L_e19830: /* e19830: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
L_e19832: /* e19832: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e19834: mov eax, edi */
  eax = edi;
/* e19836: jge 0xe1983a */
  if ((sf == of)) goto L_e1983a;
L_e19838: /* e19838: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
L_e1983a: /* e1983a: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* e1983d: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e1983f: mov ecx, dword ptr [ebp - 0x5c] */
  ecx = R32((uint32_t)(ebp + 0xffffffa4u));
/* e19842: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e19844: add ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* e19846: mov dword ptr [ebp - 0x5c], ecx */
  W32((uint32_t)(ebp + 0xffffffa4u), ecx);
/* e19849: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* e1984c: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* e1984f: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e19851: xor ebx, ebx */
  ebx = 0;
/* e19853: test dl, 1 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e19856: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* e19859: je 0xe19860 */
  if (zf) goto L_e19860;
L_e1985b: /* e1985b: mov ebx, 1 */
  ebx = 0x1u;
L_e19860: /* e19860: test dl, 2 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e19863: je 0xe19868 */
  if (zf) goto L_e19868;
L_e19865: /* e19865: or ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
L_e19868: /* e19868: test dl, 0x10 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e1986b: je 0xe19870 */
  if (zf) goto L_e19870;
L_e1986d: /* e1986d: or ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
L_e19870: /* e19870: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e19873: mov ecx, dword ptr [eax + 0x6c] */
  ecx = R32((uint32_t)(eax + 0x6cu));
/* e19876: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* e19878: call dword ptr [0xe65b8c] */
  esp -= 4; W32(esp, 0xe1987eu); SPILL(); f_6cce4b(); if (g_unwind) return; /* Engine!?KeyDown@UInput@@QAEEH@Z */ RELOAD();
/* e1987e: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e19880: je 0xe19888 */
  if (zf) goto L_e19888;
L_e19882: /* e19882: or ebx, 0x100 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
L_e19888: /* e19888: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e1988b: mov ecx, dword ptr [ecx + 0x6c] */
  ecx = R32((uint32_t)(ecx + 0x6cu));
/* e1988e: push 0x11 */
  { uint32_t v = 0x11u; esp -= 4; W32(esp, v); }
/* e19890: call dword ptr [0xe65b8c] */
  esp -= 4; W32(esp, 0xe19896u); SPILL(); f_6cce4b(); if (g_unwind) return; /* Engine!?KeyDown@UInput@@QAEEH@Z */ RELOAD();
/* e19896: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e19898: je 0xe198a0 */
  if (zf) goto L_e198a0;
L_e1989a: /* e1989a: or ebx, 0x80 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
L_e198a0: /* e198a0: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* e198a3: mov ecx, dword ptr [edx + 0x6c] */
  ecx = R32((uint32_t)(edx + 0x6cu));
/* e198a6: push 0x12 */
  { uint32_t v = 0x12u; esp -= 4; W32(esp, v); }
/* e198a8: call dword ptr [0xe65b8c] */
  esp -= 4; W32(esp, 0xe198aeu); SPILL(); f_6cce4b(); if (g_unwind) return; /* Engine!?KeyDown@UInput@@QAEEH@Z */ RELOAD();
/* e198ae: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e198b0: je 0xe198b8 */
  if (zf) goto L_e198b8;
L_e198b2: /* e198b2: or ebx, 0x200 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
L_e198b8: /* e198b8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e198ba: jne 0xe198c0 */
  if (!zf) goto L_e198c0;
L_e198bc: /* e198bc: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e198be: je 0xe198ed */
  if (zf) goto L_e198ed;
L_e198c0: /* e198c0: fild dword ptr [ebp - 0xa8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffff58u)); FPUSH(v); }
/* e198c6: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* e198c9: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* e198cc: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e198cf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e198d1: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e198d4: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* e198d8: mov dword ptr [ebp - 0x18], 1 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x1u);
/* e198df: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* e198e2: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e198e5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e198e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e198e7: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0xe198edu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e198ed: /* e198ed: mov ecx, dword ptr [0xe65920] */
  ecx = R32((uint32_t)(0xe65920u));
/* e198f3: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e198f6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e198f8: push 0x200 */
  { uint32_t v = 0x200u; esp -= 4; W32(esp, v); }
/* e198fd: push 0x200 */
  { uint32_t v = 0x200u; esp -= 4; W32(esp, v); }
/* e19902: je 0xe19920 */
  if (zf) goto L_e19920;
L_e19904: /* e19904: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* e19907: mov eax, dword ptr [edx + 0x194] */
  eax = R32((uint32_t)(edx + 0x194u));
/* e1990d: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e19910: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e19911: lea edx, [ebp - 0xf8] */
  edx = (uint32_t)(ebp + 0xffffff08u);
/* e19917: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e19918: call dword ptr [0xe65d68] */
  esp -= 4; W32(esp, 0xe1991eu); SPILL(); call_ind(R32(0xe65d68u)); if (g_unwind) return; /* USER32!PeekMessageW */ RELOAD();
/* e1991e: jmp 0xe1993a */
  goto L_e1993a;
L_e19920: /* e19920: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e19923: mov ecx, dword ptr [eax + 0x194] */
  ecx = R32((uint32_t)(eax + 0x194u));
/* e19929: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* e1992c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e1992d: lea eax, [ebp - 0xf8] */
  eax = (uint32_t)(ebp + 0xffffff08u);
/* e19933: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e19934: call dword ptr [0xe65d6c] */
  esp -= 4; W32(esp, 0xe1993au); SPILL(); call_ind(R32(0xe65d6cu)); if (g_unwind) return; /* USER32!PeekMessageA */ RELOAD();
L_e1993a: /* e1993a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e1993c: je 0xe1995d */
  if (zf) goto L_e1995d;
L_e1993e: /* e1993e: mov esi, dword ptr [ebp - 0xec] */
  esi = R32((uint32_t)(ebp + 0xffffff14u));
/* e19944: mov edx, dword ptr [ebp - 0xf0] */
  edx = R32((uint32_t)(ebp + 0xffffff10u));
/* e1994a: movsx ecx, word ptr [ebp - 0x3c] */
  ecx = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(ebp + 0xffffffc4u)));
/* e1994e: movsx eax, word ptr [ebp - 0x3a] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(ebp + 0xffffffc6u)));
/* e19952: mov dword ptr [ebp + 0x10], esi */
  W32((uint32_t)(ebp + 0x10u), esi);
/* e19955: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* e19958: jmp 0xe19810 */
  goto L_e19810;
L_e1995d: /* e1995d: cmp dword ptr [ebp - 0x5c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e19961: jle 0xe19990 */
  if ((zf || sf != of)) goto L_e19990;
L_e19963: /* e19963: mov al, byte ptr [ebp + 0xc] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xcu))) & 0xffu);
/* e19966: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e19968: je 0xe19974 */
  if (zf) goto L_e19974;
L_e1996a: /* e1996a: mov dword ptr [0xe64910], 1 */
  W32((uint32_t)(0xe64910u), 0x1u);
L_e19974: /* e19974: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e19976: je 0xe19982 */
  if (zf) goto L_e19982;
L_e19978: /* e19978: mov dword ptr [0xe64908], 1 */
  W32((uint32_t)(0xe64908u), 0x1u);
L_e19982: /* e19982: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e19984: je 0xe19990 */
  if (zf) goto L_e19990;
L_e19986: /* e19986: mov dword ptr [0xe64900], 1 */
  W32((uint32_t)(0xe64900u), 0x1u);
L_e19990: /* e19990: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* e19993: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e19995: je 0xe199ad */
  if (zf) goto L_e199ad;
L_e19997: /* e19997: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* e1999a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e1999b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e1999e: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e199a1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e199a3: push 0xe4 */
  { uint32_t v = 0xe4u; esp -= 4; W32(esp, v); }
/* e199a8: call 0xe111c2 */
  esp -= 4; W32(esp, 0xe199adu); SPILL(); f_e111c2(); if (g_unwind) return; RELOAD();
L_e199ad: /* e199ad: mov esi, dword ptr [ebp - 0x28] */
  esi = R32((uint32_t)(ebp + 0xffffffd8u));
/* e199b0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e199b2: je 0xe199d1 */
  if (zf) goto L_e199d1;
L_e199b4: /* e199b4: mov ecx, esi */
  ecx = esi;
/* e199b6: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
/* e199b8: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* e199bb: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* e199be: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e199bf: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e199c2: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e199c5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e199c7: push 0xe5 */
  { uint32_t v = 0xe5u; esp -= 4; W32(esp, v); }
/* e199cc: call 0xe111c2 */
  esp -= 4; W32(esp, 0xe199d1u); SPILL(); f_e111c2(); if (g_unwind) return; RELOAD();
L_e199d1: /* e199d1: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e199d3: jne 0xe199d9 */
  if (!zf) goto L_e199d9;
L_e199d5: /* e199d5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e199d7: je 0xe19a23 */
  if (zf) goto L_e19a23;
L_e199d9: /* e199d9: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e199dc: call dword ptr [0xe65860] */
  esp -= 4; W32(esp, 0xe199e2u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* e199e2: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* e199e5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e199e8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e199ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e199eb: call dword ptr [edx + 0xc0] */
  { uint32_t t = R32((uint32_t)(edx + 0xc0u)); esp -= 4; W32(esp, 0xe199f1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e199f1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e199f3: jne 0xe19a23 */
  if (!zf) goto L_e19a23;
L_e199f5: /* e199f5: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* e199f8: mov eax, dword ptr [edx + 0x194] */
  eax = R32((uint32_t)(edx + 0x194u));
/* e199fe: lea ecx, [ebp - 0x90] */
  ecx = (uint32_t)(ebp + 0xffffff70u);
/* e19a04: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e19a05: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e19a08: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e19a09: call dword ptr [0xe65d7c] */
  esp -= 4; W32(esp, 0xe19a0fu); SPILL(); call_ind(R32(0xe65d7cu)); if (g_unwind) return; /* USER32!ClientToScreen */ RELOAD();
/* e19a0f: mov edx, dword ptr [ebp - 0x8c] */
  edx = R32((uint32_t)(ebp + 0xffffff74u));
/* e19a15: mov eax, dword ptr [ebp - 0x90] */
  eax = R32((uint32_t)(ebp + 0xffffff70u));
/* e19a1b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e19a1c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e19a1d: call dword ptr [0xe65dc0] */
  esp -= 4; W32(esp, 0xe19a23u); SPILL(); call_ind(R32(0xe65dc0u)); if (g_unwind) return; /* USER32!SetCursorPos */ RELOAD();
L_e19a23: /* e19a23: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* e19a26: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e19a28: je 0xe19a75 */
  if (zf) goto L_e19a75;
L_e19a2a: /* e19a2a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e19a2d: call dword ptr [0xe65b54] */
  esp -= 4; W32(esp, 0xe19a33u); SPILL(); f_6c4c78(); if (g_unwind) return; /* Engine!?IsRealtime@UViewport@@QAEHXZ */ RELOAD();
/* e19a33: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e19a35: jne 0xe19a75 */
  if (!zf) goto L_e19a75;
L_e19a37: /* e19a37: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e19a3a: mov ecx, dword ptr [ecx + 0x6c] */
  ecx = R32((uint32_t)(ecx + 0x6cu));
/* e19a3d: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* e19a3f: call dword ptr [0xe65b8c] */
  esp -= 4; W32(esp, 0xe19a45u); SPILL(); f_6cce4b(); if (g_unwind) return; /* Engine!?KeyDown@UInput@@QAEEH@Z */ RELOAD();
/* e19a45: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e19a47: je 0xe19a68 */
  if (zf) goto L_e19a68;
L_e19a49: /* e19a49: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* e19a4c: xor esi, esi */
  esi = 0;
/* e19a4e: mov edi, edi */
  edi = edi;
L_e19a50: /* e19a50: cmp esi, dword ptr [edi + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e19a53: jge 0xe19a75 */
  if ((sf == of)) goto L_e19a75;
L_e19a55: /* e19a55: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* e19a58: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* e19a5b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e19a5d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e19a5f: call dword ptr [eax + 0xa4] */
  { uint32_t t = R32((uint32_t)(eax + 0xa4u)); esp -= 4; W32(esp, 0xe19a65u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e19a65: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* e19a66: jmp 0xe19a50 */
  goto L_e19a50;
L_e19a68: /* e19a68: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e19a6b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e19a6d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e19a6f: call dword ptr [edx + 0xa4] */
  { uint32_t t = R32((uint32_t)(edx + 0xa4u)); esp -= 4; W32(esp, 0xe19a75u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e19a75: /* e19a75: mov edi, dword ptr [0xe65d70] */
  edi = R32((uint32_t)(0xe65d70u));
/* e19a7b: mov ebx, dword ptr [0xe65d74] */
  ebx = R32((uint32_t)(0xe65d74u));
/* e19a81: mov esi, dword ptr [0xe65d6c] */
  esi = R32((uint32_t)(0xe65d6cu));
/* e19a87: jmp 0xe19a90 */
  goto L_e19a90;
L_e19a90: /* e19a90: mov eax, dword ptr [0xe65920] */
  eax = R32((uint32_t)(0xe65920u));
/* e19a95: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e19a98: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e19a9a: push 0x108 */
  { uint32_t v = 0x108u; esp -= 4; W32(esp, v); }
/* e19a9f: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* e19aa4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e19aa6: je 0xe19ab7 */
  if (zf) goto L_e19ab7;
L_e19aa8: /* e19aa8: lea ecx, [ebp - 0xf8] */
  ecx = (uint32_t)(ebp + 0xffffff08u);
/* e19aae: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e19aaf: call dword ptr [0xe65d68] */
  esp -= 4; W32(esp, 0xe19ab5u); SPILL(); call_ind(R32(0xe65d68u)); if (g_unwind) return; /* USER32!PeekMessageW */ RELOAD();
/* e19ab5: jmp 0xe19ac0 */
  goto L_e19ac0;
L_e19ab7: /* e19ab7: lea edx, [ebp - 0xf8] */
  edx = (uint32_t)(ebp + 0xffffff08u);
/* e19abd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e19abe: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xe19ac0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e19ac0: /* e19ac0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e19ac2: je 0xe19b5a */
  if (zf) goto L_e19b5a;
L_e19ac8: /* e19ac8: lea eax, [ebp - 0xf8] */
  eax = (uint32_t)(ebp + 0xffffff08u);
/* e19ace: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e19acf: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe19ad1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e19ad1: mov ecx, dword ptr [0xe65920] */
  ecx = R32((uint32_t)(0xe65920u));
/* e19ad7: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e19ada: je 0xe19ae7 */
  if (zf) goto L_e19ae7;
L_e19adc: /* e19adc: lea edx, [ebp - 0xf8] */
  edx = (uint32_t)(ebp + 0xffffff08u);
/* e19ae2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e19ae3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xe19ae5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e19ae5: jmp 0xe19a90 */
  goto L_e19a90;
L_e19ae7: /* e19ae7: lea eax, [ebp - 0xf8] */
  eax = (uint32_t)(ebp + 0xffffff08u);
/* e19aed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e19aee: call dword ptr [0xe65d78] */
  esp -= 4; W32(esp, 0xe19af4u); SPILL(); call_ind(R32(0xe65d78u)); if (g_unwind) return; /* USER32!DispatchMessageA */ RELOAD();
/* e19af4: jmp 0xe19a90 */
  goto L_e19a90;
L_e19af6: /* e19af6: lea ecx, [ebp - 0x90] */
  ecx = (uint32_t)(ebp + 0xffffff70u);
/* e19afc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e19afd: call dword ptr [0xe65dbc] */
  esp -= 4; W32(esp, 0xe19b03u); SPILL(); call_ind(R32(0xe65dbcu)); if (g_unwind) return; /* USER32!GetCursorPos */ RELOAD();
/* e19b03: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e19b06: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e19b08: call dword ptr [edx + 0x98] */
  { uint32_t t = R32((uint32_t)(edx + 0x98u)); esp -= 4; W32(esp, 0xe19b0eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e19b0e: lea ecx, [ebp - 0x90] */
  ecx = (uint32_t)(ebp + 0xffffff70u);
/* e19b14: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e19b15: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e19b16: call dword ptr [0xe65d64] */
  esp -= 4; W32(esp, 0xe19b1cu); SPILL(); call_ind(R32(0xe65d64u)); if (g_unwind) return; /* USER32!ScreenToClient */ RELOAD();
/* e19b1c: fild dword ptr [ebp - 0x90] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffff70u)); FPUSH(v); }
/* e19b22: mov edx, dword ptr [ebx + 0x2c] */
  edx = R32((uint32_t)(ebx + 0x2cu));
/* e19b25: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e19b27: fstp dword ptr [eax + 0x3c] */
  WF32((uint32_t)(eax + 0x3cu), ST0); FPOP();
/* e19b2a: mov ecx, dword ptr [ebx + 0x2c] */
  ecx = R32((uint32_t)(ebx + 0x2cu));
/* e19b2d: fild dword ptr [ebp - 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffff74u)); FPUSH(v); }
/* e19b33: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e19b35: fstp dword ptr [edx + 0x40] */
  WF32((uint32_t)(edx + 0x40u), ST0); FPOP();
/* e19b38: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e19b3b: test byte ptr [eax + 0x38], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x38u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e19b3f: je 0xe19b5a */
  if (zf) goto L_e19b5a;
L_e19b41: /* e19b41: mov cl, byte ptr [eax + 0x50] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x50u))) & 0xffu);
/* e19b44: cmp cl, 6 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x6u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e19b47: ja 0xe19b5a */
  if ((!cf && !zf)) goto L_e19b5a;
L_e19b49: /* e19b49: movzx ecx, cl */
  ecx = (uint32_t)((ecx & 0xffu));
/* e19b4c: mov edx, dword ptr [eax + ecx*4 + 0x1dc] */
  edx = R32((uint32_t)(eax + ecx*4 + 0x1dcu));
/* e19b53: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e19b54: call dword ptr [0xe65dc4] */
  esp -= 4; W32(esp, 0xe19b5au); SPILL(); call_ind(R32(0xe65dc4u)); if (g_unwind) return; /* USER32!SetCursor */ RELOAD();
L_e19b5a: /* e19b5a: xor eax, eax */
  eax = 0;
/* e19b5c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e19b5f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e19b66: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e19b67: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e19b68: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e19b69: mov esp, ebp */
  esp = ebp;
/* e19b6b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e19b6c: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_e197c5(void) {
  LOAD_REGS();
L_e197c5: /* e197c5: mov ecx, dword ptr [ebp - 0xdc] */
  ecx = R32((uint32_t)(ebp + 0xffffff24u));
/* e197cb: mov edx, dword ptr [ebp - 0xd4] */
  edx = R32((uint32_t)(ebp + 0xffffff2cu));
/* e197d1: lea eax, [edx + ecx] */
  eax = (uint32_t)(edx + ecx);
/* e197d4: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* e197d5: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* e197d7: mov edx, dword ptr [ebp - 0xd0] */
  edx = R32((uint32_t)(ebp + 0xffffff30u));
/* e197dd: mov ecx, eax */
  ecx = eax;
/* e197df: mov eax, dword ptr [ebp - 0xd8] */
  eax = R32((uint32_t)(ebp + 0xffffff28u));
/* e197e5: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e197e7: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* e197e8: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* e197ea: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* e197ed: sar ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* e197ef: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* e197f1: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* e197f4: mov dword ptr [ebp - 0x5c], esi */
  W32((uint32_t)(ebp + 0xffffffa4u), esi);
/* e197f7: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* e197fa: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
/* e197fd: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* e19800: mov dword ptr [ebp - 0x90], ecx */
  W32((uint32_t)(ebp + 0xffffff70u), ecx);
/* e19806: mov dword ptr [ebp - 0x8c], eax */
  W32((uint32_t)(ebp + 0xffffff74u), eax);
/* e1980c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_e19810: /* e19810: movsx edi, word ptr [ebp + 0x12] */
  edi = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(ebp + 0x12u)));
/* e19814: mov dword ptr [ebp - 0x3c], esi */
  W32((uint32_t)(ebp + 0xffffffc4u), esi);
/* e19817: movsx esi, si */
  esi = (uint32_t)(int32_t)(int16_t)((esi & 0xffffu));
/* e1981a: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* e1981c: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* e1981e: and edx, 0x13 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x13u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* e19821: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e19823: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* e19826: mov dword ptr [ebp - 0xa8], edi */
  W32((uint32_t)(ebp + 0xffffff58u), edi);
/* e1982c: mov ecx, esi */
  ecx = esi;
/* e1982e: jge 0xe19832 */
  if ((sf == of)) goto L_e19832;
L_e19830: /* e19830: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
L_e19832: /* e19832: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e19834: mov eax, edi */
  eax = edi;
/* e19836: jge 0xe1983a */
  if ((sf == of)) goto L_e1983a;
L_e19838: /* e19838: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
L_e1983a: /* e1983a: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* e1983d: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e1983f: mov ecx, dword ptr [ebp - 0x5c] */
  ecx = R32((uint32_t)(ebp + 0xffffffa4u));
/* e19842: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e19844: add ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* e19846: mov dword ptr [ebp - 0x5c], ecx */
  W32((uint32_t)(ebp + 0xffffffa4u), ecx);
/* e19849: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* e1984c: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* e1984f: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e19851: xor ebx, ebx */
  ebx = 0;
/* e19853: test dl, 1 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e19856: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* e19859: je 0xe19860 */
  if (zf) goto L_e19860;
L_e1985b: /* e1985b: mov ebx, 1 */
  ebx = 0x1u;
L_e19860: /* e19860: test dl, 2 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e19863: je 0xe19868 */
  if (zf) goto L_e19868;
L_e19865: /* e19865: or ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
L_e19868: /* e19868: test dl, 0x10 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e1986b: je 0xe19870 */
  if (zf) goto L_e19870;
L_e1986d: /* e1986d: or ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
L_e19870: /* e19870: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e19873: mov ecx, dword ptr [eax + 0x6c] */
  ecx = R32((uint32_t)(eax + 0x6cu));
/* e19876: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* e19878: call dword ptr [0xe65b8c] */
  esp -= 4; W32(esp, 0xe1987eu); SPILL(); f_6cce4b(); if (g_unwind) return; /* Engine!?KeyDown@UInput@@QAEEH@Z */ RELOAD();
/* e1987e: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e19880: je 0xe19888 */
  if (zf) goto L_e19888;
L_e19882: /* e19882: or ebx, 0x100 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
L_e19888: /* e19888: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e1988b: mov ecx, dword ptr [ecx + 0x6c] */
  ecx = R32((uint32_t)(ecx + 0x6cu));
/* e1988e: push 0x11 */
  { uint32_t v = 0x11u; esp -= 4; W32(esp, v); }
/* e19890: call dword ptr [0xe65b8c] */
  esp -= 4; W32(esp, 0xe19896u); SPILL(); f_6cce4b(); if (g_unwind) return; /* Engine!?KeyDown@UInput@@QAEEH@Z */ RELOAD();
/* e19896: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e19898: je 0xe198a0 */
  if (zf) goto L_e198a0;
L_e1989a: /* e1989a: or ebx, 0x80 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
L_e198a0: /* e198a0: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* e198a3: mov ecx, dword ptr [edx + 0x6c] */
  ecx = R32((uint32_t)(edx + 0x6cu));
/* e198a6: push 0x12 */
  { uint32_t v = 0x12u; esp -= 4; W32(esp, v); }
/* e198a8: call dword ptr [0xe65b8c] */
  esp -= 4; W32(esp, 0xe198aeu); SPILL(); f_6cce4b(); if (g_unwind) return; /* Engine!?KeyDown@UInput@@QAEEH@Z */ RELOAD();
/* e198ae: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e198b0: je 0xe198b8 */
  if (zf) goto L_e198b8;
L_e198b2: /* e198b2: or ebx, 0x200 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
L_e198b8: /* e198b8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e198ba: jne 0xe198c0 */
  if (!zf) goto L_e198c0;
L_e198bc: /* e198bc: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e198be: je 0xe198ed */
  if (zf) goto L_e198ed;
L_e198c0: /* e198c0: fild dword ptr [ebp - 0xa8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffff58u)); FPUSH(v); }
/* e198c6: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* e198c9: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* e198cc: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e198cf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e198d1: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e198d4: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* e198d8: mov dword ptr [ebp - 0x18], 1 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x1u);
/* e198df: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* e198e2: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e198e5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e198e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e198e7: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0xe198edu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e198ed: /* e198ed: mov ecx, dword ptr [0xe65920] */
  ecx = R32((uint32_t)(0xe65920u));
/* e198f3: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e198f6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e198f8: push 0x200 */
  { uint32_t v = 0x200u; esp -= 4; W32(esp, v); }
/* e198fd: push 0x200 */
  { uint32_t v = 0x200u; esp -= 4; W32(esp, v); }
/* e19902: je 0xe19920 */
  if (zf) goto L_e19920;
L_e19904: /* e19904: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* e19907: mov eax, dword ptr [edx + 0x194] */
  eax = R32((uint32_t)(edx + 0x194u));
/* e1990d: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e19910: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e19911: lea edx, [ebp - 0xf8] */
  edx = (uint32_t)(ebp + 0xffffff08u);
/* e19917: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e19918: call dword ptr [0xe65d68] */
  esp -= 4; W32(esp, 0xe1991eu); SPILL(); call_ind(R32(0xe65d68u)); if (g_unwind) return; /* USER32!PeekMessageW */ RELOAD();
/* e1991e: jmp 0xe1993a */
  goto L_e1993a;
L_e19920: /* e19920: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e19923: mov ecx, dword ptr [eax + 0x194] */
  ecx = R32((uint32_t)(eax + 0x194u));
/* e19929: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* e1992c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e1992d: lea eax, [ebp - 0xf8] */
  eax = (uint32_t)(ebp + 0xffffff08u);
/* e19933: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e19934: call dword ptr [0xe65d6c] */
  esp -= 4; W32(esp, 0xe1993au); SPILL(); call_ind(R32(0xe65d6cu)); if (g_unwind) return; /* USER32!PeekMessageA */ RELOAD();
L_e1993a: /* e1993a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e1993c: je 0xe1995d */
  if (zf) goto L_e1995d;
L_e1993e: /* e1993e: mov esi, dword ptr [ebp - 0xec] */
  esi = R32((uint32_t)(ebp + 0xffffff14u));
/* e19944: mov edx, dword ptr [ebp - 0xf0] */
  edx = R32((uint32_t)(ebp + 0xffffff10u));
/* e1994a: movsx ecx, word ptr [ebp - 0x3c] */
  ecx = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(ebp + 0xffffffc4u)));
/* e1994e: movsx eax, word ptr [ebp - 0x3a] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(ebp + 0xffffffc6u)));
/* e19952: mov dword ptr [ebp + 0x10], esi */
  W32((uint32_t)(ebp + 0x10u), esi);
/* e19955: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* e19958: jmp 0xe19810 */
  goto L_e19810;
L_e1995d: /* e1995d: cmp dword ptr [ebp - 0x5c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e19961: jle 0xe19990 */
  if ((zf || sf != of)) goto L_e19990;
L_e19963: /* e19963: mov al, byte ptr [ebp + 0xc] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xcu))) & 0xffu);
/* e19966: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e19968: je 0xe19974 */
  if (zf) goto L_e19974;
L_e1996a: /* e1996a: mov dword ptr [0xe64910], 1 */
  W32((uint32_t)(0xe64910u), 0x1u);
L_e19974: /* e19974: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e19976: je 0xe19982 */
  if (zf) goto L_e19982;
L_e19978: /* e19978: mov dword ptr [0xe64908], 1 */
  W32((uint32_t)(0xe64908u), 0x1u);
L_e19982: /* e19982: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e19984: je 0xe19990 */
  if (zf) goto L_e19990;
L_e19986: /* e19986: mov dword ptr [0xe64900], 1 */
  W32((uint32_t)(0xe64900u), 0x1u);
L_e19990: /* e19990: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* e19993: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e19995: je 0xe199ad */
  if (zf) goto L_e199ad;
L_e19997: /* e19997: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* e1999a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e1999b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e1999e: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e199a1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e199a3: push 0xe4 */
  { uint32_t v = 0xe4u; esp -= 4; W32(esp, v); }
/* e199a8: call 0xe111c2 */
  esp -= 4; W32(esp, 0xe199adu); SPILL(); f_e111c2(); if (g_unwind) return; RELOAD();
L_e199ad: /* e199ad: mov esi, dword ptr [ebp - 0x28] */
  esi = R32((uint32_t)(ebp + 0xffffffd8u));
/* e199b0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e199b2: je 0xe199d1 */
  if (zf) goto L_e199d1;
L_e199b4: /* e199b4: mov ecx, esi */
  ecx = esi;
/* e199b6: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
/* e199b8: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* e199bb: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* e199be: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e199bf: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e199c2: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e199c5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e199c7: push 0xe5 */
  { uint32_t v = 0xe5u; esp -= 4; W32(esp, v); }
/* e199cc: call 0xe111c2 */
  esp -= 4; W32(esp, 0xe199d1u); SPILL(); f_e111c2(); if (g_unwind) return; RELOAD();
L_e199d1: /* e199d1: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e199d3: jne 0xe199d9 */
  if (!zf) goto L_e199d9;
L_e199d5: /* e199d5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e199d7: je 0xe19a23 */
  if (zf) goto L_e19a23;
L_e199d9: /* e199d9: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e199dc: call dword ptr [0xe65860] */
  esp -= 4; W32(esp, 0xe199e2u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* e199e2: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* e199e5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e199e8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e199ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e199eb: call dword ptr [edx + 0xc0] */
  { uint32_t t = R32((uint32_t)(edx + 0xc0u)); esp -= 4; W32(esp, 0xe199f1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e199f1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e199f3: jne 0xe19a23 */
  if (!zf) goto L_e19a23;
L_e199f5: /* e199f5: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* e199f8: mov eax, dword ptr [edx + 0x194] */
  eax = R32((uint32_t)(edx + 0x194u));
/* e199fe: lea ecx, [ebp - 0x90] */
  ecx = (uint32_t)(ebp + 0xffffff70u);
/* e19a04: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e19a05: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e19a08: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e19a09: call dword ptr [0xe65d7c] */
  esp -= 4; W32(esp, 0xe19a0fu); SPILL(); call_ind(R32(0xe65d7cu)); if (g_unwind) return; /* USER32!ClientToScreen */ RELOAD();
/* e19a0f: mov edx, dword ptr [ebp - 0x8c] */
  edx = R32((uint32_t)(ebp + 0xffffff74u));
/* e19a15: mov eax, dword ptr [ebp - 0x90] */
  eax = R32((uint32_t)(ebp + 0xffffff70u));
/* e19a1b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e19a1c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e19a1d: call dword ptr [0xe65dc0] */
  esp -= 4; W32(esp, 0xe19a23u); SPILL(); call_ind(R32(0xe65dc0u)); if (g_unwind) return; /* USER32!SetCursorPos */ RELOAD();
L_e19a23: /* e19a23: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* e19a26: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e19a28: je 0xe19a75 */
  if (zf) goto L_e19a75;
L_e19a2a: /* e19a2a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e19a2d: call dword ptr [0xe65b54] */
  esp -= 4; W32(esp, 0xe19a33u); SPILL(); f_6c4c78(); if (g_unwind) return; /* Engine!?IsRealtime@UViewport@@QAEHXZ */ RELOAD();
/* e19a33: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e19a35: jne 0xe19a75 */
  if (!zf) goto L_e19a75;
L_e19a37: /* e19a37: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e19a3a: mov ecx, dword ptr [ecx + 0x6c] */
  ecx = R32((uint32_t)(ecx + 0x6cu));
/* e19a3d: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* e19a3f: call dword ptr [0xe65b8c] */
  esp -= 4; W32(esp, 0xe19a45u); SPILL(); f_6cce4b(); if (g_unwind) return; /* Engine!?KeyDown@UInput@@QAEEH@Z */ RELOAD();
/* e19a45: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e19a47: je 0xe19a68 */
  if (zf) goto L_e19a68;
L_e19a49: /* e19a49: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* e19a4c: xor esi, esi */
  esi = 0;
/* e19a4e: mov edi, edi */
  edi = edi;
L_e19a50: /* e19a50: cmp esi, dword ptr [edi + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e19a53: jge 0xe19a75 */
  if ((sf == of)) goto L_e19a75;
L_e19a55: /* e19a55: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* e19a58: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* e19a5b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e19a5d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e19a5f: call dword ptr [eax + 0xa4] */
  { uint32_t t = R32((uint32_t)(eax + 0xa4u)); esp -= 4; W32(esp, 0xe19a65u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e19a65: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* e19a66: jmp 0xe19a50 */
  goto L_e19a50;
L_e19a68: /* e19a68: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e19a6b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e19a6d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e19a6f: call dword ptr [edx + 0xa4] */
  { uint32_t t = R32((uint32_t)(edx + 0xa4u)); esp -= 4; W32(esp, 0xe19a75u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e19a75: /* e19a75: mov edi, dword ptr [0xe65d70] */
  edi = R32((uint32_t)(0xe65d70u));
/* e19a7b: mov ebx, dword ptr [0xe65d74] */
  ebx = R32((uint32_t)(0xe65d74u));
/* e19a81: mov esi, dword ptr [0xe65d6c] */
  esi = R32((uint32_t)(0xe65d6cu));
/* e19a87: jmp 0xe19a90 */
  goto L_e19a90;
L_e19a90: /* e19a90: mov eax, dword ptr [0xe65920] */
  eax = R32((uint32_t)(0xe65920u));
/* e19a95: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e19a98: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e19a9a: push 0x108 */
  { uint32_t v = 0x108u; esp -= 4; W32(esp, v); }
/* e19a9f: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* e19aa4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e19aa6: je 0xe19ab7 */
  if (zf) goto L_e19ab7;
L_e19aa8: /* e19aa8: lea ecx, [ebp - 0xf8] */
  ecx = (uint32_t)(ebp + 0xffffff08u);
/* e19aae: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e19aaf: call dword ptr [0xe65d68] */
  esp -= 4; W32(esp, 0xe19ab5u); SPILL(); call_ind(R32(0xe65d68u)); if (g_unwind) return; /* USER32!PeekMessageW */ RELOAD();
/* e19ab5: jmp 0xe19ac0 */
  goto L_e19ac0;
L_e19ab7: /* e19ab7: lea edx, [ebp - 0xf8] */
  edx = (uint32_t)(ebp + 0xffffff08u);
/* e19abd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e19abe: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xe19ac0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e19ac0: /* e19ac0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e19ac2: je 0xe19b5a */
  if (zf) goto L_e19b5a;
L_e19ac8: /* e19ac8: lea eax, [ebp - 0xf8] */
  eax = (uint32_t)(ebp + 0xffffff08u);
/* e19ace: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e19acf: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe19ad1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e19ad1: mov ecx, dword ptr [0xe65920] */
  ecx = R32((uint32_t)(0xe65920u));
/* e19ad7: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e19ada: je 0xe19ae7 */
  if (zf) goto L_e19ae7;
L_e19adc: /* e19adc: lea edx, [ebp - 0xf8] */
  edx = (uint32_t)(ebp + 0xffffff08u);
/* e19ae2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e19ae3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xe19ae5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e19ae5: jmp 0xe19a90 */
  goto L_e19a90;
L_e19ae7: /* e19ae7: lea eax, [ebp - 0xf8] */
  eax = (uint32_t)(ebp + 0xffffff08u);
/* e19aed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e19aee: call dword ptr [0xe65d78] */
  esp -= 4; W32(esp, 0xe19af4u); SPILL(); call_ind(R32(0xe65d78u)); if (g_unwind) return; /* USER32!DispatchMessageA */ RELOAD();
/* e19af4: jmp 0xe19a90 */
  goto L_e19a90;
L_e19b5a: /* e19b5a: xor eax, eax */
  eax = 0;
/* e19b5c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e19b5f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e19b66: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e19b67: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e19b68: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e19b69: mov esp, ebp */
  esp = ebp;
/* e19b6b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e19b6c: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_e19920(void) {
  LOAD_REGS();
  goto L_e19920;
L_e19810: /* e19810: movsx edi, word ptr [ebp + 0x12] */
  edi = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(ebp + 0x12u)));
/* e19814: mov dword ptr [ebp - 0x3c], esi */
  W32((uint32_t)(ebp + 0xffffffc4u), esi);
/* e19817: movsx esi, si */
  esi = (uint32_t)(int32_t)(int16_t)((esi & 0xffffu));
/* e1981a: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* e1981c: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* e1981e: and edx, 0x13 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x13u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* e19821: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e19823: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* e19826: mov dword ptr [ebp - 0xa8], edi */
  W32((uint32_t)(ebp + 0xffffff58u), edi);
/* e1982c: mov ecx, esi */
  ecx = esi;
/* e1982e: jge 0xe19832 */
  if ((sf == of)) goto L_e19832;
L_e19830: /* e19830: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
L_e19832: /* e19832: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e19834: mov eax, edi */
  eax = edi;
/* e19836: jge 0xe1983a */
  if ((sf == of)) goto L_e1983a;
L_e19838: /* e19838: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
L_e1983a: /* e1983a: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* e1983d: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e1983f: mov ecx, dword ptr [ebp - 0x5c] */
  ecx = R32((uint32_t)(ebp + 0xffffffa4u));
/* e19842: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e19844: add ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* e19846: mov dword ptr [ebp - 0x5c], ecx */
  W32((uint32_t)(ebp + 0xffffffa4u), ecx);
/* e19849: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* e1984c: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* e1984f: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e19851: xor ebx, ebx */
  ebx = 0;
/* e19853: test dl, 1 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e19856: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* e19859: je 0xe19860 */
  if (zf) goto L_e19860;
L_e1985b: /* e1985b: mov ebx, 1 */
  ebx = 0x1u;
L_e19860: /* e19860: test dl, 2 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e19863: je 0xe19868 */
  if (zf) goto L_e19868;
L_e19865: /* e19865: or ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
L_e19868: /* e19868: test dl, 0x10 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e1986b: je 0xe19870 */
  if (zf) goto L_e19870;
L_e1986d: /* e1986d: or ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
L_e19870: /* e19870: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e19873: mov ecx, dword ptr [eax + 0x6c] */
  ecx = R32((uint32_t)(eax + 0x6cu));
/* e19876: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* e19878: call dword ptr [0xe65b8c] */
  esp -= 4; W32(esp, 0xe1987eu); SPILL(); f_6cce4b(); if (g_unwind) return; /* Engine!?KeyDown@UInput@@QAEEH@Z */ RELOAD();
/* e1987e: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e19880: je 0xe19888 */
  if (zf) goto L_e19888;
L_e19882: /* e19882: or ebx, 0x100 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
L_e19888: /* e19888: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e1988b: mov ecx, dword ptr [ecx + 0x6c] */
  ecx = R32((uint32_t)(ecx + 0x6cu));
/* e1988e: push 0x11 */
  { uint32_t v = 0x11u; esp -= 4; W32(esp, v); }
/* e19890: call dword ptr [0xe65b8c] */
  esp -= 4; W32(esp, 0xe19896u); SPILL(); f_6cce4b(); if (g_unwind) return; /* Engine!?KeyDown@UInput@@QAEEH@Z */ RELOAD();
/* e19896: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e19898: je 0xe198a0 */
  if (zf) goto L_e198a0;
L_e1989a: /* e1989a: or ebx, 0x80 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
L_e198a0: /* e198a0: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* e198a3: mov ecx, dword ptr [edx + 0x6c] */
  ecx = R32((uint32_t)(edx + 0x6cu));
/* e198a6: push 0x12 */
  { uint32_t v = 0x12u; esp -= 4; W32(esp, v); }
/* e198a8: call dword ptr [0xe65b8c] */
  esp -= 4; W32(esp, 0xe198aeu); SPILL(); f_6cce4b(); if (g_unwind) return; /* Engine!?KeyDown@UInput@@QAEEH@Z */ RELOAD();
/* e198ae: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e198b0: je 0xe198b8 */
  if (zf) goto L_e198b8;
L_e198b2: /* e198b2: or ebx, 0x200 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
L_e198b8: /* e198b8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e198ba: jne 0xe198c0 */
  if (!zf) goto L_e198c0;
L_e198bc: /* e198bc: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e198be: je 0xe198ed */
  if (zf) goto L_e198ed;
L_e198c0: /* e198c0: fild dword ptr [ebp - 0xa8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffff58u)); FPUSH(v); }
/* e198c6: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* e198c9: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* e198cc: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e198cf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e198d1: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e198d4: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* e198d8: mov dword ptr [ebp - 0x18], 1 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x1u);
/* e198df: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* e198e2: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e198e5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e198e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e198e7: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0xe198edu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e198ed: /* e198ed: mov ecx, dword ptr [0xe65920] */
  ecx = R32((uint32_t)(0xe65920u));
/* e198f3: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e198f6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e198f8: push 0x200 */
  { uint32_t v = 0x200u; esp -= 4; W32(esp, v); }
/* e198fd: push 0x200 */
  { uint32_t v = 0x200u; esp -= 4; W32(esp, v); }
/* e19902: je 0xe19920 */
  if (zf) goto L_e19920;
L_e19904: /* e19904: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* e19907: mov eax, dword ptr [edx + 0x194] */
  eax = R32((uint32_t)(edx + 0x194u));
/* e1990d: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e19910: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e19911: lea edx, [ebp - 0xf8] */
  edx = (uint32_t)(ebp + 0xffffff08u);
/* e19917: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e19918: call dword ptr [0xe65d68] */
  esp -= 4; W32(esp, 0xe1991eu); SPILL(); call_ind(R32(0xe65d68u)); if (g_unwind) return; /* USER32!PeekMessageW */ RELOAD();
/* e1991e: jmp 0xe1993a */
  goto L_e1993a;
L_e19920: /* e19920: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e19923: mov ecx, dword ptr [eax + 0x194] */
  ecx = R32((uint32_t)(eax + 0x194u));
/* e19929: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* e1992c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e1992d: lea eax, [ebp - 0xf8] */
  eax = (uint32_t)(ebp + 0xffffff08u);
/* e19933: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e19934: call dword ptr [0xe65d6c] */
  esp -= 4; W32(esp, 0xe1993au); SPILL(); call_ind(R32(0xe65d6cu)); if (g_unwind) return; /* USER32!PeekMessageA */ RELOAD();
L_e1993a: /* e1993a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e1993c: je 0xe1995d */
  if (zf) goto L_e1995d;
L_e1993e: /* e1993e: mov esi, dword ptr [ebp - 0xec] */
  esi = R32((uint32_t)(ebp + 0xffffff14u));
/* e19944: mov edx, dword ptr [ebp - 0xf0] */
  edx = R32((uint32_t)(ebp + 0xffffff10u));
/* e1994a: movsx ecx, word ptr [ebp - 0x3c] */
  ecx = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(ebp + 0xffffffc4u)));
/* e1994e: movsx eax, word ptr [ebp - 0x3a] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(ebp + 0xffffffc6u)));
/* e19952: mov dword ptr [ebp + 0x10], esi */
  W32((uint32_t)(ebp + 0x10u), esi);
/* e19955: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* e19958: jmp 0xe19810 */
  goto L_e19810;
L_e1995d: /* e1995d: cmp dword ptr [ebp - 0x5c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e19961: jle 0xe19990 */
  if ((zf || sf != of)) goto L_e19990;
L_e19963: /* e19963: mov al, byte ptr [ebp + 0xc] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xcu))) & 0xffu);
/* e19966: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e19968: je 0xe19974 */
  if (zf) goto L_e19974;
L_e1996a: /* e1996a: mov dword ptr [0xe64910], 1 */
  W32((uint32_t)(0xe64910u), 0x1u);
L_e19974: /* e19974: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e19976: je 0xe19982 */
  if (zf) goto L_e19982;
L_e19978: /* e19978: mov dword ptr [0xe64908], 1 */
  W32((uint32_t)(0xe64908u), 0x1u);
L_e19982: /* e19982: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e19984: je 0xe19990 */
  if (zf) goto L_e19990;
L_e19986: /* e19986: mov dword ptr [0xe64900], 1 */
  W32((uint32_t)(0xe64900u), 0x1u);
L_e19990: /* e19990: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* e19993: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e19995: je 0xe199ad */
  if (zf) goto L_e199ad;
L_e19997: /* e19997: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* e1999a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e1999b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e1999e: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e199a1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e199a3: push 0xe4 */
  { uint32_t v = 0xe4u; esp -= 4; W32(esp, v); }
/* e199a8: call 0xe111c2 */
  esp -= 4; W32(esp, 0xe199adu); SPILL(); f_e111c2(); if (g_unwind) return; RELOAD();
L_e199ad: /* e199ad: mov esi, dword ptr [ebp - 0x28] */
  esi = R32((uint32_t)(ebp + 0xffffffd8u));
/* e199b0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e199b2: je 0xe199d1 */
  if (zf) goto L_e199d1;
L_e199b4: /* e199b4: mov ecx, esi */
  ecx = esi;
/* e199b6: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
/* e199b8: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* e199bb: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* e199be: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e199bf: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e199c2: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e199c5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e199c7: push 0xe5 */
  { uint32_t v = 0xe5u; esp -= 4; W32(esp, v); }
/* e199cc: call 0xe111c2 */
  esp -= 4; W32(esp, 0xe199d1u); SPILL(); f_e111c2(); if (g_unwind) return; RELOAD();
L_e199d1: /* e199d1: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e199d3: jne 0xe199d9 */
  if (!zf) goto L_e199d9;
L_e199d5: /* e199d5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e199d7: je 0xe19a23 */
  if (zf) goto L_e19a23;
L_e199d9: /* e199d9: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e199dc: call dword ptr [0xe65860] */
  esp -= 4; W32(esp, 0xe199e2u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* e199e2: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* e199e5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e199e8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e199ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e199eb: call dword ptr [edx + 0xc0] */
  { uint32_t t = R32((uint32_t)(edx + 0xc0u)); esp -= 4; W32(esp, 0xe199f1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e199f1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e199f3: jne 0xe19a23 */
  if (!zf) goto L_e19a23;
L_e199f5: /* e199f5: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* e199f8: mov eax, dword ptr [edx + 0x194] */
  eax = R32((uint32_t)(edx + 0x194u));
/* e199fe: lea ecx, [ebp - 0x90] */
  ecx = (uint32_t)(ebp + 0xffffff70u);
/* e19a04: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e19a05: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e19a08: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e19a09: call dword ptr [0xe65d7c] */
  esp -= 4; W32(esp, 0xe19a0fu); SPILL(); call_ind(R32(0xe65d7cu)); if (g_unwind) return; /* USER32!ClientToScreen */ RELOAD();
/* e19a0f: mov edx, dword ptr [ebp - 0x8c] */
  edx = R32((uint32_t)(ebp + 0xffffff74u));
/* e19a15: mov eax, dword ptr [ebp - 0x90] */
  eax = R32((uint32_t)(ebp + 0xffffff70u));
/* e19a1b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e19a1c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e19a1d: call dword ptr [0xe65dc0] */
  esp -= 4; W32(esp, 0xe19a23u); SPILL(); call_ind(R32(0xe65dc0u)); if (g_unwind) return; /* USER32!SetCursorPos */ RELOAD();
L_e19a23: /* e19a23: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* e19a26: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e19a28: je 0xe19a75 */
  if (zf) goto L_e19a75;
L_e19a2a: /* e19a2a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e19a2d: call dword ptr [0xe65b54] */
  esp -= 4; W32(esp, 0xe19a33u); SPILL(); f_6c4c78(); if (g_unwind) return; /* Engine!?IsRealtime@UViewport@@QAEHXZ */ RELOAD();
/* e19a33: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e19a35: jne 0xe19a75 */
  if (!zf) goto L_e19a75;
L_e19a37: /* e19a37: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e19a3a: mov ecx, dword ptr [ecx + 0x6c] */
  ecx = R32((uint32_t)(ecx + 0x6cu));
/* e19a3d: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* e19a3f: call dword ptr [0xe65b8c] */
  esp -= 4; W32(esp, 0xe19a45u); SPILL(); f_6cce4b(); if (g_unwind) return; /* Engine!?KeyDown@UInput@@QAEEH@Z */ RELOAD();
/* e19a45: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e19a47: je 0xe19a68 */
  if (zf) goto L_e19a68;
L_e19a49: /* e19a49: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* e19a4c: xor esi, esi */
  esi = 0;
/* e19a4e: mov edi, edi */
  edi = edi;
L_e19a50: /* e19a50: cmp esi, dword ptr [edi + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e19a53: jge 0xe19a75 */
  if ((sf == of)) goto L_e19a75;
L_e19a55: /* e19a55: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* e19a58: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* e19a5b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e19a5d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e19a5f: call dword ptr [eax + 0xa4] */
  { uint32_t t = R32((uint32_t)(eax + 0xa4u)); esp -= 4; W32(esp, 0xe19a65u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e19a65: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* e19a66: jmp 0xe19a50 */
  goto L_e19a50;
L_e19a68: /* e19a68: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e19a6b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e19a6d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e19a6f: call dword ptr [edx + 0xa4] */
  { uint32_t t = R32((uint32_t)(edx + 0xa4u)); esp -= 4; W32(esp, 0xe19a75u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e19a75: /* e19a75: mov edi, dword ptr [0xe65d70] */
  edi = R32((uint32_t)(0xe65d70u));
/* e19a7b: mov ebx, dword ptr [0xe65d74] */
  ebx = R32((uint32_t)(0xe65d74u));
/* e19a81: mov esi, dword ptr [0xe65d6c] */
  esi = R32((uint32_t)(0xe65d6cu));
/* e19a87: jmp 0xe19a90 */
  goto L_e19a90;
L_e19a90: /* e19a90: mov eax, dword ptr [0xe65920] */
  eax = R32((uint32_t)(0xe65920u));
/* e19a95: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e19a98: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e19a9a: push 0x108 */
  { uint32_t v = 0x108u; esp -= 4; W32(esp, v); }
/* e19a9f: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* e19aa4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e19aa6: je 0xe19ab7 */
  if (zf) goto L_e19ab7;
L_e19aa8: /* e19aa8: lea ecx, [ebp - 0xf8] */
  ecx = (uint32_t)(ebp + 0xffffff08u);
/* e19aae: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e19aaf: call dword ptr [0xe65d68] */
  esp -= 4; W32(esp, 0xe19ab5u); SPILL(); call_ind(R32(0xe65d68u)); if (g_unwind) return; /* USER32!PeekMessageW */ RELOAD();
/* e19ab5: jmp 0xe19ac0 */
  goto L_e19ac0;
L_e19ab7: /* e19ab7: lea edx, [ebp - 0xf8] */
  edx = (uint32_t)(ebp + 0xffffff08u);
/* e19abd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e19abe: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xe19ac0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e19ac0: /* e19ac0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e19ac2: je 0xe19b5a */
  if (zf) goto L_e19b5a;
L_e19ac8: /* e19ac8: lea eax, [ebp - 0xf8] */
  eax = (uint32_t)(ebp + 0xffffff08u);
/* e19ace: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e19acf: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe19ad1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e19ad1: mov ecx, dword ptr [0xe65920] */
  ecx = R32((uint32_t)(0xe65920u));
/* e19ad7: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e19ada: je 0xe19ae7 */
  if (zf) goto L_e19ae7;
L_e19adc: /* e19adc: lea edx, [ebp - 0xf8] */
  edx = (uint32_t)(ebp + 0xffffff08u);
/* e19ae2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e19ae3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xe19ae5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e19ae5: jmp 0xe19a90 */
  goto L_e19a90;
L_e19ae7: /* e19ae7: lea eax, [ebp - 0xf8] */
  eax = (uint32_t)(ebp + 0xffffff08u);
/* e19aed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e19aee: call dword ptr [0xe65d78] */
  esp -= 4; W32(esp, 0xe19af4u); SPILL(); call_ind(R32(0xe65d78u)); if (g_unwind) return; /* USER32!DispatchMessageA */ RELOAD();
/* e19af4: jmp 0xe19a90 */
  goto L_e19a90;
L_e19b5a: /* e19b5a: xor eax, eax */
  eax = 0;
/* e19b5c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e19b5f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e19b66: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e19b67: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e19b68: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e19b69: mov esp, ebp */
  esp = ebp;
/* e19b6b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e19b6c: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_e1995d(void) {
  LOAD_REGS();
L_e1995d: /* e1995d: cmp dword ptr [ebp - 0x5c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e19961: jle 0xe19990 */
  if ((zf || sf != of)) goto L_e19990;
L_e19963: /* e19963: mov al, byte ptr [ebp + 0xc] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xcu))) & 0xffu);
/* e19966: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e19968: je 0xe19974 */
  if (zf) goto L_e19974;
L_e1996a: /* e1996a: mov dword ptr [0xe64910], 1 */
  W32((uint32_t)(0xe64910u), 0x1u);
L_e19974: /* e19974: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e19976: je 0xe19982 */
  if (zf) goto L_e19982;
L_e19978: /* e19978: mov dword ptr [0xe64908], 1 */
  W32((uint32_t)(0xe64908u), 0x1u);
L_e19982: /* e19982: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e19984: je 0xe19990 */
  if (zf) goto L_e19990;
L_e19986: /* e19986: mov dword ptr [0xe64900], 1 */
  W32((uint32_t)(0xe64900u), 0x1u);
L_e19990: /* e19990: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* e19993: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e19995: je 0xe199ad */
  if (zf) goto L_e199ad;
L_e19997: /* e19997: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* e1999a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e1999b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e1999e: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e199a1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e199a3: push 0xe4 */
  { uint32_t v = 0xe4u; esp -= 4; W32(esp, v); }
/* e199a8: call 0xe111c2 */
  esp -= 4; W32(esp, 0xe199adu); SPILL(); f_e111c2(); if (g_unwind) return; RELOAD();
L_e199ad: /* e199ad: mov esi, dword ptr [ebp - 0x28] */
  esi = R32((uint32_t)(ebp + 0xffffffd8u));
/* e199b0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e199b2: je 0xe199d1 */
  if (zf) goto L_e199d1;
L_e199b4: /* e199b4: mov ecx, esi */
  ecx = esi;
/* e199b6: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
/* e199b8: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* e199bb: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* e199be: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e199bf: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e199c2: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e199c5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e199c7: push 0xe5 */
  { uint32_t v = 0xe5u; esp -= 4; W32(esp, v); }
/* e199cc: call 0xe111c2 */
  esp -= 4; W32(esp, 0xe199d1u); SPILL(); f_e111c2(); if (g_unwind) return; RELOAD();
L_e199d1: /* e199d1: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e199d3: jne 0xe199d9 */
  if (!zf) goto L_e199d9;
L_e199d5: /* e199d5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e199d7: je 0xe19a23 */
  if (zf) goto L_e19a23;
L_e199d9: /* e199d9: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e199dc: call dword ptr [0xe65860] */
  esp -= 4; W32(esp, 0xe199e2u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* e199e2: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* e199e5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e199e8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e199ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e199eb: call dword ptr [edx + 0xc0] */
  { uint32_t t = R32((uint32_t)(edx + 0xc0u)); esp -= 4; W32(esp, 0xe199f1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e199f1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e199f3: jne 0xe19a23 */
  if (!zf) goto L_e19a23;
L_e199f5: /* e199f5: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* e199f8: mov eax, dword ptr [edx + 0x194] */
  eax = R32((uint32_t)(edx + 0x194u));
/* e199fe: lea ecx, [ebp - 0x90] */
  ecx = (uint32_t)(ebp + 0xffffff70u);
/* e19a04: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e19a05: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e19a08: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e19a09: call dword ptr [0xe65d7c] */
  esp -= 4; W32(esp, 0xe19a0fu); SPILL(); call_ind(R32(0xe65d7cu)); if (g_unwind) return; /* USER32!ClientToScreen */ RELOAD();
/* e19a0f: mov edx, dword ptr [ebp - 0x8c] */
  edx = R32((uint32_t)(ebp + 0xffffff74u));
/* e19a15: mov eax, dword ptr [ebp - 0x90] */
  eax = R32((uint32_t)(ebp + 0xffffff70u));
/* e19a1b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e19a1c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e19a1d: call dword ptr [0xe65dc0] */
  esp -= 4; W32(esp, 0xe19a23u); SPILL(); call_ind(R32(0xe65dc0u)); if (g_unwind) return; /* USER32!SetCursorPos */ RELOAD();
L_e19a23: /* e19a23: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* e19a26: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e19a28: je 0xe19a75 */
  if (zf) goto L_e19a75;
L_e19a2a: /* e19a2a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e19a2d: call dword ptr [0xe65b54] */
  esp -= 4; W32(esp, 0xe19a33u); SPILL(); f_6c4c78(); if (g_unwind) return; /* Engine!?IsRealtime@UViewport@@QAEHXZ */ RELOAD();
/* e19a33: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e19a35: jne 0xe19a75 */
  if (!zf) goto L_e19a75;
L_e19a37: /* e19a37: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e19a3a: mov ecx, dword ptr [ecx + 0x6c] */
  ecx = R32((uint32_t)(ecx + 0x6cu));
/* e19a3d: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* e19a3f: call dword ptr [0xe65b8c] */
  esp -= 4; W32(esp, 0xe19a45u); SPILL(); f_6cce4b(); if (g_unwind) return; /* Engine!?KeyDown@UInput@@QAEEH@Z */ RELOAD();
/* e19a45: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e19a47: je 0xe19a68 */
  if (zf) goto L_e19a68;
L_e19a49: /* e19a49: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* e19a4c: xor esi, esi */
  esi = 0;
/* e19a4e: mov edi, edi */
  edi = edi;
L_e19a50: /* e19a50: cmp esi, dword ptr [edi + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e19a53: jge 0xe19a75 */
  if ((sf == of)) goto L_e19a75;
L_e19a55: /* e19a55: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* e19a58: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* e19a5b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e19a5d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e19a5f: call dword ptr [eax + 0xa4] */
  { uint32_t t = R32((uint32_t)(eax + 0xa4u)); esp -= 4; W32(esp, 0xe19a65u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e19a65: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* e19a66: jmp 0xe19a50 */
  goto L_e19a50;
L_e19a68: /* e19a68: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e19a6b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e19a6d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e19a6f: call dword ptr [edx + 0xa4] */
  { uint32_t t = R32((uint32_t)(edx + 0xa4u)); esp -= 4; W32(esp, 0xe19a75u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e19a75: /* e19a75: mov edi, dword ptr [0xe65d70] */
  edi = R32((uint32_t)(0xe65d70u));
/* e19a7b: mov ebx, dword ptr [0xe65d74] */
  ebx = R32((uint32_t)(0xe65d74u));
/* e19a81: mov esi, dword ptr [0xe65d6c] */
  esi = R32((uint32_t)(0xe65d6cu));
/* e19a87: jmp 0xe19a90 */
  goto L_e19a90;
L_e19a90: /* e19a90: mov eax, dword ptr [0xe65920] */
  eax = R32((uint32_t)(0xe65920u));
/* e19a95: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e19a98: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e19a9a: push 0x108 */
  { uint32_t v = 0x108u; esp -= 4; W32(esp, v); }
/* e19a9f: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* e19aa4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e19aa6: je 0xe19ab7 */
  if (zf) goto L_e19ab7;
L_e19aa8: /* e19aa8: lea ecx, [ebp - 0xf8] */
  ecx = (uint32_t)(ebp + 0xffffff08u);
/* e19aae: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e19aaf: call dword ptr [0xe65d68] */
  esp -= 4; W32(esp, 0xe19ab5u); SPILL(); call_ind(R32(0xe65d68u)); if (g_unwind) return; /* USER32!PeekMessageW */ RELOAD();
/* e19ab5: jmp 0xe19ac0 */
  goto L_e19ac0;
L_e19ab7: /* e19ab7: lea edx, [ebp - 0xf8] */
  edx = (uint32_t)(ebp + 0xffffff08u);
/* e19abd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e19abe: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xe19ac0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e19ac0: /* e19ac0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e19ac2: je 0xe19b5a */
  if (zf) goto L_e19b5a;
L_e19ac8: /* e19ac8: lea eax, [ebp - 0xf8] */
  eax = (uint32_t)(ebp + 0xffffff08u);
/* e19ace: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e19acf: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe19ad1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e19ad1: mov ecx, dword ptr [0xe65920] */
  ecx = R32((uint32_t)(0xe65920u));
/* e19ad7: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e19ada: je 0xe19ae7 */
  if (zf) goto L_e19ae7;
L_e19adc: /* e19adc: lea edx, [ebp - 0xf8] */
  edx = (uint32_t)(ebp + 0xffffff08u);
/* e19ae2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e19ae3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xe19ae5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e19ae5: jmp 0xe19a90 */
  goto L_e19a90;
L_e19ae7: /* e19ae7: lea eax, [ebp - 0xf8] */
  eax = (uint32_t)(ebp + 0xffffff08u);
/* e19aed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e19aee: call dword ptr [0xe65d78] */
  esp -= 4; W32(esp, 0xe19af4u); SPILL(); call_ind(R32(0xe65d78u)); if (g_unwind) return; /* USER32!DispatchMessageA */ RELOAD();
/* e19af4: jmp 0xe19a90 */
  goto L_e19a90;
L_e19b5a: /* e19b5a: xor eax, eax */
  eax = 0;
/* e19b5c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e19b5f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e19b66: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e19b67: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e19b68: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e19b69: mov esp, ebp */
  esp = ebp;
/* e19b6b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e19b6c: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_e19a68(void) {
  LOAD_REGS();
L_e19a68: /* e19a68: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e19a6b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e19a6d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e19a6f: call dword ptr [edx + 0xa4] */
  { uint32_t t = R32((uint32_t)(edx + 0xa4u)); esp -= 4; W32(esp, 0xe19a75u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e19a75: mov edi, dword ptr [0xe65d70] */
  edi = R32((uint32_t)(0xe65d70u));
/* e19a7b: mov ebx, dword ptr [0xe65d74] */
  ebx = R32((uint32_t)(0xe65d74u));
/* e19a81: mov esi, dword ptr [0xe65d6c] */
  esi = R32((uint32_t)(0xe65d6cu));
/* e19a87: jmp 0xe19a90 */
  goto L_e19a90;
L_e19a90: /* e19a90: mov eax, dword ptr [0xe65920] */
  eax = R32((uint32_t)(0xe65920u));
/* e19a95: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e19a98: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e19a9a: push 0x108 */
  { uint32_t v = 0x108u; esp -= 4; W32(esp, v); }
/* e19a9f: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* e19aa4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e19aa6: je 0xe19ab7 */
  if (zf) goto L_e19ab7;
L_e19aa8: /* e19aa8: lea ecx, [ebp - 0xf8] */
  ecx = (uint32_t)(ebp + 0xffffff08u);
/* e19aae: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e19aaf: call dword ptr [0xe65d68] */
  esp -= 4; W32(esp, 0xe19ab5u); SPILL(); call_ind(R32(0xe65d68u)); if (g_unwind) return; /* USER32!PeekMessageW */ RELOAD();
/* e19ab5: jmp 0xe19ac0 */
  goto L_e19ac0;
L_e19ab7: /* e19ab7: lea edx, [ebp - 0xf8] */
  edx = (uint32_t)(ebp + 0xffffff08u);
/* e19abd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e19abe: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xe19ac0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e19ac0: /* e19ac0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e19ac2: je 0xe19b5a */
  if (zf) goto L_e19b5a;
L_e19ac8: /* e19ac8: lea eax, [ebp - 0xf8] */
  eax = (uint32_t)(ebp + 0xffffff08u);
/* e19ace: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e19acf: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe19ad1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e19ad1: mov ecx, dword ptr [0xe65920] */
  ecx = R32((uint32_t)(0xe65920u));
/* e19ad7: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e19ada: je 0xe19ae7 */
  if (zf) goto L_e19ae7;
L_e19adc: /* e19adc: lea edx, [ebp - 0xf8] */
  edx = (uint32_t)(ebp + 0xffffff08u);
/* e19ae2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e19ae3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xe19ae5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e19ae5: jmp 0xe19a90 */
  goto L_e19a90;
L_e19ae7: /* e19ae7: lea eax, [ebp - 0xf8] */
  eax = (uint32_t)(ebp + 0xffffff08u);
/* e19aed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e19aee: call dword ptr [0xe65d78] */
  esp -= 4; W32(esp, 0xe19af4u); SPILL(); call_ind(R32(0xe65d78u)); if (g_unwind) return; /* USER32!DispatchMessageA */ RELOAD();
/* e19af4: jmp 0xe19a90 */
  goto L_e19a90;
L_e19b5a: /* e19b5a: xor eax, eax */
  eax = 0;
/* e19b5c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e19b5f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e19b66: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e19b67: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e19b68: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e19b69: mov esp, ebp */
  esp = ebp;
/* e19b6b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e19b6c: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_e19a89(void) {
  LOAD_REGS();
L_e19a89: /* e19a89: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_e19a90: /* e19a90: mov eax, dword ptr [0xe65920] */
  eax = R32((uint32_t)(0xe65920u));
/* e19a95: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e19a98: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e19a9a: push 0x108 */
  { uint32_t v = 0x108u; esp -= 4; W32(esp, v); }
/* e19a9f: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* e19aa4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e19aa6: je 0xe19ab7 */
  if (zf) goto L_e19ab7;
L_e19aa8: /* e19aa8: lea ecx, [ebp - 0xf8] */
  ecx = (uint32_t)(ebp + 0xffffff08u);
/* e19aae: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e19aaf: call dword ptr [0xe65d68] */
  esp -= 4; W32(esp, 0xe19ab5u); SPILL(); call_ind(R32(0xe65d68u)); if (g_unwind) return; /* USER32!PeekMessageW */ RELOAD();
/* e19ab5: jmp 0xe19ac0 */
  goto L_e19ac0;
L_e19ab7: /* e19ab7: lea edx, [ebp - 0xf8] */
  edx = (uint32_t)(ebp + 0xffffff08u);
/* e19abd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e19abe: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xe19ac0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e19ac0: /* e19ac0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e19ac2: je 0xe19b5a */
  if (zf) goto L_e19b5a;
L_e19ac8: /* e19ac8: lea eax, [ebp - 0xf8] */
  eax = (uint32_t)(ebp + 0xffffff08u);
/* e19ace: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e19acf: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe19ad1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e19ad1: mov ecx, dword ptr [0xe65920] */
  ecx = R32((uint32_t)(0xe65920u));
/* e19ad7: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e19ada: je 0xe19ae7 */
  if (zf) goto L_e19ae7;
L_e19adc: /* e19adc: lea edx, [ebp - 0xf8] */
  edx = (uint32_t)(ebp + 0xffffff08u);
/* e19ae2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e19ae3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xe19ae5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e19ae5: jmp 0xe19a90 */
  goto L_e19a90;
L_e19ae7: /* e19ae7: lea eax, [ebp - 0xf8] */
  eax = (uint32_t)(ebp + 0xffffff08u);
/* e19aed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e19aee: call dword ptr [0xe65d78] */
  esp -= 4; W32(esp, 0xe19af4u); SPILL(); call_ind(R32(0xe65d78u)); if (g_unwind) return; /* USER32!DispatchMessageA */ RELOAD();
/* e19af4: jmp 0xe19a90 */
  goto L_e19a90;
L_e19b5a: /* e19b5a: xor eax, eax */
  eax = 0;
/* e19b5c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e19b5f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e19b66: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e19b67: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e19b68: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e19b69: mov esp, ebp */
  esp = ebp;
/* e19b6b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e19b6c: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_e19b6f(void) {
  LOAD_REGS();
L_e19b6f: /* e19b6f: mov eax, dword ptr [ebp - 0xac] */
  eax = R32((uint32_t)(ebp + 0xffffff54u));
/* e19b75: push 0xe5ec4c */
  { uint32_t v = 0xe5ec4cu; esp -= 4; W32(esp, v); }
/* e19b7a: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* e19b7d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e19b7e: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* e19b81: call 0xe25f60 */
  esp -= 4; W32(esp, 0xe19b86u); SPILL(); f_e25f60(); if (g_unwind) return; RELOAD();
  SPILL(); f_e19b86(); return;
}

void f_e19b86(void) {
  LOAD_REGS();
  goto L_e19b86;
L_e18bd6: /* e18bd6: call dword ptr [0xe65d58] */
  esp -= 4; W32(esp, 0xe18bdcu); SPILL(); call_ind(R32(0xe65d58u)); if (g_unwind) return; /* USER32!DefWindowProcW */ RELOAD();
/* e18bdc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e18bdf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e18be6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e18be7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e18be8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e18be9: mov esp, ebp */
  esp = ebp;
/* e18beb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e18bec: ret 0xc */
  esp += 16; SPILL(); return;
L_e19b86: /* e19b86: push 0xe2ee14 */
  { uint32_t v = 0xe2ee14u; esp -= 4; W32(esp, v); }
/* e19b8b: push 0xe63444 */
  { uint32_t v = 0xe63444u; esp -= 4; W32(esp, v); }
/* e19b90: call dword ptr [0xe65a5c] */
  esp -= 4; W32(esp, 0xe19b96u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* e19b96: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e19b99: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e19b9b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e19b9d: call 0xe25f60 */
  esp -= 4; W32(esp, 0xe19ba2u); SPILL(); f_e25f60(); if (g_unwind) return; RELOAD();
/* e19ba2: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* e19ba5: mov esi, dword ptr [0xe65920] */
  esi = R32((uint32_t)(0xe65920u));
/* e19bab: cmp dword ptr [esi], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e19bad: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* e19bb0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e19bb1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e19bb2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e19bb3: je 0xe19bc4 */
  if (zf) goto L_e19bc4;
L_e19bb5: /* e19bb5: mov edx, dword ptr [edx + 0x194] */
  edx = R32((uint32_t)(edx + 0x194u));
/* e19bbb: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* e19bbe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e19bbf: jmp 0xe18bd6 */
  goto L_e18bd6;
L_e19bc4: /* e19bc4: mov ecx, dword ptr [edx + 0x194] */
  ecx = R32((uint32_t)(edx + 0x194u));
/* e19bca: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* e19bcd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e19bce: call dword ptr [0xe65d54] */
  esp -= 4; W32(esp, 0xe19bd4u); SPILL(); call_ind(R32(0xe65d54u)); if (g_unwind) return; /* USER32!DefWindowProcA */ RELOAD();
/* e19bd4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e19bd7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e19bd8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e19bd9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e19be0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e19be1: mov esp, ebp */
  esp = ebp;
/* e19be3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e19be4: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_e19be7(void) {
  LOAD_REGS();
  goto L_e19be7;
L_e18bcf: /* e18bcf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e18bd0: je 0xe19bce */
  if (zf) goto L_e19bce;
L_e18bd6: /* e18bd6: call dword ptr [0xe65d58] */
  esp -= 4; W32(esp, 0xe18bdcu); SPILL(); call_ind(R32(0xe65d58u)); if (g_unwind) return; /* USER32!DefWindowProcW */ RELOAD();
/* e18bdc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e18bdf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e18be6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e18be7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e18be8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e18be9: mov esp, ebp */
  esp = ebp;
/* e18beb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e18bec: ret 0xc */
  esp += 16; SPILL(); return;
L_e19bce: /* e19bce: call dword ptr [0xe65d54] */
  esp -= 4; W32(esp, 0xe19bd4u); SPILL(); call_ind(R32(0xe65d54u)); if (g_unwind) return; /* USER32!DefWindowProcA */ RELOAD();
/* e19bd4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e19bd7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e19bd8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e19bd9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e19be0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e19be1: mov esp, ebp */
  esp = ebp;
/* e19be3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e19be4: ret 0xc */
  esp += 16; SPILL(); return;
L_e19be7: /* e19be7: mov eax, dword ptr [0xe65920] */
  eax = R32((uint32_t)(0xe65920u));
/* e19bec: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e19bee: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* e19bf1: mov edx, dword ptr [edx + 0x194] */
  edx = R32((uint32_t)(edx + 0x194u));
/* e19bf7: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e19bf9: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* e19bfc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e19bfd: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* e19c00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e19c01: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* e19c04: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e19c05: jmp 0xe18bcf */
  goto L_e18bcf;
}

void f_e19c0a(void) {
  LOAD_REGS();
L_e19c0a: /* e19c0a: mov ecx, dword ptr [ebp - 0xfc] */
  ecx = R32((uint32_t)(ebp + 0xffffff04u));
/* e19c10: push 0xe5ec4c */
  { uint32_t v = 0xe5ec4cu; esp -= 4; W32(esp, v); }
/* e19c15: lea edx, [ebp - 0xbc] */
  edx = (uint32_t)(ebp + 0xffffff44u);
/* e19c1b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e19c1c: mov dword ptr [ebp - 0xbc], ecx */
  W32((uint32_t)(ebp + 0xffffff44u), ecx);
/* e19c22: call 0xe25f60 */
  esp -= 4; W32(esp, 0xe19c27u); SPILL(); f_e25f60(); if (g_unwind) return; RELOAD();
  SPILL(); f_e19c27(); return;
}

void f_e19c27(void) {
  LOAD_REGS();
L_e19c27: /* e19c27: push 0xe2edc0 */
  { uint32_t v = 0xe2edc0u; esp -= 4; W32(esp, v); }
L_e19c2c: /* e19c2c: push 0xe6357c */
  { uint32_t v = 0xe6357cu; esp -= 4; W32(esp, v); }
/* e19c31: call dword ptr [0xe65a5c] */
  esp -= 4; W32(esp, 0xe19c37u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* e19c37: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e19c3a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e19c3c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e19c3e: call 0xe25f60 */
  esp -= 4; W32(esp, 0xe19c43u); SPILL(); f_e25f60(); if (g_unwind) return; RELOAD();
/* e19c43: nop  */
/* e19c44: xor edi, dword ptr [edi - 0x1f] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0xffffffe1u)));
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* e19c47: add al, dl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (r)) & ((b) ^ (r))) >> 7) & 1;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* e19c49: jg 0xe19c2c */
  if ((!zf && sf == of)) goto L_e19c2c;
L_e19c4b: /* e19c4b: add byte ptr [edi - 0x7f], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0xffffff81u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  W8((uint32_t)(edi + 0xffffff81u), r);
  }
/* e19c4e: loope 0xe19c50 */
  guest_unsupported(0xe19c4e); /* loope 0xe19c50 */
/* e19c50: and cl, 0 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* e19c54: mov al, byte ptr [ebx - 0x7d43ff1f] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + 0x82bc00e1u))) & 0xffu);
/* e19c5a: loope 0xe19c5c */
  guest_unsupported(0xe19c5a); /* loope 0xe19c5c */
/* e19c5c: mov al, 0x80 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x80u) & 0xffu);
/* e19c5e: loope 0xe19c60 */
  guest_unsupported(0xe19c5e); /* loope 0xe19c60 */
/* e19c60: mov byte ptr [0xe19b], al */
  W8((uint32_t)(0xe19bu), (eax & 0xffu));
/* e19c65: add dword ptr [edi], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(edi), r);
  }
/* e19c67: pop es */
  guest_unsupported(0xe19c67); /* pop es */
/* e19c68: add al, byte ptr [ebx] */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ebx)));
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* e19c6a: add al, 5 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* e19c6c: pop es */
  guest_unsupported(0xe19c6c); /* pop es */
/* e19c6d: pop es */
  guest_unsupported(0xe19c6d); /* pop es */
/* e19c6e: pop es */
  guest_unsupported(0xe19c6e); /* pop es */
/* e19c6f: pop es */
  guest_unsupported(0xe19c6f); /* pop es */
/* e19c70: pop es */
  guest_unsupported(0xe19c70); /* pop es */
/* e19c71: pop es */
  guest_unsupported(0xe19c71); /* pop es */
/* e19c72: push es */
  guest_unsupported(0xe19c72); /* push es */
/* e19c73: nop  */
L_e19c74: guest_badaddr(0xe19c74); return;
}

void f_e1a5ae(void) {
  LOAD_REGS();
L_e1a5ae: /* e1a5ae: jmp dword ptr [0xe65f8c] */
  SPILL(); f_d81da2(); return; /* Window!?MyDrawEdge@WWindow@@UAEXPAUHDC__@@PAUtagRECT@@H@Z */
}

void f_e1a5b4(void) {
  LOAD_REGS();
L_e1a5b4: /* e1a5b4: jmp dword ptr [0xe65f88] */
  SPILL(); f_d81c58(); return; /* Window!?OnDestroy@WWindow@@UAEXXZ */
}

void f_e1a5ba(void) {
  LOAD_REGS();
L_e1a5ba: /* e1a5ba: jmp dword ptr [0xe65f84] */
  SPILL(); f_d81113(); return; /* Window!?OnClose@WWindow@@UAEHXZ */
}

void f_e1a5c0(void) {
  LOAD_REGS();
L_e1a5c0: /* e1a5c0: jmp dword ptr [0xe65f80] */
  SPILL(); f_d81e60(); return; /* Window!?OnSetCursor@WWindow@@UAEHXZ */
}

void f_e1a5c6(void) {
  LOAD_REGS();
L_e1a5c6: /* e1a5c6: jmp dword ptr [0xe65f7c] */
  SPILL(); f_d8272a(); return; /* Window!?OnFinishSplitterDrag@WWindow@@UAEXPAVWDragInterceptor@@H@Z */
}

void f_e1a5cc(void) {
  LOAD_REGS();
L_e1a5cc: /* e1a5cc: jmp dword ptr [0xe65f78] */
  SPILL(); f_d8285b(); return; /* Window!?OnRightButtonUp@WWindow@@UAEXXZ */
}

void f_e1a5d2(void) {
  LOAD_REGS();
L_e1a5d2: /* e1a5d2: jmp dword ptr [0xe65f74] */
  SPILL(); f_d812c1(); return; /* Window!?OnLeftButtonUp@WWindow@@UAEXXZ */
}

void f_e1a5d8(void) {
  LOAD_REGS();
L_e1a5d8: /* e1a5d8: jmp dword ptr [0xe65f70] */
  SPILL(); f_d81352(); return; /* Window!?OnRightButtonDown@WWindow@@UAEXXZ */
}

void f_e1a5de(void) {
  LOAD_REGS();
L_e1a5de: /* e1a5de: jmp dword ptr [0xe65f6c] */
  SPILL(); f_d81dc5(); return; /* Window!?OnRightButtonDoubleClick@WWindow@@UAEXXZ */
}

void f_e1a5e4(void) {
  LOAD_REGS();
L_e1a5e4: /* e1a5e4: jmp dword ptr [0xe65f68] */
  SPILL(); f_d826f8(); return; /* Window!?OnMiddleButtonDoubleClick@WWindow@@UAEXXZ */
}

void f_e1a5ea(void) {
  LOAD_REGS();
L_e1a5ea: /* e1a5ea: jmp dword ptr [0xe65f64] */
  SPILL(); f_d82810(); return; /* Window!?OnLeftButtonDoubleClick@WWindow@@UAEXXZ */
}

void f_e1a5f0(void) {
  LOAD_REGS();
L_e1a5f0: /* e1a5f0: jmp dword ptr [0xe65f60] */
  SPILL(); f_d81e5b(); return; /* Window!?OnLeftButtonDown@WWindow@@UAEXXZ */
}

void f_e1a5f6(void) {
  LOAD_REGS();
L_e1a5f6: /* e1a5f6: jmp dword ptr [0xe65f5c] */
  SPILL(); f_d82171(); return; /* Window!?OnMouseMove@WWindow@@UAEXKUFPoint@@@Z */
}

void f_e1a5fc(void) {
  LOAD_REGS();
L_e1a5fc: /* e1a5fc: jmp dword ptr [0xe65f58] */
  SPILL(); f_d81c6c(); return; /* Window!?OnMdiActivate@WWindow@@UAEXH@Z */
}

void f_e1a602(void) {
  LOAD_REGS();
L_e1a602: /* e1a602: jmp dword ptr [0xe65f54] */
  SPILL(); f_d8283d(); return; /* Window!?OnReleaseCapture@WWindow@@UAEXXZ */
}

void f_e1a608(void) {
  LOAD_REGS();
L_e1a608: /* e1a608: jmp dword ptr [0xe65f50] */
  SPILL(); f_d81f9b(); return; /* Window!?OnTimer@WWindow@@UAEXXZ */
}

void f_e1a60e(void) {
  LOAD_REGS();
L_e1a60e: /* e1a60e: jmp dword ptr [0xe65f4c] */
  SPILL(); f_d81087(); return; /* Window!?OnMouseHover@WWindow@@UAEXXZ */
}

void f_e1a614(void) {
  LOAD_REGS();
L_e1a614: /* e1a614: jmp dword ptr [0xe65e90] */
  SPILL(); f_d826c1(); return; /* Window!?OnMouseLeave@WWindow@@UAEXXZ */
}

void f_e1a61a(void) {
  LOAD_REGS();
L_e1a61a: /* e1a61a: jmp dword ptr [0xe65e94] */
  SPILL(); f_d8239c(); return; /* Window!?OnMouseEnter@WWindow@@UAEXXZ */
}

void f_e1a620(void) {
  LOAD_REGS();
L_e1a620: /* e1a620: jmp dword ptr [0xe65e98] */
  SPILL(); f_d81d20(); return; /* Window!?OnEnterIdle@WWindow@@UAEXXZ */
}

void f_e1a626(void) {
  LOAD_REGS();
L_e1a626: /* e1a626: jmp dword ptr [0xe65e9c] */
  SPILL(); f_d8280b(); return; /* Window!?OnInitDialog@WWindow@@UAEXXZ */
}

void f_e1a62c(void) {
  LOAD_REGS();
L_e1a62c: /* e1a62c: jmp dword ptr [0xe65ea0] */
  SPILL(); f_d817f3(); return; /* Window!?OnMeasureItem@WWindow@@UAEXPAUtagMEASUREITEMSTRUCT@@@Z */
}

void f_e1a632(void) {
  LOAD_REGS();
L_e1a632: /* e1a632: jmp dword ptr [0xe65ea4] */
  SPILL(); f_d820fe(); return; /* Window!?OnDrawItem@WWindow@@UAEXPAUtagDRAWITEMSTRUCT@@@Z */
}

void f_e1a638(void) {
  LOAD_REGS();
L_e1a638: /* e1a638: jmp dword ptr [0xe65ea8] */
  SPILL(); f_d81bb3(); return; /* Window!?OnCreate@WWindow@@UAEXXZ */
}

void f_e1a63e(void) {
  LOAD_REGS();
L_e1a63e: /* e1a63e: jmp dword ptr [0xe65eac] */
  SPILL(); f_d825a4(); return; /* Window!?OnPaint@WWindow@@UAEXXZ */
}

void f_e1a644(void) {
  LOAD_REGS();
L_e1a644: /* e1a644: jmp dword ptr [0xe65eb0] */
  SPILL(); f_d820e5(); return; /* Window!?OnKeyUp@WWindow@@UAEXIJ@Z */
}

void f_e1a64a(void) {
  LOAD_REGS();
L_e1a64a: /* e1a64a: jmp dword ptr [0xe65eb4] */
  SPILL(); f_d825cc(); return; /* Window!?OnHScroll@WWindow@@UAEXIJ@Z */
}

void f_e1a650(void) {
  LOAD_REGS();
L_e1a650: /* e1a650: jmp dword ptr [0xe65eb8] */
  SPILL(); f_d8227a(); return; /* Window!?OnVScroll@WWindow@@UAEXIJ@Z */
}

void f_e1a656(void) {
  LOAD_REGS();
L_e1a656: /* e1a656: jmp dword ptr [0xe65ebc] */
  SPILL(); f_d826e9(); return; /* Window!?OnEraseBkgnd@WWindow@@UAEHXZ */
}

void f_e1a65c(void) {
  LOAD_REGS();
L_e1a65c: /* e1a65c: jmp dword ptr [0xe65ec0] */
  SPILL(); f_d82581(); return; /* Window!?OnUndo@WWindow@@UAEXXZ */
}

void f_e1a662(void) {
  LOAD_REGS();
L_e1a662: /* e1a662: jmp dword ptr [0xe65ec4] */
  SPILL(); f_d81bd6(); return; /* Window!?OnShowWindow@WWindow@@UAEXH@Z */
}

void f_e1a668(void) {
  LOAD_REGS();
L_e1a668: /* e1a668: jmp dword ptr [0xe65ec8] */
  SPILL(); f_d81c3a(); return; /* Window!?OnPaste@WWindow@@UAEXXZ */
}

void f_e1a66e(void) {
  LOAD_REGS();
L_e1a66e: /* e1a66e: jmp dword ptr [0xe65ecc] */
  SPILL(); f_d81f41(); return; /* Window!?OnCopy@WWindow@@UAEXXZ */
}

void f_e1a674(void) {
  LOAD_REGS();
L_e1a674: /* e1a674: jmp dword ptr [0xe65ed0] */
  SPILL(); f_d816e0(); return; /* Window!?OnCut@WWindow@@UAEXXZ */
}

void f_e1a67a(void) {
  LOAD_REGS();
L_e1a67a: /* e1a67a: jmp dword ptr [0xe65ed4] */
  SPILL(); f_d82315(); return; /* Window!?OnKeyDown@WWindow@@UAEXG@Z */
}

void f_e1a680(void) {
  LOAD_REGS();
L_e1a680: /* e1a680: jmp dword ptr [0xe65ed8] */
  SPILL(); f_d81b68(); return; /* Window!?OnChar@WWindow@@UAEXG@Z */
}

void f_e1a686(void) {
  LOAD_REGS();
L_e1a686: /* e1a686: jmp dword ptr [0xe65edc] */
  SPILL(); f_d81898(); return; /* Window!?OnActivate@WWindow@@UAEXH@Z */
}

void f_e1a68c(void) {
  LOAD_REGS();
L_e1a68c: /* e1a68c: jmp dword ptr [0xe65ee0] */
  SPILL(); f_d8142e(); return; /* Window!?OnSysCommand@WWindow@@UAEHH@Z */
}

void f_e1a692(void) {
  LOAD_REGS();
L_e1a692: /* e1a692: jmp dword ptr [0xe65ee4] */
  SPILL(); f_d810ff(); return; /* Window!?OnCommand@WWindow@@UAEXH@Z */
}

void f_e1a698(void) {
  LOAD_REGS();
L_e1a698: /* e1a698: jmp dword ptr [0xe65ee8] */
  SPILL(); f_d82748(); return; /* Window!?OnMove@WWindow@@UAEXHH@Z */
}

void f_e1a69e(void) {
  LOAD_REGS();
L_e1a69e: /* e1a69e: jmp dword ptr [0xe65eec] */
  SPILL(); f_d81a87(); return; /* Window!?OnWindowPosChanging@WWindow@@UAEXPAH000@Z */
}

void f_e1a6a4(void) {
  LOAD_REGS();
L_e1a6a4: /* e1a6a4: jmp dword ptr [0xe65ef0] */
  SPILL(); f_d828ba(); return; /* Window!?OnSize@WWindow@@UAEXKHH@Z */
}

void f_e1a6aa(void) {
  LOAD_REGS();
L_e1a6aa: /* e1a6aa: jmp dword ptr [0xe65ef4] */
  SPILL(); f_d82540(); return; /* Window!?OnKillFocus@WWindow@@UAEXPAUHWND__@@@Z */
}

void f_e1a6b0(void) {
  LOAD_REGS();
L_e1a6b0: /* e1a6b0: jmp dword ptr [0xe65ef8] */
  SPILL(); f_d8178f(); return; /* Window!?OnSetFocus@WWindow@@UAEXPAUHWND__@@@Z */
}

void f_e1a6b6(void) {
  LOAD_REGS();
L_e1a6b6: /* e1a6b6: jmp dword ptr [0xe65efc] */
  SPILL(); f_d82414(); return; /* Window!?OnCopyData@WWindow@@UAEXPAUHWND__@@PAUtagCOPYDATASTRUCT@@@Z */
}

void f_e1a6bc(void) {
  LOAD_REGS();
L_e1a6bc: /* e1a6bc: jmp dword ptr [0xe65f00] */
  SPILL(); f_d81177(); return; /* Window!?GetLength@WWindow@@UAEHXZ */
}

void f_e1a6c2(void) {
  LOAD_REGS();
L_e1a6c2: /* e1a6c2: jmp dword ptr [0xe65f04] */
  SPILL(); f_d82536(); return; /* Window!?SetText@WWindow@@UAEXPBG@Z */
}

void f_e1a6c8(void) {
  LOAD_REGS();
L_e1a6c8: /* e1a6c8: jmp dword ptr [0xe65f08] */
  SPILL(); f_d82428(); return; /* Window!?GetText@WWindow@@UAE?AVFString@@XZ */
}

void f_e1a6ce(void) {
  LOAD_REGS();
L_e1a6ce: /* e1a6ce: jmp dword ptr [0xe65f0c] */
  SPILL(); f_d8191f(); return; /* Window!?InterceptControlCommand@WWindow@@UAEHIIJ@Z */
}

void f_e1a6d4(void) {
  LOAD_REGS();
L_e1a6d4: /* e1a6d4: jmp dword ptr [0xe65f10] */
  SPILL(); f_d81cb2(); return; /* Window!?CallDefaultProc@WWindow@@UAEHIIJ@Z */
}

void f_e1a6da(void) {
  LOAD_REGS();
L_e1a6da: /* e1a6da: jmp dword ptr [0xe65f14] */
  SPILL(); f_d81ebf(); return; /* Window!?DoDestroy@WWindow@@UAEXXZ */
}

void f_e1a6e0(void) {
  LOAD_REGS();
L_e1a6e0: /* e1a6e0: jmp dword ptr [0xe65f18] */
  SPILL(); f_d825f4(); return; /* Window!?Serialize@WWindow@@UAEXAAVFArchive@@@Z */
}

void f_e1a6e6(void) {
  LOAD_REGS();
L_e1a6e6: /* e1a6e6: jmp dword ptr [0xe65f1c] */
  SPILL(); f_d8135c(); return; /* Window!?Show@WWindow@@UAEXH@Z */
}

void f_e1a6ec(void) {
  LOAD_REGS();
L_e1a6ec: /* e1a6ec: jmp dword ptr [0xe65f20] */
  SPILL(); f_d812c6(); return; /* Window!?Unused@FCommandTarget@@UAEXXZ */
}

void f_e1a6f2(void) {
  LOAD_REGS();
L_e1a6f2: /* e1a6f2: jmp dword ptr [0xe65f24] */
  SPILL(); f_d8227f(); return; /* Window!??1WWindow@@UAE@XZ */
}

void f_e1a6f8(void) {
  LOAD_REGS();
L_e1a6f8: /* e1a6f8: jmp dword ptr [0xe65f28] */
  SPILL(); f_d8243c(); return; /* Window!?MaybeDestroy@WWindow@@QAEXXZ */
}

void f_e1a6fe(void) {
  LOAD_REGS();
L_e1a6fe: /* e1a6fe: jmp dword ptr [0xe65f2c] */
  SPILL(); f_d81410(); return; /* Window!??0WWindow@@QAE@VFName@@PAV0@@Z */
}

void f_e1a704(void) {
  LOAD_REGS();
L_e1a704: /* e1a704: jmp dword ptr [0xe65f30] */
  SPILL(); f_d824dc(); return; /* Window!??0WWindow@@QAE@ABV0@@Z */
}

void f_e1a70a(void) {
  LOAD_REGS();
L_e1a70a: /* e1a70a: jmp dword ptr [0xe65f34] */
  SPILL(); f_d814a1(); return; /* Window!??4WWindow@@QAEAAV0@ABV0@@Z */
}

void f_e1a710(void) {
  LOAD_REGS();
L_e1a710: /* e1a710: jmp dword ptr [0xe65f38] */
  SPILL(); f_d81852(); return; /* Window!?PerformCreateWindowEx@WWindow@@QAEXKPBGKHHHHPAUHWND__@@PAUHMENU__@@PAUHINSTANCE__@@@Z */
}

void f_e1a716(void) {
  LOAD_REGS();
L_e1a716: /* e1a716: jmp dword ptr [0xe65f3c] */
  SPILL(); f_d8171c(); return; /* Window!?MoveWindow@WWindow@@QAEXUFRect@@H@Z */
}

void f_e1a71c(void) {
  LOAD_REGS();
L_e1a71c: /* e1a71c: jmp dword ptr [0xe65f40] */
  SPILL(); f_d8237e(); return; /* Window!??BWWindow@@QBEPAUHWND__@@XZ */
}

void f_e1a722(void) {
  LOAD_REGS();
L_e1a722: /* e1a722: jmp dword ptr [0xe65f44] */
  SPILL(); f_d82202(); return; /* Window!?GetWindowRect@WWindow@@QBE?AUFRect@@H@Z */
}

void f_e1a728(void) {
  LOAD_REGS();
L_e1a728: /* e1a728: jmp dword ptr [0xe65968] */
  SPILL(); f_4e2ca7(); return; /* Core!?NotifyExec@FNotifyHook@@UAEXPAXPBG@Z */
}

void f_e1a72e(void) {
  LOAD_REGS();
L_e1a72e: /* e1a72e: jmp dword ptr [0xe6596c] */
  SPILL(); f_4e3abc(); return; /* Core!?NotifyPostChange@FNotifyHook@@UAEXPAX@Z */
}

void f_e1a734(void) {
  LOAD_REGS();
L_e1a734: /* e1a734: jmp dword ptr [0xe65970] */
  SPILL(); f_4e1cdf(); return; /* Core!?NotifyPreChange@FNotifyHook@@UAEXPAX@Z */
}

void f_e1a73a(void) {
  LOAD_REGS();
L_e1a73a: /* e1a73a: jmp dword ptr [0xe65974] */
  SPILL(); f_4e18b1(); return; /* Core!?NetDirty@UObject@@UAEXPAVUProperty@@@Z */
}

void f_e1a740(void) {
  LOAD_REGS();
L_e1a740: /* e1a740: jmp dword ptr [0xe65978] */
  SPILL(); f_4e2d42(); return; /* Core!?Rename@UObject@@UAEXPBGPAV1@@Z */
}

void f_e1a746(void) {
  LOAD_REGS();
L_e1a746: /* e1a746: jmp dword ptr [0xe6597c] */
  SPILL(); f_4e2608(); return; /* Core!?LanguageChange@UObject@@UAEXXZ */
}

void f_e1a74c(void) {
  LOAD_REGS();
L_e1a74c: /* e1a74c: jmp dword ptr [0xe65980] */
  SPILL(); f_4e22ca(); return; /* Core!?Register@UObject@@UAEXXZ */
}

void f_e1a752(void) {
  LOAD_REGS();
L_e1a752: /* e1a752: jmp dword ptr [0xe65984] */
  SPILL(); f_4e1636(); return; /* Core!?ScriptConsoleExec@UObject@@UAEHPBGAAVFOutputDevice@@PAV1@@Z */
}

void f_e1a758(void) {
  LOAD_REGS();
L_e1a758: /* e1a758: jmp dword ptr [0xe65988] */
  SPILL(); f_4e1271(); return; /* Core!?CallFunction@UObject@@UAEXAAUFFrame@@QAXPAVUFunction@@@Z */
}

void f_e1a75e(void) {
  LOAD_REGS();
L_e1a75e: /* e1a75e: jmp dword ptr [0xe6598c] */
  SPILL(); f_4e1f82(); return; /* Core!?PostEditUndo@UObject@@UAEXXZ */
}

void f_e1a764(void) {
  LOAD_REGS();
L_e1a764: /* e1a764: jmp dword ptr [0xe65990] */
  SPILL(); f_4e3a67(); return; /* Core!?PreEditUndo@UObject@@UAEXXZ */
}

void f_e1a76a(void) {
  LOAD_REGS();
L_e1a76a: /* e1a76a: jmp dword ptr [0xe65994] */
  SPILL(); f_4e2dd8(); return; /* Core!?InitExecution@UObject@@UAEXXZ */
}

void f_e1a770(void) {
  LOAD_REGS();
L_e1a770: /* e1a770: jmp dword ptr [0xe65998] */
  SPILL(); f_4e2db5(); return; /* Core!?GotoLabel@UObject@@UAEHVFName@@@Z */
}

void f_e1a776(void) {
  LOAD_REGS();
L_e1a776: /* e1a776: jmp dword ptr [0xe6599c] */
  SPILL(); f_4e3738(); return; /* Core!?GotoState@UObject@@UAE?AW4EGotoState@@VFName@@@Z */
}

void f_e1a77c(void) {
  LOAD_REGS();
L_e1a77c: /* e1a77c: jmp dword ptr [0xe659a0] */
  SPILL(); f_4e2e19(); return; /* Core!?IsPendingKill@UObject@@UAEHXZ */
}

void f_e1a782(void) {
  LOAD_REGS();
L_e1a782: /* e1a782: jmp dword ptr [0xe659a4] */
  SPILL(); f_4e4110(); return; /* Core!?PostLoad@UObject@@UAEXXZ */
}

void f_e1a788(void) {
  LOAD_REGS();
L_e1a788: /* e1a788: jmp dword ptr [0xe659a8] */
  SPILL(); f_4e4318(); return; /* Core!?Modify@UObject@@UAEXXZ */
}

void f_e1a78e(void) {
  LOAD_REGS();
L_e1a78e: /* e1a78e: jmp dword ptr [0xe659ac] */
  SPILL(); f_4e222f(); return; /* Core!?ProcessRemoteFunction@UObject@@UAEHPAVUFunction@@PAXPAUFFrame@@@Z */
}

void f_e1a794(void) {
  LOAD_REGS();
L_e1a794: /* e1a794: jmp dword ptr [0xe659b0] */
  SPILL(); f_4e358f(); return; /* Core!?ProcessState@UObject@@UAEXM@Z */
}

void f_e1a79a(void) {
  LOAD_REGS();
L_e1a79a: /* e1a79a: jmp dword ptr [0xe659b4] */
  SPILL(); f_4e2a81(); return; /* Core!?ProcessDelegate@UObject@@UAEXVFName@@PAUFScriptDelegate@@PAX2@Z */
}

void f_e1a7a0(void) {
  LOAD_REGS();
L_e1a7a0: /* e1a7a0: jmp dword ptr [0xe659b8] */
  SPILL(); f_4e3954(); return; /* Core!?ProcessEvent@UObject@@UAEXPAVUFunction@@PAX1@Z */
}

void f_e1a7a6(void) {
  LOAD_REGS();
L_e1a7a6: /* e1a7a6: jmp dword ptr [0xe659bc] */
  SPILL(); f_4e3bb6(); return; /* Core!?Release@UObject@@UAGKXZ */
}

void f_e1a7ac(void) {
  LOAD_REGS();
L_e1a7ac: /* e1a7ac: jmp dword ptr [0xe659c0] */
  SPILL(); f_4e33a0(); return; /* Core!?AddRef@UObject@@UAGKXZ */
}

void f_e1a7b2(void) {
  LOAD_REGS();
L_e1a7b2: /* e1a7b2: jmp dword ptr [0xe659c4] */
  SPILL(); f_4e42aa(); return; /* Core!?QueryInterface@UObject@@UAGKABVFGuid@@PAPAX@Z */
}

void f_e1a7b8(void) {
  LOAD_REGS();
L_e1a7b8: /* e1a7b8: jmp dword ptr [0xe659cc] */
  SPILL(); f_4e40fc(); return; /* Core!?CopyCompleteValue@UFloatProperty@@UBEXPAX0PAVUObject@@@Z */
}

void f_e1a7be(void) {
  LOAD_REGS();
L_e1a7be: /* e1a7be: jmp dword ptr [0xe659d0] */
  SPILL(); f_4e2527(); return; /* Core!?CopySingleValue@UFloatProperty@@UBEXPAX0PAVUObject@@@Z */
}

void f_e1a7c4(void) {
  LOAD_REGS();
L_e1a7c4: /* e1a7c4: jmp dword ptr [0xe659d4] */
  SPILL(); f_4e10d2(); return; /* Core!?ImportText@UFloatProperty@@UBEPBGPBGPAEH@Z */
}

void f_e1a7ca(void) {
  LOAD_REGS();
L_e1a7ca: /* e1a7ca: jmp dword ptr [0xe659d8] */
  SPILL(); f_4e3b2f(); return; /* Core!?ExportTextItem@UFloatProperty@@UBEXPAGPAE1H@Z */
}

void f_e1a7d0(void) {
  LOAD_REGS();
L_e1a7d0: /* e1a7d0: jmp dword ptr [0xe659dc] */
  SPILL(); f_4e359e(); return; /* Core!?NetSerializeItem@UFloatProperty@@UBEHAAVFArchive@@PAVUPackageMap@@PAX@Z */
}

void f_e1a7d6(void) {
  LOAD_REGS();
L_e1a7d6: /* e1a7d6: jmp dword ptr [0xe659e0] */
  SPILL(); f_4e30d0(); return; /* Core!?SerializeItem@UFloatProperty@@UBEXAAVFArchive@@PAXH@Z */
}

void f_e1a7dc(void) {
  LOAD_REGS();
L_e1a7dc: /* e1a7dc: jmp dword ptr [0xe659e4] */
  SPILL(); f_4e235b(); return; /* Core!?ExportCppItem@UFloatProperty@@UBEXAAVFOutputDevice@@H@Z */
}

void f_e1a7e2(void) {
  LOAD_REGS();
L_e1a7e2: /* e1a7e2: jmp dword ptr [0xe659e8] */
  SPILL(); f_4e2937(); return; /* Core!?Identical@UFloatProperty@@UBEHPBX0@Z */
}

void f_e1a7e8(void) {
  LOAD_REGS();
L_e1a7e8: /* e1a7e8: jmp dword ptr [0xe659ec] */
  SPILL(); f_4e33c3(); return; /* Core!?Link@UFloatProperty@@UAEXAAVFArchive@@PAVUProperty@@@Z */
}

void f_e1a7ee(void) {
  LOAD_REGS();
L_e1a7ee: /* e1a7ee: jmp dword ptr [0xe659f0] */
  SPILL(); f_4e12fd(); return; /* Core!?Serialize@UProperty@@UAEXAAVFArchive@@@Z */
}

void f_e1a7f4(void) {
  LOAD_REGS();
L_e1a7f4: /* e1a7f4: jmp dword ptr [0xe659f4] */
  SPILL(); f_4e3508(); return; /* Core!?GetID@UProperty@@UBEEXZ */
}

void f_e1a7fa(void) {
  LOAD_REGS();
L_e1a7fa: /* e1a7fa: jmp dword ptr [0xe659f8] */
  SPILL(); f_4e1e1f(); return; /* Core!?Port@UProperty@@UBEHXZ */
}

void f_e1a800(void) {
  LOAD_REGS();
L_e1a800: /* e1a800: jmp dword ptr [0xe659fc] */
  SPILL(); f_4e2fa4(); return; /* Core!?DestroyValue@UProperty@@UBEXPAX@Z */
}

void f_e1a806(void) {
  LOAD_REGS();
L_e1a806: /* e1a806: jmp dword ptr [0xe65a00] */
  SPILL(); f_4e445d(); return; /* Core!?CopyCompleteValue@UProperty@@UBEXPAX0PAVUObject@@@Z */
}

void f_e1a80c(void) {
  LOAD_REGS();
L_e1a80c: /* e1a80c: jmp dword ptr [0xe65a04] */
  SPILL(); f_4e2b6c(); return; /* Core!?CopySingleValue@UBoolProperty@@UBEXPAX0PAVUObject@@@Z */
}

void f_e1a812(void) {
  LOAD_REGS();
L_e1a812: /* e1a812: jmp dword ptr [0xe65a08] */
  SPILL(); f_4e1e88(); return; /* Core!?ExportText@UProperty@@UBEHHPAGPAE1H@Z */
}

void f_e1a818(void) {
  LOAD_REGS();
L_e1a818: /* e1a818: jmp dword ptr [0xe65a0c] */
  SPILL(); f_4e23ab(); return; /* Core!?ImportText@UBoolProperty@@UBEPBGPBGPAEH@Z */
}

void f_e1a81e(void) {
  LOAD_REGS();
L_e1a81e: /* e1a81e: jmp dword ptr [0xe65a10] */
  SPILL(); f_4e17ad(); return; /* Core!?ExportTextItem@UBoolProperty@@UBEXPAGPAE1H@Z */
}

void f_e1a824(void) {
  LOAD_REGS();
L_e1a824: /* e1a824: jmp dword ptr [0xe65a14] */
  SPILL(); f_4e1802(); return; /* Core!?NetSerializeItem@UBoolProperty@@UBEHAAVFArchive@@PAVUPackageMap@@PAX@Z */
}

void f_e1a82a(void) {
  LOAD_REGS();
L_e1a82a: /* e1a82a: jmp dword ptr [0xe65a18] */
  SPILL(); f_4e20f9(); return; /* Core!?SerializeItem@UBoolProperty@@UBEXAAVFArchive@@PAXH@Z */
}

void f_e1a830(void) {
  LOAD_REGS();
L_e1a830: /* e1a830: jmp dword ptr [0xe65a1c] */
  SPILL(); f_4e20cc(); return; /* Core!?ExportCppItem@UBoolProperty@@UBEXAAVFOutputDevice@@H@Z */
}

void f_e1a836(void) {
  LOAD_REGS();
L_e1a836: /* e1a836: jmp dword ptr [0xe65a20] */
  SPILL(); f_4e269e(); return; /* Core!?ExportCpp@UProperty@@UBEXAAVFOutputDevice@@HHHH@Z */
}

void f_e1a83c(void) {
  LOAD_REGS();
L_e1a83c: /* e1a83c: jmp dword ptr [0xe65a24] */
  SPILL(); f_4e3a35(); return; /* Core!?Identical@UBoolProperty@@UBEHPBX0@Z */
}

void f_e1a842(void) {
  LOAD_REGS();
L_e1a842: /* e1a842: jmp dword ptr [0xe65a28] */
  SPILL(); f_4e40cf(); return; /* Core!?Link@UBoolProperty@@UAEXAAVFArchive@@PAVUProperty@@@Z */
}

void f_e1a848(void) {
  LOAD_REGS();
L_e1a848: /* e1a848: jmp dword ptr [0xe65a2c] */
  SPILL(); f_4e34e5(); return; /* Core!?CleanupDestroyed@UProperty@@UBEXPAE@Z */
}

void f_e1a84e(void) {
  LOAD_REGS();
L_e1a84e: /* e1a84e: jmp dword ptr [0xe65a30] */
  SPILL(); f_4e1023(); return; /* Core!?GetPropertiesSize@UField@@UAEHXZ */
}

void f_e1a854(void) {
  LOAD_REGS();
L_e1a854: /* e1a854: jmp dword ptr [0xe65a34] */
  SPILL(); f_4e1901(); return; /* Core!?GetOwnerClass@UField@@UAEPAVUClass@@XZ */
}

void f_e1a85a(void) {
  LOAD_REGS();
L_e1a85a: /* e1a85a: jmp dword ptr [0xe65a38] */
  SPILL(); f_4e2342(); return; /* Core!?Bind@UField@@UAEXXZ */
}

void f_e1a860(void) {
  LOAD_REGS();
L_e1a860: /* e1a860: jmp dword ptr [0xe65a3c] */
  SPILL(); f_4e1ee7(); return; /* Core!?MergeBools@UField@@UAEHXZ */
}

void f_e1a866(void) {
  LOAD_REGS();
L_e1a866: /* e1a866: jmp dword ptr [0xe65a40] */
  SPILL(); f_4e36f7(); return; /* Core!?AddCppProperty@UField@@UAEXPAVUProperty@@@Z */
}

void f_e1a86c(void) {
  LOAD_REGS();
L_e1a86c: /* e1a86c: jmp dword ptr [0xe65a44] */
  SPILL(); f_4e15f0(); return; /* Core!?Register@UField@@UAEXXZ */
}

void f_e1a872(void) {
  LOAD_REGS();
L_e1a872: /* e1a872: jmp dword ptr [0xe65a48] */
  SPILL(); f_4e1d11(); return; /* Core!?PostEditChange@UObject@@UAEXXZ */
}

void f_e1a878(void) {
  LOAD_REGS();
L_e1a878: /* e1a878: jmp dword ptr [0xe65a4c] */
  SPILL(); f_4e25c7(); return; /* Core!?ShutdownAfterError@UObject@@UAEXXZ */
}

void f_e1a87e(void) {
  LOAD_REGS();
L_e1a87e: /* e1a87e: jmp dword ptr [0xe65a50] */
  SPILL(); f_4e1e51(); return; /* Core!?Serialize@UBoolProperty@@UAEXAAVFArchive@@@Z */
}

void f_e1a884(void) {
  LOAD_REGS();
L_e1a884: /* e1a884: jmp dword ptr [0xe65a54] */
  SPILL(); f_4e2a9a(); return; /* Core!?Destroy@UObject@@UAEXXZ */
}

void f_e1a88a(void) {
  LOAD_REGS();
L_e1a88a: /* e1a88a: jmp dword ptr [0xe65a58] */
  SPILL(); f_4e3652(); return; /* Core!?PostLoad@UField@@UAEXXZ */
}

void f_e1a890(void) {
  LOAD_REGS();
L_e1a890: /* e1a890: jmp dword ptr [0xe65a5c] */
  SPILL(); f_4e3f49(); return; /* Core!?appUnwindf@@YAXPBGZZ */
}

void f_e1a896(void) {
  LOAD_REGS();
L_e1a896: /* e1a896: jmp dword ptr [0xe65964] */
  SPILL(); f_4e24be(); return; /* Core!??0UFloatProperty@@QAE@W4ECppProperty@@HPBGK@Z */
}

void f_e1a89c(void) {
  LOAD_REGS();
L_e1a89c: /* e1a89c: jmp dword ptr [0xe65960] */
  SPILL(); f_4e2829(); return; /* Core!??2UFloatProperty@@SAPAXIPAVUObject@@VFName@@K@Z */
}

void f_e1a8a2(void) {
  LOAD_REGS();
L_e1a8a2: /* e1a8a2: jmp dword ptr [0xe6595c] */
  SPILL(); f_4e4278(); return; /* Core!??0UBoolProperty@@QAE@W4ECppProperty@@HPBGK@Z */
}

void f_e1a8a8(void) {
  LOAD_REGS();
L_e1a8a8: /* e1a8a8: jmp dword ptr [0xe65958] */
  SPILL(); f_4e448a(); return; /* Core!??2UBoolProperty@@SAPAXIPAVUObject@@VFName@@K@Z */
}

void f_e1a8ae(void) {
  LOAD_REGS();
L_e1a8ae: /* e1a8ae: jmp dword ptr [0xe65954] */
  SPILL(); f_4e22e8(); return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */
}

void f_e1a8b4(void) {
  LOAD_REGS();
L_e1a8b4: /* e1a8b4: jmp dword ptr [0xe65950] */
  SPILL(); f_4e36a7(); return; /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */
}

void f_e1a8ba(void) {
  LOAD_REGS();
L_e1a8ba: /* e1a8ba: jmp dword ptr [0xe65948] */
  SPILL(); f_4e3fb2(); return; /* Core!??3UObject@@SAXPAXI@Z */
}

void f_e1a8c0(void) {
  LOAD_REGS();
L_e1a8c0: /* e1a8c0: jmp dword ptr [0xe65944] */
  SPILL(); f_4e1988(); return; /* Core!??1UBoolProperty@@UAE@XZ */
}

void f_e1a8c6(void) {
  LOAD_REGS();
L_e1a8c6: /* e1a8c6: jmp dword ptr [0xe65940] */
  SPILL(); f_4e38a5(); return; /* Core!??1UFloatProperty@@UAE@XZ */
}

void f_e1a8cc(void) {
  LOAD_REGS();
L_e1a8cc: /* e1a8cc: jmp dword ptr [0xe6593c] */
  SPILL(); f_4e4183(); return; /* Core!?appSprintf@@YAHPAGPBGZZ */
}

void f_e1a8d2(void) {
  LOAD_REGS();
L_e1a8d2: /* e1a8d2: jmp dword ptr [0xe65938] */
  SPILL(); f_4e4214(); return; /* Core!?appPackage@@YAPBGXZ */
}

void f_e1a8d8(void) {
  LOAD_REGS();
L_e1a8d8: /* e1a8d8: jmp dword ptr [0xe65934] */
  SPILL(); f_4e2559(); return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */
}

void f_e1a8de(void) {
  LOAD_REGS();
L_e1a8de: /* e1a8de: jmp dword ptr [0xe65930] */
  SPILL(); f_4e2b1c(); return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */
}

void f_e1a8e4(void) {
  LOAD_REGS();
L_e1a8e4: /* e1a8e4: jmp dword ptr [0xe65928] */
  SPILL(); f_4e30df(); return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */
}

void f_e1a8ea(void) {
  LOAD_REGS();
L_e1a8ea: /* e1a8ea: jmp dword ptr [0xe6591c] */
  SPILL(); f_4e3387(); return; /* Core!?ParseParam@@YAHPBG0@Z */
}

void f_e1a8f0(void) {
  LOAD_REGS();
L_e1a8f0: /* e1a8f0: jmp dword ptr [0xe65918] */
  SPILL(); f_4e2987(); return; /* Core!?appCmdLine@@YAPBGXZ */
}

void f_e1a8f6(void) {
  LOAD_REGS();
L_e1a8f6: /* e1a8f6: jmp dword ptr [0xe65914] */
  SPILL(); f_4e13de(); return; /* Core!??0FString@@QAE@PBG@Z */
}

void f_e1a8fc(void) {
  LOAD_REGS();
L_e1a8fc: /* e1a8fc: jmp dword ptr [0xe65908] */
  SPILL(); f_4e2388(); return; /* Core!?ConditionalShutdownAfterError@UObject@@QAEXXZ */
}

void f_e1a902(void) {
  LOAD_REGS();
L_e1a902: /* e1a902: jmp dword ptr [0xe65904] */
  SPILL(); f_4e2d4c(); return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */
}

void f_e1a908(void) {
  LOAD_REGS();
L_e1a908: /* e1a908: jmp dword ptr [0xe65900] */
  SPILL(); f_4e2351(); return; /* Core!?GetName@UObject@@QBEPBGXZ */
}

void f_e1a90e(void) {
  LOAD_REGS();
L_e1a90e: /* e1a90e: jmp dword ptr [0xe658fc] */
  SPILL(); f_4e27a2(); return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */
}

void f_e1a914(void) {
  LOAD_REGS();
L_e1a914: /* e1a914: jmp dword ptr [0xe658f8] */
  SPILL(); f_4e2b3a(); return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */
}

void f_e1a91a(void) {
  LOAD_REGS();
L_e1a91a: /* e1a91a: jmp dword ptr [0xe658f4] */
  SPILL(); f_4e33a5(); return; /* Core!?appFailAssert@@YAXPBD0H@Z */
}

void f_e1a920(void) {
  LOAD_REGS();
L_e1a920: /* e1a920: jmp dword ptr [0xe658f0] */
  SPILL(); f_4e353f(); return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */
}

void f_e1a926(void) {
  LOAD_REGS();
L_e1a926: /* e1a926: jmp dword ptr [0xe658ec] */
  SPILL(); f_4e39b3(); return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */
}

void f_e1a92c(void) {
  LOAD_REGS();
L_e1a92c: /* e1a92c: jmp dword ptr [0xe658e8] */
  SPILL(); f_4e1735(); return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */
}

void f_e1a932(void) {
  LOAD_REGS();
L_e1a932: /* e1a932: jmp dword ptr [0xe658e4] */
  SPILL(); f_4e33af(); return; /* Core!??0FGuid@@QAE@KKKK@Z */
}

void f_e1a938(void) {
  LOAD_REGS();
L_e1a938: /* e1a938: jmp dword ptr [0xe658e0] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_e1a93e(void) {
  LOAD_REGS();
L_e1a93e: /* e1a93e: jmp dword ptr [0xe658dc] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_e1a944(void) {
  LOAD_REGS();
L_e1a944: /* e1a944: jmp dword ptr [0xe658d8] */
  SPILL(); f_4e1d75(); return; /* Core!??0FNotifyHook@@QAE@ABV0@@Z */
}

void f_e1a94a(void) {
  LOAD_REGS();
L_e1a94a: /* e1a94a: jmp dword ptr [0xe658d4] */
  SPILL(); f_4e20bd(); return; /* Core!??4FNotifyHook@@QAEAAV0@ABV0@@Z */
}

void f_e1a950(void) {
  LOAD_REGS();
L_e1a950: /* e1a950: jmp dword ptr [0xe658d0] */
  SPILL(); f_4e2a72(); return; /* Core!?Flush@FOutputDevice@@UAEXXZ */
}

void f_e1a956(void) {
  LOAD_REGS();
L_e1a956: /* e1a956: jmp dword ptr [0xe65860] */
  SPILL(); f_4e144c(); return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */
}

void f_e1a95c(void) {
  LOAD_REGS();
L_e1a95c: /* e1a95c: jmp dword ptr [0xe658cc] */
  SPILL(); f_4e2ee1(); return; /* Core!??0FName@@QAE@W4EName@@@Z */
}

void f_e1a962(void) {
  LOAD_REGS();
L_e1a962: /* e1a962: jmp dword ptr [0xe658c8] */
  SPILL(); f_4e3242(); return; /* Core!?LocalizeGeneral@@YAPBGPBDPBG1@Z */
}

void f_e1a968(void) {
  LOAD_REGS();
L_e1a968: /* e1a968: jmp dword ptr [0xe658c4] */
  SPILL(); f_4e27d9(); return; /* Core!?appStrcpy@@YAPAGPAGPBG@Z */
}

void f_e1a96e(void) {
  LOAD_REGS();
L_e1a96e: /* e1a96e: jmp dword ptr [0xe658c0] */
  SPILL(); f_4e1064(); return; /* Core!?LocalizeGeneral@@YAPBGPBG00@Z */
}

void f_e1a974(void) {
  LOAD_REGS();
L_e1a974: /* e1a974: jmp dword ptr [0xe658bc] */
  SPILL(); f_4e2be4(); return; /* Core!?appStrncpy@@YAPAGPAGPBGH@Z */
}

void f_e1a97a(void) {
  LOAD_REGS();
L_e1a97a: /* e1a97a: jmp dword ptr [0xe658b8] */
  SPILL(); f_4e292d(); return; /* Core!?appStaticString1024@@YAPAGXZ */
}

void f_e1a980(void) {
  LOAD_REGS();
L_e1a980: /* e1a980: jmp dword ptr [0xe658b4] */
  SPILL(); f_4e335a(); return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */
}

void f_e1a986(void) {
  LOAD_REGS();
L_e1a986: /* e1a986: jmp dword ptr [0xe658b0] */
  SPILL(); f_4e280b(); return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */
}

void f_e1a98c(void) {
  LOAD_REGS();
L_e1a98c: /* e1a98c: jmp dword ptr [0xe658ac] */
  SPILL(); f_4e20e5(); return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */
}

void f_e1a992(void) {
  LOAD_REGS();
L_e1a992: /* e1a992: jmp dword ptr [0xe658a8] */
  SPILL(); f_4e4192(); return; /* Core!?appStrcmp@@YAHPBG0@Z */
}

void f_e1a998(void) {
  LOAD_REGS();
L_e1a998: /* e1a998: jmp dword ptr [0xe658a4] */
  SPILL(); f_4e44cb(); return; /* Core!?Parse@@YAHPBG0AAK@Z */
}

void f_e1a99e(void) {
  LOAD_REGS();
L_e1a99e: /* e1a99e: jmp dword ptr [0xe6589c] */
  SPILL(); f_4e150a(); return; /* Core!?appMemset@@YAXPAXHH@Z */
}

void f_e1a9a4(void) {
  LOAD_REGS();
L_e1a9a4: /* e1a9a4: jmp dword ptr [0xe65898] */
  SPILL(); f_4e1613(); return; /* Core!?LocalizeError@@YAPBGPBG00@Z */
}

void f_e1a9aa(void) {
  LOAD_REGS();
L_e1a9aa: /* e1a9aa: jmp dword ptr [0xe65890] */
  SPILL(); f_4e157d(); return; /* Core!?StaticLoadClass@UObject@@SAPAVUClass@@PAV2@PAV1@PBG2KPAVUPackageMap@@@Z */
}

void f_e1a9b0(void) {
  LOAD_REGS();
L_e1a9b0: /* e1a9b0: jmp dword ptr [0xe6588c] */
  SPILL(); f_4e3b84(); return; /* Core!?SaveConfig@UObject@@QAEXKPBG@Z */
}

void f_e1a9b6(void) {
  LOAD_REGS();
L_e1a9b6: /* e1a9b6: jmp dword ptr [0xe65888] */
  SPILL(); f_4e26df(); return; /* Core!?appStricmp@@YAHPBG0@Z */
}

void f_e1a9bc(void) {
  LOAD_REGS();
L_e1a9bc: /* e1a9bc: jmp dword ptr [0xe65884] */
  SPILL(); f_4e331e(); return; /* Core!?GetFlags@UObject@@QBEKXZ */
}

void f_e1a9c2(void) {
  LOAD_REGS();
L_e1a9c2: /* e1a9c2: jmp dword ptr [0xe65880] */
  SPILL(); f_4e1abe(); return; /* Core!?appStrchr@@YAPAGPBGH@Z */
}

void f_e1a9c8(void) {
  LOAD_REGS();
L_e1a9c8: /* e1a9c8: jmp dword ptr [0xe6587c] */
  SPILL(); f_4e2cde(); return; /* Core!?GetPathName@UObject@@QBEPBGPAV1@PAG@Z */
}

void f_e1a9ce(void) {
  LOAD_REGS();
L_e1a9ce: /* e1a9ce: jmp dword ptr [0xe65878] */
  SPILL(); f_4e3fe9(); return; /* Core!?appAtoi@@YAHPBG@Z */
}

void f_e1a9d4(void) {
  LOAD_REGS();
L_e1a9d4: /* e1a9d4: jmp dword ptr [0xe65874] */
  SPILL(); f_4e35da(); return; /* Core!?Log@FOutputDevice@@QAEXPBG@Z */
}

void f_e1a9da(void) {
  LOAD_REGS();
L_e1a9da: /* e1a9da: jmp dword ptr [0xe65870] */
  SPILL(); f_4e1037(); return; /* Core!??DFString@@QBEPBGXZ */
}

void f_e1a9e0(void) {
  LOAD_REGS();
L_e1a9e0: /* e1a9e0: jmp dword ptr [0xe6586c] */
  SPILL(); f_4e42f0(); return; /* Core!?Left@FString@@QBE?AV1@H@Z */
}

void f_e1a9e6(void) {
  LOAD_REGS();
L_e1a9e6: /* e1a9e6: jmp dword ptr [0xe65868] */
  SPILL(); f_4e32ec(); return; /* Core!?ParseCommand@@YAHPAPBGPBG@Z */
}

void f_e1a9ec(void) {
  LOAD_REGS();
L_e1a9ec: /* e1a9ec: jmp dword ptr [0xe65864] */
  SPILL(); f_4e3f3f(); return; /* Core!?StaticConstructor@UObject@@QAEXXZ */
}

void f_e1a9f2(void) {
  LOAD_REGS();
L_e1a9f2: /* e1a9f2: jmp dword ptr [0xe65bb4] */
  SPILL(); f_6c8323(); return; /* Engine!?RestoreGamma@UClient@@UAEXXZ */
}

void f_e1a9f8(void) {
  LOAD_REGS();
L_e1a9f8: /* e1a9f8: jmp dword ptr [0xe65bb0] */
  SPILL(); f_6c1b4f(); return; /* Engine!?UpdateGamma@UClient@@UAEXXZ */
}

void f_e1a9fe(void) {
  LOAD_REGS();
L_e1a9fe: /* e1a9fe: jmp dword ptr [0xe65ba8] */
  SPILL(); f_6c17ee(); return; /* Engine!?Flush@UClient@@UAEXH@Z */
}

void f_e1aa04(void) {
  LOAD_REGS();
L_e1aa04: /* e1aa04: jmp dword ptr [0xe65ba4] */
  SPILL(); f_6c8b34(); return; /* Engine!?Serialize@UClient@@UAEXAAVFArchive@@@Z */
}

void f_e1aa0a(void) {
  LOAD_REGS();
L_e1aa0a: /* e1aa0a: jmp dword ptr [0xe65ba0] */
  SPILL(); f_6cba5a(); return; /* Engine!??1UClient@@UAE@XZ */
}

void f_e1aa10(void) {
  LOAD_REGS();
L_e1aa10: /* e1aa10: jmp dword ptr [0xe65b9c] */
  SPILL(); f_6c362f(); return; /* Engine!??0UClient@@QAE@XZ */
}

void f_e1aa16(void) {
  LOAD_REGS();
L_e1aa16: /* e1aa16: jmp dword ptr [0xe65b98] */
  SPILL(); f_6c9886(); return; /* Engine!?Exec@UClient@@UAEHPBGAAVFOutputDevice@@@Z */
}

void f_e1aa1c(void) {
  LOAD_REGS();
L_e1aa1c: /* e1aa1c: jmp dword ptr [0xe65b94] */
  SPILL(); f_6c44bc(); return; /* Engine!?PostEditChange@UClient@@UAEXXZ */
}

void f_e1aa22(void) {
  LOAD_REGS();
L_e1aa22: /* e1aa22: jmp dword ptr [0xe65bac] */
  SPILL(); f_6c3968(); return; /* Engine!?Init@UClient@@UAEXPAVUEngine@@@Z */
}

void f_e1aa28(void) {
  LOAD_REGS();
L_e1aa28: /* e1aa28: jmp dword ptr [0xe65b90] */
  SPILL(); f_6c9a7a(); return; /* Engine!?Destroy@UClient@@UAEXXZ */
}

void f_e1aa2e(void) {
  LOAD_REGS();
L_e1aa2e: /* e1aa2e: jmp dword ptr [0xe65b54] */
  SPILL(); f_6c4c78(); return; /* Engine!?IsRealtime@UViewport@@QAEHXZ */
}

void f_e1aa34(void) {
  LOAD_REGS();
L_e1aa34: /* e1aa34: jmp dword ptr [0xe65b20] */
  SPILL(); f_6c972d(); return; /* Engine!?StaticClass@UClient@@SAPAVUClass@@XZ */
}

void f_e1aa3a(void) {
  LOAD_REGS();
L_e1aa3a: /* e1aa3a: jmp dword ptr [0xe65b24] */
  SPILL(); f_6ccac2(); return; /* Engine!??0UClient@@QAE@ABV0@@Z */
}

void f_e1aa40(void) {
  LOAD_REGS();
L_e1aa40: /* e1aa40: jmp dword ptr [0xe65b28] */
  SPILL(); f_6c12e9(); return; /* Engine!??4UClient@@QAEAAV0@ABV0@@Z */
}

void f_e1aa46(void) {
  LOAD_REGS();
L_e1aa46: /* e1aa46: jmp dword ptr [0xe65b2c] */
  SPILL(); f_6c45e8(); return; /* Engine!?Serialize@UViewport@@UAEXPBGW4EName@@@Z */
}

void f_e1aa4c(void) {
  LOAD_REGS();
L_e1aa4c: /* e1aa4c: jmp dword ptr [0xe65b30] */
  SPILL(); f_6c629e(); return; /* Engine!?GetServer@UViewport@@UAEPAXXZ */
}

void f_e1aa52(void) {
  LOAD_REGS();
L_e1aa52: /* e1aa52: jmp dword ptr [0xe65b34] */
  SPILL(); f_6c853a(); return; /* Engine!?SetDrag@UViewport@@UAEHH@Z */
}

void f_e1aa58(void) {
  LOAD_REGS();
L_e1aa58: /* e1aa58: jmp dword ptr [0xe65b38] */
  SPILL(); f_6c35cb(); return; /* Engine!?Present@UViewport@@UAEXXZ */
}

void f_e1aa5e(void) {
  LOAD_REGS();
L_e1aa5e: /* e1aa5e: jmp dword ptr [0xe65b3c] */
  SPILL(); f_6c8da5(); return; /* Engine!?ReadInput@UViewport@@UAEXM@Z */
}

void f_e1aa64(void) {
  LOAD_REGS();
L_e1aa64: /* e1aa64: jmp dword ptr [0xe65b40] */
  SPILL(); f_6c795f(); return; /* Engine!?Serialize@UViewport@@UAEXAAVFArchive@@@Z */
}

void f_e1aa6a(void) {
  LOAD_REGS();
L_e1aa6a: /* e1aa6a: jmp dword ptr [0xe65b44] */
  SPILL(); f_6c66f4(); return; /* Engine!??1UViewport@@UAE@XZ */
}

void f_e1aa70(void) {
  LOAD_REGS();
L_e1aa70: /* e1aa70: jmp dword ptr [0xe65b48] */
  SPILL(); f_6c9cfa(); return; /* Engine!??0UViewport@@QAE@ABV0@@Z */
}

void f_e1aa76(void) {
  LOAD_REGS();
L_e1aa76: /* e1aa76: jmp dword ptr [0xe65b4c] */
  SPILL(); f_6c9f0c(); return; /* Engine!??4UViewport@@QAEAAV0@ABV0@@Z */
}

void f_e1aa7c(void) {
  LOAD_REGS();
L_e1aa7c: /* e1aa7c: jmp dword ptr [0xe65b50] */
  SPILL(); f_6c4d9f(); return; /* Engine!?Destroy@UViewport@@UAEXXZ */
}

void f_e1aa82(void) {
  LOAD_REGS();
L_e1aa82: /* e1aa82: jmp dword ptr [0xe65b8c] */
  SPILL(); f_6cce4b(); return; /* Engine!?KeyDown@UInput@@QAEEH@Z */
}

void f_e1aa88(void) {
  LOAD_REGS();
L_e1aa88: /* e1aa88: jmp dword ptr [0xe65b58] */
  SPILL(); f_6c8c29(); return; /* Engine!?Lock@UViewport@@UAEHPAEPAH@Z */
}

void f_e1aa8e(void) {
  LOAD_REGS();
L_e1aa8e: /* e1aa8e: jmp dword ptr [0xe65b5c] */
  SPILL(); f_6cd021(); return; /* Engine!?Unlock@UViewport@@UAEXXZ */
}

void f_e1aa94(void) {
  LOAD_REGS();
L_e1aa94: /* e1aa94: jmp dword ptr [0xe65b60] */
  SPILL(); f_6cbb86(); return; /* Engine!?StaticClass@URenderDevice@@SAPAVUClass@@XZ */
}

void f_e1aa9a(void) {
  LOAD_REGS();
L_e1aa9a: /* e1aa9a: jmp dword ptr [0xe65b64] */
  SPILL(); f_6cc4c3(); return; /* Engine!??0UViewport@@QAE@XZ */
}

void f_e1aaa0(void) {
  LOAD_REGS();
L_e1aaa0: /* e1aaa0: jmp dword ptr [0xe65b68] */
  SPILL(); f_6c62fd(); return; /* Engine!?GetLevel@AActor@@QBEPAVULevel@@XZ */
}

void f_e1aaa6(void) {
  LOAD_REGS();
L_e1aaa6: /* e1aaa6: jmp dword ptr [0xe65b6c] */
  SPILL(); f_6cb9c4(); return; /* Engine!?Exec@UViewport@@UAEHPBGAAVFOutputDevice@@@Z */
}

void f_e1aaac(void) {
  LOAD_REGS();
L_e1aaac: /* e1aaac: jmp dword ptr [0xe65b70] */
  SPILL(); f_6c82c9(); return; /* Engine!??1FCameraSceneNode@@UAE@XZ */
}

void f_e1aab2(void) {
  LOAD_REGS();
L_e1aab2: /* e1aab2: jmp dword ptr [0xe65b74] */
  SPILL(); f_6caac4(); return; /* Engine!??1FCanvasUtil@@QAE@XZ */
}

void f_e1aab8(void) {
  LOAD_REGS();
L_e1aab8: /* e1aab8: jmp dword ptr [0xe65b78] */
  SPILL(); f_6c7018(); return; /* Engine!?Deproject@FSceneNode@@QAE?AVFVector@@VFPlane@@@Z */
}

void f_e1aabe(void) {
  LOAD_REGS();
L_e1aabe: /* e1aabe: jmp dword ptr [0xe65b7c] */
  SPILL(); f_6cbd48(); return; /* Engine!??0FCanvasUtil@@QAE@PAVFRenderTarget@@PAVFRenderInterface@@@Z */
}

void f_e1aac4(void) {
  LOAD_REGS();
L_e1aac4: /* e1aac4: jmp dword ptr [0xe65b80] */
  SPILL(); f_6cb2cb(); return; /* Engine!??0FCameraSceneNode@@QAE@PAVUViewport@@PAVFRenderTarget@@PAVAActor@@VFVector@@VFRotator@@M@Z */
}

void f_e1aaca(void) {
  LOAD_REGS();
L_e1aaca: /* e1aaca: jmp dword ptr [0xe65b84] */
  SPILL(); f_6c2cc0(); return; /* Engine!?GetOuterUClient@UViewport@@QBEPAVUClient@@XZ */
}

void f_e1aad0(void) {
  LOAD_REGS();
L_e1aad0: /* e1aad0: jmp dword ptr [0xe65b88] */
  SPILL(); f_6c47b9(); return; /* Engine!?StaticClass@UViewport@@SAPAVUClass@@XZ */
}

void f_e1aad6(void) {
  LOAD_REGS();
L_e1aad6: /* e1aad6: jmp dword ptr [0xe65af0] */
  SPILL(); call_ind(R32(0xe65af0u)); return; /* DINPUT8!DirectInput8Create */
}

void f_e1b5d0(void) {
  LOAD_REGS();
L_e1b5d0: /* e1b5d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* e1b5d4: mov ecx, 0x88760154 */
  ecx = 0x88760154u;
/* e1b5d9: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e1b5db: jg 0xe1c854 */
  if ((!zf && sf == of)) goto L_e1c854;
L_e1b5e1: /* e1b5e1: je 0xe1c84a */
  if (zf) goto L_e1c84a;
L_e1b5e7: /* e1b5e7: mov ecx, 0x8007047e */
  ecx = 0x8007047eu;
/* e1b5ec: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e1b5ee: jg 0xe1bde5 */
  if ((!zf && sf == of)) goto L_e1bde5;
L_e1b5f4: /* e1b5f4: je 0xe1bddb */
  if (zf) goto L_e1bddb;
L_e1b5fa: /* e1b5fa: mov ecx, 0x80040247 */
  ecx = 0x80040247u;
/* e1b5ff: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e1b601: jg 0xe1b9e9 */
  if ((!zf && sf == of)) goto L_e1b9e9;
L_e1b607: /* e1b607: je 0xe1b9df */
  if (zf) goto L_e1b9df;
L_e1b60d: /* e1b60d: add ecx, -0x2d */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffd3u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e1b610: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e1b612: jg 0xe1b862 */
  if ((!zf && sf == of)) goto L_e1b862;
L_e1b618: /* e1b618: je 0xe1b858 */
  if (zf) goto L_e1b858;
L_e1b61e: /* e1b61e: mov ecx, 0x80040207 */
  ecx = 0x80040207u;
/* e1b623: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e1b625: jg 0xe1b78f */
  if ((!zf && sf == of)) goto L_e1b78f;
L_e1b62b: /* e1b62b: je 0xe1b785 */
  if (zf) goto L_e1b785;
L_e1b631: /* e1b631: add ecx, -0x17 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffe9u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e1b634: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e1b636: jg 0xe1b6f1 */
  if ((!zf && sf == of)) goto L_e1b6f1;
L_e1b63c: /* e1b63c: je 0xe1b6e7 */
  if (zf) goto L_e1b6e7;
L_e1b642: /* e1b642: mov ecx, 0x80004004 */
  ecx = 0x80004004u;
/* e1b647: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e1b649: jg 0xe1b69f */
  if ((!zf && sf == of)) goto L_e1b69f;
L_e1b64b: /* e1b64b: je 0xe1b695 */
  if (zf) goto L_e1b695;
L_e1b64d: /* e1b64d: cmp eax, 0x8000000a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000000au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1b652: je 0xe1b68b */
  if (zf) goto L_e1b68b;
L_e1b654: /* e1b654: cmp eax, 0x80004001 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80004001u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1b659: je 0xe1b681 */
  if (zf) goto L_e1b681;
L_e1b65b: /* e1b65b: cmp eax, 0x80004002 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80004002u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1b660: je 0xe1b677 */
  if (zf) goto L_e1b677;
L_e1b662: /* e1b662: cmp eax, 0x80004003 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80004003u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1b667: jne 0xe1d89d */
  if (!zf) goto L_e1d89d;
L_e1b66d: /* e1b66d: mov eax, 0xe34fdc */
  eax = 0xe34fdcu;
/* e1b672: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b677: /* e1b677: mov eax, 0xe34fcc */
  eax = 0xe34fccu;
/* e1b67c: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b681: /* e1b681: mov eax, 0xe34fc0 */
  eax = 0xe34fc0u;
/* e1b686: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b68b: /* e1b68b: mov eax, 0xe34fb4 */
  eax = 0xe34fb4u;
/* e1b690: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b695: /* e1b695: mov eax, 0xe34fac */
  eax = 0xe34facu;
/* e1b69a: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b69f: /* e1b69f: cmp eax, 0x80004005 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80004005u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1b6a4: je 0xe1b6dd */
  if (zf) goto L_e1b6dd;
L_e1b6a6: /* e1b6a6: cmp eax, 0x8000ffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000ffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1b6ab: je 0xe1b6d3 */
  if (zf) goto L_e1b6d3;
L_e1b6ad: /* e1b6ad: cmp eax, 0x80040110 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80040110u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1b6b2: je 0xe1b6c9 */
  if (zf) goto L_e1b6c9;
L_e1b6b4: /* e1b6b4: cmp eax, 0x80040154 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80040154u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1b6b9: jne 0xe1d89d */
  if (!zf) goto L_e1d89d;
L_e1b6bf: /* e1b6bf: mov eax, 0xe34f98 */
  eax = 0xe34f98u;
/* e1b6c4: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b6c9: /* e1b6c9: mov eax, 0xe34f80 */
  eax = 0xe34f80u;
/* e1b6ce: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b6d3: /* e1b6d3: mov eax, 0xe34f70 */
  eax = 0xe34f70u;
/* e1b6d8: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b6dd: /* e1b6dd: mov eax, 0xe34f68 */
  eax = 0xe34f68u;
/* e1b6e2: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b6e7: /* e1b6e7: mov eax, 0xe34f54 */
  eax = 0xe34f54u;
/* e1b6ec: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b6f1: /* e1b6f1: mov ecx, 0x80040203 */
  ecx = 0x80040203u;
/* e1b6f6: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e1b6f8: jg 0xe1b74e */
  if ((!zf && sf == of)) goto L_e1b74e;
L_e1b6fa: /* e1b6fa: je 0xe1b744 */
  if (zf) goto L_e1b744;
L_e1b6fc: /* e1b6fc: cmp eax, 0x800401f1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x800401f1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1b701: je 0xe1b73a */
  if (zf) goto L_e1b73a;
L_e1b703: /* e1b703: cmp eax, 0x80040200 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80040200u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1b708: je 0xe1b730 */
  if (zf) goto L_e1b730;
L_e1b70a: /* e1b70a: cmp eax, 0x80040201 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80040201u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1b70f: je 0xe1b726 */
  if (zf) goto L_e1b726;
L_e1b711: /* e1b711: cmp eax, 0x80040202 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80040202u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1b716: jne 0xe1d89d */
  if (!zf) goto L_e1d89d;
L_e1b71c: /* e1b71c: mov eax, 0xe34f1c */
  eax = 0xe34f1cu;
/* e1b721: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b726: /* e1b726: mov eax, 0xe34ed8 */
  eax = 0xe34ed8u;
/* e1b72b: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b730: /* e1b730: mov eax, 0xe34ea4 */
  eax = 0xe34ea4u;
/* e1b735: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b73a: /* e1b73a: mov eax, 0xe34e8c */
  eax = 0xe34e8cu;
/* e1b73f: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b744: /* e1b744: mov eax, 0xe34e48 */
  eax = 0xe34e48u;
/* e1b749: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b74e: /* e1b74e: cmp eax, 0x80040204 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80040204u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1b753: je 0xe1b77b */
  if (zf) goto L_e1b77b;
L_e1b755: /* e1b755: cmp eax, 0x80040205 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80040205u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1b75a: je 0xe1b771 */
  if (zf) goto L_e1b771;
L_e1b75c: /* e1b75c: cmp eax, 0x80040206 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80040206u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1b761: jne 0xe1d89d */
  if (!zf) goto L_e1d89d;
L_e1b767: /* e1b767: mov eax, 0xe34e04 */
  eax = 0xe34e04u;
/* e1b76c: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b771: /* e1b771: mov eax, 0xe34db8 */
  eax = 0xe34db8u;
/* e1b776: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b77b: /* e1b77b: mov eax, 0xe34d78 */
  eax = 0xe34d78u;
/* e1b780: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b785: /* e1b785: mov eax, 0xe34d44 */
  eax = 0xe34d44u;
/* e1b78a: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b78f: /* e1b78f: add eax, 0x7ffbfdf8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7ffbfdf8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e1b794: cmp eax, 0x11 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x11u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e1b797: ja 0xe1d89d */
  if ((!cf && !zf)) goto L_e1d89d;
L_e1b79d: /* e1b79d: jmp dword ptr [eax*4 + 0xe1d8ba] */
  switch (R32((uint32_t)(eax*4 + 0xe1d8bau))) {
    case 0xe1b7a4u: goto L_e1b7a4;
    case 0xe1b7aeu: goto L_e1b7ae;
    case 0xe1b7b8u: goto L_e1b7b8;
    case 0xe1b7c2u: goto L_e1b7c2;
    case 0xe1b7ccu: goto L_e1b7cc;
    case 0xe1b7d6u: goto L_e1b7d6;
    case 0xe1b7e0u: goto L_e1b7e0;
    case 0xe1b7eau: goto L_e1b7ea;
    case 0xe1b7f4u: goto L_e1b7f4;
    case 0xe1b7feu: goto L_e1b7fe;
    case 0xe1b808u: goto L_e1b808;
    case 0xe1b812u: goto L_e1b812;
    case 0xe1b81cu: goto L_e1b81c;
    case 0xe1b826u: goto L_e1b826;
    case 0xe1b830u: goto L_e1b830;
    case 0xe1b83au: goto L_e1b83a;
    case 0xe1b844u: goto L_e1b844;
    case 0xe1b84eu: goto L_e1b84e;
    case 0xe1b877u: goto L_e1b877;
    case 0xe1b881u: goto L_e1b881;
    case 0xe1b88bu: goto L_e1b88b;
    case 0xe1b895u: goto L_e1b895;
    case 0xe1b89fu: goto L_e1b89f;
    case 0xe1b8a9u: goto L_e1b8a9;
    case 0xe1b8b3u: goto L_e1b8b3;
    case 0xe1b8bdu: goto L_e1b8bd;
    case 0xe1b8c7u: goto L_e1b8c7;
    case 0xe1b8d1u: goto L_e1b8d1;
    case 0xe1b8dbu: goto L_e1b8db;
    case 0xe1b8e5u: goto L_e1b8e5;
    case 0xe1b8efu: goto L_e1b8ef;
    case 0xe1b8f9u: goto L_e1b8f9;
    case 0xe1b903u: goto L_e1b903;
    case 0xe1b90du: goto L_e1b90d;
    case 0xe1b917u: goto L_e1b917;
    case 0xe1b921u: goto L_e1b921;
    case 0xe1b92bu: goto L_e1b92b;
    case 0xe1b935u: goto L_e1b935;
    case 0xe1b93fu: goto L_e1b93f;
    case 0xe1b949u: goto L_e1b949;
    case 0xe1b953u: goto L_e1b953;
    case 0xe1b95du: goto L_e1b95d;
    case 0xe1b967u: goto L_e1b967;
    case 0xe1b971u: goto L_e1b971;
    case 0xe1b97bu: goto L_e1b97b;
    case 0xe1b985u: goto L_e1b985;
    case 0xe1b98fu: goto L_e1b98f;
    case 0xe1b999u: goto L_e1b999;
    case 0xe1b9a3u: goto L_e1b9a3;
    case 0xe1b9adu: goto L_e1b9ad;
    case 0xe1b9b7u: goto L_e1b9b7;
    case 0xe1b9c1u: goto L_e1b9c1;
    case 0xe1b9cbu: goto L_e1b9cb;
    case 0xe1b9d5u: goto L_e1b9d5;
    case 0xe1ba18u: goto L_e1ba18;
    case 0xe1ba22u: goto L_e1ba22;
    case 0xe1ba2cu: goto L_e1ba2c;
    case 0xe1ba36u: goto L_e1ba36;
    case 0xe1ba40u: goto L_e1ba40;
    case 0xe1ba4au: goto L_e1ba4a;
    case 0xe1ba54u: goto L_e1ba54;
    case 0xe1ba5eu: goto L_e1ba5e;
    case 0xe1ba68u: goto L_e1ba68;
    case 0xe1ba72u: goto L_e1ba72;
    case 0xe1ba7cu: goto L_e1ba7c;
    case 0xe1ba86u: goto L_e1ba86;
    case 0xe1ba90u: goto L_e1ba90;
    case 0xe1ba9au: goto L_e1ba9a;
    case 0xe1baa4u: goto L_e1baa4;
    case 0xe1baaeu: goto L_e1baae;
    case 0xe1bab8u: goto L_e1bab8;
    case 0xe1bac2u: goto L_e1bac2;
    case 0xe1baccu: goto L_e1bacc;
    case 0xe1bad6u: goto L_e1bad6;
    case 0xe1bae0u: goto L_e1bae0;
    case 0xe1baeau: goto L_e1baea;
    case 0xe1baf4u: goto L_e1baf4;
    case 0xe1bafeu: goto L_e1bafe;
    case 0xe1bb08u: goto L_e1bb08;
    case 0xe1bb12u: goto L_e1bb12;
    case 0xe1bb1cu: goto L_e1bb1c;
    case 0xe1bb26u: goto L_e1bb26;
    case 0xe1bb30u: goto L_e1bb30;
    case 0xe1bb3au: goto L_e1bb3a;
    case 0xe1bb44u: goto L_e1bb44;
    case 0xe1bb4eu: goto L_e1bb4e;
    case 0xe1bb58u: goto L_e1bb58;
    case 0xe1bb62u: goto L_e1bb62;
    case 0xe1bb6cu: goto L_e1bb6c;
    case 0xe1bb76u: goto L_e1bb76;
    case 0xe1bb80u: goto L_e1bb80;
    case 0xe1d89du: goto L_e1d89d;
    default: guest_badjump(0xe1b79d, R32((uint32_t)(eax*4 + 0xe1d8bau))); return;
  }
L_e1b7a4: /* e1b7a4: mov eax, 0xe34d14 */
  eax = 0xe34d14u;
/* e1b7a9: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b7ae: /* e1b7ae: mov eax, 0xe34cec */
  eax = 0xe34cecu;
/* e1b7b3: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b7b8: /* e1b7b8: mov eax, 0xe34cc4 */
  eax = 0xe34cc4u;
/* e1b7bd: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b7c2: /* e1b7c2: mov eax, 0xe34c9c */
  eax = 0xe34c9cu;
/* e1b7c7: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b7cc: /* e1b7cc: mov eax, 0xe34c88 */
  eax = 0xe34c88u;
/* e1b7d1: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b7d6: /* e1b7d6: mov eax, 0xe34c70 */
  eax = 0xe34c70u;
/* e1b7db: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b7e0: /* e1b7e0: mov eax, 0xe34c60 */
  eax = 0xe34c60u;
/* e1b7e5: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b7ea: /* e1b7ea: mov eax, 0xe34c48 */
  eax = 0xe34c48u;
/* e1b7ef: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b7f4: /* e1b7f4: mov eax, 0xe34c2c */
  eax = 0xe34c2cu;
/* e1b7f9: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b7fe: /* e1b7fe: mov eax, 0xe34c18 */
  eax = 0xe34c18u;
/* e1b803: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b808: /* e1b808: mov eax, 0xe34c04 */
  eax = 0xe34c04u;
/* e1b80d: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b812: /* e1b812: mov eax, 0xe34bf4 */
  eax = 0xe34bf4u;
/* e1b817: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b81c: /* e1b81c: mov eax, 0xe34be4 */
  eax = 0xe34be4u;
/* e1b821: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b826: /* e1b826: mov eax, 0xe34bd0 */
  eax = 0xe34bd0u;
/* e1b82b: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b830: /* e1b830: mov eax, 0xe34bc0 */
  eax = 0xe34bc0u;
/* e1b835: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b83a: /* e1b83a: mov eax, 0xe34ba8 */
  eax = 0xe34ba8u;
/* e1b83f: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b844: /* e1b844: mov eax, 0xe34b94 */
  eax = 0xe34b94u;
/* e1b849: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b84e: /* e1b84e: mov eax, 0xe34b7c */
  eax = 0xe34b7cu;
/* e1b853: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b858: /* e1b858: mov eax, 0xe34b64 */
  eax = 0xe34b64u;
/* e1b85d: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b862: /* e1b862: add eax, 0x7ffbfde5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7ffbfde5u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e1b867: cmp eax, 0x29 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x29u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e1b86a: ja 0xe1d89d */
  if ((!cf && !zf)) goto L_e1d89d;
L_e1b870: /* e1b870: jmp dword ptr [eax*4 + 0xe1d902] */
  switch (R32((uint32_t)(eax*4 + 0xe1d902u))) {
    case 0xe1b877u: goto L_e1b877;
    case 0xe1b881u: goto L_e1b881;
    case 0xe1b88bu: goto L_e1b88b;
    case 0xe1b895u: goto L_e1b895;
    case 0xe1b89fu: goto L_e1b89f;
    case 0xe1b8a9u: goto L_e1b8a9;
    case 0xe1b8b3u: goto L_e1b8b3;
    case 0xe1b8bdu: goto L_e1b8bd;
    case 0xe1b8c7u: goto L_e1b8c7;
    case 0xe1b8d1u: goto L_e1b8d1;
    case 0xe1b8dbu: goto L_e1b8db;
    case 0xe1b8e5u: goto L_e1b8e5;
    case 0xe1b8efu: goto L_e1b8ef;
    case 0xe1b8f9u: goto L_e1b8f9;
    case 0xe1b903u: goto L_e1b903;
    case 0xe1b90du: goto L_e1b90d;
    case 0xe1b917u: goto L_e1b917;
    case 0xe1b921u: goto L_e1b921;
    case 0xe1b92bu: goto L_e1b92b;
    case 0xe1b935u: goto L_e1b935;
    case 0xe1b93fu: goto L_e1b93f;
    case 0xe1b949u: goto L_e1b949;
    case 0xe1b953u: goto L_e1b953;
    case 0xe1b95du: goto L_e1b95d;
    case 0xe1b967u: goto L_e1b967;
    case 0xe1b971u: goto L_e1b971;
    case 0xe1b97bu: goto L_e1b97b;
    case 0xe1b985u: goto L_e1b985;
    case 0xe1b98fu: goto L_e1b98f;
    case 0xe1b999u: goto L_e1b999;
    case 0xe1b9a3u: goto L_e1b9a3;
    case 0xe1b9adu: goto L_e1b9ad;
    case 0xe1b9b7u: goto L_e1b9b7;
    case 0xe1b9c1u: goto L_e1b9c1;
    case 0xe1b9cbu: goto L_e1b9cb;
    case 0xe1b9d5u: goto L_e1b9d5;
    case 0xe1ba18u: goto L_e1ba18;
    case 0xe1ba22u: goto L_e1ba22;
    case 0xe1ba2cu: goto L_e1ba2c;
    case 0xe1ba36u: goto L_e1ba36;
    case 0xe1ba40u: goto L_e1ba40;
    case 0xe1ba4au: goto L_e1ba4a;
    case 0xe1ba54u: goto L_e1ba54;
    case 0xe1ba5eu: goto L_e1ba5e;
    case 0xe1ba68u: goto L_e1ba68;
    case 0xe1ba72u: goto L_e1ba72;
    case 0xe1ba7cu: goto L_e1ba7c;
    case 0xe1ba86u: goto L_e1ba86;
    case 0xe1ba90u: goto L_e1ba90;
    case 0xe1ba9au: goto L_e1ba9a;
    case 0xe1baa4u: goto L_e1baa4;
    case 0xe1baaeu: goto L_e1baae;
    case 0xe1bab8u: goto L_e1bab8;
    case 0xe1bac2u: goto L_e1bac2;
    case 0xe1baccu: goto L_e1bacc;
    case 0xe1bad6u: goto L_e1bad6;
    case 0xe1bae0u: goto L_e1bae0;
    case 0xe1baeau: goto L_e1baea;
    case 0xe1baf4u: goto L_e1baf4;
    case 0xe1bafeu: goto L_e1bafe;
    case 0xe1bb08u: goto L_e1bb08;
    case 0xe1bb12u: goto L_e1bb12;
    case 0xe1bb1cu: goto L_e1bb1c;
    case 0xe1bb26u: goto L_e1bb26;
    case 0xe1bb30u: goto L_e1bb30;
    case 0xe1bb3au: goto L_e1bb3a;
    case 0xe1bb44u: goto L_e1bb44;
    case 0xe1bb4eu: goto L_e1bb4e;
    case 0xe1bb58u: goto L_e1bb58;
    case 0xe1bb62u: goto L_e1bb62;
    case 0xe1bb6cu: goto L_e1bb6c;
    case 0xe1bb76u: goto L_e1bb76;
    case 0xe1bb80u: goto L_e1bb80;
    case 0xe1d89du: goto L_e1d89d;
    default: guest_badjump(0xe1b870, R32((uint32_t)(eax*4 + 0xe1d902u))); return;
  }
L_e1b877: /* e1b877: mov eax, 0xe34b44 */
  eax = 0xe34b44u;
/* e1b87c: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b881: /* e1b881: mov eax, 0xe34b28 */
  eax = 0xe34b28u;
/* e1b886: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b88b: /* e1b88b: mov eax, 0xe34b14 */
  eax = 0xe34b14u;
/* e1b890: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b895: /* e1b895: mov eax, 0xe34b00 */
  eax = 0xe34b00u;
/* e1b89a: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b89f: /* e1b89f: mov eax, 0xe34ae4 */
  eax = 0xe34ae4u;
/* e1b8a4: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b8a9: /* e1b8a9: mov eax, 0xe34ac8 */
  eax = 0xe34ac8u;
/* e1b8ae: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b8b3: /* e1b8b3: mov eax, 0xe34aac */
  eax = 0xe34aacu;
/* e1b8b8: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b8bd: /* e1b8bd: mov eax, 0xe34a94 */
  eax = 0xe34a94u;
/* e1b8c2: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b8c7: /* e1b8c7: mov eax, 0xe34a80 */
  eax = 0xe34a80u;
/* e1b8cc: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b8d1: /* e1b8d1: mov eax, 0xe34a6c */
  eax = 0xe34a6cu;
/* e1b8d6: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b8db: /* e1b8db: mov eax, 0xe34a58 */
  eax = 0xe34a58u;
/* e1b8e0: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b8e5: /* e1b8e5: mov eax, 0xe34a44 */
  eax = 0xe34a44u;
/* e1b8ea: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b8ef: /* e1b8ef: mov eax, 0xe34a30 */
  eax = 0xe34a30u;
/* e1b8f4: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b8f9: /* e1b8f9: mov eax, 0xe34a14 */
  eax = 0xe34a14u;
/* e1b8fe: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b903: /* e1b903: mov eax, 0xe34a00 */
  eax = 0xe34a00u;
/* e1b908: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b90d: /* e1b90d: mov eax, 0xe349e8 */
  eax = 0xe349e8u;
/* e1b912: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b917: /* e1b917: mov eax, 0xe349d0 */
  eax = 0xe349d0u;
/* e1b91c: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b921: /* e1b921: mov eax, 0xe349b4 */
  eax = 0xe349b4u;
/* e1b926: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b92b: /* e1b92b: mov eax, 0xe3499c */
  eax = 0xe3499cu;
/* e1b930: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b935: /* e1b935: mov eax, 0xe3498c */
  eax = 0xe3498cu;
/* e1b93a: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b93f: /* e1b93f: mov eax, 0xe34970 */
  eax = 0xe34970u;
/* e1b944: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b949: /* e1b949: mov eax, 0xe34958 */
  eax = 0xe34958u;
/* e1b94e: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b953: /* e1b953: mov eax, 0xe34940 */
  eax = 0xe34940u;
/* e1b958: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b95d: /* e1b95d: mov eax, 0xe34924 */
  eax = 0xe34924u;
/* e1b962: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b967: /* e1b967: mov eax, 0xe34908 */
  eax = 0xe34908u;
/* e1b96c: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b971: /* e1b971: mov eax, 0xe348f0 */
  eax = 0xe348f0u;
/* e1b976: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b97b: /* e1b97b: mov eax, 0xe348d4 */
  eax = 0xe348d4u;
/* e1b980: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b985: /* e1b985: mov eax, 0xe348b8 */
  eax = 0xe348b8u;
/* e1b98a: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b98f: /* e1b98f: mov eax, 0xe3489c */
  eax = 0xe3489cu;
/* e1b994: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b999: /* e1b999: mov eax, 0xe34888 */
  eax = 0xe34888u;
/* e1b99e: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b9a3: /* e1b9a3: mov eax, 0xe34874 */
  eax = 0xe34874u;
/* e1b9a8: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b9ad: /* e1b9ad: mov eax, 0xe34858 */
  eax = 0xe34858u;
/* e1b9b2: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b9b7: /* e1b9b7: mov eax, 0xe34840 */
  eax = 0xe34840u;
/* e1b9bc: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b9c1: /* e1b9c1: mov eax, 0xe34820 */
  eax = 0xe34820u;
/* e1b9c6: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b9cb: /* e1b9cb: mov eax, 0xe34808 */
  eax = 0xe34808u;
/* e1b9d0: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b9d5: /* e1b9d5: mov eax, 0xe347ec */
  eax = 0xe347ecu;
/* e1b9da: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b9df: /* e1b9df: mov eax, 0xe347d8 */
  eax = 0xe347d8u;
/* e1b9e4: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1b9e9: /* e1b9e9: mov ecx, 0x80040285 */
  ecx = 0x80040285u;
/* e1b9ee: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e1b9f0: jg 0xe1bb94 */
  if ((!zf && sf == of)) goto L_e1bb94;
L_e1b9f6: /* e1b9f6: je 0xe1bb8a */
  if (zf) goto L_e1bb8a;
L_e1b9fc: /* e1b9fc: add eax, 0x7ffbfdb8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7ffbfdb8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e1ba01: cmp eax, 0x3c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e1ba04: ja 0xe1d89d */
  if ((!cf && !zf)) goto L_e1d89d;
L_e1ba0a: /* e1ba0a: movzx eax, byte ptr [eax + 0xe1da42] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0xe1da42u)));
/* e1ba11: jmp dword ptr [eax*4 + 0xe1d9aa] */
  switch (R32((uint32_t)(eax*4 + 0xe1d9aau))) {
    case 0xe1ba18u: goto L_e1ba18;
    case 0xe1ba22u: goto L_e1ba22;
    case 0xe1ba2cu: goto L_e1ba2c;
    case 0xe1ba36u: goto L_e1ba36;
    case 0xe1ba40u: goto L_e1ba40;
    case 0xe1ba4au: goto L_e1ba4a;
    case 0xe1ba54u: goto L_e1ba54;
    case 0xe1ba5eu: goto L_e1ba5e;
    case 0xe1ba68u: goto L_e1ba68;
    case 0xe1ba72u: goto L_e1ba72;
    case 0xe1ba7cu: goto L_e1ba7c;
    case 0xe1ba86u: goto L_e1ba86;
    case 0xe1ba90u: goto L_e1ba90;
    case 0xe1ba9au: goto L_e1ba9a;
    case 0xe1baa4u: goto L_e1baa4;
    case 0xe1baaeu: goto L_e1baae;
    case 0xe1bab8u: goto L_e1bab8;
    case 0xe1bac2u: goto L_e1bac2;
    case 0xe1baccu: goto L_e1bacc;
    case 0xe1bad6u: goto L_e1bad6;
    case 0xe1bae0u: goto L_e1bae0;
    case 0xe1baeau: goto L_e1baea;
    case 0xe1baf4u: goto L_e1baf4;
    case 0xe1bafeu: goto L_e1bafe;
    case 0xe1bb08u: goto L_e1bb08;
    case 0xe1bb12u: goto L_e1bb12;
    case 0xe1bb1cu: goto L_e1bb1c;
    case 0xe1bb26u: goto L_e1bb26;
    case 0xe1bb30u: goto L_e1bb30;
    case 0xe1bb3au: goto L_e1bb3a;
    case 0xe1bb44u: goto L_e1bb44;
    case 0xe1bb4eu: goto L_e1bb4e;
    case 0xe1bb58u: goto L_e1bb58;
    case 0xe1bb62u: goto L_e1bb62;
    case 0xe1bb6cu: goto L_e1bb6c;
    case 0xe1bb76u: goto L_e1bb76;
    case 0xe1bb80u: goto L_e1bb80;
    case 0xe1d89du: goto L_e1d89d;
    default: guest_badjump(0xe1ba11, R32((uint32_t)(eax*4 + 0xe1d9aau))); return;
  }
L_e1ba18: /* e1ba18: mov eax, 0xe347bc */
  eax = 0xe347bcu;
/* e1ba1d: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1ba22: /* e1ba22: mov eax, 0xe347a0 */
  eax = 0xe347a0u;
/* e1ba27: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1ba2c: /* e1ba2c: mov eax, 0xe34784 */
  eax = 0xe34784u;
/* e1ba31: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1ba36: /* e1ba36: mov eax, 0xe34768 */
  eax = 0xe34768u;
/* e1ba3b: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1ba40: /* e1ba40: mov eax, 0xe34754 */
  eax = 0xe34754u;
/* e1ba45: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1ba4a: /* e1ba4a: mov eax, 0xe3473c */
  eax = 0xe3473cu;
/* e1ba4f: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1ba54: /* e1ba54: mov eax, 0xe34724 */
  eax = 0xe34724u;
/* e1ba59: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1ba5e: /* e1ba5e: mov eax, 0xe34718 */
  eax = 0xe34718u;
/* e1ba63: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1ba68: /* e1ba68: mov eax, 0xe346f8 */
  eax = 0xe346f8u;
/* e1ba6d: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1ba72: /* e1ba72: mov eax, 0xe346e0 */
  eax = 0xe346e0u;
/* e1ba77: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1ba7c: /* e1ba7c: mov eax, 0xe346c8 */
  eax = 0xe346c8u;
/* e1ba81: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1ba86: /* e1ba86: mov eax, 0xe346ac */
  eax = 0xe346acu;
/* e1ba8b: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1ba90: /* e1ba90: mov eax, 0xe34698 */
  eax = 0xe34698u;
/* e1ba95: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1ba9a: /* e1ba9a: mov eax, 0xe34680 */
  eax = 0xe34680u;
/* e1ba9f: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1baa4: /* e1baa4: mov eax, 0xe34670 */
  eax = 0xe34670u;
/* e1baa9: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1baae: /* e1baae: mov eax, 0xe34658 */
  eax = 0xe34658u;
/* e1bab3: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bab8: /* e1bab8: mov eax, 0xe3463c */
  eax = 0xe3463cu;
/* e1babd: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bac2: /* e1bac2: mov eax, 0xe34628 */
  eax = 0xe34628u;
/* e1bac7: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bacc: /* e1bacc: mov eax, 0xe34614 */
  eax = 0xe34614u;
/* e1bad1: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bad6: /* e1bad6: mov eax, 0xe345f8 */
  eax = 0xe345f8u;
/* e1badb: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bae0: /* e1bae0: mov eax, 0xe345dc */
  eax = 0xe345dcu;
/* e1bae5: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1baea: /* e1baea: mov eax, 0xe345bc */
  eax = 0xe345bcu;
/* e1baef: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1baf4: /* e1baf4: mov eax, 0xe345a4 */
  eax = 0xe345a4u;
/* e1baf9: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bafe: /* e1bafe: mov eax, 0xe34588 */
  eax = 0xe34588u;
/* e1bb03: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bb08: /* e1bb08: mov eax, 0xe34568 */
  eax = 0xe34568u;
/* e1bb0d: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bb12: /* e1bb12: mov eax, 0xe34550 */
  eax = 0xe34550u;
/* e1bb17: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bb1c: /* e1bb1c: mov eax, 0xe3453c */
  eax = 0xe3453cu;
/* e1bb21: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bb26: /* e1bb26: mov eax, 0xe34524 */
  eax = 0xe34524u;
/* e1bb2b: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bb30: /* e1bb30: mov eax, 0xe3450c */
  eax = 0xe3450cu;
/* e1bb35: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bb3a: /* e1bb3a: mov eax, 0xe344f4 */
  eax = 0xe344f4u;
/* e1bb3f: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bb44: /* e1bb44: mov eax, 0xe344d0 */
  eax = 0xe344d0u;
/* e1bb49: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bb4e: /* e1bb4e: mov eax, 0xe344b8 */
  eax = 0xe344b8u;
/* e1bb53: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bb58: /* e1bb58: mov eax, 0xe344a4 */
  eax = 0xe344a4u;
/* e1bb5d: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bb62: /* e1bb62: mov eax, 0xe3448c */
  eax = 0xe3448cu;
/* e1bb67: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bb6c: /* e1bb6c: mov eax, 0xe3446c */
  eax = 0xe3446cu;
/* e1bb71: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bb76: /* e1bb76: mov eax, 0xe34454 */
  eax = 0xe34454u;
/* e1bb7b: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bb80: /* e1bb80: mov eax, 0xe34434 */
  eax = 0xe34434u;
/* e1bb85: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bb8a: /* e1bb8a: mov eax, 0xe3441c */
  eax = 0xe3441cu;
/* e1bb8f: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bb94: /* e1bb94: mov ecx, 0x80040300 */
  ecx = 0x80040300u;
/* e1bb99: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e1bb9b: jg 0xe1bc52 */
  if ((!zf && sf == of)) goto L_e1bc52;
L_e1bba1: /* e1bba1: je 0xe1bc48 */
  if (zf) goto L_e1bc48;
L_e1bba7: /* e1bba7: add eax, 0x7ffbfd7a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7ffbfd7au);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e1bbac: cmp eax, 0xf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e1bbaf: ja 0xe1d89d */
  if ((!cf && !zf)) goto L_e1d89d;
L_e1bbb5: /* e1bbb5: jmp dword ptr [eax*4 + 0xe1da7f] */
  switch (R32((uint32_t)(eax*4 + 0xe1da7fu))) {
    case 0xe1bbbcu: goto L_e1bbbc;
    case 0xe1bbc6u: goto L_e1bbc6;
    case 0xe1bbd0u: goto L_e1bbd0;
    case 0xe1bbdau: goto L_e1bbda;
    case 0xe1bbe4u: goto L_e1bbe4;
    case 0xe1bbeeu: goto L_e1bbee;
    case 0xe1bbf8u: goto L_e1bbf8;
    case 0xe1bc02u: goto L_e1bc02;
    case 0xe1bc0cu: goto L_e1bc0c;
    case 0xe1bc16u: goto L_e1bc16;
    case 0xe1bc20u: goto L_e1bc20;
    case 0xe1bc2au: goto L_e1bc2a;
    case 0xe1bc34u: goto L_e1bc34;
    case 0xe1bc3eu: goto L_e1bc3e;
    case 0xe1bf8fu: goto L_e1bf8f;
    case 0xe1bf99u: goto L_e1bf99;
    case 0xe1bfa3u: goto L_e1bfa3;
    case 0xe1bfadu: goto L_e1bfad;
    case 0xe1bfb7u: goto L_e1bfb7;
    case 0xe1bfc1u: goto L_e1bfc1;
    case 0xe1bfcbu: goto L_e1bfcb;
    case 0xe1bfd5u: goto L_e1bfd5;
    case 0xe1bfdfu: goto L_e1bfdf;
    case 0xe1bfe9u: goto L_e1bfe9;
    case 0xe1bff3u: goto L_e1bff3;
    case 0xe1bffdu: goto L_e1bffd;
    case 0xe1c007u: goto L_e1c007;
    case 0xe1c011u: goto L_e1c011;
    case 0xe1c01bu: goto L_e1c01b;
    case 0xe1c025u: goto L_e1c025;
    case 0xe1c02fu: goto L_e1c02f;
    case 0xe1c039u: goto L_e1c039;
    case 0xe1c071u: goto L_e1c071;
    case 0xe1c07bu: goto L_e1c07b;
    case 0xe1c085u: goto L_e1c085;
    case 0xe1c08fu: goto L_e1c08f;
    case 0xe1c099u: goto L_e1c099;
    case 0xe1c0a3u: goto L_e1c0a3;
    case 0xe1c0adu: goto L_e1c0ad;
    case 0xe1c0b7u: goto L_e1c0b7;
    case 0xe1c0c1u: goto L_e1c0c1;
    case 0xe1c0cbu: goto L_e1c0cb;
    case 0xe1ca18u: goto L_e1ca18;
    case 0xe1ca22u: goto L_e1ca22;
    case 0xe1ca2cu: goto L_e1ca2c;
    case 0xe1ca36u: goto L_e1ca36;
    case 0xe1ca40u: goto L_e1ca40;
    case 0xe1ca4au: goto L_e1ca4a;
    case 0xe1ca54u: goto L_e1ca54;
    case 0xe1ca5eu: goto L_e1ca5e;
    case 0xe1ca68u: goto L_e1ca68;
    case 0xe1ca72u: goto L_e1ca72;
    case 0xe1ca7cu: goto L_e1ca7c;
    case 0xe1ca86u: goto L_e1ca86;
    case 0xe1ca90u: goto L_e1ca90;
    case 0xe1ca9au: goto L_e1ca9a;
    case 0xe1caa4u: goto L_e1caa4;
    case 0xe1caaeu: goto L_e1caae;
    case 0xe1cab8u: goto L_e1cab8;
    case 0xe1cac2u: goto L_e1cac2;
    case 0xe1d89du: goto L_e1d89d;
    default: guest_badjump(0xe1bbb5, R32((uint32_t)(eax*4 + 0xe1da7fu))); return;
  }
L_e1bbbc: /* e1bbbc: mov eax, 0xe34400 */
  eax = 0xe34400u;
/* e1bbc1: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bbc6: /* e1bbc6: mov eax, 0xe343e0 */
  eax = 0xe343e0u;
/* e1bbcb: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bbd0: /* e1bbd0: mov eax, 0xe343c8 */
  eax = 0xe343c8u;
/* e1bbd5: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bbda: /* e1bbda: mov eax, 0xe343b0 */
  eax = 0xe343b0u;
/* e1bbdf: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bbe4: /* e1bbe4: mov eax, 0xe34390 */
  eax = 0xe34390u;
/* e1bbe9: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bbee: /* e1bbee: mov eax, 0xe34370 */
  eax = 0xe34370u;
/* e1bbf3: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bbf8: /* e1bbf8: mov eax, 0xe34350 */
  eax = 0xe34350u;
/* e1bbfd: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bc02: /* e1bc02: mov eax, 0xe34334 */
  eax = 0xe34334u;
/* e1bc07: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bc0c: /* e1bc0c: mov eax, 0xe3431c */
  eax = 0xe3431cu;
/* e1bc11: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bc16: /* e1bc16: mov eax, 0xe34304 */
  eax = 0xe34304u;
/* e1bc1b: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bc20: /* e1bc20: mov eax, 0xe342e4 */
  eax = 0xe342e4u;
/* e1bc25: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bc2a: /* e1bc2a: mov eax, 0xe342b8 */
  eax = 0xe342b8u;
/* e1bc2f: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bc34: /* e1bc34: mov eax, 0xe3429c */
  eax = 0xe3429cu;
/* e1bc39: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bc3e: /* e1bc3e: mov eax, 0xe34280 */
  eax = 0xe34280u;
/* e1bc43: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bc48: /* e1bc48: mov eax, 0xe3426c */
  eax = 0xe3426cu;
/* e1bc4d: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bc52: /* e1bc52: mov ecx, 0x80070002 */
  ecx = 0x80070002u;
/* e1bc57: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e1bc59: jg 0xe1bd25 */
  if ((!zf && sf == of)) goto L_e1bd25;
L_e1bc5f: /* e1bc5f: je 0xe1bd1b */
  if (zf) goto L_e1bd1b;
L_e1bc65: /* e1bc65: mov ecx, 0x800403f2 */
  ecx = 0x800403f2u;
/* e1bc6a: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e1bc6c: jg 0xe1bcd3 */
  if ((!zf && sf == of)) goto L_e1bcd3;
L_e1bc6e: /* e1bc6e: je 0xe1bcc9 */
  if (zf) goto L_e1bcc9;
L_e1bc70: /* e1bc70: cmp eax, 0x80040301 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80040301u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1bc75: je 0xe1bcbf */
  if (zf) goto L_e1bcbf;
L_e1bc77: /* e1bc77: cmp eax, 0x80040302 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80040302u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1bc7c: je 0xe1bcb5 */
  if (zf) goto L_e1bcb5;
L_e1bc7e: /* e1bc7e: cmp eax, 0x80040303 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80040303u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1bc83: je 0xe1bcab */
  if (zf) goto L_e1bcab;
L_e1bc85: /* e1bc85: cmp eax, 0x80040304 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80040304u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1bc8a: je 0xe1bca1 */
  if (zf) goto L_e1bca1;
L_e1bc8c: /* e1bc8c: cmp eax, 0x80040305 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80040305u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1bc91: jne 0xe1d89d */
  if (!zf) goto L_e1d89d;
L_e1bc97: /* e1bc97: mov eax, 0xe34258 */
  eax = 0xe34258u;
/* e1bc9c: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bca1: /* e1bca1: mov eax, 0xe34244 */
  eax = 0xe34244u;
/* e1bca6: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bcab: /* e1bcab: mov eax, 0xe34230 */
  eax = 0xe34230u;
/* e1bcb0: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bcb5: /* e1bcb5: mov eax, 0xe3421c */
  eax = 0xe3421cu;
/* e1bcba: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bcbf: /* e1bcbf: mov eax, 0xe34208 */
  eax = 0xe34208u;
/* e1bcc4: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bcc9: /* e1bcc9: mov eax, 0xe341f8 */
  eax = 0xe341f8u;
/* e1bcce: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bcd3: /* e1bcd3: cmp eax, 0x800403ff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x800403ffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1bcd8: je 0xe1bd11 */
  if (zf) goto L_e1bd11;
L_e1bcda: /* e1bcda: cmp eax, 0x80040400 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80040400u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1bcdf: je 0xe1bd07 */
  if (zf) goto L_e1bd07;
L_e1bce1: /* e1bce1: cmp eax, 0x80040401 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80040401u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1bce6: je 0xe1bcfd */
  if (zf) goto L_e1bcfd;
L_e1bce8: /* e1bce8: cmp eax, 0x80040402 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80040402u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1bced: jne 0xe1d89d */
  if (!zf) goto L_e1d89d;
L_e1bcf3: /* e1bcf3: mov eax, 0xe341e8 */
  eax = 0xe341e8u;
/* e1bcf8: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bcfd: /* e1bcfd: mov eax, 0xe341d8 */
  eax = 0xe341d8u;
/* e1bd02: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bd07: /* e1bd07: mov eax, 0xe341bc */
  eax = 0xe341bcu;
/* e1bd0c: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bd11: /* e1bd11: mov eax, 0xe341a8 */
  eax = 0xe341a8u;
/* e1bd16: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bd1b: /* e1bd1b: mov eax, 0xe34198 */
  eax = 0xe34198u;
/* e1bd20: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bd25: /* e1bd25: mov ecx, 0x8007001e */
  ecx = 0x8007001eu;
/* e1bd2a: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e1bd2c: jg 0xe1bd93 */
  if ((!zf && sf == of)) goto L_e1bd93;
L_e1bd2e: /* e1bd2e: je 0xe1bd89 */
  if (zf) goto L_e1bd89;
L_e1bd30: /* e1bd30: cmp eax, 0x80070005 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80070005u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1bd35: je 0xe1bd7f */
  if (zf) goto L_e1bd7f;
L_e1bd37: /* e1bd37: cmp eax, 0x80070006 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80070006u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1bd3c: je 0xe1bd75 */
  if (zf) goto L_e1bd75;
L_e1bd3e: /* e1bd3e: cmp eax, 0x8007000c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8007000cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1bd43: je 0xe1bd6b */
  if (zf) goto L_e1bd6b;
L_e1bd45: /* e1bd45: cmp eax, 0x8007000e */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8007000eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1bd4a: je 0xe1bd61 */
  if (zf) goto L_e1bd61;
L_e1bd4c: /* e1bd4c: cmp eax, 0x80070015 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80070015u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1bd51: jne 0xe1d89d */
  if (!zf) goto L_e1d89d;
L_e1bd57: /* e1bd57: mov eax, 0xe34180 */
  eax = 0xe34180u;
/* e1bd5c: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bd61: /* e1bd61: mov eax, 0xe34170 */
  eax = 0xe34170u;
/* e1bd66: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bd6b: /* e1bd6b: mov eax, 0xe3415c */
  eax = 0xe3415cu;
/* e1bd70: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bd75: /* e1bd75: mov eax, 0xe34150 */
  eax = 0xe34150u;
/* e1bd7a: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bd7f: /* e1bd7f: mov eax, 0xe34140 */
  eax = 0xe34140u;
/* e1bd84: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bd89: /* e1bd89: mov eax, 0xe34130 */
  eax = 0xe34130u;
/* e1bd8e: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bd93: /* e1bd93: cmp eax, 0x80070057 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80070057u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1bd98: je 0xe1bdd1 */
  if (zf) goto L_e1bdd1;
L_e1bd9a: /* e1bd9a: cmp eax, 0x80070077 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80070077u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1bd9f: je 0xe1bdc7 */
  if (zf) goto L_e1bdc7;
L_e1bda1: /* e1bda1: cmp eax, 0x800700aa */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x800700aau);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1bda6: je 0xe1bdbd */
  if (zf) goto L_e1bdbd;
L_e1bda8: /* e1bda8: cmp eax, 0x80070103 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80070103u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1bdad: jne 0xe1d89d */
  if (!zf) goto L_e1d89d;
L_e1bdb3: /* e1bdb3: mov eax, 0xe3411c */
  eax = 0xe3411cu;
/* e1bdb8: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bdbd: /* e1bdbd: mov eax, 0xe3410c */
  eax = 0xe3410cu;
/* e1bdc2: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bdc7: /* e1bdc7: mov eax, 0xe340f8 */
  eax = 0xe340f8u;
/* e1bdcc: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bdd1: /* e1bdd1: mov eax, 0xe340e8 */
  eax = 0xe340e8u;
/* e1bdd6: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bddb: /* e1bddb: mov eax, 0xe340cc */
  eax = 0xe340ccu;
/* e1bde0: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bde5: /* e1bde5: mov ecx, 0x80158280 */
  ecx = 0x80158280u;
/* e1bdea: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e1bdec: jg 0xe1c2b4 */
  if ((!zf && sf == of)) goto L_e1c2b4;
L_e1bdf2: /* e1bdf2: je 0xe1c2aa */
  if (zf) goto L_e1c2aa;
L_e1bdf8: /* e1bdf8: mov ecx, 0x80150184 */
  ecx = 0x80150184u;
/* e1bdfd: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e1bdff: jg 0xe1c04d */
  if ((!zf && sf == of)) goto L_e1c04d;
L_e1be05: /* e1be05: je 0xe1c043 */
  if (zf) goto L_e1c043;
L_e1be0b: /* e1be0b: add ecx, -0x15 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffebu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e1be0e: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e1be10: jg 0xe1bf7a */
  if ((!zf && sf == of)) goto L_e1bf7a;
L_e1be16: /* e1be16: je 0xe1bf70 */
  if (zf) goto L_e1bf70;
L_e1be1c: /* e1be1c: mov ecx, 0x80150091 */
  ecx = 0x80150091u;
/* e1be21: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e1be23: jg 0xe1bedc */
  if ((!zf && sf == of)) goto L_e1bedc;
L_e1be29: /* e1be29: je 0xe1bed2 */
  if (zf) goto L_e1bed2;
L_e1be2f: /* e1be2f: add ecx, -0x73 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffff8du);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e1be32: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e1be34: jg 0xe1be8a */
  if ((!zf && sf == of)) goto L_e1be8a;
L_e1be36: /* e1be36: je 0xe1be80 */
  if (zf) goto L_e1be80;
L_e1be38: /* e1be38: cmp eax, 0x80070481 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80070481u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1be3d: je 0xe1be76 */
  if (zf) goto L_e1be76;
L_e1be3f: /* e1be3f: cmp eax, 0x80070490 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80070490u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1be44: je 0xe1be6c */
  if (zf) goto L_e1be6c;
L_e1be46: /* e1be46: cmp eax, 0x80070492 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80070492u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1be4b: je 0xe1be62 */
  if (zf) goto L_e1be62;
L_e1be4d: /* e1be4d: cmp eax, 0x800704df */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x800704dfu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1be52: jne 0xe1d89d */
  if (!zf) goto L_e1d89d;
L_e1be58: /* e1be58: mov eax, 0xe340b0 */
  eax = 0xe340b0u;
/* e1be5d: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1be62: /* e1be62: mov eax, 0xe34098 */
  eax = 0xe34098u;
/* e1be67: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1be6c: /* e1be6c: mov eax, 0xe34080 */
  eax = 0xe34080u;
/* e1be71: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1be76: /* e1be76: mov eax, 0xe34060 */
  eax = 0xe34060u;
/* e1be7b: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1be80: /* e1be80: mov eax, 0xe34048 */
  eax = 0xe34048u;
/* e1be85: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1be8a: /* e1be8a: cmp eax, 0x8015004a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8015004au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1be8f: je 0xe1bec8 */
  if (zf) goto L_e1bec8;
L_e1be91: /* e1be91: cmp eax, 0x80150078 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80150078u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1be96: je 0xe1bebe */
  if (zf) goto L_e1bebe;
L_e1be98: /* e1be98: cmp eax, 0x80150082 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80150082u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1be9d: je 0xe1beb4 */
  if (zf) goto L_e1beb4;
L_e1be9f: /* e1be9f: cmp eax, 0x80150087 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80150087u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1bea4: jne 0xe1d89d */
  if (!zf) goto L_e1d89d;
L_e1beaa: /* e1beaa: mov eax, 0xe34034 */
  eax = 0xe34034u;
/* e1beaf: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1beb4: /* e1beb4: mov eax, 0xe34020 */
  eax = 0xe34020u;
/* e1beb9: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bebe: /* e1bebe: mov eax, 0xe3400c */
  eax = 0xe3400cu;
/* e1bec3: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bec8: /* e1bec8: mov eax, 0xe33ffc */
  eax = 0xe33ffcu;
/* e1becd: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bed2: /* e1bed2: mov eax, 0xe33fe8 */
  eax = 0xe33fe8u;
/* e1bed7: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bedc: /* e1bedc: mov ecx, 0x80150169 */
  ecx = 0x80150169u;
/* e1bee1: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e1bee3: jg 0xe1bf39 */
  if ((!zf && sf == of)) goto L_e1bf39;
L_e1bee5: /* e1bee5: je 0xe1bf2f */
  if (zf) goto L_e1bf2f;
L_e1bee7: /* e1bee7: cmp eax, 0x80150096 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80150096u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1beec: je 0xe1bf25 */
  if (zf) goto L_e1bf25;
L_e1beee: /* e1beee: cmp eax, 0x8015012c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8015012cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1bef3: je 0xe1bf1b */
  if (zf) goto L_e1bf1b;
L_e1bef5: /* e1bef5: cmp eax, 0x8015012e */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8015012eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1befa: je 0xe1bf11 */
  if (zf) goto L_e1bf11;
L_e1befc: /* e1befc: cmp eax, 0x80150168 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80150168u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1bf01: jne 0xe1d89d */
  if (!zf) goto L_e1d89d;
L_e1bf07: /* e1bf07: mov eax, 0xe33fd0 */
  eax = 0xe33fd0u;
/* e1bf0c: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bf11: /* e1bf11: mov eax, 0xe33fb8 */
  eax = 0xe33fb8u;
/* e1bf16: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bf1b: /* e1bf1b: mov eax, 0xe33fa4 */
  eax = 0xe33fa4u;
/* e1bf20: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bf25: /* e1bf25: mov eax, 0xe33f90 */
  eax = 0xe33f90u;
/* e1bf2a: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bf2f: /* e1bf2f: mov eax, 0xe33f78 */
  eax = 0xe33f78u;
/* e1bf34: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bf39: /* e1bf39: cmp eax, 0x8015016a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8015016au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1bf3e: je 0xe1bf66 */
  if (zf) goto L_e1bf66;
L_e1bf40: /* e1bf40: cmp eax, 0x8015016b */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8015016bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1bf45: je 0xe1bf5c */
  if (zf) goto L_e1bf5c;
L_e1bf47: /* e1bf47: cmp eax, 0x8015016e */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8015016eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1bf4c: jne 0xe1d89d */
  if (!zf) goto L_e1d89d;
L_e1bf52: /* e1bf52: mov eax, 0xe33f60 */
  eax = 0xe33f60u;
/* e1bf57: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bf5c: /* e1bf5c: mov eax, 0xe33f4c */
  eax = 0xe33f4cu;
/* e1bf61: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bf66: /* e1bf66: mov eax, 0xe33f3c */
  eax = 0xe33f3cu;
/* e1bf6b: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bf70: /* e1bf70: mov eax, 0xe33f28 */
  eax = 0xe33f28u;
/* e1bf75: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bf7a: /* e1bf7a: add eax, 0x7feafe90 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7feafe90u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e1bf7f: cmp eax, 0x13 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x13u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e1bf82: ja 0xe1d89d */
  if ((!cf && !zf)) goto L_e1d89d;
L_e1bf88: /* e1bf88: jmp dword ptr [eax*4 + 0xe1dabf] */
  switch (R32((uint32_t)(eax*4 + 0xe1dabfu))) {
    case 0xe1bf8fu: goto L_e1bf8f;
    case 0xe1bf99u: goto L_e1bf99;
    case 0xe1bfa3u: goto L_e1bfa3;
    case 0xe1bfadu: goto L_e1bfad;
    case 0xe1bfb7u: goto L_e1bfb7;
    case 0xe1bfc1u: goto L_e1bfc1;
    case 0xe1bfcbu: goto L_e1bfcb;
    case 0xe1bfd5u: goto L_e1bfd5;
    case 0xe1bfdfu: goto L_e1bfdf;
    case 0xe1bfe9u: goto L_e1bfe9;
    case 0xe1bff3u: goto L_e1bff3;
    case 0xe1bffdu: goto L_e1bffd;
    case 0xe1c007u: goto L_e1c007;
    case 0xe1c011u: goto L_e1c011;
    case 0xe1c01bu: goto L_e1c01b;
    case 0xe1c025u: goto L_e1c025;
    case 0xe1c02fu: goto L_e1c02f;
    case 0xe1c039u: goto L_e1c039;
    case 0xe1c071u: goto L_e1c071;
    case 0xe1c07bu: goto L_e1c07b;
    case 0xe1c085u: goto L_e1c085;
    case 0xe1c08fu: goto L_e1c08f;
    case 0xe1c099u: goto L_e1c099;
    case 0xe1c0a3u: goto L_e1c0a3;
    case 0xe1c0adu: goto L_e1c0ad;
    case 0xe1c0b7u: goto L_e1c0b7;
    case 0xe1c0c1u: goto L_e1c0c1;
    case 0xe1c0cbu: goto L_e1c0cb;
    case 0xe1ca18u: goto L_e1ca18;
    case 0xe1ca22u: goto L_e1ca22;
    case 0xe1ca2cu: goto L_e1ca2c;
    case 0xe1ca36u: goto L_e1ca36;
    case 0xe1ca40u: goto L_e1ca40;
    case 0xe1ca4au: goto L_e1ca4a;
    case 0xe1ca54u: goto L_e1ca54;
    case 0xe1ca5eu: goto L_e1ca5e;
    case 0xe1ca68u: goto L_e1ca68;
    case 0xe1ca72u: goto L_e1ca72;
    case 0xe1ca7cu: goto L_e1ca7c;
    case 0xe1ca86u: goto L_e1ca86;
    case 0xe1ca90u: goto L_e1ca90;
    case 0xe1ca9au: goto L_e1ca9a;
    case 0xe1caa4u: goto L_e1caa4;
    case 0xe1caaeu: goto L_e1caae;
    case 0xe1cab8u: goto L_e1cab8;
    case 0xe1cac2u: goto L_e1cac2;
    case 0xe1d89du: goto L_e1d89d;
    default: guest_badjump(0xe1bf88, R32((uint32_t)(eax*4 + 0xe1dabfu))); return;
  }
L_e1bf8f: /* e1bf8f: mov eax, 0xe33f14 */
  eax = 0xe33f14u;
/* e1bf94: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bf99: /* e1bf99: mov eax, 0xe33efc */
  eax = 0xe33efcu;
/* e1bf9e: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bfa3: /* e1bfa3: mov eax, 0xe33edc */
  eax = 0xe33edcu;
/* e1bfa8: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bfad: /* e1bfad: mov eax, 0xe33ec4 */
  eax = 0xe33ec4u;
/* e1bfb2: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bfb7: /* e1bfb7: mov eax, 0xe33eac */
  eax = 0xe33eacu;
/* e1bfbc: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bfc1: /* e1bfc1: mov eax, 0xe33e9c */
  eax = 0xe33e9cu;
/* e1bfc6: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bfcb: /* e1bfcb: mov eax, 0xe33e84 */
  eax = 0xe33e84u;
/* e1bfd0: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bfd5: /* e1bfd5: mov eax, 0xe33e74 */
  eax = 0xe33e74u;
/* e1bfda: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bfdf: /* e1bfdf: mov eax, 0xe33e5c */
  eax = 0xe33e5cu;
/* e1bfe4: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bfe9: /* e1bfe9: mov eax, 0xe33e48 */
  eax = 0xe33e48u;
/* e1bfee: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bff3: /* e1bff3: mov eax, 0xe33e38 */
  eax = 0xe33e38u;
/* e1bff8: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1bffd: /* e1bffd: mov eax, 0xe33e24 */
  eax = 0xe33e24u;
/* e1c002: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c007: /* e1c007: mov eax, 0xe33e10 */
  eax = 0xe33e10u;
/* e1c00c: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c011: /* e1c011: mov eax, 0xe33df8 */
  eax = 0xe33df8u;
/* e1c016: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c01b: /* e1c01b: mov eax, 0xe33ddc */
  eax = 0xe33ddcu;
/* e1c020: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c025: /* e1c025: mov eax, 0xe33dcc */
  eax = 0xe33dccu;
/* e1c02a: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c02f: /* e1c02f: mov eax, 0xe33db8 */
  eax = 0xe33db8u;
/* e1c034: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c039: /* e1c039: mov eax, 0xe33da8 */
  eax = 0xe33da8u;
/* e1c03e: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c043: /* e1c043: mov eax, 0xe33d8c */
  eax = 0xe33d8cu;
/* e1c048: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c04d: /* e1c04d: mov ecx, 0x80158030 */
  ecx = 0x80158030u;
/* e1c052: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e1c054: jg 0xe1c0df */
  if ((!zf && sf == of)) goto L_e1c0df;
L_e1c05a: /* e1c05a: je 0xe1c0d5 */
  if (zf) goto L_e1c0d5;
L_e1c05c: /* e1c05c: add eax, 0x7feafe79 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7feafe79u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e1c061: cmp eax, 9 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x9u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e1c064: ja 0xe1d89d */
  if ((!cf && !zf)) goto L_e1d89d;
L_e1c06a: /* e1c06a: jmp dword ptr [eax*4 + 0xe1db0f] */
  switch (R32((uint32_t)(eax*4 + 0xe1db0fu))) {
    case 0xe1c071u: goto L_e1c071;
    case 0xe1c07bu: goto L_e1c07b;
    case 0xe1c085u: goto L_e1c085;
    case 0xe1c08fu: goto L_e1c08f;
    case 0xe1c099u: goto L_e1c099;
    case 0xe1c0a3u: goto L_e1c0a3;
    case 0xe1c0adu: goto L_e1c0ad;
    case 0xe1c0b7u: goto L_e1c0b7;
    case 0xe1c0c1u: goto L_e1c0c1;
    case 0xe1c0cbu: goto L_e1c0cb;
    case 0xe1ca18u: goto L_e1ca18;
    case 0xe1ca22u: goto L_e1ca22;
    case 0xe1ca2cu: goto L_e1ca2c;
    case 0xe1ca36u: goto L_e1ca36;
    case 0xe1ca40u: goto L_e1ca40;
    case 0xe1ca4au: goto L_e1ca4a;
    case 0xe1ca54u: goto L_e1ca54;
    case 0xe1ca5eu: goto L_e1ca5e;
    case 0xe1ca68u: goto L_e1ca68;
    case 0xe1ca72u: goto L_e1ca72;
    case 0xe1ca7cu: goto L_e1ca7c;
    case 0xe1ca86u: goto L_e1ca86;
    case 0xe1ca90u: goto L_e1ca90;
    case 0xe1ca9au: goto L_e1ca9a;
    case 0xe1caa4u: goto L_e1caa4;
    case 0xe1caaeu: goto L_e1caae;
    case 0xe1cab8u: goto L_e1cab8;
    case 0xe1cac2u: goto L_e1cac2;
    case 0xe1d89du: goto L_e1d89d;
    default: guest_badjump(0xe1c06a, R32((uint32_t)(eax*4 + 0xe1db0fu))); return;
  }
L_e1c071: /* e1c071: mov eax, 0xe33d78 */
  eax = 0xe33d78u;
/* e1c076: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c07b: /* e1c07b: mov eax, 0xe33d64 */
  eax = 0xe33d64u;
/* e1c080: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c085: /* e1c085: mov eax, 0xe33d50 */
  eax = 0xe33d50u;
/* e1c08a: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c08f: /* e1c08f: mov eax, 0xe33d38 */
  eax = 0xe33d38u;
/* e1c094: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c099: /* e1c099: mov eax, 0xe33d1c */
  eax = 0xe33d1cu;
/* e1c09e: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c0a3: /* e1c0a3: mov eax, 0xe33d04 */
  eax = 0xe33d04u;
/* e1c0a8: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c0ad: /* e1c0ad: mov eax, 0xe33cf4 */
  eax = 0xe33cf4u;
/* e1c0b2: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c0b7: /* e1c0b7: mov eax, 0xe33cdc */
  eax = 0xe33cdcu;
/* e1c0bc: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c0c1: /* e1c0c1: mov eax, 0xe33cc8 */
  eax = 0xe33cc8u;
/* e1c0c6: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c0cb: /* e1c0cb: mov eax, 0xe33cb4 */
  eax = 0xe33cb4u;
/* e1c0d0: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c0d5: /* e1c0d5: mov eax, 0xe33ca4 */
  eax = 0xe33ca4u;
/* e1c0da: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c0df: /* e1c0df: mov ecx, 0x80158160 */
  ecx = 0x80158160u;
/* e1c0e4: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e1c0e6: jg 0xe1c1d2 */
  if ((!zf && sf == of)) goto L_e1c1d2;
L_e1c0ec: /* e1c0ec: je 0xe1c1c8 */
  if (zf) goto L_e1c1c8;
L_e1c0f2: /* e1c0f2: add ecx, -0x60 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffa0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e1c0f5: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e1c0f7: jg 0xe1c16f */
  if ((!zf && sf == of)) goto L_e1c16f;
L_e1c0f9: /* e1c0f9: je 0xe1c165 */
  if (zf) goto L_e1c165;
L_e1c0fb: /* e1c0fb: cmp eax, 0x80158040 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80158040u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c100: je 0xe1c15b */
  if (zf) goto L_e1c15b;
L_e1c102: /* e1c102: cmp eax, 0x80158050 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80158050u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c107: je 0xe1c151 */
  if (zf) goto L_e1c151;
L_e1c109: /* e1c109: cmp eax, 0x80158060 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80158060u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c10e: je 0xe1c147 */
  if (zf) goto L_e1c147;
L_e1c110: /* e1c110: cmp eax, 0x80158070 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80158070u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c115: je 0xe1c13d */
  if (zf) goto L_e1c13d;
L_e1c117: /* e1c117: cmp eax, 0x80158080 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80158080u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c11c: je 0xe1c133 */
  if (zf) goto L_e1c133;
L_e1c11e: /* e1c11e: cmp eax, 0x80158090 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80158090u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c123: jne 0xe1d89d */
  if (!zf) goto L_e1d89d;
L_e1c129: /* e1c129: mov eax, 0xe33c88 */
  eax = 0xe33c88u;
/* e1c12e: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c133: /* e1c133: mov eax, 0xe33c6c */
  eax = 0xe33c6cu;
/* e1c138: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c13d: /* e1c13d: mov eax, 0xe33c50 */
  eax = 0xe33c50u;
/* e1c142: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c147: /* e1c147: mov eax, 0xe33c38 */
  eax = 0xe33c38u;
/* e1c14c: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c151: /* e1c151: mov eax, 0xe33c20 */
  eax = 0xe33c20u;
/* e1c156: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c15b: /* e1c15b: mov eax, 0xe33c0c */
  eax = 0xe33c0cu;
/* e1c160: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c165: /* e1c165: mov eax, 0xe33bf4 */
  eax = 0xe33bf4u;
/* e1c16a: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c16f: /* e1c16f: cmp eax, 0x80158110 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80158110u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c174: je 0xe1c1be */
  if (zf) goto L_e1c1be;
L_e1c176: /* e1c176: cmp eax, 0x80158120 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80158120u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c17b: je 0xe1c1b4 */
  if (zf) goto L_e1c1b4;
L_e1c17d: /* e1c17d: cmp eax, 0x80158130 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80158130u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c182: je 0xe1c1aa */
  if (zf) goto L_e1c1aa;
L_e1c184: /* e1c184: cmp eax, 0x80158140 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80158140u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c189: je 0xe1c1a0 */
  if (zf) goto L_e1c1a0;
L_e1c18b: /* e1c18b: cmp eax, 0x80158150 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80158150u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c190: jne 0xe1d89d */
  if (!zf) goto L_e1d89d;
L_e1c196: /* e1c196: mov eax, 0xe33be0 */
  eax = 0xe33be0u;
/* e1c19b: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c1a0: /* e1c1a0: mov eax, 0xe33bc0 */
  eax = 0xe33bc0u;
/* e1c1a5: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c1aa: /* e1c1aa: mov eax, 0xe33ba8 */
  eax = 0xe33ba8u;
/* e1c1af: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c1b4: /* e1c1b4: mov eax, 0xe33b90 */
  eax = 0xe33b90u;
/* e1c1b9: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c1be: /* e1c1be: mov eax, 0xe33b7c */
  eax = 0xe33b7cu;
/* e1c1c3: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c1c8: /* e1c1c8: mov eax, 0xe33b64 */
  eax = 0xe33b64u;
/* e1c1cd: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c1d2: /* e1c1d2: mov ecx, 0x80158220 */
  ecx = 0x80158220u;
/* e1c1d7: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e1c1d9: jg 0xe1c251 */
  if ((!zf && sf == of)) goto L_e1c251;
L_e1c1db: /* e1c1db: je 0xe1c247 */
  if (zf) goto L_e1c247;
L_e1c1dd: /* e1c1dd: cmp eax, 0x80158170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80158170u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c1e2: je 0xe1c23d */
  if (zf) goto L_e1c23d;
L_e1c1e4: /* e1c1e4: cmp eax, 0x80158175 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80158175u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c1e9: je 0xe1c233 */
  if (zf) goto L_e1c233;
L_e1c1eb: /* e1c1eb: cmp eax, 0x80158180 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80158180u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c1f0: je 0xe1c229 */
  if (zf) goto L_e1c229;
L_e1c1f2: /* e1c1f2: cmp eax, 0x80158190 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80158190u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c1f7: je 0xe1c21f */
  if (zf) goto L_e1c21f;
L_e1c1f9: /* e1c1f9: cmp eax, 0x80158200 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80158200u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c1fe: je 0xe1c215 */
  if (zf) goto L_e1c215;
L_e1c200: /* e1c200: cmp eax, 0x80158210 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80158210u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c205: jne 0xe1d89d */
  if (!zf) goto L_e1d89d;
L_e1c20b: /* e1c20b: mov eax, 0xe33b48 */
  eax = 0xe33b48u;
/* e1c210: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c215: /* e1c215: mov eax, 0xe33b2c */
  eax = 0xe33b2cu;
/* e1c21a: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c21f: /* e1c21f: mov eax, 0xe33b14 */
  eax = 0xe33b14u;
/* e1c224: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c229: /* e1c229: mov eax, 0xe33b00 */
  eax = 0xe33b00u;
/* e1c22e: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c233: /* e1c233: mov eax, 0xe33aec */
  eax = 0xe33aecu;
/* e1c238: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c23d: /* e1c23d: mov eax, 0xe33ad8 */
  eax = 0xe33ad8u;
/* e1c242: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c247: /* e1c247: mov eax, 0xe33abc */
  eax = 0xe33abcu;
/* e1c24c: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c251: /* e1c251: cmp eax, 0x80158230 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80158230u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c256: je 0xe1c2a0 */
  if (zf) goto L_e1c2a0;
L_e1c258: /* e1c258: cmp eax, 0x80158240 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80158240u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c25d: je 0xe1c296 */
  if (zf) goto L_e1c296;
L_e1c25f: /* e1c25f: cmp eax, 0x80158250 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80158250u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c264: je 0xe1c28c */
  if (zf) goto L_e1c28c;
L_e1c266: /* e1c266: cmp eax, 0x80158260 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80158260u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c26b: je 0xe1c282 */
  if (zf) goto L_e1c282;
L_e1c26d: /* e1c26d: cmp eax, 0x80158270 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80158270u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c272: jne 0xe1d89d */
  if (!zf) goto L_e1d89d;
L_e1c278: /* e1c278: mov eax, 0xe33a9c */
  eax = 0xe33a9cu;
/* e1c27d: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c282: /* e1c282: mov eax, 0xe33a7c */
  eax = 0xe33a7cu;
/* e1c287: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c28c: /* e1c28c: mov eax, 0xe33a6c */
  eax = 0xe33a6cu;
/* e1c291: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c296: /* e1c296: mov eax, 0xe33a54 */
  eax = 0xe33a54u;
/* e1c29b: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c2a0: /* e1c2a0: mov eax, 0xe33a40 */
  eax = 0xe33a40u;
/* e1c2a5: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c2aa: /* e1c2aa: mov eax, 0xe33a24 */
  eax = 0xe33a24u;
/* e1c2af: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c2b4: /* e1c2b4: mov ecx, 0x88760014 */
  ecx = 0x88760014u;
/* e1c2b9: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e1c2bb: jg 0xe1c596 */
  if ((!zf && sf == of)) goto L_e1c596;
L_e1c2c1: /* e1c2c1: je 0xe1c58c */
  if (zf) goto L_e1c58c;
L_e1c2c7: /* e1c2c7: mov ecx, 0x80158470 */
  ecx = 0x80158470u;
/* e1c2cc: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e1c2ce: jg 0xe1c438 */
  if ((!zf && sf == of)) goto L_e1c438;
L_e1c2d4: /* e1c2d4: je 0xe1c42e */
  if (zf) goto L_e1c42e;
L_e1c2da: /* e1c2da: mov ecx, 0x80158380 */
  ecx = 0x80158380u;
/* e1c2df: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e1c2e1: jg 0xe1c39a */
  if ((!zf && sf == of)) goto L_e1c39a;
L_e1c2e7: /* e1c2e7: je 0xe1c390 */
  if (zf) goto L_e1c390;
L_e1c2ed: /* e1c2ed: add ecx, -0x50 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffb0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e1c2f0: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e1c2f2: jg 0xe1c348 */
  if ((!zf && sf == of)) goto L_e1c348;
L_e1c2f4: /* e1c2f4: je 0xe1c33e */
  if (zf) goto L_e1c33e;
L_e1c2f6: /* e1c2f6: cmp eax, 0x80158290 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80158290u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c2fb: je 0xe1c334 */
  if (zf) goto L_e1c334;
L_e1c2fd: /* e1c2fd: cmp eax, 0x80158300 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80158300u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c302: je 0xe1c32a */
  if (zf) goto L_e1c32a;
L_e1c304: /* e1c304: cmp eax, 0x80158310 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80158310u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c309: je 0xe1c320 */
  if (zf) goto L_e1c320;
L_e1c30b: /* e1c30b: cmp eax, 0x80158320 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80158320u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c310: jne 0xe1d89d */
  if (!zf) goto L_e1d89d;
L_e1c316: /* e1c316: mov eax, 0xe33a08 */
  eax = 0xe33a08u;
/* e1c31b: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c320: /* e1c320: mov eax, 0xe339f0 */
  eax = 0xe339f0u;
/* e1c325: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c32a: /* e1c32a: mov eax, 0xe339d4 */
  eax = 0xe339d4u;
/* e1c32f: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c334: /* e1c334: mov eax, 0xe339b8 */
  eax = 0xe339b8u;
/* e1c339: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c33e: /* e1c33e: mov eax, 0xe339a0 */
  eax = 0xe339a0u;
/* e1c343: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c348: /* e1c348: cmp eax, 0x80158340 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80158340u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c34d: je 0xe1c386 */
  if (zf) goto L_e1c386;
L_e1c34f: /* e1c34f: cmp eax, 0x80158350 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80158350u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c354: je 0xe1c37c */
  if (zf) goto L_e1c37c;
L_e1c356: /* e1c356: cmp eax, 0x80158360 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80158360u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c35b: je 0xe1c372 */
  if (zf) goto L_e1c372;
L_e1c35d: /* e1c35d: cmp eax, 0x80158370 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80158370u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c362: jne 0xe1d89d */
  if (!zf) goto L_e1d89d;
L_e1c368: /* e1c368: mov eax, 0xe33984 */
  eax = 0xe33984u;
/* e1c36d: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c372: /* e1c372: mov eax, 0xe3396c */
  eax = 0xe3396cu;
/* e1c377: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c37c: /* e1c37c: mov eax, 0xe33958 */
  eax = 0xe33958u;
/* e1c381: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c386: /* e1c386: mov eax, 0xe33944 */
  eax = 0xe33944u;
/* e1c38b: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c390: /* e1c390: mov eax, 0xe3392c */
  eax = 0xe3392cu;
/* e1c395: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c39a: /* e1c39a: mov ecx, 0x80158430 */
  ecx = 0x80158430u;
/* e1c39f: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e1c3a1: jg 0xe1c3f7 */
  if ((!zf && sf == of)) goto L_e1c3f7;
L_e1c3a3: /* e1c3a3: je 0xe1c3ed */
  if (zf) goto L_e1c3ed;
L_e1c3a5: /* e1c3a5: cmp eax, 0x80158390 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80158390u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c3aa: je 0xe1c3e3 */
  if (zf) goto L_e1c3e3;
L_e1c3ac: /* e1c3ac: cmp eax, 0x80158400 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80158400u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c3b1: je 0xe1c3d9 */
  if (zf) goto L_e1c3d9;
L_e1c3b3: /* e1c3b3: cmp eax, 0x80158410 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80158410u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c3b8: je 0xe1c3cf */
  if (zf) goto L_e1c3cf;
L_e1c3ba: /* e1c3ba: cmp eax, 0x80158420 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80158420u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c3bf: jne 0xe1d89d */
  if (!zf) goto L_e1d89d;
L_e1c3c5: /* e1c3c5: mov eax, 0xe33914 */
  eax = 0xe33914u;
/* e1c3ca: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c3cf: /* e1c3cf: mov eax, 0xe338fc */
  eax = 0xe338fcu;
/* e1c3d4: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c3d9: /* e1c3d9: mov eax, 0xe338e4 */
  eax = 0xe338e4u;
/* e1c3de: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c3e3: /* e1c3e3: mov eax, 0xe338cc */
  eax = 0xe338ccu;
/* e1c3e8: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c3ed: /* e1c3ed: mov eax, 0xe338b4 */
  eax = 0xe338b4u;
/* e1c3f2: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c3f7: /* e1c3f7: cmp eax, 0x80158440 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80158440u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c3fc: je 0xe1c424 */
  if (zf) goto L_e1c424;
L_e1c3fe: /* e1c3fe: cmp eax, 0x80158450 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80158450u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c403: je 0xe1c41a */
  if (zf) goto L_e1c41a;
L_e1c405: /* e1c405: cmp eax, 0x80158460 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80158460u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c40a: jne 0xe1d89d */
  if (!zf) goto L_e1d89d;
L_e1c410: /* e1c410: mov eax, 0xe3389c */
  eax = 0xe3389cu;
/* e1c415: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c41a: /* e1c41a: mov eax, 0xe33888 */
  eax = 0xe33888u;
/* e1c41f: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c424: /* e1c424: mov eax, 0xe33870 */
  eax = 0xe33870u;
/* e1c429: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c42e: /* e1c42e: mov eax, 0xe33860 */
  eax = 0xe33860u;
/* e1c433: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c438: /* e1c438: mov ecx, 0x80158590 */
  ecx = 0x80158590u;
/* e1c43d: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e1c43f: jg 0xe1c4f8 */
  if ((!zf && sf == of)) goto L_e1c4f8;
L_e1c445: /* e1c445: je 0xe1c4ee */
  if (zf) goto L_e1c4ee;
L_e1c44b: /* e1c44b: add ecx, -0x70 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffff90u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e1c44e: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e1c450: jg 0xe1c4a6 */
  if ((!zf && sf == of)) goto L_e1c4a6;
L_e1c452: /* e1c452: je 0xe1c49c */
  if (zf) goto L_e1c49c;
L_e1c454: /* e1c454: cmp eax, 0x80158480 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80158480u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c459: je 0xe1c492 */
  if (zf) goto L_e1c492;
L_e1c45b: /* e1c45b: cmp eax, 0x80158490 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80158490u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c460: je 0xe1c488 */
  if (zf) goto L_e1c488;
L_e1c462: /* e1c462: cmp eax, 0x80158500 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80158500u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c467: je 0xe1c47e */
  if (zf) goto L_e1c47e;
L_e1c469: /* e1c469: cmp eax, 0x80158510 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80158510u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c46e: jne 0xe1d89d */
  if (!zf) goto L_e1d89d;
L_e1c474: /* e1c474: mov eax, 0xe3384c */
  eax = 0xe3384cu;
/* e1c479: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c47e: /* e1c47e: mov eax, 0xe3382c */
  eax = 0xe3382cu;
/* e1c483: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c488: /* e1c488: mov eax, 0xe33818 */
  eax = 0xe33818u;
/* e1c48d: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c492: /* e1c492: mov eax, 0xe33804 */
  eax = 0xe33804u;
/* e1c497: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c49c: /* e1c49c: mov eax, 0xe337f0 */
  eax = 0xe337f0u;
/* e1c4a1: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c4a6: /* e1c4a6: cmp eax, 0x80158530 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80158530u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c4ab: je 0xe1c4e4 */
  if (zf) goto L_e1c4e4;
L_e1c4ad: /* e1c4ad: cmp eax, 0x80158540 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80158540u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c4b2: je 0xe1c4da */
  if (zf) goto L_e1c4da;
L_e1c4b4: /* e1c4b4: cmp eax, 0x80158550 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80158550u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c4b9: je 0xe1c4d0 */
  if (zf) goto L_e1c4d0;
L_e1c4bb: /* e1c4bb: cmp eax, 0x80158570 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80158570u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c4c0: jne 0xe1d89d */
  if (!zf) goto L_e1d89d;
L_e1c4c6: /* e1c4c6: mov eax, 0xe337dc */
  eax = 0xe337dcu;
/* e1c4cb: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c4d0: /* e1c4d0: mov eax, 0xe337c4 */
  eax = 0xe337c4u;
/* e1c4d5: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c4da: /* e1c4da: mov eax, 0xe337b4 */
  eax = 0xe337b4u;
/* e1c4df: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c4e4: /* e1c4e4: mov eax, 0xe337a4 */
  eax = 0xe337a4u;
/* e1c4e9: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c4ee: /* e1c4ee: mov eax, 0xe33788 */
  eax = 0xe33788u;
/* e1c4f3: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c4f8: /* e1c4f8: mov ecx, 0x80158640 */
  ecx = 0x80158640u;
/* e1c4fd: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e1c4ff: jg 0xe1c555 */
  if ((!zf && sf == of)) goto L_e1c555;
L_e1c501: /* e1c501: je 0xe1c54b */
  if (zf) goto L_e1c54b;
L_e1c503: /* e1c503: cmp eax, 0x80158600 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80158600u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c508: je 0xe1c541 */
  if (zf) goto L_e1c541;
L_e1c50a: /* e1c50a: cmp eax, 0x80158610 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80158610u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c50f: je 0xe1c537 */
  if (zf) goto L_e1c537;
L_e1c511: /* e1c511: cmp eax, 0x80158620 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80158620u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c516: je 0xe1c52d */
  if (zf) goto L_e1c52d;
L_e1c518: /* e1c518: cmp eax, 0x80158630 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80158630u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c51d: jne 0xe1d89d */
  if (!zf) goto L_e1d89d;
L_e1c523: /* e1c523: mov eax, 0xe33778 */
  eax = 0xe33778u;
/* e1c528: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c52d: /* e1c52d: mov eax, 0xe33764 */
  eax = 0xe33764u;
/* e1c532: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c537: /* e1c537: mov eax, 0xe33750 */
  eax = 0xe33750u;
/* e1c53c: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c541: /* e1c541: mov eax, 0xe3373c */
  eax = 0xe3373cu;
/* e1c546: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c54b: /* e1c54b: mov eax, 0xe33724 */
  eax = 0xe33724u;
/* e1c550: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c555: /* e1c555: cmp eax, 0x80158650 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80158650u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c55a: je 0xe1c582 */
  if (zf) goto L_e1c582;
L_e1c55c: /* e1c55c: cmp eax, 0x88760005 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x88760005u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c561: je 0xe1c578 */
  if (zf) goto L_e1c578;
L_e1c563: /* e1c563: cmp eax, 0x8876000a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8876000au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c568: jne 0xe1d89d */
  if (!zf) goto L_e1d89d;
L_e1c56e: /* e1c56e: mov eax, 0xe33708 */
  eax = 0xe33708u;
/* e1c573: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c578: /* e1c578: mov eax, 0xe336ec */
  eax = 0xe336ecu;
/* e1c57d: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c582: /* e1c582: mov eax, 0xe336d8 */
  eax = 0xe336d8u;
/* e1c587: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c58c: /* e1c58c: mov eax, 0xe336bc */
  eax = 0xe336bcu;
/* e1c591: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c596: /* e1c596: mov ecx, 0x887600d7 */
  ecx = 0x887600d7u;
/* e1c59b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e1c59d: jg 0xe1c707 */
  if ((!zf && sf == of)) goto L_e1c707;
L_e1c5a3: /* e1c5a3: je 0xe1c6fd */
  if (zf) goto L_e1c6fd;
L_e1c5a9: /* e1c5a9: add ecx, -0x41 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffbfu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e1c5ac: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e1c5ae: jg 0xe1c669 */
  if ((!zf && sf == of)) goto L_e1c669;
L_e1c5b4: /* e1c5b4: je 0xe1c65f */
  if (zf) goto L_e1c65f;
L_e1c5ba: /* e1c5ba: mov ecx, 0x88760064 */
  ecx = 0x88760064u;
/* e1c5bf: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e1c5c1: jg 0xe1c617 */
  if ((!zf && sf == of)) goto L_e1c617;
L_e1c5c3: /* e1c5c3: je 0xe1c60d */
  if (zf) goto L_e1c60d;
L_e1c5c5: /* e1c5c5: cmp eax, 0x88760028 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x88760028u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c5ca: je 0xe1c603 */
  if (zf) goto L_e1c603;
L_e1c5cc: /* e1c5cc: cmp eax, 0x88760037 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x88760037u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c5d1: je 0xe1c5f9 */
  if (zf) goto L_e1c5f9;
L_e1c5d3: /* e1c5d3: cmp eax, 0x8876005a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8876005au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c5d8: je 0xe1c5ef */
  if (zf) goto L_e1c5ef;
L_e1c5da: /* e1c5da: cmp eax, 0x8876005f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8876005fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c5df: jne 0xe1d89d */
  if (!zf) goto L_e1d89d;
L_e1c5e5: /* e1c5e5: mov eax, 0xe336a0 */
  eax = 0xe336a0u;
/* e1c5ea: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c5ef: /* e1c5ef: mov eax, 0xe3368c */
  eax = 0xe3368cu;
/* e1c5f4: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c5f9: /* e1c5f9: mov eax, 0xe3367c */
  eax = 0xe3367cu;
/* e1c5fe: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c603: /* e1c603: mov eax, 0xe33664 */
  eax = 0xe33664u;
/* e1c608: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c60d: /* e1c60d: mov eax, 0xe33650 */
  eax = 0xe33650u;
/* e1c612: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c617: /* e1c617: cmp eax, 0x8876006e */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8876006eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c61c: je 0xe1c655 */
  if (zf) goto L_e1c655;
L_e1c61e: /* e1c61e: cmp eax, 0x88760078 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x88760078u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c623: je 0xe1c64b */
  if (zf) goto L_e1c64b;
L_e1c625: /* e1c625: cmp eax, 0x88760082 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x88760082u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c62a: je 0xe1c641 */
  if (zf) goto L_e1c641;
L_e1c62c: /* e1c62c: cmp eax, 0x88760091 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x88760091u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c631: jne 0xe1d89d */
  if (!zf) goto L_e1d89d;
L_e1c637: /* e1c637: mov eax, 0xe33634 */
  eax = 0xe33634u;
/* e1c63c: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c641: /* e1c641: mov eax, 0xe33620 */
  eax = 0xe33620u;
/* e1c646: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c64b: /* e1c64b: mov eax, 0xe3360c */
  eax = 0xe3360cu;
/* e1c650: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c655: /* e1c655: mov eax, 0xe335f4 */
  eax = 0xe335f4u;
/* e1c65a: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c65f: /* e1c65f: mov eax, 0xe335e0 */
  eax = 0xe335e0u;
/* e1c664: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c669: /* e1c669: mov ecx, 0x887600b6 */
  ecx = 0x887600b6u;
/* e1c66e: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e1c670: jg 0xe1c6c6 */
  if ((!zf && sf == of)) goto L_e1c6c6;
L_e1c672: /* e1c672: je 0xe1c6bc */
  if (zf) goto L_e1c6bc;
L_e1c674: /* e1c674: cmp eax, 0x887600a0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x887600a0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c679: je 0xe1c6b2 */
  if (zf) goto L_e1c6b2;
L_e1c67b: /* e1c67b: cmp eax, 0x887600aa */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x887600aau);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c680: je 0xe1c6a8 */
  if (zf) goto L_e1c6a8;
L_e1c682: /* e1c682: cmp eax, 0x887600b4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x887600b4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c687: je 0xe1c69e */
  if (zf) goto L_e1c69e;
L_e1c689: /* e1c689: cmp eax, 0x887600b5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x887600b5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c68e: jne 0xe1d89d */
  if (!zf) goto L_e1d89d;
L_e1c694: /* e1c694: mov eax, 0xe335c8 */
  eax = 0xe335c8u;
/* e1c699: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c69e: /* e1c69e: mov eax, 0xe335b8 */
  eax = 0xe335b8u;
/* e1c6a3: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c6a8: /* e1c6a8: mov eax, 0xe335ac */
  eax = 0xe335acu;
/* e1c6ad: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c6b2: /* e1c6b2: mov eax, 0xe33594 */
  eax = 0xe33594u;
/* e1c6b7: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c6bc: /* e1c6bc: mov eax, 0xe33580 */
  eax = 0xe33580u;
/* e1c6c1: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c6c6: /* e1c6c6: cmp eax, 0x887600cd */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x887600cdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c6cb: je 0xe1c6f3 */
  if (zf) goto L_e1c6f3;
L_e1c6cd: /* e1c6cd: cmp eax, 0x887600d2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x887600d2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c6d2: je 0xe1c6e9 */
  if (zf) goto L_e1c6e9;
L_e1c6d4: /* e1c6d4: cmp eax, 0x887600d4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x887600d4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c6d9: jne 0xe1d89d */
  if (!zf) goto L_e1d89d;
L_e1c6df: /* e1c6df: mov eax, 0xe33564 */
  eax = 0xe33564u;
/* e1c6e4: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c6e9: /* e1c6e9: mov eax, 0xe33550 */
  eax = 0xe33550u;
/* e1c6ee: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c6f3: /* e1c6f3: mov eax, 0xe3353c */
  eax = 0xe3353cu;
/* e1c6f8: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c6fd: /* e1c6fd: mov eax, 0xe33528 */
  eax = 0xe33528u;
/* e1c702: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c707: /* e1c707: mov ecx, 0x8876010e */
  ecx = 0x8876010eu;
/* e1c70c: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e1c70e: jg 0xe1c7b6 */
  if ((!zf && sf == of)) goto L_e1c7b6;
L_e1c714: /* e1c714: je 0xe1c7ac */
  if (zf) goto L_e1c7ac;
L_e1c71a: /* e1c71a: add ecx, -0x1e */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffe2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e1c71d: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e1c71f: jg 0xe1c775 */
  if ((!zf && sf == of)) goto L_e1c775;
L_e1c721: /* e1c721: je 0xe1c76b */
  if (zf) goto L_e1c76b;
L_e1c723: /* e1c723: cmp eax, 0x887600dc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x887600dcu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c728: je 0xe1c761 */
  if (zf) goto L_e1c761;
L_e1c72a: /* e1c72a: cmp eax, 0x887600de */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x887600deu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c72f: je 0xe1c757 */
  if (zf) goto L_e1c757;
L_e1c731: /* e1c731: cmp eax, 0x887600e1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x887600e1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c736: je 0xe1c74d */
  if (zf) goto L_e1c74d;
L_e1c738: /* e1c738: cmp eax, 0x887600e6 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x887600e6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c73d: jne 0xe1d89d */
  if (!zf) goto L_e1d89d;
L_e1c743: /* e1c743: mov eax, 0xe33518 */
  eax = 0xe33518u;
/* e1c748: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c74d: /* e1c74d: mov eax, 0xe33500 */
  eax = 0xe33500u;
/* e1c752: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c757: /* e1c757: mov eax, 0xe334e4 */
  eax = 0xe334e4u;
/* e1c75c: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c761: /* e1c761: mov eax, 0xe334d0 */
  eax = 0xe334d0u;
/* e1c766: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c76b: /* e1c76b: mov eax, 0xe334c4 */
  eax = 0xe334c4u;
/* e1c770: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c775: /* e1c775: cmp eax, 0x887600fa */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x887600fau);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c77a: je 0xe1c7a2 */
  if (zf) goto L_e1c7a2;
L_e1c77c: /* e1c77c: cmp eax, 0x887600ff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x887600ffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c781: je 0xe1c798 */
  if (zf) goto L_e1c798;
L_e1c783: /* e1c783: cmp eax, 0x88760104 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x88760104u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c788: jne 0xe1d89d */
  if (!zf) goto L_e1d89d;
L_e1c78e: /* e1c78e: mov eax, 0xe334b0 */
  eax = 0xe334b0u;
/* e1c793: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c798: /* e1c798: mov eax, 0xe334a0 */
  eax = 0xe334a0u;
/* e1c79d: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c7a2: /* e1c7a2: mov eax, 0xe3348c */
  eax = 0xe3348cu;
/* e1c7a7: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c7ac: /* e1c7ac: mov eax, 0xe33474 */
  eax = 0xe33474u;
/* e1c7b1: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c7b6: /* e1c7b6: mov ecx, 0x8876013d */
  ecx = 0x8876013du;
/* e1c7bb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e1c7bd: jg 0xe1c813 */
  if ((!zf && sf == of)) goto L_e1c813;
L_e1c7bf: /* e1c7bf: je 0xe1c809 */
  if (zf) goto L_e1c809;
L_e1c7c1: /* e1c7c1: cmp eax, 0x88760118 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x88760118u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c7c6: je 0xe1c7ff */
  if (zf) goto L_e1c7ff;
L_e1c7c8: /* e1c7c8: cmp eax, 0x88760122 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x88760122u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c7cd: je 0xe1c7f5 */
  if (zf) goto L_e1c7f5;
L_e1c7cf: /* e1c7cf: cmp eax, 0x88760136 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x88760136u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c7d4: je 0xe1c7eb */
  if (zf) goto L_e1c7eb;
L_e1c7d6: /* e1c7d6: cmp eax, 0x8876013c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8876013cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c7db: jne 0xe1d89d */
  if (!zf) goto L_e1d89d;
L_e1c7e1: /* e1c7e1: mov eax, 0xe33460 */
  eax = 0xe33460u;
/* e1c7e6: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c7eb: /* e1c7eb: mov eax, 0xe3344c */
  eax = 0xe3344cu;
/* e1c7f0: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c7f5: /* e1c7f5: mov eax, 0xe33438 */
  eax = 0xe33438u;
/* e1c7fa: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c7ff: /* e1c7ff: mov eax, 0xe33424 */
  eax = 0xe33424u;
/* e1c804: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c809: /* e1c809: mov eax, 0xe3340c */
  eax = 0xe3340cu;
/* e1c80e: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c813: /* e1c813: cmp eax, 0x88760140 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x88760140u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c818: je 0xe1c840 */
  if (zf) goto L_e1c840;
L_e1c81a: /* e1c81a: cmp eax, 0x8876014a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8876014au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c81f: je 0xe1c836 */
  if (zf) goto L_e1c836;
L_e1c821: /* e1c821: cmp eax, 0x8876014f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8876014fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c826: jne 0xe1d89d */
  if (!zf) goto L_e1d89d;
L_e1c82c: /* e1c82c: mov eax, 0xe333fc */
  eax = 0xe333fcu;
/* e1c831: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c836: /* e1c836: mov eax, 0xe333e8 */
  eax = 0xe333e8u;
/* e1c83b: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c840: /* e1c840: mov eax, 0xe333d4 */
  eax = 0xe333d4u;
/* e1c845: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c84a: /* e1c84a: mov eax, 0xe333c0 */
  eax = 0xe333c0u;
/* e1c84f: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c854: /* e1c854: mov ecx, 0x88781111 */
  ecx = 0x88781111u;
/* e1c859: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e1c85b: jg 0xe1d0ba */
  if ((!zf && sf == of)) goto L_e1d0ba;
L_e1c861: /* e1c861: je 0xe1d0b0 */
  if (zf) goto L_e1d0b0;
L_e1c867: /* e1c867: mov ecx, 0x88760352 */
  ecx = 0x88760352u;
/* e1c86c: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e1c86e: jg 0xe1cc64 */
  if ((!zf && sf == of)) goto L_e1cc64;
L_e1c874: /* e1c874: je 0xe1cc5a */
  if (zf) goto L_e1cc5a;
L_e1c87a: /* e1c87a: mov ecx, 0x8876023e */
  ecx = 0x8876023eu;
/* e1c87f: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e1c881: jg 0xe1cad6 */
  if ((!zf && sf == of)) goto L_e1cad6;
L_e1c887: /* e1c887: je 0xe1cacc */
  if (zf) goto L_e1cacc;
L_e1c88d: /* e1c88d: add ecx, -0x36 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffcau);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e1c890: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e1c892: jg 0xe1c9fc */
  if ((!zf && sf == of)) goto L_e1c9fc;
L_e1c898: /* e1c898: je 0xe1c9f2 */
  if (zf) goto L_e1c9f2;
L_e1c89e: /* e1c89e: mov ecx, 0x887601ae */
  ecx = 0x887601aeu;
/* e1c8a3: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e1c8a5: jg 0xe1c95e */
  if ((!zf && sf == of)) goto L_e1c95e;
L_e1c8ab: /* e1c8ab: je 0xe1c954 */
  if (zf) goto L_e1c954;
L_e1c8b1: /* e1c8b1: add ecx, -0x2e */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffd2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e1c8b4: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e1c8b6: jg 0xe1c90c */
  if ((!zf && sf == of)) goto L_e1c90c;
L_e1c8b8: /* e1c8b8: je 0xe1c902 */
  if (zf) goto L_e1c902;
L_e1c8ba: /* e1c8ba: cmp eax, 0x8876015e */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8876015eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c8bf: je 0xe1c8f8 */
  if (zf) goto L_e1c8f8;
L_e1c8c1: /* e1c8c1: cmp eax, 0x88760168 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x88760168u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c8c6: je 0xe1c8ee */
  if (zf) goto L_e1c8ee;
L_e1c8c8: /* e1c8c8: cmp eax, 0x8876017c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8876017cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c8cd: je 0xe1c8e4 */
  if (zf) goto L_e1c8e4;
L_e1c8cf: /* e1c8cf: cmp eax, 0x8876017e */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8876017eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c8d4: jne 0xe1d89d */
  if (!zf) goto L_e1d89d;
L_e1c8da: /* e1c8da: mov eax, 0xe333a8 */
  eax = 0xe333a8u;
/* e1c8df: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c8e4: /* e1c8e4: mov eax, 0xe33390 */
  eax = 0xe33390u;
/* e1c8e9: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c8ee: /* e1c8ee: mov eax, 0xe33380 */
  eax = 0xe33380u;
/* e1c8f3: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c8f8: /* e1c8f8: mov eax, 0xe3336c */
  eax = 0xe3336cu;
/* e1c8fd: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c902: /* e1c902: mov eax, 0xe33348 */
  eax = 0xe33348u;
/* e1c907: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c90c: /* e1c90c: cmp eax, 0x88760183 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x88760183u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c911: je 0xe1c94a */
  if (zf) goto L_e1c94a;
L_e1c913: /* e1c913: cmp eax, 0x88760190 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x88760190u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c918: je 0xe1c940 */
  if (zf) goto L_e1c940;
L_e1c91a: /* e1c91a: cmp eax, 0x8876019a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8876019au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c91f: je 0xe1c936 */
  if (zf) goto L_e1c936;
L_e1c921: /* e1c921: cmp eax, 0x887601a4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x887601a4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c926: jne 0xe1d89d */
  if (!zf) goto L_e1d89d;
L_e1c92c: /* e1c92c: mov eax, 0xe33328 */
  eax = 0xe33328u;
/* e1c931: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c936: /* e1c936: mov eax, 0xe33308 */
  eax = 0xe33308u;
/* e1c93b: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c940: /* e1c940: mov eax, 0xe332f0 */
  eax = 0xe332f0u;
/* e1c945: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c94a: /* e1c94a: mov eax, 0xe332dc */
  eax = 0xe332dcu;
/* e1c94f: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c954: /* e1c954: mov eax, 0xe332c8 */
  eax = 0xe332c8u;
/* e1c959: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c95e: /* e1c95e: mov ecx, 0x887601d6 */
  ecx = 0x887601d6u;
/* e1c963: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e1c965: jg 0xe1c9bb */
  if ((!zf && sf == of)) goto L_e1c9bb;
L_e1c967: /* e1c967: je 0xe1c9b1 */
  if (zf) goto L_e1c9b1;
L_e1c969: /* e1c969: cmp eax, 0x887601b3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x887601b3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c96e: je 0xe1c9a7 */
  if (zf) goto L_e1c9a7;
L_e1c970: /* e1c970: cmp eax, 0x887601b8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x887601b8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c975: je 0xe1c99d */
  if (zf) goto L_e1c99d;
L_e1c977: /* e1c977: cmp eax, 0x887601c2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x887601c2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c97c: je 0xe1c993 */
  if (zf) goto L_e1c993;
L_e1c97e: /* e1c97e: cmp eax, 0x887601cc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x887601ccu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c983: jne 0xe1d89d */
  if (!zf) goto L_e1d89d;
L_e1c989: /* e1c989: mov eax, 0xe332ac */
  eax = 0xe332acu;
/* e1c98e: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c993: /* e1c993: mov eax, 0xe33298 */
  eax = 0xe33298u;
/* e1c998: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c99d: /* e1c99d: mov eax, 0xe33280 */
  eax = 0xe33280u;
/* e1c9a2: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c9a7: /* e1c9a7: mov eax, 0xe33268 */
  eax = 0xe33268u;
/* e1c9ac: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c9b1: /* e1c9b1: mov eax, 0xe33254 */
  eax = 0xe33254u;
/* e1c9b6: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c9bb: /* e1c9bb: cmp eax, 0x887601e0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x887601e0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c9c0: je 0xe1c9e8 */
  if (zf) goto L_e1c9e8;
L_e1c9c2: /* e1c9c2: cmp eax, 0x887601ea */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x887601eau);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c9c7: je 0xe1c9de */
  if (zf) goto L_e1c9de;
L_e1c9c9: /* e1c9c9: cmp eax, 0x887601fe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x887601feu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1c9ce: jne 0xe1d89d */
  if (!zf) goto L_e1d89d;
L_e1c9d4: /* e1c9d4: mov eax, 0xe3323c */
  eax = 0xe3323cu;
/* e1c9d9: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c9de: /* e1c9de: mov eax, 0xe33228 */
  eax = 0xe33228u;
/* e1c9e3: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c9e8: /* e1c9e8: mov eax, 0xe33214 */
  eax = 0xe33214u;
/* e1c9ed: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c9f2: /* e1c9f2: mov eax, 0xe331fc */
  eax = 0xe331fcu;
/* e1c9f7: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1c9fc: /* e1c9fc: add eax, 0x7789fdf7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7789fdf7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e1ca01: cmp eax, 0x34 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e1ca04: ja 0xe1d89d */
  if ((!cf && !zf)) goto L_e1d89d;
L_e1ca0a: /* e1ca0a: movzx eax, byte ptr [eax + 0xe1db83] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0xe1db83u)));
/* e1ca11: jmp dword ptr [eax*4 + 0xe1db37] */
  switch (R32((uint32_t)(eax*4 + 0xe1db37u))) {
    case 0xe1ca18u: goto L_e1ca18;
    case 0xe1ca22u: goto L_e1ca22;
    case 0xe1ca2cu: goto L_e1ca2c;
    case 0xe1ca36u: goto L_e1ca36;
    case 0xe1ca40u: goto L_e1ca40;
    case 0xe1ca4au: goto L_e1ca4a;
    case 0xe1ca54u: goto L_e1ca54;
    case 0xe1ca5eu: goto L_e1ca5e;
    case 0xe1ca68u: goto L_e1ca68;
    case 0xe1ca72u: goto L_e1ca72;
    case 0xe1ca7cu: goto L_e1ca7c;
    case 0xe1ca86u: goto L_e1ca86;
    case 0xe1ca90u: goto L_e1ca90;
    case 0xe1ca9au: goto L_e1ca9a;
    case 0xe1caa4u: goto L_e1caa4;
    case 0xe1caaeu: goto L_e1caae;
    case 0xe1cab8u: goto L_e1cab8;
    case 0xe1cac2u: goto L_e1cac2;
    case 0xe1d89du: goto L_e1d89d;
    default: guest_badjump(0xe1ca11, R32((uint32_t)(eax*4 + 0xe1db37u))); return;
  }
L_e1ca18: /* e1ca18: mov eax, 0xe331e8 */
  eax = 0xe331e8u;
/* e1ca1d: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1ca22: /* e1ca22: mov eax, 0xe331c8 */
  eax = 0xe331c8u;
/* e1ca27: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1ca2c: /* e1ca2c: mov eax, 0xe331b0 */
  eax = 0xe331b0u;
/* e1ca31: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1ca36: /* e1ca36: mov eax, 0xe33190 */
  eax = 0xe33190u;
/* e1ca3b: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1ca40: /* e1ca40: mov eax, 0xe33180 */
  eax = 0xe33180u;
/* e1ca45: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1ca4a: /* e1ca4a: mov eax, 0xe33164 */
  eax = 0xe33164u;
/* e1ca4f: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1ca54: /* e1ca54: mov eax, 0xe33144 */
  eax = 0xe33144u;
/* e1ca59: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1ca5e: /* e1ca5e: mov eax, 0xe3312c */
  eax = 0xe3312cu;
/* e1ca63: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1ca68: /* e1ca68: mov eax, 0xe33108 */
  eax = 0xe33108u;
/* e1ca6d: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1ca72: /* e1ca72: mov eax, 0xe330f4 */
  eax = 0xe330f4u;
/* e1ca77: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1ca7c: /* e1ca7c: mov eax, 0xe330dc */
  eax = 0xe330dcu;
/* e1ca81: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1ca86: /* e1ca86: mov eax, 0xe330c0 */
  eax = 0xe330c0u;
/* e1ca8b: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1ca90: /* e1ca90: mov eax, 0xe330a8 */
  eax = 0xe330a8u;
/* e1ca95: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1ca9a: /* e1ca9a: mov eax, 0xe33098 */
  eax = 0xe33098u;
/* e1ca9f: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1caa4: /* e1caa4: mov eax, 0xe33080 */
  eax = 0xe33080u;
/* e1caa9: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1caae: /* e1caae: mov eax, 0xe33068 */
  eax = 0xe33068u;
/* e1cab3: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cab8: /* e1cab8: mov eax, 0xe33050 */
  eax = 0xe33050u;
/* e1cabd: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cac2: /* e1cac2: mov eax, 0xe3303c */
  eax = 0xe3303cu;
/* e1cac7: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cacc: /* e1cacc: mov eax, 0xe33024 */
  eax = 0xe33024u;
/* e1cad1: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cad6: /* e1cad6: add eax, 0x7789fdc1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7789fdc1u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e1cadb: cmp eax, 0x7c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e1cade: ja 0xe1d89d */
  if ((!cf && !zf)) goto L_e1d89d;
L_e1cae4: /* e1cae4: movzx eax, byte ptr [eax + 0xe1dc4c] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0xe1dc4cu)));
/* e1caeb: jmp dword ptr [eax*4 + 0xe1dbb8] */
  switch (R32((uint32_t)(eax*4 + 0xe1dbb8u))) {
    case 0xe1caf2u: goto L_e1caf2;
    case 0xe1cafcu: goto L_e1cafc;
    case 0xe1cb06u: goto L_e1cb06;
    case 0xe1cb10u: goto L_e1cb10;
    case 0xe1cb1au: goto L_e1cb1a;
    case 0xe1cb24u: goto L_e1cb24;
    case 0xe1cb2eu: goto L_e1cb2e;
    case 0xe1cb38u: goto L_e1cb38;
    case 0xe1cb42u: goto L_e1cb42;
    case 0xe1cb4cu: goto L_e1cb4c;
    case 0xe1cb56u: goto L_e1cb56;
    case 0xe1cb60u: goto L_e1cb60;
    case 0xe1cb6au: goto L_e1cb6a;
    case 0xe1cb74u: goto L_e1cb74;
    case 0xe1cb7eu: goto L_e1cb7e;
    case 0xe1cb88u: goto L_e1cb88;
    case 0xe1cb92u: goto L_e1cb92;
    case 0xe1cb9cu: goto L_e1cb9c;
    case 0xe1cba6u: goto L_e1cba6;
    case 0xe1cbb0u: goto L_e1cbb0;
    case 0xe1cbbau: goto L_e1cbba;
    case 0xe1cbc4u: goto L_e1cbc4;
    case 0xe1cbceu: goto L_e1cbce;
    case 0xe1cbd8u: goto L_e1cbd8;
    case 0xe1cbe2u: goto L_e1cbe2;
    case 0xe1cbecu: goto L_e1cbec;
    case 0xe1cbf6u: goto L_e1cbf6;
    case 0xe1cc00u: goto L_e1cc00;
    case 0xe1cc0au: goto L_e1cc0a;
    case 0xe1cc14u: goto L_e1cc14;
    case 0xe1cc1eu: goto L_e1cc1e;
    case 0xe1cc28u: goto L_e1cc28;
    case 0xe1cc32u: goto L_e1cc32;
    case 0xe1cc3cu: goto L_e1cc3c;
    case 0xe1cc46u: goto L_e1cc46;
    case 0xe1cc50u: goto L_e1cc50;
    case 0xe1d89du: goto L_e1d89d;
    default: guest_badjump(0xe1caeb, R32((uint32_t)(eax*4 + 0xe1dbb8u))); return;
  }
L_e1caf2: /* e1caf2: mov eax, 0xe33014 */
  eax = 0xe33014u;
/* e1caf7: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cafc: /* e1cafc: mov eax, 0xe33000 */
  eax = 0xe33000u;
/* e1cb01: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cb06: /* e1cb06: mov eax, 0xe32fe8 */
  eax = 0xe32fe8u;
/* e1cb0b: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cb10: /* e1cb10: mov eax, 0xe32fd4 */
  eax = 0xe32fd4u;
/* e1cb15: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cb1a: /* e1cb1a: mov eax, 0xe32fbc */
  eax = 0xe32fbcu;
/* e1cb1f: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cb24: /* e1cb24: mov eax, 0xe32fa0 */
  eax = 0xe32fa0u;
/* e1cb29: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cb2e: /* e1cb2e: mov eax, 0xe32f80 */
  eax = 0xe32f80u;
/* e1cb33: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cb38: /* e1cb38: mov eax, 0xe32f6c */
  eax = 0xe32f6cu;
/* e1cb3d: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cb42: /* e1cb42: mov eax, 0xe32f58 */
  eax = 0xe32f58u;
/* e1cb47: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cb4c: /* e1cb4c: mov eax, 0xe32f48 */
  eax = 0xe32f48u;
/* e1cb51: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cb56: /* e1cb56: mov eax, 0xe32f34 */
  eax = 0xe32f34u;
/* e1cb5b: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cb60: /* e1cb60: mov eax, 0xe32f28 */
  eax = 0xe32f28u;
/* e1cb65: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cb6a: /* e1cb6a: mov eax, 0xe32f18 */
  eax = 0xe32f18u;
/* e1cb6f: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cb74: /* e1cb74: mov eax, 0xe32f00 */
  eax = 0xe32f00u;
/* e1cb79: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cb7e: /* e1cb7e: mov eax, 0xe32eec */
  eax = 0xe32eecu;
/* e1cb83: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cb88: /* e1cb88: mov eax, 0xe32ed4 */
  eax = 0xe32ed4u;
/* e1cb8d: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cb92: /* e1cb92: mov eax, 0xe32ec0 */
  eax = 0xe32ec0u;
/* e1cb97: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cb9c: /* e1cb9c: mov eax, 0xe32ea4 */
  eax = 0xe32ea4u;
/* e1cba1: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cba6: /* e1cba6: mov eax, 0xe32e90 */
  eax = 0xe32e90u;
/* e1cbab: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cbb0: /* e1cbb0: mov eax, 0xe32e80 */
  eax = 0xe32e80u;
/* e1cbb5: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cbba: /* e1cbba: mov eax, 0xe32e6c */
  eax = 0xe32e6cu;
/* e1cbbf: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cbc4: /* e1cbc4: mov eax, 0xe32e50 */
  eax = 0xe32e50u;
/* e1cbc9: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cbce: /* e1cbce: mov eax, 0xe32e38 */
  eax = 0xe32e38u;
/* e1cbd3: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cbd8: /* e1cbd8: mov eax, 0xe32e20 */
  eax = 0xe32e20u;
/* e1cbdd: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cbe2: /* e1cbe2: mov eax, 0xe32e0c */
  eax = 0xe32e0cu;
/* e1cbe7: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cbec: /* e1cbec: mov eax, 0xe32df4 */
  eax = 0xe32df4u;
/* e1cbf1: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cbf6: /* e1cbf6: mov eax, 0xe32de0 */
  eax = 0xe32de0u;
/* e1cbfb: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cc00: /* e1cc00: mov eax, 0xe32dd0 */
  eax = 0xe32dd0u;
/* e1cc05: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cc0a: /* e1cc0a: mov eax, 0xe32dc0 */
  eax = 0xe32dc0u;
/* e1cc0f: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cc14: /* e1cc14: mov eax, 0xe32dac */
  eax = 0xe32dacu;
/* e1cc19: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cc1e: /* e1cc1e: mov eax, 0xe32d9c */
  eax = 0xe32d9cu;
/* e1cc23: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cc28: /* e1cc28: mov eax, 0xe32d84 */
  eax = 0xe32d84u;
/* e1cc2d: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cc32: /* e1cc32: mov eax, 0xe32d6c */
  eax = 0xe32d6cu;
/* e1cc37: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cc3c: /* e1cc3c: mov eax, 0xe32d50 */
  eax = 0xe32d50u;
/* e1cc41: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cc46: /* e1cc46: mov eax, 0xe32d38 */
  eax = 0xe32d38u;
/* e1cc4b: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cc50: /* e1cc50: mov eax, 0xe32d18 */
  eax = 0xe32d18u;
/* e1cc55: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cc5a: /* e1cc5a: mov eax, 0xe32d04 */
  eax = 0xe32d04u;
/* e1cc5f: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cc64: /* e1cc64: mov ecx, 0x88760818 */
  ecx = 0x88760818u;
/* e1cc69: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e1cc6b: jg 0xe1cd9a */
  if ((!zf && sf == of)) goto L_e1cd9a;
L_e1cc71: /* e1cc71: je 0xe1cd90 */
  if (zf) goto L_e1cd90;
L_e1cc77: /* e1cc77: add eax, 0x7789fcad */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7789fcadu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e1cc7c: cmp eax, 0x19 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x19u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e1cc7f: ja 0xe1d89d */
  if ((!cf && !zf)) goto L_e1d89d;
L_e1cc85: /* e1cc85: jmp dword ptr [eax*4 + 0xe1dcc9] */
  switch (R32((uint32_t)(eax*4 + 0xe1dcc9u))) {
    case 0xe1cc8cu: goto L_e1cc8c;
    case 0xe1cc96u: goto L_e1cc96;
    case 0xe1cca0u: goto L_e1cca0;
    case 0xe1ccaau: goto L_e1ccaa;
    case 0xe1ccb4u: goto L_e1ccb4;
    case 0xe1ccbeu: goto L_e1ccbe;
    case 0xe1ccc8u: goto L_e1ccc8;
    case 0xe1ccd2u: goto L_e1ccd2;
    case 0xe1ccdcu: goto L_e1ccdc;
    case 0xe1cce6u: goto L_e1cce6;
    case 0xe1ccf0u: goto L_e1ccf0;
    case 0xe1ccfau: goto L_e1ccfa;
    case 0xe1cd04u: goto L_e1cd04;
    case 0xe1cd0eu: goto L_e1cd0e;
    case 0xe1cd18u: goto L_e1cd18;
    case 0xe1cd22u: goto L_e1cd22;
    case 0xe1cd2cu: goto L_e1cd2c;
    case 0xe1cd36u: goto L_e1cd36;
    case 0xe1cd40u: goto L_e1cd40;
    case 0xe1cd4au: goto L_e1cd4a;
    case 0xe1cd54u: goto L_e1cd54;
    case 0xe1cd5eu: goto L_e1cd5e;
    case 0xe1cd68u: goto L_e1cd68;
    case 0xe1cd72u: goto L_e1cd72;
    case 0xe1cd7cu: goto L_e1cd7c;
    case 0xe1cd86u: goto L_e1cd86;
    default: guest_badjump(0xe1cc85, R32((uint32_t)(eax*4 + 0xe1dcc9u))); return;
  }
L_e1cc8c: /* e1cc8c: mov eax, 0xe32cf0 */
  eax = 0xe32cf0u;
/* e1cc91: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cc96: /* e1cc96: mov eax, 0xe32cdc */
  eax = 0xe32cdcu;
/* e1cc9b: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cca0: /* e1cca0: mov eax, 0xe32cc0 */
  eax = 0xe32cc0u;
/* e1cca5: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1ccaa: /* e1ccaa: mov eax, 0xe32cac */
  eax = 0xe32cacu;
/* e1ccaf: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1ccb4: /* e1ccb4: mov eax, 0xe32c98 */
  eax = 0xe32c98u;
/* e1ccb9: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1ccbe: /* e1ccbe: mov eax, 0xe32c80 */
  eax = 0xe32c80u;
/* e1ccc3: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1ccc8: /* e1ccc8: mov eax, 0xe32c68 */
  eax = 0xe32c68u;
/* e1cccd: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1ccd2: /* e1ccd2: mov eax, 0xe32c4c */
  eax = 0xe32c4cu;
/* e1ccd7: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1ccdc: /* e1ccdc: mov eax, 0xe32c34 */
  eax = 0xe32c34u;
/* e1cce1: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cce6: /* e1cce6: mov eax, 0xe32c1c */
  eax = 0xe32c1cu;
/* e1cceb: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1ccf0: /* e1ccf0: mov eax, 0xe32c04 */
  eax = 0xe32c04u;
/* e1ccf5: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1ccfa: /* e1ccfa: mov eax, 0xe32be8 */
  eax = 0xe32be8u;
/* e1ccff: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cd04: /* e1cd04: mov eax, 0xe32bcc */
  eax = 0xe32bccu;
/* e1cd09: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cd0e: /* e1cd0e: mov eax, 0xe32ba8 */
  eax = 0xe32ba8u;
/* e1cd13: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cd18: /* e1cd18: mov eax, 0xe32b94 */
  eax = 0xe32b94u;
/* e1cd1d: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cd22: /* e1cd22: mov eax, 0xe32b7c */
  eax = 0xe32b7cu;
/* e1cd27: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cd2c: /* e1cd2c: mov eax, 0xe32b64 */
  eax = 0xe32b64u;
/* e1cd31: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cd36: /* e1cd36: mov eax, 0xe32b4c */
  eax = 0xe32b4cu;
/* e1cd3b: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cd40: /* e1cd40: mov eax, 0xe32b30 */
  eax = 0xe32b30u;
/* e1cd45: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cd4a: /* e1cd4a: mov eax, 0xe32b18 */
  eax = 0xe32b18u;
/* e1cd4f: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cd54: /* e1cd54: mov eax, 0xe32b00 */
  eax = 0xe32b00u;
/* e1cd59: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cd5e: /* e1cd5e: mov eax, 0xe32ae8 */
  eax = 0xe32ae8u;
/* e1cd63: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cd68: /* e1cd68: mov eax, 0xe32ac8 */
  eax = 0xe32ac8u;
/* e1cd6d: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cd72: /* e1cd72: mov eax, 0xe32ab0 */
  eax = 0xe32ab0u;
/* e1cd77: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cd7c: /* e1cd7c: mov eax, 0xe32a98 */
  eax = 0xe32a98u;
/* e1cd81: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cd86: /* e1cd86: mov eax, 0xe32a80 */
  eax = 0xe32a80u;
/* e1cd8b: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cd90: /* e1cd90: mov eax, 0xe32a64 */
  eax = 0xe32a64u;
/* e1cd95: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cd9a: /* e1cd9a: mov ecx, 0x88760866 */
  ecx = 0x88760866u;
/* e1cd9f: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e1cda1: jg 0xe1ce3a */
  if ((!zf && sf == of)) goto L_e1ce3a;
L_e1cda7: /* e1cda7: je 0xe1ce30 */
  if (zf) goto L_e1ce30;
L_e1cdad: /* e1cdad: add eax, 0x7789f7e7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7789f7e7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e1cdb2: cmp eax, 0xe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xeu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e1cdb5: ja 0xe1d89d */
  if ((!cf && !zf)) goto L_e1d89d;
L_e1cdbb: /* e1cdbb: jmp dword ptr [eax*4 + 0xe1dd31] */
  switch (R32((uint32_t)(eax*4 + 0xe1dd31u))) {
    case 0xe1cdc2u: goto L_e1cdc2;
    case 0xe1cdccu: goto L_e1cdcc;
    case 0xe1cdd6u: goto L_e1cdd6;
    case 0xe1cde0u: goto L_e1cde0;
    case 0xe1cdeau: goto L_e1cdea;
    case 0xe1cdf4u: goto L_e1cdf4;
    case 0xe1cdfeu: goto L_e1cdfe;
    case 0xe1ce08u: goto L_e1ce08;
    case 0xe1ce12u: goto L_e1ce12;
    case 0xe1ce1cu: goto L_e1ce1c;
    case 0xe1ce26u: goto L_e1ce26;
    case 0xe1d060u: goto L_e1d060;
    case 0xe1d06au: goto L_e1d06a;
    case 0xe1d074u: goto L_e1d074;
    case 0xe1d07eu: goto L_e1d07e;
    case 0xe1d088u: goto L_e1d088;
    case 0xe1d092u: goto L_e1d092;
    case 0xe1d09cu: goto L_e1d09c;
    case 0xe1d0a6u: goto L_e1d0a6;
    case 0xe1d0e9u: goto L_e1d0e9;
    case 0xe1d0f3u: goto L_e1d0f3;
    case 0xe1d0fdu: goto L_e1d0fd;
    case 0xe1d107u: goto L_e1d107;
    case 0xe1d111u: goto L_e1d111;
    case 0xe1d11bu: goto L_e1d11b;
    case 0xe1d125u: goto L_e1d125;
    case 0xe1d12fu: goto L_e1d12f;
    case 0xe1d139u: goto L_e1d139;
    case 0xe1d143u: goto L_e1d143;
    case 0xe1d14du: goto L_e1d14d;
    case 0xe1d157u: goto L_e1d157;
    case 0xe1d161u: goto L_e1d161;
    case 0xe1d16bu: goto L_e1d16b;
    case 0xe1d175u: goto L_e1d175;
    case 0xe1d17fu: goto L_e1d17f;
    case 0xe1d189u: goto L_e1d189;
    case 0xe1d193u: goto L_e1d193;
    case 0xe1d19du: goto L_e1d19d;
    case 0xe1d1a7u: goto L_e1d1a7;
    case 0xe1d1b1u: goto L_e1d1b1;
    case 0xe1d1bbu: goto L_e1d1bb;
    case 0xe1d1c5u: goto L_e1d1c5;
    case 0xe1d1cfu: goto L_e1d1cf;
    case 0xe1d1d9u: goto L_e1d1d9;
    case 0xe1d1e3u: goto L_e1d1e3;
    case 0xe1d1edu: goto L_e1d1ed;
    case 0xe1d1f7u: goto L_e1d1f7;
    case 0xe1d201u: goto L_e1d201;
    case 0xe1d20bu: goto L_e1d20b;
    case 0xe1d215u: goto L_e1d215;
    case 0xe1d21fu: goto L_e1d21f;
    case 0xe1d229u: goto L_e1d229;
    case 0xe1d233u: goto L_e1d233;
    case 0xe1d23du: goto L_e1d23d;
    case 0xe1d247u: goto L_e1d247;
    case 0xe1d251u: goto L_e1d251;
    case 0xe1d25bu: goto L_e1d25b;
    case 0xe1d265u: goto L_e1d265;
    case 0xe1d26fu: goto L_e1d26f;
    case 0xe1d279u: goto L_e1d279;
    case 0xe1d283u: goto L_e1d283;
    case 0xe1d28du: goto L_e1d28d;
    case 0xe1d297u: goto L_e1d297;
    case 0xe1d2a1u: goto L_e1d2a1;
    case 0xe1d2abu: goto L_e1d2ab;
    case 0xe1d2b5u: goto L_e1d2b5;
    case 0xe1d2bfu: goto L_e1d2bf;
    case 0xe1d2c9u: goto L_e1d2c9;
    case 0xe1d2d3u: goto L_e1d2d3;
    case 0xe1d2ddu: goto L_e1d2dd;
    case 0xe1d2e7u: goto L_e1d2e7;
    case 0xe1d2f1u: goto L_e1d2f1;
    case 0xe1d2fbu: goto L_e1d2fb;
    case 0xe1d89du: goto L_e1d89d;
    default: guest_badjump(0xe1cdbb, R32((uint32_t)(eax*4 + 0xe1dd31u))); return;
  }
L_e1cdc2: /* e1cdc2: mov eax, 0xe32a40 */
  eax = 0xe32a40u;
/* e1cdc7: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cdcc: /* e1cdcc: mov eax, 0xe32a24 */
  eax = 0xe32a24u;
/* e1cdd1: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cdd6: /* e1cdd6: mov eax, 0xe32a00 */
  eax = 0xe32a00u;
/* e1cddb: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cde0: /* e1cde0: mov eax, 0xe329e4 */
  eax = 0xe329e4u;
/* e1cde5: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cdea: /* e1cdea: mov eax, 0xe329c8 */
  eax = 0xe329c8u;
/* e1cdef: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cdf4: /* e1cdf4: mov eax, 0xe329a8 */
  eax = 0xe329a8u;
/* e1cdf9: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cdfe: /* e1cdfe: mov eax, 0xe32988 */
  eax = 0xe32988u;
/* e1ce03: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1ce08: /* e1ce08: mov eax, 0xe32968 */
  eax = 0xe32968u;
/* e1ce0d: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1ce12: /* e1ce12: mov eax, 0xe32948 */
  eax = 0xe32948u;
/* e1ce17: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1ce1c: /* e1ce1c: mov eax, 0xe32924 */
  eax = 0xe32924u;
/* e1ce21: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1ce26: /* e1ce26: mov eax, 0xe32908 */
  eax = 0xe32908u;
/* e1ce2b: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1ce30: /* e1ce30: mov eax, 0xe328f8 */
  eax = 0xe328f8u;
/* e1ce35: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1ce3a: /* e1ce3a: mov ecx, 0x88780064 */
  ecx = 0x88780064u;
/* e1ce3f: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e1ce41: jg 0xe1cf9c */
  if ((!zf && sf == of)) goto L_e1cf9c;
L_e1ce47: /* e1ce47: je 0xe1cf92 */
  if (zf) goto L_e1cf92;
L_e1ce4d: /* e1ce4d: mov ecx, 0x88760b55 */
  ecx = 0x88760b55u;
/* e1ce52: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e1ce54: jg 0xe1cefe */
  if ((!zf && sf == of)) goto L_e1cefe;
L_e1ce5a: /* e1ce5a: je 0xe1cef4 */
  if (zf) goto L_e1cef4;
L_e1ce60: /* e1ce60: mov ecx, 0x8876086b */
  ecx = 0x8876086bu;
/* e1ce65: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e1ce67: jg 0xe1cebd */
  if ((!zf && sf == of)) goto L_e1cebd;
L_e1ce69: /* e1ce69: je 0xe1ceb3 */
  if (zf) goto L_e1ceb3;
L_e1ce6b: /* e1ce6b: cmp eax, 0x88760867 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x88760867u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1ce70: je 0xe1cea9 */
  if (zf) goto L_e1cea9;
L_e1ce72: /* e1ce72: cmp eax, 0x88760868 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x88760868u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1ce77: je 0xe1ce9f */
  if (zf) goto L_e1ce9f;
L_e1ce79: /* e1ce79: cmp eax, 0x88760869 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x88760869u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1ce7e: je 0xe1ce95 */
  if (zf) goto L_e1ce95;
L_e1ce80: /* e1ce80: cmp eax, 0x8876086a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8876086au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1ce85: jne 0xe1d89d */
  if (!zf) goto L_e1d89d;
L_e1ce8b: /* e1ce8b: mov eax, 0xe328e4 */
  eax = 0xe328e4u;
/* e1ce90: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1ce95: /* e1ce95: mov eax, 0xe328cc */
  eax = 0xe328ccu;
/* e1ce9a: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1ce9f: /* e1ce9f: mov eax, 0xe328b8 */
  eax = 0xe328b8u;
/* e1cea4: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cea9: /* e1cea9: mov eax, 0xe328a8 */
  eax = 0xe328a8u;
/* e1ceae: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1ceb3: /* e1ceb3: mov eax, 0xe32890 */
  eax = 0xe32890u;
/* e1ceb8: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cebd: /* e1cebd: cmp eax, 0x8876086c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8876086cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1cec2: je 0xe1ceea */
  if (zf) goto L_e1ceea;
L_e1cec4: /* e1cec4: cmp eax, 0x8876086d */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8876086du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1cec9: je 0xe1cee0 */
  if (zf) goto L_e1cee0;
L_e1cecb: /* e1cecb: cmp eax, 0x88760b54 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x88760b54u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1ced0: jne 0xe1d89d */
  if (!zf) goto L_e1d89d;
L_e1ced6: /* e1ced6: mov eax, 0xe32870 */
  eax = 0xe32870u;
/* e1cedb: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cee0: /* e1cee0: mov eax, 0xe32854 */
  eax = 0xe32854u;
/* e1cee5: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1ceea: /* e1ceea: mov eax, 0xe32840 */
  eax = 0xe32840u;
/* e1ceef: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cef4: /* e1cef4: mov eax, 0xe3282c */
  eax = 0xe3282cu;
/* e1cef9: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cefe: /* e1cefe: mov ecx, 0x8878000a */
  ecx = 0x8878000au;
/* e1cf03: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e1cf05: jg 0xe1cf5b */
  if ((!zf && sf == of)) goto L_e1cf5b;
L_e1cf07: /* e1cf07: je 0xe1cf51 */
  if (zf) goto L_e1cf51;
L_e1cf09: /* e1cf09: cmp eax, 0x88760b56 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x88760b56u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1cf0e: je 0xe1cf47 */
  if (zf) goto L_e1cf47;
L_e1cf10: /* e1cf10: cmp eax, 0x88760b57 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x88760b57u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1cf15: je 0xe1cf3d */
  if (zf) goto L_e1cf3d;
L_e1cf17: /* e1cf17: cmp eax, 0x88760b58 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x88760b58u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1cf1c: je 0xe1cf33 */
  if (zf) goto L_e1cf33;
L_e1cf1e: /* e1cf1e: cmp eax, 0x88760b59 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x88760b59u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1cf23: jne 0xe1d89d */
  if (!zf) goto L_e1d89d;
L_e1cf29: /* e1cf29: mov eax, 0xe32818 */
  eax = 0xe32818u;
/* e1cf2e: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cf33: /* e1cf33: mov eax, 0xe327fc */
  eax = 0xe327fcu;
/* e1cf38: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cf3d: /* e1cf3d: mov eax, 0xe327dc */
  eax = 0xe327dcu;
/* e1cf42: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cf47: /* e1cf47: mov eax, 0xe327c4 */
  eax = 0xe327c4u;
/* e1cf4c: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cf51: /* e1cf51: mov eax, 0xe327b4 */
  eax = 0xe327b4u;
/* e1cf56: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cf5b: /* e1cf5b: cmp eax, 0x8878001e */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8878001eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1cf60: je 0xe1cf88 */
  if (zf) goto L_e1cf88;
L_e1cf62: /* e1cf62: cmp eax, 0x88780032 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x88780032u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1cf67: je 0xe1cf7e */
  if (zf) goto L_e1cf7e;
L_e1cf69: /* e1cf69: cmp eax, 0x88780046 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x88780046u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1cf6e: jne 0xe1d89d */
  if (!zf) goto L_e1d89d;
L_e1cf74: /* e1cf74: mov eax, 0xe3279c */
  eax = 0xe3279cu;
/* e1cf79: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cf7e: /* e1cf7e: mov eax, 0xe32788 */
  eax = 0xe32788u;
/* e1cf83: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cf88: /* e1cf88: mov eax, 0xe32770 */
  eax = 0xe32770u;
/* e1cf8d: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cf92: /* e1cf92: mov eax, 0xe32760 */
  eax = 0xe32760u;
/* e1cf97: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cf9c: /* e1cf9c: mov ecx, 0x887800d2 */
  ecx = 0x887800d2u;
/* e1cfa1: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e1cfa3: jg 0xe1d04b */
  if ((!zf && sf == of)) goto L_e1d04b;
L_e1cfa9: /* e1cfa9: je 0xe1d041 */
  if (zf) goto L_e1d041;
L_e1cfaf: /* e1cfaf: add ecx, -0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffd8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e1cfb2: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e1cfb4: jg 0xe1d00a */
  if ((!zf && sf == of)) goto L_e1d00a;
L_e1cfb6: /* e1cfb6: je 0xe1d000 */
  if (zf) goto L_e1d000;
L_e1cfb8: /* e1cfb8: cmp eax, 0x88780078 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x88780078u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1cfbd: je 0xe1cff6 */
  if (zf) goto L_e1cff6;
L_e1cfbf: /* e1cfbf: cmp eax, 0x88780082 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x88780082u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1cfc4: je 0xe1cfec */
  if (zf) goto L_e1cfec;
L_e1cfc6: /* e1cfc6: cmp eax, 0x88780096 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x88780096u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1cfcb: je 0xe1cfe2 */
  if (zf) goto L_e1cfe2;
L_e1cfcd: /* e1cfcd: cmp eax, 0x887800a0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x887800a0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1cfd2: jne 0xe1d89d */
  if (!zf) goto L_e1d89d;
L_e1cfd8: /* e1cfd8: mov eax, 0xe32748 */
  eax = 0xe32748u;
/* e1cfdd: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cfe2: /* e1cfe2: mov eax, 0xe32734 */
  eax = 0xe32734u;
/* e1cfe7: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cfec: /* e1cfec: mov eax, 0xe32718 */
  eax = 0xe32718u;
/* e1cff1: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1cff6: /* e1cff6: mov eax, 0xe32708 */
  eax = 0xe32708u;
/* e1cffb: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d000: /* e1d000: mov eax, 0xe326f4 */
  eax = 0xe326f4u;
/* e1d005: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d00a: /* e1d00a: cmp eax, 0x887800b4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x887800b4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1d00f: je 0xe1d037 */
  if (zf) goto L_e1d037;
L_e1d011: /* e1d011: cmp eax, 0x887800be */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x887800beu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1d016: je 0xe1d02d */
  if (zf) goto L_e1d02d;
L_e1d018: /* e1d018: cmp eax, 0x887800c8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x887800c8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1d01d: jne 0xe1d89d */
  if (!zf) goto L_e1d89d;
L_e1d023: /* e1d023: mov eax, 0xe326e4 */
  eax = 0xe326e4u;
/* e1d028: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d02d: /* e1d02d: mov eax, 0xe326d0 */
  eax = 0xe326d0u;
/* e1d032: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d037: /* e1d037: mov eax, 0xe326b8 */
  eax = 0xe326b8u;
/* e1d03c: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d041: /* e1d041: mov eax, 0xe326a0 */
  eax = 0xe326a0u;
/* e1d046: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d04b: /* e1d04b: add eax, 0x7787eeff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7787eeffu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e1d050: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e1d053: ja 0xe1d89d */
  if ((!cf && !zf)) goto L_e1d89d;
L_e1d059: /* e1d059: jmp dword ptr [eax*4 + 0xe1dd6d] */
  switch (R32((uint32_t)(eax*4 + 0xe1dd6du))) {
    case 0xe1d060u: goto L_e1d060;
    case 0xe1d06au: goto L_e1d06a;
    case 0xe1d074u: goto L_e1d074;
    case 0xe1d07eu: goto L_e1d07e;
    case 0xe1d088u: goto L_e1d088;
    case 0xe1d092u: goto L_e1d092;
    case 0xe1d09cu: goto L_e1d09c;
    case 0xe1d0a6u: goto L_e1d0a6;
    case 0xe1d0e9u: goto L_e1d0e9;
    case 0xe1d0f3u: goto L_e1d0f3;
    case 0xe1d0fdu: goto L_e1d0fd;
    case 0xe1d107u: goto L_e1d107;
    case 0xe1d111u: goto L_e1d111;
    case 0xe1d11bu: goto L_e1d11b;
    case 0xe1d125u: goto L_e1d125;
    case 0xe1d12fu: goto L_e1d12f;
    case 0xe1d139u: goto L_e1d139;
    case 0xe1d143u: goto L_e1d143;
    case 0xe1d14du: goto L_e1d14d;
    case 0xe1d157u: goto L_e1d157;
    case 0xe1d161u: goto L_e1d161;
    case 0xe1d16bu: goto L_e1d16b;
    case 0xe1d175u: goto L_e1d175;
    case 0xe1d17fu: goto L_e1d17f;
    case 0xe1d189u: goto L_e1d189;
    case 0xe1d193u: goto L_e1d193;
    case 0xe1d19du: goto L_e1d19d;
    case 0xe1d1a7u: goto L_e1d1a7;
    case 0xe1d1b1u: goto L_e1d1b1;
    case 0xe1d1bbu: goto L_e1d1bb;
    case 0xe1d1c5u: goto L_e1d1c5;
    case 0xe1d1cfu: goto L_e1d1cf;
    case 0xe1d1d9u: goto L_e1d1d9;
    case 0xe1d1e3u: goto L_e1d1e3;
    case 0xe1d1edu: goto L_e1d1ed;
    case 0xe1d1f7u: goto L_e1d1f7;
    case 0xe1d201u: goto L_e1d201;
    case 0xe1d20bu: goto L_e1d20b;
    case 0xe1d215u: goto L_e1d215;
    case 0xe1d21fu: goto L_e1d21f;
    case 0xe1d229u: goto L_e1d229;
    case 0xe1d233u: goto L_e1d233;
    case 0xe1d23du: goto L_e1d23d;
    case 0xe1d247u: goto L_e1d247;
    case 0xe1d251u: goto L_e1d251;
    case 0xe1d25bu: goto L_e1d25b;
    case 0xe1d265u: goto L_e1d265;
    case 0xe1d26fu: goto L_e1d26f;
    case 0xe1d279u: goto L_e1d279;
    case 0xe1d283u: goto L_e1d283;
    case 0xe1d28du: goto L_e1d28d;
    case 0xe1d297u: goto L_e1d297;
    case 0xe1d2a1u: goto L_e1d2a1;
    case 0xe1d2abu: goto L_e1d2ab;
    case 0xe1d2b5u: goto L_e1d2b5;
    case 0xe1d2bfu: goto L_e1d2bf;
    case 0xe1d2c9u: goto L_e1d2c9;
    case 0xe1d2d3u: goto L_e1d2d3;
    case 0xe1d2ddu: goto L_e1d2dd;
    case 0xe1d2e7u: goto L_e1d2e7;
    case 0xe1d2f1u: goto L_e1d2f1;
    case 0xe1d2fbu: goto L_e1d2fb;
    case 0xe1d89du: goto L_e1d89d;
    default: guest_badjump(0xe1d059, R32((uint32_t)(eax*4 + 0xe1dd6du))); return;
  }
L_e1d060: /* e1d060: mov eax, 0xe32688 */
  eax = 0xe32688u;
/* e1d065: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d06a: /* e1d06a: mov eax, 0xe32674 */
  eax = 0xe32674u;
/* e1d06f: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d074: /* e1d074: mov eax, 0xe3265c */
  eax = 0xe3265cu;
/* e1d079: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d07e: /* e1d07e: mov eax, 0xe32640 */
  eax = 0xe32640u;
/* e1d083: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d088: /* e1d088: mov eax, 0xe3262c */
  eax = 0xe3262cu;
/* e1d08d: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d092: /* e1d092: mov eax, 0xe32610 */
  eax = 0xe32610u;
/* e1d097: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d09c: /* e1d09c: mov eax, 0xe325fc */
  eax = 0xe325fcu;
/* e1d0a1: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d0a6: /* e1d0a6: mov eax, 0xe325e4 */
  eax = 0xe325e4u;
/* e1d0ab: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d0b0: /* e1d0b0: mov eax, 0xe325cc */
  eax = 0xe325ccu;
/* e1d0b5: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d0ba: /* e1d0ba: mov ecx, 0x88781170 */
  ecx = 0x88781170u;
/* e1d0bf: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e1d0c1: jg 0xe1d30f */
  if ((!zf && sf == of)) goto L_e1d30f;
L_e1d0c7: /* e1d0c7: je 0xe1d305 */
  if (zf) goto L_e1d305;
L_e1d0cd: /* e1d0cd: add eax, 0x7787eeed */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7787eeedu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e1d0d2: cmp eax, 0x54 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e1d0d5: ja 0xe1d89d */
  if ((!cf && !zf)) goto L_e1d89d;
L_e1d0db: /* e1d0db: movzx eax, byte ptr [eax + 0xe1de6d] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0xe1de6du)));
/* e1d0e2: jmp dword ptr [eax*4 + 0xe1dd91] */
  switch (R32((uint32_t)(eax*4 + 0xe1dd91u))) {
    case 0xe1d0e9u: goto L_e1d0e9;
    case 0xe1d0f3u: goto L_e1d0f3;
    case 0xe1d0fdu: goto L_e1d0fd;
    case 0xe1d107u: goto L_e1d107;
    case 0xe1d111u: goto L_e1d111;
    case 0xe1d11bu: goto L_e1d11b;
    case 0xe1d125u: goto L_e1d125;
    case 0xe1d12fu: goto L_e1d12f;
    case 0xe1d139u: goto L_e1d139;
    case 0xe1d143u: goto L_e1d143;
    case 0xe1d14du: goto L_e1d14d;
    case 0xe1d157u: goto L_e1d157;
    case 0xe1d161u: goto L_e1d161;
    case 0xe1d16bu: goto L_e1d16b;
    case 0xe1d175u: goto L_e1d175;
    case 0xe1d17fu: goto L_e1d17f;
    case 0xe1d189u: goto L_e1d189;
    case 0xe1d193u: goto L_e1d193;
    case 0xe1d19du: goto L_e1d19d;
    case 0xe1d1a7u: goto L_e1d1a7;
    case 0xe1d1b1u: goto L_e1d1b1;
    case 0xe1d1bbu: goto L_e1d1bb;
    case 0xe1d1c5u: goto L_e1d1c5;
    case 0xe1d1cfu: goto L_e1d1cf;
    case 0xe1d1d9u: goto L_e1d1d9;
    case 0xe1d1e3u: goto L_e1d1e3;
    case 0xe1d1edu: goto L_e1d1ed;
    case 0xe1d1f7u: goto L_e1d1f7;
    case 0xe1d201u: goto L_e1d201;
    case 0xe1d20bu: goto L_e1d20b;
    case 0xe1d215u: goto L_e1d215;
    case 0xe1d21fu: goto L_e1d21f;
    case 0xe1d229u: goto L_e1d229;
    case 0xe1d233u: goto L_e1d233;
    case 0xe1d23du: goto L_e1d23d;
    case 0xe1d247u: goto L_e1d247;
    case 0xe1d251u: goto L_e1d251;
    case 0xe1d25bu: goto L_e1d25b;
    case 0xe1d265u: goto L_e1d265;
    case 0xe1d26fu: goto L_e1d26f;
    case 0xe1d279u: goto L_e1d279;
    case 0xe1d283u: goto L_e1d283;
    case 0xe1d28du: goto L_e1d28d;
    case 0xe1d297u: goto L_e1d297;
    case 0xe1d2a1u: goto L_e1d2a1;
    case 0xe1d2abu: goto L_e1d2ab;
    case 0xe1d2b5u: goto L_e1d2b5;
    case 0xe1d2bfu: goto L_e1d2bf;
    case 0xe1d2c9u: goto L_e1d2c9;
    case 0xe1d2d3u: goto L_e1d2d3;
    case 0xe1d2ddu: goto L_e1d2dd;
    case 0xe1d2e7u: goto L_e1d2e7;
    case 0xe1d2f1u: goto L_e1d2f1;
    case 0xe1d2fbu: goto L_e1d2fb;
    case 0xe1d89du: goto L_e1d89d;
    default: guest_badjump(0xe1d0e2, R32((uint32_t)(eax*4 + 0xe1dd91u))); return;
  }
L_e1d0e9: /* e1d0e9: mov eax, 0xe325b4 */
  eax = 0xe325b4u;
/* e1d0ee: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d0f3: /* e1d0f3: mov eax, 0xe325a0 */
  eax = 0xe325a0u;
/* e1d0f8: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d0fd: /* e1d0fd: mov eax, 0xe3258c */
  eax = 0xe3258cu;
/* e1d102: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d107: /* e1d107: mov eax, 0xe32578 */
  eax = 0xe32578u;
/* e1d10c: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d111: /* e1d111: mov eax, 0xe32564 */
  eax = 0xe32564u;
/* e1d116: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d11b: /* e1d11b: mov eax, 0xe3254c */
  eax = 0xe3254cu;
/* e1d120: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d125: /* e1d125: mov eax, 0xe32530 */
  eax = 0xe32530u;
/* e1d12a: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d12f: /* e1d12f: mov eax, 0xe32510 */
  eax = 0xe32510u;
/* e1d134: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d139: /* e1d139: mov eax, 0xe324f4 */
  eax = 0xe324f4u;
/* e1d13e: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d143: /* e1d143: mov eax, 0xe324dc */
  eax = 0xe324dcu;
/* e1d148: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d14d: /* e1d14d: mov eax, 0xe324c4 */
  eax = 0xe324c4u;
/* e1d152: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d157: /* e1d157: mov eax, 0xe324ac */
  eax = 0xe324acu;
/* e1d15c: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d161: /* e1d161: mov eax, 0xe3249c */
  eax = 0xe3249cu;
/* e1d166: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d16b: /* e1d16b: mov eax, 0xe32484 */
  eax = 0xe32484u;
/* e1d170: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d175: /* e1d175: mov eax, 0xe3246c */
  eax = 0xe3246cu;
/* e1d17a: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d17f: /* e1d17f: mov eax, 0xe32458 */
  eax = 0xe32458u;
/* e1d184: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d189: /* e1d189: mov eax, 0xe32440 */
  eax = 0xe32440u;
/* e1d18e: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d193: /* e1d193: mov eax, 0xe32430 */
  eax = 0xe32430u;
/* e1d198: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d19d: /* e1d19d: mov eax, 0xe32420 */
  eax = 0xe32420u;
/* e1d1a2: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d1a7: /* e1d1a7: mov eax, 0xe32408 */
  eax = 0xe32408u;
/* e1d1ac: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d1b1: /* e1d1b1: mov eax, 0xe323f0 */
  eax = 0xe323f0u;
/* e1d1b6: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d1bb: /* e1d1bb: mov eax, 0xe323dc */
  eax = 0xe323dcu;
/* e1d1c0: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d1c5: /* e1d1c5: mov eax, 0xe323c8 */
  eax = 0xe323c8u;
/* e1d1ca: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d1cf: /* e1d1cf: mov eax, 0xe323b0 */
  eax = 0xe323b0u;
/* e1d1d4: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d1d9: /* e1d1d9: mov eax, 0xe32394 */
  eax = 0xe32394u;
/* e1d1de: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d1e3: /* e1d1e3: mov eax, 0xe32380 */
  eax = 0xe32380u;
/* e1d1e8: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d1ed: /* e1d1ed: mov eax, 0xe3236c */
  eax = 0xe3236cu;
/* e1d1f2: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d1f7: /* e1d1f7: mov eax, 0xe32354 */
  eax = 0xe32354u;
/* e1d1fc: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d201: /* e1d201: mov eax, 0xe32340 */
  eax = 0xe32340u;
/* e1d206: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d20b: /* e1d20b: mov eax, 0xe3232c */
  eax = 0xe3232cu;
/* e1d210: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d215: /* e1d215: mov eax, 0xe32314 */
  eax = 0xe32314u;
/* e1d21a: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d21f: /* e1d21f: mov eax, 0xe322fc */
  eax = 0xe322fcu;
/* e1d224: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d229: /* e1d229: mov eax, 0xe322e4 */
  eax = 0xe322e4u;
/* e1d22e: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d233: /* e1d233: mov eax, 0xe322c8 */
  eax = 0xe322c8u;
/* e1d238: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d23d: /* e1d23d: mov eax, 0xe322b0 */
  eax = 0xe322b0u;
/* e1d242: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d247: /* e1d247: mov eax, 0xe32290 */
  eax = 0xe32290u;
/* e1d24c: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d251: /* e1d251: mov eax, 0xe32278 */
  eax = 0xe32278u;
/* e1d256: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d25b: /* e1d25b: mov eax, 0xe3225c */
  eax = 0xe3225cu;
/* e1d260: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d265: /* e1d265: mov eax, 0xe32244 */
  eax = 0xe32244u;
/* e1d26a: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d26f: /* e1d26f: mov eax, 0xe32228 */
  eax = 0xe32228u;
/* e1d274: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d279: /* e1d279: mov eax, 0xe32210 */
  eax = 0xe32210u;
/* e1d27e: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d283: /* e1d283: mov eax, 0xe321fc */
  eax = 0xe321fcu;
/* e1d288: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d28d: /* e1d28d: mov eax, 0xe321dc */
  eax = 0xe321dcu;
/* e1d292: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d297: /* e1d297: mov eax, 0xe321bc */
  eax = 0xe321bcu;
/* e1d29c: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d2a1: /* e1d2a1: mov eax, 0xe321a0 */
  eax = 0xe321a0u;
/* e1d2a6: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d2ab: /* e1d2ab: mov eax, 0xe32188 */
  eax = 0xe32188u;
/* e1d2b0: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d2b5: /* e1d2b5: mov eax, 0xe32170 */
  eax = 0xe32170u;
/* e1d2ba: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d2bf: /* e1d2bf: mov eax, 0xe32154 */
  eax = 0xe32154u;
/* e1d2c4: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d2c9: /* e1d2c9: mov eax, 0xe32144 */
  eax = 0xe32144u;
/* e1d2ce: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d2d3: /* e1d2d3: mov eax, 0xe3212c */
  eax = 0xe3212cu;
/* e1d2d8: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d2dd: /* e1d2dd: mov eax, 0xe32114 */
  eax = 0xe32114u;
/* e1d2e2: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d2e7: /* e1d2e7: mov eax, 0xe32100 */
  eax = 0xe32100u;
/* e1d2ec: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d2f1: /* e1d2f1: mov eax, 0xe320e8 */
  eax = 0xe320e8u;
/* e1d2f6: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d2fb: /* e1d2fb: mov eax, 0xe320c4 */
  eax = 0xe320c4u;
/* e1d300: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d305: /* e1d305: mov eax, 0xe320ac */
  eax = 0xe320acu;
/* e1d30a: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d30f: /* e1d30f: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e1d312: jg 0xe1d5c1 */
  if ((!zf && sf == of)) goto L_e1d5c1;
L_e1d318: /* e1d318: je 0xe1d5b7 */
  if (zf) goto L_e1d5b7;
L_e1d31e: /* e1d31e: mov ecx, 0x88781219 */
  ecx = 0x88781219u;
/* e1d323: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e1d325: jg 0xe1d4a7 */
  if ((!zf && sf == of)) goto L_e1d4a7;
L_e1d32b: /* e1d32b: je 0xe1d49d */
  if (zf) goto L_e1d49d;
L_e1d331: /* e1d331: add ecx, -0x15 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffebu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e1d334: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e1d336: jg 0xe1d413 */
  if ((!zf && sf == of)) goto L_e1d413;
L_e1d33c: /* e1d33c: je 0xe1d409 */
  if (zf) goto L_e1d409;
L_e1d342: /* e1d342: mov ecx, 0x88781185 */
  ecx = 0x88781185u;
/* e1d347: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e1d349: jg 0xe1d3b0 */
  if ((!zf && sf == of)) goto L_e1d3b0;
L_e1d34b: /* e1d34b: je 0xe1d3a6 */
  if (zf) goto L_e1d3a6;
L_e1d34d: /* e1d34d: cmp eax, 0x88781180 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x88781180u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1d352: je 0xe1d39c */
  if (zf) goto L_e1d39c;
L_e1d354: /* e1d354: cmp eax, 0x88781181 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x88781181u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1d359: je 0xe1d392 */
  if (zf) goto L_e1d392;
L_e1d35b: /* e1d35b: cmp eax, 0x88781182 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x88781182u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1d360: je 0xe1d388 */
  if (zf) goto L_e1d388;
L_e1d362: /* e1d362: cmp eax, 0x88781183 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x88781183u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1d367: je 0xe1d37e */
  if (zf) goto L_e1d37e;
L_e1d369: /* e1d369: cmp eax, 0x88781184 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x88781184u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1d36e: jne 0xe1d89d */
  if (!zf) goto L_e1d89d;
L_e1d374: /* e1d374: mov eax, 0xe32090 */
  eax = 0xe32090u;
/* e1d379: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d37e: /* e1d37e: mov eax, 0xe3206c */
  eax = 0xe3206cu;
/* e1d383: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d388: /* e1d388: mov eax, 0xe32050 */
  eax = 0xe32050u;
/* e1d38d: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d392: /* e1d392: mov eax, 0xe32038 */
  eax = 0xe32038u;
/* e1d397: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d39c: /* e1d39c: mov eax, 0xe32020 */
  eax = 0xe32020u;
/* e1d3a1: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d3a6: /* e1d3a6: mov eax, 0xe32000 */
  eax = 0xe32000u;
/* e1d3ab: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d3b0: /* e1d3b0: cmp eax, 0x88781186 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x88781186u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1d3b5: je 0xe1d3ff */
  if (zf) goto L_e1d3ff;
L_e1d3b7: /* e1d3b7: cmp eax, 0x88781200 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x88781200u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1d3bc: je 0xe1d3f5 */
  if (zf) goto L_e1d3f5;
L_e1d3be: /* e1d3be: cmp eax, 0x88781201 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x88781201u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1d3c3: je 0xe1d3eb */
  if (zf) goto L_e1d3eb;
L_e1d3c5: /* e1d3c5: cmp eax, 0x88781202 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x88781202u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1d3ca: je 0xe1d3e1 */
  if (zf) goto L_e1d3e1;
L_e1d3cc: /* e1d3cc: cmp eax, 0x88781203 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x88781203u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1d3d1: jne 0xe1d89d */
  if (!zf) goto L_e1d89d;
L_e1d3d7: /* e1d3d7: mov eax, 0xe31fe4 */
  eax = 0xe31fe4u;
/* e1d3dc: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d3e1: /* e1d3e1: mov eax, 0xe31fd0 */
  eax = 0xe31fd0u;
/* e1d3e6: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d3eb: /* e1d3eb: mov eax, 0xe31fb8 */
  eax = 0xe31fb8u;
/* e1d3f0: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d3f5: /* e1d3f5: mov eax, 0xe31fa4 */
  eax = 0xe31fa4u;
/* e1d3fa: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d3ff: /* e1d3ff: mov eax, 0xe31f88 */
  eax = 0xe31f88u;
/* e1d404: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d409: /* e1d409: mov eax, 0xe31f74 */
  eax = 0xe31f74u;
/* e1d40e: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d413: /* e1d413: add eax, 0x7787edfb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7787edfbu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e1d418: cmp eax, 0x13 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x13u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e1d41b: ja 0xe1d89d */
  if ((!cf && !zf)) goto L_e1d89d;
L_e1d421: /* e1d421: movzx eax, byte ptr [eax + 0xe1def2] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0xe1def2u)));
/* e1d428: jmp dword ptr [eax*4 + 0xe1dec2] */
  switch (R32((uint32_t)(eax*4 + 0xe1dec2u))) {
    case 0xe1d42fu: goto L_e1d42f;
    case 0xe1d439u: goto L_e1d439;
    case 0xe1d443u: goto L_e1d443;
    case 0xe1d44du: goto L_e1d44d;
    case 0xe1d457u: goto L_e1d457;
    case 0xe1d461u: goto L_e1d461;
    case 0xe1d46bu: goto L_e1d46b;
    case 0xe1d475u: goto L_e1d475;
    case 0xe1d47fu: goto L_e1d47f;
    case 0xe1d489u: goto L_e1d489;
    case 0xe1d493u: goto L_e1d493;
    case 0xe1d89du: goto L_e1d89d;
    default: guest_badjump(0xe1d428, R32((uint32_t)(eax*4 + 0xe1dec2u))); return;
  }
L_e1d42f: /* e1d42f: mov eax, 0xe31f60 */
  eax = 0xe31f60u;
/* e1d434: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d439: /* e1d439: mov eax, 0xe31f48 */
  eax = 0xe31f48u;
/* e1d43e: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d443: /* e1d443: mov eax, 0xe31f30 */
  eax = 0xe31f30u;
/* e1d448: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d44d: /* e1d44d: mov eax, 0xe31f14 */
  eax = 0xe31f14u;
/* e1d452: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d457: /* e1d457: mov eax, 0xe31f00 */
  eax = 0xe31f00u;
/* e1d45c: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d461: /* e1d461: mov eax, 0xe31edc */
  eax = 0xe31edcu;
/* e1d466: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d46b: /* e1d46b: mov eax, 0xe31eb8 */
  eax = 0xe31eb8u;
/* e1d470: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d475: /* e1d475: mov eax, 0xe31e98 */
  eax = 0xe31e98u;
/* e1d47a: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d47f: /* e1d47f: mov eax, 0xe31e78 */
  eax = 0xe31e78u;
/* e1d484: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d489: /* e1d489: mov eax, 0xe31e58 */
  eax = 0xe31e58u;
/* e1d48e: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d493: /* e1d493: mov eax, 0xe31e3c */
  eax = 0xe31e3cu;
/* e1d498: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d49d: /* e1d49d: mov eax, 0xe31e20 */
  eax = 0xe31e20u;
/* e1d4a2: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d4a7: /* e1d4a7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e1d4a9: jg 0xe1d5a6 */
  if ((!zf && sf == of)) goto L_e1d5a6;
L_e1d4af: /* e1d4af: je 0xe1d59c */
  if (zf) goto L_e1d59c;
L_e1d4b5: /* e1d4b5: add eax, 0x7787ede6 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7787ede6u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e1d4ba: cmp eax, 0x15 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x15u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e1d4bd: ja 0xe1d89d */
  if ((!cf && !zf)) goto L_e1d89d;
L_e1d4c3: /* e1d4c3: jmp dword ptr [eax*4 + 0xe1df06] */
  switch (R32((uint32_t)(eax*4 + 0xe1df06u))) {
    case 0xe1d4cau: goto L_e1d4ca;
    case 0xe1d4d4u: goto L_e1d4d4;
    case 0xe1d4deu: goto L_e1d4de;
    case 0xe1d4e8u: goto L_e1d4e8;
    case 0xe1d4f2u: goto L_e1d4f2;
    case 0xe1d4fcu: goto L_e1d4fc;
    case 0xe1d506u: goto L_e1d506;
    case 0xe1d510u: goto L_e1d510;
    case 0xe1d51au: goto L_e1d51a;
    case 0xe1d524u: goto L_e1d524;
    case 0xe1d52eu: goto L_e1d52e;
    case 0xe1d538u: goto L_e1d538;
    case 0xe1d542u: goto L_e1d542;
    case 0xe1d54cu: goto L_e1d54c;
    case 0xe1d556u: goto L_e1d556;
    case 0xe1d560u: goto L_e1d560;
    case 0xe1d56au: goto L_e1d56a;
    case 0xe1d574u: goto L_e1d574;
    case 0xe1d57eu: goto L_e1d57e;
    case 0xe1d588u: goto L_e1d588;
    case 0xe1d592u: goto L_e1d592;
    case 0xe1d89du: goto L_e1d89d;
    default: guest_badjump(0xe1d4c3, R32((uint32_t)(eax*4 + 0xe1df06u))); return;
  }
L_e1d4ca: /* e1d4ca: mov eax, 0xe31dfc */
  eax = 0xe31dfcu;
/* e1d4cf: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d4d4: /* e1d4d4: mov eax, 0xe31ddc */
  eax = 0xe31ddcu;
/* e1d4d9: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d4de: /* e1d4de: mov eax, 0xe31dbc */
  eax = 0xe31dbcu;
/* e1d4e3: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d4e8: /* e1d4e8: mov eax, 0xe31d9c */
  eax = 0xe31d9cu;
/* e1d4ed: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d4f2: /* e1d4f2: mov eax, 0xe31d78 */
  eax = 0xe31d78u;
/* e1d4f7: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d4fc: /* e1d4fc: mov eax, 0xe31d54 */
  eax = 0xe31d54u;
/* e1d501: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d506: /* e1d506: mov eax, 0xe31d38 */
  eax = 0xe31d38u;
/* e1d50b: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d510: /* e1d510: mov eax, 0xe31d14 */
  eax = 0xe31d14u;
/* e1d515: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d51a: /* e1d51a: mov eax, 0xe31cf0 */
  eax = 0xe31cf0u;
/* e1d51f: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d524: /* e1d524: mov eax, 0xe31ccc */
  eax = 0xe31cccu;
/* e1d529: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d52e: /* e1d52e: mov eax, 0xe31ca4 */
  eax = 0xe31ca4u;
/* e1d533: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d538: /* e1d538: mov eax, 0xe31c88 */
  eax = 0xe31c88u;
/* e1d53d: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d542: /* e1d542: mov eax, 0xe31c6c */
  eax = 0xe31c6cu;
/* e1d547: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d54c: /* e1d54c: mov eax, 0xe31c50 */
  eax = 0xe31c50u;
/* e1d551: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d556: /* e1d556: mov eax, 0xe31c34 */
  eax = 0xe31c34u;
/* e1d55b: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d560: /* e1d560: mov eax, 0xe31c18 */
  eax = 0xe31c18u;
/* e1d565: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d56a: /* e1d56a: mov eax, 0xe31c00 */
  eax = 0xe31c00u;
/* e1d56f: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d574: /* e1d574: mov eax, 0xe31bec */
  eax = 0xe31becu;
/* e1d579: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d57e: /* e1d57e: mov eax, 0xe31bd8 */
  eax = 0xe31bd8u;
/* e1d583: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d588: /* e1d588: mov eax, 0xe31bb4 */
  eax = 0xe31bb4u;
/* e1d58d: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d592: /* e1d592: mov eax, 0xe31b94 */
  eax = 0xe31b94u;
/* e1d597: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d59c: /* e1d59c: mov eax, 0xe31b8c */
  eax = 0xe31b8cu;
/* e1d5a1: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d5a6: /* e1d5a6: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* e1d5a7: jne 0xe1d89d */
  if (!zf) goto L_e1d89d;
L_e1d5ad: /* e1d5ad: mov eax, 0xe31b84 */
  eax = 0xe31b84u;
/* e1d5b2: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d5b7: /* e1d5b7: mov eax, 0xe31b6c */
  eax = 0xe31b6cu;
/* e1d5bc: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d5c1: /* e1d5c1: mov ecx, 0x40103 */
  ecx = 0x40103u;
/* e1d5c6: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e1d5c8: jg 0xe1d665 */
  if ((!zf && sf == of)) goto L_e1d665;
L_e1d5ce: /* e1d5ce: je 0xe1d65b */
  if (zf) goto L_e1d65b;
L_e1d5d4: /* e1d5d4: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e1d5d7: jg 0xe1d61f */
  if ((!zf && sf == of)) goto L_e1d61f;
L_e1d5d9: /* e1d5d9: je 0xe1d615 */
  if (zf) goto L_e1d615;
L_e1d5db: /* e1d5db: sub eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* e1d5de: je 0xe1d60b */
  if (zf) goto L_e1d60b;
L_e1d5e0: /* e1d5e0: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* e1d5e1: je 0xe1d601 */
  if (zf) goto L_e1d601;
L_e1d5e3: /* e1d5e3: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* e1d5e4: je 0xe1d5f7 */
  if (zf) goto L_e1d5f7;
L_e1d5e6: /* e1d5e6: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* e1d5e7: jne 0xe1d89d */
  if (!zf) goto L_e1d89d;
L_e1d5ed: /* e1d5ed: mov eax, 0xe31b54 */
  eax = 0xe31b54u;
/* e1d5f2: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d5f7: /* e1d5f7: mov eax, 0xe31b40 */
  eax = 0xe31b40u;
/* e1d5fc: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d601: /* e1d601: mov eax, 0xe31b24 */
  eax = 0xe31b24u;
/* e1d606: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d60b: /* e1d60b: mov eax, 0xe31b0c */
  eax = 0xe31b0cu;
/* e1d610: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d615: /* e1d615: mov eax, 0xe31af4 */
  eax = 0xe31af4u;
/* e1d61a: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d61f: /* e1d61f: sub eax, 9 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x9u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* e1d622: je 0xe1d651 */
  if (zf) goto L_e1d651;
L_e1d624: /* e1d624: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* e1d625: je 0xe1d647 */
  if (zf) goto L_e1d647;
L_e1d627: /* e1d627: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* e1d628: je 0xe1d63d */
  if (zf) goto L_e1d63d;
L_e1d62a: /* e1d62a: sub eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* e1d62d: jne 0xe1d89d */
  if (!zf) goto L_e1d89d;
L_e1d633: /* e1d633: mov eax, 0xe31ae0 */
  eax = 0xe31ae0u;
/* e1d638: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d63d: /* e1d63d: mov eax, 0xe31acc */
  eax = 0xe31accu;
/* e1d642: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d647: /* e1d647: mov eax, 0xe31ab4 */
  eax = 0xe31ab4u;
/* e1d64c: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d651: /* e1d651: mov eax, 0xe31aa0 */
  eax = 0xe31aa0u;
/* e1d656: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d65b: /* e1d65b: mov eax, 0xe31a8c */
  eax = 0xe31a8cu;
/* e1d660: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d665: /* e1d665: mov ecx, 0x4028d */
  ecx = 0x4028du;
/* e1d66a: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e1d66c: jg 0xe1d7bb */
  if ((!zf && sf == of)) goto L_e1d7bb;
L_e1d672: /* e1d672: je 0xe1d7b1 */
  if (zf) goto L_e1d7b1;
L_e1d678: /* e1d678: add ecx, -0x33 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffcdu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e1d67b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e1d67d: jg 0xe1d72a */
  if ((!zf && sf == of)) goto L_e1d72a;
L_e1d683: /* e1d683: je 0xe1d720 */
  if (zf) goto L_e1d720;
L_e1d689: /* e1d689: mov ecx, 0x40246 */
  ecx = 0x40246u;
/* e1d68e: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e1d690: jg 0xe1d6e0 */
  if ((!zf && sf == of)) goto L_e1d6e0;
L_e1d692: /* e1d692: je 0xe1d6d6 */
  if (zf) goto L_e1d6d6;
L_e1d694: /* e1d694: sub eax, 0x4022d */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4022du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* e1d699: je 0xe1d6cc */
  if (zf) goto L_e1d6cc;
L_e1d69b: /* e1d69b: sub eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* e1d69e: je 0xe1d6c2 */
  if (zf) goto L_e1d6c2;
L_e1d6a0: /* e1d6a0: sub eax, 0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* e1d6a3: je 0xe1d6b8 */
  if (zf) goto L_e1d6b8;
L_e1d6a5: /* e1d6a5: sub eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* e1d6a8: jne 0xe1d89d */
  if (!zf) goto L_e1d89d;
L_e1d6ae: /* e1d6ae: mov eax, 0xe31a74 */
  eax = 0xe31a74u;
/* e1d6b3: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d6b8: /* e1d6b8: mov eax, 0xe31a5c */
  eax = 0xe31a5cu;
/* e1d6bd: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d6c2: /* e1d6c2: mov eax, 0xe31a40 */
  eax = 0xe31a40u;
/* e1d6c7: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d6cc: /* e1d6cc: mov eax, 0xe31a28 */
  eax = 0xe31a28u;
/* e1d6d1: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d6d6: /* e1d6d6: mov eax, 0xe31a0c */
  eax = 0xe31a0cu;
/* e1d6db: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d6e0: /* e1d6e0: sub eax, 0x40250 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40250u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* e1d6e5: je 0xe1d716 */
  if (zf) goto L_e1d716;
L_e1d6e7: /* e1d6e7: sub eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* e1d6ea: je 0xe1d70c */
  if (zf) goto L_e1d70c;
L_e1d6ec: /* e1d6ec: sub eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* e1d6ef: je 0xe1d702 */
  if (zf) goto L_e1d702;
L_e1d6f1: /* e1d6f1: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* e1d6f2: jne 0xe1d89d */
  if (!zf) goto L_e1d89d;
L_e1d6f8: /* e1d6f8: mov eax, 0xe319f0 */
  eax = 0xe319f0u;
/* e1d6fd: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d702: /* e1d702: mov eax, 0xe319d4 */
  eax = 0xe319d4u;
/* e1d707: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d70c: /* e1d70c: mov eax, 0xe319b8 */
  eax = 0xe319b8u;
/* e1d711: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d716: /* e1d716: mov eax, 0xe3199c */
  eax = 0xe3199cu;
/* e1d71b: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d720: /* e1d720: mov eax, 0xe31990 */
  eax = 0xe31990u;
/* e1d725: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d72a: /* e1d72a: mov ecx, 0x40270 */
  ecx = 0x40270u;
/* e1d72f: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e1d731: jg 0xe1d77f */
  if ((!zf && sf == of)) goto L_e1d77f;
L_e1d733: /* e1d733: je 0xe1d775 */
  if (zf) goto L_e1d775;
L_e1d735: /* e1d735: sub eax, 0x40260 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40260u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* e1d73a: je 0xe1d76b */
  if (zf) goto L_e1d76b;
L_e1d73c: /* e1d73c: sub eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* e1d73f: je 0xe1d761 */
  if (zf) goto L_e1d761;
L_e1d741: /* e1d741: sub eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* e1d744: je 0xe1d757 */
  if (zf) goto L_e1d757;
L_e1d746: /* e1d746: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* e1d747: jne 0xe1d89d */
  if (!zf) goto L_e1d89d;
L_e1d74d: /* e1d74d: mov eax, 0xe31980 */
  eax = 0xe31980u;
/* e1d752: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d757: /* e1d757: mov eax, 0xe3196c */
  eax = 0xe3196cu;
/* e1d75c: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d761: /* e1d761: mov eax, 0xe3195c */
  eax = 0xe3195cu;
/* e1d766: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d76b: /* e1d76b: mov eax, 0xe3194c */
  eax = 0xe3194cu;
/* e1d770: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d775: /* e1d775: mov eax, 0xe31938 */
  eax = 0xe31938u;
/* e1d77a: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d77f: /* e1d77f: sub eax, 0x4027e */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4027eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* e1d784: je 0xe1d7a7 */
  if (zf) goto L_e1d7a7;
L_e1d786: /* e1d786: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* e1d787: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* e1d788: je 0xe1d79d */
  if (zf) goto L_e1d79d;
L_e1d78a: /* e1d78a: sub eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* e1d78d: jne 0xe1d89d */
  if (!zf) goto L_e1d89d;
L_e1d793: /* e1d793: mov eax, 0xe3190c */
  eax = 0xe3190cu;
/* e1d798: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d79d: /* e1d79d: mov eax, 0xe318ec */
  eax = 0xe318ecu;
/* e1d7a2: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d7a7: /* e1d7a7: mov eax, 0xe318d8 */
  eax = 0xe318d8u;
/* e1d7ac: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d7b1: /* e1d7b1: mov eax, 0xe318c0 */
  eax = 0xe318c0u;
/* e1d7b6: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d7bb: /* e1d7bb: mov ecx, 0x8781201 */
  ecx = 0x8781201u;
/* e1d7c0: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e1d7c2: jg 0xe1d850 */
  if ((!zf && sf == of)) goto L_e1d850;
L_e1d7c8: /* e1d7c8: je 0xe1d849 */
  if (zf) goto L_e1d849;
L_e1d7ca: /* e1d7ca: mov ecx, 0x8780014 */
  ecx = 0x8780014u;
/* e1d7cf: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e1d7d1: jg 0xe1d823 */
  if ((!zf && sf == of)) goto L_e1d823;
L_e1d7d3: /* e1d7d3: je 0xe1d819 */
  if (zf) goto L_e1d819;
L_e1d7d5: /* e1d7d5: sub eax, 0x150005 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x150005u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* e1d7da: je 0xe1d80f */
  if (zf) goto L_e1d80f;
L_e1d7dc: /* e1d7dc: sub eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* e1d7df: je 0xe1d805 */
  if (zf) goto L_e1d805;
L_e1d7e1: /* e1d7e1: sub eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* e1d7e4: je 0xe1d7fb */
  if (zf) goto L_e1d7fb;
L_e1d7e6: /* e1d7e6: sub eax, 0x862fffa */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x862fffau);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* e1d7eb: jne 0xe1d89d */
  if (!zf) goto L_e1d89d;
L_e1d7f1: /* e1d7f1: mov eax, 0xe318a8 */
  eax = 0xe318a8u;
/* e1d7f6: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d7fb: /* e1d7fb: mov eax, 0xe3189c */
  eax = 0xe3189cu;
/* e1d800: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d805: /* e1d805: mov eax, 0xe3188c */
  eax = 0xe3188cu;
/* e1d80a: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d80f: /* e1d80f: mov eax, 0xe3187c */
  eax = 0xe3187cu;
/* e1d814: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d819: /* e1d819: mov eax, 0xe3186c */
  eax = 0xe3186cu;
/* e1d81e: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d823: /* e1d823: sub eax, 0x8781091 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8781091u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* e1d828: je 0xe1d842 */
  if (zf) goto L_e1d842;
L_e1d82a: /* e1d82a: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* e1d82b: je 0xe1d83b */
  if (zf) goto L_e1d83b;
L_e1d82d: /* e1d82d: sub eax, 0x16e */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x16eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* e1d832: jne 0xe1d89d */
  if (!zf) goto L_e1d89d;
L_e1d834: /* e1d834: mov eax, 0xe3185c */
  eax = 0xe3185cu;
/* e1d839: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d83b: /* e1d83b: mov eax, 0xe31844 */
  eax = 0xe31844u;
/* e1d840: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d842: /* e1d842: mov eax, 0xe31830 */
  eax = 0xe31830u;
/* e1d847: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d849: /* e1d849: mov eax, 0xe31824 */
  eax = 0xe31824u;
/* e1d84e: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d850: /* e1d850: mov ecx, 0x8781213 */
  ecx = 0x8781213u;
/* e1d855: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e1d857: jg 0xe1d890 */
  if ((!zf && sf == of)) goto L_e1d890;
L_e1d859: /* e1d859: je 0xe1d889 */
  if (zf) goto L_e1d889;
L_e1d85b: /* e1d85b: sub eax, 0x8781202 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8781202u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* e1d860: je 0xe1d882 */
  if (zf) goto L_e1d882;
L_e1d862: /* e1d862: sub eax, 0xe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xeu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* e1d865: je 0xe1d87b */
  if (zf) goto L_e1d87b;
L_e1d867: /* e1d867: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* e1d868: je 0xe1d874 */
  if (zf) goto L_e1d874;
L_e1d86a: /* e1d86a: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* e1d86b: jne 0xe1d89d */
  if (!zf) goto L_e1d89d;
L_e1d86d: /* e1d86d: mov eax, 0xe31810 */
  eax = 0xe31810u;
/* e1d872: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d874: /* e1d874: mov eax, 0xe317fc */
  eax = 0xe317fcu;
/* e1d879: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d87b: /* e1d87b: mov eax, 0xe317e4 */
  eax = 0xe317e4u;
/* e1d880: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d882: /* e1d882: mov eax, 0xe317d8 */
  eax = 0xe317d8u;
/* e1d887: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d889: /* e1d889: mov eax, 0xe317c4 */
  eax = 0xe317c4u;
/* e1d88e: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d890: /* e1d890: sub eax, 0x8781214 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8781214u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* e1d895: je 0xe1d8b2 */
  if (zf) goto L_e1d8b2;
L_e1d897: /* e1d897: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* e1d898: je 0xe1d8ab */
  if (zf) goto L_e1d8ab;
L_e1d89a: /* e1d89a: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* e1d89b: je 0xe1d8a4 */
  if (zf) goto L_e1d8a4;
L_e1d89d: /* e1d89d: mov eax, 0xe317bc */
  eax = 0xe317bcu;
/* e1d8a2: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d8a4: /* e1d8a4: mov eax, 0xe317a0 */
  eax = 0xe317a0u;
/* e1d8a9: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d8ab: /* e1d8ab: mov eax, 0xe31788 */
  eax = 0xe31788u;
/* e1d8b0: jmp 0xe1d8b7 */
  goto L_e1d8b7;
L_e1d8b2: /* e1d8b2: mov eax, 0xe31774 */
  eax = 0xe31774u;
L_e1d8b7: /* e1d8b7: ret 4 */
  esp += 8; SPILL(); return;
}
