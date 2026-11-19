#include "recomp.h"
#include "rec_mod.h"

void f_909890(void) {
  LOAD_REGS();
L_909890: /* 909890: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 909891: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 909895: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 909896: mov esi, ecx */
  esi = ecx;
/* 909898: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 90989b: je 0x9098c8 */
  if (zf) goto L_9098c8;
L_90989d: /* 90989d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 9098a0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9098a1: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 9098a4: push 0x905c20 */
  { uint32_t v = 0x905c20u; esp -= 4; W32(esp, v); }
/* 9098a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9098aa: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 9098ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9098ad: call 0x99ca3d */
  esp -= 4; W32(esp, 0x9098b2u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 9098b2: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9098b5: je 0x9098c0 */
  if (zf) goto L_9098c0;
L_9098b7: /* 9098b7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9098b8: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x9098bdu); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 9098bd: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9098c0: /* 9098c0: mov eax, edi */
  eax = edi;
/* 9098c2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9098c3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9098c4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9098c5: ret 4 */
  esp += 8; SPILL(); return;
L_9098c8: /* 9098c8: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 9098cb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9098cc: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x9098d1u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 9098d1: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9098d4: xor eax, eax */
  eax = 0;
/* 9098d6: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9098d9: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 9098dc: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 9098df: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 9098e2: je 0x9098ed */
  if (zf) goto L_9098ed;
L_9098e4: /* 9098e4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9098e5: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x9098eau); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 9098ea: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9098ed: /* 9098ed: mov eax, esi */
  eax = esi;
/* 9098ef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9098f0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9098f1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_909900(void) {
  LOAD_REGS();
L_909900: /* 909900: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 909901: mov al, byte ptr [esp + 3] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x3u))) & 0xffu);
/* 909905: mov byte ptr [ecx], al */
  W8((uint32_t)(ecx), (eax & 0xffu));
/* 909907: xor eax, eax */
  eax = 0;
/* 909909: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 90990c: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 90990f: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 909912: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 909913: ret  */
  esp += 4; SPILL(); return;
}

void f_9099e0(void) {
  LOAD_REGS();
L_9099e0: /* 9099e0: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 9099e4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9099e5: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 9099e9: xor eax, eax */
  eax = 0;
/* 9099eb: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9099ed: je 0x909a12 */
  if (zf) goto L_909a12;
L_9099ef: /* 9099ef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
L_9099f0: /* 9099f0: mov ecx, dword ptr [edx + 8] */
  ecx = R32((uint32_t)(edx + 0x8u));
/* 9099f3: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9099f6: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 9099f9: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9099fb: jne 0x909a01 */
  if (!zf) goto L_909a01;
L_9099fd: /* 9099fd: xor ecx, ecx */
  ecx = 0;
/* 9099ff: jmp 0x909a09 */
  goto L_909a09;
L_909a01: /* 909a01: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 909a04: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 909a06: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
L_909a09: /* 909a09: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 909a0b: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 909a0d: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 909a0f: jne 0x9099f0 */
  if (!zf) goto L_9099f0;
L_909a11: /* 909a11: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_909a12: /* 909a12: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 909a13: ret 8 */
  esp += 12; SPILL(); return;
}

void f_909a20(void) {
  LOAD_REGS();
L_909a20: /* 909a20: mov eax, ecx */
  eax = ecx;
/* 909a22: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 909a26: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 909a28: xor ecx, ecx */
  ecx = 0;
/* 909a2a: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* 909a2c: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 909a2f: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 909a32: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 909a35: ret 4 */
  esp += 8; SPILL(); return;
}

void f_909a40(void) {
  LOAD_REGS();
L_909a40: /* 909a40: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 909a43: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 909a45: jne 0x909a4a */
  if (!zf) goto L_909a4a;
L_909a47: /* 909a47: xor eax, eax */
  eax = 0;
/* 909a49: ret  */
  esp += 4; SPILL(); return;
L_909a4a: /* 909a4a: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 909a4d: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 909a4f: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 909a52: ret  */
  esp += 4; SPILL(); return;
}

void f_909a80(void) {
  LOAD_REGS();
L_909a80: /* 909a80: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 909a83: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 909a85: jne 0x909a8a */
  if (!zf) goto L_909a8a;
L_909a87: /* 909a87: xor eax, eax */
  eax = 0;
/* 909a89: ret  */
  esp += 4; SPILL(); return;
L_909a8a: /* 909a8a: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 909a8d: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 909a8f: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 909a92: ret  */
  esp += 4; SPILL(); return;
}

void f_909aa0(void) {
  LOAD_REGS();
L_909aa0: /* 909aa0: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 909aa3: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 909aa5: jne 0x909aaa */
  if (!zf) goto L_909aaa;
L_909aa7: /* 909aa7: xor eax, eax */
  eax = 0;
/* 909aa9: ret  */
  esp += 4; SPILL(); return;
L_909aaa: /* 909aaa: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 909aad: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 909aaf: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 909ab2: ret  */
  esp += 4; SPILL(); return;
}

void f_909ac0(void) {
  LOAD_REGS();
L_909ac0: /* 909ac0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 909ac3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 909ac4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 909ac5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 909ac6: mov esi, ecx */
  esi = ecx;
/* 909ac8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 909ac9: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 909acd: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 909ad0: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 909ad3: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 909ad6: mov ebp, edi */
  ebp = edi;
/* 909ad8: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 909ada: sub ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 909adc: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 909adf: sar ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebp = r;
  }
/* 909ae2: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 909ae5: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 909ae9: jae 0x909bb9 */
  if (!cf) goto L_909bb9;
L_909aef: /* 909aef: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 909af1: je 0x909aff */
  if (zf) goto L_909aff;
L_909af3: /* 909af3: mov ecx, eax */
  ecx = eax;
/* 909af5: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 909af7: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 909afa: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 909afd: ja 0x909b04 */
  if ((!cf && !zf)) goto L_909b04;
L_909aff: /* 909aff: mov ecx, 1 */
  ecx = 0x1u;
L_909b04: /* 909b04: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 909b06: jne 0x909b0c */
  if (!zf) goto L_909b0c;
L_909b08: /* 909b08: xor eax, eax */
  eax = 0;
/* 909b0a: jmp 0x909b11 */
  goto L_909b11;
L_909b0c: /* 909b0c: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 909b0e: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
L_909b11: /* 909b11: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 909b13: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 909b15: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 909b19: jge 0x909b1d */
  if ((sf == of)) goto L_909b1d;
L_909b1b: /* 909b1b: xor eax, eax */
  eax = 0;
L_909b1d: /* 909b1d: lea edx, [eax*4] */
  edx = (uint32_t)(eax*4);
/* 909b24: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 909b25: call 0x6c242d */
  esp -= 4; W32(esp, 0x909b2au); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 909b2a: mov ebx, dword ptr [esi + 4] */
  ebx = R32((uint32_t)(esi + 0x4u));
/* 909b2d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 909b30: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 909b32: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 909b36: mov ebp, eax */
  ebp = eax;
/* 909b38: je 0x909b4e */
  if (zf) goto L_909b4e;
L_909b3a: /* 909b3a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 909b3b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 909b3c: call 0x90b710 */
  esp -= 4; W32(esp, 0x909b41u); SPILL(); f_90b710(); if (g_unwind) return; RELOAD();
/* 909b41: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 909b44: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 909b47: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 909b4a: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 909b4c: jne 0x909b3a */
  if (!zf) goto L_909b3a;
L_909b4e: /* 909b4e: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 909b52: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 909b53: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 909b54: call 0x90b710 */
  esp -= 4; W32(esp, 0x909b59u); SPILL(); f_90b710(); if (g_unwind) return; RELOAD();
/* 909b59: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 909b5c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 909b5f: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 909b62: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 909b63: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 909b64: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 909b65: mov ecx, esi */
  ecx = esi;
/* 909b67: call 0x909ca0 */
  esp -= 4; W32(esp, 0x909b6cu); SPILL(); f_909ca0(); if (g_unwind) return; RELOAD();
/* 909b6c: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 909b6f: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 909b72: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 909b73: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 909b74: mov ecx, esi */
  ecx = esi;
/* 909b76: call 0x909c90 */
  esp -= 4; W32(esp, 0x909b7bu); SPILL(); f_909c90(); if (g_unwind) return; RELOAD();
/* 909b7b: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 909b7e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 909b7f: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x909b84u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 909b84: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 909b88: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 909b8c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 909b8f: mov ecx, esi */
  ecx = esi;
/* 909b91: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 909b94: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 909b97: call 0x909a40 */
  esp -= 4; W32(esp, 0x909b9cu); SPILL(); f_909a40(); if (g_unwind) return; RELOAD();
/* 909b9c: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 909ba0: lea ecx, [edi + eax*4 + 4] */
  ecx = (uint32_t)(edi + eax*4 + 0x4u);
/* 909ba4: mov eax, edi */
  eax = edi;
/* 909ba6: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 909ba9: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 909bac: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 909bad: lea eax, [eax + ebp*4] */
  eax = (uint32_t)(eax + ebp*4);
/* 909bb0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 909bb1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 909bb2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 909bb3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 909bb6: ret 8 */
  esp += 12; SPILL(); return;
L_909bb9: /* 909bb9: mov edx, eax */
  edx = eax;
/* 909bbb: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 909bbd: sar edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 909bc0: cmp edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 909bc3: jae 0x909c07 */
  if (!cf) goto L_909c07;
L_909bc5: /* 909bc5: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 909bc8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 909bc9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 909bca: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 909bcb: mov ecx, esi */
  ecx = esi;
/* 909bcd: call 0x909ca0 */
  esp -= 4; W32(esp, 0x909bd2u); SPILL(); f_909ca0(); if (g_unwind) return; RELOAD();
/* 909bd2: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 909bd5: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* 909bd9: mov edx, eax */
  edx = eax;
/* 909bdb: mov ecx, 1 */
  ecx = 0x1u;
/* 909be0: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 909be2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 909be3: sar edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 909be6: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 909be8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 909be9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 909bea: mov ecx, esi */
  ecx = esi;
/* 909bec: call 0x90b400 */
  esp -= 4; W32(esp, 0x909bf1u); SPILL(); f_90b400(); if (g_unwind) return; RELOAD();
/* 909bf1: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 909bf4: mov eax, edi */
  eax = edi;
/* 909bf6: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 909bf8: je 0x909c43 */
  if (zf) goto L_909c43;
L_909bfa: /* 909bfa: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 909bfc: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 909bfe: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 909c01: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 909c03: jne 0x909bfa */
  if (!zf) goto L_909bfa;
L_909c05: /* 909c05: jmp 0x909c43 */
  goto L_909c43;
L_909c07: /* 909c07: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 909c08: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 909c09: add eax, -4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 909c0c: mov ecx, esi */
  ecx = esi;
/* 909c0e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 909c0f: call 0x909ca0 */
  esp -= 4; W32(esp, 0x909c14u); SPILL(); f_909ca0(); if (g_unwind) return; RELOAD();
/* 909c14: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 909c17: lea eax, [ecx - 4] */
  eax = (uint32_t)(ecx + 0xfffffffcu);
/* 909c1a: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 909c1c: je 0x909c2d */
  if (zf) goto L_909c2d;
L_909c1e: /* 909c1e: mov edx, dword ptr [eax - 4] */
  edx = R32((uint32_t)(eax + 0xfffffffcu));
/* 909c21: sub eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 909c24: sub ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 909c27: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 909c29: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 909c2b: jne 0x909c1e */
  if (!zf) goto L_909c1e;
L_909c2d: /* 909c2d: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
/* 909c30: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 909c32: je 0x909c43 */
  if (zf) goto L_909c43;
L_909c34: /* 909c34: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
L_909c38: /* 909c38: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 909c3a: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 909c3c: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 909c3f: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 909c41: jne 0x909c38 */
  if (!zf) goto L_909c38;
L_909c43: /* 909c43: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 909c46: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 909c47: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 909c4a: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 909c4d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 909c50: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 909c51: lea eax, [eax + ebp*4] */
  eax = (uint32_t)(eax + ebp*4);
/* 909c54: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 909c55: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 909c56: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 909c59: ret 8 */
  esp += 12; SPILL(); return;
}

void f_909c60(void) {
  LOAD_REGS();
L_909c60: /* 909c60: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 909c64: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 909c68: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 909c69: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 909c6a: mov edi, dword ptr [ecx + 8] */
  edi = R32((uint32_t)(ecx + 0x8u));
/* 909c6d: mov esi, eax */
  esi = eax;
/* 909c6f: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 909c71: je 0x909c83 */
  if (zf) goto L_909c83;
L_909c73: /* 909c73: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
L_909c74: /* 909c74: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 909c76: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 909c79: mov dword ptr [esi], ebx */
  W32((uint32_t)(esi), ebx);
/* 909c7b: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 909c7e: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 909c80: jne 0x909c74 */
  if (!zf) goto L_909c74;
L_909c82: /* 909c82: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_909c83: /* 909c83: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 909c86: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 909c87: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 909c88: ret 8 */
  esp += 12; SPILL(); return;
}

void f_909c90(void) {
  LOAD_REGS();
L_909c90: /* 909c90: ret 8 */
  esp += 12; SPILL(); return;
}

void f_909ca0(void) {
  LOAD_REGS();
L_909ca0: /* 909ca0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 909ca4: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 909ca8: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 909cac: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 909cae: je 0x909cc4 */
  if (zf) goto L_909cc4;
L_909cb0: /* 909cb0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
L_909cb1: /* 909cb1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 909cb3: je 0x909cb9 */
  if (zf) goto L_909cb9;
L_909cb5: /* 909cb5: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 909cb7: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
L_909cb9: /* 909cb9: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 909cbc: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 909cbf: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 909cc1: jne 0x909cb1 */
  if (!zf) goto L_909cb1;
L_909cc3: /* 909cc3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_909cc4: /* 909cc4: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_909cd0(void) {
  LOAD_REGS();
L_909cd0: /* 909cd0: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 909cd3: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 909cd5: jne 0x909cda */
  if (!zf) goto L_909cda;
L_909cd7: /* 909cd7: xor eax, eax */
  eax = 0;
/* 909cd9: ret  */
  esp += 4; SPILL(); return;
L_909cda: /* 909cda: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 909cdd: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 909cdf: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 909ce1: ret  */
  esp += 4; SPILL(); return;
}

void f_909cf0(void) {
  LOAD_REGS();
L_909cf0: /* 909cf0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 909cf3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 909cf4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 909cf5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 909cf6: mov esi, ecx */
  esi = ecx;
/* 909cf8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 909cf9: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 909cfd: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 909d00: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 909d03: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 909d06: mov ebp, edi */
  ebp = edi;
/* 909d08: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 909d0a: sub ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 909d0c: sar ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 909d0e: sar ebp, 1 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebp = r;
  }
/* 909d10: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 909d13: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 909d17: jae 0x909de1 */
  if (!cf) goto L_909de1;
L_909d1d: /* 909d1d: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 909d1f: je 0x909d2c */
  if (zf) goto L_909d2c;
L_909d21: /* 909d21: mov ecx, eax */
  ecx = eax;
/* 909d23: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 909d25: sar ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 909d27: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 909d2a: ja 0x909d31 */
  if ((!cf && !zf)) goto L_909d31;
L_909d2c: /* 909d2c: mov ecx, 1 */
  ecx = 0x1u;
L_909d31: /* 909d31: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 909d33: jne 0x909d39 */
  if (!zf) goto L_909d39;
L_909d35: /* 909d35: xor eax, eax */
  eax = 0;
/* 909d37: jmp 0x909d3d */
  goto L_909d3d;
L_909d39: /* 909d39: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 909d3b: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
L_909d3d: /* 909d3d: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 909d3f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 909d41: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 909d45: jge 0x909d49 */
  if ((sf == of)) goto L_909d49;
L_909d47: /* 909d47: xor eax, eax */
  eax = 0;
L_909d49: /* 909d49: lea edx, [eax + eax] */
  edx = (uint32_t)(eax + eax);
/* 909d4c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 909d4d: call 0x6c242d */
  esp -= 4; W32(esp, 0x909d52u); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 909d52: mov ebx, dword ptr [esi + 4] */
  ebx = R32((uint32_t)(esi + 0x4u));
/* 909d55: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 909d58: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 909d5a: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 909d5e: mov ebp, eax */
  ebp = eax;
/* 909d60: je 0x909d76 */
  if (zf) goto L_909d76;
L_909d62: /* 909d62: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 909d63: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 909d64: call 0x90b730 */
  esp -= 4; W32(esp, 0x909d69u); SPILL(); f_90b730(); if (g_unwind) return; RELOAD();
/* 909d69: add ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 909d6c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 909d6f: add ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 909d72: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 909d74: jne 0x909d62 */
  if (!zf) goto L_909d62;
L_909d76: /* 909d76: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 909d7a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 909d7b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 909d7c: call 0x90b730 */
  esp -= 4; W32(esp, 0x909d81u); SPILL(); f_90b730(); if (g_unwind) return; RELOAD();
/* 909d81: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 909d84: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 909d87: add ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 909d8a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 909d8b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 909d8c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 909d8d: mov ecx, esi */
  ecx = esi;
/* 909d8f: call 0x909ea0 */
  esp -= 4; W32(esp, 0x909d94u); SPILL(); f_909ea0(); if (g_unwind) return; RELOAD();
/* 909d94: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 909d97: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 909d9a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 909d9b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 909d9c: mov ecx, esi */
  ecx = esi;
/* 909d9e: call 0x909e90 */
  esp -= 4; W32(esp, 0x909da3u); SPILL(); f_909e90(); if (g_unwind) return; RELOAD();
/* 909da3: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 909da6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 909da7: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x909dacu); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 909dac: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 909db0: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 909db4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 909db7: mov ecx, esi */
  ecx = esi;
/* 909db9: lea eax, [edi + edx*2] */
  eax = (uint32_t)(edi + edx*2);
/* 909dbc: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 909dbf: call 0x905c60 */
  esp -= 4; W32(esp, 0x909dc4u); SPILL(); f_905c60(); if (g_unwind) return; RELOAD();
/* 909dc4: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 909dc8: lea ecx, [edi + eax*2 + 2] */
  ecx = (uint32_t)(edi + eax*2 + 0x2u);
/* 909dcc: mov eax, edi */
  eax = edi;
/* 909dce: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 909dd1: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 909dd4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 909dd5: lea eax, [eax + ebp*2] */
  eax = (uint32_t)(eax + ebp*2);
/* 909dd8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 909dd9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 909dda: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 909ddb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 909dde: ret 8 */
  esp += 12; SPILL(); return;
L_909de1: /* 909de1: mov edx, eax */
  edx = eax;
/* 909de3: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 909de5: sar edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 909de7: cmp edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 909dea: jae 0x909e2f */
  if (!cf) goto L_909e2f;
L_909dec: /* 909dec: lea ecx, [edi + 2] */
  ecx = (uint32_t)(edi + 0x2u);
/* 909def: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 909df0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 909df1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 909df2: mov ecx, esi */
  ecx = esi;
/* 909df4: call 0x909ea0 */
  esp -= 4; W32(esp, 0x909df9u); SPILL(); f_909ea0(); if (g_unwind) return; RELOAD();
/* 909df9: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 909dfc: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* 909e00: mov edx, eax */
  edx = eax;
/* 909e02: mov ecx, 1 */
  ecx = 0x1u;
/* 909e07: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 909e09: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 909e0a: sar edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 909e0c: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 909e0e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 909e0f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 909e10: mov ecx, esi */
  ecx = esi;
/* 909e12: call 0x90a8a0 */
  esp -= 4; W32(esp, 0x909e17u); SPILL(); f_90a8a0(); if (g_unwind) return; RELOAD();
/* 909e17: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 909e1a: mov eax, edi */
  eax = edi;
/* 909e1c: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 909e1e: je 0x909e6f */
  if (zf) goto L_909e6f;
L_909e20: /* 909e20: mov dx, word ptr [ebx] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx))) & 0xffffu);
/* 909e23: mov word ptr [eax], dx */
  W16((uint32_t)(eax), (edx & 0xffffu));
/* 909e26: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 909e29: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 909e2b: jne 0x909e20 */
  if (!zf) goto L_909e20;
L_909e2d: /* 909e2d: jmp 0x909e6f */
  goto L_909e6f;
L_909e2f: /* 909e2f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 909e30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 909e31: add eax, -2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 909e34: mov ecx, esi */
  ecx = esi;
/* 909e36: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 909e37: call 0x909ea0 */
  esp -= 4; W32(esp, 0x909e3cu); SPILL(); f_909ea0(); if (g_unwind) return; RELOAD();
/* 909e3c: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 909e3f: lea eax, [ecx - 2] */
  eax = (uint32_t)(ecx + 0xfffffffeu);
/* 909e42: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 909e44: je 0x909e57 */
  if (zf) goto L_909e57;
L_909e46: /* 909e46: mov dx, word ptr [eax - 2] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0xfffffffeu))) & 0xffffu);
/* 909e4a: sub eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 909e4d: sub ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 909e50: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 909e52: mov word ptr [ecx], dx */
  W16((uint32_t)(ecx), (edx & 0xffffu));
/* 909e55: jne 0x909e46 */
  if (!zf) goto L_909e46;
L_909e57: /* 909e57: lea eax, [edi + 2] */
  eax = (uint32_t)(edi + 0x2u);
/* 909e5a: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 909e5c: je 0x909e6f */
  if (zf) goto L_909e6f;
L_909e5e: /* 909e5e: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
L_909e62: /* 909e62: mov dx, word ptr [ecx] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* 909e65: mov word ptr [edi], dx */
  W16((uint32_t)(edi), (edx & 0xffffu));
/* 909e68: add edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 909e6b: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 909e6d: jne 0x909e62 */
  if (!zf) goto L_909e62;
L_909e6f: /* 909e6f: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 909e72: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 909e73: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 909e76: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 909e79: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 909e7c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 909e7d: lea eax, [eax + ebp*2] */
  eax = (uint32_t)(eax + ebp*2);
/* 909e80: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 909e81: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 909e82: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 909e85: ret 8 */
  esp += 12; SPILL(); return;
}

void f_909e90(void) {
  LOAD_REGS();
L_909e90: /* 909e90: ret 8 */
  esp += 12; SPILL(); return;
}

void f_909ea0(void) {
  LOAD_REGS();
L_909ea0: /* 909ea0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 909ea4: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 909ea8: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 909eac: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 909eae: je 0x909ec6 */
  if (zf) goto L_909ec6;
L_909eb0: /* 909eb0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
L_909eb1: /* 909eb1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 909eb3: je 0x909ebb */
  if (zf) goto L_909ebb;
L_909eb5: /* 909eb5: mov si, word ptr [ecx] */
  esi = (esi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* 909eb8: mov word ptr [eax], si */
  W16((uint32_t)(eax), (esi & 0xffffu));
L_909ebb: /* 909ebb: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 909ebe: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 909ec1: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 909ec3: jne 0x909eb1 */
  if (!zf) goto L_909eb1;
L_909ec5: /* 909ec5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_909ec6: /* 909ec6: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_909ed0(void) {
  LOAD_REGS();
L_909ed0: /* 909ed0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 909ed3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 909ed4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 909ed5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 909ed6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 909ed7: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 909edb: mov edi, ecx */
  edi = ecx;
/* 909edd: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 909ee1: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 909ee4: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* 909ee7: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 909ee9: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 909eec: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 909eee: jae 0x909ff6 */
  if (!cf) goto L_909ff6;
L_909ef4: /* 909ef4: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 909ef7: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 909ef9: je 0x909f06 */
  if (zf) goto L_909f06;
L_909efb: /* 909efb: mov ecx, eax */
  ecx = eax;
/* 909efd: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 909eff: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 909f02: cmp ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 909f04: jb 0x909f08 */
  if (cf) goto L_909f08;
L_909f06: /* 909f06: mov ecx, ebp */
  ecx = ebp;
L_909f08: /* 909f08: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 909f0a: jne 0x909f10 */
  if (!zf) goto L_909f10;
L_909f0c: /* 909f0c: xor eax, eax */
  eax = 0;
/* 909f0e: jmp 0x909f15 */
  goto L_909f15;
L_909f10: /* 909f10: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 909f12: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
L_909f15: /* 909f15: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 909f17: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 909f19: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 909f1d: jge 0x909f21 */
  if ((sf == of)) goto L_909f21;
L_909f1f: /* 909f1f: xor eax, eax */
  eax = 0;
L_909f21: /* 909f21: lea edx, [eax*4] */
  edx = (uint32_t)(eax*4);
/* 909f28: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 909f29: call 0x6c242d */
  esp -= 4; W32(esp, 0x909f2eu); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 909f2e: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* 909f32: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 909f36: mov ecx, eax */
  ecx = eax;
/* 909f38: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 909f3b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 909f3e: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 909f40: je 0x909f54 */
  if (zf) goto L_909f54;
L_909f42: /* 909f42: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 909f44: je 0x909f4a */
  if (zf) goto L_909f4a;
L_909f46: /* 909f46: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 909f48: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
L_909f4a: /* 909f4a: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 909f4d: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 909f50: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 909f52: jne 0x909f42 */
  if (!zf) goto L_909f42;
L_909f54: /* 909f54: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 909f56: mov eax, ecx */
  eax = ecx;
/* 909f58: jbe 0x909f72 */
  if ((cf | zf)) goto L_909f72;
L_909f5a: /* 909f5a: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 909f5e: mov edx, ebp */
  edx = ebp;
L_909f60: /* 909f60: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 909f62: je 0x909f6c */
  if (zf) goto L_909f6c;
L_909f64: /* 909f64: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 909f66: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 909f68: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
L_909f6c: /* 909f6c: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 909f6f: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 909f70: jne 0x909f60 */
  if (!zf) goto L_909f60;
L_909f72: /* 909f72: mov edi, dword ptr [edi + 8] */
  edi = R32((uint32_t)(edi + 0x8u));
/* 909f75: lea esi, [ebp*4] */
  esi = (uint32_t)(ebp*4);
/* 909f7c: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 909f7e: lea edx, [esi + ecx] */
  edx = (uint32_t)(esi + ecx);
/* 909f81: je 0x909f9d */
  if (zf) goto L_909f9d;
L_909f83: /* 909f83: mov eax, edx */
  eax = edx;
/* 909f85: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 909f87: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 909f89: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_909f8b: /* 909f8b: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 909f8d: je 0x909f93 */
  if (zf) goto L_909f93;
L_909f8f: /* 909f8f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 909f91: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
L_909f93: /* 909f93: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 909f96: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 909f99: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 909f9b: jne 0x909f8b */
  if (!zf) goto L_909f8b;
L_909f9d: /* 909f9d: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 909fa1: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 909fa4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 909fa5: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x909faau); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 909faa: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 909fae: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 909fb2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 909fb5: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 909fb8: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* 909fbb: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 909fbe: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 909fc0: jne 0x909fd9 */
  if (!zf) goto L_909fd9;
L_909fc2: /* 909fc2: xor eax, eax */
  eax = 0;
/* 909fc4: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 909fc7: mov eax, ebp */
  eax = ebp;
/* 909fc9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 909fca: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 909fcd: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 909fd0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 909fd1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 909fd2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 909fd3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 909fd6: ret 0xc */
  esp += 16; SPILL(); return;
L_909fd9: /* 909fd9: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 909fdc: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 909fdf: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 909fe1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 909fe2: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 909fe5: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 909fe7: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 909fea: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 909fed: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 909fee: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 909fef: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 909ff0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 909ff3: ret 0xc */
  esp += 16; SPILL(); return;
L_909ff6: /* 909ff6: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 909ffa: mov ecx, eax */
  ecx = eax;
/* 909ffc: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 909ffe: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 90a001: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 90a003: jae 0x90a073 */
  if (!cf) goto L_90a073;
L_90a005: /* 90a005: lea ebx, [ebp*4] */
  ebx = (uint32_t)(ebp*4);
/* 90a00c: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90a00e: lea esi, [ebx + edx] */
  esi = (uint32_t)(ebx + edx);
/* 90a011: je 0x90a02d */
  if (zf) goto L_90a02d;
L_90a013: /* 90a013: mov ecx, esi */
  ecx = esi;
/* 90a015: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
L_90a017: /* 90a017: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90a019: je 0x90a023 */
  if (zf) goto L_90a023;
L_90a01b: /* 90a01b: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 90a01d: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 90a01f: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
L_90a023: /* 90a023: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 90a026: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 90a029: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90a02b: jne 0x90a017 */
  if (!zf) goto L_90a017;
L_90a02d: /* 90a02d: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 90a030: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 90a034: mov ecx, eax */
  ecx = eax;
/* 90a036: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 90a038: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 90a03b: sub ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ebp = r;
  }
/* 90a03d: je 0x90a04d */
  if (zf) goto L_90a04d;
L_90a03f: /* 90a03f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90a041: je 0x90a047 */
  if (zf) goto L_90a047;
L_90a043: /* 90a043: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 90a045: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_90a047: /* 90a047: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90a04a: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 90a04b: jne 0x90a03f */
  if (!zf) goto L_90a03f;
L_90a04d: /* 90a04d: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 90a050: mov eax, edx */
  eax = edx;
/* 90a052: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90a054: je 0x90a061 */
  if (zf) goto L_90a061;
L_90a056: /* 90a056: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 90a058: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 90a05a: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90a05d: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90a05f: jne 0x90a056 */
  if (!zf) goto L_90a056;
L_90a061: /* 90a061: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 90a064: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90a066: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 90a069: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90a06a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90a06b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 90a06c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 90a06d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90a070: ret 0xc */
  esp += 16; SPILL(); return;
L_90a073: /* 90a073: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 90a075: jbe 0x90a0cb */
  if ((cf | zf)) goto L_90a0cb;
L_90a077: /* 90a077: shl ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebp = r;
  }
/* 90a07a: mov ecx, eax */
  ecx = eax;
/* 90a07c: mov esi, eax */
  esi = eax;
/* 90a07e: sub ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 90a080: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90a082: je 0x90a096 */
  if (zf) goto L_90a096;
L_90a084: /* 90a084: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90a086: je 0x90a08c */
  if (zf) goto L_90a08c;
L_90a088: /* 90a088: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 90a08a: mov dword ptr [esi], ebx */
  W32((uint32_t)(esi), ebx);
L_90a08c: /* 90a08c: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 90a08f: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 90a092: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90a094: jne 0x90a084 */
  if (!zf) goto L_90a084;
L_90a096: /* 90a096: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 90a099: mov eax, ecx */
  eax = ecx;
/* 90a09b: sub eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 90a09d: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90a09f: je 0x90a0b0 */
  if (zf) goto L_90a0b0;
L_90a0a1: /* 90a0a1: mov esi, dword ptr [eax - 4] */
  esi = R32((uint32_t)(eax + 0xfffffffcu));
/* 90a0a4: sub eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 90a0a7: sub ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 90a0aa: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90a0ac: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 90a0ae: jne 0x90a0a1 */
  if (!zf) goto L_90a0a1;
L_90a0b0: /* 90a0b0: lea ecx, [edx + ebp] */
  ecx = (uint32_t)(edx + ebp);
/* 90a0b3: mov eax, edx */
  eax = edx;
/* 90a0b5: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90a0b7: je 0x90a0c8 */
  if (zf) goto L_90a0c8;
L_90a0b9: /* 90a0b9: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
L_90a0bd: /* 90a0bd: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 90a0bf: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 90a0c1: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90a0c4: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90a0c6: jne 0x90a0bd */
  if (!zf) goto L_90a0bd;
L_90a0c8: /* 90a0c8: add dword ptr [edi + 8], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x8u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(edi + 0x8u), r);
  }
L_90a0cb: /* 90a0cb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90a0cc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90a0cd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 90a0ce: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 90a0cf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90a0d2: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_90a0e0(void) {
  LOAD_REGS();
L_90a0e0: /* 90a0e0: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 90a0e4: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90a0e8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90a0e9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90a0ea: mov edi, dword ptr [ecx + 8] */
  edi = R32((uint32_t)(ecx + 0x8u));
/* 90a0ed: mov esi, eax */
  esi = eax;
/* 90a0ef: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90a0f1: je 0x90a103 */
  if (zf) goto L_90a103;
L_90a0f3: /* 90a0f3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
L_90a0f4: /* 90a0f4: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 90a0f6: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 90a0f9: mov dword ptr [esi], ebx */
  W32((uint32_t)(esi), ebx);
/* 90a0fb: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 90a0fe: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90a100: jne 0x90a0f4 */
  if (!zf) goto L_90a0f4;
L_90a102: /* 90a102: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_90a103: /* 90a103: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 90a106: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90a107: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90a108: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90a110(void) {
  LOAD_REGS();
L_90a110: /* 90a110: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90a120(void) {
  LOAD_REGS();
L_90a120: /* 90a120: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 90a123: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90a124: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 90a125: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90a126: mov esi, ecx */
  esi = ecx;
/* 90a128: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90a129: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 90a12d: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 90a130: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 90a133: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 90a136: mov ebp, edi */
  ebp = edi;
/* 90a138: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 90a13a: sub ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 90a13c: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 90a13f: sar ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebp = r;
  }
/* 90a142: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 90a145: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 90a149: jae 0x90a219 */
  if (!cf) goto L_90a219;
L_90a14f: /* 90a14f: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90a151: je 0x90a15f */
  if (zf) goto L_90a15f;
L_90a153: /* 90a153: mov ecx, eax */
  ecx = eax;
/* 90a155: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 90a157: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 90a15a: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 90a15d: ja 0x90a164 */
  if ((!cf && !zf)) goto L_90a164;
L_90a15f: /* 90a15f: mov ecx, 1 */
  ecx = 0x1u;
L_90a164: /* 90a164: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90a166: jne 0x90a16c */
  if (!zf) goto L_90a16c;
L_90a168: /* 90a168: xor eax, eax */
  eax = 0;
/* 90a16a: jmp 0x90a171 */
  goto L_90a171;
L_90a16c: /* 90a16c: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 90a16e: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
L_90a171: /* 90a171: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90a173: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 90a175: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 90a179: jge 0x90a17d */
  if ((sf == of)) goto L_90a17d;
L_90a17b: /* 90a17b: xor eax, eax */
  eax = 0;
L_90a17d: /* 90a17d: lea edx, [eax*4] */
  edx = (uint32_t)(eax*4);
/* 90a184: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90a185: call 0x6c242d */
  esp -= 4; W32(esp, 0x90a18au); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 90a18a: mov ebx, dword ptr [esi + 4] */
  ebx = R32((uint32_t)(esi + 0x4u));
/* 90a18d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90a190: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90a192: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 90a196: mov ebp, eax */
  ebp = eax;
/* 90a198: je 0x90a1ae */
  if (zf) goto L_90a1ae;
L_90a19a: /* 90a19a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90a19b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 90a19c: call 0x90b750 */
  esp -= 4; W32(esp, 0x90a1a1u); SPILL(); f_90b750(); if (g_unwind) return; RELOAD();
/* 90a1a1: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 90a1a4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90a1a7: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 90a1aa: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90a1ac: jne 0x90a19a */
  if (!zf) goto L_90a19a;
L_90a1ae: /* 90a1ae: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 90a1b2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90a1b3: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 90a1b4: call 0x90b750 */
  esp -= 4; W32(esp, 0x90a1b9u); SPILL(); f_90b750(); if (g_unwind) return; RELOAD();
/* 90a1b9: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 90a1bc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90a1bf: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 90a1c2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 90a1c3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90a1c4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90a1c5: mov ecx, esi */
  ecx = esi;
/* 90a1c7: call 0x90b430 */
  esp -= 4; W32(esp, 0x90a1ccu); SPILL(); f_90b430(); if (g_unwind) return; RELOAD();
/* 90a1cc: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 90a1cf: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 90a1d2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90a1d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90a1d4: mov ecx, esi */
  ecx = esi;
/* 90a1d6: call 0x90a310 */
  esp -= 4; W32(esp, 0x90a1dbu); SPILL(); f_90a310(); if (g_unwind) return; RELOAD();
/* 90a1db: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 90a1de: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90a1df: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x90a1e4u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 90a1e4: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 90a1e8: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 90a1ec: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90a1ef: mov ecx, esi */
  ecx = esi;
/* 90a1f1: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 90a1f4: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 90a1f7: call 0x90a2c0 */
  esp -= 4; W32(esp, 0x90a1fcu); SPILL(); f_90a2c0(); if (g_unwind) return; RELOAD();
/* 90a1fc: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 90a200: lea ecx, [edi + eax*4 + 4] */
  ecx = (uint32_t)(edi + eax*4 + 0x4u);
/* 90a204: mov eax, edi */
  eax = edi;
/* 90a206: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 90a209: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 90a20c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90a20d: lea eax, [eax + ebp*4] */
  eax = (uint32_t)(eax + ebp*4);
/* 90a210: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90a211: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 90a212: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 90a213: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90a216: ret 8 */
  esp += 12; SPILL(); return;
L_90a219: /* 90a219: mov edx, eax */
  edx = eax;
/* 90a21b: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 90a21d: sar edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 90a220: cmp edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 90a223: jae 0x90a267 */
  if (!cf) goto L_90a267;
L_90a225: /* 90a225: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 90a228: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90a229: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90a22a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90a22b: mov ecx, esi */
  ecx = esi;
/* 90a22d: call 0x90b430 */
  esp -= 4; W32(esp, 0x90a232u); SPILL(); f_90b430(); if (g_unwind) return; RELOAD();
/* 90a232: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 90a235: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* 90a239: mov edx, eax */
  edx = eax;
/* 90a23b: mov ecx, 1 */
  ecx = 0x1u;
/* 90a240: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 90a242: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90a243: sar edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 90a246: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 90a248: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90a249: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90a24a: mov ecx, esi */
  ecx = esi;
/* 90a24c: call 0x90b460 */
  esp -= 4; W32(esp, 0x90a251u); SPILL(); f_90b460(); if (g_unwind) return; RELOAD();
/* 90a251: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 90a254: mov eax, edi */
  eax = edi;
/* 90a256: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90a258: je 0x90a2a3 */
  if (zf) goto L_90a2a3;
L_90a25a: /* 90a25a: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 90a25c: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 90a25e: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90a261: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90a263: jne 0x90a25a */
  if (!zf) goto L_90a25a;
L_90a265: /* 90a265: jmp 0x90a2a3 */
  goto L_90a2a3;
L_90a267: /* 90a267: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90a268: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90a269: add eax, -4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90a26c: mov ecx, esi */
  ecx = esi;
/* 90a26e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90a26f: call 0x90b430 */
  esp -= 4; W32(esp, 0x90a274u); SPILL(); f_90b430(); if (g_unwind) return; RELOAD();
/* 90a274: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 90a277: lea eax, [ecx - 4] */
  eax = (uint32_t)(ecx + 0xfffffffcu);
/* 90a27a: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90a27c: je 0x90a28d */
  if (zf) goto L_90a28d;
L_90a27e: /* 90a27e: mov edx, dword ptr [eax - 4] */
  edx = R32((uint32_t)(eax + 0xfffffffcu));
/* 90a281: sub eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 90a284: sub ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 90a287: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90a289: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 90a28b: jne 0x90a27e */
  if (!zf) goto L_90a27e;
L_90a28d: /* 90a28d: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
/* 90a290: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90a292: je 0x90a2a3 */
  if (zf) goto L_90a2a3;
L_90a294: /* 90a294: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
L_90a298: /* 90a298: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 90a29a: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 90a29c: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 90a29f: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90a2a1: jne 0x90a298 */
  if (!zf) goto L_90a298;
L_90a2a3: /* 90a2a3: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 90a2a6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90a2a7: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90a2aa: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 90a2ad: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 90a2b0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90a2b1: lea eax, [eax + ebp*4] */
  eax = (uint32_t)(eax + ebp*4);
/* 90a2b4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 90a2b5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 90a2b6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90a2b9: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90a2c0(void) {
  LOAD_REGS();
L_90a2c0: /* 90a2c0: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 90a2c3: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90a2c5: jne 0x90a2ca */
  if (!zf) goto L_90a2ca;
L_90a2c7: /* 90a2c7: xor eax, eax */
  eax = 0;
/* 90a2c9: ret  */
  esp += 4; SPILL(); return;
L_90a2ca: /* 90a2ca: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 90a2cd: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 90a2cf: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 90a2d2: ret  */
  esp += 4; SPILL(); return;
}

void f_90a2e0(void) {
  LOAD_REGS();
L_90a2e0: /* 90a2e0: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 90a2e4: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90a2e8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90a2e9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90a2ea: mov edi, dword ptr [ecx + 8] */
  edi = R32((uint32_t)(ecx + 0x8u));
/* 90a2ed: mov esi, eax */
  esi = eax;
/* 90a2ef: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90a2f1: je 0x90a303 */
  if (zf) goto L_90a303;
L_90a2f3: /* 90a2f3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
L_90a2f4: /* 90a2f4: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 90a2f6: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 90a2f9: mov dword ptr [esi], ebx */
  W32((uint32_t)(esi), ebx);
/* 90a2fb: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 90a2fe: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90a300: jne 0x90a2f4 */
  if (!zf) goto L_90a2f4;
L_90a302: /* 90a302: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_90a303: /* 90a303: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 90a306: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90a307: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90a308: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90a310(void) {
  LOAD_REGS();
L_90a310: /* 90a310: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90a320(void) {
  LOAD_REGS();
L_90a320: /* 90a320: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 90a323: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 90a325: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90a329: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 90a32b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90a330(void) {
  LOAD_REGS();
L_90a330: /* 90a330: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90a331: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90a332: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 90a333: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90a334: mov edx, dword ptr [0xcf2e7c] */
  edx = R32((uint32_t)(0xcf2e7cu));
/* 90a33a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90a33b: mov edi, ecx */
  edi = ecx;
/* 90a33d: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 90a341: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 90a343: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 90a346: mov esi, ecx */
  esi = ecx;
/* 90a348: mov ebp, dword ptr [ecx + 4] */
  ebp = R32((uint32_t)(ecx + 0x4u));
/* 90a34b: cmp ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90a34d: je 0x90a369 */
  if (zf) goto L_90a369;
L_90a34f: /* 90a34f: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 90a351: mov esi, ebp */
  esi = ebp;
/* 90a353: cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 90a356: setb al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((cf) ? 1 : 0) & 0xffu);
/* 90a359: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 90a35b: je 0x90a362 */
  if (zf) goto L_90a362;
L_90a35d: /* 90a35d: mov ebp, dword ptr [ebp] */
  ebp = R32((uint32_t)(ebp));
/* 90a360: jmp 0x90a365 */
  goto L_90a365;
L_90a362: /* 90a362: mov ebp, dword ptr [ebp + 8] */
  ebp = R32((uint32_t)(ebp + 0x8u));
L_90a365: /* 90a365: cmp ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90a367: jne 0x90a34f */
  if (!zf) goto L_90a34f;
L_90a369: /* 90a369: mov dl, byte ptr [edi + 8] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x8u))) & 0xffu);
/* 90a36c: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 90a36e: je 0x90a4f2 */
  if (zf) goto L_90a4f2;
L_90a374: /* 90a374: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 90a376: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90a377: mov ecx, edi */
  ecx = edi;
/* 90a379: call 0x90b5e0 */
  esp -= 4; W32(esp, 0x90a37eu); SPILL(); f_90b5e0(); if (g_unwind) return; RELOAD();
/* 90a37e: mov ecx, dword ptr [0xcf2e7c] */
  ecx = R32((uint32_t)(0xcf2e7cu));
/* 90a384: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 90a388: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 90a38a: mov edx, dword ptr [0xcf2e7c] */
  edx = R32((uint32_t)(0xcf2e7cu));
/* 90a390: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 90a393: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90a396: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90a397: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90a398: call 0x90b710 */
  esp -= 4; W32(esp, 0x90a39du); SPILL(); f_90b710(); if (g_unwind) return; RELOAD();
/* 90a39d: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* 90a3a0: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 90a3a3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90a3a6: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 90a3a7: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90a3a9: mov dword ptr [edi + 0xc], ecx */
  W32((uint32_t)(edi + 0xcu), ecx);
/* 90a3ac: je 0x90a3d3 */
  if (zf) goto L_90a3d3;
L_90a3ae: /* 90a3ae: cmp ebp, dword ptr [0xcf2e7c] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(0xcf2e7cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90a3b4: jne 0x90a3d3 */
  if (!zf) goto L_90a3d3;
L_90a3b6: /* 90a3b6: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 90a3b8: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 90a3bb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 90a3bd: jb 0x90a3d3 */
  if (cf) goto L_90a3d3;
L_90a3bf: /* 90a3bf: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 90a3c3: mov dword ptr [esi + 8], ebp */
  W32((uint32_t)(esi + 0x8u), ebp);
/* 90a3c6: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 90a3c9: cmp esi, dword ptr [eax + 8] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90a3cc: jne 0x90a3f9 */
  if (!zf) goto L_90a3f9;
L_90a3ce: /* 90a3ce: mov dword ptr [eax + 8], ebp */
  W32((uint32_t)(eax + 0x8u), ebp);
/* 90a3d1: jmp 0x90a3f9 */
  goto L_90a3f9;
L_90a3d3: /* 90a3d3: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 90a3d7: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 90a3d9: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 90a3dc: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90a3de: jne 0x90a3eb */
  if (!zf) goto L_90a3eb;
L_90a3e0: /* 90a3e0: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 90a3e3: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 90a3e6: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 90a3e9: jmp 0x90a3f5 */
  goto L_90a3f5;
L_90a3eb: /* 90a3eb: cmp esi, dword ptr [eax] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90a3ed: jne 0x90a3f5 */
  if (!zf) goto L_90a3f5;
L_90a3ef: /* 90a3ef: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 90a3f3: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_90a3f5: /* 90a3f5: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
L_90a3f9: /* 90a3f9: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 90a3fc: mov esi, ebp */
  esi = ebp;
/* 90a3fe: cmp ebp, dword ptr [edx + 4] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90a401: je 0x90a4d3 */
  if (zf) goto L_90a4d3;
L_90a407: /* 90a407: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 90a40a: xor ebx, ebx */
  ebx = 0;
/* 90a40c: cmp dword ptr [eax + 0x10], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x10u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90a40f: jne 0x90a4d3 */
  if (!zf) goto L_90a4d3;
L_90a415: /* 90a415: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 90a418: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 90a41a: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90a41c: jne 0x90a477 */
  if (!zf) goto L_90a477;
L_90a41e: /* 90a41e: mov ecx, dword ptr [edx + 8] */
  ecx = R32((uint32_t)(edx + 0x8u));
/* 90a421: cmp dword ptr [ecx + 0x10], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x10u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90a424: jne 0x90a445 */
  if (!zf) goto L_90a445;
L_90a426: /* 90a426: mov edx, 1 */
  edx = 0x1u;
/* 90a42b: mov dword ptr [eax + 0x10], edx */
  W32((uint32_t)(eax + 0x10u), edx);
/* 90a42e: mov dword ptr [ecx + 0x10], edx */
  W32((uint32_t)(ecx + 0x10u), edx);
/* 90a431: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 90a434: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 90a437: mov dword ptr [ecx + 0x10], ebx */
  W32((uint32_t)(ecx + 0x10u), ebx);
/* 90a43a: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 90a43d: mov esi, dword ptr [edx + 4] */
  esi = R32((uint32_t)(edx + 0x4u));
/* 90a440: jmp 0x90a4c7 */
  goto L_90a4c7;
L_90a445: /* 90a445: cmp esi, dword ptr [eax + 8] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90a448: jne 0x90a454 */
  if (!zf) goto L_90a454;
L_90a44a: /* 90a44a: mov esi, eax */
  esi = eax;
/* 90a44c: mov ecx, edi */
  ecx = edi;
/* 90a44e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90a44f: call 0x90b500 */
  esp -= 4; W32(esp, 0x90a454u); SPILL(); f_90b500(); if (g_unwind) return; RELOAD();
L_90a454: /* 90a454: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 90a457: mov dword ptr [eax + 0x10], 1 */
  W32((uint32_t)(eax + 0x10u), 0x1u);
/* 90a45e: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 90a461: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 90a464: mov dword ptr [edx + 0x10], ebx */
  W32((uint32_t)(edx + 0x10u), ebx);
/* 90a467: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 90a46a: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 90a46d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90a46e: mov ecx, edi */
  ecx = edi;
/* 90a470: call 0x90b580 */
  esp -= 4; W32(esp, 0x90a475u); SPILL(); f_90b580(); if (g_unwind) return; RELOAD();
/* 90a475: jmp 0x90a4c7 */
  goto L_90a4c7;
L_90a477: /* 90a477: cmp dword ptr [ecx + 0x10], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x10u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90a47a: jne 0x90a498 */
  if (!zf) goto L_90a498;
L_90a47c: /* 90a47c: mov edx, 1 */
  edx = 0x1u;
/* 90a481: mov dword ptr [eax + 0x10], edx */
  W32((uint32_t)(eax + 0x10u), edx);
/* 90a484: mov dword ptr [ecx + 0x10], edx */
  W32((uint32_t)(ecx + 0x10u), edx);
/* 90a487: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 90a48a: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 90a48d: mov dword ptr [eax + 0x10], ebx */
  W32((uint32_t)(eax + 0x10u), ebx);
/* 90a490: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 90a493: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 90a496: jmp 0x90a4c7 */
  goto L_90a4c7;
L_90a498: /* 90a498: cmp esi, dword ptr [eax] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90a49a: jne 0x90a4a6 */
  if (!zf) goto L_90a4a6;
L_90a49c: /* 90a49c: mov esi, eax */
  esi = eax;
/* 90a49e: mov ecx, edi */
  ecx = edi;
/* 90a4a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90a4a1: call 0x90b580 */
  esp -= 4; W32(esp, 0x90a4a6u); SPILL(); f_90b580(); if (g_unwind) return; RELOAD();
L_90a4a6: /* 90a4a6: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 90a4a9: mov dword ptr [edx + 0x10], 1 */
  W32((uint32_t)(edx + 0x10u), 0x1u);
/* 90a4b0: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 90a4b3: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 90a4b6: mov dword ptr [ecx + 0x10], ebx */
  W32((uint32_t)(ecx + 0x10u), ebx);
/* 90a4b9: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 90a4bc: mov ecx, edi */
  ecx = edi;
/* 90a4be: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 90a4c1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90a4c2: call 0x90b500 */
  esp -= 4; W32(esp, 0x90a4c7u); SPILL(); f_90b500(); if (g_unwind) return; RELOAD();
L_90a4c7: /* 90a4c7: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 90a4ca: cmp esi, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90a4cd: jne 0x90a407 */
  if (!zf) goto L_90a407;
L_90a4d3: /* 90a4d3: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 90a4d6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90a4d7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90a4d8: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 90a4db: mov dword ptr [eax + 0x10], 1 */
  W32((uint32_t)(eax + 0x10u), 0x1u);
/* 90a4e2: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 90a4e6: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
/* 90a4e8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 90a4e9: mov byte ptr [eax + 4], 1 */
  W8((uint32_t)(eax + 0x4u), 0x1u);
/* 90a4ed: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 90a4ee: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 90a4ef: ret 8 */
  esp += 12; SPILL(); return;
L_90a4f2: /* 90a4f2: mov edx, esi */
  edx = esi;
/* 90a4f4: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 90a4f6: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 90a4fa: je 0x90a50d */
  if (zf) goto L_90a50d;
L_90a4fc: /* 90a4fc: cmp esi, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90a4fe: je 0x90a516 */
  if (zf) goto L_90a516;
L_90a500: /* 90a500: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 90a504: call 0x90b600 */
  esp -= 4; W32(esp, 0x90a509u); SPILL(); f_90b600(); if (g_unwind) return; RELOAD();
/* 90a509: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
L_90a50d: /* 90a50d: mov eax, dword ptr [edx + 0xc] */
  eax = R32((uint32_t)(edx + 0xcu));
/* 90a510: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 90a512: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 90a514: jae 0x90a539 */
  if (!cf) goto L_90a539;
L_90a516: /* 90a516: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90a517: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90a518: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 90a51c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 90a51d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90a51e: mov ecx, edi */
  ecx = edi;
/* 90a520: call 0x90b190 */
  esp -= 4; W32(esp, 0x90a525u); SPILL(); f_90b190(); if (g_unwind) return; RELOAD();
/* 90a525: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 90a527: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 90a52b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90a52c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90a52d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 90a52e: mov byte ptr [eax + 4], 1 */
  W8((uint32_t)(eax + 0x4u), 0x1u);
/* 90a532: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 90a534: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 90a535: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 90a536: ret 8 */
  esp += 12; SPILL(); return;
L_90a539: /* 90a539: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 90a53d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90a53e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90a53f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 90a540: mov byte ptr [eax + 4], 0 */
  W8((uint32_t)(eax + 0x4u), 0x0u);
/* 90a544: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 90a546: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 90a547: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 90a548: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90a550(void) {
  LOAD_REGS();
L_90a550: /* 90a550: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90a551: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 90a552: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90a553: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 90a557: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 90a55b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90a55c: mov edi, ecx */
  edi = ecx;
/* 90a55e: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 90a561: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90a563: je 0x90a5c9 */
  if (zf) goto L_90a5c9;
L_90a565: /* 90a565: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 90a568: cmp esi, dword ptr [eax] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90a56a: jne 0x90a5c9 */
  if (!zf) goto L_90a5c9;
L_90a56c: /* 90a56c: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90a56e: jne 0x90a5c9 */
  if (!zf) goto L_90a5c9;
L_90a570: /* 90a570: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 90a573: mov eax, dword ptr [0xcf2e7c] */
  eax = R32((uint32_t)(0xcf2e7cu));
/* 90a578: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90a57a: mov esi, ebx */
  esi = ebx;
/* 90a57c: je 0x90a59f */
  if (zf) goto L_90a59f;
L_90a57e: /* 90a57e: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 90a581: mov ecx, edi */
  ecx = edi;
/* 90a583: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90a584: call 0x90b0d0 */
  esp -= 4; W32(esp, 0x90a589u); SPILL(); f_90b0d0(); if (g_unwind) return; RELOAD();
/* 90a589: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 90a58b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90a58c: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x90a591u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 90a591: mov eax, dword ptr [0xcf2e7c] */
  eax = R32((uint32_t)(0xcf2e7cu));
/* 90a596: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90a599: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90a59b: mov ebx, esi */
  ebx = esi;
/* 90a59d: jne 0x90a57e */
  if (!zf) goto L_90a57e;
L_90a59f: /* 90a59f: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 90a5a2: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 90a5a5: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 90a5a8: mov dword ptr [edi + 0xc], 0 */
  W32((uint32_t)(edi + 0xcu), 0x0u);
/* 90a5af: mov dword ptr [eax], eax */
  W32((uint32_t)(eax), eax);
/* 90a5b1: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 90a5b4: mov dword ptr [eax + 8], eax */
  W32((uint32_t)(eax + 0x8u), eax);
/* 90a5b7: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 90a5ba: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 90a5be: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90a5bf: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 90a5c1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90a5c2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 90a5c3: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 90a5c5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 90a5c6: ret 0xc */
  esp += 16; SPILL(); return;
L_90a5c9: /* 90a5c9: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90a5cb: je 0x90a611 */
  if (zf) goto L_90a611;
L_90a5cd: /* 90a5cd: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 90a5d0: mov ecx, dword ptr [0xcf2e7c] */
  ecx = R32((uint32_t)(0xcf2e7cu));
/* 90a5d6: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90a5d8: mov ebx, esi */
  ebx = esi;
/* 90a5da: je 0x90a5e7 */
  if (zf) goto L_90a5e7;
L_90a5dc: /* 90a5dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90a5dd: call 0x90b560 */
  esp -= 4; W32(esp, 0x90a5e2u); SPILL(); f_90b560(); if (g_unwind) return; RELOAD();
/* 90a5e2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90a5e5: jmp 0x90a5fe */
  goto L_90a5fe;
L_90a5e7: /* 90a5e7: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 90a5ea: cmp esi, dword ptr [eax + 8] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90a5ed: jne 0x90a5f9 */
  if (!zf) goto L_90a5f9;
L_90a5ef: /* 90a5ef: mov esi, eax */
  esi = eax;
/* 90a5f1: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 90a5f4: cmp esi, dword ptr [eax + 8] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90a5f7: je 0x90a5ef */
  if (zf) goto L_90a5ef;
L_90a5f9: /* 90a5f9: cmp dword ptr [esi + 8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90a5fc: je 0x90a600 */
  if (zf) goto L_90a600;
L_90a5fe: /* 90a5fe: mov esi, eax */
  esi = eax;
L_90a600: /* 90a600: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 90a604: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90a605: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90a606: mov ecx, edi */
  ecx = edi;
/* 90a608: call 0x90acf0 */
  esp -= 4; W32(esp, 0x90a60du); SPILL(); f_90acf0(); if (g_unwind) return; RELOAD();
/* 90a60d: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90a60f: jne 0x90a5cd */
  if (!zf) goto L_90a5cd;
L_90a611: /* 90a611: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 90a615: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90a616: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 90a618: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90a619: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 90a61a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 90a61b: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_90a620(void) {
  LOAD_REGS();
L_90a620: /* 90a620: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90a621: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 90a624: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90a625: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 90a629: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90a62a: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 90a62d: mov esi, dword ptr [0xcf2e7c] */
  esi = R32((uint32_t)(0xcf2e7cu));
/* 90a633: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90a635: mov edx, ecx */
  edx = ecx;
/* 90a637: je 0x90a64f */
  if (zf) goto L_90a64f;
L_90a639: /* 90a639: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90a63a: mov edi, dword ptr [ebx] */
  edi = R32((uint32_t)(ebx));
L_90a63c: /* 90a63c: cmp dword ptr [eax + 0xc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 90a63f: jae 0x90a646 */
  if (!cf) goto L_90a646;
L_90a641: /* 90a641: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 90a644: jmp 0x90a64a */
  goto L_90a64a;
L_90a646: /* 90a646: mov edx, eax */
  edx = eax;
/* 90a648: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
L_90a64a: /* 90a64a: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90a64c: jne 0x90a63c */
  if (!zf) goto L_90a63c;
L_90a64e: /* 90a64e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_90a64f: /* 90a64f: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90a651: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 90a655: je 0x90a672 */
  if (zf) goto L_90a672;
L_90a657: /* 90a657: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 90a659: mov esi, dword ptr [edx + 0xc] */
  esi = R32((uint32_t)(edx + 0xcu));
/* 90a65c: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 90a65e: jb 0x90a672 */
  if (cf) goto L_90a672;
L_90a660: /* 90a660: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 90a664: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90a665: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 90a666: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 90a668: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 90a66c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 90a66e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 90a66f: ret 8 */
  esp += 12; SPILL(); return;
L_90a672: /* 90a672: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 90a676: mov dword ptr [esp + 8], ecx */
  W32((uint32_t)(esp + 0x8u), ecx);
/* 90a67a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90a67b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 90a67c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 90a67e: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 90a682: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 90a684: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 90a685: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90a690(void) {
  LOAD_REGS();
L_90a690: /* 90a690: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 90a693: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90a694: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 90a695: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90a696: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90a697: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 90a69b: mov edi, ecx */
  edi = ecx;
/* 90a69d: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 90a6a1: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 90a6a4: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* 90a6a7: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 90a6a9: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 90a6ac: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 90a6ae: jae 0x90a7b6 */
  if (!cf) goto L_90a7b6;
L_90a6b4: /* 90a6b4: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 90a6b7: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90a6b9: je 0x90a6c6 */
  if (zf) goto L_90a6c6;
L_90a6bb: /* 90a6bb: mov ecx, eax */
  ecx = eax;
/* 90a6bd: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 90a6bf: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 90a6c2: cmp ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 90a6c4: jb 0x90a6c8 */
  if (cf) goto L_90a6c8;
L_90a6c6: /* 90a6c6: mov ecx, ebp */
  ecx = ebp;
L_90a6c8: /* 90a6c8: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90a6ca: jne 0x90a6d0 */
  if (!zf) goto L_90a6d0;
L_90a6cc: /* 90a6cc: xor eax, eax */
  eax = 0;
/* 90a6ce: jmp 0x90a6d5 */
  goto L_90a6d5;
L_90a6d0: /* 90a6d0: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 90a6d2: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
L_90a6d5: /* 90a6d5: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90a6d7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 90a6d9: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 90a6dd: jge 0x90a6e1 */
  if ((sf == of)) goto L_90a6e1;
L_90a6df: /* 90a6df: xor eax, eax */
  eax = 0;
L_90a6e1: /* 90a6e1: lea edx, [eax*4] */
  edx = (uint32_t)(eax*4);
/* 90a6e8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90a6e9: call 0x6c242d */
  esp -= 4; W32(esp, 0x90a6eeu); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 90a6ee: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* 90a6f2: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 90a6f6: mov ecx, eax */
  ecx = eax;
/* 90a6f8: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 90a6fb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90a6fe: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90a700: je 0x90a714 */
  if (zf) goto L_90a714;
L_90a702: /* 90a702: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90a704: je 0x90a70a */
  if (zf) goto L_90a70a;
L_90a706: /* 90a706: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 90a708: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
L_90a70a: /* 90a70a: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90a70d: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 90a710: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90a712: jne 0x90a702 */
  if (!zf) goto L_90a702;
L_90a714: /* 90a714: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 90a716: mov eax, ecx */
  eax = ecx;
/* 90a718: jbe 0x90a732 */
  if ((cf | zf)) goto L_90a732;
L_90a71a: /* 90a71a: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 90a71e: mov edx, ebp */
  edx = ebp;
L_90a720: /* 90a720: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90a722: je 0x90a72c */
  if (zf) goto L_90a72c;
L_90a724: /* 90a724: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 90a726: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 90a728: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
L_90a72c: /* 90a72c: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90a72f: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 90a730: jne 0x90a720 */
  if (!zf) goto L_90a720;
L_90a732: /* 90a732: mov edi, dword ptr [edi + 8] */
  edi = R32((uint32_t)(edi + 0x8u));
/* 90a735: lea esi, [ebp*4] */
  esi = (uint32_t)(ebp*4);
/* 90a73c: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90a73e: lea edx, [esi + ecx] */
  edx = (uint32_t)(esi + ecx);
/* 90a741: je 0x90a75d */
  if (zf) goto L_90a75d;
L_90a743: /* 90a743: mov eax, edx */
  eax = edx;
/* 90a745: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 90a747: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 90a749: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_90a74b: /* 90a74b: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90a74d: je 0x90a753 */
  if (zf) goto L_90a753;
L_90a74f: /* 90a74f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 90a751: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
L_90a753: /* 90a753: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90a756: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 90a759: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90a75b: jne 0x90a74b */
  if (!zf) goto L_90a74b;
L_90a75d: /* 90a75d: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 90a761: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 90a764: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90a765: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x90a76au); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 90a76a: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 90a76e: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 90a772: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90a775: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 90a778: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* 90a77b: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 90a77e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90a780: jne 0x90a799 */
  if (!zf) goto L_90a799;
L_90a782: /* 90a782: xor eax, eax */
  eax = 0;
/* 90a784: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 90a787: mov eax, ebp */
  eax = ebp;
/* 90a789: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90a78a: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 90a78d: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 90a790: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90a791: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 90a792: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 90a793: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90a796: ret 0xc */
  esp += 16; SPILL(); return;
L_90a799: /* 90a799: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 90a79c: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 90a79f: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 90a7a1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90a7a2: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 90a7a5: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90a7a7: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 90a7aa: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 90a7ad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90a7ae: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 90a7af: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 90a7b0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90a7b3: ret 0xc */
  esp += 16; SPILL(); return;
L_90a7b6: /* 90a7b6: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 90a7ba: mov ecx, eax */
  ecx = eax;
/* 90a7bc: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 90a7be: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 90a7c1: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 90a7c3: jae 0x90a833 */
  if (!cf) goto L_90a833;
L_90a7c5: /* 90a7c5: lea ebx, [ebp*4] */
  ebx = (uint32_t)(ebp*4);
/* 90a7cc: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90a7ce: lea esi, [ebx + edx] */
  esi = (uint32_t)(ebx + edx);
/* 90a7d1: je 0x90a7ed */
  if (zf) goto L_90a7ed;
L_90a7d3: /* 90a7d3: mov ecx, esi */
  ecx = esi;
/* 90a7d5: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
L_90a7d7: /* 90a7d7: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90a7d9: je 0x90a7e3 */
  if (zf) goto L_90a7e3;
L_90a7db: /* 90a7db: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 90a7dd: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 90a7df: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
L_90a7e3: /* 90a7e3: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 90a7e6: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 90a7e9: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90a7eb: jne 0x90a7d7 */
  if (!zf) goto L_90a7d7;
L_90a7ed: /* 90a7ed: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 90a7f0: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 90a7f4: mov ecx, eax */
  ecx = eax;
/* 90a7f6: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 90a7f8: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 90a7fb: sub ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ebp = r;
  }
/* 90a7fd: je 0x90a80d */
  if (zf) goto L_90a80d;
L_90a7ff: /* 90a7ff: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90a801: je 0x90a807 */
  if (zf) goto L_90a807;
L_90a803: /* 90a803: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 90a805: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_90a807: /* 90a807: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90a80a: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 90a80b: jne 0x90a7ff */
  if (!zf) goto L_90a7ff;
L_90a80d: /* 90a80d: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 90a810: mov eax, edx */
  eax = edx;
/* 90a812: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90a814: je 0x90a821 */
  if (zf) goto L_90a821;
L_90a816: /* 90a816: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 90a818: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 90a81a: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90a81d: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90a81f: jne 0x90a816 */
  if (!zf) goto L_90a816;
L_90a821: /* 90a821: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 90a824: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90a826: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 90a829: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90a82a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90a82b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 90a82c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 90a82d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90a830: ret 0xc */
  esp += 16; SPILL(); return;
L_90a833: /* 90a833: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 90a835: jbe 0x90a88b */
  if ((cf | zf)) goto L_90a88b;
L_90a837: /* 90a837: shl ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebp = r;
  }
/* 90a83a: mov ecx, eax */
  ecx = eax;
/* 90a83c: mov esi, eax */
  esi = eax;
/* 90a83e: sub ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 90a840: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90a842: je 0x90a856 */
  if (zf) goto L_90a856;
L_90a844: /* 90a844: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90a846: je 0x90a84c */
  if (zf) goto L_90a84c;
L_90a848: /* 90a848: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 90a84a: mov dword ptr [esi], ebx */
  W32((uint32_t)(esi), ebx);
L_90a84c: /* 90a84c: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 90a84f: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 90a852: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90a854: jne 0x90a844 */
  if (!zf) goto L_90a844;
L_90a856: /* 90a856: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 90a859: mov eax, ecx */
  eax = ecx;
/* 90a85b: sub eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 90a85d: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90a85f: je 0x90a870 */
  if (zf) goto L_90a870;
L_90a861: /* 90a861: mov esi, dword ptr [eax - 4] */
  esi = R32((uint32_t)(eax + 0xfffffffcu));
/* 90a864: sub eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 90a867: sub ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 90a86a: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90a86c: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 90a86e: jne 0x90a861 */
  if (!zf) goto L_90a861;
L_90a870: /* 90a870: lea ecx, [edx + ebp] */
  ecx = (uint32_t)(edx + ebp);
/* 90a873: mov eax, edx */
  eax = edx;
/* 90a875: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90a877: je 0x90a888 */
  if (zf) goto L_90a888;
L_90a879: /* 90a879: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
L_90a87d: /* 90a87d: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 90a87f: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 90a881: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90a884: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90a886: jne 0x90a87d */
  if (!zf) goto L_90a87d;
L_90a888: /* 90a888: add dword ptr [edi + 8], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x8u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(edi + 0x8u), r);
  }
L_90a88b: /* 90a88b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90a88c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90a88d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 90a88e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 90a88f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90a892: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_90a8a0(void) {
  LOAD_REGS();
L_90a8a0: /* 90a8a0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 90a8a4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 90a8a6: jbe 0x90a8c4 */
  if ((cf | zf)) goto L_90a8c4;
L_90a8a8: /* 90a8a8: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 90a8ac: mov ecx, eax */
  ecx = eax;
/* 90a8ae: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90a8b2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
L_90a8b3: /* 90a8b3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90a8b5: je 0x90a8bd */
  if (zf) goto L_90a8bd;
L_90a8b7: /* 90a8b7: mov si, word ptr [edx] */
  esi = (esi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edx))) & 0xffffu);
/* 90a8ba: mov word ptr [eax], si */
  W16((uint32_t)(eax), (esi & 0xffffu));
L_90a8bd: /* 90a8bd: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90a8c0: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 90a8c1: jne 0x90a8b3 */
  if (!zf) goto L_90a8b3;
L_90a8c3: /* 90a8c3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_90a8c4: /* 90a8c4: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_90a8d0(void) {
  LOAD_REGS();
L_90a8d0: /* 90a8d0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 90a8d3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90a8d4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 90a8d5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90a8d6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90a8d7: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 90a8db: mov edi, ecx */
  edi = ecx;
/* 90a8dd: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 90a8e1: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 90a8e4: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* 90a8e7: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 90a8e9: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 90a8ec: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 90a8ee: jae 0x90a9f6 */
  if (!cf) goto L_90a9f6;
L_90a8f4: /* 90a8f4: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 90a8f7: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90a8f9: je 0x90a906 */
  if (zf) goto L_90a906;
L_90a8fb: /* 90a8fb: mov ecx, eax */
  ecx = eax;
/* 90a8fd: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 90a8ff: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 90a902: cmp ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 90a904: jb 0x90a908 */
  if (cf) goto L_90a908;
L_90a906: /* 90a906: mov ecx, ebp */
  ecx = ebp;
L_90a908: /* 90a908: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90a90a: jne 0x90a910 */
  if (!zf) goto L_90a910;
L_90a90c: /* 90a90c: xor eax, eax */
  eax = 0;
/* 90a90e: jmp 0x90a915 */
  goto L_90a915;
L_90a910: /* 90a910: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 90a912: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
L_90a915: /* 90a915: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90a917: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 90a919: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 90a91d: jge 0x90a921 */
  if ((sf == of)) goto L_90a921;
L_90a91f: /* 90a91f: xor eax, eax */
  eax = 0;
L_90a921: /* 90a921: lea edx, [eax*4] */
  edx = (uint32_t)(eax*4);
/* 90a928: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90a929: call 0x6c242d */
  esp -= 4; W32(esp, 0x90a92eu); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 90a92e: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* 90a932: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 90a936: mov ecx, eax */
  ecx = eax;
/* 90a938: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 90a93b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90a93e: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90a940: je 0x90a954 */
  if (zf) goto L_90a954;
L_90a942: /* 90a942: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90a944: je 0x90a94a */
  if (zf) goto L_90a94a;
L_90a946: /* 90a946: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 90a948: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
L_90a94a: /* 90a94a: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90a94d: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 90a950: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90a952: jne 0x90a942 */
  if (!zf) goto L_90a942;
L_90a954: /* 90a954: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 90a956: mov eax, ecx */
  eax = ecx;
/* 90a958: jbe 0x90a972 */
  if ((cf | zf)) goto L_90a972;
L_90a95a: /* 90a95a: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 90a95e: mov edx, ebp */
  edx = ebp;
L_90a960: /* 90a960: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90a962: je 0x90a96c */
  if (zf) goto L_90a96c;
L_90a964: /* 90a964: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 90a966: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 90a968: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
L_90a96c: /* 90a96c: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90a96f: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 90a970: jne 0x90a960 */
  if (!zf) goto L_90a960;
L_90a972: /* 90a972: mov edi, dword ptr [edi + 8] */
  edi = R32((uint32_t)(edi + 0x8u));
/* 90a975: lea esi, [ebp*4] */
  esi = (uint32_t)(ebp*4);
/* 90a97c: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90a97e: lea edx, [esi + ecx] */
  edx = (uint32_t)(esi + ecx);
/* 90a981: je 0x90a99d */
  if (zf) goto L_90a99d;
L_90a983: /* 90a983: mov eax, edx */
  eax = edx;
/* 90a985: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 90a987: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 90a989: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_90a98b: /* 90a98b: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90a98d: je 0x90a993 */
  if (zf) goto L_90a993;
L_90a98f: /* 90a98f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 90a991: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
L_90a993: /* 90a993: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90a996: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 90a999: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90a99b: jne 0x90a98b */
  if (!zf) goto L_90a98b;
L_90a99d: /* 90a99d: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 90a9a1: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 90a9a4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90a9a5: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x90a9aau); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 90a9aa: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 90a9ae: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 90a9b2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90a9b5: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 90a9b8: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* 90a9bb: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 90a9be: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90a9c0: jne 0x90a9d9 */
  if (!zf) goto L_90a9d9;
L_90a9c2: /* 90a9c2: xor eax, eax */
  eax = 0;
/* 90a9c4: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 90a9c7: mov eax, ebp */
  eax = ebp;
/* 90a9c9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90a9ca: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 90a9cd: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 90a9d0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90a9d1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 90a9d2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 90a9d3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90a9d6: ret 0xc */
  esp += 16; SPILL(); return;
L_90a9d9: /* 90a9d9: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 90a9dc: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 90a9df: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 90a9e1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90a9e2: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 90a9e5: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90a9e7: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 90a9ea: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 90a9ed: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90a9ee: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 90a9ef: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 90a9f0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90a9f3: ret 0xc */
  esp += 16; SPILL(); return;
L_90a9f6: /* 90a9f6: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 90a9fa: mov ecx, eax */
  ecx = eax;
/* 90a9fc: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 90a9fe: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 90aa01: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 90aa03: jae 0x90aa73 */
  if (!cf) goto L_90aa73;
L_90aa05: /* 90aa05: lea ebx, [ebp*4] */
  ebx = (uint32_t)(ebp*4);
/* 90aa0c: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90aa0e: lea esi, [ebx + edx] */
  esi = (uint32_t)(ebx + edx);
/* 90aa11: je 0x90aa2d */
  if (zf) goto L_90aa2d;
L_90aa13: /* 90aa13: mov ecx, esi */
  ecx = esi;
/* 90aa15: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
L_90aa17: /* 90aa17: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90aa19: je 0x90aa23 */
  if (zf) goto L_90aa23;
L_90aa1b: /* 90aa1b: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 90aa1d: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 90aa1f: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
L_90aa23: /* 90aa23: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 90aa26: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 90aa29: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90aa2b: jne 0x90aa17 */
  if (!zf) goto L_90aa17;
L_90aa2d: /* 90aa2d: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 90aa30: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 90aa34: mov ecx, eax */
  ecx = eax;
/* 90aa36: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 90aa38: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 90aa3b: sub ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ebp = r;
  }
/* 90aa3d: je 0x90aa4d */
  if (zf) goto L_90aa4d;
L_90aa3f: /* 90aa3f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90aa41: je 0x90aa47 */
  if (zf) goto L_90aa47;
L_90aa43: /* 90aa43: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 90aa45: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_90aa47: /* 90aa47: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90aa4a: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 90aa4b: jne 0x90aa3f */
  if (!zf) goto L_90aa3f;
L_90aa4d: /* 90aa4d: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 90aa50: mov eax, edx */
  eax = edx;
/* 90aa52: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90aa54: je 0x90aa61 */
  if (zf) goto L_90aa61;
L_90aa56: /* 90aa56: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 90aa58: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 90aa5a: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90aa5d: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90aa5f: jne 0x90aa56 */
  if (!zf) goto L_90aa56;
L_90aa61: /* 90aa61: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 90aa64: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90aa66: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 90aa69: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90aa6a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90aa6b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 90aa6c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 90aa6d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90aa70: ret 0xc */
  esp += 16; SPILL(); return;
L_90aa73: /* 90aa73: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 90aa75: jbe 0x90aacb */
  if ((cf | zf)) goto L_90aacb;
L_90aa77: /* 90aa77: shl ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebp = r;
  }
/* 90aa7a: mov ecx, eax */
  ecx = eax;
/* 90aa7c: mov esi, eax */
  esi = eax;
/* 90aa7e: sub ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 90aa80: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90aa82: je 0x90aa96 */
  if (zf) goto L_90aa96;
L_90aa84: /* 90aa84: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90aa86: je 0x90aa8c */
  if (zf) goto L_90aa8c;
L_90aa88: /* 90aa88: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 90aa8a: mov dword ptr [esi], ebx */
  W32((uint32_t)(esi), ebx);
L_90aa8c: /* 90aa8c: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 90aa8f: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 90aa92: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90aa94: jne 0x90aa84 */
  if (!zf) goto L_90aa84;
L_90aa96: /* 90aa96: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 90aa99: mov eax, ecx */
  eax = ecx;
/* 90aa9b: sub eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 90aa9d: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90aa9f: je 0x90aab0 */
  if (zf) goto L_90aab0;
L_90aaa1: /* 90aaa1: mov esi, dword ptr [eax - 4] */
  esi = R32((uint32_t)(eax + 0xfffffffcu));
/* 90aaa4: sub eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 90aaa7: sub ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 90aaaa: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90aaac: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 90aaae: jne 0x90aaa1 */
  if (!zf) goto L_90aaa1;
L_90aab0: /* 90aab0: lea ecx, [edx + ebp] */
  ecx = (uint32_t)(edx + ebp);
/* 90aab3: mov eax, edx */
  eax = edx;
/* 90aab5: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90aab7: je 0x90aac8 */
  if (zf) goto L_90aac8;
L_90aab9: /* 90aab9: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
L_90aabd: /* 90aabd: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 90aabf: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 90aac1: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90aac4: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90aac6: jne 0x90aabd */
  if (!zf) goto L_90aabd;
L_90aac8: /* 90aac8: add dword ptr [edi + 8], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x8u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(edi + 0x8u), r);
  }
L_90aacb: /* 90aacb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90aacc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90aacd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 90aace: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 90aacf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90aad2: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_90aae0(void) {
  LOAD_REGS();
L_90aae0: /* 90aae0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 90aae3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90aae4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 90aae5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90aae6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90aae7: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 90aaeb: mov edi, ecx */
  edi = ecx;
/* 90aaed: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 90aaf1: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 90aaf4: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* 90aaf7: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 90aaf9: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 90aafc: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 90aafe: jae 0x90ac06 */
  if (!cf) goto L_90ac06;
L_90ab04: /* 90ab04: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 90ab07: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90ab09: je 0x90ab16 */
  if (zf) goto L_90ab16;
L_90ab0b: /* 90ab0b: mov ecx, eax */
  ecx = eax;
/* 90ab0d: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 90ab0f: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 90ab12: cmp ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 90ab14: jb 0x90ab18 */
  if (cf) goto L_90ab18;
L_90ab16: /* 90ab16: mov ecx, ebp */
  ecx = ebp;
L_90ab18: /* 90ab18: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90ab1a: jne 0x90ab20 */
  if (!zf) goto L_90ab20;
L_90ab1c: /* 90ab1c: xor eax, eax */
  eax = 0;
/* 90ab1e: jmp 0x90ab25 */
  goto L_90ab25;
L_90ab20: /* 90ab20: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 90ab22: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
L_90ab25: /* 90ab25: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90ab27: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 90ab29: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 90ab2d: jge 0x90ab31 */
  if ((sf == of)) goto L_90ab31;
L_90ab2f: /* 90ab2f: xor eax, eax */
  eax = 0;
L_90ab31: /* 90ab31: lea edx, [eax*4] */
  edx = (uint32_t)(eax*4);
/* 90ab38: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90ab39: call 0x6c242d */
  esp -= 4; W32(esp, 0x90ab3eu); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 90ab3e: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* 90ab42: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 90ab46: mov ecx, eax */
  ecx = eax;
/* 90ab48: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 90ab4b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90ab4e: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90ab50: je 0x90ab64 */
  if (zf) goto L_90ab64;
L_90ab52: /* 90ab52: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90ab54: je 0x90ab5a */
  if (zf) goto L_90ab5a;
L_90ab56: /* 90ab56: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 90ab58: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
L_90ab5a: /* 90ab5a: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90ab5d: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 90ab60: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90ab62: jne 0x90ab52 */
  if (!zf) goto L_90ab52;
L_90ab64: /* 90ab64: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 90ab66: mov eax, ecx */
  eax = ecx;
/* 90ab68: jbe 0x90ab82 */
  if ((cf | zf)) goto L_90ab82;
L_90ab6a: /* 90ab6a: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 90ab6e: mov edx, ebp */
  edx = ebp;
L_90ab70: /* 90ab70: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90ab72: je 0x90ab7c */
  if (zf) goto L_90ab7c;
L_90ab74: /* 90ab74: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 90ab76: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 90ab78: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
L_90ab7c: /* 90ab7c: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90ab7f: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 90ab80: jne 0x90ab70 */
  if (!zf) goto L_90ab70;
L_90ab82: /* 90ab82: mov edi, dword ptr [edi + 8] */
  edi = R32((uint32_t)(edi + 0x8u));
/* 90ab85: lea esi, [ebp*4] */
  esi = (uint32_t)(ebp*4);
/* 90ab8c: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90ab8e: lea edx, [esi + ecx] */
  edx = (uint32_t)(esi + ecx);
/* 90ab91: je 0x90abad */
  if (zf) goto L_90abad;
L_90ab93: /* 90ab93: mov eax, edx */
  eax = edx;
/* 90ab95: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 90ab97: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 90ab99: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_90ab9b: /* 90ab9b: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90ab9d: je 0x90aba3 */
  if (zf) goto L_90aba3;
L_90ab9f: /* 90ab9f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 90aba1: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
L_90aba3: /* 90aba3: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90aba6: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 90aba9: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90abab: jne 0x90ab9b */
  if (!zf) goto L_90ab9b;
L_90abad: /* 90abad: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 90abb1: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 90abb4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90abb5: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x90abbau); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 90abba: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 90abbe: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 90abc2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90abc5: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 90abc8: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* 90abcb: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 90abce: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90abd0: jne 0x90abe9 */
  if (!zf) goto L_90abe9;
L_90abd2: /* 90abd2: xor eax, eax */
  eax = 0;
/* 90abd4: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 90abd7: mov eax, ebp */
  eax = ebp;
/* 90abd9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90abda: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 90abdd: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 90abe0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90abe1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 90abe2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 90abe3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90abe6: ret 0xc */
  esp += 16; SPILL(); return;
L_90abe9: /* 90abe9: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 90abec: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 90abef: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 90abf1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90abf2: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 90abf5: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90abf7: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 90abfa: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 90abfd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90abfe: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 90abff: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 90ac00: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90ac03: ret 0xc */
  esp += 16; SPILL(); return;
L_90ac06: /* 90ac06: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 90ac0a: mov ecx, eax */
  ecx = eax;
/* 90ac0c: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 90ac0e: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 90ac11: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 90ac13: jae 0x90ac83 */
  if (!cf) goto L_90ac83;
L_90ac15: /* 90ac15: lea ebx, [ebp*4] */
  ebx = (uint32_t)(ebp*4);
/* 90ac1c: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90ac1e: lea esi, [ebx + edx] */
  esi = (uint32_t)(ebx + edx);
/* 90ac21: je 0x90ac3d */
  if (zf) goto L_90ac3d;
L_90ac23: /* 90ac23: mov ecx, esi */
  ecx = esi;
/* 90ac25: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
L_90ac27: /* 90ac27: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90ac29: je 0x90ac33 */
  if (zf) goto L_90ac33;
L_90ac2b: /* 90ac2b: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 90ac2d: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 90ac2f: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
L_90ac33: /* 90ac33: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 90ac36: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 90ac39: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90ac3b: jne 0x90ac27 */
  if (!zf) goto L_90ac27;
L_90ac3d: /* 90ac3d: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 90ac40: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 90ac44: mov ecx, eax */
  ecx = eax;
/* 90ac46: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 90ac48: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 90ac4b: sub ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ebp = r;
  }
/* 90ac4d: je 0x90ac5d */
  if (zf) goto L_90ac5d;
L_90ac4f: /* 90ac4f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90ac51: je 0x90ac57 */
  if (zf) goto L_90ac57;
L_90ac53: /* 90ac53: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 90ac55: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_90ac57: /* 90ac57: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90ac5a: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 90ac5b: jne 0x90ac4f */
  if (!zf) goto L_90ac4f;
L_90ac5d: /* 90ac5d: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 90ac60: mov eax, edx */
  eax = edx;
/* 90ac62: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90ac64: je 0x90ac71 */
  if (zf) goto L_90ac71;
L_90ac66: /* 90ac66: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 90ac68: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 90ac6a: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90ac6d: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90ac6f: jne 0x90ac66 */
  if (!zf) goto L_90ac66;
L_90ac71: /* 90ac71: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 90ac74: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90ac76: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 90ac79: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90ac7a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90ac7b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 90ac7c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 90ac7d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90ac80: ret 0xc */
  esp += 16; SPILL(); return;
L_90ac83: /* 90ac83: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 90ac85: jbe 0x90acdb */
  if ((cf | zf)) goto L_90acdb;
L_90ac87: /* 90ac87: shl ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebp = r;
  }
/* 90ac8a: mov ecx, eax */
  ecx = eax;
/* 90ac8c: mov esi, eax */
  esi = eax;
/* 90ac8e: sub ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 90ac90: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90ac92: je 0x90aca6 */
  if (zf) goto L_90aca6;
L_90ac94: /* 90ac94: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90ac96: je 0x90ac9c */
  if (zf) goto L_90ac9c;
L_90ac98: /* 90ac98: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 90ac9a: mov dword ptr [esi], ebx */
  W32((uint32_t)(esi), ebx);
L_90ac9c: /* 90ac9c: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 90ac9f: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 90aca2: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90aca4: jne 0x90ac94 */
  if (!zf) goto L_90ac94;
L_90aca6: /* 90aca6: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 90aca9: mov eax, ecx */
  eax = ecx;
/* 90acab: sub eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 90acad: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90acaf: je 0x90acc0 */
  if (zf) goto L_90acc0;
L_90acb1: /* 90acb1: mov esi, dword ptr [eax - 4] */
  esi = R32((uint32_t)(eax + 0xfffffffcu));
/* 90acb4: sub eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 90acb7: sub ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 90acba: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90acbc: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 90acbe: jne 0x90acb1 */
  if (!zf) goto L_90acb1;
L_90acc0: /* 90acc0: lea ecx, [edx + ebp] */
  ecx = (uint32_t)(edx + ebp);
/* 90acc3: mov eax, edx */
  eax = edx;
/* 90acc5: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90acc7: je 0x90acd8 */
  if (zf) goto L_90acd8;
L_90acc9: /* 90acc9: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
L_90accd: /* 90accd: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 90accf: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 90acd1: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90acd4: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90acd6: jne 0x90accd */
  if (!zf) goto L_90accd;
L_90acd8: /* 90acd8: add dword ptr [edi + 8], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x8u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(edi + 0x8u), r);
  }
L_90acdb: /* 90acdb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90acdc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90acdd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 90acde: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 90acdf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90ace2: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_90acf0(void) {
  LOAD_REGS();
L_90acf0: /* 90acf0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90acf1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90acf2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 90acf3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90acf4: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 90acf8: mov ebp, ecx */
  ebp = ecx;
/* 90acfa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90acfb: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 90acff: call 0x90b660 */
  esp -= 4; W32(esp, 0x90ad04u); SPILL(); f_90b660(); if (g_unwind) return; RELOAD();
/* 90ad04: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 90ad06: mov edx, dword ptr [0xcf2e7c] */
  edx = R32((uint32_t)(0xcf2e7cu));
/* 90ad0c: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90ad0e: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 90ad12: jne 0x90ad35 */
  if (!zf) goto L_90ad35;
L_90ad14: /* 90ad14: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
L_90ad17: /* 90ad17: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 90ad1b: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 90ad1e: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 90ad21: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 90ad24: cmp dword ptr [eax + 4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90ad27: jne 0x90adb6 */
  if (!zf) goto L_90adb6;
L_90ad2d: /* 90ad2d: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 90ad30: jmp 0x90adc4 */
  goto L_90adc4;
L_90ad35: /* 90ad35: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 90ad38: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90ad3a: jne 0x90ad40 */
  if (!zf) goto L_90ad40;
L_90ad3c: /* 90ad3c: mov ecx, edi */
  ecx = edi;
/* 90ad3e: jmp 0x90ad17 */
  goto L_90ad17;
L_90ad40: /* 90ad40: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 90ad42: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90ad44: je 0x90ad4e */
  if (zf) goto L_90ad4e;
L_90ad46: /* 90ad46: mov eax, ecx */
  eax = ecx;
/* 90ad48: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 90ad4a: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90ad4c: jne 0x90ad46 */
  if (!zf) goto L_90ad46;
L_90ad4e: /* 90ad4e: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 90ad51: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90ad53: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 90ad57: je 0x90ad17 */
  if (zf) goto L_90ad17;
L_90ad59: /* 90ad59: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* 90ad5c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 90ad5e: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 90ad60: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 90ad63: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90ad65: jne 0x90ad6c */
  if (!zf) goto L_90ad6c;
L_90ad67: /* 90ad67: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 90ad6a: jmp 0x90ad83 */
  goto L_90ad83;
L_90ad6c: /* 90ad6c: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 90ad6f: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 90ad72: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 90ad75: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 90ad77: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 90ad7a: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 90ad7d: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 90ad80: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
L_90ad83: /* 90ad83: mov edx, dword ptr [ebp + 4] */
  edx = R32((uint32_t)(ebp + 0x4u));
/* 90ad86: cmp dword ptr [edx + 4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90ad89: jne 0x90ad90 */
  if (!zf) goto L_90ad90;
L_90ad8b: /* 90ad8b: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 90ad8e: jmp 0x90ad9e */
  goto L_90ad9e;
L_90ad90: /* 90ad90: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 90ad93: cmp dword ptr [edx], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90ad95: jne 0x90ad9b */
  if (!zf) goto L_90ad9b;
L_90ad97: /* 90ad97: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 90ad99: jmp 0x90ad9e */
  goto L_90ad9e;
L_90ad9b: /* 90ad9b: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
L_90ad9e: /* 90ad9e: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 90ada1: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 90ada5: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 90ada8: mov edi, dword ptr [esi + 0x10] */
  edi = R32((uint32_t)(esi + 0x10u));
/* 90adab: mov edx, dword ptr [eax + 0x10] */
  edx = R32((uint32_t)(eax + 0x10u));
/* 90adae: mov dword ptr [eax + 0x10], edi */
  W32((uint32_t)(eax + 0x10u), edi);
/* 90adb1: mov dword ptr [esi + 0x10], edx */
  W32((uint32_t)(esi + 0x10u), edx);
/* 90adb4: jmp 0x90ae1f */
  goto L_90ae1f;
L_90adb6: /* 90adb6: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 90adb9: cmp dword ptr [eax], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90adbb: jne 0x90adc1 */
  if (!zf) goto L_90adc1;
L_90adbd: /* 90adbd: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 90adbf: jmp 0x90adc4 */
  goto L_90adc4;
L_90adc1: /* 90adc1: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
L_90adc4: /* 90adc4: mov ebx, dword ptr [ebp + 4] */
  ebx = R32((uint32_t)(ebp + 0x4u));
/* 90adc7: cmp dword ptr [ebx], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90adc9: jne 0x90adf1 */
  if (!zf) goto L_90adf1;
L_90adcb: /* 90adcb: mov edi, dword ptr [0xcf2e7c] */
  edi = R32((uint32_t)(0xcf2e7cu));
/* 90add1: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 90add4: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90add6: jne 0x90addf */
  if (!zf) goto L_90addf;
L_90add8: /* 90add8: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 90addb: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 90addd: jmp 0x90adf1 */
  goto L_90adf1;
L_90addf: /* 90addf: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 90ade1: mov edx, ecx */
  edx = ecx;
/* 90ade3: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90ade5: je 0x90adef */
  if (zf) goto L_90adef;
L_90ade7: /* 90ade7: mov edx, eax */
  edx = eax;
/* 90ade9: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 90adeb: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90aded: jne 0x90ade7 */
  if (!zf) goto L_90ade7;
L_90adef: /* 90adef: mov dword ptr [ebx], edx */
  W32((uint32_t)(ebx), edx);
L_90adf1: /* 90adf1: mov ebx, dword ptr [ebp + 4] */
  ebx = R32((uint32_t)(ebp + 0x4u));
/* 90adf4: cmp dword ptr [ebx + 8], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x8u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90adf7: jne 0x90ae1f */
  if (!zf) goto L_90ae1f;
L_90adf9: /* 90adf9: mov edi, dword ptr [0xcf2e7c] */
  edi = R32((uint32_t)(0xcf2e7cu));
/* 90adff: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 90ae01: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90ae03: jne 0x90ae0a */
  if (!zf) goto L_90ae0a;
L_90ae05: /* 90ae05: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 90ae08: jmp 0x90ae1c */
  goto L_90ae1c;
L_90ae0a: /* 90ae0a: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 90ae0d: mov edx, ecx */
  edx = ecx;
/* 90ae0f: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90ae11: je 0x90ae1c */
  if (zf) goto L_90ae1c;
L_90ae13: /* 90ae13: mov edx, eax */
  edx = eax;
/* 90ae15: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
/* 90ae18: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90ae1a: jne 0x90ae13 */
  if (!zf) goto L_90ae13;
L_90ae1c: /* 90ae1c: mov dword ptr [ebx + 8], edx */
  W32((uint32_t)(ebx + 0x8u), edx);
L_90ae1f: /* 90ae1f: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 90ae23: mov ebx, 1 */
  ebx = 0x1u;
/* 90ae28: cmp dword ptr [eax + 0x10], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x10u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90ae2b: jne 0x90b0a2 */
  if (!zf) goto L_90b0a2;
L_90ae31: /* 90ae31: mov edx, dword ptr [ebp + 4] */
  edx = R32((uint32_t)(ebp + 0x4u));
/* 90ae34: cmp ecx, dword ptr [edx + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90ae37: je 0x90b09f */
  if (zf) goto L_90b09f;
L_90ae3d: /* 90ae3d: xor edi, edi */
  edi = 0;
L_90ae3f: /* 90ae3f: cmp dword ptr [ecx + 0x10], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x10u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90ae42: jne 0x90b09f */
  if (!zf) goto L_90b09f;
L_90ae48: /* 90ae48: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 90ae4b: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 90ae4d: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90ae4f: jne 0x90af00 */
  if (!zf) goto L_90af00;
L_90ae55: /* 90ae55: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
/* 90ae58: cmp dword ptr [eax + 0x10], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x10u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90ae5b: jne 0x90aeaa */
  if (!zf) goto L_90aeaa;
L_90ae5d: /* 90ae5d: mov dword ptr [eax + 0x10], ebx */
  W32((uint32_t)(eax + 0x10u), ebx);
/* 90ae60: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 90ae63: mov dword ptr [eax + 0x10], edi */
  W32((uint32_t)(eax + 0x10u), edi);
/* 90ae66: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 90ae69: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 90ae6c: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 90ae6e: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 90ae71: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 90ae73: cmp esi, dword ptr [0xcf2e7c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0xcf2e7cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90ae79: je 0x90ae7e */
  if (zf) goto L_90ae7e;
L_90ae7b: /* 90ae7b: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
L_90ae7e: /* 90ae7e: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 90ae81: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 90ae84: mov esi, dword ptr [ebp + 4] */
  esi = R32((uint32_t)(ebp + 0x4u));
/* 90ae87: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90ae8a: jne 0x90ae91 */
  if (!zf) goto L_90ae91;
L_90ae8c: /* 90ae8c: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 90ae8f: jmp 0x90ae9f */
  goto L_90ae9f;
L_90ae91: /* 90ae91: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 90ae94: cmp eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90ae96: jne 0x90ae9c */
  if (!zf) goto L_90ae9c;
L_90ae98: /* 90ae98: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 90ae9a: jmp 0x90ae9f */
  goto L_90ae9f;
L_90ae9c: /* 90ae9c: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
L_90ae9f: /* 90ae9f: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 90aea1: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 90aea4: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 90aea7: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
L_90aeaa: /* 90aeaa: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 90aeac: cmp dword ptr [edx + 0x10], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x10u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90aeaf: jne 0x90aebd */
  if (!zf) goto L_90aebd;
L_90aeb1: /* 90aeb1: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 90aeb4: cmp dword ptr [edx + 0x10], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x10u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90aeb7: je 0x90af6a */
  if (zf) goto L_90af6a;
L_90aebd: /* 90aebd: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 90aec0: cmp dword ptr [edx + 0x10], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x10u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90aec3: jne 0x90af9c */
  if (!zf) goto L_90af9c;
L_90aec9: /* 90aec9: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 90aecb: mov dword ptr [edx + 0x10], ebx */
  W32((uint32_t)(edx + 0x10u), ebx);
/* 90aece: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 90aed0: mov dword ptr [eax + 0x10], edi */
  W32((uint32_t)(eax + 0x10u), edi);
/* 90aed3: mov esi, dword ptr [edx + 8] */
  esi = R32((uint32_t)(edx + 0x8u));
/* 90aed6: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 90aed8: mov esi, dword ptr [edx + 8] */
  esi = R32((uint32_t)(edx + 0x8u));
/* 90aedb: cmp esi, dword ptr [0xcf2e7c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0xcf2e7cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90aee1: je 0x90aee6 */
  if (zf) goto L_90aee6;
L_90aee3: /* 90aee3: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
L_90aee6: /* 90aee6: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 90aee9: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 90aeec: mov esi, dword ptr [ebp + 4] */
  esi = R32((uint32_t)(ebp + 0x4u));
/* 90aeef: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90aef2: jne 0x90af81 */
  if (!zf) goto L_90af81;
L_90aef8: /* 90aef8: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 90aefb: jmp 0x90af90 */
  goto L_90af90;
L_90af00: /* 90af00: cmp dword ptr [eax + 0x10], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x10u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90af03: jne 0x90af53 */
  if (!zf) goto L_90af53;
L_90af05: /* 90af05: mov dword ptr [eax + 0x10], ebx */
  W32((uint32_t)(eax + 0x10u), ebx);
/* 90af08: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 90af0b: mov dword ptr [eax + 0x10], edi */
  W32((uint32_t)(eax + 0x10u), edi);
/* 90af0e: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 90af11: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 90af13: mov esi, dword ptr [edx + 8] */
  esi = R32((uint32_t)(edx + 0x8u));
/* 90af16: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 90af18: mov esi, dword ptr [edx + 8] */
  esi = R32((uint32_t)(edx + 0x8u));
/* 90af1b: cmp esi, dword ptr [0xcf2e7c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0xcf2e7cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90af21: je 0x90af26 */
  if (zf) goto L_90af26;
L_90af23: /* 90af23: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
L_90af26: /* 90af26: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 90af29: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 90af2c: mov esi, dword ptr [ebp + 4] */
  esi = R32((uint32_t)(ebp + 0x4u));
/* 90af2f: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90af32: jne 0x90af39 */
  if (!zf) goto L_90af39;
L_90af34: /* 90af34: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 90af37: jmp 0x90af48 */
  goto L_90af48;
L_90af39: /* 90af39: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 90af3c: cmp eax, dword ptr [esi + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90af3f: jne 0x90af46 */
  if (!zf) goto L_90af46;
L_90af41: /* 90af41: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 90af44: jmp 0x90af48 */
  goto L_90af48;
L_90af46: /* 90af46: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
L_90af48: /* 90af48: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 90af4b: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 90af4e: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 90af51: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
L_90af53: /* 90af53: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 90af56: cmp dword ptr [edx + 0x10], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x10u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90af59: jne 0x90affb */
  if (!zf) goto L_90affb;
L_90af5f: /* 90af5f: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 90af61: cmp dword ptr [edx + 0x10], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x10u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90af64: jne 0x90affb */
  if (!zf) goto L_90affb;
L_90af6a: /* 90af6a: mov dword ptr [eax + 0x10], edi */
  W32((uint32_t)(eax + 0x10u), edi);
/* 90af6d: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 90af70: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 90af73: cmp ecx, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90af76: jne 0x90ae3f */
  if (!zf) goto L_90ae3f;
L_90af7c: /* 90af7c: jmp 0x90b09f */
  goto L_90b09f;
L_90af81: /* 90af81: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 90af84: cmp eax, dword ptr [esi + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90af87: jne 0x90af8e */
  if (!zf) goto L_90af8e;
L_90af89: /* 90af89: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 90af8c: jmp 0x90af90 */
  goto L_90af90;
L_90af8e: /* 90af8e: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
L_90af90: /* 90af90: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 90af93: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 90af96: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 90af99: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
L_90af9c: /* 90af9c: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 90af9f: mov edx, dword ptr [edx + 0x10] */
  edx = R32((uint32_t)(edx + 0x10u));
/* 90afa2: mov dword ptr [eax + 0x10], edx */
  W32((uint32_t)(eax + 0x10u), edx);
/* 90afa5: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 90afa8: mov dword ptr [edx + 0x10], ebx */
  W32((uint32_t)(edx + 0x10u), ebx);
/* 90afab: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 90afae: mov dword ptr [eax + 0x10], ebx */
  W32((uint32_t)(eax + 0x10u), ebx);
/* 90afb1: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 90afb4: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 90afb7: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 90afb9: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 90afbc: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 90afbe: cmp esi, dword ptr [0xcf2e7c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0xcf2e7cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90afc4: je 0x90afc9 */
  if (zf) goto L_90afc9;
L_90afc6: /* 90afc6: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
L_90afc9: /* 90afc9: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 90afcc: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 90afcf: mov esi, dword ptr [ebp + 4] */
  esi = R32((uint32_t)(ebp + 0x4u));
/* 90afd2: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90afd5: jne 0x90afe1 */
  if (!zf) goto L_90afe1;
L_90afd7: /* 90afd7: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 90afda: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 90afdc: jmp 0x90b09c */
  goto L_90b09c;
L_90afe1: /* 90afe1: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 90afe4: cmp eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90afe6: jne 0x90aff1 */
  if (!zf) goto L_90aff1;
L_90afe8: /* 90afe8: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 90afea: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 90afec: jmp 0x90b09c */
  goto L_90b09c;
L_90aff1: /* 90aff1: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 90aff4: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 90aff6: jmp 0x90b09c */
  goto L_90b09c;
L_90affb: /* 90affb: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 90affd: cmp dword ptr [edx + 0x10], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x10u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90b000: jne 0x90b04b */
  if (!zf) goto L_90b04b;
L_90b002: /* 90b002: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 90b005: mov dword ptr [edx + 0x10], ebx */
  W32((uint32_t)(edx + 0x10u), ebx);
/* 90b008: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 90b00b: mov dword ptr [eax + 0x10], edi */
  W32((uint32_t)(eax + 0x10u), edi);
/* 90b00e: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 90b010: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 90b013: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 90b015: cmp esi, dword ptr [0xcf2e7c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0xcf2e7cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90b01b: je 0x90b020 */
  if (zf) goto L_90b020;
L_90b01d: /* 90b01d: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
L_90b020: /* 90b020: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 90b023: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 90b026: mov esi, dword ptr [ebp + 4] */
  esi = R32((uint32_t)(ebp + 0x4u));
/* 90b029: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90b02c: jne 0x90b033 */
  if (!zf) goto L_90b033;
L_90b02e: /* 90b02e: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 90b031: jmp 0x90b041 */
  goto L_90b041;
L_90b033: /* 90b033: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 90b036: cmp eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90b038: jne 0x90b03e */
  if (!zf) goto L_90b03e;
L_90b03a: /* 90b03a: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 90b03c: jmp 0x90b041 */
  goto L_90b041;
L_90b03e: /* 90b03e: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
L_90b041: /* 90b041: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 90b043: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 90b046: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 90b049: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
L_90b04b: /* 90b04b: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 90b04e: mov edx, dword ptr [edx + 0x10] */
  edx = R32((uint32_t)(edx + 0x10u));
/* 90b051: mov dword ptr [eax + 0x10], edx */
  W32((uint32_t)(eax + 0x10u), edx);
/* 90b054: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 90b057: mov dword ptr [edx + 0x10], ebx */
  W32((uint32_t)(edx + 0x10u), ebx);
/* 90b05a: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 90b05c: mov dword ptr [eax + 0x10], ebx */
  W32((uint32_t)(eax + 0x10u), ebx);
/* 90b05f: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 90b062: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 90b064: mov esi, dword ptr [edx + 8] */
  esi = R32((uint32_t)(edx + 0x8u));
/* 90b067: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 90b069: mov esi, dword ptr [edx + 8] */
  esi = R32((uint32_t)(edx + 0x8u));
/* 90b06c: cmp esi, dword ptr [0xcf2e7c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0xcf2e7cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90b072: je 0x90b077 */
  if (zf) goto L_90b077;
L_90b074: /* 90b074: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
L_90b077: /* 90b077: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 90b07a: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 90b07d: mov esi, dword ptr [ebp + 4] */
  esi = R32((uint32_t)(ebp + 0x4u));
/* 90b080: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90b083: jne 0x90b08a */
  if (!zf) goto L_90b08a;
L_90b085: /* 90b085: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 90b088: jmp 0x90b099 */
  goto L_90b099;
L_90b08a: /* 90b08a: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 90b08d: cmp eax, dword ptr [esi + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90b090: jne 0x90b097 */
  if (!zf) goto L_90b097;
L_90b092: /* 90b092: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 90b095: jmp 0x90b099 */
  goto L_90b099;
L_90b097: /* 90b097: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
L_90b099: /* 90b099: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
L_90b09c: /* 90b09c: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
L_90b09f: /* 90b09f: mov dword ptr [ecx + 0x10], ebx */
  W32((uint32_t)(ecx + 0x10u), ebx);
L_90b0a2: /* 90b0a2: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 90b0a6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90b0a7: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x90b0acu); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 90b0ac: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 90b0af: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 90b0b3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90b0b6: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 90b0b7: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 90b0ba: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 90b0be: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90b0bf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90b0c0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 90b0c1: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 90b0c3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 90b0c4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 90b0c5: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90b0d0(void) {
  LOAD_REGS();
L_90b0d0: /* 90b0d0: mov eax, dword ptr [0xcf2e7c] */
  eax = R32((uint32_t)(0xcf2e7cu));
/* 90b0d5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90b0d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90b0d7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90b0d8: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 90b0dc: mov ebx, ecx */
  ebx = ecx;
/* 90b0de: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90b0e0: mov esi, edi */
  esi = edi;
/* 90b0e2: je 0x90b105 */
  if (zf) goto L_90b105;
L_90b0e4: /* 90b0e4: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 90b0e7: mov ecx, ebx */
  ecx = ebx;
/* 90b0e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90b0ea: call 0x90b0d0 */
  esp -= 4; W32(esp, 0x90b0efu); SPILL(); f_90b0d0(); if (g_unwind) return; RELOAD();
/* 90b0ef: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 90b0f1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90b0f2: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x90b0f7u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 90b0f7: mov eax, dword ptr [0xcf2e7c] */
  eax = R32((uint32_t)(0xcf2e7cu));
/* 90b0fc: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90b0ff: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90b101: mov edi, esi */
  edi = esi;
/* 90b103: jne 0x90b0e4 */
  if (!zf) goto L_90b0e4;
L_90b105: /* 90b105: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90b106: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90b107: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 90b108: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90b110(void) {
  LOAD_REGS();
L_90b110: /* 90b110: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90b111: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90b112: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90b113: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 90b115: mov esi, ecx */
  esi = ecx;
/* 90b117: call 0x6c242d */
  esp -= 4; W32(esp, 0x90b11cu); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 90b11c: xor ebx, ebx */
  ebx = 0;
/* 90b11e: mov dword ptr [eax + 0x10], 1 */
  W32((uint32_t)(eax + 0x10u), 0x1u);
/* 90b125: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 90b128: mov edx, dword ptr [0xcf2e7c] */
  edx = R32((uint32_t)(0xcf2e7cu));
/* 90b12e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90b131: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90b133: mov ecx, eax */
  ecx = eax;
/* 90b135: jne 0x90b148 */
  if (!zf) goto L_90b148;
L_90b137: /* 90b137: mov dword ptr [0xcf2e7c], eax */
  W32((uint32_t)(0xcf2e7cu), eax);
/* 90b13c: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 90b13e: mov eax, dword ptr [0xcf2e7c] */
  eax = R32((uint32_t)(0xcf2e7cu));
/* 90b143: xor ecx, ecx */
  ecx = 0;
/* 90b145: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
L_90b148: /* 90b148: mov edx, dword ptr [0xcf2e80] */
  edx = R32((uint32_t)(0xcf2e80u));
/* 90b14e: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 90b14f: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90b151: mov dword ptr [0xcf2e80], edx */
  W32((uint32_t)(0xcf2e80u), edx);
/* 90b157: je 0x90b162 */
  if (zf) goto L_90b162;
L_90b159: /* 90b159: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90b15a: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x90b15fu); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 90b15f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_90b162: /* 90b162: mov edi, dword ptr [0xcf2e7c] */
  edi = R32((uint32_t)(0xcf2e7cu));
/* 90b168: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 90b16a: call 0x6c242d */
  esp -= 4; W32(esp, 0x90b16fu); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 90b16f: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 90b172: mov dword ptr [eax + 0x10], ebx */
  W32((uint32_t)(eax + 0x10u), ebx);
/* 90b175: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 90b178: mov dword ptr [esi + 0xc], ebx */
  W32((uint32_t)(esi + 0xcu), ebx);
/* 90b17b: mov dword ptr [eax], eax */
  W32((uint32_t)(eax), eax);
/* 90b17d: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 90b180: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90b183: mov dword ptr [esi + 8], esi */
  W32((uint32_t)(esi + 0x8u), esi);
/* 90b186: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90b187: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90b188: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 90b189: ret  */
  esp += 4; SPILL(); return;
}

void f_90b190(void) {
  LOAD_REGS();
L_90b190: /* 90b190: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90b191: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 90b192: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90b193: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90b194: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 90b196: mov ebx, ecx */
  ebx = ecx;
/* 90b198: call 0x6c242d */
  esp -= 4; W32(esp, 0x90b19du); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 90b19d: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 90b1a1: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 90b1a5: mov ebp, eax */
  ebp = eax;
/* 90b1a7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90b1a8: mov dword ptr [ebp + 4], esi */
  W32((uint32_t)(ebp + 0x4u), esi);
/* 90b1ab: mov dword ptr [ebp + 0x10], 0 */
  W32((uint32_t)(ebp + 0x10u), 0x0u);
/* 90b1b2: mov eax, dword ptr [0xcf2e7c] */
  eax = R32((uint32_t)(0xcf2e7cu));
/* 90b1b7: lea edx, [ebp + 0xc] */
  edx = (uint32_t)(ebp + 0xcu);
/* 90b1ba: mov dword ptr [ebp], eax */
  W32((uint32_t)(ebp), eax);
/* 90b1bd: mov ecx, dword ptr [0xcf2e7c] */
  ecx = R32((uint32_t)(0xcf2e7cu));
/* 90b1c3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90b1c4: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 90b1c7: call 0x90b710 */
  esp -= 4; W32(esp, 0x90b1ccu); SPILL(); f_90b710(); if (g_unwind) return; RELOAD();
/* 90b1cc: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 90b1cf: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 90b1d2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90b1d5: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 90b1d6: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90b1d8: mov dword ptr [ebx + 0xc], ecx */
  W32((uint32_t)(ebx + 0xcu), ecx);
/* 90b1db: je 0x90b204 */
  if (zf) goto L_90b204;
L_90b1dd: /* 90b1dd: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 90b1e1: mov ecx, dword ptr [0xcf2e7c] */
  ecx = R32((uint32_t)(0xcf2e7cu));
/* 90b1e7: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90b1e9: jne 0x90b204 */
  if (!zf) goto L_90b204;
L_90b1eb: /* 90b1eb: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 90b1ed: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 90b1f0: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 90b1f2: jb 0x90b204 */
  if (cf) goto L_90b204;
L_90b1f4: /* 90b1f4: mov dword ptr [esi + 8], ebp */
  W32((uint32_t)(esi + 0x8u), ebp);
/* 90b1f7: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 90b1fa: cmp esi, dword ptr [eax + 8] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90b1fd: jne 0x90b21e */
  if (!zf) goto L_90b21e;
L_90b1ff: /* 90b1ff: mov dword ptr [eax + 8], ebp */
  W32((uint32_t)(eax + 0x8u), ebp);
/* 90b202: jmp 0x90b21e */
  goto L_90b21e;
L_90b204: /* 90b204: mov dword ptr [esi], ebp */
  W32((uint32_t)(esi), ebp);
/* 90b206: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 90b209: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90b20b: jne 0x90b218 */
  if (!zf) goto L_90b218;
L_90b20d: /* 90b20d: mov dword ptr [eax + 4], ebp */
  W32((uint32_t)(eax + 0x4u), ebp);
/* 90b210: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 90b213: mov dword ptr [edx + 8], ebp */
  W32((uint32_t)(edx + 0x8u), ebp);
/* 90b216: jmp 0x90b21e */
  goto L_90b21e;
L_90b218: /* 90b218: cmp esi, dword ptr [eax] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90b21a: jne 0x90b21e */
  if (!zf) goto L_90b21e;
L_90b21c: /* 90b21c: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
L_90b21e: /* 90b21e: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 90b221: mov eax, ebp */
  eax = ebp;
/* 90b223: cmp ebp, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90b226: je 0x90b3db */
  if (zf) goto L_90b3db;
L_90b22c: /* 90b22c: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 90b22f: xor edi, edi */
  edi = 0;
/* 90b231: cmp dword ptr [ecx + 0x10], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x10u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90b234: jne 0x90b3db */
  if (!zf) goto L_90b3db;
L_90b23a: /* 90b23a: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 90b23d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 90b23f: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90b241: jne 0x90b314 */
  if (!zf) goto L_90b314;
L_90b247: /* 90b247: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 90b24a: cmp dword ptr [edx + 0x10], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x10u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90b24d: jne 0x90b26e */
  if (!zf) goto L_90b26e;
L_90b24f: /* 90b24f: mov esi, 1 */
  esi = 0x1u;
/* 90b254: mov dword ptr [ecx + 0x10], esi */
  W32((uint32_t)(ecx + 0x10u), esi);
/* 90b257: mov dword ptr [edx + 0x10], esi */
  W32((uint32_t)(edx + 0x10u), esi);
/* 90b25a: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 90b25d: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 90b260: mov dword ptr [ecx + 0x10], edi */
  W32((uint32_t)(ecx + 0x10u), edi);
/* 90b263: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 90b266: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 90b269: jmp 0x90b3cf */
  goto L_90b3cf;
L_90b26e: /* 90b26e: cmp eax, dword ptr [ecx + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90b271: jne 0x90b2b0 */
  if (!zf) goto L_90b2b0;
L_90b273: /* 90b273: mov eax, ecx */
  eax = ecx;
/* 90b275: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 90b278: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 90b27a: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 90b27d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 90b27f: cmp edx, dword ptr [0xcf2e7c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(0xcf2e7cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90b285: je 0x90b28a */
  if (zf) goto L_90b28a;
L_90b287: /* 90b287: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
L_90b28a: /* 90b28a: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 90b28d: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 90b290: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 90b293: cmp eax, dword ptr [edx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90b296: jne 0x90b29d */
  if (!zf) goto L_90b29d;
L_90b298: /* 90b298: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 90b29b: jmp 0x90b2ab */
  goto L_90b2ab;
L_90b29d: /* 90b29d: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 90b2a0: cmp eax, dword ptr [edx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90b2a2: jne 0x90b2a8 */
  if (!zf) goto L_90b2a8;
L_90b2a4: /* 90b2a4: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 90b2a6: jmp 0x90b2ab */
  goto L_90b2ab;
L_90b2a8: /* 90b2a8: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
L_90b2ab: /* 90b2ab: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 90b2ad: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
L_90b2b0: /* 90b2b0: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 90b2b3: mov dword ptr [ecx + 0x10], 1 */
  W32((uint32_t)(ecx + 0x10u), 0x1u);
/* 90b2ba: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 90b2bd: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 90b2c0: mov dword ptr [ecx + 0x10], edi */
  W32((uint32_t)(ecx + 0x10u), edi);
/* 90b2c3: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 90b2c6: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 90b2c9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 90b2cb: mov esi, dword ptr [edx + 8] */
  esi = R32((uint32_t)(edx + 0x8u));
/* 90b2ce: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 90b2d0: mov esi, dword ptr [edx + 8] */
  esi = R32((uint32_t)(edx + 0x8u));
/* 90b2d3: cmp esi, dword ptr [0xcf2e7c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0xcf2e7cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90b2d9: je 0x90b2de */
  if (zf) goto L_90b2de;
L_90b2db: /* 90b2db: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
L_90b2de: /* 90b2de: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 90b2e1: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 90b2e4: mov esi, dword ptr [ebx + 4] */
  esi = R32((uint32_t)(ebx + 0x4u));
/* 90b2e7: cmp ecx, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90b2ea: jne 0x90b2f7 */
  if (!zf) goto L_90b2f7;
L_90b2ec: /* 90b2ec: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 90b2ef: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 90b2f2: jmp 0x90b3cc */
  goto L_90b3cc;
L_90b2f7: /* 90b2f7: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 90b2fa: cmp ecx, dword ptr [esi + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90b2fd: jne 0x90b30a */
  if (!zf) goto L_90b30a;
L_90b2ff: /* 90b2ff: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 90b302: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 90b305: jmp 0x90b3cc */
  goto L_90b3cc;
L_90b30a: /* 90b30a: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 90b30c: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 90b30f: jmp 0x90b3cc */
  goto L_90b3cc;
L_90b314: /* 90b314: cmp dword ptr [edx + 0x10], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x10u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90b317: jne 0x90b338 */
  if (!zf) goto L_90b338;
L_90b319: /* 90b319: mov esi, 1 */
  esi = 0x1u;
/* 90b31e: mov dword ptr [ecx + 0x10], esi */
  W32((uint32_t)(ecx + 0x10u), esi);
/* 90b321: mov dword ptr [edx + 0x10], esi */
  W32((uint32_t)(edx + 0x10u), esi);
/* 90b324: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 90b327: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 90b32a: mov dword ptr [edx + 0x10], edi */
  W32((uint32_t)(edx + 0x10u), edi);
/* 90b32d: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 90b330: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 90b333: jmp 0x90b3cf */
  goto L_90b3cf;
L_90b338: /* 90b338: cmp eax, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90b33a: jne 0x90b37b */
  if (!zf) goto L_90b37b;
L_90b33c: /* 90b33c: mov eax, ecx */
  eax = ecx;
/* 90b33e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 90b340: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 90b343: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 90b345: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 90b348: cmp edx, dword ptr [0xcf2e7c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(0xcf2e7cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90b34e: je 0x90b353 */
  if (zf) goto L_90b353;
L_90b350: /* 90b350: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
L_90b353: /* 90b353: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 90b356: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 90b359: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 90b35c: cmp eax, dword ptr [edx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90b35f: jne 0x90b366 */
  if (!zf) goto L_90b366;
L_90b361: /* 90b361: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 90b364: jmp 0x90b375 */
  goto L_90b375;
L_90b366: /* 90b366: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 90b369: cmp eax, dword ptr [edx + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90b36c: jne 0x90b373 */
  if (!zf) goto L_90b373;
L_90b36e: /* 90b36e: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 90b371: jmp 0x90b375 */
  goto L_90b375;
L_90b373: /* 90b373: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
L_90b375: /* 90b375: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 90b378: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
L_90b37b: /* 90b37b: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 90b37e: mov dword ptr [ecx + 0x10], 1 */
  W32((uint32_t)(ecx + 0x10u), 0x1u);
/* 90b385: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 90b388: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 90b38b: mov dword ptr [ecx + 0x10], edi */
  W32((uint32_t)(ecx + 0x10u), edi);
/* 90b38e: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 90b391: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 90b394: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 90b397: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 90b399: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 90b39c: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 90b39e: cmp esi, dword ptr [0xcf2e7c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0xcf2e7cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90b3a4: je 0x90b3a9 */
  if (zf) goto L_90b3a9;
L_90b3a6: /* 90b3a6: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
L_90b3a9: /* 90b3a9: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 90b3ac: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 90b3af: mov esi, dword ptr [ebx + 4] */
  esi = R32((uint32_t)(ebx + 0x4u));
/* 90b3b2: cmp ecx, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90b3b5: jne 0x90b3bc */
  if (!zf) goto L_90b3bc;
L_90b3b7: /* 90b3b7: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 90b3ba: jmp 0x90b3ca */
  goto L_90b3ca;
L_90b3bc: /* 90b3bc: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 90b3bf: cmp ecx, dword ptr [esi] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90b3c1: jne 0x90b3c7 */
  if (!zf) goto L_90b3c7;
L_90b3c3: /* 90b3c3: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 90b3c5: jmp 0x90b3ca */
  goto L_90b3ca;
L_90b3c7: /* 90b3c7: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
L_90b3ca: /* 90b3ca: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
L_90b3cc: /* 90b3cc: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
L_90b3cf: /* 90b3cf: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 90b3d2: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90b3d5: jne 0x90b22c */
  if (!zf) goto L_90b22c;
L_90b3db: /* 90b3db: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 90b3de: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90b3df: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90b3e0: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 90b3e3: mov dword ptr [eax + 0x10], 1 */
  W32((uint32_t)(eax + 0x10u), 0x1u);
/* 90b3ea: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 90b3ee: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
/* 90b3f0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 90b3f1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 90b3f2: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_90b400(void) {
  LOAD_REGS();
L_90b400: /* 90b400: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 90b404: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 90b406: jbe 0x90b422 */
  if ((cf | zf)) goto L_90b422;
L_90b408: /* 90b408: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 90b40c: mov ecx, eax */
  ecx = eax;
/* 90b40e: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90b412: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
L_90b413: /* 90b413: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90b415: je 0x90b41b */
  if (zf) goto L_90b41b;
L_90b417: /* 90b417: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 90b419: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
L_90b41b: /* 90b41b: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90b41e: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 90b41f: jne 0x90b413 */
  if (!zf) goto L_90b413;
L_90b421: /* 90b421: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_90b422: /* 90b422: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_90b430(void) {
  LOAD_REGS();
L_90b430: /* 90b430: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 90b434: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 90b438: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 90b43c: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90b43e: je 0x90b454 */
  if (zf) goto L_90b454;
L_90b440: /* 90b440: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
L_90b441: /* 90b441: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90b443: je 0x90b449 */
  if (zf) goto L_90b449;
L_90b445: /* 90b445: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 90b447: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
L_90b449: /* 90b449: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 90b44c: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90b44f: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90b451: jne 0x90b441 */
  if (!zf) goto L_90b441;
L_90b453: /* 90b453: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_90b454: /* 90b454: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_90b460(void) {
  LOAD_REGS();
L_90b460: /* 90b460: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 90b464: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 90b466: jbe 0x90b482 */
  if ((cf | zf)) goto L_90b482;
L_90b468: /* 90b468: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 90b46c: mov ecx, eax */
  ecx = eax;
/* 90b46e: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90b472: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
L_90b473: /* 90b473: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90b475: je 0x90b47b */
  if (zf) goto L_90b47b;
L_90b477: /* 90b477: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 90b479: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
L_90b47b: /* 90b47b: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90b47e: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 90b47f: jne 0x90b473 */
  if (!zf) goto L_90b473;
L_90b481: /* 90b481: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_90b482: /* 90b482: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_90b490(void) {
  LOAD_REGS();
L_90b490: /* 90b490: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90b4a0(void) {
  LOAD_REGS();
L_90b4a0: /* 90b4a0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 90b4a4: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 90b4a8: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 90b4ac: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90b4ae: je 0x90b4c4 */
  if (zf) goto L_90b4c4;
L_90b4b0: /* 90b4b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
L_90b4b1: /* 90b4b1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90b4b3: je 0x90b4b9 */
  if (zf) goto L_90b4b9;
L_90b4b5: /* 90b4b5: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 90b4b7: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
L_90b4b9: /* 90b4b9: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 90b4bc: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90b4bf: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90b4c1: jne 0x90b4b1 */
  if (!zf) goto L_90b4b1;
L_90b4c3: /* 90b4c3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_90b4c4: /* 90b4c4: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_90b4d0(void) {
  LOAD_REGS();
L_90b4d0: /* 90b4d0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 90b4d4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 90b4d6: jbe 0x90b4f2 */
  if ((cf | zf)) goto L_90b4f2;
L_90b4d8: /* 90b4d8: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 90b4dc: mov ecx, eax */
  ecx = eax;
/* 90b4de: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90b4e2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
L_90b4e3: /* 90b4e3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90b4e5: je 0x90b4eb */
  if (zf) goto L_90b4eb;
L_90b4e7: /* 90b4e7: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 90b4e9: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
L_90b4eb: /* 90b4eb: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90b4ee: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 90b4ef: jne 0x90b4e3 */
  if (!zf) goto L_90b4e3;
L_90b4f1: /* 90b4f1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_90b4f2: /* 90b4f2: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_90b500(void) {
  LOAD_REGS();
L_90b500: /* 90b500: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 90b504: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90b505: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
/* 90b508: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 90b50a: mov dword ptr [edx + 8], esi */
  W32((uint32_t)(edx + 0x8u), esi);
/* 90b50d: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 90b50f: cmp esi, dword ptr [0xcf2e7c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0xcf2e7cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90b515: je 0x90b51a */
  if (zf) goto L_90b51a;
L_90b517: /* 90b517: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
L_90b51a: /* 90b51a: mov esi, dword ptr [edx + 4] */
  esi = R32((uint32_t)(edx + 0x4u));
/* 90b51d: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 90b520: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 90b523: cmp edx, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90b526: jne 0x90b534 */
  if (!zf) goto L_90b534;
L_90b528: /* 90b528: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 90b52b: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 90b52d: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 90b530: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90b531: ret 4 */
  esp += 8; SPILL(); return;
L_90b534: /* 90b534: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 90b537: cmp edx, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90b539: jne 0x90b546 */
  if (!zf) goto L_90b546;
L_90b53b: /* 90b53b: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 90b53d: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 90b53f: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 90b542: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90b543: ret 4 */
  esp += 8; SPILL(); return;
L_90b546: /* 90b546: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 90b549: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 90b54b: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 90b54e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90b54f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90b560(void) {
  LOAD_REGS();
L_90b560: /* 90b560: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90b564: mov edx, dword ptr [0xcf2e7c] */
  edx = R32((uint32_t)(0xcf2e7cu));
/* 90b56a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 90b56c: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90b56e: je 0x90b578 */
  if (zf) goto L_90b578;
L_90b570: /* 90b570: mov eax, ecx */
  eax = ecx;
/* 90b572: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 90b574: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90b576: jne 0x90b570 */
  if (!zf) goto L_90b570;
L_90b578: /* 90b578: ret  */
  esp += 4; SPILL(); return;
}

void f_90b580(void) {
  LOAD_REGS();
L_90b580: /* 90b580: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 90b584: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90b585: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 90b587: mov esi, dword ptr [eax + 8] */
  esi = R32((uint32_t)(eax + 0x8u));
/* 90b58a: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 90b58c: mov esi, dword ptr [eax + 8] */
  esi = R32((uint32_t)(eax + 0x8u));
/* 90b58f: cmp esi, dword ptr [0xcf2e7c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0xcf2e7cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90b595: je 0x90b59a */
  if (zf) goto L_90b59a;
L_90b597: /* 90b597: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
L_90b59a: /* 90b59a: mov esi, dword ptr [edx + 4] */
  esi = R32((uint32_t)(edx + 0x4u));
/* 90b59d: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 90b5a0: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 90b5a3: cmp edx, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90b5a6: jne 0x90b5b5 */
  if (!zf) goto L_90b5b5;
L_90b5a8: /* 90b5a8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 90b5ab: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 90b5ae: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 90b5b1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90b5b2: ret 4 */
  esp += 8; SPILL(); return;
L_90b5b5: /* 90b5b5: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 90b5b8: cmp edx, dword ptr [ecx + 8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90b5bb: jne 0x90b5ca */
  if (!zf) goto L_90b5ca;
L_90b5bd: /* 90b5bd: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 90b5c0: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 90b5c3: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 90b5c6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90b5c7: ret 4 */
  esp += 8; SPILL(); return;
L_90b5ca: /* 90b5ca: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 90b5cc: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 90b5cf: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 90b5d2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90b5d3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90b5e0(void) {
  LOAD_REGS();
L_90b5e0: /* 90b5e0: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 90b5e2: call 0x6c242d */
  esp -= 4; W32(esp, 0x90b5e7u); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 90b5e7: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 90b5eb: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 90b5ef: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90b5f2: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 90b5f5: mov dword ptr [eax + 0x10], edx */
  W32((uint32_t)(eax + 0x10u), edx);
/* 90b5f8: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90b600(void) {
  LOAD_REGS();
L_90b600: /* 90b600: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 90b602: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90b603: mov edx, dword ptr [eax + 0x10] */
  edx = R32((uint32_t)(eax + 0x10u));
/* 90b606: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90b608: jne 0x90b619 */
  if (!zf) goto L_90b619;
L_90b60a: /* 90b60a: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 90b60d: cmp dword ptr [edx + 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90b610: jne 0x90b619 */
  if (!zf) goto L_90b619;
L_90b612: /* 90b612: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 90b615: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90b616: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 90b618: ret  */
  esp += 4; SPILL(); return;
L_90b619: /* 90b619: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 90b61b: mov esi, dword ptr [0xcf2e7c] */
  esi = R32((uint32_t)(0xcf2e7cu));
/* 90b621: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90b623: je 0x90b639 */
  if (zf) goto L_90b639;
L_90b625: /* 90b625: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
/* 90b628: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90b62a: je 0x90b635 */
  if (zf) goto L_90b635;
L_90b62c: /* 90b62c: mov edx, eax */
  edx = eax;
/* 90b62e: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
/* 90b631: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90b633: jne 0x90b62c */
  if (!zf) goto L_90b62c;
L_90b635: /* 90b635: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 90b637: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90b638: ret  */
  esp += 4; SPILL(); return;
L_90b639: /* 90b639: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 90b63c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 90b63e: cmp edx, dword ptr [eax] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90b640: jne 0x90b64d */
  if (!zf) goto L_90b64d;
L_90b642: /* 90b642: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 90b644: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 90b647: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 90b649: cmp edx, dword ptr [eax] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90b64b: je 0x90b642 */
  if (zf) goto L_90b642;
L_90b64d: /* 90b64d: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 90b64f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90b650: ret  */
  esp += 4; SPILL(); return;
}

void f_90b660(void) {
  LOAD_REGS();
L_90b660: /* 90b660: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 90b662: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90b663: mov esi, dword ptr [0xcf2e7c] */
  esi = R32((uint32_t)(0xcf2e7cu));
/* 90b669: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 90b66c: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90b66e: je 0x90b682 */
  if (zf) goto L_90b682;
L_90b670: /* 90b670: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 90b672: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90b674: je 0x90b67e */
  if (zf) goto L_90b67e;
L_90b676: /* 90b676: mov edx, eax */
  edx = eax;
/* 90b678: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 90b67a: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90b67c: jne 0x90b676 */
  if (!zf) goto L_90b676;
L_90b67e: /* 90b67e: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 90b680: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90b681: ret  */
  esp += 4; SPILL(); return;
L_90b682: /* 90b682: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 90b685: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 90b687: cmp edx, dword ptr [eax + 8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90b68a: jne 0x90b698 */
  if (!zf) goto L_90b698;
L_90b68c: /* 90b68c: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 90b68e: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 90b691: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 90b693: cmp edx, dword ptr [eax + 8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90b696: je 0x90b68c */
  if (zf) goto L_90b68c;
L_90b698: /* 90b698: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 90b69a: cmp dword ptr [edx + 8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90b69d: je 0x90b6a1 */
  if (zf) goto L_90b6a1;
L_90b69f: /* 90b69f: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
L_90b6a1: /* 90b6a1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90b6a2: ret  */
  esp += 4; SPILL(); return;
}

void f_90b6b0(void) {
  LOAD_REGS();
L_90b6b0: /* 90b6b0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 90b6b4: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 90b6b8: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 90b6bc: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90b6be: je 0x90b6d2 */
  if (zf) goto L_90b6d2;
L_90b6c0: /* 90b6c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
L_90b6c1: /* 90b6c1: mov si, word ptr [ecx] */
  esi = (esi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* 90b6c4: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 90b6c7: mov word ptr [eax], si */
  W16((uint32_t)(eax), (esi & 0xffffu));
/* 90b6ca: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90b6cd: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90b6cf: jne 0x90b6c1 */
  if (!zf) goto L_90b6c1;
L_90b6d1: /* 90b6d1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_90b6d2: /* 90b6d2: ret  */
  esp += 4; SPILL(); return;
}

void f_90b6e0(void) {
  LOAD_REGS();
L_90b6e0: /* 90b6e0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 90b6e4: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 90b6e8: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 90b6ec: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90b6ee: je 0x90b700 */
  if (zf) goto L_90b700;
L_90b6f0: /* 90b6f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
L_90b6f1: /* 90b6f1: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 90b6f3: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 90b6f6: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 90b6f8: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90b6fb: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90b6fd: jne 0x90b6f1 */
  if (!zf) goto L_90b6f1;
L_90b6ff: /* 90b6ff: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_90b700: /* 90b700: ret  */
  esp += 4; SPILL(); return;
}

void f_90b710(void) {
  LOAD_REGS();
L_90b710: /* 90b710: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90b714: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90b716: je 0x90b720 */
  if (zf) goto L_90b720;
L_90b718: /* 90b718: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 90b71c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 90b71e: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
L_90b720: /* 90b720: ret  */
  esp += 4; SPILL(); return;
}

void f_90b730(void) {
  LOAD_REGS();
L_90b730: /* 90b730: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90b734: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90b736: je 0x90b742 */
  if (zf) goto L_90b742;
L_90b738: /* 90b738: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 90b73c: mov dx, word ptr [ecx] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* 90b73f: mov word ptr [eax], dx */
  W16((uint32_t)(eax), (edx & 0xffffu));
L_90b742: /* 90b742: ret  */
  esp += 4; SPILL(); return;
}

void f_90b750(void) {
  LOAD_REGS();
L_90b750: /* 90b750: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90b754: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90b756: je 0x90b760 */
  if (zf) goto L_90b760;
L_90b758: /* 90b758: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 90b75c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 90b75e: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
L_90b760: /* 90b760: ret  */
  esp += 4; SPILL(); return;
}

void f_90b770(void) {
  LOAD_REGS();
L_90b770: /* 90b770: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90b774: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90b776: je 0x90b780 */
  if (zf) goto L_90b780;
L_90b778: /* 90b778: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 90b77c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 90b77e: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
L_90b780: /* 90b780: ret  */
  esp += 4; SPILL(); return;
}

void f_90b790(void) {
  LOAD_REGS();
L_90b790: /* 90b790: jmp dword ptr [0xcfafa8] */
  SPILL(); f_d511e5(); return; /* EngineEx!?Bink_Manager_Tick@@YAXXZ */
}

void f_90b796(void) {
  LOAD_REGS();
L_90b796: /* 90b796: jmp dword ptr [0xcfafa4] */
  SPILL(); f_d5181b(); return; /* EngineEx!?Bink_Manager_Is_Playing@@YA_NXZ */
}

void f_90b79c(void) {
  LOAD_REGS();
L_90b79c: /* 90b79c: jmp dword ptr [0xcfafa0] */
  SPILL(); f_d51587(); return; /* EngineEx!?ContainerManager_Close_Container@@YA_NXZ */
}

void f_90b7a2(void) {
  LOAD_REGS();
L_90b7a2: /* 90b7a2: jmp dword ptr [0xcfaf9c] */
  SPILL(); f_d5140b(); return; /* EngineEx!?ContainerManager_Open_Container@@YA_NH_N@Z */
}

void f_90b7a8(void) {
  LOAD_REGS();
L_90b7a8: /* 90b7a8: jmp dword ptr [0xcfaf98] */
  SPILL(); f_d5105f(); return; /* EngineEx!?ContainerManager_Get_Container_Path@@YAPBDH@Z */
}

void f_90b7ae(void) {
  LOAD_REGS();
L_90b7ae: /* 90b7ae: jmp dword ptr [0xcfaf94] */
  SPILL(); f_d519ec(); return; /* EngineEx!?ContainerManager_Set_Container_Meta@@YAXHPAD0@Z */
}

void f_90b7b4(void) {
  LOAD_REGS();
L_90b7b4: /* 90b7b4: jmp dword ptr [0xcfaf90] */
  SPILL(); f_d5116d(); return; /* EngineEx!?ContainerManager_Create_Container@@YAHPAD0_N@Z */
}

void f_90b7ba(void) {
  LOAD_REGS();
L_90b7ba: /* 90b7ba: jmp dword ptr [0xcfaf8c] */
  SPILL(); f_d51b77(); return; /* EngineEx!?ContainerManager_Delete_Container@@YA_NH@Z */
}

void f_90b7c0(void) {
  LOAD_REGS();
L_90b7c0: /* 90b7c0: jmp dword ptr [0xcfaf88] */
  SPILL(); f_d513bb(); return; /* EngineEx!?ContainerManager_Filtered_To_Real_Index@@YAHH@Z */
}

void f_90b7c6(void) {
  LOAD_REGS();
L_90b7c6: /* 90b7c6: jmp dword ptr [0xcfaf84] */
  SPILL(); f_d5148d(); return; /* EngineEx!?ContainerManager_Filter_Containers@@YAXPAD0@Z */
}

void f_90b7cc(void) {
  LOAD_REGS();
L_90b7cc: /* 90b7cc: jmp dword ptr [0xcfaf80] */
  SPILL(); f_d511f4(); return; /* EngineEx!?ContainerManager_Get_Num_Filtered_Containers@@YAHXZ */
}

void f_90b7e0(void) {
  LOAD_REGS();
L_90b7e0: /* 90b7e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90b7e1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 90b7e5: lea eax, [esi + 0xfc] */
  eax = (uint32_t)(esi + 0xfcu);
/* 90b7eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90b7ec: call dword ptr [0xb02214] */
  { uint32_t t = R32((uint32_t)(0xb02214u)); esp -= 4; W32(esp, 0x90b7f2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 90b7f2: xor ecx, ecx */
  ecx = 0;
/* 90b7f4: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90b7f6: jne 0x90b7fe */
  if (!zf) goto L_90b7fe;
L_90b7f8: /* 90b7f8: xor eax, eax */
  eax = 0;
/* 90b7fa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90b7fb: ret 4 */
  esp += 8; SPILL(); return;
L_90b7fe: /* 90b7fe: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 90b800: mov dword ptr [eax + 0x58], ecx */
  W32((uint32_t)(eax + 0x58u), ecx);
/* 90b803: mov dword ptr [eax + 0x54], ecx */
  W32((uint32_t)(eax + 0x54u), ecx);
/* 90b806: mov dword ptr [eax + 0x60], ecx */
  W32((uint32_t)(eax + 0x60u), ecx);
/* 90b809: mov dword ptr [eax + 0x64], ecx */
  W32((uint32_t)(eax + 0x64u), ecx);
/* 90b80c: mov dword ptr [eax + 0x5c], ecx */
  W32((uint32_t)(eax + 0x5cu), ecx);
/* 90b80f: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 90b812: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90b813: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90b820(void) {
  LOAD_REGS();
L_90b820: /* 90b820: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90b821: xor eax, eax */
  eax = 0;
/* 90b823: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90b824: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 90b828: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 90b82b: mov dword ptr [esi + 0xb8], ecx */
  W32((uint32_t)(esi + 0xb8u), ecx);
/* 90b831: mov dword ptr [esi + 0xb4], ecx */
  W32((uint32_t)(esi + 0xb4u), ecx);
/* 90b837: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90b838: mov dword ptr [esi + 0x5c], eax */
  W32((uint32_t)(esi + 0x5cu), eax);
/* 90b83b: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* 90b83e: lea ecx, [esi + 0x88] */
  ecx = (uint32_t)(esi + 0x88u);
/* 90b844: mov edx, 4 */
  edx = 0x4u;
/* 90b849: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_90b850: /* 90b850: mov dword ptr [ecx - 0x20], eax */
  W32((uint32_t)(ecx + 0xffffffe0u), eax);
/* 90b853: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 90b855: mov dword ptr [ecx - 0x10], eax */
  W32((uint32_t)(ecx + 0xfffffff0u), eax);
/* 90b858: mov dword ptr [ecx + 0x10], eax */
  W32((uint32_t)(ecx + 0x10u), eax);
/* 90b85b: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 90b85e: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 90b85f: jne 0x90b850 */
  if (!zf) goto L_90b850;
L_90b861: /* 90b861: lea ecx, [esi + 0x13c] */
  ecx = (uint32_t)(esi + 0x13cu);
/* 90b867: mov edx, 3 */
  edx = 0x3u;
/* 90b86c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_90b870: /* 90b870: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 90b873: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 90b875: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 90b878: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 90b879: jne 0x90b870 */
  if (!zf) goto L_90b870;
L_90b87b: /* 90b87b: mov dword ptr [esi + 0xc0], eax */
  W32((uint32_t)(esi + 0xc0u), eax);
/* 90b881: mov dword ptr [esi + 0xc4], eax */
  W32((uint32_t)(esi + 0xc4u), eax);
/* 90b887: mov dword ptr [esi + 0xc8], eax */
  W32((uint32_t)(esi + 0xc8u), eax);
/* 90b88d: mov dword ptr [esi + 0xcc], eax */
  W32((uint32_t)(esi + 0xccu), eax);
/* 90b893: mov dword ptr [esi + 0xd4], eax */
  W32((uint32_t)(esi + 0xd4u), eax);
/* 90b899: mov dword ptr [esi + 0xd8], eax */
  W32((uint32_t)(esi + 0xd8u), eax);
/* 90b89f: mov dword ptr [esi + 0xdc], eax */
  W32((uint32_t)(esi + 0xdcu), eax);
/* 90b8a5: mov dword ptr [esi + 0xe0], eax */
  W32((uint32_t)(esi + 0xe0u), eax);
/* 90b8ab: mov dword ptr [esi + 0xe8], eax */
  W32((uint32_t)(esi + 0xe8u), eax);
/* 90b8b1: mov dword ptr [esi + 0xec], eax */
  W32((uint32_t)(esi + 0xecu), eax);
/* 90b8b7: mov dword ptr [esi + 0xf0], eax */
  W32((uint32_t)(esi + 0xf0u), eax);
/* 90b8bd: mov dword ptr [esi + 0xf4], eax */
  W32((uint32_t)(esi + 0xf4u), eax);
/* 90b8c3: mov ecx, 0x3f800000 */
  ecx = 0x3f800000u;
/* 90b8c8: mov dword ptr [esi + 0xbc], ecx */
  W32((uint32_t)(esi + 0xbcu), ecx);
/* 90b8ce: mov dword ptr [esi + 0xd0], ecx */
  W32((uint32_t)(esi + 0xd0u), ecx);
/* 90b8d4: mov dword ptr [esi + 0xe4], ecx */
  W32((uint32_t)(esi + 0xe4u), ecx);
/* 90b8da: mov dword ptr [esi + 0xf8], ecx */
  W32((uint32_t)(esi + 0xf8u), ecx);
/* 90b8e0: mov dword ptr [esi + 0xfc], ecx */
  W32((uint32_t)(esi + 0xfcu), ecx);
/* 90b8e6: mov dword ptr [esi + 0x110], ecx */
  W32((uint32_t)(esi + 0x110u), ecx);
/* 90b8ec: mov dword ptr [esi + 0x124], ecx */
  W32((uint32_t)(esi + 0x124u), ecx);
/* 90b8f2: mov dword ptr [esi + 0x138], ecx */
  W32((uint32_t)(esi + 0x138u), ecx);
/* 90b8f8: mov dword ptr [esi + 0x100], eax */
  W32((uint32_t)(esi + 0x100u), eax);
/* 90b8fe: mov dword ptr [esi + 0x104], eax */
  W32((uint32_t)(esi + 0x104u), eax);
/* 90b904: mov dword ptr [esi + 0x108], eax */
  W32((uint32_t)(esi + 0x108u), eax);
/* 90b90a: mov dword ptr [esi + 0x10c], eax */
  W32((uint32_t)(esi + 0x10cu), eax);
/* 90b910: mov dword ptr [esi + 0x114], eax */
  W32((uint32_t)(esi + 0x114u), eax);
/* 90b916: mov dword ptr [esi + 0x118], eax */
  W32((uint32_t)(esi + 0x118u), eax);
/* 90b91c: mov dword ptr [esi + 0x11c], eax */
  W32((uint32_t)(esi + 0x11cu), eax);
/* 90b922: mov dword ptr [esi + 0x120], eax */
  W32((uint32_t)(esi + 0x120u), eax);
/* 90b928: mov dword ptr [esi + 0x128], eax */
  W32((uint32_t)(esi + 0x128u), eax);
/* 90b92e: mov dword ptr [esi + 0x12c], eax */
  W32((uint32_t)(esi + 0x12cu), eax);
/* 90b934: mov dword ptr [esi + 0x130], eax */
  W32((uint32_t)(esi + 0x130u), eax);
/* 90b93a: mov dword ptr [esi + 0x134], eax */
  W32((uint32_t)(esi + 0x134u), eax);
/* 90b940: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 90b943: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90b944: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 90b947: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90b948: call 0x9728e0 */
  esp -= 4; W32(esp, 0x90b94du); SPILL(); f_9728e0(); if (g_unwind) return; RELOAD();
/* 90b94d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90b950: mov dword ptr [esi + 0x1c], esi */
  W32((uint32_t)(esi + 0x1cu), esi);
/* 90b953: lea edi, [esi + 0x34] */
  edi = (uint32_t)(esi + 0x34u);
/* 90b956: mov ebx, 2 */
  ebx = 0x2u;
/* 90b95b: nop  */
/* 90b95c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_90b960: /* 90b960: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 90b963: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90b964: lea eax, [edi - 0x14] */
  eax = (uint32_t)(edi + 0xffffffecu);
/* 90b967: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90b968: call 0x9728e0 */
  esp -= 4; W32(esp, 0x90b96du); SPILL(); f_9728e0(); if (g_unwind) return; RELOAD();
/* 90b96d: mov dword ptr [edi], esi */
  W32((uint32_t)(edi), esi);
/* 90b96f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90b972: add edi, 0x18 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 90b975: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* 90b976: jne 0x90b960 */
  if (!zf) goto L_90b960;
L_90b978: /* 90b978: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90b979: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90b97a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 90b97b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90b980(void) {
  LOAD_REGS();
L_90b980: /* 90b980: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90b981: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 90b985: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90b986: call 0x90bd20 */
  esp -= 4; W32(esp, 0x90b98bu); SPILL(); f_90bd20(); if (g_unwind) return; RELOAD();
/* 90b98b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90b98d: jne 0x90b99d */
  if (!zf) goto L_90b99d;
L_90b98f: /* 90b98f: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 90b993: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 90b997: mov dword ptr [esi + 0x54], eax */
  W32((uint32_t)(esi + 0x54u), eax);
/* 90b99a: mov dword ptr [esi + 0x58], ecx */
  W32((uint32_t)(esi + 0x58u), ecx);
L_90b99d: /* 90b99d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90b99e: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_90b9b0(void) {
  LOAD_REGS();
L_90b9b0: /* 90b9b0: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 90b9b3: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 90b9b7: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 90b9bb: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 90b9bf: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 90b9c3: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 90b9c7: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 90b9cb: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 90b9cf: mov dword ptr [esp], eax */
  W32((uint32_t)(esp), eax);
/* 90b9d3: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 90b9d5: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 90b9d7: mov dword ptr [esp + 4], ecx */
  W32((uint32_t)(esp + 0x4u), ecx);
/* 90b9db: mov dword ptr [esp + 8], edx */
  W32((uint32_t)(esp + 0x8u), edx);
/* 90b9df: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90b9e1: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 90b9e3: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 90b9e5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90b9e7: fsub dword ptr [0x9f48a0] */
  ST0 = ST0 - (F32((uint32_t)(0x9f48a0u)));
/* 90b9ed: fabs  */
  ST0 = fabs(ST0);
/* 90b9ef: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 90b9f1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 90b9f3: fcomp dword ptr [0xa0892c] */
  fpu_com(ST0, F32((uint32_t)(0xa0892cu)));
  FPOP();
/* 90b9f9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 90b9fb: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 90b9fe: jnp 0x90ba67 */
  if (!pf) goto L_90ba67;
L_90ba00: /* 90ba00: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 90ba06: xor eax, eax */
  eax = 0;
L_90ba08: /* 90ba08: fld dword ptr [esp + eax*4] */
  { double v = F32((uint32_t)(esp + eax*4)); FPUSH(v); }
/* 90ba0c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 90ba0d: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 90ba10: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 90ba12: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 90ba14: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 90ba16: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 90ba18: jl 0x90ba08 */
  if ((sf != of)) goto L_90ba08;
L_90ba1a: /* 90ba1a: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 90ba20: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 90ba22: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 90ba25: jne 0x90ba4d */
  if (!zf) goto L_90ba4d;
L_90ba27: /* 90ba27: fsqrt  */
  ST0 = sqrt(ST0);
/* 90ba29: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 90ba2f: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 90ba33: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 90ba35: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 90ba39: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 90ba3d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 90ba3f: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 90ba43: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 90ba47: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 90ba4b: jmp 0x90ba67 */
  goto L_90ba67;
L_90ba4d: /* 90ba4d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 90ba4f: mov dword ptr [esp], 0x3f800000 */
  W32((uint32_t)(esp), 0x3f800000u);
/* 90ba57: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 90ba5f: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
L_90ba67: /* 90ba67: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 90ba6b: fabs  */
  ST0 = fabs(ST0);
/* 90ba6d: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 90ba71: fabs  */
  ST0 = fabs(ST0);
/* 90ba73: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 90ba75: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 90ba77: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 90ba79: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 90ba7d: fmul dword ptr [esp + 8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x8u)));
/* 90ba81: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 90ba83: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 90ba86: jp 0x90bae0 */
  if (pf) goto L_90bae0;
L_90ba88: /* 90ba88: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 90ba8c: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 90ba94: fmul dword ptr [esp] */
  ST0 = ST0 * (F32((uint32_t)(esp)));
/* 90ba98: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90ba9a: fsqrt  */
  ST0 = sqrt(ST0);
/* 90ba9c: fdivr qword ptr [0xa0da58] */
  ST0 = (F64((uint32_t)(0xa0da58u))) / ST0;
/* 90baa2: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 90baa6: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 90baa8: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 90baac: fmul dword ptr [esp] */
  ST0 = ST0 * (F32((uint32_t)(esp)));
/* 90bab0: fchs  */
  ST0 = -ST0;
/* 90bab2: fst dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0);
/* 90bab6: fmul dword ptr [esp + 4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4u)));
/* 90baba: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 90babe: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 90bac2: fmul dword ptr [esp + 8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x8u)));
/* 90bac6: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 90baca: fmul dword ptr [esp] */
  ST0 = ST0 * (F32((uint32_t)(esp)));
/* 90bace: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 90bad0: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 90bad4: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 90bad8: fmul dword ptr [esp + 4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4u)));
/* 90badc: fchs  */
  ST0 = -ST0;
/* 90bade: jmp 0x90bb36 */
  goto L_90bb36;
L_90bae0: /* 90bae0: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 90bae4: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 90baec: fmul dword ptr [esp + 4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4u)));
/* 90baf0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90baf2: fsqrt  */
  ST0 = sqrt(ST0);
/* 90baf4: fdivr qword ptr [0xa0da58] */
  ST0 = (F64((uint32_t)(0xa0da58u))) / ST0;
/* 90bafa: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 90bafe: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 90bb00: fchs  */
  ST0 = -ST0;
/* 90bb02: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 90bb06: fmul dword ptr [esp + 4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4u)));
/* 90bb0a: fst dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0);
/* 90bb0e: fmul dword ptr [esp + 4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4u)));
/* 90bb12: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 90bb16: fmul dword ptr [esp + 8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x8u)));
/* 90bb1a: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 90bb1c: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 90bb20: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 90bb24: fmul dword ptr [esp] */
  ST0 = ST0 * (F32((uint32_t)(esp)));
/* 90bb28: fchs  */
  ST0 = -ST0;
/* 90bb2a: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 90bb2e: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 90bb32: fmul dword ptr [esp] */
  ST0 = ST0 * (F32((uint32_t)(esp)));
L_90bb36: /* 90bb36: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90bb37: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 90bb3b: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 90bb3f: mov ecx, dword ptr [esi + 0x54] */
  ecx = R32((uint32_t)(esi + 0x54u));
/* 90bb42: lea eax, [esi + 0xbc] */
  eax = (uint32_t)(esi + 0xbcu);
/* 90bb48: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90bb49: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90bb4a: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 90bb4e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90bb4f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 90bb51: call 0x90d100 */
  esp -= 4; W32(esp, 0x90bb56u); SPILL(); f_90d100(); if (g_unwind) return; RELOAD();
/* 90bb56: mov ecx, dword ptr [esi + 0x54] */
  ecx = R32((uint32_t)(esi + 0x54u));
/* 90bb59: lea eax, [esi + 0xcc] */
  eax = (uint32_t)(esi + 0xccu);
/* 90bb5f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90bb60: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90bb61: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* 90bb65: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90bb66: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 90bb68: call 0x90d100 */
  esp -= 4; W32(esp, 0x90bb6du); SPILL(); f_90d100(); if (g_unwind) return; RELOAD();
/* 90bb6d: mov ecx, dword ptr [esi + 0x54] */
  ecx = R32((uint32_t)(esi + 0x54u));
/* 90bb70: lea eax, [esi + 0xdc] */
  eax = (uint32_t)(esi + 0xdcu);
/* 90bb76: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90bb77: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90bb78: lea edx, [esp + 0x24] */
  edx = (uint32_t)(esp + 0x24u);
/* 90bb7c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90bb7d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 90bb7f: call 0x90d100 */
  esp -= 4; W32(esp, 0x90bb84u); SPILL(); f_90d100(); if (g_unwind) return; RELOAD();
/* 90bb84: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* 90bb87: lea eax, [esi + 0xfc] */
  eax = (uint32_t)(esi + 0xfcu);
/* 90bb8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90bb8e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90bb8f: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 90bb93: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90bb94: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 90bb96: call 0x90d100 */
  esp -= 4; W32(esp, 0x90bb9bu); SPILL(); f_90d100(); if (g_unwind) return; RELOAD();
/* 90bb9b: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* 90bb9e: lea eax, [esi + 0x10c] */
  eax = (uint32_t)(esi + 0x10cu);
/* 90bba4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90bba5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90bba6: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* 90bbaa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90bbab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 90bbad: call 0x90d100 */
  esp -= 4; W32(esp, 0x90bbb2u); SPILL(); f_90d100(); if (g_unwind) return; RELOAD();
/* 90bbb2: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* 90bbb5: lea eax, [esi + 0x11c] */
  eax = (uint32_t)(esi + 0x11cu);
/* 90bbbb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90bbbc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90bbbd: lea edx, [esp + 0x24] */
  edx = (uint32_t)(esp + 0x24u);
/* 90bbc1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90bbc2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 90bbc4: call 0x90d100 */
  esp -= 4; W32(esp, 0x90bbc9u); SPILL(); f_90d100(); if (g_unwind) return; RELOAD();
/* 90bbc9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90bbca: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90bbcd: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_90bbd0(void) {
  LOAD_REGS();
L_90bbd0: /* 90bbd0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90bbd1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 90bbd5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90bbd6: call 0x90bd20 */
  esp -= 4; W32(esp, 0x90bbdbu); SPILL(); f_90bd20(); if (g_unwind) return; RELOAD();
/* 90bbdb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90bbdd: je 0x90bbe5 */
  if (zf) goto L_90bbe5;
L_90bbdf: /* 90bbdf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90bbe0: call 0x90bcb0 */
  esp -= 4; W32(esp, 0x90bbe5u); SPILL(); f_90bcb0(); if (g_unwind) return; RELOAD();
L_90bbe5: /* 90bbe5: cmp dword ptr [esi + 0xb0], 5 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xb0u))); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90bbec: jne 0x90bbfd */
  if (!zf) goto L_90bbfd;
L_90bbee: /* 90bbee: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 90bbf0: mov eax, dword ptr [eax + 0x1d4] */
  eax = R32((uint32_t)(eax + 0x1d4u));
/* 90bbf6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90bbf8: je 0x90bbfd */
  if (zf) goto L_90bbfd;
L_90bbfa: /* 90bbfa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90bbfb: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x90bbfdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_90bbfd: /* 90bbfd: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 90bbff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90bc00: add ecx, 0xfc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 90bc06: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90bc07: mov dword ptr [esi + 0xb0], 0xffffffff */
  W32((uint32_t)(esi + 0xb0u), 0xffffffffu);
/* 90bc11: call dword ptr [0xb02218] */
  { uint32_t t = R32((uint32_t)(0xb02218u)); esp -= 4; W32(esp, 0x90bc17u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 90bc17: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90bc18: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90bc20(void) {
  LOAD_REGS();
L_90bc20: /* 90bc20: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90bc21: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90bc22: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 90bc26: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 90bc28: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90bc29: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90bc2a: call 0x90bd20 */
  esp -= 4; W32(esp, 0x90bc2fu); SPILL(); f_90bd20(); if (g_unwind) return; RELOAD();
/* 90bc2f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90bc31: jne 0x90bca3 */
  if (!zf) goto L_90bca3;
L_90bc33: /* 90bc33: mov eax, dword ptr [esi + 0x54] */
  eax = R32((uint32_t)(esi + 0x54u));
/* 90bc36: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90bc38: lea edi, [esi + 0x54] */
  edi = (uint32_t)(esi + 0x54u);
/* 90bc3b: jne 0x90bc44 */
  if (!zf) goto L_90bc44;
L_90bc3d: /* 90bc3d: mov eax, dword ptr [esi + 0x58] */
  eax = R32((uint32_t)(esi + 0x58u));
/* 90bc40: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90bc42: je 0x90bca3 */
  if (zf) goto L_90bca3;
L_90bc44: /* 90bc44: mov eax, dword ptr [esi + 0x5c] */
  eax = R32((uint32_t)(esi + 0x5cu));
/* 90bc47: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 90bc49: or eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 90bc4c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 90bc4d: mov dword ptr [esi + 0x5c], eax */
  W32((uint32_t)(esi + 0x5cu), eax);
/* 90bc50: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 90bc53: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90bc54: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 90bc57: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90bc58: add edx, 0x34 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 90bc5b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90bc5c: call 0x9723a0 */
  esp -= 4; W32(esp, 0x90bc61u); SPILL(); f_9723a0(); if (g_unwind) return; RELOAD();
/* 90bc61: mov eax, dword ptr [ebx + 0xf8] */
  eax = R32((uint32_t)(ebx + 0xf8u));
/* 90bc67: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90bc6a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 90bc6b: mov dword ptr [ebx + 0xf8], eax */
  W32((uint32_t)(ebx + 0xf8u), eax);
/* 90bc71: lea ebx, [esi + 0x20] */
  ebx = (uint32_t)(esi + 0x20u);
/* 90bc74: mov ebp, 2 */
  ebp = 0x2u;
/* 90bc79: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_90bc80: /* 90bc80: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 90bc82: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90bc84: je 0x90bc99 */
  if (zf) goto L_90bc99;
L_90bc86: /* 90bc86: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 90bc89: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90bc8a: add eax, 0x1fc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90bc8f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90bc90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90bc91: call 0x9723a0 */
  esp -= 4; W32(esp, 0x90bc96u); SPILL(); f_9723a0(); if (g_unwind) return; RELOAD();
/* 90bc96: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_90bc99: /* 90bc99: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 90bc9c: add ebx, 0x18 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 90bc9f: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 90bca0: jne 0x90bc80 */
  if (!zf) goto L_90bc80;
L_90bca2: /* 90bca2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_90bca3: /* 90bca3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90bca4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90bca5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 90bca6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90bcb0(void) {
  LOAD_REGS();
L_90bcb0: /* 90bcb0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90bcb1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 90bcb5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90bcb6: call 0x90bd20 */
  esp -= 4; W32(esp, 0x90bcbbu); SPILL(); f_90bd20(); if (g_unwind) return; RELOAD();
/* 90bcbb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90bcbd: je 0x90bd16 */
  if (zf) goto L_90bd16;
L_90bcbf: /* 90bcbf: mov edx, dword ptr [esi + 0x5c] */
  edx = R32((uint32_t)(esi + 0x5cu));
/* 90bcc2: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 90bcc4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90bcc5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90bcc6: lea eax, [esi + 8] */
  eax = (uint32_t)(esi + 0x8u);
/* 90bcc9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90bcca: add ecx, 0x34 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 90bccd: and edx, 0xfffffffe */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 90bcd0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90bcd1: mov dword ptr [esi + 0x5c], edx */
  W32((uint32_t)(esi + 0x5cu), edx);
/* 90bcd4: call 0x972510 */
  esp -= 4; W32(esp, 0x90bcd9u); SPILL(); f_972510(); if (g_unwind) return; RELOAD();
/* 90bcd9: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 90bcdb: mov ecx, dword ptr [eax + 0xf8] */
  ecx = R32((uint32_t)(eax + 0xf8u));
/* 90bce1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90bce4: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 90bce5: lea edi, [esi + 0x54] */
  edi = (uint32_t)(esi + 0x54u);
/* 90bce8: mov dword ptr [eax + 0xf8], ecx */
  W32((uint32_t)(eax + 0xf8u), ecx);
/* 90bcee: add esi, 0x20 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 90bcf1: mov ebx, 2 */
  ebx = 0x2u;
L_90bcf6: /* 90bcf6: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 90bcf8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90bcfa: je 0x90bd0b */
  if (zf) goto L_90bd0b;
L_90bcfc: /* 90bcfc: add eax, 0x1fc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90bd01: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90bd02: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90bd03: call 0x972510 */
  esp -= 4; W32(esp, 0x90bd08u); SPILL(); f_972510(); if (g_unwind) return; RELOAD();
/* 90bd08: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_90bd0b: /* 90bd0b: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 90bd0e: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 90bd11: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* 90bd12: jne 0x90bcf6 */
  if (!zf) goto L_90bcf6;
L_90bd14: /* 90bd14: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90bd15: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_90bd16: /* 90bd16: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90bd17: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90bd20(void) {
  LOAD_REGS();
L_90bd20: /* 90bd20: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90bd24: mov eax, dword ptr [eax + 0x5c] */
  eax = R32((uint32_t)(eax + 0x5cu));
/* 90bd27: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 90bd2a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90bd30(void) {
  LOAD_REGS();
L_90bd30: /* 90bd30: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90bd34: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 90bd36: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90bd40(void) {
  LOAD_REGS();
L_90bd40: /* 90bd40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90bd41: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90bd42: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 90bd46: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90bd47: xor esi, esi */
  esi = 0;
/* 90bd49: call 0x90fe00 */
  esp -= 4; W32(esp, 0x90bd4eu); SPILL(); f_90fe00(); if (g_unwind) return; RELOAD();
/* 90bd4e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90bd50: je 0x90bd8b */
  if (zf) goto L_90bd8b;
L_90bd52: /* 90bd52: mov ecx, dword ptr [eax + 0x164] */
  ecx = R32((uint32_t)(eax + 0x164u));
/* 90bd58: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90bd5a: je 0x90bd84 */
  if (zf) goto L_90bd84;
L_90bd5c: /* 90bd5c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_90bd60: /* 90bd60: mov eax, dword ptr [ecx + 0x194] */
  eax = R32((uint32_t)(ecx + 0x194u));
/* 90bd66: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90bd68: jne 0x90bd6d */
  if (!zf) goto L_90bd6d;
L_90bd6a: /* 90bd6a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 90bd6b: jmp 0x90bd7a */
  goto L_90bd7a;
L_90bd6d: /* 90bd6d: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90bd70: jne 0x90bd77 */
  if (!zf) goto L_90bd77;
L_90bd72: /* 90bd72: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 90bd75: jmp 0x90bd7a */
  goto L_90bd7a;
L_90bd77: /* 90bd77: add esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_90bd7a: /* 90bd7a: mov ecx, dword ptr [ecx + 0x1dc] */
  ecx = R32((uint32_t)(ecx + 0x1dcu));
/* 90bd80: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90bd82: jne 0x90bd60 */
  if (!zf) goto L_90bd60;
L_90bd84: /* 90bd84: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90bd85: mov eax, esi */
  eax = esi;
/* 90bd87: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90bd88: ret 4 */
  esp += 8; SPILL(); return;
L_90bd8b: /* 90bd8b: mov eax, dword ptr [edi + 0x64] */
  eax = R32((uint32_t)(edi + 0x64u));
/* 90bd8e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90bd8f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90bd90: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90bda0(void) {
  LOAD_REGS();
L_90bda0: /* 90bda0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 90bda4: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 90bda8: mov eax, dword ptr [ecx + eax*4 + 0x54] */
  eax = R32((uint32_t)(ecx + eax*4 + 0x54u));
/* 90bdac: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90bdb0(void) {
  LOAD_REGS();
L_90bdb0: /* 90bdb0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90bdb4: mov eax, dword ptr [eax + 0x50] */
  eax = R32((uint32_t)(eax + 0x50u));
/* 90bdb7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90bdc0(void) {
  LOAD_REGS();
L_90bdc0: /* 90bdc0: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 90bdc4: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 90bdc8: mov eax, edx */
  eax = edx;
/* 90bdca: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90bdcb: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 90bdcf: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 90bdd2: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90bdd4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90bdd5: mov edi, dword ptr [eax + 0x68] */
  edi = R32((uint32_t)(eax + 0x68u));
/* 90bdd8: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 90bdda: mov eax, dword ptr [eax + 0x6c] */
  eax = R32((uint32_t)(eax + 0x6cu));
/* 90bddd: add edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 90bde0: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 90bde3: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 90bde6: mov edx, dword ptr [edx + esi] */
  edx = R32((uint32_t)(edx + esi));
/* 90bde9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90bdea: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 90bded: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90bdee: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_90be00(void) {
  LOAD_REGS();
L_90be00: /* 90be00: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 90be04: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 90be08: mov eax, edx */
  eax = edx;
/* 90be0a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90be0b: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 90be0f: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 90be12: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90be14: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90be15: mov edi, dword ptr [eax + 0x88] */
  edi = R32((uint32_t)(eax + 0x88u));
/* 90be1b: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 90be1d: mov eax, dword ptr [eax + 0x8c] */
  eax = R32((uint32_t)(eax + 0x8cu));
/* 90be23: add edx, 9 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x9u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 90be26: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 90be29: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 90be2c: mov edx, dword ptr [edx + esi] */
  edx = R32((uint32_t)(edx + esi));
/* 90be2f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90be30: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 90be33: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90be34: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_90be40(void) {
  LOAD_REGS();
L_90be40: /* 90be40: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 90be44: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90be45: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 90be49: mov edx, dword ptr [eax + 0x58] */
  edx = R32((uint32_t)(eax + 0x58u));
/* 90be4c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 90be4e: lea ecx, [eax + 0x12c] */
  ecx = (uint32_t)(eax + 0x12cu);
/* 90be54: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90be55: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90be56: call 0x90d110 */
  esp -= 4; W32(esp, 0x90be5bu); SPILL(); f_90d110(); if (g_unwind) return; RELOAD();
/* 90be5b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90be60(void) {
  LOAD_REGS();
L_90be60: /* 90be60: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 90be64: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90be66: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 90be6a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90be6b: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 90be6f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 90be71: jne 0x90be86 */
  if (!zf) goto L_90be86;
L_90be73: /* 90be73: mov edx, dword ptr [eax + 0x54] */
  edx = R32((uint32_t)(eax + 0x54u));
/* 90be76: lea ecx, [eax + 0xec] */
  ecx = (uint32_t)(eax + 0xecu);
/* 90be7c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90be7d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90be7e: call 0x90d110 */
  esp -= 4; W32(esp, 0x90be83u); SPILL(); f_90d110(); if (g_unwind) return; RELOAD();
/* 90be83: ret 0xc */
  esp += 16; SPILL(); return;
L_90be86: /* 90be86: mov edx, dword ptr [eax + 0x58] */
  edx = R32((uint32_t)(eax + 0x58u));
/* 90be89: lea ecx, [eax + 0x12c] */
  ecx = (uint32_t)(eax + 0x12cu);
/* 90be8f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90be90: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90be91: call 0x90d110 */
  esp -= 4; W32(esp, 0x90be96u); SPILL(); f_90d110(); if (g_unwind) return; RELOAD();
/* 90be96: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_90bea0(void) {
  LOAD_REGS();
L_90bea0: /* 90bea0: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 90bea4: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90bea6: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90beaa: mov ecx, dword ptr [eax + edx*4 + 0x54] */
  ecx = R32((uint32_t)(eax + edx*4 + 0x54u));
/* 90beae: jne 0x90beb7 */
  if (!zf) goto L_90beb7;
L_90beb0: /* 90beb0: add eax, 0xec */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xecu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90beb5: jmp 0x90bebc */
  goto L_90bebc;
L_90beb7: /* 90beb7: add eax, 0x12c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x12cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_90bebc: /* 90bebc: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90bebe: je 0x90bef3 */
  if (zf) goto L_90bef3;
L_90bec0: /* 90bec0: mov edx, dword ptr [ecx + 0x19c] */
  edx = R32((uint32_t)(ecx + 0x19cu));
/* 90bec6: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90bec8: je 0x90bef3 */
  if (zf) goto L_90bef3;
L_90beca: /* 90beca: fld dword ptr [ecx + 0x190] */
  { double v = F32((uint32_t)(ecx + 0x190u)); FPUSH(v); }
/* 90bed0: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 90bed4: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 90bed6: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 90bed8: fld dword ptr [ecx + 0x194] */
  { double v = F32((uint32_t)(ecx + 0x194u)); FPUSH(v); }
/* 90bede: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 90bee1: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* 90bee4: fld dword ptr [ecx + 0x198] */
  { double v = F32((uint32_t)(ecx + 0x198u)); FPUSH(v); }
/* 90beea: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 90beed: fstp dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 90bef0: ret 0xc */
  esp += 16; SPILL(); return;
L_90bef3: /* 90bef3: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 90bef5: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 90bef9: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 90befb: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 90befe: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 90bf01: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 90bf04: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 90bf07: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_90bf10(void) {
  LOAD_REGS();
L_90bf10: /* 90bf10: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 90bf14: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90bf16: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 90bf1a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90bf1b: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 90bf1f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 90bf21: jne 0x90bf36 */
  if (!zf) goto L_90bf36;
L_90bf23: /* 90bf23: mov edx, dword ptr [eax + 0x54] */
  edx = R32((uint32_t)(eax + 0x54u));
/* 90bf26: lea ecx, [eax + 0xbc] */
  ecx = (uint32_t)(eax + 0xbcu);
/* 90bf2c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90bf2d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90bf2e: call 0x90d100 */
  esp -= 4; W32(esp, 0x90bf33u); SPILL(); f_90d100(); if (g_unwind) return; RELOAD();
/* 90bf33: ret 0xc */
  esp += 16; SPILL(); return;
L_90bf36: /* 90bf36: mov edx, dword ptr [eax + 0x58] */
  edx = R32((uint32_t)(eax + 0x58u));
/* 90bf39: lea ecx, [eax + 0xfc] */
  ecx = (uint32_t)(eax + 0xfcu);
/* 90bf3f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90bf40: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90bf41: call 0x90d100 */
  esp -= 4; W32(esp, 0x90bf46u); SPILL(); f_90d100(); if (g_unwind) return; RELOAD();
/* 90bf46: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_90bf50(void) {
  LOAD_REGS();
L_90bf50: /* 90bf50: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 90bf54: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90bf55: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 90bf59: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90bf5b: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 90bf5f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90bf60: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 90bf62: jne 0x90bf8f */
  if (!zf) goto L_90bf8f;
L_90bf64: /* 90bf64: mov edx, dword ptr [esi + 0x54] */
  edx = R32((uint32_t)(esi + 0x54u));
/* 90bf67: lea ecx, [esi + 0xbc] */
  ecx = (uint32_t)(esi + 0xbcu);
/* 90bf6d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90bf6e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90bf6f: call 0x90d100 */
  esp -= 4; W32(esp, 0x90bf74u); SPILL(); f_90d100(); if (g_unwind) return; RELOAD();
/* 90bf74: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 90bf78: mov edx, dword ptr [esi + 0x54] */
  edx = R32((uint32_t)(esi + 0x54u));
/* 90bf7b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90bf7c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 90bf7e: lea ecx, [esi + 0xcc] */
  ecx = (uint32_t)(esi + 0xccu);
/* 90bf84: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90bf85: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90bf86: call 0x90d100 */
  esp -= 4; W32(esp, 0x90bf8bu); SPILL(); f_90d100(); if (g_unwind) return; RELOAD();
/* 90bf8b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90bf8c: ret 0x10 */
  esp += 20; SPILL(); return;
L_90bf8f: /* 90bf8f: mov edx, dword ptr [esi + 0x58] */
  edx = R32((uint32_t)(esi + 0x58u));
/* 90bf92: lea ecx, [esi + 0xfc] */
  ecx = (uint32_t)(esi + 0xfcu);
/* 90bf98: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90bf99: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90bf9a: call 0x90d100 */
  esp -= 4; W32(esp, 0x90bf9fu); SPILL(); f_90d100(); if (g_unwind) return; RELOAD();
/* 90bf9f: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 90bfa3: mov edx, dword ptr [esi + 0x58] */
  edx = R32((uint32_t)(esi + 0x58u));
/* 90bfa6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90bfa7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 90bfa9: lea ecx, [esi + 0x10c] */
  ecx = (uint32_t)(esi + 0x10cu);
/* 90bfaf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90bfb0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90bfb1: call 0x90d100 */
  esp -= 4; W32(esp, 0x90bfb6u); SPILL(); f_90d100(); if (g_unwind) return; RELOAD();
/* 90bfb6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90bfb7: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_90bfc0(void) {
  LOAD_REGS();
L_90bfc0: /* 90bfc0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 90bfc4: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 90bfc8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90bfca: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90bfce: jne 0x90c00b */
  if (!zf) goto L_90c00b;
L_90bfd0: /* 90bfd0: mov edx, dword ptr [eax + 0xbc] */
  edx = R32((uint32_t)(eax + 0xbcu));
/* 90bfd6: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 90bfd8: mov edx, dword ptr [eax + 0xc0] */
  edx = R32((uint32_t)(eax + 0xc0u));
/* 90bfde: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 90bfe1: mov edx, dword ptr [eax + 0xc4] */
  edx = R32((uint32_t)(eax + 0xc4u));
/* 90bfe7: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 90bfea: mov edx, dword ptr [eax + 0xcc] */
  edx = R32((uint32_t)(eax + 0xccu));
/* 90bff0: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 90bff4: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 90bff6: mov edx, dword ptr [eax + 0xd0] */
  edx = R32((uint32_t)(eax + 0xd0u));
/* 90bffc: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 90bfff: mov eax, dword ptr [eax + 0xd4] */
  eax = R32((uint32_t)(eax + 0xd4u));
/* 90c005: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 90c008: ret 0x10 */
  esp += 20; SPILL(); return;
L_90c00b: /* 90c00b: mov edx, dword ptr [eax + 0xfc] */
  edx = R32((uint32_t)(eax + 0xfcu));
/* 90c011: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 90c013: mov edx, dword ptr [eax + 0x100] */
  edx = R32((uint32_t)(eax + 0x100u));
/* 90c019: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 90c01c: mov edx, dword ptr [eax + 0x104] */
  edx = R32((uint32_t)(eax + 0x104u));
/* 90c022: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 90c025: mov edx, dword ptr [eax + 0x10c] */
  edx = R32((uint32_t)(eax + 0x10cu));
/* 90c02b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 90c02f: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 90c031: mov edx, dword ptr [eax + 0x110] */
  edx = R32((uint32_t)(eax + 0x110u));
/* 90c037: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 90c03a: mov eax, dword ptr [eax + 0x114] */
  eax = R32((uint32_t)(eax + 0x114u));
/* 90c040: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 90c043: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_90c050(void) {
  LOAD_REGS();
L_90c050: /* 90c050: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 90c054: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 90c058: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 90c05c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90c05d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90c05e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 90c060: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90c061: call 0x90bf50 */
  esp -= 4; W32(esp, 0x90c066u); SPILL(); f_90bf50(); if (g_unwind) return; RELOAD();
/* 90c066: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_90c070(void) {
  LOAD_REGS();
L_90c070: /* 90c070: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90c074: add eax, 0x34 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90c077: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90c078: call 0x972710 */
  esp -= 4; W32(esp, 0x90c07du); SPILL(); f_972710(); if (g_unwind) return; RELOAD();
/* 90c07d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90c080: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90c082: je 0x90c08a */
  if (zf) goto L_90c08a;
L_90c084: /* 90c084: mov eax, dword ptr [eax + 0x14] */
  eax = R32((uint32_t)(eax + 0x14u));
/* 90c087: ret 4 */
  esp += 8; SPILL(); return;
L_90c08a: /* 90c08a: xor eax, eax */
  eax = 0;
/* 90c08c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90c090(void) {
  LOAD_REGS();
L_90c090: /* 90c090: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90c094: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 90c096: lea ecx, [eax + 8] */
  ecx = (uint32_t)(eax + 0x8u);
/* 90c099: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90c09a: add edx, 0x34 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 90c09d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90c09e: call 0x972770 */
  esp -= 4; W32(esp, 0x90c0a3u); SPILL(); f_972770(); if (g_unwind) return; RELOAD();
/* 90c0a3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90c0a6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90c0a8: je 0x90c0b0 */
  if (zf) goto L_90c0b0;
L_90c0aa: /* 90c0aa: mov eax, dword ptr [eax + 0x14] */
  eax = R32((uint32_t)(eax + 0x14u));
/* 90c0ad: ret 4 */
  esp += 8; SPILL(); return;
L_90c0b0: /* 90c0b0: xor eax, eax */
  eax = 0;
/* 90c0b2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90c0c0(void) {
  LOAD_REGS();
L_90c0c0: /* 90c0c0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90c0c4: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 90c0c7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90c0d0(void) {
  LOAD_REGS();
L_90c0d0: /* 90c0d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90c0d4: mov edx, dword ptr [eax + 0x13c] */
  edx = R32((uint32_t)(eax + 0x13cu));
/* 90c0da: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 90c0de: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 90c0e0: mov edx, dword ptr [eax + 0x140] */
  edx = R32((uint32_t)(eax + 0x140u));
/* 90c0e6: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 90c0e9: mov eax, dword ptr [eax + 0x144] */
  eax = R32((uint32_t)(eax + 0x144u));
/* 90c0ef: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 90c0f2: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90c100(void) {
  LOAD_REGS();
L_90c100: /* 90c100: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90c104: mov edx, dword ptr [eax + 0x148] */
  edx = R32((uint32_t)(eax + 0x148u));
/* 90c10a: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 90c10e: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 90c110: mov edx, dword ptr [eax + 0x14c] */
  edx = R32((uint32_t)(eax + 0x14cu));
/* 90c116: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 90c119: mov eax, dword ptr [eax + 0x150] */
  eax = R32((uint32_t)(eax + 0x150u));
/* 90c11f: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 90c122: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90c130(void) {
  LOAD_REGS();
L_90c130: /* 90c130: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90c134: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 90c138: jmp dword ptr [eax + 0xa8] */
  { uint32_t t = R32((uint32_t)(eax + 0xa8u)); SPILL(); call_ind(t); return; }
}

void f_90c140(void) {
  LOAD_REGS();
L_90c140: /* 90c140: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 90c144: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 90c148: mov dword ptr [ecx + 0x50], eax */
  W32((uint32_t)(ecx + 0x50u), eax);
/* 90c14b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90c150(void) {
  LOAD_REGS();
L_90c150: /* 90c150: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 90c153: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 90c157: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 90c15b: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 90c15f: mov dword ptr [esp], eax */
  W32((uint32_t)(esp), eax);
/* 90c163: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 90c167: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90c169: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 90c16d: mov dword ptr [esp + 4], ecx */
  W32((uint32_t)(esp + 0x4u), ecx);
/* 90c171: mov dword ptr [esp + 8], edx */
  W32((uint32_t)(esp + 0x8u), edx);
/* 90c175: jne 0x90c194 */
  if (!zf) goto L_90c194;
L_90c177: /* 90c177: mov edx, dword ptr [eax + 0x54] */
  edx = R32((uint32_t)(eax + 0x54u));
/* 90c17a: lea ecx, [eax + 0xec] */
  ecx = (uint32_t)(eax + 0xecu);
/* 90c180: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90c181: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90c182: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 90c186: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90c187: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 90c189: call 0x90d110 */
  esp -= 4; W32(esp, 0x90c18eu); SPILL(); f_90d110(); if (g_unwind) return; RELOAD();
/* 90c18e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90c191: ret 0x14 */
  esp += 24; SPILL(); return;
L_90c194: /* 90c194: mov edx, dword ptr [eax + 0x58] */
  edx = R32((uint32_t)(eax + 0x58u));
/* 90c197: lea ecx, [eax + 0x12c] */
  ecx = (uint32_t)(eax + 0x12cu);
/* 90c19d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90c19e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90c19f: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 90c1a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90c1a4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 90c1a6: call 0x90d110 */
  esp -= 4; W32(esp, 0x90c1abu); SPILL(); f_90d110(); if (g_unwind) return; RELOAD();
/* 90c1ab: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90c1ae: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_90c1c0(void) {
  LOAD_REGS();
L_90c1c0: /* 90c1c0: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 90c1c4: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90c1c6: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90c1ca: mov ecx, dword ptr [eax + edx*4 + 0x54] */
  ecx = R32((uint32_t)(eax + edx*4 + 0x54u));
/* 90c1ce: jne 0x90c1d7 */
  if (!zf) goto L_90c1d7;
L_90c1d0: /* 90c1d0: add eax, 0xec */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xecu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90c1d5: jmp 0x90c1dc */
  goto L_90c1dc;
L_90c1d7: /* 90c1d7: add eax, 0x12c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x12cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_90c1dc: /* 90c1dc: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90c1de: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 90c1e2: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 90c1e4: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 90c1e8: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 90c1eb: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 90c1ef: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 90c1f2: je 0x90c224 */
  if (zf) goto L_90c224;
L_90c1f4: /* 90c1f4: mov edx, dword ptr [ecx + 0x19c] */
  edx = R32((uint32_t)(ecx + 0x19cu));
/* 90c1fa: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90c1fc: je 0x90c224 */
  if (zf) goto L_90c224;
L_90c1fe: /* 90c1fe: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 90c202: fsub dword ptr [ecx + 0x190] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x190u)));
/* 90c208: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 90c20a: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 90c20e: fsub dword ptr [ecx + 0x194] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x194u)));
/* 90c214: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 90c217: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 90c21b: fsub dword ptr [ecx + 0x198] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x198u)));
/* 90c221: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
L_90c224: /* 90c224: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_90c230(void) {
  LOAD_REGS();
L_90c230: /* 90c230: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90c231: mov ebx, dword ptr [esp + 0xc] */
  ebx = R32((uint32_t)(esp + 0xcu));
/* 90c235: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 90c236: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 90c23a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90c23b: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 90c23f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90c240: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 90c244: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90c245: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90c246: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90c247: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 90c249: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 90c24a: call 0x90c150 */
  esp -= 4; W32(esp, 0x90c24fu); SPILL(); f_90c150(); if (g_unwind) return; RELOAD();
/* 90c24f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90c250: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90c251: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90c252: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 90c254: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 90c255: call 0x90c150 */
  esp -= 4; W32(esp, 0x90c25au); SPILL(); f_90c150(); if (g_unwind) return; RELOAD();
/* 90c25a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90c25b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90c25c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 90c25d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 90c25e: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_90c270(void) {
  LOAD_REGS();
L_90c270: /* 90c270: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 90c274: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 90c278: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 90c27c: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 90c280: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90c284: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 90c288: mov dword ptr [esp + 8], edx */
  W32((uint32_t)(esp + 0x8u), edx);
/* 90c28c: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 90c290: jmp dword ptr [eax + 0xac] */
  { uint32_t t = R32((uint32_t)(eax + 0xacu)); SPILL(); call_ind(t); return; }
}

void f_90c2a0(void) {
  LOAD_REGS();
L_90c2a0: /* 90c2a0: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 90c2a3: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 90c2a7: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 90c2ab: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 90c2af: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 90c2b3: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 90c2b7: fmul dword ptr [esp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x30u)));
/* 90c2bb: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 90c2bf: mov dword ptr [esp], eax */
  W32((uint32_t)(esp), eax);
/* 90c2c3: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 90c2c5: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 90c2c7: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 90c2cb: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 90c2cf: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90c2d1: mov dword ptr [esp + 4], ecx */
  W32((uint32_t)(esp + 0x4u), ecx);
/* 90c2d5: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 90c2d9: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 90c2db: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 90c2dd: mov dword ptr [esp + 8], edx */
  W32((uint32_t)(esp + 0x8u), edx);
/* 90c2e1: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 90c2e5: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 90c2e9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90c2eb: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 90c2ef: fsub dword ptr [0x9f48a0] */
  ST0 = ST0 - (F32((uint32_t)(0x9f48a0u)));
/* 90c2f5: fabs  */
  ST0 = fabs(ST0);
/* 90c2f7: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 90c2f9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 90c2fb: fcomp dword ptr [0xa0892c] */
  fpu_com(ST0, F32((uint32_t)(0xa0892cu)));
  FPOP();
/* 90c301: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 90c303: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 90c306: jnp 0x90c36f */
  if (!pf) goto L_90c36f;
L_90c308: /* 90c308: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 90c30e: xor eax, eax */
  eax = 0;
L_90c310: /* 90c310: fld dword ptr [esp + eax*4] */
  { double v = F32((uint32_t)(esp + eax*4)); FPUSH(v); }
/* 90c314: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 90c315: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 90c318: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 90c31a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 90c31c: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 90c31e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 90c320: jl 0x90c310 */
  if ((sf != of)) goto L_90c310;
L_90c322: /* 90c322: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 90c328: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 90c32a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 90c32d: jne 0x90c355 */
  if (!zf) goto L_90c355;
L_90c32f: /* 90c32f: fsqrt  */
  ST0 = sqrt(ST0);
/* 90c331: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 90c337: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 90c33b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 90c33d: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 90c341: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 90c345: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 90c347: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 90c34b: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 90c34f: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 90c353: jmp 0x90c36f */
  goto L_90c36f;
L_90c355: /* 90c355: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 90c357: mov dword ptr [esp], 0x3f800000 */
  W32((uint32_t)(esp), 0x3f800000u);
/* 90c35f: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 90c367: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
L_90c36f: /* 90c36f: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 90c373: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 90c377: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 90c37b: fmul dword ptr [esp + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x3cu)));
/* 90c37f: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 90c381: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 90c383: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90c385: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 90c387: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 90c389: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90c38b: fsub dword ptr [0x9f48a0] */
  ST0 = ST0 - (F32((uint32_t)(0x9f48a0u)));
/* 90c391: fabs  */
  ST0 = fabs(ST0);
/* 90c393: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 90c395: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 90c397: fcomp dword ptr [0xa0892c] */
  fpu_com(ST0, F32((uint32_t)(0xa0892cu)));
  FPOP();
/* 90c39d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 90c39f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 90c3a2: jnp 0x90c40f */
  if (!pf) goto L_90c40f;
L_90c3a4: /* 90c3a4: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 90c3aa: xor eax, eax */
  eax = 0;
/* 90c3ac: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_90c3b0: /* 90c3b0: fld dword ptr [esp + eax*4 + 0xc] */
  { double v = F32((uint32_t)(esp + eax*4 + 0xcu)); FPUSH(v); }
/* 90c3b4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 90c3b5: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 90c3b8: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 90c3ba: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 90c3bc: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 90c3be: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 90c3c0: jl 0x90c3b0 */
  if ((sf != of)) goto L_90c3b0;
L_90c3c2: /* 90c3c2: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 90c3c8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 90c3ca: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 90c3cd: jne 0x90c3f5 */
  if (!zf) goto L_90c3f5;
L_90c3cf: /* 90c3cf: fsqrt  */
  ST0 = sqrt(ST0);
/* 90c3d1: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 90c3d7: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 90c3db: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 90c3dd: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 90c3e1: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 90c3e5: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 90c3e7: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 90c3eb: fmul dword ptr [esp + 0x44] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x44u)));
/* 90c3ef: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 90c3f3: jmp 0x90c40f */
  goto L_90c40f;
L_90c3f5: /* 90c3f5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 90c3f7: mov dword ptr [esp + 0xc], 0x3f800000 */
  W32((uint32_t)(esp + 0xcu), 0x3f800000u);
/* 90c3ff: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 90c407: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
L_90c40f: /* 90c40f: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 90c413: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 90c417: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90c419: fmul dword ptr [esp + 4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4u)));
/* 90c41d: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 90c421: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90c422: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 90c426: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 90c42a: lea edx, [esp + 4] */
  edx = (uint32_t)(esp + 0x4u);
/* 90c42e: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 90c430: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 90c434: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 90c438: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 90c43c: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 90c440: fmul dword ptr [esp + 4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4u)));
/* 90c444: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 90c446: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 90c44a: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 90c44e: fmul dword ptr [esp + 4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4u)));
/* 90c452: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 90c456: fmul dword ptr [esp + 8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x8u)));
/* 90c45a: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 90c45c: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 90c460: jne 0x90c497 */
  if (!zf) goto L_90c497;
L_90c462: /* 90c462: mov ecx, dword ptr [esi + 0x54] */
  ecx = R32((uint32_t)(esi + 0x54u));
/* 90c465: lea eax, [esi + 0xbc] */
  eax = (uint32_t)(esi + 0xbcu);
/* 90c46b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90c46c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90c46d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90c46e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 90c470: call 0x90d100 */
  esp -= 4; W32(esp, 0x90c475u); SPILL(); f_90d100(); if (g_unwind) return; RELOAD();
/* 90c475: mov ecx, dword ptr [esi + 0x54] */
  ecx = R32((uint32_t)(esi + 0x54u));
/* 90c478: lea eax, [esi + 0xcc] */
  eax = (uint32_t)(esi + 0xccu);
/* 90c47e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90c47f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90c480: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* 90c484: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90c485: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 90c487: call 0x90d100 */
  esp -= 4; W32(esp, 0x90c48cu); SPILL(); f_90d100(); if (g_unwind) return; RELOAD();
/* 90c48c: mov ecx, dword ptr [esi + 0x54] */
  ecx = R32((uint32_t)(esi + 0x54u));
/* 90c48f: lea eax, [esi + 0xdc] */
  eax = (uint32_t)(esi + 0xdcu);
/* 90c495: jmp 0x90c4ca */
  goto L_90c4ca;
L_90c497: /* 90c497: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* 90c49a: lea eax, [esi + 0xfc] */
  eax = (uint32_t)(esi + 0xfcu);
/* 90c4a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90c4a1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90c4a2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90c4a3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 90c4a5: call 0x90d100 */
  esp -= 4; W32(esp, 0x90c4aau); SPILL(); f_90d100(); if (g_unwind) return; RELOAD();
/* 90c4aa: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* 90c4ad: lea eax, [esi + 0x10c] */
  eax = (uint32_t)(esi + 0x10cu);
/* 90c4b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90c4b4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90c4b5: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* 90c4b9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90c4ba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 90c4bc: call 0x90d100 */
  esp -= 4; W32(esp, 0x90c4c1u); SPILL(); f_90d100(); if (g_unwind) return; RELOAD();
/* 90c4c1: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* 90c4c4: lea eax, [esi + 0x11c] */
  eax = (uint32_t)(esi + 0x11cu);
L_90c4ca: /* 90c4ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90c4cb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90c4cc: lea edx, [esp + 0x24] */
  edx = (uint32_t)(esp + 0x24u);
/* 90c4d0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90c4d1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 90c4d3: call 0x90d100 */
  esp -= 4; W32(esp, 0x90c4d8u); SPILL(); f_90d100(); if (g_unwind) return; RELOAD();
/* 90c4d8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90c4d9: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90c4dc: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_90c4e0(void) {
  LOAD_REGS();
L_90c4e0: /* 90c4e0: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 90c4e3: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 90c4e7: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 90c4eb: fst dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0);
/* 90c4ef: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 90c4f3: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 90c4f7: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 90c4fb: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 90c4ff: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 90c503: fmul dword ptr [esp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x30u)));
/* 90c507: mov dword ptr [esp], eax */
  W32((uint32_t)(esp), eax);
/* 90c50b: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 90c50f: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 90c513: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 90c515: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 90c517: mov dword ptr [esp + 4], ecx */
  W32((uint32_t)(esp + 0x4u), ecx);
/* 90c51b: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 90c51f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90c521: mov dword ptr [esp + 8], edx */
  W32((uint32_t)(esp + 0x8u), edx);
/* 90c525: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 90c529: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 90c52b: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 90c52d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90c52f: fsub dword ptr [0x9f48a0] */
  ST0 = ST0 - (F32((uint32_t)(0x9f48a0u)));
/* 90c535: fabs  */
  ST0 = fabs(ST0);
/* 90c537: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 90c539: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 90c53b: fcomp dword ptr [0xa0892c] */
  fpu_com(ST0, F32((uint32_t)(0xa0892cu)));
  FPOP();
/* 90c541: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 90c543: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 90c546: jnp 0x90c5af */
  if (!pf) goto L_90c5af;
L_90c548: /* 90c548: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 90c54e: xor eax, eax */
  eax = 0;
L_90c550: /* 90c550: fld dword ptr [esp + eax*4] */
  { double v = F32((uint32_t)(esp + eax*4)); FPUSH(v); }
/* 90c554: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 90c555: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 90c558: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 90c55a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 90c55c: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 90c55e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 90c560: jl 0x90c550 */
  if ((sf != of)) goto L_90c550;
L_90c562: /* 90c562: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 90c568: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 90c56a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 90c56d: jne 0x90c595 */
  if (!zf) goto L_90c595;
L_90c56f: /* 90c56f: fsqrt  */
  ST0 = sqrt(ST0);
/* 90c571: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 90c577: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 90c57b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 90c57d: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 90c581: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 90c585: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 90c587: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 90c58b: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 90c58f: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 90c593: jmp 0x90c5af */
  goto L_90c5af;
L_90c595: /* 90c595: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 90c597: mov dword ptr [esp], 0x3f800000 */
  W32((uint32_t)(esp), 0x3f800000u);
/* 90c59f: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 90c5a7: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
L_90c5af: /* 90c5af: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 90c5b3: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 90c5b7: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 90c5bb: fmul dword ptr [esp + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x3cu)));
/* 90c5bf: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 90c5c1: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 90c5c3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90c5c5: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 90c5c7: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 90c5c9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90c5cb: fsub dword ptr [0x9f48a0] */
  ST0 = ST0 - (F32((uint32_t)(0x9f48a0u)));
/* 90c5d1: fabs  */
  ST0 = fabs(ST0);
/* 90c5d3: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 90c5d5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 90c5d7: fcomp dword ptr [0xa0892c] */
  fpu_com(ST0, F32((uint32_t)(0xa0892cu)));
  FPOP();
/* 90c5dd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 90c5df: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 90c5e2: jnp 0x90c651 */
  if (!pf) goto L_90c651;
L_90c5e4: /* 90c5e4: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 90c5e6: xor eax, eax */
  eax = 0;
/* 90c5e8: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 90c5ee: mov edi, edi */
  edi = edi;
L_90c5f0: /* 90c5f0: fld dword ptr [esp + eax*4 + 0xc] */
  { double v = F32((uint32_t)(esp + eax*4 + 0xcu)); FPUSH(v); }
/* 90c5f4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 90c5f5: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 90c5f8: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 90c5fa: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 90c5fc: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 90c5fe: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 90c600: jl 0x90c5f0 */
  if ((sf != of)) goto L_90c5f0;
L_90c602: /* 90c602: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 90c608: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 90c60a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 90c60d: jne 0x90c639 */
  if (!zf) goto L_90c639;
L_90c60f: /* 90c60f: fsqrt  */
  ST0 = sqrt(ST0);
/* 90c611: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 90c617: fst dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0);
/* 90c61b: fmul dword ptr [esp + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x3cu)));
/* 90c61f: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 90c623: fmul dword ptr [esp + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x40u)));
/* 90c627: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 90c62b: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 90c62f: fmul dword ptr [esp + 0x44] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x44u)));
/* 90c633: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 90c637: jmp 0x90c651 */
  goto L_90c651;
L_90c639: /* 90c639: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 90c63b: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 90c643: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 90c649: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
L_90c651: /* 90c651: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 90c655: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 90c659: fmul dword ptr [esp + 4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4u)));
/* 90c65d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90c65f: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 90c663: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 90c667: fmul dword ptr [esp + 8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x8u)));
/* 90c66b: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 90c66d: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 90c671: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 90c675: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 90c677: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 90c67b: fmul dword ptr [esp] */
  ST0 = ST0 * (F32((uint32_t)(esp)));
/* 90c67f: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 90c681: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 90c685: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 90c689: fmul dword ptr [esp] */
  ST0 = ST0 * (F32((uint32_t)(esp)));
/* 90c68d: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 90c68f: fmul dword ptr [esp + 4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4u)));
/* 90c693: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 90c695: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 90c699: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 90c69d: jne 0x90c6f7 */
  if (!zf) goto L_90c6f7;
L_90c69f: /* 90c69f: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 90c6a3: fstp dword ptr [eax + 0xbc] */
  WF32((uint32_t)(eax + 0xbcu), ST0); FPOP();
/* 90c6a9: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 90c6ad: mov dword ptr [eax + 0xc0], edx */
  W32((uint32_t)(eax + 0xc0u), edx);
/* 90c6b3: fstp dword ptr [eax + 0xcc] */
  WF32((uint32_t)(eax + 0xccu), ST0); FPOP();
/* 90c6b9: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 90c6bd: mov dword ptr [eax + 0xc4], ecx */
  W32((uint32_t)(eax + 0xc4u), ecx);
/* 90c6c3: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 90c6c7: mov dword ptr [eax + 0xd0], edx */
  W32((uint32_t)(eax + 0xd0u), edx);
/* 90c6cd: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 90c6d1: mov dword ptr [eax + 0xd4], ecx */
  W32((uint32_t)(eax + 0xd4u), ecx);
/* 90c6d7: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 90c6db: mov dword ptr [eax + 0xdc], edx */
  W32((uint32_t)(eax + 0xdcu), edx);
/* 90c6e1: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 90c6e5: mov dword ptr [eax + 0xe0], ecx */
  W32((uint32_t)(eax + 0xe0u), ecx);
/* 90c6eb: mov dword ptr [eax + 0xe4], edx */
  W32((uint32_t)(eax + 0xe4u), edx);
/* 90c6f1: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90c6f4: ret 0x20 */
  esp += 36; SPILL(); return;
L_90c6f7: /* 90c6f7: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 90c6fb: fstp dword ptr [eax + 0xfc] */
  WF32((uint32_t)(eax + 0xfcu), ST0); FPOP();
/* 90c701: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 90c705: mov dword ptr [eax + 0x100], ecx */
  W32((uint32_t)(eax + 0x100u), ecx);
/* 90c70b: fstp dword ptr [eax + 0x10c] */
  WF32((uint32_t)(eax + 0x10cu), ST0); FPOP();
/* 90c711: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 90c715: mov dword ptr [eax + 0x104], edx */
  W32((uint32_t)(eax + 0x104u), edx);
/* 90c71b: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 90c71f: mov dword ptr [eax + 0x110], ecx */
  W32((uint32_t)(eax + 0x110u), ecx);
/* 90c725: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 90c729: mov dword ptr [eax + 0x114], edx */
  W32((uint32_t)(eax + 0x114u), edx);
/* 90c72f: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 90c733: mov dword ptr [eax + 0x11c], ecx */
  W32((uint32_t)(eax + 0x11cu), ecx);
/* 90c739: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 90c73d: mov dword ptr [eax + 0x120], edx */
  W32((uint32_t)(eax + 0x120u), edx);
/* 90c743: mov dword ptr [eax + 0x124], ecx */
  W32((uint32_t)(eax + 0x124u), ecx);
/* 90c749: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90c74c: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_90c750(void) {
  LOAD_REGS();
L_90c750: /* 90c750: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 90c754: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 90c758: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 90c75c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90c75d: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 90c761: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 90c762: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 90c766: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90c767: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 90c76b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90c76c: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
/* 90c770: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90c771: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90c772: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90c773: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 90c774: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90c775: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90c776: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 90c778: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90c779: call 0x90c2a0 */
  esp -= 4; W32(esp, 0x90c77eu); SPILL(); f_90c2a0(); if (g_unwind) return; RELOAD();
/* 90c77e: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 90c782: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 90c786: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 90c78a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90c78b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90c78c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90c78d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 90c78e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90c78f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90c790: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 90c792: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90c793: call 0x90c2a0 */
  esp -= 4; W32(esp, 0x90c798u); SPILL(); f_90c2a0(); if (g_unwind) return; RELOAD();
/* 90c798: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90c799: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90c79a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 90c79b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 90c79c: ret 0x1c */
  esp += 32; SPILL(); return;
}

void f_90c7a0(void) {
  LOAD_REGS();
L_90c7a0: /* 90c7a0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 90c7a4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90c7a5: call 0x90bd20 */
  esp -= 4; W32(esp, 0x90c7aau); SPILL(); f_90bd20(); if (g_unwind) return; RELOAD();
/* 90c7aa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90c7ac: jne 0x90c7b5 */
  if (!zf) goto L_90c7b5;
L_90c7ae: /* 90c7ae: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 90c7b2: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
L_90c7b5: /* 90c7b5: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90c7c0(void) {
  LOAD_REGS();
L_90c7c0: /* 90c7c0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90c7c4: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 90c7c8: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 90c7cc: fstp dword ptr [eax + 0x13c] */
  WF32((uint32_t)(eax + 0x13cu), ST0); FPOP();
/* 90c7d2: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 90c7d6: mov dword ptr [eax + 0x140], ecx */
  W32((uint32_t)(eax + 0x140u), ecx);
/* 90c7dc: mov dword ptr [eax + 0x144], edx */
  W32((uint32_t)(eax + 0x144u), edx);
/* 90c7e2: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_90c7f0(void) {
  LOAD_REGS();
L_90c7f0: /* 90c7f0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90c7f4: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 90c7f8: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 90c7fc: fstp dword ptr [eax + 0x148] */
  WF32((uint32_t)(eax + 0x148u), ST0); FPOP();
/* 90c802: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 90c806: mov dword ptr [eax + 0x14c], ecx */
  W32((uint32_t)(eax + 0x14cu), ecx);
/* 90c80c: mov dword ptr [eax + 0x150], edx */
  W32((uint32_t)(eax + 0x150u), edx);
/* 90c812: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_90c820(void) {
  LOAD_REGS();
L_90c820: /* 90c820: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90c824: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 90c82a: mov dword ptr [eax + 0xc], 0x3f800000 */
  W32((uint32_t)(eax + 0xcu), 0x3f800000u);
/* 90c831: mov dword ptr [eax + 4], 0x7f7fffff */
  W32((uint32_t)(eax + 0x4u), 0x7f7fffffu);
/* 90c838: mov dword ptr [eax + 8], 0 */
  W32((uint32_t)(eax + 0x8u), 0x0u);
/* 90c83f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90c850(void) {
  LOAD_REGS();
L_90c850: /* 90c850: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90c854: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 90c856: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90c860(void) {
  LOAD_REGS();
L_90c860: /* 90c860: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90c864: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 90c867: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90c870(void) {
  LOAD_REGS();
L_90c870: /* 90c870: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90c874: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 90c877: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90c880(void) {
  LOAD_REGS();
L_90c880: /* 90c880: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90c884: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 90c887: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90c890(void) {
  LOAD_REGS();
L_90c890: /* 90c890: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 90c894: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90c898: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 90c89a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90c8a0(void) {
  LOAD_REGS();
L_90c8a0: /* 90c8a0: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 90c8a4: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 90c8aa: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 90c8ae: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 90c8b0: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 90c8b3: jne 0x90c8bf */
  if (!zf) goto L_90c8bf;
L_90c8b5: /* 90c8b5: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90c8b9: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 90c8bc: ret 8 */
  esp += 12; SPILL(); return;
L_90c8bf: /* 90c8bf: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 90c8c3: fchs  */
  ST0 = -ST0;
/* 90c8c5: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 90c8c8: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90c8d0(void) {
  LOAD_REGS();
L_90c8d0: /* 90c8d0: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 90c8d4: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 90c8da: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 90c8de: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 90c8e0: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 90c8e3: jne 0x90c8ef */
  if (!zf) goto L_90c8ef;
L_90c8e5: /* 90c8e5: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90c8e9: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 90c8ec: ret 8 */
  esp += 12; SPILL(); return;
L_90c8ef: /* 90c8ef: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 90c8f3: fchs  */
  ST0 = -ST0;
/* 90c8f5: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 90c8f8: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90c900(void) {
  LOAD_REGS();
L_90c900: /* 90c900: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 90c904: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 90c90a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 90c90c: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 90c90f: jne 0x90c930 */
  if (!zf) goto L_90c930;
L_90c911: /* 90c911: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 90c915: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 90c91b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 90c91d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 90c920: jp 0x90c930 */
  if (pf) goto L_90c930;
L_90c922: /* 90c922: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 90c926: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90c92a: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* 90c92d: ret 8 */
  esp += 12; SPILL(); return;
L_90c930: /* 90c930: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 90c934: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 90c93a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 90c93c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 90c93f: jp 0x90c94f */
  if (pf) goto L_90c94f;
L_90c941: /* 90c941: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 90c945: mov dword ptr [ecx + 0xc], 0 */
  W32((uint32_t)(ecx + 0xcu), 0x0u);
/* 90c94c: ret 8 */
  esp += 12; SPILL(); return;
L_90c94f: /* 90c94f: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 90c953: mov dword ptr [edx + 0xc], 0x3f800000 */
  W32((uint32_t)(edx + 0xcu), 0x3f800000u);
/* 90c95a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90c960(void) {
  LOAD_REGS();
L_90c960: /* 90c960: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 90c964: xor eax, eax */
  eax = 0;
/* 90c966: mov dword ptr [ecx + 0x10], eax */
  W32((uint32_t)(ecx + 0x10u), eax);
/* 90c969: mov dword ptr [ecx + 0x54], eax */
  W32((uint32_t)(ecx + 0x54u), eax);
/* 90c96c: mov dword ptr [ecx + 0x58], eax */
  W32((uint32_t)(ecx + 0x58u), eax);
/* 90c96f: mov dword ptr [ecx + 0x24], eax */
  W32((uint32_t)(ecx + 0x24u), eax);
/* 90c972: mov dword ptr [ecx + 0x14], eax */
  W32((uint32_t)(ecx + 0x14u), eax);
/* 90c975: mov dword ptr [ecx + 0x20], eax */
  W32((uint32_t)(ecx + 0x20u), eax);
/* 90c978: mov dword ptr [ecx + 0x28], eax */
  W32((uint32_t)(ecx + 0x28u), eax);
/* 90c97b: mov dword ptr [ecx + 0x50], eax */
  W32((uint32_t)(ecx + 0x50u), eax);
/* 90c97e: mov dword ptr [ecx + 0x1c], eax */
  W32((uint32_t)(ecx + 0x1cu), eax);
/* 90c981: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 90c983: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 90c986: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 90c989: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 90c98c: lea eax, [ecx + 0x30] */
  eax = (uint32_t)(ecx + 0x30u);
/* 90c98f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90c990: mov dword ptr [ecx + 0x2c], 0x7f7fffff */
  W32((uint32_t)(ecx + 0x2cu), 0x7f7fffffu);
/* 90c997: call 0x90c820 */
  esp -= 4; W32(esp, 0x90c99cu); SPILL(); f_90c820(); if (g_unwind) return; RELOAD();
/* 90c99c: add ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 90c99f: mov dword ptr [esp + 4], ecx */
  W32((uint32_t)(esp + 0x4u), ecx);
/* 90c9a3: jmp 0x90c820 */
  SPILL(); f_90c820(); return;
}

void f_90c9b0(void) {
  LOAD_REGS();
L_90c9b0: /* 90c9b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90c9b4: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 90c9b6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90c9c0(void) {
  LOAD_REGS();
L_90c9c0: /* 90c9c0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90c9c4: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 90c9c7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90c9d0(void) {
  LOAD_REGS();
L_90c9d0: /* 90c9d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90c9d4: add eax, 0x30 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90c9d7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90c9e0(void) {
  LOAD_REGS();
L_90c9e0: /* 90c9e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90c9e4: add eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90c9e7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90c9f0(void) {
  LOAD_REGS();
L_90c9f0: /* 90c9f0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90c9f4: fld dword ptr [eax + 0x24] */
  { double v = F32((uint32_t)(eax + 0x24u)); FPUSH(v); }
/* 90c9f7: fadd dword ptr [eax + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x14u)));
/* 90c9fa: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90ca00(void) {
  LOAD_REGS();
L_90ca00: /* 90ca00: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90ca04: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 90ca07: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90ca10(void) {
  LOAD_REGS();
L_90ca10: /* 90ca10: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90ca14: fld dword ptr [eax + 0x28] */
  { double v = F32((uint32_t)(eax + 0x28u)); FPUSH(v); }
/* 90ca17: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90ca20(void) {
  LOAD_REGS();
L_90ca20: /* 90ca20: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90ca24: fld dword ptr [eax + 0x2c] */
  { double v = F32((uint32_t)(eax + 0x2cu)); FPUSH(v); }
/* 90ca27: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90ca30(void) {
  LOAD_REGS();
L_90ca30: /* 90ca30: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90ca34: mov eax, dword ptr [eax + 0x50] */
  eax = R32((uint32_t)(eax + 0x50u));
/* 90ca37: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90ca40(void) {
  LOAD_REGS();
L_90ca40: /* 90ca40: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90ca44: fld dword ptr [eax + 0x54] */
  { double v = F32((uint32_t)(eax + 0x54u)); FPUSH(v); }
/* 90ca47: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90ca50(void) {
  LOAD_REGS();
L_90ca50: /* 90ca50: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90ca54: fld dword ptr [eax + 0x58] */
  { double v = F32((uint32_t)(eax + 0x58u)); FPUSH(v); }
/* 90ca57: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90ca60(void) {
  LOAD_REGS();
L_90ca60: /* 90ca60: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 90ca64: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90ca65: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90ca66: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90ca67: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90ca68: call 0x90c9d0 */
  esp -= 4; W32(esp, 0x90ca6du); SPILL(); f_90c9d0(); if (g_unwind) return; RELOAD();
/* 90ca6d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90ca6e: mov edx, eax */
  edx = eax;
/* 90ca70: call 0x90c9e0 */
  esp -= 4; W32(esp, 0x90ca75u); SPILL(); f_90c9e0(); if (g_unwind) return; RELOAD();
/* 90ca75: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 90ca79: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90ca7a: mov edi, eax */
  edi = eax;
/* 90ca7c: call 0x90c850 */
  esp -= 4; W32(esp, 0x90ca81u); SPILL(); f_90c850(); if (g_unwind) return; RELOAD();
/* 90ca81: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 90ca85: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 90ca89: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90ca8a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90ca8b: call 0x90c890 */
  esp -= 4; W32(esp, 0x90ca90u); SPILL(); f_90c890(); if (g_unwind) return; RELOAD();
/* 90ca90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90ca91: call 0x90c860 */
  esp -= 4; W32(esp, 0x90ca96u); SPILL(); f_90c860(); if (g_unwind) return; RELOAD();
/* 90ca96: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90ca97: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 90ca9a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90ca9b: call 0x90c8a0 */
  esp -= 4; W32(esp, 0x90caa0u); SPILL(); f_90c8a0(); if (g_unwind) return; RELOAD();
/* 90caa0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90caa1: call 0x90c870 */
  esp -= 4; W32(esp, 0x90caa6u); SPILL(); f_90c870(); if (g_unwind) return; RELOAD();
/* 90caa6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90caa7: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 90caaa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90caab: call 0x90c8d0 */
  esp -= 4; W32(esp, 0x90cab0u); SPILL(); f_90c8d0(); if (g_unwind) return; RELOAD();
/* 90cab0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90cab1: call 0x90c880 */
  esp -= 4; W32(esp, 0x90cab6u); SPILL(); f_90c880(); if (g_unwind) return; RELOAD();
/* 90cab6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90cab7: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 90caba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90cabb: call 0x90c900 */
  esp -= 4; W32(esp, 0x90cac0u); SPILL(); f_90c900(); if (g_unwind) return; RELOAD();
/* 90cac0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90cac1: call 0x90c850 */
  esp -= 4; W32(esp, 0x90cac6u); SPILL(); f_90c850(); if (g_unwind) return; RELOAD();
/* 90cac6: fcomp dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
  FPOP();
/* 90caca: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 90cacc: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 90cacf: jp 0x90cad8 */
  if (pf) goto L_90cad8;
L_90cad1: /* 90cad1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90cad2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90cad3: call 0x90c890 */
  esp -= 4; W32(esp, 0x90cad8u); SPILL(); f_90c890(); if (g_unwind) return; RELOAD();
L_90cad8: /* 90cad8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90cad9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90cada: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 90cadb: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90cae0(void) {
  LOAD_REGS();
L_90cae0: /* 90cae0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 90cae4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90cae5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90cae6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90cae7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90cae8: call 0x90c9d0 */
  esp -= 4; W32(esp, 0x90caedu); SPILL(); f_90c9d0(); if (g_unwind) return; RELOAD();
/* 90caed: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90caee: mov edi, eax */
  edi = eax;
/* 90caf0: call 0x90c9e0 */
  esp -= 4; W32(esp, 0x90caf5u); SPILL(); f_90c9e0(); if (g_unwind) return; RELOAD();
/* 90caf5: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 90caf9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90cafa: mov edx, eax */
  edx = eax;
/* 90cafc: call 0x90c850 */
  esp -= 4; W32(esp, 0x90cb01u); SPILL(); f_90c850(); if (g_unwind) return; RELOAD();
/* 90cb01: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 90cb05: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 90cb09: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90cb0a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90cb0b: call 0x90c890 */
  esp -= 4; W32(esp, 0x90cb10u); SPILL(); f_90c890(); if (g_unwind) return; RELOAD();
/* 90cb10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90cb11: call 0x90c860 */
  esp -= 4; W32(esp, 0x90cb16u); SPILL(); f_90c860(); if (g_unwind) return; RELOAD();
/* 90cb16: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90cb17: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 90cb1a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90cb1b: call 0x90c8a0 */
  esp -= 4; W32(esp, 0x90cb20u); SPILL(); f_90c8a0(); if (g_unwind) return; RELOAD();
/* 90cb20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90cb21: call 0x90c870 */
  esp -= 4; W32(esp, 0x90cb26u); SPILL(); f_90c870(); if (g_unwind) return; RELOAD();
/* 90cb26: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90cb27: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 90cb2a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90cb2b: call 0x90c8d0 */
  esp -= 4; W32(esp, 0x90cb30u); SPILL(); f_90c8d0(); if (g_unwind) return; RELOAD();
/* 90cb30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90cb31: call 0x90c880 */
  esp -= 4; W32(esp, 0x90cb36u); SPILL(); f_90c880(); if (g_unwind) return; RELOAD();
/* 90cb36: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90cb37: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 90cb3a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90cb3b: call 0x90c900 */
  esp -= 4; W32(esp, 0x90cb40u); SPILL(); f_90c900(); if (g_unwind) return; RELOAD();
/* 90cb40: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90cb41: call 0x90c850 */
  esp -= 4; W32(esp, 0x90cb46u); SPILL(); f_90c850(); if (g_unwind) return; RELOAD();
/* 90cb46: fcomp dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
  FPOP();
/* 90cb4a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 90cb4c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 90cb4f: jne 0x90cb58 */
  if (!zf) goto L_90cb58;
L_90cb51: /* 90cb51: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90cb52: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90cb53: call 0x90c890 */
  esp -= 4; W32(esp, 0x90cb58u); SPILL(); f_90c890(); if (g_unwind) return; RELOAD();
L_90cb58: /* 90cb58: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90cb59: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90cb5a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 90cb5b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90cb60(void) {
  LOAD_REGS();
L_90cb60: /* 90cb60: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90cb64: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 90cb68: fsub dword ptr [eax + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x14u)));
/* 90cb6b: fstp dword ptr [eax + 0x24] */
  WF32((uint32_t)(eax + 0x24u), ST0); FPOP();
/* 90cb6e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90cb80(void) {
  LOAD_REGS();
L_90cb80: /* 90cb80: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 90cb84: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90cb86: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90cb8a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 90cb8c: jne 0x90cba4 */
  if (!zf) goto L_90cba4;
L_90cb8e: /* 90cb8e: mov ecx, dword ptr [eax + 0x50] */
  ecx = R32((uint32_t)(eax + 0x50u));
/* 90cb91: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90cb93: jne 0x90cba4 */
  if (!zf) goto L_90cba4;
L_90cb95: /* 90cb95: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 90cb98: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90cb9a: jne 0x90cba4 */
  if (!zf) goto L_90cba4;
L_90cb9c: /* 90cb9c: xor ecx, ecx */
  ecx = 0;
/* 90cb9e: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 90cba1: ret 8 */
  esp += 12; SPILL(); return;
L_90cba4: /* 90cba4: mov ecx, 1 */
  ecx = 0x1u;
/* 90cba9: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 90cbac: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90cbb0(void) {
  LOAD_REGS();
L_90cbb0: /* 90cbb0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 90cbb4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90cbb6: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90cbba: jne 0x90cbd7 */
  if (!zf) goto L_90cbd7;
L_90cbbc: /* 90cbbc: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90cbbf: jne 0x90cbd7 */
  if (!zf) goto L_90cbd7;
L_90cbc1: /* 90cbc1: mov ecx, dword ptr [eax + 0x50] */
  ecx = R32((uint32_t)(eax + 0x50u));
/* 90cbc4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90cbc6: jne 0x90cbd7 */
  if (!zf) goto L_90cbd7;
L_90cbc8: /* 90cbc8: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 90cbcb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90cbcd: jne 0x90cbd7 */
  if (!zf) goto L_90cbd7;
L_90cbcf: /* 90cbcf: xor ecx, ecx */
  ecx = 0;
/* 90cbd1: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 90cbd4: ret 8 */
  esp += 12; SPILL(); return;
L_90cbd7: /* 90cbd7: mov ecx, 1 */
  ecx = 0x1u;
/* 90cbdc: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 90cbdf: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90cbf0(void) {
  LOAD_REGS();
L_90cbf0: /* 90cbf0: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 90cbf4: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 90cbfa: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 90cbfe: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 90cc00: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 90cc03: jne 0x90cc0f */
  if (!zf) goto L_90cc0f;
L_90cc05: /* 90cc05: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90cc09: fstp dword ptr [eax + 0x2c] */
  WF32((uint32_t)(eax + 0x2cu), ST0); FPOP();
/* 90cc0c: ret 8 */
  esp += 12; SPILL(); return;
L_90cc0f: /* 90cc0f: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 90cc13: fchs  */
  ST0 = -ST0;
/* 90cc15: fstp dword ptr [ecx + 0x2c] */
  WF32((uint32_t)(ecx + 0x2cu), ST0); FPOP();
/* 90cc18: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90cc20(void) {
  LOAD_REGS();
L_90cc20: /* 90cc20: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 90cc24: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90cc26: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90cc2a: mov dword ptr [eax + 0x50], ecx */
  W32((uint32_t)(eax + 0x50u), ecx);
/* 90cc2d: je 0x90cc41 */
  if (zf) goto L_90cc41;
L_90cc2f: /* 90cc2f: mov dword ptr [eax + 0x1c], 0 */
  W32((uint32_t)(eax + 0x1cu), 0x0u);
L_90cc36: /* 90cc36: mov ecx, 1 */
  ecx = 0x1u;
/* 90cc3b: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 90cc3e: ret 8 */
  esp += 12; SPILL(); return;
L_90cc41: /* 90cc41: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90cc44: jne 0x90cc36 */
  if (!zf) goto L_90cc36;
L_90cc46: /* 90cc46: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 90cc49: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90cc4b: jne 0x90cc36 */
  if (!zf) goto L_90cc36;
L_90cc4d: /* 90cc4d: xor ecx, ecx */
  ecx = 0;
/* 90cc4f: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 90cc52: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90cc60(void) {
  LOAD_REGS();
L_90cc60: /* 90cc60: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 90cc64: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 90cc68: fstp dword ptr [ecx + 0x54] */
  WF32((uint32_t)(ecx + 0x54u), ST0); FPOP();
/* 90cc6b: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 90cc6f: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 90cc75: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 90cc77: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 90cc7a: jnp 0x90cc83 */
  if (!pf) goto L_90cc83;
L_90cc7c: /* 90cc7c: mov eax, 1 */
  eax = 0x1u;
/* 90cc81: jmp 0x90cc85 */
  goto L_90cc85;
L_90cc83: /* 90cc83: xor eax, eax */
  eax = 0;
L_90cc85: /* 90cc85: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 90cc89: mov dword ptr [ecx + 0x50], eax */
  W32((uint32_t)(ecx + 0x50u), eax);
/* 90cc8c: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 90cc92: mov dword ptr [ecx + 0x1c], 0 */
  W32((uint32_t)(ecx + 0x1cu), 0x0u);
/* 90cc99: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 90cc9b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 90cc9e: jp 0x90ccac */
  if (pf) goto L_90ccac;
L_90cca0: /* 90cca0: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 90cca4: fchs  */
  ST0 = -ST0;
/* 90cca6: fstp dword ptr [ecx + 0x58] */
  WF32((uint32_t)(ecx + 0x58u), ST0); FPOP();
/* 90cca9: ret 0xc */
  esp += 16; SPILL(); return;
L_90ccac: /* 90ccac: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 90ccb0: mov dword ptr [ecx + 0x58], eax */
  W32((uint32_t)(ecx + 0x58u), eax);
/* 90ccb3: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_90ccc0(void) {
  LOAD_REGS();
L_90ccc0: /* 90ccc0: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 90ccc4: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 90ccc8: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 90ccce: xor edx, edx */
  edx = 0;
/* 90ccd0: mov dword ptr [ecx + 0x54], edx */
  W32((uint32_t)(ecx + 0x54u), edx);
/* 90ccd3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 90ccd5: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 90ccd8: jnp 0x90cce1 */
  if (!pf) goto L_90cce1;
L_90ccda: /* 90ccda: mov eax, 1 */
  eax = 0x1u;
/* 90ccdf: jmp 0x90cce3 */
  goto L_90cce3;
L_90cce1: /* 90cce1: xor eax, eax */
  eax = 0;
L_90cce3: /* 90cce3: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 90cce7: mov dword ptr [ecx + 0x1c], eax */
  W32((uint32_t)(ecx + 0x1cu), eax);
/* 90ccea: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 90ccf0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 90ccf4: mov dword ptr [ecx + 0x18], eax */
  W32((uint32_t)(ecx + 0x18u), eax);
/* 90ccf7: mov dword ptr [ecx + 0x50], edx */
  W32((uint32_t)(ecx + 0x50u), edx);
/* 90ccfa: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 90ccfc: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 90ccff: jp 0x90cd0d */
  if (pf) goto L_90cd0d;
L_90cd01: /* 90cd01: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 90cd05: fchs  */
  ST0 = -ST0;
/* 90cd07: fstp dword ptr [ecx + 0x58] */
  WF32((uint32_t)(ecx + 0x58u), ST0); FPOP();
/* 90cd0a: ret 0xc */
  esp += 16; SPILL(); return;
L_90cd0d: /* 90cd0d: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 90cd11: mov dword ptr [ecx + 0x58], edx */
  W32((uint32_t)(ecx + 0x58u), edx);
/* 90cd14: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_90cd20(void) {
  LOAD_REGS();
L_90cd20: /* 90cd20: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90cd24: mov eax, dword ptr [eax + 0x1c] */
  eax = R32((uint32_t)(eax + 0x1cu));
/* 90cd27: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90cd30(void) {
  LOAD_REGS();
L_90cd30: /* 90cd30: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 90cd34: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90cd36: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90cd3a: mov dword ptr [eax + 0x1c], ecx */
  W32((uint32_t)(eax + 0x1cu), ecx);
/* 90cd3d: je 0x90cd51 */
  if (zf) goto L_90cd51;
L_90cd3f: /* 90cd3f: mov dword ptr [eax + 0x50], 0 */
  W32((uint32_t)(eax + 0x50u), 0x0u);
L_90cd46: /* 90cd46: mov ecx, 1 */
  ecx = 0x1u;
/* 90cd4b: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 90cd4e: ret 8 */
  esp += 12; SPILL(); return;
L_90cd51: /* 90cd51: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90cd54: jne 0x90cd46 */
  if (!zf) goto L_90cd46;
L_90cd56: /* 90cd56: xor ecx, ecx */
  ecx = 0;
/* 90cd58: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 90cd5b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90cd60(void) {
  LOAD_REGS();
L_90cd60: /* 90cd60: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90cd64: xor ecx, ecx */
  ecx = 0;
/* 90cd66: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 90cd69: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 90cd6c: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 90cd6f: mov dword ptr [eax + 0x20], ecx */
  W32((uint32_t)(eax + 0x20u), ecx);
/* 90cd72: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 90cd75: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90cd80(void) {
  LOAD_REGS();
L_90cd80: /* 90cd80: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90cd84: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 90cd88: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 90cd8a: jge 0x90cd90 */
  if ((sf == of)) goto L_90cd90;
L_90cd8c: /* 90cd8c: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 90cd8f: ret  */
  esp += 4; SPILL(); return;
L_90cd90: /* 90cd90: xor edx, edx */
  edx = 0;
/* 90cd92: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 90cd94: setg dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)(((!zf && sf == of)) ? 1 : 0) & 0xffu);
/* 90cd97: mov eax, edx */
  eax = edx;
/* 90cd99: ret  */
  esp += 4; SPILL(); return;
}

void f_90cda0(void) {
  LOAD_REGS();
L_90cda0: /* 90cda0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90cda4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 90cda7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90cda9: je 0x90ce13 */
  if (zf) goto L_90ce13;
L_90cdab: /* 90cdab: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 90cdaf: fld dword ptr [eax + 0x150] */
  { double v = F32((uint32_t)(eax + 0x150u)); FPUSH(v); }
/* 90cdb5: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 90cdb8: fld dword ptr [eax + 0x140] */
  { double v = F32((uint32_t)(eax + 0x140u)); FPUSH(v); }
/* 90cdbe: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 90cdc1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90cdc3: fld dword ptr [eax + 0x130] */
  { double v = F32((uint32_t)(eax + 0x130u)); FPUSH(v); }
/* 90cdc9: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 90cdcb: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90cdcd: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 90cdd1: fld dword ptr [eax + 0x134] */
  { double v = F32((uint32_t)(eax + 0x134u)); FPUSH(v); }
/* 90cdd7: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 90cdd9: fld dword ptr [eax + 0x154] */
  { double v = F32((uint32_t)(eax + 0x154u)); FPUSH(v); }
/* 90cddf: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 90cde2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90cde4: fld dword ptr [eax + 0x144] */
  { double v = F32((uint32_t)(eax + 0x144u)); FPUSH(v); }
/* 90cdea: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 90cded: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90cdef: fld dword ptr [eax + 0x138] */
  { double v = F32((uint32_t)(eax + 0x138u)); FPUSH(v); }
/* 90cdf5: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 90cdf7: fld dword ptr [eax + 0x158] */
  { double v = F32((uint32_t)(eax + 0x158u)); FPUSH(v); }
/* 90cdfd: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 90ce00: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90ce02: fld dword ptr [eax + 0x148] */
  { double v = F32((uint32_t)(eax + 0x148u)); FPUSH(v); }
/* 90ce08: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 90ce0b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90ce0d: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 90ce11: jmp 0x90ce27 */
  goto L_90ce27;
L_90ce13: /* 90ce13: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 90ce17: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 90ce19: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 90ce1c: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 90ce1f: mov dword ptr [esp], ecx */
  W32((uint32_t)(esp), ecx);
/* 90ce23: mov dword ptr [esp + 8], edx */
  W32((uint32_t)(esp + 0x8u), edx);
L_90ce27: /* 90ce27: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 90ce2b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90ce2d: je 0x90cea1 */
  if (zf) goto L_90cea1;
L_90ce2f: /* 90ce2f: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 90ce33: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 90ce37: fmul dword ptr [eax + 0x138] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x138u)));
/* 90ce3d: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 90ce3f: fmul dword ptr [eax + 0x134] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x134u)));
/* 90ce45: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90ce47: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 90ce4b: fmul dword ptr [eax + 0x130] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x130u)));
/* 90ce51: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90ce53: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 90ce55: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 90ce59: fmul dword ptr [eax + 0x148] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x148u)));
/* 90ce5f: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 90ce61: fmul dword ptr [eax + 0x144] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x144u)));
/* 90ce67: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90ce69: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 90ce6d: fmul dword ptr [eax + 0x140] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x140u)));
/* 90ce73: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90ce75: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 90ce78: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 90ce7c: fmul dword ptr [eax + 0x158] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x158u)));
/* 90ce82: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 90ce84: fmul dword ptr [eax + 0x154] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x154u)));
/* 90ce8a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90ce8c: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 90ce90: fmul dword ptr [eax + 0x150] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x150u)));
/* 90ce96: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90ce98: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 90ce9b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90ce9e: ret 0x10 */
  esp += 20; SPILL(); return;
L_90cea1: /* 90cea1: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 90cea5: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 90cea9: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 90cead: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 90ceaf: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 90ceb2: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 90ceb5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90ceb8: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_90cec0(void) {
  LOAD_REGS();
L_90cec0: /* 90cec0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90cec4: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 90cec7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90cec9: je 0x90d051 */
  if (zf) goto L_90d051;
L_90cecf: /* 90cecf: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 90ced3: fld dword ptr [eax + 0x140] */
  { double v = F32((uint32_t)(eax + 0x140u)); FPUSH(v); }
/* 90ced9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90cedb: je 0x90cfd5 */
  if (zf) goto L_90cfd5;
L_90cee1: /* 90cee1: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 90cee5: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 90cee8: fld dword ptr [eax + 0x150] */
  { double v = F32((uint32_t)(eax + 0x150u)); FPUSH(v); }
/* 90ceee: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 90cef1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90cef3: fld dword ptr [eax + 0x130] */
  { double v = F32((uint32_t)(eax + 0x130u)); FPUSH(v); }
/* 90cef9: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 90cefb: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90cefd: fadd dword ptr [eax + 0x160] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x160u)));
/* 90cf03: fld dword ptr [eax + 0x134] */
  { double v = F32((uint32_t)(eax + 0x134u)); FPUSH(v); }
/* 90cf09: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 90cf0b: fld dword ptr [eax + 0x144] */
  { double v = F32((uint32_t)(eax + 0x144u)); FPUSH(v); }
/* 90cf11: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 90cf14: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90cf16: fld dword ptr [eax + 0x154] */
  { double v = F32((uint32_t)(eax + 0x154u)); FPUSH(v); }
/* 90cf1c: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 90cf1f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90cf21: fadd dword ptr [eax + 0x164] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x164u)));
/* 90cf27: fld dword ptr [eax + 0x138] */
  { double v = F32((uint32_t)(eax + 0x138u)); FPUSH(v); }
/* 90cf2d: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 90cf2f: fld dword ptr [eax + 0x148] */
  { double v = F32((uint32_t)(eax + 0x148u)); FPUSH(v); }
/* 90cf35: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 90cf38: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90cf3a: fld dword ptr [eax + 0x158] */
  { double v = F32((uint32_t)(eax + 0x158u)); FPUSH(v); }
/* 90cf40: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 90cf43: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90cf45: fadd dword ptr [eax + 0x168] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x168u)));
/* 90cf4b: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 90cf4f: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 90cf53: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 90cf55: fsub dword ptr [ecx + 0x160] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x160u)));
/* 90cf5b: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 90cf5f: fsub dword ptr [ecx + 0x164] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x164u)));
/* 90cf65: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 90cf69: fsub dword ptr [ecx + 0x168] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x168u)));
/* 90cf6f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 90cf71: fmul dword ptr [ecx + 0x138] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x138u)));
/* 90cf77: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 90cf79: fmul dword ptr [ecx + 0x134] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x134u)));
/* 90cf7f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90cf81: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 90cf85: fmul dword ptr [ecx + 0x130] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x130u)));
/* 90cf8b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90cf8d: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 90cf8f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 90cf91: fmul dword ptr [ecx + 0x148] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x148u)));
/* 90cf97: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 90cf99: fmul dword ptr [ecx + 0x144] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x144u)));
/* 90cf9f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90cfa1: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 90cfa5: fmul dword ptr [ecx + 0x140] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x140u)));
/* 90cfab: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90cfad: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 90cfb0: fmul dword ptr [ecx + 0x158] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x158u)));
/* 90cfb6: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 90cfb8: fmul dword ptr [ecx + 0x154] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x154u)));
/* 90cfbe: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90cfc0: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 90cfc4: fmul dword ptr [ecx + 0x150] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x150u)));
/* 90cfca: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90cfcc: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 90cfcf: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90cfd2: ret 0x10 */
  esp += 20; SPILL(); return;
L_90cfd5: /* 90cfd5: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 90cfd9: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 90cfdc: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 90cfe0: fld dword ptr [eax + 0x150] */
  { double v = F32((uint32_t)(eax + 0x150u)); FPUSH(v); }
/* 90cfe6: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 90cfe9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90cfeb: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 90cfed: fmul dword ptr [eax + 0x130] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x130u)));
/* 90cff3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90cff5: fadd dword ptr [eax + 0x160] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x160u)));
/* 90cffb: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 90cffd: fld dword ptr [eax + 0x134] */
  { double v = F32((uint32_t)(eax + 0x134u)); FPUSH(v); }
/* 90d003: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 90d005: fld dword ptr [eax + 0x144] */
  { double v = F32((uint32_t)(eax + 0x144u)); FPUSH(v); }
/* 90d00b: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 90d00e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90d010: fld dword ptr [eax + 0x154] */
  { double v = F32((uint32_t)(eax + 0x154u)); FPUSH(v); }
/* 90d016: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 90d019: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90d01b: fadd dword ptr [eax + 0x164] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x164u)));
/* 90d021: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* 90d024: fld dword ptr [eax + 0x138] */
  { double v = F32((uint32_t)(eax + 0x138u)); FPUSH(v); }
/* 90d02a: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 90d02c: fld dword ptr [eax + 0x148] */
  { double v = F32((uint32_t)(eax + 0x148u)); FPUSH(v); }
/* 90d032: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 90d035: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90d037: fld dword ptr [eax + 0x158] */
  { double v = F32((uint32_t)(eax + 0x158u)); FPUSH(v); }
/* 90d03d: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 90d040: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90d042: fadd dword ptr [eax + 0x168] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x168u)));
/* 90d048: fstp dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 90d04b: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90d04e: ret 0x10 */
  esp += 20; SPILL(); return;
L_90d051: /* 90d051: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 90d055: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90d057: je 0x90d0df */
  if (zf) goto L_90d0df;
L_90d05d: /* 90d05d: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 90d061: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 90d063: fsub dword ptr [eax + 0x160] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x160u)));
/* 90d069: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 90d06c: fsub dword ptr [eax + 0x164] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x164u)));
/* 90d072: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 90d075: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 90d079: fsub dword ptr [eax + 0x168] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x168u)));
/* 90d07f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 90d081: fmul dword ptr [eax + 0x138] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x138u)));
/* 90d087: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 90d089: fmul dword ptr [eax + 0x134] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x134u)));
/* 90d08f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90d091: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 90d093: fmul dword ptr [eax + 0x130] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x130u)));
/* 90d099: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90d09b: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 90d09d: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 90d09f: fmul dword ptr [eax + 0x148] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x148u)));
/* 90d0a5: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 90d0a7: fmul dword ptr [eax + 0x144] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x144u)));
/* 90d0ad: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90d0af: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 90d0b1: fmul dword ptr [eax + 0x140] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x140u)));
/* 90d0b7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90d0b9: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 90d0bc: fmul dword ptr [eax + 0x158] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x158u)));
/* 90d0c2: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 90d0c4: fmul dword ptr [eax + 0x154] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x154u)));
/* 90d0ca: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90d0cc: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 90d0ce: fmul dword ptr [eax + 0x150] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x150u)));
/* 90d0d4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90d0d6: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 90d0d9: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90d0dc: ret 0x10 */
  esp += 20; SPILL(); return;
L_90d0df: /* 90d0df: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 90d0e3: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 90d0e5: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 90d0e9: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 90d0eb: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 90d0ee: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 90d0f1: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 90d0f4: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 90d0f7: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90d0fa: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_90d100(void) {
  LOAD_REGS();
L_90d100: /* 90d100: jmp 0x90cda0 */
  SPILL(); f_90cda0(); return;
}

void f_90d110(void) {
  LOAD_REGS();
L_90d110: /* 90d110: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90d114: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 90d118: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 90d11b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90d11d: je 0x90d149 */
  if (zf) goto L_90d149;
L_90d11f: /* 90d11f: fld dword ptr [eax + 0x190] */
  { double v = F32((uint32_t)(eax + 0x190u)); FPUSH(v); }
/* 90d125: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* 90d127: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 90d12b: fld dword ptr [eax + 0x194] */
  { double v = F32((uint32_t)(eax + 0x194u)); FPUSH(v); }
/* 90d131: fadd dword ptr [ecx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x4u)));
/* 90d134: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 90d138: fld dword ptr [eax + 0x198] */
  { double v = F32((uint32_t)(eax + 0x198u)); FPUSH(v); }
/* 90d13e: fadd dword ptr [ecx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x8u)));
/* 90d141: lea ecx, [esp] */
  ecx = (uint32_t)(esp);
/* 90d145: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
L_90d149: /* 90d149: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90d14a: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 90d14e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90d14f: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 90d153: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90d154: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90d155: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90d156: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90d157: call 0x90cec0 */
  esp -= 4; W32(esp, 0x90d15cu); SPILL(); f_90cec0(); if (g_unwind) return; RELOAD();
/* 90d15c: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90d15e: je 0x90d182 */
  if (zf) goto L_90d182;
L_90d160: /* 90d160: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 90d162: fsub dword ptr [edi + 0x190] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x190u)));
/* 90d168: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 90d16a: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 90d16d: fsub dword ptr [edi + 0x194] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x194u)));
/* 90d173: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 90d176: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 90d179: fsub dword ptr [edi + 0x198] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x198u)));
/* 90d17f: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
L_90d182: /* 90d182: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90d183: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90d184: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90d187: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_90d190(void) {
  LOAD_REGS();
L_90d190: /* 90d190: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 90d194: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 90d198: fmul dword ptr [esp + 8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x8u)));
/* 90d19c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90d19d: mov ecx, 9 */
  ecx = 0x9u;
/* 90d1a2: xor eax, eax */
  eax = 0;
/* 90d1a4: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 90d1a8: mov edi, edx */
  edi = edx;
/* 90d1aa: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 90d1ac: fmul dword ptr [0xa11210] */
  ST0 = ST0 * (F32((uint32_t)(0xa11210u)));
/* 90d1b2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90d1b3: fst dword ptr [edx] */
  WF32((uint32_t)(edx), ST0);
/* 90d1b5: fst dword ptr [edx + 0x10] */
  WF32((uint32_t)(edx + 0x10u), ST0);
/* 90d1b8: fstp dword ptr [edx + 0x20] */
  WF32((uint32_t)(edx + 0x20u), ST0); FPOP();
/* 90d1bb: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_90d1c0(void) {
  LOAD_REGS();
L_90d1c0: /* 90d1c0: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 90d1c4: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 90d1c8: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 90d1cc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90d1cd: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 90d1d1: mov ecx, 9 */
  ecx = 0x9u;
/* 90d1d6: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 90d1da: xor eax, eax */
  eax = 0;
/* 90d1dc: mov edi, edx */
  edi = edx;
/* 90d1de: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 90d1e0: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 90d1e2: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 90d1e4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90d1e5: fmul dword ptr [esp + 4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4u)));
/* 90d1e9: fmul dword ptr [0xa20dfc] */
  ST0 = ST0 * (F32((uint32_t)(0xa20dfcu)));
/* 90d1ef: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 90d1f1: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 90d1f5: fmul dword ptr [esp + 8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x8u)));
/* 90d1f9: fst dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0);
/* 90d1fd: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 90d1ff: fmul dword ptr [esp + 4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4u)));
/* 90d203: fmul dword ptr [0xa20dfc] */
  ST0 = ST0 * (F32((uint32_t)(0xa20dfcu)));
/* 90d209: fstp dword ptr [edx + 0x10] */
  WF32((uint32_t)(edx + 0x10u), ST0); FPOP();
/* 90d20c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 90d20e: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 90d212: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 90d214: fmul dword ptr [esp + 4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4u)));
/* 90d218: fmul dword ptr [0xa20dfc] */
  ST0 = ST0 * (F32((uint32_t)(0xa20dfcu)));
/* 90d21e: fstp dword ptr [edx + 0x20] */
  WF32((uint32_t)(edx + 0x20u), ST0); FPOP();
/* 90d221: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 90d223: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_90d230(void) {
  LOAD_REGS();
L_90d230: /* 90d230: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90d231: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 90d235: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90d236: call 0x90c9f0 */
  esp -= 4; W32(esp, 0x90d23bu); SPILL(); f_90c9f0(); if (g_unwind) return; RELOAD();
/* 90d23b: fsub dword ptr [esp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0xcu)));
/* 90d23f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90d240: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 90d244: call 0x90c9c0 */
  esp -= 4; W32(esp, 0x90d249u); SPILL(); f_90c9c0(); if (g_unwind) return; RELOAD();
/* 90d249: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90d24b: jne 0x90d255 */
  if (!zf) goto L_90d255;
L_90d24d: /* 90d24d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 90d24f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90d250: call 0x90cbb0 */
  esp -= 4; W32(esp, 0x90d255u); SPILL(); f_90cbb0(); if (g_unwind) return; RELOAD();
L_90d255: /* 90d255: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 90d259: fchs  */
  ST0 = -ST0;
/* 90d25b: fcomp dword ptr [esp + 8] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x8u)));
  FPOP();
/* 90d25f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 90d261: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 90d264: jne 0x90d27a */
  if (!zf) goto L_90d27a;
L_90d266: /* 90d266: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 90d26a: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 90d26e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90d26f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90d270: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90d271: call 0x90cc60 */
  esp -= 4; W32(esp, 0x90d276u); SPILL(); f_90cc60(); if (g_unwind) return; RELOAD();
/* 90d276: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90d277: ret 0x14 */
  esp += 24; SPILL(); return;
L_90d27a: /* 90d27a: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 90d27e: fcomp dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
  FPOP();
/* 90d282: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 90d286: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 90d288: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 90d28b: jne 0x90d2a2 */
  if (!zf) goto L_90d2a2;
L_90d28d: /* 90d28d: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 90d291: fchs  */
  ST0 = -ST0;
/* 90d293: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90d294: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90d295: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 90d298: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90d299: call 0x90cc60 */
  esp -= 4; W32(esp, 0x90d29eu); SPILL(); f_90cc60(); if (g_unwind) return; RELOAD();
/* 90d29e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90d29f: ret 0x14 */
  esp += 24; SPILL(); return;
L_90d2a2: /* 90d2a2: fdiv dword ptr [esp + 0x10] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x10u)));
/* 90d2a6: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 90d2aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90d2ab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90d2ac: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 90d2b0: fchs  */
  ST0 = -ST0;
/* 90d2b2: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 90d2b5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90d2b6: call 0x90cc60 */
  esp -= 4; W32(esp, 0x90d2bbu); SPILL(); f_90cc60(); if (g_unwind) return; RELOAD();
/* 90d2bb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90d2bc: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_90d2c0(void) {
  LOAD_REGS();
L_90d2c0: /* 90d2c0: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 90d2c4: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 90d2c8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90d2c9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90d2ca: lea edi, [edx + 0xf0] */
  edi = (uint32_t)(edx + 0xf0u);
/* 90d2d0: mov ecx, 0x10 */
  ecx = 0x10u;
/* 90d2d5: mov esi, eax */
  esi = eax;
/* 90d2d7: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 90d2d9: lea edi, [edx + 0x130] */
  edi = (uint32_t)(edx + 0x130u);
/* 90d2df: mov ecx, 0x10 */
  ecx = 0x10u;
/* 90d2e4: mov esi, eax */
  esi = eax;
/* 90d2e6: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 90d2e8: mov ecx, dword ptr [edx + 0x19c] */
  ecx = R32((uint32_t)(edx + 0x19cu));
/* 90d2ee: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90d2f0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90d2f1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90d2f2: je 0x90d367 */
  if (zf) goto L_90d367;
L_90d2f4: /* 90d2f4: fld dword ptr [edx + 0x190] */
  { double v = F32((uint32_t)(edx + 0x190u)); FPUSH(v); }
/* 90d2fa: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 90d300: fld dword ptr [edx + 0x194] */
  { double v = F32((uint32_t)(edx + 0x194u)); FPUSH(v); }
/* 90d306: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 90d30c: fld dword ptr [edx + 0x198] */
  { double v = F32((uint32_t)(edx + 0x198u)); FPUSH(v); }
/* 90d312: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 90d318: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 90d31a: fmul dword ptr [eax + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x20u)));
/* 90d31d: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 90d31f: fmul dword ptr [eax + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x10u)));
/* 90d322: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90d324: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 90d326: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 90d328: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90d32a: fadd dword ptr [eax + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x30u)));
/* 90d32d: fstp dword ptr [edx + 0x160] */
  WF32((uint32_t)(edx + 0x160u), ST0); FPOP();
/* 90d333: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 90d335: fmul dword ptr [eax + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x24u)));
/* 90d338: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 90d33a: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 90d33d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90d33f: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 90d341: fmul dword ptr [eax + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x14u)));
/* 90d344: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90d346: fadd dword ptr [eax + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x34u)));
/* 90d349: fstp dword ptr [edx + 0x164] */
  WF32((uint32_t)(edx + 0x164u), ST0); FPOP();
/* 90d34f: fmul dword ptr [eax + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x28u)));
/* 90d352: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 90d354: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 90d357: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 90d359: fmul dword ptr [eax + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x18u)));
/* 90d35c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90d35e: fadd dword ptr [eax + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x38u)));
/* 90d361: fstp dword ptr [edx + 0x168] */
  WF32((uint32_t)(edx + 0x168u), ST0); FPOP();
L_90d367: /* 90d367: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90d370(void) {
  LOAD_REGS();
L_90d370: /* 90d370: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90d374: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90d375: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90d376: lea edx, [eax + 0x130] */
  edx = (uint32_t)(eax + 0x130u);
/* 90d37c: lea edi, [eax + 0xf0] */
  edi = (uint32_t)(eax + 0xf0u);
/* 90d382: mov ecx, 0x10 */
  ecx = 0x10u;
/* 90d387: mov esi, edx */
  esi = edx;
/* 90d389: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 90d38b: mov ecx, dword ptr [eax + 0x19c] */
  ecx = R32((uint32_t)(eax + 0x19cu));
/* 90d391: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90d393: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90d394: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90d395: je 0x90d40e */
  if (zf) goto L_90d40e;
L_90d397: /* 90d397: fld dword ptr [edx + 0x20] */
  { double v = F32((uint32_t)(edx + 0x20u)); FPUSH(v); }
/* 90d39a: fmul dword ptr [eax + 0x198] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x198u)));
/* 90d3a0: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 90d3a3: fmul dword ptr [eax + 0x194] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x194u)));
/* 90d3a9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90d3ab: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 90d3ad: fmul dword ptr [eax + 0x190] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x190u)));
/* 90d3b3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90d3b5: fadd dword ptr [edx + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x30u)));
/* 90d3b8: fstp dword ptr [eax + 0x120] */
  WF32((uint32_t)(eax + 0x120u), ST0); FPOP();
/* 90d3be: fld dword ptr [edx + 0x24] */
  { double v = F32((uint32_t)(edx + 0x24u)); FPUSH(v); }
/* 90d3c1: fmul dword ptr [eax + 0x198] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x198u)));
/* 90d3c7: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 90d3ca: fmul dword ptr [eax + 0x190] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x190u)));
/* 90d3d0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90d3d2: fld dword ptr [edx + 0x14] */
  { double v = F32((uint32_t)(edx + 0x14u)); FPUSH(v); }
/* 90d3d5: fmul dword ptr [eax + 0x194] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x194u)));
/* 90d3db: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90d3dd: fadd dword ptr [edx + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x34u)));
/* 90d3e0: fstp dword ptr [eax + 0x124] */
  WF32((uint32_t)(eax + 0x124u), ST0); FPOP();
/* 90d3e6: fld dword ptr [edx + 0x28] */
  { double v = F32((uint32_t)(edx + 0x28u)); FPUSH(v); }
/* 90d3e9: fmul dword ptr [eax + 0x198] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x198u)));
/* 90d3ef: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 90d3f2: fmul dword ptr [eax + 0x190] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x190u)));
/* 90d3f8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90d3fa: fld dword ptr [edx + 0x18] */
  { double v = F32((uint32_t)(edx + 0x18u)); FPUSH(v); }
/* 90d3fd: fmul dword ptr [eax + 0x194] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x194u)));
/* 90d403: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90d405: fadd dword ptr [edx + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x38u)));
/* 90d408: fstp dword ptr [eax + 0x128] */
  WF32((uint32_t)(eax + 0x128u), ST0); FPOP();
L_90d40e: /* 90d40e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90d40f: add eax, 0xb0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xb0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90d414: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90d415: call 0x972d20 */
  esp -= 4; W32(esp, 0x90d41au); SPILL(); f_972d20(); if (g_unwind) return; RELOAD();
/* 90d41a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90d420(void) {
  LOAD_REGS();
L_90d420: /* 90d420: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90d424: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90d425: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90d426: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 90d42a: lea esi, [eax + 0xf0] */
  esi = (uint32_t)(eax + 0xf0u);
/* 90d430: mov ecx, 0x10 */
  ecx = 0x10u;
/* 90d435: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 90d437: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90d438: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90d439: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90d440(void) {
  LOAD_REGS();
L_90d440: /* 90d440: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90d444: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90d445: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90d446: call 0x90b7e0 */
  esp -= 4; W32(esp, 0x90d44bu); SPILL(); f_90b7e0(); if (g_unwind) return; RELOAD();
/* 90d44b: mov esi, eax */
  esi = eax;
/* 90d44d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90d44f: jne 0x90d455 */
  if (!zf) goto L_90d455;
L_90d451: /* 90d451: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90d452: ret 4 */
  esp += 8; SPILL(); return;
L_90d455: /* 90d455: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90d456: mov dword ptr [esi + 0xb0], 1 */
  W32((uint32_t)(esi + 0xb0u), 0x1u);
/* 90d460: mov dword ptr [esi + 0x60], 0x91cc50 */
  W32((uint32_t)(esi + 0x60u), 0x91cc50u);
/* 90d467: mov dword ptr [esi + 0x64], 6 */
  W32((uint32_t)(esi + 0x64u), 0x6u);
/* 90d46e: mov dword ptr [esi + 0xa8], 0x90b980 */
  W32((uint32_t)(esi + 0xa8u), 0x90b980u);
/* 90d478: mov dword ptr [esi + 0xac], 0x90b9b0 */
  W32((uint32_t)(esi + 0xacu), 0x90b9b0u);
/* 90d482: call 0x90d490 */
  esp -= 4; W32(esp, 0x90d487u); SPILL(); f_90d490(); if (g_unwind) return; RELOAD();
/* 90d487: mov eax, esi */
  eax = esi;
/* 90d489: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90d48a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90d490(void) {
  LOAD_REGS();
L_90d490: /* 90d490: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90d491: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 90d495: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90d496: call 0x90d4d0 */
  esp -= 4; W32(esp, 0x90d49bu); SPILL(); f_90d4d0(); if (g_unwind) return; RELOAD();
/* 90d49b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90d49c: call 0x90bd20 */
  esp -= 4; W32(esp, 0x90d4a1u); SPILL(); f_90bd20(); if (g_unwind) return; RELOAD();
/* 90d4a1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90d4a3: je 0x90d4b1 */
  if (zf) goto L_90d4b1;
L_90d4a5: /* 90d4a5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90d4a6: call 0x90d4d0 */
  esp -= 4; W32(esp, 0x90d4abu); SPILL(); f_90d4d0(); if (g_unwind) return; RELOAD();
/* 90d4ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90d4ac: call 0x90bcb0 */
  esp -= 4; W32(esp, 0x90d4b1u); SPILL(); f_90bcb0(); if (g_unwind) return; RELOAD();
L_90d4b1: /* 90d4b1: lea eax, [esi + 0x160] */
  eax = (uint32_t)(esi + 0x160u);
/* 90d4b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90d4b8: call 0x90c960 */
  esp -= 4; W32(esp, 0x90d4bdu); SPILL(); f_90c960(); if (g_unwind) return; RELOAD();
/* 90d4bd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90d4be: call 0x90d4d0 */
  esp -= 4; W32(esp, 0x90d4c3u); SPILL(); f_90d4d0(); if (g_unwind) return; RELOAD();
/* 90d4c3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90d4c4: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 90d4c8: jmp 0x90b820 */
  SPILL(); f_90b820(); return;
}

void f_90d4d0(void) {
  LOAD_REGS();
L_90d4d0: /* 90d4d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90d4d4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90d4e0(void) {
  LOAD_REGS();
L_90d4e0: /* 90d4e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90d4e4: mov edx, dword ptr [eax + 0xb0] */
  edx = R32((uint32_t)(eax + 0xb0u));
/* 90d4ea: xor ecx, ecx */
  ecx = 0;
/* 90d4ec: cmp edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90d4ef: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 90d4f2: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 90d4f3: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 90d4f5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90d500(void) {
  LOAD_REGS();
L_90d500: /* 90d500: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90d504: add eax, 0x160 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x160u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90d509: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90d510(void) {
  LOAD_REGS();
L_90d510: /* 90d510: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90d514: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90d515: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90d516: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90d517: call 0x90d500 */
  esp -= 4; W32(esp, 0x90d51cu); SPILL(); f_90d500(); if (g_unwind) return; RELOAD();
/* 90d51c: mov esi, eax */
  esi = eax;
/* 90d51e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90d51f: call 0x90c960 */
  esp -= 4; W32(esp, 0x90d524u); SPILL(); f_90c960(); if (g_unwind) return; RELOAD();
/* 90d524: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 90d528: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90d529: call 0x90c9d0 */
  esp -= 4; W32(esp, 0x90d52eu); SPILL(); f_90c9d0(); if (g_unwind) return; RELOAD();
/* 90d52e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90d52f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90d530: call 0x90ca60 */
  esp -= 4; W32(esp, 0x90d535u); SPILL(); f_90ca60(); if (g_unwind) return; RELOAD();
/* 90d535: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90d536: call 0x90c9e0 */
  esp -= 4; W32(esp, 0x90d53bu); SPILL(); f_90c9e0(); if (g_unwind) return; RELOAD();
/* 90d53b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90d53c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90d53d: call 0x90cae0 */
  esp -= 4; W32(esp, 0x90d542u); SPILL(); f_90cae0(); if (g_unwind) return; RELOAD();
/* 90d542: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90d543: call 0x90c9b0 */
  esp -= 4; W32(esp, 0x90d548u); SPILL(); f_90c9b0(); if (g_unwind) return; RELOAD();
/* 90d548: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90d549: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90d54a: call 0x90cb80 */
  esp -= 4; W32(esp, 0x90d54fu); SPILL(); f_90cb80(); if (g_unwind) return; RELOAD();
/* 90d54f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90d550: call 0x90ca50 */
  esp -= 4; W32(esp, 0x90d555u); SPILL(); f_90ca50(); if (g_unwind) return; RELOAD();
/* 90d555: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90d556: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 90d559: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90d55a: call 0x90ca40 */
  esp -= 4; W32(esp, 0x90d55fu); SPILL(); f_90ca40(); if (g_unwind) return; RELOAD();
/* 90d55f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90d560: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 90d563: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90d564: call 0x90cc60 */
  esp -= 4; W32(esp, 0x90d569u); SPILL(); f_90cc60(); if (g_unwind) return; RELOAD();
/* 90d569: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90d56a: call 0x90ca30 */
  esp -= 4; W32(esp, 0x90d56fu); SPILL(); f_90ca30(); if (g_unwind) return; RELOAD();
/* 90d56f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90d570: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90d571: call 0x90cc20 */
  esp -= 4; W32(esp, 0x90d576u); SPILL(); f_90cc20(); if (g_unwind) return; RELOAD();
/* 90d576: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90d577: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90d578: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90d580(void) {
  LOAD_REGS();
L_90d580: /* 90d580: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90d584: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90d585: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90d586: call 0x90b7e0 */
  esp -= 4; W32(esp, 0x90d58bu); SPILL(); f_90b7e0(); if (g_unwind) return; RELOAD();
/* 90d58b: mov esi, eax */
  esi = eax;
/* 90d58d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90d58f: jne 0x90d595 */
  if (!zf) goto L_90d595;
L_90d591: /* 90d591: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90d592: ret 4 */
  esp += 8; SPILL(); return;
L_90d595: /* 90d595: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90d596: mov dword ptr [esi + 0xb0], 0xf */
  W32((uint32_t)(esi + 0xb0u), 0xfu);
/* 90d5a0: mov dword ptr [esi + 0x60], 0x923cb0 */
  W32((uint32_t)(esi + 0x60u), 0x923cb0u);
/* 90d5a7: mov dword ptr [esi + 0x64], 1 */
  W32((uint32_t)(esi + 0x64u), 0x1u);
/* 90d5ae: mov dword ptr [esi + 0xa8], 0x90b980 */
  W32((uint32_t)(esi + 0xa8u), 0x90b980u);
/* 90d5b8: mov dword ptr [esi + 0xac], 0x90b9b0 */
  W32((uint32_t)(esi + 0xacu), 0x90b9b0u);
/* 90d5c2: call 0x90d5d0 */
  esp -= 4; W32(esp, 0x90d5c7u); SPILL(); f_90d5d0(); if (g_unwind) return; RELOAD();
/* 90d5c7: mov eax, esi */
  eax = esi;
/* 90d5c9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90d5ca: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90d5d0(void) {
  LOAD_REGS();
L_90d5d0: /* 90d5d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90d5d1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 90d5d5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90d5d6: call 0x90d630 */
  esp -= 4; W32(esp, 0x90d5dbu); SPILL(); f_90d630(); if (g_unwind) return; RELOAD();
/* 90d5db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90d5dc: call 0x90bd20 */
  esp -= 4; W32(esp, 0x90d5e1u); SPILL(); f_90bd20(); if (g_unwind) return; RELOAD();
/* 90d5e1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90d5e3: je 0x90d5f1 */
  if (zf) goto L_90d5f1;
L_90d5e5: /* 90d5e5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90d5e6: call 0x90d630 */
  esp -= 4; W32(esp, 0x90d5ebu); SPILL(); f_90d630(); if (g_unwind) return; RELOAD();
/* 90d5eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90d5ec: call 0x90bcb0 */
  esp -= 4; W32(esp, 0x90d5f1u); SPILL(); f_90bcb0(); if (g_unwind) return; RELOAD();
L_90d5f1: /* 90d5f1: mov eax, 0x7f7fffff */
  eax = 0x7f7fffffu;
/* 90d5f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90d5f7: mov dword ptr [esi + 0x160], 0x40490fdb */
  W32((uint32_t)(esi + 0x160u), 0x40490fdbu);
/* 90d601: mov dword ptr [esi + 0x164], 0xbf800000 */
  W32((uint32_t)(esi + 0x164u), 0xbf800000u);
/* 90d60b: mov dword ptr [esi + 0x168], eax */
  W32((uint32_t)(esi + 0x168u), eax);
/* 90d611: mov dword ptr [esi + 0x16c], eax */
  W32((uint32_t)(esi + 0x16cu), eax);
/* 90d617: call 0x90d630 */
  esp -= 4; W32(esp, 0x90d61cu); SPILL(); f_90d630(); if (g_unwind) return; RELOAD();
/* 90d61c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90d61d: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 90d621: jmp 0x90b820 */
  SPILL(); f_90b820(); return;
}

void f_90d630(void) {
  LOAD_REGS();
L_90d630: /* 90d630: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90d634: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90d640(void) {
  LOAD_REGS();
L_90d640: /* 90d640: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90d644: mov edx, dword ptr [eax + 0xb0] */
  edx = R32((uint32_t)(eax + 0xb0u));
/* 90d64a: xor ecx, ecx */
  ecx = 0;
/* 90d64c: cmp edx, 0xf */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90d64f: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 90d652: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 90d653: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 90d655: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90d660(void) {
  LOAD_REGS();
L_90d660: /* 90d660: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90d664: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 90d668: fstp dword ptr [eax + 0x160] */
  WF32((uint32_t)(eax + 0x160u), ST0); FPOP();
/* 90d66e: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 90d672: fcos  */
  ST0 = cos(ST0); FSW_CC &= ~0x400;
/* 90d674: fstp dword ptr [eax + 0x164] */
  WF32((uint32_t)(eax + 0x164u), ST0); FPOP();
/* 90d67a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90d680(void) {
  LOAD_REGS();
L_90d680: /* 90d680: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90d684: fld dword ptr [eax + 0x160] */
  { double v = F32((uint32_t)(eax + 0x160u)); FPUSH(v); }
/* 90d68a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90d690(void) {
  LOAD_REGS();
L_90d690: /* 90d690: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 90d694: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90d698: fstp dword ptr [eax + 0x168] */
  WF32((uint32_t)(eax + 0x168u), ST0); FPOP();
/* 90d69e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90d6b0(void) {
  LOAD_REGS();
L_90d6b0: /* 90d6b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90d6b4: fld dword ptr [eax + 0x168] */
  { double v = F32((uint32_t)(eax + 0x168u)); FPUSH(v); }
/* 90d6ba: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90d6c0(void) {
  LOAD_REGS();
L_90d6c0: /* 90d6c0: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 90d6c4: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90d6c8: fstp dword ptr [eax + 0x16c] */
  WF32((uint32_t)(eax + 0x16cu), ST0); FPOP();
/* 90d6ce: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90d6e0(void) {
  LOAD_REGS();
L_90d6e0: /* 90d6e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90d6e4: fld dword ptr [eax + 0x16c] */
  { double v = F32((uint32_t)(eax + 0x16cu)); FPUSH(v); }
/* 90d6ea: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90d6f0(void) {
  LOAD_REGS();
L_90d6f0: /* 90d6f0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90d6f4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90d6f5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90d6f6: call 0x90b7e0 */
  esp -= 4; W32(esp, 0x90d6fbu); SPILL(); f_90b7e0(); if (g_unwind) return; RELOAD();
/* 90d6fb: mov esi, eax */
  esi = eax;
/* 90d6fd: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90d6ff: jne 0x90d705 */
  if (!zf) goto L_90d705;
L_90d701: /* 90d701: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90d702: ret 4 */
  esp += 8; SPILL(); return;
L_90d705: /* 90d705: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90d706: mov dword ptr [esi + 0xb0], 3 */
  W32((uint32_t)(esi + 0xb0u), 0x3u);
/* 90d710: mov dword ptr [esi + 0x60], 0x91ea90 */
  W32((uint32_t)(esi + 0x60u), 0x91ea90u);
/* 90d717: mov dword ptr [esi + 0x64], 6 */
  W32((uint32_t)(esi + 0x64u), 0x6u);
/* 90d71e: mov dword ptr [esi + 0xa8], 0x90b980 */
  W32((uint32_t)(esi + 0xa8u), 0x90b980u);
/* 90d728: mov dword ptr [esi + 0xac], 0x90b9b0 */
  W32((uint32_t)(esi + 0xacu), 0x90b9b0u);
/* 90d732: call 0x90d740 */
  esp -= 4; W32(esp, 0x90d737u); SPILL(); f_90d740(); if (g_unwind) return; RELOAD();
/* 90d737: mov eax, esi */
  eax = esi;
/* 90d739: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90d73a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90d740(void) {
  LOAD_REGS();
L_90d740: /* 90d740: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90d741: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90d742: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 90d746: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90d747: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90d748: call 0x90d810 */
  esp -= 4; W32(esp, 0x90d74du); SPILL(); f_90d810(); if (g_unwind) return; RELOAD();
/* 90d74d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90d74e: mov ebx, eax */
  ebx = eax;
/* 90d750: call 0x90d810 */
  esp -= 4; W32(esp, 0x90d755u); SPILL(); f_90d810(); if (g_unwind) return; RELOAD();
/* 90d755: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90d756: call 0x90bd20 */
  esp -= 4; W32(esp, 0x90d75bu); SPILL(); f_90bd20(); if (g_unwind) return; RELOAD();
/* 90d75b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90d75d: je 0x90d76b */
  if (zf) goto L_90d76b;
L_90d75f: /* 90d75f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90d760: call 0x90d810 */
  esp -= 4; W32(esp, 0x90d765u); SPILL(); f_90d810(); if (g_unwind) return; RELOAD();
/* 90d765: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90d766: call 0x90bcb0 */
  esp -= 4; W32(esp, 0x90d76bu); SPILL(); f_90bcb0(); if (g_unwind) return; RELOAD();
L_90d76b: /* 90d76b: xor edi, edi */
  edi = 0;
/* 90d76d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90d76e: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 90d773: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90d774: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 90d779: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90d77a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90d77b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90d77c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90d77d: mov dword ptr [esi + 0xec], edi */
  W32((uint32_t)(esi + 0xecu), edi);
/* 90d783: mov dword ptr [esi + 0xf0], edi */
  W32((uint32_t)(esi + 0xf0u), edi);
/* 90d789: mov dword ptr [esi + 0xf4], edi */
  W32((uint32_t)(esi + 0xf4u), edi);
/* 90d78f: call 0x90c4e0 */
  esp -= 4; W32(esp, 0x90d794u); SPILL(); f_90c4e0(); if (g_unwind) return; RELOAD();
/* 90d794: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90d795: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 90d79a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90d79b: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 90d7a0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90d7a1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90d7a2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 90d7a4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90d7a5: call 0x90c4e0 */
  esp -= 4; W32(esp, 0x90d7aau); SPILL(); f_90c4e0(); if (g_unwind) return; RELOAD();
/* 90d7aa: mov eax, 0x4e6e6b28 */
  eax = 0x4e6e6b28u;
/* 90d7af: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90d7b0: mov dword ptr [esi + 0x160], edi */
  W32((uint32_t)(esi + 0x160u), edi);
/* 90d7b6: mov dword ptr [esi + 0x164], edi */
  W32((uint32_t)(esi + 0x164u), edi);
/* 90d7bc: mov dword ptr [esi + 0x168], edi */
  W32((uint32_t)(esi + 0x168u), edi);
/* 90d7c2: mov dword ptr [esi + 0x16c], eax */
  W32((uint32_t)(esi + 0x16cu), eax);
/* 90d7c8: mov dword ptr [esi + 0x170], edi */
  W32((uint32_t)(esi + 0x170u), edi);
/* 90d7ce: mov dword ptr [esi + 0x174], edi */
  W32((uint32_t)(esi + 0x174u), edi);
/* 90d7d4: mov dword ptr [esi + 0x178], edi */
  W32((uint32_t)(esi + 0x178u), edi);
/* 90d7da: mov dword ptr [esi + 0x17c], eax */
  W32((uint32_t)(esi + 0x17cu), eax);
/* 90d7e0: mov dword ptr [esi + 0x180], 0xce6e6b28 */
  W32((uint32_t)(esi + 0x180u), 0xce6e6b28u);
/* 90d7ea: mov dword ptr [esi + 0x184], edi */
  W32((uint32_t)(esi + 0x184u), edi);
/* 90d7f0: mov dword ptr [esi + 0x188], edi */
  W32((uint32_t)(esi + 0x188u), edi);
/* 90d7f6: call 0x90b820 */
  esp -= 4; W32(esp, 0x90d7fbu); SPILL(); f_90b820(); if (g_unwind) return; RELOAD();
/* 90d7fb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90d7fc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90d7fd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 90d7fe: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90d810(void) {
  LOAD_REGS();
L_90d810: /* 90d810: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90d814: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90d820(void) {
  LOAD_REGS();
L_90d820: /* 90d820: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90d824: mov edx, dword ptr [eax + 0xb0] */
  edx = R32((uint32_t)(eax + 0xb0u));
/* 90d82a: xor ecx, ecx */
  ecx = 0;
/* 90d82c: cmp edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90d82f: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 90d832: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 90d833: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 90d835: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90d840(void) {
  LOAD_REGS();
L_90d840: /* 90d840: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 90d843: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90d844: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 90d848: mov edx, dword ptr [esi + 0x54] */
  edx = R32((uint32_t)(esi + 0x54u));
/* 90d84b: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* 90d84f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90d850: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 90d852: lea ecx, [esi + 0xcc] */
  ecx = (uint32_t)(esi + 0xccu);
/* 90d858: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90d859: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90d85a: call 0x90cda0 */
  esp -= 4; W32(esp, 0x90d85fu); SPILL(); f_90cda0(); if (g_unwind) return; RELOAD();
/* 90d85f: mov edx, dword ptr [esi + 0x58] */
  edx = R32((uint32_t)(esi + 0x58u));
/* 90d862: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 90d866: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90d867: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 90d869: lea ecx, [esi + 0x10c] */
  ecx = (uint32_t)(esi + 0x10cu);
/* 90d86f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90d870: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90d871: call 0x90cda0 */
  esp -= 4; W32(esp, 0x90d876u); SPILL(); f_90cda0(); if (g_unwind) return; RELOAD();
/* 90d876: mov edx, dword ptr [esi + 0x54] */
  edx = R32((uint32_t)(esi + 0x54u));
/* 90d879: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 90d87d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90d87e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 90d880: lea ecx, [esi + 0xdc] */
  ecx = (uint32_t)(esi + 0xdcu);
/* 90d886: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90d887: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90d888: call 0x90cda0 */
  esp -= 4; W32(esp, 0x90d88du); SPILL(); f_90cda0(); if (g_unwind) return; RELOAD();
/* 90d88d: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 90d891: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 90d895: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90d896: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 90d89a: fmul dword ptr [esp + 4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4u)));
/* 90d89e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90d8a0: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 90d8a4: fmul dword ptr [esp] */
  ST0 = ST0 * (F32((uint32_t)(esp)));
/* 90d8a8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90d8aa: fchs  */
  ST0 = -ST0;
/* 90d8ac: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 90d8b0: fmul dword ptr [esp + 8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x8u)));
/* 90d8b4: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 90d8b8: fmul dword ptr [esp + 4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4u)));
/* 90d8bc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90d8be: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 90d8c2: fmul dword ptr [esp] */
  ST0 = ST0 * (F32((uint32_t)(esp)));
/* 90d8c6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90d8c8: fpatan  */
  STI(1) = atan2(STI(1), ST0); FPOP();
/* 90d8ca: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90d8cd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90d8d0(void) {
  LOAD_REGS();
L_90d8d0: /* 90d8d0: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 90d8d3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90d8d4: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 90d8d8: mov edx, dword ptr [esi + 0x54] */
  edx = R32((uint32_t)(esi + 0x54u));
/* 90d8db: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 90d8df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90d8e0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 90d8e2: lea ecx, [esi + 0xbc] */
  ecx = (uint32_t)(esi + 0xbcu);
/* 90d8e8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90d8e9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90d8ea: call 0x90cda0 */
  esp -= 4; W32(esp, 0x90d8efu); SPILL(); f_90cda0(); if (g_unwind) return; RELOAD();
/* 90d8ef: mov edx, dword ptr [esi + 0x54] */
  edx = R32((uint32_t)(esi + 0x54u));
/* 90d8f2: mov esi, dword ptr [esi + 0x58] */
  esi = R32((uint32_t)(esi + 0x58u));
/* 90d8f5: xor eax, eax */
  eax = 0;
/* 90d8f7: lea ecx, [edx + 0xa0] */
  ecx = (uint32_t)(edx + 0xa0u);
/* 90d8fd: sub esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 90d8ff: nop  */
L_90d900: /* 90d900: fld dword ptr [esi + ecx] */
  { double v = F32((uint32_t)(esi + ecx)); FPUSH(v); }
/* 90d903: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 90d904: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 90d906: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 90d909: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 90d90c: fstp dword ptr [esp + eax*4 + 0xc] */
  WF32((uint32_t)(esp + eax*4 + 0xcu), ST0); FPOP();
/* 90d910: jl 0x90d900 */
  if ((sf != of)) goto L_90d900;
L_90d912: /* 90d912: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 90d916: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90d917: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 90d91b: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 90d91f: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 90d923: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90d925: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 90d929: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 90d92d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90d92f: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90d932: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90d940(void) {
  LOAD_REGS();
L_90d940: /* 90d940: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 90d944: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90d945: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 90d949: mov edx, dword ptr [eax + 0x54] */
  edx = R32((uint32_t)(eax + 0x54u));
/* 90d94c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 90d94e: lea ecx, [eax + 0xbc] */
  ecx = (uint32_t)(eax + 0xbcu);
/* 90d954: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90d955: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90d956: call 0x90cda0 */
  esp -= 4; W32(esp, 0x90d95bu); SPILL(); f_90cda0(); if (g_unwind) return; RELOAD();
/* 90d95b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90d960(void) {
  LOAD_REGS();
L_90d960: /* 90d960: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 90d963: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90d964: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 90d968: mov edx, dword ptr [esi + 0x54] */
  edx = R32((uint32_t)(esi + 0x54u));
/* 90d96b: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* 90d96f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90d970: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 90d972: lea ecx, [esi + 0xbc] */
  ecx = (uint32_t)(esi + 0xbcu);
/* 90d978: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90d979: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90d97a: call 0x90cda0 */
  esp -= 4; W32(esp, 0x90d97fu); SPILL(); f_90cda0(); if (g_unwind) return; RELOAD();
/* 90d97f: mov edx, dword ptr [esi + 0x58] */
  edx = R32((uint32_t)(esi + 0x58u));
/* 90d982: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 90d986: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90d987: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 90d989: lea ecx, [esi + 0xfc] */
  ecx = (uint32_t)(esi + 0xfcu);
/* 90d98f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90d990: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90d991: call 0x90cda0 */
  esp -= 4; W32(esp, 0x90d996u); SPILL(); f_90cda0(); if (g_unwind) return; RELOAD();
/* 90d996: mov edx, dword ptr [esi + 0x58] */
  edx = R32((uint32_t)(esi + 0x58u));
/* 90d999: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 90d99d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90d99e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 90d9a0: lea ecx, [esi + 0x10c] */
  ecx = (uint32_t)(esi + 0x10cu);
/* 90d9a6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90d9a7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90d9a8: call 0x90cda0 */
  esp -= 4; W32(esp, 0x90d9adu); SPILL(); f_90cda0(); if (g_unwind) return; RELOAD();
/* 90d9ad: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 90d9b1: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 90d9b5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90d9b6: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 90d9ba: fmul dword ptr [esp + 4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4u)));
/* 90d9be: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90d9c0: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 90d9c4: fmul dword ptr [esp] */
  ST0 = ST0 * (F32((uint32_t)(esp)));
/* 90d9c8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90d9ca: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 90d9ce: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 90d9d2: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 90d9d6: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 90d9da: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90d9dc: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 90d9e0: fmul dword ptr [esp] */
  ST0 = ST0 * (F32((uint32_t)(esp)));
/* 90d9e4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90d9e6: fpatan  */
  STI(1) = atan2(STI(1), ST0); FPOP();
/* 90d9e8: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90d9eb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90d9f0(void) {
  LOAD_REGS();
L_90d9f0: /* 90d9f0: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 90d9f3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90d9f4: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 90d9f8: mov edx, dword ptr [esi + 0x58] */
  edx = R32((uint32_t)(esi + 0x58u));
/* 90d9fb: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 90d9ff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90da00: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 90da02: lea ecx, [esi + 0x10c] */
  ecx = (uint32_t)(esi + 0x10cu);
/* 90da08: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90da09: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90da0a: call 0x90cda0 */
  esp -= 4; W32(esp, 0x90da0fu); SPILL(); f_90cda0(); if (g_unwind) return; RELOAD();
/* 90da0f: mov edx, dword ptr [esi + 0x54] */
  edx = R32((uint32_t)(esi + 0x54u));
/* 90da12: mov esi, dword ptr [esi + 0x58] */
  esi = R32((uint32_t)(esi + 0x58u));
/* 90da15: xor eax, eax */
  eax = 0;
/* 90da17: lea ecx, [edx + 0xa0] */
  ecx = (uint32_t)(edx + 0xa0u);
/* 90da1d: sub esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 90da1f: nop  */
L_90da20: /* 90da20: fld dword ptr [esi + ecx] */
  { double v = F32((uint32_t)(esi + ecx)); FPUSH(v); }
/* 90da23: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 90da24: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 90da26: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 90da29: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 90da2c: fstp dword ptr [esp + eax*4 + 0xc] */
  WF32((uint32_t)(esp + eax*4 + 0xcu), ST0); FPOP();
/* 90da30: jl 0x90da20 */
  if ((sf != of)) goto L_90da20;
L_90da32: /* 90da32: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 90da36: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90da37: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 90da3b: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 90da3f: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 90da43: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90da45: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 90da49: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 90da4d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90da4f: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90da52: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90da60(void) {
  LOAD_REGS();
L_90da60: /* 90da60: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 90da64: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90da65: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 90da69: mov edx, dword ptr [eax + 0x58] */
  edx = R32((uint32_t)(eax + 0x58u));
/* 90da6c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 90da6e: lea ecx, [eax + 0x10c] */
  ecx = (uint32_t)(eax + 0x10cu);
/* 90da74: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90da75: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90da76: call 0x90cda0 */
  esp -= 4; W32(esp, 0x90da7bu); SPILL(); f_90cda0(); if (g_unwind) return; RELOAD();
/* 90da7b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90da80(void) {
  LOAD_REGS();
L_90da80: /* 90da80: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 90da83: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90da84: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 90da88: mov edx, dword ptr [esi + 0x54] */
  edx = R32((uint32_t)(esi + 0x54u));
/* 90da8b: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 90da8f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90da90: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 90da92: lea ecx, [esi + 0xbc] */
  ecx = (uint32_t)(esi + 0xbcu);
/* 90da98: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90da99: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90da9a: call 0x90cda0 */
  esp -= 4; W32(esp, 0x90da9fu); SPILL(); f_90cda0(); if (g_unwind) return; RELOAD();
/* 90da9f: mov edx, dword ptr [esi + 0x58] */
  edx = R32((uint32_t)(esi + 0x58u));
/* 90daa2: mov esi, dword ptr [esi + 0x54] */
  esi = R32((uint32_t)(esi + 0x54u));
/* 90daa5: xor eax, eax */
  eax = 0;
/* 90daa7: lea ecx, [edx + 0x120] */
  ecx = (uint32_t)(edx + 0x120u);
/* 90daad: sub esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 90daaf: nop  */
L_90dab0: /* 90dab0: fld dword ptr [esi + ecx] */
  { double v = F32((uint32_t)(esi + ecx)); FPUSH(v); }
/* 90dab3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 90dab4: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 90dab6: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 90dab9: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 90dabc: fstp dword ptr [esp + eax*4 + 0xc] */
  WF32((uint32_t)(esp + eax*4 + 0xcu), ST0); FPOP();
/* 90dac0: jl 0x90dab0 */
  if ((sf != of)) goto L_90dab0;
L_90dac2: /* 90dac2: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 90dac6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90dac7: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 90dacb: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 90dacf: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 90dad3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90dad5: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 90dad9: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 90dadd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90dadf: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90dae2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90daf0(void) {
  LOAD_REGS();
L_90daf0: /* 90daf0: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 90daf3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90daf4: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 90daf8: mov edx, dword ptr [esi + 0x54] */
  edx = R32((uint32_t)(esi + 0x54u));
/* 90dafb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90dafc: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 90db00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90db01: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 90db03: lea ecx, [esi + 0xbc] */
  ecx = (uint32_t)(esi + 0xbcu);
/* 90db09: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90db0a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90db0b: call 0x90cda0 */
  esp -= 4; W32(esp, 0x90db10u); SPILL(); f_90cda0(); if (g_unwind) return; RELOAD();
/* 90db10: mov edx, dword ptr [esi + 0x54] */
  edx = R32((uint32_t)(esi + 0x54u));
/* 90db13: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 90db17: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90db18: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 90db1a: lea ecx, [esi + 0xec] */
  ecx = (uint32_t)(esi + 0xecu);
/* 90db20: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90db21: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90db22: call 0x90cec0 */
  esp -= 4; W32(esp, 0x90db27u); SPILL(); f_90cec0(); if (g_unwind) return; RELOAD();
/* 90db27: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 90db2b: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 90db2f: mov edi, dword ptr [esi + 0x54] */
  edi = R32((uint32_t)(esi + 0x54u));
/* 90db32: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 90db36: mov esi, dword ptr [esi + 0x58] */
  esi = R32((uint32_t)(esi + 0x58u));
/* 90db39: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 90db3d: mov edx, edi */
  edx = edi;
/* 90db3f: xor eax, eax */
  eax = 0;
/* 90db41: lea ecx, [esi + 0x90] */
  ecx = (uint32_t)(esi + 0x90u);
/* 90db47: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 90db49: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 90db4b: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 90db4f: fmul dword ptr [esp + 8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x8u)));
/* 90db53: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 90db57: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 90db5b: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 90db5d: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 90db61: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 90db65: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 90db69: fmul dword ptr [esp + 8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x8u)));
/* 90db6d: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 90db6f: nop  */
L_90db70: /* 90db70: fld dword ptr [edx + ecx] */
  { double v = F32((uint32_t)(edx + ecx)); FPUSH(v); }
/* 90db73: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 90db74: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 90db76: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 90db79: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 90db7c: fstp dword ptr [esp + eax*4 + 0x1c] */
  WF32((uint32_t)(esp + eax*4 + 0x1cu), ST0); FPOP();
/* 90db80: jl 0x90db70 */
  if ((sf != of)) goto L_90db70;
L_90db82: /* 90db82: fmul dword ptr [edi + 0xa8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xa8u)));
/* 90db88: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 90db8a: fmul dword ptr [edi + 0xa4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xa4u)));
/* 90db90: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90db92: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 90db96: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 90db9a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90db9c: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 90dba0: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 90dba4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90dba6: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 90dbaa: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 90dbae: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90dbb0: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 90dbb2: fmul dword ptr [edi + 0xa0] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xa0u)));
/* 90dbb8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90dbb9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90dbba: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90dbbc: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90dbbf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90dbd0(void) {
  LOAD_REGS();
L_90dbd0: /* 90dbd0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90dbd4: fld dword ptr [eax + 0x168] */
  { double v = F32((uint32_t)(eax + 0x168u)); FPUSH(v); }
/* 90dbda: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90dbe0(void) {
  LOAD_REGS();
L_90dbe0: /* 90dbe0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90dbe4: fld dword ptr [eax + 0x16c] */
  { double v = F32((uint32_t)(eax + 0x16cu)); FPUSH(v); }
/* 90dbea: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90dbf0(void) {
  LOAD_REGS();
L_90dbf0: /* 90dbf0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90dbf4: mov eax, dword ptr [eax + 0x178] */
  eax = R32((uint32_t)(eax + 0x178u));
/* 90dbfa: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90dc00(void) {
  LOAD_REGS();
L_90dc00: /* 90dc00: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90dc04: fld dword ptr [eax + 0x170] */
  { double v = F32((uint32_t)(eax + 0x170u)); FPUSH(v); }
/* 90dc0a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90dc10(void) {
  LOAD_REGS();
L_90dc10: /* 90dc10: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90dc14: fld dword ptr [eax + 0x174] */
  { double v = F32((uint32_t)(eax + 0x174u)); FPUSH(v); }
/* 90dc1a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90dc20(void) {
  LOAD_REGS();
L_90dc20: /* 90dc20: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90dc24: fld dword ptr [eax + 0x17c] */
  { double v = F32((uint32_t)(eax + 0x17cu)); FPUSH(v); }
/* 90dc2a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90dc30(void) {
  LOAD_REGS();
L_90dc30: /* 90dc30: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90dc34: fld dword ptr [eax + 0x180] */
  { double v = F32((uint32_t)(eax + 0x180u)); FPUSH(v); }
/* 90dc3a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90dc40(void) {
  LOAD_REGS();
L_90dc40: /* 90dc40: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90dc44: fld dword ptr [eax + 0x188] */
  { double v = F32((uint32_t)(eax + 0x188u)); FPUSH(v); }
/* 90dc4a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90dc50(void) {
  LOAD_REGS();
L_90dc50: /* 90dc50: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90dc54: fld dword ptr [eax + 0x184] */
  { double v = F32((uint32_t)(eax + 0x184u)); FPUSH(v); }
/* 90dc5a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90dc60(void) {
  LOAD_REGS();
L_90dc60: /* 90dc60: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90dc64: fld dword ptr [eax + 0x160] */
  { double v = F32((uint32_t)(eax + 0x160u)); FPUSH(v); }
/* 90dc6a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90dc70(void) {
  LOAD_REGS();
L_90dc70: /* 90dc70: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90dc74: fld dword ptr [eax + 0x164] */
  { double v = F32((uint32_t)(eax + 0x164u)); FPUSH(v); }
/* 90dc7a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90dc80(void) {
  LOAD_REGS();
L_90dc80: /* 90dc80: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90dc84: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 90dc88: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 90dc8c: fstp dword ptr [eax + 0x168] */
  WF32((uint32_t)(eax + 0x168u), ST0); FPOP();
/* 90dc92: mov dword ptr [eax + 0x16c], ecx */
  W32((uint32_t)(eax + 0x16cu), ecx);
/* 90dc98: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_90dca0(void) {
  LOAD_REGS();
L_90dca0: /* 90dca0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 90dca4: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 90dca8: mov dword ptr [ecx + 0x178], eax */
  W32((uint32_t)(ecx + 0x178u), eax);
/* 90dcae: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90dcc0(void) {
  LOAD_REGS();
L_90dcc0: /* 90dcc0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90dcc4: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 90dcc8: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 90dccc: fstp dword ptr [eax + 0x170] */
  WF32((uint32_t)(eax + 0x170u), ST0); FPOP();
/* 90dcd2: mov dword ptr [eax + 0x174], ecx */
  W32((uint32_t)(eax + 0x174u), ecx);
/* 90dcd8: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_90dce0(void) {
  LOAD_REGS();
L_90dce0: /* 90dce0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90dce4: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 90dce8: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 90dcec: fstp dword ptr [eax + 0x160] */
  WF32((uint32_t)(eax + 0x160u), ST0); FPOP();
/* 90dcf2: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 90dcf6: mov dword ptr [eax + 0x164], ecx */
  W32((uint32_t)(eax + 0x164u), ecx);
/* 90dcfc: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 90dd00: mov dword ptr [eax + 0x188], edx */
  W32((uint32_t)(eax + 0x188u), edx);
/* 90dd06: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 90dd0a: mov dword ptr [eax + 0x180], ecx */
  W32((uint32_t)(eax + 0x180u), ecx);
/* 90dd10: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 90dd14: mov dword ptr [eax + 0x17c], edx */
  W32((uint32_t)(eax + 0x17cu), edx);
/* 90dd1a: mov dword ptr [eax + 0x184], ecx */
  W32((uint32_t)(eax + 0x184u), ecx);
/* 90dd20: ret 0x1c */
  esp += 32; SPILL(); return;
}

void f_90dd30(void) {
  LOAD_REGS();
L_90dd30: /* 90dd30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90dd31: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90dd32: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 90dd36: lea eax, [edi + 0xc0] */
  eax = (uint32_t)(edi + 0xc0u);
/* 90dd3c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90dd3d: call dword ptr [0xb02214] */
  { uint32_t t = R32((uint32_t)(0xb02214u)); esp -= 4; W32(esp, 0x90dd43u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 90dd43: mov esi, eax */
  esi = eax;
/* 90dd45: xor eax, eax */
  eax = 0;
/* 90dd47: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 90dd49: jne 0x90dd50 */
  if (!zf) goto L_90dd50;
L_90dd4b: /* 90dd4b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90dd4c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90dd4d: ret 4 */
  esp += 8; SPILL(); return;
L_90dd50: /* 90dd50: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90dd51: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90dd52: mov dword ptr [esi + 0x1a4], edi */
  W32((uint32_t)(esi + 0x1a4u), edi);
/* 90dd58: mov dword ptr [esi], 0x64 */
  W32((uint32_t)(esi), 0x64u);
/* 90dd5e: mov dword ptr [esi + 4], 0xf0 */
  W32((uint32_t)(esi + 0x4u), 0xf0u);
/* 90dd65: mov dword ptr [esi + 0x1a8], eax */
  W32((uint32_t)(esi + 0x1a8u), eax);
/* 90dd6b: mov dword ptr [esi + 0x234], eax */
  W32((uint32_t)(esi + 0x234u), eax);
/* 90dd71: mov dword ptr [esi + 0x1ec], eax */
  W32((uint32_t)(esi + 0x1ecu), eax);
/* 90dd77: call 0x90dec0 */
  esp -= 4; W32(esp, 0x90dd7cu); SPILL(); f_90dec0(); if (g_unwind) return; RELOAD();
/* 90dd7c: mov ecx, dword ptr [esi + 0x1a8] */
  ecx = R32((uint32_t)(esi + 0x1a8u));
/* 90dd82: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90dd83: lea ebx, [esi + 0x1ac] */
  ebx = (uint32_t)(esi + 0x1acu);
/* 90dd89: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90dd8a: call 0x9728e0 */
  esp -= 4; W32(esp, 0x90dd8fu); SPILL(); f_9728e0(); if (g_unwind) return; RELOAD();
/* 90dd8f: mov edx, dword ptr [esi + 0x1a8] */
  edx = R32((uint32_t)(esi + 0x1a8u));
/* 90dd95: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90dd96: lea eax, [esi + 0x1c4] */
  eax = (uint32_t)(esi + 0x1c4u);
/* 90dd9c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90dd9d: mov dword ptr [esi + 0x1c0], esi */
  W32((uint32_t)(esi + 0x1c0u), esi);
/* 90dda3: call 0x9728e0 */
  esp -= 4; W32(esp, 0x90dda8u); SPILL(); f_9728e0(); if (g_unwind) return; RELOAD();
/* 90dda8: mov ecx, dword ptr [esi + 0x1a8] */
  ecx = R32((uint32_t)(esi + 0x1a8u));
/* 90ddae: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90ddaf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90ddb0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90ddb1: mov dword ptr [esi + 0x1d8], esi */
  W32((uint32_t)(esi + 0x1d8u), esi);
/* 90ddb7: call 0x9723a0 */
  esp -= 4; W32(esp, 0x90ddbcu); SPILL(); f_9723a0(); if (g_unwind) return; RELOAD();
/* 90ddbc: push 0x90cd80 */
  { uint32_t v = 0x90cd80u; esp -= 4; W32(esp, v); }
/* 90ddc1: lea ebx, [esi + 0x1fc] */
  ebx = (uint32_t)(esi + 0x1fcu);
/* 90ddc7: push 0xf4240 */
  { uint32_t v = 0xf4240u; esp -= 4; W32(esp, v); }
/* 90ddcc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90ddcd: call 0x971fe0 */
  esp -= 4; W32(esp, 0x90ddd2u); SPILL(); f_971fe0(); if (g_unwind) return; RELOAD();
/* 90ddd2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90ddd3: call 0x9727f0 */
  esp -= 4; W32(esp, 0x90ddd8u); SPILL(); f_9727f0(); if (g_unwind) return; RELOAD();
/* 90ddd8: mov eax, dword ptr [edi + 0xb8] */
  eax = R32((uint32_t)(edi + 0xb8u));
/* 90ddde: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90dde1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 90dde2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 90dde3: mov dword ptr [edi + 0xb8], eax */
  W32((uint32_t)(edi + 0xb8u), eax);
/* 90dde9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90ddea: mov eax, esi */
  eax = esi;
/* 90ddec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90dded: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90ddf0(void) {
  LOAD_REGS();
L_90ddf0: /* 90ddf0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90ddf1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 90ddf2: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 90ddf6: mov ecx, dword ptr [ebp + 0x1a4] */
  ecx = R32((uint32_t)(ebp + 0x1a4u));
/* 90ddfc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90ddfd: lea eax, [ebp + 0x1ac] */
  eax = (uint32_t)(ebp + 0x1acu);
/* 90de03: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90de04: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 90de05: call 0x972510 */
  esp -= 4; W32(esp, 0x90de0au); SPILL(); f_972510(); if (g_unwind) return; RELOAD();
/* 90de0a: lea ebx, [ebp + 0x1fc] */
  ebx = (uint32_t)(ebp + 0x1fcu);
/* 90de10: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90de11: call 0x972710 */
  esp -= 4; W32(esp, 0x90de16u); SPILL(); f_972710(); if (g_unwind) return; RELOAD();
/* 90de16: mov esi, eax */
  esi = eax;
/* 90de18: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90de1b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90de1d: je 0x90de47 */
  if (zf) goto L_90de47;
L_90de1f: /* 90de1f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_90de20: /* 90de20: mov edi, dword ptr [esi + 0x14] */
  edi = R32((uint32_t)(esi + 0x14u));
/* 90de23: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90de24: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90de25: call 0x972770 */
  esp -= 4; W32(esp, 0x90de2au); SPILL(); f_972770(); if (g_unwind) return; RELOAD();
/* 90de2a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90de2b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 90de2c: call 0x972770 */
  esp -= 4; W32(esp, 0x90de31u); SPILL(); f_972770(); if (g_unwind) return; RELOAD();
/* 90de31: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90de34: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90de35: mov esi, eax */
  esi = eax;
/* 90de37: call 0x90bcb0 */
  esp -= 4; W32(esp, 0x90de3cu); SPILL(); f_90bcb0(); if (g_unwind) return; RELOAD();
/* 90de3c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90de3d: call 0x90bbd0 */
  esp -= 4; W32(esp, 0x90de42u); SPILL(); f_90bbd0(); if (g_unwind) return; RELOAD();
/* 90de42: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90de44: jne 0x90de20 */
  if (!zf) goto L_90de20;
L_90de46: /* 90de46: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_90de47: /* 90de47: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 90de48: call 0x90f170 */
  esp -= 4; W32(esp, 0x90de4du); SPILL(); f_90f170(); if (g_unwind) return; RELOAD();
/* 90de4d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90de4f: je 0x90de57 */
  if (zf) goto L_90de57;
L_90de51: /* 90de51: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 90de52: call 0x90f080 */
  esp -= 4; W32(esp, 0x90de57u); SPILL(); f_90f080(); if (g_unwind) return; RELOAD();
L_90de57: /* 90de57: mov eax, dword ptr [ebp + 0x1a4] */
  eax = R32((uint32_t)(ebp + 0x1a4u));
/* 90de5d: mov dword ptr [ebp], 0xffffffff */
  W32((uint32_t)(ebp), 0xffffffffu);
/* 90de64: dec dword ptr [eax + 0xb8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xb8u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(eax + 0xb8u), r);
  }
/* 90de6a: mov edx, dword ptr [ebp + 0x1a4] */
  edx = R32((uint32_t)(ebp + 0x1a4u));
/* 90de70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 90de71: add edx, 0xc0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xc0u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 90de77: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 90de78: call dword ptr [0xb02218] */
  { uint32_t t = R32((uint32_t)(0xb02218u)); esp -= 4; W32(esp, 0x90de7eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 90de7e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90de7f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 90de80: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 90de81: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90de90(void) {
  LOAD_REGS();
L_90de90: /* 90de90: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 90de94: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90de95: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 90de96: call 0x90dd30 */
  esp -= 4; W32(esp, 0x90de9bu); SPILL(); f_90dd30(); if (g_unwind) return; RELOAD();
/* 90de9b: push 0xaf2660 */
  { uint32_t v = 0xaf2660u; esp -= 4; W32(esp, v); }
/* 90dea0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 90dea2: mov esi, eax */
  esi = eax;
/* 90dea4: call 0x971e40 */
  esp -= 4; W32(esp, 0x90dea9u); SPILL(); f_971e40(); if (g_unwind) return; RELOAD();
/* 90dea9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90deac: mov eax, esi */
  eax = esi;
/* 90deae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90deaf: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90dec0(void) {
  LOAD_REGS();
L_90dec0: /* 90dec0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90dec1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 90dec5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 90dec6: mov edi, dword ptr [esi + 0x1a4] */
  edi = R32((uint32_t)(esi + 0x1a4u));
/* 90decc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90decd: add edi, 0x164 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x164u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 90ded3: call 0x90f170 */
  esp -= 4; W32(esp, 0x90ded8u); SPILL(); f_90f170(); if (g_unwind) return; RELOAD();
/* 90ded8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 90deda: je 0x90dee2 */
  if (zf) goto L_90dee2;
L_90dedc: /* 90dedc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 90dedd: call 0x90f080 */
  esp -= 4; W32(esp, 0x90dee2u); SPILL(); f_90f080(); if (g_unwind) return; RELOAD();
L_90dee2: /* 90dee2: fld dword ptr [edi + 0x1c] */
  { double v = F32((uint32_t)(edi + 0x1cu)); FPUSH(v); }
/* 90dee5: xor eax, eax */
  eax = 0;
/* 90dee7: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 90deed: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 90def0: lea ecx, [esi + 0x20] */
  ecx = (uint32_t)(esi + 0x20u);
/* 90def3: mov edx, 4 */
  edx = 0x4u;
/* 90def8: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 90defb: nop  */
/* 90defc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_90df00: /* 90df00: mov dword ptr [ecx - 0x10], eax */
  W32((uint32_t)(ecx + 0xfffffff0u), eax);
/* 90df03: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 90df05: mov dword ptr [ecx + 0x30], eax */
  W32((uint32_t)(ecx + 0x30u), eax);
/* 90df08: mov dword ptr [ecx + 0x20], eax */
  W32((uint32_t)(ecx + 0x20u), eax);
/* 90df0b: mov dword ptr [ecx + 0x10], eax */
  W32((uint32_t)(ecx + 0x10u), eax);
/* 90df0e: mov dword ptr [ecx + 0x60], eax */
  W32((uint32_t)(ecx + 0x60u), eax);
/* 90df11: mov dword ptr [ecx + 0x50], eax */
  W32((uint32_t)(ecx + 0x50u), eax);
/* 90df14: mov dword ptr [ecx + 0x40], eax */
  W32((uint32_t)(ecx + 0x40u), eax);
/* 90df17: mov dword ptr [ecx + 0x70], eax */
  W32((uint32_t)(ecx + 0x70u), eax);
/* 90df1a: mov dword ptr [ecx + 0x80], eax */
  W32((uint32_t)(ecx + 0x80u), eax);
/* 90df20: mov dword ptr [ecx + 0x90], eax */
  W32((uint32_t)(ecx + 0x90u), eax);
/* 90df26: mov dword ptr [ecx + 0xa0], eax */
  W32((uint32_t)(ecx + 0xa0u), eax);
/* 90df2c: mov dword ptr [ecx + 0xb0], eax */
  W32((uint32_t)(ecx + 0xb0u), eax);
/* 90df32: mov dword ptr [ecx + 0xc0], eax */
  W32((uint32_t)(ecx + 0xc0u), eax);
/* 90df38: mov dword ptr [ecx + 0x150], eax */
  W32((uint32_t)(ecx + 0x150u), eax);
/* 90df3e: mov dword ptr [ecx + 0x160], eax */
  W32((uint32_t)(ecx + 0x160u), eax);
/* 90df44: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 90df47: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 90df48: jne 0x90df00 */
  if (!zf) goto L_90df00;
L_90df4a: /* 90df4a: mov dword ptr [esi + 0x1a0], eax */
  W32((uint32_t)(esi + 0x1a0u), eax);
/* 90df50: mov ecx, 0x3f800000 */
  ecx = 0x3f800000u;
/* 90df55: mov dword ptr [esi + 0xb0], ecx */
  W32((uint32_t)(esi + 0xb0u), ecx);
/* 90df5b: fld dword ptr [edi + 0x1c] */
  { double v = F32((uint32_t)(edi + 0x1cu)); FPUSH(v); }
/* 90df5e: fmul dword ptr [0xa11210] */
  ST0 = ST0 * (F32((uint32_t)(0xa11210u)));
/* 90df64: fst dword ptr [esi + 0x88] */
  WF32((uint32_t)(esi + 0x88u), ST0);
/* 90df6a: fst dword ptr [esi + 0x74] */
  WF32((uint32_t)(esi + 0x74u), ST0);
/* 90df6d: fstp dword ptr [esi + 0x60] */
  WF32((uint32_t)(esi + 0x60u), ST0); FPOP();
/* 90df70: fld dword ptr [edi + 0x1c] */
  { double v = F32((uint32_t)(edi + 0x1cu)); FPUSH(v); }
/* 90df73: mov dword ptr [esi + 0xe4], ecx */
  W32((uint32_t)(esi + 0xe4u), ecx);
/* 90df79: fmul dword ptr [0xa11210] */
  ST0 = ST0 * (F32((uint32_t)(0xa11210u)));
/* 90df7f: mov dword ptr [esi + 0xe0], eax */
  W32((uint32_t)(esi + 0xe0u), eax);
/* 90df85: mov dword ptr [esi + 0xe8], eax */
  W32((uint32_t)(esi + 0xe8u), eax);
/* 90df8b: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 90df91: fst dword ptr [esi + 0x58] */
  WF32((uint32_t)(esi + 0x58u), ST0);
/* 90df94: fst dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0);
/* 90df97: fstp dword ptr [esi + 0x30] */
  WF32((uint32_t)(esi + 0x30u), ST0); FPOP();
/* 90df9a: mov dword ptr [esi + 0xf0], ecx */
  W32((uint32_t)(esi + 0xf0u), ecx);
/* 90dfa0: mov dword ptr [esi + 0x104], ecx */
  W32((uint32_t)(esi + 0x104u), ecx);
/* 90dfa6: mov dword ptr [esi + 0x118], ecx */
  W32((uint32_t)(esi + 0x118u), ecx);
/* 90dfac: mov dword ptr [esi + 0x12c], ecx */
  W32((uint32_t)(esi + 0x12cu), ecx);
/* 90dfb2: mov dword ptr [esi + 0xf4], eax */
  W32((uint32_t)(esi + 0xf4u), eax);
/* 90dfb8: mov dword ptr [esi + 0xf8], eax */
  W32((uint32_t)(esi + 0xf8u), eax);
/* 90dfbe: mov dword ptr [esi + 0xfc], eax */
  W32((uint32_t)(esi + 0xfcu), eax);
/* 90dfc4: mov dword ptr [esi + 0x100], eax */
  W32((uint32_t)(esi + 0x100u), eax);
/* 90dfca: mov dword ptr [esi + 0x108], eax */
  W32((uint32_t)(esi + 0x108u), eax);
/* 90dfd0: mov dword ptr [esi + 0x10c], eax */
  W32((uint32_t)(esi + 0x10cu), eax);
/* 90dfd6: mov dword ptr [esi + 0x110], eax */
  W32((uint32_t)(esi + 0x110u), eax);
/* 90dfdc: mov dword ptr [esi + 0x114], eax */
  W32((uint32_t)(esi + 0x114u), eax);
/* 90dfe2: mov dword ptr [esi + 0x11c], eax */
  W32((uint32_t)(esi + 0x11cu), eax);
/* 90dfe8: mov dword ptr [esi + 0x120], eax */
  W32((uint32_t)(esi + 0x120u), eax);
/* 90dfee: mov dword ptr [esi + 0x124], eax */
  W32((uint32_t)(esi + 0x124u), eax);
/* 90dff4: mov dword ptr [esi + 0x128], eax */
  W32((uint32_t)(esi + 0x128u), eax);
/* 90dffa: mov dword ptr [esi + 0x130], ecx */
  W32((uint32_t)(esi + 0x130u), ecx);
/* 90e000: mov dword ptr [esi + 0x144], ecx */
  W32((uint32_t)(esi + 0x144u), ecx);
/* 90e006: mov dword ptr [esi + 0x158], ecx */
  W32((uint32_t)(esi + 0x158u), ecx);
/* 90e00c: mov dword ptr [esi + 0x16c], ecx */
  W32((uint32_t)(esi + 0x16cu), ecx);
/* 90e012: mov dword ptr [esi + 0x134], eax */
  W32((uint32_t)(esi + 0x134u), eax);
/* 90e018: mov dword ptr [esi + 0x138], eax */
  W32((uint32_t)(esi + 0x138u), eax);
/* 90e01e: mov dword ptr [esi + 0x13c], eax */
  W32((uint32_t)(esi + 0x13cu), eax);
/* 90e024: mov dword ptr [esi + 0x140], eax */
  W32((uint32_t)(esi + 0x140u), eax);
/* 90e02a: mov dword ptr [esi + 0x148], eax */
  W32((uint32_t)(esi + 0x148u), eax);
/* 90e030: mov dword ptr [esi + 0x14c], eax */
  W32((uint32_t)(esi + 0x14cu), eax);
/* 90e036: mov dword ptr [esi + 0x150], eax */
  W32((uint32_t)(esi + 0x150u), eax);
/* 90e03c: mov dword ptr [esi + 0x154], eax */
  W32((uint32_t)(esi + 0x154u), eax);
/* 90e042: mov dword ptr [esi + 0x15c], eax */
  W32((uint32_t)(esi + 0x15cu), eax);
/* 90e048: mov dword ptr [esi + 0x160], eax */
  W32((uint32_t)(esi + 0x160u), eax);
/* 90e04e: mov dword ptr [esi + 0x164], eax */
  W32((uint32_t)(esi + 0x164u), eax);
/* 90e054: mov dword ptr [esi + 0x168], eax */
  W32((uint32_t)(esi + 0x168u), eax);
/* 90e05a: mov dword ptr [esi + 0x190], eax */
  W32((uint32_t)(esi + 0x190u), eax);
/* 90e060: mov dword ptr [esi + 0x194], eax */
  W32((uint32_t)(esi + 0x194u), eax);
/* 90e066: mov dword ptr [esi + 0x198], eax */
  W32((uint32_t)(esi + 0x198u), eax);
/* 90e06c: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 90e06f: mov dword ptr [esi + 0x19c], eax */
  W32((uint32_t)(esi + 0x19cu), eax);
/* 90e075: mov dword ptr [esi + 0x1e4], ecx */
  W32((uint32_t)(esi + 0x1e4u), ecx);
/* 90e07b: mov dword ptr [esi + 0x1e8], ecx */
  W32((uint32_t)(esi + 0x1e8u), ecx);
/* 90e081: mov dword ptr [esi + 0x1e0], ecx */
  W32((uint32_t)(esi + 0x1e0u), ecx);
/* 90e087: mov ecx, dword ptr [edi + 0x1c] */
  ecx = R32((uint32_t)(edi + 0x1cu));
/* 90e08a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 90e08b: mov dword ptr [esi + 0x1f0], ecx */
  W32((uint32_t)(esi + 0x1f0u), ecx);
/* 90e091: mov dword ptr [esi + 0x1ec], eax */
  W32((uint32_t)(esi + 0x1ecu), eax);
/* 90e097: mov dword ptr [esi + 0x1f4], eax */
  W32((uint32_t)(esi + 0x1f4u), eax);
/* 90e09d: mov dword ptr [esi + 0x1f8], eax */
  W32((uint32_t)(esi + 0x1f8u), eax);
/* 90e0a3: mov dword ptr [esi + 0x230], eax */
  W32((uint32_t)(esi + 0x230u), eax);
/* 90e0a9: mov dword ptr [esi + 0x1dc], eax */
  W32((uint32_t)(esi + 0x1dcu), eax);
/* 90e0af: mov dword ptr [esi + 0x238], 0x7f7fffff */
  W32((uint32_t)(esi + 0x238u), 0x7f7fffffu);
/* 90e0b9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90e0ba: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90e0c0(void) {
  LOAD_REGS();
L_90e0c0: /* 90e0c0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90e0c4: mov eax, dword ptr [eax + 0x1a4] */
  eax = R32((uint32_t)(eax + 0x1a4u));
/* 90e0ca: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90e0d0(void) {
  LOAD_REGS();
L_90e0d0: /* 90e0d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90e0d4: mov eax, dword ptr [eax + 0x1e0] */
  eax = R32((uint32_t)(eax + 0x1e0u));
/* 90e0da: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90e0e0(void) {
  LOAD_REGS();
L_90e0e0: /* 90e0e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90e0e4: add eax, 0x130 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x130u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90e0e9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90e0f0(void) {
  LOAD_REGS();
L_90e0f0: /* 90e0f0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90e0f4: mov edx, dword ptr [eax + 0x130] */
  edx = R32((uint32_t)(eax + 0x130u));
/* 90e0fa: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 90e0fe: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 90e100: mov edx, dword ptr [eax + 0x134] */
  edx = R32((uint32_t)(eax + 0x134u));
/* 90e106: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 90e109: mov edx, dword ptr [eax + 0x138] */
  edx = R32((uint32_t)(eax + 0x138u));
/* 90e10f: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 90e112: mov edx, dword ptr [eax + 0x13c] */
  edx = R32((uint32_t)(eax + 0x13cu));
/* 90e118: mov dword ptr [ecx + 0xc], edx */
  W32((uint32_t)(ecx + 0xcu), edx);
/* 90e11b: mov edx, dword ptr [eax + 0x140] */
  edx = R32((uint32_t)(eax + 0x140u));
/* 90e121: mov dword ptr [ecx + 0x10], edx */
  W32((uint32_t)(ecx + 0x10u), edx);
/* 90e124: mov edx, dword ptr [eax + 0x144] */
  edx = R32((uint32_t)(eax + 0x144u));
/* 90e12a: mov dword ptr [ecx + 0x14], edx */
  W32((uint32_t)(ecx + 0x14u), edx);
/* 90e12d: mov edx, dword ptr [eax + 0x148] */
  edx = R32((uint32_t)(eax + 0x148u));
/* 90e133: mov dword ptr [ecx + 0x18], edx */
  W32((uint32_t)(ecx + 0x18u), edx);
/* 90e136: mov edx, dword ptr [eax + 0x14c] */
  edx = R32((uint32_t)(eax + 0x14cu));
/* 90e13c: mov dword ptr [ecx + 0x1c], edx */
  W32((uint32_t)(ecx + 0x1cu), edx);
/* 90e13f: mov edx, dword ptr [eax + 0x150] */
  edx = R32((uint32_t)(eax + 0x150u));
/* 90e145: mov dword ptr [ecx + 0x20], edx */
  W32((uint32_t)(ecx + 0x20u), edx);
/* 90e148: mov edx, dword ptr [eax + 0x154] */
  edx = R32((uint32_t)(eax + 0x154u));
/* 90e14e: mov dword ptr [ecx + 0x24], edx */
  W32((uint32_t)(ecx + 0x24u), edx);
/* 90e151: mov edx, dword ptr [eax + 0x158] */
  edx = R32((uint32_t)(eax + 0x158u));
/* 90e157: mov dword ptr [ecx + 0x28], edx */
  W32((uint32_t)(ecx + 0x28u), edx);
/* 90e15a: mov edx, dword ptr [eax + 0x15c] */
  edx = R32((uint32_t)(eax + 0x15cu));
/* 90e160: mov dword ptr [ecx + 0x2c], edx */
  W32((uint32_t)(ecx + 0x2cu), edx);
/* 90e163: mov edx, dword ptr [eax + 0x160] */
  edx = R32((uint32_t)(eax + 0x160u));
/* 90e169: mov dword ptr [ecx + 0x30], edx */
  W32((uint32_t)(ecx + 0x30u), edx);
/* 90e16c: mov edx, dword ptr [eax + 0x164] */
  edx = R32((uint32_t)(eax + 0x164u));
/* 90e172: mov dword ptr [ecx + 0x34], edx */
  W32((uint32_t)(ecx + 0x34u), edx);
/* 90e175: mov edx, dword ptr [eax + 0x168] */
  edx = R32((uint32_t)(eax + 0x168u));
/* 90e17b: mov dword ptr [ecx + 0x38], edx */
  W32((uint32_t)(ecx + 0x38u), edx);
/* 90e17e: mov eax, dword ptr [eax + 0x16c] */
  eax = R32((uint32_t)(eax + 0x16cu));
/* 90e184: mov dword ptr [ecx + 0x3c], eax */
  W32((uint32_t)(ecx + 0x3cu), eax);
/* 90e187: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90e190(void) {
  LOAD_REGS();
L_90e190: /* 90e190: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90e194: mov eax, dword ptr [eax + 0x1dc] */
  eax = R32((uint32_t)(eax + 0x1dcu));
/* 90e19a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90e1a0(void) {
  LOAD_REGS();
L_90e1a0: /* 90e1a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90e1a4: fld dword ptr [eax + 0x1f0] */
  { double v = F32((uint32_t)(eax + 0x1f0u)); FPUSH(v); }
/* 90e1aa: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90e1b0(void) {
  LOAD_REGS();
L_90e1b0: /* 90e1b0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 90e1b4: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 90e1b8: lea ecx, [eax + 0x18] */
  ecx = (uint32_t)(eax + 0x18u);
/* 90e1bb: lea eax, [edx + 0x70] */
  eax = (uint32_t)(edx + 0x70u);
/* 90e1be: mov edx, 3 */
  edx = 0x3u;
/* 90e1c3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
L_90e1c4: /* 90e1c4: mov esi, dword ptr [eax - 0x10] */
  esi = R32((uint32_t)(eax + 0xfffffff0u));
/* 90e1c7: mov dword ptr [ecx - 0x18], esi */
  W32((uint32_t)(ecx + 0xffffffe8u), esi);
/* 90e1ca: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 90e1cc: mov dword ptr [ecx - 0xc], esi */
  W32((uint32_t)(ecx + 0xfffffff4u), esi);
/* 90e1cf: mov esi, dword ptr [eax + 0x10] */
  esi = R32((uint32_t)(eax + 0x10u));
/* 90e1d2: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 90e1d4: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90e1d7: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 90e1da: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 90e1db: jne 0x90e1c4 */
  if (!zf) goto L_90e1c4;
L_90e1dd: /* 90e1dd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 90e1de: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90e1f0(void) {
  LOAD_REGS();
L_90e1f0: /* 90e1f0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90e1f4: mov edx, dword ptr [eax + 0x160] */
  edx = R32((uint32_t)(eax + 0x160u));
/* 90e1fa: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 90e1fe: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 90e200: mov edx, dword ptr [eax + 0x164] */
  edx = R32((uint32_t)(eax + 0x164u));
/* 90e206: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 90e209: mov eax, dword ptr [eax + 0x168] */
  eax = R32((uint32_t)(eax + 0x168u));
/* 90e20f: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 90e212: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90e220(void) {
  LOAD_REGS();
L_90e220: /* 90e220: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90e224: mov edx, dword ptr [eax + 0xb0] */
  edx = R32((uint32_t)(eax + 0xb0u));
/* 90e22a: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 90e22e: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 90e230: mov edx, dword ptr [eax + 0xb4] */
  edx = R32((uint32_t)(eax + 0xb4u));
/* 90e236: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 90e239: mov edx, dword ptr [eax + 0xb8] */
  edx = R32((uint32_t)(eax + 0xb8u));
/* 90e23f: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 90e242: mov eax, dword ptr [eax + 0xbc] */
  eax = R32((uint32_t)(eax + 0xbcu));
/* 90e248: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 90e24b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90e250(void) {
  LOAD_REGS();
L_90e250: /* 90e250: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90e254: mov edx, dword ptr [eax + 0x130] */
  edx = R32((uint32_t)(eax + 0x130u));
/* 90e25a: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 90e25e: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 90e260: mov edx, dword ptr [eax + 0x134] */
  edx = R32((uint32_t)(eax + 0x134u));
/* 90e266: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 90e269: mov edx, dword ptr [eax + 0x138] */
  edx = R32((uint32_t)(eax + 0x138u));
/* 90e26f: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 90e272: mov edx, dword ptr [eax + 0x140] */
  edx = R32((uint32_t)(eax + 0x140u));
/* 90e278: mov dword ptr [ecx + 0xc], edx */
  W32((uint32_t)(ecx + 0xcu), edx);
/* 90e27b: mov edx, dword ptr [eax + 0x144] */
  edx = R32((uint32_t)(eax + 0x144u));
/* 90e281: mov dword ptr [ecx + 0x10], edx */
  W32((uint32_t)(ecx + 0x10u), edx);
/* 90e284: mov edx, dword ptr [eax + 0x148] */
  edx = R32((uint32_t)(eax + 0x148u));
/* 90e28a: mov dword ptr [ecx + 0x14], edx */
  W32((uint32_t)(ecx + 0x14u), edx);
/* 90e28d: mov edx, dword ptr [eax + 0x150] */
  edx = R32((uint32_t)(eax + 0x150u));
/* 90e293: mov dword ptr [ecx + 0x18], edx */
  W32((uint32_t)(ecx + 0x18u), edx);
/* 90e296: mov edx, dword ptr [eax + 0x154] */
  edx = R32((uint32_t)(eax + 0x154u));
/* 90e29c: mov dword ptr [ecx + 0x1c], edx */
  W32((uint32_t)(ecx + 0x1cu), edx);
/* 90e29f: mov eax, dword ptr [eax + 0x158] */
  eax = R32((uint32_t)(eax + 0x158u));
/* 90e2a5: mov dword ptr [ecx + 0x20], eax */
  W32((uint32_t)(ecx + 0x20u), eax);
/* 90e2a8: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90e2b0(void) {
  LOAD_REGS();
L_90e2b0: /* 90e2b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90e2b4: mov edx, dword ptr [eax + 0x90] */
  edx = R32((uint32_t)(eax + 0x90u));
/* 90e2ba: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 90e2be: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 90e2c0: mov edx, dword ptr [eax + 0x94] */
  edx = R32((uint32_t)(eax + 0x94u));
/* 90e2c6: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 90e2c9: mov eax, dword ptr [eax + 0x98] */
  eax = R32((uint32_t)(eax + 0x98u));
/* 90e2cf: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 90e2d2: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90e2e0(void) {
  LOAD_REGS();
L_90e2e0: /* 90e2e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90e2e4: add eax, 0x90 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x90u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90e2e9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90e2f0(void) {
  LOAD_REGS();
L_90e2f0: /* 90e2f0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90e2f4: mov edx, dword ptr [eax + 0xa0] */
  edx = R32((uint32_t)(eax + 0xa0u));
/* 90e2fa: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 90e2fe: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 90e300: mov edx, dword ptr [eax + 0xa4] */
  edx = R32((uint32_t)(eax + 0xa4u));
/* 90e306: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 90e309: mov eax, dword ptr [eax + 0xa8] */
  eax = R32((uint32_t)(eax + 0xa8u));
/* 90e30f: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 90e312: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90e320(void) {
  LOAD_REGS();
L_90e320: /* 90e320: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90e324: add eax, 0xa0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xa0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 90e329: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90e330(void) {
  LOAD_REGS();
L_90e330: /* 90e330: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 90e333: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 90e337: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 90e33b: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 90e33d: fsub dword ptr [eax + 0x120] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x120u)));
/* 90e343: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 90e346: fsub dword ptr [eax + 0x124] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x124u)));
/* 90e34c: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 90e34f: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 90e353: fsub dword ptr [eax + 0x128] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x128u)));
/* 90e359: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 90e35b: fmul dword ptr [eax + 0xa4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xa4u)));
/* 90e361: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 90e363: fmul dword ptr [eax + 0xa8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xa8u)));
/* 90e369: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 90e36b: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 90e36f: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 90e371: fmul dword ptr [eax + 0xa8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xa8u)));
/* 90e377: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 90e379: fmul dword ptr [eax + 0xa0] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xa0u)));
/* 90e37f: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 90e381: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 90e385: fmul dword ptr [eax + 0xa0] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xa0u)));
/* 90e38b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 90e38d: fmul dword ptr [eax + 0xa4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xa4u)));
/* 90e393: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 90e395: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 90e399: fadd dword ptr [eax + 0x90] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x90u)));
/* 90e39f: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 90e3a1: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 90e3a5: fadd dword ptr [eax + 0x94] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x94u)));
/* 90e3ab: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 90e3ae: fadd dword ptr [eax + 0x98] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x98u)));
/* 90e3b4: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 90e3b7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 90e3ba: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_90e3c0(void) {
  LOAD_REGS();
L_90e3c0: /* 90e3c0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90e3c4: mov edx, dword ptr [eax + 0xc0] */
  edx = R32((uint32_t)(eax + 0xc0u));
/* 90e3ca: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 90e3ce: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 90e3d0: mov edx, dword ptr [eax + 0xc4] */
  edx = R32((uint32_t)(eax + 0xc4u));
/* 90e3d6: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 90e3d9: mov eax, dword ptr [eax + 0xc8] */
  eax = R32((uint32_t)(eax + 0xc8u));
/* 90e3df: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 90e3e2: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90e3f0(void) {
  LOAD_REGS();
L_90e3f0: /* 90e3f0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90e3f4: mov edx, dword ptr [eax + 0xd0] */
  edx = R32((uint32_t)(eax + 0xd0u));
/* 90e3fa: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 90e3fe: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 90e400: mov edx, dword ptr [eax + 0xd4] */
  edx = R32((uint32_t)(eax + 0xd4u));
/* 90e406: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 90e409: mov eax, dword ptr [eax + 0xd8] */
  eax = R32((uint32_t)(eax + 0xd8u));
/* 90e40f: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 90e412: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90e420(void) {
  LOAD_REGS();
L_90e420: /* 90e420: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90e424: mov edx, dword ptr [eax + 0xe0] */
  edx = R32((uint32_t)(eax + 0xe0u));
/* 90e42a: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 90e42e: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 90e430: mov edx, dword ptr [eax + 0xe4] */
  edx = R32((uint32_t)(eax + 0xe4u));
/* 90e436: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 90e439: mov eax, dword ptr [eax + 0xe8] */
  eax = R32((uint32_t)(eax + 0xe8u));
/* 90e43f: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 90e442: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90e450(void) {
  LOAD_REGS();
L_90e450: /* 90e450: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90e454: fld dword ptr [eax + 0x1f4] */
  { double v = F32((uint32_t)(eax + 0x1f4u)); FPUSH(v); }
/* 90e45a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90e460(void) {
  LOAD_REGS();
L_90e460: /* 90e460: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90e464: fld dword ptr [eax + 0x1f8] */
  { double v = F32((uint32_t)(eax + 0x1f8u)); FPUSH(v); }
/* 90e46a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_90e470(void) {
  LOAD_REGS();
L_90e470: /* 90e470: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90e474: mov edx, dword ptr [eax + 0x10] */
  edx = R32((uint32_t)(eax + 0x10u));
/* 90e477: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 90e47b: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 90e47d: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 90e480: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 90e483: mov eax, dword ptr [eax + 0x18] */
  eax = R32((uint32_t)(eax + 0x18u));
/* 90e486: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 90e489: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90e490(void) {
  LOAD_REGS();
L_90e490: /* 90e490: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90e494: mov edx, dword ptr [eax + 0x20] */
  edx = R32((uint32_t)(eax + 0x20u));
/* 90e497: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 90e49b: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 90e49d: mov edx, dword ptr [eax + 0x24] */
  edx = R32((uint32_t)(eax + 0x24u));
/* 90e4a0: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 90e4a3: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 90e4a6: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 90e4a9: ret 8 */
  esp += 12; SPILL(); return;
}

void f_90e4b0(void) {
  LOAD_REGS();
L_90e4b0: /* 90e4b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 90e4b4: fld dword ptr [eax + 0xa0] */
  { double v = F32((uint32_t)(eax + 0xa0u)); FPUSH(v); }
/* 90e4ba: fld dword ptr [eax + 0xa0] */
  { double v = F32((uint32_t)(eax + 0xa0u)); FPUSH(v); }
/* 90e4c0: fmul dword ptr [eax + 0xa4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xa4u)));
/* 90e4c6: fld dword ptr [eax + 0xa8] */
  { double v = F32((uint32_t)(eax + 0xa8u)); FPUSH(v); }
/* 90e4cc: fmul dword ptr [eax + 0xa0] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xa0u)));
/* 90e4d2: fld dword ptr [eax + 0xa4] */
  { double v = F32((uint32_t)(eax + 0xa4u)); FPUSH(v); }
/* 90e4d8: fld dword ptr [eax + 0xa8] */
  { double v = F32((uint32_t)(eax + 0xa8u)); FPUSH(v); }
/* 90e4de: fmul dword ptr [eax + 0xa4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xa4u)));
/* 90e4e4: fld dword ptr [eax + 0xa8] */
  { double v = F32((uint32_t)(eax + 0xa8u)); FPUSH(v); }
/* 90e4ea: fld dword ptr [eax + 0x90] */
  { double v = F32((uint32_t)(eax + 0x90u)); FPUSH(v); }
/* 90e4f0: fmul dword ptr [eax + 0x90] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x90u)));
/* 90e4f6: fmul dword ptr [eax + 0x1f0] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x1f0u)));
/* 90e4fc: fld dword ptr [eax + 0x94] */
  { double v = F32((uint32_t)(eax + 0x94u)); FPUSH(v); }
/* 90e502: fmul dword ptr [eax + 0x94] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x94u)));
/* 90e508: fmul dword ptr [eax + 0x1f0] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x1f0u)));
/* 90e50e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90e510: fld dword ptr [eax + 0x98] */
  { double v = F32((uint32_t)(eax + 0x98u)); FPUSH(v); }
/* 90e516: fmul dword ptr [eax + 0x98] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x98u)));
/* 90e51c: fmul dword ptr [eax + 0x1f0] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x1f0u)));
/* 90e522: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90e524: fld st(6) */
  { double v = STI(6); FPUSH(v); }
/* 90e526: fmul dword ptr [eax + 0x60] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x60u)));
/* 90e529: fmul st(7) */
  ST0 = ST0 * STI(7);
/* 90e52b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90e52d: fld st(5) */
  { double v = STI(5); FPUSH(v); }
/* 90e52f: fmul dword ptr [eax + 0x70] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x70u)));
/* 90e532: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90e534: fld st(4) */
  { double v = STI(4); FPUSH(v); }
/* 90e536: fmul dword ptr [eax + 0x80] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x80u)));
/* 90e53c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 90e53e: fxch st(5) */
  { double t = ST0; ST0 = STI(5); STI(5) = t; }
/* 90e540: fmul dword ptr [eax + 0x64] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x64u)));
/* 90e543: faddp st(5) */
  STI(5) = STI(5) + ST0;
  FPOP();
/* 90e545: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 90e547: fmul dword ptr [eax + 0x74] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x74u)));
/* 90e54a: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 90e54c: faddp st(5) */
  STI(5) = STI(5) + ST0;
  FPOP();
/* 90e54e: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 90e550: fmul dword ptr [eax + 0x84] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x84u)));
/* 90e556: faddp st(5) */
  STI(5) = STI(5) + ST0;
  FPOP();
/* 90e558: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 90e55a: fmul dword ptr [eax + 0x68] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x68u)));
/* 90e55d: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 90e55f: fmul dword ptr [eax + 0x78] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x78u)));
/* 90e562: faddp st(3) */
  STI(3) = STI(3) + ST0;
  FPOP();
/* 90e564: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 90e566: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 90e568: fmul dword ptr [eax + 0x88] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x88u)));
/* 90e56e: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 90e570: faddp st(3) */
  STI(3) = STI(3) + ST0;
  FPOP();
/* 90e572: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 90e574: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 90e57a: fstp st(3) */
  STI(3) = ST0; FPOP();
/* 90e57c: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 90e57e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 90e580: ret 4 */
  esp += 8; SPILL(); return;
}
