#include "recomp.h"
#include "rec_mod.h"

void f_509cf0(void) {
  LOAD_REGS();
L_509cf0: /* 509cf0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 509cf1: mov esi, ecx */
  esi = ecx;
/* 509cf3: mov eax, dword ptr [esi + 0x4c] */
  eax = R32((uint32_t)(esi + 0x4cu));
/* 509cf6: mov edx, dword ptr [esi + 0x50] */
  edx = R32((uint32_t)(esi + 0x50u));
/* 509cf9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 509cfa: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 509cfe: lea ecx, [eax + edi] */
  ecx = (uint32_t)(eax + edi);
/* 509d01: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 509d03: jg 0x509d5a */
  if ((!zf && sf == of)) goto L_509d5a;
L_509d05: /* 509d05: cmp edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 509d08: jne 0x509d38 */
  if (!zf) goto L_509d38;
L_509d0a: /* 509d0a: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 509d0e: test byte ptr [edx], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 509d11: je 0x509d2c */
  if (zf) goto L_509d2c;
L_509d13: /* 509d13: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 509d16: mov ecx, eax */
  ecx = eax;
/* 509d18: sar ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 509d1b: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 509d1d: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 509d1f: and eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 509d22: mov al, byte ptr [eax + 0x5a46c4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x5a46c4u))) & 0xffu);
/* 509d28: or dl, al */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 509d2a: mov byte ptr [ecx], dl */
  W8((uint32_t)(ecx), (edx & 0xffu));
L_509d2c: /* 509d2c: mov eax, dword ptr [esi + 0x4c] */
  eax = R32((uint32_t)(esi + 0x4cu));
/* 509d2f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 509d30: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 509d31: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* 509d34: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 509d35: ret 8 */
  esp += 12; SPILL(); return;
L_509d38: /* 509d38: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 509d3c: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 509d3f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 509d40: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 509d42: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 509d43: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 509d44: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 509d45: call 0x4e1041 */
  esp -= 4; W32(esp, 0x509d4au); SPILL(); f_4e1041(); if (g_unwind) return; RELOAD();
/* 509d4a: mov eax, dword ptr [esi + 0x4c] */
  eax = R32((uint32_t)(esi + 0x4cu));
/* 509d4d: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 509d50: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 509d52: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 509d53: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* 509d56: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 509d57: ret 8 */
  esp += 12; SPILL(); return;
L_509d5a: /* 509d5a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 509d5b: mov dword ptr [esi + 0x2c], 1 */
  W32((uint32_t)(esi + 0x2cu), 0x1u);
/* 509d62: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 509d63: ret 8 */
  esp += 12; SPILL(); return;
}

void f_509d90(void) {
  LOAD_REGS();
L_509d90: /* 509d90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 509d91: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 509d92: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 509d96: mov esi, ecx */
  esi = ecx;
/* 509d98: mov eax, dword ptr [esi + 0x4c] */
  eax = R32((uint32_t)(esi + 0x4cu));
/* 509d9b: mov edx, dword ptr [esi + 0x50] */
  edx = R32((uint32_t)(esi + 0x50u));
/* 509d9e: shl edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 509da1: lea ecx, [eax + edi] */
  ecx = (uint32_t)(eax + edi);
/* 509da4: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 509da6: jg 0x509dca */
  if ((!zf && sf == of)) goto L_509dca;
L_509da8: /* 509da8: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 509dac: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 509dad: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 509daf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 509db0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 509db1: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 509db4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 509db5: call 0x4e1041 */
  esp -= 4; W32(esp, 0x509dbau); SPILL(); f_4e1041(); if (g_unwind) return; RELOAD();
/* 509dba: mov eax, dword ptr [esi + 0x4c] */
  eax = R32((uint32_t)(esi + 0x4cu));
/* 509dbd: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 509dc0: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 509dc2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 509dc3: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* 509dc6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 509dc7: ret 8 */
  esp += 12; SPILL(); return;
L_509dca: /* 509dca: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 509dcb: mov dword ptr [esi + 0x2c], 1 */
  W32((uint32_t)(esi + 0x2cu), 0x1u);
/* 509dd2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 509dd3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_509e00(void) {
  LOAD_REGS();
L_509e00: /* 509e00: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 509e01: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 509e02: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 509e06: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 509e07: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 509e08: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 509e09: mov esi, ecx */
  esi = ecx;
/* 509e0b: call 0x4e2428 */
  esp -= 4; W32(esp, 0x509e10u); SPILL(); f_4e2428(); if (g_unwind) return; RELOAD();
/* 509e10: mov edx, dword ptr [esi + 0x4c] */
  edx = R32((uint32_t)(esi + 0x4cu));
/* 509e13: mov ecx, dword ptr [esi + 0x50] */
  ecx = R32((uint32_t)(esi + 0x50u));
/* 509e16: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 509e19: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 509e1b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 509e1e: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 509e20: jg 0x509e71 */
  if ((!zf && sf == of)) goto L_509e71;
L_509e22: /* 509e22: mov ecx, 1 */
  ecx = 0x1u;
/* 509e27: xor edi, edi */
  edi = 0;
/* 509e29: cmp ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 509e2b: jbe 0x509e78 */
  if ((cf | zf)) goto L_509e78;
L_509e2d: /* 509e2d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_509e30: /* 509e30: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 509e32: je 0x509e78 */
  if (zf) goto L_509e78;
L_509e34: /* 509e34: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 509e38: test dword ptr [edx], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 509e3a: je 0x509e5a */
  if (zf) goto L_509e5a;
L_509e3c: /* 509e3c: mov eax, dword ptr [esi + 0x4c] */
  eax = R32((uint32_t)(esi + 0x4cu));
/* 509e3f: mov ebx, dword ptr [esi + 0x40] */
  ebx = R32((uint32_t)(esi + 0x40u));
/* 509e42: mov edx, eax */
  edx = eax;
/* 509e44: sar edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 509e47: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 509e49: mov bl, byte ptr [edx] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* 509e4b: and eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 509e4e: mov al, byte ptr [eax + 0x5a46c4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x5a46c4u))) & 0xffu);
/* 509e54: add bl, al */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 509e56: mov byte ptr [edx], bl */
  W8((uint32_t)(edx), (ebx & 0xffu));
/* 509e58: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_509e5a: /* 509e5a: mov edx, dword ptr [esi + 0x4c] */
  edx = R32((uint32_t)(esi + 0x4cu));
/* 509e5d: add ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 509e5f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 509e60: mov dword ptr [esi + 0x4c], edx */
  W32((uint32_t)(esi + 0x4cu), edx);
/* 509e63: lea edx, [ecx + edi] */
  edx = (uint32_t)(ecx + edi);
/* 509e66: cmp edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 509e68: jb 0x509e30 */
  if (cf) goto L_509e30;
L_509e6a: /* 509e6a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 509e6b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 509e6c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 509e6d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 509e6e: ret 8 */
  esp += 12; SPILL(); return;
L_509e71: /* 509e71: mov dword ptr [esi + 0x2c], 1 */
  W32((uint32_t)(esi + 0x2cu), 0x1u);
L_509e78: /* 509e78: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 509e79: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 509e7a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 509e7b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 509e7c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_509ea0(void) {
  LOAD_REGS();
L_509ea0: /* 509ea0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 509ea1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 509ea2: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 509ea6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 509ea7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 509ea8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 509ea9: mov esi, ecx */
  esi = ecx;
/* 509eab: call 0x4e2428 */
  esp -= 4; W32(esp, 0x509eb0u); SPILL(); f_4e2428(); if (g_unwind) return; RELOAD();
/* 509eb0: mov edx, dword ptr [esi + 0x4c] */
  edx = R32((uint32_t)(esi + 0x4cu));
/* 509eb3: mov ecx, dword ptr [esi + 0x50] */
  ecx = R32((uint32_t)(esi + 0x50u));
/* 509eb6: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 509eb9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 509ebb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 509ebe: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 509ec0: jg 0x509f0f */
  if ((!zf && sf == of)) goto L_509f0f;
L_509ec2: /* 509ec2: mov ecx, 1 */
  ecx = 0x1u;
/* 509ec7: xor edi, edi */
  edi = 0;
/* 509ec9: cmp ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 509ecb: jbe 0x509f16 */
  if ((cf | zf)) goto L_509f16;
L_509ecd: /* 509ecd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_509ed0: /* 509ed0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 509ed2: je 0x509f16 */
  if (zf) goto L_509f16;
L_509ed4: /* 509ed4: test dword ptr [esp + 0x14], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 509ed8: je 0x509ef8 */
  if (zf) goto L_509ef8;
L_509eda: /* 509eda: mov eax, dword ptr [esi + 0x4c] */
  eax = R32((uint32_t)(esi + 0x4cu));
/* 509edd: mov ebx, dword ptr [esi + 0x40] */
  ebx = R32((uint32_t)(esi + 0x40u));
/* 509ee0: mov edx, eax */
  edx = eax;
/* 509ee2: sar edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 509ee5: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 509ee7: mov bl, byte ptr [edx] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* 509ee9: and eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 509eec: mov al, byte ptr [eax + 0x5a46c4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x5a46c4u))) & 0xffu);
/* 509ef2: add bl, al */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 509ef4: mov byte ptr [edx], bl */
  W8((uint32_t)(edx), (ebx & 0xffu));
/* 509ef6: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_509ef8: /* 509ef8: mov edx, dword ptr [esi + 0x4c] */
  edx = R32((uint32_t)(esi + 0x4cu));
/* 509efb: add ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 509efd: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 509efe: mov dword ptr [esi + 0x4c], edx */
  W32((uint32_t)(esi + 0x4cu), edx);
/* 509f01: lea edx, [ecx + edi] */
  edx = (uint32_t)(ecx + edi);
/* 509f04: cmp edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 509f06: jb 0x509ed0 */
  if (cf) goto L_509ed0;
L_509f08: /* 509f08: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 509f09: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 509f0a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 509f0b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 509f0c: ret 8 */
  esp += 12; SPILL(); return;
L_509f0f: /* 509f0f: mov dword ptr [esi + 0x2c], 1 */
  W32((uint32_t)(esi + 0x2cu), 0x1u);
L_509f16: /* 509f16: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 509f17: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 509f18: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 509f19: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 509f1a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_509f40(void) {
  LOAD_REGS();
L_509f40: /* 509f40: mov eax, dword ptr [ecx + 0x4c] */
  eax = R32((uint32_t)(ecx + 0x4cu));
/* 509f43: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 509f44: mov esi, dword ptr [ecx + 0x50] */
  esi = R32((uint32_t)(ecx + 0x50u));
/* 509f47: lea edx, [eax + 1] */
  edx = (uint32_t)(eax + 0x1u);
/* 509f4a: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 509f4c: jg 0x509f78 */
  if ((!zf && sf == of)) goto L_509f78;
L_509f4e: /* 509f4e: mov dl, byte ptr [esp + 8] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 509f52: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 509f54: je 0x509f71 */
  if (zf) goto L_509f71;
L_509f56: /* 509f56: mov esi, dword ptr [ecx + 0x40] */
  esi = R32((uint32_t)(ecx + 0x40u));
/* 509f59: mov edx, eax */
  edx = eax;
/* 509f5b: sar edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 509f5e: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 509f60: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 509f61: mov bl, byte ptr [edx] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* 509f63: and eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 509f66: mov al, byte ptr [eax + 0x5a46c4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x5a46c4u))) & 0xffu);
/* 509f6c: or bl, al */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 509f6e: mov byte ptr [edx], bl */
  W8((uint32_t)(edx), (ebx & 0xffu));
/* 509f70: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_509f71: /* 509f71: inc dword ptr [ecx + 0x4c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x4cu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ecx + 0x4cu), r);
  }
/* 509f74: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 509f75: ret 4 */
  esp += 8; SPILL(); return;
L_509f78: /* 509f78: mov dword ptr [ecx + 0x2c], 1 */
  W32((uint32_t)(ecx + 0x2cu), 0x1u);
/* 509f7f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 509f80: ret 4 */
  esp += 8; SPILL(); return;
}

void f_509fb0(void) {
  LOAD_REGS();
L_509fb0: /* 509fb0: mov eax, dword ptr [ecx + 0x40] */
  eax = R32((uint32_t)(ecx + 0x40u));
/* 509fb3: ret  */
  esp += 4; SPILL(); return;
}

void f_509fd0(void) {
  LOAD_REGS();
L_509fd0: /* 509fd0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 509fd3: mov dword ptr [esp], ecx */
  W32((uint32_t)(esp), ecx);
/* 509fd7: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 509fda: mov edx, eax */
  edx = eax;
/* 509fdc: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  edx = r;
  }
/* 509fdf: je 0x509ff9 */
  if (zf) goto L_509ff9;
L_509fe1: /* 509fe1: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 509fe5: mov ecx, dword ptr [ecx + 0x40] */
  ecx = R32((uint32_t)(ecx + 0x40u));
/* 509fe8: mov dl, byte ptr [edx + 0x5a46cc] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x5a46ccu))) & 0xffu);
/* 509fee: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 509ff1: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 509ff3: and byte ptr [eax], dl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(eax), r);
  }
/* 509ff5: mov ecx, dword ptr [esp] */
  ecx = R32((uint32_t)(esp));
L_509ff9: /* 509ff9: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 509ffc: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 50a000: mov edx, dword ptr [ecx + 0x4c] */
  edx = R32((uint32_t)(ecx + 0x4cu));
/* 50a003: mov ecx, dword ptr [ecx + 0x40] */
  ecx = R32((uint32_t)(ecx + 0x40u));
/* 50a006: add edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 50a009: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 50a00c: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 50a00f: sar edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 50a012: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 50a014: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50a015: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 50a017: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50a018: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 50a01c: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 50a020: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 50a024: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 50a028: xor eax, eax */
  eax = 0;
/* 50a02a: mov ebx, ecx */
  ebx = ecx;
/* 50a02c: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 50a02f: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 50a032: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 50a034: mov ecx, ebx */
  ecx = ebx;
/* 50a036: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 50a038: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 50a03c: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 50a03e: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 50a042: mov dword ptr [ecx + 0x2c], eax */
  W32((uint32_t)(ecx + 0x2cu), eax);
/* 50a045: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 50a049: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 50a04c: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 50a050: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50a051: mov dword ptr [ecx + 0x4c], eax */
  W32((uint32_t)(ecx + 0x4cu), eax);
/* 50a054: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50a055: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50a058: ret 4 */
  esp += 8; SPILL(); return;
}

void f_50a090(void) {
  LOAD_REGS();
L_50a090: /* 50a090: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 50a093: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 50a097: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50a098: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 50a09b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50a09c: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 50a09f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50a0a0: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 50a0a4: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 50a0a8: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 50a0ac: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 50a0b0: xor eax, eax */
  eax = 0;
/* 50a0b2: mov ebx, ecx */
  ebx = ecx;
/* 50a0b4: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 50a0b7: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 50a0ba: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 50a0bc: mov ecx, ebx */
  ecx = ebx;
/* 50a0be: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 50a0c0: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 50a0c4: mov eax, dword ptr [ecx + 0x50] */
  eax = R32((uint32_t)(ecx + 0x50u));
/* 50a0c7: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 50a0cb: mov edi, dword ptr [ecx + 0x4c] */
  edi = R32((uint32_t)(ecx + 0x4cu));
/* 50a0ce: lea esi, [eax + edx] */
  esi = (uint32_t)(eax + edx);
/* 50a0d1: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50a0d3: jg 0x50a139 */
  if ((!zf && sf == of)) goto L_50a139;
L_50a0d5: /* 50a0d5: cmp edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50a0d8: jne 0x50a10b */
  if (!zf) goto L_50a10b;
L_50a0da: /* 50a0da: mov esi, dword ptr [ecx + 0x40] */
  esi = R32((uint32_t)(ecx + 0x40u));
/* 50a0dd: mov edx, eax */
  edx = eax;
/* 50a0df: sar edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 50a0e2: mov dl, byte ptr [edx + esi] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + esi))) & 0xffu);
/* 50a0e5: and eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 50a0e8: test byte ptr [eax + 0x5a46c4], dl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x5a46c4u))); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 50a0ee: je 0x50a0fb */
  if (zf) goto L_50a0fb;
L_50a0f0: /* 50a0f0: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 50a0f4: or byte ptr [eax], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(eax), r);
  }
/* 50a0f7: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
L_50a0fb: /* 50a0fb: mov eax, dword ptr [ecx + 0x50] */
  eax = R32((uint32_t)(ecx + 0x50u));
/* 50a0fe: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50a0ff: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 50a100: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50a101: mov dword ptr [ecx + 0x50], eax */
  W32((uint32_t)(ecx + 0x50u), eax);
/* 50a104: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50a105: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50a108: ret 8 */
  esp += 12; SPILL(); return;
L_50a10b: /* 50a10b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50a10c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50a10d: mov eax, dword ptr [ecx + 0x40] */
  eax = R32((uint32_t)(ecx + 0x40u));
/* 50a110: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 50a114: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50a115: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50a117: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50a118: call 0x4e1041 */
  esp -= 4; W32(esp, 0x50a11du); SPILL(); f_4e1041(); if (g_unwind) return; RELOAD();
/* 50a11d: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 50a121: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 50a125: mov ecx, dword ptr [eax + 0x50] */
  ecx = R32((uint32_t)(eax + 0x50u));
/* 50a128: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50a12b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50a12c: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 50a12e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50a12f: mov dword ptr [eax + 0x50], ecx */
  W32((uint32_t)(eax + 0x50u), ecx);
/* 50a132: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50a133: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50a136: ret 8 */
  esp += 12; SPILL(); return;
L_50a139: /* 50a139: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50a13a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50a13b: mov dword ptr [ecx + 0x2c], 1 */
  W32((uint32_t)(ecx + 0x2cu), 0x1u);
/* 50a142: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50a143: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50a146: ret 8 */
  esp += 12; SPILL(); return;
}

void f_50a180(void) {
  LOAD_REGS();
L_50a180: /* 50a180: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 50a181: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 50a185: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50a186: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 50a18a: mov eax, 1 */
  eax = 0x1u;
/* 50a18f: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 50a191: mov dword ptr [edi], 0 */
  W32((uint32_t)(edi), 0x0u);
/* 50a197: jbe 0x50a1e5 */
  if ((cf | zf)) goto L_50a1e5;
L_50a199: /* 50a199: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50a19a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50a19b: jmp 0x50a1a0 */
  goto L_50a1a0;
L_50a1a0: /* 50a1a0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50a1a2: je 0x50a1e3 */
  if (zf) goto L_50a1e3;
L_50a1a4: /* 50a1a4: mov esi, dword ptr [ecx + 0x50] */
  esi = R32((uint32_t)(ecx + 0x50u));
/* 50a1a7: cmp esi, dword ptr [ecx + 0x4c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50a1aa: jge 0x50a1dc */
  if ((sf == of)) goto L_50a1dc;
L_50a1ac: /* 50a1ac: mov ebx, dword ptr [ecx + 0x40] */
  ebx = R32((uint32_t)(ecx + 0x40u));
/* 50a1af: mov edx, esi */
  edx = esi;
/* 50a1b1: sar edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 50a1b4: mov dl, byte ptr [edx + ebx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + ebx))) & 0xffu);
/* 50a1b7: and esi, 7 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 50a1ba: test byte ptr [esi + 0x5a46c4], dl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x5a46c4u))); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 50a1c0: je 0x50a1c4 */
  if (zf) goto L_50a1c4;
L_50a1c2: /* 50a1c2: or dword ptr [edi], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(edi), r);
  }
L_50a1c4: /* 50a1c4: mov edx, dword ptr [ecx + 0x50] */
  edx = R32((uint32_t)(ecx + 0x50u));
/* 50a1c7: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 50a1c9: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 50a1ca: mov dword ptr [ecx + 0x50], edx */
  W32((uint32_t)(ecx + 0x50u), edx);
/* 50a1cd: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 50a1cf: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 50a1d1: cmp edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 50a1d3: jb 0x50a1a0 */
  if (cf) goto L_50a1a0;
L_50a1d5: /* 50a1d5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50a1d6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50a1d7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50a1d8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50a1d9: ret 8 */
  esp += 12; SPILL(); return;
L_50a1dc: /* 50a1dc: mov dword ptr [ecx + 0x2c], 1 */
  W32((uint32_t)(ecx + 0x2cu), 0x1u);
L_50a1e3: /* 50a1e3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50a1e4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_50a1e5: /* 50a1e5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50a1e6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50a1e7: ret 8 */
  esp += 12; SPILL(); return;
}

void f_50a19d(void) {
  LOAD_REGS();
L_50a19d: /* 50a19d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_50a1a0: /* 50a1a0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50a1a2: je 0x50a1e3 */
  if (zf) goto L_50a1e3;
L_50a1a4: /* 50a1a4: mov esi, dword ptr [ecx + 0x50] */
  esi = R32((uint32_t)(ecx + 0x50u));
/* 50a1a7: cmp esi, dword ptr [ecx + 0x4c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50a1aa: jge 0x50a1dc */
  if ((sf == of)) goto L_50a1dc;
L_50a1ac: /* 50a1ac: mov ebx, dword ptr [ecx + 0x40] */
  ebx = R32((uint32_t)(ecx + 0x40u));
/* 50a1af: mov edx, esi */
  edx = esi;
/* 50a1b1: sar edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 50a1b4: mov dl, byte ptr [edx + ebx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + ebx))) & 0xffu);
/* 50a1b7: and esi, 7 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 50a1ba: test byte ptr [esi + 0x5a46c4], dl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x5a46c4u))); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 50a1c0: je 0x50a1c4 */
  if (zf) goto L_50a1c4;
L_50a1c2: /* 50a1c2: or dword ptr [edi], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(edi), r);
  }
L_50a1c4: /* 50a1c4: mov edx, dword ptr [ecx + 0x50] */
  edx = R32((uint32_t)(ecx + 0x50u));
/* 50a1c7: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 50a1c9: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 50a1ca: mov dword ptr [ecx + 0x50], edx */
  W32((uint32_t)(ecx + 0x50u), edx);
/* 50a1cd: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 50a1cf: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 50a1d1: cmp edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 50a1d3: jb 0x50a1a0 */
  if (cf) goto L_50a1a0;
L_50a1d5: /* 50a1d5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50a1d6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50a1d7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50a1d8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50a1d9: ret 8 */
  esp += 12; SPILL(); return;
L_50a1dc: /* 50a1dc: mov dword ptr [ecx + 0x2c], 1 */
  W32((uint32_t)(ecx + 0x2cu), 0x1u);
L_50a1e3: /* 50a1e3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50a1e4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50a1e5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50a1e6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50a1e7: ret 8 */
  esp += 12; SPILL(); return;
}

void f_50a210(void) {
  LOAD_REGS();
L_50a210: /* 50a210: mov eax, dword ptr [ecx + 0x40] */
  eax = R32((uint32_t)(ecx + 0x40u));
/* 50a213: ret  */
  esp += 4; SPILL(); return;
}

void f_50a230(void) {
  LOAD_REGS();
L_50a230: /* 50a230: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 50a234: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50a235: mov esi, ecx */
  esi = ecx;
/* 50a237: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 50a239: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 50a23f: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 50a242: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 50a245: call 0x4e4502 */
  esp -= 4; W32(esp, 0x50a24au); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 50a24a: mov eax, esi */
  eax = esi;
/* 50a24c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50a24d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_50a260(void) {
  LOAD_REGS();
L_50a260: /* 50a260: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 50a262: push 0x556cd3 */
  { uint32_t v = 0x556cd3u; esp -= 4; W32(esp, v); }
/* 50a267: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 50a26d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50a26e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 50a275: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 50a278: mov dword ptr [esp], ecx */
  W32((uint32_t)(esp), ecx);
/* 50a27c: mov dword ptr [ecx], 0x569110 */
  W32((uint32_t)(ecx), 0x569110u);
/* 50a282: mov eax, dword ptr [esp] */
  eax = R32((uint32_t)(esp));
/* 50a286: mov dword ptr [eax + 4], 0x7e */
  W32((uint32_t)(eax + 0x4u), 0x7eu);
/* 50a28d: mov ecx, dword ptr [esp] */
  ecx = R32((uint32_t)(esp));
/* 50a291: mov dword ptr [ecx + 8], 0x7d0 */
  W32((uint32_t)(ecx + 0x8u), 0x7d0u);
/* 50a298: mov edx, dword ptr [esp] */
  edx = R32((uint32_t)(esp));
/* 50a29c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50a29d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 50a29e: mov ebp, 1 */
  ebp = 0x1u;
/* 50a2a3: mov dword ptr [edx + 0xc], ebp */
  W32((uint32_t)(edx + 0xcu), ebp);
/* 50a2a6: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 50a2aa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50a2ab: xor esi, esi */
  esi = 0;
/* 50a2ad: mov dword ptr [eax + 0x10], esi */
  W32((uint32_t)(eax + 0x10u), esi);
/* 50a2b0: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 50a2b4: mov dword ptr [ecx + 0x14], esi */
  W32((uint32_t)(ecx + 0x14u), esi);
/* 50a2b7: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 50a2bb: mov dword ptr [edx + 0x18], esi */
  W32((uint32_t)(edx + 0x18u), esi);
/* 50a2be: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 50a2c2: mov dword ptr [eax + 0x1c], esi */
  W32((uint32_t)(eax + 0x1cu), esi);
/* 50a2c5: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 50a2c9: mov dword ptr [ecx + 0x20], ebp */
  W32((uint32_t)(ecx + 0x20u), ebp);
/* 50a2cc: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 50a2d0: mov dword ptr [edx + 0x24], ebp */
  W32((uint32_t)(edx + 0x24u), ebp);
/* 50a2d3: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 50a2d7: mov dword ptr [eax + 0x28], ebp */
  W32((uint32_t)(eax + 0x28u), ebp);
/* 50a2da: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 50a2de: mov dword ptr [ecx + 0x2c], esi */
  W32((uint32_t)(ecx + 0x2cu), esi);
/* 50a2e1: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 50a2e5: mov dword ptr [edx + 0x30], esi */
  W32((uint32_t)(edx + 0x30u), esi);
/* 50a2e8: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 50a2ec: mov dword ptr [eax + 0x34], esi */
  W32((uint32_t)(eax + 0x34u), esi);
/* 50a2ef: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 50a2f3: mov dword ptr [ecx + 0x38], esi */
  W32((uint32_t)(ecx + 0x38u), esi);
/* 50a2f6: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 50a2fa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50a2fb: mov dword ptr [edx + 0x3c], 0xffffffff */
  W32((uint32_t)(edx + 0x3cu), 0xffffffffu);
/* 50a302: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 50a306: mov dword ptr [eax], 0x56a768 */
  W32((uint32_t)(eax), 0x56a768u);
/* 50a30c: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 50a310: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 50a314: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 50a317: add ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 50a31a: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 50a31d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 50a31e: mov dword ptr [esp + 0x2c], esi */
  W32((uint32_t)(esp + 0x2cu), esi);
/* 50a322: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 50a324: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 50a327: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 50a32a: call 0x4e4502 */
  esp -= 4; W32(esp, 0x50a32fu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 50a32f: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 50a333: mov dword ptr [ecx + 0x4c], esi */
  W32((uint32_t)(ecx + 0x4cu), esi);
/* 50a336: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 50a33a: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 50a33e: mov dword ptr [edx + 0x50], eax */
  W32((uint32_t)(edx + 0x50u), eax);
/* 50a341: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 50a345: mov ecx, dword ptr [eax + 0x44] */
  ecx = R32((uint32_t)(eax + 0x44u));
/* 50a348: mov edx, dword ptr [eax + 0x40] */
  edx = R32((uint32_t)(eax + 0x40u));
/* 50a34b: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 50a34f: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 50a353: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 50a357: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 50a35b: xor eax, eax */
  eax = 0;
/* 50a35d: mov ebx, ecx */
  ebx = ecx;
/* 50a35f: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 50a362: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 50a365: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 50a367: mov ecx, ebx */
  ecx = ebx;
/* 50a369: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 50a36b: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 50a36f: mov dword ptr [eax + 0x14], ebp */
  W32((uint32_t)(eax + 0x14u), ebp);
/* 50a372: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 50a376: mov dword ptr [ecx + 0x1c], ebp */
  W32((uint32_t)(ecx + 0x1cu), ebp);
/* 50a379: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 50a37d: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 50a380: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50a381: or ecx, 0x80000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 50a387: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 50a38a: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 50a38e: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 50a392: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50a393: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50a394: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50a395: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 50a39c: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50a39f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_50a410(void) {
  LOAD_REGS();
L_50a410: /* 50a410: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 50a411: mov ebp, esp */
  ebp = esp;
/* 50a413: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 50a415: push 0x556d03 */
  { uint32_t v = 0x556d03u; esp -= 4; W32(esp, v); }
/* 50a41a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 50a420: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50a421: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 50a428: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 50a42b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50a42c: xor ebx, ebx */
  ebx = 0;
/* 50a42e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50a42f: mov esi, ecx */
  esi = ecx;
/* 50a431: mov ecx, 1 */
  ecx = 0x1u;
/* 50a436: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50a437: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 50a43a: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 50a43d: mov dword ptr [esi + 4], 0x7e */
  W32((uint32_t)(esi + 0x4u), 0x7eu);
/* 50a444: mov dword ptr [esi + 8], 0x7d0 */
  W32((uint32_t)(esi + 0x8u), 0x7d0u);
/* 50a44b: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* 50a44e: mov dword ptr [esi + 0x10], ebx */
  W32((uint32_t)(esi + 0x10u), ebx);
/* 50a451: mov dword ptr [esi + 0x14], ebx */
  W32((uint32_t)(esi + 0x14u), ebx);
/* 50a454: mov dword ptr [esi + 0x18], ebx */
  W32((uint32_t)(esi + 0x18u), ebx);
/* 50a457: mov dword ptr [esi + 0x1c], ebx */
  W32((uint32_t)(esi + 0x1cu), ebx);
/* 50a45a: mov dword ptr [esi + 0x20], ecx */
  W32((uint32_t)(esi + 0x20u), ecx);
/* 50a45d: mov dword ptr [esi + 0x24], ecx */
  W32((uint32_t)(esi + 0x24u), ecx);
/* 50a460: mov dword ptr [esi + 0x28], ecx */
  W32((uint32_t)(esi + 0x28u), ecx);
/* 50a463: mov dword ptr [esi + 0x2c], ebx */
  W32((uint32_t)(esi + 0x2cu), ebx);
/* 50a466: mov dword ptr [esi + 0x30], ebx */
  W32((uint32_t)(esi + 0x30u), ebx);
/* 50a469: mov dword ptr [esi + 0x34], ebx */
  W32((uint32_t)(esi + 0x34u), ebx);
/* 50a46c: mov dword ptr [esi + 0x38], ebx */
  W32((uint32_t)(esi + 0x38u), ebx);
/* 50a46f: mov dword ptr [esi + 0x3c], 0xffffffff */
  W32((uint32_t)(esi + 0x3cu), 0xffffffffu);
/* 50a476: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 50a479: lea edi, [esi + 0x40] */
  edi = (uint32_t)(esi + 0x40u);
/* 50a47c: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 50a47f: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 50a482: mov dword ptr [esi], 0x56a7d8 */
  W32((uint32_t)(esi), 0x56a7d8u);
/* 50a488: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50a489: mov ecx, edi */
  ecx = edi;
/* 50a48b: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 50a48e: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 50a491: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 50a493: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* 50a496: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 50a499: call 0x4e4502 */
  esp -= 4; W32(esp, 0x50a49eu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 50a49e: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 50a4a1: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 50a4a4: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* 50a4a7: mov eax, 1 */
  eax = 0x1u;
/* 50a4ac: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 50a4af: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 50a4b2: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 50a4b5: or edx, 0x80000000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 50a4bb: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50a4bd: mov dword ptr [esi + 0x50], ebx */
  W32((uint32_t)(esi + 0x50u), ebx);
/* 50a4c0: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 50a4c4: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 50a4c7: je 0x50a4d9 */
  if (zf) goto L_50a4d9;
L_50a4c9: /* 50a4c9: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 50a4cc: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 50a4ce: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50a4cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50a4d0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50a4d1: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x50a4d6u); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 50a4d6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50a4d9: /* 50a4d9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 50a4dc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50a4dd: mov eax, esi */
  eax = esi;
/* 50a4df: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50a4e0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 50a4e7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50a4e8: mov esp, ebp */
  esp = ebp;
/* 50a4ea: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50a4eb: ret 8 */
  esp += 12; SPILL(); return;
}

void f_50a4ee(void) {
  LOAD_REGS();
L_50a4ee: /* 50a4ee: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 50a4f1: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 50a4f6: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 50a4f9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50a4fa: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 50a4fd: call 0x554df6 */
  esp -= 4; W32(esp, 0x50a502u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_50a502(); return;
}

void f_50a502(void) {
  LOAD_REGS();
L_50a502: /* 50a502: push 0x56b458 */
  { uint32_t v = 0x56b458u; esp -= 4; W32(esp, v); }
/* 50a507: push 0x5a46dc */
  { uint32_t v = 0x5a46dcu; esp -= 4; W32(esp, v); }
/* 50a50c: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x50a511u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 50a511: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50a514: xor ebx, ebx */
  ebx = 0;
/* 50a516: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50a517: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50a518: call 0x554df6 */
  esp -= 4; W32(esp, 0x50a51du); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_50a51d: guest_badaddr(0x50a51d); return;
}

void f_50a570(void) {
  LOAD_REGS();
L_50a570: /* 50a570: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 50a571: mov ebp, esp */
  ebp = esp;
/* 50a573: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 50a575: push 0x556d20 */
  { uint32_t v = 0x556d20u; esp -= 4; W32(esp, v); }
/* 50a57a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 50a580: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50a581: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 50a588: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 50a58b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50a58c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50a58d: xor eax, eax */
  eax = 0;
/* 50a58f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50a590: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 50a593: lea esi, [ecx + 0x40] */
  esi = (uint32_t)(ecx + 0x40u);
/* 50a596: mov dword ptr [ecx + 0x4c], edi */
  W32((uint32_t)(ecx + 0x4cu), edi);
/* 50a599: mov dword ptr [ecx + 0x50], eax */
  W32((uint32_t)(ecx + 0x50u), eax);
/* 50a59c: mov dword ptr [ecx + 0x2c], eax */
  W32((uint32_t)(ecx + 0x2cu), eax);
/* 50a59f: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 50a5a2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 50a5a4: mov ecx, esi */
  ecx = esi;
/* 50a5a6: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 50a5a9: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 50a5ac: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 50a5af: call 0x4e4502 */
  esp -= 4; W32(esp, 0x50a5b4u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 50a5b4: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 50a5b7: lea eax, [edi + 7] */
  eax = (uint32_t)(edi + 0x7u);
/* 50a5ba: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 50a5bd: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 50a5bf: cmp ecx, dword ptr [esi + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50a5c2: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 50a5c5: jle 0x50a5e3 */
  if ((zf || sf != of)) goto L_50a5e3;
L_50a5c7: /* 50a5c7: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 50a5ca: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 50a5cb: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 50a5ce: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 50a5d0: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 50a5d3: lea ecx, [eax + ecx + 0x20] */
  ecx = (uint32_t)(eax + ecx + 0x20u);
/* 50a5d7: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 50a5da: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 50a5dc: mov ecx, esi */
  ecx = esi;
/* 50a5de: call 0x4e4502 */
  esp -= 4; W32(esp, 0x50a5e3u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_50a5e3: /* 50a5e3: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 50a5e6: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 50a5e8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 50a5ea: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50a5eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50a5ec: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x50a5efu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50a5ef: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 50a5f2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50a5f3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50a5f4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 50a5fb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50a5fc: mov esp, ebp */
  esp = ebp;
/* 50a5fe: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50a5ff: ret 8 */
  esp += 12; SPILL(); return;
}

void f_50a602(void) {
  LOAD_REGS();
L_50a602: /* 50a602: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 50a605: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 50a60a: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 50a60d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50a60e: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 50a611: call 0x554df6 */
  esp -= 4; W32(esp, 0x50a616u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_50a616(); return;
}

void f_50a616(void) {
  LOAD_REGS();
L_50a616: /* 50a616: push 0x56b490 */
  { uint32_t v = 0x56b490u; esp -= 4; W32(esp, v); }
/* 50a61b: push 0x5a46e4 */
  { uint32_t v = 0x5a46e4u; esp -= 4; W32(esp, v); }
/* 50a620: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x50a625u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 50a625: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50a628: xor eax, eax */
  eax = 0;
/* 50a62a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50a62b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50a62c: call 0x554df6 */
  esp -= 4; W32(esp, 0x50a631u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_50a631: guest_badaddr(0x50a631); return;
}

void f_50a680(void) {
  LOAD_REGS();
L_50a680: /* 50a680: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 50a682: ret  */
  esp += 4; SPILL(); return;
}

void f_50a6a0(void) {
  LOAD_REGS();
L_50a6a0: /* 50a6a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 50a6a4: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 50a6a7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50a6a8: mov esi, dword ptr [edx + 0x14] */
  esi = R32((uint32_t)(edx + 0x14u));
/* 50a6ab: mov dword ptr [eax + 0x14], esi */
  W32((uint32_t)(eax + 0x14u), esi);
/* 50a6ae: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 50a6b1: mov esi, dword ptr [ecx + 0x20] */
  esi = R32((uint32_t)(ecx + 0x20u));
/* 50a6b4: mov dword ptr [edx + 0x14], esi */
  W32((uint32_t)(edx + 0x14u), esi);
/* 50a6b7: mov dword ptr [ecx + 0x20], edx */
  W32((uint32_t)(ecx + 0x20u), edx);
/* 50a6ba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50a6bb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_50a6d0(void) {
  LOAD_REGS();
L_50a6d0: /* 50a6d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 50a6d1: mov ebp, esp */
  ebp = esp;
/* 50a6d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 50a6d5: push 0x556d30 */
  { uint32_t v = 0x556d30u; esp -= 4; W32(esp, v); }
/* 50a6da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 50a6e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50a6e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 50a6e8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 50a6eb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50a6ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50a6ed: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 50a6f0: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 50a6f3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50a6f4: xor edi, edi */
  edi = 0;
/* 50a6f6: cmp eax, 0x1000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1000000u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50a6fb: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 50a6fe: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 50a701: jge 0x50a776 */
  if ((sf == of)) goto L_50a776;
L_50a703: /* 50a703: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 50a706: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50a708: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 50a70a: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 50a70d: mov dword ptr [esi + 0x10], edi */
  W32((uint32_t)(esi + 0x10u), edi);
/* 50a710: je 0x50a738 */
  if (zf) goto L_50a738;
L_50a712: /* 50a712: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 50a714: or edx, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  edx = r;
  }
/* 50a717: jne 0x50a738 */
  if (!zf) goto L_50a738;
L_50a719: /* 50a719: mov dl, byte ptr [esi + 0xe] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xeu))) & 0xffu);
/* 50a71c: cmp dl, byte ptr [eax + 0xe] */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(eax + 0xeu)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 50a71f: jne 0x50a738 */
  if (!zf) goto L_50a738;
L_50a721: /* 50a721: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 50a724: mov esi, dword ptr [edx + 0x14] */
  esi = R32((uint32_t)(edx + 0x14u));
/* 50a727: mov dword ptr [eax + 0x14], esi */
  W32((uint32_t)(eax + 0x14u), esi);
/* 50a72a: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 50a72d: mov esi, dword ptr [ecx + 0x20] */
  esi = R32((uint32_t)(ecx + 0x20u));
/* 50a730: mov dword ptr [edx + 0x14], esi */
  W32((uint32_t)(edx + 0x14u), esi);
/* 50a733: mov dword ptr [ecx + 0x20], edx */
  W32((uint32_t)(ecx + 0x20u), edx);
/* 50a736: mov esi, eax */
  esi = eax;
L_50a738: /* 50a738: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 50a73b: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50a73d: je 0x50a760 */
  if (zf) goto L_50a760;
L_50a73f: /* 50a73f: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 50a741: or edx, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  edx = r;
  }
/* 50a744: jne 0x50a760 */
  if (!zf) goto L_50a760;
L_50a746: /* 50a746: mov dl, byte ptr [esi + 0xe] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xeu))) & 0xffu);
/* 50a749: cmp dl, byte ptr [eax + 0xe] */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(eax + 0xeu)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 50a74c: jne 0x50a760 */
  if (!zf) goto L_50a760;
L_50a74e: /* 50a74e: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 50a751: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 50a754: mov dword ptr [edx + 0x18], esi */
  W32((uint32_t)(edx + 0x18u), esi);
/* 50a757: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* 50a75a: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 50a75d: mov dword ptr [ecx + 0x20], eax */
  W32((uint32_t)(ecx + 0x20u), eax);
L_50a760: /* 50a760: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 50a763: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 50a766: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50a767: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50a768: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 50a76f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50a770: mov esp, ebp */
  esp = ebp;
/* 50a772: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50a773: ret 8 */
  esp += 12; SPILL(); return;
L_50a776: /* 50a776: cmp dword ptr [ebp + 0xc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50a779: jne 0x50a760 */
  if (!zf) goto L_50a760;
L_50a77b: /* 50a77b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 50a77d: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 50a780: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50a781: mov cl, 0x20 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x20u) & 0xffu);
/* 50a783: call 0x555140 */
  esp -= 4; W32(esp, 0x50a788u); SPILL(); f_555140(); if (g_unwind) return; RELOAD();
/* 50a788: mov ecx, dword ptr [0x5a0c94] */
  ecx = R32((uint32_t)(0x5a0c94u));
/* 50a78e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50a78f: push 0x5a4758 */
  { uint32_t v = 0x5a4758u; esp -= 4; W32(esp, v); }
/* 50a794: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50a795: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x50a79au); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 50a79a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50a79d: jmp 0x50a760 */
  goto L_50a760;
}

void f_50a79f(void) {
  LOAD_REGS();
L_50a79f: /* 50a79f: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 50a7a2: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 50a7a7: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 50a7aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50a7ab: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 50a7ae: call 0x554df6 */
  esp -= 4; W32(esp, 0x50a7b3u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_50a7b3(); return;
}

void f_50a7b3(void) {
  LOAD_REGS();
L_50a7b3: /* 50a7b3: push 0x56b4c0 */
  { uint32_t v = 0x56b4c0u; esp -= 4; W32(esp, v); }
/* 50a7b8: push 0x5a47a4 */
  { uint32_t v = 0x5a47a4u; esp -= 4; W32(esp, v); }
/* 50a7bd: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x50a7c2u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 50a7c2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50a7c5: xor edi, edi */
  edi = 0;
/* 50a7c7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50a7c8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50a7c9: call 0x554df6 */
  esp -= 4; W32(esp, 0x50a7ceu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_50a7ce: guest_badaddr(0x50a7ce); return;
}

void f_50a810(void) {
  LOAD_REGS();
L_50a810: /* 50a810: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 50a811: mov ebp, esp */
  ebp = esp;
/* 50a813: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 50a815: push 0x556d40 */
  { uint32_t v = 0x556d40u; esp -= 4; W32(esp, v); }
/* 50a81a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 50a820: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50a821: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 50a828: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 50a82b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50a82c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50a82d: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 50a830: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50a831: mov edi, ecx */
  edi = ecx;
/* 50a833: xor ecx, ecx */
  ecx = 0;
/* 50a835: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50a837: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 50a83a: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* 50a83d: je 0x50a853 */
  if (zf) goto L_50a853;
L_50a83f: /* 50a83f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 50a841: or eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  eax = r;
  }
/* 50a844: jne 0x50a853 */
  if (!zf) goto L_50a853;
L_50a846: /* 50a846: movzx edx, byte ptr [esi + 0xe] */
  edx = (uint32_t)(R8((uint32_t)(esi + 0xeu)));
/* 50a84a: cmp edx, dword ptr [ebp + 0x18] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50a84d: je 0x50a90d */
  if (zf) goto L_50a90d;
L_50a853: /* 50a853: mov ebx, dword ptr [ebp + 0x14] */
  ebx = R32((uint32_t)(ebp + 0x14u));
/* 50a856: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50a858: je 0x50a883 */
  if (zf) goto L_50a883;
L_50a85a: /* 50a85a: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 50a85c: or eax, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  eax = r;
  }
/* 50a85f: jne 0x50a883 */
  if (!zf) goto L_50a883;
L_50a861: /* 50a861: movzx edx, byte ptr [ebx + 0xe] */
  edx = (uint32_t)(R8((uint32_t)(ebx + 0xeu)));
/* 50a865: cmp edx, dword ptr [ebp + 0x18] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50a868: jne 0x50a883 */
  if (!zf) goto L_50a883;
L_50a86a: /* 50a86a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 50a86d: mov dword ptr [ebx + 8], eax */
  W32((uint32_t)(ebx + 0x8u), eax);
/* 50a870: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 50a873: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 50a87a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50a87b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50a87c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50a87d: mov esp, ebp */
  esp = ebp;
/* 50a87f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50a880: ret 0x14 */
  esp += 24; SPILL(); return;
L_50a883: /* 50a883: cmp dword ptr [edi + 0x20], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x20u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50a886: jne 0x50a8a1 */
  if (!zf) goto L_50a8a1;
L_50a888: /* 50a888: push 0x155 */
  { uint32_t v = 0x155u; esp -= 4; W32(esp, v); }
/* 50a88d: push 0x5a49fc */
  { uint32_t v = 0x5a49fcu; esp -= 4; W32(esp, v); }
/* 50a892: push 0x5a4a08 */
  { uint32_t v = 0x5a4a08u; esp -= 4; W32(esp, v); }
/* 50a897: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x50a89cu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 50a89c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50a89f: xor ecx, ecx */
  ecx = 0;
L_50a8a1: /* 50a8a1: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50a8a3: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 50a8a6: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 50a8a9: mov dword ptr [edi + 0x20], edx */
  W32((uint32_t)(edi + 0x20u), edx);
/* 50a8ac: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 50a8af: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 50a8b2: mov dl, byte ptr [ebp + 0x18] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x18u))) & 0xffu);
/* 50a8b5: mov byte ptr [eax + 0xe], dl */
  W8((uint32_t)(eax + 0xeu), (edx & 0xffu));
/* 50a8b8: mov word ptr [eax + 0xc], cx */
  W16((uint32_t)(eax + 0xcu), (ecx & 0xffffu));
/* 50a8bc: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 50a8be: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 50a8c1: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 50a8c4: mov dword ptr [eax + 0x14], ebx */
  W32((uint32_t)(eax + 0x14u), ebx);
/* 50a8c7: mov dword ptr [eax + 0x18], esi */
  W32((uint32_t)(eax + 0x18u), esi);
/* 50a8ca: mov dword ptr [eax + 0x1c], ecx */
  W32((uint32_t)(eax + 0x1cu), ecx);
/* 50a8cd: je 0x50a903 */
  if (zf) goto L_50a903;
L_50a8cf: /* 50a8cf: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 50a8d2: jmp 0x50a906 */
  goto L_50a906;
L_50a903: /* 50a903: mov dword ptr [edi + 0x18], eax */
  W32((uint32_t)(edi + 0x18u), eax);
L_50a906: /* 50a906: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50a908: je 0x50a90d */
  if (zf) goto L_50a90d;
L_50a90a: /* 50a90a: mov dword ptr [ebx + 0x18], eax */
  W32((uint32_t)(ebx + 0x18u), eax);
L_50a90d: /* 50a90d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 50a910: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50a911: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50a912: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 50a919: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50a91a: mov esp, ebp */
  esp = ebp;
/* 50a91c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50a91d: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_50a8d4(void) {
  LOAD_REGS();
L_50a8d4: /* 50a8d4: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 50a8d7: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 50a8dc: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 50a8df: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50a8e0: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 50a8e3: call 0x554df6 */
  esp -= 4; W32(esp, 0x50a8e8u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_50a8e8(); return;
}

void f_50a8e8(void) {
  LOAD_REGS();
L_50a8e8: /* 50a8e8: push 0x56b4f4 */
  { uint32_t v = 0x56b4f4u; esp -= 4; W32(esp, v); }
/* 50a8ed: push 0x5a4a1c */
  { uint32_t v = 0x5a4a1cu; esp -= 4; W32(esp, v); }
/* 50a8f2: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x50a8f7u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 50a8f7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50a8fa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50a8fc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50a8fe: call 0x554df6 */
  esp -= 4; W32(esp, 0x50a903u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
/* 50a903: mov dword ptr [edi + 0x18], eax */
  W32((uint32_t)(edi + 0x18u), eax);
/* 50a906: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50a908: je 0x50a90d */
  if (zf) goto L_50a90d;
L_50a90a: /* 50a90a: mov dword ptr [ebx + 0x18], eax */
  W32((uint32_t)(ebx + 0x18u), eax);
L_50a90d: /* 50a90d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 50a910: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50a911: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50a912: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 50a919: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50a91a: mov esp, ebp */
  esp = ebp;
/* 50a91c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50a91d: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_50a970(void) {
  LOAD_REGS();
L_50a970: /* 50a970: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 50a971: mov ebp, esp */
  ebp = esp;
/* 50a973: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 50a975: push 0x556d50 */
  { uint32_t v = 0x556d50u; esp -= 4; W32(esp, v); }
/* 50a97a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 50a980: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50a981: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 50a988: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 50a98b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50a98c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50a98d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50a98e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 50a991: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 50a994: push 0x5a4bd8 */
  { uint32_t v = 0x5a4bd8u; esp -= 4; W32(esp, v); }
/* 50a999: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50a99a: mov edi, ecx */
  edi = ecx;
/* 50a99c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 50a9a3: call 0x4e32ec */
  esp -= 4; W32(esp, 0x50a9a8u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 50a9a8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50a9ab: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50a9ad: je 0x50aa2c */
  if (zf) goto L_50aa2c;
L_50a9af: /* 50a9af: mov esi, dword ptr [edi + 0x18] */
  esi = R32((uint32_t)(edi + 0x18u));
/* 50a9b2: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
L_50a9b5: /* 50a9b5: cmp esi, dword ptr [edi + 0x1c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50a9b8: je 0x50aa14 */
  if (zf) goto L_50aa14;
L_50a9ba: /* 50a9ba: cmp dword ptr [esi + 0x10], 0x1000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x10u))); uint32_t b = (uint32_t)(0x1000000u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50a9c1: jl 0x50a9ca */
  if ((sf != of)) goto L_50a9ca;
L_50a9c3: /* 50a9c3: mov eax, 0x5a4bec */
  eax = 0x5a4becu;
/* 50a9c8: jmp 0x50a9f0 */
  goto L_50a9f0;
L_50a9ca: /* 50a9ca: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 50a9cc: or ecx, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  ecx = r;
  }
/* 50a9cf: jne 0x50a9d8 */
  if (!zf) goto L_50a9d8;
L_50a9d1: /* 50a9d1: mov eax, 0x5a4bfc */
  eax = 0x5a4bfcu;
/* 50a9d6: jmp 0x50a9f0 */
  goto L_50a9f0;
L_50a9d8: /* 50a9d8: movzx edx, word ptr [esi + 0xc] */
  edx = (uint32_t)(R16((uint32_t)(esi + 0xcu)));
/* 50a9dc: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 50a9df: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 50a9e1: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50a9e4: mov eax, 0x5a4c08 */
  eax = 0x5a4c08u;
/* 50a9e9: jge 0x50a9f0 */
  if ((sf == of)) goto L_50a9f0;
L_50a9eb: /* 50a9eb: mov eax, 0x5a4c14 */
  eax = 0x5a4c14u;
L_50a9f0: /* 50a9f0: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 50a9f3: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 50a9f6: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 50a9f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50a9fa: movzx eax, byte ptr [esi] */
  eax = (uint32_t)(R8((uint32_t)(esi)));
/* 50a9fd: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 50a9ff: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50aa00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50aa01: push 0x5a4c20 */
  { uint32_t v = 0x5a4c20u; esp -= 4; W32(esp, v); }
/* 50aa06: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50aa07: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x50aa0cu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 50aa0c: mov esi, dword ptr [esi + 0x14] */
  esi = R32((uint32_t)(esi + 0x14u));
/* 50aa0f: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50aa12: jmp 0x50a9b5 */
  goto L_50a9b5;
L_50aa14: /* 50aa14: mov eax, 1 */
  eax = 0x1u;
/* 50aa19: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 50aa1c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 50aa23: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50aa24: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50aa25: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50aa26: mov esp, ebp */
  esp = ebp;
/* 50aa28: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50aa29: ret 8 */
  esp += 12; SPILL(); return;
L_50aa2c: /* 50aa2c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 50aa2f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50aa30: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50aa31: xor eax, eax */
  eax = 0;
/* 50aa33: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 50aa3a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50aa3b: mov esp, ebp */
  esp = ebp;
/* 50aa3d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50aa3e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_50aa41(void) {
  LOAD_REGS();
L_50aa41: /* 50aa41: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 50aa44: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 50aa49: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 50aa4c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50aa4d: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 50aa50: call 0x554df6 */
  esp -= 4; W32(esp, 0x50aa55u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_50aa55(); return;
}

void f_50aa55(void) {
  LOAD_REGS();
L_50aa55: /* 50aa55: push 0x56b53c */
  { uint32_t v = 0x56b53cu; esp -= 4; W32(esp, v); }
/* 50aa5a: push 0x5a4c3c */
  { uint32_t v = 0x5a4c3cu; esp -= 4; W32(esp, v); }
/* 50aa5f: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x50aa64u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 50aa64: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50aa67: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50aa69: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50aa6b: call 0x554df6 */
  esp -= 4; W32(esp, 0x50aa70u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_50aa70: guest_badaddr(0x50aa70); return;
}

void f_50aad0(void) {
  LOAD_REGS();
L_50aad0: /* 50aad0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50aad1: mov esi, ecx */
  esi = ecx;
/* 50aad3: fild dword ptr [esi + 0x10038] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x10038u)); FPUSH(v); }
/* 50aad9: mov edx, dword ptr [esi + 0x10040] */
  edx = R32((uint32_t)(esi + 0x10040u));
/* 50aadf: mov eax, dword ptr [esi + 0x10048] */
  eax = R32((uint32_t)(esi + 0x10048u));
/* 50aae5: mov ecx, dword ptr [esi + 0x1003c] */
  ecx = R32((uint32_t)(esi + 0x1003cu));
/* 50aaeb: fmul qword ptr [0x5a0f28] */
  ST0 = ST0 * (F64((uint32_t)(0x5a0f28u)));
/* 50aaf1: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 50aaf3: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 50aaf5: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 50aaf8: fmul qword ptr [0x56b568] */
  ST0 = ST0 * (F64((uint32_t)(0x56b568u)));
/* 50aafe: mov ecx, dword ptr [esi + 0x1002c] */
  ecx = R32((uint32_t)(esi + 0x1002cu));
/* 50ab04: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 50ab07: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50ab08: mov eax, dword ptr [esi + 0x10050] */
  eax = R32((uint32_t)(esi + 0x10050u));
/* 50ab0e: fild dword ptr [esi + 0x10030] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x10030u)); FPUSH(v); }
/* 50ab14: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 50ab15: and edx, 0x3ff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 50ab1b: fmul qword ptr [0x5a0f28] */
  ST0 = ST0 * (F64((uint32_t)(0x5a0f28u)));
/* 50ab21: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 50ab23: sar eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 50ab26: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50ab27: mov eax, dword ptr [esi + 0x1004c] */
  eax = R32((uint32_t)(esi + 0x1004cu));
/* 50ab2d: fmul qword ptr [0x56b568] */
  ST0 = ST0 * (F64((uint32_t)(0x56b568u)));
/* 50ab33: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 50ab34: and edx, 0x3ff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 50ab3a: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 50ab3c: mov edx, dword ptr [esi + 0x10028] */
  edx = R32((uint32_t)(esi + 0x10028u));
/* 50ab42: sar eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 50ab45: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50ab46: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 50ab4a: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 50ab4d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 50ab50: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50ab51: fild dword ptr [esi + 0x10034] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x10034u)); FPUSH(v); }
/* 50ab57: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 50ab5a: fmul qword ptr [0x5a0f28] */
  ST0 = ST0 * (F64((uint32_t)(0x5a0f28u)));
/* 50ab60: fmul qword ptr [0x56b568] */
  ST0 = ST0 * (F64((uint32_t)(0x56b568u)));
/* 50ab66: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 50ab69: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50ab6a: push 0x5a4c48 */
  { uint32_t v = 0x5a4c48u; esp -= 4; W32(esp, v); }
/* 50ab6f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50ab70: call 0x4e4183 */
  esp -= 4; W32(esp, 0x50ab75u); SPILL(); f_4e4183(); if (g_unwind) return; RELOAD();
/* 50ab75: xor eax, eax */
  eax = 0;
/* 50ab77: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50ab7a: mov dword ptr [esi + 0x10038], eax */
  W32((uint32_t)(esi + 0x10038u), eax);
/* 50ab80: mov dword ptr [esi + 0x10030], eax */
  W32((uint32_t)(esi + 0x10030u), eax);
/* 50ab86: mov dword ptr [esi + 0x1002c], eax */
  W32((uint32_t)(esi + 0x1002cu), eax);
/* 50ab8c: mov dword ptr [esi + 0x10034], eax */
  W32((uint32_t)(esi + 0x10034u), eax);
/* 50ab92: mov dword ptr [esi + 0x10028], eax */
  W32((uint32_t)(esi + 0x10028u), eax);
/* 50ab98: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50ab99: ret 4 */
  esp += 8; SPILL(); return;
}

void f_50abe0(void) {
  LOAD_REGS();
L_50abe0: /* 50abe0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 50abe4: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 50abe8: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50abea: jle 0x50abee */
  if ((zf || sf != of)) goto L_50abee;
L_50abec: /* 50abec: mov eax, ecx */
  eax = ecx;
L_50abee: /* 50abee: ret  */
  esp += 4; SPILL(); return;
}

void f_50ac00(void) {
  LOAD_REGS();
L_50ac00: /* 50ac00: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 50ac01: mov ebp, esp */
  ebp = esp;
/* 50ac03: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 50ac05: push 0x556d60 */
  { uint32_t v = 0x556d60u; esp -= 4; W32(esp, v); }
/* 50ac0a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 50ac10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50ac11: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 50ac18: sub esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 50ac1b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50ac1c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50ac1d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50ac1e: mov edi, ecx */
  edi = ecx;
/* 50ac20: cmp dword ptr [edi], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50ac23: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 50ac26: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 50ac29: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 50ac30: je 0x50ac49 */
  if (zf) goto L_50ac49;
L_50ac32: /* 50ac32: push 0xdb */
  { uint32_t v = 0xdbu; esp -= 4; W32(esp, v); }
/* 50ac37: push 0x5a47ac */
  { uint32_t v = 0x5a47acu; esp -= 4; W32(esp, v); }
/* 50ac3c: push 0x5a47b8 */
  { uint32_t v = 0x5a47b8u; esp -= 4; W32(esp, v); }
/* 50ac41: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x50ac46u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 50ac46: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50ac49: /* 50ac49: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 50ac4c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50ac4e: jne 0x50ac67 */
  if (!zf) goto L_50ac67;
L_50ac50: /* 50ac50: push 0xde */
  { uint32_t v = 0xdeu; esp -= 4; W32(esp, v); }
/* 50ac55: push 0x5a47cc */
  { uint32_t v = 0x5a47ccu; esp -= 4; W32(esp, v); }
/* 50ac5a: push 0x5a47d8 */
  { uint32_t v = 0x5a47d8u; esp -= 4; W32(esp, v); }
/* 50ac5f: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x50ac64u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 50ac64: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50ac67: /* 50ac67: mov esi, dword ptr [edi + 0x18] */
  esi = R32((uint32_t)(edi + 0x18u));
/* 50ac6a: xor eax, eax */
  eax = 0;
/* 50ac6c: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 50ac6f: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 50ac72: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 50ac75: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 50ac78: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 50ac7b: mov eax, dword ptr [edi + 0x10024] */
  eax = R32((uint32_t)(edi + 0x10024u));
/* 50ac81: or ebx, 0xffffffff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 50ac84: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 50ac87: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 50ac8b: jmp 0x50ac90 */
  goto L_50ac90;
L_50ac90: /* 50ac90: cmp esi, dword ptr [edi + 0x1c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50ac93: je 0x50ae24 */
  if (zf) goto L_50ae24;
L_50ac99: /* 50ac99: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 50ac9c: cmp dword ptr [esi + 8], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x8u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50ac9f: je 0x50acb8 */
  if (zf) goto L_50acb8;
L_50aca1: /* 50aca1: push 0xe9 */
  { uint32_t v = 0xe9u; esp -= 4; W32(esp, v); }
/* 50aca6: push 0x5a47ec */
  { uint32_t v = 0x5a47ecu; esp -= 4; W32(esp, v); }
/* 50acab: push 0x5a47f8 */
  { uint32_t v = 0x5a47f8u; esp -= 4; W32(esp, v); }
/* 50acb0: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x50acb5u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 50acb5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50acb8: /* 50acb8: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 50acbb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50acbd: jne 0x50acd6 */
  if (!zf) goto L_50acd6;
L_50acbf: /* 50acbf: push 0xea */
  { uint32_t v = 0xeau; esp -= 4; W32(esp, v); }
/* 50acc4: push 0x5a4818 */
  { uint32_t v = 0x5a4818u; esp -= 4; W32(esp, v); }
/* 50acc9: push 0x5a4824 */
  { uint32_t v = 0x5a4824u; esp -= 4; W32(esp, v); }
/* 50acce: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x50acd3u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 50acd3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50acd6: /* 50acd6: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* 50acd9: cmp dword ptr [edx + 0x18], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x18u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50acdc: je 0x50acf5 */
  if (zf) goto L_50acf5;
L_50acde: /* 50acde: push 0xeb */
  { uint32_t v = 0xebu; esp -= 4; W32(esp, v); }
/* 50ace3: push 0x5a4838 */
  { uint32_t v = 0x5a4838u; esp -= 4; W32(esp, v); }
/* 50ace8: push 0x5a4844 */
  { uint32_t v = 0x5a4844u; esp -= 4; W32(esp, v); }
/* 50aced: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x50acf2u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 50acf2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50acf5: /* 50acf5: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 50acf8: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 50acfb: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 50acfe: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 50ad01: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 50ad03: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 50ad06: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 50ad08: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 50ad0b: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 50ad0e: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 50ad10: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 50ad13: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 50ad14: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 50ad17: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 50ad19: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  ecx = r;
  }
/* 50ad1b: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 50ad1e: jne 0x50ad54 */
  if (!zf) goto L_50ad54;
L_50ad20: /* 50ad20: movzx edx, byte ptr [esi + 0xe] */
  edx = (uint32_t)(R8((uint32_t)(esi + 0xeu)));
/* 50ad24: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50ad26: jne 0x50ad46 */
  if (!zf) goto L_50ad46;
L_50ad28: /* 50ad28: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 50ad2b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50ad2d: je 0x50ad46 */
  if (zf) goto L_50ad46;
L_50ad2f: /* 50ad2f: push 0xf7 */
  { uint32_t v = 0xf7u; esp -= 4; W32(esp, v); }
/* 50ad34: push 0x5a486c */
  { uint32_t v = 0x5a486cu; esp -= 4; W32(esp, v); }
/* 50ad39: push 0x5a4878 */
  { uint32_t v = 0x5a4878u; esp -= 4; W32(esp, v); }
/* 50ad3e: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x50ad43u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 50ad43: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50ad46: /* 50ad46: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 50ad48: or eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  eax = r;
  }
/* 50ad4b: mov dword ptr [ebp - 0x18], 1 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x1u);
/* 50ad52: je 0x50ad5b */
  if (zf) goto L_50ad5b;
L_50ad54: /* 50ad54: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
L_50ad5b: /* 50ad5b: cmp esi, dword ptr [edi + 0x18] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50ad5e: movzx ebx, byte ptr [esi + 0xe] */
  ebx = (uint32_t)(R8((uint32_t)(esi + 0xeu)));
/* 50ad62: je 0x50ada1 */
  if (zf) goto L_50ada1;
L_50ad64: /* 50ad64: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 50ad67: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50ad69: jne 0x50ad82 */
  if (!zf) goto L_50ad82;
L_50ad6b: /* 50ad6b: push 0xff */
  { uint32_t v = 0xffu; esp -= 4; W32(esp, v); }
/* 50ad70: push 0x5a4884 */
  { uint32_t v = 0x5a4884u; esp -= 4; W32(esp, v); }
/* 50ad75: push 0x5a4890 */
  { uint32_t v = 0x5a4890u; esp -= 4; W32(esp, v); }
/* 50ad7a: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x50ad7fu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 50ad7f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50ad82: /* 50ad82: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 50ad85: cmp dword ptr [ecx + 0x14], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x14u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50ad88: je 0x50ada1 */
  if (zf) goto L_50ada1;
L_50ad8a: /* 50ad8a: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 50ad8f: push 0x5a48a4 */
  { uint32_t v = 0x5a48a4u; esp -= 4; W32(esp, v); }
/* 50ad94: push 0x5a48b0 */
  { uint32_t v = 0x5a48b0u; esp -= 4; W32(esp, v); }
/* 50ad99: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x50ad9eu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 50ad9e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50ada1: /* 50ada1: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 50ada3: or edx, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  edx = r;
  }
/* 50ada6: je 0x50ae19 */
  if (zf) goto L_50ae19;
L_50ada8: /* 50ada8: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 50adaa: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 50adad: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 50adb0: mov ecx, eax */
  ecx = eax;
/* 50adb2: shr ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 12;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 50adb5: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 50adb7: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 50adb8: shr ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 12;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 50adbb: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 50adbd: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 50adc0: xor edi, edi */
  edi = 0;
/* 50adc2: and ecx, 0x3fff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3fffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 50adc8: mov eax, dword ptr [edx + ecx*4 + 0x24] */
  eax = R32((uint32_t)(edx + ecx*4 + 0x24u));
/* 50adcc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_50add0: /* 50add0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50add2: je 0x50ade2 */
  if (zf) goto L_50ade2;
L_50add4: /* 50add4: xor ecx, ecx */
  ecx = 0;
/* 50add6: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50add8: mov eax, dword ptr [eax + 0x1c] */
  eax = R32((uint32_t)(eax + 0x1cu));
/* 50addb: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 50adde: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 50ade0: jmp 0x50add0 */
  goto L_50add0;
L_50ade2: /* 50ade2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50ade4: jne 0x50adfd */
  if (!zf) goto L_50adfd;
L_50ade6: /* 50ade6: push 0x10a */
  { uint32_t v = 0x10au; esp -= 4; W32(esp, v); }
/* 50adeb: push 0x5a48d8 */
  { uint32_t v = 0x5a48d8u; esp -= 4; W32(esp, v); }
/* 50adf0: push 0x5a48e4 */
  { uint32_t v = 0x5a48e4u; esp -= 4; W32(esp, v); }
/* 50adf5: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x50adfau); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 50adfa: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50adfd: /* 50adfd: cmp edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50ae00: je 0x50ae19 */
  if (zf) goto L_50ae19;
L_50ae02: /* 50ae02: push 0x10b */
  { uint32_t v = 0x10bu; esp -= 4; W32(esp, v); }
/* 50ae07: push 0x5a48f4 */
  { uint32_t v = 0x5a48f4u; esp -= 4; W32(esp, v); }
/* 50ae0c: push 0x5a4900 */
  { uint32_t v = 0x5a4900u; esp -= 4; W32(esp, v); }
/* 50ae11: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x50ae16u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 50ae16: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50ae19: /* 50ae19: mov esi, dword ptr [esi + 0x14] */
  esi = R32((uint32_t)(esi + 0x14u));
/* 50ae1c: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 50ae1f: jmp 0x50ac90 */
  goto L_50ac90;
L_50ae24: /* 50ae24: mov edx, dword ptr [edi + 0x10054] */
  edx = R32((uint32_t)(edi + 0x10054u));
/* 50ae2a: mov ecx, dword ptr [edi + 0x10024] */
  ecx = R32((uint32_t)(edi + 0x10024u));
/* 50ae30: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 50ae33: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 50ae35: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50ae37: je 0x50ae50 */
  if (zf) goto L_50ae50;
L_50ae39: /* 50ae39: push 0x10e */
  { uint32_t v = 0x10eu; esp -= 4; W32(esp, v); }
/* 50ae3e: push 0x5a4910 */
  { uint32_t v = 0x5a4910u; esp -= 4; W32(esp, v); }
/* 50ae43: push 0x5a491c */
  { uint32_t v = 0x5a491cu; esp -= 4; W32(esp, v); }
/* 50ae48: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x50ae4du); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 50ae4d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50ae50: /* 50ae50: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 50ae53: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 50ae56: mov dword ptr [ebp - 4], 3 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 50ae5d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_50ae60: /* 50ae60: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 50ae61: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50ae63: je 0x50ae99 */
  if (zf) goto L_50ae99;
L_50ae65: /* 50ae65: mov eax, dword ptr [eax + 0x14] */
  eax = R32((uint32_t)(eax + 0x14u));
/* 50ae68: jmp 0x50ae60 */
  goto L_50ae60;
L_50ae99: /* 50ae99: cmp ecx, dword ptr [edi + 0x10044] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x10044u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50ae9f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 50aea6: je 0x50aebf */
  if (zf) goto L_50aebf;
L_50aea8: /* 50aea8: push 0x118 */
  { uint32_t v = 0x118u; esp -= 4; W32(esp, v); }
/* 50aead: push 0x5a4958 */
  { uint32_t v = 0x5a4958u; esp -= 4; W32(esp, v); }
/* 50aeb2: push 0x5a4964 */
  { uint32_t v = 0x5a4964u; esp -= 4; W32(esp, v); }
/* 50aeb7: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x50aebcu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 50aebc: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50aebf: /* 50aebf: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 50aec3: xor ebx, ebx */
  ebx = 0;
L_50aec5: /* 50aec5: cmp ebx, 0x4000 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 50aecb: jae 0x50af4a */
  if (!cf) goto L_50af4a;
L_50aecd: /* 50aecd: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 50aed0: mov edi, dword ptr [edx + ebx*4 + 0x24] */
  edi = R32((uint32_t)(edx + ebx*4 + 0x24u));
L_50aed4: /* 50aed4: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50aed6: je 0x50af44 */
  if (zf) goto L_50af44;
L_50aed8: /* 50aed8: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 50aeda: mov esi, dword ptr [ebp - 0x28] */
  esi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 50aedd: mov ecx, eax */
  ecx = eax;
/* 50aedf: shr ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 12;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 50aee2: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 50aee4: shr ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 12;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 50aee7: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 50aee9: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 50aeea: and ecx, 0x3fff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3fffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 50aef0: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50aef2: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
/* 50aef5: je 0x50af0e */
  if (zf) goto L_50af0e;
L_50aef7: /* 50aef7: push 0x124 */
  { uint32_t v = 0x124u; esp -= 4; W32(esp, v); }
/* 50aefc: push 0x5a497c */
  { uint32_t v = 0x5a497cu; esp -= 4; W32(esp, v); }
/* 50af01: push 0x5a4988 */
  { uint32_t v = 0x5a4988u; esp -= 4; W32(esp, v); }
/* 50af06: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x50af0bu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 50af0b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50af0e: /* 50af0e: mov esi, dword ptr [edi + 0x1c] */
  esi = R32((uint32_t)(edi + 0x1cu));
L_50af11: /* 50af11: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50af13: je 0x50af3f */
  if (zf) goto L_50af3f;
L_50af15: /* 50af15: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 50af17: cmp edx, dword ptr [edi] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50af19: jne 0x50af3a */
  if (!zf) goto L_50af3a;
L_50af1b: /* 50af1b: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 50af1e: cmp eax, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50af21: jne 0x50af3a */
  if (!zf) goto L_50af3a;
L_50af23: /* 50af23: push 0x128 */
  { uint32_t v = 0x128u; esp -= 4; W32(esp, v); }
/* 50af28: push 0x5a49a0 */
  { uint32_t v = 0x5a49a0u; esp -= 4; W32(esp, v); }
/* 50af2d: push 0x5a49ac */
  { uint32_t v = 0x5a49acu; esp -= 4; W32(esp, v); }
/* 50af32: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x50af37u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 50af37: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50af3a: /* 50af3a: mov esi, dword ptr [esi + 0x1c] */
  esi = R32((uint32_t)(esi + 0x1cu));
/* 50af3d: jmp 0x50af11 */
  goto L_50af11;
L_50af3f: /* 50af3f: mov edi, dword ptr [edi + 0x1c] */
  edi = R32((uint32_t)(edi + 0x1cu));
/* 50af42: jmp 0x50aed4 */
  goto L_50aed4;
L_50af44: /* 50af44: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 50af45: jmp 0x50aec5 */
  goto L_50aec5;
L_50af4a: /* 50af4a: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 50af4d: cmp dword ptr [ebp - 0x28], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50af50: je 0x50af69 */
  if (zf) goto L_50af69;
L_50af52: /* 50af52: push 0x12b */
  { uint32_t v = 0x12bu; esp -= 4; W32(esp, v); }
/* 50af57: push 0x5a49c4 */
  { uint32_t v = 0x5a49c4u; esp -= 4; W32(esp, v); }
/* 50af5c: push 0x5a49d0 */
  { uint32_t v = 0x5a49d0u; esp -= 4; W32(esp, v); }
/* 50af61: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x50af66u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 50af66: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50af69: /* 50af69: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 50af6c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50af6d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50af6e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 50af75: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50af76: mov esp, ebp */
  esp = ebp;
/* 50af78: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50af79: ret  */
  esp += 4; SPILL(); return;
}

void f_50ac8d(void) {
  LOAD_REGS();
L_50ac8d: /* 50ac8d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_50ac90: /* 50ac90: cmp esi, dword ptr [edi + 0x1c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50ac93: je 0x50ae24 */
  if (zf) goto L_50ae24;
L_50ac99: /* 50ac99: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 50ac9c: cmp dword ptr [esi + 8], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x8u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50ac9f: je 0x50acb8 */
  if (zf) goto L_50acb8;
L_50aca1: /* 50aca1: push 0xe9 */
  { uint32_t v = 0xe9u; esp -= 4; W32(esp, v); }
/* 50aca6: push 0x5a47ec */
  { uint32_t v = 0x5a47ecu; esp -= 4; W32(esp, v); }
/* 50acab: push 0x5a47f8 */
  { uint32_t v = 0x5a47f8u; esp -= 4; W32(esp, v); }
/* 50acb0: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x50acb5u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 50acb5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50acb8: /* 50acb8: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 50acbb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50acbd: jne 0x50acd6 */
  if (!zf) goto L_50acd6;
L_50acbf: /* 50acbf: push 0xea */
  { uint32_t v = 0xeau; esp -= 4; W32(esp, v); }
/* 50acc4: push 0x5a4818 */
  { uint32_t v = 0x5a4818u; esp -= 4; W32(esp, v); }
/* 50acc9: push 0x5a4824 */
  { uint32_t v = 0x5a4824u; esp -= 4; W32(esp, v); }
/* 50acce: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x50acd3u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 50acd3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50acd6: /* 50acd6: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* 50acd9: cmp dword ptr [edx + 0x18], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x18u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50acdc: je 0x50acf5 */
  if (zf) goto L_50acf5;
L_50acde: /* 50acde: push 0xeb */
  { uint32_t v = 0xebu; esp -= 4; W32(esp, v); }
/* 50ace3: push 0x5a4838 */
  { uint32_t v = 0x5a4838u; esp -= 4; W32(esp, v); }
/* 50ace8: push 0x5a4844 */
  { uint32_t v = 0x5a4844u; esp -= 4; W32(esp, v); }
/* 50aced: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x50acf2u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 50acf2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50acf5: /* 50acf5: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 50acf8: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 50acfb: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 50acfe: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 50ad01: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 50ad03: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 50ad06: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 50ad08: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 50ad0b: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 50ad0e: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 50ad10: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 50ad13: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 50ad14: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 50ad17: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 50ad19: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  ecx = r;
  }
/* 50ad1b: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 50ad1e: jne 0x50ad54 */
  if (!zf) goto L_50ad54;
L_50ad20: /* 50ad20: movzx edx, byte ptr [esi + 0xe] */
  edx = (uint32_t)(R8((uint32_t)(esi + 0xeu)));
/* 50ad24: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50ad26: jne 0x50ad46 */
  if (!zf) goto L_50ad46;
L_50ad28: /* 50ad28: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 50ad2b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50ad2d: je 0x50ad46 */
  if (zf) goto L_50ad46;
L_50ad2f: /* 50ad2f: push 0xf7 */
  { uint32_t v = 0xf7u; esp -= 4; W32(esp, v); }
/* 50ad34: push 0x5a486c */
  { uint32_t v = 0x5a486cu; esp -= 4; W32(esp, v); }
/* 50ad39: push 0x5a4878 */
  { uint32_t v = 0x5a4878u; esp -= 4; W32(esp, v); }
/* 50ad3e: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x50ad43u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 50ad43: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50ad46: /* 50ad46: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 50ad48: or eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  eax = r;
  }
/* 50ad4b: mov dword ptr [ebp - 0x18], 1 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x1u);
/* 50ad52: je 0x50ad5b */
  if (zf) goto L_50ad5b;
L_50ad54: /* 50ad54: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
L_50ad5b: /* 50ad5b: cmp esi, dword ptr [edi + 0x18] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50ad5e: movzx ebx, byte ptr [esi + 0xe] */
  ebx = (uint32_t)(R8((uint32_t)(esi + 0xeu)));
/* 50ad62: je 0x50ada1 */
  if (zf) goto L_50ada1;
L_50ad64: /* 50ad64: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 50ad67: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50ad69: jne 0x50ad82 */
  if (!zf) goto L_50ad82;
L_50ad6b: /* 50ad6b: push 0xff */
  { uint32_t v = 0xffu; esp -= 4; W32(esp, v); }
/* 50ad70: push 0x5a4884 */
  { uint32_t v = 0x5a4884u; esp -= 4; W32(esp, v); }
/* 50ad75: push 0x5a4890 */
  { uint32_t v = 0x5a4890u; esp -= 4; W32(esp, v); }
/* 50ad7a: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x50ad7fu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 50ad7f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50ad82: /* 50ad82: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 50ad85: cmp dword ptr [ecx + 0x14], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x14u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50ad88: je 0x50ada1 */
  if (zf) goto L_50ada1;
L_50ad8a: /* 50ad8a: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 50ad8f: push 0x5a48a4 */
  { uint32_t v = 0x5a48a4u; esp -= 4; W32(esp, v); }
/* 50ad94: push 0x5a48b0 */
  { uint32_t v = 0x5a48b0u; esp -= 4; W32(esp, v); }
/* 50ad99: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x50ad9eu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 50ad9e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50ada1: /* 50ada1: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 50ada3: or edx, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  edx = r;
  }
/* 50ada6: je 0x50ae19 */
  if (zf) goto L_50ae19;
L_50ada8: /* 50ada8: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 50adaa: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 50adad: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 50adb0: mov ecx, eax */
  ecx = eax;
/* 50adb2: shr ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 12;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 50adb5: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 50adb7: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 50adb8: shr ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 12;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 50adbb: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 50adbd: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 50adc0: xor edi, edi */
  edi = 0;
/* 50adc2: and ecx, 0x3fff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3fffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 50adc8: mov eax, dword ptr [edx + ecx*4 + 0x24] */
  eax = R32((uint32_t)(edx + ecx*4 + 0x24u));
/* 50adcc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_50add0: /* 50add0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50add2: je 0x50ade2 */
  if (zf) goto L_50ade2;
L_50add4: /* 50add4: xor ecx, ecx */
  ecx = 0;
/* 50add6: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50add8: mov eax, dword ptr [eax + 0x1c] */
  eax = R32((uint32_t)(eax + 0x1cu));
/* 50addb: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 50adde: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 50ade0: jmp 0x50add0 */
  goto L_50add0;
L_50ade2: /* 50ade2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50ade4: jne 0x50adfd */
  if (!zf) goto L_50adfd;
L_50ade6: /* 50ade6: push 0x10a */
  { uint32_t v = 0x10au; esp -= 4; W32(esp, v); }
/* 50adeb: push 0x5a48d8 */
  { uint32_t v = 0x5a48d8u; esp -= 4; W32(esp, v); }
/* 50adf0: push 0x5a48e4 */
  { uint32_t v = 0x5a48e4u; esp -= 4; W32(esp, v); }
/* 50adf5: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x50adfau); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 50adfa: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50adfd: /* 50adfd: cmp edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50ae00: je 0x50ae19 */
  if (zf) goto L_50ae19;
L_50ae02: /* 50ae02: push 0x10b */
  { uint32_t v = 0x10bu; esp -= 4; W32(esp, v); }
/* 50ae07: push 0x5a48f4 */
  { uint32_t v = 0x5a48f4u; esp -= 4; W32(esp, v); }
/* 50ae0c: push 0x5a4900 */
  { uint32_t v = 0x5a4900u; esp -= 4; W32(esp, v); }
/* 50ae11: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x50ae16u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 50ae16: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50ae19: /* 50ae19: mov esi, dword ptr [esi + 0x14] */
  esi = R32((uint32_t)(esi + 0x14u));
/* 50ae1c: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 50ae1f: jmp 0x50ac90 */
  goto L_50ac90;
L_50ae24: /* 50ae24: mov edx, dword ptr [edi + 0x10054] */
  edx = R32((uint32_t)(edi + 0x10054u));
/* 50ae2a: mov ecx, dword ptr [edi + 0x10024] */
  ecx = R32((uint32_t)(edi + 0x10024u));
/* 50ae30: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 50ae33: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 50ae35: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50ae37: je 0x50ae50 */
  if (zf) goto L_50ae50;
L_50ae39: /* 50ae39: push 0x10e */
  { uint32_t v = 0x10eu; esp -= 4; W32(esp, v); }
/* 50ae3e: push 0x5a4910 */
  { uint32_t v = 0x5a4910u; esp -= 4; W32(esp, v); }
/* 50ae43: push 0x5a491c */
  { uint32_t v = 0x5a491cu; esp -= 4; W32(esp, v); }
/* 50ae48: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x50ae4du); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 50ae4d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50ae50: /* 50ae50: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 50ae53: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 50ae56: mov dword ptr [ebp - 4], 3 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 50ae5d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_50ae60: /* 50ae60: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 50ae61: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50ae63: je 0x50ae99 */
  if (zf) goto L_50ae99;
L_50ae65: /* 50ae65: mov eax, dword ptr [eax + 0x14] */
  eax = R32((uint32_t)(eax + 0x14u));
/* 50ae68: jmp 0x50ae60 */
  goto L_50ae60;
L_50ae99: /* 50ae99: cmp ecx, dword ptr [edi + 0x10044] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x10044u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50ae9f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 50aea6: je 0x50aebf */
  if (zf) goto L_50aebf;
L_50aea8: /* 50aea8: push 0x118 */
  { uint32_t v = 0x118u; esp -= 4; W32(esp, v); }
/* 50aead: push 0x5a4958 */
  { uint32_t v = 0x5a4958u; esp -= 4; W32(esp, v); }
/* 50aeb2: push 0x5a4964 */
  { uint32_t v = 0x5a4964u; esp -= 4; W32(esp, v); }
/* 50aeb7: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x50aebcu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 50aebc: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50aebf: /* 50aebf: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 50aec3: xor ebx, ebx */
  ebx = 0;
L_50aec5: /* 50aec5: cmp ebx, 0x4000 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 50aecb: jae 0x50af4a */
  if (!cf) goto L_50af4a;
L_50aecd: /* 50aecd: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 50aed0: mov edi, dword ptr [edx + ebx*4 + 0x24] */
  edi = R32((uint32_t)(edx + ebx*4 + 0x24u));
L_50aed4: /* 50aed4: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50aed6: je 0x50af44 */
  if (zf) goto L_50af44;
L_50aed8: /* 50aed8: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 50aeda: mov esi, dword ptr [ebp - 0x28] */
  esi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 50aedd: mov ecx, eax */
  ecx = eax;
/* 50aedf: shr ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 12;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 50aee2: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 50aee4: shr ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 12;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 50aee7: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 50aee9: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 50aeea: and ecx, 0x3fff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3fffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 50aef0: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50aef2: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
/* 50aef5: je 0x50af0e */
  if (zf) goto L_50af0e;
L_50aef7: /* 50aef7: push 0x124 */
  { uint32_t v = 0x124u; esp -= 4; W32(esp, v); }
/* 50aefc: push 0x5a497c */
  { uint32_t v = 0x5a497cu; esp -= 4; W32(esp, v); }
/* 50af01: push 0x5a4988 */
  { uint32_t v = 0x5a4988u; esp -= 4; W32(esp, v); }
/* 50af06: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x50af0bu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 50af0b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50af0e: /* 50af0e: mov esi, dword ptr [edi + 0x1c] */
  esi = R32((uint32_t)(edi + 0x1cu));
L_50af11: /* 50af11: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50af13: je 0x50af3f */
  if (zf) goto L_50af3f;
L_50af15: /* 50af15: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 50af17: cmp edx, dword ptr [edi] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50af19: jne 0x50af3a */
  if (!zf) goto L_50af3a;
L_50af1b: /* 50af1b: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 50af1e: cmp eax, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50af21: jne 0x50af3a */
  if (!zf) goto L_50af3a;
L_50af23: /* 50af23: push 0x128 */
  { uint32_t v = 0x128u; esp -= 4; W32(esp, v); }
/* 50af28: push 0x5a49a0 */
  { uint32_t v = 0x5a49a0u; esp -= 4; W32(esp, v); }
/* 50af2d: push 0x5a49ac */
  { uint32_t v = 0x5a49acu; esp -= 4; W32(esp, v); }
/* 50af32: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x50af37u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 50af37: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50af3a: /* 50af3a: mov esi, dword ptr [esi + 0x1c] */
  esi = R32((uint32_t)(esi + 0x1cu));
/* 50af3d: jmp 0x50af11 */
  goto L_50af11;
L_50af3f: /* 50af3f: mov edi, dword ptr [edi + 0x1c] */
  edi = R32((uint32_t)(edi + 0x1cu));
/* 50af42: jmp 0x50aed4 */
  goto L_50aed4;
L_50af44: /* 50af44: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 50af45: jmp 0x50aec5 */
  goto L_50aec5;
L_50af4a: /* 50af4a: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 50af4d: cmp dword ptr [ebp - 0x28], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50af50: je 0x50af69 */
  if (zf) goto L_50af69;
L_50af52: /* 50af52: push 0x12b */
  { uint32_t v = 0x12bu; esp -= 4; W32(esp, v); }
/* 50af57: push 0x5a49c4 */
  { uint32_t v = 0x5a49c4u; esp -= 4; W32(esp, v); }
/* 50af5c: push 0x5a49d0 */
  { uint32_t v = 0x5a49d0u; esp -= 4; W32(esp, v); }
/* 50af61: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x50af66u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 50af66: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50af69: /* 50af69: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 50af6c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50af6d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50af6e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 50af75: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50af76: mov esp, ebp */
  esp = ebp;
/* 50af78: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50af79: ret  */
  esp += 4; SPILL(); return;
}

void f_50ae6a(void) {
  LOAD_REGS();
L_50ae6a: /* 50ae6a: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 50ae6d: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 50ae72: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 50ae75: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50ae76: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 50ae79: call 0x554df6 */
  esp -= 4; W32(esp, 0x50ae7eu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_50ae7e(); return;
}

void f_50ae7e(void) {
  LOAD_REGS();
L_50ae7e: /* 50ae7e: push 0x56b5ac */
  { uint32_t v = 0x56b5acu; esp -= 4; W32(esp, v); }
/* 50ae83: push 0x5a4948 */
  { uint32_t v = 0x5a4948u; esp -= 4; W32(esp, v); }
/* 50ae88: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x50ae8du); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 50ae8d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50ae90: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50ae92: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50ae94: call 0x554df6 */
  esp -= 4; W32(esp, 0x50ae99u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
/* 50ae99: cmp ecx, dword ptr [edi + 0x10044] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x10044u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50ae9f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 50aea6: je 0x50aebf */
  if (zf) goto L_50aebf;
L_50aea8: /* 50aea8: push 0x118 */
  { uint32_t v = 0x118u; esp -= 4; W32(esp, v); }
/* 50aead: push 0x5a4958 */
  { uint32_t v = 0x5a4958u; esp -= 4; W32(esp, v); }
/* 50aeb2: push 0x5a4964 */
  { uint32_t v = 0x5a4964u; esp -= 4; W32(esp, v); }
/* 50aeb7: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x50aebcu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 50aebc: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50aebf: /* 50aebf: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 50aec3: xor ebx, ebx */
  ebx = 0;
L_50aec5: /* 50aec5: cmp ebx, 0x4000 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 50aecb: jae 0x50af4a */
  if (!cf) goto L_50af4a;
L_50aecd: /* 50aecd: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 50aed0: mov edi, dword ptr [edx + ebx*4 + 0x24] */
  edi = R32((uint32_t)(edx + ebx*4 + 0x24u));
L_50aed4: /* 50aed4: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50aed6: je 0x50af44 */
  if (zf) goto L_50af44;
L_50aed8: /* 50aed8: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 50aeda: mov esi, dword ptr [ebp - 0x28] */
  esi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 50aedd: mov ecx, eax */
  ecx = eax;
/* 50aedf: shr ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 12;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 50aee2: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 50aee4: shr ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 12;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 50aee7: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 50aee9: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 50aeea: and ecx, 0x3fff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3fffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 50aef0: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50aef2: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
/* 50aef5: je 0x50af0e */
  if (zf) goto L_50af0e;
L_50aef7: /* 50aef7: push 0x124 */
  { uint32_t v = 0x124u; esp -= 4; W32(esp, v); }
/* 50aefc: push 0x5a497c */
  { uint32_t v = 0x5a497cu; esp -= 4; W32(esp, v); }
/* 50af01: push 0x5a4988 */
  { uint32_t v = 0x5a4988u; esp -= 4; W32(esp, v); }
/* 50af06: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x50af0bu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 50af0b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50af0e: /* 50af0e: mov esi, dword ptr [edi + 0x1c] */
  esi = R32((uint32_t)(edi + 0x1cu));
L_50af11: /* 50af11: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50af13: je 0x50af3f */
  if (zf) goto L_50af3f;
L_50af15: /* 50af15: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 50af17: cmp edx, dword ptr [edi] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50af19: jne 0x50af3a */
  if (!zf) goto L_50af3a;
L_50af1b: /* 50af1b: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 50af1e: cmp eax, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50af21: jne 0x50af3a */
  if (!zf) goto L_50af3a;
L_50af23: /* 50af23: push 0x128 */
  { uint32_t v = 0x128u; esp -= 4; W32(esp, v); }
/* 50af28: push 0x5a49a0 */
  { uint32_t v = 0x5a49a0u; esp -= 4; W32(esp, v); }
/* 50af2d: push 0x5a49ac */
  { uint32_t v = 0x5a49acu; esp -= 4; W32(esp, v); }
/* 50af32: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x50af37u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 50af37: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50af3a: /* 50af3a: mov esi, dword ptr [esi + 0x1c] */
  esi = R32((uint32_t)(esi + 0x1cu));
/* 50af3d: jmp 0x50af11 */
  goto L_50af11;
L_50af3f: /* 50af3f: mov edi, dword ptr [edi + 0x1c] */
  edi = R32((uint32_t)(edi + 0x1cu));
/* 50af42: jmp 0x50aed4 */
  goto L_50aed4;
L_50af44: /* 50af44: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 50af45: jmp 0x50aec5 */
  goto L_50aec5;
L_50af4a: /* 50af4a: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 50af4d: cmp dword ptr [ebp - 0x28], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50af50: je 0x50af69 */
  if (zf) goto L_50af69;
L_50af52: /* 50af52: push 0x12b */
  { uint32_t v = 0x12bu; esp -= 4; W32(esp, v); }
/* 50af57: push 0x5a49c4 */
  { uint32_t v = 0x5a49c4u; esp -= 4; W32(esp, v); }
/* 50af5c: push 0x5a49d0 */
  { uint32_t v = 0x5a49d0u; esp -= 4; W32(esp, v); }
/* 50af61: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x50af66u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 50af66: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50af69: /* 50af69: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 50af6c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50af6d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50af6e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 50af75: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50af76: mov esp, ebp */
  esp = ebp;
/* 50af78: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50af79: ret  */
  esp += 4; SPILL(); return;
}

void f_50af7a(void) {
  LOAD_REGS();
L_50af7a: /* 50af7a: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 50af7d: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 50af82: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* 50af85: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50af86: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 50af89: call 0x554df6 */
  esp -= 4; W32(esp, 0x50af8eu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_50af8e(); return;
}

void f_50af8e(void) {
  LOAD_REGS();
L_50af8e: /* 50af8e: push 0x56b5a8 */
  { uint32_t v = 0x56b5a8u; esp -= 4; W32(esp, v); }
/* 50af93: push 0x5a49ec */
  { uint32_t v = 0x5a49ecu; esp -= 4; W32(esp, v); }
/* 50af98: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x50af9du); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 50af9d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50afa0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50afa2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50afa4: call 0x554df6 */
  esp -= 4; W32(esp, 0x50afa9u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_50afa9(); return;
}

void f_50afa9(void) {
  LOAD_REGS();
L_50afa9: /* 50afa9: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 50afac: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 50afb1: lea edx, [ebp - 0x38] */
  edx = (uint32_t)(ebp + 0xffffffc8u);
/* 50afb4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50afb5: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 50afb8: call 0x554df6 */
  esp -= 4; W32(esp, 0x50afbdu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_50afbd(); return;
}

void f_50afbd(void) {
  LOAD_REGS();
L_50afbd: /* 50afbd: push 0x56b574 */
  { uint32_t v = 0x56b574u; esp -= 4; W32(esp, v); }
/* 50afc2: push 0x5a49f4 */
  { uint32_t v = 0x5a49f4u; esp -= 4; W32(esp, v); }
/* 50afc7: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x50afccu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 50afcc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50afcf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50afd1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50afd3: call 0x554df6 */
  esp -= 4; W32(esp, 0x50afd8u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_50afd8: guest_badaddr(0x50afd8); return;
}

void f_50b0e0(void) {
  LOAD_REGS();
L_50b0e0: /* 50b0e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 50b0e1: mov ebp, esp */
  ebp = esp;
/* 50b0e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 50b0e5: push 0x556d70 */
  { uint32_t v = 0x556d70u; esp -= 4; W32(esp, v); }
/* 50b0ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 50b0f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50b0f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 50b0f8: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 50b0fb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50b0fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50b0fd: mov esi, ecx */
  esi = ecx;
/* 50b0ff: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 50b101: xor edx, edx */
  edx = 0;
/* 50b103: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50b105: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50b106: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 50b109: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 50b10c: mov dword ptr [ebp - 4], edx */
  W32((uint32_t)(ebp + 0xfffffffcu), edx);
/* 50b10f: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 50b112: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 50b115: mov dword ptr [esi + 0x10], edx */
  W32((uint32_t)(esi + 0x10u), edx);
/* 50b118: je 0x50b1dc */
  if (zf) goto L_50b1dc;
L_50b11e: /* 50b11e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 50b121: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 50b124: mov eax, edi */
  eax = edi;
/* 50b126: or eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  eax = r;
  }
/* 50b128: jne 0x50b19a */
  if (!zf) goto L_50b19a;
L_50b12a: /* 50b12a: mov dword ptr [ebp + 0x10], edx */
  W32((uint32_t)(ebp + 0x10u), edx);
L_50b12d: /* 50b12d: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
L_50b130: /* 50b130: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50b132: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 50b135: je 0x50b205 */
  if (zf) goto L_50b205;
L_50b13b: /* 50b13b: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 50b13d: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 50b140: mov ecx, edi */
  ecx = edi;
/* 50b142: or ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  ecx = r;
  }
/* 50b144: je 0x50b1fd */
  if (zf) goto L_50b1fd;
L_50b14a: /* 50b14a: xor eax, eax */
  eax = 0;
/* 50b14c: mov esi, eax */
  esi = eax;
/* 50b14e: and esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 50b150: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 50b153: mov ecx, edx */
  ecx = edx;
/* 50b155: and edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 50b157: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 50b15a: and ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 50b15c: and eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 50b15e: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50b160: jne 0x50b1f4 */
  if (!zf) goto L_50b1f4;
L_50b166: /* 50b166: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50b168: jne 0x50b1f4 */
  if (!zf) goto L_50b1f4;
L_50b16e: /* 50b16e: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 50b171: cmp dword ptr [ebx + 0x10], 0x1000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x10u))); uint32_t b = (uint32_t)(0x1000000u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50b178: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 50b17b: jge 0x50b189 */
  if ((sf == of)) goto L_50b189;
L_50b17d: /* 50b17d: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 50b180: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50b181: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50b182: mov ecx, esi */
  ecx = esi;
/* 50b184: call 0x4e1bcc */
  esp -= 4; W32(esp, 0x50b189u); SPILL(); f_4e1bcc(); if (g_unwind) return; RELOAD();
L_50b189: /* 50b189: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 50b18c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50b18d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50b18e: mov ecx, esi */
  ecx = esi;
/* 50b190: call 0x4e1915 */
  esp -= 4; W32(esp, 0x50b195u); SPILL(); f_4e1915(); if (g_unwind) return; RELOAD();
/* 50b195: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 50b198: jmp 0x50b130 */
  goto L_50b130;
L_50b19a: /* 50b19a: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 50b19d: cmp edx, -1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50b1a0: jne 0x50b12d */
  if (!zf) goto L_50b12d;
L_50b1a2: /* 50b1a2: mov ecx, edi */
  ecx = edi;
/* 50b1a4: shr ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 12;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 50b1a7: xor ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 50b1a9: shr ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 12;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 50b1ac: xor ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 50b1ae: and ecx, 0x3fff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3fffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 50b1b4: lea ecx, [esi + ecx*4 + 0x24] */
  ecx = (uint32_t)(esi + ecx*4 + 0x24u);
L_50b1b8: /* 50b1b8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 50b1ba: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50b1bc: je 0x50b1dc */
  if (zf) goto L_50b1dc;
L_50b1be: /* 50b1be: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 50b1c0: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50b1c2: jne 0x50b1ef */
  if (!zf) goto L_50b1ef;
L_50b1c4: /* 50b1c4: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 50b1c7: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50b1c9: jne 0x50b1ef */
  if (!zf) goto L_50b1ef;
L_50b1cb: /* 50b1cb: mov edx, dword ptr [eax + 0x1c] */
  edx = R32((uint32_t)(eax + 0x1cu));
/* 50b1ce: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 50b1d0: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 50b1d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50b1d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50b1d5: mov ecx, esi */
  ecx = esi;
/* 50b1d7: call 0x4e1915 */
  esp -= 4; W32(esp, 0x50b1dcu); SPILL(); f_4e1915(); if (g_unwind) return; RELOAD();
L_50b1dc: /* 50b1dc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 50b1df: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50b1e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50b1e1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 50b1e8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50b1e9: mov esp, ebp */
  esp = ebp;
/* 50b1eb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50b1ec: ret 0x10 */
  esp += 20; SPILL(); return;
L_50b1ef: /* 50b1ef: lea ecx, [eax + 0x1c] */
  ecx = (uint32_t)(eax + 0x1cu);
/* 50b1f2: jmp 0x50b1b8 */
  goto L_50b1b8;
L_50b1f4: /* 50b1f4: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 50b1f7: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 50b1fa: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
L_50b1fd: /* 50b1fd: mov eax, dword ptr [eax + 0x14] */
  eax = R32((uint32_t)(eax + 0x14u));
/* 50b200: jmp 0x50b130 */
  goto L_50b130;
L_50b205: /* 50b205: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50b207: jne 0x50b1dc */
  if (!zf) goto L_50b1dc;
L_50b209: /* 50b209: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 50b20c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50b20e: jne 0x50b1dc */
  if (!zf) goto L_50b1dc;
L_50b210: /* 50b210: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 50b213: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50b215: jne 0x50b22e */
  if (!zf) goto L_50b22e;
L_50b217: /* 50b217: push 0x1b2 */
  { uint32_t v = 0x1b2u; esp -= 4; W32(esp, v); }
/* 50b21c: push 0x5a4a24 */
  { uint32_t v = 0x5a4a24u; esp -= 4; W32(esp, v); }
/* 50b221: push 0x5a4a30 */
  { uint32_t v = 0x5a4a30u; esp -= 4; W32(esp, v); }
/* 50b226: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x50b22bu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 50b22b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50b22e: /* 50b22e: mov edi, dword ptr [esi + 0x18] */
  edi = R32((uint32_t)(esi + 0x18u));
/* 50b231: xor ebx, ebx */
  ebx = 0;
L_50b233: /* 50b233: cmp edi, dword ptr [esi + 0x1c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50b236: je 0x50b1dc */
  if (zf) goto L_50b1dc;
L_50b238: /* 50b238: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 50b23a: or eax, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  eax = r;
  }
/* 50b23d: je 0x50b256 */
  if (zf) goto L_50b256;
L_50b23f: /* 50b23f: push 0x1b6 */
  { uint32_t v = 0x1b6u; esp -= 4; W32(esp, v); }
/* 50b244: push 0x5a4a44 */
  { uint32_t v = 0x5a4a44u; esp -= 4; W32(esp, v); }
/* 50b249: push 0x5a4a50 */
  { uint32_t v = 0x5a4a50u; esp -= 4; W32(esp, v); }
/* 50b24e: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x50b253u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 50b253: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50b256: /* 50b256: movzx ecx, byte ptr [edi + 0xe] */
  ecx = (uint32_t)(R8((uint32_t)(edi + 0xeu)));
/* 50b25a: mov edx, ebx */
  edx = ebx;
/* 50b25c: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 50b25d: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50b25f: je 0x50b278 */
  if (zf) goto L_50b278;
L_50b261: /* 50b261: push 0x1b7 */
  { uint32_t v = 0x1b7u; esp -= 4; W32(esp, v); }
/* 50b266: push 0x5a4a60 */
  { uint32_t v = 0x5a4a60u; esp -= 4; W32(esp, v); }
/* 50b26b: push 0x5a4a6c */
  { uint32_t v = 0x5a4a6cu; esp -= 4; W32(esp, v); }
/* 50b270: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x50b275u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 50b275: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50b278: /* 50b278: mov edi, dword ptr [edi + 0x14] */
  edi = R32((uint32_t)(edi + 0x14u));
/* 50b27b: jmp 0x50b233 */
  goto L_50b233;
}

void f_50b27d(void) {
  LOAD_REGS();
L_50b27d: /* 50b27d: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 50b280: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 50b285: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 50b288: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50b289: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 50b28c: call 0x554df6 */
  esp -= 4; W32(esp, 0x50b291u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_50b291(); return;
}

void f_50b291(void) {
  LOAD_REGS();
L_50b291: /* 50b291: push 0x56b5b0 */
  { uint32_t v = 0x56b5b0u; esp -= 4; W32(esp, v); }
/* 50b296: push 0x5a4a90 */
  { uint32_t v = 0x5a4a90u; esp -= 4; W32(esp, v); }
/* 50b29b: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x50b2a0u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 50b2a0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50b2a3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50b2a5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50b2a7: call 0x554df6 */
  esp -= 4; W32(esp, 0x50b2acu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_50b2ac: guest_badaddr(0x50b2ac); return;
}

void f_50b330(void) {
  LOAD_REGS();
L_50b330: /* 50b330: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 50b331: mov ebp, esp */
  ebp = esp;
/* 50b333: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 50b335: push 0x556d80 */
  { uint32_t v = 0x556d80u; esp -= 4; W32(esp, v); }
/* 50b33a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 50b340: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50b341: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 50b348: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 50b34b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50b34c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50b34d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50b34e: xor edi, edi */
  edi = 0;
/* 50b350: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 50b353: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 50b356: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 50b359: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 50b35b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 50b35e: sub dword ptr [ecx + 0x10030], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x10030u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx + 0x10030u), r);
  }
/* 50b364: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 50b367: cmp dword ptr [eax], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50b369: jne 0x50b382 */
  if (!zf) goto L_50b382;
L_50b36b: /* 50b36b: push 0x1d9 */
  { uint32_t v = 0x1d9u; esp -= 4; W32(esp, v); }
/* 50b370: push 0x5a4a98 */
  { uint32_t v = 0x5a4a98u; esp -= 4; W32(esp, v); }
/* 50b375: push 0x5a4aa4 */
  { uint32_t v = 0x5a4aa4u; esp -= 4; W32(esp, v); }
/* 50b37a: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x50b37fu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 50b37f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50b382: /* 50b382: cmp dword ptr [ebp + 0x14], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50b385: jg 0x50b39e */
  if ((!zf && sf == of)) goto L_50b39e;
L_50b387: /* 50b387: push 0x1da */
  { uint32_t v = 0x1dau; esp -= 4; W32(esp, v); }
/* 50b38c: push 0x5a4ab0 */
  { uint32_t v = 0x5a4ab0u; esp -= 4; W32(esp, v); }
/* 50b391: push 0x5a4abc */
  { uint32_t v = 0x5a4abcu; esp -= 4; W32(esp, v); }
/* 50b396: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x50b39bu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 50b39b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50b39e: /* 50b39e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 50b3a1: or ecx, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  ecx = r;
  }
/* 50b3a4: jne 0x50b3bd */
  if (!zf) goto L_50b3bd;
L_50b3a6: /* 50b3a6: push 0x1db */
  { uint32_t v = 0x1dbu; esp -= 4; W32(esp, v); }
/* 50b3ab: push 0x5a4acc */
  { uint32_t v = 0x5a4accu; esp -= 4; W32(esp, v); }
/* 50b3b0: push 0x5a4ad8 */
  { uint32_t v = 0x5a4ad8u; esp -= 4; W32(esp, v); }
/* 50b3b5: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x50b3bau); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 50b3ba: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50b3bd: /* 50b3bd: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 50b3c0: inc dword ptr [eax + 0x1002c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x1002cu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + 0x1002cu), r);
  }
/* 50b3c6: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 50b3c9: mov esi, dword ptr [edx + 0x18] */
  esi = R32((uint32_t)(edx + 0x18u));
/* 50b3cc: xor ebx, ebx */
  ebx = 0;
/* 50b3ce: mov dword ptr [ebp - 0x1c], 0x1000000 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x1000000u);
/* 50b3d5: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 50b3d8: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 50b3db: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* 50b3de: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 50b3e1: mov ecx, esi */
  ecx = esi;
L_50b3e3: /* 50b3e3: cmp ecx, dword ptr [edx + 0x1c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50b3e6: je 0x50b470 */
  if (zf) goto L_50b470;
L_50b3ec: /* 50b3ec: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 50b3ef: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 50b3f2: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 50b3f3: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ebx = r;
  }
/* 50b3f5: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 50b3f8: adc eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  eax = r;
  }
L_50b3fa: /* 50b3fa: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50b3fc: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 50b3ff: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 50b402: je 0x50b462 */
  if (zf) goto L_50b462;
L_50b404: /* 50b404: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 50b407: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 50b40a: mov ebx, dword ptr [ebp + 0x1c] */
  ebx = R32((uint32_t)(ebp + 0x1cu));
/* 50b40d: lea edx, [edx + eax - 1] */
  edx = (uint32_t)(edx + eax + 0xffffffffu);
/* 50b411: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 50b412: not eax */
  eax = ~eax;
/* 50b414: and edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 50b416: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* 50b419: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 50b41c: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 50b41e: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 50b421: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 50b423: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50b425: jl 0x50b462 */
  if ((sf != of)) goto L_50b462;
L_50b427: /* 50b427: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 50b42a: cmp eax, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50b42d: jg 0x50b44f */
  if ((!zf && sf == of)) goto L_50b44f;
L_50b42f: /* 50b42f: jl 0x50b439 */
  if ((sf != of)) goto L_50b439;
L_50b431: /* 50b431: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 50b434: cmp edx, dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 50b437: jae 0x50b44f */
  if (!cf) goto L_50b44f;
L_50b439: /* 50b439: mov dl, byte ptr [esi + 0xe] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xeu))) & 0xffu);
/* 50b43c: cmp dl, byte ptr [ecx + 0xe] */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ecx + 0xeu)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 50b43f: jne 0x50b44f */
  if (!zf) goto L_50b44f;
L_50b441: /* 50b441: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 50b444: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 50b447: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 50b44a: mov edi, esi */
  edi = esi;
/* 50b44c: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
L_50b44f: /* 50b44f: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 50b452: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 50b455: mov esi, dword ptr [esi + 0x14] */
  esi = R32((uint32_t)(esi + 0x14u));
/* 50b458: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 50b459: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  ebx = r;
  }
/* 50b45b: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 50b45e: sbb eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 50b460: jmp 0x50b3fa */
  goto L_50b3fa;
L_50b462: /* 50b462: mov ecx, dword ptr [ecx + 0x14] */
  ecx = R32((uint32_t)(ecx + 0x14u));
/* 50b465: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 50b468: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 50b46b: jmp 0x50b3e3 */
  goto L_50b3e3;
L_50b470: /* 50b470: xor esi, esi */
  esi = 0;
/* 50b472: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50b474: jne 0x50b4f0 */
  if (!zf) goto L_50b4f0;
L_50b476: /* 50b476: mov ecx, dword ptr [edx + 0x18] */
  ecx = R32((uint32_t)(edx + 0x18u));
/* 50b479: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 50b47c: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 50b47f: nop  */
L_50b480: /* 50b480: cmp ecx, dword ptr [edx + 0x1c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50b483: je 0x50b4a7 */
  if (zf) goto L_50b4a7;
L_50b485: /* 50b485: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* 50b488: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 50b48b: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 50b48e: sub eax, dword ptr [ecx + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 50b491: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 50b493: cmp dword ptr [ecx + 0x10], 0x1000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x10u))); uint32_t b = (uint32_t)(0x1000000u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50b49a: jl 0x50b4a2 */
  if ((sf != of)) goto L_50b4a2;
L_50b49c: /* 50b49c: inc dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe0u), r);
  }
/* 50b49f: add dword ptr [ebp - 0x18], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
L_50b4a2: /* 50b4a2: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 50b4a5: jmp 0x50b480 */
  goto L_50b480;
L_50b4a7: /* 50b4a7: mov eax, dword ptr [0x5a0c90] */
  eax = R32((uint32_t)(0x5a0c90u));
/* 50b4ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50b4ad: push 0x5a4ae0 */
  { uint32_t v = 0x5a4ae0u; esp -= 4; W32(esp, v); }
/* 50b4b2: mov ecx, edx */
  ecx = edx;
/* 50b4b4: call 0x4e197e */
  esp -= 4; W32(esp, 0x50b4b9u); SPILL(); f_4e197e(); if (g_unwind) return; RELOAD();
/* 50b4b9: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 50b4bc: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 50b4bf: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 50b4c2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50b4c3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50b4c4: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 50b4c7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50b4c8: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 50b4cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50b4cc: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 50b4cf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50b4d0: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 50b4d3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50b4d4: mov edx, dword ptr [0x5a0c94] */
  edx = R32((uint32_t)(0x5a0c94u));
/* 50b4da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50b4db: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50b4dc: push 0x5a4af8 */
  { uint32_t v = 0x5a4af8u; esp -= 4; W32(esp, v); }
/* 50b4e1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50b4e2: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x50b4e7u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 50b4e7: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50b4ea: /* 50b4ea: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 50b4ed: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_50b4f0: /* 50b4f0: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50b4f2: je 0x50b52a */
  if (zf) goto L_50b52a;
L_50b4f4: /* 50b4f4: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 50b4f6: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 50b4f9: mov esi, eax */
  esi = eax;
/* 50b4fb: or esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  esi = r;
  }
/* 50b4fd: je 0x50b508 */
  if (zf) goto L_50b508;
L_50b4ff: /* 50b4ff: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50b500: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50b501: mov ecx, edx */
  ecx = edx;
/* 50b503: call 0x4e1bcc */
  esp -= 4; W32(esp, 0x50b508u); SPILL(); f_4e1bcc(); if (g_unwind) return; RELOAD();
L_50b508: /* 50b508: mov eax, dword ptr [ebx + 0x18] */
  eax = R32((uint32_t)(ebx + 0x18u));
/* 50b50b: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 50b50e: mov edx, dword ptr [ecx + 0x14] */
  edx = R32((uint32_t)(ecx + 0x14u));
/* 50b511: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 50b514: mov dword ptr [edx + 0x18], eax */
  W32((uint32_t)(edx + 0x18u), eax);
/* 50b517: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 50b51a: mov edx, dword ptr [edx + 0x20] */
  edx = R32((uint32_t)(edx + 0x20u));
/* 50b51d: mov dword ptr [ecx + 0x14], edx */
  W32((uint32_t)(ecx + 0x14u), edx);
/* 50b520: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 50b523: mov dword ptr [edx + 0x20], ecx */
  W32((uint32_t)(edx + 0x20u), ecx);
/* 50b526: mov ebx, eax */
  ebx = eax;
/* 50b528: jmp 0x50b4ea */
  goto L_50b4ea;
L_50b52a: /* 50b52a: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 50b52c: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 50b52f: mov esi, eax */
  esi = eax;
/* 50b531: or esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  esi = r;
  }
/* 50b533: je 0x50b541 */
  if (zf) goto L_50b541;
L_50b535: /* 50b535: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50b536: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50b537: mov ecx, edx */
  ecx = edx;
/* 50b539: call 0x4e1bcc */
  esp -= 4; W32(esp, 0x50b53eu); SPILL(); f_4e1bcc(); if (g_unwind) return; RELOAD();
/* 50b53e: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
L_50b541: /* 50b541: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 50b544: mov dx, word ptr [edx + 4] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edx + 0x4u))) & 0xffffu);
/* 50b548: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 50b54b: lea esi, [ecx + eax - 1] */
  esi = (uint32_t)(ecx + eax + 0xffffffffu);
/* 50b54f: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 50b550: mov word ptr [edi + 0xc], dx */
  W16((uint32_t)(edi + 0xcu), (edx & 0xffffu));
/* 50b554: not eax */
  eax = ~eax;
/* 50b556: and esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 50b558: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 50b55b: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 50b55d: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 50b560: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 50b563: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 50b566: add edx, 0x1000000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1000000u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 50b56c: mov dword ptr [edi + 0x10], edx */
  W32((uint32_t)(edi + 0x10u), edx);
/* 50b56f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 50b572: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 50b575: mov ecx, eax */
  ecx = eax;
/* 50b577: shr ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 12;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 50b57a: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 50b57c: shr ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 12;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 50b57f: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 50b581: and ecx, 0x3fff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3fffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 50b587: lea eax, [edx + ecx*4 + 0x24] */
  eax = (uint32_t)(edx + ecx*4 + 0x24u);
/* 50b58b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 50b58d: mov dword ptr [edi + 0x1c], ecx */
  W32((uint32_t)(edi + 0x1cu), ecx);
/* 50b590: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 50b592: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 50b595: mov eax, dword ptr [edx + 0x20] */
  eax = R32((uint32_t)(edx + 0x20u));
/* 50b598: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50b59a: je 0x50b5bc */
  if (zf) goto L_50b5bc;
L_50b59c: /* 50b59c: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 50b59f: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 50b5a2: mov ebx, dword ptr [edx + 8] */
  ebx = R32((uint32_t)(edx + 0x8u));
/* 50b5a5: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 50b5a7: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 50b5a9: jae 0x50b5bc */
  if (!cf) goto L_50b5bc;
L_50b5ab: /* 50b5ab: movzx ecx, byte ptr [edi + 0xe] */
  ecx = (uint32_t)(R8((uint32_t)(edi + 0xeu)));
/* 50b5af: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50b5b0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 50b5b3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50b5b4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50b5b5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50b5b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50b5b7: call 0x4e3440 */
  esp -= 4; W32(esp, 0x50b5bcu); SPILL(); f_4e3440(); if (g_unwind) return; RELOAD();
L_50b5bc: /* 50b5bc: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 50b5bf: mov eax, dword ptr [edx + 0x20] */
  eax = R32((uint32_t)(edx + 0x20u));
/* 50b5c2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50b5c4: je 0x50b602 */
  if (zf) goto L_50b602;
L_50b5c6: /* 50b5c6: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 50b5c9: mov eax, esi */
  eax = esi;
/* 50b5cb: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 50b5cd: cmp eax, 0x100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50b5d2: jl 0x50b602 */
  if ((sf != of)) goto L_50b602;
L_50b5d4: /* 50b5d4: mov ecx, dword ptr [0x5a0c94] */
  ecx = R32((uint32_t)(0x5a0c94u));
/* 50b5da: push 0x5a4b98 */
  { uint32_t v = 0x5a4b98u; esp -= 4; W32(esp, v); }
/* 50b5df: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50b5e0: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x50b5e5u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 50b5e5: movzx edx, byte ptr [edi + 0xe] */
  edx = (uint32_t)(R8((uint32_t)(edi + 0xeu)));
/* 50b5e9: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 50b5ec: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 50b5ef: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50b5f2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50b5f3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50b5f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50b5f5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50b5f6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50b5f7: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 50b5fa: call 0x4e3440 */
  esp -= 4; W32(esp, 0x50b5ffu); SPILL(); f_4e3440(); if (g_unwind) return; RELOAD();
/* 50b5ff: mov dword ptr [edi + 8], esi */
  W32((uint32_t)(edi + 0x8u), esi);
L_50b602: /* 50b602: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 50b605: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 50b607: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 50b60a: mov dword ptr [edx + 0x10], edi */
  W32((uint32_t)(edx + 0x10u), edi);
/* 50b60d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 50b610: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 50b613: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 50b616: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 50b619: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 50b61c: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 50b61f: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 50b621: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 50b624: mov edx, dword ptr [ecx + 0x10030] */
  edx = R32((uint32_t)(ecx + 0x10030u));
/* 50b62a: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 50b62d: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 50b62f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50b630: mov dword ptr [ecx + 0x10030], edx */
  W32((uint32_t)(ecx + 0x10030u), edx);
/* 50b636: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 50b639: mov eax, esi */
  eax = esi;
/* 50b63b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50b63c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 50b643: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50b644: mov esp, ebp */
  esp = ebp;
/* 50b646: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50b647: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_50b64a(void) {
  LOAD_REGS();
L_50b64a: /* 50b64a: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 50b64d: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 50b652: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 50b655: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50b656: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 50b659: call 0x554df6 */
  esp -= 4; W32(esp, 0x50b65eu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_50b65e(); return;
}

void f_50b65e(void) {
  LOAD_REGS();
L_50b65e: /* 50b65e: push 0x56b5d8 */
  { uint32_t v = 0x56b5d8u; esp -= 4; W32(esp, v); }
/* 50b663: push 0x5a4bc8 */
  { uint32_t v = 0x5a4bc8u; esp -= 4; W32(esp, v); }
/* 50b668: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x50b66du); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 50b66d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50b670: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50b672: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50b674: call 0x554df6 */
  esp -= 4; W32(esp, 0x50b679u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_50b679: guest_badaddr(0x50b679); return;
}

void f_50b760(void) {
  LOAD_REGS();
L_50b760: /* 50b760: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50b761: mov dword ptr [esp], ecx */
  W32((uint32_t)(esp), ecx);
/* 50b765: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 50b767: mov ecx, dword ptr [esp] */
  ecx = R32((uint32_t)(esp));
/* 50b76b: sub dword ptr [ecx + 0x10038], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x10038u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx + 0x10038u), r);
  }
/* 50b771: mov ecx, dword ptr [esp] */
  ecx = R32((uint32_t)(esp));
/* 50b775: xor eax, eax */
  eax = 0;
/* 50b777: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 50b77a: mov edx, dword ptr [esp] */
  edx = R32((uint32_t)(esp));
/* 50b77e: mov dword ptr [edx + 0xc], eax */
  W32((uint32_t)(edx + 0xcu), eax);
/* 50b781: mov ecx, dword ptr [esp] */
  ecx = R32((uint32_t)(esp));
/* 50b785: mov dword ptr [ecx + 0x10], eax */
  W32((uint32_t)(ecx + 0x10u), eax);
/* 50b788: mov edx, dword ptr [esp] */
  edx = R32((uint32_t)(esp));
/* 50b78c: mov dword ptr [edx + 0x10050], eax */
  W32((uint32_t)(edx + 0x10050u), eax);
/* 50b792: mov ecx, dword ptr [esp] */
  ecx = R32((uint32_t)(esp));
/* 50b796: mov dword ptr [ecx + 0x1004c], eax */
  W32((uint32_t)(ecx + 0x1004cu), eax);
/* 50b79c: mov edx, dword ptr [esp] */
  edx = R32((uint32_t)(esp));
/* 50b7a0: mov dword ptr [edx + 0x10048], eax */
  W32((uint32_t)(edx + 0x10048u), eax);
/* 50b7a6: mov ecx, dword ptr [esp] */
  ecx = R32((uint32_t)(esp));
/* 50b7aa: mov dword ptr [ecx + 0x10040], eax */
  W32((uint32_t)(ecx + 0x10040u), eax);
/* 50b7b0: mov edx, dword ptr [esp] */
  edx = R32((uint32_t)(esp));
/* 50b7b4: mov dword ptr [edx + 0x1003c], eax */
  W32((uint32_t)(edx + 0x1003cu), eax);
/* 50b7ba: mov ecx, dword ptr [esp] */
  ecx = R32((uint32_t)(esp));
/* 50b7be: mov eax, dword ptr [ecx + 0x18] */
  eax = R32((uint32_t)(ecx + 0x18u));
/* 50b7c1: cmp eax, dword ptr [ecx + 0x1c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50b7c4: je 0x50b7ef */
  if (zf) goto L_50b7ef;
L_50b7c6: /* 50b7c6: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 50b7c8: or edx, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  edx = r;
  }
/* 50b7cb: je 0x50b7e7 */
  if (zf) goto L_50b7e7;
L_50b7cd: /* 50b7cd: movzx edx, word ptr [eax + 0xc] */
  edx = (uint32_t)(R16((uint32_t)(eax + 0xcu)));
/* 50b7d1: cmp dword ptr [ecx + 4], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x4u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50b7d4: jle 0x50b7e7 */
  if ((zf || sf != of)) goto L_50b7e7;
L_50b7d6: /* 50b7d6: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 50b7d9: mov edx, ecx */
  edx = ecx;
/* 50b7db: sar edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 50b7de: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 50b7e0: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 50b7e3: mov ecx, dword ptr [esp] */
  ecx = R32((uint32_t)(esp));
L_50b7e7: /* 50b7e7: mov eax, dword ptr [eax + 0x14] */
  eax = R32((uint32_t)(eax + 0x14u));
/* 50b7ea: cmp eax, dword ptr [ecx + 0x1c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50b7ed: jne 0x50b7c6 */
  if (!zf) goto L_50b7c6;
L_50b7ef: /* 50b7ef: inc dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ecx + 0x4u), r);
  }
/* 50b7f2: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 50b7f4: mov ecx, dword ptr [esp] */
  ecx = R32((uint32_t)(esp));
/* 50b7f8: mov edx, dword ptr [ecx + 0x10038] */
  edx = R32((uint32_t)(ecx + 0x10038u));
/* 50b7fe: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 50b801: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 50b803: mov dword ptr [ecx + 0x10038], edx */
  W32((uint32_t)(ecx + 0x10038u), edx);
/* 50b809: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 50b80a: ret  */
  esp += 4; SPILL(); return;
}

void f_50b840(void) {
  LOAD_REGS();
L_50b840: /* 50b840: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 50b841: mov ebp, esp */
  ebp = esp;
/* 50b843: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 50b845: push 0x556d90 */
  { uint32_t v = 0x556d90u; esp -= 4; W32(esp, v); }
/* 50b84a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 50b850: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50b851: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 50b858: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 50b85b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50b85c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50b85d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50b85e: mov esi, ecx */
  esi = ecx;
/* 50b860: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 50b862: xor edi, edi */
  edi = 0;
/* 50b864: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50b866: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 50b869: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 50b86c: je 0x50b882 */
  if (zf) goto L_50b882;
L_50b86e: /* 50b86e: push 0x22 */
  { uint32_t v = 0x22u; esp -= 4; W32(esp, v); }
/* 50b870: push 0x5a46f8 */
  { uint32_t v = 0x5a46f8u; esp -= 4; W32(esp, v); }
/* 50b875: push 0x5a4704 */
  { uint32_t v = 0x5a4704u; esp -= 4; W32(esp, v); }
/* 50b87a: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x50b87fu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 50b87f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50b882: /* 50b882: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 50b885: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50b887: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 50b88a: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 50b88d: mov dword ptr [esi + 0x10054], edx */
  W32((uint32_t)(esi + 0x10054u), edx);
/* 50b893: mov dword ptr [esi + 0x10044], ebx */
  W32((uint32_t)(esi + 0x10044u), ebx);
/* 50b899: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* 50b89c: mov dword ptr [esi + 0xc], edi */
  W32((uint32_t)(esi + 0xcu), edi);
/* 50b89f: mov dword ptr [esi + 0x10], edi */
  W32((uint32_t)(esi + 0x10u), edi);
/* 50b8a2: jne 0x50b8b4 */
  if (!zf) goto L_50b8b4;
L_50b8a4: /* 50b8a4: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 50b8aa: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 50b8ac: push 0x5a4714 */
  { uint32_t v = 0x5a4714u; esp -= 4; W32(esp, v); }
/* 50b8b1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50b8b2: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x50b8b4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_50b8b4: /* 50b8b4: mov dword ptr [esi + 0x10024], eax */
  W32((uint32_t)(esi + 0x10024u), eax);
/* 50b8ba: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 50b8c0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 50b8c2: mov eax, ebx */
  eax = ebx;
/* 50b8c4: push 0x5a472c */
  { uint32_t v = 0x5a472cu; esp -= 4; W32(esp, v); }
/* 50b8c9: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 50b8cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50b8cd: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x50b8cfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50b8cf: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 50b8d2: lea edx, [esi + 0x20] */
  edx = (uint32_t)(esi + 0x20u);
/* 50b8d5: xor ecx, ecx */
  ecx = 0;
L_50b8d7: /* 50b8d7: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50b8d9: jge 0x50b8f3 */
  if ((sf == of)) goto L_50b8f3;
L_50b8db: /* 50b8db: mov edi, dword ptr [esi + 0x14] */
  edi = R32((uint32_t)(esi + 0x14u));
/* 50b8de: mov eax, ecx */
  eax = ecx;
/* 50b8e0: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 50b8e3: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 50b8e5: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 50b8e7: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* 50b8ea: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 50b8eb: lea edx, [edx + eax + 0x14] */
  edx = (uint32_t)(edx + eax + 0x14u);
/* 50b8ef: xor edi, edi */
  edi = 0;
/* 50b8f1: jmp 0x50b8d7 */
  goto L_50b8d7;
L_50b8f3: /* 50b8f3: mov ebx, dword ptr [ebp + 0x14] */
  ebx = R32((uint32_t)(ebp + 0x14u));
/* 50b8f6: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 50b8f8: xor edx, edx */
  edx = 0;
/* 50b8fa: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50b8fc: jne 0x50b950 */
  if (!zf) goto L_50b950;
L_50b8fe: /* 50b8fe: mov eax, dword ptr [esi + 0x10024] */
  eax = R32((uint32_t)(esi + 0x10024u));
/* 50b904: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 50b907: mov ebx, dword ptr [esi + 0x20] */
  ebx = R32((uint32_t)(esi + 0x20u));
/* 50b90a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50b90b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50b90c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50b90d: lea edx, [eax + ecx] */
  edx = (uint32_t)(eax + ecx);
/* 50b910: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50b911: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50b912: mov ecx, esi */
  ecx = esi;
/* 50b914: call 0x4e3440 */
  esp -= 4; W32(esp, 0x50b919u); SPILL(); f_4e3440(); if (g_unwind) return; RELOAD();
/* 50b919: mov edx, ebx */
  edx = ebx;
/* 50b91b: mov edi, 1 */
  edi = 0x1u;
L_50b920: /* 50b920: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 50b923: mov ecx, dword ptr [esi + 0x10024] */
  ecx = R32((uint32_t)(esi + 0x10024u));
/* 50b929: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50b92a: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 50b92d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 50b930: xor edi, edi */
  edi = 0;
/* 50b932: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50b933: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 50b935: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50b936: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50b937: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50b938: mov ecx, esi */
  ecx = esi;
/* 50b93a: call 0x4e3440 */
  esp -= 4; W32(esp, 0x50b93fu); SPILL(); f_4e3440(); if (g_unwind) return; RELOAD();
/* 50b93f: xor eax, eax */
  eax = 0;
L_50b941: /* 50b941: cmp eax, 0x4000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4000u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50b946: jge 0x50b98e */
  if ((sf == of)) goto L_50b98e;
L_50b948: /* 50b948: mov dword ptr [esi + eax*4 + 0x24], edi */
  W32((uint32_t)(esi + eax*4 + 0x24u), edi);
/* 50b94c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 50b94d: jmp 0x50b941 */
  goto L_50b941;
L_50b950: /* 50b950: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 50b953: mov eax, edi */
  eax = edi;
/* 50b955: imul eax, ebx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ebx);
  eax = (uint32_t)r;
  }
/* 50b958: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50b95a: jge 0x50b920 */
  if ((sf == of)) goto L_50b920;
L_50b95c: /* 50b95c: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 50b95f: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 50b962: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 50b965: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 50b967: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50b969: jg 0x50b96d */
  if ((!zf && sf == of)) goto L_50b96d;
L_50b96b: /* 50b96b: mov ecx, ebx */
  ecx = ebx;
L_50b96d: /* 50b96d: mov ebx, dword ptr [esi + 0x10024] */
  ebx = R32((uint32_t)(esi + 0x10024u));
/* 50b973: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50b974: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50b976: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 50b978: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50b979: lea edx, [eax + ecx] */
  edx = (uint32_t)(eax + ecx);
/* 50b97c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50b97d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50b97e: mov ecx, esi */
  ecx = esi;
/* 50b980: call 0x4e3440 */
  esp -= 4; W32(esp, 0x50b985u); SPILL(); f_4e3440(); if (g_unwind) return; RELOAD();
/* 50b985: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 50b988: mov ebx, dword ptr [ebp + 0x14] */
  ebx = R32((uint32_t)(ebp + 0x14u));
/* 50b98b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 50b98c: jmp 0x50b950 */
  goto L_50b950;
L_50b98e: /* 50b98e: mov ecx, esi */
  ecx = esi;
/* 50b990: mov dword ptr [esi], 1 */
  W32((uint32_t)(esi), 0x1u);
/* 50b996: call 0x4e3495 */
  esp -= 4; W32(esp, 0x50b99bu); SPILL(); f_4e3495(); if (g_unwind) return; RELOAD();
/* 50b99b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 50b99e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50b99f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50b9a0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 50b9a7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50b9a8: mov esp, ebp */
  esp = ebp;
/* 50b9aa: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50b9ab: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_50b9ae(void) {
  LOAD_REGS();
L_50b9ae: /* 50b9ae: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 50b9b1: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 50b9b6: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 50b9b9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50b9ba: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 50b9bd: call 0x554df6 */
  esp -= 4; W32(esp, 0x50b9c2u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_50b9c2(); return;
}

void f_50b9c2(void) {
  LOAD_REGS();
L_50b9c2: /* 50b9c2: push 0x56b604 */
  { uint32_t v = 0x56b604u; esp -= 4; W32(esp, v); }
/* 50b9c7: push 0x5a4744 */
  { uint32_t v = 0x5a4744u; esp -= 4; W32(esp, v); }
/* 50b9cc: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x50b9d1u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 50b9d1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50b9d4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50b9d6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50b9d8: call 0x554df6 */
  esp -= 4; W32(esp, 0x50b9ddu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_50b9dd: guest_badaddr(0x50b9dd); return;
}

void f_50ba50(void) {
  LOAD_REGS();
L_50ba50: /* 50ba50: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 50ba51: mov ebp, esp */
  ebp = esp;
/* 50ba53: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 50ba55: push 0x556da0 */
  { uint32_t v = 0x556da0u; esp -= 4; W32(esp, v); }
/* 50ba5a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 50ba60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50ba61: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 50ba68: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 50ba6b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50ba6c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50ba6d: mov esi, ecx */
  esi = ecx;
/* 50ba6f: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50ba72: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50ba73: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 50ba76: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 50ba7d: je 0x50bab2 */
  if (zf) goto L_50bab2;
L_50ba7f: /* 50ba7f: call 0x4e3495 */
  esp -= 4; W32(esp, 0x50ba84u); SPILL(); f_4e3495(); if (g_unwind) return; RELOAD();
/* 50ba84: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 50ba87: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 50ba8d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 50ba8f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50ba90: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x50ba93u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50ba93: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 50ba96: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50ba98: je 0x50baac */
  if (zf) goto L_50baac;
L_50ba9a: /* 50ba9a: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 50baa0: mov edx, dword ptr [esi + 0x10024] */
  edx = R32((uint32_t)(esi + 0x10024u));
/* 50baa6: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 50baa8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50baa9: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x50baacu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_50baac: /* 50baac: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
L_50bab2: /* 50bab2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 50bab5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50bab6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50bab7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 50babe: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50babf: mov esp, ebp */
  esp = ebp;
/* 50bac1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50bac2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_50bac5(void) {
  LOAD_REGS();
L_50bac5: /* 50bac5: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 50bac8: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 50bacd: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 50bad0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50bad1: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 50bad4: call 0x554df6 */
  esp -= 4; W32(esp, 0x50bad9u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_50bad9(); return;
}

void f_50bad9(void) {
  LOAD_REGS();
L_50bad9: /* 50bad9: push 0x56b62c */
  { uint32_t v = 0x56b62cu; esp -= 4; W32(esp, v); }
/* 50bade: push 0x5a474c */
  { uint32_t v = 0x5a474cu; esp -= 4; W32(esp, v); }
/* 50bae3: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x50bae8u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 50bae8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50baeb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50baed: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50baef: call 0x554df6 */
  esp -= 4; W32(esp, 0x50baf4u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_50baf4: guest_badaddr(0x50baf4); return;
}

void f_50bb30(void) {
  LOAD_REGS();
L_50bb30: /* 50bb30: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 50bb34: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 50bb38: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50bb39: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50bb3a: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 50bb3e: mov esi, ecx */
  esi = ecx;
/* 50bb40: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 50bb44: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50bb45: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50bb46: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50bb47: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50bb49: mov ecx, esi */
  ecx = esi;
/* 50bb4b: call 0x4e3e09 */
  esp -= 4; W32(esp, 0x50bb50u); SPILL(); f_4e3e09(); if (g_unwind) return; RELOAD();
/* 50bb50: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 50bb54: mov dword ptr [esi], 0x5693d8 */
  W32((uint32_t)(esi), 0x5693d8u);
/* 50bb5a: mov dword ptr [esi + 0x28], ecx */
  W32((uint32_t)(esi + 0x28u), ecx);
/* 50bb5d: mov dword ptr [esi + 0x2c], 0 */
  W32((uint32_t)(esi + 0x2cu), 0x0u);
/* 50bb64: mov dword ptr [esi + 0x30], 0 */
  W32((uint32_t)(esi + 0x30u), 0x0u);
/* 50bb6b: mov eax, esi */
  eax = esi;
/* 50bb6d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50bb6e: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_50bba0(void) {
  LOAD_REGS();
L_50bba0: /* 50bba0: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 50bba4: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 50bba8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50bba9: mov esi, ecx */
  esi = ecx;
/* 50bbab: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 50bbaf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50bbb0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50bbb1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50bbb2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50bbb4: mov ecx, esi */
  ecx = esi;
/* 50bbb6: call 0x4e1604 */
  esp -= 4; W32(esp, 0x50bbbbu); SPILL(); f_4e1604(); if (g_unwind) return; RELOAD();
/* 50bbbb: mov dword ptr [esi], 0x5693d8 */
  W32((uint32_t)(esi), 0x5693d8u);
/* 50bbc1: mov dword ptr [esi + 0x2c], 0 */
  W32((uint32_t)(esi + 0x2cu), 0x0u);
/* 50bbc8: mov dword ptr [esi + 0x30], 0 */
  W32((uint32_t)(esi + 0x30u), 0x0u);
/* 50bbcf: mov eax, esi */
  eax = esi;
/* 50bbd1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50bbd2: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_50bbf0(void) {
  LOAD_REGS();
L_50bbf0: /* 50bbf0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50bbf1: mov esi, ecx */
  esi = ecx;
/* 50bbf3: call 0x4e245a */
  esp -= 4; W32(esp, 0x50bbf8u); SPILL(); f_4e245a(); if (g_unwind) return; RELOAD();
/* 50bbf8: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 50bbfc: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 50bbff: mov dword ptr [esi], 0x5693d8 */
  W32((uint32_t)(esi), 0x5693d8u);
/* 50bc05: mov eax, esi */
  eax = esi;
/* 50bc07: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50bc08: ret 4 */
  esp += 8; SPILL(); return;
}

void f_50bc20(void) {
  LOAD_REGS();
L_50bc20: /* 50bc20: ret  */
  esp += 4; SPILL(); return;
}

void f_50bc40(void) {
  LOAD_REGS();
L_50bc40: /* 50bc40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 50bc41: mov ebp, esp */
  ebp = esp;
/* 50bc43: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 50bc45: push 0x556db0 */
  { uint32_t v = 0x556db0u; esp -= 4; W32(esp, v); }
/* 50bc4a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 50bc50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50bc51: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 50bc58: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 50bc5b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50bc5c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50bc5d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50bc5e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 50bc61: mov esi, ecx */
  esi = ecx;
/* 50bc63: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 50bc6a: call 0x4e4110 */
  esp -= 4; W32(esp, 0x50bc6fu); SPILL(); f_4e4110(); if (g_unwind) return; RELOAD();
/* 50bc6f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 50bc71: mov ecx, esi */
  ecx = esi;
/* 50bc73: call dword ptr [eax + 0x70] */
  { uint32_t t = R32((uint32_t)(eax + 0x70u)); esp -= 4; W32(esp, 0x50bc76u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50bc76: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 50bc79: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50bc7a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50bc7b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 50bc82: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50bc83: mov esp, ebp */
  esp = ebp;
/* 50bc85: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50bc86: ret  */
  esp += 4; SPILL(); return;
}

void f_50bc87(void) {
  LOAD_REGS();
L_50bc87: /* 50bc87: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 50bc8a: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 50bc8f: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 50bc92: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50bc93: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 50bc96: call 0x554df6 */
  esp -= 4; W32(esp, 0x50bc9bu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_50bc9b(); return;
}

void f_50bc9b(void) {
  LOAD_REGS();
L_50bc9b: /* 50bc9b: push 0x56b654 */
  { uint32_t v = 0x56b654u; esp -= 4; W32(esp, v); }
/* 50bca0: push 0x5a4e30 */
  { uint32_t v = 0x5a4e30u; esp -= 4; W32(esp, v); }
/* 50bca5: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x50bcaau); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 50bcaa: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50bcad: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50bcaf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50bcb1: call 0x554df6 */
  esp -= 4; W32(esp, 0x50bcb6u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_50bcb6: guest_badaddr(0x50bcb6); return;
}

void f_50bce0(void) {
  LOAD_REGS();
L_50bce0: /* 50bce0: xor eax, eax */
  eax = 0;
/* 50bce2: ret  */
  esp += 4; SPILL(); return;
}

void f_50bd00(void) {
  LOAD_REGS();
L_50bd00: /* 50bd00: mov eax, 1 */
  eax = 0x1u;
/* 50bd05: ret  */
  esp += 4; SPILL(); return;
}

void f_50bd20(void) {
  LOAD_REGS();
L_50bd20: /* 50bd20: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 50bd21: mov ebp, esp */
  ebp = esp;
/* 50bd23: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 50bd25: push 0x556dc0 */
  { uint32_t v = 0x556dc0u; esp -= 4; W32(esp, v); }
/* 50bd2a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 50bd30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50bd31: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 50bd38: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 50bd3b: mov eax, dword ptr [0x5a0c94] */
  eax = R32((uint32_t)(0x5a0c94u));
/* 50bd40: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50bd41: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50bd42: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50bd43: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 50bd46: push 0x5a4e4c */
  { uint32_t v = 0x5a4e4cu; esp -= 4; W32(esp, v); }
/* 50bd4b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50bd4c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 50bd53: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x50bd58u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 50bd58: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 50bd5b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50bd5e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50bd5f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50bd60: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 50bd67: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50bd68: mov esp, ebp */
  esp = ebp;
/* 50bd6a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50bd6b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_50bd6e(void) {
  LOAD_REGS();
L_50bd6e: /* 50bd6e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 50bd71: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 50bd76: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 50bd79: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50bd7a: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 50bd7d: call 0x554df6 */
  esp -= 4; W32(esp, 0x50bd82u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_50bd82(); return;
}

void f_50bd82(void) {
  LOAD_REGS();
L_50bd82: /* 50bd82: push 0x56b67c */
  { uint32_t v = 0x56b67cu; esp -= 4; W32(esp, v); }
/* 50bd87: push 0x5a4e7c */
  { uint32_t v = 0x5a4e7cu; esp -= 4; W32(esp, v); }
/* 50bd8c: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x50bd91u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 50bd91: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50bd94: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50bd96: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50bd98: call 0x554df6 */
  esp -= 4; W32(esp, 0x50bd9du); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_50bd9d: guest_badaddr(0x50bd9d); return;
}

void f_50bdc0(void) {
  LOAD_REGS();
L_50bdc0: /* 50bdc0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 50bdc1: mov ebp, esp */
  ebp = esp;
/* 50bdc3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 50bdc5: push 0x556dd0 */
  { uint32_t v = 0x556dd0u; esp -= 4; W32(esp, v); }
/* 50bdca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 50bdd0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50bdd1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 50bdd8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 50bddb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50bddc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50bddd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50bdde: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 50bde1: mov esi, ecx */
  esi = ecx;
/* 50bde3: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 50bdea: call 0x4e22ca */
  esp -= 4; W32(esp, 0x50bdefu); SPILL(); f_4e22ca(); if (g_unwind) return; RELOAD();
/* 50bdef: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 50bdf2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50bdf4: je 0x50bdfb */
  if (zf) goto L_50bdfb;
L_50bdf6: /* 50bdf6: call 0x4e25ae */
  esp -= 4; W32(esp, 0x50bdfbu); SPILL(); f_4e25ae(); if (g_unwind) return; RELOAD();
L_50bdfb: /* 50bdfb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 50bdfe: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50bdff: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50be00: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 50be07: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50be08: mov esp, ebp */
  esp = ebp;
/* 50be0a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50be0b: ret  */
  esp += 4; SPILL(); return;
}

void f_50be0c(void) {
  LOAD_REGS();
L_50be0c: /* 50be0c: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 50be0f: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 50be14: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 50be17: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50be18: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 50be1b: call 0x554df6 */
  esp -= 4; W32(esp, 0x50be20u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_50be20(); return;
}

void f_50be20(void) {
  LOAD_REGS();
L_50be20: /* 50be20: push 0x56b6b4 */
  { uint32_t v = 0x56b6b4u; esp -= 4; W32(esp, v); }
/* 50be25: push 0x5a4e84 */
  { uint32_t v = 0x5a4e84u; esp -= 4; W32(esp, v); }
/* 50be2a: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x50be2fu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 50be2f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50be32: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50be34: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50be36: call 0x554df6 */
  esp -= 4; W32(esp, 0x50be3bu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_50be3b: guest_badaddr(0x50be3b); return;
}

void f_50be60(void) {
  LOAD_REGS();
L_50be60: /* 50be60: mov edx, dword ptr [ecx + 0x3c] */
  edx = R32((uint32_t)(ecx + 0x3cu));
/* 50be63: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 50be67: mov dword ptr [eax + 0x2c], edx */
  W32((uint32_t)(eax + 0x2cu), edx);
/* 50be6a: mov dword ptr [ecx + 0x3c], eax */
  W32((uint32_t)(ecx + 0x3cu), eax);
/* 50be6d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_50be80(void) {
  LOAD_REGS();
L_50be80: /* 50be80: mov eax, ecx */
  eax = ecx;
/* 50be82: ret  */
  esp += 4; SPILL(); return;
}

void f_50bea0(void) {
  LOAD_REGS();
L_50bea0: /* 50bea0: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 50bea4: mov eax, ecx */
  eax = ecx;
/* 50bea6: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 50beaa: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 50beac: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 50beaf: ret 8 */
  esp += 12; SPILL(); return;
}

void f_50bed0(void) {
  LOAD_REGS();
L_50bed0: /* 50bed0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50bed1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 50bed5: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 50bed7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50bed8: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 50bedc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50bedd: mov ecx, esi */
  ecx = esi;
/* 50bedf: call dword ptr [eax + 0x1c] */
  { uint32_t t = R32((uint32_t)(eax + 0x1cu)); esp -= 4; W32(esp, 0x50bee2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50bee2: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 50bee5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50bee6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50bee7: call 0x4e4160 */
  esp -= 4; W32(esp, 0x50beecu); SPILL(); f_4e4160(); if (g_unwind) return; RELOAD();
/* 50beec: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50beef: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50bef0: mov eax, esi */
  eax = esi;
/* 50bef2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50bef3: ret  */
  esp += 4; SPILL(); return;
}

void f_50bf10(void) {
  LOAD_REGS();
L_50bf10: /* 50bf10: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 50bf11: mov ebp, esp */
  ebp = esp;
/* 50bf13: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 50bf15: push 0x556de0 */
  { uint32_t v = 0x556de0u; esp -= 4; W32(esp, v); }
/* 50bf1a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 50bf20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50bf21: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 50bf28: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 50bf2b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50bf2c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50bf2d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50bf2e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 50bf31: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 50bf38: call 0x4e3652 */
  esp -= 4; W32(esp, 0x50bf3du); SPILL(); f_4e3652(); if (g_unwind) return; RELOAD();
/* 50bf3d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 50bf40: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50bf41: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50bf42: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 50bf49: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50bf4a: mov esp, ebp */
  esp = ebp;
/* 50bf4c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50bf4d: ret  */
  esp += 4; SPILL(); return;
}

void f_50bf4e(void) {
  LOAD_REGS();
L_50bf4e: /* 50bf4e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 50bf51: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 50bf56: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 50bf59: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50bf5a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 50bf5d: call 0x554df6 */
  esp -= 4; W32(esp, 0x50bf62u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_50bf62(); return;
}

void f_50bf62(void) {
  LOAD_REGS();
L_50bf62: /* 50bf62: push 0x56b6dc */
  { uint32_t v = 0x56b6dcu; esp -= 4; W32(esp, v); }
/* 50bf67: push 0x5a5780 */
  { uint32_t v = 0x5a5780u; esp -= 4; W32(esp, v); }
/* 50bf6c: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x50bf71u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 50bf71: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50bf74: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50bf76: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50bf78: call 0x554df6 */
  esp -= 4; W32(esp, 0x50bf7du); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_50bf7d: guest_badaddr(0x50bf7d); return;
}

void f_50bfa0(void) {
  LOAD_REGS();
L_50bfa0: /* 50bfa0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 50bfa1: mov ebp, esp */
  ebp = esp;
/* 50bfa3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 50bfa5: push 0x556df0 */
  { uint32_t v = 0x556df0u; esp -= 4; W32(esp, v); }
/* 50bfaa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 50bfb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50bfb1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 50bfb8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 50bfbb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 50bfbe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50bfbf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50bfc0: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 50bfc3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50bfc4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 50bfc7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50bfc8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50bfc9: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 50bfd0: call 0x4e4165 */
  esp -= 4; W32(esp, 0x50bfd5u); SPILL(); f_4e4165(); if (g_unwind) return; RELOAD();
/* 50bfd5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50bfd8: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 50bfdb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50bfdc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50bfdd: call 0x4e4165 */
  esp -= 4; W32(esp, 0x50bfe2u); SPILL(); f_4e4165(); if (g_unwind) return; RELOAD();
/* 50bfe2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50bfe5: lea edx, [esi + 8] */
  edx = (uint32_t)(esi + 0x8u);
/* 50bfe8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50bfe9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50bfea: call 0x4e4165 */
  esp -= 4; W32(esp, 0x50bfefu); SPILL(); f_4e4165(); if (g_unwind) return; RELOAD();
/* 50bfef: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50bff2: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 50bff5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50bff6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50bff7: call 0x4e4165 */
  esp -= 4; W32(esp, 0x50bffcu); SPILL(); f_4e4165(); if (g_unwind) return; RELOAD();
/* 50bffc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 50bfff: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50c002: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50c003: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50c004: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 50c00b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50c00c: mov esp, ebp */
  esp = ebp;
/* 50c00e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50c00f: ret  */
  esp += 4; SPILL(); return;
}

void f_50c010(void) {
  LOAD_REGS();
L_50c010: /* 50c010: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 50c013: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 50c018: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 50c01b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50c01c: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 50c01f: call 0x554df6 */
  esp -= 4; W32(esp, 0x50c024u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_50c024(); return;
}

void f_50c024(void) {
  LOAD_REGS();
L_50c024: /* 50c024: push 0x56b708 */
  { uint32_t v = 0x56b708u; esp -= 4; W32(esp, v); }
/* 50c029: push 0x5a376c */
  { uint32_t v = 0x5a376cu; esp -= 4; W32(esp, v); }
/* 50c02e: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x50c033u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 50c033: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50c036: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50c038: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50c03a: call 0x554df6 */
  esp -= 4; W32(esp, 0x50c03fu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_50c03f: guest_badaddr(0x50c03f); return;
}

void f_50c070(void) {
  LOAD_REGS();
L_50c070: /* 50c070: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 50c071: mov ebp, esp */
  ebp = esp;
/* 50c073: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 50c075: push 0x556e00 */
  { uint32_t v = 0x556e00u; esp -= 4; W32(esp, v); }
/* 50c07a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 50c080: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50c081: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 50c088: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 50c08b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50c08c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50c08d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50c08e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 50c091: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 50c098: call 0x4e263a */
  esp -= 4; W32(esp, 0x50c09du); SPILL(); f_4e263a(); if (g_unwind) return; RELOAD();
/* 50c09d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 50c0a0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50c0a1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50c0a2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 50c0a9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50c0aa: mov esp, ebp */
  esp = ebp;
/* 50c0ac: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50c0ad: ret  */
  esp += 4; SPILL(); return;
}

void f_50c0ae(void) {
  LOAD_REGS();
L_50c0ae: /* 50c0ae: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 50c0b1: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 50c0b6: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 50c0b9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50c0ba: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 50c0bd: call 0x554df6 */
  esp -= 4; W32(esp, 0x50c0c2u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_50c0c2(); return;
}

void f_50c0c2(void) {
  LOAD_REGS();
L_50c0c2: /* 50c0c2: push 0x56b71c */
  { uint32_t v = 0x56b71cu; esp -= 4; W32(esp, v); }
/* 50c0c7: push 0x5a5790 */
  { uint32_t v = 0x5a5790u; esp -= 4; W32(esp, v); }
/* 50c0cc: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x50c0d1u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 50c0d1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50c0d4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50c0d6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50c0d8: call 0x554df6 */
  esp -= 4; W32(esp, 0x50c0ddu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_50c0dd: guest_badaddr(0x50c0dd); return;
}

void f_50c100(void) {
  LOAD_REGS();
L_50c100: /* 50c100: mov eax, ecx */
  eax = ecx;
/* 50c102: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 50c106: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 50c108: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50c109: mov esi, dword ptr [eax + 8] */
  esi = R32((uint32_t)(eax + 0x8u));
/* 50c10c: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 50c10f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50c110: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50c111: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x50c114u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50c114: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50c115: ret 4 */
  esp += 8; SPILL(); return;
}

void f_50c130(void) {
  LOAD_REGS();
L_50c130: /* 50c130: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 50c134: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 50c138: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 50c13a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50c13b: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x50c13eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50c13e: ret  */
  esp += 4; SPILL(); return;
}

void f_50c150(void) {
  LOAD_REGS();
L_50c150: /* 50c150: mov eax, ecx */
  eax = ecx;
/* 50c152: xor ecx, ecx */
  ecx = 0;
/* 50c154: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 50c156: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 50c159: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 50c15c: ret  */
  esp += 4; SPILL(); return;
}

void f_50c170(void) {
  LOAD_REGS();
L_50c170: /* 50c170: mov eax, ecx */
  eax = ecx;
/* 50c172: xor ecx, ecx */
  ecx = 0;
/* 50c174: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 50c176: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 50c179: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 50c17c: ret  */
  esp += 4; SPILL(); return;
}

void f_50c190(void) {
  LOAD_REGS();
L_50c190: /* 50c190: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 50c194: mov eax, ecx */
  eax = ecx;
/* 50c196: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 50c19a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 50c19c: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 50c19f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_50c1c0(void) {
  LOAD_REGS();
L_50c1c0: /* 50c1c0: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 50c1c3: cmp dword ptr [ecx + 8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50c1c6: je 0x50c1d2 */
  if (zf) goto L_50c1d2;
L_50c1c8: /* 50c1c8: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 50c1ca: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 50c1cd: call 0x4e4502 */
  esp -= 4; W32(esp, 0x50c1d2u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_50c1d2: /* 50c1d2: ret  */
  esp += 4; SPILL(); return;
}

void f_50c1f0(void) {
  LOAD_REGS();
L_50c1f0: /* 50c1f0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 50c1f4: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 50c1f8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 50c1fa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50c1fb: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x50c1feu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50c1fe: ret  */
  esp += 4; SPILL(); return;
}

void f_50c210(void) {
  LOAD_REGS();
L_50c210: /* 50c210: mov eax, ecx */
  eax = ecx;
/* 50c212: xor ecx, ecx */
  ecx = 0;
/* 50c214: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 50c216: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 50c219: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 50c21c: ret  */
  esp += 4; SPILL(); return;
}

void f_50c230(void) {
  LOAD_REGS();
L_50c230: /* 50c230: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 50c234: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 50c238: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 50c23a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50c23b: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x50c23eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50c23e: ret  */
  esp += 4; SPILL(); return;
}

void f_50c250(void) {
  LOAD_REGS();
L_50c250: /* 50c250: mov eax, ecx */
  eax = ecx;
/* 50c252: xor ecx, ecx */
  ecx = 0;
/* 50c254: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 50c256: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 50c259: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 50c25c: ret  */
  esp += 4; SPILL(); return;
}

void f_50c270(void) {
  LOAD_REGS();
L_50c270: /* 50c270: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 50c273: ret  */
  esp += 4; SPILL(); return;
}

void f_50c290(void) {
  LOAD_REGS();
L_50c290: /* 50c290: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 50c293: xor eax, eax */
  eax = 0;
/* 50c295: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50c297: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 50c29a: ret  */
  esp += 4; SPILL(); return;
}

void f_50c2b0(void) {
  LOAD_REGS();
L_50c2b0: /* 50c2b0: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 50c2b3: ret  */
  esp += 4; SPILL(); return;
}

void f_50c2d0(void) {
  LOAD_REGS();
L_50c2d0: /* 50c2d0: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 50c2d3: ret  */
  esp += 4; SPILL(); return;
}

void f_50c2f0(void) {
  LOAD_REGS();
L_50c2f0: /* 50c2f0: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 50c2f3: xor eax, eax */
  eax = 0;
/* 50c2f5: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50c2f7: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 50c2fa: ret  */
  esp += 4; SPILL(); return;
}

void f_50c310(void) {
  LOAD_REGS();
L_50c310: /* 50c310: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 50c313: ret  */
  esp += 4; SPILL(); return;
}

void f_50c330(void) {
  LOAD_REGS();
L_50c330: /* 50c330: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 50c333: ret  */
  esp += 4; SPILL(); return;
}

void f_50c350(void) {
  LOAD_REGS();
L_50c350: /* 50c350: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 50c354: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 50c358: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 50c35a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50c35b: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x50c35eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50c35e: ret  */
  esp += 4; SPILL(); return;
}

void f_50c370(void) {
  LOAD_REGS();
L_50c370: /* 50c370: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50c371: mov eax, ecx */
  eax = ecx;
/* 50c373: mov esi, dword ptr [eax + 8] */
  esi = R32((uint32_t)(eax + 0x8u));
/* 50c376: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 50c379: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 50c37d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 50c37f: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 50c382: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50c383: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 50c386: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50c387: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x50c38au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50c38a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50c38b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_50c3a0(void) {
  LOAD_REGS();
L_50c3a0: /* 50c3a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 50c3a4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50c3a5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50c3a6: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 50c3a9: lea esi, [edi + eax] */
  esi = (uint32_t)(edi + eax);
/* 50c3ac: cmp esi, dword ptr [ecx + 8] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50c3af: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 50c3b2: jle 0x50c3ce */
  if ((zf || sf != of)) goto L_50c3ce;
L_50c3b4: /* 50c3b4: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 50c3b7: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 50c3b8: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 50c3bb: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 50c3bd: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 50c3c0: lea edx, [eax + esi + 0x20] */
  edx = (uint32_t)(eax + esi + 0x20u);
/* 50c3c4: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 50c3c6: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 50c3c9: call 0x4e4502 */
  esp -= 4; W32(esp, 0x50c3ceu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_50c3ce: /* 50c3ce: mov eax, edi */
  eax = edi;
/* 50c3d0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50c3d1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50c3d2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_50c3f0(void) {
  LOAD_REGS();
L_50c3f0: /* 50c3f0: mov eax, ecx */
  eax = ecx;
/* 50c3f2: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 50c3f5: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 50c3f8: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 50c3fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50c3fd: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 50c3ff: lea edx, [edx + edx*2] */
  edx = (uint32_t)(edx + edx*2);
/* 50c402: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 50c405: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 50c408: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50c409: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 50c40c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50c40d: call dword ptr [esi + 0x14] */
  { uint32_t t = R32((uint32_t)(esi + 0x14u)); esp -= 4; W32(esp, 0x50c410u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50c410: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50c411: ret 4 */
  esp += 8; SPILL(); return;
}

void f_50c430(void) {
  LOAD_REGS();
L_50c430: /* 50c430: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50c431: mov eax, ecx */
  eax = ecx;
/* 50c433: mov esi, dword ptr [eax + 8] */
  esi = R32((uint32_t)(eax + 0x8u));
/* 50c436: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 50c439: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 50c43d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 50c43f: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 50c442: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50c443: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 50c446: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50c447: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x50c44au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50c44a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50c44b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_50c460(void) {
  LOAD_REGS();
L_50c460: /* 50c460: mov eax, ecx */
  eax = ecx;
/* 50c462: xor ecx, ecx */
  ecx = 0;
/* 50c464: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 50c466: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 50c469: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 50c46c: ret  */
  esp += 4; SPILL(); return;
}

void f_50c480(void) {
  LOAD_REGS();
L_50c480: /* 50c480: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 50c484: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 50c486: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 50c489: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 50c48c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_50c4a0(void) {
  LOAD_REGS();
L_50c4a0: /* 50c4a0: mov eax, ecx */
  eax = ecx;
/* 50c4a2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 50c4a6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 50c4a8: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 50c4ac: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 50c4af: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 50c4b1: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 50c4b4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_50c4d0(void) {
  LOAD_REGS();
L_50c4d0: /* 50c4d0: mov eax, 1 */
  eax = 0x1u;
/* 50c4d5: ret  */
  esp += 4; SPILL(); return;
}

void f_50c4f0(void) {
  LOAD_REGS();
L_50c4f0: /* 50c4f0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 50c4f4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50c4f6: je 0x50c50f */
  if (zf) goto L_50c50f;
L_50c4f8: /* 50c4f8: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* 50c4fb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50c4fd: je 0x50c50f */
  if (zf) goto L_50c50f;
L_50c4ff: /* 50c4ff: nop  */
L_50c500: /* 50c500: cmp ecx, 0x6a5680 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6a5680u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50c506: je 0x50c511 */
  if (zf) goto L_50c511;
L_50c508: /* 50c508: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* 50c50b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50c50d: jne 0x50c500 */
  if (!zf) goto L_50c500;
L_50c50f: /* 50c50f: xor eax, eax */
  eax = 0;
L_50c511: /* 50c511: ret  */
  esp += 4; SPILL(); return;
}

void f_50c530(void) {
  LOAD_REGS();
L_50c530: /* 50c530: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 50c534: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50c536: je 0x50c54f */
  if (zf) goto L_50c54f;
L_50c538: /* 50c538: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* 50c53b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50c53d: je 0x50c54f */
  if (zf) goto L_50c54f;
L_50c53f: /* 50c53f: nop  */
L_50c540: /* 50c540: cmp ecx, 0x6a5150 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6a5150u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50c546: je 0x50c551 */
  if (zf) goto L_50c551;
L_50c548: /* 50c548: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* 50c54b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50c54d: jne 0x50c540 */
  if (!zf) goto L_50c540;
L_50c54f: /* 50c54f: xor eax, eax */
  eax = 0;
L_50c551: /* 50c551: ret  */
  esp += 4; SPILL(); return;
}

void f_50c570(void) {
  LOAD_REGS();
L_50c570: /* 50c570: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 50c574: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 50c578: lea eax, [eax + ecx - 1] */
  eax = (uint32_t)(eax + ecx + 0xffffffffu);
/* 50c57c: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 50c57d: not ecx */
  ecx = ~ecx;
/* 50c57f: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 50c581: ret  */
  esp += 4; SPILL(); return;
}

void f_50c5a0(void) {
  LOAD_REGS();
L_50c5a0: /* 50c5a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 50c5a4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50c5a6: je 0x50c5bf */
  if (zf) goto L_50c5bf;
L_50c5a8: /* 50c5a8: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* 50c5ab: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50c5ad: je 0x50c5bf */
  if (zf) goto L_50c5bf;
L_50c5af: /* 50c5af: nop  */
L_50c5b0: /* 50c5b0: cmp ecx, 0x6a7ad8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6a7ad8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50c5b6: je 0x50c5c1 */
  if (zf) goto L_50c5c1;
L_50c5b8: /* 50c5b8: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* 50c5bb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50c5bd: jne 0x50c5b0 */
  if (!zf) goto L_50c5b0;
L_50c5bf: /* 50c5bf: xor eax, eax */
  eax = 0;
L_50c5c1: /* 50c5c1: ret  */
  esp += 4; SPILL(); return;
}

void f_50c5e0(void) {
  LOAD_REGS();
L_50c5e0: /* 50c5e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 50c5e4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50c5e6: je 0x50c5ff */
  if (zf) goto L_50c5ff;
L_50c5e8: /* 50c5e8: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* 50c5eb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50c5ed: je 0x50c5ff */
  if (zf) goto L_50c5ff;
L_50c5ef: /* 50c5ef: nop  */
L_50c5f0: /* 50c5f0: cmp ecx, 0x6a75a8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6a75a8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50c5f6: je 0x50c601 */
  if (zf) goto L_50c601;
L_50c5f8: /* 50c5f8: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* 50c5fb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50c5fd: jne 0x50c5f0 */
  if (!zf) goto L_50c5f0;
L_50c5ff: /* 50c5ff: xor eax, eax */
  eax = 0;
L_50c601: /* 50c601: ret  */
  esp += 4; SPILL(); return;
}

void f_50c620(void) {
  LOAD_REGS();
L_50c620: /* 50c620: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 50c624: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50c626: je 0x50c63f */
  if (zf) goto L_50c63f;
L_50c628: /* 50c628: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* 50c62b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50c62d: je 0x50c63f */
  if (zf) goto L_50c63f;
L_50c62f: /* 50c62f: nop  */
L_50c630: /* 50c630: cmp ecx, 0x6a60e0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6a60e0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50c636: je 0x50c641 */
  if (zf) goto L_50c641;
L_50c638: /* 50c638: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* 50c63b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50c63d: jne 0x50c630 */
  if (!zf) goto L_50c630;
L_50c63f: /* 50c63f: xor eax, eax */
  eax = 0;
L_50c641: /* 50c641: ret  */
  esp += 4; SPILL(); return;
}

void f_50c660(void) {
  LOAD_REGS();
L_50c660: /* 50c660: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 50c664: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50c666: je 0x50c67f */
  if (zf) goto L_50c67f;
L_50c668: /* 50c668: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* 50c66b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50c66d: je 0x50c67f */
  if (zf) goto L_50c67f;
L_50c66f: /* 50c66f: nop  */
L_50c670: /* 50c670: cmp ecx, 0x6a8548 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6a8548u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50c676: je 0x50c681 */
  if (zf) goto L_50c681;
L_50c678: /* 50c678: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* 50c67b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50c67d: jne 0x50c670 */
  if (!zf) goto L_50c670;
L_50c67f: /* 50c67f: xor eax, eax */
  eax = 0;
L_50c681: /* 50c681: ret  */
  esp += 4; SPILL(); return;
}

void f_50c6a0(void) {
  LOAD_REGS();
L_50c6a0: /* 50c6a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 50c6a4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50c6a6: je 0x50c6bf */
  if (zf) goto L_50c6bf;
L_50c6a8: /* 50c6a8: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* 50c6ab: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50c6ad: je 0x50c6bf */
  if (zf) goto L_50c6bf;
L_50c6af: /* 50c6af: nop  */
L_50c6b0: /* 50c6b0: cmp ecx, 0x5f0318 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x5f0318u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50c6b6: je 0x50c6c1 */
  if (zf) goto L_50c6c1;
L_50c6b8: /* 50c6b8: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* 50c6bb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50c6bd: jne 0x50c6b0 */
  if (!zf) goto L_50c6b0;
L_50c6bf: /* 50c6bf: xor eax, eax */
  eax = 0;
L_50c6c1: /* 50c6c1: ret  */
  esp += 4; SPILL(); return;
}

void f_50c6e0(void) {
  LOAD_REGS();
L_50c6e0: /* 50c6e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50c6e1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 50c6e5: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 50c6e8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50c6e9: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 50c6ec: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 50c6ef: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50c6f1: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 50c6f4: jle 0x50c712 */
  if ((zf || sf != of)) goto L_50c712;
L_50c6f6: /* 50c6f6: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 50c6f9: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 50c6fa: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 50c6fd: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 50c6ff: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 50c702: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 50c706: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 50c708: mov ecx, esi */
  ecx = esi;
/* 50c70a: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 50c70d: call 0x4e4502 */
  esp -= 4; W32(esp, 0x50c712u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_50c712: /* 50c712: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 50c714: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 50c717: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50c718: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 50c71b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50c71c: ret  */
  esp += 4; SPILL(); return;
}

void f_50c730(void) {
  LOAD_REGS();
L_50c730: /* 50c730: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 50c734: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 50c738: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 50c73a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50c73b: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 50c73d: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 50c73f: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 50c741: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50c742: ret  */
  esp += 4; SPILL(); return;
}

void f_50c760(void) {
  LOAD_REGS();
L_50c760: /* 50c760: mov eax, ecx */
  eax = ecx;
/* 50c762: xor ecx, ecx */
  ecx = 0;
/* 50c764: mov edx, 1 */
  edx = 0x1u;
/* 50c769: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 50c76c: mov dword ptr [eax + 0x1c], ecx */
  W32((uint32_t)(eax + 0x1cu), ecx);
/* 50c76f: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 50c772: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 50c775: mov dword ptr [eax + 0x2c], ecx */
  W32((uint32_t)(eax + 0x2cu), ecx);
/* 50c778: mov dword ptr [eax + 0x30], ecx */
  W32((uint32_t)(eax + 0x30u), ecx);
/* 50c77b: mov dword ptr [eax + 0x34], ecx */
  W32((uint32_t)(eax + 0x34u), ecx);
/* 50c77e: mov dword ptr [eax + 0x38], ecx */
  W32((uint32_t)(eax + 0x38u), ecx);
/* 50c781: mov dword ptr [eax + 0x40], ecx */
  W32((uint32_t)(eax + 0x40u), ecx);
/* 50c784: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 50c788: mov dword ptr [eax + 4], 0x7e */
  W32((uint32_t)(eax + 0x4u), 0x7eu);
/* 50c78f: mov dword ptr [eax + 8], 0x7d0 */
  W32((uint32_t)(eax + 0x8u), 0x7d0u);
/* 50c796: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 50c799: mov dword ptr [eax + 0x20], edx */
  W32((uint32_t)(eax + 0x20u), edx);
/* 50c79c: mov dword ptr [eax + 0x24], edx */
  W32((uint32_t)(eax + 0x24u), edx);
/* 50c79f: mov dword ptr [eax + 0x28], edx */
  W32((uint32_t)(eax + 0x28u), edx);
/* 50c7a2: mov dword ptr [eax + 0x3c], 0xffffffff */
  W32((uint32_t)(eax + 0x3cu), 0xffffffffu);
/* 50c7a9: mov dword ptr [eax], 0x56b750 */
  W32((uint32_t)(eax), 0x56b750u);
/* 50c7af: mov dword ptr [eax + 0x44], ecx */
  W32((uint32_t)(eax + 0x44u), ecx);
/* 50c7b2: mov edx, dword ptr [ecx + 0x14] */
  edx = R32((uint32_t)(ecx + 0x14u));
/* 50c7b5: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 50c7b8: mov ecx, dword ptr [ecx + 0x1c] */
  ecx = R32((uint32_t)(ecx + 0x1cu));
/* 50c7bb: mov dword ptr [eax + 0x1c], ecx */
  W32((uint32_t)(eax + 0x1cu), ecx);
/* 50c7be: ret 4 */
  esp += 8; SPILL(); return;
}

void f_50c7f0(void) {
  LOAD_REGS();
L_50c7f0: /* 50c7f0: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 50c7f4: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 50c7f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50c7f7: mov esi, ecx */
  esi = ecx;
/* 50c7f9: mov ecx, dword ptr [esi + 0x44] */
  ecx = R32((uint32_t)(esi + 0x44u));
/* 50c7fc: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 50c7fe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50c7ff: call dword ptr [eax + 0x24] */
  { uint32_t t = R32((uint32_t)(eax + 0x24u)); esp -= 4; W32(esp, 0x50c802u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50c802: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 50c806: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 50c80a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50c80b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50c80c: call 0x4e2f2c */
  esp -= 4; W32(esp, 0x50c811u); SPILL(); f_4e2f2c(); if (g_unwind) return; RELOAD();
/* 50c811: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50c814: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50c815: ret 4 */
  esp += 8; SPILL(); return;
}

void f_50c830(void) {
  LOAD_REGS();
L_50c830: /* 50c830: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 50c834: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50c835: mov esi, ecx */
  esi = ecx;
/* 50c837: mov ecx, dword ptr [esi + 0x44] */
  ecx = R32((uint32_t)(esi + 0x44u));
/* 50c83a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 50c83c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50c83d: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0x50c840u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50c840: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 50c844: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 50c848: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50c849: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50c84a: call 0x4e2f2c */
  esp -= 4; W32(esp, 0x50c84fu); SPILL(); f_4e2f2c(); if (g_unwind) return; RELOAD();
/* 50c84f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50c852: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50c853: ret 4 */
  esp += 8; SPILL(); return;
}

void f_50c870(void) {
  LOAD_REGS();
L_50c870: /* 50c870: mov edx, dword ptr [ecx + 0x40] */
  edx = R32((uint32_t)(ecx + 0x40u));
/* 50c873: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 50c877: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 50c879: mov dword ptr [ecx + 0x40], edx */
  W32((uint32_t)(ecx + 0x40u), edx);
/* 50c87c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_50c890(void) {
  LOAD_REGS();
L_50c890: /* 50c890: mov eax, ecx */
  eax = ecx;
/* 50c892: ret  */
  esp += 4; SPILL(); return;
}

void f_50c8b0(void) {
  LOAD_REGS();
L_50c8b0: /* 50c8b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 50c8b1: mov ebp, esp */
  ebp = esp;
/* 50c8b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 50c8b5: push 0x556e10 */
  { uint32_t v = 0x556e10u; esp -= 4; W32(esp, v); }
/* 50c8ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 50c8c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50c8c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 50c8c8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 50c8cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50c8cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50c8cd: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 50c8d0: cmp dword ptr [esi + 0x24], 0x6a5150 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x24u))); uint32_t b = (uint32_t)(0x6a5150u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50c8d7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50c8d8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 50c8db: mov edi, ecx */
  edi = ecx;
/* 50c8dd: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 50c8e4: jne 0x50c94e */
  if (!zf) goto L_50c94e;
L_50c8e6: /* 50c8e6: mov eax, dword ptr [esi + 0x6c] */
  eax = R32((uint32_t)(esi + 0x6cu));
/* 50c8e9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50c8eb: jne 0x50c904 */
  if (!zf) goto L_50c904;
L_50c8ed: /* 50c8ed: push 0xbf */
  { uint32_t v = 0xbfu; esp -= 4; W32(esp, v); }
/* 50c8f2: push 0x5a5ab8 */
  { uint32_t v = 0x5a5ab8u; esp -= 4; W32(esp, v); }
/* 50c8f7: push 0x5a5aa4 */
  { uint32_t v = 0x5a5aa4u; esp -= 4; W32(esp, v); }
/* 50c8fc: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x50c901u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 50c901: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50c904: /* 50c904: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 50c907: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 50c90a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50c90c: je 0x50c91d */
  if (zf) goto L_50c91d;
L_50c90e: /* 50c90e: mov al, byte ptr [edi + 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1u))) & 0xffu);
/* 50c911: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 50c913: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 50c916: jns 0x50c930 */
  if (!sf) goto L_50c930;
L_50c918: /* 50c918: mov ecx, dword ptr [esi + 0x6c] */
  ecx = R32((uint32_t)(esi + 0x6cu));
/* 50c91b: or dword ptr [eax], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax), r);
  }
L_50c91d: /* 50c91d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 50c920: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 50c927: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50c928: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50c929: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50c92a: mov esp, ebp */
  esp = ebp;
/* 50c92c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50c92d: ret 0x10 */
  esp += 20; SPILL(); return;
L_50c930: /* 50c930: mov edx, dword ptr [esi + 0x6c] */
  edx = R32((uint32_t)(esi + 0x6cu));
/* 50c933: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 50c935: not edx */
  edx = ~edx;
/* 50c937: and ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 50c939: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 50c93b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 50c93e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 50c945: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50c946: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50c947: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50c948: mov esp, ebp */
  esp = ebp;
/* 50c94a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50c94b: ret 0x10 */
  esp += 20; SPILL(); return;
L_50c94e: /* 50c94e: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 50c951: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 50c954: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 50c956: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50c957: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 50c95a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50c95b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50c95c: mov ecx, esi */
  ecx = esi;
/* 50c95e: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0x50c964u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50c964: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 50c967: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50c968: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50c969: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 50c970: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50c971: mov esp, ebp */
  esp = ebp;
/* 50c973: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50c974: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_50c977(void) {
  LOAD_REGS();
L_50c977: /* 50c977: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 50c97a: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 50c97f: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 50c982: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50c983: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 50c986: call 0x554df6 */
  esp -= 4; W32(esp, 0x50c98bu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_50c98b(); return;
}

void f_50c98b(void) {
  LOAD_REGS();
L_50c98b: /* 50c98b: push 0x56b7c0 */
  { uint32_t v = 0x56b7c0u; esp -= 4; W32(esp, v); }
/* 50c990: push 0x5a376c */
  { uint32_t v = 0x5a376cu; esp -= 4; W32(esp, v); }
/* 50c995: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x50c99au); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 50c99a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50c99d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50c99f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50c9a1: call 0x554df6 */
  esp -= 4; W32(esp, 0x50c9a6u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_50c9a6: guest_badaddr(0x50c9a6); return;
}

void f_50c9f0(void) {
  LOAD_REGS();
L_50c9f0: /* 50c9f0: mov dword ptr [ecx], 0x569110 */
  W32((uint32_t)(ecx), 0x569110u);
/* 50c9f6: ret  */
  esp += 4; SPILL(); return;
}

void f_50ca10(void) {
  LOAD_REGS();
L_50ca10: /* 50ca10: mov eax, ecx */
  eax = ecx;
/* 50ca12: mov edx, dword ptr [eax + 0x24] */
  edx = R32((uint32_t)(eax + 0x24u));
/* 50ca15: mov ecx, 0x5f0d80 */
  ecx = 0x5f0d80u;
/* 50ca1a: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50ca1c: je 0x50ca28 */
  if (zf) goto L_50ca28;
L_50ca1e: /* 50ca1e: mov edi, edi */
  edi = edi;
L_50ca20: /* 50ca20: mov eax, dword ptr [eax + 0x18] */
  eax = R32((uint32_t)(eax + 0x18u));
/* 50ca23: cmp dword ptr [eax + 0x24], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x24u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50ca26: jne 0x50ca20 */
  if (!zf) goto L_50ca20;
L_50ca28: /* 50ca28: ret  */
  esp += 4; SPILL(); return;
}

void f_50ca40(void) {
  LOAD_REGS();
L_50ca40: /* 50ca40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 50ca41: mov ebp, esp */
  ebp = esp;
/* 50ca43: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 50ca45: push 0x556e20 */
  { uint32_t v = 0x556e20u; esp -= 4; W32(esp, v); }
/* 50ca4a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 50ca50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50ca51: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 50ca58: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 50ca5b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50ca5c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50ca5d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50ca5e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 50ca61: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 50ca64: mov esi, ecx */
  esi = ecx;
/* 50ca66: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50ca67: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 50ca6a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 50ca71: call 0x4e1519 */
  esp -= 4; W32(esp, 0x50ca76u); SPILL(); f_4e1519(); if (g_unwind) return; RELOAD();
/* 50ca76: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 50ca78: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 50ca7b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50ca7c: mov ecx, edi */
  ecx = edi;
/* 50ca7e: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x50ca81u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50ca81: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 50ca83: lea ecx, [esi + 0x2c] */
  ecx = (uint32_t)(esi + 0x2cu);
/* 50ca86: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50ca87: mov ecx, eax */
  ecx = eax;
/* 50ca89: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x50ca8cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50ca8c: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 50ca8f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50ca91: je 0x50ca9a */
  if (zf) goto L_50ca9a;
L_50ca93: /* 50ca93: mov dword ptr [esi + 0x30], 0 */
  W32((uint32_t)(esi + 0x30u), 0x0u);
L_50ca9a: /* 50ca9a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 50ca9d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50ca9e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50ca9f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 50caa6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50caa7: mov esp, ebp */
  esp = ebp;
/* 50caa9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50caaa: ret 4 */
  esp += 8; SPILL(); return;
}

void f_50caad(void) {
  LOAD_REGS();
L_50caad: /* 50caad: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 50cab0: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 50cab5: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 50cab8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50cab9: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 50cabc: call 0x554df6 */
  esp -= 4; W32(esp, 0x50cac1u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_50cac1(); return;
}

void f_50cac1(void) {
  LOAD_REGS();
L_50cac1: /* 50cac1: push 0x56b81c */
  { uint32_t v = 0x56b81cu; esp -= 4; W32(esp, v); }
/* 50cac6: push 0x5a4e38 */
  { uint32_t v = 0x5a4e38u; esp -= 4; W32(esp, v); }
/* 50cacb: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x50cad0u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 50cad0: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 50cad3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50cad6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50cad8: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x50caddu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 50cadd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50cade: push 0x5a4e40 */
  { uint32_t v = 0x5a4e40u; esp -= 4; W32(esp, v); }
/* 50cae3: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x50cae8u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 50cae8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50caeb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50caed: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50caef: call 0x554df6 */
  esp -= 4; W32(esp, 0x50caf4u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_50caf4: guest_badaddr(0x50caf4); return;
}

void f_50cb30(void) {
  LOAD_REGS();
L_50cb30: /* 50cb30: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 50cb31: mov ebp, esp */
  ebp = esp;
/* 50cb33: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 50cb35: push 0x556e30 */
  { uint32_t v = 0x556e30u; esp -= 4; W32(esp, v); }
/* 50cb3a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 50cb40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50cb41: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 50cb48: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 50cb4b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50cb4c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50cb4d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50cb4e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 50cb51: mov esi, ecx */
  esi = ecx;
/* 50cb53: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 50cb5a: call 0x4e15f0 */
  esp -= 4; W32(esp, 0x50cb5fu); SPILL(); f_4e15f0(); if (g_unwind) return; RELOAD();
/* 50cb5f: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 50cb62: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 50cb65: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50cb66: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* 50cb69: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50cb6a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 50cb71: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50cb72: mov esp, ebp */
  esp = ebp;
/* 50cb74: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50cb75: ret  */
  esp += 4; SPILL(); return;
}

void f_50cb76(void) {
  LOAD_REGS();
L_50cb76: /* 50cb76: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 50cb79: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 50cb7e: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 50cb81: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50cb82: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 50cb85: call 0x554df6 */
  esp -= 4; W32(esp, 0x50cb8au); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_50cb8a(); return;
}

void f_50cb8a(void) {
  LOAD_REGS();
L_50cb8a: /* 50cb8a: push 0x56b848 */
  { uint32_t v = 0x56b848u; esp -= 4; W32(esp, v); }
/* 50cb8f: push 0x5a4ea4 */
  { uint32_t v = 0x5a4ea4u; esp -= 4; W32(esp, v); }
/* 50cb94: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x50cb99u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 50cb99: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50cb9c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50cb9e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50cba0: call 0x554df6 */
  esp -= 4; W32(esp, 0x50cba5u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_50cba5: guest_badaddr(0x50cba5); return;
}

void f_50cbd0(void) {
  LOAD_REGS();
L_50cbd0: /* 50cbd0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 50cbd1: mov ebp, esp */
  ebp = esp;
/* 50cbd3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 50cbd5: push 0x556e40 */
  { uint32_t v = 0x556e40u; esp -= 4; W32(esp, v); }
/* 50cbda: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 50cbe0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50cbe1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 50cbe8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 50cbeb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50cbec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50cbed: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50cbee: mov esi, ecx */
  esi = ecx;
/* 50cbf0: xor eax, eax */
  eax = 0;
/* 50cbf2: lea ecx, [esi + 0x48] */
  ecx = (uint32_t)(esi + 0x48u);
/* 50cbf5: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 50cbf8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 50cbfa: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 50cbfd: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 50cc00: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 50cc03: call 0x4e4502 */
  esp -= 4; W32(esp, 0x50cc08u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 50cc08: mov ecx, esi */
  ecx = esi;
/* 50cc0a: call 0x4e2a9a */
  esp -= 4; W32(esp, 0x50cc0fu); SPILL(); f_4e2a9a(); if (g_unwind) return; RELOAD();
/* 50cc0f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 50cc12: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50cc13: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50cc14: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 50cc1b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50cc1c: mov esp, ebp */
  esp = ebp;
/* 50cc1e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50cc1f: ret  */
  esp += 4; SPILL(); return;
}

void f_50cc20(void) {
  LOAD_REGS();
L_50cc20: /* 50cc20: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 50cc23: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 50cc28: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 50cc2b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50cc2c: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 50cc2f: call 0x554df6 */
  esp -= 4; W32(esp, 0x50cc34u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_50cc34(); return;
}

void f_50cc34(void) {
  LOAD_REGS();
L_50cc34: /* 50cc34: push 0x56b874 */
  { uint32_t v = 0x56b874u; esp -= 4; W32(esp, v); }
/* 50cc39: push 0x5a5378 */
  { uint32_t v = 0x5a5378u; esp -= 4; W32(esp, v); }
/* 50cc3e: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x50cc43u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 50cc43: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50cc46: xor eax, eax */
  eax = 0;
/* 50cc48: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50cc49: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50cc4a: call 0x554df6 */
  esp -= 4; W32(esp, 0x50cc4fu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_50cc4f: guest_badaddr(0x50cc4f); return;
}

void f_50cc70(void) {
  LOAD_REGS();
L_50cc70: /* 50cc70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 50cc71: mov ebp, esp */
  ebp = esp;
/* 50cc73: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 50cc75: push 0x556e50 */
  { uint32_t v = 0x556e50u; esp -= 4; W32(esp, v); }
/* 50cc7a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 50cc80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50cc81: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 50cc88: sub esp, 0x6c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 50cc8b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50cc8c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 50cc8f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50cc90: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50cc91: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 50cc94: mov edi, ecx */
  edi = ecx;
/* 50cc96: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50cc97: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* 50cc9a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 50cca1: call 0x4e1de3 */
  esp -= 4; W32(esp, 0x50cca6u); SPILL(); f_4e1de3(); if (g_unwind) return; RELOAD();
/* 50cca6: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 50cca8: lea ecx, [edi + 0x34] */
  ecx = (uint32_t)(edi + 0x34u);
/* 50ccab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50ccac: mov ecx, ebx */
  ecx = ebx;
/* 50ccae: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x50ccb1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50ccb1: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 50ccb3: lea ecx, [edi + 0x3c] */
  ecx = (uint32_t)(edi + 0x3cu);
/* 50ccb6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50ccb7: mov ecx, eax */
  ecx = eax;
/* 50ccb9: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x50ccbcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50ccbc: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 50ccbe: lea esi, [edi + 0x44] */
  esi = (uint32_t)(edi + 0x44u);
/* 50ccc1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50ccc2: mov ecx, ebx */
  ecx = ebx;
/* 50ccc4: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x50ccc7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50ccc7: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50ccca: jne 0x50cce3 */
  if (!zf) goto L_50cce3;
L_50cccc: /* 50cccc: push 0x2a8 */
  { uint32_t v = 0x2a8u; esp -= 4; W32(esp, v); }
/* 50ccd1: push 0x5a538c */
  { uint32_t v = 0x5a538cu; esp -= 4; W32(esp, v); }
/* 50ccd6: push 0x5a5398 */
  { uint32_t v = 0x5a5398u; esp -= 4; W32(esp, v); }
/* 50ccdb: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x50cce0u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 50cce0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50cce3: /* 50cce3: cmp dword ptr [ebx + 4], 0x78 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x4u))); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50cce7: jl 0x50ccf4 */
  if ((sf != of)) goto L_50ccf4;
L_50cce9: /* 50cce9: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 50cceb: lea ecx, [edi + 0x38] */
  ecx = (uint32_t)(edi + 0x38u);
/* 50ccee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50ccef: mov ecx, ebx */
  ecx = ebx;
/* 50ccf1: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x50ccf4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_50ccf4: /* 50ccf4: lea edx, [edi + 0x58] */
  edx = (uint32_t)(edi + 0x58u);
/* 50ccf7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50ccf8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50ccf9: call 0x4e4160 */
  esp -= 4; W32(esp, 0x50ccfeu); SPILL(); f_4e4160(); if (g_unwind) return; RELOAD();
/* 50ccfe: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50cd01: lea ecx, [edi + 0x54] */
  ecx = (uint32_t)(edi + 0x54u);
/* 50cd04: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50cd05: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50cd06: call 0x4e4160 */
  esp -= 4; W32(esp, 0x50cd0bu); SPILL(); f_4e4160(); if (g_unwind) return; RELOAD();
/* 50cd0b: mov edx, dword ptr [edi + 0x4c] */
  edx = R32((uint32_t)(edi + 0x4cu));
/* 50cd0e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50cd11: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 50cd14: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50cd15: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50cd16: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
/* 50cd19: call 0x4e4160 */
  esp -= 4; W32(esp, 0x50cd1eu); SPILL(); f_4e4160(); if (g_unwind) return; RELOAD();
/* 50cd1e: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* 50cd21: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50cd24: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50cd26: je 0x50cd6c */
  if (zf) goto L_50cd6c;
L_50cd28: /* 50cd28: lea esi, [edi + 0x48] */
  esi = (uint32_t)(edi + 0x48u);
/* 50cd2b: xor eax, eax */
  eax = 0;
/* 50cd2d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 50cd2f: mov ecx, esi */
  ecx = esi;
/* 50cd31: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 50cd34: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 50cd37: call 0x4e4502 */
  esp -= 4; W32(esp, 0x50cd3cu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 50cd3c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 50cd3f: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 50cd42: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 50cd45: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 50cd47: mov ecx, edx */
  ecx = edx;
/* 50cd49: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50cd4b: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 50cd4e: jle 0x50cd6c */
  if ((zf || sf != of)) goto L_50cd6c;
L_50cd50: /* 50cd50: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 50cd53: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 50cd54: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 50cd57: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 50cd59: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 50cd5c: lea edx, [eax + ecx + 0x20] */
  edx = (uint32_t)(eax + ecx + 0x20u);
/* 50cd60: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 50cd62: mov ecx, esi */
  ecx = esi;
/* 50cd64: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 50cd67: call 0x4e4502 */
  esp -= 4; W32(esp, 0x50cd6cu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_50cd6c: /* 50cd6c: xor eax, eax */
  eax = 0;
/* 50cd6e: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_50cd71: /* 50cd71: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 50cd74: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50cd76: jge 0x50cd8c */
  if ((sf == of)) goto L_50cd8c;
L_50cd78: /* 50cd78: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 50cd7a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50cd7b: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 50cd7e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50cd7f: mov ecx, edi */
  ecx = edi;
/* 50cd81: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0x50cd87u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50cd87: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 50cd8a: jmp 0x50cd71 */
  goto L_50cd71;
L_50cd8c: /* 50cd8c: je 0x50cda4 */
  if (zf) goto L_50cda4;
L_50cd8e: /* 50cd8e: mov edx, dword ptr [0x5a0c94] */
  edx = R32((uint32_t)(0x5a0c94u));
/* 50cd94: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50cd95: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50cd96: push 0x5a53b0 */
  { uint32_t v = 0x5a53b0u; esp -= 4; W32(esp, v); }
/* 50cd9b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50cd9c: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x50cda1u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 50cda1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50cda4: /* 50cda4: lea eax, [ebp - 0x78] */
  eax = (uint32_t)(ebp + 0xffffff88u);
/* 50cda7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50cda8: call 0x4e2423 */
  esp -= 4; W32(esp, 0x50cdadu); SPILL(); f_4e2423(); if (g_unwind) return; RELOAD();
/* 50cdad: mov eax, dword ptr [edi + 0x4c] */
  eax = R32((uint32_t)(edi + 0x4cu));
/* 50cdb0: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* 50cdb3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50cdb6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50cdb7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50cdb8: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 50cdbb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50cdbc: call 0x4e41d8 */
  esp -= 4; W32(esp, 0x50cdc1u); SPILL(); f_4e41d8(); if (g_unwind) return; RELOAD();
/* 50cdc1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50cdc4: lea edx, [ebp - 0x78] */
  edx = (uint32_t)(ebp + 0xffffff88u);
/* 50cdc7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50cdc8: lea eax, [edi + 0x70] */
  eax = (uint32_t)(edi + 0x70u);
/* 50cdcb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50cdcc: call 0x4e281a */
  esp -= 4; W32(esp, 0x50cdd1u); SPILL(); f_4e281a(); if (g_unwind) return; RELOAD();
/* 50cdd1: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* 50cdd4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50cdd7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50cdd9: mov dword ptr [ebx + 0x34], 1 */
  W32((uint32_t)(ebx + 0x34u), 0x1u);
/* 50cde0: je 0x50cdef */
  if (zf) goto L_50cdef;
L_50cde2: /* 50cde2: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 50cde4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 50cde6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50cde7: mov ecx, edi */
  ecx = edi;
/* 50cde9: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0x50cdefu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_50cdef: /* 50cdef: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 50cdf2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50cdf3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50cdf4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 50cdfb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50cdfc: mov esp, ebp */
  esp = ebp;
/* 50cdfe: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50cdff: ret 4 */
  esp += 8; SPILL(); return;
}

void f_50ce02(void) {
  LOAD_REGS();
L_50ce02: /* 50ce02: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 50ce05: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 50ce0a: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 50ce0d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50ce0e: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 50ce11: call 0x554df6 */
  esp -= 4; W32(esp, 0x50ce16u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_50ce16(); return;
}

void f_50ce16(void) {
  LOAD_REGS();
L_50ce16: /* 50ce16: push 0x56b89c */
  { uint32_t v = 0x56b89cu; esp -= 4; W32(esp, v); }
/* 50ce1b: push 0x5a5418 */
  { uint32_t v = 0x5a5418u; esp -= 4; W32(esp, v); }
/* 50ce20: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x50ce25u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 50ce25: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 50ce28: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50ce2b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50ce2d: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x50ce32u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 50ce32: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50ce33: push 0x5a5420 */
  { uint32_t v = 0x5a5420u; esp -= 4; W32(esp, v); }
/* 50ce38: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x50ce3du); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 50ce3d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50ce40: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50ce42: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50ce44: call 0x554df6 */
  esp -= 4; W32(esp, 0x50ce49u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_50ce49: guest_badaddr(0x50ce49); return;
}

void f_50ced0(void) {
  LOAD_REGS();
L_50ced0: /* 50ced0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 50ced1: mov ebp, esp */
  ebp = esp;
/* 50ced3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 50ced5: push 0x556e60 */
  { uint32_t v = 0x556e60u; esp -= 4; W32(esp, v); }
/* 50ceda: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 50cee0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50cee1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 50cee8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 50ceeb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50ceec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50ceed: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50ceee: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 50cef1: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 50cef8: call 0x4e12da */
  esp -= 4; W32(esp, 0x50cefdu); SPILL(); f_4e12da(); if (g_unwind) return; RELOAD();
/* 50cefd: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 50cf00: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50cf01: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50cf02: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 50cf09: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50cf0a: mov esp, ebp */
  esp = ebp;
/* 50cf0c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50cf0d: ret  */
  esp += 4; SPILL(); return;
}

void f_50cf0e(void) {
  LOAD_REGS();
L_50cf0e: /* 50cf0e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 50cf11: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 50cf16: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 50cf19: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50cf1a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 50cf1d: call 0x554df6 */
  esp -= 4; W32(esp, 0x50cf22u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_50cf22(); return;
}

void f_50cf22(void) {
  LOAD_REGS();
L_50cf22: /* 50cf22: push 0x56b8cc */
  { uint32_t v = 0x56b8ccu; esp -= 4; W32(esp, v); }
/* 50cf27: push 0x5a5450 */
  { uint32_t v = 0x5a5450u; esp -= 4; W32(esp, v); }
/* 50cf2c: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x50cf31u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 50cf31: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50cf34: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50cf36: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50cf38: call 0x554df6 */
  esp -= 4; W32(esp, 0x50cf3du); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_50cf3d: guest_badaddr(0x50cf3d); return;
}

void f_50cf60(void) {
  LOAD_REGS();
L_50cf60: /* 50cf60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 50cf61: mov ebp, esp */
  ebp = esp;
/* 50cf63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 50cf65: push 0x556e70 */
  { uint32_t v = 0x556e70u; esp -= 4; W32(esp, v); }
/* 50cf6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 50cf70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50cf71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 50cf78: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 50cf7b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50cf7c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50cf7d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50cf7e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 50cf81: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 50cf84: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50cf85: mov esi, ecx */
  esi = ecx;
/* 50cf87: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 50cf8e: call 0x4e3224 */
  esp -= 4; W32(esp, 0x50cf93u); SPILL(); f_4e3224(); if (g_unwind) return; RELOAD();
/* 50cf93: lea eax, [esi + 0x80] */
  eax = (uint32_t)(esi + 0x80u);
/* 50cf99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50cf9a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50cf9b: call 0x4e2eaf */
  esp -= 4; W32(esp, 0x50cfa0u); SPILL(); f_4e2eaf(); if (g_unwind) return; RELOAD();
/* 50cfa0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50cfa3: lea ecx, [esi + 0x88] */
  ecx = (uint32_t)(esi + 0x88u);
/* 50cfa9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50cfaa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50cfab: call 0x4e2eaf */
  esp -= 4; W32(esp, 0x50cfb0u); SPILL(); f_4e2eaf(); if (g_unwind) return; RELOAD();
/* 50cfb0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50cfb3: lea edx, [esi + 0x94] */
  edx = (uint32_t)(esi + 0x94u);
/* 50cfb9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50cfba: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50cfbb: call 0x4e4147 */
  esp -= 4; W32(esp, 0x50cfc0u); SPILL(); f_4e4147(); if (g_unwind) return; RELOAD();
/* 50cfc0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50cfc3: add esi, 0x90 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x90u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 50cfc9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50cfca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50cfcb: call 0x4e4165 */
  esp -= 4; W32(esp, 0x50cfd0u); SPILL(); f_4e4165(); if (g_unwind) return; RELOAD();
/* 50cfd0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 50cfd3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50cfd6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50cfd7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50cfd8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 50cfdf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50cfe0: mov esp, ebp */
  esp = ebp;
/* 50cfe2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50cfe3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_50cfe6(void) {
  LOAD_REGS();
L_50cfe6: /* 50cfe6: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 50cfe9: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 50cfee: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 50cff1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50cff2: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 50cff5: call 0x554df6 */
  esp -= 4; W32(esp, 0x50cffau); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_50cffa(); return;
}

void f_50cffa(void) {
  LOAD_REGS();
L_50cffa: /* 50cffa: push 0x56b8f4 */
  { uint32_t v = 0x56b8f4u; esp -= 4; W32(esp, v); }
/* 50cfff: push 0x5a5458 */
  { uint32_t v = 0x5a5458u; esp -= 4; W32(esp, v); }
/* 50d004: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x50d009u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 50d009: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50d00c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50d00e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50d010: call 0x554df6 */
  esp -= 4; W32(esp, 0x50d015u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_50d015: guest_badaddr(0x50d015); return;
}

void f_50d050(void) {
  LOAD_REGS();
L_50d050: /* 50d050: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 50d051: mov ebp, esp */
  ebp = esp;
/* 50d053: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 50d055: push 0x556e80 */
  { uint32_t v = 0x556e80u; esp -= 4; W32(esp, v); }
/* 50d05a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 50d060: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50d061: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 50d068: sub esp, 0x210 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x210u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 50d06e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50d06f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50d070: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50d071: mov esi, ecx */
  esi = ecx;
/* 50d073: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 50d076: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 50d079: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 50d080: call 0x4e2342 */
  esp -= 4; W32(esp, 0x50d085u); SPILL(); f_4e2342(); if (g_unwind) return; RELOAD();
/* 50d085: mov eax, dword ptr [0x5b211c] */
  eax = R32((uint32_t)(0x5b211cu));
/* 50d08a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50d08c: jne 0x50d0b4 */
  if (!zf) goto L_50d0b4;
L_50d08e: /* 50d08e: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 50d091: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50d093: jne 0x50d0b4 */
  if (!zf) goto L_50d0b4;
L_50d095: /* 50d095: cmp esi, 0x6a0f20 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x6a0f20u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50d09b: je 0x50d0b4 */
  if (zf) goto L_50d0b4;
L_50d09d: /* 50d09d: push 0x354 */
  { uint32_t v = 0x354u; esp -= 4; W32(esp, v); }
/* 50d0a2: push 0x5a548c */
  { uint32_t v = 0x5a548cu; esp -= 4; W32(esp, v); }
/* 50d0a7: push 0x5a5498 */
  { uint32_t v = 0x5a5498u; esp -= 4; W32(esp, v); }
/* 50d0ac: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x50d0b1u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 50d0b1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50d0b4: /* 50d0b4: mov eax, dword ptr [esi + 0x518] */
  eax = R32((uint32_t)(esi + 0x518u));
/* 50d0ba: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50d0bc: jne 0x50d19a */
  if (!zf) goto L_50d19a;
L_50d0c2: /* 50d0c2: test dword ptr [esi + 0x1c], 0x4000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x1cu))); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50d0c9: je 0x50d175 */
  if (zf) goto L_50d175;
L_50d0cf: /* 50d0cf: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 50d0d1: mov ecx, esi */
  ecx = esi;
/* 50d0d3: call dword ptr [eax + 0x94] */
  { uint32_t t = R32((uint32_t)(eax + 0x94u)); esp -= 4; W32(esp, 0x50d0d9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50d0d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50d0da: lea ecx, [ebp - 0x21c] */
  ecx = (uint32_t)(ebp + 0xfffffde4u);
/* 50d0e0: push 0x5a54d8 */
  { uint32_t v = 0x5a54d8u; esp -= 4; W32(esp, v); }
/* 50d0e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50d0e6: call 0x4e4183 */
  esp -= 4; W32(esp, 0x50d0ebu); SPILL(); f_4e4183(); if (g_unwind) return; RELOAD();
/* 50d0eb: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 50d0ee: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50d0f1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50d0f3: lea edx, [ebp - 0x21c] */
  edx = (uint32_t)(ebp + 0xfffffde4u);
/* 50d0f9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50d0fa: call 0x4e402a */
  esp -= 4; W32(esp, 0x50d0ffu); SPILL(); f_4e402a(); if (g_unwind) return; RELOAD();
/* 50d0ff: mov edi, eax */
  edi = eax;
/* 50d101: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50d103: je 0x50d14c */
  if (zf) goto L_50d14c;
L_50d105: /* 50d105: cmp dword ptr [edi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50d108: jne 0x50d121 */
  if (!zf) goto L_50d121;
L_50d10a: /* 50d10a: push 0x360 */
  { uint32_t v = 0x360u; esp -= 4; W32(esp, v); }
/* 50d10f: push 0x5a54f0 */
  { uint32_t v = 0x5a54f0u; esp -= 4; W32(esp, v); }
/* 50d114: push 0x5a54fc */
  { uint32_t v = 0x5a54fcu; esp -= 4; W32(esp, v); }
/* 50d119: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x50d11eu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 50d11e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50d121: /* 50d121: cmp dword ptr [edi], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50d123: je 0x50d13c */
  if (zf) goto L_50d13c;
L_50d125: /* 50d125: push 0x361 */
  { uint32_t v = 0x361u; esp -= 4; W32(esp, v); }
/* 50d12a: push 0x5a5508 */
  { uint32_t v = 0x5a5508u; esp -= 4; W32(esp, v); }
/* 50d12f: push 0x5a5514 */
  { uint32_t v = 0x5a5514u; esp -= 4; W32(esp, v); }
/* 50d134: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x50d139u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 50d139: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50d13c: /* 50d13c: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 50d13e: mov ecx, dword ptr [eax + 0x518] */
  ecx = R32((uint32_t)(eax + 0x518u));
/* 50d144: mov dword ptr [esi + 0x518], ecx */
  W32((uint32_t)(esi + 0x518u), ecx);
/* 50d14a: jmp 0x50d175 */
  goto L_50d175;
L_50d14c: /* 50d14c: mov eax, dword ptr [0x5b211c] */
  eax = R32((uint32_t)(0x5b211cu));
/* 50d151: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50d153: jne 0x50d175 */
  if (!zf) goto L_50d175;
L_50d155: /* 50d155: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50d157: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50d159: mov ecx, esi */
  ecx = esi;
/* 50d15b: call 0x4e2cde */
  esp -= 4; W32(esp, 0x50d160u); SPILL(); f_4e2cde(); if (g_unwind) return; RELOAD();
/* 50d160: mov edx, dword ptr [0x5a0c94] */
  edx = R32((uint32_t)(0x5a0c94u));
/* 50d166: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50d167: push 0x5a5524 */
  { uint32_t v = 0x5a5524u; esp -= 4; W32(esp, v); }
/* 50d16c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50d16d: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x50d172u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 50d172: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50d175: /* 50d175: mov eax, dword ptr [esi + 0x518] */
  eax = R32((uint32_t)(esi + 0x518u));
/* 50d17b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50d17d: jne 0x50d19a */
  if (!zf) goto L_50d19a;
L_50d17f: /* 50d17f: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 50d182: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50d184: je 0x50d19a */
  if (zf) goto L_50d19a;
L_50d186: /* 50d186: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 50d188: call dword ptr [eax + 0x70] */
  { uint32_t t = R32((uint32_t)(eax + 0x70u)); esp -= 4; W32(esp, 0x50d18bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50d18b: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 50d18e: mov ecx, dword ptr [eax + 0x518] */
  ecx = R32((uint32_t)(eax + 0x518u));
/* 50d194: mov dword ptr [esi + 0x518], ecx */
  W32((uint32_t)(esi + 0x518u), ecx);
L_50d19a: /* 50d19a: mov eax, dword ptr [0x5b211c] */
  eax = R32((uint32_t)(0x5b211cu));
/* 50d19f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50d1a1: jne 0x50d1c4 */
  if (!zf) goto L_50d1c4;
L_50d1a3: /* 50d1a3: mov eax, dword ptr [esi + 0x518] */
  eax = R32((uint32_t)(esi + 0x518u));
/* 50d1a9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50d1ab: jne 0x50d1c4 */
  if (!zf) goto L_50d1c4;
L_50d1ad: /* 50d1ad: push 0x36f */
  { uint32_t v = 0x36fu; esp -= 4; W32(esp, v); }
/* 50d1b2: push 0x5a5560 */
  { uint32_t v = 0x5a5560u; esp -= 4; W32(esp, v); }
/* 50d1b7: push 0x5a556c */
  { uint32_t v = 0x5a556cu; esp -= 4; W32(esp, v); }
/* 50d1bc: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x50d1c1u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 50d1c1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50d1c4: /* 50d1c4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 50d1c7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50d1c8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50d1c9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 50d1d0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50d1d1: mov esp, ebp */
  esp = ebp;
/* 50d1d3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50d1d4: ret  */
  esp += 4; SPILL(); return;
}

void f_50d1d5(void) {
  LOAD_REGS();
L_50d1d5: /* 50d1d5: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 50d1d8: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 50d1dd: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 50d1e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50d1e1: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 50d1e4: call 0x554df6 */
  esp -= 4; W32(esp, 0x50d1e9u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_50d1e9(); return;
}

void f_50d1e9(void) {
  LOAD_REGS();
L_50d1e9: /* 50d1e9: push 0x56b920 */
  { uint32_t v = 0x56b920u; esp -= 4; W32(esp, v); }
/* 50d1ee: push 0x5a558c */
  { uint32_t v = 0x5a558cu; esp -= 4; W32(esp, v); }
/* 50d1f3: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x50d1f8u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 50d1f8: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 50d1fb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50d1fe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50d200: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x50d205u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 50d205: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50d206: push 0x5a5594 */
  { uint32_t v = 0x5a5594u; esp -= 4; W32(esp, v); }
/* 50d20b: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x50d210u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 50d210: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50d213: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50d215: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50d217: call 0x554df6 */
  esp -= 4; W32(esp, 0x50d21cu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_50d21c: guest_badaddr(0x50d21c); return;
}

void f_50d2a0(void) {
  LOAD_REGS();
L_50d2a0: /* 50d2a0: mov edx, dword ptr [eax + 0x10] */
  edx = R32((uint32_t)(eax + 0x10u));
/* 50d2a3: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50d2a5: je 0x50d2b5 */
  if (zf) goto L_50d2b5;
L_50d2a7: /* 50d2a7: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 50d2aa: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50d2ac: je 0x50d2b5 */
  if (zf) goto L_50d2b5;
L_50d2ae: /* 50d2ae: mov eax, dword ptr [eax + 0x14] */
  eax = R32((uint32_t)(eax + 0x14u));
/* 50d2b1: sub eax, dword ptr [ecx + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 50d2b4: ret  */
  esp += 4; SPILL(); return;
L_50d2b5: /* 50d2b5: xor eax, eax */
  eax = 0;
/* 50d2b7: ret  */
  esp += 4; SPILL(); return;
}

void f_50d2d0(void) {
  LOAD_REGS();
L_50d2d0: /* 50d2d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 50d2d1: mov ebp, esp */
  ebp = esp;
/* 50d2d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 50d2d5: push 0x556e90 */
  { uint32_t v = 0x556e90u; esp -= 4; W32(esp, v); }
/* 50d2da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 50d2e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50d2e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 50d2e8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 50d2eb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50d2ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50d2ed: mov esi, ecx */
  esi = ecx;
/* 50d2ef: mov eax, dword ptr [esi + 0x4b0] */
  eax = R32((uint32_t)(esi + 0x4b0u));
/* 50d2f5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50d2f7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50d2f8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 50d2fb: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 50d2fe: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 50d305: jne 0x50d31e */
  if (!zf) goto L_50d31e;
L_50d307: /* 50d307: push 0x399 */
  { uint32_t v = 0x399u; esp -= 4; W32(esp, v); }
/* 50d30c: push 0x5a55a8 */
  { uint32_t v = 0x5a55a8u; esp -= 4; W32(esp, v); }
/* 50d311: push 0x5a55b4 */
  { uint32_t v = 0x5a55b4u; esp -= 4; W32(esp, v); }
/* 50d316: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x50d31bu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 50d31b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50d31e: /* 50d31e: mov ecx, esi */
  ecx = esi;
/* 50d320: call 0x4e263a */
  esp -= 4; W32(esp, 0x50d325u); SPILL(); f_4e263a(); if (g_unwind) return; RELOAD();
/* 50d325: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 50d328: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50d32a: je 0x50d331 */
  if (zf) goto L_50d331;
L_50d32c: /* 50d32c: call 0x4e4228 */
  esp -= 4; W32(esp, 0x50d331u); SPILL(); f_4e4228(); if (g_unwind) return; RELOAD();
L_50d331: /* 50d331: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 50d334: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50d335: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50d336: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 50d33d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50d33e: mov esp, ebp */
  esp = ebp;
/* 50d340: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50d341: ret  */
  esp += 4; SPILL(); return;
}

void f_50d342(void) {
  LOAD_REGS();
L_50d342: /* 50d342: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 50d345: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 50d34a: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 50d34d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50d34e: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 50d351: call 0x554df6 */
  esp -= 4; W32(esp, 0x50d356u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_50d356(); return;
}

void f_50d356(void) {
  LOAD_REGS();
L_50d356: /* 50d356: push 0x56b940 */
  { uint32_t v = 0x56b940u; esp -= 4; W32(esp, v); }
/* 50d35b: push 0x5a55c0 */
  { uint32_t v = 0x5a55c0u; esp -= 4; W32(esp, v); }
/* 50d360: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x50d365u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 50d365: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 50d368: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50d36b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50d36d: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x50d372u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 50d372: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50d373: push 0x5a55c8 */
  { uint32_t v = 0x5a55c8u; esp -= 4; W32(esp, v); }
/* 50d378: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x50d37du); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 50d37d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50d380: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50d382: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50d384: call 0x554df6 */
  esp -= 4; W32(esp, 0x50d389u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_50d389: guest_badaddr(0x50d389); return;
}

void f_50d3c0(void) {
  LOAD_REGS();
L_50d3c0: /* 50d3c0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 50d3c4: lea ecx, [eax + 8] */
  ecx = (uint32_t)(eax + 0x8u);
/* 50d3c7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50d3c8: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 50d3cc: lea edx, [eax + 4] */
  edx = (uint32_t)(eax + 0x4u);
/* 50d3cf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50d3d0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 50d3d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50d3d3: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x50d3d6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50d3d6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50d3d7: call 0x4e4160 */
  esp -= 4; W32(esp, 0x50d3dcu); SPILL(); f_4e4160(); if (g_unwind) return; RELOAD();
/* 50d3dc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50d3df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50d3e0: call 0x4e4165 */
  esp -= 4; W32(esp, 0x50d3e5u); SPILL(); f_4e4165(); if (g_unwind) return; RELOAD();
/* 50d3e5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50d3e8: ret  */
  esp += 4; SPILL(); return;
}

void f_50d400(void) {
  LOAD_REGS();
L_50d400: /* 50d400: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 50d401: mov ebp, esp */
  ebp = esp;
/* 50d403: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 50d405: push 0x556ea0 */
  { uint32_t v = 0x556ea0u; esp -= 4; W32(esp, v); }
/* 50d40a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 50d410: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50d411: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 50d418: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 50d41b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50d41c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50d41d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 50d420: xor eax, eax */
  eax = 0;
/* 50d422: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50d423: mov edi, ecx */
  edi = ecx;
/* 50d425: mov ebx, dword ptr [edi + 0x48] */
  ebx = R32((uint32_t)(edi + 0x48u));
/* 50d428: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 50d42b: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 50d42e: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 50d430: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 50d432: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 50d435: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 50d438: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50d439: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50d43a: call 0x4e40e8 */
  esp -= 4; W32(esp, 0x50d43fu); SPILL(); f_4e40e8(); if (g_unwind) return; RELOAD();
/* 50d43f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 50d441: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50d444: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 50d445: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 50d447: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* 50d44a: movzx edx, byte ptr [eax + ecx - 1] */
  edx = (uint32_t)(R8((uint32_t)(eax + ecx + 0xffffffffu)));
/* 50d44f: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 50d451: cmp edx, 0x70 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50d454: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 50d457: jl 0x50d4fb */
  if ((sf != of)) goto L_50d4fb;
L_50d45d: /* 50d45d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_50d460: /* 50d460: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 50d462: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50d463: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50d464: mov ecx, edi */
  ecx = edi;
/* 50d466: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x50d46cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50d46c: cmp eax, 0x16 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x16u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50d46f: jne 0x50d460 */
  if (!zf) goto L_50d460;
L_50d471: /* 50d471: mov eax, dword ptr [edi + 0x4c] */
  eax = R32((uint32_t)(edi + 0x4cu));
/* 50d474: cmp dword ptr [esi], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50d476: jge 0x50dadf */
  if ((sf == of)) goto L_50dadf;
L_50d47c: /* 50d47c: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 50d47e: mov ecx, ebx */
  ecx = ebx;
/* 50d480: call dword ptr [eax + 0x28] */
  { uint32_t t = R32((uint32_t)(eax + 0x28u)); esp -= 4; W32(esp, 0x50d483u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50d483: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* 50d486: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 50d489: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 50d48b: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 50d48d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50d48e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50d48f: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 50d492: call 0x4e40e8 */
  esp -= 4; W32(esp, 0x50d497u); SPILL(); f_4e40e8(); if (g_unwind) return; RELOAD();
/* 50d497: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 50d499: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50d49c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 50d49d: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 50d49f: mov edx, dword ptr [edi + 0x48] */
  edx = R32((uint32_t)(edi + 0x48u));
/* 50d4a2: movzx ecx, byte ptr [eax + edx - 1] */
  ecx = (uint32_t)(R8((uint32_t)(eax + edx + 0xffffffffu)));
/* 50d4a7: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 50d4a9: cmp ecx, 0x42 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x42u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50d4ac: mov dword ptr [ebp + 0xc], 0xffffffff */
  W32((uint32_t)(ebp + 0xcu), 0xffffffffu);
/* 50d4b3: jne 0x50d4d0 */
  if (!zf) goto L_50d4d0;
L_50d4b5: /* 50d4b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50d4b6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50d4b7: call 0x4e4160 */
  esp -= 4; W32(esp, 0x50d4bcu); SPILL(); f_4e4160(); if (g_unwind) return; RELOAD();
/* 50d4bc: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 50d4be: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50d4c1: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 50d4c4: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 50d4c6: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* 50d4c9: mov edx, dword ptr [eax + ecx - 4] */
  edx = R32((uint32_t)(eax + ecx + 0xfffffffcu));
/* 50d4cd: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
L_50d4d0: /* 50d4d0: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 50d4d3: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 50d4d5: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 50d4d8: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 50d4da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50d4db: mov ecx, ebx */
  ecx = ebx;
/* 50d4dd: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x50d4e0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50d4e0: cmp dword ptr [ebp + 0xc], 0x64 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50d4e4: jne 0x50dadf */
  if (!zf) goto L_50dadf;
L_50d4ea: /* 50d4ea: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 50d4ec: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50d4ed: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50d4ee: mov ecx, edi */
  ecx = edi;
/* 50d4f0: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x50d4f6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50d4f6: jmp 0x50dadf */
  goto L_50dadf;
L_50d4fb: /* 50d4fb: cmp edx, 0x60 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50d4fe: jl 0x50d5ae */
  if ((sf != of)) goto L_50d5ae;
L_50d504: /* 50d504: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50d505: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50d506: call 0x4e40e8 */
  esp -= 4; W32(esp, 0x50d50bu); SPILL(); f_4e40e8(); if (g_unwind) return; RELOAD();
/* 50d50b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 50d50d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50d510: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 50d511: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_50d513: /* 50d513: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 50d515: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50d516: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50d517: mov ecx, edi */
  ecx = edi;
/* 50d519: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0x50d51fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50d51f: cmp eax, 0x16 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x16u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50d522: jne 0x50d513 */
  if (!zf) goto L_50d513;
L_50d524: /* 50d524: mov eax, dword ptr [edi + 0x4c] */
  eax = R32((uint32_t)(edi + 0x4cu));
/* 50d527: cmp dword ptr [esi], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50d529: jge 0x50dadf */
  if ((sf == of)) goto L_50dadf;
L_50d52f: /* 50d52f: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 50d531: mov ecx, ebx */
  ecx = ebx;
/* 50d533: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x50d536u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50d536: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* 50d539: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 50d53c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 50d53e: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 50d540: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50d541: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50d542: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 50d545: call 0x4e40e8 */
  esp -= 4; W32(esp, 0x50d54au); SPILL(); f_4e40e8(); if (g_unwind) return; RELOAD();
/* 50d54a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 50d54c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50d54f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 50d550: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 50d552: mov edx, dword ptr [edi + 0x48] */
  edx = R32((uint32_t)(edi + 0x48u));
/* 50d555: movzx ecx, byte ptr [eax + edx - 1] */
  ecx = (uint32_t)(R8((uint32_t)(eax + edx + 0xffffffffu)));
/* 50d55a: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 50d55c: cmp ecx, 0x42 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x42u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50d55f: mov dword ptr [ebp + 0xc], 0xffffffff */
  W32((uint32_t)(ebp + 0xcu), 0xffffffffu);
/* 50d566: jne 0x50d583 */
  if (!zf) goto L_50d583;
L_50d568: /* 50d568: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50d569: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50d56a: call 0x4e4160 */
  esp -= 4; W32(esp, 0x50d56fu); SPILL(); f_4e4160(); if (g_unwind) return; RELOAD();
/* 50d56f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 50d571: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50d574: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 50d577: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 50d579: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* 50d57c: mov edx, dword ptr [eax + ecx - 4] */
  edx = R32((uint32_t)(eax + ecx + 0xfffffffcu));
/* 50d580: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
L_50d583: /* 50d583: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 50d586: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 50d588: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 50d58b: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 50d58d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50d58e: mov ecx, ebx */
  ecx = ebx;
/* 50d590: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x50d593u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50d593: cmp dword ptr [ebp + 0xc], 0x64 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50d597: jne 0x50dadf */
  if (!zf) goto L_50dadf;
L_50d59d: /* 50d59d: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 50d59f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50d5a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50d5a1: mov ecx, edi */
  ecx = edi;
/* 50d5a3: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x50d5a9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50d5a9: jmp 0x50dadf */
  goto L_50dadf;
L_50d5ae: /* 50d5ae: cmp edx, 0x45 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x45u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 50d5b1: ja 0x50dac7 */
  if ((!cf && !zf)) goto L_50dac7;
L_50d5b7: /* 50d5b7: movzx edx, byte ptr [edx + 0x50dbb4] */
  edx = (uint32_t)(R8((uint32_t)(edx + 0x50dbb4u)));
/* 50d5be: jmp dword ptr [edx*4 + 0x50db34] */
  switch (R32((uint32_t)(edx*4 + 0x50db34u))) {
    case 0x50d4eau: goto L_50d4ea;
    case 0x50d5c5u: goto L_50d5c5;
    case 0x50d5e5u: goto L_50d5e5;
    case 0x50d5ebu: goto L_50d5eb;
    case 0x50d5fbu: goto L_50d5fb;
    case 0x50d664u: goto L_50d664;
    case 0x50d70bu: goto L_50d70b;
    case 0x50d7b1u: goto L_50d7b1;
    case 0x50d7d5u: goto L_50d7d5;
    case 0x50d81eu: goto L_50d81e;
    case 0x50d82au: goto L_50d82a;
    case 0x50d836u: goto L_50d836;
    case 0x50d853u: goto L_50d853;
    case 0x50d869u: goto L_50d869;
    case 0x50d870u: goto L_50d870;
    case 0x50d892u: goto L_50d892;
    case 0x50d8b7u: goto L_50d8b7;
    case 0x50d8c7u: goto L_50d8c7;
    case 0x50d90bu: goto L_50d90b;
    case 0x50d94fu: goto L_50d94f;
    case 0x50d963u: goto L_50d963;
    case 0x50d98au: goto L_50d98a;
    case 0x50d9aau: goto L_50d9aa;
    case 0x50d9ccu: goto L_50d9cc;
    case 0x50da12u: goto L_50da12;
    case 0x50da59u: goto L_50da59;
    case 0x50da78u: goto L_50da78;
    case 0x50daa1u: goto L_50daa1;
    case 0x50daacu: goto L_50daac;
    case 0x50dabau: goto L_50daba;
    case 0x50dac7u: goto L_50dac7;
    case 0x50dadfu: goto L_50dadf;
    default: guest_badjump(0x50d5be, R32((uint32_t)(edx*4 + 0x50db34u))); return;
  }
L_50d5c5: /* 50d5c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50d5c6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50d5c7: call 0x4e40e8 */
  esp -= 4; W32(esp, 0x50d5ccu); SPILL(); f_4e40e8(); if (g_unwind) return; RELOAD();
/* 50d5cc: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 50d5ce: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50d5d1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 50d5d2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50d5d3: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 50d5d5: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 50d5d7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50d5d8: mov ecx, edi */
  ecx = edi;
/* 50d5da: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0x50d5e0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50d5e0: jmp 0x50dadf */
  goto L_50dadf;
L_50d5e5: /* 50d5e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50d5e6: jmp 0x50d975 */
  goto L_50d975;
L_50d5eb: /* 50d5eb: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 50d5ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50d5ee: mov ecx, ebx */
  ecx = ebx;
/* 50d5f0: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x50d5f3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50d5f3: add dword ptr [esi], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esi), r);
  }
/* 50d5f6: jmp 0x50dadf */
  goto L_50dadf;
L_50d5fb: /* 50d5fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50d5fc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50d5fd: call 0x4e4160 */
  esp -= 4; W32(esp, 0x50d602u); SPILL(); f_4e4160(); if (g_unwind) return; RELOAD();
/* 50d602: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 50d604: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 50d607: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 50d609: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* 50d60c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50d60f: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 50d611: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50d612: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50d613: call 0x4e4160 */
  esp -= 4; W32(esp, 0x50d618u); SPILL(); f_4e4160(); if (g_unwind) return; RELOAD();
/* 50d618: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 50d61a: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 50d61d: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 50d61f: mov eax, edx */
  eax = edx;
/* 50d621: mov edx, dword ptr [edi + 0x48] */
  edx = R32((uint32_t)(edi + 0x48u));
/* 50d624: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50d627: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 50d629: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50d62a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50d62b: call 0x4e4160 */
  esp -= 4; W32(esp, 0x50d630u); SPILL(); f_4e4160(); if (g_unwind) return; RELOAD();
/* 50d630: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 50d632: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50d635: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 50d638: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 50d63a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_50d640: /* 50d640: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 50d642: add eax, dword ptr [edi + 0x48] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x48u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 50d645: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50d646: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50d647: call 0x4e40e8 */
  esp -= 4; W32(esp, 0x50d64cu); SPILL(); f_4e40e8(); if (g_unwind) return; RELOAD();
/* 50d64c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 50d64e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50d651: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 50d652: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 50d654: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* 50d657: mov dl, byte ptr [eax + ecx - 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0xffffffffu))) & 0xffu);
/* 50d65b: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 50d65d: jne 0x50d640 */
  if (!zf) goto L_50d640;
L_50d65f: /* 50d65f: jmp 0x50dadf */
  goto L_50dadf;
L_50d664: /* 50d664: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 50d666: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50d667: mov ecx, ebx */
  ecx = ebx;
/* 50d669: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x50d66cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50d66c: add dword ptr [esi], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esi), r);
  }
/* 50d66f: nop  */
L_50d670: /* 50d670: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 50d672: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50d673: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50d674: mov ecx, edi */
  ecx = edi;
/* 50d676: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0x50d67cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50d67c: cmp eax, 0x16 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x16u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50d67f: jne 0x50d670 */
  if (!zf) goto L_50d670;
L_50d681: /* 50d681: mov eax, dword ptr [edi + 0x4c] */
  eax = R32((uint32_t)(edi + 0x4cu));
/* 50d684: cmp dword ptr [esi], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50d686: jge 0x50dadf */
  if ((sf == of)) goto L_50dadf;
L_50d68c: /* 50d68c: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 50d68e: mov ecx, ebx */
  ecx = ebx;
/* 50d690: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x50d693u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50d693: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* 50d696: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 50d699: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 50d69b: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 50d69d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50d69e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50d69f: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 50d6a2: call 0x4e40e8 */
  esp -= 4; W32(esp, 0x50d6a7u); SPILL(); f_4e40e8(); if (g_unwind) return; RELOAD();
/* 50d6a7: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 50d6a9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50d6ac: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 50d6ad: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 50d6af: mov edx, dword ptr [edi + 0x48] */
  edx = R32((uint32_t)(edi + 0x48u));
/* 50d6b2: movzx ecx, byte ptr [eax + edx - 1] */
  ecx = (uint32_t)(R8((uint32_t)(eax + edx + 0xffffffffu)));
/* 50d6b7: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 50d6b9: cmp ecx, 0x42 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x42u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50d6bc: mov dword ptr [ebp + 0xc], 0xffffffff */
  W32((uint32_t)(ebp + 0xcu), 0xffffffffu);
/* 50d6c3: jne 0x50d6e0 */
  if (!zf) goto L_50d6e0;
L_50d6c5: /* 50d6c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50d6c6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50d6c7: call 0x4e4160 */
  esp -= 4; W32(esp, 0x50d6ccu); SPILL(); f_4e4160(); if (g_unwind) return; RELOAD();
/* 50d6cc: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 50d6ce: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50d6d1: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 50d6d4: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 50d6d6: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* 50d6d9: mov edx, dword ptr [eax + ecx - 4] */
  edx = R32((uint32_t)(eax + ecx + 0xfffffffcu));
/* 50d6dd: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
L_50d6e0: /* 50d6e0: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 50d6e3: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 50d6e5: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 50d6e8: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 50d6ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50d6eb: mov ecx, ebx */
  ecx = ebx;
/* 50d6ed: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x50d6f0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50d6f0: cmp dword ptr [ebp + 0xc], 0x64 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50d6f4: jne 0x50dadf */
  if (!zf) goto L_50dadf;
L_50d6fa: /* 50d6fa: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 50d6fc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50d6fd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50d6fe: mov ecx, edi */
  ecx = edi;
/* 50d700: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x50d706u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50d706: jmp 0x50dadf */
  goto L_50dadf;
L_50d70b: /* 50d70b: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 50d70d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50d70e: mov ecx, ebx */
  ecx = ebx;
/* 50d710: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x50d713u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50d713: add dword ptr [esi], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esi), r);
  }
L_50d716: /* 50d716: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 50d718: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50d719: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50d71a: mov ecx, edi */
  ecx = edi;
/* 50d71c: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0x50d722u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50d722: cmp eax, 0x16 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x16u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50d725: jne 0x50d716 */
  if (!zf) goto L_50d716;
L_50d727: /* 50d727: mov eax, dword ptr [edi + 0x4c] */
  eax = R32((uint32_t)(edi + 0x4cu));
/* 50d72a: cmp dword ptr [esi], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50d72c: jge 0x50dadf */
  if ((sf == of)) goto L_50dadf;
L_50d732: /* 50d732: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 50d734: mov ecx, ebx */
  ecx = ebx;
/* 50d736: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x50d739u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50d739: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* 50d73c: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 50d73f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 50d741: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 50d743: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50d744: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50d745: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 50d748: call 0x4e40e8 */
  esp -= 4; W32(esp, 0x50d74du); SPILL(); f_4e40e8(); if (g_unwind) return; RELOAD();
/* 50d74d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 50d74f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50d752: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 50d753: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 50d755: mov edx, dword ptr [edi + 0x48] */
  edx = R32((uint32_t)(edi + 0x48u));
/* 50d758: movzx ecx, byte ptr [eax + edx - 1] */
  ecx = (uint32_t)(R8((uint32_t)(eax + edx + 0xffffffffu)));
/* 50d75d: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 50d75f: cmp ecx, 0x42 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x42u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50d762: mov dword ptr [ebp + 0xc], 0xffffffff */
  W32((uint32_t)(ebp + 0xcu), 0xffffffffu);
/* 50d769: jne 0x50d786 */
  if (!zf) goto L_50d786;
L_50d76b: /* 50d76b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50d76c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50d76d: call 0x4e4160 */
  esp -= 4; W32(esp, 0x50d772u); SPILL(); f_4e4160(); if (g_unwind) return; RELOAD();
/* 50d772: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 50d774: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50d777: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 50d77a: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 50d77c: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* 50d77f: mov edx, dword ptr [eax + ecx - 4] */
  edx = R32((uint32_t)(eax + ecx + 0xfffffffcu));
/* 50d783: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
L_50d786: /* 50d786: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 50d789: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 50d78b: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 50d78e: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 50d790: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50d791: mov ecx, ebx */
  ecx = ebx;
/* 50d793: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x50d796u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50d796: cmp dword ptr [ebp + 0xc], 0x64 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50d79a: jne 0x50dadf */
  if (!zf) goto L_50dadf;
L_50d7a0: /* 50d7a0: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 50d7a2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50d7a3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50d7a4: mov ecx, edi */
  ecx = edi;
/* 50d7a6: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x50d7acu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50d7ac: jmp 0x50dadf */
  goto L_50dadf;
L_50d7b1: /* 50d7b1: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 50d7b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50d7b4: mov ecx, ebx */
  ecx = ebx;
/* 50d7b6: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x50d7b9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50d7b9: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 50d7bb: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 50d7be: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 50d7c0: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* 50d7c3: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 50d7c5: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 50d7c7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50d7c8: mov ecx, ebx */
  ecx = ebx;
/* 50d7ca: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x50d7cdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50d7cd: add dword ptr [esi], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esi), r);
  }
/* 50d7d0: jmp 0x50dadf */
  goto L_50dadf;
L_50d7d5: /* 50d7d5: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 50d7d7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50d7d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50d7d9: mov ecx, edi */
  ecx = edi;
/* 50d7db: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0x50d7e1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50d7e1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 50d7e3: add ecx, dword ptr [edi + 0x48] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x48u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 50d7e6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50d7e7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50d7e8: call 0x4e4147 */
  esp -= 4; W32(esp, 0x50d7edu); SPILL(); f_4e4147(); if (g_unwind) return; RELOAD();
/* 50d7ed: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 50d7ef: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 50d7f2: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 50d7f4: mov eax, edx */
  eax = edx;
/* 50d7f6: mov edx, dword ptr [edi + 0x48] */
  edx = R32((uint32_t)(edi + 0x48u));
/* 50d7f9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50d7fc: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 50d7fe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50d7ff: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50d800: call 0x4e40e8 */
  esp -= 4; W32(esp, 0x50d805u); SPILL(); f_4e40e8(); if (g_unwind) return; RELOAD();
/* 50d805: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 50d807: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50d80a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 50d80b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50d80c: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 50d80e: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 50d810: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50d811: mov ecx, edi */
  ecx = edi;
/* 50d813: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0x50d819u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50d819: jmp 0x50dadf */
  goto L_50dadf;
L_50d81e: /* 50d81e: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 50d820: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50d821: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50d822: mov ecx, edi */
  ecx = edi;
/* 50d824: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x50d82au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_50d82a: /* 50d82a: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 50d82c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50d82d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50d82e: mov ecx, edi */
  ecx = edi;
/* 50d830: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0x50d836u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_50d836: /* 50d836: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 50d838: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50d839: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50d83a: mov ecx, edi */
  ecx = edi;
/* 50d83c: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x50d842u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50d842: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 50d844: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50d845: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50d846: mov ecx, edi */
  ecx = edi;
/* 50d848: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0x50d84eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50d84e: jmp 0x50dadf */
  goto L_50dadf;
L_50d853: /* 50d853: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50d854: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50d855: call 0x4e4160 */
  esp -= 4; W32(esp, 0x50d85au); SPILL(); f_4e4160(); if (g_unwind) return; RELOAD();
/* 50d85a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 50d85c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50d85f: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 50d862: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 50d864: jmp 0x50dadf */
  goto L_50dadf;
L_50d869: /* 50d869: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50d86a: jmp 0x50d93a */
  goto L_50d93a;
L_50d870: /* 50d870: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50d871: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50d872: call 0x4e40e8 */
  esp -= 4; W32(esp, 0x50d877u); SPILL(); f_4e40e8(); if (g_unwind) return; RELOAD();
/* 50d877: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 50d879: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50d87c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 50d87d: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 50d87f: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* 50d882: mov eax, edx */
  eax = edx;
/* 50d884: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 50d886: mov cl, byte ptr [eax - 1] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0xffffffffu))) & 0xffu);
/* 50d889: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 50d88b: jne 0x50d870 */
  if (!zf) goto L_50d870;
L_50d88d: /* 50d88d: jmp 0x50dadf */
  goto L_50dadf;
L_50d892: /* 50d892: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 50d894: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 50d896: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50d897: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50d898: call 0x4e4147 */
  esp -= 4; W32(esp, 0x50d89du); SPILL(); f_4e4147(); if (g_unwind) return; RELOAD();
/* 50d89d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 50d89f: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 50d8a2: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 50d8a4: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* 50d8a7: mov dl, byte ptr [eax + ecx - 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0xffffffffu))) & 0xffu);
/* 50d8ab: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50d8ae: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 50d8b0: jne 0x50d892 */
  if (!zf) goto L_50d892;
L_50d8b2: /* 50d8b2: jmp 0x50dadf */
  goto L_50dadf;
L_50d8b7: /* 50d8b7: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 50d8b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50d8ba: mov ecx, ebx */
  ecx = ebx;
/* 50d8bc: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x50d8bfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50d8bf: add dword ptr [esi], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esi), r);
  }
/* 50d8c2: jmp 0x50dadf */
  goto L_50dadf;
L_50d8c7: /* 50d8c7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50d8c8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50d8c9: call 0x4e4160 */
  esp -= 4; W32(esp, 0x50d8ceu); SPILL(); f_4e4160(); if (g_unwind) return; RELOAD();
/* 50d8ce: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 50d8d0: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 50d8d3: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 50d8d5: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* 50d8d8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50d8db: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 50d8dd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50d8de: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50d8df: call 0x4e4160 */
  esp -= 4; W32(esp, 0x50d8e4u); SPILL(); f_4e4160(); if (g_unwind) return; RELOAD();
/* 50d8e4: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 50d8e6: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 50d8e9: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 50d8eb: mov eax, edx */
  eax = edx;
/* 50d8ed: mov edx, dword ptr [edi + 0x48] */
  edx = R32((uint32_t)(edi + 0x48u));
/* 50d8f0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50d8f3: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 50d8f5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50d8f6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50d8f7: call 0x4e4160 */
  esp -= 4; W32(esp, 0x50d8fcu); SPILL(); f_4e4160(); if (g_unwind) return; RELOAD();
/* 50d8fc: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 50d8fe: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50d901: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 50d904: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 50d906: jmp 0x50dadf */
  goto L_50dadf;
L_50d90b: /* 50d90b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50d90c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50d90d: call 0x4e415b */
  esp -= 4; W32(esp, 0x50d912u); SPILL(); f_4e415b(); if (g_unwind) return; RELOAD();
/* 50d912: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 50d914: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 50d917: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 50d919: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* 50d91c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50d91f: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 50d921: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50d922: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50d923: call 0x4e415b */
  esp -= 4; W32(esp, 0x50d928u); SPILL(); f_4e415b(); if (g_unwind) return; RELOAD();
/* 50d928: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 50d92a: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 50d92d: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 50d92f: mov eax, edx */
  eax = edx;
/* 50d931: mov edx, dword ptr [edi + 0x48] */
  edx = R32((uint32_t)(edi + 0x48u));
/* 50d934: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50d937: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 50d939: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
L_50d93a: /* 50d93a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50d93b: call 0x4e415b */
  esp -= 4; W32(esp, 0x50d940u); SPILL(); f_4e415b(); if (g_unwind) return; RELOAD();
/* 50d940: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 50d942: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50d945: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 50d948: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 50d94a: jmp 0x50dadf */
  goto L_50dadf;
L_50d94f: /* 50d94f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50d950: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50d951: call 0x4e40e8 */
  esp -= 4; W32(esp, 0x50d956u); SPILL(); f_4e40e8(); if (g_unwind) return; RELOAD();
/* 50d956: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 50d958: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50d95b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 50d95c: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 50d95e: jmp 0x50dadf */
  goto L_50dadf;
L_50d963: /* 50d963: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 50d965: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50d966: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50d967: mov ecx, edi */
  ecx = edi;
/* 50d969: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0x50d96fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50d96f: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 50d971: add ecx, dword ptr [edi + 0x48] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x48u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 50d974: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
L_50d975: /* 50d975: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50d976: call 0x4e4147 */
  esp -= 4; W32(esp, 0x50d97bu); SPILL(); f_4e4147(); if (g_unwind) return; RELOAD();
/* 50d97b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 50d97d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50d980: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 50d983: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 50d985: jmp 0x50dadf */
  goto L_50dadf;
L_50d98a: /* 50d98a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50d98b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50d98c: call 0x4e40e8 */
  esp -= 4; W32(esp, 0x50d991u); SPILL(); f_4e40e8(); if (g_unwind) return; RELOAD();
/* 50d991: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 50d993: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50d996: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 50d997: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50d998: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 50d99a: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 50d99c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50d99d: mov ecx, edi */
  ecx = edi;
/* 50d99f: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x50d9a5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50d9a5: jmp 0x50dadf */
  goto L_50dadf;
L_50d9aa: /* 50d9aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50d9ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50d9ac: call 0x4e4147 */
  esp -= 4; W32(esp, 0x50d9b1u); SPILL(); f_4e4147(); if (g_unwind) return; RELOAD();
/* 50d9b1: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 50d9b3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50d9b6: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 50d9b9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50d9ba: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 50d9bc: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 50d9be: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50d9bf: mov ecx, edi */
  ecx = edi;
/* 50d9c1: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0x50d9c7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50d9c7: jmp 0x50dadf */
  goto L_50dadf;
L_50d9cc: /* 50d9cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50d9cd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50d9ce: call 0x4e4147 */
  esp -= 4; W32(esp, 0x50d9d3u); SPILL(); f_4e4147(); if (g_unwind) return; RELOAD();
/* 50d9d3: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 50d9d5: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 50d9d8: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 50d9da: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* 50d9dd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50d9e0: mov eax, edx */
  eax = edx;
/* 50d9e2: lea edx, [eax + ecx - 2] */
  edx = (uint32_t)(eax + ecx + 0xfffffffeu);
/* 50d9e6: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 50d9e8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50d9e9: lea eax, [ebp + 0xa] */
  eax = (uint32_t)(ebp + 0xau);
/* 50d9ec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50d9ed: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x50d9f2u); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 50d9f2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50d9f5: cmp word ptr [ebp + 0xa], 0xffff */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xau))); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 50d9fb: je 0x50dadf */
  if (zf) goto L_50dadf;
L_50da01: /* 50da01: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 50da03: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50da04: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50da05: mov ecx, edi */
  ecx = edi;
/* 50da07: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x50da0du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50da0d: jmp 0x50dadf */
  goto L_50dadf;
L_50da12: /* 50da12: test byte ptr [esi], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 50da15: je 0x50da30 */
  if (zf) goto L_50da30;
L_50da17: /* 50da17: push 0x5d0 */
  { uint32_t v = 0x5d0u; esp -= 4; W32(esp, v); }
/* 50da1c: push 0x5a5724 */
  { uint32_t v = 0x5a5724u; esp -= 4; W32(esp, v); }
/* 50da21: push 0x5a5730 */
  { uint32_t v = 0x5a5730u; esp -= 4; W32(esp, v); }
/* 50da26: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x50da2bu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 50da2b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50da2e: mov edi, edi */
  edi = edi;
L_50da30: /* 50da30: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 50da32: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* 50da35: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 50da37: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50da38: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50da39: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 50da3c: call 0x4e26d5 */
  esp -= 4; W32(esp, 0x50da41u); SPILL(); f_4e26d5(); if (g_unwind) return; RELOAD();
/* 50da41: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 50da43: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 50da46: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 50da49: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 50da4b: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 50da4d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50da50: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50da52: jne 0x50da30 */
  if (!zf) goto L_50da30;
L_50da54: /* 50da54: jmp 0x50dadf */
  goto L_50dadf;
L_50da59: /* 50da59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50da5a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50da5b: call 0x4e4147 */
  esp -= 4; W32(esp, 0x50da60u); SPILL(); f_4e4147(); if (g_unwind) return; RELOAD();
/* 50da60: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 50da62: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50da65: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 50da68: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50da69: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 50da6b: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 50da6d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50da6e: mov ecx, edi */
  ecx = edi;
/* 50da70: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x50da76u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50da76: jmp 0x50dadf */
  goto L_50dadf;
L_50da78: /* 50da78: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 50da7a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50da7b: mov ecx, ebx */
  ecx = ebx;
/* 50da7d: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x50da80u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50da80: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 50da82: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 50da85: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50da86: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 50da88: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 50da8a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50da8b: mov ecx, edi */
  ecx = edi;
/* 50da8d: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0x50da93u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50da93: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 50da95: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50da96: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50da97: mov ecx, edi */
  ecx = edi;
/* 50da99: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x50da9fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50da9f: jmp 0x50dadf */
  goto L_50dadf;
L_50daa1: /* 50daa1: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 50daa3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50daa4: mov ecx, ebx */
  ecx = ebx;
/* 50daa6: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x50daa9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50daa9: add dword ptr [esi], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esi), r);
  }
L_50daac: /* 50daac: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 50daae: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50daaf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50dab0: mov ecx, edi */
  ecx = edi;
/* 50dab2: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0x50dab8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50dab8: jmp 0x50dadf */
  goto L_50dadf;
L_50daba: /* 50daba: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 50dabc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50dabd: mov ecx, ebx */
  ecx = ebx;
/* 50dabf: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x50dac2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50dac2: add dword ptr [esi], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esi), r);
  }
/* 50dac5: jmp 0x50dadf */
  goto L_50dadf;
L_50dac7: /* 50dac7: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 50daca: mov ecx, dword ptr [0x5a0c94] */
  ecx = R32((uint32_t)(0x5a0c94u));
/* 50dad0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50dad1: push 0x5a5740 */
  { uint32_t v = 0x5a5740u; esp -= 4; W32(esp, v); }
/* 50dad6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50dad7: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x50dadcu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 50dadc: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50dadf: /* 50dadf: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 50dae2: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 50dae5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50dae6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50dae7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 50daee: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50daef: mov esp, ebp */
  esp = ebp;
/* 50daf1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50daf2: ret 8 */
  esp += 12; SPILL(); return;
}

void f_50daf5(void) {
  LOAD_REGS();
L_50daf5: /* 50daf5: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 50daf8: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 50dafd: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 50db00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50db01: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 50db04: call 0x554df6 */
  esp -= 4; W32(esp, 0x50db09u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_50db09(); return;
}

void f_50db09(void) {
  LOAD_REGS();
L_50db09: /* 50db09: push 0x56b968 */
  { uint32_t v = 0x56b968u; esp -= 4; W32(esp, v); }
  goto L_50db0e;
L_50db0b: /* 50db0b: mov ecx, 0x68680056 */
  ecx = 0x68680056u;
  goto L_50db10;
L_50db0e: /* 50db0e: push 0x5a5768 */
  { uint32_t v = 0x5a5768u; esp -= 4; W32(esp, v); }
  goto L_50db13;
L_50db10: /* 50db10: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50db11: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
/* 50db12: add al, ch */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(((ecx >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
  goto L_50db14;
L_50db13: /* 50db13: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x50db18u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
  goto L_50db18;
L_50db14: /* 50db14: xor dword ptr [ebp + edi*8 - 1], esp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + edi*8 + 0xffffffffu))); uint32_t b = (uint32_t)(esp);
  uint32_t r = (uint32_t)(a ^ b);
  W32((uint32_t)(ebp + edi*8 + 0xffffffffu), r);
  }
L_50db18: /* 50db18: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 50db1b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50db1c: push 0x5a5770 */
  { uint32_t v = 0x5a5770u; esp -= 4; W32(esp, v); }
/* 50db21: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x50db26u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 50db26: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50db29: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50db2b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50db2d: call 0x554df6 */
  esp -= 4; W32(esp, 0x50db32u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
/* 50db32: mov edi, edi */
  edi = edi;
/* 50db34: jmp 0x50db0b */
  goto L_50db0b;
}

void f_50de00(void) {
  LOAD_REGS();
L_50de00: /* 50de00: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 50de01: mov ebp, esp */
  ebp = esp;
/* 50de03: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 50de05: push 0x556eb0 */
  { uint32_t v = 0x556eb0u; esp -= 4; W32(esp, v); }
/* 50de0a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 50de10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50de11: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 50de18: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 50de1b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50de1c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50de1d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 50de20: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50de21: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 50de24: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50de25: mov edi, ecx */
  edi = ecx;
/* 50de27: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 50de2e: call 0x4e3224 */
  esp -= 4; W32(esp, 0x50de33u); SPILL(); f_4e3224(); if (g_unwind) return; RELOAD();
/* 50de33: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 50de36: cmp eax, 0x3f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50de39: jg 0x50de4b */
  if ((!zf && sf == of)) goto L_50de4b;
L_50de3b: /* 50de3b: lea eax, [edi + 0x8a] */
  eax = (uint32_t)(edi + 0x8au);
/* 50de41: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50de42: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50de43: call 0x4e4147 */
  esp -= 4; W32(esp, 0x50de48u); SPILL(); f_4e4147(); if (g_unwind) return; RELOAD();
/* 50de48: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50de4b: /* 50de4b: lea ecx, [edi + 0x84] */
  ecx = (uint32_t)(edi + 0x84u);
/* 50de51: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50de52: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50de53: call 0x4e4147 */
  esp -= 4; W32(esp, 0x50de58u); SPILL(); f_4e4147(); if (g_unwind) return; RELOAD();
/* 50de58: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 50de5b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50de5e: cmp eax, 0x3f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50de61: jg 0x50de73 */
  if ((!zf && sf == of)) goto L_50de73;
L_50de63: /* 50de63: lea edx, [edi + 0x89] */
  edx = (uint32_t)(edi + 0x89u);
/* 50de69: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50de6a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50de6b: call 0x4e40e8 */
  esp -= 4; W32(esp, 0x50de70u); SPILL(); f_4e40e8(); if (g_unwind) return; RELOAD();
/* 50de70: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50de73: /* 50de73: lea eax, [edi + 0x88] */
  eax = (uint32_t)(edi + 0x88u);
/* 50de79: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50de7a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50de7b: call 0x4e40e8 */
  esp -= 4; W32(esp, 0x50de80u); SPILL(); f_4e40e8(); if (g_unwind) return; RELOAD();
/* 50de80: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 50de83: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50de86: cmp eax, 0x3f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50de89: jg 0x50de9b */
  if ((!zf && sf == of)) goto L_50de9b;
L_50de8b: /* 50de8b: lea ecx, [edi + 0x8c] */
  ecx = (uint32_t)(edi + 0x8cu);
/* 50de91: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50de92: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50de93: call 0x4e4147 */
  esp -= 4; W32(esp, 0x50de98u); SPILL(); f_4e4147(); if (g_unwind) return; RELOAD();
/* 50de98: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50de9b: /* 50de9b: lea ebx, [edi + 0x80] */
  ebx = (uint32_t)(edi + 0x80u);
/* 50dea1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50dea2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50dea3: call 0x4e4165 */
  esp -= 4; W32(esp, 0x50dea8u); SPILL(); f_4e4165(); if (g_unwind) return; RELOAD();
/* 50dea8: mov al, byte ptr [ebx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx))) & 0xffu);
/* 50deaa: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50dead: test al, 0x40 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 50deaf: je 0x50dec1 */
  if (zf) goto L_50dec1;
L_50deb1: /* 50deb1: lea edx, [edi + 0x86] */
  edx = (uint32_t)(edi + 0x86u);
/* 50deb7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50deb8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50deb9: call 0x4e4147 */
  esp -= 4; W32(esp, 0x50debeu); SPILL(); f_4e4147(); if (g_unwind) return; RELOAD();
/* 50debe: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50dec1: /* 50dec1: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 50dec4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50dec6: je 0x50df95 */
  if (zf) goto L_50df95;
L_50decc: /* 50decc: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* 50decf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50ded1: mov byte ptr [edi + 0x89], 0 */
  W8((uint32_t)(edi + 0x89u), 0x0u);
/* 50ded8: mov word ptr [edi + 0x8a], 0 */
  W16((uint32_t)(edi + 0x8au), 0x0u);
/* 50dee1: mov word ptr [edi + 0x8c], 0xffff */
  W16((uint32_t)(edi + 0x8cu), 0xffffu);
/* 50deea: je 0x50df01 */
  if (zf) goto L_50df01;
L_50deec: /* 50deec: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* 50deef: nop  */
L_50def0: /* 50def0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50def2: je 0x50df01 */
  if (zf) goto L_50df01;
L_50def4: /* 50def4: cmp ecx, 0x6a7ad8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6a7ad8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50defa: je 0x50df03 */
  if (zf) goto L_50df03;
L_50defc: /* 50defc: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* 50deff: jmp 0x50def0 */
  goto L_50def0;
L_50df01: /* 50df01: xor eax, eax */
  eax = 0;
L_50df03: /* 50df03: mov bl, 0x80 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x80u) & 0xffu);
/* 50df05: mov edx, 0x400 */
  edx = 0x400u;
/* 50df0a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_50df10: /* 50df10: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50df12: je 0x50df95 */
  if (zf) goto L_50df95;
L_50df18: /* 50df18: test byte ptr [eax + 0x3c], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x3cu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 50df1b: je 0x50df95 */
  if (zf) goto L_50df95;
L_50df1d: /* 50df1d: inc byte ptr [edi + 0x89] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x89u)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(edi + 0x89u), r);
  }
/* 50df23: mov cx, word ptr [eax + 0x38] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x38u))) & 0xffffu);
/* 50df27: imul cx, word ptr [eax + 0x34] */
  { int32_t r = (int32_t)(int16_t)((ecx & 0xffffu)) * (int32_t)(int16_t)(R16((uint32_t)(eax + 0x34u)));
  ecx = (ecx & 0xffff0000u) | ((uint32_t)((uint32_t)r) & 0xffffu);
  }
/* 50df2c: add cx, word ptr [eax + 0x48] */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(eax + 0x48u)));
  uint16_t r = (uint16_t)(a + b);
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 50df30: mov word ptr [edi + 0x8a], cx */
  W16((uint32_t)(edi + 0x8au), (ecx & 0xffffu));
/* 50df37: test dword ptr [eax + 0x3c], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x3cu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50df3a: je 0x50df47 */
  if (zf) goto L_50df47;
L_50df3c: /* 50df3c: mov cx, word ptr [eax + 0x48] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x48u))) & 0xffffu);
/* 50df40: mov word ptr [edi + 0x8c], cx */
  W16((uint32_t)(edi + 0x8cu), (ecx & 0xffffu));
L_50df47: /* 50df47: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 50df4a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50df4c: je 0x50df62 */
  if (zf) goto L_50df62;
L_50df4e: /* 50df4e: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
L_50df51: /* 50df51: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50df53: je 0x50df62 */
  if (zf) goto L_50df62;
L_50df55: /* 50df55: cmp ecx, 0x6a7ad8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6a7ad8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50df5b: je 0x50df10 */
  if (zf) goto L_50df10;
L_50df5d: /* 50df5d: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* 50df60: jmp 0x50df51 */
  goto L_50df51;
L_50df62: /* 50df62: xor eax, eax */
  eax = 0;
/* 50df64: jmp 0x50df10 */
  goto L_50df10;
L_50df95: /* 50df95: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 50df98: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50df99: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50df9a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 50dfa1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50dfa2: mov esp, ebp */
  esp = ebp;
/* 50dfa4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50dfa5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_50df66(void) {
  LOAD_REGS();
L_50df66: /* 50df66: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 50df69: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 50df6e: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 50df71: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50df72: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 50df75: call 0x554df6 */
  esp -= 4; W32(esp, 0x50df7au); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_50df7a(); return;
}

void f_50df7a(void) {
  LOAD_REGS();
L_50df7a: /* 50df7a: push 0x56b98c */
  { uint32_t v = 0x56b98cu; esp -= 4; W32(esp, v); }
/* 50df7f: push 0x5a5788 */
  { uint32_t v = 0x5a5788u; esp -= 4; W32(esp, v); }
/* 50df84: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x50df89u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 50df89: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50df8c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50df8e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50df90: call 0x554df6 */
  esp -= 4; W32(esp, 0x50df95u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
/* 50df95: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 50df98: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50df99: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50df9a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 50dfa1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50dfa2: mov esp, ebp */
  esp = ebp;
/* 50dfa4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50dfa5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_50e020(void) {
  LOAD_REGS();
L_50e020: /* 50e020: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 50e021: mov ebp, esp */
  ebp = esp;
/* 50e023: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 50e025: push 0x556ec0 */
  { uint32_t v = 0x556ec0u; esp -= 4; W32(esp, v); }
/* 50e02a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 50e030: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50e031: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 50e038: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 50e03b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50e03c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50e03d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50e03e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 50e041: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 50e044: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50e045: mov esi, ecx */
  esi = ecx;
/* 50e047: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 50e04e: call 0x4e1de3 */
  esp -= 4; W32(esp, 0x50e053u); SPILL(); f_4e1de3(); if (g_unwind) return; RELOAD();
/* 50e053: add esi, 0x34 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 50e056: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50e057: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50e058: call 0x4e1451 */
  esp -= 4; W32(esp, 0x50e05du); SPILL(); f_4e1451(); if (g_unwind) return; RELOAD();
/* 50e05d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 50e060: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50e063: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50e064: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50e065: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 50e06c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50e06d: mov esp, ebp */
  esp = ebp;
/* 50e06f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50e070: ret 4 */
  esp += 8; SPILL(); return;
}

void f_50e073(void) {
  LOAD_REGS();
L_50e073: /* 50e073: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 50e076: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 50e07b: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 50e07e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50e07f: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 50e082: call 0x554df6 */
  esp -= 4; W32(esp, 0x50e087u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_50e087(); return;
}

void f_50e087(void) {
  LOAD_REGS();
L_50e087: /* 50e087: push 0x56b9c0 */
  { uint32_t v = 0x56b9c0u; esp -= 4; W32(esp, v); }
/* 50e08c: push 0x5a5834 */
  { uint32_t v = 0x5a5834u; esp -= 4; W32(esp, v); }
/* 50e091: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x50e096u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 50e096: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50e099: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50e09b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50e09d: call 0x554df6 */
  esp -= 4; W32(esp, 0x50e0a2u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_50e0a2: guest_badaddr(0x50e0a2); return;
}

void f_50e0e0(void) {
  LOAD_REGS();
L_50e0e0: /* 50e0e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 50e0e1: mov ebp, esp */
  ebp = esp;
/* 50e0e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 50e0e5: push 0x556ed0 */
  { uint32_t v = 0x556ed0u; esp -= 4; W32(esp, v); }
/* 50e0ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 50e0f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50e0f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 50e0f8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 50e0fb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50e0fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50e0fd: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 50e100: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 50e103: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 50e106: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50e107: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 50e10a: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 50e10c: lea ebx, [esi + 4] */
  ebx = (uint32_t)(esi + 0x4u);
/* 50e10f: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 50e112: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 50e115: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50e116: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 50e119: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50e11a: mov ecx, edi */
  ecx = edi;
/* 50e11c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 50e123: call dword ptr [eax + 0x14] */
  { uint32_t t = R32((uint32_t)(eax + 0x14u)); esp -= 4; W32(esp, 0x50e126u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50e126: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 50e129: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50e12b: je 0x50e19c */
  if (zf) goto L_50e19c;
L_50e12d: /* 50e12d: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 50e130: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50e131: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50e132: call 0x4e2f2c */
  esp -= 4; W32(esp, 0x50e137u); SPILL(); f_4e2f2c(); if (g_unwind) return; RELOAD();
/* 50e137: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 50e13a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50e13d: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 50e140: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 50e142: mov ecx, esi */
  ecx = esi;
/* 50e144: mov dword ptr [ebx], 0 */
  W32((uint32_t)(ebx), 0x0u);
/* 50e14a: call 0x4e4502 */
  esp -= 4; W32(esp, 0x50e14fu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 50e14f: mov dword ptr [ebp + 0xc], 0 */
  W32((uint32_t)(ebp + 0xcu), 0x0u);
L_50e156: /* 50e156: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 50e159: cmp edx, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50e15c: jge 0x50e1bd */
  if ((sf == of)) goto L_50e1bd;
L_50e15e: /* 50e15e: mov ebx, dword ptr [esi + 4] */
  ebx = R32((uint32_t)(esi + 0x4u));
/* 50e161: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 50e164: lea ecx, [ebx + 1] */
  ecx = (uint32_t)(ebx + 0x1u);
/* 50e167: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50e169: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 50e16c: jle 0x50e18a */
  if ((zf || sf != of)) goto L_50e18a;
L_50e16e: /* 50e16e: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 50e171: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 50e172: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 50e175: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 50e177: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 50e17a: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 50e17e: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 50e180: mov ecx, esi */
  ecx = esi;
/* 50e182: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 50e185: call 0x4e4502 */
  esp -= 4; W32(esp, 0x50e18au); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_50e18a: /* 50e18a: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 50e18c: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 50e18e: lea eax, [ecx + ebx*4] */
  eax = (uint32_t)(ecx + ebx*4);
/* 50e191: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50e192: mov ecx, edi */
  ecx = edi;
/* 50e194: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x50e197u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50e197: inc dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 50e19a: jmp 0x50e156 */
  goto L_50e156;
L_50e19c: /* 50e19c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50e19d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50e19e: call 0x4e2f2c */
  esp -= 4; W32(esp, 0x50e1a3u); SPILL(); f_4e2f2c(); if (g_unwind) return; RELOAD();
/* 50e1a3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50e1a6: xor ebx, ebx */
  ebx = 0;
L_50e1a8: /* 50e1a8: cmp ebx, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50e1ab: jge 0x50e1bd */
  if ((sf == of)) goto L_50e1bd;
L_50e1ad: /* 50e1ad: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 50e1af: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 50e1b1: lea edx, [ecx + ebx*4] */
  edx = (uint32_t)(ecx + ebx*4);
/* 50e1b4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50e1b5: mov ecx, edi */
  ecx = edi;
/* 50e1b7: call dword ptr [eax + 0x1c] */
  { uint32_t t = R32((uint32_t)(eax + 0x1cu)); esp -= 4; W32(esp, 0x50e1bau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50e1ba: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 50e1bb: jmp 0x50e1a8 */
  goto L_50e1a8;
L_50e1bd: /* 50e1bd: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 50e1c0: mov eax, edi */
  eax = edi;
/* 50e1c2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50e1c3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50e1c4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 50e1cb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50e1cc: mov esp, ebp */
  esp = ebp;
/* 50e1ce: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50e1cf: ret  */
  esp += 4; SPILL(); return;
}

void f_50e1d0(void) {
  LOAD_REGS();
L_50e1d0: /* 50e1d0: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 50e1d3: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 50e1d8: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 50e1db: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50e1dc: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 50e1df: call 0x554df6 */
  esp -= 4; W32(esp, 0x50e1e4u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_50e1e4(); return;
}

void f_50e1e4(void) {
  LOAD_REGS();
L_50e1e4: /* 50e1e4: push 0x56b9ec */
  { uint32_t v = 0x56b9ecu; esp -= 4; W32(esp, v); }
/* 50e1e9: push 0x5a376c */
  { uint32_t v = 0x5a376cu; esp -= 4; W32(esp, v); }
/* 50e1ee: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x50e1f3u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 50e1f3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50e1f6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50e1f8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50e1fa: call 0x554df6 */
  esp -= 4; W32(esp, 0x50e1ffu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_50e1ff: guest_badaddr(0x50e1ff); return;
}

void f_50e250(void) {
  LOAD_REGS();
L_50e250: /* 50e250: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50e251: mov esi, ecx */
  esi = ecx;
/* 50e253: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 50e256: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50e257: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 50e25a: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 50e25d: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50e25f: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 50e262: jle 0x50e280 */
  if ((zf || sf != of)) goto L_50e280;
L_50e264: /* 50e264: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 50e267: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 50e268: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 50e26b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 50e26d: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 50e270: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 50e274: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 50e276: mov ecx, esi */
  ecx = esi;
/* 50e278: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 50e27b: call 0x4e4502 */
  esp -= 4; W32(esp, 0x50e280u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_50e280: /* 50e280: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 50e284: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 50e286: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 50e288: mov dword ptr [ecx + edi*4], eax */
  W32((uint32_t)(ecx + edi*4), eax);
/* 50e28b: mov eax, edi */
  eax = edi;
/* 50e28d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50e28e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50e28f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_50e2c0(void) {
  LOAD_REGS();
L_50e2c0: /* 50e2c0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 50e2c4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50e2c5: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 50e2c7: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50e2c9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50e2ca: je 0x50e2d1 */
  if (zf) goto L_50e2d1;
L_50e2cc: /* 50e2cc: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 50e2cf: jmp 0x50e2d3 */
  goto L_50e2d3;
L_50e2d1: /* 50e2d1: xor eax, eax */
  eax = 0;
L_50e2d3: /* 50e2d3: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 50e2d6: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 50e2d7: and edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 50e2d9: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 50e2dc: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 50e2df: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50e2e2: je 0x50e2fb */
  if (zf) goto L_50e2fb;
L_50e2e4: /* 50e2e4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
L_50e2e6: /* 50e2e6: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 50e2e9: mov edi, dword ptr [edx + ecx*4 + 4] */
  edi = R32((uint32_t)(edx + ecx*4 + 0x4u));
/* 50e2ed: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50e2ef: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 50e2f2: je 0x50e302 */
  if (zf) goto L_50e302;
L_50e2f4: /* 50e2f4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 50e2f6: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50e2f9: jne 0x50e2e6 */
  if (!zf) goto L_50e2e6;
L_50e2fb: /* 50e2fb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50e2fc: xor eax, eax */
  eax = 0;
/* 50e2fe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50e2ff: ret 4 */
  esp += 8; SPILL(); return;
L_50e302: /* 50e302: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 50e305: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50e306: lea eax, [edx + eax*4 + 8] */
  eax = (uint32_t)(edx + eax*4 + 0x8u);
/* 50e30a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50e30b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_50e330(void) {
  LOAD_REGS();
L_50e330: /* 50e330: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50e331: mov esi, ecx */
  esi = ecx;
/* 50e333: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 50e336: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 50e33c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 50e33e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50e33f: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 50e342: push 0x5a3b74 */
  { uint32_t v = 0x5a3b74u; esp -= 4; W32(esp, v); }
/* 50e347: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50e348: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x50e34au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50e34a: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 50e34d: mov edi, eax */
  edi = eax;
/* 50e34f: xor eax, eax */
  eax = 0;
/* 50e351: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 50e353: jle 0x50e364 */
  if ((zf || sf != of)) goto L_50e364;
L_50e355: /* 50e355: mov dword ptr [edi + eax*4], 0xffffffff */
  W32((uint32_t)(edi + eax*4), 0xffffffffu);
/* 50e35c: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 50e35f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 50e360: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50e362: jl 0x50e355 */
  if ((sf != of)) goto L_50e355;
L_50e364: /* 50e364: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 50e367: xor edx, edx */
  edx = 0;
/* 50e369: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 50e36b: jle 0x50e39f */
  if ((zf || sf != of)) goto L_50e39f;
L_50e36d: /* 50e36d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50e36e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 50e36f: xor ebp, ebp */
  ebp = 0;
L_50e371: /* 50e371: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 50e373: mov eax, dword ptr [ecx + ebp + 4] */
  eax = R32((uint32_t)(ecx + ebp + 0x4u));
/* 50e377: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 50e379: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50e37b: je 0x50e382 */
  if (zf) goto L_50e382;
L_50e37d: /* 50e37d: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 50e380: jmp 0x50e384 */
  goto L_50e384;
L_50e382: /* 50e382: xor ebx, ebx */
  ebx = 0;
L_50e384: /* 50e384: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 50e387: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 50e388: and eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 50e38a: mov ebx, dword ptr [edi + eax*4] */
  ebx = R32((uint32_t)(edi + eax*4));
/* 50e38d: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 50e38f: mov dword ptr [edi + eax*4], edx */
  W32((uint32_t)(edi + eax*4), edx);
/* 50e392: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 50e395: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 50e396: add ebp, 0xc */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 50e399: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50e39b: jl 0x50e371 */
  if ((sf != of)) goto L_50e371;
L_50e39d: /* 50e39d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50e39e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_50e39f: /* 50e39f: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 50e3a2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50e3a4: je 0x50e3b2 */
  if (zf) goto L_50e3b2;
L_50e3a6: /* 50e3a6: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 50e3ac: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 50e3ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50e3af: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x50e3b2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_50e3b2: /* 50e3b2: mov dword ptr [esi + 0xc], edi */
  W32((uint32_t)(esi + 0xcu), edi);
/* 50e3b5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50e3b6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50e3b7: ret  */
  esp += 4; SPILL(); return;
}

void f_50e3f0(void) {
  LOAD_REGS();
L_50e3f0: /* 50e3f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50e3f1: mov esi, ecx */
  esi = ecx;
/* 50e3f3: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 50e3f6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50e3f7: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 50e3fa: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 50e3fd: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50e3ff: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 50e402: jle 0x50e420 */
  if ((zf || sf != of)) goto L_50e420;
L_50e404: /* 50e404: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 50e407: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 50e408: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 50e40b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 50e40d: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 50e410: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 50e414: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 50e416: mov ecx, esi */
  ecx = esi;
/* 50e418: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 50e41b: call 0x4e4502 */
  esp -= 4; W32(esp, 0x50e420u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_50e420: /* 50e420: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 50e422: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 50e425: lea edi, [edx + ecx*4] */
  edi = (uint32_t)(edx + ecx*4);
/* 50e428: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50e42a: je 0x50e440 */
  if (zf) goto L_50e440;
L_50e42c: /* 50e42c: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 50e430: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 50e432: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 50e436: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 50e439: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 50e43b: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 50e43e: jmp 0x50e442 */
  goto L_50e442;
L_50e440: /* 50e440: xor edi, edi */
  edi = 0;
L_50e442: /* 50e442: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 50e445: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50e447: je 0x50e44e */
  if (zf) goto L_50e44e;
L_50e449: /* 50e449: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 50e44c: jmp 0x50e450 */
  goto L_50e450;
L_50e44e: /* 50e44e: xor ecx, ecx */
  ecx = 0;
L_50e450: /* 50e450: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 50e453: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 50e454: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 50e456: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 50e459: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 50e45c: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 50e45e: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 50e461: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 50e464: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 50e465: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
/* 50e468: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 50e46b: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 50e46e: lea ecx, [eax + eax + 8] */
  ecx = (uint32_t)(eax + eax + 0x8u);
/* 50e472: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50e474: jge 0x50e483 */
  if ((sf == of)) goto L_50e483;
L_50e476: /* 50e476: lea edx, [eax + eax] */
  edx = (uint32_t)(eax + eax);
/* 50e479: mov ecx, esi */
  ecx = esi;
/* 50e47b: mov dword ptr [esi + 0x10], edx */
  W32((uint32_t)(esi + 0x10u), edx);
/* 50e47e: call 0x4e29af */
  esp -= 4; W32(esp, 0x50e483u); SPILL(); f_4e29af(); if (g_unwind) return; RELOAD();
L_50e483: /* 50e483: lea eax, [edi + 8] */
  eax = (uint32_t)(edi + 0x8u);
/* 50e486: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50e487: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50e488: ret 8 */
  esp += 12; SPILL(); return;
}

void f_50e4c0(void) {
  LOAD_REGS();
L_50e4c0: /* 50e4c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50e4c1: mov esi, ecx */
  esi = ecx;
/* 50e4c3: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50e4c6: je 0x50e510 */
  if (zf) goto L_50e510;
L_50e4c8: /* 50e4c8: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 50e4cb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50e4cd: je 0x50e4f8 */
  if (zf) goto L_50e4f8;
L_50e4cf: /* 50e4cf: nop  */
L_50e4d0: /* 50e4d0: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 50e4d3: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* 50e4d6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50e4d8: je 0x50e4ee */
  if (zf) goto L_50e4ee;
L_50e4da: /* 50e4da: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_50e4e0: /* 50e4e0: cmp eax, 0x5f0848 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5f0848u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50e4e5: je 0x50e510 */
  if (zf) goto L_50e510;
L_50e4e7: /* 50e4e7: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 50e4ea: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50e4ec: jne 0x50e4e0 */
  if (!zf) goto L_50e4e0;
L_50e4ee: /* 50e4ee: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* 50e4f1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50e4f3: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 50e4f6: jne 0x50e4d0 */
  if (!zf) goto L_50e4d0;
L_50e4f8: /* 50e4f8: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 50e4fa: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 50e4fc: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0x50e4ffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50e4ff: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50e501: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 50e503: je 0x50e50b */
  if (zf) goto L_50e50b;
L_50e505: /* 50e505: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* 50e508: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
L_50e50b: /* 50e50b: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50e50e: jne 0x50e4c8 */
  if (!zf) goto L_50e4c8;
L_50e510: /* 50e510: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50e511: ret  */
  esp += 4; SPILL(); return;
}

void f_50e540(void) {
  LOAD_REGS();
L_50e540: /* 50e540: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50e541: mov esi, ecx */
  esi = ecx;
/* 50e543: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50e546: je 0x50e590 */
  if (zf) goto L_50e590;
L_50e548: /* 50e548: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 50e54b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50e54d: je 0x50e578 */
  if (zf) goto L_50e578;
L_50e54f: /* 50e54f: nop  */
L_50e550: /* 50e550: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 50e553: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* 50e556: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50e558: je 0x50e56e */
  if (zf) goto L_50e56e;
L_50e55a: /* 50e55a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_50e560: /* 50e560: cmp eax, 0x5ef8b8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5ef8b8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50e565: je 0x50e590 */
  if (zf) goto L_50e590;
L_50e567: /* 50e567: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 50e56a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50e56c: jne 0x50e560 */
  if (!zf) goto L_50e560;
L_50e56e: /* 50e56e: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* 50e571: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50e573: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 50e576: jne 0x50e550 */
  if (!zf) goto L_50e550;
L_50e578: /* 50e578: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 50e57a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 50e57c: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0x50e57fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50e57f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50e581: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 50e583: je 0x50e58b */
  if (zf) goto L_50e58b;
L_50e585: /* 50e585: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* 50e588: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
L_50e58b: /* 50e58b: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50e58e: jne 0x50e548 */
  if (!zf) goto L_50e548;
L_50e590: /* 50e590: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50e591: ret  */
  esp += 4; SPILL(); return;
}

void f_50e5c0(void) {
  LOAD_REGS();
L_50e5c0: /* 50e5c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50e5c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50e5c2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50e5c3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 50e5c7: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 50e5c9: mov esi, ecx */
  esi = ecx;
/* 50e5cb: jge 0x50e5e4 */
  if ((sf == of)) goto L_50e5e4;
L_50e5cd: /* 50e5cd: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 50e5d2: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 50e5d7: push 0x5a3844 */
  { uint32_t v = 0x5a3844u; esp -= 4; W32(esp, v); }
/* 50e5dc: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x50e5e1u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 50e5e1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50e5e4: /* 50e5e4: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50e5e7: jle 0x50e600 */
  if ((zf || sf != of)) goto L_50e600;
L_50e5e9: /* 50e5e9: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 50e5ee: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 50e5f3: push 0x5a3830 */
  { uint32_t v = 0x5a3830u; esp -= 4; W32(esp, v); }
/* 50e5f8: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x50e5fdu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 50e5fd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50e600: /* 50e600: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 50e604: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 50e607: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 50e60a: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50e60c: jle 0x50e625 */
  if ((zf || sf != of)) goto L_50e625;
L_50e60e: /* 50e60e: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 50e613: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 50e618: push 0x5a3814 */
  { uint32_t v = 0x5a3814u; esp -= 4; W32(esp, v); }
/* 50e61d: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x50e622u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 50e622: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50e625: /* 50e625: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 50e627: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50e628: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50e629: mov ecx, esi */
  ecx = esi;
/* 50e62b: call 0x4e438b */
  esp -= 4; W32(esp, 0x50e630u); SPILL(); f_4e438b(); if (g_unwind) return; RELOAD();
/* 50e630: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50e631: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50e632: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50e633: ret 8 */
  esp += 12; SPILL(); return;
}

void f_50e660(void) {
  LOAD_REGS();
L_50e660: /* 50e660: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50e661: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 50e665: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50e667: je 0x50e689 */
  if (zf) goto L_50e689;
L_50e669: /* 50e669: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 50e66c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50e66e: je 0x50e67e */
  if (zf) goto L_50e67e;
L_50e670: /* 50e670: cmp eax, 0x6a5680 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6a5680u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50e675: je 0x50e6b6 */
  if (zf) goto L_50e6b6;
L_50e677: /* 50e677: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 50e67a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50e67c: jne 0x50e670 */
  if (!zf) goto L_50e670;
L_50e67e: /* 50e67e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50e680: mov ecx, esi */
  ecx = esi;
/* 50e682: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x50e687u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 50e687: jmp 0x50e68e */
  goto L_50e68e;
L_50e689: /* 50e689: mov eax, 0x5a584c */
  eax = 0x5a584cu;
L_50e68e: /* 50e68e: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 50e694: mov ecx, dword ptr [0x6a56a0] */
  ecx = R32((uint32_t)(0x6a56a0u));
/* 50e69a: mov ecx, dword ptr [edx + ecx*4] */
  ecx = R32((uint32_t)(edx + ecx*4));
/* 50e69d: mov edx, dword ptr [0x5a0c94] */
  edx = R32((uint32_t)(0x5a0c94u));
/* 50e6a3: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 50e6a6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50e6a7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50e6a8: push 0x5a5858 */
  { uint32_t v = 0x5a5858u; esp -= 4; W32(esp, v); }
/* 50e6ad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50e6ae: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x50e6b3u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 50e6b3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50e6b6: /* 50e6b6: mov eax, esi */
  eax = esi;
/* 50e6b8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50e6b9: ret  */
  esp += 4; SPILL(); return;
}

void f_50e6e0(void) {
  LOAD_REGS();
L_50e6e0: /* 50e6e0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 50e6e4: sub esp, 0x104 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x104u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 50e6ea: cmp ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50e6ed: jl 0x50e86d */
  if ((sf != of)) goto L_50e86d;
L_50e6f3: /* 50e6f3: mov eax, dword ptr [esp + 0x108] */
  eax = R32((uint32_t)(esp + 0x108u));
/* 50e6fa: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50e6fb: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 50e6fc: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 50e700: lea eax, [eax + ecx*4 - 4] */
  eax = (uint32_t)(eax + ecx*4 + 0xfffffffcu);
/* 50e704: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50e705: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50e706: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 50e70a: mov ecx, 0x3e */
  ecx = 0x3eu;
/* 50e70f: xor eax, eax */
  eax = 0;
/* 50e711: lea edi, [esp + 0x1c] */
  edi = (uint32_t)(esp + 0x1cu);
/* 50e715: lea esi, [esp + 0x14] */
  esi = (uint32_t)(esp + 0x14u);
/* 50e719: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 50e71b: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 50e71f: nop  */
L_50e720: /* 50e720: mov ebx, dword ptr [esi + 4] */
  ebx = R32((uint32_t)(esi + 0x4u));
/* 50e723: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 50e725: mov eax, ebx */
  eax = ebx;
/* 50e727: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 50e729: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 50e72c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 50e72d: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50e730: jle 0x50e80c */
  if ((zf || sf != of)) goto L_50e80c;
L_50e736: /* 50e736: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 50e738: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 50e739: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 50e73b: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 50e73d: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 50e740: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 50e743: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 50e745: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 50e747: mov edi, ecx */
  edi = ecx;
/* 50e749: lea edx, [ebx + 4] */
  edx = (uint32_t)(ebx + 0x4u);
/* 50e74c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_50e750: /* 50e750: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 50e753: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 50e755: ja 0x50e773 */
  if ((!cf && !zf)) goto L_50e773;
L_50e757: /* 50e757: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 50e759: mov ebp, dword ptr [eax + 0x10] */
  ebp = R32((uint32_t)(eax + 0x10u));
/* 50e75c: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50e75e: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 50e760: je 0x50e750 */
  if (zf) goto L_50e750;
L_50e762: /* 50e762: mov ebp, dword ptr [esi + 0x10] */
  ebp = R32((uint32_t)(esi + 0x10u));
/* 50e765: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50e767: je 0x50e750 */
  if (zf) goto L_50e750;
L_50e769: /* 50e769: mov eax, dword ptr [eax + 0x14] */
  eax = R32((uint32_t)(eax + 0x14u));
/* 50e76c: sub eax, dword ptr [esi + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 50e76f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 50e771: jle 0x50e750 */
  if ((zf || sf != of)) goto L_50e750;
L_50e773: /* 50e773: sub edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 50e776: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 50e778: jbe 0x50e796 */
  if ((cf | zf)) goto L_50e796;
L_50e77a: /* 50e77a: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 50e77c: mov ebp, dword ptr [eax + 0x10] */
  ebp = R32((uint32_t)(eax + 0x10u));
/* 50e77f: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50e781: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 50e783: je 0x50e773 */
  if (zf) goto L_50e773;
L_50e785: /* 50e785: mov ebp, dword ptr [esi + 0x10] */
  ebp = R32((uint32_t)(esi + 0x10u));
/* 50e788: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50e78a: je 0x50e773 */
  if (zf) goto L_50e773;
L_50e78c: /* 50e78c: mov eax, dword ptr [eax + 0x14] */
  eax = R32((uint32_t)(eax + 0x14u));
/* 50e78f: sub eax, dword ptr [esi + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 50e792: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 50e794: jge 0x50e773 */
  if ((sf == of)) goto L_50e773;
L_50e796: /* 50e796: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 50e798: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 50e79a: ja 0x50e7a4 */
  if ((!cf && !zf)) goto L_50e7a4;
L_50e79c: /* 50e79c: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 50e79e: mov dword ptr [edi], esi */
  W32((uint32_t)(edi), esi);
/* 50e7a0: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 50e7a2: jmp 0x50e750 */
  goto L_50e750;
L_50e7a4: /* 50e7a4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 50e7a6: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 50e7a8: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 50e7aa: mov eax, edx */
  eax = edx;
/* 50e7ac: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 50e7ae: mov esi, ebx */
  esi = ebx;
/* 50e7b0: sub esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 50e7b2: sub eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 50e7b5: and esi, 0xfffffffc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 50e7b8: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 50e7bb: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50e7bd: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 50e7c1: jl 0x50e7e1 */
  if ((sf != of)) goto L_50e7e1;
L_50e7c3: /* 50e7c3: lea eax, [ecx + 4] */
  eax = (uint32_t)(ecx + 0x4u);
/* 50e7c6: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 50e7c8: jae 0x50e7d9 */
  if (!cf) goto L_50e7d9;
L_50e7ca: /* 50e7ca: add edx, -4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 50e7cd: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 50e7cf: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 50e7d2: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 50e7d5: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
L_50e7d9: /* 50e7d9: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 50e7db: jbe 0x50e856 */
  if ((cf | zf)) goto L_50e856;
L_50e7dd: /* 50e7dd: mov ecx, edi */
  ecx = edi;
/* 50e7df: jmp 0x50e7fb */
  goto L_50e7fb;
L_50e7e1: /* 50e7e1: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 50e7e3: jbe 0x50e7f1 */
  if ((cf | zf)) goto L_50e7f1;
L_50e7e5: /* 50e7e5: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 50e7e7: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 50e7ea: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 50e7ed: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
L_50e7f1: /* 50e7f1: lea eax, [ecx + 4] */
  eax = (uint32_t)(ecx + 0x4u);
/* 50e7f4: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 50e7f6: jae 0x50e856 */
  if (!cf) goto L_50e856;
L_50e7f8: /* 50e7f8: lea ebx, [edx - 4] */
  ebx = (uint32_t)(edx + 0xfffffffcu);
L_50e7fb: /* 50e7fb: mov eax, ebx */
  eax = ebx;
/* 50e7fd: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 50e7ff: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 50e802: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 50e803: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50e806: jg 0x50e736 */
  if ((!zf && sf == of)) goto L_50e736;
L_50e80c: /* 50e80c: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 50e80e: jbe 0x50e856 */
  if ((cf | zf)) goto L_50e856;
L_50e810: /* 50e810: lea ebp, [ecx + 4] */
  ebp = (uint32_t)(ecx + 0x4u);
L_50e813: /* 50e813: mov edx, ebp */
  edx = ebp;
/* 50e815: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 50e817: mov edi, ecx */
  edi = ecx;
/* 50e819: ja 0x50e843 */
  if ((!cf && !zf)) goto L_50e843;
L_50e81b: /* 50e81b: jmp 0x50e820 */
  goto L_50e820;
L_50e820: /* 50e820: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 50e822: cmp dword ptr [eax + 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x10u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50e826: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 50e828: je 0x50e83c */
  if (zf) goto L_50e83c;
L_50e82a: /* 50e82a: cmp dword ptr [esi + 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x10u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50e82e: je 0x50e83c */
  if (zf) goto L_50e83c;
L_50e830: /* 50e830: mov eax, dword ptr [eax + 0x14] */
  eax = R32((uint32_t)(eax + 0x14u));
/* 50e833: sub eax, dword ptr [esi + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 50e836: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 50e838: jle 0x50e83c */
  if ((zf || sf != of)) goto L_50e83c;
L_50e83a: /* 50e83a: mov edi, edx */
  edi = edx;
L_50e83c: /* 50e83c: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 50e83f: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 50e841: jbe 0x50e820 */
  if ((cf | zf)) goto L_50e820;
L_50e843: /* 50e843: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 50e845: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 50e847: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 50e849: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 50e84b: sub ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 50e84e: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 50e850: ja 0x50e813 */
  if ((!cf && !zf)) goto L_50e813;
L_50e852: /* 50e852: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
L_50e856: /* 50e856: sub esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 50e859: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 50e85d: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 50e85f: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 50e863: jae 0x50e720 */
  if (!cf) goto L_50e720;
L_50e869: /* 50e869: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50e86a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50e86b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50e86c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_50e86d: /* 50e86d: add esp, 0x104 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x104u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50e873: ret  */
  esp += 4; SPILL(); return;
}

void f_50e81d(void) {
  LOAD_REGS();
  goto L_50e81d;
L_50e720: /* 50e720: mov ebx, dword ptr [esi + 4] */
  ebx = R32((uint32_t)(esi + 0x4u));
/* 50e723: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 50e725: mov eax, ebx */
  eax = ebx;
/* 50e727: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 50e729: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 50e72c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 50e72d: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50e730: jle 0x50e80c */
  if ((zf || sf != of)) goto L_50e80c;
L_50e736: /* 50e736: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 50e738: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 50e739: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 50e73b: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 50e73d: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 50e740: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 50e743: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 50e745: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 50e747: mov edi, ecx */
  edi = ecx;
/* 50e749: lea edx, [ebx + 4] */
  edx = (uint32_t)(ebx + 0x4u);
/* 50e74c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_50e750: /* 50e750: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 50e753: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 50e755: ja 0x50e773 */
  if ((!cf && !zf)) goto L_50e773;
L_50e757: /* 50e757: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 50e759: mov ebp, dword ptr [eax + 0x10] */
  ebp = R32((uint32_t)(eax + 0x10u));
/* 50e75c: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50e75e: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 50e760: je 0x50e750 */
  if (zf) goto L_50e750;
L_50e762: /* 50e762: mov ebp, dword ptr [esi + 0x10] */
  ebp = R32((uint32_t)(esi + 0x10u));
/* 50e765: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50e767: je 0x50e750 */
  if (zf) goto L_50e750;
L_50e769: /* 50e769: mov eax, dword ptr [eax + 0x14] */
  eax = R32((uint32_t)(eax + 0x14u));
/* 50e76c: sub eax, dword ptr [esi + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 50e76f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 50e771: jle 0x50e750 */
  if ((zf || sf != of)) goto L_50e750;
L_50e773: /* 50e773: sub edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 50e776: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 50e778: jbe 0x50e796 */
  if ((cf | zf)) goto L_50e796;
L_50e77a: /* 50e77a: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 50e77c: mov ebp, dword ptr [eax + 0x10] */
  ebp = R32((uint32_t)(eax + 0x10u));
/* 50e77f: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50e781: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 50e783: je 0x50e773 */
  if (zf) goto L_50e773;
L_50e785: /* 50e785: mov ebp, dword ptr [esi + 0x10] */
  ebp = R32((uint32_t)(esi + 0x10u));
/* 50e788: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50e78a: je 0x50e773 */
  if (zf) goto L_50e773;
L_50e78c: /* 50e78c: mov eax, dword ptr [eax + 0x14] */
  eax = R32((uint32_t)(eax + 0x14u));
/* 50e78f: sub eax, dword ptr [esi + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 50e792: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 50e794: jge 0x50e773 */
  if ((sf == of)) goto L_50e773;
L_50e796: /* 50e796: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 50e798: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 50e79a: ja 0x50e7a4 */
  if ((!cf && !zf)) goto L_50e7a4;
L_50e79c: /* 50e79c: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 50e79e: mov dword ptr [edi], esi */
  W32((uint32_t)(edi), esi);
/* 50e7a0: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 50e7a2: jmp 0x50e750 */
  goto L_50e750;
L_50e7a4: /* 50e7a4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 50e7a6: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 50e7a8: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 50e7aa: mov eax, edx */
  eax = edx;
/* 50e7ac: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 50e7ae: mov esi, ebx */
  esi = ebx;
/* 50e7b0: sub esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 50e7b2: sub eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 50e7b5: and esi, 0xfffffffc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 50e7b8: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 50e7bb: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50e7bd: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 50e7c1: jl 0x50e7e1 */
  if ((sf != of)) goto L_50e7e1;
L_50e7c3: /* 50e7c3: lea eax, [ecx + 4] */
  eax = (uint32_t)(ecx + 0x4u);
/* 50e7c6: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 50e7c8: jae 0x50e7d9 */
  if (!cf) goto L_50e7d9;
L_50e7ca: /* 50e7ca: add edx, -4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 50e7cd: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 50e7cf: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 50e7d2: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 50e7d5: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
L_50e7d9: /* 50e7d9: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 50e7db: jbe 0x50e856 */
  if ((cf | zf)) goto L_50e856;
L_50e7dd: /* 50e7dd: mov ecx, edi */
  ecx = edi;
/* 50e7df: jmp 0x50e7fb */
  goto L_50e7fb;
L_50e7e1: /* 50e7e1: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 50e7e3: jbe 0x50e7f1 */
  if ((cf | zf)) goto L_50e7f1;
L_50e7e5: /* 50e7e5: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 50e7e7: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 50e7ea: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 50e7ed: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
L_50e7f1: /* 50e7f1: lea eax, [ecx + 4] */
  eax = (uint32_t)(ecx + 0x4u);
/* 50e7f4: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 50e7f6: jae 0x50e856 */
  if (!cf) goto L_50e856;
L_50e7f8: /* 50e7f8: lea ebx, [edx - 4] */
  ebx = (uint32_t)(edx + 0xfffffffcu);
L_50e7fb: /* 50e7fb: mov eax, ebx */
  eax = ebx;
/* 50e7fd: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 50e7ff: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 50e802: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 50e803: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50e806: jg 0x50e736 */
  if ((!zf && sf == of)) goto L_50e736;
L_50e80c: /* 50e80c: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 50e80e: jbe 0x50e856 */
  if ((cf | zf)) goto L_50e856;
L_50e810: /* 50e810: lea ebp, [ecx + 4] */
  ebp = (uint32_t)(ecx + 0x4u);
L_50e813: /* 50e813: mov edx, ebp */
  edx = ebp;
/* 50e815: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 50e817: mov edi, ecx */
  edi = ecx;
/* 50e819: ja 0x50e843 */
  if ((!cf && !zf)) goto L_50e843;
L_50e81b: /* 50e81b: jmp 0x50e820 */
  goto L_50e820;
L_50e81d: /* 50e81d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_50e820: /* 50e820: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 50e822: cmp dword ptr [eax + 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x10u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50e826: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 50e828: je 0x50e83c */
  if (zf) goto L_50e83c;
L_50e82a: /* 50e82a: cmp dword ptr [esi + 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x10u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50e82e: je 0x50e83c */
  if (zf) goto L_50e83c;
L_50e830: /* 50e830: mov eax, dword ptr [eax + 0x14] */
  eax = R32((uint32_t)(eax + 0x14u));
/* 50e833: sub eax, dword ptr [esi + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 50e836: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 50e838: jle 0x50e83c */
  if ((zf || sf != of)) goto L_50e83c;
L_50e83a: /* 50e83a: mov edi, edx */
  edi = edx;
L_50e83c: /* 50e83c: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 50e83f: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 50e841: jbe 0x50e820 */
  if ((cf | zf)) goto L_50e820;
L_50e843: /* 50e843: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 50e845: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 50e847: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 50e849: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 50e84b: sub ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 50e84e: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 50e850: ja 0x50e813 */
  if ((!cf && !zf)) goto L_50e813;
L_50e852: /* 50e852: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
L_50e856: /* 50e856: sub esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 50e859: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 50e85d: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 50e85f: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 50e863: jae 0x50e720 */
  if (!cf) goto L_50e720;
L_50e869: /* 50e869: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50e86a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50e86b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50e86c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50e86d: add esp, 0x104 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x104u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50e873: ret  */
  esp += 4; SPILL(); return;
}

void f_50e8f0(void) {
  LOAD_REGS();
L_50e8f0: /* 50e8f0: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 50e8f6: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 50e8f8: push 0x556ee8 */
  { uint32_t v = 0x556ee8u; esp -= 4; W32(esp, v); }
/* 50e8fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50e8fe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 50e905: sub esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 50e908: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 50e909: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50e90a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50e90b: mov edi, dword ptr [esp + 0x68] */
  edi = R32((uint32_t)(esp + 0x68u));
/* 50e90f: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 50e911: mov esi, ecx */
  esi = ecx;
/* 50e913: mov ecx, edi */
  ecx = edi;
/* 50e915: call dword ptr [eax + 0xb4] */
  { uint32_t t = R32((uint32_t)(eax + 0xb4u)); esp -= 4; W32(esp, 0x50e91bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50e91b: mov byte ptr [esi], al */
  W8((uint32_t)(esi), (eax & 0xffu));
/* 50e91d: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 50e91f: mov ecx, edi */
  ecx = edi;
/* 50e921: call dword ptr [edx + 0xb4] */
  { uint32_t t = R32((uint32_t)(edx + 0xb4u)); esp -= 4; W32(esp, 0x50e927u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50e927: mov ecx, dword ptr [esp + 0x6c] */
  ecx = R32((uint32_t)(esp + 0x6cu));
/* 50e92b: mov byte ptr [esi + 1], al */
  W8((uint32_t)(esi + 0x1u), (eax & 0xffu));
/* 50e92e: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 50e931: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 50e934: mov dword ptr [esi + 8], 0 */
  W32((uint32_t)(esi + 0x8u), 0x0u);
/* 50e93b: mov dword ptr [esi + 0xc], 0 */
  W32((uint32_t)(esi + 0xcu), 0x0u);
/* 50e942: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* 50e945: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* 50e948: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50e94a: je 0x50e969 */
  if (zf) goto L_50e969;
L_50e94c: /* 50e94c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_50e950: /* 50e950: cmp eax, 0x6a5680 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6a5680u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50e955: je 0x50e960 */
  if (zf) goto L_50e960;
L_50e957: /* 50e957: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 50e95a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50e95c: jne 0x50e950 */
  if (!zf) goto L_50e950;
L_50e95e: /* 50e95e: jmp 0x50e969 */
  goto L_50e969;
L_50e960: /* 50e960: mov eax, dword ptr [edi + 0x6c] */
  eax = R32((uint32_t)(edi + 0x6cu));
/* 50e963: mov edx, dword ptr [eax + 0x20] */
  edx = R32((uint32_t)(eax + 0x20u));
/* 50e966: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
L_50e969: /* 50e969: mov eax, dword ptr [esp + 0x64] */
  eax = R32((uint32_t)(esp + 0x64u));
/* 50e96d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50e96e: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 50e972: call 0x4e41a6 */
  esp -= 4; W32(esp, 0x50e977u); SPILL(); f_4e41a6(); if (g_unwind) return; RELOAD();
/* 50e977: mov ebp, dword ptr [esp + 0x70] */
  ebp = R32((uint32_t)(esp + 0x70u));
/* 50e97b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50e97d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 50e97e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50e97f: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 50e983: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50e984: mov ecx, esi */
  ecx = esi;
/* 50e986: mov dword ptr [esp + 0x6c], 0 */
  W32((uint32_t)(esp + 0x6cu), 0x0u);
/* 50e98e: call 0x4e35c1 */
  esp -= 4; W32(esp, 0x50e993u); SPILL(); f_4e35c1(); if (g_unwind) return; RELOAD();
/* 50e993: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* 50e997: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50e99a: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* 50e99d: jne 0x50e9a3 */
  if (!zf) goto L_50e9a3;
L_50e99f: /* 50e99f: xor eax, eax */
  eax = 0;
/* 50e9a1: jmp 0x50e9f4 */
  goto L_50e9f4;
L_50e9a3: /* 50e9a3: cmp ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50e9a6: jne 0x50e9af */
  if (!zf) goto L_50e9af;
L_50e9a8: /* 50e9a8: mov eax, 0x10 */
  eax = 0x10u;
/* 50e9ad: jmp 0x50e9f4 */
  goto L_50e9f4;
L_50e9af: /* 50e9af: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50e9b2: jne 0x50e9bb */
  if (!zf) goto L_50e9bb;
L_50e9b4: /* 50e9b4: mov eax, 0x20 */
  eax = 0x20u;
/* 50e9b9: jmp 0x50e9f4 */
  goto L_50e9f4;
L_50e9bb: /* 50e9bb: cmp ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50e9be: jne 0x50e9c7 */
  if (!zf) goto L_50e9c7;
L_50e9c0: /* 50e9c0: mov eax, 0x30 */
  eax = 0x30u;
/* 50e9c5: jmp 0x50e9f4 */
  goto L_50e9f4;
L_50e9c7: /* 50e9c7: cmp ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50e9ca: jne 0x50e9d3 */
  if (!zf) goto L_50e9d3;
L_50e9cc: /* 50e9cc: mov eax, 0x40 */
  eax = 0x40u;
/* 50e9d1: jmp 0x50e9f4 */
  goto L_50e9f4;
L_50e9d3: /* 50e9d3: cmp ecx, 0xff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50e9d9: jg 0x50e9e2 */
  if ((!zf && sf == of)) goto L_50e9e2;
L_50e9db: /* 50e9db: mov eax, 0x50 */
  eax = 0x50u;
/* 50e9e0: jmp 0x50e9f4 */
  goto L_50e9f4;
L_50e9e2: /* 50e9e2: xor eax, eax */
  eax = 0;
/* 50e9e4: cmp ecx, 0x10000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50e9ea: setg al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(((!zf && sf == of)) ? 1 : 0) & 0xffu);
/* 50e9ed: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 50e9ee: and eax, 0xfffffff0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 50e9f1: add eax, 0x70 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_50e9f4: /* 50e9f4: mov cl, byte ptr [esi + 1] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1u))) & 0xffu);
/* 50e9f7: or cl, al */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 50e9f9: mov byte ptr [esi + 1], cl */
  W8((uint32_t)(esi + 0x1u), (ecx & 0xffu));
/* 50e9fc: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* 50e9ff: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50ea01: je 0x50ea11 */
  if (zf) goto L_50ea11;
L_50ea03: /* 50ea03: cmp eax, 0x6a5150 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6a5150u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50ea08: je 0x50ea13 */
  if (zf) goto L_50ea13;
L_50ea0a: /* 50ea0a: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 50ea0d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50ea0f: jne 0x50ea03 */
  if (!zf) goto L_50ea03;
L_50ea11: /* 50ea11: xor edi, edi */
  edi = 0;
L_50ea13: /* 50ea13: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 50ea16: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50ea18: jne 0x50ea26 */
  if (!zf) goto L_50ea26;
L_50ea1a: /* 50ea1a: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50ea1c: je 0x50ea2c */
  if (zf) goto L_50ea2c;
L_50ea1e: /* 50ea1e: mov edx, dword ptr [edi + 0x6c] */
  edx = R32((uint32_t)(edi + 0x6cu));
/* 50ea21: test dword ptr [ebp], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50ea24: je 0x50ea2c */
  if (zf) goto L_50ea2c;
L_50ea26: /* 50ea26: or cl, 0x80 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a | b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 50ea29: mov byte ptr [esi + 1], cl */
  W8((uint32_t)(esi + 0x1u), (ecx & 0xffu));
L_50ea2c: /* 50ea2c: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 50ea30: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50ea31: mov eax, esi */
  eax = esi;
/* 50ea33: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50ea34: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50ea35: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 50ea3c: add esp, 0x54 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50ea3f: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_50eab0(void) {
  LOAD_REGS();
L_50eab0: /* 50eab0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 50eab1: mov ebp, esp */
  ebp = esp;
/* 50eab3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 50eab5: push 0x556f00 */
  { uint32_t v = 0x556f00u; esp -= 4; W32(esp, v); }
/* 50eaba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 50eac0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50eac1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 50eac8: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 50eacb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50eacc: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 50eacf: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 50ead1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50ead2: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 50ead5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50ead6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 50ead9: lea edi, [esi + 4] */
  edi = (uint32_t)(esi + 0x4u);
/* 50eadc: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 50eae3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50eae4: mov ecx, ebx */
  ecx = ebx;
/* 50eae6: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 50eaea: call dword ptr [eax + 0x1c] */
  { uint32_t t = R32((uint32_t)(eax + 0x1cu)); esp -= 4; W32(esp, 0x50eaedu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50eaed: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 50eaef: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50eaf1: je 0x50ece5 */
  if (zf) goto L_50ece5;
L_50eaf7: /* 50eaf7: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 50eafd: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 50eb00: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 50eb03: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50eb04: push 0x5f18f0 */
  { uint32_t v = 0x5f18f0u; esp -= 4; W32(esp, v); }
/* 50eb09: call 0x4e27d9 */
  esp -= 4; W32(esp, 0x50eb0eu); SPILL(); f_4e27d9(); if (g_unwind) return; RELOAD();
/* 50eb0e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50eb11: lea edi, [esi + 1] */
  edi = (uint32_t)(esi + 0x1u);
/* 50eb14: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50eb15: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50eb16: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 50eb1d: call 0x4e40e8 */
  esp -= 4; W32(esp, 0x50eb22u); SPILL(); f_4e40e8(); if (g_unwind) return; RELOAD();
/* 50eb22: mov al, byte ptr [edi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 50eb24: and al, 0xf */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 50eb26: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50eb29: cmp al, 0xa */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xau);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 50eb2b: mov byte ptr [esi], al */
  W8((uint32_t)(esi), (eax & 0xffu));
/* 50eb2d: jne 0x50eb3a */
  if (!zf) goto L_50eb3a;
L_50eb2f: /* 50eb2f: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 50eb31: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 50eb34: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50eb35: mov ecx, ebx */
  ecx = ebx;
/* 50eb37: call dword ptr [eax + 0x1c] */
  { uint32_t t = R32((uint32_t)(eax + 0x1cu)); esp -= 4; W32(esp, 0x50eb3au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_50eb3a: /* 50eb3a: xor eax, eax */
  eax = 0;
/* 50eb3c: mov al, byte ptr [edi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 50eb3e: and eax, 0x70 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 50eb41: cmp eax, 0x70 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 50eb44: ja 0x50ebcd */
  if ((!cf && !zf)) goto L_50ebcd;
L_50eb4a: /* 50eb4a: movzx edx, byte ptr [eax + 0x50ed8c] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x50ed8cu)));
/* 50eb51: jmp dword ptr [edx*4 + 0x50ed68] */
  switch (R32((uint32_t)(edx*4 + 0x50ed68u))) {
    case 0x50eb58u: goto L_50eb58;
    case 0x50eb61u: goto L_50eb61;
    case 0x50eb6au: goto L_50eb6a;
    case 0x50eb73u: goto L_50eb73;
    case 0x50eb7cu: goto L_50eb7c;
    case 0x50eb85u: goto L_50eb85;
    case 0x50eb9bu: goto L_50eb9b;
    case 0x50ebb4u: goto L_50ebb4;
    case 0x50ebcdu: goto L_50ebcd;
    default: guest_badjump(0x50eb51, R32((uint32_t)(edx*4 + 0x50ed68u))); return;
  }
L_50eb58: /* 50eb58: mov dword ptr [esi + 0xc], 1 */
  W32((uint32_t)(esi + 0xcu), 0x1u);
/* 50eb5f: jmp 0x50ebcd */
  goto L_50ebcd;
L_50eb61: /* 50eb61: mov dword ptr [esi + 0xc], 2 */
  W32((uint32_t)(esi + 0xcu), 0x2u);
/* 50eb68: jmp 0x50ebcd */
  goto L_50ebcd;
L_50eb6a: /* 50eb6a: mov dword ptr [esi + 0xc], 4 */
  W32((uint32_t)(esi + 0xcu), 0x4u);
/* 50eb71: jmp 0x50ebcd */
  goto L_50ebcd;
L_50eb73: /* 50eb73: mov dword ptr [esi + 0xc], 0xc */
  W32((uint32_t)(esi + 0xcu), 0xcu);
/* 50eb7a: jmp 0x50ebcd */
  goto L_50ebcd;
L_50eb7c: /* 50eb7c: mov dword ptr [esi + 0xc], 0x10 */
  W32((uint32_t)(esi + 0xcu), 0x10u);
/* 50eb83: jmp 0x50ebcd */
  goto L_50ebcd;
L_50eb85: /* 50eb85: mov al, byte ptr [esi + 0xc] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xcu))) & 0xffu);
/* 50eb88: lea ecx, [ebp - 0x11] */
  ecx = (uint32_t)(ebp + 0xffffffefu);
/* 50eb8b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50eb8c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50eb8d: mov byte ptr [ebp - 0x11], al */
  W8((uint32_t)(ebp + 0xffffffefu), (eax & 0xffu));
/* 50eb90: call 0x4e40e8 */
  esp -= 4; W32(esp, 0x50eb95u); SPILL(); f_4e40e8(); if (g_unwind) return; RELOAD();
/* 50eb95: movzx edx, byte ptr [ebp - 0x11] */
  edx = (uint32_t)(R8((uint32_t)(ebp + 0xffffffefu)));
/* 50eb99: jmp 0x50ebc7 */
  goto L_50ebc7;
L_50eb9b: /* 50eb9b: xor eax, eax */
  eax = 0;
/* 50eb9d: mov ax, word ptr [esi + 0xc] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0xcu))) & 0xffffu);
/* 50eba1: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 50eba4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50eba5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50eba6: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 50eba9: call 0x4e4147 */
  esp -= 4; W32(esp, 0x50ebaeu); SPILL(); f_4e4147(); if (g_unwind) return; RELOAD();
/* 50ebae: movzx edx, word ptr [ebp - 0x18] */
  edx = (uint32_t)(R16((uint32_t)(ebp + 0xffffffe8u)));
/* 50ebb2: jmp 0x50ebc7 */
  goto L_50ebc7;
L_50ebb4: /* 50ebb4: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 50ebb7: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 50ebba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50ebbb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50ebbc: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 50ebbf: call 0x4e4160 */
  esp -= 4; W32(esp, 0x50ebc4u); SPILL(); f_4e4160(); if (g_unwind) return; RELOAD();
/* 50ebc4: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
L_50ebc7: /* 50ebc7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50ebca: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
L_50ebcd: /* 50ebcd: cmp byte ptr [edi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  sf = ((r) >> 7) & 1;
  }
/* 50ebd0: jns 0x50ecde */
  if (!sf) goto L_50ecde;
L_50ebd6: /* 50ebd6: cmp byte ptr [esi], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 50ebd9: je 0x50ecde */
  if (zf) goto L_50ecde;
L_50ebdf: /* 50ebdf: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 50ebe2: cmp eax, 0x7f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50ebe5: jle 0x50ebfa */
  if ((zf || sf != of)) goto L_50ebfa;
L_50ebe7: /* 50ebe7: cmp eax, 0x3fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3fffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50ebec: jg 0x50ebf5 */
  if ((!zf && sf == of)) goto L_50ebf5;
L_50ebee: /* 50ebee: sar eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 50ebf1: add al, 0x80 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 50ebf3: jmp 0x50ebfa */
  goto L_50ebfa;
L_50ebf5: /* 50ebf5: sar eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 24;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 50ebf8: sub al, 0x40 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a - b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
L_50ebfa: /* 50ebfa: mov byte ptr [ebp + 0xf], al */
  W8((uint32_t)(ebp + 0xfu), (eax & 0xffu));
/* 50ebfd: lea eax, [ebp + 0xf] */
  eax = (uint32_t)(ebp + 0xfu);
/* 50ec00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50ec01: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50ec02: call 0x4e40e8 */
  esp -= 4; W32(esp, 0x50ec07u); SPILL(); f_4e40e8(); if (g_unwind) return; RELOAD();
/* 50ec07: mov al, byte ptr [ebp + 0xf] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xfu))) & 0xffu);
/* 50ec0a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50ec0d: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 50ec0f: js 0x50ec2a */
  if (sf) goto L_50ec2a;
L_50ec11: /* 50ec11: movzx ecx, al */
  ecx = (uint32_t)((eax & 0xffu));
/* 50ec14: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* 50ec17: mov eax, ebx */
  eax = ebx;
/* 50ec19: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 50ec1c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 50ec23: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50ec24: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50ec25: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50ec26: mov esp, ebp */
  esp = ebp;
/* 50ec28: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50ec29: ret  */
  esp += 4; SPILL(); return;
L_50ec2a: /* 50ec2a: mov dl, byte ptr [esi + 0x10] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x10u))) & 0xffu);
/* 50ec2d: and al, 0xc0 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xc0u);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 50ec2f: cmp al, 0x80 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 50ec31: jne 0x50ec6a */
  if (!zf) goto L_50ec6a;
L_50ec33: /* 50ec33: lea eax, [ebp + 0xb] */
  eax = (uint32_t)(ebp + 0xbu);
/* 50ec36: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50ec37: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50ec38: mov byte ptr [ebp + 0xb], dl */
  W8((uint32_t)(ebp + 0xbu), (edx & 0xffu));
/* 50ec3b: call 0x4e40e8 */
  esp -= 4; W32(esp, 0x50ec40u); SPILL(); f_4e40e8(); if (g_unwind) return; RELOAD();
/* 50ec40: movzx edx, byte ptr [ebp + 0xb] */
  edx = (uint32_t)(R8((uint32_t)(ebp + 0xbu)));
/* 50ec44: xor ecx, ecx */
  ecx = 0;
/* 50ec46: mov cl, byte ptr [ebp + 0xf] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xfu))) & 0xffu);
/* 50ec49: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50ec4c: mov eax, ebx */
  eax = ebx;
/* 50ec4e: and ecx, 0x7f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7fu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 50ec51: shl ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 50ec54: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 50ec56: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* 50ec59: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 50ec5c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 50ec63: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50ec64: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50ec65: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50ec66: mov esp, ebp */
  esp = ebp;
/* 50ec68: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50ec69: ret  */
  esp += 4; SPILL(); return;
L_50ec6a: /* 50ec6a: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 50ec6d: mov ecx, eax */
  ecx = eax;
/* 50ec6f: sar eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 50ec72: mov byte ptr [ebp - 0x12], al */
  W8((uint32_t)(ebp + 0xffffffeeu), (eax & 0xffu));
/* 50ec75: lea eax, [ebp + 0xb] */
  eax = (uint32_t)(ebp + 0xbu);
/* 50ec78: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50ec79: sar ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 16;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 50ec7c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50ec7d: mov byte ptr [ebp + 0xb], cl */
  W8((uint32_t)(ebp + 0xbu), (ecx & 0xffu));
/* 50ec80: mov byte ptr [ebp - 0x13], dl */
  W8((uint32_t)(ebp + 0xffffffedu), (edx & 0xffu));
/* 50ec83: call 0x4e40e8 */
  esp -= 4; W32(esp, 0x50ec88u); SPILL(); f_4e40e8(); if (g_unwind) return; RELOAD();
/* 50ec88: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50ec8b: lea ecx, [ebp - 0x12] */
  ecx = (uint32_t)(ebp + 0xffffffeeu);
/* 50ec8e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50ec8f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50ec90: call 0x4e40e8 */
  esp -= 4; W32(esp, 0x50ec95u); SPILL(); f_4e40e8(); if (g_unwind) return; RELOAD();
/* 50ec95: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50ec98: lea edx, [ebp - 0x13] */
  edx = (uint32_t)(ebp + 0xffffffedu);
/* 50ec9b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50ec9c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50ec9d: call 0x4e40e8 */
  esp -= 4; W32(esp, 0x50eca2u); SPILL(); f_4e40e8(); if (g_unwind) return; RELOAD();
/* 50eca2: movzx ecx, byte ptr [ebp + 0xb] */
  ecx = (uint32_t)(R8((uint32_t)(ebp + 0xbu)));
/* 50eca6: movzx edx, byte ptr [ebp - 0x12] */
  edx = (uint32_t)(R8((uint32_t)(ebp + 0xffffffeeu)));
/* 50ecaa: xor eax, eax */
  eax = 0;
/* 50ecac: mov al, byte ptr [ebp + 0xf] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xfu))) & 0xffu);
/* 50ecaf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50ecb2: and eax, 0x3f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 50ecb5: shl eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 50ecb8: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 50ecba: movzx ecx, byte ptr [ebp - 0x13] */
  ecx = (uint32_t)(R8((uint32_t)(ebp + 0xffffffedu)));
/* 50ecbe: shl eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 50ecc1: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 50ecc3: shl eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 50ecc6: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 50ecc8: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 50eccb: mov eax, ebx */
  eax = ebx;
/* 50eccd: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 50ecd0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 50ecd7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50ecd8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50ecd9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50ecda: mov esp, ebp */
  esp = ebp;
/* 50ecdc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50ecdd: ret  */
  esp += 4; SPILL(); return;
L_50ecde: /* 50ecde: mov dword ptr [esi + 0x10], 0 */
  W32((uint32_t)(esi + 0x10u), 0x0u);
L_50ece5: /* 50ece5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 50ece8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50ece9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50ecea: mov eax, ebx */
  eax = ebx;
/* 50ecec: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 50ecf3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50ecf4: mov esp, ebp */
  esp = ebp;
/* 50ecf6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50ecf7: ret  */
  esp += 4; SPILL(); return;
}

void f_50ecf8(void) {
  LOAD_REGS();
L_50ecf8: /* 50ecf8: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 50ecfb: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 50ed00: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 50ed03: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50ed04: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 50ed07: call 0x554df6 */
  esp -= 4; W32(esp, 0x50ed0cu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_50ed0c(); return;
}

void f_50ed0c(void) {
  LOAD_REGS();
L_50ed0c: /* 50ed0c: push 0x56ba28 */
  { uint32_t v = 0x56ba28u; esp -= 4; W32(esp, v); }
/* 50ed11: push 0x5a376c */
  { uint32_t v = 0x5a376cu; esp -= 4; W32(esp, v); }
/* 50ed16: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x50ed1bu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 50ed1b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50ed1e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50ed20: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50ed22: call 0x554df6 */
  esp -= 4; W32(esp, 0x50ed27u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_50ed27(); return;
}

void f_50ed27(void) {
  LOAD_REGS();
L_50ed27: /* 50ed27: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 50ed2a: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 50ed2f: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 50ed32: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50ed33: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 50ed36: call 0x554df6 */
  esp -= 4; W32(esp, 0x50ed3bu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_50ed3b(); return;
}

void f_50ed3b(void) {
  LOAD_REGS();
L_50ed3b: /* 50ed3b: push 0x56ba04 */
  { uint32_t v = 0x56ba04u; esp -= 4; W32(esp, v); }
/* 50ed40: push 0x5a376c */
  { uint32_t v = 0x5a376cu; esp -= 4; W32(esp, v); }
/* 50ed45: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x50ed4au); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 50ed4a: push 0x5f18f0 */
  { uint32_t v = 0x5f18f0u; esp -= 4; W32(esp, v); }
/* 50ed4f: push 0x5a5ac8 */
  { uint32_t v = 0x5a5ac8u; esp -= 4; W32(esp, v); }
/* 50ed54: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x50ed59u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 50ed59: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50ed5c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50ed5e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50ed60: call 0x554df6 */
  esp -= 4; W32(esp, 0x50ed65u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
/* 50ed65: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
/* 50ed68: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 50ed69: jmp 0x50edbb */
  goto L_50edbb;
L_50edbb: /* 50edbb: or byte ptr [ebx], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebx), r);
  }
/* 50edbd: or byte ptr [eax], cl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(eax), r);
  }
/* 50edbf: or byte ptr [eax], cl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(eax), r);
  }
/* 50edc1: or byte ptr [eax], cl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(eax), r);
  }
/* 50edc3: or byte ptr [eax], cl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(eax), r);
  }
/* 50edc5: or byte ptr [eax], cl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(eax), r);
  }
/* 50edc7: or byte ptr [eax], cl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(eax), r);
  }
/* 50edc9: or byte ptr [eax], cl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(eax), r);
  }
/* 50edcb: or byte ptr [eax + ecx], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + ecx))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(eax + ecx), r);
  }
/* 50edce: or byte ptr [eax], cl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(eax), r);
  }
/* 50edd0: or byte ptr [eax], cl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(eax), r);
  }
/* 50edd2: or byte ptr [eax], cl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(eax), r);
  }
/* 50edd4: or byte ptr [eax], cl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(eax), r);
  }
/* 50edd6: or byte ptr [eax], cl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(eax), r);
  }
/* 50edd8: or byte ptr [eax], cl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(eax), r);
  }
/* 50edda: or byte ptr [eax], cl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(eax), r);
  }
/* 50eddc: add eax, 0x8080808 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8080808u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 50ede1: or byte ptr [eax], cl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(eax), r);
  }
/* 50ede3: or byte ptr [eax], cl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(eax), r);
  }
/* 50ede5: or byte ptr [eax], cl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(eax), r);
  }
/* 50ede7: or byte ptr [eax], cl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(eax), r);
  }
/* 50ede9: or byte ptr [eax], cl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(eax), r);
  }
/* 50edeb: or byte ptr [esi], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(esi), r);
  }
/* 50eded: or byte ptr [eax], cl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(eax), r);
  }
/* 50edef: or byte ptr [eax], cl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(eax), r);
  }
/* 50edf1: or byte ptr [eax], cl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(eax), r);
  }
/* 50edf3: or byte ptr [eax], cl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(eax), r);
  }
/* 50edf5: or byte ptr [eax], cl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(eax), r);
  }
/* 50edf7: or byte ptr [eax], cl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(eax), r);
  }
/* 50edf9: or byte ptr [eax], cl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(eax), r);
  }
/* 50edfb: or byte ptr [edi], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(edi), r);
  }
/* 50edfd: nop  */
/* 50edfe: nop  */
/* 50edff: nop  */
L_50ee00: guest_badaddr(0x50ee00); return;
}

void f_50eee0(void) {
  LOAD_REGS();
L_50eee0: /* 50eee0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50eee1: mov esi, ecx */
  esi = ecx;
/* 50eee3: call 0x4e3b0c */
  esp -= 4; W32(esp, 0x50eee8u); SPILL(); f_4e3b0c(); if (g_unwind) return; RELOAD();
/* 50eee8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 50eeed: je 0x50eefb */
  if (zf) goto L_50eefb;
L_50eeef: /* 50eeef: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 50eef5: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 50eef7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50eef8: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x50eefbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_50eefb: /* 50eefb: mov eax, esi */
  eax = esi;
/* 50eefd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50eefe: ret 4 */
  esp += 8; SPILL(); return;
}

void f_50ef20(void) {
  LOAD_REGS();
L_50ef20: /* 50ef20: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 50ef24: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 50ef28: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50ef29: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50ef2a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50ef2b: mov esi, ecx */
  esi = ecx;
/* 50ef2d: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 50ef31: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50ef32: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50ef33: push 0x5f0d80 */
  { uint32_t v = 0x5f0d80u; esp -= 4; W32(esp, v); }
/* 50ef38: xor edi, edi */
  edi = 0;
/* 50ef3a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50ef3b: mov ecx, esi */
  ecx = esi;
/* 50ef3d: call 0x4e3e09 */
  esp -= 4; W32(esp, 0x50ef42u); SPILL(); f_4e3e09(); if (g_unwind) return; RELOAD();
/* 50ef42: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 50ef46: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 50ef4a: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 50ef4d: mov dword ptr [esi + 0x2c], edi */
  W32((uint32_t)(esi + 0x2cu), edi);
/* 50ef50: mov dword ptr [esi + 0x30], edi */
  W32((uint32_t)(esi + 0x30u), edi);
/* 50ef53: mov dword ptr [esi + 0x34], edi */
  W32((uint32_t)(esi + 0x34u), edi);
/* 50ef56: mov dword ptr [esi + 0x38], edi */
  W32((uint32_t)(esi + 0x38u), edi);
/* 50ef59: mov dword ptr [esi + 0x3c], edi */
  W32((uint32_t)(esi + 0x3cu), edi);
/* 50ef5c: mov dword ptr [esi], 0x5697d0 */
  W32((uint32_t)(esi), 0x5697d0u);
/* 50ef62: mov dword ptr [esi + 0x40], ecx */
  W32((uint32_t)(esi + 0x40u), ecx);
/* 50ef65: mov dword ptr [esi + 0x48], edi */
  W32((uint32_t)(esi + 0x48u), edi);
/* 50ef68: mov dword ptr [esi + 0x4c], edi */
  W32((uint32_t)(esi + 0x4cu), edi);
/* 50ef6b: mov dword ptr [esi + 0x50], edi */
  W32((uint32_t)(esi + 0x50u), edi);
/* 50ef6e: mov dword ptr [esi + 0x54], edi */
  W32((uint32_t)(esi + 0x54u), edi);
/* 50ef71: mov dword ptr [esi + 0x58], edi */
  W32((uint32_t)(esi + 0x58u), edi);
/* 50ef74: mov dword ptr [esi + 0x60], edi */
  W32((uint32_t)(esi + 0x60u), edi);
/* 50ef77: mov dword ptr [esi + 0x64], edi */
  W32((uint32_t)(esi + 0x64u), edi);
/* 50ef7a: mov dword ptr [esi + 0x68], edi */
  W32((uint32_t)(esi + 0x68u), edi);
/* 50ef7d: mov dword ptr [esi + 0x6c], edi */
  W32((uint32_t)(esi + 0x6cu), edi);
/* 50ef80: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50ef81: mov eax, esi */
  eax = esi;
/* 50ef83: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50ef84: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_50efb0(void) {
  LOAD_REGS();
L_50efb0: /* 50efb0: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 50efb4: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 50efb8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50efb9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50efba: mov esi, ecx */
  esi = ecx;
/* 50efbc: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 50efc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50efc1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50efc2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50efc3: xor edi, edi */
  edi = 0;
/* 50efc5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50efc6: mov ecx, esi */
  ecx = esi;
/* 50efc8: call 0x4e1604 */
  esp -= 4; W32(esp, 0x50efcdu); SPILL(); f_4e1604(); if (g_unwind) return; RELOAD();
/* 50efcd: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 50efd1: mov dword ptr [esi + 0x2c], edi */
  W32((uint32_t)(esi + 0x2cu), edi);
/* 50efd4: mov dword ptr [esi + 0x30], edi */
  W32((uint32_t)(esi + 0x30u), edi);
/* 50efd7: mov dword ptr [esi + 0x34], edi */
  W32((uint32_t)(esi + 0x34u), edi);
/* 50efda: mov dword ptr [esi + 0x38], edi */
  W32((uint32_t)(esi + 0x38u), edi);
/* 50efdd: mov dword ptr [esi + 0x3c], edi */
  W32((uint32_t)(esi + 0x3cu), edi);
/* 50efe0: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 50efe3: mov dword ptr [esi], 0x5697d0 */
  W32((uint32_t)(esi), 0x5697d0u);
/* 50efe9: mov dword ptr [esi + 0x48], edi */
  W32((uint32_t)(esi + 0x48u), edi);
/* 50efec: mov dword ptr [esi + 0x4c], edi */
  W32((uint32_t)(esi + 0x4cu), edi);
/* 50efef: mov dword ptr [esi + 0x50], edi */
  W32((uint32_t)(esi + 0x50u), edi);
/* 50eff2: mov dword ptr [esi + 0x54], edi */
  W32((uint32_t)(esi + 0x54u), edi);
/* 50eff5: mov dword ptr [esi + 0x58], edi */
  W32((uint32_t)(esi + 0x58u), edi);
/* 50eff8: mov dword ptr [esi + 0x60], edi */
  W32((uint32_t)(esi + 0x60u), edi);
/* 50effb: mov dword ptr [esi + 0x64], edi */
  W32((uint32_t)(esi + 0x64u), edi);
/* 50effe: mov dword ptr [esi + 0x68], edi */
  W32((uint32_t)(esi + 0x68u), edi);
/* 50f001: mov dword ptr [esi + 0x6c], edi */
  W32((uint32_t)(esi + 0x6cu), edi);
/* 50f004: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50f005: mov eax, esi */
  eax = esi;
/* 50f007: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50f008: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_50f030(void) {
  LOAD_REGS();
L_50f030: /* 50f030: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 50f032: push 0x556f18 */
  { uint32_t v = 0x556f18u; esp -= 4; W32(esp, v); }
/* 50f037: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 50f03d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50f03e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 50f045: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50f046: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50f047: mov esi, ecx */
  esi = ecx;
/* 50f049: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50f04a: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 50f04e: call 0x4e245a */
  esp -= 4; W32(esp, 0x50f053u); SPILL(); f_4e245a(); if (g_unwind) return; RELOAD();
/* 50f053: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 50f057: mov dword ptr [esi + 0x28], ecx */
  W32((uint32_t)(esi + 0x28u), ecx);
/* 50f05a: xor edi, edi */
  edi = 0;
/* 50f05c: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50f05e: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 50f062: mov dword ptr [esi], 0x5697d0 */
  W32((uint32_t)(esi), 0x5697d0u);
/* 50f068: je 0x50f071 */
  if (zf) goto L_50f071;
L_50f06a: /* 50f06a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 50f06c: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x50f06fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50f06f: jmp 0x50f073 */
  goto L_50f073;
L_50f071: /* 50f071: xor eax, eax */
  eax = 0;
L_50f073: /* 50f073: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 50f076: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 50f079: mov dword ptr [esi + 0x44], ecx */
  W32((uint32_t)(esi + 0x44u), ecx);
/* 50f07c: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 50f080: mov dword ptr [esi + 0x48], edi */
  W32((uint32_t)(esi + 0x48u), edi);
/* 50f083: mov dword ptr [esi + 0x4c], edi */
  W32((uint32_t)(esi + 0x4cu), edi);
/* 50f086: mov dword ptr [esi + 0x50], edi */
  W32((uint32_t)(esi + 0x50u), edi);
/* 50f089: mov dword ptr [esi + 0x60], edi */
  W32((uint32_t)(esi + 0x60u), edi);
/* 50f08c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50f08d: mov eax, esi */
  eax = esi;
/* 50f08f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50f090: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 50f097: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50f09a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_50f0c0(void) {
  LOAD_REGS();
L_50f0c0: /* 50f0c0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 50f0c4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50f0c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50f0c6: mov esi, ecx */
  esi = ecx;
/* 50f0c8: call 0x4e15a5 */
  esp -= 4; W32(esp, 0x50f0cdu); SPILL(); f_4e15a5(); if (g_unwind) return; RELOAD();
/* 50f0cd: mov dword ptr [esi], 0x569940 */
  W32((uint32_t)(esi), 0x569940u);
/* 50f0d3: mov eax, esi */
  eax = esi;
/* 50f0d5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50f0d6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_50f0f0(void) {
  LOAD_REGS();
L_50f0f0: /* 50f0f0: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 50f0f4: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 50f0f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50f0f9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50f0fa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50f0fb: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 50f0ff: mov esi, ecx */
  esi = ecx;
/* 50f101: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 50f105: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50f106: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 50f10a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50f10b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50f10c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50f10d: xor edi, edi */
  edi = 0;
/* 50f10f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50f110: mov ecx, esi */
  ecx = esi;
/* 50f112: call 0x4e119a */
  esp -= 4; W32(esp, 0x50f117u); SPILL(); f_4e119a(); if (g_unwind) return; RELOAD();
/* 50f117: mov dword ptr [esi + 0x80], edi */
  W32((uint32_t)(esi + 0x80u), edi);
/* 50f11d: mov dword ptr [esi + 0x84], edi */
  W32((uint32_t)(esi + 0x84u), edi);
/* 50f123: mov dword ptr [esi + 0x88], edi */
  W32((uint32_t)(esi + 0x88u), edi);
/* 50f129: mov dword ptr [esi + 0x8c], edi */
  W32((uint32_t)(esi + 0x8cu), edi);
/* 50f12f: mov dword ptr [esi + 0x90], edi */
  W32((uint32_t)(esi + 0x90u), edi);
/* 50f135: mov word ptr [esi + 0x94], di */
  W16((uint32_t)(esi + 0x94u), (edi & 0xffffu));
/* 50f13c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50f13d: mov dword ptr [esi], 0x569940 */
  W32((uint32_t)(esi), 0x569940u);
/* 50f143: mov eax, esi */
  eax = esi;
/* 50f145: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50f146: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_50f170(void) {
  LOAD_REGS();
L_50f170: /* 50f170: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 50f174: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 50f178: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50f179: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50f17a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50f17b: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 50f17f: mov esi, ecx */
  esi = ecx;
/* 50f181: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 50f185: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50f186: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50f187: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50f188: xor edi, edi */
  edi = 0;
/* 50f18a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50f18b: mov ecx, esi */
  ecx = esi;
/* 50f18d: call 0x4e1564 */
  esp -= 4; W32(esp, 0x50f192u); SPILL(); f_4e1564(); if (g_unwind) return; RELOAD();
/* 50f192: mov dword ptr [esi + 0x80], edi */
  W32((uint32_t)(esi + 0x80u), edi);
/* 50f198: mov dword ptr [esi + 0x84], edi */
  W32((uint32_t)(esi + 0x84u), edi);
/* 50f19e: mov dword ptr [esi + 0x88], edi */
  W32((uint32_t)(esi + 0x88u), edi);
/* 50f1a4: mov dword ptr [esi + 0x8c], edi */
  W32((uint32_t)(esi + 0x8cu), edi);
/* 50f1aa: mov dword ptr [esi + 0x90], edi */
  W32((uint32_t)(esi + 0x90u), edi);
/* 50f1b0: mov word ptr [esi + 0x94], di */
  W16((uint32_t)(esi + 0x94u), (edi & 0xffffu));
/* 50f1b7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50f1b8: mov dword ptr [esi], 0x569940 */
  W32((uint32_t)(esi), 0x569940u);
/* 50f1be: mov eax, esi */
  eax = esi;
/* 50f1c0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50f1c1: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_50f1f0(void) {
  LOAD_REGS();
L_50f1f0: /* 50f1f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 50f1f1: mov ebp, esp */
  ebp = esp;
/* 50f1f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 50f1f5: push 0x556f38 */
  { uint32_t v = 0x556f38u; esp -= 4; W32(esp, v); }
/* 50f1fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 50f200: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50f201: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 50f208: sub esp, 0x54 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 50f20b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50f20c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50f20d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50f20e: mov esi, ecx */
  esi = ecx;
/* 50f210: xor ebx, ebx */
  ebx = 0;
/* 50f212: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 50f215: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 50f218: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 50f21b: call 0x4e396d */
  esp -= 4; W32(esp, 0x50f220u); SPILL(); f_4e396d(); if (g_unwind) return; RELOAD();
/* 50f220: mov eax, dword ptr [esi + 0x4b4] */
  eax = R32((uint32_t)(esi + 0x4b4u));
/* 50f226: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 50f228: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50f229: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 50f22c: call 0x4e36a7 */
  esp -= 4; W32(esp, 0x50f231u); SPILL(); f_4e36a7(); if (g_unwind) return; RELOAD();
/* 50f231: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 50f234: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 50f236: mov ecx, esi */
  ecx = esi;
/* 50f238: mov dword ptr [esi + 0x4b4], eax */
  W32((uint32_t)(esi + 0x4b4u), eax);
/* 50f23e: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x50f241u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50f241: lea edi, [esi + 0x4e8] */
  edi = (uint32_t)(esi + 0x4e8u);
/* 50f247: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 50f249: mov ecx, edi */
  ecx = edi;
/* 50f24b: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 50f24e: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 50f251: call 0x4e4502 */
  esp -= 4; W32(esp, 0x50f256u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 50f256: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 50f258: mov ecx, esi */
  ecx = esi;
/* 50f25a: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x50f25du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50f25d: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 50f260: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 50f262: cmp ecx, dword ptr [edi + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50f265: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 50f268: jle 0x50f286 */
  if ((zf || sf != of)) goto L_50f286;
L_50f26a: /* 50f26a: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 50f26d: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 50f26e: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 50f271: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 50f273: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 50f276: lea ecx, [eax + ecx + 0x20] */
  ecx = (uint32_t)(eax + ecx + 0x20u);
/* 50f27a: mov dword ptr [edi + 8], ecx */
  W32((uint32_t)(edi + 0x8u), ecx);
/* 50f27d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 50f27f: mov ecx, edi */
  ecx = edi;
/* 50f281: call 0x4e4502 */
  esp -= 4; W32(esp, 0x50f286u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_50f286: /* 50f286: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 50f288: mov ebx, dword ptr [esi + 0x4ec] */
  ebx = R32((uint32_t)(esi + 0x4ecu));
/* 50f28e: mov ecx, esi */
  ecx = esi;
/* 50f290: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x50f293u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50f293: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50f295: je 0x50f2ae */
  if (zf) goto L_50f2ae;
L_50f297: /* 50f297: push 0x21b */
  { uint32_t v = 0x21bu; esp -= 4; W32(esp, v); }
/* 50f29c: push 0x5a3b00 */
  { uint32_t v = 0x5a3b00u; esp -= 4; W32(esp, v); }
/* 50f2a1: push 0x5a3ad4 */
  { uint32_t v = 0x5a3ad4u; esp -= 4; W32(esp, v); }
/* 50f2a6: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x50f2abu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 50f2ab: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50f2ae: /* 50f2ae: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 50f2b0: xor ebx, ebx */
  ebx = 0;
/* 50f2b2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50f2b3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50f2b4: call 0x4e450c */
  esp -= 4; W32(esp, 0x50f2b9u); SPILL(); f_4e450c(); if (g_unwind) return; RELOAD();
/* 50f2b9: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 50f2bc: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50f2be: je 0x50f2ce */
  if (zf) goto L_50f2ce;
L_50f2c0: /* 50f2c0: mov eax, dword ptr [eax + 0x51c] */
  eax = R32((uint32_t)(eax + 0x51cu));
/* 50f2c6: cmp eax, dword ptr [esi + 0x51c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x51cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50f2cc: je 0x50f300 */
  if (zf) goto L_50f300;
L_50f2ce: /* 50f2ce: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 50f2d0: mov ebx, dword ptr [esi + 0x4ec] */
  ebx = R32((uint32_t)(esi + 0x4ecu));
/* 50f2d6: mov ecx, esi */
  ecx = esi;
/* 50f2d8: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x50f2dbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50f2db: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50f2dd: je 0x50f2f6 */
  if (zf) goto L_50f2f6;
L_50f2df: /* 50f2df: push 0x21b */
  { uint32_t v = 0x21bu; esp -= 4; W32(esp, v); }
/* 50f2e4: push 0x5a3b00 */
  { uint32_t v = 0x5a3b00u; esp -= 4; W32(esp, v); }
/* 50f2e9: push 0x5a3ad4 */
  { uint32_t v = 0x5a3ad4u; esp -= 4; W32(esp, v); }
/* 50f2ee: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x50f2f3u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 50f2f3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50f2f6: /* 50f2f6: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 50f2f8: call dword ptr [esi + 0x51c] */
  { uint32_t t = R32((uint32_t)(esi + 0x51cu)); esp -= 4; W32(esp, 0x50f2feu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50f2fe: xor ebx, ebx */
  ebx = 0;
L_50f300: /* 50f300: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 50f303: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50f305: je 0x50f320 */
  if (zf) goto L_50f320;
L_50f307: /* 50f307: mov eax, dword ptr [eax + 0x498] */
  eax = R32((uint32_t)(eax + 0x498u));
/* 50f30d: mov ecx, dword ptr [esi + 0x498] */
  ecx = R32((uint32_t)(esi + 0x498u));
/* 50f313: and eax, 0xf86ec */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xf86ecu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 50f318: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 50f31a: mov dword ptr [esi + 0x498], ecx */
  W32((uint32_t)(esi + 0x498u), ecx);
L_50f320: /* 50f320: mov eax, 1 */
  eax = 0x1u;
/* 50f325: mov dword ptr [ebp - 0x60], 0x569110 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x569110u);
/* 50f32c: mov dword ptr [ebp - 0x5c], 0x7e */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x7eu);
/* 50f333: mov dword ptr [ebp - 0x58], 0x7d0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x7d0u);
/* 50f33a: mov dword ptr [ebp - 0x54], eax */
  W32((uint32_t)(ebp + 0xffffffacu), eax);
/* 50f33d: mov dword ptr [ebp - 0x50], ebx */
  W32((uint32_t)(ebp + 0xffffffb0u), ebx);
/* 50f340: mov dword ptr [ebp - 0x4c], ebx */
  W32((uint32_t)(ebp + 0xffffffb4u), ebx);
/* 50f343: mov dword ptr [ebp - 0x48], ebx */
  W32((uint32_t)(ebp + 0xffffffb8u), ebx);
/* 50f346: mov dword ptr [ebp - 0x44], ebx */
  W32((uint32_t)(ebp + 0xffffffbcu), ebx);
/* 50f349: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 50f34c: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 50f34f: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 50f352: mov dword ptr [ebp - 0x34], ebx */
  W32((uint32_t)(ebp + 0xffffffccu), ebx);
/* 50f355: mov dword ptr [ebp - 0x30], ebx */
  W32((uint32_t)(ebp + 0xffffffd0u), ebx);
/* 50f358: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 50f35b: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 50f35e: mov dword ptr [ebp - 0x24], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffdcu), 0xffffffffu);
/* 50f365: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 50f367: mov byte ptr [ebp - 4], al */
  W8((uint32_t)(ebp + 0xfffffffcu), (eax & 0xffu));
/* 50f36a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50f36b: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 50f36e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50f36f: mov ecx, esi */
  ecx = esi;
/* 50f371: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0x50f377u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50f377: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 50f379: mov ebx, dword ptr [esi + 0x4ec] */
  ebx = R32((uint32_t)(esi + 0x4ecu));
/* 50f37f: mov ecx, esi */
  ecx = esi;
/* 50f381: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x50f384u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50f384: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50f386: je 0x50f39f */
  if (zf) goto L_50f39f;
L_50f388: /* 50f388: push 0x21b */
  { uint32_t v = 0x21bu; esp -= 4; W32(esp, v); }
/* 50f38d: push 0x5a3b00 */
  { uint32_t v = 0x5a3b00u; esp -= 4; W32(esp, v); }
/* 50f392: push 0x5a3ad4 */
  { uint32_t v = 0x5a3ad4u; esp -= 4; W32(esp, v); }
/* 50f397: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x50f39cu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 50f39c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50f39f: /* 50f39f: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 50f3a1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50f3a3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50f3a5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50f3a7: call 0x4e2743 */
  esp -= 4; W32(esp, 0x50f3acu); SPILL(); f_4e2743(); if (g_unwind) return; RELOAD();
/* 50f3ac: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 50f3ae: mov ebx, dword ptr [esi + 0x4ec] */
  ebx = R32((uint32_t)(esi + 0x4ecu));
/* 50f3b4: mov ecx, esi */
  ecx = esi;
/* 50f3b6: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x50f3b9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50f3b9: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50f3bb: je 0x50f3d4 */
  if (zf) goto L_50f3d4;
L_50f3bd: /* 50f3bd: push 0x21b */
  { uint32_t v = 0x21bu; esp -= 4; W32(esp, v); }
/* 50f3c2: push 0x5a3b00 */
  { uint32_t v = 0x5a3b00u; esp -= 4; W32(esp, v); }
/* 50f3c7: push 0x5a3ad4 */
  { uint32_t v = 0x5a3ad4u; esp -= 4; W32(esp, v); }
/* 50f3cc: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x50f3d1u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 50f3d1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50f3d4: /* 50f3d4: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 50f3d6: call 0x4e1d66 */
  esp -= 4; W32(esp, 0x50f3dbu); SPILL(); f_4e1d66(); if (g_unwind) return; RELOAD();
/* 50f3db: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 50f3de: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50f3df: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50f3e0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 50f3e7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50f3e8: mov esp, ebp */
  esp = ebp;
/* 50f3ea: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50f3eb: ret  */
  esp += 4; SPILL(); return;
}
