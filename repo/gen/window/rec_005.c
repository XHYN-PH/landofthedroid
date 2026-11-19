#include "recomp.h"
#include "rec_mod.h"

void f_d9fd58(void) {
  LOAD_REGS();
L_d9fd58: /* d9fd58: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* d9fd5b: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d9fd60: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* d9fd63: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9fd64: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* d9fd67: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9fd6cu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d9fd6c(); return;
}

void f_d9fd6c(void) {
  LOAD_REGS();
L_d9fd6c: /* d9fd6c: push 0xdc39e0 */
  { uint32_t v = 0xdc39e0u; esp -= 4; W32(esp, v); }
/* d9fd71: push 0xde3124 */
  { uint32_t v = 0xde3124u; esp -= 4; W32(esp, v); }
/* d9fd76: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd9fd7cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d9fd7c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9fd7f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9fd81: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9fd83: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9fd88u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d9fd88: guest_badaddr(0xd9fd88); return;
}

void f_d9fe60(void) {
  LOAD_REGS();
L_d9fe60: /* d9fe60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9fe61: mov esi, ecx */
  esi = ecx;
/* d9fe63: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* d9fe66: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9fe68: je 0xd9fe71 */
  if (zf) goto L_d9fe71;
L_d9fe6a: /* d9fe6a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9fe6b: call dword ptr [0xde8c5c] */
  esp -= 4; W32(esp, 0xd9fe71u); SPILL(); call_ind(R32(0xde8c5cu)); if (g_unwind) return; /* GDI32!DeleteObject */ RELOAD();
L_d9fe71: /* d9fe71: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* d9fe75: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* d9fe78: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9fe79: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9fe7a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9fe7b: call 0xd811d1 */
  esp -= 4; W32(esp, 0xd9fe80u); SPILL(); f_d811d1(); if (g_unwind) return; RELOAD();
/* d9fe80: xor edx, edx */
  edx = 0;
/* d9fe82: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9fe85: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9fe87: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* d9fe8a: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* d9fe8d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9fe8e: mov eax, edx */
  eax = edx;
/* d9fe90: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d9feb0(void) {
  LOAD_REGS();
L_d9feb0: /* d9feb0: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* d9feb3: ret  */
  esp += 4; SPILL(); return;
}

void f_d9fed0(void) {
  LOAD_REGS();
L_d9fed0: /* d9fed0: mov eax, ecx */
  eax = ecx;
/* d9fed2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* d9fed6: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* d9fed8: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* d9fedb: xor ecx, ecx */
  ecx = 0;
/* d9fedd: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* d9fee0: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* d9fee3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d9ff00(void) {
  LOAD_REGS();
L_d9ff00: /* d9ff00: inc dword ptr [ecx + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ecx + 0x8u), r);
  }
/* d9ff03: ret  */
  esp += 4; SPILL(); return;
}

void f_d9ff20(void) {
  LOAD_REGS();
L_d9ff20: /* d9ff20: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* d9ff23: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* d9ff26: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9ff27: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* d9ff2a: xor edx, edx */
  edx = 0;
/* d9ff2c: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d9ff2e: setl dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)(((sf != of)) ? 1 : 0) & 0xffu);
/* d9ff31: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9ff32: mov eax, edx */
  eax = edx;
/* d9ff34: ret  */
  esp += 4; SPILL(); return;
}

void f_d9ff50(void) {
  LOAD_REGS();
L_d9ff50: /* d9ff50: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d9ff54: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* d9ff56: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* d9ff59: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* d9ff5c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d9ff70(void) {
  LOAD_REGS();
L_d9ff70: /* d9ff70: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* d9ff75: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d9ff77: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* d9ff7b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9ff7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9ff7e: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* d9ff82: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9ff83: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xd9ff85u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9ff85: ret  */
  esp += 4; SPILL(); return;
}

void f_d9ffa0(void) {
  LOAD_REGS();
L_d9ffa0: /* d9ffa0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d9ffa4: ret  */
  esp += 4; SPILL(); return;
}

void f_d9ffc0(void) {
  LOAD_REGS();
L_d9ffc0: /* d9ffc0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9ffc1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9ffc3: mov esi, ecx */
  esi = ecx;
/* d9ffc5: call dword ptr [0xde8e08] */
  esp -= 4; W32(esp, 0xd9ffcbu); SPILL(); call_ind(R32(0xde8e08u)); if (g_unwind) return; /* USER32!BeginDeferWindowPos */ RELOAD();
/* d9ffcb: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* d9ffcd: mov eax, esi */
  eax = esi;
/* d9ffcf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9ffd0: ret  */
  esp += 4; SPILL(); return;
}

void f_d9fff0(void) {
  LOAD_REGS();
L_d9fff0: /* d9fff0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d9fff2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9fff3: call dword ptr [0xde8e0c] */
  esp -= 4; W32(esp, 0xd9fff9u); SPILL(); call_ind(R32(0xde8e0cu)); if (g_unwind) return; /* USER32!EndDeferWindowPos */ RELOAD();
/* d9fff9: ret  */
  esp += 4; SPILL(); return;
}

void f_da0010(void) {
  LOAD_REGS();
L_da0010: /* da0010: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da0011: mov esi, ecx */
  esi = ecx;
/* da0013: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da0015: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da0016: call dword ptr [0xde8e0c] */
  esp -= 4; W32(esp, 0xda001cu); SPILL(); call_ind(R32(0xde8e0cu)); if (g_unwind) return; /* USER32!EndDeferWindowPos */ RELOAD();
/* da001c: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* da0021: je 0xda0031 */
  if (zf) goto L_da0031;
L_da0023: /* da0023: mov ecx, dword ptr [0xde88a4] */
  ecx = R32((uint32_t)(0xde88a4u));
/* da0029: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* da002b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* da002d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da002e: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xda0031u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_da0031: /* da0031: mov eax, esi */
  eax = esi;
/* da0033: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da0034: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da0050(void) {
  LOAD_REGS();
L_da0050: /* da0050: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* da0053: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* da0056: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* da0058: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* da005b: lea eax, [edx + eax*8 + 8] */
  eax = (uint32_t)(edx + eax*8 + 0x8u);
/* da005f: ret  */
  esp += 4; SPILL(); return;
}

void f_da0070(void) {
  LOAD_REGS();
L_da0070: /* da0070: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da0071: mov esi, ecx */
  esi = ecx;
/* da0073: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* da0076: mov ecx, dword ptr [0xde88a4] */
  ecx = R32((uint32_t)(0xde88a4u));
/* da007c: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* da007e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* da0080: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da0081: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* da0084: push 0xde3668 */
  { uint32_t v = 0xde3668u; esp -= 4; W32(esp, v); }
/* da0089: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da008a: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xda008cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da008c: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* da008f: mov edi, eax */
  edi = eax;
/* da0091: xor eax, eax */
  eax = 0;
/* da0093: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* da0095: jle 0xda00af */
  if ((zf || sf != of)) goto L_da00af;
L_da0097: /* da0097: jmp 0xda00a0 */
  goto L_da00a0;
L_da00a0: /* da00a0: mov dword ptr [edi + eax*4], 0xffffffff */
  W32((uint32_t)(edi + eax*4), 0xffffffffu);
/* da00a7: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* da00aa: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* da00ab: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da00ad: jl 0xda00a0 */
  if ((sf != of)) goto L_da00a0;
L_da00af: /* da00af: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* da00b2: xor edx, edx */
  edx = 0;
/* da00b4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* da00b6: jle 0xda00e3 */
  if ((zf || sf != of)) goto L_da00e3;
L_da00b8: /* da00b8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da00b9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* da00ba: xor ebx, ebx */
  ebx = 0;
/* da00bc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_da00c0: /* da00c0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da00c2: mov ebp, dword ptr [esi + 0x10] */
  ebp = R32((uint32_t)(esi + 0x10u));
/* da00c5: mov ecx, dword ptr [eax + ebx + 4] */
  ecx = R32((uint32_t)(eax + ebx + 0x4u));
/* da00c9: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* da00cb: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  ebp = r;
  }
/* da00cc: and ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* da00ce: mov ebp, dword ptr [edi + ecx*4] */
  ebp = R32((uint32_t)(edi + ecx*4));
/* da00d1: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
/* da00d3: mov dword ptr [edi + ecx*4], edx */
  W32((uint32_t)(edi + ecx*4), edx);
/* da00d6: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* da00d9: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* da00da: add ebx, 0x28 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* da00dd: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da00df: jl 0xda00c0 */
  if ((sf != of)) goto L_da00c0;
L_da00e1: /* da00e1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da00e2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_da00e3: /* da00e3: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* da00e6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da00e8: je 0xda00f8 */
  if (zf) goto L_da00f8;
L_da00ea: /* da00ea: mov ecx, dword ptr [0xde88a4] */
  ecx = R32((uint32_t)(0xde88a4u));
/* da00f0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* da00f2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* da00f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da00f5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xda00f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_da00f8: /* da00f8: mov dword ptr [esi + 0xc], edi */
  W32((uint32_t)(esi + 0xcu), edi);
/* da00fb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da00fc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da00fd: ret  */
  esp += 4; SPILL(); return;
}

void f_da0099(void) {
  LOAD_REGS();
L_da0099: /* da0099: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_da00a0: /* da00a0: mov dword ptr [edi + eax*4], 0xffffffff */
  W32((uint32_t)(edi + eax*4), 0xffffffffu);
/* da00a7: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* da00aa: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* da00ab: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da00ad: jl 0xda00a0 */
  if ((sf != of)) goto L_da00a0;
L_da00af: /* da00af: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* da00b2: xor edx, edx */
  edx = 0;
/* da00b4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* da00b6: jle 0xda00e3 */
  if ((zf || sf != of)) goto L_da00e3;
L_da00b8: /* da00b8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da00b9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* da00ba: xor ebx, ebx */
  ebx = 0;
/* da00bc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_da00c0: /* da00c0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da00c2: mov ebp, dword ptr [esi + 0x10] */
  ebp = R32((uint32_t)(esi + 0x10u));
/* da00c5: mov ecx, dword ptr [eax + ebx + 4] */
  ecx = R32((uint32_t)(eax + ebx + 0x4u));
/* da00c9: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* da00cb: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  ebp = r;
  }
/* da00cc: and ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* da00ce: mov ebp, dword ptr [edi + ecx*4] */
  ebp = R32((uint32_t)(edi + ecx*4));
/* da00d1: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
/* da00d3: mov dword ptr [edi + ecx*4], edx */
  W32((uint32_t)(edi + ecx*4), edx);
/* da00d6: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* da00d9: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* da00da: add ebx, 0x28 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* da00dd: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da00df: jl 0xda00c0 */
  if ((sf != of)) goto L_da00c0;
L_da00e1: /* da00e1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da00e2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_da00e3: /* da00e3: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* da00e6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da00e8: je 0xda00f8 */
  if (zf) goto L_da00f8;
L_da00ea: /* da00ea: mov ecx, dword ptr [0xde88a4] */
  ecx = R32((uint32_t)(0xde88a4u));
/* da00f0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* da00f2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* da00f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da00f5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xda00f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_da00f8: /* da00f8: mov dword ptr [esi + 0xc], edi */
  W32((uint32_t)(esi + 0xcu), edi);
/* da00fb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da00fc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da00fd: ret  */
  esp += 4; SPILL(); return;
}

void f_da0130(void) {
  LOAD_REGS();
L_da0130: /* da0130: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* da0133: lea edx, [eax + eax + 8] */
  edx = (uint32_t)(eax + eax + 0x8u);
/* da0137: cmp dword ptr [ecx + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da013a: jle 0xda0157 */
  if ((zf || sf != of)) goto L_da0157;
L_da013c: /* da013c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_da0140: /* da0140: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* da0143: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* da0144: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* da0146: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* da0148: mov dword ptr [ecx + 0x10], eax */
  W32((uint32_t)(ecx + 0x10u), eax);
/* da014b: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* da014e: lea edx, [eax + eax + 8] */
  edx = (uint32_t)(eax + eax + 0x8u);
/* da0152: cmp dword ptr [ecx + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da0155: jg 0xda0140 */
  if ((!zf && sf == of)) goto L_da0140;
L_da0157: /* da0157: jmp 0xd8110e */
  SPILL(); f_d8110e(); return;
}

void f_da0170(void) {
  LOAD_REGS();
L_da0170: /* da0170: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* da0173: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da0175: je 0xda01a1 */
  if (zf) goto L_da01a1;
L_da0177: /* da0177: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* da0179: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* da017c: lea edx, [eax + eax + 8] */
  edx = (uint32_t)(eax + eax + 0x8u);
/* da0180: cmp dword ptr [ecx + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da0183: jle 0xda019c */
  if ((zf || sf != of)) goto L_da019c;
L_da0185: /* da0185: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* da0188: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* da0189: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* da018b: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* da018d: mov dword ptr [ecx + 0x10], eax */
  W32((uint32_t)(ecx + 0x10u), eax);
/* da0190: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* da0193: lea edx, [eax + eax + 8] */
  edx = (uint32_t)(eax + eax + 0x8u);
/* da0197: cmp dword ptr [ecx + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da019a: jg 0xda0185 */
  if ((!zf && sf == of)) goto L_da0185;
L_da019c: /* da019c: jmp 0xd8110e */
  SPILL(); f_d8110e(); return;
L_da01a1: /* da01a1: ret  */
  esp += 4; SPILL(); return;
}

void f_da01c0(void) {
  LOAD_REGS();
L_da01c0: /* da01c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* da01c1: mov ebp, esp */
  ebp = esp;
/* da01c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* da01c5: push 0xdba258 */
  { uint32_t v = 0xdba258u; esp -= 4; W32(esp, v); }
/* da01ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* da01d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da01d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* da01d8: sub esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* da01db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da01dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da01dd: mov esi, ecx */
  esi = ecx;
/* da01df: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da01e1: xor ebx, ebx */
  ebx = 0;
/* da01e3: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da01e5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da01e6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* da01e9: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* da01ec: je 0xda03f9 */
  if (zf) goto L_da03f9;
L_da01f2: /* da01f2: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* da01f7: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* da01f9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* da01fb: push 0xde1db0 */
  { uint32_t v = 0xde1db0u; esp -= 4; W32(esp, v); }
/* da0200: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* da0202: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xda0204u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da0204: mov edi, eax */
  edi = eax;
/* da0206: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da0208: je 0xda0218 */
  if (zf) goto L_da0218;
L_da020a: /* da020a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* da020c: call dword ptr [0xde8e08] */
  esp -= 4; W32(esp, 0xda0212u); SPILL(); call_ind(R32(0xde8e08u)); if (g_unwind) return; /* USER32!BeginDeferWindowPos */ RELOAD();
/* da0212: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* da0214: mov eax, edi */
  eax = edi;
/* da0216: jmp 0xda021a */
  goto L_da021a;
L_da0218: /* da0218: xor eax, eax */
  eax = 0;
L_da021a: /* da021a: mov edi, eax */
  edi = eax;
/* da021c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da021e: xor ecx, ecx */
  ecx = 0;
/* da0220: mov esi, eax */
  esi = eax;
/* da0222: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* da0225: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* da0228: mov dword ptr [ebp - 0x50], esi */
  W32((uint32_t)(ebp + 0xffffffb0u), esi);
/* da022b: mov dword ptr [ebp - 0x4c], eax */
  W32((uint32_t)(ebp + 0xffffffb4u), eax);
/* da022e: mov dword ptr [ebp - 0x48], ebx */
  W32((uint32_t)(ebp + 0xffffffb8u), ebx);
/* da0231: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* da0234: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* da0238: jmp 0xda0240 */
  goto L_da0240;
L_da0240: /* da0240: cmp ebx, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da0243: jge 0xda03ac */
  if ((sf == of)) goto L_da03ac;
L_da0249: /* da0249: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* da024b: lea edx, [ebx + ebx*4] */
  edx = (uint32_t)(ebx + ebx*4);
/* da024e: lea esi, [eax + edx*8 + 8] */
  esi = (uint32_t)(eax + edx*8 + 0x8u);
/* da0252: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da0254: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da0256: je 0xda02a6 */
  if (zf) goto L_da02a6;
L_da0258: /* da0258: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da025a: je 0xda02a1 */
  if (zf) goto L_da02a1;
L_da025c: /* da025c: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da025e: je 0xda0277 */
  if (zf) goto L_da0277;
L_da0260: /* da0260: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* da0262: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da0263: call dword ptr [0xde8e0c] */
  esp -= 4; W32(esp, 0xda0269u); SPILL(); call_ind(R32(0xde8e0cu)); if (g_unwind) return; /* USER32!EndDeferWindowPos */ RELOAD();
/* da0269: mov edx, dword ptr [0xde88a4] */
  edx = R32((uint32_t)(0xde88a4u));
/* da026f: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* da0271: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* da0273: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da0274: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0xda0277u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_da0277: /* da0277: mov ecx, dword ptr [0xde88a4] */
  ecx = R32((uint32_t)(0xde88a4u));
/* da027d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* da027f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* da0281: push 0xde1db0 */
  { uint32_t v = 0xde1db0u; esp -= 4; W32(esp, v); }
/* da0286: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* da0288: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xda028au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da028a: mov edi, eax */
  edi = eax;
/* da028c: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da028e: je 0xda029c */
  if (zf) goto L_da029c;
L_da0290: /* da0290: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* da0292: call dword ptr [0xde8e08] */
  esp -= 4; W32(esp, 0xda0298u); SPILL(); call_ind(R32(0xde8e08u)); if (g_unwind) return; /* USER32!BeginDeferWindowPos */ RELOAD();
/* da0298: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* da029a: jmp 0xda029e */
  goto L_da029e;
L_da029c: /* da029c: xor edi, edi */
  edi = 0;
L_da029e: /* da029e: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
L_da02a1: /* da02a1: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da02a3: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
L_da02a6: /* da02a6: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* da02a9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da02aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da02ab: call dword ptr [0xde8f60] */
  esp -= 4; W32(esp, 0xda02b1u); SPILL(); call_ind(R32(0xde8f60u)); if (g_unwind) return; /* USER32!GetClientRect */ RELOAD();
/* da02b1: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* da02b4: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* da02b7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da02b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da02b9: call dword ptr [0xde8f1c] */
  esp -= 4; W32(esp, 0xda02bfu); SPILL(); call_ind(R32(0xde8f1cu)); if (g_unwind) return; /* USER32!GetWindowRect */ RELOAD();
/* da02bf: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* da02c1: mov edi, dword ptr [0xde8f20] */
  edi = R32((uint32_t)(0xde8f20u));
/* da02c7: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* da02ca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da02cb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da02cc: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xda02ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da02ce: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* da02d0: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* da02d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da02d4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da02d5: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xda02d7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da02d7: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* da02da: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* da02dc: je 0xda02e9 */
  if (zf) goto L_da02e9;
L_da02de: /* da02de: mov edi, dword ptr [esi + 0xc] */
  edi = R32((uint32_t)(esi + 0xcu));
/* da02e1: add edi, dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* da02e4: mov dword ptr [ebp - 0x30], edi */
  W32((uint32_t)(ebp + 0xffffffd0u), edi);
/* da02e7: jmp 0xda02fb */
  goto L_da02fb;
L_da02e9: /* da02e9: test al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* da02eb: je 0xda02f8 */
  if (zf) goto L_da02f8;
L_da02ed: /* da02ed: mov edi, dword ptr [esi + 0xc] */
  edi = R32((uint32_t)(esi + 0xcu));
/* da02f0: add edi, dword ptr [ebp - 0x38] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* da02f3: mov dword ptr [ebp - 0x30], edi */
  W32((uint32_t)(ebp + 0xffffffd0u), edi);
/* da02f6: jmp 0xda02fb */
  goto L_da02fb;
L_da02f8: /* da02f8: mov edi, dword ptr [ebp - 0x30] */
  edi = R32((uint32_t)(ebp + 0xffffffd0u));
L_da02fb: /* da02fb: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* da02fe: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* da0300: je 0xda030d */
  if (zf) goto L_da030d;
L_da0302: /* da0302: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* da0305: add edx, dword ptr [ebp - 0x3c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc4u)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* da0308: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* da030b: jmp 0xda031f */
  goto L_da031f;
L_da030d: /* da030d: test al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* da030f: je 0xda031c */
  if (zf) goto L_da031c;
L_da0311: /* da0311: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* da0314: add edx, dword ptr [ebp - 0x34] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* da0317: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* da031a: jmp 0xda031f */
  goto L_da031f;
L_da031c: /* da031c: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
L_da031f: /* da031f: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* da0322: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* da0324: je 0xda0330 */
  if (zf) goto L_da0330;
L_da0326: /* da0326: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* da0329: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* da032b: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* da032e: jmp 0xda0351 */
  goto L_da0351;
L_da0330: /* da0330: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* da0332: je 0xda033f */
  if (zf) goto L_da033f;
L_da0334: /* da0334: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* da0337: add ecx, dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* da033a: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* da033d: jmp 0xda0351 */
  goto L_da0351;
L_da033f: /* da033f: test al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* da0341: je 0xda034e */
  if (zf) goto L_da034e;
L_da0343: /* da0343: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* da0346: add ecx, dword ptr [ebp - 0x38] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* da0349: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* da034c: jmp 0xda0351 */
  goto L_da0351;
L_da034e: /* da034e: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
L_da0351: /* da0351: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* da0354: test al, 0x20 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* da0356: je 0xda0362 */
  if (zf) goto L_da0362;
L_da0358: /* da0358: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* da035b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* da035d: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* da0360: jmp 0xda0383 */
  goto L_da0383;
L_da0362: /* da0362: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* da0364: je 0xda0371 */
  if (zf) goto L_da0371;
L_da0366: /* da0366: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* da0369: add eax, dword ptr [ebp - 0x3c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc4u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* da036c: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* da036f: jmp 0xda0383 */
  goto L_da0383;
L_da0371: /* da0371: test al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* da0373: je 0xda0380 */
  if (zf) goto L_da0380;
L_da0375: /* da0375: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* da0378: add eax, dword ptr [ebp - 0x34] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* da037b: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* da037e: jmp 0xda0383 */
  goto L_da0383;
L_da0380: /* da0380: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
L_da0383: /* da0383: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* da0385: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* da0387: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da0388: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* da038a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da038b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da038c: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* da038f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da0390: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da0391: call dword ptr [0xde8f48] */
  esp -= 4; W32(esp, 0xda0397u); SPILL(); call_ind(R32(0xde8f48u)); if (g_unwind) return; /* USER32!MoveWindow */ RELOAD();
/* da0397: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* da039a: mov esi, dword ptr [ebp - 0x50] */
  esi = R32((uint32_t)(ebp + 0xffffffb0u));
/* da039d: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* da03a0: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* da03a3: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* da03a4: mov dword ptr [ebp - 0x48], ebx */
  W32((uint32_t)(ebp + 0xffffffb8u), ebx);
/* da03a7: jmp 0xda0240 */
  goto L_da0240;
L_da03ac: /* da03ac: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* da03af: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da03b1: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* da03b5: je 0xda03df */
  if (zf) goto L_da03df;
L_da03b7: /* da03b7: jmp 0xda03c0 */
  goto L_da03c0;
L_da03c0: /* da03c0: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* da03c3: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* da03c6: lea ecx, [ecx + ecx + 8] */
  ecx = (uint32_t)(ecx + ecx + 0x8u);
/* da03ca: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da03cc: jle 0xda03d8 */
  if ((zf || sf != of)) goto L_da03d8;
L_da03ce: /* da03ce: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* da03cf: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* da03d1: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* da03d3: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* da03d6: jmp 0xda03c0 */
  goto L_da03c0;
L_da03d8: /* da03d8: mov ecx, esi */
  ecx = esi;
/* da03da: call 0xd8110e */
  esp -= 4; W32(esp, 0xda03dfu); SPILL(); f_d8110e(); if (g_unwind) return; RELOAD();
L_da03df: /* da03df: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da03e1: je 0xda03f9 */
  if (zf) goto L_da03f9;
L_da03e3: /* da03e3: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* da03e5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da03e6: call dword ptr [0xde8e0c] */
  esp -= 4; W32(esp, 0xda03ecu); SPILL(); call_ind(R32(0xde8e0cu)); if (g_unwind) return; /* USER32!EndDeferWindowPos */ RELOAD();
/* da03ec: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* da03f1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* da03f3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* da03f5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da03f6: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xda03f9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_da03f9: /* da03f9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da03fc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da03fd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da03fe: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da0405: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da0406: mov esp, ebp */
  esp = ebp;
/* da0408: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da0409: ret  */
  esp += 4; SPILL(); return;
}

void f_da023a(void) {
  LOAD_REGS();
L_da023a: /* da023a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_da0240: /* da0240: cmp ebx, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da0243: jge 0xda03ac */
  if ((sf == of)) goto L_da03ac;
L_da0249: /* da0249: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* da024b: lea edx, [ebx + ebx*4] */
  edx = (uint32_t)(ebx + ebx*4);
/* da024e: lea esi, [eax + edx*8 + 8] */
  esi = (uint32_t)(eax + edx*8 + 0x8u);
/* da0252: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da0254: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da0256: je 0xda02a6 */
  if (zf) goto L_da02a6;
L_da0258: /* da0258: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da025a: je 0xda02a1 */
  if (zf) goto L_da02a1;
L_da025c: /* da025c: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da025e: je 0xda0277 */
  if (zf) goto L_da0277;
L_da0260: /* da0260: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* da0262: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da0263: call dword ptr [0xde8e0c] */
  esp -= 4; W32(esp, 0xda0269u); SPILL(); call_ind(R32(0xde8e0cu)); if (g_unwind) return; /* USER32!EndDeferWindowPos */ RELOAD();
/* da0269: mov edx, dword ptr [0xde88a4] */
  edx = R32((uint32_t)(0xde88a4u));
/* da026f: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* da0271: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* da0273: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da0274: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0xda0277u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_da0277: /* da0277: mov ecx, dword ptr [0xde88a4] */
  ecx = R32((uint32_t)(0xde88a4u));
/* da027d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* da027f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* da0281: push 0xde1db0 */
  { uint32_t v = 0xde1db0u; esp -= 4; W32(esp, v); }
/* da0286: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* da0288: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xda028au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da028a: mov edi, eax */
  edi = eax;
/* da028c: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da028e: je 0xda029c */
  if (zf) goto L_da029c;
L_da0290: /* da0290: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* da0292: call dword ptr [0xde8e08] */
  esp -= 4; W32(esp, 0xda0298u); SPILL(); call_ind(R32(0xde8e08u)); if (g_unwind) return; /* USER32!BeginDeferWindowPos */ RELOAD();
/* da0298: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* da029a: jmp 0xda029e */
  goto L_da029e;
L_da029c: /* da029c: xor edi, edi */
  edi = 0;
L_da029e: /* da029e: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
L_da02a1: /* da02a1: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da02a3: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
L_da02a6: /* da02a6: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* da02a9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da02aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da02ab: call dword ptr [0xde8f60] */
  esp -= 4; W32(esp, 0xda02b1u); SPILL(); call_ind(R32(0xde8f60u)); if (g_unwind) return; /* USER32!GetClientRect */ RELOAD();
/* da02b1: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* da02b4: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* da02b7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da02b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da02b9: call dword ptr [0xde8f1c] */
  esp -= 4; W32(esp, 0xda02bfu); SPILL(); call_ind(R32(0xde8f1cu)); if (g_unwind) return; /* USER32!GetWindowRect */ RELOAD();
/* da02bf: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* da02c1: mov edi, dword ptr [0xde8f20] */
  edi = R32((uint32_t)(0xde8f20u));
/* da02c7: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* da02ca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da02cb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da02cc: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xda02ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da02ce: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* da02d0: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* da02d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da02d4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da02d5: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xda02d7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da02d7: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* da02da: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* da02dc: je 0xda02e9 */
  if (zf) goto L_da02e9;
L_da02de: /* da02de: mov edi, dword ptr [esi + 0xc] */
  edi = R32((uint32_t)(esi + 0xcu));
/* da02e1: add edi, dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* da02e4: mov dword ptr [ebp - 0x30], edi */
  W32((uint32_t)(ebp + 0xffffffd0u), edi);
/* da02e7: jmp 0xda02fb */
  goto L_da02fb;
L_da02e9: /* da02e9: test al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* da02eb: je 0xda02f8 */
  if (zf) goto L_da02f8;
L_da02ed: /* da02ed: mov edi, dword ptr [esi + 0xc] */
  edi = R32((uint32_t)(esi + 0xcu));
/* da02f0: add edi, dword ptr [ebp - 0x38] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* da02f3: mov dword ptr [ebp - 0x30], edi */
  W32((uint32_t)(ebp + 0xffffffd0u), edi);
/* da02f6: jmp 0xda02fb */
  goto L_da02fb;
L_da02f8: /* da02f8: mov edi, dword ptr [ebp - 0x30] */
  edi = R32((uint32_t)(ebp + 0xffffffd0u));
L_da02fb: /* da02fb: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* da02fe: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* da0300: je 0xda030d */
  if (zf) goto L_da030d;
L_da0302: /* da0302: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* da0305: add edx, dword ptr [ebp - 0x3c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc4u)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* da0308: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* da030b: jmp 0xda031f */
  goto L_da031f;
L_da030d: /* da030d: test al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* da030f: je 0xda031c */
  if (zf) goto L_da031c;
L_da0311: /* da0311: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* da0314: add edx, dword ptr [ebp - 0x34] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* da0317: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* da031a: jmp 0xda031f */
  goto L_da031f;
L_da031c: /* da031c: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
L_da031f: /* da031f: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* da0322: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* da0324: je 0xda0330 */
  if (zf) goto L_da0330;
L_da0326: /* da0326: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* da0329: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* da032b: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* da032e: jmp 0xda0351 */
  goto L_da0351;
L_da0330: /* da0330: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* da0332: je 0xda033f */
  if (zf) goto L_da033f;
L_da0334: /* da0334: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* da0337: add ecx, dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* da033a: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* da033d: jmp 0xda0351 */
  goto L_da0351;
L_da033f: /* da033f: test al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* da0341: je 0xda034e */
  if (zf) goto L_da034e;
L_da0343: /* da0343: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* da0346: add ecx, dword ptr [ebp - 0x38] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* da0349: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* da034c: jmp 0xda0351 */
  goto L_da0351;
L_da034e: /* da034e: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
L_da0351: /* da0351: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* da0354: test al, 0x20 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* da0356: je 0xda0362 */
  if (zf) goto L_da0362;
L_da0358: /* da0358: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* da035b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* da035d: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* da0360: jmp 0xda0383 */
  goto L_da0383;
L_da0362: /* da0362: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* da0364: je 0xda0371 */
  if (zf) goto L_da0371;
L_da0366: /* da0366: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* da0369: add eax, dword ptr [ebp - 0x3c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc4u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* da036c: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* da036f: jmp 0xda0383 */
  goto L_da0383;
L_da0371: /* da0371: test al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* da0373: je 0xda0380 */
  if (zf) goto L_da0380;
L_da0375: /* da0375: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* da0378: add eax, dword ptr [ebp - 0x34] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* da037b: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* da037e: jmp 0xda0383 */
  goto L_da0383;
L_da0380: /* da0380: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
L_da0383: /* da0383: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* da0385: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* da0387: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da0388: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* da038a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da038b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da038c: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* da038f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da0390: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da0391: call dword ptr [0xde8f48] */
  esp -= 4; W32(esp, 0xda0397u); SPILL(); call_ind(R32(0xde8f48u)); if (g_unwind) return; /* USER32!MoveWindow */ RELOAD();
/* da0397: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* da039a: mov esi, dword ptr [ebp - 0x50] */
  esi = R32((uint32_t)(ebp + 0xffffffb0u));
/* da039d: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* da03a0: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* da03a3: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* da03a4: mov dword ptr [ebp - 0x48], ebx */
  W32((uint32_t)(ebp + 0xffffffb8u), ebx);
/* da03a7: jmp 0xda0240 */
  goto L_da0240;
L_da03ac: /* da03ac: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* da03af: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da03b1: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* da03b5: je 0xda03df */
  if (zf) goto L_da03df;
L_da03b7: /* da03b7: jmp 0xda03c0 */
  goto L_da03c0;
L_da03c0: /* da03c0: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* da03c3: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* da03c6: lea ecx, [ecx + ecx + 8] */
  ecx = (uint32_t)(ecx + ecx + 0x8u);
/* da03ca: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da03cc: jle 0xda03d8 */
  if ((zf || sf != of)) goto L_da03d8;
L_da03ce: /* da03ce: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* da03cf: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* da03d1: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* da03d3: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* da03d6: jmp 0xda03c0 */
  goto L_da03c0;
L_da03d8: /* da03d8: mov ecx, esi */
  ecx = esi;
/* da03da: call 0xd8110e */
  esp -= 4; W32(esp, 0xda03dfu); SPILL(); f_d8110e(); if (g_unwind) return; RELOAD();
L_da03df: /* da03df: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da03e1: je 0xda03f9 */
  if (zf) goto L_da03f9;
L_da03e3: /* da03e3: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* da03e5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da03e6: call dword ptr [0xde8e0c] */
  esp -= 4; W32(esp, 0xda03ecu); SPILL(); call_ind(R32(0xde8e0cu)); if (g_unwind) return; /* USER32!EndDeferWindowPos */ RELOAD();
/* da03ec: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* da03f1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* da03f3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* da03f5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da03f6: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xda03f9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_da03f9: /* da03f9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da03fc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da03fd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da03fe: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da0405: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da0406: mov esp, ebp */
  esp = ebp;
/* da0408: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da0409: ret  */
  esp += 4; SPILL(); return;
}

void f_da03b9(void) {
  LOAD_REGS();
L_da03b9: /* da03b9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_da03c0: /* da03c0: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* da03c3: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* da03c6: lea ecx, [ecx + ecx + 8] */
  ecx = (uint32_t)(ecx + ecx + 0x8u);
/* da03ca: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da03cc: jle 0xda03d8 */
  if ((zf || sf != of)) goto L_da03d8;
L_da03ce: /* da03ce: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* da03cf: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* da03d1: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* da03d3: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* da03d6: jmp 0xda03c0 */
  goto L_da03c0;
L_da03d8: /* da03d8: mov ecx, esi */
  ecx = esi;
/* da03da: call 0xd8110e */
  esp -= 4; W32(esp, 0xda03dfu); SPILL(); f_d8110e(); if (g_unwind) return; RELOAD();
/* da03df: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da03e1: je 0xda03f9 */
  if (zf) goto L_da03f9;
L_da03e3: /* da03e3: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* da03e5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da03e6: call dword ptr [0xde8e0c] */
  esp -= 4; W32(esp, 0xda03ecu); SPILL(); call_ind(R32(0xde8e0cu)); if (g_unwind) return; /* USER32!EndDeferWindowPos */ RELOAD();
/* da03ec: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* da03f1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* da03f3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* da03f5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da03f6: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xda03f9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_da03f9: /* da03f9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da03fc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da03fd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da03fe: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da0405: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da0406: mov esp, ebp */
  esp = ebp;
/* da0408: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da0409: ret  */
  esp += 4; SPILL(); return;
}

void f_da040a(void) {
  LOAD_REGS();
L_da040a: /* da040a: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* da040d: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* da0412: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* da0415: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da0416: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* da0419: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda041eu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_da041e(); return;
}

void f_da041e(void) {
  LOAD_REGS();
L_da041e: /* da041e: push 0xdc3a14 */
  { uint32_t v = 0xdc3a14u; esp -= 4; W32(esp, v); }
/* da0423: push 0xde365c */
  { uint32_t v = 0xde365cu; esp -= 4; W32(esp, v); }
/* da0428: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xda042eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* da042e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da0431: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da0433: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da0435: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda043au); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_da043a: guest_badaddr(0xda043a); return;
}

void f_da04e0(void) {
  LOAD_REGS();
L_da04e0: /* da04e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da04e1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da04e2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* da04e6: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da04e8: mov esi, ecx */
  esi = ecx;
/* da04ea: jne 0xda0501 */
  if (!zf) goto L_da0501;
L_da04ec: /* da04ec: push 0x29 */
  { uint32_t v = 0x29u; esp -= 4; W32(esp, v); }
/* da04ee: push 0xde3644 */
  { uint32_t v = 0xde3644u; esp -= 4; W32(esp, v); }
/* da04f3: push 0xde3650 */
  { uint32_t v = 0xde3650u; esp -= 4; W32(esp, v); }
/* da04f8: call dword ptr [0xde88a8] */
  esp -= 4; W32(esp, 0xda04feu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* da04fe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_da0501: /* da0501: mov ecx, esi */
  ecx = esi;
/* da0503: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* da0505: call 0xd8267b */
  esp -= 4; W32(esp, 0xda050au); SPILL(); f_d8267b(); if (g_unwind) return; RELOAD();
/* da050a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da050b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da050c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da0520(void) {
  LOAD_REGS();
L_da0520: /* da0520: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* da0524: mov dword ptr [0xde5034], eax */
  W32((uint32_t)(0xde5034u), eax);
/* da0529: mov eax, 1 */
  eax = 0x1u;
/* da052e: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_da0550(void) {
  LOAD_REGS();
L_da0550: /* da0550: mov eax, 0xde51f0 */
  eax = 0xde51f0u;
/* da0555: ret  */
  esp += 4; SPILL(); return;
}

void f_da0570(void) {
  LOAD_REGS();
L_da0570: /* da0570: mov eax, dword ptr [0xde89ac] */
  eax = R32((uint32_t)(0xde89acu));
/* da0575: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* da0577: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* da057b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* da057f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da0581: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da0583: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da0584: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* da0588: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da058a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da058b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da058c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da058d: push 0xde51f0 */
  { uint32_t v = 0xde51f0u; esp -= 4; W32(esp, v); }
/* da0592: call dword ptr [0xde8a58] */
  esp -= 4; W32(esp, 0xda0598u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* da0598: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da059b: ret  */
  esp += 4; SPILL(); return;
}

void f_da05b0(void) {
  LOAD_REGS();
L_da05b0: /* da05b0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* da05b4: ret  */
  esp += 4; SPILL(); return;
}

void f_da05d0(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_da05d0: /* da05d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* da05d1: mov ebp, esp */
  ebp = esp;
/* da05d3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da05d4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da05d5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da05d6: mov eax, dword ptr [0xde8a5c] */
  eax = R32((uint32_t)(0xde8a5cu));
/* da05db: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da05de: je 0xda07b4 */
  if (zf) goto L_da07b4;
L_da05e4: /* da05e4: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* da05e7: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* da05ea: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* da05ed: mov ebx, ecx */
  ebx = ecx;
/* da05ef: cld  */
  DF = 0;
/* da05f0: cmp ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* da05f3: jb 0xda0690 */
  if (cf) goto L_da0690;
L_da05f9: /* da05f9: cmp ecx, 0x8000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* da05ff: jbe 0xda0609 */
  if ((cf | zf)) goto L_da0609;
L_da0601: /* da0601: cmp ecx, 0x10000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* da0607: jbe 0xda0628 */
  if ((cf | zf)) goto L_da0628;
L_da0609: /* da0609: mov ecx, 8 */
  ecx = 0x8u;
/* da060e: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* da0610: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* da0613: sub ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* da0615: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
/* da0617: add ecx, 0xda0628 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xda0628u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* da061d: jmp ecx */
  { uint32_t t = ecx; SPILL(); call_ind(t); return; }
L_da0628: /* da0628: mov ecx, ebx */
  ecx = ebx;
/* da062a: shr ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  zf = r == 0;
  ecx = r;
  }
/* da062d: je 0xda068e */
  if (zf) goto L_da068e;
L_da062f: /* da062f: cmp ecx, 0x400 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* da0635: jae 0xda06a0 */
  if (!cf) goto L_da06a0;
L_da0637: /* da0637: jmp 0xda0640 */
  goto L_da0640;
L_da0640: /* da0640: prefetchnta byte ptr [esi + 0x238] */
  guest_unsupported(0xda0640); /* prefetchnta byte ptr [esi + 0x238] */
/* da0647: movq mm0, qword ptr [esi] */
  MMX[0] = R64((uint32_t)(esi));
/* da064a: movq mm1, qword ptr [esi + 8] */
  MMX[1] = R64((uint32_t)(esi + 0x8u));
/* da064e: movq qword ptr [edi], mm0 */
  W64((uint32_t)(edi), MMX[0]);
/* da0651: movq qword ptr [edi + 8], mm1 */
  W64((uint32_t)(edi + 0x8u), MMX[1]);
/* da0655: movq mm2, qword ptr [esi + 0x10] */
  MMX[2] = R64((uint32_t)(esi + 0x10u));
/* da0659: movq mm3, qword ptr [esi + 0x18] */
  MMX[3] = R64((uint32_t)(esi + 0x18u));
/* da065d: movq qword ptr [edi + 0x10], mm2 */
  W64((uint32_t)(edi + 0x10u), MMX[2]);
/* da0661: movq qword ptr [edi + 0x18], mm3 */
  W64((uint32_t)(edi + 0x18u), MMX[3]);
/* da0665: movq mm0, qword ptr [esi + 0x20] */
  MMX[0] = R64((uint32_t)(esi + 0x20u));
/* da0669: movq mm1, qword ptr [esi + 0x28] */
  MMX[1] = R64((uint32_t)(esi + 0x28u));
/* da066d: movq qword ptr [edi + 0x20], mm0 */
  W64((uint32_t)(edi + 0x20u), MMX[0]);
/* da0671: movq qword ptr [edi + 0x28], mm1 */
  W64((uint32_t)(edi + 0x28u), MMX[1]);
/* da0675: movq mm2, qword ptr [esi + 0x30] */
  MMX[2] = R64((uint32_t)(esi + 0x30u));
/* da0679: movq mm3, qword ptr [esi + 0x38] */
  MMX[3] = R64((uint32_t)(esi + 0x38u));
/* da067d: movq qword ptr [edi + 0x30], mm2 */
  W64((uint32_t)(edi + 0x30u), MMX[2]);
/* da0681: movq qword ptr [edi + 0x38], mm3 */
  W64((uint32_t)(edi + 0x38u), MMX[3]);
/* da0685: add esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* da0688: add edi, 0x40 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* da068b: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* da068c: jne 0xda0640 */
  if (!zf) goto L_da0640;
L_da068e: /* da068e: mov ecx, ebx */
  ecx = ebx;
L_da0690: /* da0690: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* da0693: and ecx, 0xf */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* da0696: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
/* da0698: add ecx, 0xda07a4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xda07a4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* da069e: jmp ecx */
  { uint32_t t = ecx; SPILL(); call_ind(t); return; }
L_da06a0: /* da06a0: cmp ecx, 0xc50 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xc50u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* da06a6: jae 0xda0701 */
  if (!cf) goto L_da0701;
L_da06a8: /* da06a8: or ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  ecx = r;
  }
/* da06aa: je 0xda068e */
  if (zf) goto L_da068e;
L_da06ac: /* da06ac: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_da06b0: /* da06b0: prefetchnta byte ptr [esi + 0x238] */
  guest_unsupported(0xda06b0); /* prefetchnta byte ptr [esi + 0x238] */
/* da06b7: movq mm0, qword ptr [esi] */
  MMX[0] = R64((uint32_t)(esi));
/* da06ba: add edi, 0x40 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* da06bd: movq mm1, qword ptr [esi + 8] */
  MMX[1] = R64((uint32_t)(esi + 0x8u));
/* da06c1: add esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* da06c4: movq mm2, qword ptr [esi - 0x30] */
  MMX[2] = R64((uint32_t)(esi + 0xffffffd0u));
/* da06c8: movntq qword ptr [edi - 0x40], mm0 */
  guest_unsupported(0xda06c8); /* movntq qword ptr [edi - 0x40], mm0 */
/* da06cc: movq mm0, qword ptr [esi - 0x28] */
  MMX[0] = R64((uint32_t)(esi + 0xffffffd8u));
/* da06d0: movntq qword ptr [edi - 0x38], mm1 */
  guest_unsupported(0xda06d0); /* movntq qword ptr [edi - 0x38], mm1 */
/* da06d4: movq mm1, qword ptr [esi - 0x20] */
  MMX[1] = R64((uint32_t)(esi + 0xffffffe0u));
/* da06d8: movntq qword ptr [edi - 0x30], mm2 */
  guest_unsupported(0xda06d8); /* movntq qword ptr [edi - 0x30], mm2 */
/* da06dc: movq mm2, qword ptr [esi - 0x18] */
  MMX[2] = R64((uint32_t)(esi + 0xffffffe8u));
/* da06e0: movntq qword ptr [edi - 0x28], mm0 */
  guest_unsupported(0xda06e0); /* movntq qword ptr [edi - 0x28], mm0 */
/* da06e4: movq mm0, qword ptr [esi - 0x10] */
  MMX[0] = R64((uint32_t)(esi + 0xfffffff0u));
/* da06e8: movntq qword ptr [edi - 0x20], mm1 */
  guest_unsupported(0xda06e8); /* movntq qword ptr [edi - 0x20], mm1 */
/* da06ec: movq mm1, qword ptr [esi - 8] */
  MMX[1] = R64((uint32_t)(esi + 0xfffffff8u));
/* da06f0: movntq qword ptr [edi - 0x18], mm2 */
  guest_unsupported(0xda06f0); /* movntq qword ptr [edi - 0x18], mm2 */
/* da06f4: movntq qword ptr [edi - 0x10], mm0 */
  guest_unsupported(0xda06f4); /* movntq qword ptr [edi - 0x10], mm0 */
/* da06f8: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* da06f9: movntq qword ptr [edi - 8], mm1 */
  guest_unsupported(0xda06f9); /* movntq qword ptr [edi - 8], mm1 */
/* da06fd: jne 0xda06b0 */
  if (!zf) goto L_da06b0;
L_da06ff: /* da06ff: jmp 0xda068e */
  goto L_da068e;
L_da0701: /* da0701: cmp ecx, 0x80 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da0707: jl 0xda06a8 */
  if ((sf != of)) goto L_da06a8;
L_da0709: /* da0709: mov eax, 0x40 */
  eax = 0x40u;
/* da070e: add esi, 0x2000 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2000u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* da0714: jmp 0xda0720 */
  goto L_da0720;
L_da0720: /* da0720: mov edx, dword ptr [esi - 0x40] */
  edx = R32((uint32_t)(esi + 0xffffffc0u));
/* da0723: mov edx, dword ptr [esi - 0x80] */
  edx = R32((uint32_t)(esi + 0xffffff80u));
/* da0726: sub esi, 0x80 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* da072c: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* da072d: jne 0xda0720 */
  if (!zf) goto L_da0720;
L_da072f: /* da072f: mov eax, 0x80 */
  eax = 0x80u;
/* da0734: jmp 0xda0740 */
  goto L_da0740;
L_da0740: /* da0740: movq mm0, qword ptr [esi] */
  MMX[0] = R64((uint32_t)(esi));
/* da0743: movq mm1, qword ptr [esi + 8] */
  MMX[1] = R64((uint32_t)(esi + 0x8u));
/* da0747: movq mm2, qword ptr [esi + 0x10] */
  MMX[2] = R64((uint32_t)(esi + 0x10u));
/* da074b: movq mm3, qword ptr [esi + 0x18] */
  MMX[3] = R64((uint32_t)(esi + 0x18u));
/* da074f: movq mm4, qword ptr [esi + 0x20] */
  MMX[4] = R64((uint32_t)(esi + 0x20u));
/* da0753: movq mm5, qword ptr [esi + 0x28] */
  MMX[5] = R64((uint32_t)(esi + 0x28u));
/* da0757: movq mm6, qword ptr [esi + 0x30] */
  MMX[6] = R64((uint32_t)(esi + 0x30u));
/* da075b: movq mm7, qword ptr [esi + 0x38] */
  MMX[7] = R64((uint32_t)(esi + 0x38u));
/* da075f: add esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* da0762: movntq qword ptr [edi], mm0 */
  guest_unsupported(0xda0762); /* movntq qword ptr [edi], mm0 */
/* da0765: movntq qword ptr [edi + 8], mm1 */
  guest_unsupported(0xda0765); /* movntq qword ptr [edi + 8], mm1 */
/* da0769: movntq qword ptr [edi + 0x10], mm2 */
  guest_unsupported(0xda0769); /* movntq qword ptr [edi + 0x10], mm2 */
/* da076d: movntq qword ptr [edi + 0x18], mm3 */
  guest_unsupported(0xda076d); /* movntq qword ptr [edi + 0x18], mm3 */
/* da0771: movntq qword ptr [edi + 0x20], mm4 */
  guest_unsupported(0xda0771); /* movntq qword ptr [edi + 0x20], mm4 */
/* da0775: movntq qword ptr [edi + 0x28], mm5 */
  guest_unsupported(0xda0775); /* movntq qword ptr [edi + 0x28], mm5 */
/* da0779: movntq qword ptr [edi + 0x30], mm6 */
  guest_unsupported(0xda0779); /* movntq qword ptr [edi + 0x30], mm6 */
/* da077d: movntq qword ptr [edi + 0x38], mm7 */
  guest_unsupported(0xda077d); /* movntq qword ptr [edi + 0x38], mm7 */
/* da0781: add edi, 0x40 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* da0784: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* da0785: jne 0xda0740 */
  if (!zf) goto L_da0740;
L_da0787: /* da0787: sub ecx, 0x80 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* da078d: jmp 0xda0701 */
  goto L_da0701;
L_da07b4: /* da07b4: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* da07b7: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* da07ba: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* da07bd: mov ebx, ecx */
  ebx = ecx;
/* da07bf: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* da07c2: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* da07c5: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* da07c7: mov ecx, ebx */
  ecx = ebx;
/* da07c9: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* da07cb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da07cc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da07cd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da07ce: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da07cf: ret  */
  esp += 4; SPILL(); return;
}

void f_da0620(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_da0620: /* da0620: movsb byte ptr es:[edi], byte ptr [esi] */
  W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1);
/* da0621: movsb byte ptr es:[edi], byte ptr [esi] */
  W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1);
/* da0622: movsb byte ptr es:[edi], byte ptr [esi] */
  W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1);
/* da0623: movsb byte ptr es:[edi], byte ptr [esi] */
  W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1);
/* da0624: movsb byte ptr es:[edi], byte ptr [esi] */
  W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1);
/* da0625: movsb byte ptr es:[edi], byte ptr [esi] */
  W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1);
/* da0626: movsb byte ptr es:[edi], byte ptr [esi] */
  W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1);
/* da0627: movsb byte ptr es:[edi], byte ptr [esi] */
  W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1);
/* da0628: mov ecx, ebx */
  ecx = ebx;
/* da062a: shr ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  zf = r == 0;
  ecx = r;
  }
/* da062d: je 0xda068e */
  if (zf) goto L_da068e;
L_da062f: /* da062f: cmp ecx, 0x400 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* da0635: jae 0xda06a0 */
  if (!cf) goto L_da06a0;
L_da0637: /* da0637: jmp 0xda0640 */
  goto L_da0640;
L_da0640: /* da0640: prefetchnta byte ptr [esi + 0x238] */
  guest_unsupported(0xda0640); /* prefetchnta byte ptr [esi + 0x238] */
/* da0647: movq mm0, qword ptr [esi] */
  MMX[0] = R64((uint32_t)(esi));
/* da064a: movq mm1, qword ptr [esi + 8] */
  MMX[1] = R64((uint32_t)(esi + 0x8u));
/* da064e: movq qword ptr [edi], mm0 */
  W64((uint32_t)(edi), MMX[0]);
/* da0651: movq qword ptr [edi + 8], mm1 */
  W64((uint32_t)(edi + 0x8u), MMX[1]);
/* da0655: movq mm2, qword ptr [esi + 0x10] */
  MMX[2] = R64((uint32_t)(esi + 0x10u));
/* da0659: movq mm3, qword ptr [esi + 0x18] */
  MMX[3] = R64((uint32_t)(esi + 0x18u));
/* da065d: movq qword ptr [edi + 0x10], mm2 */
  W64((uint32_t)(edi + 0x10u), MMX[2]);
/* da0661: movq qword ptr [edi + 0x18], mm3 */
  W64((uint32_t)(edi + 0x18u), MMX[3]);
/* da0665: movq mm0, qword ptr [esi + 0x20] */
  MMX[0] = R64((uint32_t)(esi + 0x20u));
/* da0669: movq mm1, qword ptr [esi + 0x28] */
  MMX[1] = R64((uint32_t)(esi + 0x28u));
/* da066d: movq qword ptr [edi + 0x20], mm0 */
  W64((uint32_t)(edi + 0x20u), MMX[0]);
/* da0671: movq qword ptr [edi + 0x28], mm1 */
  W64((uint32_t)(edi + 0x28u), MMX[1]);
/* da0675: movq mm2, qword ptr [esi + 0x30] */
  MMX[2] = R64((uint32_t)(esi + 0x30u));
/* da0679: movq mm3, qword ptr [esi + 0x38] */
  MMX[3] = R64((uint32_t)(esi + 0x38u));
/* da067d: movq qword ptr [edi + 0x30], mm2 */
  W64((uint32_t)(edi + 0x30u), MMX[2]);
/* da0681: movq qword ptr [edi + 0x38], mm3 */
  W64((uint32_t)(edi + 0x38u), MMX[3]);
/* da0685: add esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* da0688: add edi, 0x40 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* da068b: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* da068c: jne 0xda0640 */
  if (!zf) goto L_da0640;
L_da068e: /* da068e: mov ecx, ebx */
  ecx = ebx;
/* da0690: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* da0693: and ecx, 0xf */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* da0696: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
/* da0698: add ecx, 0xda07a4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xda07a4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* da069e: jmp ecx */
  { uint32_t t = ecx; SPILL(); call_ind(t); return; }
L_da06a0: /* da06a0: cmp ecx, 0xc50 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xc50u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* da06a6: jae 0xda0701 */
  if (!cf) goto L_da0701;
L_da06a8: /* da06a8: or ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  ecx = r;
  }
/* da06aa: je 0xda068e */
  if (zf) goto L_da068e;
L_da06ac: /* da06ac: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_da06b0: /* da06b0: prefetchnta byte ptr [esi + 0x238] */
  guest_unsupported(0xda06b0); /* prefetchnta byte ptr [esi + 0x238] */
/* da06b7: movq mm0, qword ptr [esi] */
  MMX[0] = R64((uint32_t)(esi));
/* da06ba: add edi, 0x40 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* da06bd: movq mm1, qword ptr [esi + 8] */
  MMX[1] = R64((uint32_t)(esi + 0x8u));
/* da06c1: add esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* da06c4: movq mm2, qword ptr [esi - 0x30] */
  MMX[2] = R64((uint32_t)(esi + 0xffffffd0u));
/* da06c8: movntq qword ptr [edi - 0x40], mm0 */
  guest_unsupported(0xda06c8); /* movntq qword ptr [edi - 0x40], mm0 */
/* da06cc: movq mm0, qword ptr [esi - 0x28] */
  MMX[0] = R64((uint32_t)(esi + 0xffffffd8u));
/* da06d0: movntq qword ptr [edi - 0x38], mm1 */
  guest_unsupported(0xda06d0); /* movntq qword ptr [edi - 0x38], mm1 */
/* da06d4: movq mm1, qword ptr [esi - 0x20] */
  MMX[1] = R64((uint32_t)(esi + 0xffffffe0u));
/* da06d8: movntq qword ptr [edi - 0x30], mm2 */
  guest_unsupported(0xda06d8); /* movntq qword ptr [edi - 0x30], mm2 */
/* da06dc: movq mm2, qword ptr [esi - 0x18] */
  MMX[2] = R64((uint32_t)(esi + 0xffffffe8u));
/* da06e0: movntq qword ptr [edi - 0x28], mm0 */
  guest_unsupported(0xda06e0); /* movntq qword ptr [edi - 0x28], mm0 */
/* da06e4: movq mm0, qword ptr [esi - 0x10] */
  MMX[0] = R64((uint32_t)(esi + 0xfffffff0u));
/* da06e8: movntq qword ptr [edi - 0x20], mm1 */
  guest_unsupported(0xda06e8); /* movntq qword ptr [edi - 0x20], mm1 */
/* da06ec: movq mm1, qword ptr [esi - 8] */
  MMX[1] = R64((uint32_t)(esi + 0xfffffff8u));
/* da06f0: movntq qword ptr [edi - 0x18], mm2 */
  guest_unsupported(0xda06f0); /* movntq qword ptr [edi - 0x18], mm2 */
/* da06f4: movntq qword ptr [edi - 0x10], mm0 */
  guest_unsupported(0xda06f4); /* movntq qword ptr [edi - 0x10], mm0 */
/* da06f8: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* da06f9: movntq qword ptr [edi - 8], mm1 */
  guest_unsupported(0xda06f9); /* movntq qword ptr [edi - 8], mm1 */
/* da06fd: jne 0xda06b0 */
  if (!zf) goto L_da06b0;
L_da06ff: /* da06ff: jmp 0xda068e */
  goto L_da068e;
L_da0701: /* da0701: cmp ecx, 0x80 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da0707: jl 0xda06a8 */
  if ((sf != of)) goto L_da06a8;
L_da0709: /* da0709: mov eax, 0x40 */
  eax = 0x40u;
/* da070e: add esi, 0x2000 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2000u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* da0714: jmp 0xda0720 */
  goto L_da0720;
L_da0720: /* da0720: mov edx, dword ptr [esi - 0x40] */
  edx = R32((uint32_t)(esi + 0xffffffc0u));
/* da0723: mov edx, dword ptr [esi - 0x80] */
  edx = R32((uint32_t)(esi + 0xffffff80u));
/* da0726: sub esi, 0x80 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* da072c: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* da072d: jne 0xda0720 */
  if (!zf) goto L_da0720;
L_da072f: /* da072f: mov eax, 0x80 */
  eax = 0x80u;
/* da0734: jmp 0xda0740 */
  goto L_da0740;
L_da0740: /* da0740: movq mm0, qword ptr [esi] */
  MMX[0] = R64((uint32_t)(esi));
/* da0743: movq mm1, qword ptr [esi + 8] */
  MMX[1] = R64((uint32_t)(esi + 0x8u));
/* da0747: movq mm2, qword ptr [esi + 0x10] */
  MMX[2] = R64((uint32_t)(esi + 0x10u));
/* da074b: movq mm3, qword ptr [esi + 0x18] */
  MMX[3] = R64((uint32_t)(esi + 0x18u));
/* da074f: movq mm4, qword ptr [esi + 0x20] */
  MMX[4] = R64((uint32_t)(esi + 0x20u));
/* da0753: movq mm5, qword ptr [esi + 0x28] */
  MMX[5] = R64((uint32_t)(esi + 0x28u));
/* da0757: movq mm6, qword ptr [esi + 0x30] */
  MMX[6] = R64((uint32_t)(esi + 0x30u));
/* da075b: movq mm7, qword ptr [esi + 0x38] */
  MMX[7] = R64((uint32_t)(esi + 0x38u));
/* da075f: add esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* da0762: movntq qword ptr [edi], mm0 */
  guest_unsupported(0xda0762); /* movntq qword ptr [edi], mm0 */
/* da0765: movntq qword ptr [edi + 8], mm1 */
  guest_unsupported(0xda0765); /* movntq qword ptr [edi + 8], mm1 */
/* da0769: movntq qword ptr [edi + 0x10], mm2 */
  guest_unsupported(0xda0769); /* movntq qword ptr [edi + 0x10], mm2 */
/* da076d: movntq qword ptr [edi + 0x18], mm3 */
  guest_unsupported(0xda076d); /* movntq qword ptr [edi + 0x18], mm3 */
/* da0771: movntq qword ptr [edi + 0x20], mm4 */
  guest_unsupported(0xda0771); /* movntq qword ptr [edi + 0x20], mm4 */
/* da0775: movntq qword ptr [edi + 0x28], mm5 */
  guest_unsupported(0xda0775); /* movntq qword ptr [edi + 0x28], mm5 */
/* da0779: movntq qword ptr [edi + 0x30], mm6 */
  guest_unsupported(0xda0779); /* movntq qword ptr [edi + 0x30], mm6 */
/* da077d: movntq qword ptr [edi + 0x38], mm7 */
  guest_unsupported(0xda077d); /* movntq qword ptr [edi + 0x38], mm7 */
/* da0781: add edi, 0x40 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* da0784: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* da0785: jne 0xda0740 */
  if (!zf) goto L_da0740;
L_da0787: /* da0787: sub ecx, 0x80 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* da078d: jmp 0xda0701 */
  goto L_da0701;
}

void f_da0639(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_da0639: /* da0639: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_da0640: /* da0640: prefetchnta byte ptr [esi + 0x238] */
  guest_unsupported(0xda0640); /* prefetchnta byte ptr [esi + 0x238] */
/* da0647: movq mm0, qword ptr [esi] */
  MMX[0] = R64((uint32_t)(esi));
/* da064a: movq mm1, qword ptr [esi + 8] */
  MMX[1] = R64((uint32_t)(esi + 0x8u));
/* da064e: movq qword ptr [edi], mm0 */
  W64((uint32_t)(edi), MMX[0]);
/* da0651: movq qword ptr [edi + 8], mm1 */
  W64((uint32_t)(edi + 0x8u), MMX[1]);
/* da0655: movq mm2, qword ptr [esi + 0x10] */
  MMX[2] = R64((uint32_t)(esi + 0x10u));
/* da0659: movq mm3, qword ptr [esi + 0x18] */
  MMX[3] = R64((uint32_t)(esi + 0x18u));
/* da065d: movq qword ptr [edi + 0x10], mm2 */
  W64((uint32_t)(edi + 0x10u), MMX[2]);
/* da0661: movq qword ptr [edi + 0x18], mm3 */
  W64((uint32_t)(edi + 0x18u), MMX[3]);
/* da0665: movq mm0, qword ptr [esi + 0x20] */
  MMX[0] = R64((uint32_t)(esi + 0x20u));
/* da0669: movq mm1, qword ptr [esi + 0x28] */
  MMX[1] = R64((uint32_t)(esi + 0x28u));
/* da066d: movq qword ptr [edi + 0x20], mm0 */
  W64((uint32_t)(edi + 0x20u), MMX[0]);
/* da0671: movq qword ptr [edi + 0x28], mm1 */
  W64((uint32_t)(edi + 0x28u), MMX[1]);
/* da0675: movq mm2, qword ptr [esi + 0x30] */
  MMX[2] = R64((uint32_t)(esi + 0x30u));
/* da0679: movq mm3, qword ptr [esi + 0x38] */
  MMX[3] = R64((uint32_t)(esi + 0x38u));
/* da067d: movq qword ptr [edi + 0x30], mm2 */
  W64((uint32_t)(edi + 0x30u), MMX[2]);
/* da0681: movq qword ptr [edi + 0x38], mm3 */
  W64((uint32_t)(edi + 0x38u), MMX[3]);
/* da0685: add esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* da0688: add edi, 0x40 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* da068b: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* da068c: jne 0xda0640 */
  if (!zf) goto L_da0640;
L_da068e: /* da068e: mov ecx, ebx */
  ecx = ebx;
/* da0690: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* da0693: and ecx, 0xf */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* da0696: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
/* da0698: add ecx, 0xda07a4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xda07a4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* da069e: jmp ecx */
  { uint32_t t = ecx; SPILL(); call_ind(t); return; }
}

void f_da06a0(void) {
  LOAD_REGS();
  uint64_t MMX[8];
  goto L_da06a0;
L_da068e: /* da068e: mov ecx, ebx */
  ecx = ebx;
/* da0690: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* da0693: and ecx, 0xf */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* da0696: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
/* da0698: add ecx, 0xda07a4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xda07a4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* da069e: jmp ecx */
  { uint32_t t = ecx; SPILL(); call_ind(t); return; }
L_da06a0: /* da06a0: cmp ecx, 0xc50 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xc50u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* da06a6: jae 0xda0701 */
  if (!cf) goto L_da0701;
L_da06a8: /* da06a8: or ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  ecx = r;
  }
/* da06aa: je 0xda068e */
  if (zf) goto L_da068e;
L_da06ac: /* da06ac: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_da06b0: /* da06b0: prefetchnta byte ptr [esi + 0x238] */
  guest_unsupported(0xda06b0); /* prefetchnta byte ptr [esi + 0x238] */
/* da06b7: movq mm0, qword ptr [esi] */
  MMX[0] = R64((uint32_t)(esi));
/* da06ba: add edi, 0x40 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* da06bd: movq mm1, qword ptr [esi + 8] */
  MMX[1] = R64((uint32_t)(esi + 0x8u));
/* da06c1: add esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* da06c4: movq mm2, qword ptr [esi - 0x30] */
  MMX[2] = R64((uint32_t)(esi + 0xffffffd0u));
/* da06c8: movntq qword ptr [edi - 0x40], mm0 */
  guest_unsupported(0xda06c8); /* movntq qword ptr [edi - 0x40], mm0 */
/* da06cc: movq mm0, qword ptr [esi - 0x28] */
  MMX[0] = R64((uint32_t)(esi + 0xffffffd8u));
/* da06d0: movntq qword ptr [edi - 0x38], mm1 */
  guest_unsupported(0xda06d0); /* movntq qword ptr [edi - 0x38], mm1 */
/* da06d4: movq mm1, qword ptr [esi - 0x20] */
  MMX[1] = R64((uint32_t)(esi + 0xffffffe0u));
/* da06d8: movntq qword ptr [edi - 0x30], mm2 */
  guest_unsupported(0xda06d8); /* movntq qword ptr [edi - 0x30], mm2 */
/* da06dc: movq mm2, qword ptr [esi - 0x18] */
  MMX[2] = R64((uint32_t)(esi + 0xffffffe8u));
/* da06e0: movntq qword ptr [edi - 0x28], mm0 */
  guest_unsupported(0xda06e0); /* movntq qword ptr [edi - 0x28], mm0 */
/* da06e4: movq mm0, qword ptr [esi - 0x10] */
  MMX[0] = R64((uint32_t)(esi + 0xfffffff0u));
/* da06e8: movntq qword ptr [edi - 0x20], mm1 */
  guest_unsupported(0xda06e8); /* movntq qword ptr [edi - 0x20], mm1 */
/* da06ec: movq mm1, qword ptr [esi - 8] */
  MMX[1] = R64((uint32_t)(esi + 0xfffffff8u));
/* da06f0: movntq qword ptr [edi - 0x18], mm2 */
  guest_unsupported(0xda06f0); /* movntq qword ptr [edi - 0x18], mm2 */
/* da06f4: movntq qword ptr [edi - 0x10], mm0 */
  guest_unsupported(0xda06f4); /* movntq qword ptr [edi - 0x10], mm0 */
/* da06f8: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* da06f9: movntq qword ptr [edi - 8], mm1 */
  guest_unsupported(0xda06f9); /* movntq qword ptr [edi - 8], mm1 */
/* da06fd: jne 0xda06b0 */
  if (!zf) goto L_da06b0;
L_da06ff: /* da06ff: jmp 0xda068e */
  goto L_da068e;
L_da0701: /* da0701: cmp ecx, 0x80 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da0707: jl 0xda06a8 */
  if ((sf != of)) goto L_da06a8;
L_da0709: /* da0709: mov eax, 0x40 */
  eax = 0x40u;
/* da070e: add esi, 0x2000 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2000u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* da0714: jmp 0xda0720 */
  goto L_da0720;
L_da0720: /* da0720: mov edx, dword ptr [esi - 0x40] */
  edx = R32((uint32_t)(esi + 0xffffffc0u));
/* da0723: mov edx, dword ptr [esi - 0x80] */
  edx = R32((uint32_t)(esi + 0xffffff80u));
/* da0726: sub esi, 0x80 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* da072c: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* da072d: jne 0xda0720 */
  if (!zf) goto L_da0720;
L_da072f: /* da072f: mov eax, 0x80 */
  eax = 0x80u;
/* da0734: jmp 0xda0740 */
  goto L_da0740;
L_da0740: /* da0740: movq mm0, qword ptr [esi] */
  MMX[0] = R64((uint32_t)(esi));
/* da0743: movq mm1, qword ptr [esi + 8] */
  MMX[1] = R64((uint32_t)(esi + 0x8u));
/* da0747: movq mm2, qword ptr [esi + 0x10] */
  MMX[2] = R64((uint32_t)(esi + 0x10u));
/* da074b: movq mm3, qword ptr [esi + 0x18] */
  MMX[3] = R64((uint32_t)(esi + 0x18u));
/* da074f: movq mm4, qword ptr [esi + 0x20] */
  MMX[4] = R64((uint32_t)(esi + 0x20u));
/* da0753: movq mm5, qword ptr [esi + 0x28] */
  MMX[5] = R64((uint32_t)(esi + 0x28u));
/* da0757: movq mm6, qword ptr [esi + 0x30] */
  MMX[6] = R64((uint32_t)(esi + 0x30u));
/* da075b: movq mm7, qword ptr [esi + 0x38] */
  MMX[7] = R64((uint32_t)(esi + 0x38u));
/* da075f: add esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* da0762: movntq qword ptr [edi], mm0 */
  guest_unsupported(0xda0762); /* movntq qword ptr [edi], mm0 */
/* da0765: movntq qword ptr [edi + 8], mm1 */
  guest_unsupported(0xda0765); /* movntq qword ptr [edi + 8], mm1 */
/* da0769: movntq qword ptr [edi + 0x10], mm2 */
  guest_unsupported(0xda0769); /* movntq qword ptr [edi + 0x10], mm2 */
/* da076d: movntq qword ptr [edi + 0x18], mm3 */
  guest_unsupported(0xda076d); /* movntq qword ptr [edi + 0x18], mm3 */
/* da0771: movntq qword ptr [edi + 0x20], mm4 */
  guest_unsupported(0xda0771); /* movntq qword ptr [edi + 0x20], mm4 */
/* da0775: movntq qword ptr [edi + 0x28], mm5 */
  guest_unsupported(0xda0775); /* movntq qword ptr [edi + 0x28], mm5 */
/* da0779: movntq qword ptr [edi + 0x30], mm6 */
  guest_unsupported(0xda0779); /* movntq qword ptr [edi + 0x30], mm6 */
/* da077d: movntq qword ptr [edi + 0x38], mm7 */
  guest_unsupported(0xda077d); /* movntq qword ptr [edi + 0x38], mm7 */
/* da0781: add edi, 0x40 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* da0784: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* da0785: jne 0xda0740 */
  if (!zf) goto L_da0740;
L_da0787: /* da0787: sub ecx, 0x80 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* da078d: jmp 0xda0701 */
  goto L_da0701;
}

void f_da0716(void) {
  LOAD_REGS();
  uint64_t MMX[8];
  goto L_da0716;
L_da068e: /* da068e: mov ecx, ebx */
  ecx = ebx;
/* da0690: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* da0693: and ecx, 0xf */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* da0696: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
/* da0698: add ecx, 0xda07a4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xda07a4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* da069e: jmp ecx */
  { uint32_t t = ecx; SPILL(); call_ind(t); return; }
L_da06a8: /* da06a8: or ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  ecx = r;
  }
/* da06aa: je 0xda068e */
  if (zf) goto L_da068e;
L_da06ac: /* da06ac: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_da06b0: /* da06b0: prefetchnta byte ptr [esi + 0x238] */
  guest_unsupported(0xda06b0); /* prefetchnta byte ptr [esi + 0x238] */
/* da06b7: movq mm0, qword ptr [esi] */
  MMX[0] = R64((uint32_t)(esi));
/* da06ba: add edi, 0x40 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* da06bd: movq mm1, qword ptr [esi + 8] */
  MMX[1] = R64((uint32_t)(esi + 0x8u));
/* da06c1: add esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* da06c4: movq mm2, qword ptr [esi - 0x30] */
  MMX[2] = R64((uint32_t)(esi + 0xffffffd0u));
/* da06c8: movntq qword ptr [edi - 0x40], mm0 */
  guest_unsupported(0xda06c8); /* movntq qword ptr [edi - 0x40], mm0 */
/* da06cc: movq mm0, qword ptr [esi - 0x28] */
  MMX[0] = R64((uint32_t)(esi + 0xffffffd8u));
/* da06d0: movntq qword ptr [edi - 0x38], mm1 */
  guest_unsupported(0xda06d0); /* movntq qword ptr [edi - 0x38], mm1 */
/* da06d4: movq mm1, qword ptr [esi - 0x20] */
  MMX[1] = R64((uint32_t)(esi + 0xffffffe0u));
/* da06d8: movntq qword ptr [edi - 0x30], mm2 */
  guest_unsupported(0xda06d8); /* movntq qword ptr [edi - 0x30], mm2 */
/* da06dc: movq mm2, qword ptr [esi - 0x18] */
  MMX[2] = R64((uint32_t)(esi + 0xffffffe8u));
/* da06e0: movntq qword ptr [edi - 0x28], mm0 */
  guest_unsupported(0xda06e0); /* movntq qword ptr [edi - 0x28], mm0 */
/* da06e4: movq mm0, qword ptr [esi - 0x10] */
  MMX[0] = R64((uint32_t)(esi + 0xfffffff0u));
/* da06e8: movntq qword ptr [edi - 0x20], mm1 */
  guest_unsupported(0xda06e8); /* movntq qword ptr [edi - 0x20], mm1 */
/* da06ec: movq mm1, qword ptr [esi - 8] */
  MMX[1] = R64((uint32_t)(esi + 0xfffffff8u));
/* da06f0: movntq qword ptr [edi - 0x18], mm2 */
  guest_unsupported(0xda06f0); /* movntq qword ptr [edi - 0x18], mm2 */
/* da06f4: movntq qword ptr [edi - 0x10], mm0 */
  guest_unsupported(0xda06f4); /* movntq qword ptr [edi - 0x10], mm0 */
/* da06f8: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* da06f9: movntq qword ptr [edi - 8], mm1 */
  guest_unsupported(0xda06f9); /* movntq qword ptr [edi - 8], mm1 */
/* da06fd: jne 0xda06b0 */
  if (!zf) goto L_da06b0;
L_da06ff: /* da06ff: jmp 0xda068e */
  goto L_da068e;
L_da0701: /* da0701: cmp ecx, 0x80 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da0707: jl 0xda06a8 */
  if ((sf != of)) goto L_da06a8;
L_da0709: /* da0709: mov eax, 0x40 */
  eax = 0x40u;
/* da070e: add esi, 0x2000 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2000u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* da0714: jmp 0xda0720 */
  goto L_da0720;
L_da0716: /* da0716: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* da071d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_da0720: /* da0720: mov edx, dword ptr [esi - 0x40] */
  edx = R32((uint32_t)(esi + 0xffffffc0u));
/* da0723: mov edx, dword ptr [esi - 0x80] */
  edx = R32((uint32_t)(esi + 0xffffff80u));
/* da0726: sub esi, 0x80 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* da072c: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* da072d: jne 0xda0720 */
  if (!zf) goto L_da0720;
L_da072f: /* da072f: mov eax, 0x80 */
  eax = 0x80u;
/* da0734: jmp 0xda0740 */
  goto L_da0740;
L_da0740: /* da0740: movq mm0, qword ptr [esi] */
  MMX[0] = R64((uint32_t)(esi));
/* da0743: movq mm1, qword ptr [esi + 8] */
  MMX[1] = R64((uint32_t)(esi + 0x8u));
/* da0747: movq mm2, qword ptr [esi + 0x10] */
  MMX[2] = R64((uint32_t)(esi + 0x10u));
/* da074b: movq mm3, qword ptr [esi + 0x18] */
  MMX[3] = R64((uint32_t)(esi + 0x18u));
/* da074f: movq mm4, qword ptr [esi + 0x20] */
  MMX[4] = R64((uint32_t)(esi + 0x20u));
/* da0753: movq mm5, qword ptr [esi + 0x28] */
  MMX[5] = R64((uint32_t)(esi + 0x28u));
/* da0757: movq mm6, qword ptr [esi + 0x30] */
  MMX[6] = R64((uint32_t)(esi + 0x30u));
/* da075b: movq mm7, qword ptr [esi + 0x38] */
  MMX[7] = R64((uint32_t)(esi + 0x38u));
/* da075f: add esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* da0762: movntq qword ptr [edi], mm0 */
  guest_unsupported(0xda0762); /* movntq qword ptr [edi], mm0 */
/* da0765: movntq qword ptr [edi + 8], mm1 */
  guest_unsupported(0xda0765); /* movntq qword ptr [edi + 8], mm1 */
/* da0769: movntq qword ptr [edi + 0x10], mm2 */
  guest_unsupported(0xda0769); /* movntq qword ptr [edi + 0x10], mm2 */
/* da076d: movntq qword ptr [edi + 0x18], mm3 */
  guest_unsupported(0xda076d); /* movntq qword ptr [edi + 0x18], mm3 */
/* da0771: movntq qword ptr [edi + 0x20], mm4 */
  guest_unsupported(0xda0771); /* movntq qword ptr [edi + 0x20], mm4 */
/* da0775: movntq qword ptr [edi + 0x28], mm5 */
  guest_unsupported(0xda0775); /* movntq qword ptr [edi + 0x28], mm5 */
/* da0779: movntq qword ptr [edi + 0x30], mm6 */
  guest_unsupported(0xda0779); /* movntq qword ptr [edi + 0x30], mm6 */
/* da077d: movntq qword ptr [edi + 0x38], mm7 */
  guest_unsupported(0xda077d); /* movntq qword ptr [edi + 0x38], mm7 */
/* da0781: add edi, 0x40 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* da0784: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* da0785: jne 0xda0740 */
  if (!zf) goto L_da0740;
L_da0787: /* da0787: sub ecx, 0x80 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* da078d: jmp 0xda0701 */
  goto L_da0701;
}

void f_da0736(void) {
  LOAD_REGS();
  uint64_t MMX[8];
  goto L_da0736;
L_da068e: /* da068e: mov ecx, ebx */
  ecx = ebx;
/* da0690: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* da0693: and ecx, 0xf */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* da0696: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
/* da0698: add ecx, 0xda07a4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xda07a4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* da069e: jmp ecx */
  { uint32_t t = ecx; SPILL(); call_ind(t); return; }
L_da06a8: /* da06a8: or ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  ecx = r;
  }
/* da06aa: je 0xda068e */
  if (zf) goto L_da068e;
L_da06ac: /* da06ac: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_da06b0: /* da06b0: prefetchnta byte ptr [esi + 0x238] */
  guest_unsupported(0xda06b0); /* prefetchnta byte ptr [esi + 0x238] */
/* da06b7: movq mm0, qword ptr [esi] */
  MMX[0] = R64((uint32_t)(esi));
/* da06ba: add edi, 0x40 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* da06bd: movq mm1, qword ptr [esi + 8] */
  MMX[1] = R64((uint32_t)(esi + 0x8u));
/* da06c1: add esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* da06c4: movq mm2, qword ptr [esi - 0x30] */
  MMX[2] = R64((uint32_t)(esi + 0xffffffd0u));
/* da06c8: movntq qword ptr [edi - 0x40], mm0 */
  guest_unsupported(0xda06c8); /* movntq qword ptr [edi - 0x40], mm0 */
/* da06cc: movq mm0, qword ptr [esi - 0x28] */
  MMX[0] = R64((uint32_t)(esi + 0xffffffd8u));
/* da06d0: movntq qword ptr [edi - 0x38], mm1 */
  guest_unsupported(0xda06d0); /* movntq qword ptr [edi - 0x38], mm1 */
/* da06d4: movq mm1, qword ptr [esi - 0x20] */
  MMX[1] = R64((uint32_t)(esi + 0xffffffe0u));
/* da06d8: movntq qword ptr [edi - 0x30], mm2 */
  guest_unsupported(0xda06d8); /* movntq qword ptr [edi - 0x30], mm2 */
/* da06dc: movq mm2, qword ptr [esi - 0x18] */
  MMX[2] = R64((uint32_t)(esi + 0xffffffe8u));
/* da06e0: movntq qword ptr [edi - 0x28], mm0 */
  guest_unsupported(0xda06e0); /* movntq qword ptr [edi - 0x28], mm0 */
/* da06e4: movq mm0, qword ptr [esi - 0x10] */
  MMX[0] = R64((uint32_t)(esi + 0xfffffff0u));
/* da06e8: movntq qword ptr [edi - 0x20], mm1 */
  guest_unsupported(0xda06e8); /* movntq qword ptr [edi - 0x20], mm1 */
/* da06ec: movq mm1, qword ptr [esi - 8] */
  MMX[1] = R64((uint32_t)(esi + 0xfffffff8u));
/* da06f0: movntq qword ptr [edi - 0x18], mm2 */
  guest_unsupported(0xda06f0); /* movntq qword ptr [edi - 0x18], mm2 */
/* da06f4: movntq qword ptr [edi - 0x10], mm0 */
  guest_unsupported(0xda06f4); /* movntq qword ptr [edi - 0x10], mm0 */
/* da06f8: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* da06f9: movntq qword ptr [edi - 8], mm1 */
  guest_unsupported(0xda06f9); /* movntq qword ptr [edi - 8], mm1 */
/* da06fd: jne 0xda06b0 */
  if (!zf) goto L_da06b0;
L_da06ff: /* da06ff: jmp 0xda068e */
  goto L_da068e;
L_da0701: /* da0701: cmp ecx, 0x80 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da0707: jl 0xda06a8 */
  if ((sf != of)) goto L_da06a8;
L_da0709: /* da0709: mov eax, 0x40 */
  eax = 0x40u;
/* da070e: add esi, 0x2000 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2000u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* da0714: jmp 0xda0720 */
  goto L_da0720;
L_da0720: /* da0720: mov edx, dword ptr [esi - 0x40] */
  edx = R32((uint32_t)(esi + 0xffffffc0u));
/* da0723: mov edx, dword ptr [esi - 0x80] */
  edx = R32((uint32_t)(esi + 0xffffff80u));
/* da0726: sub esi, 0x80 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* da072c: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* da072d: jne 0xda0720 */
  if (!zf) goto L_da0720;
L_da072f: /* da072f: mov eax, 0x80 */
  eax = 0x80u;
/* da0734: jmp 0xda0740 */
  goto L_da0740;
L_da0736: /* da0736: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* da073d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_da0740: /* da0740: movq mm0, qword ptr [esi] */
  MMX[0] = R64((uint32_t)(esi));
/* da0743: movq mm1, qword ptr [esi + 8] */
  MMX[1] = R64((uint32_t)(esi + 0x8u));
/* da0747: movq mm2, qword ptr [esi + 0x10] */
  MMX[2] = R64((uint32_t)(esi + 0x10u));
/* da074b: movq mm3, qword ptr [esi + 0x18] */
  MMX[3] = R64((uint32_t)(esi + 0x18u));
/* da074f: movq mm4, qword ptr [esi + 0x20] */
  MMX[4] = R64((uint32_t)(esi + 0x20u));
/* da0753: movq mm5, qword ptr [esi + 0x28] */
  MMX[5] = R64((uint32_t)(esi + 0x28u));
/* da0757: movq mm6, qword ptr [esi + 0x30] */
  MMX[6] = R64((uint32_t)(esi + 0x30u));
/* da075b: movq mm7, qword ptr [esi + 0x38] */
  MMX[7] = R64((uint32_t)(esi + 0x38u));
/* da075f: add esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* da0762: movntq qword ptr [edi], mm0 */
  guest_unsupported(0xda0762); /* movntq qword ptr [edi], mm0 */
/* da0765: movntq qword ptr [edi + 8], mm1 */
  guest_unsupported(0xda0765); /* movntq qword ptr [edi + 8], mm1 */
/* da0769: movntq qword ptr [edi + 0x10], mm2 */
  guest_unsupported(0xda0769); /* movntq qword ptr [edi + 0x10], mm2 */
/* da076d: movntq qword ptr [edi + 0x18], mm3 */
  guest_unsupported(0xda076d); /* movntq qword ptr [edi + 0x18], mm3 */
/* da0771: movntq qword ptr [edi + 0x20], mm4 */
  guest_unsupported(0xda0771); /* movntq qword ptr [edi + 0x20], mm4 */
/* da0775: movntq qword ptr [edi + 0x28], mm5 */
  guest_unsupported(0xda0775); /* movntq qword ptr [edi + 0x28], mm5 */
/* da0779: movntq qword ptr [edi + 0x30], mm6 */
  guest_unsupported(0xda0779); /* movntq qword ptr [edi + 0x30], mm6 */
/* da077d: movntq qword ptr [edi + 0x38], mm7 */
  guest_unsupported(0xda077d); /* movntq qword ptr [edi + 0x38], mm7 */
/* da0781: add edi, 0x40 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* da0784: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* da0785: jne 0xda0740 */
  if (!zf) goto L_da0740;
L_da0787: /* da0787: sub ecx, 0x80 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* da078d: jmp 0xda0701 */
  goto L_da0701;
}

void f_da0792(void) {
  LOAD_REGS();
L_da0792: /* da0792: mov edi, edi */
  edi = edi;
/* da0794: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* da0795: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* da0796: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* da0797: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* da0798: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* da0799: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* da079a: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* da079b: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* da079c: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* da079d: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* da079e: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* da079f: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* da07a0: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* da07a1: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* da07a2: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* da07a3: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
  SPILL(); f_da07a4(); return;
}

void f_da07a4(void) {
  LOAD_REGS();
L_da07a4: /* da07a4: mov ecx, ebx */
  ecx = ebx;
/* da07a6: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  ecx = r;
  }
/* da07a9: je 0xda07ad */
  if (zf) goto L_da07ad;
L_da07ab: /* da07ab: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
L_da07ad: /* da07ad: emms  */
/* da07af: sfence  */
  guest_unsupported(0xda07af); /* sfence  */
/* da07b2: jmp 0xda07cb */
  goto L_da07cb;
L_da07cb: /* da07cb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da07cc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da07cd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da07ce: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da07cf: ret  */
  esp += 4; SPILL(); return;
}

void f_da0850(void) {
  LOAD_REGS();
L_da0850: /* da0850: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* da0851: mov ebp, esp */
  ebp = esp;
/* da0853: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* da0855: push 0xdba279 */
  { uint32_t v = 0xdba279u; esp -= 4; W32(esp, v); }
/* da085a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* da0860: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da0861: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* da0868: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* da086b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da086c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da086d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da086e: xor ebx, ebx */
  ebx = 0;
/* da0870: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* da0873: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* da0876: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* da0879: call dword ptr [0xde8c2c] */
  esp -= 4; W32(esp, 0xda087fu); SPILL(); f_6c5d85(); if (g_unwind) return; /* Engine!??0?$TArray@E@@QAE@XZ */ RELOAD();
/* da087f: mov eax, dword ptr [0xde8a64] */
  eax = R32((uint32_t)(0xde8a64u));
/* da0884: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* da0886: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* da0889: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da088a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da088b: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* da088e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da088f: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* da0893: call dword ptr [0xde8a60] */
  esp -= 4; W32(esp, 0xda0899u); SPILL(); f_4e23ce(); if (g_unwind) return; /* Core!?appLoadFileToArray@@YAHAAV?$TArray@E@@PBGPAVFFileManager@@@Z */ RELOAD();
/* da0899: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da089c: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da089e: je 0xda090a */
  if (zf) goto L_da090a;
L_da08a0: /* da08a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da08a1: call dword ptr [0xde8ed0] */
  esp -= 4; W32(esp, 0xda08a7u); SPILL(); call_ind(R32(0xde8ed0u)); if (g_unwind) return; /* USER32!GetDC */ RELOAD();
/* da08a7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da08a8: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* da08ab: mov esi, eax */
  esi = eax;
/* da08ad: call dword ptr [0xde8c28] */
  esp -= 4; W32(esp, 0xda08b3u); SPILL(); f_6cc324(); if (g_unwind) return; /* Engine!??R?$TArray@E@@QAEAAEH@Z */ RELOAD();
/* da08b3: mov cl, byte ptr [eax + 0x1c] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x1cu))) & 0xffu);
/* da08b6: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* da08b9: add eax, 0xe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xeu);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (r) < (a);
  of = ((((a) ^ (r)) & ((b) ^ (r))) >> 31) & 1;
  eax = r;
  }
/* da08bc: mov edx, 1 */
  edx = 0x1u;
/* da08c1: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* da08c3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da08c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da08c5: lea ecx, [eax + edx*4 + 0x28] */
  ecx = (uint32_t)(eax + edx*4 + 0x28u);
/* da08c9: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* da08cc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da08cd: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* da08cf: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* da08d1: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* da08d4: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* da08d7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da08d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da08d9: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* da08db: call dword ptr [0xde8ca4] */
  esp -= 4; W32(esp, 0xda08e1u); SPILL(); call_ind(R32(0xde8ca4u)); if (g_unwind) return; /* GDI32!CreateDIBitmap */ RELOAD();
/* da08e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da08e2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da08e3: mov edi, eax */
  edi = eax;
/* da08e5: call dword ptr [0xde8ed4] */
  esp -= 4; W32(esp, 0xda08ebu); SPILL(); call_ind(R32(0xde8ed4u)); if (g_unwind) return; /* USER32!ReleaseDC */ RELOAD();
/* da08eb: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* da08ee: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* da08f1: call dword ptr [0xde8c24] */
  esp -= 4; W32(esp, 0xda08f7u); SPILL(); f_6c3e13(); if (g_unwind) return; /* Engine!??1?$TArray@E@@QAE@XZ */ RELOAD();
/* da08f7: mov eax, edi */
  eax = edi;
/* da08f9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da08fc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da0903: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da0904: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da0905: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da0906: mov esp, ebp */
  esp = ebp;
/* da0908: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da0909: ret  */
  esp += 4; SPILL(); return;
L_da090a: /* da090a: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* da090d: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* da0910: call dword ptr [0xde8c24] */
  esp -= 4; W32(esp, 0xda0916u); SPILL(); f_6c3e13(); if (g_unwind) return; /* Engine!??1?$TArray@E@@QAE@XZ */ RELOAD();
/* da0916: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da0919: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da091a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da091b: xor eax, eax */
  eax = 0;
/* da091d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da0924: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da0925: mov esp, ebp */
  esp = ebp;
/* da0927: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da0928: ret  */
  esp += 4; SPILL(); return;
}

void f_da0929(void) {
  LOAD_REGS();
L_da0929: /* da0929: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* da092c: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* da0931: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* da0934: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da0935: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* da0938: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda093du); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_da093d(); return;
}

void f_da093d(void) {
  LOAD_REGS();
L_da093d: /* da093d: push 0xdc3a58 */
  { uint32_t v = 0xdc3a58u; esp -= 4; W32(esp, v); }
/* da0942: push 0xde36fc */
  { uint32_t v = 0xde36fcu; esp -= 4; W32(esp, v); }
/* da0947: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xda094du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* da094d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da0950: xor ebx, ebx */
  ebx = 0;
/* da0952: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da0953: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da0954: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda0959u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_da0959: guest_badaddr(0xda0959); return;
}

void f_da09b0(void) {
  LOAD_REGS();
L_da09b0: /* da09b0: movzx ax, byte ptr [esp + 4] */
  eax = (eax & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(esp + 0x4u)))) & 0xffffu);
/* da09b6: ret  */
  esp += 4; SPILL(); return;
}

void f_da09d0(void) {
  LOAD_REGS();
L_da09d0: /* da09d0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da09d1: mov eax, dword ptr [0xde8c20] */
  eax = R32((uint32_t)(0xde8c20u));
/* da09d6: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da09d9: je 0xda0a0e */
  if (zf) goto L_da0a0e;
L_da09db: /* da09db: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* da09df: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da09e1: jne 0xda09e9 */
  if (!zf) goto L_da09e9;
L_da09e3: /* da09e3: call dword ptr [0xde8e14] */
  esp -= 4; W32(esp, 0xda09e9u); SPILL(); call_ind(R32(0xde8e14u)); if (g_unwind) return; /* USER32!GetForegroundWindow */ RELOAD();
L_da09e9: /* da09e9: lea ecx, [esp] */
  ecx = (uint32_t)(esp);
/* da09ed: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da09ee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da09ef: call dword ptr [0xde8e10] */
  esp -= 4; W32(esp, 0xda09f5u); SPILL(); call_ind(R32(0xde8e10u)); if (g_unwind) return; /* USER32!GetWindowThreadProcessId */ RELOAD();
/* da09f5: call dword ptr [0xde8cfc] */
  esp -= 4; W32(esp, 0xda09fbu); SPILL(); call_ind(R32(0xde8cfcu)); if (g_unwind) return; /* KERNEL32!GetCurrentProcessId */ RELOAD();
/* da09fb: cmp dword ptr [esp], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da09ff: je 0xda0a0e */
  if (zf) goto L_da0a0e;
L_da0a01: /* da0a01: mov edx, dword ptr [0xde8c20] */
  edx = R32((uint32_t)(0xde8c20u));
/* da0a07: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* da0a09: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* da0a0b: call dword ptr [eax + 0x74] */
  { uint32_t t = R32((uint32_t)(eax + 0x74u)); esp -= 4; W32(esp, 0xda0a0eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_da0a0e: /* da0a0e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* da0a0f: ret  */
  esp += 4; SPILL(); return;
}

void f_da0a20(void) {
  LOAD_REGS();
L_da0a20: /* da0a20: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da0a21: mov eax, dword ptr [0xde8c20] */
  eax = R32((uint32_t)(0xde8c20u));
/* da0a26: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da0a29: je 0xda0a53 */
  if (zf) goto L_da0a53;
L_da0a2b: /* da0a2b: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* da0a2f: lea ecx, [esp] */
  ecx = (uint32_t)(esp);
/* da0a33: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da0a34: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da0a35: call dword ptr [0xde8e10] */
  esp -= 4; W32(esp, 0xda0a3bu); SPILL(); call_ind(R32(0xde8e10u)); if (g_unwind) return; /* USER32!GetWindowThreadProcessId */ RELOAD();
/* da0a3b: call dword ptr [0xde8cfc] */
  esp -= 4; W32(esp, 0xda0a41u); SPILL(); call_ind(R32(0xde8cfcu)); if (g_unwind) return; /* KERNEL32!GetCurrentProcessId */ RELOAD();
/* da0a41: cmp dword ptr [esp], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da0a45: je 0xda0a53 */
  if (zf) goto L_da0a53;
L_da0a47: /* da0a47: mov eax, dword ptr [0xde8c20] */
  eax = R32((uint32_t)(0xde8c20u));
/* da0a4c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* da0a4e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* da0a50: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0xda0a53u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_da0a53: /* da0a53: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* da0a54: ret  */
  esp += 4; SPILL(); return;
}

void f_da0a70(void) {
  LOAD_REGS();
L_da0a70: /* da0a70: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* da0a74: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* da0a78: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* da0a7b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da0a7c: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* da0a80: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da0a81: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* da0a85: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da0a86: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* da0a8a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da0a8b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da0a8c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da0a8d: call dword ptr [0xde8f48] */
  esp -= 4; W32(esp, 0xda0a93u); SPILL(); call_ind(R32(0xde8f48u)); if (g_unwind) return; /* USER32!MoveWindow */ RELOAD();
/* da0a93: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_da0ab0(void) {
  LOAD_REGS();
L_da0ab0: /* da0ab0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* da0ab4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da0ab6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da0ab7: mov esi, ecx */
  esi = ecx;
/* da0ab9: mov dword ptr [esi + 0x2c], eax */
  W32((uint32_t)(esi + 0x2cu), eax);
/* da0abc: je 0xda0ae1 */
  if (zf) goto L_da0ae1;
L_da0abe: /* da0abe: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* da0ac1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da0ac2: call dword ptr [0xde8e18] */
  esp -= 4; W32(esp, 0xda0ac8u); SPILL(); call_ind(R32(0xde8e18u)); if (g_unwind) return; /* USER32!IsIconic */ RELOAD();
/* da0ac8: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* da0acb: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* da0acd: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* da0acf: and eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* da0ad2: add eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* da0ad5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da0ad6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da0ad7: call dword ptr [0xde8ef4] */
  esp -= 4; W32(esp, 0xda0addu); SPILL(); call_ind(R32(0xde8ef4u)); if (g_unwind) return; /* USER32!ShowWindow */ RELOAD();
/* da0add: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da0ade: ret 4 */
  esp += 8; SPILL(); return;
L_da0ae1: /* da0ae1: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* da0ae4: xor eax, eax */
  eax = 0;
/* da0ae6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da0ae7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da0ae8: call dword ptr [0xde8ef4] */
  esp -= 4; W32(esp, 0xda0aeeu); SPILL(); call_ind(R32(0xde8ef4u)); if (g_unwind) return; /* USER32!ShowWindow */ RELOAD();
/* da0aee: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da0aef: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da0b20(void) {
  LOAD_REGS();
L_da0b20: /* da0b20: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* da0b21: mov ebp, esp */
  ebp = esp;
/* da0b23: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* da0b25: push 0xdba290 */
  { uint32_t v = 0xdba290u; esp -= 4; W32(esp, v); }
/* da0b2a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* da0b30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da0b31: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* da0b38: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* da0b3b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da0b3c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da0b3d: mov eax, ecx */
  eax = ecx;
/* da0b3f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* da0b42: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* da0b44: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da0b45: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* da0b48: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* da0b4b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da0b4c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* da0b53: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0xda0b56u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da0b56: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da0b59: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da0b5a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da0b5b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da0b62: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da0b63: mov esp, ebp */
  esp = ebp;
/* da0b65: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da0b66: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da0b69(void) {
  LOAD_REGS();
L_da0b69: /* da0b69: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* da0b6c: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* da0b71: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* da0b74: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da0b75: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* da0b78: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda0b7du); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_da0b7d(); return;
}

void f_da0b7d(void) {
  LOAD_REGS();
L_da0b7d: /* da0b7d: push 0xdc3a80 */
  { uint32_t v = 0xdc3a80u; esp -= 4; W32(esp, v); }
/* da0b82: push 0xde3864 */
  { uint32_t v = 0xde3864u; esp -= 4; W32(esp, v); }
/* da0b87: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xda0b8du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* da0b8d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da0b90: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da0b92: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da0b94: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda0b99u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_da0b99: guest_badaddr(0xda0b99); return;
}

void f_da0bc0(void) {
  LOAD_REGS();
L_da0bc0: /* da0bc0: mov eax, 0xde386c */
  eax = 0xde386cu;
/* da0bc5: ret  */
  esp += 4; SPILL(); return;
}

void f_da0be0(void) {
  LOAD_REGS();
L_da0be0: /* da0be0: xor eax, eax */
  eax = 0;
/* da0be2: ret  */
  esp += 4; SPILL(); return;
}

void f_da0c00(void) {
  LOAD_REGS();
L_da0c00: /* da0c00: test byte ptr [ecx + 0x10], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x10u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* da0c04: je 0xda0c36 */
  if (zf) goto L_da0c36;
L_da0c06: /* da0c06: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* da0c0b: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* da0c0d: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* da0c11: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da0c13: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* da0c17: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da0c18: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* da0c1c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da0c1d: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* da0c20: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da0c21: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da0c22: je 0xda0c2d */
  if (zf) goto L_da0c2d;
L_da0c24: /* da0c24: call dword ptr [0xde8e28] */
  esp -= 4; W32(esp, 0xda0c2au); SPILL(); call_ind(R32(0xde8e28u)); if (g_unwind) return; /* USER32!DefMDIChildProcW */ RELOAD();
/* da0c2a: ret 0xc */
  esp += 16; SPILL(); return;
L_da0c2d: /* da0c2d: call dword ptr [0xde8e24] */
  esp -= 4; W32(esp, 0xda0c33u); SPILL(); call_ind(R32(0xde8e24u)); if (g_unwind) return; /* USER32!DefMDIChildProcA */ RELOAD();
/* da0c33: ret 0xc */
  esp += 16; SPILL(); return;
L_da0c36: /* da0c36: mov edx, dword ptr [0xde88ac] */
  edx = R32((uint32_t)(0xde88acu));
/* da0c3c: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da0c3f: je 0xda0c5d */
  if (zf) goto L_da0c5d;
L_da0c41: /* da0c41: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* da0c45: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* da0c49: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* da0c4c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da0c4d: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* da0c51: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da0c52: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da0c53: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da0c54: call dword ptr [0xde8e20] */
  esp -= 4; W32(esp, 0xda0c5au); SPILL(); call_ind(R32(0xde8e20u)); if (g_unwind) return; /* USER32!DefWindowProcW */ RELOAD();
/* da0c5a: ret 0xc */
  esp += 16; SPILL(); return;
L_da0c5d: /* da0c5d: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* da0c61: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* da0c65: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da0c66: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* da0c6a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da0c6b: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* da0c6e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da0c6f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da0c70: call dword ptr [0xde8e1c] */
  esp -= 4; W32(esp, 0xda0c76u); SPILL(); call_ind(R32(0xde8e1cu)); if (g_unwind) return; /* USER32!DefWindowProcA */ RELOAD();
/* da0c76: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_da0ca0(void) {
  LOAD_REGS();
L_da0ca0: /* da0ca0: xor eax, eax */
  eax = 0;
/* da0ca2: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_da0cc0(void) {
  LOAD_REGS();
L_da0cc0: /* da0cc0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* da0cc4: mov dword ptr [ecx + 0x18], eax */
  W32((uint32_t)(ecx + 0x18u), eax);
/* da0cc7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da0ce0(void) {
  LOAD_REGS();
L_da0ce0: /* da0ce0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_da0d00(void) {
  LOAD_REGS();
L_da0d00: /* da0d00: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da0d20(void) {
  LOAD_REGS();
L_da0d20: /* da0d20: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da0d40(void) {
  LOAD_REGS();
L_da0d40: /* da0d40: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_da0d60(void) {
  LOAD_REGS();
L_da0d60: /* da0d60: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_da0d80(void) {
  LOAD_REGS();
L_da0d80: /* da0d80: ret 8 */
  esp += 12; SPILL(); return;
}

void f_da0da0(void) {
  LOAD_REGS();
L_da0da0: /* da0da0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da0dc0(void) {
  LOAD_REGS();
L_da0dc0: /* da0dc0: xor eax, eax */
  eax = 0;
/* da0dc2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da0de0(void) {
  LOAD_REGS();
L_da0de0: /* da0de0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da0e00(void) {
  LOAD_REGS();
L_da0e00: /* da0e00: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da0e20(void) {
  LOAD_REGS();
L_da0e20: /* da0e20: ret  */
  esp += 4; SPILL(); return;
}

void f_da0e40(void) {
  LOAD_REGS();
L_da0e40: /* da0e40: ret  */
  esp += 4; SPILL(); return;
}

void f_da0e60(void) {
  LOAD_REGS();
L_da0e60: /* da0e60: ret  */
  esp += 4; SPILL(); return;
}

void f_da0e80(void) {
  LOAD_REGS();
L_da0e80: /* da0e80: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da0ea0(void) {
  LOAD_REGS();
L_da0ea0: /* da0ea0: ret  */
  esp += 4; SPILL(); return;
}

void f_da0ec0(void) {
  LOAD_REGS();
L_da0ec0: /* da0ec0: xor eax, eax */
  eax = 0;
/* da0ec2: ret  */
  esp += 4; SPILL(); return;
}

void f_da0ee0(void) {
  LOAD_REGS();
L_da0ee0: /* da0ee0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_da0f00(void) {
  LOAD_REGS();
L_da0f00: /* da0f00: ret 8 */
  esp += 12; SPILL(); return;
}

void f_da0f20(void) {
  LOAD_REGS();
L_da0f20: /* da0f20: ret 8 */
  esp += 12; SPILL(); return;
}

void f_da0f40(void) {
  LOAD_REGS();
L_da0f40: /* da0f40: ret  */
  esp += 4; SPILL(); return;
}

void f_da0f60(void) {
  LOAD_REGS();
L_da0f60: /* da0f60: ret  */
  esp += 4; SPILL(); return;
}

void f_da0f80(void) {
  LOAD_REGS();
L_da0f80: /* da0f80: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da0fa0(void) {
  LOAD_REGS();
L_da0fa0: /* da0fa0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da0fc0(void) {
  LOAD_REGS();
L_da0fc0: /* da0fc0: ret  */
  esp += 4; SPILL(); return;
}

void f_da0fe0(void) {
  LOAD_REGS();
L_da0fe0: /* da0fe0: ret  */
  esp += 4; SPILL(); return;
}

void f_da1000(void) {
  LOAD_REGS();
L_da1000: /* da1000: ret  */
  esp += 4; SPILL(); return;
}

void f_da1020(void) {
  LOAD_REGS();
L_da1020: /* da1020: ret  */
  esp += 4; SPILL(); return;
}

void f_da1040(void) {
  LOAD_REGS();
L_da1040: /* da1040: ret  */
  esp += 4; SPILL(); return;
}

void f_da1060(void) {
  LOAD_REGS();
L_da1060: /* da1060: ret  */
  esp += 4; SPILL(); return;
}

void f_da1080(void) {
  LOAD_REGS();
L_da1080: /* da1080: ret  */
  esp += 4; SPILL(); return;
}

void f_da10a0(void) {
  LOAD_REGS();
L_da10a0: /* da10a0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da10c0(void) {
  LOAD_REGS();
L_da10c0: /* da10c0: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_da10e0(void) {
  LOAD_REGS();
L_da10e0: /* da10e0: ret  */
  esp += 4; SPILL(); return;
}

void f_da1100(void) {
  LOAD_REGS();
L_da1100: /* da1100: ret  */
  esp += 4; SPILL(); return;
}

void f_da1120(void) {
  LOAD_REGS();
L_da1120: /* da1120: ret  */
  esp += 4; SPILL(); return;
}

void f_da1140(void) {
  LOAD_REGS();
L_da1140: /* da1140: ret  */
  esp += 4; SPILL(); return;
}

void f_da1160(void) {
  LOAD_REGS();
L_da1160: /* da1160: ret  */
  esp += 4; SPILL(); return;
}

void f_da1180(void) {
  LOAD_REGS();
L_da1180: /* da1180: ret  */
  esp += 4; SPILL(); return;
}

void f_da11a0(void) {
  LOAD_REGS();
L_da11a0: /* da11a0: ret  */
  esp += 4; SPILL(); return;
}

void f_da11c0(void) {
  LOAD_REGS();
L_da11c0: /* da11c0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_da11e0(void) {
  LOAD_REGS();
L_da11e0: /* da11e0: xor eax, eax */
  eax = 0;
/* da11e2: ret  */
  esp += 4; SPILL(); return;
}

void f_da1200(void) {
  LOAD_REGS();
L_da1200: /* da1200: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da1201: mov esi, ecx */
  esi = ecx;
/* da1203: test byte ptr [esi + 0x10], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x10u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* da1207: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* da120a: je 0xda1228 */
  if (zf) goto L_da1228;
L_da120c: /* da120c: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* da120f: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* da1212: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da1214: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da1215: push 0x221 */
  { uint32_t v = 0x221u; esp -= 4; W32(esp, v); }
/* da121a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da121b: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xda1221u); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* da1221: mov eax, 1 */
  eax = 0x1u;
/* da1226: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da1227: ret  */
  esp += 4; SPILL(); return;
L_da1228: /* da1228: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da122a: je 0xda123a */
  if (zf) goto L_da123a;
L_da122c: /* da122c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da122d: call dword ptr [0xde8f0c] */
  esp -= 4; W32(esp, 0xda1233u); SPILL(); call_ind(R32(0xde8f0cu)); if (g_unwind) return; /* USER32!DestroyWindow */ RELOAD();
/* da1233: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
L_da123a: /* da123a: mov eax, 1 */
  eax = 0x1u;
/* da123f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da1240: ret  */
  esp += 4; SPILL(); return;
}

void f_da1270(void) {
  LOAD_REGS();
L_da1270: /* da1270: ret  */
  esp += 4; SPILL(); return;
}

void f_da1290(void) {
  LOAD_REGS();
L_da1290: /* da1290: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* da1291: mov ebp, esp */
  ebp = esp;
/* da1293: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* da1295: push 0xdba2a0 */
  { uint32_t v = 0xdba2a0u; esp -= 4; W32(esp, v); }
/* da129a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* da12a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da12a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* da12a8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* da12ab: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* da12ae: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* da12b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da12b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da12b2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da12b3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* da12b6: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* da12bd: jne 0xda12ca */
  if (!zf) goto L_da12ca;
L_da12bf: /* da12bf: or eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* da12c2: mov dword ptr [ecx + 0x10], eax */
  W32((uint32_t)(ecx + 0x10u), eax);
/* da12c5: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* da12c7: call dword ptr [eax + 0x14] */
  { uint32_t t = R32((uint32_t)(eax + 0x14u)); esp -= 4; W32(esp, 0xda12cau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_da12ca: /* da12ca: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da12cd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da12ce: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da12cf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da12d6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da12d7: mov esp, ebp */
  esp = ebp;
/* da12d9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da12da: ret  */
  esp += 4; SPILL(); return;
}

void f_da12db(void) {
  LOAD_REGS();
L_da12db: /* da12db: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* da12de: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* da12e3: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* da12e6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da12e7: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* da12ea: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda12efu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_da12ef(); return;
}

void f_da12ef(void) {
  LOAD_REGS();
L_da12ef: /* da12ef: push 0xdc3ab0 */
  { uint32_t v = 0xdc3ab0u; esp -= 4; W32(esp, v); }
/* da12f4: push 0xde3950 */
  { uint32_t v = 0xde3950u; esp -= 4; W32(esp, v); }
/* da12f9: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xda12ffu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* da12ff: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da1302: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da1304: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da1306: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda130bu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_da130b: guest_badaddr(0xda130b); return;
}

void f_da1330(void) {
  LOAD_REGS();
L_da1330: /* da1330: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* da1333: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da1334: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da1335: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da1336: mov ebx, ecx */
  ebx = ecx;
/* da1338: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* da133b: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* da133f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da1340: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da1341: call dword ptr [0xde8f1c] */
  esp -= 4; W32(esp, 0xda1347u); SPILL(); call_ind(R32(0xde8f1cu)); if (g_unwind) return; /* USER32!GetWindowRect */ RELOAD();
/* da1347: mov esi, dword ptr [0xde8e2c] */
  esi = R32((uint32_t)(0xde8e2cu));
/* da134d: push 0x4e */
  { uint32_t v = 0x4eu; esp -= 4; W32(esp, v); }
/* da134f: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xda1351u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da1351: push 0x4f */
  { uint32_t v = 0x4fu; esp -= 4; W32(esp, v); }
/* da1353: mov edi, eax */
  edi = eax;
/* da1355: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xda1357u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da1357: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* da135b: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* da135e: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da1360: jge 0xda1367 */
  if ((sf == of)) goto L_da1367;
L_da1362: /* da1362: cmp ecx, -4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da1365: jge 0xda136d */
  if ((sf == of)) goto L_da136d;
L_da1367: /* da1367: xor ecx, ecx */
  ecx = 0;
/* da1369: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
L_da136d: /* da136d: lea edx, [eax + 4] */
  edx = (uint32_t)(eax + 0x4u);
/* da1370: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* da1374: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da1376: jge 0xda137d */
  if ((sf == of)) goto L_da137d;
L_da1378: /* da1378: cmp eax, -4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da137b: jge 0xda1383 */
  if ((sf == of)) goto L_da1383;
L_da137d: /* da137d: xor eax, eax */
  eax = 0;
/* da137f: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
L_da1383: /* da1383: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* da1387: push 0x405 */
  { uint32_t v = 0x405u; esp -= 4; W32(esp, v); }
/* da138c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da138d: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* da1391: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da1392: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da1393: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* da1396: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da1397: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da1399: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da139a: call dword ptr [0xde8f08] */
  esp -= 4; W32(esp, 0xda13a0u); SPILL(); call_ind(R32(0xde8f08u)); if (g_unwind) return; /* USER32!SetWindowPos */ RELOAD();
/* da13a0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da13a1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da13a2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da13a3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da13a6: ret  */
  esp += 4; SPILL(); return;
}

void f_da13d0(void) {
  LOAD_REGS();
L_da13d0: /* da13d0: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* da13d3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da13d4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* da13d5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da13d6: mov esi, dword ptr [0xde8c68] */
  esi = R32((uint32_t)(0xde8c68u));
/* da13dc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da13dd: push 0x9f9f9f */
  { uint32_t v = 0x9f9f9fu; esp -= 4; W32(esp, v); }
/* da13e2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* da13e4: mov edi, ecx */
  edi = ecx;
/* da13e6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da13e8: mov dword ptr [esp + 0x24], edi */
  W32((uint32_t)(esp + 0x24u), edi);
/* da13ec: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xda13eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da13ee: push 0x6a6a6a */
  { uint32_t v = 0x6a6a6au; esp -= 4; W32(esp, v); }
/* da13f3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* da13f5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da13f7: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* da13fb: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xda13fdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da13fd: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* da1401: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* da1404: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da1405: call dword ptr [0xde8ed0] */
  esp -= 4; W32(esp, 0xda140bu); SPILL(); call_ind(R32(0xde8ed0u)); if (g_unwind) return; /* USER32!GetDC */ RELOAD();
/* da140b: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* da140f: mov ebp, dword ptr [ecx] */
  ebp = R32((uint32_t)(ecx));
/* da1411: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* da1414: mov edi, dword ptr [ecx + 8] */
  edi = R32((uint32_t)(ecx + 0x8u));
/* da1417: mov ebx, dword ptr [ecx + 0xc] */
  ebx = R32((uint32_t)(ecx + 0xcu));
/* da141a: mov esi, eax */
  esi = eax;
/* da141c: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* da1420: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* da1421: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* da1422: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da1424: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* da1428: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* da142c: jne 0xda1432 */
  if (!zf) goto L_da1432;
L_da142e: /* da142e: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
L_da1432: /* da1432: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da1433: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da1434: call dword ptr [0xde8c74] */
  esp -= 4; W32(esp, 0xda143au); SPILL(); call_ind(R32(0xde8c74u)); if (g_unwind) return; /* GDI32!SelectObject */ RELOAD();
/* da143a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da143c: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* da1440: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* da1444: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da1445: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* da1446: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da1447: call dword ptr [0xde8c64] */
  esp -= 4; W32(esp, 0xda144du); SPILL(); call_ind(R32(0xde8c64u)); if (g_unwind) return; /* GDI32!MoveToEx */ RELOAD();
/* da144d: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* da1451: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da1452: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da1453: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da1454: call dword ptr [0xde8c60] */
  esp -= 4; W32(esp, 0xda145au); SPILL(); call_ind(R32(0xde8c60u)); if (g_unwind) return; /* GDI32!LineTo */ RELOAD();
/* da145a: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* da145e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da1460: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da1461: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* da1462: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da1463: call dword ptr [0xde8c64] */
  esp -= 4; W32(esp, 0xda1469u); SPILL(); call_ind(R32(0xde8c64u)); if (g_unwind) return; /* GDI32!MoveToEx */ RELOAD();
/* da1469: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da146a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* da146b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da146c: call dword ptr [0xde8c60] */
  esp -= 4; W32(esp, 0xda1472u); SPILL(); call_ind(R32(0xde8c60u)); if (g_unwind) return; /* GDI32!LineTo */ RELOAD();
/* da1472: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* da1476: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da1477: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da1478: call dword ptr [0xde8c74] */
  esp -= 4; W32(esp, 0xda147eu); SPILL(); call_ind(R32(0xde8c74u)); if (g_unwind) return; /* GDI32!SelectObject */ RELOAD();
/* da147e: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* da1482: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da1484: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* da1488: jne 0xda148e */
  if (!zf) goto L_da148e;
L_da148a: /* da148a: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_da148e: /* da148e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da148f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da1490: call dword ptr [0xde8c74] */
  esp -= 4; W32(esp, 0xda1496u); SPILL(); call_ind(R32(0xde8c74u)); if (g_unwind) return; /* GDI32!SelectObject */ RELOAD();
/* da1496: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da1498: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da1499: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da149a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da149b: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
/* da149f: call dword ptr [0xde8c64] */
  esp -= 4; W32(esp, 0xda14a5u); SPILL(); call_ind(R32(0xde8c64u)); if (g_unwind) return; /* GDI32!MoveToEx */ RELOAD();
/* da14a5: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* da14a9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da14aa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da14ab: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da14ac: call dword ptr [0xde8c60] */
  esp -= 4; W32(esp, 0xda14b2u); SPILL(); call_ind(R32(0xde8c60u)); if (g_unwind) return; /* GDI32!LineTo */ RELOAD();
/* da14b2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da14b4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da14b5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da14b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da14b7: call dword ptr [0xde8c64] */
  esp -= 4; W32(esp, 0xda14bdu); SPILL(); call_ind(R32(0xde8c64u)); if (g_unwind) return; /* GDI32!MoveToEx */ RELOAD();
/* da14bd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da14be: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* da14bf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da14c0: call dword ptr [0xde8c60] */
  esp -= 4; W32(esp, 0xda14c6u); SPILL(); call_ind(R32(0xde8c60u)); if (g_unwind) return; /* GDI32!LineTo */ RELOAD();
/* da14c6: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* da14ca: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da14cb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da14cc: call dword ptr [0xde8c74] */
  esp -= 4; W32(esp, 0xda14d2u); SPILL(); call_ind(R32(0xde8c74u)); if (g_unwind) return; /* GDI32!SelectObject */ RELOAD();
/* da14d2: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* da14d6: mov edi, dword ptr [0xde8c5c] */
  edi = R32((uint32_t)(0xde8c5cu));
/* da14dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da14dd: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xda14dfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da14df: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* da14e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da14e4: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xda14e6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da14e6: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* da14ea: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* da14ed: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da14ee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da14ef: call dword ptr [0xde8ed4] */
  esp -= 4; W32(esp, 0xda14f5u); SPILL(); call_ind(R32(0xde8ed4u)); if (g_unwind) return; /* USER32!ReleaseDC */ RELOAD();
/* da14f5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da14f6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da14f7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da14f8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da14f9: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da14fc: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_da1550(void) {
  LOAD_REGS();
L_da1550: /* da1550: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da1551: mov esi, ecx */
  esi = ecx;
/* da1553: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* da1556: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da1557: call dword ptr [0xde8f5c] */
  esp -= 4; W32(esp, 0xda155du); SPILL(); call_ind(R32(0xde8f5cu)); if (g_unwind) return; /* USER32!IsWindow */ RELOAD();
/* da155d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da155f: je 0xda15ae */
  if (zf) goto L_da15ae;
L_da1561: /* da1561: mov ecx, dword ptr [0xde88ac] */
  ecx = R32((uint32_t)(0xde88acu));
/* da1567: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da156a: je 0xda158d */
  if (zf) goto L_da158d;
L_da156c: /* da156c: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* da1570: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* da1574: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* da1578: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da1579: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* da157c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da157d: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* da1580: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da1581: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da1582: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da1583: call dword ptr [0xde8e34] */
  esp -= 4; W32(esp, 0xda1589u); SPILL(); call_ind(R32(0xde8e34u)); if (g_unwind) return; /* USER32!CallWindowProcW */ RELOAD();
/* da1589: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da158a: ret 0xc */
  esp += 16; SPILL(); return;
L_da158d: /* da158d: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* da1591: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* da1595: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* da1599: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da159a: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* da159d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da159e: mov edx, dword ptr [esi + 0x3c] */
  edx = R32((uint32_t)(esi + 0x3cu));
/* da15a1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da15a2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da15a3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da15a4: call dword ptr [0xde8e30] */
  esp -= 4; W32(esp, 0xda15aau); SPILL(); call_ind(R32(0xde8e30u)); if (g_unwind) return; /* USER32!CallWindowProcA */ RELOAD();
/* da15aa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da15ab: ret 0xc */
  esp += 16; SPILL(); return;
L_da15ae: /* da15ae: mov eax, 1 */
  eax = 0x1u;
/* da15b3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da15b4: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_da15e0(void) {
  LOAD_REGS();
L_da15e0: /* da15e0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* da15e2: jmp dword ptr [eax + 0xb8] */
  { uint32_t t = R32((uint32_t)(eax + 0xb8u)); SPILL(); call_ind(t); return; }
}

void f_da1600(void) {
  LOAD_REGS();
L_da1600: /* da1600: mov eax, dword ptr [0xde5188] */
  eax = R32((uint32_t)(0xde5188u));
/* da1605: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da1606: mov esi, ecx */
  esi = ecx;
/* da1608: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* da160b: call dword ptr [0xde8e38] */
  esp -= 4; W32(esp, 0xda1611u); SPILL(); call_ind(R32(0xde8e38u)); if (g_unwind) return; /* USER32!ReleaseCapture */ RELOAD();
/* da1611: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* da1614: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da1616: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da1618: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da1619: call dword ptr [0xde8f2c] */
  esp -= 4; W32(esp, 0xda161fu); SPILL(); call_ind(R32(0xde8f2cu)); if (g_unwind) return; /* USER32!InvalidateRect */ RELOAD();
/* da161f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da1620: ret  */
  esp += 4; SPILL(); return;
}

void f_da1640(void) {
  LOAD_REGS();
L_da1640: /* da1640: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* da1645: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da1648: push 0x5a4 */
  { uint32_t v = 0x5a4u; esp -= 4; W32(esp, v); }
/* da164d: je 0xda1669 */
  if (zf) goto L_da1669;
L_da164f: /* da164f: mov ecx, dword ptr [0xde50e8] */
  ecx = R32((uint32_t)(0xde50e8u));
/* da1655: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da1656: call dword ptr [0xde8df0] */
  esp -= 4; W32(esp, 0xda165cu); SPILL(); call_ind(R32(0xde8df0u)); if (g_unwind) return; /* USER32!LoadCursorW */ RELOAD();
/* da165c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da165d: call dword ptr [0xde8e90] */
  esp -= 4; W32(esp, 0xda1663u); SPILL(); call_ind(R32(0xde8e90u)); if (g_unwind) return; /* USER32!SetCursor */ RELOAD();
/* da1663: mov eax, 1 */
  eax = 0x1u;
/* da1668: ret  */
  esp += 4; SPILL(); return;
L_da1669: /* da1669: mov edx, dword ptr [0xde50e8] */
  edx = R32((uint32_t)(0xde50e8u));
/* da166f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da1670: call dword ptr [0xde8dec] */
  esp -= 4; W32(esp, 0xda1676u); SPILL(); call_ind(R32(0xde8decu)); if (g_unwind) return; /* USER32!LoadCursorA */ RELOAD();
/* da1676: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da1677: call dword ptr [0xde8e90] */
  esp -= 4; W32(esp, 0xda167du); SPILL(); call_ind(R32(0xde8e90u)); if (g_unwind) return; /* USER32!SetCursor */ RELOAD();
/* da167d: mov eax, 1 */
  eax = 0x1u;
/* da1682: ret  */
  esp += 4; SPILL(); return;
}

void f_da16b0(void) {
  LOAD_REGS();
L_da16b0: /* da16b0: fld dword ptr [ecx + 0x48] */
  { double v = F32((uint32_t)(ecx + 0x48u)); FPUSH(v); }
/* da16b3: fmul dword ptr [0xdc3ae4] */
  ST0 = ST0 * (F32((uint32_t)(0xdc3ae4u)));
/* da16b9: fimul dword ptr [ecx + 0x54] */
  ST0 = ST0 * ((double)(int32_t)R32((uint32_t)(ecx + 0x54u)));
/* da16bc: jmp 0xdb7d0c */
  SPILL(); f_db7d0c(); return;
}

void f_da16e0(void) {
  LOAD_REGS();
L_da16e0: /* da16e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da16e1: mov esi, ecx */
  esi = ecx;
/* da16e3: mov eax, dword ptr [esi + 0x54] */
  eax = R32((uint32_t)(esi + 0x54u));
/* da16e6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da16e8: jne 0xda1702 */
  if (!zf) goto L_da1702;
L_da16ea: /* da16ea: push 0x4d3 */
  { uint32_t v = 0x4d3u; esp -= 4; W32(esp, v); }
/* da16ef: push 0xde3bb8 */
  { uint32_t v = 0xde3bb8u; esp -= 4; W32(esp, v); }
/* da16f4: push 0xde3bc4 */
  { uint32_t v = 0xde3bc4u; esp -= 4; W32(esp, v); }
/* da16f9: call dword ptr [0xde88a8] */
  esp -= 4; W32(esp, 0xda16ffu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* da16ff: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_da1702: /* da1702: fild dword ptr [esp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* da1706: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* da1709: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* da170d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da170f: fidiv dword ptr [esi + 0x54] */
  ST0 = ST0 / ((double)(int32_t)R32((uint32_t)(esi + 0x54u)));
/* da1712: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da1714: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da1715: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* da1718: fmul dword ptr [0xdc3ae8] */
  ST0 = ST0 * (F32((uint32_t)(0xdc3ae8u)));
/* da171e: fstp dword ptr [esi + 0x48] */
  WF32((uint32_t)(esi + 0x48u), ST0); FPOP();
/* da1721: call dword ptr [0xde8f2c] */
  esp -= 4; W32(esp, 0xda1727u); SPILL(); call_ind(R32(0xde8f2cu)); if (g_unwind) return; /* USER32!InvalidateRect */ RELOAD();
/* da1727: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da1728: ret 8 */
  esp += 12; SPILL(); return;
}

void f_da1750(void) {
  LOAD_REGS();
L_da1750: /* da1750: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da1751: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da1752: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* da1756: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* da1758: mov esi, ecx */
  esi = ecx;
/* da175a: jg 0xda1774 */
  if ((!zf && sf == of)) goto L_da1774;
L_da175c: /* da175c: push 0x4dd */
  { uint32_t v = 0x4ddu; esp -= 4; W32(esp, v); }
/* da1761: push 0xde3bcc */
  { uint32_t v = 0xde3bccu; esp -= 4; W32(esp, v); }
/* da1766: push 0xde3bd8 */
  { uint32_t v = 0xde3bd8u; esp -= 4; W32(esp, v); }
/* da176b: call dword ptr [0xde88a8] */
  esp -= 4; W32(esp, 0xda1771u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* da1771: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_da1774: /* da1774: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* da1777: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da1779: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da177b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da177c: mov dword ptr [esi + 0x54], edi */
  W32((uint32_t)(esi + 0x54u), edi);
/* da177f: call dword ptr [0xde8f2c] */
  esp -= 4; W32(esp, 0xda1785u); SPILL(); call_ind(R32(0xde8f2cu)); if (g_unwind) return; /* USER32!InvalidateRect */ RELOAD();
/* da1785: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da1786: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da1787: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da17a0(void) {
  LOAD_REGS();
L_da17a0: /* da17a0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* da17a2: jmp dword ptr [eax + 0xb8] */
  { uint32_t t = R32((uint32_t)(eax + 0xb8u)); SPILL(); call_ind(t); return; }
}

void f_da17c0(void) {
  LOAD_REGS();
L_da17c0: /* da17c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da17c1: mov esi, ecx */
  esi = ecx;
/* da17c3: call dword ptr [0xde8e38] */
  esp -= 4; W32(esp, 0xda17c9u); SPILL(); call_ind(R32(0xde8e38u)); if (g_unwind) return; /* USER32!ReleaseCapture */ RELOAD();
/* da17c9: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* da17cc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da17ce: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da17d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da17d1: call dword ptr [0xde8f2c] */
  esp -= 4; W32(esp, 0xda17d7u); SPILL(); call_ind(R32(0xde8f2cu)); if (g_unwind) return; /* USER32!InvalidateRect */ RELOAD();
/* da17d7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da17d8: ret  */
  esp += 4; SPILL(); return;
}

void f_da17f0(void) {
  LOAD_REGS();
L_da17f0: /* da17f0: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* da17f5: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da17f8: push 0x7f00 */
  { uint32_t v = 0x7f00u; esp -= 4; W32(esp, v); }
/* da17fd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da17ff: je 0xda1814 */
  if (zf) goto L_da1814;
L_da1801: /* da1801: call dword ptr [0xde8df0] */
  esp -= 4; W32(esp, 0xda1807u); SPILL(); call_ind(R32(0xde8df0u)); if (g_unwind) return; /* USER32!LoadCursorW */ RELOAD();
/* da1807: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da1808: call dword ptr [0xde8e90] */
  esp -= 4; W32(esp, 0xda180eu); SPILL(); call_ind(R32(0xde8e90u)); if (g_unwind) return; /* USER32!SetCursor */ RELOAD();
/* da180e: mov eax, 1 */
  eax = 0x1u;
/* da1813: ret  */
  esp += 4; SPILL(); return;
L_da1814: /* da1814: call dword ptr [0xde8dec] */
  esp -= 4; W32(esp, 0xda181au); SPILL(); call_ind(R32(0xde8decu)); if (g_unwind) return; /* USER32!LoadCursorA */ RELOAD();
/* da181a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da181b: call dword ptr [0xde8e90] */
  esp -= 4; W32(esp, 0xda1821u); SPILL(); call_ind(R32(0xde8e90u)); if (g_unwind) return; /* USER32!SetCursor */ RELOAD();
/* da1821: mov eax, 1 */
  eax = 0x1u;
/* da1826: ret  */
  esp += 4; SPILL(); return;
}

void f_da1840(void) {
  LOAD_REGS();
L_da1840: /* da1840: fld dword ptr [ecx + 0x48] */
  { double v = F32((uint32_t)(ecx + 0x48u)); FPUSH(v); }
/* da1843: fmul dword ptr [0xdc3ae4] */
  ST0 = ST0 * (F32((uint32_t)(0xdc3ae4u)));
/* da1849: fimul dword ptr [ecx + 0x50] */
  ST0 = ST0 * ((double)(int32_t)R32((uint32_t)(ecx + 0x50u)));
/* da184c: jmp 0xdb7d0c */
  SPILL(); f_db7d0c(); return;
}

void f_da1870(void) {
  LOAD_REGS();
L_da1870: /* da1870: fld dword ptr [ecx + 0x48] */
  { double v = F32((uint32_t)(ecx + 0x48u)); FPUSH(v); }
/* da1873: fmul dword ptr [0xdc3ae4] */
  ST0 = ST0 * (F32((uint32_t)(0xdc3ae4u)));
/* da1879: ret  */
  esp += 4; SPILL(); return;
}

void f_da1890(void) {
  LOAD_REGS();
L_da1890: /* da1890: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da1891: mov esi, ecx */
  esi = ecx;
/* da1893: mov eax, dword ptr [esi + 0x50] */
  eax = R32((uint32_t)(esi + 0x50u));
/* da1896: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da1898: jne 0xda18b2 */
  if (!zf) goto L_da18b2;
L_da189a: /* da189a: push 0x5ac */
  { uint32_t v = 0x5acu; esp -= 4; W32(esp, v); }
/* da189f: push 0xde3c28 */
  { uint32_t v = 0xde3c28u; esp -= 4; W32(esp, v); }
/* da18a4: push 0xde3c34 */
  { uint32_t v = 0xde3c34u; esp -= 4; W32(esp, v); }
/* da18a9: call dword ptr [0xde88a8] */
  esp -= 4; W32(esp, 0xda18afu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* da18af: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_da18b2: /* da18b2: fild dword ptr [esp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* da18b6: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* da18b9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da18bb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da18bd: fidiv dword ptr [esi + 0x50] */
  ST0 = ST0 / ((double)(int32_t)R32((uint32_t)(esi + 0x50u)));
/* da18c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da18c1: fmul dword ptr [0xdc3ae8] */
  ST0 = ST0 * (F32((uint32_t)(0xdc3ae8u)));
/* da18c7: fstp dword ptr [esi + 0x48] */
  WF32((uint32_t)(esi + 0x48u), ST0); FPOP();
/* da18ca: call dword ptr [0xde8f2c] */
  esp -= 4; W32(esp, 0xda18d0u); SPILL(); call_ind(R32(0xde8f2cu)); if (g_unwind) return; /* USER32!InvalidateRect */ RELOAD();
/* da18d0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da18d1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da1900(void) {
  LOAD_REGS();
L_da1900: /* da1900: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da1901: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da1902: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* da1906: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* da1908: mov esi, ecx */
  esi = ecx;
/* da190a: jg 0xda1924 */
  if ((!zf && sf == of)) goto L_da1924;
L_da190c: /* da190c: push 0x5bd */
  { uint32_t v = 0x5bdu; esp -= 4; W32(esp, v); }
/* da1911: push 0xde3c3c */
  { uint32_t v = 0xde3c3cu; esp -= 4; W32(esp, v); }
/* da1916: push 0xde3c48 */
  { uint32_t v = 0xde3c48u; esp -= 4; W32(esp, v); }
/* da191b: call dword ptr [0xde88a8] */
  esp -= 4; W32(esp, 0xda1921u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* da1921: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_da1924: /* da1924: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* da1927: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da1929: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da192b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da192c: mov dword ptr [esi + 0x50], edi */
  W32((uint32_t)(esi + 0x50u), edi);
/* da192f: call dword ptr [0xde8f2c] */
  esp -= 4; W32(esp, 0xda1935u); SPILL(); call_ind(R32(0xde8f2cu)); if (g_unwind) return; /* USER32!InvalidateRect */ RELOAD();
/* da1935: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da1936: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da1937: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da1950(void) {
  LOAD_REGS();
L_da1950: /* da1950: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da1951: mov esi, ecx */
  esi = ecx;
/* da1953: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da1955: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* da1957: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0xda195au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da195a: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* da195d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da195e: call dword ptr [0xde8e3c] */
  esp -= 4; W32(esp, 0xda1964u); SPILL(); call_ind(R32(0xde8e3cu)); if (g_unwind) return; /* USER32!SetCapture */ RELOAD();
/* da1964: push 0x7f8b */
  { uint32_t v = 0x7f8bu; esp -= 4; W32(esp, v); }
/* da1969: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da196b: call dword ptr [0xde8df0] */
  esp -= 4; W32(esp, 0xda1971u); SPILL(); call_ind(R32(0xde8df0u)); if (g_unwind) return; /* USER32!LoadCursorW */ RELOAD();
/* da1971: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da1972: call dword ptr [0xde8e90] */
  esp -= 4; W32(esp, 0xda1978u); SPILL(); call_ind(R32(0xde8e90u)); if (g_unwind) return; /* USER32!SetCursor */ RELOAD();
/* da1978: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* da197b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da197c: call dword ptr [0xde8ed8] */
  esp -= 4; W32(esp, 0xda1982u); SPILL(); call_ind(R32(0xde8ed8u)); if (g_unwind) return; /* USER32!SetFocus */ RELOAD();
/* da1982: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da1983: ret  */
  esp += 4; SPILL(); return;
}

void f_da19a0(void) {
  LOAD_REGS();
L_da19a0: /* da19a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da19a1: mov esi, ecx */
  esi = ecx;
/* da19a3: call dword ptr [0xde8e38] */
  esp -= 4; W32(esp, 0xda19a9u); SPILL(); call_ind(R32(0xde8e38u)); if (g_unwind) return; /* USER32!ReleaseCapture */ RELOAD();
/* da19a9: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da19ab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da19ad: mov ecx, esi */
  ecx = esi;
/* da19af: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0xda19b2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da19b2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da19b3: ret  */
  esp += 4; SPILL(); return;
}

void f_da19d0(void) {
  LOAD_REGS();
L_da19d0: /* da19d0: cmp word ptr [esp + 4], 0x1b */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esp + 0x4u))); uint16_t b = (uint16_t)(0x1bu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* da19d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da19d7: mov esi, ecx */
  esi = ecx;
/* da19d9: jne 0xda19ea */
  if (!zf) goto L_da19ea;
L_da19db: /* da19db: call dword ptr [0xde8e38] */
  esp -= 4; W32(esp, 0xda19e1u); SPILL(); call_ind(R32(0xde8e38u)); if (g_unwind) return; /* USER32!ReleaseCapture */ RELOAD();
/* da19e1: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da19e3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da19e5: mov ecx, esi */
  ecx = esi;
/* da19e7: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0xda19eau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_da19ea: /* da19ea: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da19eb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da1a00(void) {
  LOAD_REGS();
L_da1a00: /* da1a00: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* da1a03: lea eax, [esp] */
  eax = (uint32_t)(esp);
/* da1a07: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da1a08: call dword ptr [0xde8ee8] */
  esp -= 4; W32(esp, 0xda1a0eu); SPILL(); call_ind(R32(0xde8ee8u)); if (g_unwind) return; /* USER32!GetCursorPos */ RELOAD();
/* da1a0e: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* da1a12: mov edx, dword ptr [esp] */
  edx = R32((uint32_t)(esp));
/* da1a16: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da1a17: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da1a18: call dword ptr [0xde8e40] */
  esp -= 4; W32(esp, 0xda1a1eu); SPILL(); call_ind(R32(0xde8e40u)); if (g_unwind) return; /* USER32!WindowFromPoint */ RELOAD();
/* da1a1e: mov ecx, dword ptr [0xde88ac] */
  ecx = R32((uint32_t)(0xde88acu));
/* da1a24: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da1a27: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da1a29: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da1a2b: push 0x8034 */
  { uint32_t v = 0x8034u; esp -= 4; W32(esp, v); }
/* da1a30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da1a31: je 0xda1a3d */
  if (zf) goto L_da1a3d;
L_da1a33: /* da1a33: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xda1a39u); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* da1a39: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da1a3c: ret  */
  esp += 4; SPILL(); return;
L_da1a3d: /* da1a3d: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xda1a43u); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* da1a43: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da1a46: ret  */
  esp += 4; SPILL(); return;
}

void f_da1a70(void) {
  LOAD_REGS();
L_da1a70: /* da1a70: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* da1a74: cmp ax, 3 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x3u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* da1a78: je 0xda1a9d */
  if (zf) goto L_da1a9d;
L_da1a7a: /* da1a7a: mov ecx, dword ptr [ecx + 0x74] */
  ecx = R32((uint32_t)(ecx + 0x74u));
/* da1a7d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* da1a7f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da1a80: call dword ptr [edx + 0xe8] */
  { uint32_t t = R32((uint32_t)(edx + 0xe8u)); esp -= 4; W32(esp, 0xda1a86u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da1a86: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* da1a8b: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* da1a8f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da1a90: mov dword ptr [esp + 0xc], 0xde3db8 */
  W32((uint32_t)(esp + 0xcu), 0xde3db8u);
/* da1a98: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda1a9du); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_da1a9d: /* da1a9d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da1ab0(void) {
  LOAD_REGS();
L_da1ab0: /* da1ab0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da1ab1: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* da1ab6: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* da1aba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da1abb: mov dword ptr [esp + 8], 0xde3dc8 */
  W32((uint32_t)(esp + 0x8u), 0xde3dc8u);
/* da1ac3: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda1ac8u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_da1ac8: guest_badaddr(0xda1ac8); return;
}

void f_da1ae0(void) {
  LOAD_REGS();
L_da1ae0: /* da1ae0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da1ae1: mov ecx, dword ptr [ecx + 0x74] */
  ecx = R32((uint32_t)(ecx + 0x74u));
/* da1ae4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* da1ae6: call dword ptr [eax + 0xec] */
  { uint32_t t = R32((uint32_t)(eax + 0xecu)); esp -= 4; W32(esp, 0xda1aecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da1aec: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* da1af1: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* da1af5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da1af6: mov dword ptr [esp + 8], 0xde3dd8 */
  W32((uint32_t)(esp + 0x8u), 0xde3dd8u);
/* da1afe: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda1b03u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_da1b03: guest_badaddr(0xda1b03); return;
}

void f_da1b20(void) {
  LOAD_REGS();
L_da1b20: /* da1b20: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da1b21: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* da1b26: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* da1b2a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da1b2b: mov dword ptr [esp + 8], 0xde3de8 */
  W32((uint32_t)(esp + 0x8u), 0xde3de8u);
/* da1b33: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda1b38u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_da1b38: guest_badaddr(0xda1b38); return;
}

void f_da1b50(void) {
  LOAD_REGS();
L_da1b50: /* da1b50: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* da1b54: mov dword ptr [ecx + 0x2c4], eax */
  W32((uint32_t)(ecx + 0x2c4u), eax);
/* da1b5a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da1b70(void) {
  LOAD_REGS();
L_da1b70: /* da1b70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* da1b71: mov ebp, esp */
  ebp = esp;
/* da1b73: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* da1b75: push 0xdba2b0 */
  { uint32_t v = 0xdba2b0u; esp -= 4; W32(esp, v); }
/* da1b7a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* da1b80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da1b81: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* da1b88: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* da1b8b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da1b8c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da1b8d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da1b8e: lea eax, [ecx + 0xc4] */
  eax = (uint32_t)(ecx + 0xc4u);
/* da1b94: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* da1b97: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da1b98: add ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* da1b9b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* da1ba2: call 0xd8179e */
  esp -= 4; W32(esp, 0xda1ba7u); SPILL(); f_d8179e(); if (g_unwind) return; RELOAD();
/* da1ba7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da1baa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da1bab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da1bac: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da1bb3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da1bb4: mov esp, ebp */
  esp = ebp;
/* da1bb6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da1bb7: ret  */
  esp += 4; SPILL(); return;
}

void f_da1bb8(void) {
  LOAD_REGS();
L_da1bb8: /* da1bb8: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* da1bbb: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* da1bc0: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* da1bc3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da1bc4: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* da1bc7: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda1bccu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_da1bcc(); return;
}

void f_da1bcc(void) {
  LOAD_REGS();
L_da1bcc: /* da1bcc: push 0xdc3aec */
  { uint32_t v = 0xdc3aecu; esp -= 4; W32(esp, v); }
/* da1bd1: push 0xde3ea4 */
  { uint32_t v = 0xde3ea4u; esp -= 4; W32(esp, v); }
/* da1bd6: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xda1bdcu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* da1bdc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da1bdf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da1be1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da1be3: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda1be8u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_da1be8: guest_badaddr(0xda1be8); return;
}

void f_da1c10(void) {
  LOAD_REGS();
L_da1c10: /* da1c10: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* da1c14: mov dword ptr [ecx + 0xb8], eax */
  W32((uint32_t)(ecx + 0xb8u), eax);
/* da1c1a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da1c30(void) {
  LOAD_REGS();
L_da1c30: /* da1c30: mov eax, dword ptr [0xde51c4] */
  eax = R32((uint32_t)(0xde51c4u));
/* da1c35: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da1c37: je 0xda1c5e */
  if (zf) goto L_da1c5e;
L_da1c39: /* da1c39: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* da1c3e: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da1c41: je 0xda1c51 */
  if (zf) goto L_da1c51;
L_da1c43: /* da1c43: push 0xde5038 */
  { uint32_t v = 0xde5038u; esp -= 4; W32(esp, v); }
/* da1c48: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* da1c4a: call dword ptr [0xde51cc] */
  { uint32_t t = R32((uint32_t)(0xde51ccu)); esp -= 4; W32(esp, 0xda1c50u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da1c50: ret  */
  esp += 4; SPILL(); return;
L_da1c51: /* da1c51: push 0xde50f8 */
  { uint32_t v = 0xde50f8u; esp -= 4; W32(esp, v); }
/* da1c56: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* da1c58: call dword ptr [0xde8dbc] */
  esp -= 4; W32(esp, 0xda1c5eu); SPILL(); call_ind(R32(0xde8dbcu)); if (g_unwind) return; /* SHELL32!Shell_NotifyIconA */ RELOAD();
L_da1c5e: /* da1c5e: ret  */
  esp += 4; SPILL(); return;
}

void f_da1c70(void) {
  LOAD_REGS();
L_da1c70: /* da1c70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* da1c71: mov ebp, esp */
  ebp = esp;
/* da1c73: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* da1c75: push 0xdba2db */
  { uint32_t v = 0xdba2dbu; esp -= 4; W32(esp, v); }
/* da1c7a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* da1c80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da1c81: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* da1c88: sub esp, 0x830 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x830u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* da1c8e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da1c8f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da1c90: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da1c91: mov edi, ecx */
  edi = ecx;
/* da1c93: mov eax, dword ptr [edi + 0xb8] */
  eax = R32((uint32_t)(edi + 0xb8u));
/* da1c99: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da1c9b: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* da1c9e: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* da1ca5: je 0xda1da3 */
  if (zf) goto L_da1da3;
L_da1cab: /* da1cab: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* da1cae: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* da1cb1: mov ecx, dword ptr [0xde8a10] */
  ecx = R32((uint32_t)(0xde8a10u));
/* da1cb7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* da1cb9: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* da1cbc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da1cbd: push 0xde3ed4 */
  { uint32_t v = 0xde3ed4u; esp -= 4; W32(esp, v); }
/* da1cc2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da1cc3: call dword ptr [0xde89a8] */
  esp -= 4; W32(esp, 0xda1cc9u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* da1cc9: mov eax, dword ptr [0xde51c0] */
  eax = R32((uint32_t)(0xde51c0u));
/* da1cce: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da1cd1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da1cd3: je 0xda1cda */
  if (zf) goto L_da1cda;
L_da1cd5: /* da1cd5: add eax, 0x3c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* da1cd8: jmp 0xda1cdc */
  goto L_da1cdc;
L_da1cda: /* da1cda: xor eax, eax */
  eax = 0;
L_da1cdc: /* da1cdc: mov ecx, dword ptr [edi + 0xb8] */
  ecx = R32((uint32_t)(edi + 0xb8u));
/* da1ce2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* da1ce4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da1ce5: push 0xde3ef4 */
  { uint32_t v = 0xde3ef4u; esp -= 4; W32(esp, v); }
/* da1cea: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xda1cecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da1cec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da1cee: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* da1cf3: lea eax, [ebp - 0x83c] */
  eax = (uint32_t)(ebp + 0xfffff7c4u);
/* da1cf9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da1cfa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da1cfb: call dword ptr [0xde8a68] */
  esp -= 4; W32(esp, 0xda1d01u); SPILL(); f_4e3256(); if (g_unwind) return; /* Core!?ParseToken@@YAHAAPBGPAGHH@Z */ RELOAD();
/* da1d01: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da1d04: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da1d06: je 0xda1da3 */
  if (zf) goto L_da1da3;
L_da1d0c: /* da1d0c: cmp word ptr [ebp - 0x83c], 0x2d */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xfffff7c4u))); uint16_t b = (uint16_t)(0x2du);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* da1d14: je 0xda1da3 */
  if (zf) goto L_da1da3;
L_da1d1a: /* da1d1a: mov eax, dword ptr [0xde51c0] */
  eax = R32((uint32_t)(0xde51c0u));
/* da1d1f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da1d21: je 0xda1d28 */
  if (zf) goto L_da1d28;
L_da1d23: /* da1d23: lea esi, [eax + 0x3c] */
  esi = (uint32_t)(eax + 0x3cu);
/* da1d26: jmp 0xda1d2a */
  goto L_da1d2a;
L_da1d28: /* da1d28: xor esi, esi */
  esi = 0;
L_da1d2a: /* da1d2a: push 0xde51d8 */
  { uint32_t v = 0xde51d8u; esp -= 4; W32(esp, v); }
/* da1d2f: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* da1d32: call dword ptr [0xde88e4] */
  esp -= 4; W32(esp, 0xda1d38u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* da1d38: push 0xde3f08 */
  { uint32_t v = 0xde3f08u; esp -= 4; W32(esp, v); }
/* da1d3d: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* da1d40: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da1d41: mov ecx, eax */
  ecx = eax;
/* da1d43: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* da1d47: call dword ptr [0xde8b60] */
  esp -= 4; W32(esp, 0xda1d4du); SPILL(); f_4e2149(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@PBG@Z */ RELOAD();
/* da1d4d: lea edx, [ebp - 0x83c] */
  edx = (uint32_t)(ebp + 0xfffff7c4u);
/* da1d53: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da1d54: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* da1d57: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da1d58: mov bl, 2 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x2u) & 0xffu);
/* da1d5a: mov ecx, eax */
  ecx = eax;
/* da1d5c: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* da1d5f: call dword ptr [0xde8b60] */
  esp -= 4; W32(esp, 0xda1d65u); SPILL(); f_4e2149(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@PBG@Z */ RELOAD();
/* da1d65: mov ecx, eax */
  ecx = eax;
/* da1d67: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* da1d6b: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xda1d71u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* da1d71: mov ecx, dword ptr [edi + 0xb8] */
  ecx = R32((uint32_t)(edi + 0xb8u));
/* da1d77: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* da1d79: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da1d7a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da1d7b: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xda1d7du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da1d7d: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* da1d80: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* da1d83: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xda1d89u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* da1d89: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* da1d8c: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* da1d90: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xda1d96u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* da1d96: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* da1d99: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* da1d9d: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xda1da3u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_da1da3: /* da1da3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da1da6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da1da7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da1da8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da1daf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da1db0: mov esp, ebp */
  esp = ebp;
/* da1db2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da1db3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_da1db6(void) {
  LOAD_REGS();
L_da1db6: /* da1db6: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* da1db9: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* da1dbe: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* da1dc1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da1dc2: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* da1dc5: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda1dcau); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_da1dca(); return;
}

void f_da1dca(void) {
  LOAD_REGS();
L_da1dca: /* da1dca: push 0xdc3b28 */
  { uint32_t v = 0xdc3b28u; esp -= 4; W32(esp, v); }
/* da1dcf: push 0xde3f14 */
  { uint32_t v = 0xde3f14u; esp -= 4; W32(esp, v); }
/* da1dd4: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xda1ddau); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* da1dda: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da1ddd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da1ddf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da1de1: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda1de6u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_da1de6: guest_badaddr(0xda1de6); return;
}

void f_da1e50(void) {
  LOAD_REGS();
L_da1e50: /* da1e50: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* da1e51: mov ebp, esp */
  ebp = esp;
/* da1e53: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* da1e55: push 0xdba2f0 */
  { uint32_t v = 0xdba2f0u; esp -= 4; W32(esp, v); }
/* da1e5a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* da1e60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da1e61: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* da1e68: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* da1e6b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* da1e6d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da1e6e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da1e6f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da1e70: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* da1e73: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da1e75: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* da1e7c: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0xda1e7fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da1e7f: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* da1e84: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* da1e87: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da1e88: mov dword ptr [ebp - 0x14], 0xde3f1c */
  W32((uint32_t)(ebp + 0xffffffecu), 0xde3f1cu);
/* da1e8f: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda1e94u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_da1e94(); return;
}

void f_da1e94(void) {
  LOAD_REGS();
L_da1e94: /* da1e94: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* da1e97: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* da1e9c: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* da1e9f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da1ea0: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* da1ea3: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda1ea8u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_da1ea8(); return;
}

void f_da1ea8(void) {
  LOAD_REGS();
L_da1ea8: /* da1ea8: push 0xdc3b44 */
  { uint32_t v = 0xdc3b44u; esp -= 4; W32(esp, v); }
/* da1ead: push 0xde3f2c */
  { uint32_t v = 0xde3f2cu; esp -= 4; W32(esp, v); }
/* da1eb2: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xda1eb8u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* da1eb8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da1ebb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da1ebd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da1ebf: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda1ec4u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_da1ec4: guest_badaddr(0xda1ec4); return;
}

void f_da1ef0(void) {
  LOAD_REGS();
L_da1ef0: /* da1ef0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* da1ef1: mov ebp, esp */
  ebp = esp;
/* da1ef3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* da1ef5: push 0xdba300 */
  { uint32_t v = 0xdba300u; esp -= 4; W32(esp, v); }
/* da1efa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* da1f00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da1f01: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* da1f08: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* da1f0b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* da1f0e: cmp eax, 0x9c44 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x9c44u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da1f13: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da1f14: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da1f15: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da1f16: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* da1f19: mov esi, ecx */
  esi = ecx;
/* da1f1b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* da1f22: je 0xda1fc3 */
  if (zf) goto L_da1fc3;
L_da1f28: /* da1f28: cmp eax, 0x9c45 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x9c45u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da1f2d: je 0xda1fca */
  if (zf) goto L_da1fca;
L_da1f33: /* da1f33: cmp eax, 0x9c46 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x9c46u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da1f38: je 0xda1f71 */
  if (zf) goto L_da1f71;
L_da1f3a: /* da1f3a: cmp eax, 0x9c47 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x9c47u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da1f3f: je 0xda1f71 */
  if (zf) goto L_da1f71;
L_da1f41: /* da1f41: cmp eax, 0x9c42 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x9c42u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da1f46: jne 0xda1f5e */
  if (!zf) goto L_da1f5e;
L_da1f48: /* da1f48: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* da1f4b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* da1f4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da1f4e: call dword ptr [0xde8ef4] */
  esp -= 4; W32(esp, 0xda1f54u); SPILL(); call_ind(R32(0xde8ef4u)); if (g_unwind) return; /* USER32!ShowWindow */ RELOAD();
/* da1f54: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* da1f57: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da1f58: call dword ptr [0xde8f74] */
  esp -= 4; W32(esp, 0xda1f5eu); SPILL(); call_ind(R32(0xde8f74u)); if (g_unwind) return; /* USER32!SetForegroundWindow */ RELOAD();
L_da1f5e: /* da1f5e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da1f61: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da1f68: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da1f69: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da1f6a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da1f6b: mov esp, ebp */
  esp = ebp;
/* da1f6d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da1f6e: ret 4 */
  esp += 8; SPILL(); return;
L_da1f71: /* da1f71: mov ecx, dword ptr [esi + 0xb8] */
  ecx = R32((uint32_t)(esi + 0xb8u));
/* da1f77: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da1f79: je 0xda1f5e */
  if (zf) goto L_da1f5e;
L_da1f7b: /* da1f7b: mov eax, dword ptr [0xde51c0] */
  eax = R32((uint32_t)(0xde51c0u));
/* da1f80: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da1f82: je 0xda1fa4 */
  if (zf) goto L_da1fa4;
L_da1f84: /* da1f84: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* da1f86: add eax, 0x3c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* da1f89: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da1f8a: push 0xde3f98 */
  { uint32_t v = 0xde3f98u; esp -= 4; W32(esp, v); }
/* da1f8f: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xda1f91u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da1f91: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da1f94: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da1f9b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da1f9c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da1f9d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da1f9e: mov esp, ebp */
  esp = ebp;
/* da1fa0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da1fa1: ret 4 */
  esp += 8; SPILL(); return;
L_da1fa4: /* da1fa4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* da1fa6: xor eax, eax */
  eax = 0;
/* da1fa8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da1fa9: push 0xde3f98 */
  { uint32_t v = 0xde3f98u; esp -= 4; W32(esp, v); }
/* da1fae: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xda1fb0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da1fb0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da1fb3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da1fba: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da1fbb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da1fbc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da1fbd: mov esp, ebp */
  esp = ebp;
/* da1fbf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da1fc0: ret 4 */
  esp += 8; SPILL(); return;
L_da1fc3: /* da1fc3: mov eax, 0xde3f34 */
  eax = 0xde3f34u;
/* da1fc8: jmp 0xda1fcf */
  goto L_da1fcf;
L_da1fca: /* da1fca: mov eax, 0xde3f54 */
  eax = 0xde3f54u;
L_da1fcf: /* da1fcf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da1fd0: mov eax, dword ptr [0xde8a10] */
  eax = R32((uint32_t)(0xde8a10u));
/* da1fd5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* da1fd7: push 0xde3f70 */
  { uint32_t v = 0xde3f70u; esp -= 4; W32(esp, v); }
/* da1fdc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da1fdd: call dword ptr [0xde89a8] */
  esp -= 4; W32(esp, 0xda1fe3u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* da1fe3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da1fe6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da1fe8: call dword ptr [0xde8a6c] */
  esp -= 4; W32(esp, 0xda1feeu); SPILL(); f_4e3201(); if (g_unwind) return; /* Core!?appRequestExit@@YAXH@Z */ RELOAD();
/* da1fee: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da1ff1: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da1ff4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da1ff5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da1ff6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da1ffd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da1ffe: mov esp, ebp */
  esp = ebp;
/* da2000: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da2001: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da2004(void) {
  LOAD_REGS();
L_da2004: /* da2004: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* da2007: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* da200c: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* da200f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da2010: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* da2013: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda2018u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_da2018(); return;
}

void f_da2018(void) {
  LOAD_REGS();
L_da2018: /* da2018: push 0xdc3b68 */
  { uint32_t v = 0xdc3b68u; esp -= 4; W32(esp, v); }
/* da201d: push 0xde3fb0 */
  { uint32_t v = 0xde3fb0u; esp -= 4; W32(esp, v); }
/* da2022: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xda2028u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* da2028: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da202b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da202d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da202f: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda2034u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_da2034: guest_badaddr(0xda2034); return;
}

void f_da20a0(void) {
  LOAD_REGS();
L_da20a0: /* da20a0: xor eax, eax */
  eax = 0;
/* da20a2: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_da20c0(void) {
  LOAD_REGS();
L_da20c0: /* da20c0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* da20c4: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* da20c7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da20c8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da20c9: call dword ptr [0xde8e48] */
  esp -= 4; W32(esp, 0xda20cfu); SPILL(); call_ind(R32(0xde8e48u)); if (g_unwind) return; /* USER32!EndDialog */ RELOAD();
/* da20cf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da20f0(void) {
  LOAD_REGS();
L_da20f0: /* da20f0: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* da20f3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* da20f5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da20f6: call dword ptr [0xde8e48] */
  esp -= 4; W32(esp, 0xda20fcu); SPILL(); call_ind(R32(0xde8e48u)); if (g_unwind) return; /* USER32!EndDialog */ RELOAD();
/* da20fc: ret  */
  esp += 4; SPILL(); return;
}

void f_da2110(void) {
  LOAD_REGS();
L_da2110: /* da2110: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* da2113: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da2115: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da2116: call dword ptr [0xde8e48] */
  esp -= 4; W32(esp, 0xda211cu); SPILL(); call_ind(R32(0xde8e48u)); if (g_unwind) return; /* USER32!EndDialog */ RELOAD();
/* da211c: ret  */
  esp += 4; SPILL(); return;
}

void f_da2130(void) {
  LOAD_REGS();
L_da2130: /* da2130: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da2131: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da2132: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* da2136: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da2137: mov esi, ecx */
  esi = ecx;
/* da2139: call 0xd8135c */
  esp -= 4; W32(esp, 0xda213eu); SPILL(); f_d8135c(); if (g_unwind) return; RELOAD();
/* da213e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da2140: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da2141: je 0xda2151 */
  if (zf) goto L_da2151;
L_da2143: /* da2143: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* da2146: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da2147: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* da214b: jmp dword ptr [0xde8f40] */
  SPILL(); call_ind(R32(0xde8f40u)); return; /* USER32!BringWindowToTop */
L_da2151: /* da2151: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da2152: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da2170(void) {
  LOAD_REGS();
L_da2170: /* da2170: cmp word ptr [esp + 4], 0x1b */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esp + 0x4u))); uint16_t b = (uint16_t)(0x1bu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* da2176: jne 0xda2185 */
  if (!zf) goto L_da2185;
L_da2178: /* da2178: mov dword ptr [ecx + 0x74], 0 */
  W32((uint32_t)(ecx + 0x74u), 0x0u);
/* da217f: call dword ptr [0xde8e38] */
  esp -= 4; W32(esp, 0xda2185u); SPILL(); call_ind(R32(0xde8e38u)); if (g_unwind) return; /* USER32!ReleaseCapture */ RELOAD();
L_da2185: /* da2185: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da21a0(void) {
  LOAD_REGS();
L_da21a0: /* da21a0: jmp dword ptr [0xde8e38] */
  SPILL(); call_ind(R32(0xde8e38u)); return; /* USER32!ReleaseCapture */
}

void f_da21c0(void) {
  LOAD_REGS();
L_da21c0: /* da21c0: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* da21c5: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da21c8: mov eax, dword ptr [ecx + 0x3c] */
  eax = R32((uint32_t)(ecx + 0x3cu));
/* da21cb: mov ecx, dword ptr [0xde50e8] */
  ecx = R32((uint32_t)(0xde50e8u));
/* da21d1: je 0xda21f8 */
  if (zf) goto L_da21f8;
L_da21d3: /* da21d3: xor edx, edx */
  edx = 0;
/* da21d5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da21d7: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* da21da: add edx, 0x44e */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x44eu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* da21e0: movzx eax, dx */
  eax = (uint32_t)((edx & 0xffffu));
/* da21e3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da21e4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da21e5: call dword ptr [0xde8df0] */
  esp -= 4; W32(esp, 0xda21ebu); SPILL(); call_ind(R32(0xde8df0u)); if (g_unwind) return; /* USER32!LoadCursorW */ RELOAD();
/* da21eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da21ec: call dword ptr [0xde8e90] */
  esp -= 4; W32(esp, 0xda21f2u); SPILL(); call_ind(R32(0xde8e90u)); if (g_unwind) return; /* USER32!SetCursor */ RELOAD();
/* da21f2: mov eax, 1 */
  eax = 0x1u;
/* da21f7: ret  */
  esp += 4; SPILL(); return;
L_da21f8: /* da21f8: xor edx, edx */
  edx = 0;
/* da21fa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da21fc: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* da21ff: add edx, 0x44e */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x44eu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* da2205: movzx eax, dx */
  eax = (uint32_t)((edx & 0xffffu));
/* da2208: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da2209: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da220a: call dword ptr [0xde8dec] */
  esp -= 4; W32(esp, 0xda2210u); SPILL(); call_ind(R32(0xde8decu)); if (g_unwind) return; /* USER32!LoadCursorA */ RELOAD();
/* da2210: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da2211: call dword ptr [0xde8e90] */
  esp -= 4; W32(esp, 0xda2217u); SPILL(); call_ind(R32(0xde8e90u)); if (g_unwind) return; /* USER32!SetCursor */ RELOAD();
/* da2217: mov eax, 1 */
  eax = 0x1u;
/* da221c: ret  */
  esp += 4; SPILL(); return;
}

void f_da2240(void) {
  LOAD_REGS();
L_da2240: /* da2240: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da2241: mov esi, ecx */
  esi = ecx;
/* da2243: call dword ptr [0xde8e38] */
  esp -= 4; W32(esp, 0xda2249u); SPILL(); call_ind(R32(0xde8e38u)); if (g_unwind) return; /* USER32!ReleaseCapture */ RELOAD();
/* da2249: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* da224c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da224e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da2250: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da2251: call dword ptr [0xde8f2c] */
  esp -= 4; W32(esp, 0xda2257u); SPILL(); call_ind(R32(0xde8f2cu)); if (g_unwind) return; /* USER32!InvalidateRect */ RELOAD();
/* da2257: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da2258: ret  */
  esp += 4; SPILL(); return;
}

void f_da2270(void) {
  LOAD_REGS();
L_da2270: /* da2270: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da2271: mov esi, ecx */
  esi = ecx;
/* da2273: call dword ptr [0xde88e0] */
  esp -= 4; W32(esp, 0xda2279u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* da2279: mov eax, esi */
  eax = esi;
/* da227b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da227c: ret  */
  esp += 4; SPILL(); return;
}

void f_da2290(void) {
  LOAD_REGS();
L_da2290: /* da2290: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da2291: mov esi, ecx */
  esi = ecx;
/* da2293: call dword ptr [0xde88e0] */
  esp -= 4; W32(esp, 0xda2299u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* da2299: mov eax, esi */
  eax = esi;
/* da229b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da229c: ret  */
  esp += 4; SPILL(); return;
}

void f_da22b0(void) {
  LOAD_REGS();
L_da22b0: /* da22b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da22b1: mov esi, ecx */
  esi = ecx;
/* da22b3: call dword ptr [0xde88e0] */
  esp -= 4; W32(esp, 0xda22b9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* da22b9: mov eax, esi */
  eax = esi;
/* da22bb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da22bc: ret  */
  esp += 4; SPILL(); return;
}

void f_da22d0(void) {
  LOAD_REGS();
L_da22d0: /* da22d0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* da22d2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* da22d6: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* da22d9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da22f0(void) {
  LOAD_REGS();
L_da22f0: /* da22f0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* da22f4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da22f5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* da22f7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da22f8: mov esi, ecx */
  esi = ecx;
/* da22fa: call dword ptr [0xde8a70] */
  esp -= 4; W32(esp, 0xda2300u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* da2300: mov eax, esi */
  eax = esi;
/* da2302: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da2303: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da2320(void) {
  LOAD_REGS();
L_da2320: /* da2320: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* da2322: add eax, dword ptr [esp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x4u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* da2326: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da2340(void) {
  LOAD_REGS();
L_da2340: /* da2340: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* da2344: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* da2346: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da2347: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xda234du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* da234d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da2360(void) {
  LOAD_REGS();
L_da2360: /* da2360: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* da2364: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* da2366: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da2367: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xda236du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* da236d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da2380(void) {
  LOAD_REGS();
L_da2380: /* da2380: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da2381: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* da2382: mov ebp, dword ptr [0xde88a8] */
  ebp = R32((uint32_t)(0xde88a8u));
/* da2388: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da2389: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da238a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* da238e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* da2390: mov esi, ecx */
  esi = ecx;
/* da2392: jge 0xda23a8 */
  if ((sf == of)) goto L_da23a8;
L_da2394: /* da2394: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* da2399: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* da239e: push 0xde1e64 */
  { uint32_t v = 0xde1e64u; esp -= 4; W32(esp, v); }
/* da23a3: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xda23a5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da23a5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_da23a8: /* da23a8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da23ab: jle 0xda23c1 */
  if ((zf || sf != of)) goto L_da23c1;
L_da23ad: /* da23ad: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* da23b2: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* da23b7: push 0xde1e50 */
  { uint32_t v = 0xde1e50u; esp -= 4; W32(esp, v); }
/* da23bc: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xda23beu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da23be: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_da23c1: /* da23c1: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* da23c5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* da23c8: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* da23cb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da23cd: jle 0xda23e3 */
  if ((zf || sf != of)) goto L_da23e3;
L_da23cf: /* da23cf: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* da23d4: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* da23d9: push 0xde1e34 */
  { uint32_t v = 0xde1e34u; esp -= 4; W32(esp, v); }
/* da23de: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xda23e0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da23e0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_da23e3: /* da23e3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* da23e5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da23e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da23e7: mov ecx, esi */
  ecx = esi;
/* da23e9: call dword ptr [0xde88fc] */
  esp -= 4; W32(esp, 0xda23efu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* da23ef: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da23f0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da23f1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da23f2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da23f3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_da2420(void) {
  LOAD_REGS();
L_da2420: /* da2420: mov eax, 1 */
  eax = 0x1u;
/* da2425: ret  */
  esp += 4; SPILL(); return;
}

void f_da2440(void) {
  LOAD_REGS();
L_da2440: /* da2440: mov eax, 1 */
  eax = 0x1u;
/* da2445: ret  */
  esp += 4; SPILL(); return;
}

void f_da2460(void) {
  LOAD_REGS();
L_da2460: /* da2460: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* da2464: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* da2465: js 0xda248d */
  if (sf) goto L_da248d;
L_da2467: /* da2467: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da2468: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* da246c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* da246d: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* da2471: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da2472: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* da2476: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da2477: lea edi, [eax + 1] */
  edi = (uint32_t)(eax + 0x1u);
/* da247a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_da2480: /* da2480: mov ecx, esi */
  ecx = esi;
/* da2482: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xda2484u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da2484: add esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* da2486: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* da2487: jne 0xda2480 */
  if (!zf) goto L_da2480;
L_da2489: /* da2489: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da248a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da248b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da248c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_da248d: /* da248d: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_da24a0(void) {
  LOAD_REGS();
L_da24a0: /* da24a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* da24a4: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* da24a7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da24c0(void) {
  LOAD_REGS();
L_da24c0: /* da24c0: mov eax, 2 */
  eax = 0x2u;
/* da24c5: ret  */
  esp += 4; SPILL(); return;
}

void f_da24e0(void) {
  LOAD_REGS();
L_da24e0: /* da24e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* da24e4: cmp eax, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da24e6: jl 0xda2503 */
  if ((sf != of)) goto L_da2503;
L_da24e8: /* da24e8: cmp eax, dword ptr [ecx + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da24eb: jge 0xda2503 */
  if ((sf == of)) goto L_da2503;
L_da24ed: /* da24ed: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* da24f1: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da24f4: jl 0xda2503 */
  if ((sf != of)) goto L_da2503;
L_da24f6: /* da24f6: cmp eax, dword ptr [ecx + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da24f9: jge 0xda2503 */
  if ((sf == of)) goto L_da2503;
L_da24fb: /* da24fb: mov eax, 1 */
  eax = 0x1u;
/* da2500: ret 8 */
  esp += 12; SPILL(); return;
L_da2503: /* da2503: xor eax, eax */
  eax = 0;
/* da2505: ret 8 */
  esp += 12; SPILL(); return;
}

void f_da2520(void) {
  LOAD_REGS();
L_da2520: /* da2520: mov eax, ecx */
  eax = ecx;
/* da2522: mov dword ptr [eax], 0xdc198c */
  W32((uint32_t)(eax), 0xdc198cu);
/* da2528: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da2540(void) {
  LOAD_REGS();
L_da2540: /* da2540: mov eax, ecx */
  eax = ecx;
/* da2542: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da2560(void) {
  LOAD_REGS();
L_da2560: /* da2560: mov eax, ecx */
  eax = ecx;
/* da2562: mov dword ptr [eax], 0xdbf5f4 */
  W32((uint32_t)(eax), 0xdbf5f4u);
/* da2568: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da2580(void) {
  LOAD_REGS();
L_da2580: /* da2580: mov eax, ecx */
  eax = ecx;
/* da2582: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da25a0(void) {
  LOAD_REGS();
L_da25a0: /* da25a0: xor eax, eax */
  eax = 0;
/* da25a2: mov dword ptr [ecx], 0xdbf5f8 */
  W32((uint32_t)(ecx), 0xdbf5f8u);
/* da25a8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* da25ab: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* da25ae: ret  */
  esp += 4; SPILL(); return;
}

void f_da25c0(void) {
  LOAD_REGS();
L_da25c0: /* da25c0: mov eax, ecx */
  eax = ecx;
/* da25c2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* da25c6: mov dword ptr [eax], 0xdc19a0 */
  W32((uint32_t)(eax), 0xdc19a0u);
/* da25cc: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* da25cf: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* da25d2: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* da25d5: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* da25d8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da25f0(void) {
  LOAD_REGS();
L_da25f0: /* da25f0: mov eax, ecx */
  eax = ecx;
/* da25f2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* da25f6: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* da25f9: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* da25fc: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* da25ff: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* da2602: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da2620(void) {
  LOAD_REGS();
L_da2620: /* da2620: xor eax, eax */
  eax = 0;
/* da2622: mov dword ptr [ecx], 0xdc19a0 */
  W32((uint32_t)(ecx), 0xdc19a0u);
/* da2628: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* da262b: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* da262e: ret  */
  esp += 4; SPILL(); return;
}

void f_da2640(void) {
  LOAD_REGS();
L_da2640: /* da2640: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* da2644: mov cx, word ptr [eax] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* da2647: test cx, cx */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* da264a: mov edx, 0xde58a8 */
  edx = 0xde58a8u;
/* da264f: je 0xda267f */
  if (zf) goto L_da267f;
L_da2651: /* da2651: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* da2654: cmp cx, 0x5c */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x5cu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* da2658: jne 0xda266d */
  if (!zf) goto L_da266d;
L_da265a: /* da265a: mov cx, word ptr [eax] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* da265d: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* da2660: cmp cx, 0x6e */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x6eu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* da2664: jne 0xda266d */
  if (!zf) goto L_da266d;
L_da2666: /* da2666: mov ecx, 0xa */
  ecx = 0xau;
/* da266b: jmp 0xda2671 */
  goto L_da2671;
L_da266d: /* da266d: mov cx, word ptr [eax - 2] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0xfffffffeu))) & 0xffffu);
L_da2671: /* da2671: mov word ptr [edx], cx */
  W16((uint32_t)(edx), (ecx & 0xffffu));
/* da2674: mov cx, word ptr [eax] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* da2677: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* da267a: test cx, cx */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* da267d: jne 0xda2651 */
  if (!zf) goto L_da2651;
L_da267f: /* da267f: mov word ptr [edx], 0 */
  W16((uint32_t)(edx), 0x0u);
/* da2684: mov eax, 0xde58a8 */
  eax = 0xde58a8u;
/* da2689: ret  */
  esp += 4; SPILL(); return;
}

void f_da26b0(void) {
  LOAD_REGS();
L_da26b0: /* da26b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* da26b1: mov ebp, esp */
  ebp = esp;
/* da26b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* da26b5: push 0xdba310 */
  { uint32_t v = 0xdba310u; esp -= 4; W32(esp, v); }
/* da26ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* da26c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da26c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* da26c8: sub esp, 0xc78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xc78u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* da26ce: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* da26d1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da26d2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da26d3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da26d4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* da26d7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da26d8: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* da26df: call dword ptr [0xde8e5c] */
  esp -= 4; W32(esp, 0xda26e5u); SPILL(); call_ind(R32(0xde8e5cu)); if (g_unwind) return; /* USER32!GetMenuItemCount */ RELOAD();
/* da26e5: mov esi, eax */
  esi = eax;
L_da26e7: /* da26e7: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* da26e8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* da26ea: jl 0xda297a */
  if ((sf != of)) goto L_da297a;
L_da26f0: /* da26f0: mov ecx, dword ptr [0xde88f8] */
  ecx = R32((uint32_t)(0xde88f8u));
/* da26f6: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da26f9: je 0xda289a */
  if (zf) goto L_da289a;
L_da26ff: /* da26ff: mov edx, dword ptr [0xde88ac] */
  edx = R32((uint32_t)(0xde88acu));
/* da2705: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da2708: jne 0xda289a */
  if (!zf) goto L_da289a;
L_da270e: /* da270e: lea eax, [ebp - 0x84] */
  eax = (uint32_t)(ebp + 0xffffff7cu);
/* da2714: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* da2717: mov ecx, 0x30 */
  ecx = 0x30u;
/* da271c: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* da271f: xor eax, eax */
  eax = 0;
/* da2721: mov ebx, ecx */
  ebx = ecx;
/* da2723: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* da2726: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* da2729: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* da272b: mov ecx, ebx */
  ecx = ebx;
/* da272d: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* da272f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* da2732: lea edx, [ebp - 0x84] */
  edx = (uint32_t)(ebp + 0xffffff7cu);
/* da2738: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da2739: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* da273b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da273c: lea ecx, [ebp - 0x484] */
  ecx = (uint32_t)(ebp + 0xfffffb7cu);
/* da2742: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da2743: mov dword ptr [ebp - 0x84], 0x30 */
  W32((uint32_t)(ebp + 0xffffff7cu), 0x30u);
/* da274d: mov dword ptr [ebp - 0x80], 0x14 */
  W32((uint32_t)(ebp + 0xffffff80u), 0x14u);
/* da2754: mov dword ptr [ebp - 0x5c], 0x400 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x400u);
/* da275b: mov dword ptr [ebp - 0x60], ecx */
  W32((uint32_t)(ebp + 0xffffffa0u), ecx);
/* da275e: call dword ptr [0xde8e58] */
  esp -= 4; W32(esp, 0xda2764u); SPILL(); call_ind(R32(0xde8e58u)); if (g_unwind) return; /* USER32!GetMenuItemInfoA */ RELOAD();
/* da2764: mov eax, dword ptr [ebp - 0x60] */
  eax = R32((uint32_t)(ebp + 0xffffffa0u));
/* da2767: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da2769: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* da276c: je 0xda2879 */
  if (zf) goto L_da2879;
L_da2772: /* da2772: cmp byte ptr [eax], 0x49 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x49u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* da2775: jne 0xda2879 */
  if (!zf) goto L_da2879;
L_da277b: /* da277b: cmp byte ptr [eax + 1], 0x44 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x1u))); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* da277f: jne 0xda2879 */
  if (!zf) goto L_da2879;
L_da2785: /* da2785: cmp byte ptr [eax + 2], 0x5f */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x2u))); uint8_t b = (uint8_t)(0x5fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* da2789: jne 0xda2879 */
  if (!zf) goto L_da2879;
L_da278f: /* da278f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da2791: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da2792: call dword ptr [0xde88ec] */
  esp -= 4; W32(esp, 0xda2798u); SPILL(); f_4e161d(); if (g_unwind) return; /* Core!?appFromAnsi@@YAPBGPBDPAG@Z */ RELOAD();
/* da2798: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* da279b: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* da279e: mov edi, dword ptr [0xde8914] */
  edi = R32((uint32_t)(0xde8914u));
/* da27a4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da27a7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da27a9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da27ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da27ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da27ad: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da27ae: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xda27b0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da27b0: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da27b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da27b4: call dword ptr [0xde88c8] */
  esp -= 4; W32(esp, 0xda27bau); SPILL(); f_4e3e36(); if (g_unwind) return; /* Core!?winGetSizeANSI@@YAHPBG@Z */ RELOAD();
/* da27ba: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da27bd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da27bf: jne 0xda27c6 */
  if (!zf) goto L_da27c6;
L_da27c1: /* da27c1: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* da27c4: jmp 0xda2805 */
  goto L_da2805;
L_da27c6: /* da27c6: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* da27c9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da27cb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da27cc: call dword ptr [0xde88ec] */
  esp -= 4; W32(esp, 0xda27d2u); SPILL(); f_4e161d(); if (g_unwind) return; /* Core!?appFromAnsi@@YAPBGPBDPAG@Z */ RELOAD();
/* da27d2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da27d5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da27d7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da27d9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da27da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da27db: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* da27de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da27df: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xda27e1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da27e1: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da27e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da27e5: call dword ptr [0xde88c8] */
  esp -= 4; W32(esp, 0xda27ebu); SPILL(); f_4e3e36(); if (g_unwind) return; /* Core!?winGetSizeANSI@@YAHPBG@Z */ RELOAD();
/* da27eb: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* da27ee: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* da27f1: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* da27f4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da27f7: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* da27fa: call 0xdb7b00 */
  esp -= 4; W32(esp, 0xda27ffu); SPILL(); f_db7b00(); if (g_unwind) return; RELOAD();
/* da27ff: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* da2802: mov dword ptr [ebp - 0x14], esp */
  W32((uint32_t)(ebp + 0xffffffecu), esp);
L_da2805: /* da2805: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* da2808: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da280a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da280b: call dword ptr [0xde88ec] */
  esp -= 4; W32(esp, 0xda2811u); SPILL(); f_4e161d(); if (g_unwind) return; /* Core!?appFromAnsi@@YAPBGPBDPAG@Z */ RELOAD();
/* da2811: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* da2814: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da2817: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da2819: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da281b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da281c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da281d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da281e: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xda2820u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da2820: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da2823: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da2824: call dword ptr [0xde88c8] */
  esp -= 4; W32(esp, 0xda282au); SPILL(); f_4e3e36(); if (g_unwind) return; /* Core!?winGetSizeANSI@@YAHPBG@Z */ RELOAD();
/* da282a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da282d: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* da2830: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* da2833: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da2835: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da2836: call dword ptr [0xde88ec] */
  esp -= 4; W32(esp, 0xda283cu); SPILL(); f_4e161d(); if (g_unwind) return; /* Core!?appFromAnsi@@YAPBGPBDPAG@Z */ RELOAD();
/* da283c: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* da283f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da2842: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da2844: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da2846: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da2847: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da2848: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da2849: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xda284bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da284b: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* da284e: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da2851: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da2852: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da2853: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* da2856: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da2857: call dword ptr [0xde88c4] */
  esp -= 4; W32(esp, 0xda285du); SPILL(); f_4e267b(); if (g_unwind) return; /* Core!?winToANSI@@YAPADPADPBGH@Z */ RELOAD();
/* da285d: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* da2860: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da2863: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* da2869: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da286a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* da286c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da286d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da286e: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
/* da2871: call dword ptr [0xde8e54] */
  esp -= 4; W32(esp, 0xda2877u); SPILL(); call_ind(R32(0xde8e54u)); if (g_unwind) return; /* USER32!SetMenuItemInfoA */ RELOAD();
/* da2877: jmp 0xda287c */
  goto L_da287c;
L_da2879: /* da2879: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
L_da287c: /* da287c: mov eax, dword ptr [ebp - 0x70] */
  eax = R32((uint32_t)(ebp + 0xffffff90u));
/* da287f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da2881: je 0xda26e7 */
  if (zf) goto L_da26e7;
L_da2887: /* da2887: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* da288a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da288b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da288c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da288d: call 0xd827f7 */
  esp -= 4; W32(esp, 0xda2892u); SPILL(); f_d827f7(); if (g_unwind) return; RELOAD();
/* da2892: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da2895: jmp 0xda26e7 */
  goto L_da26e7;
L_da289a: /* da289a: lea edx, [ebp - 0x54] */
  edx = (uint32_t)(ebp + 0xffffffacu);
/* da289d: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* da28a0: mov ecx, 0x30 */
  ecx = 0x30u;
/* da28a5: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* da28a8: xor eax, eax */
  eax = 0;
/* da28aa: mov ebx, ecx */
  ebx = ecx;
/* da28ac: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* da28af: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* da28b2: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* da28b4: mov ecx, ebx */
  ecx = ebx;
/* da28b6: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* da28b8: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* da28bb: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* da28be: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da28bf: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* da28c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da28c2: lea eax, [ebp - 0xc84] */
  eax = (uint32_t)(ebp + 0xfffff37cu);
/* da28c8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da28c9: mov dword ptr [ebp - 0x54], 0x30 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x30u);
/* da28d0: mov dword ptr [ebp - 0x50], 0x14 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x14u);
/* da28d7: mov dword ptr [ebp - 0x2c], 0x400 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x400u);
/* da28de: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* da28e1: call dword ptr [0xde8e50] */
  esp -= 4; W32(esp, 0xda28e7u); SPILL(); call_ind(R32(0xde8e50u)); if (g_unwind) return; /* USER32!GetMenuItemInfoW */ RELOAD();
/* da28e7: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* da28ea: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da28ec: je 0xda2929 */
  if (zf) goto L_da2929;
L_da28ee: /* da28ee: cmp word ptr [eax], 0x49 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x49u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* da28f2: jne 0xda2929 */
  if (!zf) goto L_da2929;
L_da28f4: /* da28f4: cmp word ptr [eax + 2], 0x44 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x2u))); uint16_t b = (uint16_t)(0x44u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* da28f9: jne 0xda2929 */
  if (!zf) goto L_da2929;
L_da28fb: /* da28fb: cmp word ptr [eax + 4], 0x5f */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x4u))); uint16_t b = (uint16_t)(0x5fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* da2900: jne 0xda2929 */
  if (!zf) goto L_da2929;
L_da2902: /* da2902: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* da2905: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da2907: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da2909: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da290a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da290b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* da290e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da290f: call dword ptr [0xde8914] */
  esp -= 4; W32(esp, 0xda2915u); SPILL(); f_4e43db(); if (g_unwind) return; /* Core!?Localize@@YAPBGPBG000H@Z */ RELOAD();
/* da2915: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da2918: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* da291b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da291c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* da291e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da291f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da2920: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* da2923: call dword ptr [0xde8e4c] */
  esp -= 4; W32(esp, 0xda2929u); SPILL(); call_ind(R32(0xde8e4cu)); if (g_unwind) return; /* USER32!SetMenuItemInfoW */ RELOAD();
L_da2929: /* da2929: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* da292c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da292e: je 0xda26e7 */
  if (zf) goto L_da26e7;
L_da2934: /* da2934: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* da2937: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* da293a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da293b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da293c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da293d: call 0xd827f7 */
  esp -= 4; W32(esp, 0xda2942u); SPILL(); f_d827f7(); if (g_unwind) return; RELOAD();
/* da2942: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da2945: jmp 0xda26e7 */
  goto L_da26e7;
L_da297a: /* da297a: lea esp, [ebp - 0xc90] */
  esp = (uint32_t)(ebp + 0xfffff370u);
/* da2980: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da2983: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da298a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da298b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da298c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da298d: mov esp, ebp */
  esp = ebp;
/* da298f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da2990: ret  */
  esp += 4; SPILL(); return;
}

void f_da294a(void) {
  LOAD_REGS();
L_da294a: /* da294a: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* da294d: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* da2952: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* da2955: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da2956: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* da2959: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda295eu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_da295e(); return;
}

void f_da295e(void) {
  LOAD_REGS();
L_da295e: /* da295e: push 0xdc3b90 */
  { uint32_t v = 0xdc3b90u; esp -= 4; W32(esp, v); }
/* da2963: push 0xde1dd8 */
  { uint32_t v = 0xde1dd8u; esp -= 4; W32(esp, v); }
/* da2968: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xda296eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* da296e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da2971: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da2973: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da2975: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda297au); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
/* da297a: lea esp, [ebp - 0xc90] */
  esp = (uint32_t)(ebp + 0xfffff370u);
/* da2980: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da2983: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da298a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da298b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da298c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da298d: mov esp, ebp */
  esp = ebp;
/* da298f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da2990: ret  */
  esp += 4; SPILL(); return;
}

void f_da2a60(void) {
  LOAD_REGS();
L_da2a60: /* da2a60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* da2a61: mov ebp, esp */
  ebp = esp;
/* da2a63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* da2a65: push 0xdba320 */
  { uint32_t v = 0xdba320u; esp -= 4; W32(esp, v); }
/* da2a6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* da2a70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da2a71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* da2a78: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* da2a7b: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* da2a80: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da2a83: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da2a84: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da2a85: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da2a86: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* da2a89: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* da2a90: je 0xda2aa3 */
  if (zf) goto L_da2aa3;
L_da2a92: /* da2a92: movzx ecx, word ptr [ebp + 0xc] */
  ecx = (uint32_t)(R16((uint32_t)(ebp + 0xcu)));
/* da2a96: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* da2a99: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da2a9a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da2a9b: call dword ptr [0xde8e64] */
  esp -= 4; W32(esp, 0xda2aa1u); SPILL(); call_ind(R32(0xde8e64u)); if (g_unwind) return; /* USER32!LoadMenuW */ RELOAD();
/* da2aa1: jmp 0xda2ab2 */
  goto L_da2ab2;
L_da2aa3: /* da2aa3: movzx eax, word ptr [ebp + 0xc] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xcu)));
/* da2aa7: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* da2aaa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da2aab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da2aac: call dword ptr [0xde8e60] */
  esp -= 4; W32(esp, 0xda2ab2u); SPILL(); call_ind(R32(0xde8e60u)); if (g_unwind) return; /* USER32!LoadMenuA */ RELOAD();
L_da2ab2: /* da2ab2: mov esi, eax */
  esi = eax;
/* da2ab4: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da2ab6: jne 0xda2ad7 */
  if (!zf) goto L_da2ad7;
L_da2ab8: /* da2ab8: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* da2abb: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* da2abe: mov ecx, dword ptr [0xde89ac] */
  ecx = R32((uint32_t)(0xde89acu));
/* da2ac4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da2ac5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* da2ac7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da2ac8: push 0xde4528 */
  { uint32_t v = 0xde4528u; esp -= 4; W32(esp, v); }
/* da2acd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da2ace: call dword ptr [0xde89a8] */
  esp -= 4; W32(esp, 0xda2ad4u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* da2ad4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_da2ad7: /* da2ad7: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* da2ada: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* da2add: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da2ade: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da2adf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da2ae0: call 0xd827f7 */
  esp -= 4; W32(esp, 0xda2ae5u); SPILL(); f_d827f7(); if (g_unwind) return; RELOAD();
/* da2ae5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da2ae8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da2aeb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da2aec: mov eax, esi */
  eax = esi;
/* da2aee: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da2aef: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da2af6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da2af7: mov esp, ebp */
  esp = ebp;
/* da2af9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da2afa: ret  */
  esp += 4; SPILL(); return;
}

void f_da2afb(void) {
  LOAD_REGS();
L_da2afb: /* da2afb: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* da2afe: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* da2b03: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* da2b06: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da2b07: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* da2b0a: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda2b0fu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_da2b0f(); return;
}

void f_da2b0f(void) {
  LOAD_REGS();
L_da2b0f: /* da2b0f: push 0xdc3bb8 */
  { uint32_t v = 0xdc3bb8u; esp -= 4; W32(esp, v); }
/* da2b14: push 0xde1dd8 */
  { uint32_t v = 0xde1dd8u; esp -= 4; W32(esp, v); }
/* da2b19: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xda2b1fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* da2b1f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da2b22: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da2b24: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da2b26: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda2b2bu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_da2b2b: guest_badaddr(0xda2b2b); return;
}

void f_da2b70(void) {
  LOAD_REGS();
L_da2b70: /* da2b70: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* da2b74: mov eax, ecx */
  eax = ecx;
/* da2b76: xor ecx, ecx */
  ecx = 0;
/* da2b78: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* da2b7a: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* da2b7d: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* da2b80: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* da2b83: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da2ba0(void) {
  LOAD_REGS();
L_da2ba0: /* da2ba0: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* da2ba3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da2ba5: je 0xda2bb5 */
  if (zf) goto L_da2bb5;
L_da2ba7: /* da2ba7: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* da2baa: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da2bac: jne 0xda2bb5 */
  if (!zf) goto L_da2bb5;
L_da2bae: /* da2bae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da2baf: call dword ptr [0xde8c5c] */
  esp -= 4; W32(esp, 0xda2bb5u); SPILL(); call_ind(R32(0xde8c5cu)); if (g_unwind) return; /* GDI32!DeleteObject */ RELOAD();
L_da2bb5: /* da2bb5: ret  */
  esp += 4; SPILL(); return;
}

void f_da2bd0(void) {
  LOAD_REGS();
L_da2bd0: /* da2bd0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da2bf0(void) {
  LOAD_REGS();
L_da2bf0: /* da2bf0: xor eax, eax */
  eax = 0;
/* da2bf2: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* da2bf4: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* da2bf7: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* da2bfa: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* da2bfd: ret  */
  esp += 4; SPILL(); return;
}

void f_da2c10(void) {
  LOAD_REGS();
L_da2c10: /* da2c10: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* da2c14: push 0xde4568 */
  { uint32_t v = 0xde4568u; esp -= 4; W32(esp, v); }
/* da2c19: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da2c1a: call 0xd8218f */
  esp -= 4; W32(esp, 0xda2c1fu); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da2c1f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da2c22: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da2c40(void) {
  LOAD_REGS();
L_da2c40: /* da2c40: mov eax, 0xde1dfc */
  eax = 0xde1dfcu;
/* da2c45: ret  */
  esp += 4; SPILL(); return;
}

void f_da2c60(void) {
  LOAD_REGS();
L_da2c60: /* da2c60: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* da2c64: push 0xde4580 */
  { uint32_t v = 0xde4580u; esp -= 4; W32(esp, v); }
/* da2c69: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da2c6a: call 0xd8218f */
  esp -= 4; W32(esp, 0xda2c6fu); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da2c6f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da2c72: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da2c90(void) {
  LOAD_REGS();
L_da2c90: /* da2c90: mov eax, 0xde1dfc */
  eax = 0xde1dfcu;
/* da2c95: ret  */
  esp += 4; SPILL(); return;
}

void f_da2cb0(void) {
  LOAD_REGS();
L_da2cb0: /* da2cb0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* da2cb4: push 0xde45a4 */
  { uint32_t v = 0xde45a4u; esp -= 4; W32(esp, v); }
/* da2cb9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da2cba: call 0xd8218f */
  esp -= 4; W32(esp, 0xda2cbfu); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da2cbf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da2cc2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da2ce0(void) {
  LOAD_REGS();
L_da2ce0: /* da2ce0: mov eax, 0xde1dfc */
  eax = 0xde1dfcu;
/* da2ce5: ret  */
  esp += 4; SPILL(); return;
}

void f_da2d00(void) {
  LOAD_REGS();
L_da2d00: /* da2d00: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* da2d04: push 0xde45c8 */
  { uint32_t v = 0xde45c8u; esp -= 4; W32(esp, v); }
/* da2d09: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da2d0a: call 0xd8218f */
  esp -= 4; W32(esp, 0xda2d0fu); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da2d0f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da2d12: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da2d30(void) {
  LOAD_REGS();
L_da2d30: /* da2d30: mov eax, 0xde1dfc */
  eax = 0xde1dfcu;
/* da2d35: ret  */
  esp += 4; SPILL(); return;
}

void f_da2d50(void) {
  LOAD_REGS();
L_da2d50: /* da2d50: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* da2d54: push 0xde45e8 */
  { uint32_t v = 0xde45e8u; esp -= 4; W32(esp, v); }
/* da2d59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da2d5a: call 0xd8218f */
  esp -= 4; W32(esp, 0xda2d5fu); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da2d5f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da2d62: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da2d80(void) {
  LOAD_REGS();
L_da2d80: /* da2d80: mov eax, 0xde1dfc */
  eax = 0xde1dfcu;
/* da2d85: ret  */
  esp += 4; SPILL(); return;
}

void f_da2da0(void) {
  LOAD_REGS();
L_da2da0: /* da2da0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* da2da4: push 0xde460c */
  { uint32_t v = 0xde460cu; esp -= 4; W32(esp, v); }
/* da2da9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da2daa: call 0xd8218f */
  esp -= 4; W32(esp, 0xda2dafu); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da2daf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da2db2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da2dd0(void) {
  LOAD_REGS();
L_da2dd0: /* da2dd0: mov eax, 0xde1dfc */
  eax = 0xde1dfcu;
/* da2dd5: ret  */
  esp += 4; SPILL(); return;
}

void f_da2df0(void) {
  LOAD_REGS();
L_da2df0: /* da2df0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* da2df4: push 0xde462c */
  { uint32_t v = 0xde462cu; esp -= 4; W32(esp, v); }
/* da2df9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da2dfa: call 0xd8218f */
  esp -= 4; W32(esp, 0xda2dffu); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da2dff: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da2e02: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da2e20(void) {
  LOAD_REGS();
L_da2e20: /* da2e20: mov eax, 0xde1dfc */
  eax = 0xde1dfcu;
/* da2e25: ret  */
  esp += 4; SPILL(); return;
}

void f_da2e40(void) {
  LOAD_REGS();
L_da2e40: /* da2e40: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* da2e44: push 0xde4650 */
  { uint32_t v = 0xde4650u; esp -= 4; W32(esp, v); }
/* da2e49: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da2e4a: call 0xd8218f */
  esp -= 4; W32(esp, 0xda2e4fu); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da2e4f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da2e52: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da2e70(void) {
  LOAD_REGS();
L_da2e70: /* da2e70: mov eax, 0xde1dfc */
  eax = 0xde1dfcu;
/* da2e75: ret  */
  esp += 4; SPILL(); return;
}

void f_da2e90(void) {
  LOAD_REGS();
L_da2e90: /* da2e90: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* da2e94: push 0xde4674 */
  { uint32_t v = 0xde4674u; esp -= 4; W32(esp, v); }
/* da2e99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da2e9a: call 0xd8218f */
  esp -= 4; W32(esp, 0xda2e9fu); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da2e9f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da2ea2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da2ec0(void) {
  LOAD_REGS();
L_da2ec0: /* da2ec0: mov eax, 0xde1dfc */
  eax = 0xde1dfcu;
/* da2ec5: ret  */
  esp += 4; SPILL(); return;
}

void f_da2ee0(void) {
  LOAD_REGS();
L_da2ee0: /* da2ee0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* da2ee4: push 0xde4698 */
  { uint32_t v = 0xde4698u; esp -= 4; W32(esp, v); }
/* da2ee9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da2eea: call 0xd8218f */
  esp -= 4; W32(esp, 0xda2eefu); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da2eef: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da2ef2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da2f10(void) {
  LOAD_REGS();
L_da2f10: /* da2f10: mov eax, 0xde1dfc */
  eax = 0xde1dfcu;
/* da2f15: ret  */
  esp += 4; SPILL(); return;
}

void f_da2f30(void) {
  LOAD_REGS();
L_da2f30: /* da2f30: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* da2f34: push 0xde46b4 */
  { uint32_t v = 0xde46b4u; esp -= 4; W32(esp, v); }
/* da2f39: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da2f3a: call 0xd8218f */
  esp -= 4; W32(esp, 0xda2f3fu); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da2f3f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da2f42: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da2f60(void) {
  LOAD_REGS();
L_da2f60: /* da2f60: mov eax, 0xde1dfc */
  eax = 0xde1dfcu;
/* da2f65: ret  */
  esp += 4; SPILL(); return;
}

void f_da2f80(void) {
  LOAD_REGS();
L_da2f80: /* da2f80: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* da2f84: push 0xde46cc */
  { uint32_t v = 0xde46ccu; esp -= 4; W32(esp, v); }
/* da2f89: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da2f8a: call 0xd8218f */
  esp -= 4; W32(esp, 0xda2f8fu); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da2f8f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da2f92: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da2fb0(void) {
  LOAD_REGS();
L_da2fb0: /* da2fb0: mov eax, 0xde1dfc */
  eax = 0xde1dfcu;
/* da2fb5: ret  */
  esp += 4; SPILL(); return;
}

void f_da2fd0(void) {
  LOAD_REGS();
L_da2fd0: /* da2fd0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* da2fd4: push 0xde46e8 */
  { uint32_t v = 0xde46e8u; esp -= 4; W32(esp, v); }
/* da2fd9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da2fda: call 0xd8218f */
  esp -= 4; W32(esp, 0xda2fdfu); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da2fdf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da2fe2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da3000(void) {
  LOAD_REGS();
L_da3000: /* da3000: mov eax, 0xde1dfc */
  eax = 0xde1dfcu;
/* da3005: ret  */
  esp += 4; SPILL(); return;
}

void f_da3020(void) {
  LOAD_REGS();
L_da3020: /* da3020: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* da3024: push 0xde4700 */
  { uint32_t v = 0xde4700u; esp -= 4; W32(esp, v); }
/* da3029: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da302a: call 0xd8218f */
  esp -= 4; W32(esp, 0xda302fu); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da302f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da3032: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da3050(void) {
  LOAD_REGS();
L_da3050: /* da3050: mov eax, 0xde1dfc */
  eax = 0xde1dfcu;
/* da3055: ret  */
  esp += 4; SPILL(); return;
}

void f_da3070(void) {
  LOAD_REGS();
L_da3070: /* da3070: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* da3074: push 0xde471c */
  { uint32_t v = 0xde471cu; esp -= 4; W32(esp, v); }
/* da3079: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da307a: call 0xd8218f */
  esp -= 4; W32(esp, 0xda307fu); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da307f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da3082: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da30a0(void) {
  LOAD_REGS();
L_da30a0: /* da30a0: mov eax, 0xde1dfc */
  eax = 0xde1dfcu;
/* da30a5: ret  */
  esp += 4; SPILL(); return;
}

void f_da30c0(void) {
  LOAD_REGS();
L_da30c0: /* da30c0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* da30c4: push 0xde4734 */
  { uint32_t v = 0xde4734u; esp -= 4; W32(esp, v); }
/* da30c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da30ca: call 0xd8218f */
  esp -= 4; W32(esp, 0xda30cfu); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da30cf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da30d2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da30f0(void) {
  LOAD_REGS();
L_da30f0: /* da30f0: mov eax, 0xde1dfc */
  eax = 0xde1dfcu;
/* da30f5: ret  */
  esp += 4; SPILL(); return;
}

void f_da3110(void) {
  LOAD_REGS();
L_da3110: /* da3110: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* da3114: push 0xde4758 */
  { uint32_t v = 0xde4758u; esp -= 4; W32(esp, v); }
/* da3119: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da311a: call 0xd8218f */
  esp -= 4; W32(esp, 0xda311fu); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da311f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da3122: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da3140(void) {
  LOAD_REGS();
L_da3140: /* da3140: mov eax, 0xde1dfc */
  eax = 0xde1dfcu;
/* da3145: ret  */
  esp += 4; SPILL(); return;
}

void f_da3160(void) {
  LOAD_REGS();
L_da3160: /* da3160: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* da3164: push 0xde477c */
  { uint32_t v = 0xde477cu; esp -= 4; W32(esp, v); }
/* da3169: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da316a: call 0xd8218f */
  esp -= 4; W32(esp, 0xda316fu); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da316f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da3172: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da3190(void) {
  LOAD_REGS();
L_da3190: /* da3190: mov eax, 0xde1dfc */
  eax = 0xde1dfcu;
/* da3195: ret  */
  esp += 4; SPILL(); return;
}

void f_da31b0(void) {
  LOAD_REGS();
L_da31b0: /* da31b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* da31b4: push 0xde4794 */
  { uint32_t v = 0xde4794u; esp -= 4; W32(esp, v); }
/* da31b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da31ba: call 0xd8218f */
  esp -= 4; W32(esp, 0xda31bfu); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da31bf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da31c2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da31e0(void) {
  LOAD_REGS();
L_da31e0: /* da31e0: mov eax, 0xde1dfc */
  eax = 0xde1dfcu;
/* da31e5: ret  */
  esp += 4; SPILL(); return;
}

void f_da3200(void) {
  LOAD_REGS();
L_da3200: /* da3200: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* da3204: push 0xde47a0 */
  { uint32_t v = 0xde47a0u; esp -= 4; W32(esp, v); }
/* da3209: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da320a: call 0xd8218f */
  esp -= 4; W32(esp, 0xda320fu); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da320f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da3212: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da3230(void) {
  LOAD_REGS();
L_da3230: /* da3230: mov eax, 0xde1dfc */
  eax = 0xde1dfcu;
/* da3235: ret  */
  esp += 4; SPILL(); return;
}

void f_da3250(void) {
  LOAD_REGS();
L_da3250: /* da3250: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* da3254: push 0xde47c8 */
  { uint32_t v = 0xde47c8u; esp -= 4; W32(esp, v); }
/* da3259: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da325a: call 0xd8218f */
  esp -= 4; W32(esp, 0xda325fu); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da325f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da3262: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da3280(void) {
  LOAD_REGS();
L_da3280: /* da3280: mov eax, 0xde1dfc */
  eax = 0xde1dfcu;
/* da3285: ret  */
  esp += 4; SPILL(); return;
}

void f_da32a0(void) {
  LOAD_REGS();
L_da32a0: /* da32a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* da32a4: push 0xde47e8 */
  { uint32_t v = 0xde47e8u; esp -= 4; W32(esp, v); }
/* da32a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da32aa: call 0xd8218f */
  esp -= 4; W32(esp, 0xda32afu); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da32af: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da32b2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da32d0(void) {
  LOAD_REGS();
L_da32d0: /* da32d0: mov eax, 0xde1dfc */
  eax = 0xde1dfcu;
/* da32d5: ret  */
  esp += 4; SPILL(); return;
}

void f_da32f0(void) {
  LOAD_REGS();
L_da32f0: /* da32f0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* da32f4: push 0xde4800 */
  { uint32_t v = 0xde4800u; esp -= 4; W32(esp, v); }
/* da32f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da32fa: call 0xd8218f */
  esp -= 4; W32(esp, 0xda32ffu); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da32ff: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da3302: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da3320(void) {
  LOAD_REGS();
L_da3320: /* da3320: mov eax, 0xde1dfc */
  eax = 0xde1dfcu;
/* da3325: ret  */
  esp += 4; SPILL(); return;
}

void f_da3340(void) {
  LOAD_REGS();
L_da3340: /* da3340: mov eax, ecx */
  eax = ecx;
/* da3342: mov dword ptr [eax + 4], 0xdc198c */
  W32((uint32_t)(eax + 0x4u), 0xdc198cu);
/* da3349: mov dword ptr [eax], 0xdc1f6c */
  W32((uint32_t)(eax), 0xdc1f6cu);
/* da334f: mov dword ptr [eax + 4], 0xdc1f58 */
  W32((uint32_t)(eax + 0x4u), 0xdc1f58u);
/* da3356: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da3370(void) {
  LOAD_REGS();
L_da3370: /* da3370: mov eax, ecx */
  eax = ecx;
/* da3372: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da3390(void) {
  LOAD_REGS();
L_da3390: /* da3390: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* da3394: push 0xde4824 */
  { uint32_t v = 0xde4824u; esp -= 4; W32(esp, v); }
/* da3399: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da339a: call 0xd8218f */
  esp -= 4; W32(esp, 0xda339fu); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da339f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da33a2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da33c0(void) {
  LOAD_REGS();
L_da33c0: /* da33c0: mov eax, 0xde1dfc */
  eax = 0xde1dfcu;
/* da33c5: ret  */
  esp += 4; SPILL(); return;
}

void f_da33e0(void) {
  LOAD_REGS();
L_da33e0: /* da33e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* da33e4: push 0xde483c */
  { uint32_t v = 0xde483cu; esp -= 4; W32(esp, v); }
/* da33e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da33ea: call 0xd8218f */
  esp -= 4; W32(esp, 0xda33efu); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da33ef: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da33f2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da3410(void) {
  LOAD_REGS();
L_da3410: /* da3410: mov eax, 0xde1dfc */
  eax = 0xde1dfcu;
/* da3415: ret  */
  esp += 4; SPILL(); return;
}

void f_da3430(void) {
  LOAD_REGS();
L_da3430: /* da3430: call dword ptr [0xde8970] */
  esp -= 4; W32(esp, 0xda3436u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* da3436: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* da343a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da343b: call dword ptr [0xde8970] */
  esp -= 4; W32(esp, 0xda3441u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* da3441: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da3442: call dword ptr [0xde89c0] */
  esp -= 4; W32(esp, 0xda3448u); SPILL(); f_4e4192(); if (g_unwind) return; /* Core!?appStrcmp@@YAHPBG0@Z */ RELOAD();
/* da3448: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da344b: ret  */
  esp += 4; SPILL(); return;
}

void f_da3460(void) {
  LOAD_REGS();
L_da3460: /* da3460: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* da3464: push 0xde4854 */
  { uint32_t v = 0xde4854u; esp -= 4; W32(esp, v); }
/* da3469: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da346a: call 0xd8218f */
  esp -= 4; W32(esp, 0xda346fu); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da346f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da3472: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da3490(void) {
  LOAD_REGS();
L_da3490: /* da3490: mov eax, 0xde1dfc */
  eax = 0xde1dfcu;
/* da3495: ret  */
  esp += 4; SPILL(); return;
}

void f_da34b0(void) {
  LOAD_REGS();
L_da34b0: /* da34b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* da34b4: push 0xde4870 */
  { uint32_t v = 0xde4870u; esp -= 4; W32(esp, v); }
/* da34b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da34ba: call 0xd8218f */
  esp -= 4; W32(esp, 0xda34bfu); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da34bf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da34c2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da34e0(void) {
  LOAD_REGS();
L_da34e0: /* da34e0: mov eax, 0xde1dfc */
  eax = 0xde1dfcu;
/* da34e5: ret  */
  esp += 4; SPILL(); return;
}

void f_da3500(void) {
  LOAD_REGS();
L_da3500: /* da3500: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* da3504: push 0xde489c */
  { uint32_t v = 0xde489cu; esp -= 4; W32(esp, v); }
/* da3509: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da350a: call 0xd8218f */
  esp -= 4; W32(esp, 0xda350fu); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da350f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da3512: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da3530(void) {
  LOAD_REGS();
L_da3530: /* da3530: mov eax, 0xde1dfc */
  eax = 0xde1dfcu;
/* da3535: ret  */
  esp += 4; SPILL(); return;
}

void f_da3550(void) {
  LOAD_REGS();
L_da3550: /* da3550: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* da3554: push 0xde48c4 */
  { uint32_t v = 0xde48c4u; esp -= 4; W32(esp, v); }
/* da3559: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da355a: call 0xd8218f */
  esp -= 4; W32(esp, 0xda355fu); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da355f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da3562: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da3580(void) {
  LOAD_REGS();
L_da3580: /* da3580: mov eax, 0xde1dfc */
  eax = 0xde1dfcu;
/* da3585: ret  */
  esp += 4; SPILL(); return;
}

void f_da35a0(void) {
  LOAD_REGS();
L_da35a0: /* da35a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* da35a4: push 0xde48f0 */
  { uint32_t v = 0xde48f0u; esp -= 4; W32(esp, v); }
/* da35a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da35aa: call 0xd8218f */
  esp -= 4; W32(esp, 0xda35afu); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da35af: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da35b2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da35d0(void) {
  LOAD_REGS();
L_da35d0: /* da35d0: mov eax, 0xde1dfc */
  eax = 0xde1dfcu;
/* da35d5: ret  */
  esp += 4; SPILL(); return;
}

void f_da35f0(void) {
  LOAD_REGS();
L_da35f0: /* da35f0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* da35f4: push 0xde490c */
  { uint32_t v = 0xde490cu; esp -= 4; W32(esp, v); }
/* da35f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da35fa: call 0xd8218f */
  esp -= 4; W32(esp, 0xda35ffu); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da35ff: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da3602: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da3620(void) {
  LOAD_REGS();
L_da3620: /* da3620: mov eax, 0xde1dfc */
  eax = 0xde1dfcu;
/* da3625: ret  */
  esp += 4; SPILL(); return;
}

void f_da3640(void) {
  LOAD_REGS();
L_da3640: /* da3640: mov eax, ecx */
  eax = ecx;
/* da3642: ret  */
  esp += 4; SPILL(); return;
}

void f_da3660(void) {
  LOAD_REGS();
L_da3660: /* da3660: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* da3664: mov eax, ecx */
  eax = ecx;
/* da3666: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* da366a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* da366c: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* da3670: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* da3673: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* da3677: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* da367a: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* da367e: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* da3681: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* da3685: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* da3688: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* da368c: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* da368f: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* da3693: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* da3696: mov dword ptr [eax + 0x1c], edx */
  W32((uint32_t)(eax + 0x1cu), edx);
/* da3699: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_da36b0(void) {
  LOAD_REGS();
L_da36b0: /* da36b0: ret  */
  esp += 4; SPILL(); return;
}

void f_da36d0(void) {
  LOAD_REGS();
L_da36d0: /* da36d0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* da36d4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da36d5: mov esi, ecx */
  esi = ecx;
/* da36d7: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* da36d9: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* da36db: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* da36de: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* da36e1: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* da36e4: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* da36e7: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* da36ea: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* da36ed: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* da36f0: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* da36f3: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* da36f6: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* da36f9: mov ecx, dword ptr [eax + 0x18] */
  ecx = R32((uint32_t)(eax + 0x18u));
/* da36fc: mov dword ptr [esi + 0x18], ecx */
  W32((uint32_t)(esi + 0x18u), ecx);
/* da36ff: mov edx, dword ptr [eax + 0x1c] */
  edx = R32((uint32_t)(eax + 0x1cu));
/* da3702: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* da3706: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da3707: mov dword ptr [esi + 0x1c], edx */
  W32((uint32_t)(esi + 0x1cu), edx);
/* da370a: mov ecx, 8 */
  ecx = 0x8u;
/* da370f: mov edi, eax */
  edi = eax;
/* da3711: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* da3713: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da3714: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da3715: ret 8 */
  esp += 12; SPILL(); return;
}

void f_da3740(void) {
  LOAD_REGS();
L_da3740: /* da3740: mov eax, ecx */
  eax = ecx;
/* da3742: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* da3748: ret  */
  esp += 4; SPILL(); return;
}

void f_da3760(void) {
  LOAD_REGS();
L_da3760: /* da3760: mov eax, ecx */
  eax = ecx;
/* da3762: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* da3766: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* da3768: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* da376a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da3780(void) {
  LOAD_REGS();
L_da3780: /* da3780: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* da3784: push 0xde4930 */
  { uint32_t v = 0xde4930u; esp -= 4; W32(esp, v); }
/* da3789: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da378a: call 0xd8218f */
  esp -= 4; W32(esp, 0xda378fu); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da378f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da3792: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da37b0(void) {
  LOAD_REGS();
L_da37b0: /* da37b0: mov eax, 0xde1dfc */
  eax = 0xde1dfcu;
/* da37b5: ret  */
  esp += 4; SPILL(); return;
}

void f_da37d0(void) {
  LOAD_REGS();
L_da37d0: /* da37d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* da37d4: push 0xde4954 */
  { uint32_t v = 0xde4954u; esp -= 4; W32(esp, v); }
/* da37d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da37da: call 0xd8218f */
  esp -= 4; W32(esp, 0xda37dfu); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da37df: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da37e2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da3800(void) {
  LOAD_REGS();
L_da3800: /* da3800: mov eax, 0xde1dfc */
  eax = 0xde1dfcu;
/* da3805: ret  */
  esp += 4; SPILL(); return;
}

void f_da3820(void) {
  LOAD_REGS();
L_da3820: /* da3820: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* da3824: push 0xde496c */
  { uint32_t v = 0xde496cu; esp -= 4; W32(esp, v); }
/* da3829: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da382a: call 0xd8218f */
  esp -= 4; W32(esp, 0xda382fu); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* da382f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da3832: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da3850(void) {
  LOAD_REGS();
L_da3850: /* da3850: mov eax, 0xde1dfc */
  eax = 0xde1dfcu;
/* da3855: ret  */
  esp += 4; SPILL(); return;
}

void f_da3870(void) {
  LOAD_REGS();
L_da3870: /* da3870: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* da3872: push 0xdba339 */
  { uint32_t v = 0xdba339u; esp -= 4; W32(esp, v); }
/* da3877: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* da387d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da387e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* da3885: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da3886: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da3887: mov esi, ecx */
  esi = ecx;
/* da3889: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* da388d: call dword ptr [0xde88dc] */
  esp -= 4; W32(esp, 0xda3893u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* da3893: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* da3896: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* da389e: call dword ptr [0xde88dc] */
  esp -= 4; W32(esp, 0xda38a4u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* da38a4: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* da38a8: mov eax, esi */
  eax = esi;
/* da38aa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da38ab: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da38b2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da38b5: ret  */
  esp += 4; SPILL(); return;
}

void f_da38e0(void) {
  LOAD_REGS();
L_da38e0: /* da38e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* da38e2: push 0xdba36b */
  { uint32_t v = 0xdba36bu; esp -= 4; W32(esp, v); }
/* da38e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* da38ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da38ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* da38f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da38f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da38f7: mov esi, ecx */
  esi = ecx;
/* da38f9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* da38fd: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* da3901: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da3902: mov dword ptr [esp + 0x14], 1 */
  W32((uint32_t)(esp + 0x14u), 0x1u);
/* da390a: call dword ptr [0xde8a00] */
  esp -= 4; W32(esp, 0xda3910u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* da3910: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* da3914: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da3915: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* da3918: mov byte ptr [esp + 0x14], 2 */
  W8((uint32_t)(esp + 0x14u), 0x2u);
/* da391d: call dword ptr [0xde8a00] */
  esp -= 4; W32(esp, 0xda3923u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* da3923: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* da3927: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* da392c: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xda3932u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* da3932: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* da3936: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* da393e: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xda3944u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* da3944: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* da3948: mov eax, esi */
  eax = esi;
/* da394a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da394b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da3952: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da3955: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_da3980(void) {
  LOAD_REGS();
L_da3980: /* da3980: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* da3982: push 0xdba389 */
  { uint32_t v = 0xdba389u; esp -= 4; W32(esp, v); }
/* da3987: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* da398d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da398e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* da3995: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da3996: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da3997: mov esi, ecx */
  esi = ecx;
/* da3999: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* da399d: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* da39a0: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* da39a8: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xda39aeu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* da39ae: mov ecx, esi */
  ecx = esi;
/* da39b0: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* da39b8: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xda39beu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* da39be: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* da39c2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da39c3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da39ca: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da39cd: ret  */
  esp += 4; SPILL(); return;
}

void f_da39f0(void) {
  LOAD_REGS();
L_da39f0: /* da39f0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* da39f2: push 0xdba3a9 */
  { uint32_t v = 0xdba3a9u; esp -= 4; W32(esp, v); }
/* da39f7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* da39fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da39fe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* da3a05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da3a06: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da3a07: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da3a08: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* da3a0c: mov esi, ecx */
  esi = ecx;
/* da3a0e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da3a0f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* da3a13: call dword ptr [0xde8a00] */
  esp -= 4; W32(esp, 0xda3a19u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* da3a19: add edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* da3a1c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da3a1d: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* da3a20: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* da3a28: call dword ptr [0xde8a00] */
  esp -= 4; W32(esp, 0xda3a2eu); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* da3a2e: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* da3a32: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da3a33: mov eax, esi */
  eax = esi;
/* da3a35: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da3a36: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da3a3d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da3a40: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da3a70(void) {
  LOAD_REGS();
L_da3a70: /* da3a70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da3a71: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da3a72: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* da3a76: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da3a77: mov esi, ecx */
  esi = ecx;
/* da3a79: call dword ptr [0xde88c0] */
  esp -= 4; W32(esp, 0xda3a7fu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* da3a7f: add edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* da3a82: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da3a83: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* da3a86: call dword ptr [0xde88c0] */
  esp -= 4; W32(esp, 0xda3a8cu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* da3a8c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da3a8d: mov eax, esi */
  eax = esi;
/* da3a8f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da3a90: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da3ab0(void) {
  LOAD_REGS();
L_da3ab0: /* da3ab0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* da3ab2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da3ab3: call dword ptr [0xde8e90] */
  esp -= 4; W32(esp, 0xda3ab9u); SPILL(); call_ind(R32(0xde8e90u)); if (g_unwind) return; /* USER32!SetCursor */ RELOAD();
/* da3ab9: ret  */
  esp += 4; SPILL(); return;
}

void f_da3ad0(void) {
  LOAD_REGS();
L_da3ad0: /* da3ad0: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* da3ad5: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da3ad8: push 0x7f02 */
  { uint32_t v = 0x7f02u; esp -= 4; W32(esp, v); }
/* da3add: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da3adf: je 0xda3aef */
  if (zf) goto L_da3aef;
L_da3ae1: /* da3ae1: call dword ptr [0xde8df0] */
  esp -= 4; W32(esp, 0xda3ae7u); SPILL(); call_ind(R32(0xde8df0u)); if (g_unwind) return; /* USER32!LoadCursorW */ RELOAD();
/* da3ae7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da3ae8: call dword ptr [0xde8e90] */
  esp -= 4; W32(esp, 0xda3aeeu); SPILL(); call_ind(R32(0xde8e90u)); if (g_unwind) return; /* USER32!SetCursor */ RELOAD();
/* da3aee: ret  */
  esp += 4; SPILL(); return;
L_da3aef: /* da3aef: call dword ptr [0xde8dec] */
  esp -= 4; W32(esp, 0xda3af5u); SPILL(); call_ind(R32(0xde8decu)); if (g_unwind) return; /* USER32!LoadCursorA */ RELOAD();
/* da3af5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da3af6: call dword ptr [0xde8e90] */
  esp -= 4; W32(esp, 0xda3afcu); SPILL(); call_ind(R32(0xde8e90u)); if (g_unwind) return; /* USER32!SetCursor */ RELOAD();
/* da3afc: ret  */
  esp += 4; SPILL(); return;
}

void f_da3b10(void) {
  LOAD_REGS();
L_da3b10: /* da3b10: mov eax, ecx */
  eax = ecx;
/* da3b12: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* da3b16: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* da3b18: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* da3b1a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da3b30(void) {
  LOAD_REGS();
L_da3b30: /* da3b30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da3b31: mov esi, ecx */
  esi = ecx;
/* da3b33: call dword ptr [0xde88e0] */
  esp -= 4; W32(esp, 0xda3b39u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* da3b39: mov eax, esi */
  eax = esi;
/* da3b3b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da3b3c: ret  */
  esp += 4; SPILL(); return;
}

void f_da3b50(void) {
  LOAD_REGS();
L_da3b50: /* da3b50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da3b51: mov esi, ecx */
  esi = ecx;
/* da3b53: call dword ptr [0xde88e0] */
  esp -= 4; W32(esp, 0xda3b59u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* da3b59: mov eax, esi */
  eax = esi;
/* da3b5b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da3b5c: ret  */
  esp += 4; SPILL(); return;
}

void f_da3b70(void) {
  LOAD_REGS();
L_da3b70: /* da3b70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da3b71: mov esi, ecx */
  esi = ecx;
/* da3b73: call dword ptr [0xde88e0] */
  esp -= 4; W32(esp, 0xda3b79u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* da3b79: mov eax, esi */
  eax = esi;
/* da3b7b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da3b7c: ret  */
  esp += 4; SPILL(); return;
}

void f_da3b90(void) {
  LOAD_REGS();
L_da3b90: /* da3b90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da3b91: mov esi, ecx */
  esi = ecx;
/* da3b93: call dword ptr [0xde88e0] */
  esp -= 4; W32(esp, 0xda3b99u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* da3b99: mov eax, esi */
  eax = esi;
/* da3b9b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da3b9c: ret  */
  esp += 4; SPILL(); return;
}

void f_da3bb0(void) {
  LOAD_REGS();
L_da3bb0: /* da3bb0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da3bb1: mov esi, ecx */
  esi = ecx;
/* da3bb3: call dword ptr [0xde88e0] */
  esp -= 4; W32(esp, 0xda3bb9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* da3bb9: mov eax, esi */
  eax = esi;
/* da3bbb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da3bbc: ret  */
  esp += 4; SPILL(); return;
}

void f_da3bd0(void) {
  LOAD_REGS();
L_da3bd0: /* da3bd0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da3bd1: mov esi, ecx */
  esi = ecx;
/* da3bd3: call dword ptr [0xde88e0] */
  esp -= 4; W32(esp, 0xda3bd9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* da3bd9: mov eax, esi */
  eax = esi;
/* da3bdb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da3bdc: ret  */
  esp += 4; SPILL(); return;
}

void f_da3bf0(void) {
  LOAD_REGS();
L_da3bf0: /* da3bf0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da3bf1: mov esi, ecx */
  esi = ecx;
/* da3bf3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da3bf4: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* da3bf8: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* da3bfa: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* da3bfc: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* da3bff: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* da3c01: lea edx, [esi + 4] */
  edx = (uint32_t)(esi + 0x4u);
/* da3c04: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* da3c06: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* da3c09: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* da3c0c: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* da3c0f: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* da3c12: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* da3c15: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* da3c18: lea edx, [edi + 0x14] */
  edx = (uint32_t)(edi + 0x14u);
/* da3c1b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da3c1c: lea ecx, [esi + 0x14] */
  ecx = (uint32_t)(esi + 0x14u);
/* da3c1f: call dword ptr [0xde8a00] */
  esp -= 4; W32(esp, 0xda3c25u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* da3c25: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* da3c28: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* da3c2b: mov ecx, dword ptr [edi + 0x24] */
  ecx = R32((uint32_t)(edi + 0x24u));
/* da3c2e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da3c2f: mov dword ptr [esi + 0x24], ecx */
  W32((uint32_t)(esi + 0x24u), ecx);
/* da3c32: mov eax, esi */
  eax = esi;
/* da3c34: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da3c35: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da3c60(void) {
  LOAD_REGS();
L_da3c60: /* da3c60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da3c61: mov esi, ecx */
  esi = ecx;
/* da3c63: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da3c64: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* da3c68: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* da3c6a: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* da3c6c: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* da3c6f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* da3c71: lea edx, [esi + 4] */
  edx = (uint32_t)(esi + 0x4u);
/* da3c74: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* da3c76: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* da3c79: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* da3c7c: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* da3c7f: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* da3c82: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* da3c85: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* da3c88: lea edx, [edi + 0x14] */
  edx = (uint32_t)(edi + 0x14u);
/* da3c8b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da3c8c: lea ecx, [esi + 0x14] */
  ecx = (uint32_t)(esi + 0x14u);
/* da3c8f: call dword ptr [0xde88c0] */
  esp -= 4; W32(esp, 0xda3c95u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* da3c95: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* da3c98: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* da3c9b: mov ecx, dword ptr [edi + 0x24] */
  ecx = R32((uint32_t)(edi + 0x24u));
/* da3c9e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da3c9f: mov dword ptr [esi + 0x24], ecx */
  W32((uint32_t)(esi + 0x24u), ecx);
/* da3ca2: mov eax, esi */
  eax = esi;
/* da3ca4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da3ca5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da3cd0(void) {
  LOAD_REGS();
L_da3cd0: /* da3cd0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* da3cd2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* da3cd6: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* da3cd9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da3cf0(void) {
  LOAD_REGS();
L_da3cf0: /* da3cf0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* da3cf2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* da3cf6: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* da3cf9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da3d10(void) {
  LOAD_REGS();
L_da3d10: /* da3d10: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* da3d14: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* da3d16: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* da3d19: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* da3d1c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da3d30(void) {
  LOAD_REGS();
L_da3d30: /* da3d30: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* da3d32: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* da3d36: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* da3d39: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da3d50(void) {
  LOAD_REGS();
L_da3d50: /* da3d50: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* da3d52: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* da3d56: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* da3d59: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da3d70(void) {
  LOAD_REGS();
L_da3d70: /* da3d70: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* da3d72: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* da3d76: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* da3d79: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da3d90(void) {
  LOAD_REGS();
L_da3d90: /* da3d90: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* da3d92: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* da3d96: lea eax, [eax + ecx*8] */
  eax = (uint32_t)(eax + ecx*8);
/* da3d99: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da3db0(void) {
  LOAD_REGS();
L_da3db0: /* da3db0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da3db1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* da3db2: mov ebp, dword ptr [0xde88a8] */
  ebp = R32((uint32_t)(0xde88a8u));
/* da3db8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da3db9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da3dba: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* da3dbe: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* da3dc0: mov esi, ecx */
  esi = ecx;
/* da3dc2: jge 0xda3dd8 */
  if ((sf == of)) goto L_da3dd8;
L_da3dc4: /* da3dc4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* da3dc9: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* da3dce: push 0xde1e64 */
  { uint32_t v = 0xde1e64u; esp -= 4; W32(esp, v); }
/* da3dd3: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xda3dd5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da3dd5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_da3dd8: /* da3dd8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da3ddb: jle 0xda3df1 */
  if ((zf || sf != of)) goto L_da3df1;
L_da3ddd: /* da3ddd: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* da3de2: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* da3de7: push 0xde1e50 */
  { uint32_t v = 0xde1e50u; esp -= 4; W32(esp, v); }
/* da3dec: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xda3deeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da3dee: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_da3df1: /* da3df1: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* da3df5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* da3df8: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* da3dfb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da3dfd: jle 0xda3e13 */
  if ((zf || sf != of)) goto L_da3e13;
L_da3dff: /* da3dff: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* da3e04: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* da3e09: push 0xde1e34 */
  { uint32_t v = 0xde1e34u; esp -= 4; W32(esp, v); }
/* da3e0e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xda3e10u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da3e10: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_da3e13: /* da3e13: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* da3e15: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da3e16: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da3e17: mov ecx, esi */
  ecx = esi;
/* da3e19: call dword ptr [0xde88fc] */
  esp -= 4; W32(esp, 0xda3e1fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* da3e1f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da3e20: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da3e21: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da3e22: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da3e23: ret 8 */
  esp += 12; SPILL(); return;
}

void f_da3e50(void) {
  LOAD_REGS();
L_da3e50: /* da3e50: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* da3e54: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* da3e56: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da3e57: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xda3e5du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* da3e5d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da3e70(void) {
  LOAD_REGS();
L_da3e70: /* da3e70: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* da3e72: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* da3e76: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* da3e79: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da3e90(void) {
  LOAD_REGS();
L_da3e90: /* da3e90: mov eax, 1 */
  eax = 0x1u;
/* da3e95: ret  */
  esp += 4; SPILL(); return;
}

void f_da3eb0(void) {
  LOAD_REGS();
L_da3eb0: /* da3eb0: mov eax, 1 */
  eax = 0x1u;
/* da3eb5: ret  */
  esp += 4; SPILL(); return;
}

void f_da3ed0(void) {
  LOAD_REGS();
L_da3ed0: /* da3ed0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da3ed1: mov esi, ecx */
  esi = ecx;
/* da3ed3: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xda3ed9u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* da3ed9: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* da3ede: je 0xda3eed */
  if (zf) goto L_da3eed;
L_da3ee0: /* da3ee0: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* da3ee5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* da3ee7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* da3ee9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da3eea: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xda3eedu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_da3eed: /* da3eed: mov eax, esi */
  eax = esi;
/* da3eef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da3ef0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da3f10(void) {
  LOAD_REGS();
L_da3f10: /* da3f10: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* da3f14: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* da3f16: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* da3f19: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* da3f1c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da3f30(void) {
  LOAD_REGS();
L_da3f30: /* da3f30: mov eax, 1 */
  eax = 0x1u;
/* da3f35: ret  */
  esp += 4; SPILL(); return;
}

void f_da3f50(void) {
  LOAD_REGS();
L_da3f50: /* da3f50: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* da3f54: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* da3f58: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da3f5a: jl 0xda3f66 */
  if ((sf != of)) goto L_da3f66;
L_da3f5c: /* da3f5c: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* da3f60: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da3f62: jge 0xda3f66 */
  if ((sf == of)) goto L_da3f66;
L_da3f64: /* da3f64: mov eax, ecx */
  eax = ecx;
L_da3f66: /* da3f66: ret  */
  esp += 4; SPILL(); return;
}

void f_da3f80(void) {
  LOAD_REGS();
L_da3f80: /* da3f80: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* da3f84: fcomp dword ptr [esp + 8] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x8u)));
  FPOP();
/* da3f88: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* da3f8a: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* da3f8d: jne 0xda3f94 */
  if (!zf) goto L_da3f94;
L_da3f8f: /* da3f8f: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* da3f93: ret  */
  esp += 4; SPILL(); return;
L_da3f94: /* da3f94: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* da3f98: ret  */
  esp += 4; SPILL(); return;
}

void f_da3fb0(void) {
  LOAD_REGS();
L_da3fb0: /* da3fb0: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* da3fb4: fcomp dword ptr [esp + 8] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x8u)));
  FPOP();
/* da3fb8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* da3fba: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* da3fbd: jp 0xda3fc4 */
  if (pf) goto L_da3fc4;
L_da3fbf: /* da3fbf: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* da3fc3: ret  */
  esp += 4; SPILL(); return;
L_da3fc4: /* da3fc4: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* da3fc8: ret  */
  esp += 4; SPILL(); return;
}

void f_da3fe0(void) {
  LOAD_REGS();
L_da3fe0: /* da3fe0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da3fe1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* da3fe5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* da3fe7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* da3fe9: mov ecx, esi */
  ecx = esi;
/* da3feb: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xda3ff1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* da3ff1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* da3ff3: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* da3ff6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da3ff7: ret  */
  esp += 4; SPILL(); return;
}

void f_da4010(void) {
  LOAD_REGS();
L_da4010: /* da4010: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da4011: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* da4015: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* da4017: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* da4019: mov ecx, esi */
  ecx = esi;
/* da401b: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xda4021u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* da4021: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* da4023: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* da4026: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da4027: ret  */
  esp += 4; SPILL(); return;
}

void f_da4040(void) {
  LOAD_REGS();
L_da4040: /* da4040: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da4041: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* da4045: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* da4047: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* da4049: mov ecx, esi */
  ecx = esi;
/* da404b: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xda4051u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* da4051: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* da4053: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* da4056: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da4057: ret  */
  esp += 4; SPILL(); return;
}

void f_da4070(void) {
  LOAD_REGS();
L_da4070: /* da4070: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da4071: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* da4075: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* da4077: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* da4079: mov ecx, esi */
  ecx = esi;
/* da407b: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xda4081u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* da4081: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* da4083: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* da4086: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da4087: ret  */
  esp += 4; SPILL(); return;
}

void f_da40a0(void) {
  LOAD_REGS();
L_da40a0: /* da40a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da40a1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* da40a5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* da40a7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* da40a9: mov ecx, esi */
  ecx = esi;
/* da40ab: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xda40b1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* da40b1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* da40b3: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* da40b6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da40b7: ret  */
  esp += 4; SPILL(); return;
}

void f_da40d0(void) {
  LOAD_REGS();
L_da40d0: /* da40d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da40d1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* da40d5: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* da40d7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* da40d9: mov ecx, esi */
  ecx = esi;
/* da40db: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xda40e1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* da40e1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* da40e3: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* da40e6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da40e7: ret  */
  esp += 4; SPILL(); return;
}

void f_da4100(void) {
  LOAD_REGS();
L_da4100: /* da4100: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da4101: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* da4105: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* da4107: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* da4109: mov ecx, esi */
  ecx = esi;
/* da410b: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xda4111u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* da4111: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* da4113: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* da4116: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da4117: ret  */
  esp += 4; SPILL(); return;
}

void f_da4130(void) {
  LOAD_REGS();
L_da4130: /* da4130: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* da4132: jmp dword ptr [eax + 0xfc] */
  { uint32_t t = R32((uint32_t)(eax + 0xfcu)); SPILL(); call_ind(t); return; }
}

void f_da4140(void) {
  LOAD_REGS();
L_da4140: /* da4140: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* da4142: jmp dword ptr [eax + 0x100] */
  { uint32_t t = R32((uint32_t)(eax + 0x100u)); SPILL(); call_ind(t); return; }
}

void f_da4150(void) {
  LOAD_REGS();
L_da4150: /* da4150: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* da4152: jmp dword ptr [eax + 0x104] */
  { uint32_t t = R32((uint32_t)(eax + 0x104u)); SPILL(); call_ind(t); return; }
}

void f_da4160(void) {
  LOAD_REGS();
L_da4160: /* da4160: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* da4162: jmp dword ptr [eax + 0x64] */
  { uint32_t t = R32((uint32_t)(eax + 0x64u)); SPILL(); call_ind(t); return; }
}

void f_da4170(void) {
  LOAD_REGS();
L_da4170: /* da4170: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* da4172: jmp dword ptr [eax + 0xf8] */
  { uint32_t t = R32((uint32_t)(eax + 0xf8u)); SPILL(); call_ind(t); return; }
}

void f_da4180(void) {
  LOAD_REGS();
L_da4180: /* da4180: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* da4181: mov ebp, esp */
  ebp = esp;
/* da4183: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* da4185: push 0xdba3c0 */
  { uint32_t v = 0xdba3c0u; esp -= 4; W32(esp, v); }
/* da418a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* da4190: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da4191: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* da4198: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* da419b: mov ecx, dword ptr [0xde51e4] */
  ecx = R32((uint32_t)(0xde51e4u));
/* da41a1: mov eax, dword ptr [0xde51e0] */
  eax = R32((uint32_t)(0xde51e0u));
/* da41a6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da41a7: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* da41aa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da41ab: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da41ac: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* da41af: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* da41b6: xor esi, esi */
  esi = 0;
L_da41b8: /* da41b8: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da41ba: jge 0xda41c9 */
  if ((sf == of)) goto L_da41c9;
L_da41bc: /* da41bc: mov edx, dword ptr [eax + esi*4] */
  edx = R32((uint32_t)(eax + esi*4));
/* da41bf: cmp dword ptr [edx + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da41c2: je 0xda41c7 */
  if (zf) goto L_da41c7;
L_da41c4: /* da41c4: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* da41c5: jmp 0xda41b8 */
  goto L_da41b8;
L_da41c7: /* da41c7: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
L_da41c9: /* da41c9: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* da41cc: jne 0xda4259 */
  if (!zf) goto L_da4259;
L_da41d2: /* da41d2: cmp dword ptr [ebp + 0xc], 0x110 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x110u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da41d9: jne 0xda4255 */
  if (!zf) goto L_da4255;
L_da41db: /* da41db: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da41dd: jne 0xda41f7 */
  if (!zf) goto L_da41f7;
L_da41df: /* da41df: push 0x178 */
  { uint32_t v = 0x178u; esp -= 4; W32(esp, v); }
/* da41e4: push 0xde370c */
  { uint32_t v = 0xde370cu; esp -= 4; W32(esp, v); }
/* da41e9: push 0xde3718 */
  { uint32_t v = 0xde3718u; esp -= 4; W32(esp, v); }
/* da41ee: call dword ptr [0xde88a8] */
  esp -= 4; W32(esp, 0xda41f4u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* da41f4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_da41f7: /* da41f7: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* da41fa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da41fc: je 0xda4216 */
  if (zf) goto L_da4216;
L_da41fe: /* da41fe: push 0x179 */
  { uint32_t v = 0x179u; esp -= 4; W32(esp, v); }
/* da4203: push 0xde3728 */
  { uint32_t v = 0xde3728u; esp -= 4; W32(esp, v); }
/* da4208: push 0xde3734 */
  { uint32_t v = 0xde3734u; esp -= 4; W32(esp, v); }
/* da420d: call dword ptr [0xde88a8] */
  esp -= 4; W32(esp, 0xda4213u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* da4213: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_da4216: /* da4216: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* da4219: mov ecx, dword ptr [0xde51e4] */
  ecx = R32((uint32_t)(0xde51e4u));
/* da421f: mov eax, dword ptr [0xde51e0] */
  eax = R32((uint32_t)(0xde51e0u));
/* da4224: xor esi, esi */
  esi = 0;
L_da4226: /* da4226: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da4228: jge 0xda4232 */
  if ((sf == of)) goto L_da4232;
L_da422a: /* da422a: cmp dword ptr [eax + esi*4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + esi*4))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da422d: je 0xda4255 */
  if (zf) goto L_da4255;
L_da422f: /* da422f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* da4230: jmp 0xda4226 */
  goto L_da4226;
L_da4232: /* da4232: push 0x17e */
  { uint32_t v = 0x17eu; esp -= 4; W32(esp, v); }
/* da4237: push 0xde3748 */
  { uint32_t v = 0xde3748u; esp -= 4; W32(esp, v); }
/* da423c: push 0xde3754 */
  { uint32_t v = 0xde3754u; esp -= 4; W32(esp, v); }
/* da4241: call dword ptr [0xde88a8] */
  esp -= 4; W32(esp, 0xda4247u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* da4247: mov ecx, dword ptr [0xde51e4] */
  ecx = R32((uint32_t)(0xde51e4u));
/* da424d: mov eax, dword ptr [0xde51e0] */
  eax = R32((uint32_t)(0xde51e0u));
/* da4252: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_da4255: /* da4255: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da4257: je 0xda4275 */
  if (zf) goto L_da4275;
L_da4259: /* da4259: mov ecx, dword ptr [0xde8a74] */
  ecx = R32((uint32_t)(0xde8a74u));
/* da425f: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da4262: jne 0xda4275 */
  if (!zf) goto L_da4275;
L_da4264: /* da4264: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* da4267: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* da426a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* da426c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da426d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da426e: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* da4271: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da4272: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0xda4275u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_da4275: /* da4275: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da4277: call dword ptr [0xde8d00] */
  esp -= 4; W32(esp, 0xda427du); SPILL(); call_ind(R32(0xde8d00u)); if (g_unwind) return; /* KERNEL32!Sleep */ RELOAD();
/* da427d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da4280: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da4281: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da4282: xor eax, eax */
  eax = 0;
/* da4284: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da428b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da428c: mov esp, ebp */
  esp = ebp;
/* da428e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da428f: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_da4292(void) {
  LOAD_REGS();
L_da4292: /* da4292: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* da4295: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* da429a: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* da429d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da429e: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* da42a1: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda42a6u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_da42a6(); return;
}

void f_da42a6(void) {
  LOAD_REGS();
L_da42a6: /* da42a6: push 0xdc3bf0 */
  { uint32_t v = 0xdc3bf0u; esp -= 4; W32(esp, v); }
/* da42ab: push 0xde3768 */
  { uint32_t v = 0xde3768u; esp -= 4; W32(esp, v); }
/* da42b0: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xda42b6u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* da42b6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da42b9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da42bb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da42bd: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda42c2u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_da42c2: guest_badaddr(0xda42c2); return;
}

void f_da4330(void) {
  LOAD_REGS();
L_da4330: /* da4330: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* da4331: mov ebp, esp */
  ebp = esp;
/* da4333: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* da4335: push 0xdba3d0 */
  { uint32_t v = 0xdba3d0u; esp -= 4; W32(esp, v); }
/* da433a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* da4340: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da4341: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* da4348: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* da434b: mov ecx, dword ptr [0xde51e4] */
  ecx = R32((uint32_t)(0xde51e4u));
/* da4351: mov eax, dword ptr [0xde51e0] */
  eax = R32((uint32_t)(0xde51e0u));
/* da4356: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da4357: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da4358: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da4359: xor esi, esi */
  esi = 0;
/* da435b: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* da435e: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
L_da4361: /* da4361: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da4363: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* da4366: jge 0xda4373 */
  if ((sf == of)) goto L_da4373;
L_da4368: /* da4368: mov edx, dword ptr [eax + esi*4] */
  edx = R32((uint32_t)(eax + esi*4));
/* da436b: cmp dword ptr [edx + 4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x4u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da436e: je 0xda4373 */
  if (zf) goto L_da4373;
L_da4370: /* da4370: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* da4371: jmp 0xda4361 */
  goto L_da4361;
L_da4373: /* da4373: mov bl, byte ptr [0xde7ed4] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xde7ed4u))) & 0xffu);
/* da4379: mov edx, 1 */
  edx = 0x1u;
/* da437e: test dl, bl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* da4380: jne 0xda43ab */
  if (!zf) goto L_da43ab;
L_da4382: /* da4382: mov ecx, dword ptr [0xde7ed4] */
  ecx = R32((uint32_t)(0xde7ed4u));
/* da4388: or ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* da438a: push 0xde3770 */
  { uint32_t v = 0xde3770u; esp -= 4; W32(esp, v); }
/* da438f: mov dword ptr [0xde7ed4], ecx */
  W32((uint32_t)(0xde7ed4u), ecx);
/* da4395: call dword ptr [0xde8e68] */
  esp -= 4; W32(esp, 0xda439bu); SPILL(); call_ind(R32(0xde8e68u)); if (g_unwind) return; /* USER32!RegisterWindowMessageW */ RELOAD();
/* da439b: mov ecx, dword ptr [0xde51e4] */
  ecx = R32((uint32_t)(0xde51e4u));
/* da43a1: mov dword ptr [0xde7ed0], eax */
  W32((uint32_t)(0xde7ed0u), eax);
/* da43a6: mov eax, dword ptr [0xde51e0] */
  eax = R32((uint32_t)(0xde51e0u));
L_da43ab: /* da43ab: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* da43ae: cmp edx, dword ptr [0xde7ed0] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(0xde7ed0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da43b4: jne 0xda43d9 */
  if (!zf) goto L_da43d9;
L_da43b6: /* da43b6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* da43b8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da43ba: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da43bb: call dword ptr [0xde8ee0] */
  esp -= 4; W32(esp, 0xda43c1u); SPILL(); call_ind(R32(0xde8ee0u)); if (g_unwind) return; /* USER32!SetWindowLongW */ RELOAD();
/* da43c1: mov eax, 1 */
  eax = 0x1u;
/* da43c6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da43c9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da43d0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da43d1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da43d2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da43d3: mov esp, ebp */
  esp = ebp;
/* da43d5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da43d6: ret 0x10 */
  esp += 20; SPILL(); return;
L_da43d9: /* da43d9: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da43db: jne 0xda44dc */
  if (!zf) goto L_da44dc;
L_da43e1: /* da43e1: cmp edx, 0x81 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x81u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da43e7: je 0xda43fc */
  if (zf) goto L_da43fc;
L_da43e9: /* da43e9: cmp edx, 0x110 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x110u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da43ef: mov ebx, dword ptr [ebp + 0x14] */
  ebx = R32((uint32_t)(ebp + 0x14u));
/* da43f2: jne 0xda44aa */
  if (!zf) goto L_da44aa;
L_da43f8: /* da43f8: mov edi, ebx */
  edi = ebx;
/* da43fa: jmp 0xda4427 */
  goto L_da4427;
L_da43fc: /* da43fc: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* da4401: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da4404: push -0x14 */
  { uint32_t v = 0xffffffecu; esp -= 4; W32(esp, v); }
/* da4406: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da4407: je 0xda4411 */
  if (zf) goto L_da4411;
L_da4409: /* da4409: call dword ptr [0xde8f28] */
  esp -= 4; W32(esp, 0xda440fu); SPILL(); call_ind(R32(0xde8f28u)); if (g_unwind) return; /* USER32!GetWindowLongW */ RELOAD();
/* da440f: jmp 0xda4417 */
  goto L_da4417;
L_da4411: /* da4411: call dword ptr [0xde8f44] */
  esp -= 4; W32(esp, 0xda4417u); SPILL(); call_ind(R32(0xde8f44u)); if (g_unwind) return; /* USER32!GetWindowLongA */ RELOAD();
L_da4417: /* da4417: test al, 0x40 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* da4419: mov ebx, dword ptr [ebp + 0x14] */
  ebx = R32((uint32_t)(ebp + 0x14u));
/* da441c: je 0xda4425 */
  if (zf) goto L_da4425;
L_da441e: /* da441e: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* da4420: mov edi, dword ptr [ecx + 0x20] */
  edi = R32((uint32_t)(ecx + 0x20u));
/* da4423: jmp 0xda4427 */
  goto L_da4427;
L_da4425: /* da4425: mov edi, dword ptr [ebx] */
  edi = R32((uint32_t)(ebx));
L_da4427: /* da4427: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da4429: jne 0xda4443 */
  if (!zf) goto L_da4443;
L_da442b: /* da442b: push 0x1a5 */
  { uint32_t v = 0x1a5u; esp -= 4; W32(esp, v); }
/* da4430: push 0xde3798 */
  { uint32_t v = 0xde3798u; esp -= 4; W32(esp, v); }
/* da4435: push 0xde37a4 */
  { uint32_t v = 0xde37a4u; esp -= 4; W32(esp, v); }
/* da443a: call dword ptr [0xde88a8] */
  esp -= 4; W32(esp, 0xda4440u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* da4440: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_da4443: /* da4443: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* da4446: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da4448: je 0xda4462 */
  if (zf) goto L_da4462;
L_da444a: /* da444a: push 0x1a6 */
  { uint32_t v = 0x1a6u; esp -= 4; W32(esp, v); }
/* da444f: push 0xde37b4 */
  { uint32_t v = 0xde37b4u; esp -= 4; W32(esp, v); }
/* da4454: push 0xde37c0 */
  { uint32_t v = 0xde37c0u; esp -= 4; W32(esp, v); }
/* da4459: call dword ptr [0xde88a8] */
  esp -= 4; W32(esp, 0xda445fu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* da445f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_da4462: /* da4462: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* da4465: mov dword ptr [edi + 4], edx */
  W32((uint32_t)(edi + 0x4u), edx);
/* da4468: mov ecx, dword ptr [0xde51e4] */
  ecx = R32((uint32_t)(0xde51e4u));
/* da446e: mov eax, dword ptr [0xde51e0] */
  eax = R32((uint32_t)(0xde51e0u));
/* da4473: xor esi, esi */
  esi = 0;
L_da4475: /* da4475: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da4477: jge 0xda4481 */
  if ((sf == of)) goto L_da4481;
L_da4479: /* da4479: cmp dword ptr [eax + esi*4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + esi*4))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da447c: je 0xda44a4 */
  if (zf) goto L_da44a4;
L_da447e: /* da447e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* da447f: jmp 0xda4475 */
  goto L_da4475;
L_da4481: /* da4481: push 0x1ab */
  { uint32_t v = 0x1abu; esp -= 4; W32(esp, v); }
/* da4486: push 0xde37d4 */
  { uint32_t v = 0xde37d4u; esp -= 4; W32(esp, v); }
/* da448b: push 0xde37e0 */
  { uint32_t v = 0xde37e0u; esp -= 4; W32(esp, v); }
/* da4490: call dword ptr [0xde88a8] */
  esp -= 4; W32(esp, 0xda4496u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* da4496: mov ecx, dword ptr [0xde51e4] */
  ecx = R32((uint32_t)(0xde51e4u));
/* da449c: mov eax, dword ptr [0xde51e0] */
  eax = R32((uint32_t)(0xde51e0u));
/* da44a1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_da44a4: /* da44a4: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* da44a7: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
L_da44aa: /* da44aa: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da44ac: jne 0xda44df */
  if (!zf) goto L_da44df;
L_da44ae: /* da44ae: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* da44b3: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da44b6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da44b7: je 0xda453b */
  if (zf) goto L_da453b;
L_da44bd: /* da44bd: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* da44c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da44c1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da44c2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da44c3: call dword ptr [0xde8e20] */
  esp -= 4; W32(esp, 0xda44c9u); SPILL(); call_ind(R32(0xde8e20u)); if (g_unwind) return; /* USER32!DefWindowProcW */ RELOAD();
/* da44c9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da44cc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da44d3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da44d4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da44d5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da44d6: mov esp, ebp */
  esp = ebp;
/* da44d8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da44d9: ret 0x10 */
  esp += 20; SPILL(); return;
L_da44dc: /* da44dc: mov ebx, dword ptr [ebp + 0x14] */
  ebx = R32((uint32_t)(ebp + 0x14u));
L_da44df: /* da44df: mov ecx, dword ptr [0xde8a74] */
  ecx = R32((uint32_t)(0xde8a74u));
/* da44e5: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da44e8: jne 0xda44ae */
  if (!zf) goto L_da44ae;
L_da44ea: /* da44ea: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* da44ed: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* da44f0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* da44f2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da44f3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da44f4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da44f5: call dword ptr [eax + 0x1c] */
  { uint32_t t = R32((uint32_t)(eax + 0x1cu)); esp -= 4; W32(esp, 0xda44f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da44f8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da44fb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da4502: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da4503: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da4504: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da4505: mov esp, ebp */
  esp = ebp;
/* da4507: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da4508: ret 0x10 */
  esp += 20; SPILL(); return;
L_da453b: /* da453b: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* da453e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da453f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da4540: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da4541: call dword ptr [0xde8e1c] */
  esp -= 4; W32(esp, 0xda4547u); SPILL(); call_ind(R32(0xde8e1cu)); if (g_unwind) return; /* USER32!DefWindowProcA */ RELOAD();
/* da4547: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da454a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da454b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da454c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da4553: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da4554: mov esp, ebp */
  esp = ebp;
/* da4556: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da4557: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_da450b(void) {
  LOAD_REGS();
L_da450b: /* da450b: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* da450e: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* da4513: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* da4516: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da4517: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* da451a: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda451fu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_da451f(); return;
}

void f_da451f(void) {
  LOAD_REGS();
L_da451f: /* da451f: push 0xdc3c28 */
  { uint32_t v = 0xdc3c28u; esp -= 4; W32(esp, v); }
/* da4524: push 0xde37f4 */
  { uint32_t v = 0xde37f4u; esp -= 4; W32(esp, v); }
/* da4529: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xda452fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* da452f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da4532: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da4534: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da4536: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda453bu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
/* da453b: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* da453e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da453f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da4540: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da4541: call dword ptr [0xde8e1c] */
  esp -= 4; W32(esp, 0xda4547u); SPILL(); call_ind(R32(0xde8e1cu)); if (g_unwind) return; /* USER32!DefWindowProcA */ RELOAD();
/* da4547: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da454a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da454b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da454c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da4553: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da4554: mov esp, ebp */
  esp = ebp;
/* da4556: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da4557: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_da45f0(void) {
  LOAD_REGS();
L_da45f0: /* da45f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* da45f1: mov ebp, esp */
  ebp = esp;
/* da45f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* da45f5: push 0xdba3e0 */
  { uint32_t v = 0xdba3e0u; esp -= 4; W32(esp, v); }
/* da45fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* da4600: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da4601: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* da4608: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* da460b: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* da4610: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* da4612: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da4613: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da4614: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da4616: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da4617: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* da461a: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* da461d: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* da4624: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* da4627: je 0xda4743 */
  if (zf) goto L_da4743;
L_da462d: /* da462d: mov ecx, 0x30 */
  ecx = 0x30u;
/* da4632: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* da4635: xor eax, eax */
  eax = 0;
/* da4637: mov ebx, ecx */
  ebx = ecx;
/* da4639: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* da463c: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* da463f: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* da4641: mov ecx, ebx */
  ecx = ebx;
/* da4643: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* da4645: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* da4648: mov eax, dword ptr [0xde50e8] */
  eax = R32((uint32_t)(0xde50e8u));
/* da464d: mov ecx, dword ptr [0xde88ac] */
  ecx = R32((uint32_t)(0xde88acu));
/* da4653: mov dword ptr [ebp - 0x4c], 0x30 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x30u);
/* da465a: mov dword ptr [ebp - 0x48], edx */
  W32((uint32_t)(ebp + 0xffffffb8u), edx);
/* da465d: mov dword ptr [ebp - 0x44], 0xd813b6 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0xd813b6u);
/* da4664: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* da4667: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da466a: je 0xda4691 */
  if (zf) goto L_da4691;
L_da466c: /* da466c: mov edx, dword ptr [0xde8934] */
  edx = R32((uint32_t)(0xde8934u));
/* da4672: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* da4674: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  ecx = r;
  }
/* da4676: sbb ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ecx = r;
  }
/* da4678: and ecx, 0x6ed4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6ed4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* da467e: add ecx, 0x80 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* da4684: movzx edx, cx */
  edx = (uint32_t)((ecx & 0xffffu));
/* da4687: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da4688: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da4689: call dword ptr [0xde8e44] */
  esp -= 4; W32(esp, 0xda468fu); SPILL(); call_ind(R32(0xde8e44u)); if (g_unwind) return; /* USER32!LoadIconW */ RELOAD();
/* da468f: jmp 0xda46b4 */
  goto L_da46b4;
L_da4691: /* da4691: mov ecx, dword ptr [0xde8934] */
  ecx = R32((uint32_t)(0xde8934u));
/* da4697: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* da4699: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  edx = r;
  }
/* da469b: sbb edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edx = r;
  }
/* da469d: and edx, 0x6ed4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x6ed4u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* da46a3: add edx, 0x80 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* da46a9: movzx ecx, dx */
  ecx = (uint32_t)((edx & 0xffffu));
/* da46ac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da46ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da46ae: call dword ptr [0xde8ecc] */
  esp -= 4; W32(esp, 0xda46b4u); SPILL(); call_ind(R32(0xde8eccu)); if (g_unwind) return; /* USER32!LoadIconA */ RELOAD();
L_da46b4: /* da46b4: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* da46b7: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* da46ba: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* da46bf: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* da46c2: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da46c5: je 0xda46f2 */
  if (zf) goto L_da46f2;
L_da46c7: /* da46c7: mov ecx, dword ptr [0xde8934] */
  ecx = R32((uint32_t)(0xde8934u));
/* da46cd: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* da46cf: mov ecx, dword ptr [0xde50e8] */
  ecx = R32((uint32_t)(0xde50e8u));
/* da46d5: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  edx = r;
  }
/* da46d7: sbb edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edx = r;
  }
/* da46d9: and edx, 0x6ed4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x6ed4u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* da46df: add edx, 0x80 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* da46e5: movzx eax, dx */
  eax = (uint32_t)((edx & 0xffffu));
/* da46e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da46e9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da46ea: call dword ptr [0xde8e44] */
  esp -= 4; W32(esp, 0xda46f0u); SPILL(); call_ind(R32(0xde8e44u)); if (g_unwind) return; /* USER32!LoadIconW */ RELOAD();
/* da46f0: jmp 0xda4719 */
  goto L_da4719;
L_da46f2: /* da46f2: mov edx, dword ptr [0xde8934] */
  edx = R32((uint32_t)(0xde8934u));
/* da46f8: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* da46fa: mov edx, dword ptr [0xde50e8] */
  edx = R32((uint32_t)(0xde50e8u));
/* da4700: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* da4702: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* da4704: and eax, 0x6ed4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6ed4u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* da4709: add eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* da470e: movzx ecx, ax */
  ecx = (uint32_t)((eax & 0xffffu));
/* da4711: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da4712: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da4713: call dword ptr [0xde8ecc] */
  esp -= 4; W32(esp, 0xda4719u); SPILL(); call_ind(R32(0xde8eccu)); if (g_unwind) return; /* USER32!LoadIconA */ RELOAD();
L_da4719: /* da4719: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* da471c: lea eax, [ebp - 0x4c] */
  eax = (uint32_t)(ebp + 0xffffffb4u);
/* da471f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da4720: call dword ptr [0xde8e70] */
  esp -= 4; W32(esp, 0xda4726u); SPILL(); call_ind(R32(0xde8e70u)); if (g_unwind) return; /* USER32!RegisterClassExW */ RELOAD();
/* da4726: test ax, ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* da4729: jne 0xda489d */
  if (!zf) goto L_da489d;
L_da472f: /* da472f: push 0x1c8 */
  { uint32_t v = 0x1c8u; esp -= 4; W32(esp, v); }
/* da4734: push 0xde37fc */
  { uint32_t v = 0xde37fcu; esp -= 4; W32(esp, v); }
/* da4739: push 0xde3808 */
  { uint32_t v = 0xde3808u; esp -= 4; W32(esp, v); }
/* da473e: jmp 0xda4894 */
  goto L_da4894;
L_da4743: /* da4743: mov ecx, 0x30 */
  ecx = 0x30u;
/* da4748: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* da474b: xor eax, eax */
  eax = 0;
/* da474d: mov ebx, ecx */
  ebx = ecx;
/* da474f: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* da4752: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* da4755: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* da4757: mov ecx, ebx */
  ecx = ebx;
/* da4759: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* da475b: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* da475e: mov eax, dword ptr [0xde50e8] */
  eax = R32((uint32_t)(0xde50e8u));
/* da4763: mov ecx, dword ptr [0xde88ac] */
  ecx = R32((uint32_t)(0xde88acu));
/* da4769: mov dword ptr [ebp - 0x4c], 0x30 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x30u);
/* da4770: mov dword ptr [ebp - 0x48], edx */
  W32((uint32_t)(ebp + 0xffffffb8u), edx);
/* da4773: mov dword ptr [ebp - 0x44], 0xd813b6 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0xd813b6u);
/* da477a: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* da477d: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da4780: je 0xda47a7 */
  if (zf) goto L_da47a7;
L_da4782: /* da4782: mov edx, dword ptr [0xde8934] */
  edx = R32((uint32_t)(0xde8934u));
/* da4788: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* da478a: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  ecx = r;
  }
/* da478c: sbb ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ecx = r;
  }
/* da478e: and ecx, 0x6ed4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6ed4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* da4794: add ecx, 0x80 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* da479a: movzx edx, cx */
  edx = (uint32_t)((ecx & 0xffffu));
/* da479d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da479e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da479f: call dword ptr [0xde8e44] */
  esp -= 4; W32(esp, 0xda47a5u); SPILL(); call_ind(R32(0xde8e44u)); if (g_unwind) return; /* USER32!LoadIconW */ RELOAD();
/* da47a5: jmp 0xda47ca */
  goto L_da47ca;
L_da47a7: /* da47a7: mov ecx, dword ptr [0xde8934] */
  ecx = R32((uint32_t)(0xde8934u));
/* da47ad: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* da47af: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  edx = r;
  }
/* da47b1: sbb edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edx = r;
  }
/* da47b3: and edx, 0x6ed4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x6ed4u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* da47b9: add edx, 0x80 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* da47bf: movzx ecx, dx */
  ecx = (uint32_t)((edx & 0xffffu));
/* da47c2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da47c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da47c4: call dword ptr [0xde8ecc] */
  esp -= 4; W32(esp, 0xda47cau); SPILL(); call_ind(R32(0xde8eccu)); if (g_unwind) return; /* USER32!LoadIconA */ RELOAD();
L_da47ca: /* da47ca: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* da47cd: mov ebx, dword ptr [0xde88c8] */
  ebx = R32((uint32_t)(0xde88c8u));
/* da47d3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da47d4: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* da47d7: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xda47d9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da47d9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da47dc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da47de: jne 0xda47e4 */
  if (!zf) goto L_da47e4;
L_da47e0: /* da47e0: xor edi, edi */
  edi = 0;
/* da47e2: jmp 0xda4800 */
  goto L_da4800;
L_da47e4: /* da47e4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da47e5: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xda47e7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da47e7: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* da47ea: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* da47ed: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* da47f0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da47f3: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* da47f6: call 0xdb7b00 */
  esp -= 4; W32(esp, 0xda47fbu); SPILL(); f_db7b00(); if (g_unwind) return; RELOAD();
/* da47fb: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* da47fe: mov edi, esp */
  edi = esp;
L_da4800: /* da4800: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da4801: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xda4803u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da4803: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da4806: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da4807: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da4808: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da4809: call dword ptr [0xde88c4] */
  esp -= 4; W32(esp, 0xda480fu); SPILL(); f_4e267b(); if (g_unwind) return; /* Core!?winToANSI@@YAPADPADPBGH@Z */ RELOAD();
/* da480f: mov edx, dword ptr [0xde88ac] */
  edx = R32((uint32_t)(0xde88acu));
/* da4815: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* da4818: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* da481a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da481d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da481f: je 0xda484a */
  if (zf) goto L_da484a;
L_da4821: /* da4821: mov eax, dword ptr [0xde8934] */
  eax = R32((uint32_t)(0xde8934u));
/* da4826: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* da4828: mov eax, dword ptr [0xde50e8] */
  eax = R32((uint32_t)(0xde50e8u));
/* da482d: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  ecx = r;
  }
/* da482f: sbb ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ecx = r;
  }
/* da4831: and ecx, 0x6ed4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6ed4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* da4837: add ecx, 0x80 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* da483d: movzx edx, cx */
  edx = (uint32_t)((ecx & 0xffffu));
/* da4840: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da4841: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da4842: call dword ptr [0xde8e44] */
  esp -= 4; W32(esp, 0xda4848u); SPILL(); call_ind(R32(0xde8e44u)); if (g_unwind) return; /* USER32!LoadIconW */ RELOAD();
/* da4848: jmp 0xda4873 */
  goto L_da4873;
L_da484a: /* da484a: mov ecx, dword ptr [0xde8934] */
  ecx = R32((uint32_t)(0xde8934u));
/* da4850: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* da4852: mov ecx, dword ptr [0xde50e8] */
  ecx = R32((uint32_t)(0xde50e8u));
/* da4858: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  edx = r;
  }
/* da485a: sbb edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edx = r;
  }
/* da485c: and edx, 0x6ed4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x6ed4u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* da4862: add edx, 0x80 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* da4868: movzx eax, dx */
  eax = (uint32_t)((edx & 0xffffu));
/* da486b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da486c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da486d: call dword ptr [0xde8ecc] */
  esp -= 4; W32(esp, 0xda4873u); SPILL(); call_ind(R32(0xde8eccu)); if (g_unwind) return; /* USER32!LoadIconA */ RELOAD();
L_da4873: /* da4873: lea edx, [ebp - 0x4c] */
  edx = (uint32_t)(ebp + 0xffffffb4u);
/* da4876: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da4877: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* da487a: call dword ptr [0xde8e6c] */
  esp -= 4; W32(esp, 0xda4880u); SPILL(); call_ind(R32(0xde8e6cu)); if (g_unwind) return; /* USER32!RegisterClassExA */ RELOAD();
/* da4880: test ax, ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* da4883: jne 0xda489d */
  if (!zf) goto L_da489d;
L_da4885: /* da4885: push 0x1d6 */
  { uint32_t v = 0x1d6u; esp -= 4; W32(esp, v); }
/* da488a: push 0xde3824 */
  { uint32_t v = 0xde3824u; esp -= 4; W32(esp, v); }
/* da488f: push 0xde3830 */
  { uint32_t v = 0xde3830u; esp -= 4; W32(esp, v); }
L_da4894: /* da4894: call dword ptr [0xde88a8] */
  esp -= 4; W32(esp, 0xda489au); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* da489a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_da489d: /* da489d: xor eax, eax */
  eax = 0;
/* da489f: lea esp, [ebp - 0x58] */
  esp = (uint32_t)(ebp + 0xffffffa8u);
/* da48a2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da48a5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da48ac: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da48ad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da48ae: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da48af: mov esp, ebp */
  esp = ebp;
/* da48b1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da48b2: ret  */
  esp += 4; SPILL(); return;
}

void f_da48b3(void) {
  LOAD_REGS();
L_da48b3: /* da48b3: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* da48b6: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* da48bb: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* da48be: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da48bf: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* da48c2: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda48c7u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_da48c7(); return;
}

void f_da48c7(void) {
  LOAD_REGS();
L_da48c7: /* da48c7: push 0xdc3c58 */
  { uint32_t v = 0xdc3c58u; esp -= 4; W32(esp, v); }
/* da48cc: push 0xde384c */
  { uint32_t v = 0xde384cu; esp -= 4; W32(esp, v); }
/* da48d1: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xda48d7u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* da48d7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da48da: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da48dc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da48de: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda48e3u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_da48e3: guest_badaddr(0xda48e3); return;
}

void f_da49b0(void) {
  LOAD_REGS();
L_da49b0: /* da49b0: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* da49b3: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* da49b6: lea eax, [esp] */
  eax = (uint32_t)(esp);
/* da49ba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da49bb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da49bc: call dword ptr [0xde8f60] */
  esp -= 4; W32(esp, 0xda49c2u); SPILL(); call_ind(R32(0xde8f60u)); if (g_unwind) return; /* USER32!GetClientRect */ RELOAD();
/* da49c2: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* da49c6: mov edx, dword ptr [esp] */
  edx = R32((uint32_t)(esp));
/* da49ca: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* da49ce: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* da49d0: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* da49d4: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* da49d7: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* da49db: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* da49de: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* da49e1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da49e4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da4a00(void) {
  LOAD_REGS();
L_da4a00: /* da4a00: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* da4a04: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* da4a08: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da4a09: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* da4a0d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da4a0e: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* da4a12: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* da4a14: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da4a15: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* da4a19: sub esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* da4a1b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da4a1c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da4a1d: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* da4a20: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da4a21: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da4a22: call dword ptr [0xde8f48] */
  esp -= 4; W32(esp, 0xda4a28u); SPILL(); call_ind(R32(0xde8f48u)); if (g_unwind) return; /* USER32!MoveWindow */ RELOAD();
/* da4a28: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da4a29: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_da4a40(void) {
  LOAD_REGS();
L_da4a40: /* da4a40: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* da4a43: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* da4a47: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* da4a49: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* da4a4c: mov dword ptr [esp], edx */
  W32((uint32_t)(esp), edx);
/* da4a50: lea edx, [esp] */
  edx = (uint32_t)(esp);
/* da4a54: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* da4a58: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* da4a5b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da4a5c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da4a5d: call dword ptr [0xde8e74] */
  esp -= 4; W32(esp, 0xda4a63u); SPILL(); call_ind(R32(0xde8e74u)); if (g_unwind) return; /* USER32!ClientToScreen */ RELOAD();
/* da4a63: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* da4a67: mov ecx, dword ptr [esp] */
  ecx = R32((uint32_t)(esp));
/* da4a6b: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* da4a6f: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* da4a71: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* da4a74: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da4a77: ret 8 */
  esp += 12; SPILL(); return;
}

void f_da4a90(void) {
  LOAD_REGS();
L_da4a90: /* da4a90: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* da4a93: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* da4a97: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* da4a99: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* da4a9c: mov dword ptr [esp], edx */
  W32((uint32_t)(esp), edx);
/* da4aa0: lea edx, [esp] */
  edx = (uint32_t)(esp);
/* da4aa4: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* da4aa8: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* da4aab: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da4aac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da4aad: call dword ptr [0xde8f20] */
  esp -= 4; W32(esp, 0xda4ab3u); SPILL(); call_ind(R32(0xde8f20u)); if (g_unwind) return; /* USER32!ScreenToClient */ RELOAD();
/* da4ab3: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* da4ab7: mov ecx, dword ptr [esp] */
  ecx = R32((uint32_t)(esp));
/* da4abb: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* da4abf: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* da4ac1: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* da4ac4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da4ac7: ret 8 */
  esp += 12; SPILL(); return;
}

void f_da4ae0(void) {
  LOAD_REGS();
L_da4ae0: /* da4ae0: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* da4ae3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da4ae4: mov ebx, dword ptr [0xde8e74] */
  ebx = R32((uint32_t)(0xde8e74u));
/* da4aea: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* da4aeb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da4aec: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* da4af0: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* da4af3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da4af4: mov edi, ecx */
  edi = ecx;
/* da4af6: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* da4af9: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* da4afd: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* da4b01: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* da4b04: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da4b05: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da4b06: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* da4b0a: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xda4b0cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da4b0c: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* da4b10: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* da4b12: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* da4b15: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* da4b19: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* da4b1d: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* da4b21: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* da4b25: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* da4b28: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da4b29: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da4b2a: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* da4b2e: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xda4b30u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da4b30: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* da4b34: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* da4b38: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* da4b3c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da4b3d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da4b3e: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* da4b40: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* da4b44: mov dword ptr [eax + 8], ebp */
  W32((uint32_t)(eax + 0x8u), ebp);
/* da4b47: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da4b48: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* da4b4b: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* da4b4e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da4b4f: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da4b52: ret 8 */
  esp += 12; SPILL(); return;
}

void f_da4b80(void) {
  LOAD_REGS();
L_da4b80: /* da4b80: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* da4b83: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da4b84: mov ebx, dword ptr [0xde8f20] */
  ebx = R32((uint32_t)(0xde8f20u));
/* da4b8a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* da4b8b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da4b8c: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* da4b90: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* da4b93: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da4b94: mov edi, ecx */
  edi = ecx;
/* da4b96: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* da4b99: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* da4b9d: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* da4ba1: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* da4ba4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da4ba5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da4ba6: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* da4baa: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xda4bacu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da4bac: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* da4bb0: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* da4bb2: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* da4bb5: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* da4bb9: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* da4bbd: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* da4bc1: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* da4bc5: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* da4bc8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da4bc9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da4bca: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* da4bce: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xda4bd0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da4bd0: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* da4bd4: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* da4bd8: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* da4bdc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da4bdd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da4bde: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* da4be0: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* da4be4: mov dword ptr [eax + 8], ebp */
  W32((uint32_t)(eax + 0x8u), ebp);
/* da4be7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da4be8: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* da4beb: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* da4bee: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da4bef: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da4bf2: ret 8 */
  esp += 12; SPILL(); return;
}

void f_da4c20(void) {
  LOAD_REGS();
L_da4c20: /* da4c20: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* da4c23: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da4c24: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* da4c28: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da4c29: mov esi, ecx */
  esi = ecx;
/* da4c2b: call dword ptr [0xde8ee8] */
  esp -= 4; W32(esp, 0xda4c31u); SPILL(); call_ind(R32(0xde8ee8u)); if (g_unwind) return; /* USER32!GetCursorPos */ RELOAD();
/* da4c31: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* da4c35: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* da4c39: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* da4c3d: mov dword ptr [esp + 4], ecx */
  W32((uint32_t)(esp + 0x4u), ecx);
/* da4c41: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* da4c44: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da4c45: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da4c46: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* da4c4a: call dword ptr [0xde8f20] */
  esp -= 4; W32(esp, 0xda4c50u); SPILL(); call_ind(R32(0xde8f20u)); if (g_unwind) return; /* USER32!ScreenToClient */ RELOAD();
/* da4c50: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* da4c54: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* da4c58: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* da4c5c: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* da4c5e: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* da4c61: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da4c62: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da4c65: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da4c90(void) {
  LOAD_REGS();
L_da4c90: /* da4c90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* da4c91: mov ebp, esp */
  ebp = esp;
/* da4c93: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* da4c95: push 0xdba3f0 */
  { uint32_t v = 0xdba3f0u; esp -= 4; W32(esp, v); }
/* da4c9a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* da4ca0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da4ca1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* da4ca8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* da4cab: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* da4cae: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da4caf: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* da4cb2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da4cb3: mov esi, ecx */
  esi = ecx;
/* da4cb5: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* da4cb8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da4cba: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da4cbb: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* da4cbe: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* da4cc5: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* da4cc8: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* da4ccc: mov dword ptr [esi + 0x30], ebx */
  W32((uint32_t)(esi + 0x30u), ebx);
/* da4ccf: mov dword ptr [esi + 0x34], edi */
  W32((uint32_t)(esi + 0x34u), edi);
/* da4cd2: je 0xda4d26 */
  if (zf) goto L_da4d26;
L_da4cd4: /* da4cd4: cmp eax, 0x102 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x102u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da4cd9: jne 0xda4ce3 */
  if (!zf) goto L_da4ce3;
L_da4cdb: /* da4cdb: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* da4cdd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da4cde: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da4cdf: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0xda4ce1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da4ce1: jmp 0xda4d23 */
  goto L_da4d23;
L_da4ce3: /* da4ce3: cmp eax, 0x100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da4ce8: jne 0xda4cf3 */
  if (!zf) goto L_da4cf3;
L_da4cea: /* da4cea: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* da4cec: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da4ced: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da4cee: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0xda4cf1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da4cf1: jmp 0xda4d23 */
  goto L_da4d23;
L_da4cf3: /* da4cf3: cmp eax, 0x201 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x201u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da4cf8: jne 0xda4d0c */
  if (!zf) goto L_da4d0c;
L_da4cfa: /* da4cfa: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* da4cfc: mov eax, edi */
  eax = edi;
/* da4cfe: shr eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* da4d01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da4d02: movzx eax, di */
  eax = (uint32_t)((edi & 0xffffu));
/* da4d05: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da4d06: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da4d07: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0xda4d0au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da4d0a: jmp 0xda4d23 */
  goto L_da4d23;
L_da4d0c: /* da4d0c: cmp eax, 0x204 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x204u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da4d11: jne 0xda4d26 */
  if (!zf) goto L_da4d26;
L_da4d13: /* da4d13: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* da4d15: mov eax, edi */
  eax = edi;
/* da4d17: shr eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* da4d1a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da4d1b: movzx eax, di */
  eax = (uint32_t)((edi & 0xffffu));
/* da4d1e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da4d1f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da4d20: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xda4d23u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_da4d23: /* da4d23: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_da4d26: /* da4d26: test byte ptr [esi + 0x10], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x10u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* da4d2a: jne 0xda4dd0 */
  if (!zf) goto L_da4dd0;
L_da4d30: /* da4d30: mov ecx, dword ptr [0xde51bc] */
  ecx = R32((uint32_t)(0xde51bcu));
/* da4d36: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da4d38: jne 0xda4dd0 */
  if (!zf) goto L_da4dd0;
L_da4d3e: /* da4d3e: cmp eax, 0x1c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da4d41: jne 0xda4daf */
  if (!zf) goto L_da4daf;
L_da4d43: /* da4d43: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* da4d48: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da4d4b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da4d4d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da4d4e: mov dword ptr [0xde7ed8], ebx */
  W32((uint32_t)(0xde7ed8u), ebx);
/* da4d54: push 0x86 */
  { uint32_t v = 0x86u; esp -= 4; W32(esp, v); }
/* da4d59: je 0xda4d85 */
  if (zf) goto L_da4d85;
L_da4d5b: /* da4d5b: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* da4d5e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da4d5f: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xda4d65u); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* da4d65: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* da4d68: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da4d6a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da4d6b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da4d6c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da4d6d: mov ecx, esi */
  ecx = esi;
/* da4d6f: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0xda4d72u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da4d72: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da4d75: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da4d7c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da4d7d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da4d7e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da4d7f: mov esp, ebp */
  esp = ebp;
/* da4d81: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da4d82: ret 0xc */
  esp += 16; SPILL(); return;
L_da4d85: /* da4d85: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* da4d88: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da4d89: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xda4d8fu); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* da4d8f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* da4d92: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da4d94: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da4d95: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da4d96: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da4d97: mov ecx, esi */
  ecx = esi;
/* da4d99: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0xda4d9cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da4d9c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da4d9f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da4da6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da4da7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da4da8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da4da9: mov esp, ebp */
  esp = ebp;
/* da4dab: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da4dac: ret 0xc */
  esp += 16; SPILL(); return;
L_da4daf: /* da4daf: cmp eax, 0x86 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x86u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da4db4: jne 0xda4dd0 */
  if (!zf) goto L_da4dd0;
L_da4db6: /* da4db6: mov eax, dword ptr [0xde7ed8] */
  eax = R32((uint32_t)(0xde7ed8u));
/* da4dbb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da4dbd: je 0xda55ae */
  if (zf) goto L_da55ae;
L_da4dc3: /* da4dc3: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da4dc5: jne 0xda55ae */
  if (!zf) goto L_da55ae;
L_da4dcb: /* da4dcb: jmp 0xda544a */
  goto L_da544a;
L_da4dd0: /* da4dd0: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da4dd3: jne 0xda4dff */
  if (!zf) goto L_da4dff;
L_da4dd5: /* da4dd5: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da4dd7: mov ecx, esi */
  ecx = esi;
/* da4dd9: call dword ptr [eax + 0xe0] */
  { uint32_t t = R32((uint32_t)(eax + 0xe0u)); esp -= 4; W32(esp, 0xda4ddfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da4ddf: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* da4de2: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da4de4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da4de5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da4de6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da4de7: mov ecx, esi */
  ecx = esi;
/* da4de9: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0xda4decu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da4dec: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da4def: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da4df6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da4df7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da4df8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da4df9: mov esp, ebp */
  esp = ebp;
/* da4dfb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da4dfc: ret 0xc */
  esp += 16; SPILL(); return;
L_da4dff: /* da4dff: cmp eax, 0x2b */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da4e02: jne 0xda4e2e */
  if (!zf) goto L_da4e2e;
L_da4e04: /* da4e04: xor eax, eax */
  eax = 0;
L_da4e06: /* da4e06: cmp eax, dword ptr [esi + 0x24] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da4e09: jge 0xda544a */
  if ((sf == of)) goto L_da544a;
L_da4e0f: /* da4e0f: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* da4e12: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* da4e15: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* da4e18: cmp edx, dword ptr [edi + 0x14] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da4e1b: jne 0xda4e2b */
  if (!zf) goto L_da4e2b;
L_da4e1d: /* da4e1d: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* da4e1f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da4e20: call dword ptr [eax + 0x8c] */
  { uint32_t t = R32((uint32_t)(eax + 0x8cu)); esp -= 4; W32(esp, 0xda4e26u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da4e26: jmp 0xda544a */
  goto L_da544a;
L_da4e2b: /* da4e2b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* da4e2c: jmp 0xda4e06 */
  goto L_da4e06;
L_da4e2e: /* da4e2e: cmp eax, 0x2c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da4e31: jne 0xda4e5e */
  if (!zf) goto L_da4e5e;
L_da4e33: /* da4e33: xor eax, eax */
  eax = 0;
L_da4e35: /* da4e35: cmp eax, dword ptr [esi + 0x24] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da4e38: jge 0xda544a */
  if ((sf == of)) goto L_da544a;
L_da4e3e: /* da4e3e: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* da4e41: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* da4e44: movzx edx, word ptr [ecx + 0xc] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0xcu)));
/* da4e48: cmp edx, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da4e4b: jne 0xda4e5b */
  if (!zf) goto L_da4e5b;
L_da4e4d: /* da4e4d: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* da4e4f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da4e50: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0xda4e56u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da4e56: jmp 0xda544a */
  goto L_da544a;
L_da4e5b: /* da4e5b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* da4e5c: jmp 0xda4e35 */
  goto L_da4e35;
L_da4e5e: /* da4e5e: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da4e61: jne 0xda4e8a */
  if (!zf) goto L_da4e8a;
L_da4e63: /* da4e63: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* da4e65: mov ecx, esi */
  ecx = esi;
/* da4e67: call dword ptr [edx + 0xdc] */
  { uint32_t t = R32((uint32_t)(edx + 0xdcu)); esp -= 4; W32(esp, 0xda4e6du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da4e6d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da4e6f: jne 0xda55ae */
  if (!zf) goto L_da55ae;
  SPILL(); f_da4e75(); return;
L_da4e8a: /* da4e8a: cmp eax, 0x102 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x102u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da4e8f: jne 0xda4eb9 */
  if (!zf) goto L_da4eb9;
L_da4e91: /* da4e91: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da4e93: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da4e94: mov ecx, esi */
  ecx = esi;
/* da4e96: call dword ptr [eax + 0x58] */
  { uint32_t t = R32((uint32_t)(eax + 0x58u)); esp -= 4; W32(esp, 0xda4e99u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da4e99: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* da4e9c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da4e9e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da4e9f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da4ea0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da4ea1: mov ecx, esi */
  ecx = esi;
/* da4ea3: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0xda4ea6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da4ea6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da4ea9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da4eb0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da4eb1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da4eb2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da4eb3: mov esp, ebp */
  esp = ebp;
/* da4eb5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da4eb6: ret 0xc */
  esp += 16; SPILL(); return;
L_da4eb9: /* da4eb9: cmp eax, 0x100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da4ebe: jne 0xda4ee8 */
  if (!zf) goto L_da4ee8;
L_da4ec0: /* da4ec0: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* da4ec2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da4ec3: mov ecx, esi */
  ecx = esi;
/* da4ec5: call dword ptr [edx + 0x5c] */
  { uint32_t t = R32((uint32_t)(edx + 0x5cu)); esp -= 4; W32(esp, 0xda4ec8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da4ec8: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* da4ecb: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da4ecd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da4ece: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da4ecf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da4ed0: mov ecx, esi */
  ecx = esi;
/* da4ed2: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0xda4ed5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da4ed5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da4ed8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da4edf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da4ee0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da4ee1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da4ee2: mov esp, ebp */
  esp = ebp;
/* da4ee4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da4ee5: ret 0xc */
  esp += 16; SPILL(); return;
L_da4ee8: /* da4ee8: cmp eax, 0xf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da4eeb: jne 0xda4f17 */
  if (!zf) goto L_da4f17;
L_da4eed: /* da4eed: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da4eef: mov ecx, esi */
  ecx = esi;
/* da4ef1: call dword ptr [eax + 0x84] */
  { uint32_t t = R32((uint32_t)(eax + 0x84u)); esp -= 4; W32(esp, 0xda4ef7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da4ef7: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* da4efa: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da4efc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da4efd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da4efe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da4eff: mov ecx, esi */
  ecx = esi;
/* da4f01: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0xda4f04u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da4f04: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da4f07: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da4f0e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da4f0f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da4f10: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da4f11: mov esp, ebp */
  esp = ebp;
/* da4f13: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da4f14: ret 0xc */
  esp += 16; SPILL(); return;
L_da4f17: /* da4f17: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da4f1a: jne 0xda4f46 */
  if (!zf) goto L_da4f46;
L_da4f1c: /* da4f1c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* da4f1e: mov ecx, esi */
  ecx = esi;
/* da4f20: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0xda4f26u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da4f26: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* da4f29: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da4f2b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da4f2c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da4f2d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da4f2e: mov ecx, esi */
  ecx = esi;
/* da4f30: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0xda4f33u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da4f33: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da4f36: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da4f3d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da4f3e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da4f3f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da4f40: mov esp, ebp */
  esp = ebp;
/* da4f42: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da4f43: ret 0xc */
  esp += 16; SPILL(); return;
L_da4f46: /* da4f46: cmp eax, 0x113 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x113u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da4f4b: jne 0xda4f77 */
  if (!zf) goto L_da4f77;
L_da4f4d: /* da4f4d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da4f4f: mov ecx, esi */
  ecx = esi;
/* da4f51: call dword ptr [eax + 0xa8] */
  { uint32_t t = R32((uint32_t)(eax + 0xa8u)); esp -= 4; W32(esp, 0xda4f57u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da4f57: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* da4f5a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da4f5c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da4f5d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da4f5e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da4f5f: mov ecx, esi */
  ecx = esi;
/* da4f61: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0xda4f64u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da4f64: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da4f67: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da4f6e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da4f6f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da4f70: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da4f71: mov esp, ebp */
  esp = ebp;
/* da4f73: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da4f74: ret 0xc */
  esp += 16; SPILL(); return;
L_da4f77: /* da4f77: cmp eax, 0x110 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x110u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da4f7c: jne 0xda4fa8 */
  if (!zf) goto L_da4fa8;
L_da4f7e: /* da4f7e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* da4f80: mov ecx, esi */
  ecx = esi;
/* da4f82: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0xda4f88u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da4f88: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* da4f8b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da4f8d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da4f8e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da4f8f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da4f90: mov ecx, esi */
  ecx = esi;
/* da4f92: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0xda4f95u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da4f95: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da4f98: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da4f9f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da4fa0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da4fa1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da4fa2: mov esp, ebp */
  esp = ebp;
/* da4fa4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da4fa5: ret 0xc */
  esp += 16; SPILL(); return;
L_da4fa8: /* da4fa8: cmp eax, 0x121 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x121u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da4fad: jne 0xda4fd9 */
  if (!zf) goto L_da4fd9;
L_da4faf: /* da4faf: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da4fb1: mov ecx, esi */
  ecx = esi;
/* da4fb3: call dword ptr [eax + 0x98] */
  { uint32_t t = R32((uint32_t)(eax + 0x98u)); esp -= 4; W32(esp, 0xda4fb9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da4fb9: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* da4fbc: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da4fbe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da4fbf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da4fc0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da4fc1: mov ecx, esi */
  ecx = esi;
/* da4fc3: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0xda4fc6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da4fc6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da4fc9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da4fd0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da4fd1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da4fd2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da4fd3: mov esp, ebp */
  esp = ebp;
/* da4fd5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da4fd6: ret 0xc */
  esp += 16; SPILL(); return;
L_da4fd9: /* da4fd9: cmp eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da4fdc: jne 0xda500f */
  if (!zf) goto L_da500f;
L_da4fde: /* da4fde: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da4fdf: call 0xd82126 */
  esp -= 4; W32(esp, 0xda4fe4u); SPILL(); f_d82126(); if (g_unwind) return; RELOAD();
/* da4fe4: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* da4fe6: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da4fe9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da4fea: mov ecx, esi */
  ecx = esi;
/* da4fec: call dword ptr [edx + 0x38] */
  { uint32_t t = R32((uint32_t)(edx + 0x38u)); esp -= 4; W32(esp, 0xda4fefu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da4fef: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* da4ff2: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da4ff4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da4ff5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da4ff6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da4ff7: mov ecx, esi */
  ecx = esi;
/* da4ff9: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0xda4ffcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da4ffc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da4fff: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da5006: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da5007: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da5008: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da5009: mov esp, ebp */
  esp = ebp;
/* da500b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da500c: ret 0xc */
  esp += 16; SPILL(); return;
L_da500f: /* da500f: cmp eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da5012: jne 0xda5044 */
  if (!zf) goto L_da5044;
L_da5014: /* da5014: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da5016: xor ecx, ecx */
  ecx = 0;
/* da5018: test bx, bx */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* da501b: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* da501e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da501f: mov ecx, esi */
  ecx = esi;
/* da5021: call dword ptr [eax + 0x54] */
  { uint32_t t = R32((uint32_t)(eax + 0x54u)); esp -= 4; W32(esp, 0xda5024u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da5024: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* da5027: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da5029: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da502a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da502b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da502c: mov ecx, esi */
  ecx = esi;
/* da502e: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0xda5031u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da5031: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da5034: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da503b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da503c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da503d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da503e: mov esp, ebp */
  esp = ebp;
/* da5040: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da5041: ret 0xc */
  esp += 16; SPILL(); return;
L_da5044: /* da5044: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da5047: jne 0xda507a */
  if (!zf) goto L_da507a;
L_da5049: /* da5049: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da504a: call 0xd81a46 */
  esp -= 4; W32(esp, 0xda504fu); SPILL(); f_d81a46(); if (g_unwind) return; RELOAD();
/* da504f: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* da5051: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da5054: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da5055: mov ecx, esi */
  ecx = esi;
/* da5057: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0xda505au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da505a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* da505d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da505f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da5060: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da5061: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da5062: mov ecx, esi */
  ecx = esi;
/* da5064: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0xda5067u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da5067: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da506a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da5071: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da5072: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da5073: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da5074: mov esp, ebp */
  esp = ebp;
/* da5076: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da5077: ret 0xc */
  esp += 16; SPILL(); return;
L_da507a: /* da507a: cmp eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da507d: jne 0xda50b1 */
  if (!zf) goto L_da50b1;
L_da507f: /* da507f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da5081: mov ecx, edi */
  ecx = edi;
/* da5083: shr ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* da5086: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da5087: movzx edx, di */
  edx = (uint32_t)((edi & 0xffffu));
/* da508a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da508b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da508c: mov ecx, esi */
  ecx = esi;
/* da508e: call dword ptr [eax + 0x40] */
  { uint32_t t = R32((uint32_t)(eax + 0x40u)); esp -= 4; W32(esp, 0xda5091u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da5091: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* da5094: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da5096: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da5097: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da5098: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da5099: mov ecx, esi */
  ecx = esi;
/* da509b: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0xda509eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da509e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da50a1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da50a8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da50a9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da50aa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da50ab: mov esp, ebp */
  esp = ebp;
/* da50ad: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da50ae: ret 0xc */
  esp += 16; SPILL(); return;
L_da50b1: /* da50b1: cmp eax, 0x46 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x46u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da50b4: jne 0xda50ed */
  if (!zf) goto L_da50ed;
L_da50b6: /* da50b6: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da50b8: lea ecx, [edi + 0x14] */
  ecx = (uint32_t)(edi + 0x14u);
/* da50bb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da50bc: lea edx, [edi + 0x10] */
  edx = (uint32_t)(edi + 0x10u);
/* da50bf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da50c0: lea ecx, [edi + 0xc] */
  ecx = (uint32_t)(edi + 0xcu);
/* da50c3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da50c4: lea edx, [edi + 8] */
  edx = (uint32_t)(edi + 0x8u);
/* da50c7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da50c8: mov ecx, esi */
  ecx = esi;
/* da50ca: call dword ptr [eax + 0x44] */
  { uint32_t t = R32((uint32_t)(eax + 0x44u)); esp -= 4; W32(esp, 0xda50cdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da50cd: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* da50d0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da50d2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da50d3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da50d4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da50d5: mov ecx, esi */
  ecx = esi;
/* da50d7: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0xda50dau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da50da: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da50dd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da50e4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da50e5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da50e6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da50e7: mov esp, ebp */
  esp = ebp;
/* da50e9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da50ea: ret 0xc */
  esp += 16; SPILL(); return;
L_da50ed: /* da50ed: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da50f0: jne 0xda5123 */
  if (!zf) goto L_da5123;
L_da50f2: /* da50f2: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da50f4: mov ecx, edi */
  ecx = edi;
/* da50f6: shr ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* da50f9: movzx edx, di */
  edx = (uint32_t)((edi & 0xffffu));
/* da50fc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da50fd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da50fe: mov ecx, esi */
  ecx = esi;
/* da5100: call dword ptr [eax + 0x48] */
  { uint32_t t = R32((uint32_t)(eax + 0x48u)); esp -= 4; W32(esp, 0xda5103u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da5103: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* da5106: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da5108: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da5109: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da510a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da510b: mov ecx, esi */
  ecx = esi;
/* da510d: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0xda5110u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da5110: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da5113: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da511a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da511b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da511c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da511d: mov esp, ebp */
  esp = ebp;
/* da511f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da5120: ret 0xc */
  esp += 16; SPILL(); return;
L_da5123: /* da5123: cmp eax, 0x302 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x302u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da5128: jne 0xda5151 */
  if (!zf) goto L_da5151;
L_da512a: /* da512a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da512c: mov ecx, esi */
  ecx = esi;
/* da512e: call dword ptr [eax + 0x68] */
  { uint32_t t = R32((uint32_t)(eax + 0x68u)); esp -= 4; W32(esp, 0xda5131u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da5131: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* da5134: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da5136: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da5137: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da5138: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da5139: mov ecx, esi */
  ecx = esi;
/* da513b: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0xda513eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da513e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da5141: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da5148: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da5149: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da514a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da514b: mov esp, ebp */
  esp = ebp;
/* da514d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da514e: ret 0xc */
  esp += 16; SPILL(); return;
L_da5151: /* da5151: cmp eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da5154: jne 0xda517e */
  if (!zf) goto L_da517e;
L_da5156: /* da5156: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* da5158: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da5159: mov ecx, esi */
  ecx = esi;
/* da515b: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0xda515eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da515e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* da5161: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da5163: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da5164: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da5165: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da5166: mov ecx, esi */
  ecx = esi;
/* da5168: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0xda516bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da516b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da516e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da5175: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da5176: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da5177: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da5178: mov esp, ebp */
  esp = ebp;
/* da517a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da517b: ret 0xc */
  esp += 16; SPILL(); return;
L_da517e: /* da517e: cmp eax, 0x4a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da5181: jne 0xda51ac */
  if (!zf) goto L_da51ac;
L_da5183: /* da5183: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da5185: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da5186: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da5187: mov ecx, esi */
  ecx = esi;
/* da5189: call dword ptr [eax + 0x34] */
  { uint32_t t = R32((uint32_t)(eax + 0x34u)); esp -= 4; W32(esp, 0xda518cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da518c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* da518f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da5191: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da5192: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da5193: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da5194: mov ecx, esi */
  ecx = esi;
/* da5196: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0xda5199u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da5199: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da519c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da51a3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da51a4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da51a5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da51a6: mov esp, ebp */
  esp = ebp;
/* da51a8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da51a9: ret 0xc */
  esp += 16; SPILL(); return;
L_da51ac: /* da51ac: cmp eax, 0x215 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x215u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da51b1: jne 0xda51dd */
  if (!zf) goto L_da51dd;
L_da51b3: /* da51b3: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* da51b5: mov ecx, esi */
  ecx = esi;
/* da51b7: call dword ptr [edx + 0xac] */
  { uint32_t t = R32((uint32_t)(edx + 0xacu)); esp -= 4; W32(esp, 0xda51bdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da51bd: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* da51c0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da51c2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da51c3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da51c4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da51c5: mov ecx, esi */
  ecx = esi;
/* da51c7: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0xda51cau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da51ca: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da51cd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da51d4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da51d5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da51d6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da51d7: mov esp, ebp */
  esp = ebp;
/* da51d9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da51da: ret 0xc */
  esp += 16; SPILL(); return;
L_da51dd: /* da51dd: cmp eax, 0x222 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x222u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da51e2: jne 0xda5219 */
  if (!zf) goto L_da5219;
L_da51e4: /* da51e4: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* da51e7: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da51e9: xor ecx, ecx */
  ecx = 0;
/* da51eb: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da51ed: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* da51f0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da51f1: mov ecx, esi */
  ecx = esi;
/* da51f3: call dword ptr [eax + 0xb0] */
  { uint32_t t = R32((uint32_t)(eax + 0xb0u)); esp -= 4; W32(esp, 0xda51f9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da51f9: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* da51fc: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da51fe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da51ff: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da5200: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da5201: mov ecx, esi */
  ecx = esi;
/* da5203: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0xda5206u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da5206: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da5209: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da5210: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da5211: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da5212: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da5213: mov esp, ebp */
  esp = ebp;
/* da5215: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da5216: ret 0xc */
  esp += 16; SPILL(); return;
L_da5219: /* da5219: cmp eax, 0x200 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da521e: jne 0xda5255 */
  if (!zf) goto L_da5255;
L_da5220: /* da5220: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* da5222: mov eax, edi */
  eax = edi;
/* da5224: movzx ecx, di */
  ecx = (uint32_t)((edi & 0xffffu));
/* da5227: shr eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* da522a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da522b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da522c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da522d: mov ecx, esi */
  ecx = esi;
/* da522f: call dword ptr [edx + 0xb4] */
  { uint32_t t = R32((uint32_t)(edx + 0xb4u)); esp -= 4; W32(esp, 0xda5235u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da5235: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* da5238: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da523a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da523b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da523c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da523d: mov ecx, esi */
  ecx = esi;
/* da523f: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0xda5242u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da5242: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da5245: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da524c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da524d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da524e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da524f: mov esp, ebp */
  esp = ebp;
/* da5251: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da5252: ret 0xc */
  esp += 16; SPILL(); return;
L_da5255: /* da5255: cmp eax, 0x201 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x201u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da525a: jne 0xda5286 */
  if (!zf) goto L_da5286;
L_da525c: /* da525c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da525e: mov ecx, esi */
  ecx = esi;
/* da5260: call dword ptr [eax + 0xb8] */
  { uint32_t t = R32((uint32_t)(eax + 0xb8u)); esp -= 4; W32(esp, 0xda5266u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da5266: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* da5269: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da526b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da526c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da526d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da526e: mov ecx, esi */
  ecx = esi;
/* da5270: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0xda5273u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da5273: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da5276: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da527d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da527e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da527f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da5280: mov esp, ebp */
  esp = ebp;
/* da5282: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da5283: ret 0xc */
  esp += 16; SPILL(); return;
L_da5286: /* da5286: cmp eax, 0x203 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x203u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da528b: jne 0xda52b7 */
  if (!zf) goto L_da52b7;
L_da528d: /* da528d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* da528f: mov ecx, esi */
  ecx = esi;
/* da5291: call dword ptr [edx + 0xbc] */
  { uint32_t t = R32((uint32_t)(edx + 0xbcu)); esp -= 4; W32(esp, 0xda5297u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da5297: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* da529a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da529c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da529d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da529e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da529f: mov ecx, esi */
  ecx = esi;
/* da52a1: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0xda52a4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da52a4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da52a7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da52ae: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da52af: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da52b0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da52b1: mov esp, ebp */
  esp = ebp;
/* da52b3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da52b4: ret 0xc */
  esp += 16; SPILL(); return;
L_da52b7: /* da52b7: cmp eax, 0x209 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x209u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da52bc: jne 0xda52e8 */
  if (!zf) goto L_da52e8;
L_da52be: /* da52be: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da52c0: mov ecx, esi */
  ecx = esi;
/* da52c2: call dword ptr [eax + 0xc0] */
  { uint32_t t = R32((uint32_t)(eax + 0xc0u)); esp -= 4; W32(esp, 0xda52c8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da52c8: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* da52cb: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da52cd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da52ce: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da52cf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da52d0: mov ecx, esi */
  ecx = esi;
/* da52d2: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0xda52d5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da52d5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da52d8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da52df: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da52e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da52e1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da52e2: mov esp, ebp */
  esp = ebp;
/* da52e4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da52e5: ret 0xc */
  esp += 16; SPILL(); return;
L_da52e8: /* da52e8: cmp eax, 0x206 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x206u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da52ed: jne 0xda5319 */
  if (!zf) goto L_da5319;
L_da52ef: /* da52ef: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* da52f1: mov ecx, esi */
  ecx = esi;
/* da52f3: call dword ptr [edx + 0xc4] */
  { uint32_t t = R32((uint32_t)(edx + 0xc4u)); esp -= 4; W32(esp, 0xda52f9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da52f9: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* da52fc: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da52fe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da52ff: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da5300: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da5301: mov ecx, esi */
  ecx = esi;
/* da5303: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0xda5306u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da5306: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da5309: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da5310: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da5311: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da5312: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da5313: mov esp, ebp */
  esp = ebp;
/* da5315: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da5316: ret 0xc */
  esp += 16; SPILL(); return;
L_da5319: /* da5319: cmp eax, 0x204 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x204u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da531e: jne 0xda534a */
  if (!zf) goto L_da534a;
L_da5320: /* da5320: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da5322: mov ecx, esi */
  ecx = esi;
/* da5324: call dword ptr [eax + 0xc8] */
  { uint32_t t = R32((uint32_t)(eax + 0xc8u)); esp -= 4; W32(esp, 0xda532au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da532a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* da532d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da532f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da5330: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da5331: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da5332: mov ecx, esi */
  ecx = esi;
/* da5334: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0xda5337u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da5337: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da533a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da5341: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da5342: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da5343: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da5344: mov esp, ebp */
  esp = ebp;
/* da5346: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da5347: ret 0xc */
  esp += 16; SPILL(); return;
L_da534a: /* da534a: cmp eax, 0x202 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x202u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da534f: jne 0xda537b */
  if (!zf) goto L_da537b;
L_da5351: /* da5351: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* da5353: mov ecx, esi */
  ecx = esi;
/* da5355: call dword ptr [edx + 0xcc] */
  { uint32_t t = R32((uint32_t)(edx + 0xccu)); esp -= 4; W32(esp, 0xda535bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da535b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* da535e: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da5360: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da5361: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da5362: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da5363: mov ecx, esi */
  ecx = esi;
/* da5365: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0xda5368u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da5368: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da536b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da5372: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da5373: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da5374: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da5375: mov esp, ebp */
  esp = ebp;
/* da5377: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da5378: ret 0xc */
  esp += 16; SPILL(); return;
L_da537b: /* da537b: cmp eax, 0x205 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x205u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da5380: jne 0xda53ac */
  if (!zf) goto L_da53ac;
L_da5382: /* da5382: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da5384: mov ecx, esi */
  ecx = esi;
/* da5386: call dword ptr [eax + 0xd0] */
  { uint32_t t = R32((uint32_t)(eax + 0xd0u)); esp -= 4; W32(esp, 0xda538cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da538c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* da538f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da5391: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da5392: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da5393: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da5394: mov ecx, esi */
  ecx = esi;
/* da5396: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0xda5399u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da5399: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da539c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da53a3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da53a4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da53a5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da53a6: mov esp, ebp */
  esp = ebp;
/* da53a8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da53a9: ret 0xc */
  esp += 16; SPILL(); return;
L_da53ac: /* da53ac: cmp eax, 0x300 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x300u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da53b1: jne 0xda53da */
  if (!zf) goto L_da53da;
L_da53b3: /* da53b3: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* da53b5: mov ecx, esi */
  ecx = esi;
/* da53b7: call dword ptr [edx + 0x60] */
  { uint32_t t = R32((uint32_t)(edx + 0x60u)); esp -= 4; W32(esp, 0xda53bau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da53ba: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* da53bd: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da53bf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da53c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da53c1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da53c2: mov ecx, esi */
  ecx = esi;
/* da53c4: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0xda53c7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da53c7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da53ca: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da53d1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da53d2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da53d3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da53d4: mov esp, ebp */
  esp = ebp;
/* da53d6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da53d7: ret 0xc */
  esp += 16; SPILL(); return;
L_da53da: /* da53da: cmp eax, 0x301 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x301u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da53df: jne 0xda5408 */
  if (!zf) goto L_da5408;
L_da53e1: /* da53e1: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da53e3: mov ecx, esi */
  ecx = esi;
/* da53e5: call dword ptr [eax + 0x64] */
  { uint32_t t = R32((uint32_t)(eax + 0x64u)); esp -= 4; W32(esp, 0xda53e8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da53e8: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* da53eb: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da53ed: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da53ee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da53ef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da53f0: mov ecx, esi */
  ecx = esi;
/* da53f2: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0xda53f5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da53f5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da53f8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da53ff: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da5400: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da5401: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da5402: mov esp, ebp */
  esp = ebp;
/* da5404: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da5405: ret 0xc */
  esp += 16; SPILL(); return;
L_da5408: /* da5408: cmp eax, 0x304 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x304u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da540d: jne 0xda5436 */
  if (!zf) goto L_da5436;
L_da540f: /* da540f: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* da5411: mov ecx, esi */
  ecx = esi;
/* da5413: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0xda5416u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da5416: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* da5419: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da541b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da541c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da541d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da541e: mov ecx, esi */
  ecx = esi;
/* da5420: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0xda5423u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da5423: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da5426: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da542d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da542e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da542f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da5430: mov esp, ebp */
  esp = ebp;
/* da5432: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da5433: ret 0xc */
  esp += 16; SPILL(); return;
L_da5436: /* da5436: cmp eax, 0x14 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da5439: jne 0xda5462 */
  if (!zf) goto L_da5462;
L_da543b: /* da543b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da543d: mov ecx, esi */
  ecx = esi;
/* da543f: call dword ptr [eax + 0x74] */
  { uint32_t t = R32((uint32_t)(eax + 0x74u)); esp -= 4; W32(esp, 0xda5442u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_da5442: /* da5442: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da5444: je 0xda55ae */
  if (zf) goto L_da55ae;
L_da544a: /* da544a: mov eax, 1 */
  eax = 0x1u;
/* da544f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da5452: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da5459: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da545a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da545b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da545c: mov esp, ebp */
  esp = ebp;
/* da545e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da545f: ret 0xc */
  esp += 16; SPILL(); return;
L_da5462: /* da5462: cmp eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da5465: jne 0xda5473 */
  if (!zf) goto L_da5473;
L_da5467: /* da5467: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* da5469: mov ecx, esi */
  ecx = esi;
/* da546b: call dword ptr [edx + 0xd8] */
  { uint32_t t = R32((uint32_t)(edx + 0xd8u)); esp -= 4; W32(esp, 0xda5471u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da5471: jmp 0xda5442 */
  goto L_da5442;
L_da5473: /* da5473: cmp eax, 0x4e */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da5476: jne 0xda54cd */
  if (!zf) goto L_da54cd;
L_da5478: /* da5478: xor eax, eax */
  eax = 0;
L_da547a: /* da547a: cmp eax, dword ptr [esi + 0x24] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da547d: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* da5480: jge 0xda54a5 */
  if ((sf == of)) goto L_da54a5;
L_da5482: /* da5482: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* da5485: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* da5488: movzx edx, word ptr [ecx + 0xc] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0xcu)));
/* da548c: cmp ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da548e: jne 0xda549f */
  if (!zf) goto L_da549f;
L_da5490: /* da5490: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* da5493: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* da5495: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da5496: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da5497: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da5498: call dword ptr [eax + 0x24] */
  { uint32_t t = R32((uint32_t)(eax + 0x24u)); esp -= 4; W32(esp, 0xda549bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da549b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da549d: jne 0xda544a */
  if (!zf) goto L_da544a;
L_da549f: /* da549f: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* da54a2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* da54a3: jmp 0xda547a */
  goto L_da547a;
L_da54a5: /* da54a5: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da54a7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da54a8: mov ecx, esi */
  ecx = esi;
/* da54aa: call dword ptr [eax + 0x4c] */
  { uint32_t t = R32((uint32_t)(eax + 0x4cu)); esp -= 4; W32(esp, 0xda54adu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da54ad: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* da54b0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da54b2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da54b3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da54b4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da54b5: mov ecx, esi */
  ecx = esi;
/* da54b7: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0xda54bau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da54ba: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da54bd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da54c4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da54c5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da54c6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da54c7: mov esp, ebp */
  esp = ebp;
/* da54c9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da54ca: ret 0xc */
  esp += 16; SPILL(); return;
L_da54cd: /* da54cd: cmp eax, 0x115 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x115u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da54d2: jne 0xda54fd */
  if (!zf) goto L_da54fd;
L_da54d4: /* da54d4: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* da54d6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da54d7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da54d8: mov ecx, esi */
  ecx = esi;
/* da54da: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xda54ddu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da54dd: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* da54e0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da54e2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da54e3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da54e4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da54e5: mov ecx, esi */
  ecx = esi;
/* da54e7: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0xda54eau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da54ea: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da54ed: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da54f4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da54f5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da54f6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da54f7: mov esp, ebp */
  esp = ebp;
/* da54f9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da54fa: ret 0xc */
  esp += 16; SPILL(); return;
L_da54fd: /* da54fd: cmp eax, 0x101 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x101u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da5502: jne 0xda5530 */
  if (!zf) goto L_da5530;
L_da5504: /* da5504: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da5506: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da5507: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da5508: mov ecx, esi */
  ecx = esi;
/* da550a: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0xda5510u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da5510: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* da5513: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da5515: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da5516: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da5517: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da5518: mov ecx, esi */
  ecx = esi;
/* da551a: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0xda551du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da551d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da5520: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da5527: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da5528: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da5529: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da552a: mov esp, ebp */
  esp = ebp;
/* da552c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da552d: ret 0xc */
  esp += 16; SPILL(); return;
L_da5530: /* da5530: cmp eax, 0x111 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x111u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da5535: je 0xda5578 */
  if (zf) goto L_da5578;
L_da5537: /* da5537: cmp eax, 0x114 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x114u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da553c: je 0xda556f */
  if (zf) goto L_da556f;
L_da553e: /* da553e: cmp eax, 0x112 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x112u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da5543: jne 0xda5552 */
  if (!zf) goto L_da5552;
L_da5545: /* da5545: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* da5547: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da5548: mov ecx, esi */
  ecx = esi;
/* da554a: call dword ptr [edx + 0x50] */
  { uint32_t t = R32((uint32_t)(edx + 0x50u)); esp -= 4; W32(esp, 0xda554du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da554d: jmp 0xda5442 */
  goto L_da5442;
L_da5552: /* da5552: cmp eax, 0x8034 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8034u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da5557: jne 0xda55ae */
  if (!zf) goto L_da55ae;
L_da5559: /* da5559: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* da555c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da555f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da5566: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da5567: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da5568: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da5569: mov esp, ebp */
  esp = ebp;
/* da556b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da556c: ret 0xc */
  esp += 16; SPILL(); return;
L_da556f: /* da556f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da5571: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da5572: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da5573: mov ecx, esi */
  ecx = esi;
/* da5575: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0xda5578u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_da5578: /* da5578: xor eax, eax */
  eax = 0;
L_da557a: /* da557a: cmp eax, dword ptr [esi + 0x24] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* da557d: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* da5580: jge 0xda55a6 */
  if ((sf == of)) goto L_da55a6;
L_da5582: /* da5582: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* da5585: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* da5588: cmp edi, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da558b: jne 0xda55a0 */
  if (!zf) goto L_da55a0;
L_da558d: /* da558d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* da5590: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* da5592: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da5593: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da5594: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da5595: call dword ptr [edx + 0x24] */
  { uint32_t t = R32((uint32_t)(edx + 0x24u)); esp -= 4; W32(esp, 0xda5598u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da5598: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da559a: jne 0xda544a */
  if (!zf) goto L_da544a;
L_da55a0: /* da55a0: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* da55a3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* da55a4: jmp 0xda557a */
  goto L_da557a;
L_da55a6: /* da55a6: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* da55a8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da55a9: mov ecx, esi */
  ecx = esi;
/* da55ab: call dword ptr [edx + 0x4c] */
  { uint32_t t = R32((uint32_t)(edx + 0x4cu)); esp -= 4; W32(esp, 0xda55aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_da55ae: /* da55ae: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* da55b1: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* da55b3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da55b4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da55b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da55b6: mov ecx, esi */
  ecx = esi;
/* da55b8: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0xda55bbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da55bb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da55be: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da55bf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da55c0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da55c7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da55c8: mov esp, ebp */
  esp = ebp;
/* da55ca: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da55cb: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_da4e75(void) {
  LOAD_REGS();
L_da4e75: /* da4e75: xor eax, eax */
  eax = 0;
/* da4e77: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da4e7a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da4e81: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da4e82: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da4e83: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da4e84: mov esp, ebp */
  esp = ebp;
/* da4e86: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da4e87: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_da55ce(void) {
  LOAD_REGS();
L_da55ce: /* da55ce: mov eax, 0xda4e75 */
  eax = 0xda4e75u;
/* da55d3: ret  */
  esp += 4; SPILL(); return;
}

void f_da55d4(void) {
  LOAD_REGS();
L_da55d4: /* da55d4: jmp 0xda4e75 */
  SPILL(); f_da4e75(); return;
}

void f_da55d9(void) {
  LOAD_REGS();
L_da55d9: /* da55d9: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* da55dc: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* da55e1: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* da55e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da55e5: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* da55e8: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda55edu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_da55ed(); return;
}

void f_da55ed(void) {
  LOAD_REGS();
L_da55ed: /* da55ed: push 0xdc3ca0 */
  { uint32_t v = 0xdc3ca0u; esp -= 4; W32(esp, v); }
/* da55f2: push 0xde3884 */
  { uint32_t v = 0xde3884u; esp -= 4; W32(esp, v); }
/* da55f7: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xda55fdu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* da55fd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da5600: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da5602: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da5604: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda5609u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_da5609: guest_badaddr(0xda5609); return;
}

void f_da5870(void) {
  LOAD_REGS();
L_da5870: /* da5870: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* da5871: mov ebp, esp */
  ebp = esp;
/* da5873: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* da5875: push 0xdba400 */
  { uint32_t v = 0xdba400u; esp -= 4; W32(esp, v); }
/* da587a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* da5880: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da5881: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* da5888: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* da588b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da588c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da588d: mov ebx, ecx */
  ebx = ecx;
/* da588f: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* da5892: xor esi, esi */
  esi = 0;
/* da5894: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da5896: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da5897: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* da589a: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* da589d: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* da58a0: jne 0xda58ba */
  if (!zf) goto L_da58ba;
L_da58a2: /* da58a2: push 0x2f7 */
  { uint32_t v = 0x2f7u; esp -= 4; W32(esp, v); }
/* da58a7: push 0xde388c */
  { uint32_t v = 0xde388cu; esp -= 4; W32(esp, v); }
/* da58ac: push 0xde3898 */
  { uint32_t v = 0xde3898u; esp -= 4; W32(esp, v); }
/* da58b1: call dword ptr [0xde88a8] */
  esp -= 4; W32(esp, 0xda58b7u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* da58b7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_da58ba: /* da58ba: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* da58bc: mov ecx, ebx */
  ecx = ebx;
/* da58be: call dword ptr [eax + 0x30] */
  { uint32_t t = R32((uint32_t)(eax + 0x30u)); esp -= 4; W32(esp, 0xda58c1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da58c1: mov ecx, dword ptr [0xde88f8] */
  ecx = R32((uint32_t)(0xde88f8u));
/* da58c7: mov edi, eax */
  edi = eax;
/* da58c9: cmp dword ptr [ecx], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da58cb: je 0xda5938 */
  if (zf) goto L_da5938;
L_da58cd: /* da58cd: mov edx, dword ptr [0xde88ac] */
  edx = R32((uint32_t)(0xde88acu));
/* da58d3: cmp dword ptr [edx], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da58d5: jne 0xda5938 */
  if (!zf) goto L_da5938;
L_da58d7: /* da58d7: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* da58da: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da58dc: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* da58df: je 0xda58fa */
  if (zf) goto L_da58fa;
L_da58e1: /* da58e1: lea eax, [edi + 8] */
  eax = (uint32_t)(edi + 0x8u);
/* da58e4: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* da58e7: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* da58ea: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* da58ed: call 0xdb7b00 */
  esp -= 4; W32(esp, 0xda58f2u); SPILL(); f_db7b00(); if (g_unwind) return; RELOAD();
/* da58f2: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* da58f5: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* da58f8: mov esi, esp */
  esi = esp;
L_da58fa: /* da58fa: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* da58fd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da58fe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da58ff: push 0xd */
  { uint32_t v = 0xdu; esp -= 4; W32(esp, v); }
/* da5901: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da5902: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xda5908u); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* da5908: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da590a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da590b: call dword ptr [0xde88ec] */
  esp -= 4; W32(esp, 0xda5911u); SPILL(); f_4e161d(); if (g_unwind) return; /* Core!?appFromAnsi@@YAPBGPBDPAG@Z */ RELOAD();
/* da5911: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da5914: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_da5915: /* da5915: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* da5918: mov ecx, esi */
  ecx = esi;
/* da591a: call dword ptr [0xde88e4] */
  esp -= 4; W32(esp, 0xda5920u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* da5920: mov eax, esi */
  eax = esi;
/* da5922: lea esp, [ebp - 0x28] */
  esp = (uint32_t)(ebp + 0xffffffd8u);
/* da5925: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da5928: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da592f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da5930: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da5931: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da5932: mov esp, ebp */
  esp = ebp;
/* da5934: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da5935: ret 4 */
  esp += 8; SPILL(); return;
L_da5938: /* da5938: lea eax, [edi + edi + 2] */
  eax = (uint32_t)(edi + edi + 0x2u);
/* da593c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da593e: je 0xda5957 */
  if (zf) goto L_da5957;
L_da5940: /* da5940: lea eax, [edi + edi + 9] */
  eax = (uint32_t)(edi + edi + 0x9u);
/* da5944: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* da5947: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* da594a: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* da594d: call 0xdb7b00 */
  esp -= 4; W32(esp, 0xda5952u); SPILL(); f_db7b00(); if (g_unwind) return; RELOAD();
/* da5952: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* da5955: mov esi, esp */
  esi = esp;
L_da5957: /* da5957: mov ebx, dword ptr [ebx + 4] */
  ebx = R32((uint32_t)(ebx + 0x4u));
/* da595a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da595b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* da595c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da595d: push 0xd */
  { uint32_t v = 0xdu; esp -= 4; W32(esp, v); }
/* da595f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da5960: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xda5966u); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* da5966: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da5967: jmp 0xda5915 */
  goto L_da5915;
}

void f_da5969(void) {
  LOAD_REGS();
L_da5969: /* da5969: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* da596c: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* da5971: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* da5974: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da5975: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* da5978: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda597du); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_da597d(); return;
}

void f_da597d(void) {
  LOAD_REGS();
L_da597d: /* da597d: push 0xdc3cc8 */
  { uint32_t v = 0xdc3cc8u; esp -= 4; W32(esp, v); }
/* da5982: push 0xde38a0 */
  { uint32_t v = 0xde38a0u; esp -= 4; W32(esp, v); }
/* da5987: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xda598du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* da598d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da5990: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da5992: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da5994: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda5999u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_da5999: guest_badaddr(0xda5999); return;
}

void f_da59f0(void) {
  LOAD_REGS();
L_da59f0: /* da59f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* da59f1: mov ebp, esp */
  ebp = esp;
/* da59f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* da59f5: push 0xdba410 */
  { uint32_t v = 0xdba410u; esp -= 4; W32(esp, v); }
/* da59fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* da5a00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da5a01: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* da5a08: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* da5a0b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da5a0c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da5a0d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da5a0e: mov ebx, ecx */
  ebx = ecx;
/* da5a10: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* da5a13: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* da5a16: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da5a17: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* da5a1e: call dword ptr [0xde8f5c] */
  esp -= 4; W32(esp, 0xda5a24u); SPILL(); call_ind(R32(0xde8f5cu)); if (g_unwind) return; /* USER32!IsWindow */ RELOAD();
/* da5a24: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da5a26: je 0xda5a45 */
  if (zf) goto L_da5a45;
L_da5a28: /* da5a28: mov ecx, dword ptr [0xde88ac] */
  ecx = R32((uint32_t)(0xde88acu));
/* da5a2e: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da5a31: je 0xda5a5b */
  if (zf) goto L_da5a5b;
L_da5a33: /* da5a33: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* da5a36: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* da5a39: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da5a3a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da5a3c: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* da5a3e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da5a3f: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xda5a45u); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
L_da5a45: /* da5a45: lea esp, [ebp - 0x24] */
  esp = (uint32_t)(ebp + 0xffffffdcu);
/* da5a48: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da5a4b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da5a52: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da5a53: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da5a54: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da5a55: mov esp, ebp */
  esp = ebp;
/* da5a57: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da5a58: ret 4 */
  esp += 8; SPILL(); return;
L_da5a5b: /* da5a5b: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* da5a5e: mov edi, dword ptr [0xde88c8] */
  edi = R32((uint32_t)(0xde88c8u));
/* da5a64: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da5a65: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xda5a67u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da5a67: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da5a6a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da5a6c: jne 0xda5a73 */
  if (!zf) goto L_da5a73;
L_da5a6e: /* da5a6e: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* da5a71: jmp 0xda5a90 */
  goto L_da5a90;
L_da5a73: /* da5a73: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da5a74: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xda5a76u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da5a76: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* da5a79: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* da5a7c: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* da5a7f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da5a82: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* da5a85: call 0xdb7b00 */
  esp -= 4; W32(esp, 0xda5a8au); SPILL(); f_db7b00(); if (g_unwind) return; RELOAD();
/* da5a8a: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* da5a8d: mov dword ptr [ebp + 8], esp */
  W32((uint32_t)(ebp + 0x8u), esp);
L_da5a90: /* da5a90: mov ebx, dword ptr [ebx + 4] */
  ebx = R32((uint32_t)(ebx + 0x4u));
/* da5a93: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da5a94: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xda5a96u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da5a96: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* da5a99: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da5a9c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da5a9d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da5a9e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da5a9f: call dword ptr [0xde88c4] */
  esp -= 4; W32(esp, 0xda5aa5u); SPILL(); f_4e267b(); if (g_unwind) return; /* Core!?winToANSI@@YAPADPADPBGH@Z */ RELOAD();
/* da5aa5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da5aa8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da5aa9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da5aab: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* da5aad: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da5aae: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xda5ab4u); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* da5ab4: jmp 0xda5a45 */
  goto L_da5a45;
}

void f_da5ab6(void) {
  LOAD_REGS();
L_da5ab6: /* da5ab6: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* da5ab9: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* da5abe: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* da5ac1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da5ac2: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* da5ac5: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda5acau); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_da5aca(); return;
}

void f_da5aca(void) {
  LOAD_REGS();
L_da5aca: /* da5aca: push 0xdc3cf0 */
  { uint32_t v = 0xdc3cf0u; esp -= 4; W32(esp, v); }
/* da5acf: push 0xde38a8 */
  { uint32_t v = 0xde38a8u; esp -= 4; W32(esp, v); }
/* da5ad4: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xda5adau); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* da5ada: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da5add: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da5adf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da5ae1: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda5ae6u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_da5ae6: guest_badaddr(0xda5ae6); return;
}

void f_da5b30(void) {
  LOAD_REGS();
L_da5b30: /* da5b30: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* da5b31: mov ebp, esp */
  ebp = esp;
/* da5b33: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* da5b35: push 0xdba420 */
  { uint32_t v = 0xdba420u; esp -= 4; W32(esp, v); }
/* da5b3a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* da5b40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da5b41: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* da5b48: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* da5b4b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da5b4c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da5b4d: mov esi, ecx */
  esi = ecx;
/* da5b4f: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* da5b52: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da5b54: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da5b55: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* da5b58: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* da5b5f: jne 0xda5b79 */
  if (!zf) goto L_da5b79;
L_da5b61: /* da5b61: push 0x315 */
  { uint32_t v = 0x315u; esp -= 4; W32(esp, v); }
/* da5b66: push 0xde38b0 */
  { uint32_t v = 0xde38b0u; esp -= 4; W32(esp, v); }
/* da5b6b: push 0xde38bc */
  { uint32_t v = 0xde38bcu; esp -= 4; W32(esp, v); }
/* da5b70: call dword ptr [0xde88a8] */
  esp -= 4; W32(esp, 0xda5b76u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* da5b76: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_da5b79: /* da5b79: mov edx, dword ptr [0xde88ac] */
  edx = R32((uint32_t)(0xde88acu));
/* da5b7f: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da5b82: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* da5b85: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da5b87: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da5b89: push 0xe */
  { uint32_t v = 0xeu; esp -= 4; W32(esp, v); }
/* da5b8b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da5b8c: je 0xda5bd5 */
  if (zf) goto L_da5bd5;
L_da5b8e: /* da5b8e: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xda5b94u); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* da5b94: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da5b97: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da5b9e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da5b9f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da5ba0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da5ba1: mov esp, ebp */
  esp = ebp;
/* da5ba3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da5ba4: ret  */
  esp += 4; SPILL(); return;
L_da5bd5: /* da5bd5: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xda5bdbu); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* da5bdb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da5bde: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da5bdf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da5be0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da5be7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da5be8: mov esp, ebp */
  esp = ebp;
/* da5bea: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da5beb: ret  */
  esp += 4; SPILL(); return;
}

void f_da5ba5(void) {
  LOAD_REGS();
L_da5ba5: /* da5ba5: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* da5ba8: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* da5bad: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* da5bb0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da5bb1: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* da5bb4: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda5bb9u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_da5bb9(); return;
}

void f_da5bb9(void) {
  LOAD_REGS();
L_da5bb9: /* da5bb9: push 0xdc3d18 */
  { uint32_t v = 0xdc3d18u; esp -= 4; W32(esp, v); }
/* da5bbe: push 0xde38c4 */
  { uint32_t v = 0xde38c4u; esp -= 4; W32(esp, v); }
/* da5bc3: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xda5bc9u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* da5bc9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da5bcc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da5bce: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da5bd0: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda5bd5u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
/* da5bd5: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xda5bdbu); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* da5bdb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da5bde: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da5bdf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da5be0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da5be7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da5be8: mov esp, ebp */
  esp = ebp;
/* da5bea: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da5beb: ret  */
  esp += 4; SPILL(); return;
}

void f_da5c20(void) {
  LOAD_REGS();
L_da5c20: /* da5c20: call 0xd81753 */
  esp -= 4; W32(esp, 0xda5c25u); SPILL(); f_d81753(); if (g_unwind) return; RELOAD();
/* da5c25: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da5c40(void) {
  LOAD_REGS();
L_da5c40: /* da5c40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* da5c41: mov ebp, esp */
  ebp = esp;
/* da5c43: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* da5c45: push 0xdba430 */
  { uint32_t v = 0xdba430u; esp -= 4; W32(esp, v); }
/* da5c4a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* da5c50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da5c51: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* da5c58: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* da5c5b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da5c5c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da5c5d: mov esi, ecx */
  esi = ecx;
/* da5c5f: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* da5c62: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da5c64: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da5c65: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* da5c68: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* da5c6f: jne 0xda5c89 */
  if (!zf) goto L_da5c89;
L_da5c71: /* da5c71: push 0x37d */
  { uint32_t v = 0x37du; esp -= 4; W32(esp, v); }
/* da5c76: push 0xde3958 */
  { uint32_t v = 0xde3958u; esp -= 4; W32(esp, v); }
/* da5c7b: push 0xde3964 */
  { uint32_t v = 0xde3964u; esp -= 4; W32(esp, v); }
/* da5c80: call dword ptr [0xde88a8] */
  esp -= 4; W32(esp, 0xda5c86u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* da5c86: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_da5c89: /* da5c89: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* da5c8c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da5c8d: call dword ptr [0xde8f0c] */
  esp -= 4; W32(esp, 0xda5c93u); SPILL(); call_ind(R32(0xde8f0cu)); if (g_unwind) return; /* USER32!DestroyWindow */ RELOAD();
/* da5c93: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da5c96: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da5c97: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da5c98: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da5c9f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da5ca0: mov esp, ebp */
  esp = ebp;
/* da5ca2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da5ca3: ret  */
  esp += 4; SPILL(); return;
}

void f_da5ca4(void) {
  LOAD_REGS();
L_da5ca4: /* da5ca4: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* da5ca7: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* da5cac: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* da5caf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da5cb0: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* da5cb3: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda5cb8u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_da5cb8(); return;
}

void f_da5cb8(void) {
  LOAD_REGS();
L_da5cb8: /* da5cb8: push 0xdc3d48 */
  { uint32_t v = 0xdc3d48u; esp -= 4; W32(esp, v); }
/* da5cbd: push 0xde396c */
  { uint32_t v = 0xde396cu; esp -= 4; W32(esp, v); }
/* da5cc2: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xda5cc8u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* da5cc8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da5ccb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da5ccd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da5ccf: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda5cd4u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_da5cd4: guest_badaddr(0xda5cd4); return;
}

void f_da5d10(void) {
  LOAD_REGS();
L_da5d10: /* da5d10: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* da5d15: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* da5d17: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* da5d1a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da5d1c: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da5d1e: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* da5d22: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da5d23: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* da5d25: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da5d26: je 0xda5d31 */
  if (zf) goto L_da5d31;
L_da5d28: /* da5d28: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xda5d2eu); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* da5d2e: ret 4 */
  esp += 8; SPILL(); return;
L_da5d31: /* da5d31: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xda5d37u); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* da5d37: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da5d50(void) {
  LOAD_REGS();
L_da5d50: /* da5d50: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* da5d55: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* da5d57: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* da5d5a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da5d5c: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da5d5e: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* da5d62: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da5d63: push 0xb */
  { uint32_t v = 0xbu; esp -= 4; W32(esp, v); }
/* da5d65: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da5d66: je 0xda5d71 */
  if (zf) goto L_da5d71;
L_da5d68: /* da5d68: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xda5d6eu); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* da5d6e: ret 4 */
  esp += 8; SPILL(); return;
L_da5d71: /* da5d71: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xda5d77u); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* da5d77: ret 4 */
  esp += 8; SPILL(); return;
}

void f_da5d90(void) {
  LOAD_REGS();
L_da5d90: /* da5d90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* da5d91: mov ebp, esp */
  ebp = esp;
/* da5d93: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* da5d95: push 0xdba440 */
  { uint32_t v = 0xdba440u; esp -= 4; W32(esp, v); }
/* da5d9a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* da5da0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da5da1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* da5da8: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* da5dab: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* da5db0: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* da5db2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da5db3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da5db4: xor esi, esi */
  esi = 0;
/* da5db6: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da5db8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da5db9: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* da5dbc: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* da5dbf: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* da5dc2: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* da5dc5: je 0xda5e77 */
  if (zf) goto L_da5e77;
L_da5dcb: /* da5dcb: mov ecx, 0x30 */
  ecx = 0x30u;
/* da5dd0: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* da5dd3: xor eax, eax */
  eax = 0;
/* da5dd5: mov ebx, ecx */
  ebx = ecx;
/* da5dd7: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* da5dda: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* da5ddd: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* da5ddf: mov ecx, ebx */
  ecx = ebx;
/* da5de1: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* da5de3: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* da5de6: lea edx, [ebp - 0x4c] */
  edx = (uint32_t)(ebp + 0xffffffb4u);
/* da5de9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da5dea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da5deb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da5dec: mov dword ptr [ebp - 0x4c], 0x30 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x30u);
/* da5df3: call dword ptr [0xde8e7c] */
  esp -= 4; W32(esp, 0xda5df9u); SPILL(); call_ind(R32(0xde8e7cu)); if (g_unwind) return; /* USER32!GetClassInfoExW */ RELOAD();
/* da5df9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da5dfb: mov edi, dword ptr [0xde88a8] */
  edi = R32((uint32_t)(0xde88a8u));
/* da5e01: jne 0xda5e17 */
  if (!zf) goto L_da5e17;
L_da5e03: /* da5e03: push 0x418 */
  { uint32_t v = 0x418u; esp -= 4; W32(esp, v); }
/* da5e08: push 0xde3a58 */
  { uint32_t v = 0xde3a58u; esp -= 4; W32(esp, v); }
/* da5e0d: push 0xde3a64 */
  { uint32_t v = 0xde3a64u; esp -= 4; W32(esp, v); }
/* da5e12: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xda5e14u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da5e14: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_da5e17: /* da5e17: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* da5e1a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da5e1c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* da5e1f: mov edx, dword ptr [0xde50e8] */
  edx = R32((uint32_t)(0xde50e8u));
/* da5e25: mov esi, dword ptr [ebp - 0x44] */
  esi = R32((uint32_t)(ebp + 0xffffffbcu));
/* da5e28: mov dword ptr [ebp - 0x44], 0xd813b6 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0xd813b6u);
/* da5e2f: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* da5e32: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* da5e35: je 0xda5e4b */
  if (zf) goto L_da5e4b;
L_da5e37: /* da5e37: push 0x41d */
  { uint32_t v = 0x41du; esp -= 4; W32(esp, v); }
/* da5e3c: push 0xde3a90 */
  { uint32_t v = 0xde3a90u; esp -= 4; W32(esp, v); }
/* da5e41: push 0xde3a9c */
  { uint32_t v = 0xde3a9cu; esp -= 4; W32(esp, v); }
/* da5e46: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xda5e48u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da5e48: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_da5e4b: /* da5e4b: lea eax, [ebp - 0x4c] */
  eax = (uint32_t)(ebp + 0xffffffb4u);
/* da5e4e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da5e4f: call dword ptr [0xde8e70] */
  esp -= 4; W32(esp, 0xda5e55u); SPILL(); call_ind(R32(0xde8e70u)); if (g_unwind) return; /* USER32!RegisterClassExW */ RELOAD();
/* da5e55: test ax, ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* da5e58: jne 0xda5fa1 */
  if (!zf) goto L_da5fa1;
L_da5e5e: /* da5e5e: push 0x41e */
  { uint32_t v = 0x41eu; esp -= 4; W32(esp, v); }
/* da5e63: push 0xde3ab4 */
  { uint32_t v = 0xde3ab4u; esp -= 4; W32(esp, v); }
/* da5e68: push 0xde3ac0 */
  { uint32_t v = 0xde3ac0u; esp -= 4; W32(esp, v); }
/* da5e6d: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xda5e6fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da5e6f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da5e72: jmp 0xda5fa1 */
  goto L_da5fa1;
L_da5e77: /* da5e77: mov ecx, 0x30 */
  ecx = 0x30u;
/* da5e7c: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* da5e7f: xor eax, eax */
  eax = 0;
/* da5e81: mov ebx, ecx */
  ebx = ecx;
/* da5e83: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* da5e86: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* da5e89: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* da5e8b: mov ecx, ebx */
  ecx = ebx;
/* da5e8d: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* da5e8f: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* da5e92: mov ebx, dword ptr [0xde88c8] */
  ebx = R32((uint32_t)(0xde88c8u));
/* da5e98: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da5e99: mov dword ptr [ebp - 0x4c], 0x30 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x30u);
/* da5ea0: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xda5ea2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da5ea2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da5ea5: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da5ea7: je 0xda5ec5 */
  if (zf) goto L_da5ec5;
L_da5ea9: /* da5ea9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da5eaa: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xda5eacu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da5eac: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* da5eaf: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* da5eb2: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* da5eb5: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da5eb8: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* da5ebb: call 0xdb7b00 */
  esp -= 4; W32(esp, 0xda5ec0u); SPILL(); f_db7b00(); if (g_unwind) return; RELOAD();
/* da5ec0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* da5ec3: mov esi, esp */
  esi = esp;
L_da5ec5: /* da5ec5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da5ec6: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xda5ec8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da5ec8: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da5ecb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da5ecc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da5ecd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da5ece: call dword ptr [0xde88c4] */
  esp -= 4; W32(esp, 0xda5ed4u); SPILL(); f_4e267b(); if (g_unwind) return; /* Core!?winToANSI@@YAPADPADPBGH@Z */ RELOAD();
/* da5ed4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da5ed7: lea edx, [ebp - 0x4c] */
  edx = (uint32_t)(ebp + 0xffffffb4u);
/* da5eda: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da5edb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da5edc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da5ede: call dword ptr [0xde8e78] */
  esp -= 4; W32(esp, 0xda5ee4u); SPILL(); call_ind(R32(0xde8e78u)); if (g_unwind) return; /* USER32!GetClassInfoExA */ RELOAD();
/* da5ee4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da5ee6: jne 0xda5f00 */
  if (!zf) goto L_da5f00;
L_da5ee8: /* da5ee8: push 0x426 */
  { uint32_t v = 0x426u; esp -= 4; W32(esp, v); }
/* da5eed: push 0xde3adc */
  { uint32_t v = 0xde3adcu; esp -= 4; W32(esp, v); }
/* da5ef2: push 0xde3ae8 */
  { uint32_t v = 0xde3ae8u; esp -= 4; W32(esp, v); }
/* da5ef7: call dword ptr [0xde88a8] */
  esp -= 4; W32(esp, 0xda5efdu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* da5efd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_da5f00: /* da5f00: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* da5f03: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* da5f06: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da5f07: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* da5f0a: mov dword ptr [ebp - 0x44], 0xd813b6 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0xd813b6u);
/* da5f11: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xda5f13u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da5f13: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da5f16: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da5f18: jne 0xda5f1e */
  if (!zf) goto L_da5f1e;
L_da5f1a: /* da5f1a: xor esi, esi */
  esi = 0;
/* da5f1c: jmp 0xda5f3a */
  goto L_da5f3a;
L_da5f1e: /* da5f1e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da5f1f: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xda5f21u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da5f21: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* da5f24: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* da5f27: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* da5f2a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da5f2d: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* da5f30: call 0xdb7b00 */
  esp -= 4; W32(esp, 0xda5f35u); SPILL(); f_db7b00(); if (g_unwind) return; RELOAD();
/* da5f35: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* da5f38: mov esi, esp */
  esi = esp;
L_da5f3a: /* da5f3a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da5f3b: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xda5f3du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* da5f3d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da5f40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da5f41: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da5f42: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da5f43: call dword ptr [0xde88c4] */
  esp -= 4; W32(esp, 0xda5f49u); SPILL(); f_4e267b(); if (g_unwind) return; /* Core!?winToANSI@@YAPADPADPBGH@Z */ RELOAD();
/* da5f49: mov ecx, dword ptr [0xde50e8] */
  ecx = R32((uint32_t)(0xde50e8u));
/* da5f4f: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* da5f52: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* da5f55: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da5f58: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* da5f5a: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* da5f5d: je 0xda5f77 */
  if (zf) goto L_da5f77;
L_da5f5f: /* da5f5f: push 0x42b */
  { uint32_t v = 0x42bu; esp -= 4; W32(esp, v); }
/* da5f64: push 0xde3b24 */
  { uint32_t v = 0xde3b24u; esp -= 4; W32(esp, v); }
/* da5f69: push 0xde3b30 */
  { uint32_t v = 0xde3b30u; esp -= 4; W32(esp, v); }
/* da5f6e: call dword ptr [0xde88a8] */
  esp -= 4; W32(esp, 0xda5f74u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* da5f74: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_da5f77: /* da5f77: lea edx, [ebp - 0x4c] */
  edx = (uint32_t)(ebp + 0xffffffb4u);
/* da5f7a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* da5f7b: call dword ptr [0xde8e6c] */
  esp -= 4; W32(esp, 0xda5f81u); SPILL(); call_ind(R32(0xde8e6cu)); if (g_unwind) return; /* USER32!RegisterClassExA */ RELOAD();
/* da5f81: test ax, ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* da5f84: jne 0xda5f9e */
  if (!zf) goto L_da5f9e;
L_da5f86: /* da5f86: push 0x42c */
  { uint32_t v = 0x42cu; esp -= 4; W32(esp, v); }
/* da5f8b: push 0xde3b48 */
  { uint32_t v = 0xde3b48u; esp -= 4; W32(esp, v); }
/* da5f90: push 0xde3b54 */
  { uint32_t v = 0xde3b54u; esp -= 4; W32(esp, v); }
/* da5f95: call dword ptr [0xde88a8] */
  esp -= 4; W32(esp, 0xda5f9bu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* da5f9b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_da5f9e: /* da5f9e: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
L_da5fa1: /* da5fa1: mov eax, esi */
  eax = esi;
/* da5fa3: lea esp, [ebp - 0x58] */
  esp = (uint32_t)(ebp + 0xffffffa8u);
/* da5fa6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da5fa9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da5fb0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da5fb1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da5fb2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da5fb3: mov esp, ebp */
  esp = ebp;
/* da5fb5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da5fb6: ret  */
  esp += 4; SPILL(); return;
}

void f_da5fb7(void) {
  LOAD_REGS();
L_da5fb7: /* da5fb7: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* da5fba: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* da5fbf: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* da5fc2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* da5fc3: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* da5fc6: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda5fcbu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_da5fcb(); return;
}

void f_da5fcb(void) {
  LOAD_REGS();
L_da5fcb: /* da5fcb: push 0xdc3d7c */
  { uint32_t v = 0xdc3d7cu; esp -= 4; W32(esp, v); }
/* da5fd0: push 0xde3b70 */
  { uint32_t v = 0xde3b70u; esp -= 4; W32(esp, v); }
/* da5fd5: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xda5fdbu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* da5fdb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* da5fde: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da5fe0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da5fe2: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xda5fe7u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_da5fe7: guest_badaddr(0xda5fe7); return;
}

void f_da6090(void) {
  LOAD_REGS();
L_da6090: /* da6090: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* da6091: mov ebp, esp */
  ebp = esp;
/* da6093: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* da6095: push 0xdba450 */
  { uint32_t v = 0xdba450u; esp -= 4; W32(esp, v); }
/* da609a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* da60a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da60a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* da60a8: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* da60ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* da60ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* da60ad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da60ae: mov esi, ecx */
  esi = ecx;
/* da60b0: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* da60b3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* da60b6: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* da60bd: call dword ptr [0xde8e80] */
  esp -= 4; W32(esp, 0xda60c3u); SPILL(); call_ind(R32(0xde8e80u)); if (g_unwind) return; /* USER32!GetCapture */ RELOAD();
/* da60c3: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* da60c5: jne 0xda6137 */
  if (!zf) goto L_da6137;
L_da60c7: /* da60c7: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* da60ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da60cb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* da60cc: call dword ptr [0xde8f60] */
  esp -= 4; W32(esp, 0xda60d2u); SPILL(); call_ind(R32(0xde8f60u)); if (g_unwind) return; /* USER32!GetClientRect */ RELOAD();
/* da60d2: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* da60d5: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
/* da60d8: mov ecx, edi */
  ecx = edi;
/* da60da: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* da60dc: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* da60df: je 0xda612e */
  if (zf) goto L_da612e;
L_da60e1: /* da60e1: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* da60e4: fidiv dword ptr [ebp - 0x20] */
  ST0 = ST0 / ((double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)));
/* da60e7: fmul dword ptr [0xdc3ae8] */
  ST0 = ST0 * (F32((uint32_t)(0xdc3ae8u)));
/* da60ed: fadd dword ptr [esi + 0x48] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x48u)));
/* da60f0: fst dword ptr [esi + 0x48] */
  WF32((uint32_t)(esi + 0x48u), ST0);
/* da60f3: fcomp dword ptr [0xdc1460] */
  fpu_com(ST0, F32((uint32_t)(0xdc1460u)));
  FPOP();
/* da60f9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* da60fb: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* da60fe: jp 0xda6107 */
  if (pf) goto L_da6107;
L_da6100: /* da6100: mov dword ptr [esi + 0x48], 0 */
  W32((uint32_t)(esi + 0x48u), 0x0u);
L_da6107: /* da6107: fld dword ptr [esi + 0x4c] */
  { double v = F32((uint32_t)(esi + 0x4cu)); FPUSH(v); }
/* da610a: fadd dword ptr [esi + 0x48] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x48u)));
/* da610d: fcomp dword ptr [0xdc3ae8] */
  fpu_com(ST0, F32((uint32_t)(0xdc3ae8u)));
  FPOP();
/* da6113: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* da6115: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* da6118: jne 0xda6126 */
  if (!zf) goto L_da6126;
L_da611a: /* da611a: fld dword ptr [0xdc3ae8] */
  { double v = F32((uint32_t)(0xdc3ae8u)); FPUSH(v); }
/* da6120: fsub dword ptr [esi + 0x4c] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x4cu)));
/* da6123: fstp dword ptr [esi + 0x48] */
  WF32((uint32_t)(esi + 0x48u), ST0); FPOP();
L_da6126: /* da6126: mov edx, dword ptr [esi + 0x3c] */
  edx = R32((uint32_t)(esi + 0x3cu));
/* da6129: lea ecx, [esi + 0x3c] */
  ecx = (uint32_t)(esi + 0x3cu);
/* da612c: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xda612eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_da612e: /* da612e: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* da6131: mov dword ptr [esi + 0x5c], edx */
  W32((uint32_t)(esi + 0x5cu), edx);
/* da6134: mov dword ptr [esi + 0x60], edi */
  W32((uint32_t)(esi + 0x60u), edi);
L_da6137: /* da6137: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* da613a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da613c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* da613e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* da613f: call dword ptr [0xde8f2c] */
  esp -= 4; W32(esp, 0xda6145u); SPILL(); call_ind(R32(0xde8f2cu)); if (g_unwind) return; /* USER32!InvalidateRect */ RELOAD();
/* da6145: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* da6148: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* da6149: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* da614a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* da6151: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* da6152: mov esp, ebp */
  esp = ebp;
/* da6154: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* da6155: ret 0xc */
  esp += 16; SPILL(); return;
}
