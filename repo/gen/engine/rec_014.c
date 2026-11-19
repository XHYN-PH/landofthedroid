#include "recomp.h"
#include "rec_mod.h"

void f_72c4a0(void) {
  LOAD_REGS();
L_72c4a0: /* 72c4a0: jmp 0x6c33f0 */
  SPILL(); f_6c33f0(); return;
}

void f_72c4c0(void) {
  LOAD_REGS();
L_72c4c0: /* 72c4c0: jmp 0x6c8e5e */
  SPILL(); f_6c8e5e(); return;
}

void f_72c4e0(void) {
  LOAD_REGS();
L_72c4e0: /* 72c4e0: jmp 0x6ccc5c */
  SPILL(); f_6ccc5c(); return;
}

void f_72c500(void) {
  LOAD_REGS();
L_72c500: /* 72c500: jmp 0x6c6a2d */
  SPILL(); f_6c6a2d(); return;
}

void f_72c520(void) {
  LOAD_REGS();
L_72c520: /* 72c520: jmp 0x6c946c */
  SPILL(); f_6c946c(); return;
}

void f_72c540(void) {
  LOAD_REGS();
L_72c540: /* 72c540: jmp 0x6c2ed2 */
  SPILL(); f_6c2ed2(); return;
}

void f_72c560(void) {
  LOAD_REGS();
L_72c560: /* 72c560: jmp 0x6c459d */
  SPILL(); f_6c459d(); return;
}

void f_72c580(void) {
  LOAD_REGS();
L_72c580: /* 72c580: jmp 0x6c9b5b */
  SPILL(); f_6c9b5b(); return;
}

void f_72c5a0(void) {
  LOAD_REGS();
L_72c5a0: /* 72c5a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 72c5a4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72c5a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72c5a6: mov esi, ecx */
  esi = ecx;
/* 72c5a8: call 0x6c58c6 */
  esp -= 4; W32(esp, 0x72c5adu); SPILL(); f_6c58c6(); if (g_unwind) return; RELOAD();
/* 72c5ad: mov eax, esi */
  eax = esi;
/* 72c5af: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72c5b0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72c5d0(void) {
  LOAD_REGS();
L_72c5d0: /* 72c5d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 72c5d4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72c5d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72c5d6: mov esi, ecx */
  esi = ecx;
/* 72c5d8: call 0x6ca39e */
  esp -= 4; W32(esp, 0x72c5ddu); SPILL(); f_6ca39e(); if (g_unwind) return; RELOAD();
/* 72c5dd: mov eax, esi */
  eax = esi;
/* 72c5df: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72c5e0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72c600(void) {
  LOAD_REGS();
L_72c600: /* 72c600: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 72c604: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72c605: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72c606: mov esi, ecx */
  esi = ecx;
/* 72c608: call 0x6c5cc2 */
  esp -= 4; W32(esp, 0x72c60du); SPILL(); f_6c5cc2(); if (g_unwind) return; RELOAD();
/* 72c60d: mov eax, esi */
  eax = esi;
/* 72c60f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72c610: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72c630(void) {
  LOAD_REGS();
L_72c630: /* 72c630: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 72c634: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72c635: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72c636: mov esi, ecx */
  esi = ecx;
/* 72c638: call 0x6c2dc4 */
  esp -= 4; W32(esp, 0x72c63du); SPILL(); f_6c2dc4(); if (g_unwind) return; RELOAD();
/* 72c63d: mov eax, esi */
  eax = esi;
/* 72c63f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72c640: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72c660(void) {
  LOAD_REGS();
L_72c660: /* 72c660: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 72c664: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72c665: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72c666: mov esi, ecx */
  esi = ecx;
/* 72c668: call 0x6c1b9f */
  esp -= 4; W32(esp, 0x72c66du); SPILL(); f_6c1b9f(); if (g_unwind) return; RELOAD();
/* 72c66d: mov eax, esi */
  eax = esi;
/* 72c66f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72c670: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72c690(void) {
  LOAD_REGS();
L_72c690: /* 72c690: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 72c694: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72c695: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72c696: mov esi, ecx */
  esi = ecx;
/* 72c698: call 0x6c85e4 */
  esp -= 4; W32(esp, 0x72c69du); SPILL(); f_6c85e4(); if (g_unwind) return; RELOAD();
/* 72c69d: mov eax, esi */
  eax = esi;
/* 72c69f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72c6a0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72c6c0(void) {
  LOAD_REGS();
L_72c6c0: /* 72c6c0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 72c6c4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72c6c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72c6c6: mov esi, ecx */
  esi = ecx;
/* 72c6c8: call 0x6c9b6a */
  esp -= 4; W32(esp, 0x72c6cdu); SPILL(); f_6c9b6a(); if (g_unwind) return; RELOAD();
/* 72c6cd: mov eax, esi */
  eax = esi;
/* 72c6cf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72c6d0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72c6f0(void) {
  LOAD_REGS();
L_72c6f0: /* 72c6f0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 72c6f4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72c6f5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72c6f6: mov esi, ecx */
  esi = ecx;
/* 72c6f8: call 0x6c1d66 */
  esp -= 4; W32(esp, 0x72c6fdu); SPILL(); f_6c1d66(); if (g_unwind) return; RELOAD();
/* 72c6fd: mov eax, esi */
  eax = esi;
/* 72c6ff: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72c700: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72c720(void) {
  LOAD_REGS();
L_72c720: /* 72c720: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72c721: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72c722: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 72c726: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72c727: mov esi, ecx */
  esi = ecx;
/* 72c729: call 0x6c9e7b */
  esp -= 4; W32(esp, 0x72c72eu); SPILL(); f_6c9e7b(); if (g_unwind) return; RELOAD();
/* 72c72e: mov eax, dword ptr [edi + 0x494] */
  eax = R32((uint32_t)(edi + 0x494u));
/* 72c734: mov dword ptr [esi + 0x494], eax */
  W32((uint32_t)(esi + 0x494u), eax);
/* 72c73a: mov ecx, dword ptr [edi + 0x498] */
  ecx = R32((uint32_t)(edi + 0x498u));
/* 72c740: mov eax, dword ptr [esi + 0x49c] */
  eax = R32((uint32_t)(esi + 0x49cu));
/* 72c746: mov dword ptr [esi + 0x498], ecx */
  W32((uint32_t)(esi + 0x498u), ecx);
/* 72c74c: mov edx, dword ptr [edi + 0x49c] */
  edx = R32((uint32_t)(edi + 0x49cu));
/* 72c752: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 72c754: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 72c757: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 72c759: lea ecx, [edi + 0x4a4] */
  ecx = (uint32_t)(edi + 0x4a4u);
/* 72c75f: mov dword ptr [esi + 0x49c], eax */
  W32((uint32_t)(esi + 0x49cu), eax);
/* 72c765: mov eax, dword ptr [edi + 0x4a0] */
  eax = R32((uint32_t)(edi + 0x4a0u));
/* 72c76b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72c76c: lea ecx, [esi + 0x4a4] */
  ecx = (uint32_t)(esi + 0x4a4u);
/* 72c772: mov dword ptr [esi + 0x4a0], eax */
  W32((uint32_t)(esi + 0x4a0u), eax);
/* 72c778: call 0x6cbfe6 */
  esp -= 4; W32(esp, 0x72c77du); SPILL(); f_6cbfe6(); if (g_unwind) return; RELOAD();
/* 72c77d: lea edx, [edi + 0x4b0] */
  edx = (uint32_t)(edi + 0x4b0u);
/* 72c783: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 72c784: lea ecx, [esi + 0x4b0] */
  ecx = (uint32_t)(esi + 0x4b0u);
/* 72c78a: call 0x6c2d9c */
  esp -= 4; W32(esp, 0x72c78fu); SPILL(); f_6c2d9c(); if (g_unwind) return; RELOAD();
/* 72c78f: mov eax, dword ptr [edi + 0x4bc] */
  eax = R32((uint32_t)(edi + 0x4bcu));
/* 72c795: mov dword ptr [esi + 0x4bc], eax */
  W32((uint32_t)(esi + 0x4bcu), eax);
/* 72c79b: mov ecx, dword ptr [edi + 0x4c0] */
  ecx = R32((uint32_t)(edi + 0x4c0u));
/* 72c7a1: mov dword ptr [esi + 0x4c0], ecx */
  W32((uint32_t)(esi + 0x4c0u), ecx);
/* 72c7a7: mov edx, dword ptr [edi + 0x4c4] */
  edx = R32((uint32_t)(edi + 0x4c4u));
/* 72c7ad: mov dword ptr [esi + 0x4c4], edx */
  W32((uint32_t)(esi + 0x4c4u), edx);
/* 72c7b3: mov eax, dword ptr [edi + 0x4c8] */
  eax = R32((uint32_t)(edi + 0x4c8u));
/* 72c7b9: mov dword ptr [esi + 0x4c8], eax */
  W32((uint32_t)(esi + 0x4c8u), eax);
/* 72c7bf: mov ecx, dword ptr [edi + 0x4cc] */
  ecx = R32((uint32_t)(edi + 0x4ccu));
/* 72c7c5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72c7c6: mov dword ptr [esi + 0x4cc], ecx */
  W32((uint32_t)(esi + 0x4ccu), ecx);
/* 72c7cc: mov eax, esi */
  eax = esi;
/* 72c7ce: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72c7cf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72c810(void) {
  LOAD_REGS();
L_72c810: /* 72c810: jmp 0x6c166d */
  SPILL(); f_6c166d(); return;
}

void f_72c830(void) {
  LOAD_REGS();
L_72c830: /* 72c830: jmp 0x6c53cb */
  SPILL(); f_6c53cb(); return;
}

void f_72c850(void) {
  LOAD_REGS();
L_72c850: /* 72c850: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 72c854: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72c855: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72c856: mov esi, ecx */
  esi = ecx;
/* 72c858: call 0x6c6a3c */
  esp -= 4; W32(esp, 0x72c85du); SPILL(); f_6c6a3c(); if (g_unwind) return; RELOAD();
/* 72c85d: mov eax, esi */
  eax = esi;
/* 72c85f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72c860: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72c880(void) {
  LOAD_REGS();
L_72c880: /* 72c880: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 72c884: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72c885: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72c886: mov esi, ecx */
  esi = ecx;
/* 72c888: call 0x6c16f4 */
  esp -= 4; W32(esp, 0x72c88du); SPILL(); f_6c16f4(); if (g_unwind) return; RELOAD();
/* 72c88d: mov eax, esi */
  eax = esi;
/* 72c88f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72c890: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72c8b0(void) {
  LOAD_REGS();
L_72c8b0: /* 72c8b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72c8b1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72c8b2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 72c8b6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72c8b7: mov esi, ecx */
  esi = ecx;
/* 72c8b9: call 0x6c9e7b */
  esp -= 4; W32(esp, 0x72c8beu); SPILL(); f_6c9e7b(); if (g_unwind) return; RELOAD();
/* 72c8be: mov al, byte ptr [edi + 0x494] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x494u))) & 0xffu);
/* 72c8c4: mov byte ptr [esi + 0x494], al */
  W8((uint32_t)(esi + 0x494u), (eax & 0xffu));
/* 72c8ca: lea ecx, [edi + 0x498] */
  ecx = (uint32_t)(edi + 0x498u);
/* 72c8d0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 72c8d2: lea edx, [esi + 0x498] */
  edx = (uint32_t)(esi + 0x498u);
/* 72c8d8: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 72c8da: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 72c8dd: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 72c8e0: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 72c8e3: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 72c8e6: add edi, 0x4a4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4a4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 72c8ec: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 72c8ee: lea edx, [esi + 0x4a4] */
  edx = (uint32_t)(esi + 0x4a4u);
/* 72c8f4: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 72c8f6: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 72c8f9: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 72c8fc: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 72c8ff: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 72c902: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72c903: mov eax, esi */
  eax = esi;
/* 72c905: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72c906: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72c930(void) {
  LOAD_REGS();
L_72c930: /* 72c930: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72c931: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72c932: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 72c936: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72c937: mov esi, ecx */
  esi = ecx;
/* 72c939: call 0x6c9e7b */
  esp -= 4; W32(esp, 0x72c93eu); SPILL(); f_6c9e7b(); if (g_unwind) return; RELOAD();
/* 72c93e: mov eax, dword ptr [edi + 0x494] */
  eax = R32((uint32_t)(edi + 0x494u));
/* 72c944: mov dword ptr [esi + 0x494], eax */
  W32((uint32_t)(esi + 0x494u), eax);
/* 72c94a: mov ecx, dword ptr [edi + 0x498] */
  ecx = R32((uint32_t)(edi + 0x498u));
/* 72c950: mov dword ptr [esi + 0x498], ecx */
  W32((uint32_t)(esi + 0x498u), ecx);
/* 72c956: mov edx, dword ptr [edi + 0x49c] */
  edx = R32((uint32_t)(edi + 0x49cu));
/* 72c95c: mov dword ptr [esi + 0x49c], edx */
  W32((uint32_t)(esi + 0x49cu), edx);
/* 72c962: mov eax, dword ptr [edi + 0x4a0] */
  eax = R32((uint32_t)(edi + 0x4a0u));
/* 72c968: mov dword ptr [esi + 0x4a0], eax */
  W32((uint32_t)(esi + 0x4a0u), eax);
/* 72c96e: mov ecx, dword ptr [edi + 0x4a4] */
  ecx = R32((uint32_t)(edi + 0x4a4u));
/* 72c974: mov dword ptr [esi + 0x4a4], ecx */
  W32((uint32_t)(esi + 0x4a4u), ecx);
/* 72c97a: mov edx, dword ptr [edi + 0x4a8] */
  edx = R32((uint32_t)(edi + 0x4a8u));
/* 72c980: lea eax, [edi + 0x4ac] */
  eax = (uint32_t)(edi + 0x4acu);
/* 72c986: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72c987: lea ecx, [esi + 0x4ac] */
  ecx = (uint32_t)(esi + 0x4acu);
/* 72c98d: mov dword ptr [esi + 0x4a8], edx */
  W32((uint32_t)(esi + 0x4a8u), edx);
/* 72c993: call 0x6c79b9 */
  esp -= 4; W32(esp, 0x72c998u); SPILL(); f_6c79b9(); if (g_unwind) return; RELOAD();
/* 72c998: mov ecx, dword ptr [edi + 0x4b8] */
  ecx = R32((uint32_t)(edi + 0x4b8u));
/* 72c99e: mov dword ptr [esi + 0x4b8], ecx */
  W32((uint32_t)(esi + 0x4b8u), ecx);
/* 72c9a4: mov edx, dword ptr [edi + 0x4bc] */
  edx = R32((uint32_t)(edi + 0x4bcu));
/* 72c9aa: mov dword ptr [esi + 0x4bc], edx */
  W32((uint32_t)(esi + 0x4bcu), edx);
/* 72c9b0: mov eax, dword ptr [edi + 0x4c0] */
  eax = R32((uint32_t)(edi + 0x4c0u));
/* 72c9b6: mov dword ptr [esi + 0x4c0], eax */
  W32((uint32_t)(esi + 0x4c0u), eax);
/* 72c9bc: mov ecx, dword ptr [edi + 0x4c4] */
  ecx = R32((uint32_t)(edi + 0x4c4u));
/* 72c9c2: mov dword ptr [esi + 0x4c4], ecx */
  W32((uint32_t)(esi + 0x4c4u), ecx);
/* 72c9c8: mov edx, dword ptr [edi + 0x4c8] */
  edx = R32((uint32_t)(edi + 0x4c8u));
/* 72c9ce: mov dword ptr [esi + 0x4c8], edx */
  W32((uint32_t)(esi + 0x4c8u), edx);
/* 72c9d4: mov eax, dword ptr [edi + 0x4cc] */
  eax = R32((uint32_t)(edi + 0x4ccu));
/* 72c9da: mov dword ptr [esi + 0x4cc], eax */
  W32((uint32_t)(esi + 0x4ccu), eax);
/* 72c9e0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72c9e1: mov eax, esi */
  eax = esi;
/* 72c9e3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72c9e4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72ca20(void) {
  LOAD_REGS();
L_72ca20: /* 72ca20: jmp 0x6ccbf3 */
  SPILL(); f_6ccbf3(); return;
}

void f_72ca40(void) {
  LOAD_REGS();
L_72ca40: /* 72ca40: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 72ca44: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72ca45: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72ca46: mov esi, ecx */
  esi = ecx;
/* 72ca48: call 0x6c841d */
  esp -= 4; W32(esp, 0x72ca4du); SPILL(); f_6c841d(); if (g_unwind) return; RELOAD();
/* 72ca4d: mov eax, esi */
  eax = esi;
/* 72ca4f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72ca50: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72ca70(void) {
  LOAD_REGS();
L_72ca70: /* 72ca70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72ca71: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72ca72: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 72ca76: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72ca77: mov esi, ecx */
  esi = ecx;
/* 72ca79: call 0x6c9e7b */
  esp -= 4; W32(esp, 0x72ca7eu); SPILL(); f_6c9e7b(); if (g_unwind) return; RELOAD();
/* 72ca7e: mov eax, dword ptr [edi + 0x494] */
  eax = R32((uint32_t)(edi + 0x494u));
/* 72ca84: mov ecx, dword ptr [esi + 0x498] */
  ecx = R32((uint32_t)(esi + 0x498u));
/* 72ca8a: mov dword ptr [esi + 0x494], eax */
  W32((uint32_t)(esi + 0x494u), eax);
/* 72ca90: xor ecx, dword ptr [edi + 0x498] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x498u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 72ca96: mov eax, dword ptr [esi + 0x498] */
  eax = R32((uint32_t)(esi + 0x498u));
/* 72ca9c: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 72ca9f: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 72caa1: mov dword ptr [esi + 0x498], eax */
  W32((uint32_t)(esi + 0x498u), eax);
/* 72caa7: mov ecx, eax */
  ecx = eax;
/* 72caa9: mov eax, dword ptr [edi + 0x498] */
  eax = R32((uint32_t)(edi + 0x498u));
/* 72caaf: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 72cab1: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 72cab4: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 72cab6: mov dword ptr [esi + 0x498], eax */
  W32((uint32_t)(esi + 0x498u), eax);
/* 72cabc: mov edx, dword ptr [edi + 0x498] */
  edx = R32((uint32_t)(edi + 0x498u));
/* 72cac2: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 72cac4: and edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 72cac7: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 72cac9: mov dword ptr [esi + 0x498], edx */
  W32((uint32_t)(esi + 0x498u), edx);
/* 72cacf: add edi, 0x49c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x49cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 72cad5: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 72cad7: lea eax, [esi + 0x49c] */
  eax = (uint32_t)(esi + 0x49cu);
/* 72cadd: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 72cadf: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 72cae2: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 72cae5: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 72cae8: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 72caeb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72caec: mov eax, esi */
  eax = esi;
/* 72caee: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72caef: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72cb30(void) {
  LOAD_REGS();
L_72cb30: /* 72cb30: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 72cb31: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 72cb32: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 72cb36: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72cb37: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72cb38: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 72cb39: mov ebx, ecx */
  ebx = ecx;
/* 72cb3b: call 0x6c9e7b */
  esp -= 4; W32(esp, 0x72cb40u); SPILL(); f_6c9e7b(); if (g_unwind) return; RELOAD();
/* 72cb40: mov eax, dword ptr [ebp + 0x494] */
  eax = R32((uint32_t)(ebp + 0x494u));
/* 72cb46: mov dword ptr [ebx + 0x494], eax */
  W32((uint32_t)(ebx + 0x494u), eax);
/* 72cb4c: mov ecx, dword ptr [ebp + 0x498] */
  ecx = R32((uint32_t)(ebp + 0x498u));
/* 72cb52: lea edx, [ebp + 0x49c] */
  edx = (uint32_t)(ebp + 0x49cu);
/* 72cb58: mov dword ptr [ebx + 0x498], ecx */
  W32((uint32_t)(ebx + 0x498u), ecx);
/* 72cb5e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 72cb5f: lea ecx, [ebx + 0x49c] */
  ecx = (uint32_t)(ebx + 0x49cu);
/* 72cb65: call 0x6c737e */
  esp -= 4; W32(esp, 0x72cb6au); SPILL(); f_6c737e(); if (g_unwind) return; RELOAD();
/* 72cb6a: mov al, byte ptr [ebp + 0x4a8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x4a8u))) & 0xffu);
/* 72cb70: mov edi, dword ptr [ebx + 0x4b8] */
  edi = R32((uint32_t)(ebx + 0x4b8u));
/* 72cb76: mov byte ptr [ebx + 0x4a8], al */
  W8((uint32_t)(ebx + 0x4a8u), (eax & 0xffu));
/* 72cb7c: mov ecx, dword ptr [ebp + 0x4ac] */
  ecx = R32((uint32_t)(ebp + 0x4acu));
/* 72cb82: mov dword ptr [ebx + 0x4ac], ecx */
  W32((uint32_t)(ebx + 0x4acu), ecx);
/* 72cb88: mov edx, dword ptr [ebp + 0x4b0] */
  edx = R32((uint32_t)(ebp + 0x4b0u));
/* 72cb8e: mov dword ptr [ebx + 0x4b0], edx */
  W32((uint32_t)(ebx + 0x4b0u), edx);
/* 72cb94: mov eax, dword ptr [ebp + 0x4b4] */
  eax = R32((uint32_t)(ebp + 0x4b4u));
/* 72cb9a: mov dword ptr [ebx + 0x4b4], eax */
  W32((uint32_t)(ebx + 0x4b4u), eax);
/* 72cba0: mov ecx, dword ptr [ebp + 0x4b8] */
  ecx = R32((uint32_t)(ebp + 0x4b8u));
/* 72cba6: xor ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 72cba8: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 72cbab: mov edx, edi */
  edx = edi;
/* 72cbad: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 72cbaf: mov dword ptr [ebx + 0x4b8], edx */
  W32((uint32_t)(ebx + 0x4b8u), edx);
/* 72cbb5: lea esi, [ebp + 0x4bc] */
  esi = (uint32_t)(ebp + 0x4bcu);
/* 72cbbb: lea edi, [ebx + 0x4bc] */
  edi = (uint32_t)(ebx + 0x4bcu);
/* 72cbc1: mov ecx, 6 */
  ecx = 0x6u;
/* 72cbc6: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 72cbc8: mov edx, dword ptr [ebp + 0x4d4] */
  edx = R32((uint32_t)(ebp + 0x4d4u));
/* 72cbce: mov dword ptr [ebx + 0x4d4], edx */
  W32((uint32_t)(ebx + 0x4d4u), edx);
/* 72cbd4: lea esi, [ebp + 0x4d8] */
  esi = (uint32_t)(ebp + 0x4d8u);
/* 72cbda: lea edi, [ebx + 0x4d8] */
  edi = (uint32_t)(ebx + 0x4d8u);
/* 72cbe0: mov ecx, 6 */
  ecx = 0x6u;
/* 72cbe5: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 72cbe7: mov eax, dword ptr [ebp + 0x4f0] */
  eax = R32((uint32_t)(ebp + 0x4f0u));
/* 72cbed: lea ecx, [ebp + 0x4f4] */
  ecx = (uint32_t)(ebp + 0x4f4u);
/* 72cbf3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72cbf4: lea ecx, [ebx + 0x4f4] */
  ecx = (uint32_t)(ebx + 0x4f4u);
/* 72cbfa: mov dword ptr [ebx + 0x4f0], eax */
  W32((uint32_t)(ebx + 0x4f0u), eax);
/* 72cc00: call 0x6cb0e1 */
  esp -= 4; W32(esp, 0x72cc05u); SPILL(); f_6cb0e1(); if (g_unwind) return; RELOAD();
/* 72cc05: lea edx, [ebp + 0x500] */
  edx = (uint32_t)(ebp + 0x500u);
/* 72cc0b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 72cc0c: lea ecx, [ebx + 0x500] */
  ecx = (uint32_t)(ebx + 0x500u);
/* 72cc12: call 0x6cb0e1 */
  esp -= 4; W32(esp, 0x72cc17u); SPILL(); f_6cb0e1(); if (g_unwind) return; RELOAD();
/* 72cc17: mov eax, dword ptr [ebp + 0x50c] */
  eax = R32((uint32_t)(ebp + 0x50cu));
/* 72cc1d: mov edx, dword ptr [ebx + 0x514] */
  edx = R32((uint32_t)(ebx + 0x514u));
/* 72cc23: mov dword ptr [ebx + 0x50c], eax */
  W32((uint32_t)(ebx + 0x50cu), eax);
/* 72cc29: mov ecx, dword ptr [ebp + 0x510] */
  ecx = R32((uint32_t)(ebp + 0x510u));
/* 72cc2f: mov eax, dword ptr [ebx + 0x514] */
  eax = R32((uint32_t)(ebx + 0x514u));
/* 72cc35: mov dword ptr [ebx + 0x510], ecx */
  W32((uint32_t)(ebx + 0x510u), ecx);
/* 72cc3b: xor edx, dword ptr [ebp + 0x514] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x514u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 72cc41: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 72cc44: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 72cc46: mov dword ptr [ebx + 0x514], eax */
  W32((uint32_t)(ebx + 0x514u), eax);
/* 72cc4c: mov ecx, eax */
  ecx = eax;
/* 72cc4e: mov eax, dword ptr [ebp + 0x514] */
  eax = R32((uint32_t)(ebp + 0x514u));
/* 72cc54: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 72cc56: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 72cc59: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 72cc5b: mov dword ptr [ebx + 0x514], eax */
  W32((uint32_t)(ebx + 0x514u), eax);
/* 72cc61: mov ecx, dword ptr [ebp + 0x514] */
  ecx = R32((uint32_t)(ebp + 0x514u));
/* 72cc67: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 72cc69: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 72cc6c: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 72cc6e: mov dword ptr [ebx + 0x514], ecx */
  W32((uint32_t)(ebx + 0x514u), ecx);
/* 72cc74: lea esi, [ebp + 0x518] */
  esi = (uint32_t)(ebp + 0x518u);
/* 72cc7a: lea edi, [ebx + 0x518] */
  edi = (uint32_t)(ebx + 0x518u);
/* 72cc80: mov ecx, 6 */
  ecx = 0x6u;
/* 72cc85: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 72cc87: mov edx, dword ptr [ebp + 0x530] */
  edx = R32((uint32_t)(ebp + 0x530u));
/* 72cc8d: mov dword ptr [ebx + 0x530], edx */
  W32((uint32_t)(ebx + 0x530u), edx);
/* 72cc93: mov eax, dword ptr [ebp + 0x534] */
  eax = R32((uint32_t)(ebp + 0x534u));
/* 72cc99: mov dword ptr [ebx + 0x534], eax */
  W32((uint32_t)(ebx + 0x534u), eax);
/* 72cc9f: mov ecx, dword ptr [ebp + 0x538] */
  ecx = R32((uint32_t)(ebp + 0x538u));
/* 72cca5: mov edi, dword ptr [ebx + 0x540] */
  edi = R32((uint32_t)(ebx + 0x540u));
/* 72ccab: mov dword ptr [ebx + 0x538], ecx */
  W32((uint32_t)(ebx + 0x538u), ecx);
/* 72ccb1: mov edx, dword ptr [ebp + 0x53c] */
  edx = R32((uint32_t)(ebp + 0x53cu));
/* 72ccb7: mov dword ptr [ebx + 0x53c], edx */
  W32((uint32_t)(ebx + 0x53cu), edx);
/* 72ccbd: mov eax, dword ptr [ebp + 0x540] */
  eax = R32((uint32_t)(ebp + 0x540u));
/* 72ccc3: xor eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 72ccc5: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 72ccc8: mov edx, edi */
  edx = edi;
/* 72ccca: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 72cccc: mov dword ptr [ebx + 0x540], edx */
  W32((uint32_t)(ebx + 0x540u), edx);
/* 72ccd2: mov ecx, dword ptr [ebp + 0x544] */
  ecx = R32((uint32_t)(ebp + 0x544u));
/* 72ccd8: mov dword ptr [ebx + 0x544], ecx */
  W32((uint32_t)(ebx + 0x544u), ecx);
/* 72ccde: mov edx, dword ptr [ebp + 0x548] */
  edx = R32((uint32_t)(ebp + 0x548u));
/* 72cce4: mov dword ptr [ebx + 0x548], edx */
  W32((uint32_t)(ebx + 0x548u), edx);
/* 72ccea: mov eax, dword ptr [ebp + 0x54c] */
  eax = R32((uint32_t)(ebp + 0x54cu));
/* 72ccf0: mov dword ptr [ebx + 0x54c], eax */
  W32((uint32_t)(ebx + 0x54cu), eax);
/* 72ccf6: mov ecx, dword ptr [ebp + 0x550] */
  ecx = R32((uint32_t)(ebp + 0x550u));
/* 72ccfc: mov dword ptr [ebx + 0x550], ecx */
  W32((uint32_t)(ebx + 0x550u), ecx);
/* 72cd02: mov edx, dword ptr [ebp + 0x554] */
  edx = R32((uint32_t)(ebp + 0x554u));
/* 72cd08: mov dword ptr [ebx + 0x554], edx */
  W32((uint32_t)(ebx + 0x554u), edx);
/* 72cd0e: mov eax, dword ptr [ebp + 0x558] */
  eax = R32((uint32_t)(ebp + 0x558u));
/* 72cd14: mov dword ptr [ebx + 0x558], eax */
  W32((uint32_t)(ebx + 0x558u), eax);
/* 72cd1a: mov ecx, dword ptr [ebp + 0x55c] */
  ecx = R32((uint32_t)(ebp + 0x55cu));
/* 72cd20: mov dword ptr [ebx + 0x55c], ecx */
  W32((uint32_t)(ebx + 0x55cu), ecx);
/* 72cd26: mov edx, dword ptr [ebp + 0x560] */
  edx = R32((uint32_t)(ebp + 0x560u));
/* 72cd2c: mov ecx, dword ptr [ebx + 0x560] */
  ecx = R32((uint32_t)(ebx + 0x560u));
/* 72cd32: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 72cd34: mov edi, ecx */
  edi = ecx;
/* 72cd36: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 72cd39: xor edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 72cd3b: mov dword ptr [ebx + 0x560], edi */
  W32((uint32_t)(ebx + 0x560u), edi);
/* 72cd41: mov eax, dword ptr [ebp + 0x564] */
  eax = R32((uint32_t)(ebp + 0x564u));
/* 72cd47: mov dword ptr [ebx + 0x564], eax */
  W32((uint32_t)(ebx + 0x564u), eax);
/* 72cd4d: mov ecx, dword ptr [ebp + 0x568] */
  ecx = R32((uint32_t)(ebp + 0x568u));
/* 72cd53: mov dword ptr [ebx + 0x568], ecx */
  W32((uint32_t)(ebx + 0x568u), ecx);
/* 72cd59: mov edx, dword ptr [ebp + 0x56c] */
  edx = R32((uint32_t)(ebp + 0x56cu));
/* 72cd5f: mov dword ptr [ebx + 0x56c], edx */
  W32((uint32_t)(ebx + 0x56cu), edx);
/* 72cd65: mov eax, dword ptr [ebp + 0x570] */
  eax = R32((uint32_t)(ebp + 0x570u));
/* 72cd6b: mov dword ptr [ebx + 0x570], eax */
  W32((uint32_t)(ebx + 0x570u), eax);
/* 72cd71: mov ecx, dword ptr [ebp + 0x574] */
  ecx = R32((uint32_t)(ebp + 0x574u));
/* 72cd77: lea edx, [ebp + 0x578] */
  edx = (uint32_t)(ebp + 0x578u);
/* 72cd7d: mov dword ptr [ebx + 0x574], ecx */
  W32((uint32_t)(ebx + 0x574u), ecx);
/* 72cd83: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 72cd84: lea ecx, [ebx + 0x578] */
  ecx = (uint32_t)(ebx + 0x578u);
/* 72cd8a: call 0x6cbcad */
  esp -= 4; W32(esp, 0x72cd8fu); SPILL(); f_6cbcad(); if (g_unwind) return; RELOAD();
/* 72cd8f: lea eax, [ebp + 0x584] */
  eax = (uint32_t)(ebp + 0x584u);
/* 72cd95: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72cd96: lea ecx, [ebx + 0x584] */
  ecx = (uint32_t)(ebx + 0x584u);
/* 72cd9c: call 0x6ca3a3 */
  esp -= 4; W32(esp, 0x72cda1u); SPILL(); f_6ca3a3(); if (g_unwind) return; RELOAD();
/* 72cda1: lea ecx, [ebp + 0x590] */
  ecx = (uint32_t)(ebp + 0x590u);
/* 72cda7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72cda8: lea ecx, [ebx + 0x590] */
  ecx = (uint32_t)(ebx + 0x590u);
/* 72cdae: call 0x6c49d0 */
  esp -= 4; W32(esp, 0x72cdb3u); SPILL(); f_6c49d0(); if (g_unwind) return; RELOAD();
/* 72cdb3: mov edx, dword ptr [ebp + 0x59c] */
  edx = R32((uint32_t)(ebp + 0x59cu));
/* 72cdb9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72cdba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72cdbb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 72cdbc: mov dword ptr [ebx + 0x59c], edx */
  W32((uint32_t)(ebx + 0x59cu), edx);
/* 72cdc2: mov eax, ebx */
  eax = ebx;
/* 72cdc4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 72cdc5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72ce80(void) {
  LOAD_REGS();
L_72ce80: /* 72ce80: jmp 0x6ca0ab */
  SPILL(); f_6ca0ab(); return;
}

void f_72cea0(void) {
  LOAD_REGS();
L_72cea0: /* 72cea0: jmp 0x6c98f4 */
  SPILL(); f_6c98f4(); return;
}

void f_72cec0(void) {
  LOAD_REGS();
L_72cec0: /* 72cec0: jmp 0x6c2b26 */
  SPILL(); f_6c2b26(); return;
}

void f_72cee0(void) {
  LOAD_REGS();
L_72cee0: /* 72cee0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 72cee4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72cee5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72cee6: mov esi, ecx */
  esi = ecx;
/* 72cee8: call 0x6cab00 */
  esp -= 4; W32(esp, 0x72ceedu); SPILL(); f_6cab00(); if (g_unwind) return; RELOAD();
/* 72ceed: mov eax, esi */
  eax = esi;
/* 72ceef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72cef0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72cf10(void) {
  LOAD_REGS();
L_72cf10: /* 72cf10: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 72cf14: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72cf15: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72cf16: mov esi, ecx */
  esi = ecx;
/* 72cf18: call 0x6c224d */
  esp -= 4; W32(esp, 0x72cf1du); SPILL(); f_6c224d(); if (g_unwind) return; RELOAD();
/* 72cf1d: mov eax, esi */
  eax = esi;
/* 72cf1f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72cf20: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72cf40(void) {
  LOAD_REGS();
L_72cf40: /* 72cf40: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 72cf44: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72cf45: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72cf46: mov esi, ecx */
  esi = ecx;
/* 72cf48: call 0x6c4714 */
  esp -= 4; W32(esp, 0x72cf4du); SPILL(); f_6c4714(); if (g_unwind) return; RELOAD();
/* 72cf4d: mov eax, esi */
  eax = esi;
/* 72cf4f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72cf50: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72cf70(void) {
  LOAD_REGS();
L_72cf70: /* 72cf70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72cf71: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72cf72: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 72cf76: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72cf77: mov esi, ecx */
  esi = ecx;
/* 72cf79: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x72cf7fu); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 72cf7f: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 72cf82: mov edx, dword ptr [esi + 0x30] */
  edx = R32((uint32_t)(esi + 0x30u));
/* 72cf85: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 72cf88: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 72cf8b: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 72cf8e: xor edx, dword ptr [edi + 0x30] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x30u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 72cf91: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 72cf94: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 72cf97: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 72cf99: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 72cf9c: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* 72cf9f: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 72cfa1: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 72cfa4: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 72cfa6: mov dword ptr [esi + 0x30], ecx */
  W32((uint32_t)(esi + 0x30u), ecx);
/* 72cfa9: mov dl, byte ptr [edi + 0x34] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x34u))) & 0xffu);
/* 72cfac: lea eax, [edi + 0x38] */
  eax = (uint32_t)(edi + 0x38u);
/* 72cfaf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72cfb0: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 72cfb3: mov byte ptr [esi + 0x34], dl */
  W8((uint32_t)(esi + 0x34u), (edx & 0xffu));
/* 72cfb6: call 0x6c84d1 */
  esp -= 4; W32(esp, 0x72cfbbu); SPILL(); f_6c84d1(); if (g_unwind) return; RELOAD();
/* 72cfbb: mov cl, byte ptr [edi + 0x44] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x44u))) & 0xffu);
/* 72cfbe: mov byte ptr [esi + 0x44], cl */
  W8((uint32_t)(esi + 0x44u), (ecx & 0xffu));
/* 72cfc1: mov edx, dword ptr [edi + 0x48] */
  edx = R32((uint32_t)(edi + 0x48u));
/* 72cfc4: mov edi, dword ptr [esi + 0x48] */
  edi = R32((uint32_t)(esi + 0x48u));
/* 72cfc7: xor edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 72cfc9: mov eax, edi */
  eax = edi;
/* 72cfcb: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 72cfce: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 72cfd0: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* 72cfd3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72cfd4: mov eax, esi */
  eax = esi;
/* 72cfd6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72cfd7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72d000(void) {
  LOAD_REGS();
L_72d000: /* 72d000: jmp 0x6c5394 */
  SPILL(); f_6c5394(); return;
}

void f_72d020(void) {
  LOAD_REGS();
L_72d020: /* 72d020: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 72d024: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72d025: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72d026: mov esi, ecx */
  esi = ecx;
/* 72d028: call 0x6c3f12 */
  esp -= 4; W32(esp, 0x72d02du); SPILL(); f_6c3f12(); if (g_unwind) return; RELOAD();
/* 72d02d: mov eax, esi */
  eax = esi;
/* 72d02f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72d030: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72d050(void) {
  LOAD_REGS();
L_72d050: /* 72d050: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72d051: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72d052: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 72d056: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72d057: mov esi, ecx */
  esi = ecx;
/* 72d059: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x72d05fu); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 72d05f: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 72d062: mov edx, dword ptr [esi + 0x30] */
  edx = R32((uint32_t)(esi + 0x30u));
/* 72d065: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 72d068: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 72d06b: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 72d06e: xor edx, dword ptr [edi + 0x30] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x30u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 72d071: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 72d074: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 72d077: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 72d079: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 72d07c: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* 72d07f: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 72d081: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 72d084: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 72d086: mov dword ptr [esi + 0x30], ecx */
  W32((uint32_t)(esi + 0x30u), ecx);
/* 72d089: mov dl, byte ptr [edi + 0x34] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x34u))) & 0xffu);
/* 72d08c: lea ecx, [edi + 0x3c] */
  ecx = (uint32_t)(edi + 0x3cu);
/* 72d08f: mov byte ptr [esi + 0x34], dl */
  W8((uint32_t)(esi + 0x34u), (edx & 0xffu));
/* 72d092: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 72d095: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72d096: lea ecx, [esi + 0x3c] */
  ecx = (uint32_t)(esi + 0x3cu);
/* 72d099: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* 72d09c: call 0x6c7743 */
  esp -= 4; W32(esp, 0x72d0a1u); SPILL(); f_6c7743(); if (g_unwind) return; RELOAD();
/* 72d0a1: mov dl, byte ptr [edi + 0x48] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x48u))) & 0xffu);
/* 72d0a4: mov eax, dword ptr [esi + 0x4c] */
  eax = R32((uint32_t)(esi + 0x4cu));
/* 72d0a7: mov byte ptr [esi + 0x48], dl */
  W8((uint32_t)(esi + 0x48u), (edx & 0xffu));
/* 72d0aa: xor eax, dword ptr [edi + 0x4c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4cu)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 72d0ad: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* 72d0b0: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 72d0b3: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 72d0b5: mov dword ptr [esi + 0x4c], ecx */
  W32((uint32_t)(esi + 0x4cu), ecx);
/* 72d0b8: mov eax, ecx */
  eax = ecx;
/* 72d0ba: mov ecx, dword ptr [edi + 0x4c] */
  ecx = R32((uint32_t)(edi + 0x4cu));
/* 72d0bd: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 72d0bf: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 72d0c2: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 72d0c4: mov dword ptr [esi + 0x4c], ecx */
  W32((uint32_t)(esi + 0x4cu), ecx);
/* 72d0c7: mov edx, dword ptr [edi + 0x50] */
  edx = R32((uint32_t)(edi + 0x50u));
/* 72d0ca: mov dword ptr [esi + 0x50], edx */
  W32((uint32_t)(esi + 0x50u), edx);
/* 72d0cd: mov eax, dword ptr [edi + 0x54] */
  eax = R32((uint32_t)(edi + 0x54u));
/* 72d0d0: mov dword ptr [esi + 0x54], eax */
  W32((uint32_t)(esi + 0x54u), eax);
/* 72d0d3: mov ecx, dword ptr [edi + 0x58] */
  ecx = R32((uint32_t)(edi + 0x58u));
/* 72d0d6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72d0d7: mov dword ptr [esi + 0x58], ecx */
  W32((uint32_t)(esi + 0x58u), ecx);
/* 72d0da: mov eax, esi */
  eax = esi;
/* 72d0dc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72d0dd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72d110(void) {
  LOAD_REGS();
L_72d110: /* 72d110: jmp 0x6c15b4 */
  SPILL(); f_6c15b4(); return;
}

void f_72d130(void) {
  LOAD_REGS();
L_72d130: /* 72d130: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 72d134: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72d135: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72d136: mov esi, ecx */
  esi = ecx;
/* 72d138: call 0x6c10af */
  esp -= 4; W32(esp, 0x72d13du); SPILL(); f_6c10af(); if (g_unwind) return; RELOAD();
/* 72d13d: mov eax, esi */
  eax = esi;
/* 72d13f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72d140: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72d160(void) {
  LOAD_REGS();
L_72d160: /* 72d160: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 72d162: push 0x9c46b3 */
  { uint32_t v = 0x9c46b3u; esp -= 4; W32(esp, v); }
/* 72d167: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72d16d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72d16e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 72d175: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72d176: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72d177: mov esi, ecx */
  esi = ecx;
/* 72d179: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 72d17d: mov dword ptr [esi], 0x9f8bf0 */
  W32((uint32_t)(esi), 0x9f8bf0u);
/* 72d183: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 72d18b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x72d191u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 72d191: lea ecx, [esi + 0x40] */
  ecx = (uint32_t)(esi + 0x40u);
/* 72d194: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 72d199: call 0x6c1b7c */
  esp -= 4; W32(esp, 0x72d19eu); SPILL(); f_6c1b7c(); if (g_unwind) return; RELOAD();
/* 72d19e: mov ecx, esi */
  ecx = esi;
/* 72d1a0: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 72d1a8: call 0x6c1cc6 */
  esp -= 4; W32(esp, 0x72d1adu); SPILL(); f_6c1cc6(); if (g_unwind) return; RELOAD();
/* 72d1ad: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 72d1b1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72d1b2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72d1b9: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72d1bc: ret  */
  esp += 4; SPILL(); return;
}

void f_72d1e0(void) {
  LOAD_REGS();
L_72d1e0: /* 72d1e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 72d1e2: push 0x9c46d8 */
  { uint32_t v = 0x9c46d8u; esp -= 4; W32(esp, v); }
/* 72d1e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72d1ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72d1ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 72d1f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72d1f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72d1f7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72d1f8: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 72d1fc: mov esi, ecx */
  esi = ecx;
/* 72d1fe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72d1ff: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 72d203: call 0x6c88dc */
  esp -= 4; W32(esp, 0x72d208u); SPILL(); f_6c88dc(); if (g_unwind) return; RELOAD();
/* 72d208: mov dword ptr [esi], 0x9f8bf0 */
  W32((uint32_t)(esi), 0x9f8bf0u);
/* 72d20e: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* 72d211: add edi, 0x40 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 72d214: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72d215: lea ecx, [esi + 0x40] */
  ecx = (uint32_t)(esi + 0x40u);
/* 72d218: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 72d220: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* 72d223: call 0x6c925f */
  esp -= 4; W32(esp, 0x72d228u); SPILL(); f_6c925f(); if (g_unwind) return; RELOAD();
/* 72d228: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 72d22c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72d22d: mov eax, esi */
  eax = esi;
/* 72d22f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72d230: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72d237: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72d23a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72d260(void) {
  LOAD_REGS();
L_72d260: /* 72d260: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72d261: mov esi, ecx */
  esi = ecx;
/* 72d263: call 0x6c5f6a */
  esp -= 4; W32(esp, 0x72d268u); SPILL(); f_6c5f6a(); if (g_unwind) return; RELOAD();
/* 72d268: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 72d26d: je 0x72d27b */
  if (zf) goto L_72d27b;
L_72d26f: /* 72d26f: push 0x4c */
  { uint32_t v = 0x4cu; esp -= 4; W32(esp, v); }
/* 72d271: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72d272: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x72d278u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 72d278: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_72d27b: /* 72d27b: mov eax, esi */
  eax = esi;
/* 72d27d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72d27e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72d2a0(void) {
  LOAD_REGS();
L_72d2a0: /* 72d2a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 72d2a1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 72d2a5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 72d2a8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72d2a9: mov esi, ecx */
  esi = ecx;
/* 72d2ab: je 0x72d2dd */
  if (zf) goto L_72d2dd;
L_72d2ad: /* 72d2ad: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 72d2b0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72d2b1: push 0x6c5f6a */
  { uint32_t v = 0x6c5f6au; esp -= 4; W32(esp, v); }
/* 72d2b6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 72d2b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72d2ba: push 0x4c */
  { uint32_t v = 0x4cu; esp -= 4; W32(esp, v); }
/* 72d2bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72d2bd: call 0x99ca3d */
  esp -= 4; W32(esp, 0x72d2c2u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 72d2c2: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 72d2c5: je 0x72d2d5 */
  if (zf) goto L_72d2d5;
L_72d2c7: /* 72d2c7: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 72d2cd: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 72d2cf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 72d2d1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72d2d2: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x72d2d5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_72d2d5: /* 72d2d5: mov eax, edi */
  eax = edi;
/* 72d2d7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72d2d8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72d2d9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 72d2da: ret 4 */
  esp += 8; SPILL(); return;
L_72d2dd: /* 72d2dd: mov ecx, esi */
  ecx = esi;
/* 72d2df: call 0x6c5f6a */
  esp -= 4; W32(esp, 0x72d2e4u); SPILL(); f_6c5f6a(); if (g_unwind) return; RELOAD();
/* 72d2e4: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 72d2e7: je 0x72d2f5 */
  if (zf) goto L_72d2f5;
L_72d2e9: /* 72d2e9: push 0x4c */
  { uint32_t v = 0x4cu; esp -= 4; W32(esp, v); }
/* 72d2eb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72d2ec: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x72d2f2u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 72d2f2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_72d2f5: /* 72d2f5: mov eax, esi */
  eax = esi;
/* 72d2f7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72d2f8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 72d2f9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72d320(void) {
  LOAD_REGS();
L_72d320: /* 72d320: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 72d322: push 0x9c471a */
  { uint32_t v = 0x9c471au; esp -= 4; W32(esp, v); }
/* 72d327: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72d32d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72d32e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 72d335: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72d336: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72d337: mov esi, ecx */
  esi = ecx;
/* 72d339: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 72d33d: mov dword ptr [esi], 0x9f8ca8 */
  W32((uint32_t)(esi), 0x9f8ca8u);
/* 72d343: mov dword ptr [esp + 0x10], 3 */
  W32((uint32_t)(esp + 0x10u), 0x3u);
/* 72d34b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x72d351u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 72d351: lea ecx, [esi + 0x70] */
  ecx = (uint32_t)(esi + 0x70u);
/* 72d354: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 72d359: call 0x6c9543 */
  esp -= 4; W32(esp, 0x72d35eu); SPILL(); f_6c9543(); if (g_unwind) return; RELOAD();
/* 72d35e: lea ecx, [esi + 0x3c] */
  ecx = (uint32_t)(esi + 0x3cu);
/* 72d361: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 72d366: call 0x6c45fc */
  esp -= 4; W32(esp, 0x72d36bu); SPILL(); f_6c45fc(); if (g_unwind) return; RELOAD();
/* 72d36b: lea ecx, [esi + 0x2c] */
  ecx = (uint32_t)(esi + 0x2cu);
/* 72d36e: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 72d373: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x72d379u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 72d379: mov ecx, esi */
  ecx = esi;
/* 72d37b: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 72d383: call 0x6c8f8f */
  esp -= 4; W32(esp, 0x72d388u); SPILL(); f_6c8f8f(); if (g_unwind) return; RELOAD();
/* 72d388: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 72d38c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72d38d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72d394: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72d397: ret  */
  esp += 4; SPILL(); return;
}

void f_72d3c0(void) {
  LOAD_REGS();
L_72d3c0: /* 72d3c0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 72d3c2: push 0x9c475f */
  { uint32_t v = 0x9c475fu; esp -= 4; W32(esp, v); }
/* 72d3c7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72d3cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72d3ce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 72d3d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72d3d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72d3d7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72d3d8: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 72d3dc: mov esi, ecx */
  esi = ecx;
/* 72d3de: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72d3df: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 72d3e3: call dword ptr [0xcfa26c] */
  esp -= 4; W32(esp, 0x72d3e9u); SPILL(); f_4e1078(); if (g_unwind) return; /* Core!??0UObject@@QAE@ABV0@@Z */ RELOAD();
/* 72d3e9: lea ecx, [edi + 0x2c] */
  ecx = (uint32_t)(edi + 0x2cu);
/* 72d3ec: mov dword ptr [esi], 0x9f8ca8 */
  W32((uint32_t)(esi), 0x9f8ca8u);
/* 72d3f2: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 72d3f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72d3f6: lea ecx, [esi + 0x2c] */
  ecx = (uint32_t)(esi + 0x2cu);
/* 72d3f9: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 72d401: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 72d404: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x72d40au); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 72d40a: mov edx, dword ptr [edi + 0x38] */
  edx = R32((uint32_t)(edi + 0x38u));
/* 72d40d: lea eax, [edi + 0x3c] */
  eax = (uint32_t)(edi + 0x3cu);
/* 72d410: lea ecx, [esi + 0x3c] */
  ecx = (uint32_t)(esi + 0x3cu);
/* 72d413: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72d414: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* 72d419: mov dword ptr [esi + 0x38], edx */
  W32((uint32_t)(esi + 0x38u), edx);
/* 72d41c: call 0x6c640b */
  esp -= 4; W32(esp, 0x72d421u); SPILL(); f_6c640b(); if (g_unwind) return; RELOAD();
/* 72d421: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* 72d424: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* 72d427: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 72d429: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 72d42c: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 72d42e: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* 72d431: lea edx, [edi + 0x4c] */
  edx = (uint32_t)(edi + 0x4cu);
/* 72d434: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 72d436: lea eax, [esi + 0x4c] */
  eax = (uint32_t)(esi + 0x4cu);
/* 72d439: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 72d43b: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 72d43e: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 72d441: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 72d444: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 72d447: lea eax, [edi + 0x58] */
  eax = (uint32_t)(edi + 0x58u);
/* 72d44a: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 72d44c: lea ecx, [esi + 0x58] */
  ecx = (uint32_t)(esi + 0x58u);
/* 72d44f: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 72d451: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 72d454: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 72d457: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 72d45a: mov edx, dword ptr [esi + 0x64] */
  edx = R32((uint32_t)(esi + 0x64u));
/* 72d45d: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 72d460: mov ecx, dword ptr [edi + 0x64] */
  ecx = R32((uint32_t)(edi + 0x64u));
/* 72d463: xor ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 72d465: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 72d468: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 72d46a: mov dword ptr [esi + 0x64], edx */
  W32((uint32_t)(esi + 0x64u), edx);
/* 72d46d: mov edx, dword ptr [edi + 0x68] */
  edx = R32((uint32_t)(edi + 0x68u));
/* 72d470: lea ecx, [edi + 0x70] */
  ecx = (uint32_t)(edi + 0x70u);
/* 72d473: mov dword ptr [esi + 0x68], edx */
  W32((uint32_t)(esi + 0x68u), edx);
/* 72d476: mov eax, dword ptr [edi + 0x6c] */
  eax = R32((uint32_t)(edi + 0x6cu));
/* 72d479: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72d47a: lea ecx, [esi + 0x70] */
  ecx = (uint32_t)(esi + 0x70u);
/* 72d47d: mov byte ptr [esp + 0x18], 2 */
  W8((uint32_t)(esp + 0x18u), 0x2u);
/* 72d482: mov dword ptr [esi + 0x6c], eax */
  W32((uint32_t)(esi + 0x6cu), eax);
/* 72d485: call 0x6cbbae */
  esp -= 4; W32(esp, 0x72d48au); SPILL(); f_6cbbae(); if (g_unwind) return; RELOAD();
/* 72d48a: mov edx, dword ptr [edi + 0x7c] */
  edx = R32((uint32_t)(edi + 0x7cu));
/* 72d48d: mov dword ptr [esi + 0x7c], edx */
  W32((uint32_t)(esi + 0x7cu), edx);
/* 72d490: mov eax, dword ptr [edi + 0x80] */
  eax = R32((uint32_t)(edi + 0x80u));
/* 72d496: mov dword ptr [esi + 0x80], eax */
  W32((uint32_t)(esi + 0x80u), eax);
/* 72d49c: mov ecx, dword ptr [edi + 0x84] */
  ecx = R32((uint32_t)(edi + 0x84u));
/* 72d4a2: mov dword ptr [esi + 0x84], ecx */
  W32((uint32_t)(esi + 0x84u), ecx);
/* 72d4a8: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 72d4ac: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72d4ad: mov eax, esi */
  eax = esi;
/* 72d4af: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72d4b0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72d4b7: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72d4ba: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72d500(void) {
  LOAD_REGS();
L_72d500: /* 72d500: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72d501: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72d502: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 72d506: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72d507: mov esi, ecx */
  esi = ecx;
/* 72d509: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x72d50fu); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 72d50f: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 72d512: lea ecx, [edi + 0x2c] */
  ecx = (uint32_t)(edi + 0x2cu);
/* 72d515: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72d516: lea ecx, [esi + 0x2c] */
  ecx = (uint32_t)(esi + 0x2cu);
/* 72d519: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 72d51c: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x72d522u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 72d522: mov edx, dword ptr [edi + 0x38] */
  edx = R32((uint32_t)(edi + 0x38u));
/* 72d525: lea eax, [edi + 0x3c] */
  eax = (uint32_t)(edi + 0x3cu);
/* 72d528: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72d529: lea ecx, [esi + 0x3c] */
  ecx = (uint32_t)(esi + 0x3cu);
/* 72d52c: mov dword ptr [esi + 0x38], edx */
  W32((uint32_t)(esi + 0x38u), edx);
/* 72d52f: call 0x6c2fef */
  esp -= 4; W32(esp, 0x72d534u); SPILL(); f_6c2fef(); if (g_unwind) return; RELOAD();
/* 72d534: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* 72d537: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* 72d53a: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 72d53c: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 72d53f: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 72d541: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* 72d544: lea edx, [edi + 0x4c] */
  edx = (uint32_t)(edi + 0x4cu);
/* 72d547: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 72d549: lea eax, [esi + 0x4c] */
  eax = (uint32_t)(esi + 0x4cu);
/* 72d54c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 72d54e: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 72d551: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 72d554: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 72d557: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 72d55a: lea eax, [edi + 0x58] */
  eax = (uint32_t)(edi + 0x58u);
/* 72d55d: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 72d55f: lea ecx, [esi + 0x58] */
  ecx = (uint32_t)(esi + 0x58u);
/* 72d562: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 72d564: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 72d567: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 72d56a: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 72d56d: mov edx, dword ptr [esi + 0x64] */
  edx = R32((uint32_t)(esi + 0x64u));
/* 72d570: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 72d573: mov ecx, dword ptr [edi + 0x64] */
  ecx = R32((uint32_t)(edi + 0x64u));
/* 72d576: xor ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 72d578: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 72d57b: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 72d57d: mov dword ptr [esi + 0x64], edx */
  W32((uint32_t)(esi + 0x64u), edx);
/* 72d580: mov edx, dword ptr [edi + 0x68] */
  edx = R32((uint32_t)(edi + 0x68u));
/* 72d583: lea ecx, [edi + 0x70] */
  ecx = (uint32_t)(edi + 0x70u);
/* 72d586: mov dword ptr [esi + 0x68], edx */
  W32((uint32_t)(esi + 0x68u), edx);
/* 72d589: mov eax, dword ptr [edi + 0x6c] */
  eax = R32((uint32_t)(edi + 0x6cu));
/* 72d58c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72d58d: lea ecx, [esi + 0x70] */
  ecx = (uint32_t)(esi + 0x70u);
/* 72d590: mov dword ptr [esi + 0x6c], eax */
  W32((uint32_t)(esi + 0x6cu), eax);
/* 72d593: call 0x6ca3a3 */
  esp -= 4; W32(esp, 0x72d598u); SPILL(); f_6ca3a3(); if (g_unwind) return; RELOAD();
/* 72d598: mov edx, dword ptr [edi + 0x7c] */
  edx = R32((uint32_t)(edi + 0x7cu));
/* 72d59b: mov dword ptr [esi + 0x7c], edx */
  W32((uint32_t)(esi + 0x7cu), edx);
/* 72d59e: mov eax, dword ptr [edi + 0x80] */
  eax = R32((uint32_t)(edi + 0x80u));
/* 72d5a4: mov dword ptr [esi + 0x80], eax */
  W32((uint32_t)(esi + 0x80u), eax);
/* 72d5aa: mov ecx, dword ptr [edi + 0x84] */
  ecx = R32((uint32_t)(edi + 0x84u));
/* 72d5b0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72d5b1: mov dword ptr [esi + 0x84], ecx */
  W32((uint32_t)(esi + 0x84u), ecx);
/* 72d5b7: mov eax, esi */
  eax = esi;
/* 72d5b9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72d5ba: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72d5f0(void) {
  LOAD_REGS();
L_72d5f0: /* 72d5f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72d5f1: mov esi, ecx */
  esi = ecx;
/* 72d5f3: call 0x6c75db */
  esp -= 4; W32(esp, 0x72d5f8u); SPILL(); f_6c75db(); if (g_unwind) return; RELOAD();
/* 72d5f8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 72d5fd: je 0x72d60e */
  if (zf) goto L_72d60e;
L_72d5ff: /* 72d5ff: push 0x88 */
  { uint32_t v = 0x88u; esp -= 4; W32(esp, v); }
/* 72d604: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72d605: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x72d60bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 72d60b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_72d60e: /* 72d60e: mov eax, esi */
  eax = esi;
/* 72d610: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72d611: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72d630(void) {
  LOAD_REGS();
L_72d630: /* 72d630: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 72d631: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 72d635: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 72d638: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72d639: mov esi, ecx */
  esi = ecx;
/* 72d63b: je 0x72d670 */
  if (zf) goto L_72d670;
L_72d63d: /* 72d63d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 72d640: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72d641: push 0x6c75db */
  { uint32_t v = 0x6c75dbu; esp -= 4; W32(esp, v); }
/* 72d646: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 72d649: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72d64a: push 0x88 */
  { uint32_t v = 0x88u; esp -= 4; W32(esp, v); }
/* 72d64f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72d650: call 0x99ca3d */
  esp -= 4; W32(esp, 0x72d655u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 72d655: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 72d658: je 0x72d668 */
  if (zf) goto L_72d668;
L_72d65a: /* 72d65a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 72d660: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 72d662: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 72d664: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72d665: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x72d668u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_72d668: /* 72d668: mov eax, edi */
  eax = edi;
/* 72d66a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72d66b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72d66c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 72d66d: ret 4 */
  esp += 8; SPILL(); return;
L_72d670: /* 72d670: mov ecx, esi */
  ecx = esi;
/* 72d672: call 0x6c75db */
  esp -= 4; W32(esp, 0x72d677u); SPILL(); f_6c75db(); if (g_unwind) return; RELOAD();
/* 72d677: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 72d67a: je 0x72d68b */
  if (zf) goto L_72d68b;
L_72d67c: /* 72d67c: push 0x88 */
  { uint32_t v = 0x88u; esp -= 4; W32(esp, v); }
/* 72d681: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72d682: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x72d688u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 72d688: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_72d68b: /* 72d68b: mov eax, esi */
  eax = esi;
/* 72d68d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72d68e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 72d68f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72d6c0(void) {
  LOAD_REGS();
L_72d6c0: /* 72d6c0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 72d6c2: push 0x9c4788 */
  { uint32_t v = 0x9c4788u; esp -= 4; W32(esp, v); }
/* 72d6c7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72d6cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72d6ce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 72d6d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72d6d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72d6d7: mov esi, ecx */
  esi = ecx;
/* 72d6d9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 72d6dd: mov dword ptr [esi], 0x9f8d28 */
  W32((uint32_t)(esi), 0x9f8d28u);
/* 72d6e3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 72d6eb: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x72d6f1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 72d6f1: mov ecx, esi */
  ecx = esi;
/* 72d6f3: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 72d6fb: call 0x6c75db */
  esp -= 4; W32(esp, 0x72d700u); SPILL(); f_6c75db(); if (g_unwind) return; RELOAD();
/* 72d700: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 72d704: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72d705: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72d70c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72d70f: ret  */
  esp += 4; SPILL(); return;
}

void f_72d730(void) {
  LOAD_REGS();
L_72d730: /* 72d730: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 72d734: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72d735: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72d736: mov esi, ecx */
  esi = ecx;
/* 72d738: call 0x6c835a */
  esp -= 4; W32(esp, 0x72d73du); SPILL(); f_6c835a(); if (g_unwind) return; RELOAD();
/* 72d73d: mov dword ptr [esi], 0x9f8d28 */
  W32((uint32_t)(esi), 0x9f8d28u);
/* 72d743: mov eax, esi */
  eax = esi;
/* 72d745: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72d746: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72d760(void) {
  LOAD_REGS();
L_72d760: /* 72d760: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 72d764: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72d765: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72d766: mov esi, ecx */
  esi = ecx;
/* 72d768: call 0x6c12c6 */
  esp -= 4; W32(esp, 0x72d76du); SPILL(); f_6c12c6(); if (g_unwind) return; RELOAD();
/* 72d76d: mov eax, esi */
  eax = esi;
/* 72d76f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72d770: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72d790(void) {
  LOAD_REGS();
L_72d790: /* 72d790: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72d791: mov esi, ecx */
  esi = ecx;
/* 72d793: call 0x6c190b */
  esp -= 4; W32(esp, 0x72d798u); SPILL(); f_6c190b(); if (g_unwind) return; RELOAD();
/* 72d798: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 72d79d: je 0x72d7ae */
  if (zf) goto L_72d7ae;
L_72d79f: /* 72d79f: push 0x88 */
  { uint32_t v = 0x88u; esp -= 4; W32(esp, v); }
/* 72d7a4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72d7a5: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x72d7abu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 72d7ab: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_72d7ae: /* 72d7ae: mov eax, esi */
  eax = esi;
/* 72d7b0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72d7b1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72d7d0(void) {
  LOAD_REGS();
L_72d7d0: /* 72d7d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 72d7d1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 72d7d5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 72d7d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72d7d9: mov esi, ecx */
  esi = ecx;
/* 72d7db: je 0x72d810 */
  if (zf) goto L_72d810;
L_72d7dd: /* 72d7dd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 72d7e0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72d7e1: push 0x6c190b */
  { uint32_t v = 0x6c190bu; esp -= 4; W32(esp, v); }
/* 72d7e6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 72d7e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72d7ea: push 0x88 */
  { uint32_t v = 0x88u; esp -= 4; W32(esp, v); }
/* 72d7ef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72d7f0: call 0x99ca3d */
  esp -= 4; W32(esp, 0x72d7f5u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 72d7f5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 72d7f8: je 0x72d808 */
  if (zf) goto L_72d808;
L_72d7fa: /* 72d7fa: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 72d800: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 72d802: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 72d804: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72d805: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x72d808u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_72d808: /* 72d808: mov eax, edi */
  eax = edi;
/* 72d80a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72d80b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72d80c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 72d80d: ret 4 */
  esp += 8; SPILL(); return;
L_72d810: /* 72d810: mov ecx, esi */
  ecx = esi;
/* 72d812: call 0x6c190b */
  esp -= 4; W32(esp, 0x72d817u); SPILL(); f_6c190b(); if (g_unwind) return; RELOAD();
/* 72d817: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 72d81a: je 0x72d82b */
  if (zf) goto L_72d82b;
L_72d81c: /* 72d81c: push 0x88 */
  { uint32_t v = 0x88u; esp -= 4; W32(esp, v); }
/* 72d821: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72d822: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x72d828u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 72d828: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_72d82b: /* 72d82b: mov eax, esi */
  eax = esi;
/* 72d82d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72d82e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 72d82f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72d860(void) {
  LOAD_REGS();
L_72d860: /* 72d860: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 72d862: push 0x9c47a8 */
  { uint32_t v = 0x9c47a8u; esp -= 4; W32(esp, v); }
/* 72d867: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72d86d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72d86e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 72d875: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72d876: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72d877: mov esi, ecx */
  esi = ecx;
/* 72d879: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 72d87d: mov dword ptr [esi], 0x9f8da8 */
  W32((uint32_t)(esi), 0x9f8da8u);
/* 72d883: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 72d88b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x72d891u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 72d891: mov ecx, esi */
  ecx = esi;
/* 72d893: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 72d89b: call 0x6c75db */
  esp -= 4; W32(esp, 0x72d8a0u); SPILL(); f_6c75db(); if (g_unwind) return; RELOAD();
/* 72d8a0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 72d8a4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72d8a5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72d8ac: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72d8af: ret  */
  esp += 4; SPILL(); return;
}

void f_72d8d0(void) {
  LOAD_REGS();
L_72d8d0: /* 72d8d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72d8d1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72d8d2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 72d8d6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72d8d7: mov esi, ecx */
  esi = ecx;
/* 72d8d9: call 0x6c835a */
  esp -= 4; W32(esp, 0x72d8deu); SPILL(); f_6c835a(); if (g_unwind) return; RELOAD();
/* 72d8de: mov dword ptr [esi], 0x9f8da8 */
  W32((uint32_t)(esi), 0x9f8da8u);
/* 72d8e4: mov al, byte ptr [edi + 0x88] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x88u))) & 0xffu);
/* 72d8ea: mov byte ptr [esi + 0x88], al */
  W8((uint32_t)(esi + 0x88u), (eax & 0xffu));
/* 72d8f0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72d8f1: mov eax, esi */
  eax = esi;
/* 72d8f3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72d8f4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72d910(void) {
  LOAD_REGS();
L_72d910: /* 72d910: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72d911: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72d912: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 72d916: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72d917: mov esi, ecx */
  esi = ecx;
/* 72d919: call 0x6c12c6 */
  esp -= 4; W32(esp, 0x72d91eu); SPILL(); f_6c12c6(); if (g_unwind) return; RELOAD();
/* 72d91e: mov al, byte ptr [edi + 0x88] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x88u))) & 0xffu);
/* 72d924: mov byte ptr [esi + 0x88], al */
  W8((uint32_t)(esi + 0x88u), (eax & 0xffu));
/* 72d92a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72d92b: mov eax, esi */
  eax = esi;
/* 72d92d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72d92e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72d950(void) {
  LOAD_REGS();
L_72d950: /* 72d950: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72d951: mov esi, ecx */
  esi = ecx;
/* 72d953: call 0x6c5c31 */
  esp -= 4; W32(esp, 0x72d958u); SPILL(); f_6c5c31(); if (g_unwind) return; RELOAD();
/* 72d958: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 72d95d: je 0x72d96e */
  if (zf) goto L_72d96e;
L_72d95f: /* 72d95f: push 0x8c */
  { uint32_t v = 0x8cu; esp -= 4; W32(esp, v); }
/* 72d964: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72d965: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x72d96bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 72d96b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_72d96e: /* 72d96e: mov eax, esi */
  eax = esi;
/* 72d970: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72d971: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72d990(void) {
  LOAD_REGS();
L_72d990: /* 72d990: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 72d991: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 72d995: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 72d998: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72d999: mov esi, ecx */
  esi = ecx;
/* 72d99b: je 0x72d9d0 */
  if (zf) goto L_72d9d0;
L_72d99d: /* 72d99d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 72d9a0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72d9a1: push 0x6c5c31 */
  { uint32_t v = 0x6c5c31u; esp -= 4; W32(esp, v); }
/* 72d9a6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 72d9a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72d9aa: push 0x8c */
  { uint32_t v = 0x8cu; esp -= 4; W32(esp, v); }
/* 72d9af: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72d9b0: call 0x99ca3d */
  esp -= 4; W32(esp, 0x72d9b5u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 72d9b5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 72d9b8: je 0x72d9c8 */
  if (zf) goto L_72d9c8;
L_72d9ba: /* 72d9ba: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 72d9c0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 72d9c2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 72d9c4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72d9c5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x72d9c8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_72d9c8: /* 72d9c8: mov eax, edi */
  eax = edi;
/* 72d9ca: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72d9cb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72d9cc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 72d9cd: ret 4 */
  esp += 8; SPILL(); return;
L_72d9d0: /* 72d9d0: mov ecx, esi */
  ecx = esi;
/* 72d9d2: call 0x6c5c31 */
  esp -= 4; W32(esp, 0x72d9d7u); SPILL(); f_6c5c31(); if (g_unwind) return; RELOAD();
/* 72d9d7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 72d9da: je 0x72d9eb */
  if (zf) goto L_72d9eb;
L_72d9dc: /* 72d9dc: push 0x8c */
  { uint32_t v = 0x8cu; esp -= 4; W32(esp, v); }
/* 72d9e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72d9e2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x72d9e8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 72d9e8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_72d9eb: /* 72d9eb: mov eax, esi */
  eax = esi;
/* 72d9ed: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72d9ee: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 72d9ef: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72da20(void) {
  LOAD_REGS();
L_72da20: /* 72da20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72da21: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72da22: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 72da26: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72da27: mov esi, ecx */
  esi = ecx;
/* 72da29: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x72da2fu); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 72da2f: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 72da32: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 72da35: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 72da38: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 72da3b: mov edx, dword ptr [edi + 0x30] */
  edx = R32((uint32_t)(edi + 0x30u));
/* 72da3e: lea eax, [edi + 0x34] */
  eax = (uint32_t)(edi + 0x34u);
/* 72da41: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72da42: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
/* 72da45: mov dword ptr [esi + 0x30], edx */
  W32((uint32_t)(esi + 0x30u), edx);
/* 72da48: call 0x6c6127 */
  esp -= 4; W32(esp, 0x72da4du); SPILL(); f_6c6127(); if (g_unwind) return; RELOAD();
/* 72da4d: mov ecx, dword ptr [edi + 0x40] */
  ecx = R32((uint32_t)(edi + 0x40u));
/* 72da50: mov edi, dword ptr [esi + 0x40] */
  edi = R32((uint32_t)(esi + 0x40u));
/* 72da53: xor ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 72da55: mov eax, edi */
  eax = edi;
/* 72da57: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 72da5a: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 72da5c: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 72da5f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72da60: mov eax, esi */
  eax = esi;
/* 72da62: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72da63: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72da90(void) {
  LOAD_REGS();
L_72da90: /* 72da90: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 72da92: push 0x9c47c9 */
  { uint32_t v = 0x9c47c9u; esp -= 4; W32(esp, v); }
/* 72da97: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72da9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72da9e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 72daa5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72daa6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72daa7: mov esi, ecx */
  esi = ecx;
/* 72daa9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 72daad: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x72dab3u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 72dab3: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 72dab6: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 72dabe: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x72dac4u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 72dac4: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 72dac8: mov eax, esi */
  eax = esi;
/* 72daca: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72dacb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72dad2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72dad5: ret  */
  esp += 4; SPILL(); return;
}

void f_72db00(void) {
  LOAD_REGS();
L_72db00: /* 72db00: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 72db02: push 0x9c47e9 */
  { uint32_t v = 0x9c47e9u; esp -= 4; W32(esp, v); }
/* 72db07: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72db0d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72db0e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 72db15: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72db16: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72db17: mov esi, ecx */
  esi = ecx;
/* 72db19: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 72db1d: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 72db20: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 72db28: call 0x6cbf69 */
  esp -= 4; W32(esp, 0x72db2du); SPILL(); f_6cbf69(); if (g_unwind) return; RELOAD();
/* 72db2d: mov ecx, esi */
  ecx = esi;
/* 72db2f: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 72db37: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x72db3du); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 72db3d: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 72db41: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72db42: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72db49: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72db4c: ret  */
  esp += 4; SPILL(); return;
}

void f_72db70(void) {
  LOAD_REGS();
L_72db70: /* 72db70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72db71: mov esi, ecx */
  esi = ecx;
/* 72db73: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x72db79u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 72db79: mov eax, esi */
  eax = esi;
/* 72db7b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72db7c: ret  */
  esp += 4; SPILL(); return;
}

void f_72db90(void) {
  LOAD_REGS();
L_72db90: /* 72db90: jmp 0x6cbf69 */
  SPILL(); f_6cbf69(); return;
}

void f_72dbb0(void) {
  LOAD_REGS();
L_72dbb0: /* 72dbb0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72dbb1: mov esi, ecx */
  esi = ecx;
/* 72dbb3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x72dbb9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 72dbb9: mov eax, esi */
  eax = esi;
/* 72dbbb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72dbbc: ret  */
  esp += 4; SPILL(); return;
}

void f_72dbd0(void) {
  LOAD_REGS();
L_72dbd0: /* 72dbd0: jmp 0x6cbf69 */
  SPILL(); f_6cbf69(); return;
}

void f_72dbf0(void) {
  LOAD_REGS();
L_72dbf0: /* 72dbf0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72dbf1: mov esi, ecx */
  esi = ecx;
/* 72dbf3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x72dbf9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 72dbf9: mov eax, esi */
  eax = esi;
/* 72dbfb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72dbfc: ret  */
  esp += 4; SPILL(); return;
}

void f_72dc10(void) {
  LOAD_REGS();
L_72dc10: /* 72dc10: jmp 0x6cbf69 */
  SPILL(); f_6cbf69(); return;
}

void f_72dc30(void) {
  LOAD_REGS();
L_72dc30: /* 72dc30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72dc31: mov esi, ecx */
  esi = ecx;
/* 72dc33: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x72dc39u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 72dc39: mov eax, esi */
  eax = esi;
/* 72dc3b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72dc3c: ret  */
  esp += 4; SPILL(); return;
}

void f_72dc50(void) {
  LOAD_REGS();
L_72dc50: /* 72dc50: jmp 0x6cbf69 */
  SPILL(); f_6cbf69(); return;
}

void f_72dc70(void) {
  LOAD_REGS();
L_72dc70: /* 72dc70: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 72dc72: push 0x9c4808 */
  { uint32_t v = 0x9c4808u; esp -= 4; W32(esp, v); }
/* 72dc77: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72dc7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72dc7e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 72dc85: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72dc86: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72dc87: mov esi, ecx */
  esi = ecx;
/* 72dc89: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 72dc8d: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x72dc93u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 72dc93: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 72dc96: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 72dc9e: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x72dca4u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 72dca4: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 72dca8: mov eax, esi */
  eax = esi;
/* 72dcaa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72dcab: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72dcb2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72dcb5: ret  */
  esp += 4; SPILL(); return;
}

void f_72dce0(void) {
  LOAD_REGS();
L_72dce0: /* 72dce0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 72dce2: push 0x9c4828 */
  { uint32_t v = 0x9c4828u; esp -= 4; W32(esp, v); }
/* 72dce7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72dced: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72dcee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 72dcf5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72dcf6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72dcf7: mov esi, ecx */
  esi = ecx;
/* 72dcf9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 72dcfd: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 72dd00: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 72dd08: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x72dd0eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 72dd0e: mov ecx, esi */
  ecx = esi;
/* 72dd10: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 72dd18: call 0x6cbf69 */
  esp -= 4; W32(esp, 0x72dd1du); SPILL(); f_6cbf69(); if (g_unwind) return; RELOAD();
/* 72dd1d: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 72dd21: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72dd22: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72dd29: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72dd2c: ret  */
  esp += 4; SPILL(); return;
}

void f_72dd50(void) {
  LOAD_REGS();
L_72dd50: /* 72dd50: jmp 0x6cbf69 */
  SPILL(); f_6cbf69(); return;
}

void f_72dd70(void) {
  LOAD_REGS();
L_72dd70: /* 72dd70: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 72dd74: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72dd75: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72dd76: mov esi, ecx */
  esi = ecx;
/* 72dd78: call 0x6c407f */
  esp -= 4; W32(esp, 0x72dd7du); SPILL(); f_6c407f(); if (g_unwind) return; RELOAD();
/* 72dd7d: mov eax, esi */
  eax = esi;
/* 72dd7f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72dd80: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72dda0(void) {
  LOAD_REGS();
L_72dda0: /* 72dda0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72dda1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72dda2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 72dda6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72dda7: mov esi, ecx */
  esi = ecx;
/* 72dda9: call 0x6c989f */
  esp -= 4; W32(esp, 0x72ddaeu); SPILL(); f_6c989f(); if (g_unwind) return; RELOAD();
/* 72ddae: mov eax, dword ptr [edi + 0x4c] */
  eax = R32((uint32_t)(edi + 0x4cu));
/* 72ddb1: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* 72ddb4: mov ecx, dword ptr [edi + 0x50] */
  ecx = R32((uint32_t)(edi + 0x50u));
/* 72ddb7: mov dword ptr [esi + 0x50], ecx */
  W32((uint32_t)(esi + 0x50u), ecx);
/* 72ddba: mov edx, dword ptr [edi + 0x54] */
  edx = R32((uint32_t)(edi + 0x54u));
/* 72ddbd: mov dword ptr [esi + 0x54], edx */
  W32((uint32_t)(esi + 0x54u), edx);
/* 72ddc0: mov eax, dword ptr [edi + 0x58] */
  eax = R32((uint32_t)(edi + 0x58u));
/* 72ddc3: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* 72ddc6: mov ecx, dword ptr [edi + 0x5c] */
  ecx = R32((uint32_t)(edi + 0x5cu));
/* 72ddc9: mov dword ptr [esi + 0x5c], ecx */
  W32((uint32_t)(esi + 0x5cu), ecx);
/* 72ddcc: mov edx, dword ptr [edi + 0x60] */
  edx = R32((uint32_t)(edi + 0x60u));
/* 72ddcf: mov dword ptr [esi + 0x60], edx */
  W32((uint32_t)(esi + 0x60u), edx);
/* 72ddd2: mov eax, dword ptr [edi + 0x64] */
  eax = R32((uint32_t)(edi + 0x64u));
/* 72ddd5: mov dword ptr [esi + 0x64], eax */
  W32((uint32_t)(esi + 0x64u), eax);
/* 72ddd8: mov ecx, dword ptr [edi + 0x68] */
  ecx = R32((uint32_t)(edi + 0x68u));
/* 72dddb: mov eax, dword ptr [esi + 0x68] */
  eax = R32((uint32_t)(esi + 0x68u));
/* 72ddde: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 72dde0: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 72dde3: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 72dde5: mov dword ptr [esi + 0x68], eax */
  W32((uint32_t)(esi + 0x68u), eax);
/* 72dde8: lea edx, [edi + 0x6c] */
  edx = (uint32_t)(edi + 0x6cu);
/* 72ddeb: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 72dded: lea eax, [esi + 0x6c] */
  eax = (uint32_t)(esi + 0x6cu);
/* 72ddf0: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 72ddf2: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 72ddf5: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 72ddf8: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 72ddfb: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 72ddfe: lea eax, [edi + 0x78] */
  eax = (uint32_t)(edi + 0x78u);
/* 72de01: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 72de03: lea ecx, [esi + 0x78] */
  ecx = (uint32_t)(esi + 0x78u);
/* 72de06: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 72de08: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 72de0b: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 72de0e: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 72de11: mov edx, dword ptr [esi + 0x84] */
  edx = R32((uint32_t)(esi + 0x84u));
/* 72de17: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 72de1a: mov ecx, dword ptr [edi + 0x84] */
  ecx = R32((uint32_t)(edi + 0x84u));
/* 72de20: xor ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 72de22: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 72de25: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 72de27: mov ecx, dword ptr [esi + 0x90] */
  ecx = R32((uint32_t)(esi + 0x90u));
/* 72de2d: mov dword ptr [esi + 0x84], edx */
  W32((uint32_t)(esi + 0x84u), edx);
/* 72de33: mov edx, dword ptr [edi + 0x88] */
  edx = R32((uint32_t)(edi + 0x88u));
/* 72de39: mov dword ptr [esi + 0x88], edx */
  W32((uint32_t)(esi + 0x88u), edx);
/* 72de3f: mov eax, dword ptr [edi + 0x8c] */
  eax = R32((uint32_t)(edi + 0x8cu));
/* 72de45: mov dword ptr [esi + 0x8c], eax */
  W32((uint32_t)(esi + 0x8cu), eax);
/* 72de4b: xor ecx, dword ptr [edi + 0x90] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x90u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 72de51: mov eax, dword ptr [esi + 0x90] */
  eax = R32((uint32_t)(esi + 0x90u));
/* 72de57: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 72de5a: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 72de5c: mov dword ptr [esi + 0x90], eax */
  W32((uint32_t)(esi + 0x90u), eax);
/* 72de62: mov ecx, eax */
  ecx = eax;
/* 72de64: mov eax, dword ptr [edi + 0x90] */
  eax = R32((uint32_t)(edi + 0x90u));
/* 72de6a: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 72de6c: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 72de6f: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 72de71: mov dword ptr [esi + 0x90], eax */
  W32((uint32_t)(esi + 0x90u), eax);
/* 72de77: mov ecx, dword ptr [edi + 0x90] */
  ecx = R32((uint32_t)(edi + 0x90u));
/* 72de7d: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 72de7f: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 72de82: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 72de84: mov dword ptr [esi + 0x90], ecx */
  W32((uint32_t)(esi + 0x90u), ecx);
/* 72de8a: mov eax, dword ptr [edi + 0x90] */
  eax = R32((uint32_t)(edi + 0x90u));
/* 72de90: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 72de92: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 72de95: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 72de97: mov dword ptr [esi + 0x90], eax */
  W32((uint32_t)(esi + 0x90u), eax);
/* 72de9d: mov ecx, dword ptr [edi + 0x90] */
  ecx = R32((uint32_t)(edi + 0x90u));
/* 72dea3: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 72dea5: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 72dea8: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 72deaa: mov dword ptr [esi + 0x90], ecx */
  W32((uint32_t)(esi + 0x90u), ecx);
/* 72deb0: mov edx, dword ptr [edi + 0x90] */
  edx = R32((uint32_t)(edi + 0x90u));
/* 72deb6: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 72deb8: and edx, 0x20 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 72debb: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 72debd: mov dword ptr [esi + 0x90], edx */
  W32((uint32_t)(esi + 0x90u), edx);
/* 72dec3: mov eax, dword ptr [edi + 0x94] */
  eax = R32((uint32_t)(edi + 0x94u));
/* 72dec9: mov dword ptr [esi + 0x94], eax */
  W32((uint32_t)(esi + 0x94u), eax);
/* 72decf: mov ecx, dword ptr [edi + 0x98] */
  ecx = R32((uint32_t)(edi + 0x98u));
/* 72ded5: mov dword ptr [esi + 0x98], ecx */
  W32((uint32_t)(esi + 0x98u), ecx);
/* 72dedb: mov dl, byte ptr [edi + 0x9c] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x9cu))) & 0xffu);
/* 72dee1: add edi, 0xa0 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xa0u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 72dee7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72dee8: lea ecx, [esi + 0xa0] */
  ecx = (uint32_t)(esi + 0xa0u);
/* 72deee: mov byte ptr [esi + 0x9c], dl */
  W8((uint32_t)(esi + 0x9cu), (edx & 0xffu));
/* 72def4: call 0x6c8968 */
  esp -= 4; W32(esp, 0x72def9u); SPILL(); f_6c8968(); if (g_unwind) return; RELOAD();
/* 72def9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72defa: mov eax, esi */
  eax = esi;
/* 72defc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72defd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72df60(void) {
  LOAD_REGS();
L_72df60: /* 72df60: jmp 0x6c6104 */
  SPILL(); f_6c6104(); return;
}

void f_72df80(void) {
  LOAD_REGS();
L_72df80: /* 72df80: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 72df84: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72df85: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72df86: mov esi, ecx */
  esi = ecx;
/* 72df88: call 0x6c6de3 */
  esp -= 4; W32(esp, 0x72df8du); SPILL(); f_6c6de3(); if (g_unwind) return; RELOAD();
/* 72df8d: mov eax, esi */
  eax = esi;
/* 72df8f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72df90: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72dfb0(void) {
  LOAD_REGS();
L_72dfb0: /* 72dfb0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72dfb1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72dfb2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 72dfb6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72dfb7: mov esi, ecx */
  esi = ecx;
/* 72dfb9: call 0x6c4854 */
  esp -= 4; W32(esp, 0x72dfbeu); SPILL(); f_6c4854(); if (g_unwind) return; RELOAD();
/* 72dfbe: lea eax, [edi + 0xac] */
  eax = (uint32_t)(edi + 0xacu);
/* 72dfc4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72dfc5: lea ecx, [esi + 0xac] */
  ecx = (uint32_t)(esi + 0xacu);
/* 72dfcb: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x72dfd1u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 72dfd1: mov ecx, dword ptr [edi + 0xb8] */
  ecx = R32((uint32_t)(edi + 0xb8u));
/* 72dfd7: mov eax, dword ptr [esi + 0xb8] */
  eax = R32((uint32_t)(esi + 0xb8u));
/* 72dfdd: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 72dfdf: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 72dfe2: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 72dfe4: mov dword ptr [esi + 0xb8], eax */
  W32((uint32_t)(esi + 0xb8u), eax);
/* 72dfea: mov edx, dword ptr [edi + 0xbc] */
  edx = R32((uint32_t)(edi + 0xbcu));
/* 72dff0: mov dword ptr [esi + 0xbc], edx */
  W32((uint32_t)(esi + 0xbcu), edx);
/* 72dff6: mov eax, dword ptr [edi + 0xc0] */
  eax = R32((uint32_t)(edi + 0xc0u));
/* 72dffc: mov dword ptr [esi + 0xc0], eax */
  W32((uint32_t)(esi + 0xc0u), eax);
/* 72e002: lea ecx, [edi + 0xc4] */
  ecx = (uint32_t)(edi + 0xc4u);
/* 72e008: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 72e00a: lea edx, [esi + 0xc4] */
  edx = (uint32_t)(esi + 0xc4u);
/* 72e010: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 72e012: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 72e015: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 72e018: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 72e01b: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 72e01e: lea edx, [edi + 0xd0] */
  edx = (uint32_t)(edi + 0xd0u);
/* 72e024: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 72e026: lea eax, [esi + 0xd0] */
  eax = (uint32_t)(esi + 0xd0u);
/* 72e02c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 72e02e: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 72e031: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 72e034: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 72e037: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 72e03a: mov eax, dword ptr [edi + 0xdc] */
  eax = R32((uint32_t)(edi + 0xdcu));
/* 72e040: mov dword ptr [esi + 0xdc], eax */
  W32((uint32_t)(esi + 0xdcu), eax);
/* 72e046: mov ecx, dword ptr [edi + 0xe0] */
  ecx = R32((uint32_t)(edi + 0xe0u));
/* 72e04c: mov edi, dword ptr [esi + 0xe0] */
  edi = R32((uint32_t)(esi + 0xe0u));
/* 72e052: xor ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 72e054: mov eax, edi */
  eax = edi;
/* 72e056: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 72e059: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 72e05b: mov dword ptr [esi + 0xe0], eax */
  W32((uint32_t)(esi + 0xe0u), eax);
/* 72e061: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72e062: mov eax, esi */
  eax = esi;
/* 72e064: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72e065: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72e0a0(void) {
  LOAD_REGS();
L_72e0a0: /* 72e0a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72e0a1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72e0a2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 72e0a6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72e0a7: mov esi, ecx */
  esi = ecx;
/* 72e0a9: call 0x6c4854 */
  esp -= 4; W32(esp, 0x72e0aeu); SPILL(); f_6c4854(); if (g_unwind) return; RELOAD();
/* 72e0ae: mov eax, dword ptr [edi + 0xac] */
  eax = R32((uint32_t)(edi + 0xacu));
/* 72e0b4: mov dword ptr [esi + 0xac], eax */
  W32((uint32_t)(esi + 0xacu), eax);
/* 72e0ba: mov ecx, dword ptr [edi + 0xb0] */
  ecx = R32((uint32_t)(edi + 0xb0u));
/* 72e0c0: mov dword ptr [esi + 0xb0], ecx */
  W32((uint32_t)(esi + 0xb0u), ecx);
/* 72e0c6: mov edx, dword ptr [edi + 0xb4] */
  edx = R32((uint32_t)(edi + 0xb4u));
/* 72e0cc: mov dword ptr [esi + 0xb4], edx */
  W32((uint32_t)(esi + 0xb4u), edx);
/* 72e0d2: mov eax, dword ptr [edi + 0xb8] */
  eax = R32((uint32_t)(edi + 0xb8u));
/* 72e0d8: mov dword ptr [esi + 0xb8], eax */
  W32((uint32_t)(esi + 0xb8u), eax);
/* 72e0de: mov ecx, dword ptr [edi + 0xbc] */
  ecx = R32((uint32_t)(edi + 0xbcu));
/* 72e0e4: mov dword ptr [esi + 0xbc], ecx */
  W32((uint32_t)(esi + 0xbcu), ecx);
/* 72e0ea: mov edx, dword ptr [edi + 0xc0] */
  edx = R32((uint32_t)(edi + 0xc0u));
/* 72e0f0: mov dword ptr [esi + 0xc0], edx */
  W32((uint32_t)(esi + 0xc0u), edx);
/* 72e0f6: add edi, 0xc4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xc4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 72e0fc: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 72e0fe: lea eax, [esi + 0xc4] */
  eax = (uint32_t)(esi + 0xc4u);
/* 72e104: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 72e106: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 72e109: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 72e10c: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 72e10f: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 72e112: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72e113: mov eax, esi */
  eax = esi;
/* 72e115: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72e116: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72e140(void) {
  LOAD_REGS();
L_72e140: /* 72e140: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 72e142: push 0x9c486c */
  { uint32_t v = 0x9c486cu; esp -= 4; W32(esp, v); }
/* 72e147: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72e14d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72e14e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 72e155: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72e156: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72e157: mov esi, ecx */
  esi = ecx;
/* 72e159: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 72e15d: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
/* 72e160: mov dword ptr [esp + 0x10], 3 */
  W32((uint32_t)(esp + 0x10u), 0x3u);
/* 72e168: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x72e16eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 72e16e: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 72e171: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 72e176: call 0x6c1cdf */
  esp -= 4; W32(esp, 0x72e17bu); SPILL(); f_6c1cdf(); if (g_unwind) return; RELOAD();
/* 72e17b: lea ecx, [esi + 0x1c] */
  ecx = (uint32_t)(esi + 0x1cu);
/* 72e17e: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 72e183: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x72e189u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 72e189: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 72e18c: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 72e191: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x72e197u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 72e197: mov ecx, esi */
  ecx = esi;
/* 72e199: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 72e1a1: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x72e1a7u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 72e1a7: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 72e1ab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72e1ac: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72e1b3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72e1b6: ret  */
  esp += 4; SPILL(); return;
}

void f_72e1e0(void) {
  LOAD_REGS();
L_72e1e0: /* 72e1e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 72e1e2: push 0x9c48bc */
  { uint32_t v = 0x9c48bcu; esp -= 4; W32(esp, v); }
/* 72e1e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72e1ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72e1ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 72e1f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72e1f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72e1f7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72e1f8: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 72e1fc: mov esi, ecx */
  esi = ecx;
/* 72e1fe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72e1ff: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 72e203: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x72e209u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 72e209: lea eax, [edi + 0xc] */
  eax = (uint32_t)(edi + 0xcu);
/* 72e20c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72e20d: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 72e210: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 72e218: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x72e21eu); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 72e21e: mov ecx, dword ptr [edi + 0x18] */
  ecx = R32((uint32_t)(edi + 0x18u));
/* 72e221: lea edx, [edi + 0x1c] */
  edx = (uint32_t)(edi + 0x1cu);
/* 72e224: mov dword ptr [esi + 0x18], ecx */
  W32((uint32_t)(esi + 0x18u), ecx);
/* 72e227: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 72e228: lea ecx, [esi + 0x1c] */
  ecx = (uint32_t)(esi + 0x1cu);
/* 72e22b: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* 72e230: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x72e236u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 72e236: lea eax, [edi + 0x28] */
  eax = (uint32_t)(edi + 0x28u);
/* 72e239: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72e23a: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 72e23d: mov byte ptr [esp + 0x18], 2 */
  W8((uint32_t)(esp + 0x18u), 0x2u);
/* 72e242: call 0x6cabe1 */
  esp -= 4; W32(esp, 0x72e247u); SPILL(); f_6cabe1(); if (g_unwind) return; RELOAD();
/* 72e247: lea ecx, [edi + 0x34] */
  ecx = (uint32_t)(edi + 0x34u);
/* 72e24a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72e24b: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
/* 72e24e: mov byte ptr [esp + 0x18], 3 */
  W8((uint32_t)(esp + 0x18u), 0x3u);
/* 72e253: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x72e259u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 72e259: mov edx, dword ptr [edi + 0x40] */
  edx = R32((uint32_t)(edi + 0x40u));
/* 72e25c: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 72e260: mov dword ptr [esi + 0x40], edx */
  W32((uint32_t)(esi + 0x40u), edx);
/* 72e263: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72e264: mov eax, esi */
  eax = esi;
/* 72e266: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72e267: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72e26e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72e271: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72e2b0(void) {
  LOAD_REGS();
L_72e2b0: /* 72e2b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72e2b1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72e2b2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 72e2b6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72e2b7: mov esi, ecx */
  esi = ecx;
/* 72e2b9: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x72e2bfu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 72e2bf: lea eax, [edi + 0xc] */
  eax = (uint32_t)(edi + 0xcu);
/* 72e2c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72e2c3: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 72e2c6: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x72e2ccu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 72e2cc: mov ecx, dword ptr [edi + 0x18] */
  ecx = R32((uint32_t)(edi + 0x18u));
/* 72e2cf: lea edx, [edi + 0x1c] */
  edx = (uint32_t)(edi + 0x1cu);
/* 72e2d2: mov dword ptr [esi + 0x18], ecx */
  W32((uint32_t)(esi + 0x18u), ecx);
/* 72e2d5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 72e2d6: lea ecx, [esi + 0x1c] */
  ecx = (uint32_t)(esi + 0x1cu);
/* 72e2d9: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x72e2dfu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 72e2df: lea eax, [edi + 0x28] */
  eax = (uint32_t)(edi + 0x28u);
/* 72e2e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72e2e3: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 72e2e6: call 0x6caf0b */
  esp -= 4; W32(esp, 0x72e2ebu); SPILL(); f_6caf0b(); if (g_unwind) return; RELOAD();
/* 72e2eb: lea ecx, [edi + 0x34] */
  ecx = (uint32_t)(edi + 0x34u);
/* 72e2ee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72e2ef: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
/* 72e2f2: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x72e2f8u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 72e2f8: mov edx, dword ptr [edi + 0x40] */
  edx = R32((uint32_t)(edi + 0x40u));
/* 72e2fb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72e2fc: mov dword ptr [esi + 0x40], edx */
  W32((uint32_t)(esi + 0x40u), edx);
/* 72e2ff: mov eax, esi */
  eax = esi;
/* 72e301: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72e302: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72e330(void) {
  LOAD_REGS();
L_72e330: /* 72e330: jmp 0x6c80a3 */
  SPILL(); f_6c80a3(); return;
}

void f_72e350(void) {
  LOAD_REGS();
L_72e350: /* 72e350: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72e351: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72e352: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 72e356: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72e357: mov esi, ecx */
  esi = ecx;
/* 72e359: call 0x6cab5f */
  esp -= 4; W32(esp, 0x72e35eu); SPILL(); f_6cab5f(); if (g_unwind) return; RELOAD();
/* 72e35e: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 72e361: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 72e364: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72e365: mov eax, esi */
  eax = esi;
/* 72e367: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72e368: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72e380(void) {
  LOAD_REGS();
L_72e380: /* 72e380: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72e381: mov esi, ecx */
  esi = ecx;
/* 72e383: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x72e389u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 72e389: mov eax, esi */
  eax = esi;
/* 72e38b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72e38c: ret  */
  esp += 4; SPILL(); return;
}

void f_72e3a0(void) {
  LOAD_REGS();
L_72e3a0: /* 72e3a0: jmp 0x6c80a3 */
  SPILL(); f_6c80a3(); return;
}

void f_72e3c0(void) {
  LOAD_REGS();
L_72e3c0: /* 72e3c0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 72e3c4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72e3c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72e3c6: mov esi, ecx */
  esi = ecx;
/* 72e3c8: call 0x6cab5f */
  esp -= 4; W32(esp, 0x72e3cdu); SPILL(); f_6cab5f(); if (g_unwind) return; RELOAD();
/* 72e3cd: mov eax, esi */
  eax = esi;
/* 72e3cf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72e3d0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72e3f0(void) {
  LOAD_REGS();
L_72e3f0: /* 72e3f0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 72e3f4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72e3f5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72e3f6: mov esi, ecx */
  esi = ecx;
/* 72e3f8: call 0x6c49d0 */
  esp -= 4; W32(esp, 0x72e3fdu); SPILL(); f_6c49d0(); if (g_unwind) return; RELOAD();
/* 72e3fd: mov eax, esi */
  eax = esi;
/* 72e3ff: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72e400: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72e420(void) {
  LOAD_REGS();
L_72e420: /* 72e420: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 72e423: jmp 0x6cb6e0 */
  SPILL(); f_6cb6e0(); return;
}

void f_72e440(void) {
  LOAD_REGS();
L_72e440: /* 72e440: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72e441: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72e442: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 72e446: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 72e448: mov esi, ecx */
  esi = ecx;
/* 72e44a: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 72e44c: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 72e44f: lea edx, [edi + 8] */
  edx = (uint32_t)(edi + 0x8u);
/* 72e452: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 72e455: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 72e456: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 72e459: call 0x6c4d95 */
  esp -= 4; W32(esp, 0x72e45eu); SPILL(); f_6c4d95(); if (g_unwind) return; RELOAD();
/* 72e45e: mov dword ptr [esi + 0x14], 0x9f7d74 */
  W32((uint32_t)(esi + 0x14u), 0x9f7d74u);
/* 72e465: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 72e468: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 72e46b: mov ecx, dword ptr [edi + 0x1c] */
  ecx = R32((uint32_t)(edi + 0x1cu));
/* 72e46e: mov dword ptr [esi + 0x1c], ecx */
  W32((uint32_t)(esi + 0x1cu), ecx);
/* 72e471: mov edx, dword ptr [edi + 0x20] */
  edx = R32((uint32_t)(edi + 0x20u));
/* 72e474: mov dword ptr [esi + 0x20], edx */
  W32((uint32_t)(esi + 0x20u), edx);
/* 72e477: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* 72e47a: mov dword ptr [esi + 0x24], eax */
  W32((uint32_t)(esi + 0x24u), eax);
/* 72e47d: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* 72e480: mov dword ptr [esi + 0x28], ecx */
  W32((uint32_t)(esi + 0x28u), ecx);
/* 72e483: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 72e486: mov dword ptr [esi + 0x2c], edx */
  W32((uint32_t)(esi + 0x2cu), edx);
/* 72e489: mov eax, dword ptr [edi + 0x30] */
  eax = R32((uint32_t)(edi + 0x30u));
/* 72e48c: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 72e48f: mov dword ptr [esi + 0x34], 0x9f6b0c */
  W32((uint32_t)(esi + 0x34u), 0x9f6b0cu);
/* 72e496: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 72e499: mov dword ptr [esi + 0x38], ecx */
  W32((uint32_t)(esi + 0x38u), ecx);
/* 72e49c: mov edx, dword ptr [edi + 0x3c] */
  edx = R32((uint32_t)(edi + 0x3cu));
/* 72e49f: mov dword ptr [esi + 0x3c], edx */
  W32((uint32_t)(esi + 0x3cu), edx);
/* 72e4a2: mov eax, dword ptr [edi + 0x40] */
  eax = R32((uint32_t)(edi + 0x40u));
/* 72e4a5: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 72e4a8: mov ecx, dword ptr [edi + 0x44] */
  ecx = R32((uint32_t)(edi + 0x44u));
/* 72e4ab: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72e4ac: mov dword ptr [esi + 0x44], ecx */
  W32((uint32_t)(esi + 0x44u), ecx);
/* 72e4af: mov eax, esi */
  eax = esi;
/* 72e4b1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72e4b2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72e4e0(void) {
  LOAD_REGS();
L_72e4e0: /* 72e4e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72e4e1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72e4e2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 72e4e6: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 72e4e8: mov esi, ecx */
  esi = ecx;
/* 72e4ea: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 72e4ec: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 72e4ef: lea edx, [edi + 8] */
  edx = (uint32_t)(edi + 0x8u);
/* 72e4f2: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 72e4f5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 72e4f6: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 72e4f9: call 0x6c97f5 */
  esp -= 4; W32(esp, 0x72e4feu); SPILL(); f_6c97f5(); if (g_unwind) return; RELOAD();
/* 72e4fe: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 72e501: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 72e504: mov ecx, dword ptr [edi + 0x1c] */
  ecx = R32((uint32_t)(edi + 0x1cu));
/* 72e507: mov dword ptr [esi + 0x1c], ecx */
  W32((uint32_t)(esi + 0x1cu), ecx);
/* 72e50a: mov edx, dword ptr [edi + 0x20] */
  edx = R32((uint32_t)(edi + 0x20u));
/* 72e50d: mov dword ptr [esi + 0x20], edx */
  W32((uint32_t)(esi + 0x20u), edx);
/* 72e510: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* 72e513: mov dword ptr [esi + 0x24], eax */
  W32((uint32_t)(esi + 0x24u), eax);
/* 72e516: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* 72e519: mov dword ptr [esi + 0x28], ecx */
  W32((uint32_t)(esi + 0x28u), ecx);
/* 72e51c: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 72e51f: mov dword ptr [esi + 0x2c], edx */
  W32((uint32_t)(esi + 0x2cu), edx);
/* 72e522: mov eax, dword ptr [edi + 0x30] */
  eax = R32((uint32_t)(edi + 0x30u));
/* 72e525: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 72e528: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 72e52b: mov dword ptr [esi + 0x38], ecx */
  W32((uint32_t)(esi + 0x38u), ecx);
/* 72e52e: mov edx, dword ptr [edi + 0x3c] */
  edx = R32((uint32_t)(edi + 0x3cu));
/* 72e531: mov dword ptr [esi + 0x3c], edx */
  W32((uint32_t)(esi + 0x3cu), edx);
/* 72e534: mov eax, dword ptr [edi + 0x40] */
  eax = R32((uint32_t)(edi + 0x40u));
/* 72e537: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 72e53a: mov ecx, dword ptr [edi + 0x44] */
  ecx = R32((uint32_t)(edi + 0x44u));
/* 72e53d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72e53e: mov dword ptr [esi + 0x44], ecx */
  W32((uint32_t)(esi + 0x44u), ecx);
/* 72e541: mov eax, esi */
  eax = esi;
/* 72e543: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72e544: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72e570(void) {
  LOAD_REGS();
L_72e570: /* 72e570: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72e571: mov esi, ecx */
  esi = ecx;
/* 72e573: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x72e579u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 72e579: mov eax, esi */
  eax = esi;
/* 72e57b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72e57c: ret  */
  esp += 4; SPILL(); return;
}

void f_72e590(void) {
  LOAD_REGS();
L_72e590: /* 72e590: jmp 0x6c80a3 */
  SPILL(); f_6c80a3(); return;
}

void f_72e5b0(void) {
  LOAD_REGS();
L_72e5b0: /* 72e5b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 72e5b4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72e5b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72e5b6: mov esi, ecx */
  esi = ecx;
/* 72e5b8: call 0x6cab5f */
  esp -= 4; W32(esp, 0x72e5bdu); SPILL(); f_6cab5f(); if (g_unwind) return; RELOAD();
/* 72e5bd: mov eax, esi */
  eax = esi;
/* 72e5bf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72e5c0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72e5e0(void) {
  LOAD_REGS();
L_72e5e0: /* 72e5e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 72e5e4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72e5e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72e5e6: mov esi, ecx */
  esi = ecx;
/* 72e5e8: call 0x6c49d0 */
  esp -= 4; W32(esp, 0x72e5edu); SPILL(); f_6c49d0(); if (g_unwind) return; RELOAD();
/* 72e5ed: mov eax, esi */
  eax = esi;
/* 72e5ef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72e5f0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72e610(void) {
  LOAD_REGS();
L_72e610: /* 72e610: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 72e612: push 0x9c48f4 */
  { uint32_t v = 0x9c48f4u; esp -= 4; W32(esp, v); }
/* 72e617: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72e61d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72e61e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 72e625: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72e626: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72e627: mov esi, ecx */
  esi = ecx;
/* 72e629: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 72e62d: mov dword ptr [esi], 0x9f8e38 */
  W32((uint32_t)(esi), 0x9f8e38u);
/* 72e633: mov dword ptr [esi + 0x28], 0x9f8e28 */
  W32((uint32_t)(esi + 0x28u), 0x9f8e28u);
/* 72e63a: mov dword ptr [esi + 0x2c], 0x9f8e24 */
  W32((uint32_t)(esi + 0x2cu), 0x9f8e24u);
/* 72e641: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 72e649: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x72e64fu); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 72e64f: lea ecx, [esi + 0x58] */
  ecx = (uint32_t)(esi + 0x58u);
/* 72e652: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 72e657: call 0x6cbf69 */
  esp -= 4; W32(esp, 0x72e65cu); SPILL(); f_6cbf69(); if (g_unwind) return; RELOAD();
/* 72e65c: mov ecx, esi */
  ecx = esi;
/* 72e65e: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 72e666: call dword ptr [0xcfa254] */
  esp -= 4; W32(esp, 0x72e66cu); SPILL(); f_4e2e55(); if (g_unwind) return; /* Core!??1UObject@@UAE@XZ */ RELOAD();
/* 72e66c: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 72e670: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72e671: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72e678: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72e67b: ret  */
  esp += 4; SPILL(); return;
}

void f_72e6a0(void) {
  LOAD_REGS();
L_72e6a0: /* 72e6a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 72e6a2: push 0x9c4919 */
  { uint32_t v = 0x9c4919u; esp -= 4; W32(esp, v); }
/* 72e6a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72e6ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72e6ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 72e6b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72e6b6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 72e6b7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 72e6b8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72e6b9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72e6ba: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 72e6be: mov esi, ecx */
  esi = ecx;
/* 72e6c0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72e6c1: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 72e6c5: call dword ptr [0xcfa26c] */
  esp -= 4; W32(esp, 0x72e6cbu); SPILL(); f_4e1078(); if (g_unwind) return; /* Core!??0UObject@@QAE@ABV0@@Z */ RELOAD();
/* 72e6cb: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 72e6cd: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 72e6d5: je 0x72e6dc */
  if (zf) goto L_72e6dc;
L_72e6d7: /* 72e6d7: lea eax, [edi + 0x28] */
  eax = (uint32_t)(edi + 0x28u);
/* 72e6da: jmp 0x72e6de */
  goto L_72e6de;
L_72e6dc: /* 72e6dc: xor eax, eax */
  eax = 0;
L_72e6de: /* 72e6de: lea ebp, [esi + 0x28] */
  ebp = (uint32_t)(esi + 0x28u);
/* 72e6e1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72e6e2: mov ecx, ebp */
  ecx = ebp;
/* 72e6e4: call dword ptr [0xcfa420] */
  esp -= 4; W32(esp, 0x72e6eau); SPILL(); f_4e2090(); if (g_unwind) return; /* Core!??0FOutputDevice@@QAE@ABV0@@Z */ RELOAD();
/* 72e6ea: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 72e6ec: je 0x72e6f3 */
  if (zf) goto L_72e6f3;
L_72e6ee: /* 72e6ee: lea eax, [edi + 0x2c] */
  eax = (uint32_t)(edi + 0x2cu);
/* 72e6f1: jmp 0x72e6f5 */
  goto L_72e6f5;
L_72e6f3: /* 72e6f3: xor eax, eax */
  eax = 0;
L_72e6f5: /* 72e6f5: lea ebx, [esi + 0x2c] */
  ebx = (uint32_t)(esi + 0x2cu);
/* 72e6f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72e6f9: mov ecx, ebx */
  ecx = ebx;
/* 72e6fb: call dword ptr [0xcfa41c] */
  esp -= 4; W32(esp, 0x72e701u); SPILL(); f_4e3706(); if (g_unwind) return; /* Core!??0FExec@@QAE@ABV0@@Z */ RELOAD();
/* 72e701: mov edx, dword ptr [esi + 0x38] */
  edx = R32((uint32_t)(esi + 0x38u));
/* 72e704: mov dword ptr [esi], 0x9f8e38 */
  W32((uint32_t)(esi), 0x9f8e38u);
/* 72e70a: mov dword ptr [ebp], 0x9f8e28 */
  W32((uint32_t)(ebp), 0x9f8e28u);
/* 72e711: mov dword ptr [ebx], 0x9f8e24 */
  W32((uint32_t)(ebx), 0x9f8e24u);
/* 72e717: mov eax, dword ptr [edi + 0x30] */
  eax = R32((uint32_t)(edi + 0x30u));
/* 72e71a: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 72e71d: mov ecx, dword ptr [edi + 0x34] */
  ecx = R32((uint32_t)(edi + 0x34u));
/* 72e720: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 72e723: mov dword ptr [esi + 0x34], ecx */
  W32((uint32_t)(esi + 0x34u), ecx);
/* 72e726: xor edx, dword ptr [edi + 0x38] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x38u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 72e729: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 72e72c: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 72e72e: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* 72e731: mov ecx, eax */
  ecx = eax;
/* 72e733: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 72e736: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 72e738: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 72e73b: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 72e73d: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* 72e740: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 72e743: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 72e745: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 72e748: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 72e74a: mov dword ptr [esi + 0x38], ecx */
  W32((uint32_t)(esi + 0x38u), ecx);
/* 72e74d: mov edx, dword ptr [edi + 0x3c] */
  edx = R32((uint32_t)(edi + 0x3cu));
/* 72e750: mov dword ptr [esi + 0x3c], edx */
  W32((uint32_t)(esi + 0x3cu), edx);
/* 72e753: mov eax, dword ptr [edi + 0x40] */
  eax = R32((uint32_t)(edi + 0x40u));
/* 72e756: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 72e759: mov ecx, dword ptr [edi + 0x44] */
  ecx = R32((uint32_t)(edi + 0x44u));
/* 72e75c: mov dword ptr [esi + 0x44], ecx */
  W32((uint32_t)(esi + 0x44u), ecx);
/* 72e75f: mov edx, dword ptr [edi + 0x48] */
  edx = R32((uint32_t)(edi + 0x48u));
/* 72e762: mov dword ptr [esi + 0x48], edx */
  W32((uint32_t)(esi + 0x48u), edx);
/* 72e765: mov eax, dword ptr [edi + 0x4c] */
  eax = R32((uint32_t)(edi + 0x4cu));
/* 72e768: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* 72e76b: mov cl, byte ptr [edi + 0x50] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x50u))) & 0xffu);
/* 72e76e: mov byte ptr [esi + 0x50], cl */
  W8((uint32_t)(esi + 0x50u), (ecx & 0xffu));
/* 72e771: mov edx, dword ptr [edi + 0x54] */
  edx = R32((uint32_t)(edi + 0x54u));
/* 72e774: lea eax, [edi + 0x58] */
  eax = (uint32_t)(edi + 0x58u);
/* 72e777: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72e778: lea ecx, [esi + 0x58] */
  ecx = (uint32_t)(esi + 0x58u);
/* 72e77b: mov dword ptr [esi + 0x54], edx */
  W32((uint32_t)(esi + 0x54u), edx);
/* 72e77e: call 0x6c407f */
  esp -= 4; W32(esp, 0x72e783u); SPILL(); f_6c407f(); if (g_unwind) return; RELOAD();
/* 72e783: mov ecx, dword ptr [edi + 0x64] */
  ecx = R32((uint32_t)(edi + 0x64u));
/* 72e786: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72e787: mov dword ptr [esi + 0x64], ecx */
  W32((uint32_t)(esi + 0x64u), ecx);
/* 72e78a: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 72e78e: mov eax, esi */
  eax = esi;
/* 72e790: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72e791: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 72e792: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 72e793: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72e79a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72e79d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72e7e0(void) {
  LOAD_REGS();
L_72e7e0: /* 72e7e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72e7e1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72e7e2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 72e7e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72e7e7: mov esi, ecx */
  esi = ecx;
/* 72e7e9: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x72e7efu); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 72e7ef: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 72e7f1: je 0x72e7f8 */
  if (zf) goto L_72e7f8;
L_72e7f3: /* 72e7f3: lea eax, [edi + 0x28] */
  eax = (uint32_t)(edi + 0x28u);
/* 72e7f6: jmp 0x72e7fa */
  goto L_72e7fa;
L_72e7f8: /* 72e7f8: xor eax, eax */
  eax = 0;
L_72e7fa: /* 72e7fa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72e7fb: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 72e7fe: call dword ptr [0xcfa428] */
  esp -= 4; W32(esp, 0x72e804u); SPILL(); f_4e3026(); if (g_unwind) return; /* Core!??4FOutputDevice@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 72e804: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 72e806: je 0x72e80d */
  if (zf) goto L_72e80d;
L_72e808: /* 72e808: lea eax, [edi + 0x2c] */
  eax = (uint32_t)(edi + 0x2cu);
/* 72e80b: jmp 0x72e80f */
  goto L_72e80f;
L_72e80d: /* 72e80d: xor eax, eax */
  eax = 0;
L_72e80f: /* 72e80f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72e810: lea ecx, [esi + 0x2c] */
  ecx = (uint32_t)(esi + 0x2cu);
/* 72e813: call dword ptr [0xcfa424] */
  esp -= 4; W32(esp, 0x72e819u); SPILL(); f_4e11b8(); if (g_unwind) return; /* Core!??4FExec@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 72e819: mov eax, dword ptr [edi + 0x30] */
  eax = R32((uint32_t)(edi + 0x30u));
/* 72e81c: mov edx, dword ptr [esi + 0x38] */
  edx = R32((uint32_t)(esi + 0x38u));
/* 72e81f: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 72e822: mov ecx, dword ptr [edi + 0x34] */
  ecx = R32((uint32_t)(edi + 0x34u));
/* 72e825: mov dword ptr [esi + 0x34], ecx */
  W32((uint32_t)(esi + 0x34u), ecx);
/* 72e828: xor edx, dword ptr [edi + 0x38] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x38u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 72e82b: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 72e82e: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 72e831: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 72e833: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* 72e836: mov ecx, eax */
  ecx = eax;
/* 72e838: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 72e83b: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 72e83d: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 72e840: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 72e842: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* 72e845: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 72e848: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 72e84a: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 72e84d: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 72e84f: mov dword ptr [esi + 0x38], ecx */
  W32((uint32_t)(esi + 0x38u), ecx);
/* 72e852: mov edx, dword ptr [edi + 0x3c] */
  edx = R32((uint32_t)(edi + 0x3cu));
/* 72e855: mov dword ptr [esi + 0x3c], edx */
  W32((uint32_t)(esi + 0x3cu), edx);
/* 72e858: mov eax, dword ptr [edi + 0x40] */
  eax = R32((uint32_t)(edi + 0x40u));
/* 72e85b: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 72e85e: mov ecx, dword ptr [edi + 0x44] */
  ecx = R32((uint32_t)(edi + 0x44u));
/* 72e861: mov dword ptr [esi + 0x44], ecx */
  W32((uint32_t)(esi + 0x44u), ecx);
/* 72e864: mov edx, dword ptr [edi + 0x48] */
  edx = R32((uint32_t)(edi + 0x48u));
/* 72e867: mov dword ptr [esi + 0x48], edx */
  W32((uint32_t)(esi + 0x48u), edx);
/* 72e86a: mov eax, dword ptr [edi + 0x4c] */
  eax = R32((uint32_t)(edi + 0x4cu));
/* 72e86d: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* 72e870: mov cl, byte ptr [edi + 0x50] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x50u))) & 0xffu);
/* 72e873: mov byte ptr [esi + 0x50], cl */
  W8((uint32_t)(esi + 0x50u), (ecx & 0xffu));
/* 72e876: mov edx, dword ptr [edi + 0x54] */
  edx = R32((uint32_t)(edi + 0x54u));
/* 72e879: lea eax, [edi + 0x58] */
  eax = (uint32_t)(edi + 0x58u);
/* 72e87c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72e87d: lea ecx, [esi + 0x58] */
  ecx = (uint32_t)(esi + 0x58u);
/* 72e880: mov dword ptr [esi + 0x54], edx */
  W32((uint32_t)(esi + 0x54u), edx);
/* 72e883: call 0x6c6127 */
  esp -= 4; W32(esp, 0x72e888u); SPILL(); f_6c6127(); if (g_unwind) return; RELOAD();
/* 72e888: mov ecx, dword ptr [edi + 0x64] */
  ecx = R32((uint32_t)(edi + 0x64u));
/* 72e88b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72e88c: mov dword ptr [esi + 0x64], ecx */
  W32((uint32_t)(esi + 0x64u), ecx);
/* 72e88f: mov eax, esi */
  eax = esi;
/* 72e891: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72e892: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72e8d0(void) {
  LOAD_REGS();
L_72e8d0: /* 72e8d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72e8d1: mov esi, ecx */
  esi = ecx;
/* 72e8d3: call 0x6cb6f4 */
  esp -= 4; W32(esp, 0x72e8d8u); SPILL(); f_6cb6f4(); if (g_unwind) return; RELOAD();
/* 72e8d8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 72e8dd: je 0x72e8eb */
  if (zf) goto L_72e8eb;
L_72e8df: /* 72e8df: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* 72e8e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72e8e2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x72e8e8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 72e8e8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_72e8eb: /* 72e8eb: mov eax, esi */
  eax = esi;
/* 72e8ed: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72e8ee: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72e910(void) {
  LOAD_REGS();
L_72e910: /* 72e910: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 72e911: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 72e915: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 72e918: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72e919: mov esi, ecx */
  esi = ecx;
/* 72e91b: je 0x72e94d */
  if (zf) goto L_72e94d;
L_72e91d: /* 72e91d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 72e920: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72e921: push 0x6cb6f4 */
  { uint32_t v = 0x6cb6f4u; esp -= 4; W32(esp, v); }
/* 72e926: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 72e929: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72e92a: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* 72e92c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72e92d: call 0x99ca3d */
  esp -= 4; W32(esp, 0x72e932u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 72e932: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 72e935: je 0x72e945 */
  if (zf) goto L_72e945;
L_72e937: /* 72e937: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 72e93d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 72e93f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 72e941: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72e942: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x72e945u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_72e945: /* 72e945: mov eax, edi */
  eax = edi;
/* 72e947: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72e948: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72e949: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 72e94a: ret 4 */
  esp += 8; SPILL(); return;
L_72e94d: /* 72e94d: mov ecx, esi */
  ecx = esi;
/* 72e94f: call 0x6cb6f4 */
  esp -= 4; W32(esp, 0x72e954u); SPILL(); f_6cb6f4(); if (g_unwind) return; RELOAD();
/* 72e954: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 72e957: je 0x72e965 */
  if (zf) goto L_72e965;
L_72e959: /* 72e959: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* 72e95b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72e95c: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x72e962u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 72e962: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_72e965: /* 72e965: mov eax, esi */
  eax = esi;
/* 72e967: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72e968: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 72e969: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72e990(void) {
  LOAD_REGS();
L_72e990: /* 72e990: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 72e992: push 0x9c4950 */
  { uint32_t v = 0x9c4950u; esp -= 4; W32(esp, v); }
/* 72e997: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72e99d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72e99e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 72e9a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72e9a6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72e9a7: mov esi, ecx */
  esi = ecx;
/* 72e9a9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 72e9ad: mov dword ptr [esi], 0x9f8ec0 */
  W32((uint32_t)(esi), 0x9f8ec0u);
/* 72e9b3: mov dword ptr [esp + 0x10], 2 */
  W32((uint32_t)(esp + 0x10u), 0x2u);
/* 72e9bb: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x72e9c1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 72e9c1: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
/* 72e9c4: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 72e9c9: call 0x6c1cdf */
  esp -= 4; W32(esp, 0x72e9ceu); SPILL(); f_6c1cdf(); if (g_unwind) return; RELOAD();
/* 72e9ce: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 72e9d1: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 72e9d6: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x72e9dcu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 72e9dc: mov ecx, esi */
  ecx = esi;
/* 72e9de: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 72e9e6: call dword ptr [0xcfa254] */
  esp -= 4; W32(esp, 0x72e9ecu); SPILL(); f_4e2e55(); if (g_unwind) return; /* Core!??1UObject@@UAE@XZ */ RELOAD();
/* 72e9ec: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 72e9f0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72e9f1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72e9f8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72e9fb: ret  */
  esp += 4; SPILL(); return;
}

void f_72ea20(void) {
  LOAD_REGS();
L_72ea20: /* 72ea20: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 72ea22: push 0x9c4985 */
  { uint32_t v = 0x9c4985u; esp -= 4; W32(esp, v); }
/* 72ea27: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72ea2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72ea2e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 72ea35: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72ea36: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72ea37: mov esi, ecx */
  esi = ecx;
/* 72ea39: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 72ea3d: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x72ea43u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 72ea43: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 72ea46: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 72ea4e: mov dword ptr [esi], 0x9f8ec0 */
  W32((uint32_t)(esi), 0x9f8ec0u);
/* 72ea54: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x72ea5au); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 72ea5a: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
/* 72ea5d: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 72ea62: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x72ea68u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 72ea68: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 72ea6c: mov eax, esi */
  eax = esi;
/* 72ea6e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72ea6f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72ea76: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72ea79: ret  */
  esp += 4; SPILL(); return;
}

void f_72eaa0(void) {
  LOAD_REGS();
L_72eaa0: /* 72eaa0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 72eaa2: push 0x9c49b5 */
  { uint32_t v = 0x9c49b5u; esp -= 4; W32(esp, v); }
/* 72eaa7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72eaad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72eaae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 72eab5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72eab6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72eab7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72eab8: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 72eabc: mov esi, ecx */
  esi = ecx;
/* 72eabe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72eabf: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 72eac3: call dword ptr [0xcfa26c] */
  esp -= 4; W32(esp, 0x72eac9u); SPILL(); f_4e1078(); if (g_unwind) return; /* Core!??0UObject@@QAE@ABV0@@Z */ RELOAD();
/* 72eac9: lea eax, [edi + 0x28] */
  eax = (uint32_t)(edi + 0x28u);
/* 72eacc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72eacd: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 72ead0: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 72ead8: mov dword ptr [esi], 0x9f8ec0 */
  W32((uint32_t)(esi), 0x9f8ec0u);
/* 72eade: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x72eae4u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 72eae4: lea ecx, [edi + 0x34] */
  ecx = (uint32_t)(edi + 0x34u);
/* 72eae7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72eae8: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
/* 72eaeb: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* 72eaf0: call 0x6cabe1 */
  esp -= 4; W32(esp, 0x72eaf5u); SPILL(); f_6cabe1(); if (g_unwind) return; RELOAD();
/* 72eaf5: mov edx, dword ptr [edi + 0x40] */
  edx = R32((uint32_t)(edi + 0x40u));
/* 72eaf8: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 72eafc: mov dword ptr [esi + 0x40], edx */
  W32((uint32_t)(esi + 0x40u), edx);
/* 72eaff: mov eax, dword ptr [edi + 0x44] */
  eax = R32((uint32_t)(edi + 0x44u));
/* 72eb02: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* 72eb05: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72eb06: mov eax, esi */
  eax = esi;
/* 72eb08: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72eb09: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72eb10: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72eb13: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72eb40(void) {
  LOAD_REGS();
L_72eb40: /* 72eb40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72eb41: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72eb42: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 72eb46: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72eb47: mov esi, ecx */
  esi = ecx;
/* 72eb49: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x72eb4fu); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 72eb4f: lea eax, [edi + 0x28] */
  eax = (uint32_t)(edi + 0x28u);
/* 72eb52: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72eb53: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 72eb56: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x72eb5cu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 72eb5c: lea ecx, [edi + 0x34] */
  ecx = (uint32_t)(edi + 0x34u);
/* 72eb5f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72eb60: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
/* 72eb63: call 0x6caf0b */
  esp -= 4; W32(esp, 0x72eb68u); SPILL(); f_6caf0b(); if (g_unwind) return; RELOAD();
/* 72eb68: mov edx, dword ptr [edi + 0x40] */
  edx = R32((uint32_t)(edi + 0x40u));
/* 72eb6b: mov dword ptr [esi + 0x40], edx */
  W32((uint32_t)(esi + 0x40u), edx);
/* 72eb6e: mov eax, dword ptr [edi + 0x44] */
  eax = R32((uint32_t)(edi + 0x44u));
/* 72eb71: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* 72eb74: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72eb75: mov eax, esi */
  eax = esi;
/* 72eb77: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72eb78: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72eb90(void) {
  LOAD_REGS();
L_72eb90: /* 72eb90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72eb91: mov esi, ecx */
  esi = ecx;
/* 72eb93: call 0x6c9bf1 */
  esp -= 4; W32(esp, 0x72eb98u); SPILL(); f_6c9bf1(); if (g_unwind) return; RELOAD();
/* 72eb98: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 72eb9d: je 0x72ebab */
  if (zf) goto L_72ebab;
L_72eb9f: /* 72eb9f: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 72eba1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72eba2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x72eba8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 72eba8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_72ebab: /* 72ebab: mov eax, esi */
  eax = esi;
/* 72ebad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72ebae: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72ebd0(void) {
  LOAD_REGS();
L_72ebd0: /* 72ebd0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 72ebd1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 72ebd5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 72ebd8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72ebd9: mov esi, ecx */
  esi = ecx;
/* 72ebdb: je 0x72ec0d */
  if (zf) goto L_72ec0d;
L_72ebdd: /* 72ebdd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 72ebe0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72ebe1: push 0x6c9bf1 */
  { uint32_t v = 0x6c9bf1u; esp -= 4; W32(esp, v); }
/* 72ebe6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 72ebe9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72ebea: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 72ebec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72ebed: call 0x99ca3d */
  esp -= 4; W32(esp, 0x72ebf2u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 72ebf2: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 72ebf5: je 0x72ec05 */
  if (zf) goto L_72ec05;
L_72ebf7: /* 72ebf7: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 72ebfd: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 72ebff: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 72ec01: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72ec02: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x72ec05u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_72ec05: /* 72ec05: mov eax, edi */
  eax = edi;
/* 72ec07: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72ec08: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72ec09: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 72ec0a: ret 4 */
  esp += 8; SPILL(); return;
L_72ec0d: /* 72ec0d: mov ecx, esi */
  ecx = esi;
/* 72ec0f: call 0x6c9bf1 */
  esp -= 4; W32(esp, 0x72ec14u); SPILL(); f_6c9bf1(); if (g_unwind) return; RELOAD();
/* 72ec14: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 72ec17: je 0x72ec25 */
  if (zf) goto L_72ec25;
L_72ec19: /* 72ec19: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 72ec1b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72ec1c: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x72ec22u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 72ec22: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_72ec25: /* 72ec25: mov eax, esi */
  eax = esi;
/* 72ec27: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72ec28: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 72ec29: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72ec50(void) {
  LOAD_REGS();
L_72ec50: /* 72ec50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72ec51: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72ec52: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 72ec56: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72ec57: mov esi, ecx */
  esi = ecx;
/* 72ec59: call 0x6c308f */
  esp -= 4; W32(esp, 0x72ec5eu); SPILL(); f_6c308f(); if (g_unwind) return; RELOAD();
/* 72ec5e: mov eax, dword ptr [edi + 0x108] */
  eax = R32((uint32_t)(edi + 0x108u));
/* 72ec64: mov dword ptr [esi + 0x108], eax */
  W32((uint32_t)(esi + 0x108u), eax);
/* 72ec6a: mov ecx, dword ptr [edi + 0x10c] */
  ecx = R32((uint32_t)(edi + 0x10cu));
/* 72ec70: mov dword ptr [esi + 0x10c], ecx */
  W32((uint32_t)(esi + 0x10cu), ecx);
/* 72ec76: mov edx, dword ptr [edi + 0x110] */
  edx = R32((uint32_t)(edi + 0x110u));
/* 72ec7c: lea eax, [edi + 0x114] */
  eax = (uint32_t)(edi + 0x114u);
/* 72ec82: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72ec83: lea ecx, [esi + 0x114] */
  ecx = (uint32_t)(esi + 0x114u);
/* 72ec89: mov dword ptr [esi + 0x110], edx */
  W32((uint32_t)(esi + 0x110u), edx);
/* 72ec8f: call 0x6ca50b */
  esp -= 4; W32(esp, 0x72ec94u); SPILL(); f_6ca50b(); if (g_unwind) return; RELOAD();
/* 72ec94: lea ecx, [edi + 0x158] */
  ecx = (uint32_t)(edi + 0x158u);
/* 72ec9a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72ec9b: lea ecx, [esi + 0x158] */
  ecx = (uint32_t)(esi + 0x158u);
/* 72eca1: call 0x6caf0b */
  esp -= 4; W32(esp, 0x72eca6u); SPILL(); f_6caf0b(); if (g_unwind) return; RELOAD();
/* 72eca6: lea edx, [edi + 0x164] */
  edx = (uint32_t)(edi + 0x164u);
/* 72ecac: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 72ecad: lea ecx, [esi + 0x164] */
  ecx = (uint32_t)(esi + 0x164u);
/* 72ecb3: call 0x6caf0b */
  esp -= 4; W32(esp, 0x72ecb8u); SPILL(); f_6caf0b(); if (g_unwind) return; RELOAD();
/* 72ecb8: lea eax, [edi + 0x170] */
  eax = (uint32_t)(edi + 0x170u);
/* 72ecbe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72ecbf: lea ecx, [esi + 0x170] */
  ecx = (uint32_t)(esi + 0x170u);
/* 72ecc5: call 0x6c2fc7 */
  esp -= 4; W32(esp, 0x72eccau); SPILL(); f_6c2fc7(); if (g_unwind) return; RELOAD();
/* 72ecca: mov ecx, dword ptr [edi + 0x17c] */
  ecx = R32((uint32_t)(edi + 0x17cu));
/* 72ecd0: mov dword ptr [esi + 0x17c], ecx */
  W32((uint32_t)(esi + 0x17cu), ecx);
/* 72ecd6: mov edx, dword ptr [edi + 0x180] */
  edx = R32((uint32_t)(edi + 0x180u));
/* 72ecdc: lea eax, [edi + 0x184] */
  eax = (uint32_t)(edi + 0x184u);
/* 72ece2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72ece3: lea ecx, [esi + 0x184] */
  ecx = (uint32_t)(esi + 0x184u);
/* 72ece9: mov dword ptr [esi + 0x180], edx */
  W32((uint32_t)(esi + 0x180u), edx);
/* 72ecef: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x72ecf5u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 72ecf5: lea ecx, [edi + 0x190] */
  ecx = (uint32_t)(edi + 0x190u);
/* 72ecfb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72ecfc: lea ecx, [esi + 0x190] */
  ecx = (uint32_t)(esi + 0x190u);
/* 72ed02: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x72ed08u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 72ed08: lea edx, [edi + 0x19c] */
  edx = (uint32_t)(edi + 0x19cu);
/* 72ed0e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 72ed0f: lea ecx, [esi + 0x19c] */
  ecx = (uint32_t)(esi + 0x19cu);
/* 72ed15: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x72ed1bu); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 72ed1b: lea eax, [edi + 0x1a8] */
  eax = (uint32_t)(edi + 0x1a8u);
/* 72ed21: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72ed22: lea ecx, [esi + 0x1a8] */
  ecx = (uint32_t)(esi + 0x1a8u);
/* 72ed28: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x72ed2eu); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 72ed2e: lea ecx, [edi + 0x1b4] */
  ecx = (uint32_t)(edi + 0x1b4u);
/* 72ed34: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72ed35: lea ecx, [esi + 0x1b4] */
  ecx = (uint32_t)(esi + 0x1b4u);
/* 72ed3b: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x72ed41u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 72ed41: mov edx, dword ptr [edi + 0x1c0] */
  edx = R32((uint32_t)(edi + 0x1c0u));
/* 72ed47: lea eax, [edi + 0x1c4] */
  eax = (uint32_t)(edi + 0x1c4u);
/* 72ed4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72ed4e: lea ecx, [esi + 0x1c4] */
  ecx = (uint32_t)(esi + 0x1c4u);
/* 72ed54: mov dword ptr [esi + 0x1c0], edx */
  W32((uint32_t)(esi + 0x1c0u), edx);
/* 72ed5a: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x72ed60u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 72ed60: lea ecx, [edi + 0x1d0] */
  ecx = (uint32_t)(edi + 0x1d0u);
/* 72ed66: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72ed67: lea ecx, [esi + 0x1d0] */
  ecx = (uint32_t)(esi + 0x1d0u);
/* 72ed6d: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x72ed73u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 72ed73: lea edx, [edi + 0x1dc] */
  edx = (uint32_t)(edi + 0x1dcu);
/* 72ed79: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 72ed7a: lea ecx, [esi + 0x1dc] */
  ecx = (uint32_t)(esi + 0x1dcu);
/* 72ed80: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x72ed86u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 72ed86: lea eax, [edi + 0x1e8] */
  eax = (uint32_t)(edi + 0x1e8u);
/* 72ed8c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72ed8d: lea ecx, [esi + 0x1e8] */
  ecx = (uint32_t)(esi + 0x1e8u);
/* 72ed93: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x72ed99u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 72ed99: mov ecx, dword ptr [edi + 0x1f4] */
  ecx = R32((uint32_t)(edi + 0x1f4u));
/* 72ed9f: lea edx, [edi + 0x1f8] */
  edx = (uint32_t)(edi + 0x1f8u);
/* 72eda5: mov dword ptr [esi + 0x1f4], ecx */
  W32((uint32_t)(esi + 0x1f4u), ecx);
/* 72edab: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 72edac: lea ecx, [esi + 0x1f8] */
  ecx = (uint32_t)(esi + 0x1f8u);
/* 72edb2: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x72edb8u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 72edb8: mov eax, dword ptr [edi + 0x204] */
  eax = R32((uint32_t)(edi + 0x204u));
/* 72edbe: lea ecx, [edi + 0x208] */
  ecx = (uint32_t)(edi + 0x208u);
/* 72edc4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72edc5: mov dword ptr [esi + 0x204], eax */
  W32((uint32_t)(esi + 0x204u), eax);
/* 72edcb: lea ecx, [esi + 0x208] */
  ecx = (uint32_t)(esi + 0x208u);
/* 72edd1: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x72edd7u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 72edd7: add edi, 0x214 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x214u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 72eddd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72edde: lea ecx, [esi + 0x214] */
  ecx = (uint32_t)(esi + 0x214u);
/* 72ede4: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x72edeau); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 72edea: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72edeb: mov eax, esi */
  eax = esi;
/* 72eded: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72edee: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72ee70(void) {
  LOAD_REGS();
L_72ee70: /* 72ee70: jmp 0x6c1cdf */
  SPILL(); f_6c1cdf(); return;
}

void f_72ee90(void) {
  LOAD_REGS();
L_72ee90: /* 72ee90: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 72ee94: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72ee95: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72ee96: mov esi, ecx */
  esi = ecx;
/* 72ee98: call 0x6cabe1 */
  esp -= 4; W32(esp, 0x72ee9du); SPILL(); f_6cabe1(); if (g_unwind) return; RELOAD();
/* 72ee9d: mov eax, esi */
  eax = esi;
/* 72ee9f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72eea0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72eec0(void) {
  LOAD_REGS();
L_72eec0: /* 72eec0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 72eec2: push 0x9c49f5 */
  { uint32_t v = 0x9c49f5u; esp -= 4; W32(esp, v); }
/* 72eec7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72eecd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72eece: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 72eed5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72eed6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72eed7: mov esi, ecx */
  esi = ecx;
/* 72eed9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 72eedd: mov dword ptr [esi], 0x9f8f58 */
  W32((uint32_t)(esi), 0x9f8f58u);
/* 72eee3: mov dword ptr [esi + 0x28], 0x9f8f48 */
  W32((uint32_t)(esi + 0x28u), 0x9f8f48u);
/* 72eeea: mov dword ptr [esi + 0x2c], 0x9f8f44 */
  W32((uint32_t)(esi + 0x2cu), 0x9f8f44u);
/* 72eef1: mov dword ptr [esp + 0x10], 2 */
  W32((uint32_t)(esp + 0x10u), 0x2u);
/* 72eef9: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x72eeffu); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 72eeff: lea ecx, [esi + 0x170] */
  ecx = (uint32_t)(esi + 0x170u);
/* 72ef05: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 72ef0a: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x72ef0fu); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 72ef0f: lea ecx, [esi + 0x128] */
  ecx = (uint32_t)(esi + 0x128u);
/* 72ef15: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 72ef1a: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x72ef20u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 72ef20: mov ecx, esi */
  ecx = esi;
/* 72ef22: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 72ef2a: call 0x6cb6f4 */
  esp -= 4; W32(esp, 0x72ef2fu); SPILL(); f_6cb6f4(); if (g_unwind) return; RELOAD();
/* 72ef2f: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 72ef33: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72ef34: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72ef3b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72ef3e: ret  */
  esp += 4; SPILL(); return;
}

void f_72ef60(void) {
  LOAD_REGS();
L_72ef60: /* 72ef60: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 72ef63: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72ef64: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* 72ef68: mov dword ptr [esp + 4], 0xb79f88 */
  W32((uint32_t)(esp + 0x4u), 0xb79f88u);
/* 72ef70: mov dword ptr [esp + 8], 0xffffffff */
  W32((uint32_t)(esp + 0x8u), 0xffffffffu);
/* 72ef78: call 0x6c38b4 */
  esp -= 4; W32(esp, 0x72ef7du); SPILL(); f_6c38b4(); if (g_unwind) return; RELOAD();
/* 72ef7d: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 72ef82: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 72ef86: cmp esi, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 72ef89: jge 0x72efcb */
  if ((sf == of)) goto L_72efcb;
L_72ef8b: /* 72ef8b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72ef8c: mov edi, dword ptr [esp + 8] */
  edi = R32((uint32_t)(esp + 0x8u));
L_72ef90: /* 72ef90: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 72ef92: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 72ef95: mov dword ptr [ecx + 0x84], 1 */
  W32((uint32_t)(ecx + 0x84u), 0x1u);
L_72ef9f: /* 72ef9f: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
L_72efa4: /* 72efa4: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 72efa7: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 72efa8: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 72efaa: jge 0x72efca */
  if ((sf == of)) goto L_72efca;
L_72efac: /* 72efac: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 72efae: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 72efb1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 72efb3: je 0x72efa4 */
  if (zf) goto L_72efa4;
L_72efb5: /* 72efb5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72efb6: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x72efbcu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 72efbc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 72efbe: je 0x72ef9f */
  if (zf) goto L_72ef9f;
L_72efc0: /* 72efc0: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 72efc5: cmp esi, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 72efc8: jl 0x72ef90 */
  if ((sf != of)) goto L_72ef90;
L_72efca: /* 72efca: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_72efcb: /* 72efcb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72efcc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72efcf: ret  */
  esp += 4; SPILL(); return;
}

void f_72eff0(void) {
  LOAD_REGS();
L_72eff0: /* 72eff0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 72eff2: push 0x9c4a27 */
  { uint32_t v = 0x9c4a27u; esp -= 4; W32(esp, v); }
/* 72eff7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72effd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72effe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 72f005: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72f006: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72f007: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72f008: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 72f00c: mov esi, ecx */
  esi = ecx;
/* 72f00e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72f00f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 72f013: call 0x6c2504 */
  esp -= 4; W32(esp, 0x72f018u); SPILL(); f_6c2504(); if (g_unwind) return; RELOAD();
/* 72f018: mov dword ptr [esi], 0x9f8f58 */
  W32((uint32_t)(esi), 0x9f8f58u);
/* 72f01e: mov dword ptr [esi + 0x28], 0x9f8f48 */
  W32((uint32_t)(esi + 0x28u), 0x9f8f48u);
/* 72f025: mov dword ptr [esi + 0x2c], 0x9f8f44 */
  W32((uint32_t)(esi + 0x2cu), 0x9f8f44u);
/* 72f02c: mov eax, dword ptr [edi + 0x68] */
  eax = R32((uint32_t)(edi + 0x68u));
/* 72f02f: mov dword ptr [esi + 0x68], eax */
  W32((uint32_t)(esi + 0x68u), eax);
/* 72f032: mov ecx, dword ptr [edi + 0x6c] */
  ecx = R32((uint32_t)(edi + 0x6cu));
/* 72f035: mov dword ptr [esi + 0x6c], ecx */
  W32((uint32_t)(esi + 0x6cu), ecx);
/* 72f038: mov edx, dword ptr [edi + 0x70] */
  edx = R32((uint32_t)(edi + 0x70u));
/* 72f03b: mov dword ptr [esi + 0x70], edx */
  W32((uint32_t)(esi + 0x70u), edx);
/* 72f03e: mov eax, dword ptr [edi + 0x74] */
  eax = R32((uint32_t)(edi + 0x74u));
/* 72f041: mov dword ptr [esi + 0x74], eax */
  W32((uint32_t)(esi + 0x74u), eax);
/* 72f044: mov ecx, dword ptr [edi + 0x78] */
  ecx = R32((uint32_t)(edi + 0x78u));
/* 72f047: mov dword ptr [esi + 0x78], ecx */
  W32((uint32_t)(esi + 0x78u), ecx);
/* 72f04a: mov edx, dword ptr [edi + 0x7c] */
  edx = R32((uint32_t)(edi + 0x7cu));
/* 72f04d: mov dword ptr [esi + 0x7c], edx */
  W32((uint32_t)(esi + 0x7cu), edx);
/* 72f050: mov eax, dword ptr [edi + 0x80] */
  eax = R32((uint32_t)(edi + 0x80u));
/* 72f056: mov dword ptr [esi + 0x80], eax */
  W32((uint32_t)(esi + 0x80u), eax);
/* 72f05c: mov ecx, dword ptr [edi + 0x84] */
  ecx = R32((uint32_t)(edi + 0x84u));
/* 72f062: mov dword ptr [esi + 0x84], ecx */
  W32((uint32_t)(esi + 0x84u), ecx);
/* 72f068: mov edx, dword ptr [edi + 0x88] */
  edx = R32((uint32_t)(edi + 0x88u));
/* 72f06e: mov dword ptr [esi + 0x88], edx */
  W32((uint32_t)(esi + 0x88u), edx);
/* 72f074: mov eax, dword ptr [edi + 0x8c] */
  eax = R32((uint32_t)(edi + 0x8cu));
/* 72f07a: mov dword ptr [esi + 0x8c], eax */
  W32((uint32_t)(esi + 0x8cu), eax);
/* 72f080: mov ecx, dword ptr [edi + 0x90] */
  ecx = R32((uint32_t)(edi + 0x90u));
/* 72f086: mov dword ptr [esi + 0x90], ecx */
  W32((uint32_t)(esi + 0x90u), ecx);
/* 72f08c: mov edx, dword ptr [edi + 0x94] */
  edx = R32((uint32_t)(edi + 0x94u));
/* 72f092: mov dword ptr [esi + 0x94], edx */
  W32((uint32_t)(esi + 0x94u), edx);
/* 72f098: mov eax, dword ptr [edi + 0x98] */
  eax = R32((uint32_t)(edi + 0x98u));
/* 72f09e: mov dword ptr [esi + 0x98], eax */
  W32((uint32_t)(esi + 0x98u), eax);
/* 72f0a4: mov ecx, dword ptr [edi + 0x9c] */
  ecx = R32((uint32_t)(edi + 0x9cu));
/* 72f0aa: mov dword ptr [esi + 0x9c], ecx */
  W32((uint32_t)(esi + 0x9cu), ecx);
/* 72f0b0: mov edx, dword ptr [edi + 0xa0] */
  edx = R32((uint32_t)(edi + 0xa0u));
/* 72f0b6: mov dword ptr [esi + 0xa0], edx */
  W32((uint32_t)(esi + 0xa0u), edx);
/* 72f0bc: mov eax, dword ptr [edi + 0xa4] */
  eax = R32((uint32_t)(edi + 0xa4u));
/* 72f0c2: mov dword ptr [esi + 0xa4], eax */
  W32((uint32_t)(esi + 0xa4u), eax);
/* 72f0c8: mov ecx, dword ptr [edi + 0xa8] */
  ecx = R32((uint32_t)(edi + 0xa8u));
/* 72f0ce: mov dword ptr [esi + 0xa8], ecx */
  W32((uint32_t)(esi + 0xa8u), ecx);
/* 72f0d4: mov edx, dword ptr [edi + 0xac] */
  edx = R32((uint32_t)(edi + 0xacu));
/* 72f0da: mov dword ptr [esi + 0xac], edx */
  W32((uint32_t)(esi + 0xacu), edx);
/* 72f0e0: lea eax, [edi + 0xb0] */
  eax = (uint32_t)(edi + 0xb0u);
/* 72f0e6: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 72f0e8: lea ecx, [esi + 0xb0] */
  ecx = (uint32_t)(esi + 0xb0u);
/* 72f0ee: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 72f0f0: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 72f0f3: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 72f0f6: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 72f0f9: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 72f0fc: mov ecx, dword ptr [edi + 0xbc] */
  ecx = R32((uint32_t)(edi + 0xbcu));
/* 72f102: mov dword ptr [esi + 0xbc], ecx */
  W32((uint32_t)(esi + 0xbcu), ecx);
/* 72f108: lea edx, [edi + 0xc0] */
  edx = (uint32_t)(edi + 0xc0u);
/* 72f10e: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 72f110: lea eax, [esi + 0xc0] */
  eax = (uint32_t)(esi + 0xc0u);
/* 72f116: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 72f118: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 72f11b: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 72f11e: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 72f121: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 72f124: mov eax, dword ptr [edi + 0xcc] */
  eax = R32((uint32_t)(edi + 0xccu));
/* 72f12a: mov dword ptr [esi + 0xcc], eax */
  W32((uint32_t)(esi + 0xccu), eax);
/* 72f130: mov dword ptr [esi + 0xd0], 0x9f7e94 */
  W32((uint32_t)(esi + 0xd0u), 0x9f7e94u);
/* 72f13a: mov ecx, dword ptr [edi + 0xd4] */
  ecx = R32((uint32_t)(edi + 0xd4u));
/* 72f140: mov dword ptr [esi + 0xd4], ecx */
  W32((uint32_t)(esi + 0xd4u), ecx);
/* 72f146: mov edx, dword ptr [edi + 0xd8] */
  edx = R32((uint32_t)(edi + 0xd8u));
/* 72f14c: mov dword ptr [esi + 0xd8], edx */
  W32((uint32_t)(esi + 0xd8u), edx);
/* 72f152: mov eax, dword ptr [edi + 0xdc] */
  eax = R32((uint32_t)(edi + 0xdcu));
/* 72f158: mov dword ptr [esi + 0xdc], eax */
  W32((uint32_t)(esi + 0xdcu), eax);
/* 72f15e: lea ecx, [edi + 0xe0] */
  ecx = (uint32_t)(edi + 0xe0u);
/* 72f164: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 72f166: lea edx, [esi + 0xe0] */
  edx = (uint32_t)(esi + 0xe0u);
/* 72f16c: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 72f16e: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 72f171: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 72f179: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 72f17c: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 72f17f: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 72f182: lea edx, [edi + 0xec] */
  edx = (uint32_t)(edi + 0xecu);
/* 72f188: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 72f18a: lea eax, [esi + 0xec] */
  eax = (uint32_t)(esi + 0xecu);
/* 72f190: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 72f192: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 72f195: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 72f198: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 72f19b: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 72f19e: mov eax, dword ptr [edi + 0xf8] */
  eax = R32((uint32_t)(edi + 0xf8u));
/* 72f1a4: mov dword ptr [esi + 0xf8], eax */
  W32((uint32_t)(esi + 0xf8u), eax);
/* 72f1aa: mov ecx, dword ptr [edi + 0xfc] */
  ecx = R32((uint32_t)(edi + 0xfcu));
/* 72f1b0: mov dword ptr [esi + 0xfc], ecx */
  W32((uint32_t)(esi + 0xfcu), ecx);
/* 72f1b6: mov edx, dword ptr [edi + 0x100] */
  edx = R32((uint32_t)(edi + 0x100u));
/* 72f1bc: mov dword ptr [esi + 0x100], edx */
  W32((uint32_t)(esi + 0x100u), edx);
/* 72f1c2: mov eax, dword ptr [edi + 0x104] */
  eax = R32((uint32_t)(edi + 0x104u));
/* 72f1c8: mov dword ptr [esi + 0x104], eax */
  W32((uint32_t)(esi + 0x104u), eax);
/* 72f1ce: mov ecx, dword ptr [edi + 0x108] */
  ecx = R32((uint32_t)(edi + 0x108u));
/* 72f1d4: mov dword ptr [esi + 0x108], ecx */
  W32((uint32_t)(esi + 0x108u), ecx);
/* 72f1da: mov edx, dword ptr [edi + 0x10c] */
  edx = R32((uint32_t)(edi + 0x10cu));
/* 72f1e0: mov dword ptr [esi + 0x10c], edx */
  W32((uint32_t)(esi + 0x10cu), edx);
/* 72f1e6: mov eax, dword ptr [edi + 0x110] */
  eax = R32((uint32_t)(edi + 0x110u));
/* 72f1ec: mov dword ptr [esi + 0x110], eax */
  W32((uint32_t)(esi + 0x110u), eax);
/* 72f1f2: mov ecx, dword ptr [edi + 0x114] */
  ecx = R32((uint32_t)(edi + 0x114u));
/* 72f1f8: mov dword ptr [esi + 0x114], ecx */
  W32((uint32_t)(esi + 0x114u), ecx);
/* 72f1fe: mov edx, dword ptr [edi + 0x118] */
  edx = R32((uint32_t)(edi + 0x118u));
/* 72f204: mov dword ptr [esi + 0x118], edx */
  W32((uint32_t)(esi + 0x118u), edx);
/* 72f20a: mov eax, dword ptr [edi + 0x11c] */
  eax = R32((uint32_t)(edi + 0x11cu));
/* 72f210: mov dword ptr [esi + 0x11c], eax */
  W32((uint32_t)(esi + 0x11cu), eax);
/* 72f216: mov ecx, dword ptr [edi + 0x120] */
  ecx = R32((uint32_t)(edi + 0x120u));
/* 72f21c: mov dword ptr [esi + 0x120], ecx */
  W32((uint32_t)(esi + 0x120u), ecx);
/* 72f222: mov edx, dword ptr [edi + 0x124] */
  edx = R32((uint32_t)(edi + 0x124u));
/* 72f228: lea eax, [edi + 0x128] */
  eax = (uint32_t)(edi + 0x128u);
/* 72f22e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72f22f: lea ecx, [esi + 0x128] */
  ecx = (uint32_t)(esi + 0x128u);
/* 72f235: mov dword ptr [esi + 0x124], edx */
  W32((uint32_t)(esi + 0x124u), edx);
/* 72f23b: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x72f241u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 72f241: mov ecx, dword ptr [edi + 0x134] */
  ecx = R32((uint32_t)(edi + 0x134u));
/* 72f247: mov dword ptr [esi + 0x134], ecx */
  W32((uint32_t)(esi + 0x134u), ecx);
/* 72f24d: mov edx, dword ptr [edi + 0x138] */
  edx = R32((uint32_t)(edi + 0x138u));
/* 72f253: mov dword ptr [esi + 0x138], edx */
  W32((uint32_t)(esi + 0x138u), edx);
/* 72f259: mov eax, dword ptr [edi + 0x13c] */
  eax = R32((uint32_t)(edi + 0x13cu));
/* 72f25f: mov dword ptr [esi + 0x13c], eax */
  W32((uint32_t)(esi + 0x13cu), eax);
/* 72f265: mov ecx, dword ptr [edi + 0x140] */
  ecx = R32((uint32_t)(edi + 0x140u));
/* 72f26b: mov dword ptr [esi + 0x140], ecx */
  W32((uint32_t)(esi + 0x140u), ecx);
/* 72f271: mov edx, dword ptr [edi + 0x144] */
  edx = R32((uint32_t)(edi + 0x144u));
/* 72f277: mov dword ptr [esi + 0x144], edx */
  W32((uint32_t)(esi + 0x144u), edx);
/* 72f27d: mov eax, dword ptr [edi + 0x148] */
  eax = R32((uint32_t)(edi + 0x148u));
/* 72f283: mov dword ptr [esi + 0x148], eax */
  W32((uint32_t)(esi + 0x148u), eax);
/* 72f289: mov ecx, dword ptr [edi + 0x14c] */
  ecx = R32((uint32_t)(edi + 0x14cu));
/* 72f28f: mov dword ptr [esi + 0x14c], ecx */
  W32((uint32_t)(esi + 0x14cu), ecx);
/* 72f295: mov dl, byte ptr [edi + 0x150] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x150u))) & 0xffu);
/* 72f29b: mov byte ptr [esi + 0x150], dl */
  W8((uint32_t)(esi + 0x150u), (edx & 0xffu));
/* 72f2a1: mov eax, dword ptr [edi + 0x154] */
  eax = R32((uint32_t)(edi + 0x154u));
/* 72f2a7: mov dword ptr [esi + 0x154], eax */
  W32((uint32_t)(esi + 0x154u), eax);
/* 72f2ad: mov ecx, dword ptr [edi + 0x158] */
  ecx = R32((uint32_t)(edi + 0x158u));
/* 72f2b3: mov dword ptr [esi + 0x158], ecx */
  W32((uint32_t)(esi + 0x158u), ecx);
/* 72f2b9: mov edx, dword ptr [edi + 0x15c] */
  edx = R32((uint32_t)(edi + 0x15cu));
/* 72f2bf: mov dword ptr [esi + 0x15c], edx */
  W32((uint32_t)(esi + 0x15cu), edx);
/* 72f2c5: mov eax, dword ptr [edi + 0x160] */
  eax = R32((uint32_t)(edi + 0x160u));
/* 72f2cb: mov dword ptr [esi + 0x160], eax */
  W32((uint32_t)(esi + 0x160u), eax);
/* 72f2d1: mov ecx, dword ptr [edi + 0x164] */
  ecx = R32((uint32_t)(edi + 0x164u));
/* 72f2d7: mov dword ptr [esi + 0x164], ecx */
  W32((uint32_t)(esi + 0x164u), ecx);
/* 72f2dd: mov edx, dword ptr [edi + 0x168] */
  edx = R32((uint32_t)(edi + 0x168u));
/* 72f2e3: lea ecx, [edi + 0x170] */
  ecx = (uint32_t)(edi + 0x170u);
/* 72f2e9: mov dword ptr [esi + 0x168], edx */
  W32((uint32_t)(esi + 0x168u), edx);
/* 72f2ef: mov eax, dword ptr [edi + 0x16c] */
  eax = R32((uint32_t)(edi + 0x16cu));
/* 72f2f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72f2f6: lea ecx, [esi + 0x170] */
  ecx = (uint32_t)(esi + 0x170u);
/* 72f2fc: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* 72f301: mov dword ptr [esi + 0x16c], eax */
  W32((uint32_t)(esi + 0x16cu), eax);
/* 72f307: call 0x6c1a00 */
  esp -= 4; W32(esp, 0x72f30cu); SPILL(); f_6c1a00(); if (g_unwind) return; RELOAD();
/* 72f30c: mov edx, dword ptr [edi + 0x17c] */
  edx = R32((uint32_t)(edi + 0x17cu));
/* 72f312: mov dword ptr [esi + 0x17c], edx */
  W32((uint32_t)(esi + 0x17cu), edx);
/* 72f318: mov eax, dword ptr [edi + 0x180] */
  eax = R32((uint32_t)(edi + 0x180u));
/* 72f31e: mov dword ptr [esi + 0x180], eax */
  W32((uint32_t)(esi + 0x180u), eax);
/* 72f324: mov ecx, dword ptr [edi + 0x184] */
  ecx = R32((uint32_t)(edi + 0x184u));
/* 72f32a: mov dword ptr [esi + 0x184], ecx */
  W32((uint32_t)(esi + 0x184u), ecx);
/* 72f330: mov edx, dword ptr [edi + 0x188] */
  edx = R32((uint32_t)(edi + 0x188u));
/* 72f336: mov dword ptr [esi + 0x188], edx */
  W32((uint32_t)(esi + 0x188u), edx);
/* 72f33c: mov eax, dword ptr [edi + 0x18c] */
  eax = R32((uint32_t)(edi + 0x18cu));
/* 72f342: mov dword ptr [esi + 0x18c], eax */
  W32((uint32_t)(esi + 0x18cu), eax);
/* 72f348: mov ecx, dword ptr [edi + 0x190] */
  ecx = R32((uint32_t)(edi + 0x190u));
/* 72f34e: mov dword ptr [esi + 0x190], ecx */
  W32((uint32_t)(esi + 0x190u), ecx);
/* 72f354: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 72f358: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72f359: mov eax, esi */
  eax = esi;
/* 72f35b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72f35c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72f363: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72f366: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72f450(void) {
  LOAD_REGS();
L_72f450: /* 72f450: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72f451: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72f452: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 72f456: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72f457: mov esi, ecx */
  esi = ecx;
/* 72f459: call 0x6cbedd */
  esp -= 4; W32(esp, 0x72f45eu); SPILL(); f_6cbedd(); if (g_unwind) return; RELOAD();
/* 72f45e: mov eax, dword ptr [edi + 0x68] */
  eax = R32((uint32_t)(edi + 0x68u));
/* 72f461: mov dword ptr [esi + 0x68], eax */
  W32((uint32_t)(esi + 0x68u), eax);
/* 72f464: mov ecx, dword ptr [edi + 0x6c] */
  ecx = R32((uint32_t)(edi + 0x6cu));
/* 72f467: mov dword ptr [esi + 0x6c], ecx */
  W32((uint32_t)(esi + 0x6cu), ecx);
/* 72f46a: mov edx, dword ptr [edi + 0x70] */
  edx = R32((uint32_t)(edi + 0x70u));
/* 72f46d: mov dword ptr [esi + 0x70], edx */
  W32((uint32_t)(esi + 0x70u), edx);
/* 72f470: mov eax, dword ptr [edi + 0x74] */
  eax = R32((uint32_t)(edi + 0x74u));
/* 72f473: mov dword ptr [esi + 0x74], eax */
  W32((uint32_t)(esi + 0x74u), eax);
/* 72f476: mov ecx, dword ptr [edi + 0x78] */
  ecx = R32((uint32_t)(edi + 0x78u));
/* 72f479: mov dword ptr [esi + 0x78], ecx */
  W32((uint32_t)(esi + 0x78u), ecx);
/* 72f47c: mov edx, dword ptr [edi + 0x7c] */
  edx = R32((uint32_t)(edi + 0x7cu));
/* 72f47f: mov dword ptr [esi + 0x7c], edx */
  W32((uint32_t)(esi + 0x7cu), edx);
/* 72f482: mov eax, dword ptr [edi + 0x80] */
  eax = R32((uint32_t)(edi + 0x80u));
/* 72f488: mov dword ptr [esi + 0x80], eax */
  W32((uint32_t)(esi + 0x80u), eax);
/* 72f48e: mov ecx, dword ptr [edi + 0x84] */
  ecx = R32((uint32_t)(edi + 0x84u));
/* 72f494: mov dword ptr [esi + 0x84], ecx */
  W32((uint32_t)(esi + 0x84u), ecx);
/* 72f49a: mov edx, dword ptr [edi + 0x88] */
  edx = R32((uint32_t)(edi + 0x88u));
/* 72f4a0: mov dword ptr [esi + 0x88], edx */
  W32((uint32_t)(esi + 0x88u), edx);
/* 72f4a6: mov eax, dword ptr [edi + 0x8c] */
  eax = R32((uint32_t)(edi + 0x8cu));
/* 72f4ac: mov dword ptr [esi + 0x8c], eax */
  W32((uint32_t)(esi + 0x8cu), eax);
/* 72f4b2: mov ecx, dword ptr [edi + 0x90] */
  ecx = R32((uint32_t)(edi + 0x90u));
/* 72f4b8: mov dword ptr [esi + 0x90], ecx */
  W32((uint32_t)(esi + 0x90u), ecx);
/* 72f4be: mov edx, dword ptr [edi + 0x94] */
  edx = R32((uint32_t)(edi + 0x94u));
/* 72f4c4: mov dword ptr [esi + 0x94], edx */
  W32((uint32_t)(esi + 0x94u), edx);
/* 72f4ca: mov eax, dword ptr [edi + 0x98] */
  eax = R32((uint32_t)(edi + 0x98u));
/* 72f4d0: mov dword ptr [esi + 0x98], eax */
  W32((uint32_t)(esi + 0x98u), eax);
/* 72f4d6: mov ecx, dword ptr [edi + 0x9c] */
  ecx = R32((uint32_t)(edi + 0x9cu));
/* 72f4dc: mov dword ptr [esi + 0x9c], ecx */
  W32((uint32_t)(esi + 0x9cu), ecx);
/* 72f4e2: mov edx, dword ptr [edi + 0xa0] */
  edx = R32((uint32_t)(edi + 0xa0u));
/* 72f4e8: mov dword ptr [esi + 0xa0], edx */
  W32((uint32_t)(esi + 0xa0u), edx);
/* 72f4ee: mov eax, dword ptr [edi + 0xa4] */
  eax = R32((uint32_t)(edi + 0xa4u));
/* 72f4f4: mov dword ptr [esi + 0xa4], eax */
  W32((uint32_t)(esi + 0xa4u), eax);
/* 72f4fa: mov ecx, dword ptr [edi + 0xa8] */
  ecx = R32((uint32_t)(edi + 0xa8u));
/* 72f500: mov dword ptr [esi + 0xa8], ecx */
  W32((uint32_t)(esi + 0xa8u), ecx);
/* 72f506: mov edx, dword ptr [edi + 0xac] */
  edx = R32((uint32_t)(edi + 0xacu));
/* 72f50c: mov dword ptr [esi + 0xac], edx */
  W32((uint32_t)(esi + 0xacu), edx);
/* 72f512: lea eax, [edi + 0xb0] */
  eax = (uint32_t)(edi + 0xb0u);
/* 72f518: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 72f51a: lea ecx, [esi + 0xb0] */
  ecx = (uint32_t)(esi + 0xb0u);
/* 72f520: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 72f522: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 72f525: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 72f528: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 72f52b: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 72f52e: mov ecx, dword ptr [edi + 0xbc] */
  ecx = R32((uint32_t)(edi + 0xbcu));
/* 72f534: mov dword ptr [esi + 0xbc], ecx */
  W32((uint32_t)(esi + 0xbcu), ecx);
/* 72f53a: lea edx, [edi + 0xc0] */
  edx = (uint32_t)(edi + 0xc0u);
/* 72f540: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 72f542: lea eax, [esi + 0xc0] */
  eax = (uint32_t)(esi + 0xc0u);
/* 72f548: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 72f54a: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 72f54d: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 72f550: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 72f553: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 72f556: mov eax, dword ptr [edi + 0xcc] */
  eax = R32((uint32_t)(edi + 0xccu));
/* 72f55c: mov dword ptr [esi + 0xcc], eax */
  W32((uint32_t)(esi + 0xccu), eax);
/* 72f562: mov ecx, dword ptr [edi + 0xd4] */
  ecx = R32((uint32_t)(edi + 0xd4u));
/* 72f568: mov dword ptr [esi + 0xd4], ecx */
  W32((uint32_t)(esi + 0xd4u), ecx);
/* 72f56e: mov edx, dword ptr [edi + 0xd8] */
  edx = R32((uint32_t)(edi + 0xd8u));
/* 72f574: mov dword ptr [esi + 0xd8], edx */
  W32((uint32_t)(esi + 0xd8u), edx);
/* 72f57a: mov eax, dword ptr [edi + 0xdc] */
  eax = R32((uint32_t)(edi + 0xdcu));
/* 72f580: mov dword ptr [esi + 0xdc], eax */
  W32((uint32_t)(esi + 0xdcu), eax);
/* 72f586: lea ecx, [edi + 0xe0] */
  ecx = (uint32_t)(edi + 0xe0u);
/* 72f58c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 72f58e: lea edx, [esi + 0xe0] */
  edx = (uint32_t)(esi + 0xe0u);
/* 72f594: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 72f596: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 72f599: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 72f59c: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 72f59f: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 72f5a2: lea edx, [edi + 0xec] */
  edx = (uint32_t)(edi + 0xecu);
/* 72f5a8: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 72f5aa: lea eax, [esi + 0xec] */
  eax = (uint32_t)(esi + 0xecu);
/* 72f5b0: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 72f5b2: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 72f5b5: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 72f5b8: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 72f5bb: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 72f5be: mov eax, dword ptr [edi + 0xf8] */
  eax = R32((uint32_t)(edi + 0xf8u));
/* 72f5c4: mov dword ptr [esi + 0xf8], eax */
  W32((uint32_t)(esi + 0xf8u), eax);
/* 72f5ca: mov ecx, dword ptr [edi + 0xfc] */
  ecx = R32((uint32_t)(edi + 0xfcu));
/* 72f5d0: mov dword ptr [esi + 0xfc], ecx */
  W32((uint32_t)(esi + 0xfcu), ecx);
/* 72f5d6: mov edx, dword ptr [edi + 0x100] */
  edx = R32((uint32_t)(edi + 0x100u));
/* 72f5dc: mov dword ptr [esi + 0x100], edx */
  W32((uint32_t)(esi + 0x100u), edx);
/* 72f5e2: mov eax, dword ptr [edi + 0x104] */
  eax = R32((uint32_t)(edi + 0x104u));
/* 72f5e8: mov dword ptr [esi + 0x104], eax */
  W32((uint32_t)(esi + 0x104u), eax);
/* 72f5ee: mov ecx, dword ptr [edi + 0x108] */
  ecx = R32((uint32_t)(edi + 0x108u));
/* 72f5f4: mov dword ptr [esi + 0x108], ecx */
  W32((uint32_t)(esi + 0x108u), ecx);
/* 72f5fa: mov edx, dword ptr [edi + 0x10c] */
  edx = R32((uint32_t)(edi + 0x10cu));
/* 72f600: mov dword ptr [esi + 0x10c], edx */
  W32((uint32_t)(esi + 0x10cu), edx);
/* 72f606: mov eax, dword ptr [edi + 0x110] */
  eax = R32((uint32_t)(edi + 0x110u));
/* 72f60c: mov dword ptr [esi + 0x110], eax */
  W32((uint32_t)(esi + 0x110u), eax);
/* 72f612: mov ecx, dword ptr [edi + 0x114] */
  ecx = R32((uint32_t)(edi + 0x114u));
/* 72f618: mov dword ptr [esi + 0x114], ecx */
  W32((uint32_t)(esi + 0x114u), ecx);
/* 72f61e: mov edx, dword ptr [edi + 0x118] */
  edx = R32((uint32_t)(edi + 0x118u));
/* 72f624: mov dword ptr [esi + 0x118], edx */
  W32((uint32_t)(esi + 0x118u), edx);
/* 72f62a: mov eax, dword ptr [edi + 0x11c] */
  eax = R32((uint32_t)(edi + 0x11cu));
/* 72f630: mov dword ptr [esi + 0x11c], eax */
  W32((uint32_t)(esi + 0x11cu), eax);
/* 72f636: mov ecx, dword ptr [edi + 0x120] */
  ecx = R32((uint32_t)(edi + 0x120u));
/* 72f63c: mov dword ptr [esi + 0x120], ecx */
  W32((uint32_t)(esi + 0x120u), ecx);
/* 72f642: mov edx, dword ptr [edi + 0x124] */
  edx = R32((uint32_t)(edi + 0x124u));
/* 72f648: lea eax, [edi + 0x128] */
  eax = (uint32_t)(edi + 0x128u);
/* 72f64e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72f64f: lea ecx, [esi + 0x128] */
  ecx = (uint32_t)(esi + 0x128u);
/* 72f655: mov dword ptr [esi + 0x124], edx */
  W32((uint32_t)(esi + 0x124u), edx);
/* 72f65b: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x72f661u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 72f661: mov ecx, dword ptr [edi + 0x134] */
  ecx = R32((uint32_t)(edi + 0x134u));
/* 72f667: mov dword ptr [esi + 0x134], ecx */
  W32((uint32_t)(esi + 0x134u), ecx);
/* 72f66d: mov edx, dword ptr [edi + 0x138] */
  edx = R32((uint32_t)(edi + 0x138u));
/* 72f673: mov dword ptr [esi + 0x138], edx */
  W32((uint32_t)(esi + 0x138u), edx);
/* 72f679: mov eax, dword ptr [edi + 0x13c] */
  eax = R32((uint32_t)(edi + 0x13cu));
/* 72f67f: mov dword ptr [esi + 0x13c], eax */
  W32((uint32_t)(esi + 0x13cu), eax);
/* 72f685: mov ecx, dword ptr [edi + 0x140] */
  ecx = R32((uint32_t)(edi + 0x140u));
/* 72f68b: mov dword ptr [esi + 0x140], ecx */
  W32((uint32_t)(esi + 0x140u), ecx);
/* 72f691: mov edx, dword ptr [edi + 0x144] */
  edx = R32((uint32_t)(edi + 0x144u));
/* 72f697: mov dword ptr [esi + 0x144], edx */
  W32((uint32_t)(esi + 0x144u), edx);
/* 72f69d: mov eax, dword ptr [edi + 0x148] */
  eax = R32((uint32_t)(edi + 0x148u));
/* 72f6a3: mov dword ptr [esi + 0x148], eax */
  W32((uint32_t)(esi + 0x148u), eax);
/* 72f6a9: mov ecx, dword ptr [edi + 0x14c] */
  ecx = R32((uint32_t)(edi + 0x14cu));
/* 72f6af: mov dword ptr [esi + 0x14c], ecx */
  W32((uint32_t)(esi + 0x14cu), ecx);
/* 72f6b5: mov dl, byte ptr [edi + 0x150] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x150u))) & 0xffu);
/* 72f6bb: mov byte ptr [esi + 0x150], dl */
  W8((uint32_t)(esi + 0x150u), (edx & 0xffu));
/* 72f6c1: mov eax, dword ptr [edi + 0x154] */
  eax = R32((uint32_t)(edi + 0x154u));
/* 72f6c7: mov dword ptr [esi + 0x154], eax */
  W32((uint32_t)(esi + 0x154u), eax);
/* 72f6cd: mov ecx, dword ptr [edi + 0x158] */
  ecx = R32((uint32_t)(edi + 0x158u));
/* 72f6d3: mov dword ptr [esi + 0x158], ecx */
  W32((uint32_t)(esi + 0x158u), ecx);
/* 72f6d9: mov edx, dword ptr [edi + 0x15c] */
  edx = R32((uint32_t)(edi + 0x15cu));
/* 72f6df: mov dword ptr [esi + 0x15c], edx */
  W32((uint32_t)(esi + 0x15cu), edx);
/* 72f6e5: mov eax, dword ptr [edi + 0x160] */
  eax = R32((uint32_t)(edi + 0x160u));
/* 72f6eb: mov dword ptr [esi + 0x160], eax */
  W32((uint32_t)(esi + 0x160u), eax);
/* 72f6f1: mov ecx, dword ptr [edi + 0x164] */
  ecx = R32((uint32_t)(edi + 0x164u));
/* 72f6f7: mov dword ptr [esi + 0x164], ecx */
  W32((uint32_t)(esi + 0x164u), ecx);
/* 72f6fd: mov edx, dword ptr [edi + 0x168] */
  edx = R32((uint32_t)(edi + 0x168u));
/* 72f703: lea ecx, [edi + 0x170] */
  ecx = (uint32_t)(edi + 0x170u);
/* 72f709: mov dword ptr [esi + 0x168], edx */
  W32((uint32_t)(esi + 0x168u), edx);
/* 72f70f: mov eax, dword ptr [edi + 0x16c] */
  eax = R32((uint32_t)(edi + 0x16cu));
/* 72f715: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72f716: lea ecx, [esi + 0x170] */
  ecx = (uint32_t)(esi + 0x170u);
/* 72f71c: mov dword ptr [esi + 0x16c], eax */
  W32((uint32_t)(esi + 0x16cu), eax);
/* 72f722: call 0x6c5eac */
  esp -= 4; W32(esp, 0x72f727u); SPILL(); f_6c5eac(); if (g_unwind) return; RELOAD();
/* 72f727: mov edx, dword ptr [edi + 0x17c] */
  edx = R32((uint32_t)(edi + 0x17cu));
/* 72f72d: mov dword ptr [esi + 0x17c], edx */
  W32((uint32_t)(esi + 0x17cu), edx);
/* 72f733: mov eax, dword ptr [edi + 0x180] */
  eax = R32((uint32_t)(edi + 0x180u));
/* 72f739: mov dword ptr [esi + 0x180], eax */
  W32((uint32_t)(esi + 0x180u), eax);
/* 72f73f: mov ecx, dword ptr [edi + 0x184] */
  ecx = R32((uint32_t)(edi + 0x184u));
/* 72f745: mov dword ptr [esi + 0x184], ecx */
  W32((uint32_t)(esi + 0x184u), ecx);
/* 72f74b: mov edx, dword ptr [edi + 0x188] */
  edx = R32((uint32_t)(edi + 0x188u));
/* 72f751: mov dword ptr [esi + 0x188], edx */
  W32((uint32_t)(esi + 0x188u), edx);
/* 72f757: mov eax, dword ptr [edi + 0x18c] */
  eax = R32((uint32_t)(edi + 0x18cu));
/* 72f75d: mov dword ptr [esi + 0x18c], eax */
  W32((uint32_t)(esi + 0x18cu), eax);
/* 72f763: mov ecx, dword ptr [edi + 0x190] */
  ecx = R32((uint32_t)(edi + 0x190u));
/* 72f769: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72f76a: mov dword ptr [esi + 0x190], ecx */
  W32((uint32_t)(esi + 0x190u), ecx);
/* 72f770: mov eax, esi */
  eax = esi;
/* 72f772: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72f773: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72f850(void) {
  LOAD_REGS();
L_72f850: /* 72f850: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72f851: mov esi, ecx */
  esi = ecx;
/* 72f853: call 0x6c66f4 */
  esp -= 4; W32(esp, 0x72f858u); SPILL(); f_6c66f4(); if (g_unwind) return; RELOAD();
/* 72f858: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 72f85d: je 0x72f86e */
  if (zf) goto L_72f86e;
L_72f85f: /* 72f85f: push 0x194 */
  { uint32_t v = 0x194u; esp -= 4; W32(esp, v); }
/* 72f864: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72f865: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x72f86bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 72f86b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_72f86e: /* 72f86e: mov eax, esi */
  eax = esi;
/* 72f870: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72f871: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72f890(void) {
  LOAD_REGS();
L_72f890: /* 72f890: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 72f891: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 72f895: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 72f898: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72f899: mov esi, ecx */
  esi = ecx;
/* 72f89b: je 0x72f8d0 */
  if (zf) goto L_72f8d0;
L_72f89d: /* 72f89d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 72f8a0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72f8a1: push 0x6c66f4 */
  { uint32_t v = 0x6c66f4u; esp -= 4; W32(esp, v); }
/* 72f8a6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 72f8a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72f8aa: push 0x194 */
  { uint32_t v = 0x194u; esp -= 4; W32(esp, v); }
/* 72f8af: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72f8b0: call 0x99ca3d */
  esp -= 4; W32(esp, 0x72f8b5u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 72f8b5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 72f8b8: je 0x72f8c8 */
  if (zf) goto L_72f8c8;
L_72f8ba: /* 72f8ba: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 72f8c0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 72f8c2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 72f8c4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72f8c5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x72f8c8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_72f8c8: /* 72f8c8: mov eax, edi */
  eax = edi;
/* 72f8ca: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72f8cb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72f8cc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 72f8cd: ret 4 */
  esp += 8; SPILL(); return;
L_72f8d0: /* 72f8d0: mov ecx, esi */
  ecx = esi;
/* 72f8d2: call 0x6c66f4 */
  esp -= 4; W32(esp, 0x72f8d7u); SPILL(); f_6c66f4(); if (g_unwind) return; RELOAD();
/* 72f8d7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 72f8da: je 0x72f8eb */
  if (zf) goto L_72f8eb;
L_72f8dc: /* 72f8dc: push 0x194 */
  { uint32_t v = 0x194u; esp -= 4; W32(esp, v); }
/* 72f8e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72f8e2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x72f8e8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 72f8e8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_72f8eb: /* 72f8eb: mov eax, esi */
  eax = esi;
/* 72f8ed: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72f8ee: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 72f8ef: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72f920(void) {
  LOAD_REGS();
L_72f920: /* 72f920: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 72f922: push 0x9c4a54 */
  { uint32_t v = 0x9c4a54u; esp -= 4; W32(esp, v); }
/* 72f927: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72f92d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72f92e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 72f935: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72f936: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72f937: mov esi, ecx */
  esi = ecx;
/* 72f939: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 72f93d: mov dword ptr [esi], 0x9f9030 */
  W32((uint32_t)(esi), 0x9f9030u);
/* 72f943: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 72f94b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x72f951u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 72f951: lea ecx, [esi + 0x2c] */
  ecx = (uint32_t)(esi + 0x2cu);
/* 72f954: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 72f959: call 0x6c7e32 */
  esp -= 4; W32(esp, 0x72f95eu); SPILL(); f_6c7e32(); if (g_unwind) return; RELOAD();
/* 72f95e: mov ecx, esi */
  ecx = esi;
/* 72f960: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 72f968: call dword ptr [0xcfa254] */
  esp -= 4; W32(esp, 0x72f96eu); SPILL(); f_4e2e55(); if (g_unwind) return; /* Core!??1UObject@@UAE@XZ */ RELOAD();
/* 72f96e: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 72f972: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72f973: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72f97a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72f97d: ret  */
  esp += 4; SPILL(); return;
}

void f_72f9a0(void) {
  LOAD_REGS();
L_72f9a0: /* 72f9a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 72f9a2: push 0x9c4a79 */
  { uint32_t v = 0x9c4a79u; esp -= 4; W32(esp, v); }
/* 72f9a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72f9ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72f9ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 72f9b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72f9b6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 72f9b7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 72f9b8: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 72f9bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72f9bd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72f9be: mov ebx, ecx */
  ebx = ecx;
/* 72f9c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 72f9c1: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 72f9c5: call dword ptr [0xcfa26c] */
  esp -= 4; W32(esp, 0x72f9cbu); SPILL(); f_4e1078(); if (g_unwind) return; /* Core!??0UObject@@QAE@ABV0@@Z */ RELOAD();
/* 72f9cb: lea ecx, [ebp + 0x2c] */
  ecx = (uint32_t)(ebp + 0x2cu);
/* 72f9ce: mov dword ptr [ebx], 0x9f9030 */
  W32((uint32_t)(ebx), 0x9f9030u);
/* 72f9d4: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 72f9d7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72f9d8: lea ecx, [ebx + 0x2c] */
  ecx = (uint32_t)(ebx + 0x2cu);
/* 72f9db: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 72f9e3: mov dword ptr [ebx + 0x28], eax */
  W32((uint32_t)(ebx + 0x28u), eax);
/* 72f9e6: call 0x6c88a0 */
  esp -= 4; W32(esp, 0x72f9ebu); SPILL(); f_6c88a0(); if (g_unwind) return; RELOAD();
/* 72f9eb: mov edx, dword ptr [ebp + 0x38] */
  edx = R32((uint32_t)(ebp + 0x38u));
/* 72f9ee: mov dword ptr [ebx + 0x38], edx */
  W32((uint32_t)(ebx + 0x38u), edx);
/* 72f9f1: mov eax, dword ptr [ebp + 0x3c] */
  eax = R32((uint32_t)(ebp + 0x3cu));
/* 72f9f4: mov dword ptr [ebx + 0x3c], eax */
  W32((uint32_t)(ebx + 0x3cu), eax);
/* 72f9f7: mov ecx, dword ptr [ebp + 0x40] */
  ecx = R32((uint32_t)(ebp + 0x40u));
/* 72f9fa: mov dword ptr [ebx + 0x40], ecx */
  W32((uint32_t)(ebx + 0x40u), ecx);
/* 72f9fd: mov edx, dword ptr [ebp + 0x44] */
  edx = R32((uint32_t)(ebp + 0x44u));
/* 72fa00: mov dword ptr [ebx + 0x44], edx */
  W32((uint32_t)(ebx + 0x44u), edx);
/* 72fa03: mov eax, dword ptr [ebp + 0x48] */
  eax = R32((uint32_t)(ebp + 0x48u));
/* 72fa06: mov dword ptr [ebx + 0x48], eax */
  W32((uint32_t)(ebx + 0x48u), eax);
/* 72fa09: mov ecx, dword ptr [ebp + 0x4c] */
  ecx = R32((uint32_t)(ebp + 0x4cu));
/* 72fa0c: mov dword ptr [ebx + 0x4c], ecx */
  W32((uint32_t)(ebx + 0x4cu), ecx);
/* 72fa0f: mov edx, dword ptr [ebp + 0x50] */
  edx = R32((uint32_t)(ebp + 0x50u));
/* 72fa12: mov dword ptr [ebx + 0x50], edx */
  W32((uint32_t)(ebx + 0x50u), edx);
/* 72fa15: mov eax, dword ptr [ebp + 0x54] */
  eax = R32((uint32_t)(ebp + 0x54u));
/* 72fa18: mov dword ptr [ebx + 0x54], eax */
  W32((uint32_t)(ebx + 0x54u), eax);
/* 72fa1b: mov ecx, dword ptr [ebp + 0x58] */
  ecx = R32((uint32_t)(ebp + 0x58u));
/* 72fa1e: mov dword ptr [ebx + 0x58], ecx */
  W32((uint32_t)(ebx + 0x58u), ecx);
/* 72fa21: mov edx, dword ptr [ebp + 0x5c] */
  edx = R32((uint32_t)(ebp + 0x5cu));
/* 72fa24: mov dword ptr [ebx + 0x5c], edx */
  W32((uint32_t)(ebx + 0x5cu), edx);
/* 72fa27: mov eax, dword ptr [ebp + 0x60] */
  eax = R32((uint32_t)(ebp + 0x60u));
/* 72fa2a: mov dword ptr [ebx + 0x60], eax */
  W32((uint32_t)(ebx + 0x60u), eax);
/* 72fa2d: mov ecx, dword ptr [ebp + 0x64] */
  ecx = R32((uint32_t)(ebp + 0x64u));
/* 72fa30: mov dword ptr [ebx + 0x64], ecx */
  W32((uint32_t)(ebx + 0x64u), ecx);
/* 72fa33: mov edx, dword ptr [ebp + 0x68] */
  edx = R32((uint32_t)(ebp + 0x68u));
/* 72fa36: mov dword ptr [ebx + 0x68], edx */
  W32((uint32_t)(ebx + 0x68u), edx);
/* 72fa39: mov eax, dword ptr [ebp + 0x6c] */
  eax = R32((uint32_t)(ebp + 0x6cu));
/* 72fa3c: mov dword ptr [ebx + 0x6c], eax */
  W32((uint32_t)(ebx + 0x6cu), eax);
/* 72fa3f: mov ecx, dword ptr [ebp + 0x70] */
  ecx = R32((uint32_t)(ebp + 0x70u));
/* 72fa42: mov dword ptr [ebx + 0x70], ecx */
  W32((uint32_t)(ebx + 0x70u), ecx);
/* 72fa45: mov edx, dword ptr [ebp + 0x74] */
  edx = R32((uint32_t)(ebp + 0x74u));
/* 72fa48: mov dword ptr [ebx + 0x74], edx */
  W32((uint32_t)(ebx + 0x74u), edx);
/* 72fa4b: mov eax, dword ptr [ebp + 0x78] */
  eax = R32((uint32_t)(ebp + 0x78u));
/* 72fa4e: mov dword ptr [ebx + 0x78], eax */
  W32((uint32_t)(ebx + 0x78u), eax);
/* 72fa51: lea esi, [ebp + 0x7c] */
  esi = (uint32_t)(ebp + 0x7cu);
/* 72fa54: lea edi, [ebx + 0x7c] */
  edi = (uint32_t)(ebx + 0x7cu);
/* 72fa57: mov ecx, 8 */
  ecx = 0x8u;
/* 72fa5c: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 72fa5e: mov ecx, dword ptr [ebp + 0x9c] */
  ecx = R32((uint32_t)(ebp + 0x9cu));
/* 72fa64: mov dword ptr [ebx + 0x9c], ecx */
  W32((uint32_t)(ebx + 0x9cu), ecx);
/* 72fa6a: mov edx, dword ptr [ebp + 0xa0] */
  edx = R32((uint32_t)(ebp + 0xa0u));
/* 72fa70: mov dword ptr [ebx + 0xa0], edx */
  W32((uint32_t)(ebx + 0xa0u), edx);
/* 72fa76: mov eax, dword ptr [ebp + 0xa4] */
  eax = R32((uint32_t)(ebp + 0xa4u));
/* 72fa7c: mov dword ptr [ebx + 0xa4], eax */
  W32((uint32_t)(ebx + 0xa4u), eax);
/* 72fa82: mov ecx, dword ptr [ebp + 0xa8] */
  ecx = R32((uint32_t)(ebp + 0xa8u));
/* 72fa88: mov dword ptr [ebx + 0xa8], ecx */
  W32((uint32_t)(ebx + 0xa8u), ecx);
/* 72fa8e: mov edx, dword ptr [ebp + 0xac] */
  edx = R32((uint32_t)(ebp + 0xacu));
/* 72fa94: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 72fa98: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72fa99: mov dword ptr [ebx + 0xac], edx */
  W32((uint32_t)(ebx + 0xacu), edx);
/* 72fa9f: mov eax, dword ptr [ebp + 0xb0] */
  eax = R32((uint32_t)(ebp + 0xb0u));
/* 72faa5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72faa6: mov dword ptr [ebx + 0xb0], eax */
  W32((uint32_t)(ebx + 0xb0u), eax);
/* 72faac: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 72faad: mov eax, ebx */
  eax = ebx;
/* 72faaf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 72fab0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72fab7: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72faba: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72fb10(void) {
  LOAD_REGS();
L_72fb10: /* 72fb10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72fb11: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72fb12: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 72fb16: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72fb17: mov esi, ecx */
  esi = ecx;
/* 72fb19: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x72fb1fu); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 72fb1f: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 72fb22: lea ecx, [edi + 0x2c] */
  ecx = (uint32_t)(edi + 0x2cu);
/* 72fb25: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72fb26: lea ecx, [esi + 0x2c] */
  ecx = (uint32_t)(esi + 0x2cu);
/* 72fb29: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 72fb2c: call 0x6cb118 */
  esp -= 4; W32(esp, 0x72fb31u); SPILL(); f_6cb118(); if (g_unwind) return; RELOAD();
/* 72fb31: mov edx, dword ptr [edi + 0x38] */
  edx = R32((uint32_t)(edi + 0x38u));
/* 72fb34: mov dword ptr [esi + 0x38], edx */
  W32((uint32_t)(esi + 0x38u), edx);
/* 72fb37: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* 72fb3a: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* 72fb3d: mov ecx, dword ptr [edi + 0x40] */
  ecx = R32((uint32_t)(edi + 0x40u));
/* 72fb40: mov dword ptr [esi + 0x40], ecx */
  W32((uint32_t)(esi + 0x40u), ecx);
/* 72fb43: mov edx, dword ptr [edi + 0x44] */
  edx = R32((uint32_t)(edi + 0x44u));
/* 72fb46: mov dword ptr [esi + 0x44], edx */
  W32((uint32_t)(esi + 0x44u), edx);
/* 72fb49: mov eax, dword ptr [edi + 0x48] */
  eax = R32((uint32_t)(edi + 0x48u));
/* 72fb4c: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* 72fb4f: mov ecx, dword ptr [edi + 0x4c] */
  ecx = R32((uint32_t)(edi + 0x4cu));
/* 72fb52: mov dword ptr [esi + 0x4c], ecx */
  W32((uint32_t)(esi + 0x4cu), ecx);
/* 72fb55: mov edx, dword ptr [edi + 0x50] */
  edx = R32((uint32_t)(edi + 0x50u));
/* 72fb58: mov dword ptr [esi + 0x50], edx */
  W32((uint32_t)(esi + 0x50u), edx);
/* 72fb5b: mov eax, dword ptr [edi + 0x54] */
  eax = R32((uint32_t)(edi + 0x54u));
/* 72fb5e: mov dword ptr [esi + 0x54], eax */
  W32((uint32_t)(esi + 0x54u), eax);
/* 72fb61: mov ecx, dword ptr [edi + 0x58] */
  ecx = R32((uint32_t)(edi + 0x58u));
/* 72fb64: mov dword ptr [esi + 0x58], ecx */
  W32((uint32_t)(esi + 0x58u), ecx);
/* 72fb67: mov edx, dword ptr [edi + 0x5c] */
  edx = R32((uint32_t)(edi + 0x5cu));
/* 72fb6a: mov dword ptr [esi + 0x5c], edx */
  W32((uint32_t)(esi + 0x5cu), edx);
/* 72fb6d: mov eax, dword ptr [edi + 0x60] */
  eax = R32((uint32_t)(edi + 0x60u));
/* 72fb70: mov dword ptr [esi + 0x60], eax */
  W32((uint32_t)(esi + 0x60u), eax);
/* 72fb73: mov ecx, dword ptr [edi + 0x64] */
  ecx = R32((uint32_t)(edi + 0x64u));
/* 72fb76: mov dword ptr [esi + 0x64], ecx */
  W32((uint32_t)(esi + 0x64u), ecx);
/* 72fb79: mov edx, dword ptr [edi + 0x68] */
  edx = R32((uint32_t)(edi + 0x68u));
/* 72fb7c: mov dword ptr [esi + 0x68], edx */
  W32((uint32_t)(esi + 0x68u), edx);
/* 72fb7f: mov eax, dword ptr [edi + 0x6c] */
  eax = R32((uint32_t)(edi + 0x6cu));
/* 72fb82: mov dword ptr [esi + 0x6c], eax */
  W32((uint32_t)(esi + 0x6cu), eax);
/* 72fb85: mov ecx, dword ptr [edi + 0x70] */
  ecx = R32((uint32_t)(edi + 0x70u));
/* 72fb88: mov dword ptr [esi + 0x70], ecx */
  W32((uint32_t)(esi + 0x70u), ecx);
/* 72fb8b: mov edx, dword ptr [edi + 0x74] */
  edx = R32((uint32_t)(edi + 0x74u));
/* 72fb8e: mov dword ptr [esi + 0x74], edx */
  W32((uint32_t)(esi + 0x74u), edx);
/* 72fb91: mov eax, dword ptr [edi + 0x78] */
  eax = R32((uint32_t)(edi + 0x78u));
/* 72fb94: mov dword ptr [esi + 0x78], eax */
  W32((uint32_t)(esi + 0x78u), eax);
/* 72fb97: mov ecx, dword ptr [edi + 0x7c] */
  ecx = R32((uint32_t)(edi + 0x7cu));
/* 72fb9a: mov dword ptr [esi + 0x7c], ecx */
  W32((uint32_t)(esi + 0x7cu), ecx);
/* 72fb9d: mov edx, dword ptr [edi + 0x80] */
  edx = R32((uint32_t)(edi + 0x80u));
/* 72fba3: mov dword ptr [esi + 0x80], edx */
  W32((uint32_t)(esi + 0x80u), edx);
/* 72fba9: mov eax, dword ptr [edi + 0x84] */
  eax = R32((uint32_t)(edi + 0x84u));
/* 72fbaf: mov dword ptr [esi + 0x84], eax */
  W32((uint32_t)(esi + 0x84u), eax);
/* 72fbb5: mov ecx, dword ptr [edi + 0x88] */
  ecx = R32((uint32_t)(edi + 0x88u));
/* 72fbbb: mov dword ptr [esi + 0x88], ecx */
  W32((uint32_t)(esi + 0x88u), ecx);
/* 72fbc1: mov edx, dword ptr [edi + 0x8c] */
  edx = R32((uint32_t)(edi + 0x8cu));
/* 72fbc7: mov dword ptr [esi + 0x8c], edx */
  W32((uint32_t)(esi + 0x8cu), edx);
/* 72fbcd: mov eax, dword ptr [edi + 0x90] */
  eax = R32((uint32_t)(edi + 0x90u));
/* 72fbd3: mov dword ptr [esi + 0x90], eax */
  W32((uint32_t)(esi + 0x90u), eax);
/* 72fbd9: mov ecx, dword ptr [edi + 0x94] */
  ecx = R32((uint32_t)(edi + 0x94u));
/* 72fbdf: mov dword ptr [esi + 0x94], ecx */
  W32((uint32_t)(esi + 0x94u), ecx);
/* 72fbe5: mov edx, dword ptr [edi + 0x98] */
  edx = R32((uint32_t)(edi + 0x98u));
/* 72fbeb: mov dword ptr [esi + 0x98], edx */
  W32((uint32_t)(esi + 0x98u), edx);
/* 72fbf1: mov eax, dword ptr [edi + 0x9c] */
  eax = R32((uint32_t)(edi + 0x9cu));
/* 72fbf7: mov dword ptr [esi + 0x9c], eax */
  W32((uint32_t)(esi + 0x9cu), eax);
/* 72fbfd: mov ecx, dword ptr [edi + 0xa0] */
  ecx = R32((uint32_t)(edi + 0xa0u));
/* 72fc03: mov dword ptr [esi + 0xa0], ecx */
  W32((uint32_t)(esi + 0xa0u), ecx);
/* 72fc09: mov edx, dword ptr [edi + 0xa4] */
  edx = R32((uint32_t)(edi + 0xa4u));
/* 72fc0f: mov dword ptr [esi + 0xa4], edx */
  W32((uint32_t)(esi + 0xa4u), edx);
/* 72fc15: mov eax, dword ptr [edi + 0xa8] */
  eax = R32((uint32_t)(edi + 0xa8u));
/* 72fc1b: mov dword ptr [esi + 0xa8], eax */
  W32((uint32_t)(esi + 0xa8u), eax);
/* 72fc21: mov ecx, dword ptr [edi + 0xac] */
  ecx = R32((uint32_t)(edi + 0xacu));
/* 72fc27: mov dword ptr [esi + 0xac], ecx */
  W32((uint32_t)(esi + 0xacu), ecx);
/* 72fc2d: mov edx, dword ptr [edi + 0xb0] */
  edx = R32((uint32_t)(edi + 0xb0u));
/* 72fc33: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72fc34: mov dword ptr [esi + 0xb0], edx */
  W32((uint32_t)(esi + 0xb0u), edx);
/* 72fc3a: mov eax, esi */
  eax = esi;
/* 72fc3c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72fc3d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72fc90(void) {
  LOAD_REGS();
L_72fc90: /* 72fc90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72fc91: mov esi, ecx */
  esi = ecx;
/* 72fc93: call 0x6cba5a */
  esp -= 4; W32(esp, 0x72fc98u); SPILL(); f_6cba5a(); if (g_unwind) return; RELOAD();
/* 72fc98: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 72fc9d: je 0x72fcae */
  if (zf) goto L_72fcae;
L_72fc9f: /* 72fc9f: push 0xb4 */
  { uint32_t v = 0xb4u; esp -= 4; W32(esp, v); }
/* 72fca4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72fca5: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x72fcabu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 72fcab: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_72fcae: /* 72fcae: mov eax, esi */
  eax = esi;
/* 72fcb0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72fcb1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72fcd0(void) {
  LOAD_REGS();
L_72fcd0: /* 72fcd0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 72fcd1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 72fcd5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 72fcd8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72fcd9: mov esi, ecx */
  esi = ecx;
/* 72fcdb: je 0x72fd10 */
  if (zf) goto L_72fd10;
L_72fcdd: /* 72fcdd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 72fce0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72fce1: push 0x6cba5a */
  { uint32_t v = 0x6cba5au; esp -= 4; W32(esp, v); }
/* 72fce6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 72fce9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72fcea: push 0xb4 */
  { uint32_t v = 0xb4u; esp -= 4; W32(esp, v); }
/* 72fcef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72fcf0: call 0x99ca3d */
  esp -= 4; W32(esp, 0x72fcf5u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 72fcf5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 72fcf8: je 0x72fd08 */
  if (zf) goto L_72fd08;
L_72fcfa: /* 72fcfa: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 72fd00: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 72fd02: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 72fd04: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72fd05: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x72fd08u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_72fd08: /* 72fd08: mov eax, edi */
  eax = edi;
/* 72fd0a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72fd0b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72fd0c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 72fd0d: ret 4 */
  esp += 8; SPILL(); return;
L_72fd10: /* 72fd10: mov ecx, esi */
  ecx = esi;
/* 72fd12: call 0x6cba5a */
  esp -= 4; W32(esp, 0x72fd17u); SPILL(); f_6cba5a(); if (g_unwind) return; RELOAD();
/* 72fd17: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 72fd1a: je 0x72fd2b */
  if (zf) goto L_72fd2b;
L_72fd1c: /* 72fd1c: push 0xb4 */
  { uint32_t v = 0xb4u; esp -= 4; W32(esp, v); }
/* 72fd21: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72fd22: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x72fd28u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 72fd28: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_72fd2b: /* 72fd2b: mov eax, esi */
  eax = esi;
/* 72fd2d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72fd2e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 72fd2f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72fd60(void) {
  LOAD_REGS();
L_72fd60: /* 72fd60: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 72fd62: push 0x9c4aa6 */
  { uint32_t v = 0x9c4aa6u; esp -= 4; W32(esp, v); }
/* 72fd67: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72fd6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72fd6e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 72fd75: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72fd76: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72fd77: mov esi, ecx */
  esi = ecx;
/* 72fd79: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 72fd7c: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 72fd80: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x72fd86u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 72fd86: lea ecx, [esi + 0x14] */
  ecx = (uint32_t)(esi + 0x14u);
/* 72fd89: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 72fd91: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x72fd97u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 72fd97: lea ecx, [esi + 0x20] */
  ecx = (uint32_t)(esi + 0x20u);
/* 72fd9a: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 72fd9f: call dword ptr [0xcfa28c] */
  esp -= 4; W32(esp, 0x72fda5u); SPILL(); f_4e3dcd(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@XZ */ RELOAD();
/* 72fda5: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 72fda9: mov eax, esi */
  eax = esi;
/* 72fdab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72fdac: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72fdb3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72fdb6: ret  */
  esp += 4; SPILL(); return;
}

void f_72fde0(void) {
  LOAD_REGS();
L_72fde0: /* 72fde0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 72fde2: push 0x9c4ad6 */
  { uint32_t v = 0x9c4ad6u; esp -= 4; W32(esp, v); }
/* 72fde7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72fded: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72fdee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 72fdf5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72fdf6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72fdf7: mov esi, ecx */
  esi = ecx;
/* 72fdf9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 72fdfd: lea ecx, [esi + 0x20] */
  ecx = (uint32_t)(esi + 0x20u);
/* 72fe00: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 72fe08: call dword ptr [0xcfa288] */
  esp -= 4; W32(esp, 0x72fe0eu); SPILL(); f_4e2ecd(); if (g_unwind) return; /* Core!??1?$TArray@G@@QAE@XZ */ RELOAD();
/* 72fe0e: lea ecx, [esi + 0x14] */
  ecx = (uint32_t)(esi + 0x14u);
/* 72fe11: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 72fe16: call 0x6cb555 */
  esp -= 4; W32(esp, 0x72fe1bu); SPILL(); f_6cb555(); if (g_unwind) return; RELOAD();
/* 72fe1b: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 72fe1e: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 72fe26: call 0x6cae43 */
  esp -= 4; W32(esp, 0x72fe2bu); SPILL(); f_6cae43(); if (g_unwind) return; RELOAD();
/* 72fe2b: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 72fe2f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72fe30: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72fe37: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72fe3a: ret  */
  esp += 4; SPILL(); return;
}

void f_72fe60(void) {
  LOAD_REGS();
L_72fe60: /* 72fe60: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 72fe62: push 0x9c4b06 */
  { uint32_t v = 0x9c4b06u; esp -= 4; W32(esp, v); }
/* 72fe67: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 72fe6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72fe6e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 72fe75: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72fe76: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72fe77: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72fe78: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 72fe7c: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 72fe7e: mov esi, ecx */
  esi = ecx;
/* 72fe80: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 72fe82: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 72fe85: lea edx, [edi + 8] */
  edx = (uint32_t)(edi + 0x8u);
/* 72fe88: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 72fe8b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 72fe8c: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 72fe8f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 72fe93: call 0x6c60d2 */
  esp -= 4; W32(esp, 0x72fe98u); SPILL(); f_6c60d2(); if (g_unwind) return; RELOAD();
/* 72fe98: lea eax, [edi + 0x14] */
  eax = (uint32_t)(edi + 0x14u);
/* 72fe9b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72fe9c: lea ecx, [esi + 0x14] */
  ecx = (uint32_t)(esi + 0x14u);
/* 72fe9f: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 72fea7: call 0x6c8544 */
  esp -= 4; W32(esp, 0x72feacu); SPILL(); f_6c8544(); if (g_unwind) return; RELOAD();
/* 72feac: lea ecx, [edi + 0x20] */
  ecx = (uint32_t)(edi + 0x20u);
/* 72feaf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72feb0: lea ecx, [esi + 0x20] */
  ecx = (uint32_t)(esi + 0x20u);
/* 72feb3: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* 72feb8: call dword ptr [0xcfa290] */
  esp -= 4; W32(esp, 0x72febeu); SPILL(); f_4e447b(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@ABV0@@Z */ RELOAD();
/* 72febe: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 72fec1: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 72fec5: mov dword ptr [esi + 0x2c], edx */
  W32((uint32_t)(esi + 0x2cu), edx);
/* 72fec8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72fec9: mov eax, esi */
  eax = esi;
/* 72fecb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72fecc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 72fed3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 72fed6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72ff00(void) {
  LOAD_REGS();
L_72ff00: /* 72ff00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72ff01: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72ff02: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 72ff06: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 72ff08: mov esi, ecx */
  esi = ecx;
/* 72ff0a: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 72ff0c: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 72ff0f: lea edx, [edi + 8] */
  edx = (uint32_t)(edi + 0x8u);
/* 72ff12: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 72ff15: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 72ff16: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 72ff19: call 0x6c66b3 */
  esp -= 4; W32(esp, 0x72ff1eu); SPILL(); f_6c66b3(); if (g_unwind) return; RELOAD();
/* 72ff1e: lea eax, [edi + 0x14] */
  eax = (uint32_t)(edi + 0x14u);
/* 72ff21: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 72ff22: lea ecx, [esi + 0x14] */
  ecx = (uint32_t)(esi + 0x14u);
/* 72ff25: call 0x6c4dd6 */
  esp -= 4; W32(esp, 0x72ff2au); SPILL(); f_6c4dd6(); if (g_unwind) return; RELOAD();
/* 72ff2a: lea ecx, [edi + 0x20] */
  ecx = (uint32_t)(edi + 0x20u);
/* 72ff2d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 72ff2e: lea ecx, [esi + 0x20] */
  ecx = (uint32_t)(esi + 0x20u);
/* 72ff31: call dword ptr [0xcfa294] */
  esp -= 4; W32(esp, 0x72ff37u); SPILL(); f_4e2676(); if (g_unwind) return; /* Core!??4?$TArray@G@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 72ff37: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 72ff3a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72ff3b: mov dword ptr [esi + 0x2c], edx */
  W32((uint32_t)(esi + 0x2cu), edx);
/* 72ff3e: mov eax, esi */
  eax = esi;
/* 72ff40: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72ff41: ret 4 */
  esp += 8; SPILL(); return;
}

void f_72ff70(void) {
  LOAD_REGS();
L_72ff70: /* 72ff70: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 72ff71: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 72ff72: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 72ff73: mov esi, ecx */
  esi = ecx;
/* 72ff75: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72ff76: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 72ff79: mov dword ptr [esi], 0x9f90e4 */
  W32((uint32_t)(esi), 0x9f90e4u);
/* 72ff7f: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x72ff85u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 72ff85: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 72ff8c: mov ebp, dword ptr [0xcfa1b0] */
  ebp = R32((uint32_t)(0xcfa1b0u));
/* 72ff92: mov ebx, dword ptr [ebp + 4] */
  ebx = R32((uint32_t)(ebp + 0x4u));
/* 72ff95: mov edi, dword ptr [ebp] */
  edi = R32((uint32_t)(ebp));
/* 72ff98: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 72ff9a: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 72ff9f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 72ffa0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 72ffa1: call 0x99c910 */
  esp -= 4; W32(esp, 0x72ffa6u); SPILL(); f_99c910(); if (g_unwind) return; RELOAD();
/* 72ffa6: mov ecx, 0 */
  ecx = 0x0u;
/* 72ffab: add eax, 0xe1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 72ffb0: adc edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 72ffb2: add edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edi = r;
  }
/* 72ffb5: mov dword ptr [ebp], edi */
  W32((uint32_t)(ebp), edi);
/* 72ffb8: mov edi, dword ptr [0xcfa1b0] */
  edi = R32((uint32_t)(0xcfa1b0u));
/* 72ffbe: adc ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ebx = r;
  }
/* 72ffc0: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 72ffc3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 72ffc4: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 72ffc7: mov dword ptr [esi + 0x18], edx */
  W32((uint32_t)(esi + 0x18u), edx);
/* 72ffca: mov dword ptr [esi + 0x1c], ecx */
  W32((uint32_t)(esi + 0x1cu), ecx);
/* 72ffcd: mov dword ptr [esi + 0x20], ecx */
  W32((uint32_t)(esi + 0x20u), ecx);
/* 72ffd0: mov dword ptr [esi + 0x24], ecx */
  W32((uint32_t)(esi + 0x24u), ecx);
/* 72ffd3: mov eax, esi */
  eax = esi;
/* 72ffd5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 72ffd6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 72ffd7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 72ffd8: ret  */
  esp += 4; SPILL(); return;
}

void f_730000(void) {
  LOAD_REGS();
L_730000: /* 730000: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 730004: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 730008: lea ecx, [eax + 0x1c] */
  ecx = (uint32_t)(eax + 0x1cu);
/* 73000b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73000c: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 73000f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 730010: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 730011: call 0x6ca209 */
  esp -= 4; W32(esp, 0x730016u); SPILL(); f_6ca209(); if (g_unwind) return; RELOAD();
/* 730016: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 730019: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73001a: call dword ptr [0xcfa280] */
  esp -= 4; W32(esp, 0x730020u); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* 730020: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 730023: ret  */
  esp += 4; SPILL(); return;
}

void f_730020(void) {
  LOAD_REGS();
L_730020: /* 730020: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 730023: ret  */
  esp += 4; SPILL(); return;
}

void f_730040(void) {
  LOAD_REGS();
L_730040: /* 730040: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 730043: jmp 0x6ccbee */
  SPILL(); f_6ccbee(); return;
}

void f_730060(void) {
  LOAD_REGS();
L_730060: /* 730060: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 730061: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 730062: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 730066: mov esi, ecx */
  esi = ecx;
/* 730068: lea ecx, [edi + 8] */
  ecx = (uint32_t)(edi + 0x8u);
/* 73006b: mov dword ptr [esi], 0x9f90e4 */
  W32((uint32_t)(esi), 0x9f90e4u);
/* 730071: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 730074: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 730075: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 730078: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 73007b: call 0x6c3e22 */
  esp -= 4; W32(esp, 0x730080u); SPILL(); f_6c3e22(); if (g_unwind) return; RELOAD();
/* 730080: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 730083: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 730086: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 730089: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 73008c: mov ecx, dword ptr [edi + 0x1c] */
  ecx = R32((uint32_t)(edi + 0x1cu));
/* 73008f: mov dword ptr [esi + 0x1c], ecx */
  W32((uint32_t)(esi + 0x1cu), ecx);
/* 730092: mov edx, dword ptr [edi + 0x20] */
  edx = R32((uint32_t)(edi + 0x20u));
/* 730095: mov dword ptr [esi + 0x20], edx */
  W32((uint32_t)(esi + 0x20u), edx);
/* 730098: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* 73009b: mov dword ptr [esi + 0x24], eax */
  W32((uint32_t)(esi + 0x24u), eax);
/* 73009e: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* 7300a1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7300a2: mov dword ptr [esi + 0x28], ecx */
  W32((uint32_t)(esi + 0x28u), ecx);
/* 7300a5: mov eax, esi */
  eax = esi;
/* 7300a7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7300a8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_730061(void) {
  LOAD_REGS();
L_730061: /* 730061: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 730062: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 730066: mov esi, ecx */
  esi = ecx;
/* 730068: lea ecx, [edi + 8] */
  ecx = (uint32_t)(edi + 0x8u);
/* 73006b: mov dword ptr [esi], 0x9f90e4 */
  W32((uint32_t)(esi), 0x9f90e4u);
/* 730071: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 730074: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 730075: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 730078: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 73007b: call 0x6c3e22 */
  esp -= 4; W32(esp, 0x730080u); SPILL(); f_6c3e22(); if (g_unwind) return; RELOAD();
/* 730080: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 730083: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 730086: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 730089: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 73008c: mov ecx, dword ptr [edi + 0x1c] */
  ecx = R32((uint32_t)(edi + 0x1cu));
/* 73008f: mov dword ptr [esi + 0x1c], ecx */
  W32((uint32_t)(esi + 0x1cu), ecx);
/* 730092: mov edx, dword ptr [edi + 0x20] */
  edx = R32((uint32_t)(edi + 0x20u));
/* 730095: mov dword ptr [esi + 0x20], edx */
  W32((uint32_t)(esi + 0x20u), edx);
/* 730098: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* 73009b: mov dword ptr [esi + 0x24], eax */
  W32((uint32_t)(esi + 0x24u), eax);
/* 73009e: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* 7300a1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7300a2: mov dword ptr [esi + 0x28], ecx */
  W32((uint32_t)(esi + 0x28u), ecx);
/* 7300a5: mov eax, esi */
  eax = esi;
/* 7300a7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7300a8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_730062(void) {
  LOAD_REGS();
L_730062: /* 730062: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 730066: mov esi, ecx */
  esi = ecx;
/* 730068: lea ecx, [edi + 8] */
  ecx = (uint32_t)(edi + 0x8u);
/* 73006b: mov dword ptr [esi], 0x9f90e4 */
  W32((uint32_t)(esi), 0x9f90e4u);
/* 730071: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 730074: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 730075: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 730078: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 73007b: call 0x6c3e22 */
  esp -= 4; W32(esp, 0x730080u); SPILL(); f_6c3e22(); if (g_unwind) return; RELOAD();
/* 730080: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 730083: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 730086: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 730089: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 73008c: mov ecx, dword ptr [edi + 0x1c] */
  ecx = R32((uint32_t)(edi + 0x1cu));
/* 73008f: mov dword ptr [esi + 0x1c], ecx */
  W32((uint32_t)(esi + 0x1cu), ecx);
/* 730092: mov edx, dword ptr [edi + 0x20] */
  edx = R32((uint32_t)(edi + 0x20u));
/* 730095: mov dword ptr [esi + 0x20], edx */
  W32((uint32_t)(esi + 0x20u), edx);
/* 730098: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* 73009b: mov dword ptr [esi + 0x24], eax */
  W32((uint32_t)(esi + 0x24u), eax);
/* 73009e: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* 7300a1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7300a2: mov dword ptr [esi + 0x28], ecx */
  W32((uint32_t)(esi + 0x28u), ecx);
/* 7300a5: mov eax, esi */
  eax = esi;
/* 7300a7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7300a8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_730066(void) {
  LOAD_REGS();
L_730066: /* 730066: mov esi, ecx */
  esi = ecx;
/* 730068: lea ecx, [edi + 8] */
  ecx = (uint32_t)(edi + 0x8u);
/* 73006b: mov dword ptr [esi], 0x9f90e4 */
  W32((uint32_t)(esi), 0x9f90e4u);
/* 730071: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 730074: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 730075: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 730078: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 73007b: call 0x6c3e22 */
  esp -= 4; W32(esp, 0x730080u); SPILL(); f_6c3e22(); if (g_unwind) return; RELOAD();
/* 730080: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 730083: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 730086: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 730089: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 73008c: mov ecx, dword ptr [edi + 0x1c] */
  ecx = R32((uint32_t)(edi + 0x1cu));
/* 73008f: mov dword ptr [esi + 0x1c], ecx */
  W32((uint32_t)(esi + 0x1cu), ecx);
/* 730092: mov edx, dword ptr [edi + 0x20] */
  edx = R32((uint32_t)(edi + 0x20u));
/* 730095: mov dword ptr [esi + 0x20], edx */
  W32((uint32_t)(esi + 0x20u), edx);
/* 730098: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* 73009b: mov dword ptr [esi + 0x24], eax */
  W32((uint32_t)(esi + 0x24u), eax);
/* 73009e: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* 7300a1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7300a2: mov dword ptr [esi + 0x28], ecx */
  W32((uint32_t)(esi + 0x28u), ecx);
/* 7300a5: mov eax, esi */
  eax = esi;
/* 7300a7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7300a8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_730068(void) {
  LOAD_REGS();
L_730068: /* 730068: lea ecx, [edi + 8] */
  ecx = (uint32_t)(edi + 0x8u);
/* 73006b: mov dword ptr [esi], 0x9f90e4 */
  W32((uint32_t)(esi), 0x9f90e4u);
/* 730071: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 730074: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 730075: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 730078: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 73007b: call 0x6c3e22 */
  esp -= 4; W32(esp, 0x730080u); SPILL(); f_6c3e22(); if (g_unwind) return; RELOAD();
/* 730080: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 730083: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 730086: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 730089: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 73008c: mov ecx, dword ptr [edi + 0x1c] */
  ecx = R32((uint32_t)(edi + 0x1cu));
/* 73008f: mov dword ptr [esi + 0x1c], ecx */
  W32((uint32_t)(esi + 0x1cu), ecx);
/* 730092: mov edx, dword ptr [edi + 0x20] */
  edx = R32((uint32_t)(edi + 0x20u));
/* 730095: mov dword ptr [esi + 0x20], edx */
  W32((uint32_t)(esi + 0x20u), edx);
/* 730098: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* 73009b: mov dword ptr [esi + 0x24], eax */
  W32((uint32_t)(esi + 0x24u), eax);
/* 73009e: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* 7300a1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7300a2: mov dword ptr [esi + 0x28], ecx */
  W32((uint32_t)(esi + 0x28u), ecx);
/* 7300a5: mov eax, esi */
  eax = esi;
/* 7300a7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7300a8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73006b(void) {
  LOAD_REGS();
L_73006b: /* 73006b: mov dword ptr [esi], 0x9f90e4 */
  W32((uint32_t)(esi), 0x9f90e4u);
/* 730071: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 730074: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 730075: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 730078: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 73007b: call 0x6c3e22 */
  esp -= 4; W32(esp, 0x730080u); SPILL(); f_6c3e22(); if (g_unwind) return; RELOAD();
/* 730080: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 730083: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 730086: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 730089: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 73008c: mov ecx, dword ptr [edi + 0x1c] */
  ecx = R32((uint32_t)(edi + 0x1cu));
/* 73008f: mov dword ptr [esi + 0x1c], ecx */
  W32((uint32_t)(esi + 0x1cu), ecx);
/* 730092: mov edx, dword ptr [edi + 0x20] */
  edx = R32((uint32_t)(edi + 0x20u));
/* 730095: mov dword ptr [esi + 0x20], edx */
  W32((uint32_t)(esi + 0x20u), edx);
/* 730098: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* 73009b: mov dword ptr [esi + 0x24], eax */
  W32((uint32_t)(esi + 0x24u), eax);
/* 73009e: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* 7300a1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7300a2: mov dword ptr [esi + 0x28], ecx */
  W32((uint32_t)(esi + 0x28u), ecx);
/* 7300a5: mov eax, esi */
  eax = esi;
/* 7300a7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7300a8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_730074(void) {
  LOAD_REGS();
L_730074: /* 730074: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 730075: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 730078: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 73007b: call 0x6c3e22 */
  esp -= 4; W32(esp, 0x730080u); SPILL(); f_6c3e22(); if (g_unwind) return; RELOAD();
/* 730080: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 730083: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 730086: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 730089: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 73008c: mov ecx, dword ptr [edi + 0x1c] */
  ecx = R32((uint32_t)(edi + 0x1cu));
/* 73008f: mov dword ptr [esi + 0x1c], ecx */
  W32((uint32_t)(esi + 0x1cu), ecx);
/* 730092: mov edx, dword ptr [edi + 0x20] */
  edx = R32((uint32_t)(edi + 0x20u));
/* 730095: mov dword ptr [esi + 0x20], edx */
  W32((uint32_t)(esi + 0x20u), edx);
/* 730098: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* 73009b: mov dword ptr [esi + 0x24], eax */
  W32((uint32_t)(esi + 0x24u), eax);
/* 73009e: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* 7300a1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7300a2: mov dword ptr [esi + 0x28], ecx */
  W32((uint32_t)(esi + 0x28u), ecx);
/* 7300a5: mov eax, esi */
  eax = esi;
/* 7300a7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7300a8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_730075(void) {
  LOAD_REGS();
L_730075: /* 730075: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 730078: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 73007b: call 0x6c3e22 */
  esp -= 4; W32(esp, 0x730080u); SPILL(); f_6c3e22(); if (g_unwind) return; RELOAD();
/* 730080: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 730083: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 730086: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 730089: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 73008c: mov ecx, dword ptr [edi + 0x1c] */
  ecx = R32((uint32_t)(edi + 0x1cu));
/* 73008f: mov dword ptr [esi + 0x1c], ecx */
  W32((uint32_t)(esi + 0x1cu), ecx);
/* 730092: mov edx, dword ptr [edi + 0x20] */
  edx = R32((uint32_t)(edi + 0x20u));
/* 730095: mov dword ptr [esi + 0x20], edx */
  W32((uint32_t)(esi + 0x20u), edx);
/* 730098: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* 73009b: mov dword ptr [esi + 0x24], eax */
  W32((uint32_t)(esi + 0x24u), eax);
/* 73009e: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* 7300a1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7300a2: mov dword ptr [esi + 0x28], ecx */
  W32((uint32_t)(esi + 0x28u), ecx);
/* 7300a5: mov eax, esi */
  eax = esi;
/* 7300a7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7300a8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7300d0(void) {
  LOAD_REGS();
L_7300d0: /* 7300d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7300d1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7300d2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 7300d6: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7300d9: mov esi, ecx */
  esi = ecx;
/* 7300db: lea ecx, [edi + 8] */
  ecx = (uint32_t)(edi + 0x8u);
/* 7300de: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7300df: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 7300e2: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 7300e5: call 0x6c7d65 */
  esp -= 4; W32(esp, 0x7300eau); SPILL(); f_6c7d65(); if (g_unwind) return; RELOAD();
/* 7300ea: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 7300ed: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 7300f0: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 7300f3: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 7300f6: mov ecx, dword ptr [edi + 0x1c] */
  ecx = R32((uint32_t)(edi + 0x1cu));
/* 7300f9: mov dword ptr [esi + 0x1c], ecx */
  W32((uint32_t)(esi + 0x1cu), ecx);
/* 7300fc: mov edx, dword ptr [edi + 0x20] */
  edx = R32((uint32_t)(edi + 0x20u));
/* 7300ff: mov dword ptr [esi + 0x20], edx */
  W32((uint32_t)(esi + 0x20u), edx);
/* 730102: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* 730105: mov dword ptr [esi + 0x24], eax */
  W32((uint32_t)(esi + 0x24u), eax);
/* 730108: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* 73010b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 73010c: mov dword ptr [esi + 0x28], ecx */
  W32((uint32_t)(esi + 0x28u), ecx);
/* 73010f: mov eax, esi */
  eax = esi;
/* 730111: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 730112: ret 4 */
  esp += 8; SPILL(); return;
}

void f_730140(void) {
  LOAD_REGS();
L_730140: /* 730140: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 730142: push 0x9c4b86 */
  { uint32_t v = 0x9c4b86u; esp -= 4; W32(esp, v); }
/* 730147: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 73014d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73014e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 730155: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 730156: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 730157: mov esi, ecx */
  esi = ecx;
/* 730159: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 73015d: mov dword ptr [esi], 0x9f9118 */
  W32((uint32_t)(esi), 0x9f9118u);
/* 730163: mov dword ptr [esp + 0x10], 7 */
  W32((uint32_t)(esp + 0x10u), 0x7u);
/* 73016b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x730171u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 730171: lea ecx, [esi + 0xcc] */
  ecx = (uint32_t)(esi + 0xccu);
/* 730177: mov byte ptr [esp + 0x10], 6 */
  W8((uint32_t)(esp + 0x10u), 0x6u);
/* 73017c: call 0x6c5515 */
  esp -= 4; W32(esp, 0x730181u); SPILL(); f_6c5515(); if (g_unwind) return; RELOAD();
/* 730181: lea ecx, [esi + 0xc0] */
  ecx = (uint32_t)(esi + 0xc0u);
/* 730187: mov byte ptr [esp + 0x10], 5 */
  W8((uint32_t)(esp + 0x10u), 0x5u);
/* 73018c: call 0x6c39cc */
  esp -= 4; W32(esp, 0x730191u); SPILL(); f_6c39cc(); if (g_unwind) return; RELOAD();
/* 730191: lea ecx, [esi + 0xb4] */
  ecx = (uint32_t)(esi + 0xb4u);
/* 730197: mov byte ptr [esp + 0x10], 4 */
  W8((uint32_t)(esp + 0x10u), 0x4u);
/* 73019c: call dword ptr [0xcfa288] */
  esp -= 4; W32(esp, 0x7301a2u); SPILL(); f_4e2ecd(); if (g_unwind) return; /* Core!??1?$TArray@G@@QAE@XZ */ RELOAD();
/* 7301a2: lea ecx, [esi + 0xa8] */
  ecx = (uint32_t)(esi + 0xa8u);
/* 7301a8: mov byte ptr [esp + 0x10], 3 */
  W8((uint32_t)(esp + 0x10u), 0x3u);
/* 7301ad: call 0x6c1730 */
  esp -= 4; W32(esp, 0x7301b2u); SPILL(); f_6c1730(); if (g_unwind) return; RELOAD();
/* 7301b2: lea ecx, [esi + 0x9c] */
  ecx = (uint32_t)(esi + 0x9cu);
/* 7301b8: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 7301bd: call dword ptr [0xcfa288] */
  esp -= 4; W32(esp, 0x7301c3u); SPILL(); f_4e2ecd(); if (g_unwind) return; /* Core!??1?$TArray@G@@QAE@XZ */ RELOAD();
/* 7301c3: lea ecx, [esi + 0x6c] */
  ecx = (uint32_t)(esi + 0x6cu);
/* 7301c6: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 7301cb: call 0x6c1b7c */
  esp -= 4; W32(esp, 0x7301d0u); SPILL(); f_6c1b7c(); if (g_unwind) return; RELOAD();
/* 7301d0: lea ecx, [esi + 0x60] */
  ecx = (uint32_t)(esi + 0x60u);
/* 7301d3: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 7301d8: call 0x6c5a29 */
  esp -= 4; W32(esp, 0x7301ddu); SPILL(); f_6c5a29(); if (g_unwind) return; RELOAD();
/* 7301dd: mov ecx, esi */
  ecx = esi;
/* 7301df: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 7301e7: call 0x6c42fa */
  esp -= 4; W32(esp, 0x7301ecu); SPILL(); f_6c42fa(); if (g_unwind) return; RELOAD();
/* 7301ec: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7301f0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7301f1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7301f8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7301fb: ret  */
  esp += 4; SPILL(); return;
}

void f_730230(void) {
  LOAD_REGS();
L_730230: /* 730230: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 730232: push 0x9c4c16 */
  { uint32_t v = 0x9c4c16u; esp -= 4; W32(esp, v); }
/* 730237: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 73023d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73023e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 730245: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 730246: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 730247: mov esi, ecx */
  esi = ecx;
/* 730249: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 73024d: call 0x6cc93c */
  esp -= 4; W32(esp, 0x730252u); SPILL(); f_6cc93c(); if (g_unwind) return; RELOAD();
/* 730252: xor eax, eax */
  eax = 0;
/* 730254: mov dword ptr [esi + 0x54], eax */
  W32((uint32_t)(esi + 0x54u), eax);
/* 730257: lea ecx, [esi + 0x60] */
  ecx = (uint32_t)(esi + 0x60u);
/* 73025a: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 73025e: mov dword ptr [esi], 0x9f9118 */
  W32((uint32_t)(esi), 0x9f9118u);
/* 730264: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x73026au); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 73026a: lea ecx, [esi + 0x6c] */
  ecx = (uint32_t)(esi + 0x6cu);
/* 73026d: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 730272: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x730278u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 730278: lea ecx, [esi + 0x90] */
  ecx = (uint32_t)(esi + 0x90u);
/* 73027e: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 730283: call dword ptr [0xcfa1c8] */
  esp -= 4; W32(esp, 0x730289u); SPILL(); f_4e2d56(); if (g_unwind) return; /* Core!??0FRotator@@QAE@XZ */ RELOAD();
/* 730289: lea ecx, [esi + 0x9c] */
  ecx = (uint32_t)(esi + 0x9cu);
/* 73028f: call dword ptr [0xcfa28c] */
  esp -= 4; W32(esp, 0x730295u); SPILL(); f_4e3dcd(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@XZ */ RELOAD();
/* 730295: lea ecx, [esi + 0xa8] */
  ecx = (uint32_t)(esi + 0xa8u);
/* 73029b: mov byte ptr [esp + 0x10], 3 */
  W8((uint32_t)(esp + 0x10u), 0x3u);
/* 7302a0: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7302a6u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7302a6: lea ecx, [esi + 0xb4] */
  ecx = (uint32_t)(esi + 0xb4u);
/* 7302ac: mov byte ptr [esp + 0x10], 4 */
  W8((uint32_t)(esp + 0x10u), 0x4u);
/* 7302b1: call dword ptr [0xcfa28c] */
  esp -= 4; W32(esp, 0x7302b7u); SPILL(); f_4e3dcd(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@XZ */ RELOAD();
/* 7302b7: lea ecx, [esi + 0xc0] */
  ecx = (uint32_t)(esi + 0xc0u);
/* 7302bd: mov byte ptr [esp + 0x10], 5 */
  W8((uint32_t)(esp + 0x10u), 0x5u);
/* 7302c2: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7302c8u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7302c8: lea ecx, [esi + 0xcc] */
  ecx = (uint32_t)(esi + 0xccu);
/* 7302ce: mov byte ptr [esp + 0x10], 6 */
  W8((uint32_t)(esp + 0x10u), 0x6u);
/* 7302d3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7302d9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7302d9: lea ecx, [esi + 0x104] */
  ecx = (uint32_t)(esi + 0x104u);
/* 7302df: mov byte ptr [esp + 0x10], 7 */
  W8((uint32_t)(esp + 0x10u), 0x7u);
/* 7302e4: call dword ptr [0xcfa1c8] */
  esp -= 4; W32(esp, 0x7302eau); SPILL(); f_4e2d56(); if (g_unwind) return; /* Core!??0FRotator@@QAE@XZ */ RELOAD();
/* 7302ea: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7302ee: mov eax, esi */
  eax = esi;
/* 7302f0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7302f1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7302f8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7302fb: ret  */
  esp += 4; SPILL(); return;
}

void f_730340(void) {
  LOAD_REGS();
L_730340: /* 730340: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 730342: push 0x9c4c98 */
  { uint32_t v = 0x9c4c98u; esp -= 4; W32(esp, v); }
/* 730347: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 73034d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73034e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 730355: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 730356: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 730357: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 730358: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 73035c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73035d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73035e: mov ebx, ecx */
  ebx = ecx;
/* 730360: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 730361: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 730365: call 0x6c67fd */
  esp -= 4; W32(esp, 0x73036au); SPILL(); f_6c67fd(); if (g_unwind) return; RELOAD();
/* 73036a: mov dword ptr [ebx], 0x9f72e0 */
  W32((uint32_t)(ebx), 0x9f72e0u);
/* 730370: mov eax, dword ptr [ebp + 0x54] */
  eax = R32((uint32_t)(ebp + 0x54u));
/* 730373: mov dword ptr [ebx + 0x54], eax */
  W32((uint32_t)(ebx + 0x54u), eax);
/* 730376: mov dword ptr [ebx], 0x9f9118 */
  W32((uint32_t)(ebx), 0x9f9118u);
/* 73037c: mov ecx, dword ptr [ebp + 0x58] */
  ecx = R32((uint32_t)(ebp + 0x58u));
/* 73037f: mov dword ptr [ebx + 0x58], ecx */
  W32((uint32_t)(ebx + 0x58u), ecx);
/* 730382: mov edx, dword ptr [ebp + 0x5c] */
  edx = R32((uint32_t)(ebp + 0x5cu));
/* 730385: lea eax, [ebp + 0x60] */
  eax = (uint32_t)(ebp + 0x60u);
/* 730388: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 730389: lea ecx, [ebx + 0x60] */
  ecx = (uint32_t)(ebx + 0x60u);
/* 73038c: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 730394: mov dword ptr [ebx + 0x5c], edx */
  W32((uint32_t)(ebx + 0x5cu), edx);
/* 730397: call 0x6c6555 */
  esp -= 4; W32(esp, 0x73039cu); SPILL(); f_6c6555(); if (g_unwind) return; RELOAD();
/* 73039c: lea ecx, [ebp + 0x6c] */
  ecx = (uint32_t)(ebp + 0x6cu);
/* 73039f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7303a0: lea ecx, [ebx + 0x6c] */
  ecx = (uint32_t)(ebx + 0x6cu);
/* 7303a3: mov byte ptr [esp + 0x20], 1 */
  W8((uint32_t)(esp + 0x20u), 0x1u);
/* 7303a8: call 0x6c925f */
  esp -= 4; W32(esp, 0x7303adu); SPILL(); f_6c925f(); if (g_unwind) return; RELOAD();
/* 7303ad: lea edx, [ebp + 0x78] */
  edx = (uint32_t)(ebp + 0x78u);
/* 7303b0: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7303b2: lea eax, [ebx + 0x78] */
  eax = (uint32_t)(ebx + 0x78u);
/* 7303b5: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7303b7: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 7303ba: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7303bd: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7303c0: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 7303c3: lea eax, [ebp + 0x84] */
  eax = (uint32_t)(ebp + 0x84u);
/* 7303c9: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7303cb: lea ecx, [ebx + 0x84] */
  ecx = (uint32_t)(ebx + 0x84u);
/* 7303d1: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7303d3: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7303d6: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7303d9: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7303dc: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7303df: lea ecx, [ebp + 0x90] */
  ecx = (uint32_t)(ebp + 0x90u);
/* 7303e5: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7303e7: lea edx, [ebx + 0x90] */
  edx = (uint32_t)(ebx + 0x90u);
/* 7303ed: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7303ef: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7303f2: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 7303f5: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7303f8: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7303fb: lea edx, [ebp + 0x9c] */
  edx = (uint32_t)(ebp + 0x9cu);
/* 730401: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 730402: lea ecx, [ebx + 0x9c] */
  ecx = (uint32_t)(ebx + 0x9cu);
/* 730408: mov byte ptr [esp + 0x20], 2 */
  W8((uint32_t)(esp + 0x20u), 0x2u);
/* 73040d: call dword ptr [0xcfa290] */
  esp -= 4; W32(esp, 0x730413u); SPILL(); f_4e447b(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@ABV0@@Z */ RELOAD();
/* 730413: lea eax, [ebp + 0xa8] */
  eax = (uint32_t)(ebp + 0xa8u);
/* 730419: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73041a: lea ecx, [ebx + 0xa8] */
  ecx = (uint32_t)(ebx + 0xa8u);
/* 730420: mov byte ptr [esp + 0x20], 3 */
  W8((uint32_t)(esp + 0x20u), 0x3u);
/* 730425: call 0x6ca02e */
  esp -= 4; W32(esp, 0x73042au); SPILL(); f_6ca02e(); if (g_unwind) return; RELOAD();
/* 73042a: lea ecx, [ebp + 0xb4] */
  ecx = (uint32_t)(ebp + 0xb4u);
/* 730430: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 730431: lea ecx, [ebx + 0xb4] */
  ecx = (uint32_t)(ebx + 0xb4u);
/* 730437: mov byte ptr [esp + 0x20], 4 */
  W8((uint32_t)(esp + 0x20u), 0x4u);
/* 73043c: call dword ptr [0xcfa290] */
  esp -= 4; W32(esp, 0x730442u); SPILL(); f_4e447b(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@ABV0@@Z */ RELOAD();
/* 730442: lea edx, [ebp + 0xc0] */
  edx = (uint32_t)(ebp + 0xc0u);
/* 730448: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 730449: lea ecx, [ebx + 0xc0] */
  ecx = (uint32_t)(ebx + 0xc0u);
/* 73044f: mov byte ptr [esp + 0x20], 5 */
  W8((uint32_t)(esp + 0x20u), 0x5u);
/* 730454: call 0x6c2a81 */
  esp -= 4; W32(esp, 0x730459u); SPILL(); f_6c2a81(); if (g_unwind) return; RELOAD();
/* 730459: lea eax, [ebp + 0xcc] */
  eax = (uint32_t)(ebp + 0xccu);
/* 73045f: mov byte ptr [esp + 0x1c], 6 */
  W8((uint32_t)(esp + 0x1cu), 0x6u);
/* 730464: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 730465: lea ecx, [ebx + 0xcc] */
  ecx = (uint32_t)(ebx + 0xccu);
/* 73046b: call 0x6caee8 */
  esp -= 4; W32(esp, 0x730470u); SPILL(); f_6caee8(); if (g_unwind) return; RELOAD();
/* 730470: mov ecx, dword ptr [ebp + 0xd8] */
  ecx = R32((uint32_t)(ebp + 0xd8u));
/* 730476: mov dword ptr [ebx + 0xd8], ecx */
  W32((uint32_t)(ebx + 0xd8u), ecx);
/* 73047c: mov edx, dword ptr [ebp + 0xdc] */
  edx = R32((uint32_t)(ebp + 0xdcu));
/* 730482: mov dword ptr [ebx + 0xdc], edx */
  W32((uint32_t)(ebx + 0xdcu), edx);
/* 730488: mov eax, dword ptr [ebp + 0xe0] */
  eax = R32((uint32_t)(ebp + 0xe0u));
/* 73048e: mov dword ptr [ebx + 0xe0], eax */
  W32((uint32_t)(ebx + 0xe0u), eax);
/* 730494: mov ecx, dword ptr [ebp + 0xe4] */
  ecx = R32((uint32_t)(ebp + 0xe4u));
/* 73049a: mov dword ptr [ebx + 0xe4], ecx */
  W32((uint32_t)(ebx + 0xe4u), ecx);
/* 7304a0: mov edx, dword ptr [ebp + 0xe8] */
  edx = R32((uint32_t)(ebp + 0xe8u));
/* 7304a6: mov dword ptr [ebx + 0xe8], edx */
  W32((uint32_t)(ebx + 0xe8u), edx);
/* 7304ac: mov eax, dword ptr [ebp + 0xec] */
  eax = R32((uint32_t)(ebp + 0xecu));
/* 7304b2: mov dword ptr [ebx + 0xec], eax */
  W32((uint32_t)(ebx + 0xecu), eax);
/* 7304b8: mov ecx, dword ptr [ebp + 0xf0] */
  ecx = R32((uint32_t)(ebp + 0xf0u));
/* 7304be: mov dword ptr [ebx + 0xf0], ecx */
  W32((uint32_t)(ebx + 0xf0u), ecx);
/* 7304c4: lea esi, [ebp + 0xf4] */
  esi = (uint32_t)(ebp + 0xf4u);
/* 7304ca: lea edi, [ebx + 0xf4] */
  edi = (uint32_t)(ebx + 0xf4u);
/* 7304d0: mov ecx, 0xe */
  ecx = 0xeu;
/* 7304d5: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7304d7: mov edx, dword ptr [ebp + 0x12c] */
  edx = R32((uint32_t)(ebp + 0x12cu));
/* 7304dd: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 7304e1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7304e2: mov dword ptr [ebx + 0x12c], edx */
  W32((uint32_t)(ebx + 0x12cu), edx);
/* 7304e8: mov eax, dword ptr [ebp + 0x130] */
  eax = R32((uint32_t)(ebp + 0x130u));
/* 7304ee: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7304ef: mov dword ptr [ebx + 0x130], eax */
  W32((uint32_t)(ebx + 0x130u), eax);
/* 7304f5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7304f6: mov eax, ebx */
  eax = ebx;
/* 7304f8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7304f9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 730500: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 730503: ret 4 */
  esp += 8; SPILL(); return;
}

void f_730590(void) {
  LOAD_REGS();
L_730590: /* 730590: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 730591: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 730592: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 730596: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 730597: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 730598: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 730599: mov ebx, ecx */
  ebx = ecx;
/* 73059b: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x7305a1u); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7305a1: lea esi, [ebp + 0x28] */
  esi = (uint32_t)(ebp + 0x28u);
/* 7305a4: lea edi, [ebx + 0x28] */
  edi = (uint32_t)(ebx + 0x28u);
/* 7305a7: mov ecx, 7 */
  ecx = 0x7u;
/* 7305ac: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7305ae: lea eax, [ebp + 0x44] */
  eax = (uint32_t)(ebp + 0x44u);
/* 7305b1: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7305b3: lea ecx, [ebx + 0x44] */
  ecx = (uint32_t)(ebx + 0x44u);
/* 7305b6: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7305b8: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7305bb: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7305be: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 7305c1: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7305c4: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 7305c7: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 7305ca: mov ecx, dword ptr [ebp + 0x54] */
  ecx = R32((uint32_t)(ebp + 0x54u));
/* 7305cd: mov dword ptr [ebx + 0x54], ecx */
  W32((uint32_t)(ebx + 0x54u), ecx);
/* 7305d0: mov edx, dword ptr [ebp + 0x58] */
  edx = R32((uint32_t)(ebp + 0x58u));
/* 7305d3: lea ecx, [ebp + 0x60] */
  ecx = (uint32_t)(ebp + 0x60u);
/* 7305d6: mov dword ptr [ebx + 0x58], edx */
  W32((uint32_t)(ebx + 0x58u), edx);
/* 7305d9: mov eax, dword ptr [ebp + 0x5c] */
  eax = R32((uint32_t)(ebp + 0x5cu));
/* 7305dc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7305dd: lea ecx, [ebx + 0x60] */
  ecx = (uint32_t)(ebx + 0x60u);
/* 7305e0: mov dword ptr [ebx + 0x5c], eax */
  W32((uint32_t)(ebx + 0x5cu), eax);
/* 7305e3: call 0x6c3116 */
  esp -= 4; W32(esp, 0x7305e8u); SPILL(); f_6c3116(); if (g_unwind) return; RELOAD();
/* 7305e8: lea edx, [ebp + 0x6c] */
  edx = (uint32_t)(ebp + 0x6cu);
/* 7305eb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7305ec: lea ecx, [ebx + 0x6c] */
  ecx = (uint32_t)(ebx + 0x6cu);
/* 7305ef: call 0x6c4ac0 */
  esp -= 4; W32(esp, 0x7305f4u); SPILL(); f_6c4ac0(); if (g_unwind) return; RELOAD();
/* 7305f4: lea eax, [ebp + 0x78] */
  eax = (uint32_t)(ebp + 0x78u);
/* 7305f7: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7305f9: lea ecx, [ebx + 0x78] */
  ecx = (uint32_t)(ebx + 0x78u);
/* 7305fc: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7305fe: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 730601: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 730604: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 730607: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 73060a: lea ecx, [ebp + 0x84] */
  ecx = (uint32_t)(ebp + 0x84u);
/* 730610: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 730612: lea edx, [ebx + 0x84] */
  edx = (uint32_t)(ebx + 0x84u);
/* 730618: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 73061a: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 73061d: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 730620: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 730623: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 730626: lea edx, [ebp + 0x90] */
  edx = (uint32_t)(ebp + 0x90u);
/* 73062c: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 73062e: lea eax, [ebx + 0x90] */
  eax = (uint32_t)(ebx + 0x90u);
/* 730634: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 730636: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 730639: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 73063c: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 73063f: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 730642: lea eax, [ebp + 0x9c] */
  eax = (uint32_t)(ebp + 0x9cu);
/* 730648: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 730649: lea ecx, [ebx + 0x9c] */
  ecx = (uint32_t)(ebx + 0x9cu);
/* 73064f: call dword ptr [0xcfa294] */
  esp -= 4; W32(esp, 0x730655u); SPILL(); f_4e2676(); if (g_unwind) return; /* Core!??4?$TArray@G@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 730655: lea ecx, [ebp + 0xa8] */
  ecx = (uint32_t)(ebp + 0xa8u);
/* 73065b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73065c: lea ecx, [ebx + 0xa8] */
  ecx = (uint32_t)(ebx + 0xa8u);
/* 730662: call 0x6c93ef */
  esp -= 4; W32(esp, 0x730667u); SPILL(); f_6c93ef(); if (g_unwind) return; RELOAD();
/* 730667: lea edx, [ebp + 0xb4] */
  edx = (uint32_t)(ebp + 0xb4u);
/* 73066d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 73066e: lea ecx, [ebx + 0xb4] */
  ecx = (uint32_t)(ebx + 0xb4u);
/* 730674: call dword ptr [0xcfa294] */
  esp -= 4; W32(esp, 0x73067au); SPILL(); f_4e2676(); if (g_unwind) return; /* Core!??4?$TArray@G@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 73067a: lea eax, [ebp + 0xc0] */
  eax = (uint32_t)(ebp + 0xc0u);
/* 730680: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 730681: lea ecx, [ebx + 0xc0] */
  ecx = (uint32_t)(ebx + 0xc0u);
/* 730687: call 0x6c9606 */
  esp -= 4; W32(esp, 0x73068cu); SPILL(); f_6c9606(); if (g_unwind) return; RELOAD();
/* 73068c: lea ecx, [ebp + 0xcc] */
  ecx = (uint32_t)(ebp + 0xccu);
/* 730692: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 730693: lea ecx, [ebx + 0xcc] */
  ecx = (uint32_t)(ebx + 0xccu);
/* 730699: call 0x6c4214 */
  esp -= 4; W32(esp, 0x73069eu); SPILL(); f_6c4214(); if (g_unwind) return; RELOAD();
/* 73069e: mov edx, dword ptr [ebp + 0xd8] */
  edx = R32((uint32_t)(ebp + 0xd8u));
/* 7306a4: mov dword ptr [ebx + 0xd8], edx */
  W32((uint32_t)(ebx + 0xd8u), edx);
/* 7306aa: mov eax, dword ptr [ebp + 0xdc] */
  eax = R32((uint32_t)(ebp + 0xdcu));
/* 7306b0: mov dword ptr [ebx + 0xdc], eax */
  W32((uint32_t)(ebx + 0xdcu), eax);
/* 7306b6: mov ecx, dword ptr [ebp + 0xe0] */
  ecx = R32((uint32_t)(ebp + 0xe0u));
/* 7306bc: mov dword ptr [ebx + 0xe0], ecx */
  W32((uint32_t)(ebx + 0xe0u), ecx);
/* 7306c2: mov edx, dword ptr [ebp + 0xe4] */
  edx = R32((uint32_t)(ebp + 0xe4u));
/* 7306c8: mov dword ptr [ebx + 0xe4], edx */
  W32((uint32_t)(ebx + 0xe4u), edx);
/* 7306ce: mov eax, dword ptr [ebp + 0xe8] */
  eax = R32((uint32_t)(ebp + 0xe8u));
/* 7306d4: mov dword ptr [ebx + 0xe8], eax */
  W32((uint32_t)(ebx + 0xe8u), eax);
/* 7306da: mov ecx, dword ptr [ebp + 0xec] */
  ecx = R32((uint32_t)(ebp + 0xecu));
/* 7306e0: mov dword ptr [ebx + 0xec], ecx */
  W32((uint32_t)(ebx + 0xecu), ecx);
/* 7306e6: mov edx, dword ptr [ebp + 0xf0] */
  edx = R32((uint32_t)(ebp + 0xf0u));
/* 7306ec: mov dword ptr [ebx + 0xf0], edx */
  W32((uint32_t)(ebx + 0xf0u), edx);
/* 7306f2: lea esi, [ebp + 0xf4] */
  esi = (uint32_t)(ebp + 0xf4u);
/* 7306f8: lea edi, [ebx + 0xf4] */
  edi = (uint32_t)(ebx + 0xf4u);
/* 7306fe: mov ecx, 0xe */
  ecx = 0xeu;
/* 730703: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 730705: mov eax, dword ptr [ebp + 0x12c] */
  eax = R32((uint32_t)(ebp + 0x12cu));
/* 73070b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 73070c: mov dword ptr [ebx + 0x12c], eax */
  W32((uint32_t)(ebx + 0x12cu), eax);
/* 730712: mov ecx, dword ptr [ebp + 0x130] */
  ecx = R32((uint32_t)(ebp + 0x130u));
/* 730718: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 730719: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 73071a: mov dword ptr [ebx + 0x130], ecx */
  W32((uint32_t)(ebx + 0x130u), ecx);
/* 730720: mov eax, ebx */
  eax = ebx;
/* 730722: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 730723: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7307a0(void) {
  LOAD_REGS();
L_7307a0: /* 7307a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7307a1: mov esi, ecx */
  esi = ecx;
/* 7307a3: call 0x6ccd47 */
  esp -= 4; W32(esp, 0x7307a8u); SPILL(); f_6ccd47(); if (g_unwind) return; RELOAD();
/* 7307a8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7307ad: je 0x7307be */
  if (zf) goto L_7307be;
L_7307af: /* 7307af: push 0x134 */
  { uint32_t v = 0x134u; esp -= 4; W32(esp, v); }
/* 7307b4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7307b5: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x7307bbu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 7307bb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7307be: /* 7307be: mov eax, esi */
  eax = esi;
/* 7307c0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7307c1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7307e0(void) {
  LOAD_REGS();
L_7307e0: /* 7307e0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7307e1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 7307e5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7307e8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7307e9: mov esi, ecx */
  esi = ecx;
/* 7307eb: je 0x730820 */
  if (zf) goto L_730820;
L_7307ed: /* 7307ed: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 7307f0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7307f1: push 0x6ccd47 */
  { uint32_t v = 0x6ccd47u; esp -= 4; W32(esp, v); }
/* 7307f6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 7307f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7307fa: push 0x134 */
  { uint32_t v = 0x134u; esp -= 4; W32(esp, v); }
/* 7307ff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 730800: call 0x99ca3d */
  esp -= 4; W32(esp, 0x730805u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 730805: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 730808: je 0x730818 */
  if (zf) goto L_730818;
L_73080a: /* 73080a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 730810: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 730812: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 730814: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 730815: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x730818u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_730818: /* 730818: mov eax, edi */
  eax = edi;
/* 73081a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 73081b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73081c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 73081d: ret 4 */
  esp += 8; SPILL(); return;
L_730820: /* 730820: mov ecx, esi */
  ecx = esi;
/* 730822: call 0x6ccd47 */
  esp -= 4; W32(esp, 0x730827u); SPILL(); f_6ccd47(); if (g_unwind) return; RELOAD();
/* 730827: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73082a: je 0x73083b */
  if (zf) goto L_73083b;
L_73082c: /* 73082c: push 0x134 */
  { uint32_t v = 0x134u; esp -= 4; W32(esp, v); }
/* 730831: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 730832: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x730838u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 730838: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_73083b: /* 73083b: mov eax, esi */
  eax = esi;
/* 73083d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73083e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 73083f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_730870(void) {
  LOAD_REGS();
L_730870: /* 730870: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 730871: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 730872: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 730873: mov esi, ecx */
  esi = ecx;
/* 730875: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 730876: lea ecx, [esi + 0x20] */
  ecx = (uint32_t)(esi + 0x20u);
/* 730879: mov dword ptr [esi], 0x9f91d0 */
  W32((uint32_t)(esi), 0x9f91d0u);
/* 73087f: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x730885u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 730885: xor eax, eax */
  eax = 0;
/* 730887: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 73088a: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 73088d: mov ebp, dword ptr [0xcfa1b0] */
  ebp = R32((uint32_t)(0xcfa1b0u));
/* 730893: mov ebx, dword ptr [ebp + 4] */
  ebx = R32((uint32_t)(ebp + 0x4u));
/* 730896: mov edi, dword ptr [ebp] */
  edi = R32((uint32_t)(ebp));
/* 730899: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73089a: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 73089f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7308a0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7308a1: call 0x99c910 */
  esp -= 4; W32(esp, 0x7308a6u); SPILL(); f_99c910(); if (g_unwind) return; RELOAD();
/* 7308a6: add eax, 0xe1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 7308ab: mov ecx, 0 */
  ecx = 0x0u;
/* 7308b0: adc edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 7308b2: add edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edi = r;
  }
/* 7308b5: mov dword ptr [ebp], edi */
  W32((uint32_t)(ebp), edi);
/* 7308b8: mov edi, dword ptr [0xcfa1b0] */
  edi = R32((uint32_t)(0xcfa1b0u));
/* 7308be: adc ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ebx = r;
  }
/* 7308c0: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 7308c3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7308c4: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7308c7: mov dword ptr [esi + 0x10], edx */
  W32((uint32_t)(esi + 0x10u), edx);
/* 7308ca: mov dword ptr [esi + 0x14], 1 */
  W32((uint32_t)(esi + 0x14u), 0x1u);
/* 7308d1: mov dword ptr [esi + 0x18], ecx */
  W32((uint32_t)(esi + 0x18u), ecx);
/* 7308d4: mov dword ptr [esi + 0x1c], ecx */
  W32((uint32_t)(esi + 0x1cu), ecx);
/* 7308d7: mov eax, esi */
  eax = esi;
/* 7308d9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7308da: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7308db: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7308dc: ret  */
  esp += 4; SPILL(); return;
}

void f_730900(void) {
  LOAD_REGS();
L_730900: /* 730900: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 730901: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 730902: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 730906: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 730907: mov ecx, esi */
  ecx = esi;
/* 730909: call dword ptr [0xcfa42c] */
  esp -= 4; W32(esp, 0x73090fu); SPILL(); f_4e4101(); if (g_unwind) return; /* Core!?IsPersistent@FArchive@@QAEHXZ */ RELOAD();
/* 73090f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 730911: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 730915: jne 0x73092d */
  if (!zf) goto L_73092d;
L_730917: /* 730917: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 730919: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 73091c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73091d: mov ecx, esi */
  ecx = esi;
/* 73091f: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x730922u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 730922: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 730924: lea eax, [edi + 8] */
  eax = (uint32_t)(edi + 0x8u);
/* 730927: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 730928: mov ecx, esi */
  ecx = esi;
/* 73092a: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x73092du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_73092d: /* 73092d: mov ebx, dword ptr [0xcfa280] */
  ebx = R32((uint32_t)(0xcfa280u));
/* 730933: lea ecx, [edi + 0x14] */
  ecx = (uint32_t)(edi + 0x14u);
/* 730936: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 730937: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 730938: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x73093au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 73093a: lea edx, [edi + 0x18] */
  edx = (uint32_t)(edi + 0x18u);
/* 73093d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 73093e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73093f: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x730941u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 730941: lea eax, [edi + 0x1c] */
  eax = (uint32_t)(edi + 0x1cu);
/* 730944: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 730945: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 730946: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x730948u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 730948: add edi, 0x20 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 73094b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73094c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73094d: call 0x6ca209 */
  esp -= 4; W32(esp, 0x730952u); SPILL(); f_6ca209(); if (g_unwind) return; RELOAD();
/* 730952: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 730955: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 730956: mov eax, esi */
  eax = esi;
/* 730958: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 730959: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 73095a: ret  */
  esp += 4; SPILL(); return;
}

void f_730980(void) {
  LOAD_REGS();
L_730980: /* 730980: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 730983: jmp 0x6ccbee */
  SPILL(); f_6ccbee(); return;
}

void f_7309a0(void) {
  LOAD_REGS();
L_7309a0: /* 7309a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7309a4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7309a5: mov esi, ecx */
  esi = ecx;
/* 7309a7: mov dword ptr [esi], 0x9f91d0 */
  W32((uint32_t)(esi), 0x9f91d0u);
/* 7309ad: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7309b0: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 7309b3: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 7309b6: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 7309b9: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 7309bc: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* 7309bf: mov edx, dword ptr [eax + 0x10] */
  edx = R32((uint32_t)(eax + 0x10u));
/* 7309c2: mov dword ptr [esi + 0x10], edx */
  W32((uint32_t)(esi + 0x10u), edx);
/* 7309c5: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 7309c8: mov dword ptr [esi + 0x14], ecx */
  W32((uint32_t)(esi + 0x14u), ecx);
/* 7309cb: mov edx, dword ptr [eax + 0x18] */
  edx = R32((uint32_t)(eax + 0x18u));
/* 7309ce: mov dword ptr [esi + 0x18], edx */
  W32((uint32_t)(esi + 0x18u), edx);
/* 7309d1: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 7309d4: add eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7309d7: mov dword ptr [esi + 0x1c], ecx */
  W32((uint32_t)(esi + 0x1cu), ecx);
/* 7309da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7309db: lea ecx, [esi + 0x20] */
  ecx = (uint32_t)(esi + 0x20u);
/* 7309de: call 0x6c3e22 */
  esp -= 4; W32(esp, 0x7309e3u); SPILL(); f_6c3e22(); if (g_unwind) return; RELOAD();
/* 7309e3: mov eax, esi */
  eax = esi;
/* 7309e5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7309e6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_730a10(void) {
  LOAD_REGS();
L_730a10: /* 730a10: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 730a14: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 730a15: mov esi, ecx */
  esi = ecx;
/* 730a17: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 730a1a: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 730a1d: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 730a20: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 730a23: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 730a26: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* 730a29: mov edx, dword ptr [eax + 0x10] */
  edx = R32((uint32_t)(eax + 0x10u));
/* 730a2c: mov dword ptr [esi + 0x10], edx */
  W32((uint32_t)(esi + 0x10u), edx);
/* 730a2f: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 730a32: mov dword ptr [esi + 0x14], ecx */
  W32((uint32_t)(esi + 0x14u), ecx);
/* 730a35: mov edx, dword ptr [eax + 0x18] */
  edx = R32((uint32_t)(eax + 0x18u));
/* 730a38: mov dword ptr [esi + 0x18], edx */
  W32((uint32_t)(esi + 0x18u), edx);
/* 730a3b: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 730a3e: add eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 730a41: mov dword ptr [esi + 0x1c], ecx */
  W32((uint32_t)(esi + 0x1cu), ecx);
/* 730a44: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 730a45: lea ecx, [esi + 0x20] */
  ecx = (uint32_t)(esi + 0x20u);
/* 730a48: call 0x6c7d65 */
  esp -= 4; W32(esp, 0x730a4du); SPILL(); f_6c7d65(); if (g_unwind) return; RELOAD();
/* 730a4d: mov eax, esi */
  eax = esi;
/* 730a4f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 730a50: ret 4 */
  esp += 8; SPILL(); return;
}

void f_730a80(void) {
  LOAD_REGS();
L_730a80: /* 730a80: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 730a82: push 0x9c4cde */
  { uint32_t v = 0x9c4cdeu; esp -= 4; W32(esp, v); }
/* 730a87: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 730a8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 730a8e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 730a95: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 730a96: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 730a97: mov esi, ecx */
  esi = ecx;
/* 730a99: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 730a9d: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 730aa0: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 730aa8: mov dword ptr [esi], 0x9f91fc */
  W32((uint32_t)(esi), 0x9f91fcu);
/* 730aae: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x730ab4u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 730ab4: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 730ab7: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 730abc: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x730ac2u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 730ac2: lea ecx, [esi + 0x1c] */
  ecx = (uint32_t)(esi + 0x1cu);
/* 730ac5: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 730aca: call dword ptr [0xcfa28c] */
  esp -= 4; W32(esp, 0x730ad0u); SPILL(); f_4e3dcd(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@XZ */ RELOAD();
/* 730ad0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 730ad4: mov eax, esi */
  eax = esi;
/* 730ad6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 730ad7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 730ade: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 730ae1: ret  */
  esp += 4; SPILL(); return;
}

void f_730b10(void) {
  LOAD_REGS();
L_730b10: /* 730b10: mov eax, 2 */
  eax = 0x2u;
/* 730b15: ret  */
  esp += 4; SPILL(); return;
}

void f_730b30(void) {
  LOAD_REGS();
L_730b30: /* 730b30: xor eax, eax */
  eax = 0;
/* 730b32: ret  */
  esp += 4; SPILL(); return;
}

void f_730b50(void) {
  LOAD_REGS();
L_730b50: /* 730b50: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_730b70(void) {
  LOAD_REGS();
L_730b70: /* 730b70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 730b71: mov esi, ecx */
  esi = ecx;
/* 730b73: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 730b75: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 730b78: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 730b7a: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x730b80u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 730b80: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 730b82: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 730b85: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 730b87: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x730b8du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 730b8d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 730b8f: lea ecx, [esi + 0x1c] */
  ecx = (uint32_t)(esi + 0x1cu);
/* 730b92: call dword ptr [0xcfa3a0] */
  esp -= 4; W32(esp, 0x730b98u); SPILL(); f_4e264e(); if (g_unwind) return; /* Core!?Empty@?$TArray@G@@QAEXH@Z */ RELOAD();
/* 730b98: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 730b99: ret  */
  esp += 4; SPILL(); return;
}

void f_730bb0(void) {
  LOAD_REGS();
L_730bb0: /* 730bb0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 730bb1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 730bb2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 730bb6: mov esi, ecx */
  esi = ecx;
/* 730bb8: lea eax, [edi + 0x10] */
  eax = (uint32_t)(edi + 0x10u);
/* 730bbb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 730bbc: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 730bbf: call 0x6ca3a3 */
  esp -= 4; W32(esp, 0x730bc4u); SPILL(); f_6ca3a3(); if (g_unwind) return; RELOAD();
/* 730bc4: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 730bc7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 730bc8: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 730bcb: call 0x6c67f3 */
  esp -= 4; W32(esp, 0x730bd0u); SPILL(); f_6c67f3(); if (g_unwind) return; RELOAD();
/* 730bd0: add edi, 0x1c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 730bd3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 730bd4: lea ecx, [esi + 0x1c] */
  ecx = (uint32_t)(esi + 0x1cu);
/* 730bd7: call dword ptr [0xcfa294] */
  esp -= 4; W32(esp, 0x730bddu); SPILL(); f_4e2676(); if (g_unwind) return; /* Core!??4?$TArray@G@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 730bdd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 730bde: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 730bdf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_730c00(void) {
  LOAD_REGS();
L_730c00: /* 730c00: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 730c01: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 730c02: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 730c03: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 730c07: mov esi, ecx */
  esi = ecx;
/* 730c09: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 730c0b: je 0x730c5d */
  if (zf) goto L_730c5d;
L_730c0d: /* 730c0d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 730c10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 730c11: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 730c13: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x730c19u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 730c19: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 730c1c: xor ebx, ebx */
  ebx = 0;
/* 730c1e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 730c20: jle 0x730c5d */
  if ((zf || sf != of)) goto L_730c5d;
L_730c22: /* 730c22: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 730c23: xor ebp, ebp */
  ebp = 0;
L_730c25: /* 730c25: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 730c27: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 730c29: mov ecx, esi */
  ecx = esi;
/* 730c2b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x730c31u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 730c31: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 730c33: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 730c36: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 730c39: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 730c3b: je 0x730c51 */
  if (zf) goto L_730c51;
L_730c3d: /* 730c3d: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 730c3f: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 730c41: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 730c43: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 730c45: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 730c48: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 730c4b: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 730c4e: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
L_730c51: /* 730c51: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 730c54: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 730c55: add ebp, 0xc */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 730c58: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 730c5a: jl 0x730c25 */
  if ((sf != of)) goto L_730c25;
L_730c5c: /* 730c5c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_730c5d: /* 730c5d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 730c5e: mov eax, esi */
  eax = esi;
/* 730c60: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 730c61: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 730c62: ret 4 */
  esp += 8; SPILL(); return;
}

void f_730c90(void) {
  LOAD_REGS();
L_730c90: /* 730c90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 730c91: mov esi, ecx */
  esi = ecx;
/* 730c93: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 730c94: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 730c98: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 730c9b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 730c9c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 730c9d: call 0x6caa01 */
  esp -= 4; W32(esp, 0x730ca2u); SPILL(); f_6caa01(); if (g_unwind) return; RELOAD();
/* 730ca2: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 730ca5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 730ca6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 730ca7: call 0x6c1505 */
  esp -= 4; W32(esp, 0x730cacu); SPILL(); f_6c1505(); if (g_unwind) return; RELOAD();
/* 730cac: add esi, 0x1c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 730caf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 730cb0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 730cb1: call 0x6c67cb */
  esp -= 4; W32(esp, 0x730cb6u); SPILL(); f_6c67cb(); if (g_unwind) return; RELOAD();
/* 730cb6: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 730cb9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 730cba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 730cbb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_730cd0(void) {
  LOAD_REGS();
L_730cd0: /* 730cd0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 730cd1: mov ebp, esp */
  ebp = esp;
/* 730cd3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 730cd5: push 0x9c4d00 */
  { uint32_t v = 0x9c4d00u; esp -= 4; W32(esp, v); }
/* 730cda: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 730ce0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 730ce1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 730ce8: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 730ceb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 730cec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 730ced: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 730cf0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 730cf1: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 730cf4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 730cf7: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 730cf9: xor ebx, ebx */
  ebx = 0;
/* 730cfb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 730cfc: mov ecx, edi */
  ecx = edi;
/* 730cfe: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 730d01: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x730d07u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 730d07: mov ecx, esi */
  ecx = esi;
/* 730d09: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x730d0fu); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 730d0f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 730d11: je 0x730d89 */
  if (zf) goto L_730d89;
L_730d13: /* 730d13: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 730d16: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 730d17: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 730d18: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x730d1eu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 730d1e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 730d21: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 730d24: xor eax, eax */
  eax = 0;
L_730d26: /* 730d26: cmp eax, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 730d29: jge 0x730d2e */
  if ((sf == of)) goto L_730d2e;
L_730d2b: /* 730d2b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 730d2c: jmp 0x730d26 */
  goto L_730d26;
L_730d2e: /* 730d2e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 730d2f: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 730d31: mov ecx, edi */
  ecx = edi;
/* 730d33: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x730d39u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 730d39: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 730d3c: mov ebx, dword ptr [0xcfa1b4] */
  ebx = R32((uint32_t)(0xcfa1b4u));
L_730d42: /* 730d42: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 730d45: cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 730d48: jge 0x730dd1 */
  if ((sf == of)) goto L_730dd1;
L_730d4e: /* 730d4e: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 730d50: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 730d52: mov ecx, edi */
  ecx = edi;
/* 730d54: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x730d5au); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 730d5a: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 730d5d: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 730d5f: lea edi, [eax + edx*4] */
  edi = (uint32_t)(eax + edx*4);
/* 730d62: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 730d63: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 730d64: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x730d66u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 730d66: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 730d69: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 730d6c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 730d6d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 730d6e: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x730d70u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 730d70: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 730d73: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 730d76: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 730d77: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 730d78: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x730d7au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 730d7a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 730d7d: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 730d80: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 730d83: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 730d84: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 730d87: jmp 0x730d42 */
  goto L_730d42;
L_730d89: /* 730d89: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
/* 730d8c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 730d8d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 730d8e: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x730d94u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 730d94: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_730d97: /* 730d97: cmp ebx, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 730d9a: jge 0x730dd1 */
  if ((sf == of)) goto L_730dd1;
L_730d9c: /* 730d9c: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 730d9e: lea edx, [ebx + ebx*2] */
  edx = (uint32_t)(ebx + ebx*2);
/* 730da1: lea edi, [eax + edx*4] */
  edi = (uint32_t)(eax + edx*4);
/* 730da4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 730da5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 730da6: call dword ptr [0xcfa1b4] */
  esp -= 4; W32(esp, 0x730dacu); SPILL(); f_4e415b(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAM@Z */ RELOAD();
/* 730dac: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 730daf: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 730db2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 730db3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 730db4: call dword ptr [0xcfa1b4] */
  esp -= 4; W32(esp, 0x730dbau); SPILL(); f_4e415b(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAM@Z */ RELOAD();
/* 730dba: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 730dbd: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 730dc0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 730dc1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 730dc2: call dword ptr [0xcfa1b4] */
  esp -= 4; W32(esp, 0x730dc8u); SPILL(); f_4e415b(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAM@Z */ RELOAD();
/* 730dc8: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 730dcb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 730dce: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 730dcf: jmp 0x730d97 */
  goto L_730d97;
L_730dd1: /* 730dd1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 730dd4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 730dd5: mov eax, esi */
  eax = esi;
/* 730dd7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 730dd8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 730ddf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 730de0: mov esp, ebp */
  esp = ebp;
/* 730de2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 730de3: ret  */
  esp += 4; SPILL(); return;
}

void f_730de4(void) {
  LOAD_REGS();
L_730de4: /* 730de4: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 730de7: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 730dec: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 730def: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 730df0: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 730df3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x730df8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_730df8(); return;
}

void f_730df8(void) {
  LOAD_REGS();
L_730df8: /* 730df8: push 0x9f9218 */
  { uint32_t v = 0x9f9218u; esp -= 4; W32(esp, v); }
/* 730dfd: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 730e02: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x730e08u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 730e08: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 730e0b: xor ebx, ebx */
  ebx = 0;
/* 730e0d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 730e0e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 730e0f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x730e14u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_730e14: guest_badaddr(0x730e14); return;
}

void f_730e80(void) {
  LOAD_REGS();
L_730e80: /* 730e80: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 730e82: push 0x9c4d2f */
  { uint32_t v = 0x9c4d2fu; esp -= 4; W32(esp, v); }
/* 730e87: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 730e8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 730e8e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 730e95: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 730e96: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 730e97: mov esi, ecx */
  esi = ecx;
/* 730e99: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 730e9d: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 730ea0: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 730ea8: mov dword ptr [esi], 0x9f9230 */
  W32((uint32_t)(esi), 0x9f9230u);
/* 730eae: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x730eb4u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 730eb4: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 730eb7: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 730ebc: call dword ptr [0xcfa28c] */
  esp -= 4; W32(esp, 0x730ec2u); SPILL(); f_4e3dcd(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@XZ */ RELOAD();
/* 730ec2: lea ecx, [esi + 0x1c] */
  ecx = (uint32_t)(esi + 0x1cu);
/* 730ec5: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 730eca: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x730ed0u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 730ed0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 730ed4: mov eax, esi */
  eax = esi;
/* 730ed6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 730ed7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 730ede: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 730ee1: ret  */
  esp += 4; SPILL(); return;
}

void f_730f10(void) {
  LOAD_REGS();
L_730f10: /* 730f10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 730f11: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 730f15: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 730f16: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 730f1a: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
/* 730f1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 730f1e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 730f1f: call 0x6ca673 */
  esp -= 4; W32(esp, 0x730f24u); SPILL(); f_6ca673(); if (g_unwind) return; RELOAD();
/* 730f24: lea ecx, [edi + 0x1c] */
  ecx = (uint32_t)(edi + 0x1cu);
/* 730f27: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 730f28: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 730f29: call 0x6c1505 */
  esp -= 4; W32(esp, 0x730f2eu); SPILL(); f_6c1505(); if (g_unwind) return; RELOAD();
/* 730f2e: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 730f31: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 730f32: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 730f33: call 0x6c67cb */
  esp -= 4; W32(esp, 0x730f38u); SPILL(); f_6c67cb(); if (g_unwind) return; RELOAD();
/* 730f38: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 730f3b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 730f3c: mov eax, esi */
  eax = esi;
/* 730f3e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 730f3f: ret  */
  esp += 4; SPILL(); return;
}

void f_730f50(void) {
  LOAD_REGS();
L_730f50: /* 730f50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 730f51: mov esi, ecx */
  esi = ecx;
/* 730f53: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 730f54: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 730f58: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 730f5b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 730f5c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 730f5d: call 0x6ca673 */
  esp -= 4; W32(esp, 0x730f62u); SPILL(); f_6ca673(); if (g_unwind) return; RELOAD();
/* 730f62: lea ecx, [esi + 0x1c] */
  ecx = (uint32_t)(esi + 0x1cu);
/* 730f65: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 730f66: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 730f67: call 0x6c1505 */
  esp -= 4; W32(esp, 0x730f6cu); SPILL(); f_6c1505(); if (g_unwind) return; RELOAD();
/* 730f6c: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 730f6f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 730f70: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 730f71: call 0x6c67cb */
  esp -= 4; W32(esp, 0x730f76u); SPILL(); f_6c67cb(); if (g_unwind) return; RELOAD();
/* 730f76: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 730f79: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 730f7a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 730f7b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_730f90(void) {
  LOAD_REGS();
L_730f90: /* 730f90: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 730f92: push 0x9c4d7a */
  { uint32_t v = 0x9c4d7au; esp -= 4; W32(esp, v); }
/* 730f97: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 730f9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 730f9e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 730fa5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 730fa6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 730fa7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 730fa8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 730fa9: mov esi, ecx */
  esi = ecx;
/* 730fab: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 730fac: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 730fb0: mov dword ptr [esi], 0x9f9230 */
  W32((uint32_t)(esi), 0x9f9230u);
/* 730fb6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 730fb8: lea edi, [esi + 4] */
  edi = (uint32_t)(esi + 0x4u);
/* 730fbb: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 730fbd: mov ecx, edi */
  ecx = edi;
/* 730fbf: mov dword ptr [esp + 0x24], 3 */
  W32((uint32_t)(esp + 0x24u), 0x3u);
/* 730fc7: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x730fcdu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 730fcd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 730fcf: lea ebx, [esi + 0x1c] */
  ebx = (uint32_t)(esi + 0x1cu);
/* 730fd2: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 730fd4: mov ecx, ebx */
  ecx = ebx;
/* 730fd6: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x730fdcu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 730fdc: lea ebp, [esi + 0x10] */
  ebp = (uint32_t)(esi + 0x10u);
/* 730fdf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 730fe1: mov ecx, ebp */
  ecx = ebp;
/* 730fe3: call dword ptr [0xcfa3a0] */
  esp -= 4; W32(esp, 0x730fe9u); SPILL(); f_4e264e(); if (g_unwind) return; /* Core!?Empty@?$TArray@G@@QAEXH@Z */ RELOAD();
/* 730fe9: mov ecx, ebx */
  ecx = ebx;
/* 730feb: mov byte ptr [esp + 0x1c], 2 */
  W8((uint32_t)(esp + 0x1cu), 0x2u);
/* 730ff0: call 0x6c9543 */
  esp -= 4; W32(esp, 0x730ff5u); SPILL(); f_6c9543(); if (g_unwind) return; RELOAD();
/* 730ff5: mov ecx, ebp */
  ecx = ebp;
/* 730ff7: mov byte ptr [esp + 0x1c], 1 */
  W8((uint32_t)(esp + 0x1cu), 0x1u);
/* 730ffc: call dword ptr [0xcfa288] */
  esp -= 4; W32(esp, 0x731002u); SPILL(); f_4e2ecd(); if (g_unwind) return; /* Core!??1?$TArray@G@@QAE@XZ */ RELOAD();
/* 731002: mov ecx, edi */
  ecx = edi;
/* 731004: mov byte ptr [esp + 0x1c], 0 */
  W8((uint32_t)(esp + 0x1cu), 0x0u);
/* 731009: call 0x6c9bfb */
  esp -= 4; W32(esp, 0x73100eu); SPILL(); f_6c9bfb(); if (g_unwind) return; RELOAD();
/* 73100e: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 731012: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 731013: mov dword ptr [esi], 0x9f7674 */
  W32((uint32_t)(esi), 0x9f7674u);
/* 731019: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73101a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 73101b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 73101c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 731023: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 731026: ret  */
  esp += 4; SPILL(); return;
}

void f_731060(void) {
  LOAD_REGS();
L_731060: /* 731060: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 731062: push 0x9c4dbf */
  { uint32_t v = 0x9c4dbfu; esp -= 4; W32(esp, v); }
/* 731067: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 73106d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73106e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 731075: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 731076: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 731077: mov esi, ecx */
  esi = ecx;
/* 731079: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73107a: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 73107e: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 731082: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
/* 731085: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 731086: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 731089: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 731091: mov dword ptr [esi], 0x9f9230 */
  W32((uint32_t)(esi), 0x9f9230u);
/* 731097: call 0x6c90c0 */
  esp -= 4; W32(esp, 0x73109cu); SPILL(); f_6c90c0(); if (g_unwind) return; RELOAD();
/* 73109c: lea ecx, [edi + 0x10] */
  ecx = (uint32_t)(edi + 0x10u);
/* 73109f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7310a0: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 7310a3: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* 7310a8: call dword ptr [0xcfa290] */
  esp -= 4; W32(esp, 0x7310aeu); SPILL(); f_4e447b(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@ABV0@@Z */ RELOAD();
/* 7310ae: add edi, 0x1c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7310b1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7310b2: lea ecx, [esi + 0x1c] */
  ecx = (uint32_t)(esi + 0x1cu);
/* 7310b5: mov byte ptr [esp + 0x18], 2 */
  W8((uint32_t)(esp + 0x18u), 0x2u);
/* 7310ba: call 0x6cbbae */
  esp -= 4; W32(esp, 0x7310bfu); SPILL(); f_6cbbae(); if (g_unwind) return; RELOAD();
/* 7310bf: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 7310c3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7310c4: mov eax, esi */
  eax = esi;
/* 7310c6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7310c7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7310ce: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7310d1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_731100(void) {
  LOAD_REGS();
L_731100: /* 731100: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 731102: push 0x9c4df3 */
  { uint32_t v = 0x9c4df3u; esp -= 4; W32(esp, v); }
/* 731107: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 73110d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73110e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 731115: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 731116: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 731117: mov esi, ecx */
  esi = ecx;
/* 731119: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 73111d: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 731120: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 731128: mov dword ptr [esi], 0x9f924c */
  W32((uint32_t)(esi), 0x9f924cu);
/* 73112e: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x731134u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 731134: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 731137: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 73113c: call dword ptr [0xcfa28c] */
  esp -= 4; W32(esp, 0x731142u); SPILL(); f_4e3dcd(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@XZ */ RELOAD();
/* 731142: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 731146: mov eax, esi */
  eax = esi;
/* 731148: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 731149: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 731150: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 731153: ret  */
  esp += 4; SPILL(); return;
}

void f_731180(void) {
  LOAD_REGS();
L_731180: /* 731180: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 731181: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 731185: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 731186: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 73118a: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
/* 73118d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73118e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73118f: call 0x6ca673 */
  esp -= 4; W32(esp, 0x731194u); SPILL(); f_6ca673(); if (g_unwind) return; RELOAD();
/* 731194: lea ecx, [edi + 0x10] */
  ecx = (uint32_t)(edi + 0x10u);
/* 731197: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 731198: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 731199: call 0x6c67cb */
  esp -= 4; W32(esp, 0x73119eu); SPILL(); f_6c67cb(); if (g_unwind) return; RELOAD();
/* 73119e: lea eax, [edi + 0x1c] */
  eax = (uint32_t)(edi + 0x1cu);
/* 7311a1: mov edi, dword ptr [0xcfa1b4] */
  edi = R32((uint32_t)(0xcfa1b4u));
/* 7311a7: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7311aa: lea edx, [eax + 8] */
  edx = (uint32_t)(eax + 0x8u);
/* 7311ad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7311ae: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 7311b1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7311b2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7311b3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7311b4: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7311b6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7311b6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7311b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7311ba: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7311bcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7311bc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7311bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7311c0: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7311c2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7311c2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7311c5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7311c6: mov eax, esi */
  eax = esi;
/* 7311c8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7311c9: ret  */
  esp += 4; SPILL(); return;
}

void f_7311f0(void) {
  LOAD_REGS();
L_7311f0: /* 7311f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7311f1: mov esi, ecx */
  esi = ecx;
/* 7311f3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7311f4: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 7311f8: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 7311fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7311fc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7311fd: call 0x6ca673 */
  esp -= 4; W32(esp, 0x731202u); SPILL(); f_6ca673(); if (g_unwind) return; RELOAD();
/* 731202: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 731205: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 731206: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 731207: call 0x6c67cb */
  esp -= 4; W32(esp, 0x73120cu); SPILL(); f_6c67cb(); if (g_unwind) return; RELOAD();
/* 73120c: lea eax, [esi + 0x1c] */
  eax = (uint32_t)(esi + 0x1cu);
/* 73120f: mov esi, dword ptr [0xcfa1b4] */
  esi = R32((uint32_t)(0xcfa1b4u));
/* 731215: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 731218: lea edx, [eax + 8] */
  edx = (uint32_t)(eax + 0x8u);
/* 73121b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 73121c: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 73121f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 731220: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 731221: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 731222: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x731224u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 731224: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 731227: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 731228: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x73122au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 73122a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 73122d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73122e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x731230u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 731230: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 731233: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 731234: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 731235: ret 4 */
  esp += 8; SPILL(); return;
}

void f_731260(void) {
  LOAD_REGS();
L_731260: /* 731260: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 731262: push 0x9c4e2f */
  { uint32_t v = 0x9c4e2fu; esp -= 4; W32(esp, v); }
/* 731267: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 73126d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73126e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 731275: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 731276: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 731277: mov esi, ecx */
  esi = ecx;
/* 731279: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 73127d: mov dword ptr [esi], 0x9f924c */
  W32((uint32_t)(esi), 0x9f924cu);
/* 731283: mov dword ptr [esp + 0x10], 2 */
  W32((uint32_t)(esp + 0x10u), 0x2u);
/* 73128b: call 0x6c7f3b */
  esp -= 4; W32(esp, 0x731290u); SPILL(); f_6c7f3b(); if (g_unwind) return; RELOAD();
/* 731290: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 731293: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 731298: call dword ptr [0xcfa288] */
  esp -= 4; W32(esp, 0x73129eu); SPILL(); f_4e2ecd(); if (g_unwind) return; /* Core!??1?$TArray@G@@QAE@XZ */ RELOAD();
/* 73129e: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 7312a1: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 7312a6: call 0x6c9bfb */
  esp -= 4; W32(esp, 0x7312abu); SPILL(); f_6c9bfb(); if (g_unwind) return; RELOAD();
/* 7312ab: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7312af: mov dword ptr [esi], 0x9f7674 */
  W32((uint32_t)(esi), 0x9f7674u);
/* 7312b5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7312b6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7312bd: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7312c0: ret  */
  esp += 4; SPILL(); return;
}

void f_7312f0(void) {
  LOAD_REGS();
L_7312f0: /* 7312f0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7312f2: push 0x9c4e63 */
  { uint32_t v = 0x9c4e63u; esp -= 4; W32(esp, v); }
/* 7312f7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7312fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7312fe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 731305: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 731306: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 731307: mov esi, ecx */
  esi = ecx;
/* 731309: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73130a: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 73130e: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 731312: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
/* 731315: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 731316: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 731319: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 731321: mov dword ptr [esi], 0x9f924c */
  W32((uint32_t)(esi), 0x9f924cu);
/* 731327: call 0x6c90c0 */
  esp -= 4; W32(esp, 0x73132cu); SPILL(); f_6c90c0(); if (g_unwind) return; RELOAD();
/* 73132c: lea ecx, [edi + 0x10] */
  ecx = (uint32_t)(edi + 0x10u);
/* 73132f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 731330: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 731333: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* 731338: call dword ptr [0xcfa290] */
  esp -= 4; W32(esp, 0x73133eu); SPILL(); f_4e447b(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@ABV0@@Z */ RELOAD();
/* 73133e: add edi, 0x1c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 731341: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 731343: lea edx, [esi + 0x1c] */
  edx = (uint32_t)(esi + 0x1cu);
/* 731346: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 731348: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 73134b: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 73134e: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 731351: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 731355: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 731358: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 731359: mov eax, esi */
  eax = esi;
/* 73135b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73135c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 731363: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 731366: ret 4 */
  esp += 8; SPILL(); return;
}

void f_731390(void) {
  LOAD_REGS();
L_731390: /* 731390: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 731396: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 731398: push 0x9c4ea1 */
  { uint32_t v = 0x9c4ea1u; esp -= 4; W32(esp, v); }
/* 73139d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73139e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7313a5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7313a6: mov esi, ecx */
  esi = ecx;
/* 7313a8: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7313aa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7313ac: je 0x7313c2 */
  if (zf) goto L_7313c2;
L_7313ae: /* 7313ae: mov dword ptr [eax], 0x9f7674 */
  W32((uint32_t)(eax), 0x9f7674u);
/* 7313b4: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 7313ba: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7313bc: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7313be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7313bf: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7313c2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7313c2: /* 7313c2: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 7313c6: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 7313c7: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 7313ca: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 7313d0: ja 0x7314d0 */
  if ((!cf && !zf)) goto L_7314d0;
L_7313d6: /* 7313d6: jmp dword ptr [eax*4 + 0x7314e4] */
  switch (R32((uint32_t)(eax*4 + 0x7314e4u))) {
    case 0x7313ddu: goto L_7313dd;
    case 0x73141eu: goto L_73141e;
    case 0x73145fu: goto L_73145f;
    case 0x73148fu: goto L_73148f;
    default: guest_badjump(0x7313d6, R32((uint32_t)(eax*4 + 0x7314e4u))); return;
  }
L_7313dd: /* 7313dd: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 7313e2: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7313e4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7313e6: push 0xac38c4 */
  { uint32_t v = 0xac38c4u; esp -= 4; W32(esp, v); }
/* 7313eb: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 7313ed: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x7313efu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7313ef: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 7313f3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7313f5: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 7313fd: je 0x7314cc */
  if (zf) goto L_7314cc;
L_731403: /* 731403: mov ecx, eax */
  ecx = eax;
/* 731405: call 0x6c3c29 */
  esp -= 4; W32(esp, 0x73140au); SPILL(); f_6c3c29(); if (g_unwind) return; RELOAD();
/* 73140a: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 73140c: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 731410: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 731417: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 731418: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 73141b: ret 4 */
  esp += 8; SPILL(); return;
L_73141e: /* 73141e: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 731423: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 731425: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 731427: push 0xac38c4 */
  { uint32_t v = 0xac38c4u; esp -= 4; W32(esp, v); }
/* 73142c: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 73142e: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x731430u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 731430: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 731434: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 731436: mov dword ptr [esp + 0xc], 1 */
  W32((uint32_t)(esp + 0xcu), 0x1u);
/* 73143e: je 0x7314cc */
  if (zf) goto L_7314cc;
L_731444: /* 731444: mov ecx, eax */
  ecx = eax;
/* 731446: call 0x6c9e8f */
  esp -= 4; W32(esp, 0x73144bu); SPILL(); f_6c9e8f(); if (g_unwind) return; RELOAD();
/* 73144b: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 73144d: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 731451: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 731458: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 731459: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 73145c: ret 4 */
  esp += 8; SPILL(); return;
L_73145f: /* 73145f: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 731464: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 731466: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 731468: push 0xac38c4 */
  { uint32_t v = 0xac38c4u; esp -= 4; W32(esp, v); }
/* 73146d: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 73146f: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x731471u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 731471: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 731473: je 0x7314cc */
  if (zf) goto L_7314cc;
L_731475: /* 731475: mov dword ptr [eax], 0x9f7690 */
  W32((uint32_t)(eax), 0x9f7690u);
/* 73147b: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 73147d: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 731481: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 731488: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 731489: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 73148c: ret 4 */
  esp += 8; SPILL(); return;
L_73148f: /* 73148f: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 731494: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 731496: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 731498: push 0xac38c4 */
  { uint32_t v = 0xac38c4u; esp -= 4; W32(esp, v); }
/* 73149d: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 73149f: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x7314a1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7314a1: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 7314a5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7314a7: mov dword ptr [esp + 0xc], 2 */
  W32((uint32_t)(esp + 0xcu), 0x2u);
/* 7314af: je 0x7314cc */
  if (zf) goto L_7314cc;
L_7314b1: /* 7314b1: mov ecx, eax */
  ecx = eax;
/* 7314b3: call 0x6c7504 */
  esp -= 4; W32(esp, 0x7314b8u); SPILL(); f_6c7504(); if (g_unwind) return; RELOAD();
/* 7314b8: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 7314ba: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7314be: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7314c5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7314c6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7314c9: ret 4 */
  esp += 8; SPILL(); return;
L_7314cc: /* 7314cc: xor eax, eax */
  eax = 0;
/* 7314ce: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_7314d0: /* 7314d0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7314d4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7314db: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7314dc: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7314df: ret 4 */
  esp += 8; SPILL(); return;
}

void f_731560(void) {
  LOAD_REGS();
L_731560: /* 731560: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 731561: mov esi, ecx */
  esi = ecx;
/* 731563: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 731565: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 731567: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 731568: je 0x73158f */
  if (zf) goto L_73158f;
L_73156a: /* 73156a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 73156c: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x73156fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 73156f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 731571: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 731573: je 0x731589 */
  if (zf) goto L_731589;
L_731575: /* 731575: mov dword ptr [eax], 0x9f7674 */
  W32((uint32_t)(eax), 0x9f7674u);
/* 73157b: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 731581: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 731583: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 731585: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 731586: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x731589u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_731589: /* 731589: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
L_73158f: /* 73158f: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 731593: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 731595: xor eax, eax */
  eax = 0;
/* 731597: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 731599: je 0x73159f */
  if (zf) goto L_73159f;
L_73159b: /* 73159b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 73159d: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x73159fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_73159f: /* 73159f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7315a0: mov ecx, esi */
  ecx = esi;
/* 7315a2: call 0x6c5e39 */
  esp -= 4; W32(esp, 0x7315a7u); SPILL(); f_6c5e39(); if (g_unwind) return; RELOAD();
/* 7315a7: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7315a9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7315ab: je 0x7315b9 */
  if (zf) goto L_7315b9;
L_7315ad: /* 7315ad: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7315af: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7315b1: je 0x7315b9 */
  if (zf) goto L_7315b9;
L_7315b3: /* 7315b3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7315b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7315b6: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7315b9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7315b9: /* 7315b9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7315ba: mov eax, esi */
  eax = esi;
/* 7315bc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7315bd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7315e0(void) {
  LOAD_REGS();
L_7315e0: /* 7315e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7315e2: push 0x9c4ed6 */
  { uint32_t v = 0x9c4ed6u; esp -= 4; W32(esp, v); }
/* 7315e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7315ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7315ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7315f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7315f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7315f7: mov esi, ecx */
  esi = ecx;
/* 7315f9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 7315fd: lea ecx, [esi + 0x1c] */
  ecx = (uint32_t)(esi + 0x1cu);
/* 731600: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 731608: call 0x6c2ed2 */
  esp -= 4; W32(esp, 0x73160du); SPILL(); f_6c2ed2(); if (g_unwind) return; RELOAD();
/* 73160d: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 731610: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 731615: call 0x6c9543 */
  esp -= 4; W32(esp, 0x73161au); SPILL(); f_6c9543(); if (g_unwind) return; RELOAD();
/* 73161a: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 73161d: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 731625: call 0x6c4499 */
  esp -= 4; W32(esp, 0x73162au); SPILL(); f_6c4499(); if (g_unwind) return; RELOAD();
/* 73162a: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 73162e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73162f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 731636: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 731639: ret  */
  esp += 4; SPILL(); return;
}

void f_731660(void) {
  LOAD_REGS();
L_731660: /* 731660: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 731662: push 0x9c4f06 */
  { uint32_t v = 0x9c4f06u; esp -= 4; W32(esp, v); }
/* 731667: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 73166d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73166e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 731675: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 731676: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 731677: mov esi, ecx */
  esi = ecx;
/* 731679: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 73167c: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 731680: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x731686u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 731686: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 731689: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 731691: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x731697u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 731697: lea ecx, [esi + 0x1c] */
  ecx = (uint32_t)(esi + 0x1cu);
/* 73169a: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 73169f: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7316a5u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7316a5: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7316a9: mov eax, esi */
  eax = esi;
/* 7316ab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7316ac: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7316b3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7316b6: ret  */
  esp += 4; SPILL(); return;
}

void f_7316e0(void) {
  LOAD_REGS();
L_7316e0: /* 7316e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7316e2: push 0x9c4f36 */
  { uint32_t v = 0x9c4f36u; esp -= 4; W32(esp, v); }
/* 7316e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7316ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7316ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7316f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7316f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7316f7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7316f8: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 7316fc: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7316fe: mov esi, ecx */
  esi = ecx;
/* 731700: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 731703: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 731704: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 731707: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 73170b: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 73170d: call 0x6c7081 */
  esp -= 4; W32(esp, 0x731712u); SPILL(); f_6c7081(); if (g_unwind) return; RELOAD();
/* 731712: lea edx, [edi + 0x10] */
  edx = (uint32_t)(edi + 0x10u);
/* 731715: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 731716: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 731719: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 731721: call 0x6cbbae */
  esp -= 4; W32(esp, 0x731726u); SPILL(); f_6cbbae(); if (g_unwind) return; RELOAD();
/* 731726: add edi, 0x1c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 731729: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73172a: lea ecx, [esi + 0x1c] */
  ecx = (uint32_t)(esi + 0x1cu);
/* 73172d: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* 731732: call 0x6c85e4 */
  esp -= 4; W32(esp, 0x731737u); SPILL(); f_6c85e4(); if (g_unwind) return; RELOAD();
/* 731737: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 73173b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 73173c: mov eax, esi */
  eax = esi;
/* 73173e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73173f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 731746: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 731749: ret 4 */
  esp += 8; SPILL(); return;
}

void f_731770(void) {
  LOAD_REGS();
L_731770: /* 731770: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 731771: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 731772: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 731776: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 731778: mov esi, ecx */
  esi = ecx;
/* 73177a: je 0x731781 */
  if (zf) goto L_731781;
L_73177c: /* 73177c: lea eax, [edi + 0xc] */
  eax = (uint32_t)(edi + 0xcu);
/* 73177f: jmp 0x731783 */
  goto L_731783;
L_731781: /* 731781: xor eax, eax */
  eax = 0;
L_731783: /* 731783: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 731784: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 731787: call 0x6cbbae */
  esp -= 4; W32(esp, 0x73178cu); SPILL(); f_6cbbae(); if (g_unwind) return; RELOAD();
/* 73178c: mov dword ptr [esi], 0x9f401c */
  W32((uint32_t)(esi), 0x9f401cu);
/* 731792: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 731795: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 731798: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 73179b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 73179c: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 73179f: mov dword ptr [esi], 0x9f83e0 */
  W32((uint32_t)(esi), 0x9f83e0u);
/* 7317a5: mov eax, esi */
  eax = esi;
/* 7317a7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7317a8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7317c0(void) {
  LOAD_REGS();
L_7317c0: /* 7317c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7317c1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7317c2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 7317c6: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7317c8: mov esi, ecx */
  esi = ecx;
/* 7317ca: je 0x7317d1 */
  if (zf) goto L_7317d1;
L_7317cc: /* 7317cc: lea eax, [edi + 0xc] */
  eax = (uint32_t)(edi + 0xcu);
/* 7317cf: jmp 0x7317d3 */
  goto L_7317d3;
L_7317d1: /* 7317d1: xor eax, eax */
  eax = 0;
L_7317d3: /* 7317d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7317d4: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 7317d7: call 0x6c7716 */
  esp -= 4; W32(esp, 0x7317dcu); SPILL(); f_6c7716(); if (g_unwind) return; RELOAD();
/* 7317dc: mov dword ptr [esi], 0x9f401c */
  W32((uint32_t)(esi), 0x9f401cu);
/* 7317e2: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7317e5: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 7317e8: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 7317eb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7317ec: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 7317ef: mov dword ptr [esi], 0x9f9268 */
  W32((uint32_t)(esi), 0x9f9268u);
/* 7317f5: mov eax, esi */
  eax = esi;
/* 7317f7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7317f8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_731810(void) {
  LOAD_REGS();
L_731810: /* 731810: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 731811: mov ebp, esp */
  ebp = esp;
/* 731813: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 731815: push 0x9c4f50 */
  { uint32_t v = 0x9c4f50u; esp -= 4; W32(esp, v); }
/* 73181a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 731820: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 731821: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 731828: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 73182b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 73182c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73182d: mov esi, ecx */
  esi = ecx;
/* 73182f: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 731832: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 731834: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 731835: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 731838: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 73183f: jge 0x731860 */
  if ((sf == of)) goto L_731860;
L_731841: /* 731841: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 731844: xor eax, eax */
  eax = 0;
L_731846: /* 731846: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 731849: jge 0x73184e */
  if ((sf == of)) goto L_73184e;
L_73184b: /* 73184b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 73184c: jmp 0x731846 */
  goto L_731846;
L_73184e: /* 73184e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 731850: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 731852: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x731858u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 731858: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 73185b: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 73185d: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
L_731860: /* 731860: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 731863: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 731864: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 731865: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 73186c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 73186d: mov esp, ebp */
  esp = ebp;
/* 73186f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 731870: ret  */
  esp += 4; SPILL(); return;
}

void f_731871(void) {
  LOAD_REGS();
L_731871: /* 731871: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 731874: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 731879: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 73187c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 73187d: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 731880: call 0x99caf8 */
  esp -= 4; W32(esp, 0x731885u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_731885(); return;
}

void f_731885(void) {
  LOAD_REGS();
L_731885: /* 731885: push 0x9f9274 */
  { uint32_t v = 0x9f9274u; esp -= 4; W32(esp, v); }
/* 73188a: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 73188f: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x731895u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 731895: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 731898: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 73189a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 73189c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7318a1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7318a1: guest_badaddr(0x7318a1); return;
}

void f_7318e0(void) {
  LOAD_REGS();
L_7318e0: /* 7318e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7318e1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7318e2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 7318e6: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7318e8: mov esi, ecx */
  esi = ecx;
/* 7318ea: je 0x7318f1 */
  if (zf) goto L_7318f1;
L_7318ec: /* 7318ec: lea eax, [edi + 0xc] */
  eax = (uint32_t)(edi + 0xcu);
/* 7318ef: jmp 0x7318f3 */
  goto L_7318f3;
L_7318f1: /* 7318f1: xor eax, eax */
  eax = 0;
L_7318f3: /* 7318f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7318f4: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 7318f7: call 0x6c2a81 */
  esp -= 4; W32(esp, 0x7318fcu); SPILL(); f_6c2a81(); if (g_unwind) return; RELOAD();
/* 7318fc: mov dword ptr [esi], 0x9f401c */
  W32((uint32_t)(esi), 0x9f401cu);
/* 731902: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 731905: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 731908: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 73190b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 73190c: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 73190f: mov dword ptr [esi], 0x9f8368 */
  W32((uint32_t)(esi), 0x9f8368u);
/* 731915: mov eax, esi */
  eax = esi;
/* 731917: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 731918: ret 4 */
  esp += 8; SPILL(); return;
}

void f_731930(void) {
  LOAD_REGS();
L_731930: /* 731930: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 731931: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 731932: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 731936: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 731938: mov esi, ecx */
  esi = ecx;
/* 73193a: je 0x731941 */
  if (zf) goto L_731941;
L_73193c: /* 73193c: lea eax, [edi + 0xc] */
  eax = (uint32_t)(edi + 0xcu);
/* 73193f: jmp 0x731943 */
  goto L_731943;
L_731941: /* 731941: xor eax, eax */
  eax = 0;
L_731943: /* 731943: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 731944: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 731947: call 0x6c7838 */
  esp -= 4; W32(esp, 0x73194cu); SPILL(); f_6c7838(); if (g_unwind) return; RELOAD();
/* 73194c: mov dword ptr [esi], 0x9f401c */
  W32((uint32_t)(esi), 0x9f401cu);
/* 731952: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 731955: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 731958: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 73195b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 73195c: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 73195f: mov dword ptr [esi], 0x9f8480 */
  W32((uint32_t)(esi), 0x9f8480u);
/* 731965: mov eax, esi */
  eax = esi;
/* 731967: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 731968: ret 4 */
  esp += 8; SPILL(); return;
}

void f_731980(void) {
  LOAD_REGS();
L_731980: /* 731980: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 731981: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 731982: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 731986: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 731988: mov esi, ecx */
  esi = ecx;
/* 73198a: je 0x731991 */
  if (zf) goto L_731991;
L_73198c: /* 73198c: lea eax, [edi + 0xc] */
  eax = (uint32_t)(edi + 0xcu);
/* 73198f: jmp 0x731993 */
  goto L_731993;
L_731991: /* 731991: xor eax, eax */
  eax = 0;
L_731993: /* 731993: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 731994: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 731997: call 0x6c1b59 */
  esp -= 4; W32(esp, 0x73199cu); SPILL(); f_6c1b59(); if (g_unwind) return; RELOAD();
/* 73199c: mov dword ptr [esi], 0x9f401c */
  W32((uint32_t)(esi), 0x9f401cu);
/* 7319a2: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7319a5: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 7319a8: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 7319ab: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7319ac: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 7319af: mov dword ptr [esi], 0x9f92a4 */
  W32((uint32_t)(esi), 0x9f92a4u);
/* 7319b5: mov eax, esi */
  eax = esi;
/* 7319b7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7319b8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7319d0(void) {
  LOAD_REGS();
L_7319d0: /* 7319d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7319d1: mov ebp, esp */
  ebp = esp;
/* 7319d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7319d5: push 0x9c4f60 */
  { uint32_t v = 0x9c4f60u; esp -= 4; W32(esp, v); }
/* 7319da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7319e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7319e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7319e8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7319eb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7319ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7319ed: mov esi, ecx */
  esi = ecx;
/* 7319ef: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 7319f2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7319f4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7319f5: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7319f8: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7319ff: jge 0x731a20 */
  if ((sf == of)) goto L_731a20;
L_731a01: /* 731a01: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 731a04: xor eax, eax */
  eax = 0;
L_731a06: /* 731a06: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 731a09: jge 0x731a0e */
  if ((sf == of)) goto L_731a0e;
L_731a0b: /* 731a0b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 731a0c: jmp 0x731a06 */
  goto L_731a06;
L_731a0e: /* 731a0e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 731a10: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 731a12: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x731a18u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 731a18: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 731a1b: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 731a1d: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
L_731a20: /* 731a20: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 731a23: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 731a24: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 731a25: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 731a2c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 731a2d: mov esp, ebp */
  esp = ebp;
/* 731a2f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 731a30: ret  */
  esp += 4; SPILL(); return;
}

void f_731a31(void) {
  LOAD_REGS();
L_731a31: /* 731a31: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 731a34: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 731a39: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 731a3c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 731a3d: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 731a40: call 0x99caf8 */
  esp -= 4; W32(esp, 0x731a45u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_731a45(); return;
}

void f_731a45(void) {
  LOAD_REGS();
L_731a45: /* 731a45: push 0x9f92b0 */
  { uint32_t v = 0x9f92b0u; esp -= 4; W32(esp, v); }
/* 731a4a: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 731a4f: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x731a55u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 731a55: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 731a58: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 731a5a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 731a5c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x731a61u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_731a61: guest_badaddr(0x731a61); return;
}

void f_731aa0(void) {
  LOAD_REGS();
L_731aa0: /* 731aa0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 731aa1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 731aa2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 731aa6: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 731aa8: mov esi, ecx */
  esi = ecx;
/* 731aaa: je 0x731ab1 */
  if (zf) goto L_731ab1;
L_731aac: /* 731aac: lea eax, [edi + 0xc] */
  eax = (uint32_t)(edi + 0xcu);
/* 731aaf: jmp 0x731ab3 */
  goto L_731ab3;
L_731ab1: /* 731ab1: xor eax, eax */
  eax = 0;
L_731ab3: /* 731ab3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 731ab4: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 731ab7: call 0x6c4197 */
  esp -= 4; W32(esp, 0x731abcu); SPILL(); f_6c4197(); if (g_unwind) return; RELOAD();
/* 731abc: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 731abf: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 731ac2: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 731ac5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 731ac6: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 731ac9: mov eax, esi */
  eax = esi;
/* 731acb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 731acc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_731ae0(void) {
  LOAD_REGS();
L_731ae0: /* 731ae0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 731ae1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 731ae2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 731ae6: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 731ae8: mov esi, ecx */
  esi = ecx;
/* 731aea: je 0x731af1 */
  if (zf) goto L_731af1;
L_731aec: /* 731aec: lea eax, [edi + 0xc] */
  eax = (uint32_t)(edi + 0xcu);
/* 731aef: jmp 0x731af3 */
  goto L_731af3;
L_731af1: /* 731af1: xor eax, eax */
  eax = 0;
L_731af3: /* 731af3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 731af4: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 731af7: call 0x6c9606 */
  esp -= 4; W32(esp, 0x731afcu); SPILL(); f_6c9606(); if (g_unwind) return; RELOAD();
/* 731afc: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 731aff: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 731b02: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 731b05: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 731b06: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 731b09: mov eax, esi */
  eax = esi;
/* 731b0b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 731b0c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_731b20(void) {
  LOAD_REGS();
L_731b20: /* 731b20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 731b21: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 731b22: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 731b26: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 731b28: mov esi, ecx */
  esi = ecx;
/* 731b2a: je 0x731b31 */
  if (zf) goto L_731b31;
L_731b2c: /* 731b2c: lea eax, [edi + 0xc] */
  eax = (uint32_t)(edi + 0xcu);
/* 731b2f: jmp 0x731b33 */
  goto L_731b33;
L_731b31: /* 731b31: xor eax, eax */
  eax = 0;
L_731b33: /* 731b33: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 731b34: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 731b37: call 0x6c7009 */
  esp -= 4; W32(esp, 0x731b3cu); SPILL(); f_6c7009(); if (g_unwind) return; RELOAD();
/* 731b3c: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 731b3f: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 731b42: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 731b45: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 731b46: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 731b49: mov eax, esi */
  eax = esi;
/* 731b4b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 731b4c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_731b60(void) {
  LOAD_REGS();
L_731b60: /* 731b60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 731b61: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 731b62: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 731b66: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 731b68: mov esi, ecx */
  esi = ecx;
/* 731b6a: je 0x731b71 */
  if (zf) goto L_731b71;
L_731b6c: /* 731b6c: lea eax, [edi + 0xc] */
  eax = (uint32_t)(edi + 0xcu);
/* 731b6f: jmp 0x731b73 */
  goto L_731b73;
L_731b71: /* 731b71: xor eax, eax */
  eax = 0;
L_731b73: /* 731b73: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 731b74: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 731b77: call 0x6c1fff */
  esp -= 4; W32(esp, 0x731b7cu); SPILL(); f_6c1fff(); if (g_unwind) return; RELOAD();
/* 731b7c: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 731b7f: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 731b82: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 731b85: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 731b86: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 731b89: mov eax, esi */
  eax = esi;
/* 731b8b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 731b8c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_731ba0(void) {
  LOAD_REGS();
L_731ba0: /* 731ba0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 731ba2: push 0x9c4f83 */
  { uint32_t v = 0x9c4f83u; esp -= 4; W32(esp, v); }
/* 731ba7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 731bad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 731bae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 731bb5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 731bb6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 731bb7: mov esi, ecx */
  esi = ecx;
/* 731bb9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 731bbd: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x731bc3u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 731bc3: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 731bc6: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 731bce: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x731bd4u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 731bd4: lea ecx, [esi + 0x1c] */
  ecx = (uint32_t)(esi + 0x1cu);
/* 731bd7: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 731bdc: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x731be2u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 731be2: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 731be6: mov eax, esi */
  eax = esi;
/* 731be8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 731be9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 731bf0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 731bf3: ret  */
  esp += 4; SPILL(); return;
}

void f_731c20(void) {
  LOAD_REGS();
L_731c20: /* 731c20: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 731c22: push 0x9c4fc1 */
  { uint32_t v = 0x9c4fc1u; esp -= 4; W32(esp, v); }
/* 731c27: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 731c2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 731c2e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 731c35: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 731c36: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 731c37: mov esi, ecx */
  esi = ecx;
/* 731c39: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 731c3d: mov dword ptr [esi], 0x9f92e0 */
  W32((uint32_t)(esi), 0x9f92e0u);
/* 731c43: mov dword ptr [esp + 0x10], 2 */
  W32((uint32_t)(esp + 0x10u), 0x2u);
/* 731c4b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x731c51u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 731c51: lea ecx, [esi + 0x88] */
  ecx = (uint32_t)(esi + 0x88u);
/* 731c57: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 731c5c: call 0x6c9543 */
  esp -= 4; W32(esp, 0x731c61u); SPILL(); f_6c9543(); if (g_unwind) return; RELOAD();
/* 731c61: lea ecx, [esi + 0x7c] */
  ecx = (uint32_t)(esi + 0x7cu);
/* 731c64: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 731c69: call 0x6c9543 */
  esp -= 4; W32(esp, 0x731c6eu); SPILL(); f_6c9543(); if (g_unwind) return; RELOAD();
/* 731c6e: mov ecx, esi */
  ecx = esi;
/* 731c70: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 731c78: call 0x6ccc84 */
  esp -= 4; W32(esp, 0x731c7du); SPILL(); f_6ccc84(); if (g_unwind) return; RELOAD();
/* 731c7d: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 731c81: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 731c82: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 731c89: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 731c8c: ret  */
  esp += 4; SPILL(); return;
}

void f_731cb0(void) {
  LOAD_REGS();
L_731cb0: /* 731cb0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 731cb2: push 0x9c5001 */
  { uint32_t v = 0x9c5001u; esp -= 4; W32(esp, v); }
/* 731cb7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 731cbd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 731cbe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 731cc5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 731cc6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 731cc7: mov esi, ecx */
  esi = ecx;
/* 731cc9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 731cca: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 731cce: call 0x6cc93c */
  esp -= 4; W32(esp, 0x731cd3u); SPILL(); f_6cc93c(); if (g_unwind) return; RELOAD();
/* 731cd3: lea ecx, [esi + 0x7c] */
  ecx = (uint32_t)(esi + 0x7cu);
/* 731cd6: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 731cde: mov dword ptr [esi], 0x9f92e0 */
  W32((uint32_t)(esi), 0x9f92e0u);
/* 731ce4: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x731ceau); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 731cea: lea ecx, [esi + 0x88] */
  ecx = (uint32_t)(esi + 0x88u);
/* 731cf0: mov byte ptr [esp + 0x14], 1 */
  W8((uint32_t)(esp + 0x14u), 0x1u);
/* 731cf5: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x731cfbu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 731cfb: lea ecx, [esi + 0x98] */
  ecx = (uint32_t)(esi + 0x98u);
/* 731d01: mov byte ptr [esp + 0x14], 2 */
  W8((uint32_t)(esp + 0x14u), 0x2u);
/* 731d06: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x731d0cu); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 731d0c: lea edi, [esi + 0xac] */
  edi = (uint32_t)(esi + 0xacu);
/* 731d12: mov ecx, edi */
  ecx = edi;
/* 731d14: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x731d1au); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 731d1a: lea ecx, [edi + 8] */
  ecx = (uint32_t)(edi + 0x8u);
/* 731d1d: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x731d23u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 731d23: lea ecx, [edi + 0x6c] */
  ecx = (uint32_t)(edi + 0x6cu);
/* 731d26: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x731d2cu); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 731d2c: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 731d30: mov dword ptr [esi + 0xa0], 0 */
  W32((uint32_t)(esi + 0xa0u), 0x0u);
/* 731d3a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 731d3b: mov eax, esi */
  eax = esi;
/* 731d3d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 731d3e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 731d45: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 731d48: ret  */
  esp += 4; SPILL(); return;
}

void f_731d80(void) {
  LOAD_REGS();
L_731d80: /* 731d80: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 731d82: push 0x9c5033 */
  { uint32_t v = 0x9c5033u; esp -= 4; W32(esp, v); }
/* 731d87: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 731d8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 731d8e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 731d95: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 731d96: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 731d97: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 731d98: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 731d9c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 731d9d: mov ebx, ecx */
  ebx = ecx;
/* 731d9f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 731da0: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 731da4: call 0x6c43b8 */
  esp -= 4; W32(esp, 0x731da9u); SPILL(); f_6c43b8(); if (g_unwind) return; RELOAD();
/* 731da9: lea eax, [esi + 0x7c] */
  eax = (uint32_t)(esi + 0x7cu);
/* 731dac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 731dad: lea ecx, [ebx + 0x7c] */
  ecx = (uint32_t)(ebx + 0x7cu);
/* 731db0: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 731db8: mov dword ptr [ebx], 0x9f92e0 */
  W32((uint32_t)(ebx), 0x9f92e0u);
/* 731dbe: call 0x6cbbae */
  esp -= 4; W32(esp, 0x731dc3u); SPILL(); f_6cbbae(); if (g_unwind) return; RELOAD();
/* 731dc3: lea ecx, [esi + 0x88] */
  ecx = (uint32_t)(esi + 0x88u);
/* 731dc9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 731dca: lea ecx, [ebx + 0x88] */
  ecx = (uint32_t)(ebx + 0x88u);
/* 731dd0: mov byte ptr [esp + 0x1c], 1 */
  W8((uint32_t)(esp + 0x1cu), 0x1u);
/* 731dd5: call 0x6cbbae */
  esp -= 4; W32(esp, 0x731ddau); SPILL(); f_6cbbae(); if (g_unwind) return; RELOAD();
/* 731dda: mov edx, dword ptr [esi + 0x94] */
  edx = R32((uint32_t)(esi + 0x94u));
/* 731de0: mov dword ptr [ebx + 0x94], edx */
  W32((uint32_t)(ebx + 0x94u), edx);
/* 731de6: mov eax, dword ptr [esi + 0x98] */
  eax = R32((uint32_t)(esi + 0x98u));
/* 731dec: mov dword ptr [ebx + 0x98], eax */
  W32((uint32_t)(ebx + 0x98u), eax);
/* 731df2: mov ecx, dword ptr [esi + 0x9c] */
  ecx = R32((uint32_t)(esi + 0x9cu));
/* 731df8: mov dword ptr [ebx + 0x9c], ecx */
  W32((uint32_t)(ebx + 0x9cu), ecx);
/* 731dfe: mov edx, dword ptr [esi + 0xa0] */
  edx = R32((uint32_t)(esi + 0xa0u));
/* 731e04: mov dword ptr [ebx + 0xa0], edx */
  W32((uint32_t)(ebx + 0xa0u), edx);
/* 731e0a: mov eax, dword ptr [esi + 0xa4] */
  eax = R32((uint32_t)(esi + 0xa4u));
/* 731e10: mov dword ptr [ebx + 0xa4], eax */
  W32((uint32_t)(ebx + 0xa4u), eax);
/* 731e16: mov ecx, dword ptr [esi + 0xa8] */
  ecx = R32((uint32_t)(esi + 0xa8u));
/* 731e1c: mov dword ptr [ebx + 0xa8], ecx */
  W32((uint32_t)(ebx + 0xa8u), ecx);
/* 731e22: add esi, 0xac */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xacu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 731e28: lea edi, [ebx + 0xac] */
  edi = (uint32_t)(ebx + 0xacu);
/* 731e2e: mov ecx, 0x1c */
  ecx = 0x1cu;
/* 731e33: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 731e35: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 731e39: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 731e3a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 731e3b: mov eax, ebx */
  eax = ebx;
/* 731e3d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 731e3e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 731e45: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 731e48: ret 4 */
  esp += 8; SPILL(); return;
}

void f_731e90(void) {
  LOAD_REGS();
L_731e90: /* 731e90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 731e91: mov esi, ecx */
  esi = ecx;
/* 731e93: call 0x6c9a02 */
  esp -= 4; W32(esp, 0x731e98u); SPILL(); f_6c9a02(); if (g_unwind) return; RELOAD();
/* 731e98: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 731e9d: je 0x731eae */
  if (zf) goto L_731eae;
L_731e9f: /* 731e9f: push 0x11c */
  { uint32_t v = 0x11cu; esp -= 4; W32(esp, v); }
/* 731ea4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 731ea5: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x731eabu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 731eab: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_731eae: /* 731eae: mov eax, esi */
  eax = esi;
/* 731eb0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 731eb1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_731ed0(void) {
  LOAD_REGS();
L_731ed0: /* 731ed0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 731ed1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 731ed5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 731ed8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 731ed9: mov esi, ecx */
  esi = ecx;
/* 731edb: je 0x731f10 */
  if (zf) goto L_731f10;
L_731edd: /* 731edd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 731ee0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 731ee1: push 0x6c9a02 */
  { uint32_t v = 0x6c9a02u; esp -= 4; W32(esp, v); }
/* 731ee6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 731ee9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 731eea: push 0x11c */
  { uint32_t v = 0x11cu; esp -= 4; W32(esp, v); }
/* 731eef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 731ef0: call 0x99ca3d */
  esp -= 4; W32(esp, 0x731ef5u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 731ef5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 731ef8: je 0x731f08 */
  if (zf) goto L_731f08;
L_731efa: /* 731efa: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 731f00: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 731f02: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 731f04: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 731f05: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x731f08u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_731f08: /* 731f08: mov eax, edi */
  eax = edi;
/* 731f0a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 731f0b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 731f0c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 731f0d: ret 4 */
  esp += 8; SPILL(); return;
L_731f10: /* 731f10: mov ecx, esi */
  ecx = esi;
/* 731f12: call 0x6c9a02 */
  esp -= 4; W32(esp, 0x731f17u); SPILL(); f_6c9a02(); if (g_unwind) return; RELOAD();
/* 731f17: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 731f1a: je 0x731f2b */
  if (zf) goto L_731f2b;
L_731f1c: /* 731f1c: push 0x11c */
  { uint32_t v = 0x11cu; esp -= 4; W32(esp, v); }
/* 731f21: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 731f22: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x731f28u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 731f28: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_731f2b: /* 731f2b: mov eax, esi */
  eax = esi;
/* 731f2d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 731f2e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 731f2f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_731f60(void) {
  LOAD_REGS();
L_731f60: /* 731f60: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 731f64: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 731f66: je 0x731f6d */
  if (zf) goto L_731f6d;
L_731f68: /* 731f68: jmp 0x6c3512 */
  SPILL(); f_6c3512(); return;
L_731f6d: /* 731f6d: ret  */
  esp += 4; SPILL(); return;
}

void f_731f80(void) {
  LOAD_REGS();
L_731f80: /* 731f80: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 731f84: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 731f88: lea ecx, [eax + 0x18] */
  ecx = (uint32_t)(eax + 0x18u);
/* 731f8b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 731f8c: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 731f8f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 731f90: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 731f91: call 0x6c4548 */
  esp -= 4; W32(esp, 0x731f96u); SPILL(); f_6c4548(); if (g_unwind) return; RELOAD();
/* 731f96: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 731f99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 731f9a: call dword ptr [0xcfa280] */
  esp -= 4; W32(esp, 0x731fa0u); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* 731fa0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 731fa3: ret  */
  esp += 4; SPILL(); return;
}

void f_731fc0(void) {
  LOAD_REGS();
L_731fc0: /* 731fc0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 731fc2: push 0x9c505b */
  { uint32_t v = 0x9c505bu; esp -= 4; W32(esp, v); }
/* 731fc7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 731fcd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 731fce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 731fd5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 731fd6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 731fd7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 731fd8: mov esi, ecx */
  esi = ecx;
/* 731fda: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 731fde: mov dword ptr [esi], 0x9f9448 */
  W32((uint32_t)(esi), 0x9f9448u);
/* 731fe4: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 731fe8: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 731feb: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 731fee: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 731ff1: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 731ff4: mov edx, dword ptr [edi + 0xc] */
  edx = R32((uint32_t)(edi + 0xcu));
/* 731ff7: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 731ffa: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 731ffd: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 732000: mov ecx, dword ptr [edi + 0x14] */
  ecx = R32((uint32_t)(edi + 0x14u));
/* 732003: mov dword ptr [esi + 0x14], ecx */
  W32((uint32_t)(esi + 0x14u), ecx);
/* 732006: mov edx, dword ptr [edi + 0x18] */
  edx = R32((uint32_t)(edi + 0x18u));
/* 732009: mov dword ptr [esi + 0x18], edx */
  W32((uint32_t)(esi + 0x18u), edx);
/* 73200c: mov eax, dword ptr [edi + 0x1c] */
  eax = R32((uint32_t)(edi + 0x1cu));
/* 73200f: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 732012: mov ecx, dword ptr [edi + 0x20] */
  ecx = R32((uint32_t)(edi + 0x20u));
/* 732015: mov dword ptr [esi + 0x20], ecx */
  W32((uint32_t)(esi + 0x20u), ecx);
/* 732018: lea edx, [edi + 0x24] */
  edx = (uint32_t)(edi + 0x24u);
/* 73201b: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 73201d: lea eax, [esi + 0x24] */
  eax = (uint32_t)(esi + 0x24u);
/* 732020: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 732022: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 732025: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 732028: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 73202b: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 73202e: mov eax, dword ptr [edi + 0x30] */
  eax = R32((uint32_t)(edi + 0x30u));
/* 732031: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 732034: mov ecx, dword ptr [edi + 0x34] */
  ecx = R32((uint32_t)(edi + 0x34u));
/* 732037: mov dword ptr [esi + 0x34], ecx */
  W32((uint32_t)(esi + 0x34u), ecx);
/* 73203a: mov edx, dword ptr [edi + 0x38] */
  edx = R32((uint32_t)(edi + 0x38u));
/* 73203d: mov dword ptr [esi + 0x38], edx */
  W32((uint32_t)(esi + 0x38u), edx);
/* 732040: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* 732043: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* 732046: mov ecx, dword ptr [edi + 0x40] */
  ecx = R32((uint32_t)(edi + 0x40u));
/* 732049: lea edx, [edi + 0x44] */
  edx = (uint32_t)(edi + 0x44u);
/* 73204c: mov dword ptr [esi + 0x40], ecx */
  W32((uint32_t)(esi + 0x40u), ecx);
/* 73204f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 732050: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* 732053: call 0x6c5fd3 */
  esp -= 4; W32(esp, 0x732058u); SPILL(); f_6c5fd3(); if (g_unwind) return; RELOAD();
/* 732058: mov eax, dword ptr [edi + 0x50] */
  eax = R32((uint32_t)(edi + 0x50u));
/* 73205b: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* 73205e: mov ecx, dword ptr [edi + 0x54] */
  ecx = R32((uint32_t)(edi + 0x54u));
/* 732061: mov dword ptr [esi + 0x54], ecx */
  W32((uint32_t)(esi + 0x54u), ecx);
/* 732064: mov edx, dword ptr [edi + 0x58] */
  edx = R32((uint32_t)(edi + 0x58u));
/* 732067: mov dword ptr [esi + 0x58], edx */
  W32((uint32_t)(esi + 0x58u), edx);
/* 73206a: mov eax, dword ptr [edi + 0x5c] */
  eax = R32((uint32_t)(edi + 0x5cu));
/* 73206d: mov dword ptr [esi + 0x5c], eax */
  W32((uint32_t)(esi + 0x5cu), eax);
/* 732070: mov ecx, dword ptr [edi + 0x60] */
  ecx = R32((uint32_t)(edi + 0x60u));
/* 732073: lea edx, [edi + 0x64] */
  edx = (uint32_t)(edi + 0x64u);
/* 732076: mov dword ptr [esi + 0x60], ecx */
  W32((uint32_t)(esi + 0x60u), ecx);
/* 732079: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 73207a: lea ecx, [esi + 0x64] */
  ecx = (uint32_t)(esi + 0x64u);
/* 73207d: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 732085: call 0x6c7a81 */
  esp -= 4; W32(esp, 0x73208au); SPILL(); f_6c7a81(); if (g_unwind) return; RELOAD();
/* 73208a: mov eax, dword ptr [edi + 0x70] */
  eax = R32((uint32_t)(edi + 0x70u));
/* 73208d: mov dword ptr [esi + 0x70], eax */
  W32((uint32_t)(esi + 0x70u), eax);
/* 732090: mov ecx, dword ptr [edi + 0x74] */
  ecx = R32((uint32_t)(edi + 0x74u));
/* 732093: mov dword ptr [esi + 0x74], ecx */
  W32((uint32_t)(esi + 0x74u), ecx);
/* 732096: mov edx, dword ptr [edi + 0x78] */
  edx = R32((uint32_t)(edi + 0x78u));
/* 732099: mov dword ptr [esi + 0x78], edx */
  W32((uint32_t)(esi + 0x78u), edx);
/* 73209c: mov eax, dword ptr [edi + 0x7c] */
  eax = R32((uint32_t)(edi + 0x7cu));
/* 73209f: mov dword ptr [esi + 0x7c], eax */
  W32((uint32_t)(esi + 0x7cu), eax);
/* 7320a2: mov ecx, dword ptr [edi + 0x80] */
  ecx = R32((uint32_t)(edi + 0x80u));
/* 7320a8: mov dword ptr [esi + 0x80], ecx */
  W32((uint32_t)(esi + 0x80u), ecx);
/* 7320ae: mov edx, dword ptr [edi + 0x84] */
  edx = R32((uint32_t)(edi + 0x84u));
/* 7320b4: mov dword ptr [esi + 0x84], edx */
  W32((uint32_t)(esi + 0x84u), edx);
/* 7320ba: mov eax, dword ptr [edi + 0x88] */
  eax = R32((uint32_t)(edi + 0x88u));
/* 7320c0: mov dword ptr [esi + 0x88], eax */
  W32((uint32_t)(esi + 0x88u), eax);
/* 7320c6: mov ecx, dword ptr [edi + 0x8c] */
  ecx = R32((uint32_t)(edi + 0x8cu));
/* 7320cc: mov dword ptr [esi + 0x8c], ecx */
  W32((uint32_t)(esi + 0x8cu), ecx);
/* 7320d2: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 7320d6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7320d7: mov eax, esi */
  eax = esi;
/* 7320d9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7320da: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7320e1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7320e4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_732140(void) {
  LOAD_REGS();
L_732140: /* 732140: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 732141: mov esi, ecx */
  esi = ecx;
/* 732143: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 732144: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 732148: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 73214b: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 73214e: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 732151: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 732154: mov edx, dword ptr [edi + 0xc] */
  edx = R32((uint32_t)(edi + 0xcu));
/* 732157: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 73215a: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 73215d: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 732160: mov ecx, dword ptr [edi + 0x14] */
  ecx = R32((uint32_t)(edi + 0x14u));
/* 732163: mov dword ptr [esi + 0x14], ecx */
  W32((uint32_t)(esi + 0x14u), ecx);
/* 732166: mov edx, dword ptr [edi + 0x18] */
  edx = R32((uint32_t)(edi + 0x18u));
/* 732169: mov dword ptr [esi + 0x18], edx */
  W32((uint32_t)(esi + 0x18u), edx);
/* 73216c: mov eax, dword ptr [edi + 0x1c] */
  eax = R32((uint32_t)(edi + 0x1cu));
/* 73216f: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 732172: mov ecx, dword ptr [edi + 0x20] */
  ecx = R32((uint32_t)(edi + 0x20u));
/* 732175: mov dword ptr [esi + 0x20], ecx */
  W32((uint32_t)(esi + 0x20u), ecx);
/* 732178: lea edx, [edi + 0x24] */
  edx = (uint32_t)(edi + 0x24u);
/* 73217b: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 73217d: lea eax, [esi + 0x24] */
  eax = (uint32_t)(esi + 0x24u);
/* 732180: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 732182: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 732185: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 732188: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 73218b: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 73218e: mov eax, dword ptr [edi + 0x30] */
  eax = R32((uint32_t)(edi + 0x30u));
/* 732191: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 732194: mov ecx, dword ptr [edi + 0x34] */
  ecx = R32((uint32_t)(edi + 0x34u));
/* 732197: mov dword ptr [esi + 0x34], ecx */
  W32((uint32_t)(esi + 0x34u), ecx);
/* 73219a: mov edx, dword ptr [edi + 0x38] */
  edx = R32((uint32_t)(edi + 0x38u));
/* 73219d: mov dword ptr [esi + 0x38], edx */
  W32((uint32_t)(esi + 0x38u), edx);
/* 7321a0: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* 7321a3: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* 7321a6: mov ecx, dword ptr [edi + 0x40] */
  ecx = R32((uint32_t)(edi + 0x40u));
/* 7321a9: lea edx, [edi + 0x44] */
  edx = (uint32_t)(edi + 0x44u);
/* 7321ac: mov dword ptr [esi + 0x40], ecx */
  W32((uint32_t)(esi + 0x40u), ecx);
/* 7321af: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7321b0: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* 7321b3: call 0x6c9994 */
  esp -= 4; W32(esp, 0x7321b8u); SPILL(); f_6c9994(); if (g_unwind) return; RELOAD();
/* 7321b8: mov eax, dword ptr [edi + 0x50] */
  eax = R32((uint32_t)(edi + 0x50u));
/* 7321bb: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* 7321be: mov ecx, dword ptr [edi + 0x54] */
  ecx = R32((uint32_t)(edi + 0x54u));
/* 7321c1: mov dword ptr [esi + 0x54], ecx */
  W32((uint32_t)(esi + 0x54u), ecx);
/* 7321c4: mov edx, dword ptr [edi + 0x58] */
  edx = R32((uint32_t)(edi + 0x58u));
/* 7321c7: mov dword ptr [esi + 0x58], edx */
  W32((uint32_t)(esi + 0x58u), edx);
/* 7321ca: mov eax, dword ptr [edi + 0x5c] */
  eax = R32((uint32_t)(edi + 0x5cu));
/* 7321cd: mov dword ptr [esi + 0x5c], eax */
  W32((uint32_t)(esi + 0x5cu), eax);
/* 7321d0: mov ecx, dword ptr [edi + 0x60] */
  ecx = R32((uint32_t)(edi + 0x60u));
/* 7321d3: lea edx, [edi + 0x64] */
  edx = (uint32_t)(edi + 0x64u);
/* 7321d6: mov dword ptr [esi + 0x60], ecx */
  W32((uint32_t)(esi + 0x60u), ecx);
/* 7321d9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7321da: lea ecx, [esi + 0x64] */
  ecx = (uint32_t)(esi + 0x64u);
/* 7321dd: call 0x6ccf8b */
  esp -= 4; W32(esp, 0x7321e2u); SPILL(); f_6ccf8b(); if (g_unwind) return; RELOAD();
/* 7321e2: mov eax, dword ptr [edi + 0x70] */
  eax = R32((uint32_t)(edi + 0x70u));
/* 7321e5: mov dword ptr [esi + 0x70], eax */
  W32((uint32_t)(esi + 0x70u), eax);
/* 7321e8: mov ecx, dword ptr [edi + 0x74] */
  ecx = R32((uint32_t)(edi + 0x74u));
/* 7321eb: mov dword ptr [esi + 0x74], ecx */
  W32((uint32_t)(esi + 0x74u), ecx);
/* 7321ee: mov edx, dword ptr [edi + 0x78] */
  edx = R32((uint32_t)(edi + 0x78u));
/* 7321f1: mov dword ptr [esi + 0x78], edx */
  W32((uint32_t)(esi + 0x78u), edx);
/* 7321f4: mov eax, dword ptr [edi + 0x7c] */
  eax = R32((uint32_t)(edi + 0x7cu));
/* 7321f7: mov dword ptr [esi + 0x7c], eax */
  W32((uint32_t)(esi + 0x7cu), eax);
/* 7321fa: mov ecx, dword ptr [edi + 0x80] */
  ecx = R32((uint32_t)(edi + 0x80u));
/* 732200: mov dword ptr [esi + 0x80], ecx */
  W32((uint32_t)(esi + 0x80u), ecx);
/* 732206: mov edx, dword ptr [edi + 0x84] */
  edx = R32((uint32_t)(edi + 0x84u));
/* 73220c: mov dword ptr [esi + 0x84], edx */
  W32((uint32_t)(esi + 0x84u), edx);
/* 732212: mov eax, dword ptr [edi + 0x88] */
  eax = R32((uint32_t)(edi + 0x88u));
/* 732218: mov dword ptr [esi + 0x88], eax */
  W32((uint32_t)(esi + 0x88u), eax);
/* 73221e: mov ecx, dword ptr [edi + 0x8c] */
  ecx = R32((uint32_t)(edi + 0x8cu));
/* 732224: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 732225: mov dword ptr [esi + 0x8c], ecx */
  W32((uint32_t)(esi + 0x8cu), ecx);
/* 73222b: mov eax, esi */
  eax = esi;
/* 73222d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73222e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_732280(void) {
  LOAD_REGS();
L_732280: /* 732280: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 732281: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 732282: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 732283: mov esi, ecx */
  esi = ecx;
/* 732285: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 732286: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 732289: mov dword ptr [esi], 0x9f944c */
  W32((uint32_t)(esi), 0x9f944cu);
/* 73228f: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x732295u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 732295: mov ebp, dword ptr [0xcfa1b0] */
  ebp = R32((uint32_t)(0xcfa1b0u));
/* 73229b: mov ebx, dword ptr [ebp + 4] */
  ebx = R32((uint32_t)(ebp + 0x4u));
/* 73229e: mov edi, dword ptr [ebp] */
  edi = R32((uint32_t)(ebp));
/* 7322a1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7322a3: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 7322a8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7322a9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7322aa: call 0x99c910 */
  esp -= 4; W32(esp, 0x7322afu); SPILL(); f_99c910(); if (g_unwind) return; RELOAD();
/* 7322af: add eax, 0xe1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 7322b4: adc edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 7322b7: add edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edi = r;
  }
/* 7322ba: mov dword ptr [ebp], edi */
  W32((uint32_t)(ebp), edi);
/* 7322bd: mov ecx, dword ptr [0xcfa1b0] */
  ecx = R32((uint32_t)(0xcfa1b0u));
/* 7322c3: adc ebx, 0 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ebx = r;
  }
/* 7322c6: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 7322c9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7322ca: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 7322cd: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 7322d0: mov dword ptr [esi + 0x18], 0 */
  W32((uint32_t)(esi + 0x18u), 0x0u);
/* 7322d7: mov eax, esi */
  eax = esi;
/* 7322d9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7322da: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7322db: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7322dc: ret  */
  esp += 4; SPILL(); return;
}

void f_732300(void) {
  LOAD_REGS();
L_732300: /* 732300: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 732304: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 732308: lea ecx, [eax + 0x18] */
  ecx = (uint32_t)(eax + 0x18u);
/* 73230b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73230c: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 73230f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 732310: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 732311: call 0x6c83dc */
  esp -= 4; W32(esp, 0x732316u); SPILL(); f_6c83dc(); if (g_unwind) return; RELOAD();
/* 732316: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 732319: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73231a: call dword ptr [0xcfa280] */
  esp -= 4; W32(esp, 0x732320u); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* 732320: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 732323: ret  */
  esp += 4; SPILL(); return;
}

void f_732340(void) {
  LOAD_REGS();
L_732340: /* 732340: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 732343: jmp 0x6c943f */
  SPILL(); f_6c943f(); return;
}

void f_732360(void) {
  LOAD_REGS();
L_732360: /* 732360: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 732361: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 732362: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 732366: mov esi, ecx */
  esi = ecx;
/* 732368: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
/* 73236b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73236c: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 73236f: mov dword ptr [esi], 0x9f944c */
  W32((uint32_t)(esi), 0x9f944cu);
/* 732375: call 0x6c3477 */
  esp -= 4; W32(esp, 0x73237au); SPILL(); f_6c3477(); if (g_unwind) return; RELOAD();
/* 73237a: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* 73237d: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* 732380: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 732383: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 732386: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 732389: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 73238c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 73238d: mov eax, esi */
  eax = esi;
/* 73238f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 732390: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7323b0(void) {
  LOAD_REGS();
L_7323b0: /* 7323b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7323b1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7323b2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 7323b6: mov esi, ecx */
  esi = ecx;
/* 7323b8: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
/* 7323bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7323bc: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 7323bf: call 0x6caf33 */
  esp -= 4; W32(esp, 0x7323c4u); SPILL(); f_6caf33(); if (g_unwind) return; RELOAD();
/* 7323c4: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* 7323c7: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* 7323ca: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 7323cd: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 7323d0: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 7323d3: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 7323d6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7323d7: mov eax, esi */
  eax = esi;
/* 7323d9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7323da: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7323f0(void) {
  LOAD_REGS();
L_7323f0: /* 7323f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7323f1: mov esi, ecx */
  esi = ecx;
/* 7323f3: call 0x6c1604 */
  esp -= 4; W32(esp, 0x7323f8u); SPILL(); f_6c1604(); if (g_unwind) return; RELOAD();
/* 7323f8: mov dword ptr [esi], 0x9f9478 */
  W32((uint32_t)(esi), 0x9f9478u);
/* 7323fe: mov eax, esi */
  eax = esi;
/* 732400: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 732401: ret  */
  esp += 4; SPILL(); return;
}

void f_732420(void) {
  LOAD_REGS();
L_732420: /* 732420: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 732423: jmp 0x6c678f */
  SPILL(); f_6c678f(); return;
}

void f_732440(void) {
  LOAD_REGS();
L_732440: /* 732440: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 732441: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 732442: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 732446: mov esi, ecx */
  esi = ecx;
/* 732448: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
/* 73244b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73244c: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 73244f: mov dword ptr [esi], 0x9f8b1c */
  W32((uint32_t)(esi), 0x9f8b1cu);
/* 732455: call 0x6c520e */
  esp -= 4; W32(esp, 0x73245au); SPILL(); f_6c520e(); if (g_unwind) return; RELOAD();
/* 73245a: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* 73245d: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* 732460: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 732463: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 732466: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 732469: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 73246c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 73246d: mov dword ptr [esi], 0x9f9478 */
  W32((uint32_t)(esi), 0x9f9478u);
/* 732473: mov eax, esi */
  eax = esi;
/* 732475: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 732476: ret 4 */
  esp += 8; SPILL(); return;
}

void f_732490(void) {
  LOAD_REGS();
L_732490: /* 732490: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 732491: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 732492: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 732493: mov esi, ecx */
  esi = ecx;
/* 732495: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 732496: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 732499: mov dword ptr [esi], 0x9f94a4 */
  W32((uint32_t)(esi), 0x9f94a4u);
/* 73249f: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7324a5u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7324a5: mov ebp, dword ptr [0xcfa1b0] */
  ebp = R32((uint32_t)(0xcfa1b0u));
/* 7324ab: mov ebx, dword ptr [ebp + 4] */
  ebx = R32((uint32_t)(ebp + 0x4u));
/* 7324ae: mov edi, dword ptr [ebp] */
  edi = R32((uint32_t)(ebp));
/* 7324b1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7324b3: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 7324b8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7324b9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7324ba: call 0x99c910 */
  esp -= 4; W32(esp, 0x7324bfu); SPILL(); f_99c910(); if (g_unwind) return; RELOAD();
/* 7324bf: add eax, 0xe1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 7324c4: mov ecx, 0 */
  ecx = 0x0u;
/* 7324c9: adc edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 7324cb: add edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edi = r;
  }
/* 7324ce: mov dword ptr [ebp], edi */
  W32((uint32_t)(ebp), edi);
/* 7324d1: mov edi, dword ptr [0xcfa1b0] */
  edi = R32((uint32_t)(0xcfa1b0u));
/* 7324d7: adc ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ebx = r;
  }
/* 7324d9: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 7324dc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7324dd: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 7324e0: mov dword ptr [esi + 0x18], edx */
  W32((uint32_t)(esi + 0x18u), edx);
/* 7324e3: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* 7324e6: mov dword ptr [esi + 0x1c], ecx */
  W32((uint32_t)(esi + 0x1cu), ecx);
/* 7324e9: mov eax, esi */
  eax = esi;
/* 7324eb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7324ec: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7324ed: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7324ee: ret  */
  esp += 4; SPILL(); return;
}

void f_732510(void) {
  LOAD_REGS();
L_732510: /* 732510: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 732514: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 732515: lea ecx, [eax + 0x1c] */
  ecx = (uint32_t)(eax + 0x1cu);
/* 732518: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 732519: lea edx, [eax + 0x10] */
  edx = (uint32_t)(eax + 0x10u);
/* 73251c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 73251d: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 732520: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 732521: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 732525: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 732526: call 0x6c89a4 */
  esp -= 4; W32(esp, 0x73252bu); SPILL(); f_6c89a4(); if (g_unwind) return; RELOAD();
/* 73252b: mov esi, dword ptr [0xcfa280] */
  esi = R32((uint32_t)(0xcfa280u));
/* 732531: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 732534: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 732535: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x732537u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 732537: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 73253a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73253b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x73253du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 73253d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 732540: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 732541: ret  */
  esp += 4; SPILL(); return;
}

void f_732520(void) {
  LOAD_REGS();
L_732520: /* 732520: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 732521: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 732525: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 732526: call 0x6c89a4 */
  esp -= 4; W32(esp, 0x73252bu); SPILL(); f_6c89a4(); if (g_unwind) return; RELOAD();
/* 73252b: mov esi, dword ptr [0xcfa280] */
  esi = R32((uint32_t)(0xcfa280u));
/* 732531: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 732534: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 732535: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x732537u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 732537: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 73253a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73253b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x73253du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 73253d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 732540: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 732541: ret  */
  esp += 4; SPILL(); return;
}

void f_732560(void) {
  LOAD_REGS();
L_732560: /* 732560: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 732563: jmp 0x6cc3e7 */
  SPILL(); f_6cc3e7(); return;
}

void f_732580(void) {
  LOAD_REGS();
L_732580: /* 732580: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 732581: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 732582: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 732586: mov esi, ecx */
  esi = ecx;
/* 732588: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
/* 73258b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73258c: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 73258f: mov dword ptr [esi], 0x9f94a4 */
  W32((uint32_t)(esi), 0x9f94a4u);
/* 732595: call 0x6c4ead */
  esp -= 4; W32(esp, 0x73259au); SPILL(); f_6c4ead(); if (g_unwind) return; RELOAD();
/* 73259a: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* 73259d: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* 7325a0: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 7325a3: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 7325a6: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 7325a9: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 7325ac: mov ecx, dword ptr [edi + 0x1c] */
  ecx = R32((uint32_t)(edi + 0x1cu));
/* 7325af: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7325b0: mov dword ptr [esi + 0x1c], ecx */
  W32((uint32_t)(esi + 0x1cu), ecx);
/* 7325b3: mov eax, esi */
  eax = esi;
/* 7325b5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7325b6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7325d0(void) {
  LOAD_REGS();
L_7325d0: /* 7325d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7325d1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7325d2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 7325d6: mov esi, ecx */
  esi = ecx;
/* 7325d8: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
/* 7325db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7325dc: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 7325df: call 0x6caee3 */
  esp -= 4; W32(esp, 0x7325e4u); SPILL(); f_6caee3(); if (g_unwind) return; RELOAD();
/* 7325e4: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* 7325e7: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* 7325ea: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 7325ed: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 7325f0: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 7325f3: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 7325f6: mov ecx, dword ptr [edi + 0x1c] */
  ecx = R32((uint32_t)(edi + 0x1cu));
/* 7325f9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7325fa: mov dword ptr [esi + 0x1c], ecx */
  W32((uint32_t)(esi + 0x1cu), ecx);
/* 7325fd: mov eax, esi */
  eax = esi;
/* 7325ff: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 732600: ret 4 */
  esp += 8; SPILL(); return;
}

void f_732620(void) {
  LOAD_REGS();
L_732620: /* 732620: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 732624: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 732628: lea ecx, [eax + 0xc] */
  ecx = (uint32_t)(eax + 0xcu);
/* 73262b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73262c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73262d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 73262e: call 0x6c2e96 */
  esp -= 4; W32(esp, 0x732633u); SPILL(); f_6c2e96(); if (g_unwind) return; RELOAD();
/* 732633: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 732636: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 732637: call 0x6c72cf */
  esp -= 4; W32(esp, 0x73263cu); SPILL(); f_6c72cf(); if (g_unwind) return; RELOAD();
/* 73263c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 73263f: ret  */
  esp += 4; SPILL(); return;
}

void f_732650(void) {
  LOAD_REGS();
L_732650: /* 732650: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 732652: push 0x9c5078 */
  { uint32_t v = 0x9c5078u; esp -= 4; W32(esp, v); }
/* 732657: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 73265d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73265e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 732665: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 732666: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 732667: mov esi, ecx */
  esi = ecx;
/* 732669: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 73266d: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 732670: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 732678: call 0x6c9a07 */
  esp -= 4; W32(esp, 0x73267du); SPILL(); f_6c9a07(); if (g_unwind) return; RELOAD();
/* 73267d: mov ecx, esi */
  ecx = esi;
/* 73267f: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 732687: call 0x6ca588 */
  esp -= 4; W32(esp, 0x73268cu); SPILL(); f_6ca588(); if (g_unwind) return; RELOAD();
/* 73268c: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 732690: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 732691: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 732698: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 73269b: ret  */
  esp += 4; SPILL(); return;
}

void f_7326c0(void) {
  LOAD_REGS();
L_7326c0: /* 7326c0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7326c2: push 0x9c5098 */
  { uint32_t v = 0x9c5098u; esp -= 4; W32(esp, v); }
/* 7326c7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7326cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7326ce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7326d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7326d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7326d7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7326d8: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 7326dc: mov esi, ecx */
  esi = ecx;
/* 7326de: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7326df: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 7326e3: call 0x6c29a0 */
  esp -= 4; W32(esp, 0x7326e8u); SPILL(); f_6c29a0(); if (g_unwind) return; RELOAD();
/* 7326e8: add edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7326eb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7326ec: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 7326ef: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 7326f7: call 0x6c47dc */
  esp -= 4; W32(esp, 0x7326fcu); SPILL(); f_6c47dc(); if (g_unwind) return; RELOAD();
/* 7326fc: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 732700: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 732701: mov eax, esi */
  eax = esi;
/* 732703: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 732704: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 73270b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 73270e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_732740(void) {
  LOAD_REGS();
L_732740: /* 732740: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 732741: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 732742: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 732746: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 732748: mov esi, ecx */
  esi = ecx;
/* 73274a: je 0x732751 */
  if (zf) goto L_732751;
L_73274c: /* 73274c: lea eax, [edi + 0xc] */
  eax = (uint32_t)(edi + 0xcu);
/* 73274f: jmp 0x732753 */
  goto L_732753;
L_732751: /* 732751: xor eax, eax */
  eax = 0;
L_732753: /* 732753: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 732754: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 732757: call 0x6c6ea1 */
  esp -= 4; W32(esp, 0x73275cu); SPILL(); f_6c6ea1(); if (g_unwind) return; RELOAD();
/* 73275c: mov dword ptr [esi], 0x9f401c */
  W32((uint32_t)(esi), 0x9f401cu);
/* 732762: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 732765: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 732768: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 73276b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 73276c: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 73276f: mov dword ptr [esi], 0x9f94d0 */
  W32((uint32_t)(esi), 0x9f94d0u);
/* 732775: mov eax, esi */
  eax = esi;
/* 732777: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 732778: ret 4 */
  esp += 8; SPILL(); return;
}

void f_732790(void) {
  LOAD_REGS();
L_732790: /* 732790: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 732791: mov ebp, esp */
  ebp = esp;
/* 732793: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 732795: push 0x9c50b0 */
  { uint32_t v = 0x9c50b0u; esp -= 4; W32(esp, v); }
/* 73279a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7327a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7327a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7327a8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7327ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7327ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7327ad: mov esi, ecx */
  esi = ecx;
/* 7327af: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 7327b2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7327b4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7327b5: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7327b8: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7327bf: jge 0x7327e3 */
  if ((sf == of)) goto L_7327e3;
L_7327c1: /* 7327c1: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 7327c4: xor eax, eax */
  eax = 0;
L_7327c6: /* 7327c6: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7327c9: jge 0x7327ce */
  if ((sf == of)) goto L_7327ce;
L_7327cb: /* 7327cb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7327cc: jmp 0x7327c6 */
  goto L_7327c6;
L_7327ce: /* 7327ce: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7327d0: push 0x104 */
  { uint32_t v = 0x104u; esp -= 4; W32(esp, v); }
/* 7327d5: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7327dbu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7327db: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 7327de: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 7327e0: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
L_7327e3: /* 7327e3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7327e6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7327e7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7327e8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7327ef: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7327f0: mov esp, ebp */
  esp = ebp;
/* 7327f2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7327f3: ret  */
  esp += 4; SPILL(); return;
}

void f_7327f4(void) {
  LOAD_REGS();
L_7327f4: /* 7327f4: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7327f7: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7327fc: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7327ff: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 732800: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 732803: call 0x99caf8 */
  esp -= 4; W32(esp, 0x732808u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_732808(); return;
}

void f_732808(void) {
  LOAD_REGS();
L_732808: /* 732808: push 0x9f94dc */
  { uint32_t v = 0x9f94dcu; esp -= 4; W32(esp, v); }
/* 73280d: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 732812: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x732818u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 732818: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 73281b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 73281d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 73281f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x732824u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_732824: guest_badaddr(0x732824); return;
}

void f_732860(void) {
  LOAD_REGS();
L_732860: /* 732860: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 732861: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 732862: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 732866: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 732867: mov esi, ecx */
  esi = ecx;
/* 732869: call 0x6c9d9a */
  esp -= 4; W32(esp, 0x73286eu); SPILL(); f_6c9d9a(); if (g_unwind) return; RELOAD();
/* 73286e: add edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 732871: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 732872: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 732875: call 0x6c9773 */
  esp -= 4; W32(esp, 0x73287au); SPILL(); f_6c9773(); if (g_unwind) return; RELOAD();
/* 73287a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 73287b: mov eax, esi */
  eax = esi;
/* 73287d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73287e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7328a0(void) {
  LOAD_REGS();
L_7328a0: /* 7328a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7328a1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7328a2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 7328a6: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7328a8: mov esi, ecx */
  esi = ecx;
/* 7328aa: je 0x7328b1 */
  if (zf) goto L_7328b1;
L_7328ac: /* 7328ac: lea eax, [edi + 0xc] */
  eax = (uint32_t)(edi + 0xcu);
/* 7328af: jmp 0x7328b3 */
  goto L_7328b3;
L_7328b1: /* 7328b1: xor eax, eax */
  eax = 0;
L_7328b3: /* 7328b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7328b4: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 7328b7: call 0x6c89b8 */
  esp -= 4; W32(esp, 0x7328bcu); SPILL(); f_6c89b8(); if (g_unwind) return; RELOAD();
/* 7328bc: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7328bf: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 7328c2: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 7328c5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7328c6: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 7328c9: mov eax, esi */
  eax = esi;
/* 7328cb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7328cc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7328e0(void) {
  LOAD_REGS();
L_7328e0: /* 7328e0: jmp 0x6cb90b */
  SPILL(); f_6cb90b(); return;
}

void f_732900(void) {
  LOAD_REGS();
L_732900: /* 732900: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 732904: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 732905: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 732906: mov esi, ecx */
  esi = ecx;
/* 732908: call 0x6c807b */
  esp -= 4; W32(esp, 0x73290du); SPILL(); f_6c807b(); if (g_unwind) return; RELOAD();
/* 73290d: mov eax, esi */
  eax = esi;
/* 73290f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 732910: ret 4 */
  esp += 8; SPILL(); return;
}

void f_732930(void) {
  LOAD_REGS();
L_732930: /* 732930: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 732932: push 0x9c50cb */
  { uint32_t v = 0x9c50cbu; esp -= 4; W32(esp, v); }
/* 732937: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 73293d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73293e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 732945: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 732946: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 732947: mov esi, ecx */
  esi = ecx;
/* 732949: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 73294d: lea ecx, [esi + 0x18] */
  ecx = (uint32_t)(esi + 0x18u);
/* 732950: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 732958: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x73295eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 73295e: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 732961: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 732969: call 0x6c2ed2 */
  esp -= 4; W32(esp, 0x73296eu); SPILL(); f_6c2ed2(); if (g_unwind) return; RELOAD();
/* 73296e: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 732972: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 732973: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 73297a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 73297d: ret  */
  esp += 4; SPILL(); return;
}

void f_7329a0(void) {
  LOAD_REGS();
L_7329a0: /* 7329a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7329a2: push 0x9c50eb */
  { uint32_t v = 0x9c50ebu; esp -= 4; W32(esp, v); }
/* 7329a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7329ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7329ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7329b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7329b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7329b7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7329b8: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 7329bc: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7329be: mov esi, ecx */
  esi = ecx;
/* 7329c0: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 7329c3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7329c4: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 7329c7: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 7329cb: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 7329cd: call 0x6c85e4 */
  esp -= 4; W32(esp, 0x7329d2u); SPILL(); f_6c85e4(); if (g_unwind) return; RELOAD();
/* 7329d2: mov edx, dword ptr [edi + 0x10] */
  edx = R32((uint32_t)(edi + 0x10u));
/* 7329d5: lea ecx, [edi + 0x18] */
  ecx = (uint32_t)(edi + 0x18u);
/* 7329d8: mov dword ptr [esi + 0x10], edx */
  W32((uint32_t)(esi + 0x10u), edx);
/* 7329db: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 7329de: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7329df: lea ecx, [esi + 0x18] */
  ecx = (uint32_t)(esi + 0x18u);
/* 7329e2: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 7329ea: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 7329ed: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x7329f3u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 7329f3: mov edx, dword ptr [edi + 0x24] */
  edx = R32((uint32_t)(edi + 0x24u));
/* 7329f6: mov dword ptr [esi + 0x24], edx */
  W32((uint32_t)(esi + 0x24u), edx);
/* 7329f9: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 7329fc: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 7329ff: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 732a02: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 732a05: mov edx, dword ptr [edi + 0x30] */
  edx = R32((uint32_t)(edi + 0x30u));
/* 732a08: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 732a0c: mov dword ptr [esi + 0x30], edx */
  W32((uint32_t)(esi + 0x30u), edx);
/* 732a0f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 732a10: mov eax, esi */
  eax = esi;
/* 732a12: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 732a13: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 732a1a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 732a1d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_732a40(void) {
  LOAD_REGS();
L_732a40: /* 732a40: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 732a44: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 732a45: push 0x148 */
  { uint32_t v = 0x148u; esp -= 4; W32(esp, v); }
/* 732a4a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 732a4b: mov esi, ecx */
  esi = ecx;
/* 732a4d: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x732a53u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 732a53: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 732a57: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* 732a5a: mov eax, esi */
  eax = esi;
/* 732a5c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 732a5d: ret 8 */
  esp += 12; SPILL(); return;
}

void f_732a70(void) {
  LOAD_REGS();
L_732a70: /* 732a70: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 732a74: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 732a75: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 732a76: mov esi, ecx */
  esi = ecx;
/* 732a78: call 0x6c2cf2 */
  esp -= 4; W32(esp, 0x732a7du); SPILL(); f_6c2cf2(); if (g_unwind) return; RELOAD();
/* 732a7d: mov eax, esi */
  eax = esi;
/* 732a7f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 732a80: ret 4 */
  esp += 8; SPILL(); return;
}

void f_732aa0(void) {
  LOAD_REGS();
L_732aa0: /* 732aa0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 732aa1: mov ebp, esp */
  ebp = esp;
/* 732aa3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 732aa5: push 0x9c5100 */
  { uint32_t v = 0x9c5100u; esp -= 4; W32(esp, v); }
/* 732aaa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 732ab0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 732ab1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 732ab8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 732abb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 732abc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 732abd: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 732ac0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 732ac1: mov ecx, esi */
  ecx = esi;
/* 732ac3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 732ac6: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 732acd: call dword ptr [0xcfa430] */
  esp -= 4; W32(esp, 0x732ad3u); SPILL(); f_4e14fb(); if (g_unwind) return; /* Core!?IsTrans@FArchive@@QAEHXZ */ RELOAD();
/* 732ad3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 732ad5: jne 0x732ae4 */
  if (!zf) goto L_732ae4;
L_732ad7: /* 732ad7: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 732ada: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 732adb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 732adc: call 0x6c787e */
  esp -= 4; W32(esp, 0x732ae1u); SPILL(); f_6c787e(); if (g_unwind) return; RELOAD();
/* 732ae1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_732ae4: /* 732ae4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 732ae7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 732ae8: mov eax, esi */
  eax = esi;
/* 732aea: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 732aeb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 732af2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 732af3: mov esp, ebp */
  esp = ebp;
/* 732af5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 732af6: ret  */
  esp += 4; SPILL(); return;
}

void f_732af7(void) {
  LOAD_REGS();
L_732af7: /* 732af7: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 732afa: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 732aff: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 732b02: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 732b03: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 732b06: call 0x99caf8 */
  esp -= 4; W32(esp, 0x732b0bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_732b0b(); return;
}

void f_732b0b(void) {
  LOAD_REGS();
L_732b0b: /* 732b0b: push 0x9f950c */
  { uint32_t v = 0x9f950cu; esp -= 4; W32(esp, v); }
/* 732b10: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 732b15: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x732b1bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 732b1b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 732b1e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 732b20: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 732b22: call 0x99caf8 */
  esp -= 4; W32(esp, 0x732b27u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_732b27: guest_badaddr(0x732b27); return;
}

void f_732b60(void) {
  LOAD_REGS();
L_732b60: /* 732b60: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 732b62: push 0x9c5119 */
  { uint32_t v = 0x9c5119u; esp -= 4; W32(esp, v); }
/* 732b67: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 732b6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 732b6e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 732b75: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 732b78: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 732b79: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 732b7a: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 732b7e: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 732b81: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 732b83: mov esi, ecx */
  esi = ecx;
/* 732b85: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 732b86: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 732b8a: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x732b90u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 732b90: xor eax, eax */
  eax = 0;
/* 732b92: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 732b95: cmp dword ptr [edi + 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 732b98: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 732b9c: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 732ba0: jle 0x732c04 */
  if ((zf || sf != of)) goto L_732c04;
L_732ba2: /* 732ba2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 732ba3: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 732ba7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
L_732ba8: /* 732ba8: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 732baa: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 732bac: mov ecx, esi */
  ecx = esi;
/* 732bae: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x732bb4u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 732bb4: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 732bb7: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 732bb9: je 0x732be7 */
  if (zf) goto L_732be7;
L_732bbb: /* 732bbb: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 732bbd: add ecx, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 732bc1: mov edx, ecx */
  edx = ecx;
/* 732bc3: mov ebp, dword ptr [edx] */
  ebp = R32((uint32_t)(edx));
/* 732bc5: mov ebx, eax */
  ebx = eax;
/* 732bc7: mov dword ptr [ebx], ebp */
  W32((uint32_t)(ebx), ebp);
/* 732bc9: mov ebp, dword ptr [edx + 4] */
  ebp = R32((uint32_t)(edx + 0x4u));
/* 732bcc: mov dword ptr [ebx + 4], ebp */
  W32((uint32_t)(ebx + 0x4u), ebp);
/* 732bcf: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 732bd2: mov dword ptr [ebx + 8], edx */
  W32((uint32_t)(ebx + 0x8u), edx);
/* 732bd5: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 732bd8: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 732bdb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 732bdc: lea ecx, [eax + 0x10] */
  ecx = (uint32_t)(eax + 0x10u);
/* 732bdf: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 732be2: call 0x6cbbae */
  esp -= 4; W32(esp, 0x732be7u); SPILL(); f_6cbbae(); if (g_unwind) return; RELOAD();
L_732be7: /* 732be7: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 732beb: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 732bef: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 732bf2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 732bf3: add edx, 0x1c */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 732bf6: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 732bf8: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 732bfc: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 732c00: jl 0x732ba8 */
  if ((sf != of)) goto L_732ba8;
L_732c02: /* 732c02: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 732c03: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_732c04: /* 732c04: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 732c08: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 732c09: mov eax, esi */
  eax = esi;
/* 732c0b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 732c0c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 732c13: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 732c16: ret 4 */
  esp += 8; SPILL(); return;
}

void f_732c50(void) {
  LOAD_REGS();
L_732c50: /* 732c50: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 732c52: push 0x9c5139 */
  { uint32_t v = 0x9c5139u; esp -= 4; W32(esp, v); }
/* 732c57: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 732c5d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 732c5e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 732c65: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 732c66: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 732c67: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 732c68: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 732c69: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 732c6d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 732c70: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 732c72: mov esi, ecx */
  esi = ecx;
/* 732c74: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 732c75: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 732c79: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x732c7fu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 732c7f: xor ebx, ebx */
  ebx = 0;
/* 732c81: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 732c84: cmp dword ptr [edi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 732c87: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 732c8b: jle 0x732cbe */
  if ((zf || sf != of)) goto L_732cbe;
L_732c8d: /* 732c8d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 732c8e: xor ebp, ebp */
  ebp = 0;
L_732c90: /* 732c90: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 732c92: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 732c94: mov ecx, esi */
  ecx = esi;
/* 732c96: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x732c9cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 732c9c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 732c9e: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 732ca1: lea ecx, [edx + ecx*8] */
  ecx = (uint32_t)(edx + ecx*8);
/* 732ca4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 732ca6: je 0x732cb2 */
  if (zf) goto L_732cb2;
L_732ca8: /* 732ca8: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 732caa: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 732cac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 732cad: call 0x6ca79f */
  esp -= 4; W32(esp, 0x732cb2u); SPILL(); f_6ca79f(); if (g_unwind) return; RELOAD();
L_732cb2: /* 732cb2: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 732cb5: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 732cb6: add ebp, 0x28 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 732cb9: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 732cbb: jl 0x732c90 */
  if ((sf != of)) goto L_732c90;
L_732cbd: /* 732cbd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_732cbe: /* 732cbe: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 732cc2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 732cc3: mov eax, esi */
  eax = esi;
/* 732cc5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 732cc6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 732cc7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 732cce: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 732cd1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_732d10(void) {
  LOAD_REGS();
L_732d10: /* 732d10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 732d11: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 732d12: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 732d16: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 732d17: mov esi, ecx */
  esi = ecx;
/* 732d19: call 0x6c5e0c */
  esp -= 4; W32(esp, 0x732d1eu); SPILL(); f_6c5e0c(); if (g_unwind) return; RELOAD();
/* 732d1e: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 732d21: mov ecx, esi */
  ecx = esi;
/* 732d23: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 732d26: call 0x6c38eb */
  esp -= 4; W32(esp, 0x732d2bu); SPILL(); f_6c38eb(); if (g_unwind) return; RELOAD();
/* 732d2b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 732d2c: mov eax, esi */
  eax = esi;
/* 732d2e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 732d2f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_732d50(void) {
  LOAD_REGS();
L_732d50: /* 732d50: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 732d52: push 0x9c5158 */
  { uint32_t v = 0x9c5158u; esp -= 4; W32(esp, v); }
/* 732d57: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 732d5d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 732d5e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 732d65: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 732d66: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 732d67: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 732d68: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 732d6c: mov esi, ecx */
  esi = ecx;
/* 732d6e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 732d6f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 732d73: call 0x6c10b9 */
  esp -= 4; W32(esp, 0x732d78u); SPILL(); f_6c10b9(); if (g_unwind) return; RELOAD();
/* 732d78: xor eax, eax */
  eax = 0;
/* 732d7a: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 732d7e: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 732d81: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 732d84: mov ecx, esi */
  ecx = esi;
/* 732d86: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 732d89: call 0x6c38eb */
  esp -= 4; W32(esp, 0x732d8eu); SPILL(); f_6c38eb(); if (g_unwind) return; RELOAD();
/* 732d8e: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 732d92: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 732d93: mov eax, esi */
  eax = esi;
/* 732d95: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 732d96: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 732d9d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 732da0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_732dd0(void) {
  LOAD_REGS();
L_732dd0: /* 732dd0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 732dd2: push 0x9c5178 */
  { uint32_t v = 0x9c5178u; esp -= 4; W32(esp, v); }
/* 732dd7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 732ddd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 732dde: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 732de5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 732de6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 732de7: mov esi, ecx */
  esi = ecx;
/* 732de9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 732ded: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 732df0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 732df2: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 732dfa: je 0x732e0a */
  if (zf) goto L_732e0a;
L_732dfc: /* 732dfc: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 732e02: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 732e04: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 732e06: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 732e07: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x732e0au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_732e0a: /* 732e0a: mov ecx, esi */
  ecx = esi;
/* 732e0c: mov dword ptr [esi + 0xc], 0 */
  W32((uint32_t)(esi + 0xcu), 0x0u);
/* 732e13: mov dword ptr [esi + 0x10], 0 */
  W32((uint32_t)(esi + 0x10u), 0x0u);
/* 732e1a: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 732e22: call 0x6c14d3 */
  esp -= 4; W32(esp, 0x732e27u); SPILL(); f_6c14d3(); if (g_unwind) return; RELOAD();
/* 732e27: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 732e2b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 732e2c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 732e33: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 732e36: ret  */
  esp += 4; SPILL(); return;
}

void f_732e60(void) {
  LOAD_REGS();
L_732e60: /* 732e60: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 732e62: push 0x9c5199 */
  { uint32_t v = 0x9c5199u; esp -= 4; W32(esp, v); }
/* 732e67: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 732e6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 732e6e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 732e75: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 732e76: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 732e77: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 732e78: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 732e79: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 732e7d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 732e80: push 0x78 */
  { uint32_t v = 0x78u; esp -= 4; W32(esp, v); }
/* 732e82: mov esi, ecx */
  esi = ecx;
/* 732e84: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 732e85: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 732e89: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x732e8fu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 732e8f: xor ebx, ebx */
  ebx = 0;
/* 732e91: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 732e94: cmp dword ptr [edi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 732e97: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 732e9b: jle 0x732ecb */
  if ((zf || sf != of)) goto L_732ecb;
L_732e9d: /* 732e9d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 732e9e: xor ebp, ebp */
  ebp = 0;
L_732ea0: /* 732ea0: push 0x78 */
  { uint32_t v = 0x78u; esp -= 4; W32(esp, v); }
/* 732ea2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 732ea4: mov ecx, esi */
  ecx = esi;
/* 732ea6: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x732eacu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 732eac: imul eax, eax, 0x78 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x78u);
  eax = (uint32_t)r;
  }
/* 732eaf: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 732eb1: je 0x732ebf */
  if (zf) goto L_732ebf;
L_732eb3: /* 732eb3: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 732eb5: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 732eb7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 732eb8: mov ecx, eax */
  ecx = eax;
/* 732eba: call 0x6c99ee */
  esp -= 4; W32(esp, 0x732ebfu); SPILL(); f_6c99ee(); if (g_unwind) return; RELOAD();
L_732ebf: /* 732ebf: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 732ec2: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 732ec3: add ebp, 0x78 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 732ec6: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 732ec8: jl 0x732ea0 */
  if ((sf != of)) goto L_732ea0;
L_732eca: /* 732eca: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_732ecb: /* 732ecb: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 732ecf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 732ed0: mov eax, esi */
  eax = esi;
/* 732ed2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 732ed3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 732ed4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 732edb: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 732ede: ret 4 */
  esp += 8; SPILL(); return;
}

void f_732f20(void) {
  LOAD_REGS();
L_732f20: /* 732f20: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 732f24: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 732f25: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 732f27: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 732f28: mov esi, ecx */
  esi = ecx;
/* 732f2a: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x732f30u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 732f30: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 732f34: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* 732f37: mov eax, esi */
  eax = esi;
/* 732f39: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 732f3a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_732f50(void) {
  LOAD_REGS();
L_732f50: /* 732f50: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 732f54: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 732f55: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 732f56: mov esi, ecx */
  esi = ecx;
/* 732f58: call 0x6c78f1 */
  esp -= 4; W32(esp, 0x732f5du); SPILL(); f_6c78f1(); if (g_unwind) return; RELOAD();
/* 732f5d: mov eax, esi */
  eax = esi;
/* 732f5f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 732f60: ret 4 */
  esp += 8; SPILL(); return;
}

void f_732f80(void) {
  LOAD_REGS();
L_732f80: /* 732f80: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 732f84: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 732f85: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 732f86: mov esi, ecx */
  esi = ecx;
/* 732f88: call 0x6c8346 */
  esp -= 4; W32(esp, 0x732f8du); SPILL(); f_6c8346(); if (g_unwind) return; RELOAD();
/* 732f8d: mov eax, esi */
  eax = esi;
/* 732f8f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 732f90: ret 4 */
  esp += 8; SPILL(); return;
}

void f_732fb0(void) {
  LOAD_REGS();
L_732fb0: /* 732fb0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 732fb2: push 0x9c51b9 */
  { uint32_t v = 0x9c51b9u; esp -= 4; W32(esp, v); }
/* 732fb7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 732fbd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 732fbe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 732fc5: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 732fc8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 732fc9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 732fca: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 732fce: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 732fd1: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 732fd3: mov ebx, ecx */
  ebx = ecx;
/* 732fd5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 732fd6: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 732fda: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x732fe0u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 732fe0: xor eax, eax */
  eax = 0;
/* 732fe2: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 732fe5: cmp dword ptr [ebp + 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 732fe8: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 732fec: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 732ff0: jle 0x73306d */
  if ((zf || sf != of)) goto L_73306d;
L_732ff2: /* 732ff2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 732ff3: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 732ff7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_732ff8: /* 732ff8: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 732ffa: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 732ffc: mov ecx, ebx */
  ecx = ebx;
/* 732ffe: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x733004u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 733004: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 733007: add eax, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 733009: mov edi, eax */
  edi = eax;
/* 73300b: je 0x733050 */
  if (zf) goto L_733050;
L_73300d: /* 73300d: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 733010: add esi, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 733014: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 733017: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 733018: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 73301b: mov dword ptr [edi], 0x9f8bc4 */
  W32((uint32_t)(edi), 0x9f8bc4u);
/* 733021: call 0x6c1fc8 */
  esp -= 4; W32(esp, 0x733026u); SPILL(); f_6c1fc8(); if (g_unwind) return; RELOAD();
/* 733026: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* 733029: mov dword ptr [edi + 0x10], edx */
  W32((uint32_t)(edi + 0x10u), edx);
/* 73302c: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 73302f: mov dword ptr [edi + 0x14], eax */
  W32((uint32_t)(edi + 0x14u), eax);
/* 733032: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 733035: mov dword ptr [edi + 0x18], ecx */
  W32((uint32_t)(edi + 0x18u), ecx);
/* 733038: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* 73303b: mov dword ptr [edi + 0x1c], edx */
  W32((uint32_t)(edi + 0x1cu), edx);
/* 73303e: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 733041: mov dword ptr [edi + 0x20], eax */
  W32((uint32_t)(edi + 0x20u), eax);
/* 733044: mov ecx, dword ptr [esi + 0x24] */
  ecx = R32((uint32_t)(esi + 0x24u));
/* 733047: mov dword ptr [edi + 0x24], ecx */
  W32((uint32_t)(edi + 0x24u), ecx);
/* 73304a: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 73304d: mov dword ptr [edi + 0x28], edx */
  W32((uint32_t)(edi + 0x28u), edx);
L_733050: /* 733050: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 733054: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 733058: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 73305b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 73305c: add edx, 0x2c */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 73305f: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 733061: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 733065: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 733069: jl 0x732ff8 */
  if ((sf != of)) goto L_732ff8;
L_73306b: /* 73306b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 73306c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_73306d: /* 73306d: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 733071: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 733072: mov eax, ebx */
  eax = ebx;
/* 733074: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 733075: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 73307c: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 73307f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7330d0(void) {
  LOAD_REGS();
L_7330d0: /* 7330d0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7330d2: push 0x9c51d9 */
  { uint32_t v = 0x9c51d9u; esp -= 4; W32(esp, v); }
/* 7330d7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7330dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7330de: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7330e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7330e6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7330e7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7330e8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7330e9: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 7330ed: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7330f0: push 0x58 */
  { uint32_t v = 0x58u; esp -= 4; W32(esp, v); }
/* 7330f2: mov esi, ecx */
  esi = ecx;
/* 7330f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7330f5: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 7330f9: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x7330ffu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 7330ff: xor ebx, ebx */
  ebx = 0;
/* 733101: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 733104: cmp dword ptr [edi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 733107: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 73310b: jle 0x73313b */
  if ((zf || sf != of)) goto L_73313b;
L_73310d: /* 73310d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 73310e: xor ebp, ebp */
  ebp = 0;
L_733110: /* 733110: push 0x58 */
  { uint32_t v = 0x58u; esp -= 4; W32(esp, v); }
/* 733112: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 733114: mov ecx, esi */
  ecx = esi;
/* 733116: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x73311cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 73311c: imul eax, eax, 0x58 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x58u);
  eax = (uint32_t)r;
  }
/* 73311f: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 733121: je 0x73312f */
  if (zf) goto L_73312f;
L_733123: /* 733123: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 733125: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 733127: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 733128: mov ecx, eax */
  ecx = eax;
/* 73312a: call 0x6c9da4 */
  esp -= 4; W32(esp, 0x73312fu); SPILL(); f_6c9da4(); if (g_unwind) return; RELOAD();
L_73312f: /* 73312f: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 733132: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 733133: add ebp, 0x58 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 733136: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 733138: jl 0x733110 */
  if ((sf != of)) goto L_733110;
L_73313a: /* 73313a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_73313b: /* 73313b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 73313f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 733140: mov eax, esi */
  eax = esi;
/* 733142: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 733143: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 733144: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 73314b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 73314e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_733190(void) {
  LOAD_REGS();
L_733190: /* 733190: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 733191: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 733193: mov esi, ecx */
  esi = ecx;
/* 733195: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x73319bu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 73319b: mov eax, esi */
  eax = esi;
/* 73319d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73319e: ret  */
  esp += 4; SPILL(); return;
}

void f_7331b0(void) {
  LOAD_REGS();
L_7331b0: /* 7331b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7331b1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7331b3: mov esi, ecx */
  esi = ecx;
/* 7331b5: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x7331bbu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 7331bb: mov eax, esi */
  eax = esi;
/* 7331bd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7331be: ret  */
  esp += 4; SPILL(); return;
}

void f_7331d0(void) {
  LOAD_REGS();
L_7331d0: /* 7331d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7331d1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7331d3: mov esi, ecx */
  esi = ecx;
/* 7331d5: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x7331dbu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 7331db: mov eax, esi */
  eax = esi;
/* 7331dd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7331de: ret  */
  esp += 4; SPILL(); return;
}

void f_7331f0(void) {
  LOAD_REGS();
L_7331f0: /* 7331f0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7331f4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7331f5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7331f6: mov esi, ecx */
  esi = ecx;
/* 7331f8: call 0x6c6d57 */
  esp -= 4; W32(esp, 0x7331fdu); SPILL(); f_6c6d57(); if (g_unwind) return; RELOAD();
/* 7331fd: mov eax, esi */
  eax = esi;
/* 7331ff: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 733200: ret 4 */
  esp += 8; SPILL(); return;
}

void f_733220(void) {
  LOAD_REGS();
L_733220: /* 733220: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 733221: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 733223: mov esi, ecx */
  esi = ecx;
/* 733225: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x73322bu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 73322b: mov eax, esi */
  eax = esi;
/* 73322d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73322e: ret  */
  esp += 4; SPILL(); return;
}

void f_733240(void) {
  LOAD_REGS();
L_733240: /* 733240: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 733244: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 733245: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 733246: mov esi, ecx */
  esi = ecx;
/* 733248: call 0x6c4ac0 */
  esp -= 4; W32(esp, 0x73324du); SPILL(); f_6c4ac0(); if (g_unwind) return; RELOAD();
/* 73324d: mov eax, esi */
  eax = esi;
/* 73324f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 733250: ret 4 */
  esp += 8; SPILL(); return;
}

void f_733270(void) {
  LOAD_REGS();
L_733270: /* 733270: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 733271: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 733273: mov esi, ecx */
  esi = ecx;
/* 733275: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x73327bu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 73327b: mov eax, esi */
  eax = esi;
/* 73327d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73327e: ret  */
  esp += 4; SPILL(); return;
}

void f_733290(void) {
  LOAD_REGS();
L_733290: /* 733290: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 733291: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 733293: mov esi, ecx */
  esi = ecx;
/* 733295: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x73329bu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 73329b: mov eax, esi */
  eax = esi;
/* 73329d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73329e: ret  */
  esp += 4; SPILL(); return;
}
