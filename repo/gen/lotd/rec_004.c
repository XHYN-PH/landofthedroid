#include "recomp.h"
#include "rec_mod.h"

void f_10914e2a(void) {
  LOAD_REGS();
  goto L_10914e2a;
L_10914e00: /* 10914e00: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 10914e04: movzx edi, word ptr [edi] */
  edi = (uint32_t)(R16((uint32_t)(edi)));
/* 10914e07: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 10914e0b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 10914e0c: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10914e0e: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 10914e12: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 10914e16: jge 0x10914e20 */
  if ((sf == of)) goto L_10914e20;
L_10914e18: /* 10914e18: cmp ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10914e1a: je 0x10915298 */
  if (zf) goto L_10915298;
L_10914e20: /* 10914e20: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10914e22: jge 0x10914ecf */
  if ((sf == of)) goto L_10914ecf;
L_10914e28: /* 10914e28: jmp 0x10914e30 */
  goto L_10914e30;
L_10914e2a: /* 10914e2a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_10914e30: /* 10914e30: movzx edi, word ptr [eax + ebp*4 + 0xa76] */
  edi = (uint32_t)(R16((uint32_t)(eax + ebp*4 + 0xa76u)));
/* 10914e38: mov ecx, dword ptr [eax + 0x16b4] */
  ecx = R32((uint32_t)(eax + 0x16b4u));
/* 10914e3e: mov edx, 0x10 */
  edx = 0x10u;
/* 10914e43: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 10914e45: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10914e47: jle 0x10914ea5 */
  if ((zf || sf != of)) goto L_10914ea5;
L_10914e49: /* 10914e49: movzx esi, word ptr [eax + ebp*4 + 0xa74] */
  esi = (uint32_t)(R16((uint32_t)(eax + ebp*4 + 0xa74u)));
/* 10914e51: mov edx, esi */
  edx = esi;
/* 10914e53: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 10914e55: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 10914e58: or word ptr [eax + 0x16b0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 10914e5f: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 10914e62: mov bl, byte ptr [eax + 0x16b0] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b0u))) & 0xffu);
/* 10914e68: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 10914e6b: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 10914e6e: mov bl, byte ptr [eax + 0x16b1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b1u))) & 0xffu);
/* 10914e74: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10914e75: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 10914e78: mov ecx, edx */
  ecx = edx;
/* 10914e7a: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 10914e7d: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 10914e80: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 10914e83: mov edx, dword ptr [eax + 0x16b4] */
  edx = R32((uint32_t)(eax + 0x16b4u));
/* 10914e89: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10914e8a: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 10914e8d: mov cl, 0x10 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x10u) & 0xffu);
/* 10914e8f: sub cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 10914e91: shr si, cl */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  esi = (esi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 10914e94: lea ecx, [edx + edi - 0x10] */
  ecx = (uint32_t)(edx + edi + 0xfffffff0u);
/* 10914e98: mov word ptr [eax + 0x16b0], si */
  W16((uint32_t)(eax + 0x16b0u), (esi & 0xffffu));
/* 10914e9f: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 10914ea3: jmp 0x10914eb9 */
  goto L_10914eb9;
L_10914ea5: /* 10914ea5: mov dx, word ptr [eax + ebp*4 + 0xa74] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + ebp*4 + 0xa74u))) & 0xffffu);
/* 10914ead: shl dx, cl */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a << c);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 10914eb0: or word ptr [eax + 0x16b0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 10914eb7: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_10914eb9: /* 10914eb9: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 10914eba: mov dword ptr [eax + 0x16b4], ecx */
  W32((uint32_t)(eax + 0x16b4u), ecx);
/* 10914ec0: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 10914ec4: jne 0x10914e30 */
  if (!zf) goto L_10914e30;
L_10914eca: /* 10914eca: jmp 0x10915266 */
  goto L_10915266;
L_10914ecf: /* 10914ecf: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10914ed1: je 0x10915070 */
  if (zf) goto L_10915070;
L_10914ed7: /* 10914ed7: cmp ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10914ed9: je 0x10914f73 */
  if (zf) goto L_10914f73;
L_10914edf: /* 10914edf: movzx edi, word ptr [eax + ebp*4 + 0xa76] */
  edi = (uint32_t)(R16((uint32_t)(eax + ebp*4 + 0xa76u)));
/* 10914ee7: mov ecx, dword ptr [eax + 0x16b4] */
  ecx = R32((uint32_t)(eax + 0x16b4u));
/* 10914eed: mov edx, 0x10 */
  edx = 0x10u;
/* 10914ef2: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 10914ef4: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10914ef6: jle 0x10914f54 */
  if ((zf || sf != of)) goto L_10914f54;
L_10914ef8: /* 10914ef8: movzx esi, word ptr [eax + ebp*4 + 0xa74] */
  esi = (uint32_t)(R16((uint32_t)(eax + ebp*4 + 0xa74u)));
/* 10914f00: mov edx, esi */
  edx = esi;
/* 10914f02: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 10914f04: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 10914f07: or word ptr [eax + 0x16b0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 10914f0e: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 10914f11: mov bl, byte ptr [eax + 0x16b0] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b0u))) & 0xffu);
/* 10914f17: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 10914f1a: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 10914f1d: mov bl, byte ptr [eax + 0x16b1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b1u))) & 0xffu);
/* 10914f23: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10914f24: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 10914f27: mov ecx, edx */
  ecx = edx;
/* 10914f29: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 10914f2c: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 10914f2f: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 10914f32: mov edx, dword ptr [eax + 0x16b4] */
  edx = R32((uint32_t)(eax + 0x16b4u));
/* 10914f38: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10914f39: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 10914f3c: mov cl, 0x10 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x10u) & 0xffu);
/* 10914f3e: sub cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 10914f40: shr si, cl */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  esi = (esi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 10914f43: lea ecx, [edx + edi - 0x10] */
  ecx = (uint32_t)(edx + edi + 0xfffffff0u);
/* 10914f47: mov word ptr [eax + 0x16b0], si */
  W16((uint32_t)(eax + 0x16b0u), (esi & 0xffffu));
/* 10914f4e: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 10914f52: jmp 0x10914f68 */
  goto L_10914f68;
L_10914f54: /* 10914f54: mov dx, word ptr [eax + ebp*4 + 0xa74] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + ebp*4 + 0xa74u))) & 0xffffu);
/* 10914f5c: shl dx, cl */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a << c);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 10914f5f: or word ptr [eax + 0x16b0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 10914f66: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_10914f68: /* 10914f68: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 10914f69: mov dword ptr [eax + 0x16b4], ecx */
  W32((uint32_t)(eax + 0x16b4u), ecx);
/* 10914f6f: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
L_10914f73: /* 10914f73: movzx edi, word ptr [eax + 0xab6] */
  edi = (uint32_t)(R16((uint32_t)(eax + 0xab6u)));
/* 10914f7a: mov ecx, dword ptr [eax + 0x16b4] */
  ecx = R32((uint32_t)(eax + 0x16b4u));
/* 10914f80: mov edx, 0x10 */
  edx = 0x10u;
/* 10914f85: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 10914f87: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10914f89: jle 0x10914fe6 */
  if ((zf || sf != of)) goto L_10914fe6;
L_10914f8b: /* 10914f8b: movzx esi, word ptr [eax + 0xab4] */
  esi = (uint32_t)(R16((uint32_t)(eax + 0xab4u)));
/* 10914f92: mov edx, esi */
  edx = esi;
/* 10914f94: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 10914f96: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 10914f99: or word ptr [eax + 0x16b0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 10914fa0: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 10914fa3: mov bl, byte ptr [eax + 0x16b0] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b0u))) & 0xffu);
/* 10914fa9: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 10914fac: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 10914faf: mov bl, byte ptr [eax + 0x16b1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b1u))) & 0xffu);
/* 10914fb5: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10914fb6: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 10914fb9: mov ecx, edx */
  ecx = edx;
/* 10914fbb: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 10914fbe: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 10914fc1: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 10914fc4: mov edx, dword ptr [eax + 0x16b4] */
  edx = R32((uint32_t)(eax + 0x16b4u));
/* 10914fca: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10914fcb: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 10914fce: mov cl, 0x10 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x10u) & 0xffu);
/* 10914fd0: sub cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 10914fd2: shr si, cl */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  esi = (esi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 10914fd5: lea ecx, [edx + edi - 0x10] */
  ecx = (uint32_t)(edx + edi + 0xfffffff0u);
/* 10914fd9: mov word ptr [eax + 0x16b0], si */
  W16((uint32_t)(eax + 0x16b0u), (esi & 0xffffu));
/* 10914fe0: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 10914fe4: jmp 0x10914ff9 */
  goto L_10914ff9;
L_10914fe6: /* 10914fe6: mov dx, word ptr [eax + 0xab4] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0xab4u))) & 0xffffu);
/* 10914fed: shl dx, cl */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a << c);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 10914ff0: or word ptr [eax + 0x16b0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 10914ff7: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_10914ff9: /* 10914ff9: add esi, -3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 10914ffc: cmp ecx, 0xe */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xeu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10914fff: mov dword ptr [eax + 0x16b4], ecx */
  W32((uint32_t)(eax + 0x16b4u), ecx);
/* 10915005: jle 0x1091505f */
  if ((zf || sf != of)) goto L_1091505f;
L_10915007: /* 10915007: mov edx, esi */
  edx = esi;
/* 10915009: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 1091500b: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 1091500e: or word ptr [eax + 0x16b0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 10915015: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 10915018: mov bl, byte ptr [eax + 0x16b0] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b0u))) & 0xffu);
/* 1091501e: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 10915021: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 10915024: mov bl, byte ptr [eax + 0x16b1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b1u))) & 0xffu);
/* 1091502a: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 1091502b: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 1091502e: mov ecx, edx */
  ecx = edx;
/* 10915030: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 10915033: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 10915036: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 10915039: mov edx, dword ptr [eax + 0x16b4] */
  edx = R32((uint32_t)(eax + 0x16b4u));
/* 1091503f: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10915040: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 10915043: mov cl, 0x10 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x10u) & 0xffu);
/* 10915045: sub cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 10915047: shr si, cl */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  esi = (esi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 1091504a: add edx, -0xe */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffffff2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1091504d: mov dword ptr [eax + 0x16b4], edx */
  W32((uint32_t)(eax + 0x16b4u), edx);
/* 10915053: mov word ptr [eax + 0x16b0], si */
  W16((uint32_t)(eax + 0x16b0u), (esi & 0xffffu));
/* 1091505a: jmp 0x10915266 */
  goto L_10915266;
L_1091505f: /* 1091505f: shl esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
  }
/* 10915061: or word ptr [eax + 0x16b0], si */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 10915068: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1091506b: jmp 0x10915260 */
  goto L_10915260;
L_10915070: /* 10915070: cmp esi, 0xa */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10915073: mov ecx, dword ptr [eax + 0x16b4] */
  ecx = R32((uint32_t)(eax + 0x16b4u));
/* 10915079: mov edx, 0x10 */
  edx = 0x10u;
/* 1091507e: jg 0x10915176 */
  if ((!zf && sf == of)) goto L_10915176;
L_10915084: /* 10915084: movzx edi, word ptr [eax + 0xaba] */
  edi = (uint32_t)(R16((uint32_t)(eax + 0xabau)));
/* 1091508b: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 1091508d: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1091508f: jle 0x109150ec */
  if ((zf || sf != of)) goto L_109150ec;
L_10915091: /* 10915091: movzx esi, word ptr [eax + 0xab8] */
  esi = (uint32_t)(R16((uint32_t)(eax + 0xab8u)));
/* 10915098: mov edx, esi */
  edx = esi;
/* 1091509a: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 1091509c: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 1091509f: or word ptr [eax + 0x16b0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 109150a6: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 109150a9: mov bl, byte ptr [eax + 0x16b0] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b0u))) & 0xffu);
/* 109150af: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 109150b2: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 109150b5: mov bl, byte ptr [eax + 0x16b1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b1u))) & 0xffu);
/* 109150bb: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 109150bc: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 109150bf: mov ecx, edx */
  ecx = edx;
/* 109150c1: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 109150c4: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 109150c7: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 109150ca: mov edx, dword ptr [eax + 0x16b4] */
  edx = R32((uint32_t)(eax + 0x16b4u));
/* 109150d0: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 109150d1: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 109150d4: mov cl, 0x10 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x10u) & 0xffu);
/* 109150d6: sub cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 109150d8: shr si, cl */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  esi = (esi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 109150db: lea ecx, [edx + edi - 0x10] */
  ecx = (uint32_t)(edx + edi + 0xfffffff0u);
/* 109150df: mov word ptr [eax + 0x16b0], si */
  W16((uint32_t)(eax + 0x16b0u), (esi & 0xffffu));
/* 109150e6: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 109150ea: jmp 0x109150ff */
  goto L_109150ff;
L_109150ec: /* 109150ec: mov dx, word ptr [eax + 0xab8] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0xab8u))) & 0xffffu);
/* 109150f3: shl dx, cl */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a << c);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 109150f6: or word ptr [eax + 0x16b0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 109150fd: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_109150ff: /* 109150ff: add esi, -3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 10915102: cmp ecx, 0xd */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10915105: mov dword ptr [eax + 0x16b4], ecx */
  W32((uint32_t)(eax + 0x16b4u), ecx);
/* 1091510b: jle 0x10915165 */
  if ((zf || sf != of)) goto L_10915165;
L_1091510d: /* 1091510d: mov edx, esi */
  edx = esi;
/* 1091510f: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 10915111: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 10915114: or word ptr [eax + 0x16b0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 1091511b: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 1091511e: mov bl, byte ptr [eax + 0x16b0] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b0u))) & 0xffu);
/* 10915124: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 10915127: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 1091512a: mov bl, byte ptr [eax + 0x16b1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b1u))) & 0xffu);
/* 10915130: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10915131: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 10915134: mov ecx, edx */
  ecx = edx;
/* 10915136: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 10915139: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 1091513c: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 1091513f: mov edx, dword ptr [eax + 0x16b4] */
  edx = R32((uint32_t)(eax + 0x16b4u));
/* 10915145: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10915146: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 10915149: mov cl, 0x10 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x10u) & 0xffu);
/* 1091514b: sub cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 1091514d: shr si, cl */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  esi = (esi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 10915150: add edx, -0xd */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffffff3u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10915153: mov dword ptr [eax + 0x16b4], edx */
  W32((uint32_t)(eax + 0x16b4u), edx);
/* 10915159: mov word ptr [eax + 0x16b0], si */
  W16((uint32_t)(eax + 0x16b0u), (esi & 0xffffu));
/* 10915160: jmp 0x10915266 */
  goto L_10915266;
L_10915165: /* 10915165: shl esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
  }
/* 10915167: or word ptr [eax + 0x16b0], si */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 1091516e: add ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10915171: jmp 0x10915260 */
  goto L_10915260;
L_10915176: /* 10915176: movzx edi, word ptr [eax + 0xabe] */
  edi = (uint32_t)(R16((uint32_t)(eax + 0xabeu)));
/* 1091517d: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 1091517f: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10915181: jle 0x109151de */
  if ((zf || sf != of)) goto L_109151de;
L_10915183: /* 10915183: movzx esi, word ptr [eax + 0xabc] */
  esi = (uint32_t)(R16((uint32_t)(eax + 0xabcu)));
/* 1091518a: mov edx, esi */
  edx = esi;
/* 1091518c: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 1091518e: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 10915191: or word ptr [eax + 0x16b0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 10915198: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 1091519b: mov bl, byte ptr [eax + 0x16b0] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b0u))) & 0xffu);
/* 109151a1: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 109151a4: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 109151a7: mov bl, byte ptr [eax + 0x16b1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b1u))) & 0xffu);
/* 109151ad: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 109151ae: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 109151b1: mov ecx, edx */
  ecx = edx;
/* 109151b3: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 109151b6: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 109151b9: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 109151bc: mov edx, dword ptr [eax + 0x16b4] */
  edx = R32((uint32_t)(eax + 0x16b4u));
/* 109151c2: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 109151c3: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 109151c6: mov cl, 0x10 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x10u) & 0xffu);
/* 109151c8: sub cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 109151ca: shr si, cl */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  esi = (esi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 109151cd: lea ecx, [edx + edi - 0x10] */
  ecx = (uint32_t)(edx + edi + 0xfffffff0u);
/* 109151d1: mov word ptr [eax + 0x16b0], si */
  W16((uint32_t)(eax + 0x16b0u), (esi & 0xffffu));
/* 109151d8: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 109151dc: jmp 0x109151f1 */
  goto L_109151f1;
L_109151de: /* 109151de: mov dx, word ptr [eax + 0xabc] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0xabcu))) & 0xffffu);
/* 109151e5: shl dx, cl */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a << c);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 109151e8: or word ptr [eax + 0x16b0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 109151ef: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_109151f1: /* 109151f1: add esi, -0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffff5u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 109151f4: cmp ecx, 9 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x9u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 109151f7: mov dword ptr [eax + 0x16b4], ecx */
  W32((uint32_t)(eax + 0x16b4u), ecx);
/* 109151fd: jle 0x10915254 */
  if ((zf || sf != of)) goto L_10915254;
L_109151ff: /* 109151ff: mov edx, esi */
  edx = esi;
/* 10915201: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 10915203: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 10915206: or word ptr [eax + 0x16b0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 1091520d: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 10915210: mov bl, byte ptr [eax + 0x16b0] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b0u))) & 0xffu);
/* 10915216: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 10915219: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 1091521c: mov bl, byte ptr [eax + 0x16b1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b1u))) & 0xffu);
/* 10915222: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10915223: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 10915226: mov ecx, edx */
  ecx = edx;
/* 10915228: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 1091522b: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 1091522e: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 10915231: mov edx, dword ptr [eax + 0x16b4] */
  edx = R32((uint32_t)(eax + 0x16b4u));
/* 10915237: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10915238: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 1091523b: mov cl, 0x10 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x10u) & 0xffu);
/* 1091523d: sub cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 1091523f: shr si, cl */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  esi = (esi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 10915242: add edx, -9 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffffff7u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10915245: mov dword ptr [eax + 0x16b4], edx */
  W32((uint32_t)(eax + 0x16b4u), edx);
/* 1091524b: mov word ptr [eax + 0x16b0], si */
  W16((uint32_t)(eax + 0x16b0u), (esi & 0xffffu));
/* 10915252: jmp 0x10915266 */
  goto L_10915266;
L_10915254: /* 10915254: shl esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
  }
/* 10915256: or word ptr [eax + 0x16b0], si */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 1091525d: add ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_10915260: /* 10915260: mov dword ptr [eax + 0x16b4], ecx */
  W32((uint32_t)(eax + 0x16b4u), ecx);
L_10915266: /* 10915266: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 1091526a: xor esi, esi */
  esi = 0;
/* 1091526c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1091526e: mov ebx, ebp */
  ebx = ebp;
/* 10915270: jne 0x1091527e */
  if (!zf) goto L_1091527e;
L_10915272: /* 10915272: mov ecx, 0x8a */
  ecx = 0x8au;
/* 10915277: mov edx, 3 */
  edx = 0x3u;
/* 1091527c: jmp 0x10915298 */
  goto L_10915298;
L_1091527e: /* 1091527e: cmp ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10915280: jne 0x1091528e */
  if (!zf) goto L_1091528e;
L_10915282: /* 10915282: mov ecx, 6 */
  ecx = 0x6u;
/* 10915287: mov edx, 3 */
  edx = 0x3u;
/* 1091528c: jmp 0x10915298 */
  goto L_10915298;
L_1091528e: /* 1091528e: mov ecx, 7 */
  ecx = 0x7u;
/* 10915293: mov edx, 4 */
  edx = 0x4u;
L_10915298: /* 10915298: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 1091529c: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 109152a0: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 109152a3: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 109152a4: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 109152a8: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 109152ac: jne 0x10914e00 */
  if (!zf) goto L_10914e00;
L_109152b2: /* 109152b2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 109152b3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 109152b4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 109152b5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 109152b6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109152b9: ret  */
  esp += 4; SPILL(); return;
}

void f_109152c0(void) {
  LOAD_REGS();
L_109152c0: /* 109152c0: mov ecx, dword ptr [eax + 0x16b4] */
  ecx = R32((uint32_t)(eax + 0x16b4u));
/* 109152c6: cmp ecx, 0xb */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 109152c9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 109152ca: mov ebx, dword ptr [esp + 0xc] */
  ebx = R32((uint32_t)(esp + 0xcu));
/* 109152ce: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 109152cf: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 109152d3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 109152d4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 109152d5: jle 0x1091533e */
  if ((zf || sf != of)) goto L_1091533e;
L_109152d7: /* 109152d7: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 109152db: add esi, 0xfffffeff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffeffu);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (r) < (a);
  of = ((((a) ^ (r)) & ((b) ^ (r))) >> 31) & 1;
  esi = r;
  }
/* 109152e1: mov edx, esi */
  edx = esi;
/* 109152e3: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 109152e5: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 109152e8: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 109152ec: or word ptr [eax + 0x16b0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 109152f3: mov bl, byte ptr [eax + 0x16b0] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b0u))) & 0xffu);
/* 109152f9: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 109152fc: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 109152ff: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 10915302: mov bl, byte ptr [eax + 0x16b1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b1u))) & 0xffu);
/* 10915308: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10915309: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 1091530c: mov ecx, edx */
  ecx = edx;
/* 1091530e: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 10915311: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 10915314: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 10915317: mov edx, dword ptr [eax + 0x16b4] */
  edx = R32((uint32_t)(eax + 0x16b4u));
/* 1091531d: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 10915321: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10915322: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 10915325: mov cl, 0x10 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x10u) & 0xffu);
/* 10915327: sub cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 10915329: shr si, cl */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  esi = (esi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 1091532c: add edx, -0xb */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffffff5u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1091532f: mov dword ptr [eax + 0x16b4], edx */
  W32((uint32_t)(eax + 0x16b4u), edx);
/* 10915335: mov word ptr [eax + 0x16b0], si */
  W16((uint32_t)(eax + 0x16b0u), (esi & 0xffffu));
/* 1091533c: jmp 0x1091535a */
  goto L_1091535a;
L_1091533e: /* 1091533e: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 10915342: add edx, 0xfffffeff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffffeffu);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (r) < (a);
  of = ((((a) ^ (r)) & ((b) ^ (r))) >> 31) & 1;
  edx = r;
  }
/* 10915348: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 1091534a: or word ptr [eax + 0x16b0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 10915351: add ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10915354: mov dword ptr [eax + 0x16b4], ecx */
  W32((uint32_t)(eax + 0x16b4u), ecx);
L_1091535a: /* 1091535a: mov ecx, dword ptr [eax + 0x16b4] */
  ecx = R32((uint32_t)(eax + 0x16b4u));
/* 10915360: cmp ecx, 0xb */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10915363: jle 0x109153c5 */
  if ((zf || sf != of)) goto L_109153c5;
L_10915365: /* 10915365: lea esi, [ebx - 1] */
  esi = (uint32_t)(ebx + 0xffffffffu);
/* 10915368: mov edx, esi */
  edx = esi;
/* 1091536a: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 1091536c: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 1091536f: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 10915373: or word ptr [eax + 0x16b0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 1091537a: mov bl, byte ptr [eax + 0x16b0] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b0u))) & 0xffu);
/* 10915380: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 10915383: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 10915386: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 10915389: mov bl, byte ptr [eax + 0x16b1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b1u))) & 0xffu);
/* 1091538f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10915390: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 10915393: mov ecx, edx */
  ecx = edx;
/* 10915395: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 10915398: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 1091539b: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 1091539e: mov edx, dword ptr [eax + 0x16b4] */
  edx = R32((uint32_t)(eax + 0x16b4u));
/* 109153a4: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 109153a8: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 109153a9: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 109153ac: mov cl, 0x10 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x10u) & 0xffu);
/* 109153ae: sub cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 109153b0: shr si, cl */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  esi = (esi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 109153b3: add edx, -0xb */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffffff5u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 109153b6: mov dword ptr [eax + 0x16b4], edx */
  W32((uint32_t)(eax + 0x16b4u), edx);
/* 109153bc: mov word ptr [eax + 0x16b0], si */
  W16((uint32_t)(eax + 0x16b0u), (esi & 0xffffu));
/* 109153c3: jmp 0x109153da */
  goto L_109153da;
L_109153c5: /* 109153c5: lea edx, [ebx - 1] */
  edx = (uint32_t)(ebx + 0xffffffffu);
/* 109153c8: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 109153ca: or word ptr [eax + 0x16b0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 109153d1: add ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 109153d4: mov dword ptr [eax + 0x16b4], ecx */
  W32((uint32_t)(eax + 0x16b4u), ecx);
L_109153da: /* 109153da: mov ecx, dword ptr [eax + 0x16b4] */
  ecx = R32((uint32_t)(eax + 0x16b4u));
/* 109153e0: cmp ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 109153e3: jle 0x10915445 */
  if ((zf || sf != of)) goto L_10915445;
L_109153e5: /* 109153e5: lea esi, [ebp - 4] */
  esi = (uint32_t)(ebp + 0xfffffffcu);
/* 109153e8: mov edx, esi */
  edx = esi;
/* 109153ea: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 109153ec: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 109153ef: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 109153f3: or word ptr [eax + 0x16b0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 109153fa: mov bl, byte ptr [eax + 0x16b0] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b0u))) & 0xffu);
/* 10915400: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 10915403: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 10915406: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 10915409: mov bl, byte ptr [eax + 0x16b1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b1u))) & 0xffu);
/* 1091540f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10915410: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 10915413: mov ecx, edx */
  ecx = edx;
/* 10915415: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 10915418: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 1091541b: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 1091541e: mov edx, dword ptr [eax + 0x16b4] */
  edx = R32((uint32_t)(eax + 0x16b4u));
/* 10915424: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 10915428: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10915429: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 1091542c: mov cl, 0x10 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x10u) & 0xffu);
/* 1091542e: sub cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 10915430: shr si, cl */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  esi = (esi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 10915433: add edx, -0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10915436: mov dword ptr [eax + 0x16b4], edx */
  W32((uint32_t)(eax + 0x16b4u), edx);
/* 1091543c: mov word ptr [eax + 0x16b0], si */
  W16((uint32_t)(eax + 0x16b0u), (esi & 0xffffu));
/* 10915443: jmp 0x1091545a */
  goto L_1091545a;
L_10915445: /* 10915445: lea edx, [ebp - 4] */
  edx = (uint32_t)(ebp + 0xfffffffcu);
/* 10915448: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 1091544a: or word ptr [eax + 0x16b0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 10915451: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10915454: mov dword ptr [eax + 0x16b4], ecx */
  W32((uint32_t)(eax + 0x16b4u), ecx);
L_1091545a: /* 1091545a: xor edi, edi */
  edi = 0;
/* 1091545c: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1091545e: jle 0x10915507 */
  if ((zf || sf != of)) goto L_10915507;
L_10915464: /* 10915464: jmp 0x10915470 */
  goto L_10915470;
L_10915470: /* 10915470: mov ecx, dword ptr [eax + 0x16b4] */
  ecx = R32((uint32_t)(eax + 0x16b4u));
/* 10915476: cmp ecx, 0xd */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10915479: movzx edx, byte ptr [edi + 0x10921e5c] */
  edx = (uint32_t)(R8((uint32_t)(edi + 0x10921e5cu)));
/* 10915480: jle 0x109154df */
  if ((zf || sf != of)) goto L_109154df;
L_10915482: /* 10915482: movzx esi, word ptr [eax + edx*4 + 0xa76] */
  esi = (uint32_t)(R16((uint32_t)(eax + edx*4 + 0xa76u)));
/* 1091548a: mov edx, esi */
  edx = esi;
/* 1091548c: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 1091548e: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 10915491: or word ptr [eax + 0x16b0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 10915498: mov bl, byte ptr [eax + 0x16b0] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b0u))) & 0xffu);
/* 1091549e: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 109154a1: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 109154a4: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 109154a7: mov bl, byte ptr [eax + 0x16b1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b1u))) & 0xffu);
/* 109154ad: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 109154ae: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 109154b1: mov ecx, edx */
  ecx = edx;
/* 109154b3: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 109154b6: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 109154b9: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 109154bc: mov edx, dword ptr [eax + 0x16b4] */
  edx = R32((uint32_t)(eax + 0x16b4u));
/* 109154c2: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 109154c3: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 109154c6: mov cl, 0x10 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x10u) & 0xffu);
/* 109154c8: sub cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 109154ca: shr si, cl */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  esi = (esi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 109154cd: add edx, -0xd */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffffff3u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 109154d0: mov dword ptr [eax + 0x16b4], edx */
  W32((uint32_t)(eax + 0x16b4u), edx);
/* 109154d6: mov word ptr [eax + 0x16b0], si */
  W16((uint32_t)(eax + 0x16b0u), (esi & 0xffffu));
/* 109154dd: jmp 0x109154fa */
  goto L_109154fa;
L_109154df: /* 109154df: mov dx, word ptr [eax + edx*4 + 0xa76] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + edx*4 + 0xa76u))) & 0xffffu);
/* 109154e7: shl dx, cl */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a << c);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 109154ea: or word ptr [eax + 0x16b0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 109154f1: add ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 109154f4: mov dword ptr [eax + 0x16b4], ecx */
  W32((uint32_t)(eax + 0x16b4u), ecx);
L_109154fa: /* 109154fa: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 109154fb: cmp edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 109154fd: jl 0x10915470 */
  if ((sf != of)) goto L_10915470;
L_10915503: /* 10915503: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
L_10915507: /* 10915507: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 1091550b: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 1091550c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1091550d: lea ecx, [eax + 0x8c] */
  ecx = (uint32_t)(eax + 0x8cu);
/* 10915513: call 0x10914db0 */
  esp -= 4; W32(esp, 0x10915518u); SPILL(); f_10914db0(); if (g_unwind) return; RELOAD();
/* 10915518: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 10915519: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1091551a: lea ecx, [eax + 0x980] */
  ecx = (uint32_t)(eax + 0x980u);
/* 10915520: call 0x10914db0 */
  esp -= 4; W32(esp, 0x10915525u); SPILL(); f_10914db0(); if (g_unwind) return; RELOAD();
/* 10915525: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10915528: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10915529: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1091552a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1091552b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1091552c: ret  */
  esp += 4; SPILL(); return;
}

void f_10915466(void) {
  LOAD_REGS();
L_10915466: /* 10915466: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 1091546d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_10915470: /* 10915470: mov ecx, dword ptr [eax + 0x16b4] */
  ecx = R32((uint32_t)(eax + 0x16b4u));
/* 10915476: cmp ecx, 0xd */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10915479: movzx edx, byte ptr [edi + 0x10921e5c] */
  edx = (uint32_t)(R8((uint32_t)(edi + 0x10921e5cu)));
/* 10915480: jle 0x109154df */
  if ((zf || sf != of)) goto L_109154df;
L_10915482: /* 10915482: movzx esi, word ptr [eax + edx*4 + 0xa76] */
  esi = (uint32_t)(R16((uint32_t)(eax + edx*4 + 0xa76u)));
/* 1091548a: mov edx, esi */
  edx = esi;
/* 1091548c: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 1091548e: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 10915491: or word ptr [eax + 0x16b0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 10915498: mov bl, byte ptr [eax + 0x16b0] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b0u))) & 0xffu);
/* 1091549e: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 109154a1: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 109154a4: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 109154a7: mov bl, byte ptr [eax + 0x16b1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b1u))) & 0xffu);
/* 109154ad: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 109154ae: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 109154b1: mov ecx, edx */
  ecx = edx;
/* 109154b3: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 109154b6: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 109154b9: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 109154bc: mov edx, dword ptr [eax + 0x16b4] */
  edx = R32((uint32_t)(eax + 0x16b4u));
/* 109154c2: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 109154c3: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 109154c6: mov cl, 0x10 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x10u) & 0xffu);
/* 109154c8: sub cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 109154ca: shr si, cl */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  esi = (esi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 109154cd: add edx, -0xd */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffffff3u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 109154d0: mov dword ptr [eax + 0x16b4], edx */
  W32((uint32_t)(eax + 0x16b4u), edx);
/* 109154d6: mov word ptr [eax + 0x16b0], si */
  W16((uint32_t)(eax + 0x16b0u), (esi & 0xffffu));
/* 109154dd: jmp 0x109154fa */
  goto L_109154fa;
L_109154df: /* 109154df: mov dx, word ptr [eax + edx*4 + 0xa76] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + edx*4 + 0xa76u))) & 0xffffu);
/* 109154e7: shl dx, cl */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a << c);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 109154ea: or word ptr [eax + 0x16b0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 109154f1: add ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 109154f4: mov dword ptr [eax + 0x16b4], ecx */
  W32((uint32_t)(eax + 0x16b4u), ecx);
L_109154fa: /* 109154fa: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 109154fb: cmp edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 109154fd: jl 0x10915470 */
  if ((sf != of)) goto L_10915470;
L_10915503: /* 10915503: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 10915507: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 1091550b: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 1091550c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1091550d: lea ecx, [eax + 0x8c] */
  ecx = (uint32_t)(eax + 0x8cu);
/* 10915513: call 0x10914db0 */
  esp -= 4; W32(esp, 0x10915518u); SPILL(); f_10914db0(); if (g_unwind) return; RELOAD();
/* 10915518: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 10915519: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1091551a: lea ecx, [eax + 0x980] */
  ecx = (uint32_t)(eax + 0x980u);
/* 10915520: call 0x10914db0 */
  esp -= 4; W32(esp, 0x10915525u); SPILL(); f_10914db0(); if (g_unwind) return; RELOAD();
/* 10915525: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10915528: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10915529: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1091552a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1091552b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1091552c: ret  */
  esp += 4; SPILL(); return;
}

void f_10915530(void) {
  LOAD_REGS();
L_10915530: /* 10915530: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 10915534: mov edx, dword ptr [eax + 0x1698] */
  edx = R32((uint32_t)(eax + 0x1698u));
/* 1091553a: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 1091553e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1091553f: mov esi, dword ptr [eax + 0x169c] */
  esi = R32((uint32_t)(eax + 0x169cu));
/* 10915545: mov word ptr [esi + edx*2], cx */
  W16((uint32_t)(esi + edx*2), (ecx & 0xffffu));
/* 10915549: mov esi, dword ptr [eax + 0x1690] */
  esi = R32((uint32_t)(eax + 0x1690u));
/* 1091554f: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 10915553: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10915554: mov edi, dword ptr [eax + 0x1698] */
  edi = R32((uint32_t)(eax + 0x1698u));
/* 1091555a: mov byte ptr [esi + edi], dl */
  W8((uint32_t)(esi + edi), (edx & 0xffu));
/* 1091555d: mov edi, dword ptr [eax + 0x1698] */
  edi = R32((uint32_t)(eax + 0x1698u));
/* 10915563: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 10915564: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10915566: mov dword ptr [eax + 0x1698], edi */
  W32((uint32_t)(eax + 0x1698u), edi);
/* 1091556c: jne 0x10915578 */
  if (!zf) goto L_10915578;
L_1091556e: /* 1091556e: inc word ptr [eax + edx*4 + 0x8c] */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + edx*4 + 0x8cu)));
  uint16_t r = (uint16_t)(a + 1);
  W16((uint32_t)(eax + edx*4 + 0x8cu), r);
  }
/* 10915576: jmp 0x109155b8 */
  goto L_109155b8;
L_10915578: /* 10915578: inc dword ptr [eax + 0x16a8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x16a8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + 0x16a8u), r);
  }
/* 1091557e: movzx edx, byte ptr [edx + 0x10922568] */
  edx = (uint32_t)(R8((uint32_t)(edx + 0x10922568u)));
/* 10915585: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 10915586: inc word ptr [eax + edx*4 + 0x490] */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + edx*4 + 0x490u)));
  uint16_t r = (uint16_t)(a + 1);
  W16((uint32_t)(eax + edx*4 + 0x490u), r);
  }
/* 1091558e: cmp ecx, 0x100 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10915594: lea edx, [eax + edx*4 + 0x490] */
  edx = (uint32_t)(eax + edx*4 + 0x490u);
/* 1091559b: jae 0x109155a6 */
  if (!cf) goto L_109155a6;
L_1091559d: /* 1091559d: movzx ecx, byte ptr [ecx + 0x10922368] */
  ecx = (uint32_t)(R8((uint32_t)(ecx + 0x10922368u)));
/* 109155a4: jmp 0x109155b0 */
  goto L_109155b0;
L_109155a6: /* 109155a6: shr ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 7;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 109155a9: movzx ecx, byte ptr [ecx + 0x10922468] */
  ecx = (uint32_t)(R8((uint32_t)(ecx + 0x10922468u)));
L_109155b0: /* 109155b0: inc word ptr [eax + ecx*4 + 0x980] */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + ecx*4 + 0x980u)));
  uint16_t r = (uint16_t)(a + 1);
  W16((uint32_t)(eax + ecx*4 + 0x980u), r);
  }
L_109155b8: /* 109155b8: mov ecx, dword ptr [eax + 0x1694] */
  ecx = R32((uint32_t)(eax + 0x1694u));
/* 109155be: mov esi, dword ptr [eax + 0x1698] */
  esi = R32((uint32_t)(eax + 0x1698u));
/* 109155c4: xor edx, edx */
  edx = 0;
/* 109155c6: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 109155c7: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109155c9: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 109155cc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 109155cd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 109155ce: mov eax, edx */
  eax = edx;
/* 109155d0: ret  */
  esp += 4; SPILL(); return;
}

void f_109155e0(void) {
  LOAD_REGS();
L_109155e0: /* 109155e0: mov edx, dword ptr [eax + 0x1698] */
  edx = R32((uint32_t)(eax + 0x1698u));
/* 109155e6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 109155e9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 109155ea: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 109155ee: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 109155ef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 109155f0: xor ecx, ecx */
  ecx = 0;
/* 109155f2: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109155f4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 109155f5: je 0x10915941 */
  if (zf) goto L_10915941;
L_109155fb: /* 109155fb: jmp 0x10915600 */
  goto L_10915600;
L_10915600: /* 10915600: mov edx, dword ptr [eax + 0x169c] */
  edx = R32((uint32_t)(eax + 0x169cu));
/* 10915606: movzx ebp, word ptr [edx + ecx*2] */
  ebp = (uint32_t)(R16((uint32_t)(edx + ecx*2)));
/* 1091560a: mov edx, dword ptr [eax + 0x1690] */
  edx = R32((uint32_t)(eax + 0x1690u));
/* 10915610: movzx esi, byte ptr [ecx + edx] */
  esi = (uint32_t)(R8((uint32_t)(ecx + edx)));
/* 10915614: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10915615: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10915617: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 1091561b: mov ecx, dword ptr [eax + 0x16b4] */
  ecx = R32((uint32_t)(eax + 0x16b4u));
/* 10915621: jne 0x109156ab */
  if (!zf) goto L_109156ab;
L_10915627: /* 10915627: movzx edi, word ptr [ebx + esi*4 + 2] */
  edi = (uint32_t)(R16((uint32_t)(ebx + esi*4 + 0x2u)));
/* 1091562c: mov edx, 0x10 */
  edx = 0x10u;
/* 10915631: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 10915633: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10915635: jle 0x10915696 */
  if ((zf || sf != of)) goto L_10915696;
L_10915637: /* 10915637: movzx esi, word ptr [ebx + esi*4] */
  esi = (uint32_t)(R16((uint32_t)(ebx + esi*4)));
/* 1091563b: mov edx, esi */
  edx = esi;
/* 1091563d: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 1091563f: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 10915642: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 10915646: or word ptr [eax + 0x16b0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 1091564d: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 10915650: mov bl, byte ptr [eax + 0x16b0] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b0u))) & 0xffu);
/* 10915656: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 10915659: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 1091565c: mov bl, byte ptr [eax + 0x16b1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b1u))) & 0xffu);
/* 10915662: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10915663: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 10915666: mov ecx, edx */
  ecx = edx;
/* 10915668: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 1091566b: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 1091566e: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 10915671: mov edx, dword ptr [eax + 0x16b4] */
  edx = R32((uint32_t)(eax + 0x16b4u));
/* 10915677: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 1091567b: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 1091567c: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 1091567f: mov cl, 0x10 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x10u) & 0xffu);
/* 10915681: sub cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 10915683: shr si, cl */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  esi = (esi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 10915686: lea ecx, [edx + edi - 0x10] */
  ecx = (uint32_t)(edx + edi + 0xfffffff0u);
/* 1091568a: mov word ptr [eax + 0x16b0], si */
  W16((uint32_t)(eax + 0x16b0u), (esi & 0xffffu));
/* 10915691: jmp 0x1091592b */
  goto L_1091592b;
L_10915696: /* 10915696: mov dx, word ptr [ebx + esi*4] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx + esi*4))) & 0xffffu);
/* 1091569a: shl dx, cl */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a << c);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 1091569d: or word ptr [eax + 0x16b0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 109156a4: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 109156a6: jmp 0x1091592b */
  goto L_1091592b;
L_109156ab: /* 109156ab: movzx edx, byte ptr [esi + 0x10922568] */
  edx = (uint32_t)(R8((uint32_t)(esi + 0x10922568u)));
/* 109156b2: movzx edi, word ptr [ebx + edx*4 + 0x406] */
  edi = (uint32_t)(R16((uint32_t)(ebx + edx*4 + 0x406u)));
/* 109156ba: mov ebx, 0x10 */
  ebx = 0x10u;
/* 109156bf: sub ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 109156c1: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 109156c3: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 109156c7: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 109156cb: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 109156cf: jle 0x10915737 */
  if ((zf || sf != of)) goto L_10915737;
L_109156d1: /* 109156d1: movzx edi, word ptr [edi + edx*4 + 0x404] */
  edi = (uint32_t)(R16((uint32_t)(edi + edx*4 + 0x404u)));
/* 109156d9: mov edx, edi */
  edx = edi;
/* 109156db: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 109156dd: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 109156e0: or word ptr [eax + 0x16b0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 109156e7: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 109156ea: mov bl, byte ptr [eax + 0x16b0] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b0u))) & 0xffu);
/* 109156f0: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 109156f3: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 109156f6: mov bl, byte ptr [eax + 0x16b1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b1u))) & 0xffu);
/* 109156fc: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 109156fd: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 10915700: mov ecx, edx */
  ecx = edx;
/* 10915702: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 10915705: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 10915708: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 1091570b: mov edx, dword ptr [eax + 0x16b4] */
  edx = R32((uint32_t)(eax + 0x16b4u));
/* 10915711: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10915712: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 10915715: mov cl, 0x10 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x10u) & 0xffu);
/* 10915717: sub cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 10915719: shr di, cl */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  edi = (edi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 1091571c: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 10915720: lea edx, [edx + ecx - 0x10] */
  edx = (uint32_t)(edx + ecx + 0xfffffff0u);
/* 10915724: mov dword ptr [eax + 0x16b4], edx */
  W32((uint32_t)(eax + 0x16b4u), edx);
/* 1091572a: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 1091572e: mov word ptr [eax + 0x16b0], di */
  W16((uint32_t)(eax + 0x16b0u), (edi & 0xffffu));
/* 10915735: jmp 0x10915755 */
  goto L_10915755;
L_10915737: /* 10915737: mov di, word ptr [edi + edx*4 + 0x404] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + edx*4 + 0x404u))) & 0xffffu);
/* 1091573f: shl di, cl */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a << c);
  edi = (edi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 10915742: or word ptr [eax + 0x16b0], di */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 10915749: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 1091574d: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1091574f: mov dword ptr [eax + 0x16b4], ecx */
  W32((uint32_t)(eax + 0x16b4u), ecx);
L_10915755: /* 10915755: mov edi, dword ptr [edx*4 + 0x10921d20] */
  edi = R32((uint32_t)(edx*4 + 0x10921d20u));
/* 1091575c: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1091575e: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* 10915762: je 0x109157e5 */
  if (zf) goto L_109157e5;
L_10915768: /* 10915768: sub esi, dword ptr [edx*4 + 0x10922668] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edx*4 + 0x10922668u)));
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 1091576f: mov ecx, dword ptr [eax + 0x16b4] */
  ecx = R32((uint32_t)(eax + 0x16b4u));
/* 10915775: mov edx, 0x10 */
  edx = 0x10u;
/* 1091577a: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 1091577c: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1091577e: jle 0x109157d4 */
  if ((zf || sf != of)) goto L_109157d4;
L_10915780: /* 10915780: mov edx, esi */
  edx = esi;
/* 10915782: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 10915784: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 10915787: or word ptr [eax + 0x16b0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 1091578e: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 10915791: mov bl, byte ptr [eax + 0x16b0] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b0u))) & 0xffu);
/* 10915797: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 1091579a: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 1091579d: mov bl, byte ptr [eax + 0x16b1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b1u))) & 0xffu);
/* 109157a3: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 109157a4: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 109157a7: mov ecx, edx */
  ecx = edx;
/* 109157a9: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 109157ac: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 109157af: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 109157b2: mov edx, dword ptr [eax + 0x16b4] */
  edx = R32((uint32_t)(eax + 0x16b4u));
/* 109157b8: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* 109157bc: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 109157bd: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 109157c0: mov cl, 0x10 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x10u) & 0xffu);
/* 109157c2: sub cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 109157c4: shr si, cl */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  esi = (esi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 109157c7: lea ecx, [edx + edi - 0x10] */
  ecx = (uint32_t)(edx + edi + 0xfffffff0u);
/* 109157cb: mov word ptr [eax + 0x16b0], si */
  W16((uint32_t)(eax + 0x16b0u), (esi & 0xffffu));
/* 109157d2: jmp 0x109157df */
  goto L_109157df;
L_109157d4: /* 109157d4: shl esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
  }
/* 109157d6: or word ptr [eax + 0x16b0], si */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 109157dd: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_109157df: /* 109157df: mov dword ptr [eax + 0x16b4], ecx */
  W32((uint32_t)(eax + 0x16b4u), ecx);
L_109157e5: /* 109157e5: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  ebp = r;
  }
/* 109157e6: cmp ebp, 0x100 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 109157ec: jae 0x109157f7 */
  if (!cf) goto L_109157f7;
L_109157ee: /* 109157ee: movzx edi, byte ptr [ebp + 0x10922368] */
  edi = (uint32_t)(R8((uint32_t)(ebp + 0x10922368u)));
/* 109157f5: jmp 0x10915803 */
  goto L_10915803;
L_109157f7: /* 109157f7: mov edx, ebp */
  edx = ebp;
/* 109157f9: shr edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 7;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 109157fc: movzx edi, byte ptr [edx + 0x10922468] */
  edi = (uint32_t)(R8((uint32_t)(edx + 0x10922468u)));
L_10915803: /* 10915803: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 10915807: movzx edx, word ptr [ecx + edi*4 + 2] */
  edx = (uint32_t)(R16((uint32_t)(ecx + edi*4 + 0x2u)));
/* 1091580c: mov ecx, dword ptr [eax + 0x16b4] */
  ecx = R32((uint32_t)(eax + 0x16b4u));
/* 10915812: mov esi, 0x10 */
  esi = 0x10u;
/* 10915817: sub esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 10915819: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1091581b: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 1091581f: jle 0x10915887 */
  if ((zf || sf != of)) goto L_10915887;
L_10915821: /* 10915821: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 10915825: movzx esi, word ptr [edx + edi*4] */
  esi = (uint32_t)(R16((uint32_t)(edx + edi*4)));
/* 10915829: mov edx, esi */
  edx = esi;
/* 1091582b: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 1091582d: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 10915830: or word ptr [eax + 0x16b0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 10915837: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 1091583a: mov bl, byte ptr [eax + 0x16b0] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b0u))) & 0xffu);
/* 10915840: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 10915843: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 10915846: mov bl, byte ptr [eax + 0x16b1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b1u))) & 0xffu);
/* 1091584c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 1091584d: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 10915850: mov ecx, edx */
  ecx = edx;
/* 10915852: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 10915855: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 10915858: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 1091585b: mov edx, dword ptr [eax + 0x16b4] */
  edx = R32((uint32_t)(eax + 0x16b4u));
/* 10915861: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* 10915865: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10915866: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 10915869: mov cl, 0x10 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x10u) & 0xffu);
/* 1091586b: sub cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 1091586d: shr si, cl */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  esi = (esi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 10915870: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 10915874: lea edx, [edx + ecx - 0x10] */
  edx = (uint32_t)(edx + ecx + 0xfffffff0u);
/* 10915878: mov dword ptr [eax + 0x16b4], edx */
  W32((uint32_t)(eax + 0x16b4u), edx);
/* 1091587e: mov word ptr [eax + 0x16b0], si */
  W16((uint32_t)(eax + 0x16b0u), (esi & 0xffffu));
/* 10915885: jmp 0x109158a1 */
  goto L_109158a1;
L_10915887: /* 10915887: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 1091588b: mov si, word ptr [esi + edi*4] */
  esi = (esi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + edi*4))) & 0xffffu);
/* 1091588f: shl si, cl */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a << c);
  esi = (esi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 10915892: or word ptr [eax + 0x16b0], si */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 10915899: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1091589b: mov dword ptr [eax + 0x16b4], ecx */
  W32((uint32_t)(eax + 0x16b4u), ecx);
L_109158a1: /* 109158a1: mov esi, dword ptr [edi*4 + 0x10921d98] */
  esi = R32((uint32_t)(edi*4 + 0x10921d98u));
/* 109158a8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109158aa: je 0x10915931 */
  if (zf) goto L_10915931;
L_109158b0: /* 109158b0: sub ebp, dword ptr [edi*4 + 0x109226e0] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(edi*4 + 0x109226e0u)));
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 109158b7: mov ecx, dword ptr [eax + 0x16b4] */
  ecx = R32((uint32_t)(eax + 0x16b4u));
/* 109158bd: mov edx, 0x10 */
  edx = 0x10u;
/* 109158c2: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 109158c4: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 109158c6: jle 0x10915920 */
  if ((zf || sf != of)) goto L_10915920;
L_109158c8: /* 109158c8: mov edx, ebp */
  edx = ebp;
/* 109158ca: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 109158cc: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 109158cf: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 109158d3: or word ptr [eax + 0x16b0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 109158da: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 109158dd: mov bl, byte ptr [eax + 0x16b0] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b0u))) & 0xffu);
/* 109158e3: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 109158e6: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 109158e9: mov bl, byte ptr [eax + 0x16b1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b1u))) & 0xffu);
/* 109158ef: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 109158f0: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 109158f3: mov ecx, edx */
  ecx = edx;
/* 109158f5: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 109158f8: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 109158fb: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 109158fe: mov edx, dword ptr [eax + 0x16b4] */
  edx = R32((uint32_t)(eax + 0x16b4u));
/* 10915904: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 10915908: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10915909: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 1091590c: mov cl, 0x10 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x10u) & 0xffu);
/* 1091590e: sub cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 10915910: shr bp, cl */
  { uint16_t a = (uint16_t)((ebp & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  ebp = (ebp & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 10915913: lea ecx, [edx + esi - 0x10] */
  ecx = (uint32_t)(edx + esi + 0xfffffff0u);
/* 10915917: mov word ptr [eax + 0x16b0], bp */
  W16((uint32_t)(eax + 0x16b0u), (ebp & 0xffffu));
/* 1091591e: jmp 0x1091592b */
  goto L_1091592b;
L_10915920: /* 10915920: shl ebp, cl */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebp = r;
  }
  }
/* 10915922: or word ptr [eax + 0x16b0], bp */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((ebp & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 10915929: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_1091592b: /* 1091592b: mov dword ptr [eax + 0x16b4], ecx */
  W32((uint32_t)(eax + 0x16b4u), ecx);
L_10915931: /* 10915931: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 10915935: cmp ecx, dword ptr [eax + 0x1698] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x1698u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 1091593b: jb 0x10915600 */
  if (cf) goto L_10915600;
L_10915941: /* 10915941: movzx edi, word ptr [ebx + 0x402] */
  edi = (uint32_t)(R16((uint32_t)(ebx + 0x402u)));
/* 10915948: mov ecx, dword ptr [eax + 0x16b4] */
  ecx = R32((uint32_t)(eax + 0x16b4u));
/* 1091594e: mov edx, 0x10 */
  edx = 0x10u;
/* 10915953: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 10915955: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10915957: jle 0x109159d1 */
  if ((zf || sf != of)) goto L_109159d1;
L_10915959: /* 10915959: movzx esi, word ptr [ebx + 0x400] */
  esi = (uint32_t)(R16((uint32_t)(ebx + 0x400u)));
/* 10915960: mov edx, esi */
  edx = esi;
/* 10915962: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 10915964: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 10915967: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 1091596b: or word ptr [eax + 0x16b0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 10915972: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 10915975: mov bl, byte ptr [eax + 0x16b0] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b0u))) & 0xffu);
/* 1091597b: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 1091597e: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 10915981: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 10915984: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* 10915988: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10915989: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 1091598c: mov ebp, edx */
  ebp = edx;
/* 1091598e: mov dl, byte ptr [eax + 0x16b1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b1u))) & 0xffu);
/* 10915994: mov byte ptr [ecx + ebp], dl */
  W8((uint32_t)(ecx + ebp), (edx & 0xffu));
/* 10915997: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 1091599a: mov edx, dword ptr [eax + 0x16b4] */
  edx = R32((uint32_t)(eax + 0x16b4u));
/* 109159a0: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 109159a1: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 109159a4: mov cl, 0x10 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x10u) & 0xffu);
/* 109159a6: sub cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 109159a8: shr si, cl */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  esi = (esi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 109159ab: lea ecx, [edx + edi - 0x10] */
  ecx = (uint32_t)(edx + edi + 0xfffffff0u);
/* 109159af: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 109159b0: mov dword ptr [eax + 0x16b4], ecx */
  W32((uint32_t)(eax + 0x16b4u), ecx);
/* 109159b6: mov word ptr [eax + 0x16b0], si */
  W16((uint32_t)(eax + 0x16b0u), (esi & 0xffffu));
/* 109159bd: movzx edx, word ptr [ebx + 0x402] */
  edx = (uint32_t)(R16((uint32_t)(ebx + 0x402u)));
/* 109159c4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 109159c5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 109159c6: mov dword ptr [eax + 0x16ac], edx */
  W32((uint32_t)(eax + 0x16acu), edx);
/* 109159cc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 109159cd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109159d0: ret  */
  esp += 4; SPILL(); return;
L_109159d1: /* 109159d1: mov dx, word ptr [ebx + 0x400] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx + 0x400u))) & 0xffffu);
/* 109159d8: shl dx, cl */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a << c);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 109159db: or word ptr [eax + 0x16b0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 109159e2: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 109159e4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 109159e5: mov dword ptr [eax + 0x16b4], ecx */
  W32((uint32_t)(eax + 0x16b4u), ecx);
/* 109159eb: movzx ecx, word ptr [ebx + 0x402] */
  ecx = (uint32_t)(R16((uint32_t)(ebx + 0x402u)));
/* 109159f2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 109159f3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 109159f4: mov dword ptr [eax + 0x16ac], ecx */
  W32((uint32_t)(eax + 0x16acu), ecx);
/* 109159fa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 109159fb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109159fe: ret  */
  esp += 4; SPILL(); return;
}

void f_109155fd(void) {
  LOAD_REGS();
L_109155fd: /* 109155fd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_10915600: /* 10915600: mov edx, dword ptr [eax + 0x169c] */
  edx = R32((uint32_t)(eax + 0x169cu));
/* 10915606: movzx ebp, word ptr [edx + ecx*2] */
  ebp = (uint32_t)(R16((uint32_t)(edx + ecx*2)));
/* 1091560a: mov edx, dword ptr [eax + 0x1690] */
  edx = R32((uint32_t)(eax + 0x1690u));
/* 10915610: movzx esi, byte ptr [ecx + edx] */
  esi = (uint32_t)(R8((uint32_t)(ecx + edx)));
/* 10915614: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10915615: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10915617: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 1091561b: mov ecx, dword ptr [eax + 0x16b4] */
  ecx = R32((uint32_t)(eax + 0x16b4u));
/* 10915621: jne 0x109156ab */
  if (!zf) goto L_109156ab;
L_10915627: /* 10915627: movzx edi, word ptr [ebx + esi*4 + 2] */
  edi = (uint32_t)(R16((uint32_t)(ebx + esi*4 + 0x2u)));
/* 1091562c: mov edx, 0x10 */
  edx = 0x10u;
/* 10915631: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 10915633: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10915635: jle 0x10915696 */
  if ((zf || sf != of)) goto L_10915696;
L_10915637: /* 10915637: movzx esi, word ptr [ebx + esi*4] */
  esi = (uint32_t)(R16((uint32_t)(ebx + esi*4)));
/* 1091563b: mov edx, esi */
  edx = esi;
/* 1091563d: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 1091563f: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 10915642: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 10915646: or word ptr [eax + 0x16b0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 1091564d: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 10915650: mov bl, byte ptr [eax + 0x16b0] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b0u))) & 0xffu);
/* 10915656: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 10915659: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 1091565c: mov bl, byte ptr [eax + 0x16b1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b1u))) & 0xffu);
/* 10915662: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10915663: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 10915666: mov ecx, edx */
  ecx = edx;
/* 10915668: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 1091566b: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 1091566e: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 10915671: mov edx, dword ptr [eax + 0x16b4] */
  edx = R32((uint32_t)(eax + 0x16b4u));
/* 10915677: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 1091567b: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 1091567c: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 1091567f: mov cl, 0x10 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x10u) & 0xffu);
/* 10915681: sub cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 10915683: shr si, cl */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  esi = (esi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 10915686: lea ecx, [edx + edi - 0x10] */
  ecx = (uint32_t)(edx + edi + 0xfffffff0u);
/* 1091568a: mov word ptr [eax + 0x16b0], si */
  W16((uint32_t)(eax + 0x16b0u), (esi & 0xffffu));
/* 10915691: jmp 0x1091592b */
  goto L_1091592b;
L_10915696: /* 10915696: mov dx, word ptr [ebx + esi*4] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx + esi*4))) & 0xffffu);
/* 1091569a: shl dx, cl */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a << c);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 1091569d: or word ptr [eax + 0x16b0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 109156a4: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 109156a6: jmp 0x1091592b */
  goto L_1091592b;
L_109156ab: /* 109156ab: movzx edx, byte ptr [esi + 0x10922568] */
  edx = (uint32_t)(R8((uint32_t)(esi + 0x10922568u)));
/* 109156b2: movzx edi, word ptr [ebx + edx*4 + 0x406] */
  edi = (uint32_t)(R16((uint32_t)(ebx + edx*4 + 0x406u)));
/* 109156ba: mov ebx, 0x10 */
  ebx = 0x10u;
/* 109156bf: sub ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 109156c1: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 109156c3: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 109156c7: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 109156cb: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 109156cf: jle 0x10915737 */
  if ((zf || sf != of)) goto L_10915737;
L_109156d1: /* 109156d1: movzx edi, word ptr [edi + edx*4 + 0x404] */
  edi = (uint32_t)(R16((uint32_t)(edi + edx*4 + 0x404u)));
/* 109156d9: mov edx, edi */
  edx = edi;
/* 109156db: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 109156dd: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 109156e0: or word ptr [eax + 0x16b0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 109156e7: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 109156ea: mov bl, byte ptr [eax + 0x16b0] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b0u))) & 0xffu);
/* 109156f0: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 109156f3: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 109156f6: mov bl, byte ptr [eax + 0x16b1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b1u))) & 0xffu);
/* 109156fc: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 109156fd: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 10915700: mov ecx, edx */
  ecx = edx;
/* 10915702: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 10915705: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 10915708: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 1091570b: mov edx, dword ptr [eax + 0x16b4] */
  edx = R32((uint32_t)(eax + 0x16b4u));
/* 10915711: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10915712: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 10915715: mov cl, 0x10 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x10u) & 0xffu);
/* 10915717: sub cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 10915719: shr di, cl */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  edi = (edi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 1091571c: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 10915720: lea edx, [edx + ecx - 0x10] */
  edx = (uint32_t)(edx + ecx + 0xfffffff0u);
/* 10915724: mov dword ptr [eax + 0x16b4], edx */
  W32((uint32_t)(eax + 0x16b4u), edx);
/* 1091572a: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 1091572e: mov word ptr [eax + 0x16b0], di */
  W16((uint32_t)(eax + 0x16b0u), (edi & 0xffffu));
/* 10915735: jmp 0x10915755 */
  goto L_10915755;
L_10915737: /* 10915737: mov di, word ptr [edi + edx*4 + 0x404] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + edx*4 + 0x404u))) & 0xffffu);
/* 1091573f: shl di, cl */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a << c);
  edi = (edi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 10915742: or word ptr [eax + 0x16b0], di */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 10915749: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 1091574d: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1091574f: mov dword ptr [eax + 0x16b4], ecx */
  W32((uint32_t)(eax + 0x16b4u), ecx);
L_10915755: /* 10915755: mov edi, dword ptr [edx*4 + 0x10921d20] */
  edi = R32((uint32_t)(edx*4 + 0x10921d20u));
/* 1091575c: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1091575e: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* 10915762: je 0x109157e5 */
  if (zf) goto L_109157e5;
L_10915768: /* 10915768: sub esi, dword ptr [edx*4 + 0x10922668] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edx*4 + 0x10922668u)));
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 1091576f: mov ecx, dword ptr [eax + 0x16b4] */
  ecx = R32((uint32_t)(eax + 0x16b4u));
/* 10915775: mov edx, 0x10 */
  edx = 0x10u;
/* 1091577a: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 1091577c: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1091577e: jle 0x109157d4 */
  if ((zf || sf != of)) goto L_109157d4;
L_10915780: /* 10915780: mov edx, esi */
  edx = esi;
/* 10915782: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 10915784: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 10915787: or word ptr [eax + 0x16b0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 1091578e: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 10915791: mov bl, byte ptr [eax + 0x16b0] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b0u))) & 0xffu);
/* 10915797: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 1091579a: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 1091579d: mov bl, byte ptr [eax + 0x16b1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b1u))) & 0xffu);
/* 109157a3: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 109157a4: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 109157a7: mov ecx, edx */
  ecx = edx;
/* 109157a9: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 109157ac: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 109157af: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 109157b2: mov edx, dword ptr [eax + 0x16b4] */
  edx = R32((uint32_t)(eax + 0x16b4u));
/* 109157b8: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* 109157bc: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 109157bd: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 109157c0: mov cl, 0x10 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x10u) & 0xffu);
/* 109157c2: sub cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 109157c4: shr si, cl */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  esi = (esi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 109157c7: lea ecx, [edx + edi - 0x10] */
  ecx = (uint32_t)(edx + edi + 0xfffffff0u);
/* 109157cb: mov word ptr [eax + 0x16b0], si */
  W16((uint32_t)(eax + 0x16b0u), (esi & 0xffffu));
/* 109157d2: jmp 0x109157df */
  goto L_109157df;
L_109157d4: /* 109157d4: shl esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
  }
/* 109157d6: or word ptr [eax + 0x16b0], si */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 109157dd: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_109157df: /* 109157df: mov dword ptr [eax + 0x16b4], ecx */
  W32((uint32_t)(eax + 0x16b4u), ecx);
L_109157e5: /* 109157e5: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  ebp = r;
  }
/* 109157e6: cmp ebp, 0x100 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 109157ec: jae 0x109157f7 */
  if (!cf) goto L_109157f7;
L_109157ee: /* 109157ee: movzx edi, byte ptr [ebp + 0x10922368] */
  edi = (uint32_t)(R8((uint32_t)(ebp + 0x10922368u)));
/* 109157f5: jmp 0x10915803 */
  goto L_10915803;
L_109157f7: /* 109157f7: mov edx, ebp */
  edx = ebp;
/* 109157f9: shr edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 7;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 109157fc: movzx edi, byte ptr [edx + 0x10922468] */
  edi = (uint32_t)(R8((uint32_t)(edx + 0x10922468u)));
L_10915803: /* 10915803: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 10915807: movzx edx, word ptr [ecx + edi*4 + 2] */
  edx = (uint32_t)(R16((uint32_t)(ecx + edi*4 + 0x2u)));
/* 1091580c: mov ecx, dword ptr [eax + 0x16b4] */
  ecx = R32((uint32_t)(eax + 0x16b4u));
/* 10915812: mov esi, 0x10 */
  esi = 0x10u;
/* 10915817: sub esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 10915819: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1091581b: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 1091581f: jle 0x10915887 */
  if ((zf || sf != of)) goto L_10915887;
L_10915821: /* 10915821: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 10915825: movzx esi, word ptr [edx + edi*4] */
  esi = (uint32_t)(R16((uint32_t)(edx + edi*4)));
/* 10915829: mov edx, esi */
  edx = esi;
/* 1091582b: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 1091582d: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 10915830: or word ptr [eax + 0x16b0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 10915837: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 1091583a: mov bl, byte ptr [eax + 0x16b0] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b0u))) & 0xffu);
/* 10915840: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 10915843: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 10915846: mov bl, byte ptr [eax + 0x16b1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b1u))) & 0xffu);
/* 1091584c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 1091584d: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 10915850: mov ecx, edx */
  ecx = edx;
/* 10915852: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 10915855: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 10915858: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 1091585b: mov edx, dword ptr [eax + 0x16b4] */
  edx = R32((uint32_t)(eax + 0x16b4u));
/* 10915861: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* 10915865: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10915866: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 10915869: mov cl, 0x10 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x10u) & 0xffu);
/* 1091586b: sub cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 1091586d: shr si, cl */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  esi = (esi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 10915870: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 10915874: lea edx, [edx + ecx - 0x10] */
  edx = (uint32_t)(edx + ecx + 0xfffffff0u);
/* 10915878: mov dword ptr [eax + 0x16b4], edx */
  W32((uint32_t)(eax + 0x16b4u), edx);
/* 1091587e: mov word ptr [eax + 0x16b0], si */
  W16((uint32_t)(eax + 0x16b0u), (esi & 0xffffu));
/* 10915885: jmp 0x109158a1 */
  goto L_109158a1;
L_10915887: /* 10915887: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 1091588b: mov si, word ptr [esi + edi*4] */
  esi = (esi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + edi*4))) & 0xffffu);
/* 1091588f: shl si, cl */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a << c);
  esi = (esi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 10915892: or word ptr [eax + 0x16b0], si */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 10915899: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1091589b: mov dword ptr [eax + 0x16b4], ecx */
  W32((uint32_t)(eax + 0x16b4u), ecx);
L_109158a1: /* 109158a1: mov esi, dword ptr [edi*4 + 0x10921d98] */
  esi = R32((uint32_t)(edi*4 + 0x10921d98u));
/* 109158a8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109158aa: je 0x10915931 */
  if (zf) goto L_10915931;
L_109158b0: /* 109158b0: sub ebp, dword ptr [edi*4 + 0x109226e0] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(edi*4 + 0x109226e0u)));
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 109158b7: mov ecx, dword ptr [eax + 0x16b4] */
  ecx = R32((uint32_t)(eax + 0x16b4u));
/* 109158bd: mov edx, 0x10 */
  edx = 0x10u;
/* 109158c2: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 109158c4: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 109158c6: jle 0x10915920 */
  if ((zf || sf != of)) goto L_10915920;
L_109158c8: /* 109158c8: mov edx, ebp */
  edx = ebp;
/* 109158ca: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 109158cc: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 109158cf: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 109158d3: or word ptr [eax + 0x16b0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 109158da: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 109158dd: mov bl, byte ptr [eax + 0x16b0] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b0u))) & 0xffu);
/* 109158e3: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 109158e6: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 109158e9: mov bl, byte ptr [eax + 0x16b1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b1u))) & 0xffu);
/* 109158ef: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 109158f0: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 109158f3: mov ecx, edx */
  ecx = edx;
/* 109158f5: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 109158f8: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 109158fb: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 109158fe: mov edx, dword ptr [eax + 0x16b4] */
  edx = R32((uint32_t)(eax + 0x16b4u));
/* 10915904: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 10915908: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10915909: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 1091590c: mov cl, 0x10 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x10u) & 0xffu);
/* 1091590e: sub cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 10915910: shr bp, cl */
  { uint16_t a = (uint16_t)((ebp & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  ebp = (ebp & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 10915913: lea ecx, [edx + esi - 0x10] */
  ecx = (uint32_t)(edx + esi + 0xfffffff0u);
/* 10915917: mov word ptr [eax + 0x16b0], bp */
  W16((uint32_t)(eax + 0x16b0u), (ebp & 0xffffu));
/* 1091591e: jmp 0x1091592b */
  goto L_1091592b;
L_10915920: /* 10915920: shl ebp, cl */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebp = r;
  }
  }
/* 10915922: or word ptr [eax + 0x16b0], bp */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((ebp & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 10915929: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_1091592b: /* 1091592b: mov dword ptr [eax + 0x16b4], ecx */
  W32((uint32_t)(eax + 0x16b4u), ecx);
L_10915931: /* 10915931: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 10915935: cmp ecx, dword ptr [eax + 0x1698] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x1698u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 1091593b: jb 0x10915600 */
  if (cf) goto L_10915600;
L_10915941: /* 10915941: movzx edi, word ptr [ebx + 0x402] */
  edi = (uint32_t)(R16((uint32_t)(ebx + 0x402u)));
/* 10915948: mov ecx, dword ptr [eax + 0x16b4] */
  ecx = R32((uint32_t)(eax + 0x16b4u));
/* 1091594e: mov edx, 0x10 */
  edx = 0x10u;
/* 10915953: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 10915955: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10915957: jle 0x109159d1 */
  if ((zf || sf != of)) goto L_109159d1;
L_10915959: /* 10915959: movzx esi, word ptr [ebx + 0x400] */
  esi = (uint32_t)(R16((uint32_t)(ebx + 0x400u)));
/* 10915960: mov edx, esi */
  edx = esi;
/* 10915962: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 10915964: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 10915967: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 1091596b: or word ptr [eax + 0x16b0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 10915972: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 10915975: mov bl, byte ptr [eax + 0x16b0] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b0u))) & 0xffu);
/* 1091597b: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 1091597e: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 10915981: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 10915984: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* 10915988: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10915989: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 1091598c: mov ebp, edx */
  ebp = edx;
/* 1091598e: mov dl, byte ptr [eax + 0x16b1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b1u))) & 0xffu);
/* 10915994: mov byte ptr [ecx + ebp], dl */
  W8((uint32_t)(ecx + ebp), (edx & 0xffu));
/* 10915997: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 1091599a: mov edx, dword ptr [eax + 0x16b4] */
  edx = R32((uint32_t)(eax + 0x16b4u));
/* 109159a0: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 109159a1: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 109159a4: mov cl, 0x10 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x10u) & 0xffu);
/* 109159a6: sub cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 109159a8: shr si, cl */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  esi = (esi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 109159ab: lea ecx, [edx + edi - 0x10] */
  ecx = (uint32_t)(edx + edi + 0xfffffff0u);
/* 109159af: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 109159b0: mov dword ptr [eax + 0x16b4], ecx */
  W32((uint32_t)(eax + 0x16b4u), ecx);
/* 109159b6: mov word ptr [eax + 0x16b0], si */
  W16((uint32_t)(eax + 0x16b0u), (esi & 0xffffu));
/* 109159bd: movzx edx, word ptr [ebx + 0x402] */
  edx = (uint32_t)(R16((uint32_t)(ebx + 0x402u)));
/* 109159c4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 109159c5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 109159c6: mov dword ptr [eax + 0x16ac], edx */
  W32((uint32_t)(eax + 0x16acu), edx);
/* 109159cc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 109159cd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109159d0: ret  */
  esp += 4; SPILL(); return;
L_109159d1: /* 109159d1: mov dx, word ptr [ebx + 0x400] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx + 0x400u))) & 0xffffu);
/* 109159d8: shl dx, cl */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a << c);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 109159db: or word ptr [eax + 0x16b0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 109159e2: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 109159e4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 109159e5: mov dword ptr [eax + 0x16b4], ecx */
  W32((uint32_t)(eax + 0x16b4u), ecx);
/* 109159eb: movzx ecx, word ptr [ebx + 0x402] */
  ecx = (uint32_t)(R16((uint32_t)(ebx + 0x402u)));
/* 109159f2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 109159f3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 109159f4: mov dword ptr [eax + 0x16ac], ecx */
  W32((uint32_t)(eax + 0x16acu), ecx);
/* 109159fa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 109159fb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109159fe: ret  */
  esp += 4; SPILL(); return;
}

void f_10915a00(void) {
  LOAD_REGS();
L_10915a00: /* 10915a00: movzx edx, word ptr [ecx + 0xa0] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0xa0u)));
/* 10915a07: movzx eax, word ptr [ecx + 0xa4] */
  eax = (uint32_t)(R16((uint32_t)(ecx + 0xa4u)));
/* 10915a0e: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10915a10: movzx edx, word ptr [ecx + 0x9c] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x9cu)));
/* 10915a17: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10915a19: movzx edx, word ptr [ecx + 0x98] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x98u)));
/* 10915a20: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10915a22: movzx edx, word ptr [ecx + 0x94] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x94u)));
/* 10915a29: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10915a2b: movzx edx, word ptr [ecx + 0x90] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x90u)));
/* 10915a32: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10915a34: movzx edx, word ptr [ecx + 0x8c] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x8cu)));
/* 10915a3b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10915a3c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10915a3d: xor esi, esi */
  esi = 0;
/* 10915a3f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10915a40: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10915a42: lea edx, [ecx + 0xa8] */
  edx = (uint32_t)(ecx + 0xa8u);
/* 10915a48: mov edi, 0x79 */
  edi = 0x79u;
/* 10915a4d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_10915a50: /* 10915a50: movzx ebx, word ptr [edx] */
  ebx = (uint32_t)(R16((uint32_t)(edx)));
/* 10915a53: add esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 10915a55: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10915a58: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 10915a59: jne 0x10915a50 */
  if (!zf) goto L_10915a50;
L_10915a5b: /* 10915a5b: lea edx, [ecx + 0x28c] */
  edx = (uint32_t)(ecx + 0x28cu);
/* 10915a61: mov edi, 0x80 */
  edi = 0x80u;
L_10915a66: /* 10915a66: movzx ebx, word ptr [edx] */
  ebx = (uint32_t)(R16((uint32_t)(edx)));
/* 10915a69: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10915a6b: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10915a6e: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 10915a6f: jne 0x10915a66 */
  if (!zf) goto L_10915a66;
L_10915a71: /* 10915a71: shr esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 10915a74: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10915a76: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10915a77: sbb al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint32_t cin = cf;
  uint8_t r = (uint8_t)(a - b - cin);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 10915a79: inc al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a + 1);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 10915a7b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10915a7c: mov byte ptr [ecx + 0x1c], al */
  W8((uint32_t)(ecx + 0x1cu), (eax & 0xffu));
/* 10915a7f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10915a80: ret  */
  esp += 4; SPILL(); return;
}

void f_10915a90(void) {
  LOAD_REGS();
L_10915a90: /* 10915a90: xor eax, eax */
  eax = 0;
/* 10915a92: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
L_10915a93: /* 10915a93: mov esi, ecx */
  esi = ecx;
/* 10915a95: and esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 10915a98: or eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 10915a9a: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 10915a9c: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 10915a9e: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 10915a9f: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10915aa1: jg 0x10915a93 */
  if ((!zf && sf == of)) goto L_10915a93;
L_10915aa3: /* 10915aa3: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 10915aa5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10915aa6: ret  */
  esp += 4; SPILL(); return;
}

void f_10915ab0(void) {
  LOAD_REGS();
L_10915ab0: /* 10915ab0: mov ecx, dword ptr [eax + 0x16b4] */
  ecx = R32((uint32_t)(eax + 0x16b4u));
/* 10915ab6: cmp ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10915ab9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10915aba: jne 0x10915af4 */
  if (!zf) goto L_10915af4;
L_10915abc: /* 10915abc: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 10915abf: mov bl, byte ptr [eax + 0x16b0] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b0u))) & 0xffu);
/* 10915ac5: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 10915ac8: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 10915acb: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 10915ace: mov bl, byte ptr [eax + 0x16b1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b1u))) & 0xffu);
/* 10915ad4: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10915ad5: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 10915ad8: mov ecx, edx */
  ecx = edx;
/* 10915ada: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 10915add: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 10915ae0: inc dword ptr [eax + 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + 0x14u), r);
  }
/* 10915ae3: xor ecx, ecx */
  ecx = 0;
/* 10915ae5: mov word ptr [eax + 0x16b0], cx */
  W16((uint32_t)(eax + 0x16b0u), (ecx & 0xffffu));
/* 10915aec: mov dword ptr [eax + 0x16b4], ecx */
  W32((uint32_t)(eax + 0x16b4u), ecx);
/* 10915af2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10915af3: ret  */
  esp += 4; SPILL(); return;
L_10915af4: /* 10915af4: cmp ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10915af7: jl 0x10915b2d */
  if ((sf != of)) goto L_10915b2d;
L_10915af9: /* 10915af9: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 10915afc: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 10915aff: mov bl, byte ptr [eax + 0x16b0] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b0u))) & 0xffu);
/* 10915b05: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 10915b08: movzx cx, byte ptr [eax + 0x16b1] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(eax + 0x16b1u)))) & 0xffffu);
/* 10915b10: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 10915b13: mov word ptr [eax + 0x16b0], cx */
  W16((uint32_t)(eax + 0x16b0u), (ecx & 0xffffu));
/* 10915b1a: mov ecx, dword ptr [eax + 0x16b4] */
  ecx = R32((uint32_t)(eax + 0x16b4u));
/* 10915b20: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10915b21: add ecx, -8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10915b24: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 10915b27: mov dword ptr [eax + 0x16b4], ecx */
  W32((uint32_t)(eax + 0x16b4u), ecx);
L_10915b2d: /* 10915b2d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10915b2e: ret  */
  esp += 4; SPILL(); return;
}

void f_10915b30(void) {
  LOAD_REGS();
L_10915b30: /* 10915b30: mov edx, dword ptr [eax + 0x16b4] */
  edx = R32((uint32_t)(eax + 0x16b4u));
/* 10915b36: cmp edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10915b39: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10915b3a: jle 0x10915b74 */
  if ((zf || sf != of)) goto L_10915b74;
L_10915b3c: /* 10915b3c: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 10915b3f: mov bl, byte ptr [eax + 0x16b0] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b0u))) & 0xffu);
/* 10915b45: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 10915b48: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 10915b4b: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 10915b4e: mov bl, byte ptr [eax + 0x16b1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b1u))) & 0xffu);
/* 10915b54: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10915b55: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 10915b58: mov ecx, edx */
  ecx = edx;
/* 10915b5a: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 10915b5d: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 10915b60: inc dword ptr [eax + 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + 0x14u), r);
  }
/* 10915b63: xor ecx, ecx */
  ecx = 0;
/* 10915b65: mov word ptr [eax + 0x16b0], cx */
  W16((uint32_t)(eax + 0x16b0u), (ecx & 0xffffu));
/* 10915b6c: mov dword ptr [eax + 0x16b4], ecx */
  W32((uint32_t)(eax + 0x16b4u), ecx);
/* 10915b72: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10915b73: ret  */
  esp += 4; SPILL(); return;
L_10915b74: /* 10915b74: xor ecx, ecx */
  ecx = 0;
/* 10915b76: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10915b78: jle 0x10915b8e */
  if ((zf || sf != of)) goto L_10915b8e;
L_10915b7a: /* 10915b7a: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 10915b7d: mov bl, byte ptr [eax + 0x16b0] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b0u))) & 0xffu);
/* 10915b83: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10915b84: mov esi, dword ptr [eax + 0x14] */
  esi = R32((uint32_t)(eax + 0x14u));
/* 10915b87: mov byte ptr [edx + esi], bl */
  W8((uint32_t)(edx + esi), (ebx & 0xffu));
/* 10915b8a: inc dword ptr [eax + 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + 0x14u), r);
  }
/* 10915b8d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_10915b8e: /* 10915b8e: mov word ptr [eax + 0x16b0], cx */
  W16((uint32_t)(eax + 0x16b0u), (ecx & 0xffffu));
/* 10915b95: mov dword ptr [eax + 0x16b4], ecx */
  W32((uint32_t)(eax + 0x16b4u), ecx);
/* 10915b9b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10915b9c: ret  */
  esp += 4; SPILL(); return;
}

void f_10915ba0(void) {
  LOAD_REGS();
L_10915ba0: /* 10915ba0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10915ba1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10915ba2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10915ba3: mov ebx, ecx */
  ebx = ecx;
/* 10915ba5: mov edi, edx */
  edi = edx;
/* 10915ba7: call 0x10915b30 */
  esp -= 4; W32(esp, 0x10915bacu); SPILL(); f_10915b30(); if (g_unwind) return; RELOAD();
/* 10915bac: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 10915bb0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10915bb2: mov dword ptr [eax + 0x16ac], 8 */
  W32((uint32_t)(eax + 0x16acu), 0x8u);
/* 10915bbc: je 0x10915bf9 */
  if (zf) goto L_10915bf9;
L_10915bbe: /* 10915bbe: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 10915bc1: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 10915bc4: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 10915bc7: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 10915bca: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 10915bcd: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10915bce: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 10915bd1: mov byte ptr [ecx + edx], bh */
  W8((uint32_t)(ecx + edx), ((ebx >> 8) & 0xffu));
/* 10915bd4: mov esi, dword ptr [eax + 0x14] */
  esi = R32((uint32_t)(eax + 0x14u));
/* 10915bd7: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 10915bda: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 10915bdb: mov dword ptr [eax + 0x14], esi */
  W32((uint32_t)(eax + 0x14u), esi);
/* 10915bde: mov cl, bl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
/* 10915be0: not cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(~(ecx & 0xffu)) & 0xffu);
/* 10915be2: mov byte ptr [esi + edx], cl */
  W8((uint32_t)(esi + edx), (ecx & 0xffu));
/* 10915be5: mov esi, dword ptr [eax + 0x14] */
  esi = R32((uint32_t)(eax + 0x14u));
/* 10915be8: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 10915beb: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 10915bec: mov ecx, ebx */
  ecx = ebx;
/* 10915bee: not ecx */
  ecx = ~ecx;
/* 10915bf0: mov dword ptr [eax + 0x14], esi */
  W32((uint32_t)(eax + 0x14u), esi);
/* 10915bf3: mov byte ptr [esi + edx], ch */
  W8((uint32_t)(esi + edx), ((ecx >> 8) & 0xffu));
/* 10915bf6: inc dword ptr [eax + 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + 0x14u), r);
  }
L_10915bf9: /* 10915bf9: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10915bfb: je 0x10915c1e */
  if (zf) goto L_10915c1e;
L_10915bfd: /* 10915bfd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_10915c00: /* 10915c00: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 10915c03: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 10915c06: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 10915c0a: mov bl, byte ptr [edi] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 10915c0c: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 10915c0f: mov esi, dword ptr [eax + 0x14] */
  esi = R32((uint32_t)(eax + 0x14u));
/* 10915c12: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 10915c16: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 10915c17: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 10915c18: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* 10915c19: mov dword ptr [eax + 0x14], esi */
  W32((uint32_t)(eax + 0x14u), esi);
/* 10915c1c: jne 0x10915c00 */
  if (!zf) goto L_10915c00;
L_10915c1e: /* 10915c1e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10915c1f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10915c20: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10915c21: ret  */
  esp += 4; SPILL(); return;
}

void f_10915c30(void) {
  LOAD_REGS();
L_10915c30: /* 10915c30: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 10915c34: lea eax, [edx + 0x8c] */
  eax = (uint32_t)(edx + 0x8cu);
/* 10915c3a: mov dword ptr [edx + 0xb10], eax */
  W32((uint32_t)(edx + 0xb10u), eax);
/* 10915c40: lea eax, [edx + 0xa74] */
  eax = (uint32_t)(edx + 0xa74u);
/* 10915c46: mov dword ptr [edx + 0xb28], eax */
  W32((uint32_t)(edx + 0xb28u), eax);
/* 10915c4c: xor eax, eax */
  eax = 0;
/* 10915c4e: lea ecx, [edx + 0x980] */
  ecx = (uint32_t)(edx + 0x980u);
/* 10915c54: mov dword ptr [edx + 0xb18], 0x1092f578 */
  W32((uint32_t)(edx + 0xb18u), 0x1092f578u);
/* 10915c5e: mov dword ptr [edx + 0xb1c], ecx */
  W32((uint32_t)(edx + 0xb1cu), ecx);
/* 10915c64: mov dword ptr [edx + 0xb24], 0x1092f58c */
  W32((uint32_t)(edx + 0xb24u), 0x1092f58cu);
/* 10915c6e: mov dword ptr [edx + 0xb30], 0x1092f5a0 */
  W32((uint32_t)(edx + 0xb30u), 0x1092f5a0u);
/* 10915c78: mov word ptr [edx + 0x16b0], ax */
  W16((uint32_t)(edx + 0x16b0u), (eax & 0xffffu));
/* 10915c7f: mov dword ptr [edx + 0x16b4], eax */
  W32((uint32_t)(edx + 0x16b4u), eax);
/* 10915c85: mov dword ptr [edx + 0x16ac], 8 */
  W32((uint32_t)(edx + 0x16acu), 0x8u);
/* 10915c8f: jmp 0x10914980 */
  SPILL(); f_10914980(); return;
}

void f_10915ca0(void) {
  LOAD_REGS();
L_10915ca0: /* 10915ca0: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 10915ca3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10915ca4: lea esi, [esp + 6] */
  esi = (uint32_t)(esp + 0x6u);
/* 10915ca8: xor ecx, ecx */
  ecx = 0;
/* 10915caa: mov eax, 1 */
  eax = 0x1u;
/* 10915caf: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
L_10915cb1: /* 10915cb1: lea esi, [edx + eax*2] */
  esi = (uint32_t)(edx + eax*2);
/* 10915cb4: movzx esi, word ptr [esp + esi + 4] */
  esi = (uint32_t)(R16((uint32_t)(esp + esi + 0x4u)));
/* 10915cb9: add si, cx */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a + b);
  esi = (esi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 10915cbc: shl esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 10915cbe: mov ecx, esi */
  ecx = esi;
/* 10915cc0: mov word ptr [esp + eax*2 + 4], cx */
  W16((uint32_t)(esp + eax*2 + 0x4u), (ecx & 0xffffu));
/* 10915cc5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 10915cc6: cmp eax, 0xf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10915cc9: jle 0x10915cb1 */
  if ((zf || sf != of)) goto L_10915cb1;
L_10915ccb: /* 10915ccb: xor esi, esi */
  esi = 0;
/* 10915ccd: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10915ccf: jl 0x10915d0c */
  if ((sf != of)) goto L_10915d0c;
L_10915cd1: /* 10915cd1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
L_10915cd2: /* 10915cd2: movzx edx, word ptr [edi + esi*4 + 2] */
  edx = (uint32_t)(R16((uint32_t)(edi + esi*4 + 0x2u)));
/* 10915cd7: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10915cd9: je 0x10915d06 */
  if (zf) goto L_10915d06;
L_10915cdb: /* 10915cdb: xor eax, eax */
  eax = 0;
/* 10915cdd: mov ax, word ptr [esp + edx*2 + 8] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + edx*2 + 0x8u))) & 0xffffu);
/* 10915ce2: movzx ecx, ax */
  ecx = (uint32_t)((eax & 0xffffu));
/* 10915ce5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 10915ce6: mov word ptr [esp + edx*2 + 8], ax */
  W16((uint32_t)(esp + edx*2 + 0x8u), (eax & 0xffffu));
/* 10915ceb: xor eax, eax */
  eax = 0;
/* 10915ced: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_10915cf0: /* 10915cf0: mov ebp, ecx */
  ebp = ecx;
/* 10915cf2: and ebp, 1 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 10915cf5: or eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 10915cf7: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 10915cf9: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 10915cfb: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 10915cfc: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10915cfe: jg 0x10915cf0 */
  if ((!zf && sf == of)) goto L_10915cf0;
L_10915d00: /* 10915d00: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 10915d02: mov word ptr [edi + esi*4], ax */
  W16((uint32_t)(edi + esi*4), (eax & 0xffffu));
L_10915d06: /* 10915d06: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 10915d07: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10915d09: jle 0x10915cd2 */
  if ((zf || sf != of)) goto L_10915cd2;
L_10915d0b: /* 10915d0b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_10915d0c: /* 10915d0c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10915d0d: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10915d10: ret  */
  esp += 4; SPILL(); return;
}

void f_10915d20(void) {
  LOAD_REGS();
L_10915d20: /* 10915d20: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 10915d23: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 10915d27: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10915d28: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 10915d29: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10915d2a: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 10915d2c: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 10915d2f: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 10915d32: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 10915d34: xor edx, edx */
  edx = 0;
/* 10915d36: or ebp, 0xffffffff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ebp = r;
  }
/* 10915d39: xor eax, eax */
  eax = 0;
/* 10915d3b: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10915d3d: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 10915d41: mov dword ptr [esp + 0xc], ebp */
  W32((uint32_t)(esp + 0xcu), ebp);
/* 10915d45: mov dword ptr [esi + 0x1448], edx */
  W32((uint32_t)(esi + 0x1448u), edx);
/* 10915d4b: mov dword ptr [esi + 0x144c], 0x23d */
  W32((uint32_t)(esi + 0x144cu), 0x23du);
/* 10915d55: jle 0x10915d8e */
  if ((zf || sf != of)) goto L_10915d8e;
L_10915d57: /* 10915d57: cmp word ptr [edi + eax*4], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edi + eax*4))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 10915d5b: je 0x10915d80 */
  if (zf) goto L_10915d80;
L_10915d5d: /* 10915d5d: mov ecx, dword ptr [esi + 0x1448] */
  ecx = R32((uint32_t)(esi + 0x1448u));
/* 10915d63: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10915d64: mov dword ptr [esi + 0x1448], ecx */
  W32((uint32_t)(esi + 0x1448u), ecx);
/* 10915d6a: mov dword ptr [esi + ecx*4 + 0xb54], eax */
  W32((uint32_t)(esi + ecx*4 + 0xb54u), eax);
/* 10915d71: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 10915d75: mov byte ptr [eax + esi + 0x1450], dl */
  W8((uint32_t)(eax + esi + 0x1450u), (edx & 0xffu));
/* 10915d7c: mov ebp, eax */
  ebp = eax;
/* 10915d7e: jmp 0x10915d85 */
  goto L_10915d85;
L_10915d80: /* 10915d80: mov word ptr [edi + eax*4 + 2], dx */
  W16((uint32_t)(edi + eax*4 + 0x2u), (edx & 0xffffu));
L_10915d85: /* 10915d85: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 10915d89: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 10915d8a: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10915d8c: jl 0x10915d57 */
  if ((sf != of)) goto L_10915d57;
L_10915d8e: /* 10915d8e: cmp dword ptr [esi + 0x1448], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x1448u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10915d95: jge 0x10915ded */
  if ((sf == of)) goto L_10915ded;
L_10915d97: /* 10915d97: cmp ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10915d9a: jge 0x10915da1 */
  if ((sf == of)) goto L_10915da1;
L_10915d9c: /* 10915d9c: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 10915d9d: mov eax, ebp */
  eax = ebp;
/* 10915d9f: jmp 0x10915da3 */
  goto L_10915da3;
L_10915da1: /* 10915da1: xor eax, eax */
  eax = 0;
L_10915da3: /* 10915da3: mov ecx, dword ptr [esi + 0x1448] */
  ecx = R32((uint32_t)(esi + 0x1448u));
/* 10915da9: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10915daa: mov dword ptr [esi + 0x1448], ecx */
  W32((uint32_t)(esi + 0x1448u), ecx);
/* 10915db0: mov dword ptr [esi + ecx*4 + 0xb54], eax */
  W32((uint32_t)(esi + ecx*4 + 0xb54u), eax);
/* 10915db7: mov word ptr [edi + eax*4], 1 */
  W16((uint32_t)(edi + eax*4), 0x1u);
/* 10915dbd: mov byte ptr [esi + eax + 0x1450], dl */
  W8((uint32_t)(esi + eax + 0x1450u), (edx & 0xffu));
/* 10915dc4: mov ecx, dword ptr [esi + 0x16a0] */
  ecx = R32((uint32_t)(esi + 0x16a0u));
/* 10915dca: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 10915dcb: cmp ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10915dcd: mov dword ptr [esi + 0x16a0], ecx */
  W32((uint32_t)(esi + 0x16a0u), ecx);
/* 10915dd3: je 0x10915de0 */
  if (zf) goto L_10915de0;
L_10915dd5: /* 10915dd5: movzx eax, word ptr [ebx + eax*4 + 2] */
  eax = (uint32_t)(R16((uint32_t)(ebx + eax*4 + 0x2u)));
/* 10915dda: sub dword ptr [esi + 0x16a4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x16a4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(esi + 0x16a4u), r);
  }
L_10915de0: /* 10915de0: cmp dword ptr [esi + 0x1448], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x1448u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10915de7: jl 0x10915d97 */
  if ((sf != of)) goto L_10915d97;
L_10915de9: /* 10915de9: mov dword ptr [esp + 0xc], ebp */
  W32((uint32_t)(esp + 0xcu), ebp);
L_10915ded: /* 10915ded: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 10915df1: mov dword ptr [ecx + 4], ebp */
  W32((uint32_t)(ecx + 0x4u), ebp);
/* 10915df4: mov eax, dword ptr [esi + 0x1448] */
  eax = R32((uint32_t)(esi + 0x1448u));
/* 10915dfa: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 10915dfb: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10915dfd: mov ebx, eax */
  ebx = eax;
/* 10915dff: sar ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebx = r;
  }
/* 10915e01: cmp ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10915e04: jl 0x10915e17 */
  if ((sf != of)) goto L_10915e17;
L_10915e06: /* 10915e06: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10915e07: mov eax, esi */
  eax = esi;
/* 10915e09: call 0x109149f0 */
  esp -= 4; W32(esp, 0x10915e0eu); SPILL(); f_109149f0(); if (g_unwind) return; RELOAD();
/* 10915e0e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10915e11: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 10915e12: cmp ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10915e15: jge 0x10915e06 */
  if ((sf == of)) goto L_10915e06;
L_10915e17: /* 10915e17: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 10915e1b: jmp 0x10915e20 */
  goto L_10915e20;
L_10915e20: /* 10915e20: mov eax, dword ptr [esi + 0x1448] */
  eax = R32((uint32_t)(esi + 0x1448u));
/* 10915e26: mov edx, dword ptr [esi + eax*4 + 0xb54] */
  edx = R32((uint32_t)(esi + eax*4 + 0xb54u));
/* 10915e2d: mov ebx, dword ptr [esi + 0xb58] */
  ebx = R32((uint32_t)(esi + 0xb58u));
/* 10915e33: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 10915e34: mov dword ptr [esi + 0x1448], eax */
  W32((uint32_t)(esi + 0x1448u), eax);
/* 10915e3a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 10915e3c: mov eax, esi */
  eax = esi;
/* 10915e3e: mov dword ptr [esi + 0xb58], edx */
  W32((uint32_t)(esi + 0xb58u), edx);
/* 10915e44: call 0x109149f0 */
  esp -= 4; W32(esp, 0x10915e49u); SPILL(); f_109149f0(); if (g_unwind) return; RELOAD();
/* 10915e49: mov edx, dword ptr [esi + 0x144c] */
  edx = R32((uint32_t)(esi + 0x144cu));
/* 10915e4f: mov eax, dword ptr [esi + 0xb58] */
  eax = R32((uint32_t)(esi + 0xb58u));
/* 10915e55: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10915e58: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 10915e59: mov dword ptr [esi + 0x144c], edx */
  W32((uint32_t)(esi + 0x144cu), edx);
/* 10915e5f: mov ecx, edx */
  ecx = edx;
/* 10915e61: mov dword ptr [esi + ecx*4 + 0xb54], ebx */
  W32((uint32_t)(esi + ecx*4 + 0xb54u), ebx);
/* 10915e68: mov ecx, dword ptr [esi + 0x144c] */
  ecx = R32((uint32_t)(esi + 0x144cu));
/* 10915e6e: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 10915e6f: mov dword ptr [esi + 0x144c], ecx */
  W32((uint32_t)(esi + 0x144cu), ecx);
/* 10915e75: mov dword ptr [esi + ecx*4 + 0xb54], eax */
  W32((uint32_t)(esi + ecx*4 + 0xb54u), eax);
/* 10915e7c: mov cx, word ptr [edi + eax*4] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + eax*4))) & 0xffffu);
/* 10915e80: add cx, word ptr [edi + ebx*4] */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(edi + ebx*4)));
  uint16_t r = (uint16_t)(a + b);
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 10915e84: mov word ptr [edi + ebp*4], cx */
  W16((uint32_t)(edi + ebp*4), (ecx & 0xffffu));
/* 10915e88: mov cl, byte ptr [esi + eax + 0x1450] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + eax + 0x1450u))) & 0xffu);
/* 10915e8f: mov dl, byte ptr [esi + ebx + 0x1450] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + ebx + 0x1450u))) & 0xffu);
/* 10915e96: cmp dl, cl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* 10915e98: jb 0x10915e9f */
  if (cf) goto L_10915e9f;
L_10915e9a: /* 10915e9a: movzx ecx, dl */
  ecx = (uint32_t)((edx & 0xffu));
/* 10915e9d: jmp 0x10915ea2 */
  goto L_10915ea2;
L_10915e9f: /* 10915e9f: movzx ecx, cl */
  ecx = (uint32_t)((ecx & 0xffu));
L_10915ea2: /* 10915ea2: inc cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a + 1);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 10915ea4: mov byte ptr [esi + ebp + 0x1450], cl */
  W8((uint32_t)(esi + ebp + 0x1450u), (ecx & 0xffu));
/* 10915eab: mov word ptr [edi + eax*4 + 2], bp */
  W16((uint32_t)(edi + eax*4 + 0x2u), (ebp & 0xffffu));
/* 10915eb0: mov word ptr [edi + ebx*4 + 2], bp */
  W16((uint32_t)(edi + ebx*4 + 0x2u), (ebp & 0xffffu));
/* 10915eb5: mov dword ptr [esi + 0xb58], ebp */
  W32((uint32_t)(esi + 0xb58u), ebp);
/* 10915ebb: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 10915ebd: mov eax, esi */
  eax = esi;
/* 10915ebf: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 10915ec0: call 0x109149f0 */
  esp -= 4; W32(esp, 0x10915ec5u); SPILL(); f_109149f0(); if (g_unwind) return; RELOAD();
/* 10915ec5: mov eax, dword ptr [esi + 0x1448] */
  eax = R32((uint32_t)(esi + 0x1448u));
/* 10915ecb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10915ece: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10915ed1: jge 0x10915e20 */
  if ((sf == of)) goto L_10915e20;
L_10915ed7: /* 10915ed7: mov eax, dword ptr [esi + 0x144c] */
  eax = R32((uint32_t)(esi + 0x144cu));
/* 10915edd: mov edx, dword ptr [esi + 0xb58] */
  edx = R32((uint32_t)(esi + 0xb58u));
/* 10915ee3: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 10915ee4: mov dword ptr [esi + 0x144c], eax */
  W32((uint32_t)(esi + 0x144cu), eax);
/* 10915eea: mov dword ptr [esi + eax*4 + 0xb54], edx */
  W32((uint32_t)(esi + eax*4 + 0xb54u), edx);
/* 10915ef1: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 10915ef5: mov edx, esi */
  edx = esi;
/* 10915ef7: call 0x10914ac0 */
  esp -= 4; W32(esp, 0x10915efcu); SPILL(); f_10914ac0(); if (g_unwind) return; RELOAD();
/* 10915efc: mov ebx, dword ptr [esp + 0xc] */
  ebx = R32((uint32_t)(esp + 0xcu));
/* 10915f00: lea edx, [esi + 0xb34] */
  edx = (uint32_t)(esi + 0xb34u);
/* 10915f06: call 0x10915ca0 */
  esp -= 4; W32(esp, 0x10915f0bu); SPILL(); f_10915ca0(); if (g_unwind) return; RELOAD();
/* 10915f0b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10915f0c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10915f0d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10915f0e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10915f11: ret  */
  esp += 4; SPILL(); return;
}

void f_10915e1d(void) {
  LOAD_REGS();
L_10915e1d: /* 10915e1d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_10915e20: /* 10915e20: mov eax, dword ptr [esi + 0x1448] */
  eax = R32((uint32_t)(esi + 0x1448u));
/* 10915e26: mov edx, dword ptr [esi + eax*4 + 0xb54] */
  edx = R32((uint32_t)(esi + eax*4 + 0xb54u));
/* 10915e2d: mov ebx, dword ptr [esi + 0xb58] */
  ebx = R32((uint32_t)(esi + 0xb58u));
/* 10915e33: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 10915e34: mov dword ptr [esi + 0x1448], eax */
  W32((uint32_t)(esi + 0x1448u), eax);
/* 10915e3a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 10915e3c: mov eax, esi */
  eax = esi;
/* 10915e3e: mov dword ptr [esi + 0xb58], edx */
  W32((uint32_t)(esi + 0xb58u), edx);
/* 10915e44: call 0x109149f0 */
  esp -= 4; W32(esp, 0x10915e49u); SPILL(); f_109149f0(); if (g_unwind) return; RELOAD();
/* 10915e49: mov edx, dword ptr [esi + 0x144c] */
  edx = R32((uint32_t)(esi + 0x144cu));
/* 10915e4f: mov eax, dword ptr [esi + 0xb58] */
  eax = R32((uint32_t)(esi + 0xb58u));
/* 10915e55: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10915e58: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 10915e59: mov dword ptr [esi + 0x144c], edx */
  W32((uint32_t)(esi + 0x144cu), edx);
/* 10915e5f: mov ecx, edx */
  ecx = edx;
/* 10915e61: mov dword ptr [esi + ecx*4 + 0xb54], ebx */
  W32((uint32_t)(esi + ecx*4 + 0xb54u), ebx);
/* 10915e68: mov ecx, dword ptr [esi + 0x144c] */
  ecx = R32((uint32_t)(esi + 0x144cu));
/* 10915e6e: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 10915e6f: mov dword ptr [esi + 0x144c], ecx */
  W32((uint32_t)(esi + 0x144cu), ecx);
/* 10915e75: mov dword ptr [esi + ecx*4 + 0xb54], eax */
  W32((uint32_t)(esi + ecx*4 + 0xb54u), eax);
/* 10915e7c: mov cx, word ptr [edi + eax*4] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + eax*4))) & 0xffffu);
/* 10915e80: add cx, word ptr [edi + ebx*4] */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(edi + ebx*4)));
  uint16_t r = (uint16_t)(a + b);
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 10915e84: mov word ptr [edi + ebp*4], cx */
  W16((uint32_t)(edi + ebp*4), (ecx & 0xffffu));
/* 10915e88: mov cl, byte ptr [esi + eax + 0x1450] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + eax + 0x1450u))) & 0xffu);
/* 10915e8f: mov dl, byte ptr [esi + ebx + 0x1450] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + ebx + 0x1450u))) & 0xffu);
/* 10915e96: cmp dl, cl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* 10915e98: jb 0x10915e9f */
  if (cf) goto L_10915e9f;
L_10915e9a: /* 10915e9a: movzx ecx, dl */
  ecx = (uint32_t)((edx & 0xffu));
/* 10915e9d: jmp 0x10915ea2 */
  goto L_10915ea2;
L_10915e9f: /* 10915e9f: movzx ecx, cl */
  ecx = (uint32_t)((ecx & 0xffu));
L_10915ea2: /* 10915ea2: inc cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a + 1);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 10915ea4: mov byte ptr [esi + ebp + 0x1450], cl */
  W8((uint32_t)(esi + ebp + 0x1450u), (ecx & 0xffu));
/* 10915eab: mov word ptr [edi + eax*4 + 2], bp */
  W16((uint32_t)(edi + eax*4 + 0x2u), (ebp & 0xffffu));
/* 10915eb0: mov word ptr [edi + ebx*4 + 2], bp */
  W16((uint32_t)(edi + ebx*4 + 0x2u), (ebp & 0xffffu));
/* 10915eb5: mov dword ptr [esi + 0xb58], ebp */
  W32((uint32_t)(esi + 0xb58u), ebp);
/* 10915ebb: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 10915ebd: mov eax, esi */
  eax = esi;
/* 10915ebf: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 10915ec0: call 0x109149f0 */
  esp -= 4; W32(esp, 0x10915ec5u); SPILL(); f_109149f0(); if (g_unwind) return; RELOAD();
/* 10915ec5: mov eax, dword ptr [esi + 0x1448] */
  eax = R32((uint32_t)(esi + 0x1448u));
/* 10915ecb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10915ece: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10915ed1: jge 0x10915e20 */
  if ((sf == of)) goto L_10915e20;
L_10915ed7: /* 10915ed7: mov eax, dword ptr [esi + 0x144c] */
  eax = R32((uint32_t)(esi + 0x144cu));
/* 10915edd: mov edx, dword ptr [esi + 0xb58] */
  edx = R32((uint32_t)(esi + 0xb58u));
/* 10915ee3: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 10915ee4: mov dword ptr [esi + 0x144c], eax */
  W32((uint32_t)(esi + 0x144cu), eax);
/* 10915eea: mov dword ptr [esi + eax*4 + 0xb54], edx */
  W32((uint32_t)(esi + eax*4 + 0xb54u), edx);
/* 10915ef1: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 10915ef5: mov edx, esi */
  edx = esi;
/* 10915ef7: call 0x10914ac0 */
  esp -= 4; W32(esp, 0x10915efcu); SPILL(); f_10914ac0(); if (g_unwind) return; RELOAD();
/* 10915efc: mov ebx, dword ptr [esp + 0xc] */
  ebx = R32((uint32_t)(esp + 0xcu));
/* 10915f00: lea edx, [esi + 0xb34] */
  edx = (uint32_t)(esi + 0xb34u);
/* 10915f06: call 0x10915ca0 */
  esp -= 4; W32(esp, 0x10915f0bu); SPILL(); f_10915ca0(); if (g_unwind) return; RELOAD();
/* 10915f0b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10915f0c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10915f0d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10915f0e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10915f11: ret  */
  esp += 4; SPILL(); return;
}

void f_10915f20(void) {
  LOAD_REGS();
L_10915f20: /* 10915f20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10915f21: mov esi, eax */
  esi = eax;
/* 10915f23: mov ecx, dword ptr [esi + 0xb14] */
  ecx = R32((uint32_t)(esi + 0xb14u));
/* 10915f29: lea eax, [esi + 0x8c] */
  eax = (uint32_t)(esi + 0x8cu);
/* 10915f2f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10915f30: call 0x10914cd0 */
  esp -= 4; W32(esp, 0x10915f35u); SPILL(); f_10914cd0(); if (g_unwind) return; RELOAD();
/* 10915f35: mov ecx, dword ptr [esi + 0xb20] */
  ecx = R32((uint32_t)(esi + 0xb20u));
/* 10915f3b: lea eax, [esi + 0x980] */
  eax = (uint32_t)(esi + 0x980u);
/* 10915f41: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10915f42: call 0x10914cd0 */
  esp -= 4; W32(esp, 0x10915f47u); SPILL(); f_10914cd0(); if (g_unwind) return; RELOAD();
/* 10915f47: lea eax, [esi + 0xb28] */
  eax = (uint32_t)(esi + 0xb28u);
/* 10915f4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10915f4e: call 0x10915d20 */
  esp -= 4; W32(esp, 0x10915f53u); SPILL(); f_10915d20(); if (g_unwind) return; RELOAD();
/* 10915f53: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10915f56: mov eax, 0x12 */
  eax = 0x12u;
/* 10915f5b: jmp 0x10915f60 */
  goto L_10915f60;
L_10915f60: /* 10915f60: movzx ecx, byte ptr [eax + 0x10921e5c] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x10921e5cu)));
/* 10915f67: cmp word ptr [esi + ecx*4 + 0xa76], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + ecx*4 + 0xa76u))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 10915f70: jne 0x10915f78 */
  if (!zf) goto L_10915f78;
L_10915f72: /* 10915f72: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 10915f73: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10915f76: jge 0x10915f60 */
  if ((sf == of)) goto L_10915f60;
L_10915f78: /* 10915f78: mov ecx, dword ptr [esi + 0x16a0] */
  ecx = R32((uint32_t)(esi + 0x16a0u));
/* 10915f7e: lea edx, [eax + eax*2 + 0x11] */
  edx = (uint32_t)(eax + eax*2 + 0x11u);
/* 10915f82: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10915f84: mov dword ptr [esi + 0x16a0], ecx */
  W32((uint32_t)(esi + 0x16a0u), ecx);
/* 10915f8a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10915f8b: ret  */
  esp += 4; SPILL(); return;
}

void f_10915f5d(void) {
  LOAD_REGS();
L_10915f5d: /* 10915f5d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_10915f60: /* 10915f60: movzx ecx, byte ptr [eax + 0x10921e5c] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x10921e5cu)));
/* 10915f67: cmp word ptr [esi + ecx*4 + 0xa76], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + ecx*4 + 0xa76u))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 10915f70: jne 0x10915f78 */
  if (!zf) goto L_10915f78;
L_10915f72: /* 10915f72: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 10915f73: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10915f76: jge 0x10915f60 */
  if ((sf == of)) goto L_10915f60;
L_10915f78: /* 10915f78: mov ecx, dword ptr [esi + 0x16a0] */
  ecx = R32((uint32_t)(esi + 0x16a0u));
/* 10915f7e: lea edx, [eax + eax*2 + 0x11] */
  edx = (uint32_t)(eax + eax*2 + 0x11u);
/* 10915f82: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10915f84: mov dword ptr [esi + 0x16a0], ecx */
  W32((uint32_t)(esi + 0x16a0u), ecx);
/* 10915f8a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10915f8b: ret  */
  esp += 4; SPILL(); return;
}

void f_10915f90(void) {
  LOAD_REGS();
L_10915f90: /* 10915f90: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 10915f94: mov ecx, dword ptr [eax + 0x16b4] */
  ecx = R32((uint32_t)(eax + 0x16b4u));
/* 10915f9a: cmp ecx, 0xd */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10915f9d: jle 0x10916009 */
  if ((zf || sf != of)) goto L_10916009;
L_10915f9f: /* 10915f9f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10915fa0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10915fa1: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 10915fa5: mov edx, esi */
  edx = esi;
/* 10915fa7: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 10915fa9: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 10915fac: or word ptr [eax + 0x16b0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 10915fb3: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 10915fb6: mov bl, byte ptr [eax + 0x16b0] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b0u))) & 0xffu);
/* 10915fbc: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 10915fbf: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 10915fc2: mov bl, byte ptr [eax + 0x16b1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b1u))) & 0xffu);
/* 10915fc8: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 10915fcb: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10915fcc: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 10915fcf: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 10915fd2: mov edx, dword ptr [eax + 0x16b4] */
  edx = R32((uint32_t)(eax + 0x16b4u));
/* 10915fd8: mov ebx, dword ptr [eax + 0x14] */
  ebx = R32((uint32_t)(eax + 0x14u));
/* 10915fdb: mov cl, 0x10 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x10u) & 0xffu);
/* 10915fdd: sub cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 10915fdf: shr si, cl */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  esi = (esi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 10915fe2: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 10915fe6: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 10915fe7: add edx, -0xd */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffffff3u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10915fea: mov word ptr [eax + 0x16b0], si */
  W16((uint32_t)(eax + 0x16b0u), (esi & 0xffffu));
/* 10915ff1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10915ff2: mov dword ptr [eax + 0x14], ebx */
  W32((uint32_t)(eax + 0x14u), ebx);
/* 10915ff5: mov dword ptr [eax + 0x16b4], edx */
  W32((uint32_t)(eax + 0x16b4u), edx);
/* 10915ffb: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 10915fff: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10916000: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 10916002: call 0x10915ba0 */
  esp -= 4; W32(esp, 0x10916007u); SPILL(); f_10915ba0(); if (g_unwind) return; RELOAD();
/* 10916007: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 10916008: ret  */
  esp += 4; SPILL(); return;
L_10916009: /* 10916009: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 1091600d: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 1091600f: add ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10916012: mov dword ptr [eax + 0x16b4], ecx */
  W32((uint32_t)(eax + 0x16b4u), ecx);
/* 10916018: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 1091601c: or word ptr [eax + 0x16b0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 10916023: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 10916027: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 10916029: call 0x10915ba0 */
  esp -= 4; W32(esp, 0x1091602eu); SPILL(); f_10915ba0(); if (g_unwind) return; RELOAD();
/* 1091602e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 1091602f: ret  */
  esp += 4; SPILL(); return;
}

void f_10916030(void) {
  LOAD_REGS();
L_10916030: /* 10916030: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 10916034: mov ecx, dword ptr [eax + 0x16b4] */
  ecx = R32((uint32_t)(eax + 0x16b4u));
/* 1091603a: mov edx, 2 */
  edx = 0x2u;
/* 1091603f: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 10916041: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10916042: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10916043: or word ptr [eax + 0x16b0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 1091604a: cmp ecx, 0xd */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1091604d: jle 0x1091609c */
  if ((zf || sf != of)) goto L_1091609c;
L_1091604f: /* 1091604f: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 10916052: mov bl, byte ptr [eax + 0x16b0] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b0u))) & 0xffu);
/* 10916058: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 1091605b: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 1091605e: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 10916061: mov bl, byte ptr [eax + 0x16b1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b1u))) & 0xffu);
/* 10916067: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 1091606a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 1091606b: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 1091606e: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 10916071: mov edx, dword ptr [eax + 0x16b4] */
  edx = R32((uint32_t)(eax + 0x16b4u));
/* 10916077: mov ebx, dword ptr [eax + 0x14] */
  ebx = R32((uint32_t)(eax + 0x14u));
/* 1091607a: mov cl, 0x10 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x10u) & 0xffu);
/* 1091607c: sub cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 1091607e: mov esi, 2 */
  esi = 0x2u;
/* 10916083: shr si, cl */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  esi = (esi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 10916086: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 10916087: add edx, -0xd */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffffff3u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1091608a: mov dword ptr [eax + 0x14], ebx */
  W32((uint32_t)(eax + 0x14u), ebx);
/* 1091608d: mov word ptr [eax + 0x16b0], si */
  W16((uint32_t)(eax + 0x16b0u), (esi & 0xffffu));
/* 10916094: mov dword ptr [eax + 0x16b4], edx */
  W32((uint32_t)(eax + 0x16b4u), edx);
/* 1091609a: jmp 0x109160a5 */
  goto L_109160a5;
L_1091609c: /* 1091609c: add ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1091609f: mov dword ptr [eax + 0x16b4], ecx */
  W32((uint32_t)(eax + 0x16b4u), ecx);
L_109160a5: /* 109160a5: mov ecx, dword ptr [eax + 0x16b4] */
  ecx = R32((uint32_t)(eax + 0x16b4u));
/* 109160ab: xor edx, edx */
  edx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 109160ad: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 109160af: or word ptr [eax + 0x16b0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 109160b6: cmp ecx, 9 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x9u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 109160b9: jle 0x10916105 */
  if ((zf || sf != of)) goto L_10916105;
L_109160bb: /* 109160bb: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 109160be: mov bl, byte ptr [eax + 0x16b0] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b0u))) & 0xffu);
/* 109160c4: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 109160c7: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 109160ca: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 109160cd: mov bl, byte ptr [eax + 0x16b1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b1u))) & 0xffu);
/* 109160d3: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 109160d6: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 109160d7: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 109160da: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 109160dd: mov edx, dword ptr [eax + 0x16b4] */
  edx = R32((uint32_t)(eax + 0x16b4u));
/* 109160e3: mov ebx, dword ptr [eax + 0x14] */
  ebx = R32((uint32_t)(eax + 0x14u));
/* 109160e6: mov cl, 0x10 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x10u) & 0xffu);
/* 109160e8: sub cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 109160ea: xor esi, esi */
  esi = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 109160ec: shr si, cl */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  esi = (esi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 109160ef: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 109160f0: add edx, -9 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffffff7u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 109160f3: mov dword ptr [eax + 0x14], ebx */
  W32((uint32_t)(eax + 0x14u), ebx);
/* 109160f6: mov word ptr [eax + 0x16b0], si */
  W16((uint32_t)(eax + 0x16b0u), (esi & 0xffffu));
/* 109160fd: mov dword ptr [eax + 0x16b4], edx */
  W32((uint32_t)(eax + 0x16b4u), edx);
/* 10916103: jmp 0x1091610e */
  goto L_1091610e;
L_10916105: /* 10916105: add ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10916108: mov dword ptr [eax + 0x16b4], ecx */
  W32((uint32_t)(eax + 0x16b4u), ecx);
L_1091610e: /* 1091610e: call 0x10915ab0 */
  esp -= 4; W32(esp, 0x10916113u); SPILL(); f_10915ab0(); if (g_unwind) return; RELOAD();
/* 10916113: mov ecx, dword ptr [eax + 0x16b4] */
  ecx = R32((uint32_t)(eax + 0x16b4u));
/* 10916119: mov edx, dword ptr [eax + 0x16ac] */
  edx = R32((uint32_t)(eax + 0x16acu));
/* 1091611f: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 10916121: add edx, 0xb */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10916124: cmp edx, 9 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x9u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10916127: jge 0x10916214 */
  if ((sf == of)) goto L_10916214;
L_1091612d: /* 1091612d: mov edx, 2 */
  edx = 0x2u;
/* 10916132: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 10916134: or word ptr [eax + 0x16b0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 1091613b: cmp ecx, 0xd */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1091613e: jle 0x1091618d */
  if ((zf || sf != of)) goto L_1091618d;
L_10916140: /* 10916140: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 10916143: mov bl, byte ptr [eax + 0x16b0] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b0u))) & 0xffu);
/* 10916149: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 1091614c: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 1091614f: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 10916152: mov bl, byte ptr [eax + 0x16b1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b1u))) & 0xffu);
/* 10916158: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 1091615b: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 1091615c: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 1091615f: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 10916162: mov edx, dword ptr [eax + 0x16b4] */
  edx = R32((uint32_t)(eax + 0x16b4u));
/* 10916168: mov ebx, dword ptr [eax + 0x14] */
  ebx = R32((uint32_t)(eax + 0x14u));
/* 1091616b: mov cl, 0x10 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x10u) & 0xffu);
/* 1091616d: sub cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 1091616f: mov esi, 2 */
  esi = 0x2u;
/* 10916174: shr si, cl */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  esi = (esi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 10916177: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 10916178: add edx, -0xd */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffffff3u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1091617b: mov dword ptr [eax + 0x14], ebx */
  W32((uint32_t)(eax + 0x14u), ebx);
/* 1091617e: mov word ptr [eax + 0x16b0], si */
  W16((uint32_t)(eax + 0x16b0u), (esi & 0xffffu));
/* 10916185: mov dword ptr [eax + 0x16b4], edx */
  W32((uint32_t)(eax + 0x16b4u), edx);
/* 1091618b: jmp 0x10916196 */
  goto L_10916196;
L_1091618d: /* 1091618d: add ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10916190: mov dword ptr [eax + 0x16b4], ecx */
  W32((uint32_t)(eax + 0x16b4u), ecx);
L_10916196: /* 10916196: mov ecx, dword ptr [eax + 0x16b4] */
  ecx = R32((uint32_t)(eax + 0x16b4u));
/* 1091619c: xor edx, edx */
  edx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 1091619e: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 109161a0: or word ptr [eax + 0x16b0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x16b0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(eax + 0x16b0u), r);
  }
/* 109161a7: cmp ecx, 9 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x9u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 109161aa: jle 0x10916206 */
  if ((zf || sf != of)) goto L_10916206;
L_109161ac: /* 109161ac: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 109161af: mov bl, byte ptr [eax + 0x16b0] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b0u))) & 0xffu);
/* 109161b5: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 109161b8: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 109161bb: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 109161be: mov bl, byte ptr [eax + 0x16b1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x16b1u))) & 0xffu);
/* 109161c4: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 109161c7: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 109161c8: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 109161cb: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 109161ce: mov edx, dword ptr [eax + 0x16b4] */
  edx = R32((uint32_t)(eax + 0x16b4u));
/* 109161d4: mov ebx, dword ptr [eax + 0x14] */
  ebx = R32((uint32_t)(eax + 0x14u));
/* 109161d7: mov cl, 0x10 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x10u) & 0xffu);
/* 109161d9: sub cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 109161db: xor esi, esi */
  esi = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 109161dd: shr si, cl */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  esi = (esi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 109161e0: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 109161e1: add edx, -9 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffffff7u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 109161e4: mov dword ptr [eax + 0x14], ebx */
  W32((uint32_t)(eax + 0x14u), ebx);
/* 109161e7: mov word ptr [eax + 0x16b0], si */
  W16((uint32_t)(eax + 0x16b0u), (esi & 0xffffu));
/* 109161ee: mov dword ptr [eax + 0x16b4], edx */
  W32((uint32_t)(eax + 0x16b4u), edx);
/* 109161f4: call 0x10915ab0 */
  esp -= 4; W32(esp, 0x109161f9u); SPILL(); f_10915ab0(); if (g_unwind) return; RELOAD();
/* 109161f9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 109161fa: mov dword ptr [eax + 0x16ac], 7 */
  W32((uint32_t)(eax + 0x16acu), 0x7u);
/* 10916204: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10916205: ret  */
  esp += 4; SPILL(); return;
L_10916206: /* 10916206: add ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10916209: mov dword ptr [eax + 0x16b4], ecx */
  W32((uint32_t)(eax + 0x16b4u), ecx);
/* 1091620f: call 0x10915ab0 */
  esp -= 4; W32(esp, 0x10916214u); SPILL(); f_10915ab0(); if (g_unwind) return; RELOAD();
L_10916214: /* 10916214: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10916215: mov dword ptr [eax + 0x16ac], 7 */
  W32((uint32_t)(eax + 0x16acu), 0x7u);
/* 1091621f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10916220: ret  */
  esp += 4; SPILL(); return;
}

void f_10916230(void) {
  LOAD_REGS();
L_10916230: /* 10916230: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10916231: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 10916232: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 10916236: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10916237: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 1091623b: mov ecx, dword ptr [esi + 0x7c] */
  ecx = R32((uint32_t)(esi + 0x7cu));
/* 1091623e: xor eax, eax */
  eax = 0;
/* 10916240: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10916242: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10916243: jle 0x10916292 */
  if ((zf || sf != of)) goto L_10916292;
L_10916245: /* 10916245: cmp byte ptr [esi + 0x1c], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x1cu))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 10916249: jne 0x10916252 */
  if (!zf) goto L_10916252;
L_1091624b: /* 1091624b: mov ecx, esi */
  ecx = esi;
/* 1091624d: call 0x10915a00 */
  esp -= 4; W32(esp, 0x10916252u); SPILL(); f_10915a00(); if (g_unwind) return; RELOAD();
L_10916252: /* 10916252: lea eax, [esi + 0xb10] */
  eax = (uint32_t)(esi + 0xb10u);
/* 10916258: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10916259: call 0x10915d20 */
  esp -= 4; W32(esp, 0x1091625eu); SPILL(); f_10915d20(); if (g_unwind) return; RELOAD();
/* 1091625e: lea ecx, [esi + 0xb1c] */
  ecx = (uint32_t)(esi + 0xb1cu);
/* 10916264: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10916265: call 0x10915d20 */
  esp -= 4; W32(esp, 0x1091626au); SPILL(); f_10915d20(); if (g_unwind) return; RELOAD();
/* 1091626a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1091626d: mov eax, esi */
  eax = esi;
/* 1091626f: call 0x10915f20 */
  esp -= 4; W32(esp, 0x10916274u); SPILL(); f_10915f20(); if (g_unwind) return; RELOAD();
/* 10916274: mov edx, dword ptr [esi + 0x16a0] */
  edx = R32((uint32_t)(esi + 0x16a0u));
/* 1091627a: mov ecx, dword ptr [esi + 0x16a4] */
  ecx = R32((uint32_t)(esi + 0x16a4u));
/* 10916280: add edx, 0xa */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10916283: add ecx, 0xa */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10916286: shr edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 10916289: shr ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 1091628c: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 1091628e: ja 0x10916297 */
  if ((!cf && !zf)) goto L_10916297;
L_10916290: /* 10916290: jmp 0x10916295 */
  goto L_10916295;
L_10916292: /* 10916292: lea ecx, [ebp + 5] */
  ecx = (uint32_t)(ebp + 0x5u);
L_10916295: /* 10916295: mov edx, ecx */
  edx = ecx;
L_10916297: /* 10916297: lea edi, [ebp + 4] */
  edi = (uint32_t)(ebp + 0x4u);
/* 1091629a: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 1091629c: ja 0x109162bb */
  if ((!cf && !zf)) goto L_109162bb;
L_1091629e: /* 1091629e: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 109162a2: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109162a4: je 0x109162bb */
  if (zf) goto L_109162bb;
L_109162a6: /* 109162a6: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 109162aa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 109162ab: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 109162ac: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 109162ad: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 109162ae: call 0x10915f90 */
  esp -= 4; W32(esp, 0x109162b3u); SPILL(); f_10915f90(); if (g_unwind) return; RELOAD();
/* 109162b3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109162b6: jmp 0x109163fb */
  goto L_109163fb;
L_109162bb: /* 109162bb: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 109162bf: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109162c1: mov ecx, dword ptr [esi + 0x16b4] */
  ecx = R32((uint32_t)(esi + 0x16b4u));
/* 109162c7: jne 0x10916355 */
  if (!zf) goto L_10916355;
L_109162cd: /* 109162cd: cmp ecx, 0xd */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 109162d0: lea eax, [edi + 2] */
  eax = (uint32_t)(edi + 0x2u);
/* 109162d3: jle 0x1091632a */
  if ((zf || sf != of)) goto L_1091632a;
L_109162d5: /* 109162d5: mov edx, eax */
  edx = eax;
/* 109162d7: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 109162d9: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 109162dc: or word ptr [esi + 0x16b0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0x16b0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(esi + 0x16b0u), r);
  }
/* 109162e3: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* 109162e6: mov bl, byte ptr [esi + 0x16b0] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x16b0u))) & 0xffu);
/* 109162ec: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 109162ef: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* 109162f2: mov bl, byte ptr [esi + 0x16b1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x16b1u))) & 0xffu);
/* 109162f8: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 109162f9: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 109162fc: mov ecx, edx */
  ecx = edx;
/* 109162fe: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 10916301: mov byte ptr [ecx + edx], bl */
  W8((uint32_t)(ecx + edx), (ebx & 0xffu));
/* 10916304: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 10916307: mov edx, dword ptr [esi + 0x16b4] */
  edx = R32((uint32_t)(esi + 0x16b4u));
/* 1091630d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 1091630e: mov dword ptr [esi + 0x14], ecx */
  W32((uint32_t)(esi + 0x14u), ecx);
/* 10916311: mov cl, 0x10 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x10u) & 0xffu);
/* 10916313: sub cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 10916315: shr ax, cl */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 10916318: add edx, -0xd */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffffff3u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1091631b: mov dword ptr [esi + 0x16b4], edx */
  W32((uint32_t)(esi + 0x16b4u), edx);
/* 10916321: mov word ptr [esi + 0x16b0], ax */
  W16((uint32_t)(esi + 0x16b0u), (eax & 0xffffu));
/* 10916328: jmp 0x1091633c */
  goto L_1091633c;
L_1091632a: /* 1091632a: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 1091632c: or word ptr [esi + 0x16b0], ax */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0x16b0u))); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(esi + 0x16b0u), r);
  }
/* 10916333: add ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10916336: mov dword ptr [esi + 0x16b4], ecx */
  W32((uint32_t)(esi + 0x16b4u), ecx);
L_1091633c: /* 1091633c: push 0x109222f0 */
  { uint32_t v = 0x109222f0u; esp -= 4; W32(esp, v); }
/* 10916341: push 0x10921e70 */
  { uint32_t v = 0x10921e70u; esp -= 4; W32(esp, v); }
/* 10916346: mov eax, esi */
  eax = esi;
/* 10916348: call 0x109155e0 */
  esp -= 4; W32(esp, 0x1091634du); SPILL(); f_109155e0(); if (g_unwind) return; RELOAD();
/* 1091634d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916350: jmp 0x109163fb */
  goto L_109163fb;
L_10916355: /* 10916355: cmp ecx, 0xd */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10916358: lea edx, [edi + 4] */
  edx = (uint32_t)(edi + 0x4u);
/* 1091635b: jle 0x109163b8 */
  if ((zf || sf != of)) goto L_109163b8;
L_1091635d: /* 1091635d: mov ebx, edx */
  ebx = edx;
/* 1091635f: shl ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
  }
/* 10916361: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 10916364: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 10916368: or word ptr [esi + 0x16b0], bx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0x16b0u))); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(esi + 0x16b0u), r);
  }
/* 1091636f: mov ebx, dword ptr [esi + 0x14] */
  ebx = R32((uint32_t)(esi + 0x14u));
/* 10916372: mov al, byte ptr [esi + 0x16b0] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x16b0u))) & 0xffu);
/* 10916378: mov byte ptr [ecx + ebx], al */
  W8((uint32_t)(ecx + ebx), (eax & 0xffu));
/* 1091637b: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 1091637e: mov al, byte ptr [esi + 0x16b1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x16b1u))) & 0xffu);
/* 10916384: mov ebx, dword ptr [esi + 8] */
  ebx = R32((uint32_t)(esi + 0x8u));
/* 10916387: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10916388: mov dword ptr [esi + 0x14], ecx */
  W32((uint32_t)(esi + 0x14u), ecx);
/* 1091638b: mov byte ptr [ecx + ebx], al */
  W8((uint32_t)(ecx + ebx), (eax & 0xffu));
/* 1091638e: mov ebx, dword ptr [esi + 0x16b4] */
  ebx = R32((uint32_t)(esi + 0x16b4u));
/* 10916394: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 10916397: mov cl, 0x10 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x10u) & 0xffu);
/* 10916399: sub cl, bl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 1091639b: shr dx, cl */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
  }
/* 1091639e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 1091639f: add ebx, -0xd */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xfffffff3u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 109163a2: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 109163a5: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 109163a9: mov word ptr [esi + 0x16b0], dx */
  W16((uint32_t)(esi + 0x16b0u), (edx & 0xffffu));
/* 109163b0: mov dword ptr [esi + 0x16b4], ebx */
  W32((uint32_t)(esi + 0x16b4u), ebx);
/* 109163b6: jmp 0x109163ca */
  goto L_109163ca;
L_109163b8: /* 109163b8: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 109163ba: or word ptr [esi + 0x16b0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0x16b0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(esi + 0x16b0u), r);
  }
/* 109163c1: add ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 109163c4: mov dword ptr [esi + 0x16b4], ecx */
  W32((uint32_t)(esi + 0x16b4u), ecx);
L_109163ca: /* 109163ca: mov ecx, dword ptr [esi + 0xb14] */
  ecx = R32((uint32_t)(esi + 0xb14u));
/* 109163d0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 109163d1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109163d2: mov eax, dword ptr [esi + 0xb20] */
  eax = R32((uint32_t)(esi + 0xb20u));
/* 109163d8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 109163d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109163da: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 109163db: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 109163dc: mov eax, esi */
  eax = esi;
/* 109163de: call 0x109152c0 */
  esp -= 4; W32(esp, 0x109163e3u); SPILL(); f_109152c0(); if (g_unwind) return; RELOAD();
/* 109163e3: lea edx, [esi + 0x980] */
  edx = (uint32_t)(esi + 0x980u);
/* 109163e9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 109163ea: lea eax, [esi + 0x8c] */
  eax = (uint32_t)(esi + 0x8cu);
/* 109163f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109163f1: mov eax, esi */
  eax = esi;
/* 109163f3: call 0x109155e0 */
  esp -= 4; W32(esp, 0x109163f8u); SPILL(); f_109155e0(); if (g_unwind) return; RELOAD();
/* 109163f8: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_109163fb: /* 109163fb: mov edx, esi */
  edx = esi;
/* 109163fd: call 0x10914980 */
  esp -= 4; W32(esp, 0x10916402u); SPILL(); f_10914980(); if (g_unwind) return; RELOAD();
/* 10916402: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10916404: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10916405: je 0x10916411 */
  if (zf) goto L_10916411;
L_10916407: /* 10916407: mov eax, esi */
  eax = esi;
/* 10916409: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1091640a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1091640b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1091640c: jmp 0x10915b30 */
  SPILL(); f_10915b30(); return;
L_10916411: /* 10916411: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10916412: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10916413: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10916414: ret  */
  esp += 4; SPILL(); return;
}

void f_10916420(void) {
  LOAD_REGS();
L_10916420: /* 10916420: mov eax, 0x1092f65c */
  eax = 0x1092f65cu;
/* 10916425: ret  */
  esp += 4; SPILL(); return;
}

void f_10916430(void) {
  LOAD_REGS();
L_10916430: /* 10916430: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 10916434: lea ecx, [eax*4] */
  ecx = (uint32_t)(eax*4);
/* 1091643b: mov edx, 0x1092f63c */
  edx = 0x1092f63cu;
/* 10916440: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 10916442: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 10916444: ret  */
  esp += 4; SPILL(); return;
}

void f_10916450(void) {
  LOAD_REGS();
L_10916450: /* 10916450: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 10916454: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 10916458: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10916459: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1091645a: call dword ptr [0x1095a034] */
  esp -= 4; W32(esp, 0x10916460u); SPILL(); f_4016cb(); if (g_unwind) return; /* MSVCR70!calloc */ RELOAD();
/* 10916460: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916463: ret  */
  esp += 4; SPILL(); return;
}

void f_10916470(void) {
  LOAD_REGS();
L_10916470: /* 10916470: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 10916474: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10916475: call dword ptr [0x1095a038] */
  esp -= 4; W32(esp, 0x1091647bu); SPILL(); f_401156(); if (g_unwind) return; /* MSVCR70!free */ RELOAD();
/* 1091647b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 1091647c: ret  */
  esp += 4; SPILL(); return;
}

void f_10916480(void) {
  LOAD_REGS();
L_10916480: /* 10916480: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 10916484: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10916486: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10916487: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 1091648b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1091648c: je 0x10916493 */
  if (zf) goto L_10916493;
L_1091648e: /* 1091648e: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 10916491: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_10916493: /* 10916493: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 10916495: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10916498: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 1091649c: je 0x109164a3 */
  if (zf) goto L_109164a3;
L_1091649e: /* 1091649e: cmp eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109164a1: jne 0x109164b1 */
  if (!zf) goto L_109164b1;
L_109164a3: /* 109164a3: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 109164a6: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 109164a9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 109164aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109164ab: call dword ptr [edi + 0x24] */
  { uint32_t t = R32((uint32_t)(edi + 0x24u)); esp -= 4; W32(esp, 0x109164aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 109164ae: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_109164b1: /* 109164b1: cmp dword ptr [esi], 6 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109164b4: jne 0x109164c3 */
  if (!zf) goto L_109164c3;
L_109164b6: /* 109164b6: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 109164b9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 109164ba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 109164bb: call 0x109178f0 */
  esp -= 4; W32(esp, 0x109164c0u); SPILL(); f_109178f0(); if (g_unwind) return; RELOAD();
/* 109164c0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_109164c3: /* 109164c3: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 109164c6: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* 109164c9: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 109164cc: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 109164cf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109164d1: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 109164d7: mov dword ptr [esi + 0x1c], 0 */
  W32((uint32_t)(esi + 0x1cu), 0x0u);
/* 109164de: mov dword ptr [esi + 0x20], 0 */
  W32((uint32_t)(esi + 0x20u), 0x0u);
/* 109164e5: je 0x109164f8 */
  if (zf) goto L_109164f8;
L_109164e7: /* 109164e7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 109164e9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 109164eb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 109164ed: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x109164efu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 109164ef: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* 109164f2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109164f5: mov dword ptr [edi + 0x30], eax */
  W32((uint32_t)(edi + 0x30u), eax);
L_109164f8: /* 109164f8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 109164f9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 109164fa: ret  */
  esp += 4; SPILL(); return;
}

void f_10916500(void) {
  LOAD_REGS();
L_10916500: /* 10916500: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10916501: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10916502: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 10916506: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 10916509: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 1091650b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1091650d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1091650e: call dword ptr [edi + 0x20] */
  { uint32_t t = R32((uint32_t)(edi + 0x20u)); esp -= 4; W32(esp, 0x10916511u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10916511: mov esi, eax */
  esi = eax;
/* 10916513: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916516: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10916518: je 0x1091653d */
  if (zf) goto L_1091653d;
L_1091651a: /* 1091651a: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* 1091651d: push 0x5a0 */
  { uint32_t v = 0x5a0u; esp -= 4; W32(esp, v); }
/* 10916522: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 10916524: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10916525: call dword ptr [edi + 0x20] */
  { uint32_t t = R32((uint32_t)(edi + 0x20u)); esp -= 4; W32(esp, 0x10916528u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10916528: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1091652b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1091652d: mov dword ptr [esi + 0x24], eax */
  W32((uint32_t)(esi + 0x24u), eax);
/* 10916530: jne 0x10916542 */
  if (!zf) goto L_10916542;
L_10916532: /* 10916532: mov edx, dword ptr [edi + 0x28] */
  edx = R32((uint32_t)(edi + 0x28u));
/* 10916535: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10916536: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10916537: call dword ptr [edi + 0x24] */
  { uint32_t t = R32((uint32_t)(edi + 0x24u)); esp -= 4; W32(esp, 0x1091653au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1091653a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_1091653d: /* 1091653d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1091653e: xor eax, eax */
  eax = 0;
/* 10916540: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10916541: ret  */
  esp += 4; SPILL(); return;
L_10916542: /* 10916542: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 10916545: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10916546: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 1091654a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1091654b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1091654d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1091654e: call dword ptr [edi + 0x20] */
  { uint32_t t = R32((uint32_t)(edi + 0x20u)); esp -= 4; W32(esp, 0x10916551u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10916551: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916554: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10916556: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 10916559: jne 0x10916577 */
  if (!zf) goto L_10916577;
L_1091655b: /* 1091655b: mov ecx, dword ptr [esi + 0x24] */
  ecx = R32((uint32_t)(esi + 0x24u));
/* 1091655e: mov edx, dword ptr [edi + 0x28] */
  edx = R32((uint32_t)(edi + 0x28u));
/* 10916561: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10916562: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10916563: call dword ptr [edi + 0x24] */
  { uint32_t t = R32((uint32_t)(edi + 0x24u)); esp -= 4; W32(esp, 0x10916566u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10916566: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 10916569: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1091656a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1091656b: call dword ptr [edi + 0x24] */
  { uint32_t t = R32((uint32_t)(edi + 0x24u)); esp -= 4; W32(esp, 0x1091656eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1091656e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916571: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10916572: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10916573: xor eax, eax */
  eax = 0;
/* 10916575: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10916576: ret  */
  esp += 4; SPILL(); return;
L_10916577: /* 10916577: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 1091657b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1091657d: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1091657f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10916580: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10916581: mov dword ptr [esi + 0x2c], eax */
  W32((uint32_t)(esi + 0x2cu), eax);
/* 10916584: mov dword ptr [esi + 0x38], ecx */
  W32((uint32_t)(esi + 0x38u), ecx);
/* 10916587: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 1091658d: call 0x10916480 */
  esp -= 4; W32(esp, 0x10916592u); SPILL(); f_10916480(); if (g_unwind) return; RELOAD();
/* 10916592: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916595: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10916596: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10916597: mov eax, esi */
  eax = esi;
/* 10916599: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1091659a: ret  */
  esp += 4; SPILL(); return;
}

void f_109165a0(void) {
  LOAD_REGS();
L_109165a0: /* 109165a0: sub esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 109165a3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 109165a4: mov ebx, dword ptr [esp + 0x3c] */
  ebx = R32((uint32_t)(esp + 0x3cu));
/* 109165a8: mov ecx, dword ptr [ebx + 0x20] */
  ecx = R32((uint32_t)(ebx + 0x20u));
/* 109165ab: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 109165ac: mov ebp, dword ptr [ebx + 0x1c] */
  ebp = R32((uint32_t)(ebx + 0x1cu));
/* 109165af: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 109165b0: mov esi, dword ptr [esp + 0x48] */
  esi = R32((uint32_t)(esp + 0x48u));
/* 109165b4: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 109165b7: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 109165bb: mov eax, dword ptr [ebx + 0x34] */
  eax = R32((uint32_t)(ebx + 0x34u));
/* 109165be: mov dword ptr [esp + 0x44], ecx */
  W32((uint32_t)(esp + 0x44u), ecx);
/* 109165c2: mov ecx, dword ptr [ebx + 0x30] */
  ecx = R32((uint32_t)(ebx + 0x30u));
/* 109165c5: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 109165c7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 109165c8: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 109165ca: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 109165ce: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 109165d2: jae 0x109165d9 */
  if (!cf) goto L_109165d9;
L_109165d4: /* 109165d4: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 109165d6: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 109165d7: jmp 0x109165de */
  goto L_109165de;
L_109165d9: /* 109165d9: mov ecx, dword ptr [ebx + 0x2c] */
  ecx = R32((uint32_t)(ebx + 0x2cu));
/* 109165dc: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
L_109165de: /* 109165de: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 109165e0: cmp edx, 9 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x9u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 109165e3: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 109165e7: jbe 0x10916629 */
  if ((cf | zf)) goto L_10916629;
L_109165e9: /* 109165e9: push -2 */
  { uint32_t v = 0xfffffffeu; esp -= 4; W32(esp, v); }
L_109165eb: /* 109165eb: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 109165ef: mov dword ptr [ebx + 0x20], edx */
  W32((uint32_t)(ebx + 0x20u), edx);
L_109165f2: /* 109165f2: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 109165f6: mov dword ptr [ebx + 0x1c], ebp */
  W32((uint32_t)(ebx + 0x1cu), ebp);
/* 109165f9: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 109165fb: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 109165fe: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 10916601: mov ecx, edi */
  ecx = edi;
/* 10916603: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 10916605: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10916607: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
L_1091660a: /* 1091660a: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 1091660e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1091660f: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 10916611: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10916612: mov dword ptr [ebx + 0x34], edx */
  W32((uint32_t)(ebx + 0x34u), edx);
/* 10916615: call 0x10918070 */
  esp -= 4; W32(esp, 0x1091661au); SPILL(); f_10918070(); if (g_unwind) return; RELOAD();
/* 1091661a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1091661d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1091661e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1091661f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10916620: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10916621: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916624: ret  */
  esp += 4; SPILL(); return;
L_10916625: /* 10916625: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
L_10916629: /* 10916629: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 1091662d: jmp dword ptr [edx*4 + 0x109170d8] */
  switch (R32((uint32_t)(edx*4 + 0x109170d8u))) {
    case 0x10916634u: goto L_10916634;
    case 0x10916694u: goto L_10916694;
    case 0x109166b2u: goto L_109166b2;
    case 0x10916707u: goto L_10916707;
    case 0x1091671cu: goto L_1091671c;
    case 0x1091678au: goto L_1091678a;
    case 0x109168bdu: goto L_109168bd;
    case 0x10916954u: goto L_10916954;
    case 0x10916a49u: goto L_10916a49;
    case 0x10916ca2u: goto L_10916ca2;
    case 0x10916d9du: goto L_10916d9d;
    case 0x10916dcbu: goto L_10916dcb;
    case 0x1091704bu: goto L_1091704b;
    case 0x1091709au: goto L_1091709a;
    default: guest_badjump(0x1091662d, R32((uint32_t)(edx*4 + 0x109170d8u))); return;
  }
L_10916634: /* 10916634: cmp ebp, 3 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10916637: jae 0x10916675 */
  if (!cf) goto L_10916675;
L_10916639: /* 10916639: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_10916640: /* 10916640: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 10916644: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 10916646: je 0x10916d57 */
  if (zf) goto L_10916d57;
L_1091664c: /* 1091664c: mov edx, ecx */
  edx = ecx;
/* 1091664e: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  of = (r) == 0x7fffffffu;
  edx = r;
  }
/* 1091664f: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 10916653: movzx edx, byte ptr [edi] */
  edx = (uint32_t)(R8((uint32_t)(edi)));
/* 10916656: mov ecx, ebp */
  ecx = ebp;
/* 10916658: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 1091665a: add ebp, 8 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1091665d: mov dword ptr [esp + 0x50], 0 */
  W32((uint32_t)(esp + 0x50u), 0x0u);
/* 10916665: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 10916667: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 10916668: cmp ebp, 3 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 1091666b: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 1091666f: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 10916673: jb 0x10916640 */
  if (cf) goto L_10916640;
L_10916675: /* 10916675: mov ecx, eax */
  ecx = eax;
/* 10916677: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 1091667a: mov edx, ecx */
  edx = ecx;
/* 1091667c: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 1091667f: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 10916681: cmp ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 10916684: mov dword ptr [ebx + 0x18], edx */
  W32((uint32_t)(ebx + 0x18u), edx);
/* 10916687: ja 0x10916d3f */
  if ((!cf && !zf)) goto L_10916d3f;
L_1091668d: /* 1091668d: jmp dword ptr [ecx*4 + 0x10917100] */
  switch (R32((uint32_t)(ecx*4 + 0x10917100u))) {
    case 0x10916694u: goto L_10916694;
    case 0x109166b2u: goto L_109166b2;
    case 0x10916707u: goto L_10916707;
    case 0x10916d9du: goto L_10916d9d;
    default: guest_badjump(0x1091668d, R32((uint32_t)(ecx*4 + 0x10917100u))); return;
  }
L_10916694: /* 10916694: sub ebp, 3 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 10916697: mov ecx, ebp */
  ecx = ebp;
/* 10916699: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 1091669c: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  cf = ((uint32_t)a >> (c - 1)) & 1;
  of = (a >> 31) & 1;
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  eax = r;
  }
/* 1091669f: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 109166a1: sub ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 109166a3: mov dword ptr [ebx], 1 */
  W32((uint32_t)(ebx), 0x1u);
/* 109166a9: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 109166ad: jmp 0x10916d3f */
  goto L_10916d3f;
L_109166b2: /* 109166b2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 109166b3: lea eax, [esp + 0x28] */
  eax = (uint32_t)(esp + 0x28u);
/* 109166b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109166b8: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 109166bc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 109166bd: lea edx, [esp + 0x38] */
  edx = (uint32_t)(esp + 0x38u);
/* 109166c1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 109166c2: lea eax, [esp + 0x40] */
  eax = (uint32_t)(esp + 0x40u);
/* 109166c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109166c7: call 0x10918040 */
  esp -= 4; W32(esp, 0x109166ccu); SPILL(); f_10918040(); if (g_unwind) return; RELOAD();
/* 109166cc: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 109166d0: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 109166d4: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 109166d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 109166d9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 109166da: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* 109166de: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 109166df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109166e0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 109166e1: call 0x109171a0 */
  esp -= 4; W32(esp, 0x109166e6u); SPILL(); f_109171a0(); if (g_unwind) return; RELOAD();
/* 109166e6: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109166e9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109166eb: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 109166ee: je 0x10916d96 */
  if (zf) goto L_10916d96;
L_109166f4: /* 109166f4: shr dword ptr [esp + 0x48], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x48u))); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  W32((uint32_t)(esp + 0x48u), r);
  }
/* 109166f9: sub ebp, 3 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 109166fc: mov dword ptr [ebx], 6 */
  W32((uint32_t)(ebx), 0x6u);
/* 10916702: jmp 0x10916d3f */
  goto L_10916d3f;
L_10916707: /* 10916707: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 1091670a: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 1091670e: sub ebp, 3 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 10916711: mov dword ptr [ebx], 3 */
  W32((uint32_t)(ebx), 0x3u);
/* 10916717: jmp 0x10916d3f */
  goto L_10916d3f;
L_1091671c: /* 1091671c: cmp ebp, 0x20 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 1091671f: jae 0x10916756 */
  if (!cf) goto L_10916756;
L_10916721: /* 10916721: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 10916725: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 10916727: je 0x10916f2d */
  if (zf) goto L_10916f2d;
L_1091672d: /* 1091672d: mov edx, ecx */
  edx = ecx;
/* 1091672f: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  of = (r) == 0x7fffffffu;
  edx = r;
  }
/* 10916730: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 10916734: movzx edx, byte ptr [edi] */
  edx = (uint32_t)(R8((uint32_t)(edi)));
/* 10916737: mov ecx, ebp */
  ecx = ebp;
/* 10916739: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 1091673b: add ebp, 8 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1091673e: mov dword ptr [esp + 0x50], 0 */
  W32((uint32_t)(esp + 0x50u), 0x0u);
/* 10916746: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 10916748: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 10916749: cmp ebp, 0x20 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 1091674c: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 10916750: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 10916754: jb 0x10916721 */
  if (cf) goto L_10916721;
L_10916756: /* 10916756: mov ecx, eax */
  ecx = eax;
/* 10916758: not eax */
  eax = ~eax;
/* 1091675a: and ecx, 0xffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 10916760: shr eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 10916763: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10916765: jne 0x10916dbe */
  if (!zf) goto L_10916dbe;
L_1091676b: /* 1091676b: xor ebp, ebp */
  ebp = 0;
/* 1091676d: mov eax, ecx */
  eax = ecx;
/* 1091676f: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10916771: mov dword ptr [ebx + 4], ecx */
  W32((uint32_t)(ebx + 0x4u), ecx);
/* 10916774: mov dword ptr [esp + 0x48], ebp */
  W32((uint32_t)(esp + 0x48u), ebp);
/* 10916778: je 0x109168ac */
  if (zf) goto L_109168ac;
L_1091677e: /* 1091677e: mov eax, 2 */
  eax = 0x2u;
/* 10916783: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 10916785: jmp 0x10916d3f */
  goto L_10916d3f;
L_1091678a: /* 1091678a: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 1091678e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10916790: je 0x10916eee */
  if (zf) goto L_10916eee;
L_10916796: /* 10916796: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10916798: jne 0x10916843 */
  if (!zf) goto L_10916843;
L_1091679e: /* 1091679e: mov edx, dword ptr [ebx + 0x2c] */
  edx = R32((uint32_t)(ebx + 0x2cu));
/* 109167a1: cmp dword ptr [esp + 0x14], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109167a5: jne 0x109167ca */
  if (!zf) goto L_109167ca;
L_109167a7: /* 109167a7: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* 109167aa: mov ecx, dword ptr [ebx + 0x28] */
  ecx = R32((uint32_t)(ebx + 0x28u));
/* 109167ad: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 109167af: je 0x109167ca */
  if (zf) goto L_109167ca;
L_109167b1: /* 109167b1: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 109167b5: jae 0x109167be */
  if (!cf) goto L_109167be;
L_109167b7: /* 109167b7: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 109167b9: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 109167ba: mov ecx, eax */
  ecx = eax;
/* 109167bc: jmp 0x109167c2 */
  goto L_109167c2;
L_109167be: /* 109167be: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 109167c0: mov ecx, edx */
  ecx = edx;
L_109167c2: /* 109167c2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109167c4: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 109167c8: jne 0x10916843 */
  if (!zf) goto L_10916843;
L_109167ca: /* 109167ca: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 109167ce: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 109167d2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 109167d3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 109167d4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 109167d5: mov dword ptr [ebx + 0x34], eax */
  W32((uint32_t)(ebx + 0x34u), eax);
/* 109167d8: call 0x10918070 */
  esp -= 4; W32(esp, 0x109167ddu); SPILL(); f_10918070(); if (g_unwind) return; RELOAD();
/* 109167dd: mov ecx, dword ptr [ebx + 0x30] */
  ecx = R32((uint32_t)(ebx + 0x30u));
/* 109167e0: mov dword ptr [esp + 0x5c], eax */
  W32((uint32_t)(esp + 0x5cu), eax);
/* 109167e4: mov eax, dword ptr [ebx + 0x34] */
  eax = R32((uint32_t)(ebx + 0x34u));
/* 109167e7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109167ea: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 109167ec: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 109167f0: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 109167f4: jae 0x109167fb */
  if (!cf) goto L_109167fb;
L_109167f6: /* 109167f6: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 109167f8: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 109167f9: jmp 0x10916800 */
  goto L_10916800;
L_109167fb: /* 109167fb: mov ecx, dword ptr [ebx + 0x2c] */
  ecx = R32((uint32_t)(ebx + 0x2cu));
/* 109167fe: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
L_10916800: /* 10916800: mov edx, dword ptr [ebx + 0x2c] */
  edx = R32((uint32_t)(ebx + 0x2cu));
/* 10916803: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10916805: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 10916809: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
/* 1091680d: jne 0x1091683b */
  if (!zf) goto L_1091683b;
L_1091680f: /* 1091680f: mov eax, dword ptr [ebx + 0x28] */
  eax = R32((uint32_t)(ebx + 0x28u));
/* 10916812: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 10916816: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 10916818: je 0x10916837 */
  if (zf) goto L_10916837;
L_1091681a: /* 1091681a: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 1091681e: jae 0x1091682b */
  if (!cf) goto L_1091682b;
L_10916820: /* 10916820: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 10916822: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 10916823: mov ecx, edx */
  ecx = edx;
/* 10916825: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 10916829: jmp 0x1091683b */
  goto L_1091683b;
L_1091682b: /* 1091682b: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 1091682f: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 10916831: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 10916835: jmp 0x1091683b */
  goto L_1091683b;
L_10916837: /* 10916837: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
L_1091683b: /* 1091683b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1091683d: je 0x10916e07 */
  if (zf) goto L_10916e07;
L_10916843: /* 10916843: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 10916846: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 1091684a: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 1091684c: mov dword ptr [esp + 0x50], 0 */
  W32((uint32_t)(esp + 0x50u), 0x0u);
/* 10916854: jbe 0x10916858 */
  if ((cf | zf)) goto L_10916858;
L_10916856: /* 10916856: mov eax, edx */
  eax = edx;
L_10916858: /* 10916858: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 1091685a: jbe 0x1091685e */
  if ((cf | zf)) goto L_1091685e;
L_1091685c: /* 1091685c: mov eax, ecx */
  eax = ecx;
L_1091685e: /* 1091685e: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 10916862: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 10916866: mov ecx, eax */
  ecx = eax;
/* 10916868: mov edx, ecx */
  edx = ecx;
/* 1091686a: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 1091686d: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 1091686f: mov ecx, edx */
  ecx = edx;
/* 10916871: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 10916875: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 10916878: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 1091687a: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 1091687e: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 10916882: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 10916886: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10916888: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 1091688c: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 1091688f: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 10916891: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 10916893: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 10916895: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* 10916897: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 1091689b: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 1091689f: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 109168a3: mov dword ptr [ebx + 4], ecx */
  W32((uint32_t)(ebx + 0x4u), ecx);
/* 109168a6: jne 0x10916d3f */
  if (!zf) goto L_10916d3f;
L_109168ac: /* 109168ac: mov eax, dword ptr [ebx + 0x18] */
  eax = R32((uint32_t)(ebx + 0x18u));
/* 109168af: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 109168b1: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 109168b3: and eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 109168b6: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 109168b8: jmp 0x10916d3f */
  goto L_10916d3f;
L_109168bd: /* 109168bd: cmp ebp, 0xe */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xeu);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 109168c0: jae 0x109168f3 */
  if (!cf) goto L_109168f3;
L_109168c2: /* 109168c2: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 109168c6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 109168c8: je 0x10916f2d */
  if (zf) goto L_10916f2d;
L_109168ce: /* 109168ce: mov edx, ecx */
  edx = ecx;
/* 109168d0: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  of = (r) == 0x7fffffffu;
  edx = r;
  }
/* 109168d1: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 109168d5: movzx edx, byte ptr [edi] */
  edx = (uint32_t)(R8((uint32_t)(edi)));
/* 109168d8: mov ecx, ebp */
  ecx = ebp;
/* 109168da: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 109168dc: add ebp, 8 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 109168df: mov dword ptr [esp + 0x50], 0 */
  W32((uint32_t)(esp + 0x50u), 0x0u);
/* 109168e7: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 109168e9: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 109168ea: cmp ebp, 0xe */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xeu);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 109168ed: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 109168f1: jb 0x109168c2 */
  if (cf) goto L_109168c2;
L_109168f3: /* 109168f3: and eax, 0x3fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3fffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 109168f8: mov ecx, eax */
  ecx = eax;
/* 109168fa: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 109168fd: cmp ecx, 0x1d */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 10916900: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 10916903: ja 0x10916e7e */
  if ((!cf && !zf)) goto L_10916e7e;
L_10916909: /* 10916909: shr eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 1091690c: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 1091690f: cmp eax, 0x1d */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 10916912: ja 0x10916e7e */
  if ((!cf && !zf)) goto L_10916e7e;
L_10916918: /* 10916918: lea eax, [eax + ecx + 0x102] */
  eax = (uint32_t)(eax + ecx + 0x102u);
/* 1091691f: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 10916922: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 10916924: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10916925: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10916926: call dword ptr [esi + 0x20] */
  { uint32_t t = R32((uint32_t)(esi + 0x20u)); esp -= 4; W32(esp, 0x10916929u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10916929: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1091692c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1091692e: mov dword ptr [ebx + 0xc], eax */
  W32((uint32_t)(ebx + 0xcu), eax);
/* 10916931: je 0x10916e42 */
  if (zf) goto L_10916e42;
L_10916937: /* 10916937: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 1091693b: shr ecx, 0xe */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 14;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 1091693e: mov dword ptr [esp + 0x48], ecx */
  W32((uint32_t)(esp + 0x48u), ecx);
/* 10916942: sub ebp, 0xe */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xeu);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 10916945: mov dword ptr [ebx + 8], 0 */
  W32((uint32_t)(ebx + 0x8u), 0x0u);
/* 1091694c: mov dword ptr [ebx], 4 */
  W32((uint32_t)(ebx), 0x4u);
/* 10916952: mov eax, ecx */
  eax = ecx;
L_10916954: /* 10916954: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 10916957: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 1091695a: shr edx, 0xa */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 1091695d: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10916960: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10916962: jae 0x109169d9 */
  if (!cf) goto L_109169d9;
L_10916964: /* 10916964: cmp ebp, 3 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10916967: jae 0x109169a1 */
  if (!cf) goto L_109169a1;
L_10916969: /* 10916969: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_10916970: /* 10916970: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 10916974: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 10916976: je 0x10916f2d */
  if (zf) goto L_10916f2d;
L_1091697c: /* 1091697c: mov edx, ecx */
  edx = ecx;
/* 1091697e: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  of = (r) == 0x7fffffffu;
  edx = r;
  }
/* 1091697f: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 10916983: movzx edx, byte ptr [edi] */
  edx = (uint32_t)(R8((uint32_t)(edi)));
/* 10916986: mov ecx, ebp */
  ecx = ebp;
/* 10916988: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 1091698a: add ebp, 8 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1091698d: mov dword ptr [esp + 0x50], 0 */
  W32((uint32_t)(esp + 0x50u), 0x0u);
/* 10916995: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 10916997: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 10916998: cmp ebp, 3 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 1091699b: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 1091699f: jb 0x10916970 */
  if (cf) goto L_10916970;
L_109169a1: /* 109169a1: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 109169a4: mov edx, dword ptr [ecx*4 + 0x10922758] */
  edx = R32((uint32_t)(ecx*4 + 0x10922758u));
/* 109169ab: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 109169ae: and eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 109169b1: mov dword ptr [ecx + edx*4], eax */
  W32((uint32_t)(ecx + edx*4), eax);
/* 109169b4: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* 109169b7: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 109169bb: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 109169bc: mov dword ptr [ebx + 8], edx */
  W32((uint32_t)(ebx + 0x8u), edx);
/* 109169bf: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 109169c2: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 109169c5: shr edx, 0xa */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 109169c8: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 109169cb: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 109169ce: sub ebp, 3 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 109169d1: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 109169d3: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 109169d7: jb 0x10916964 */
  if (cf) goto L_10916964;
L_109169d9: /* 109169d9: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 109169dc: mov eax, 0x13 */
  eax = 0x13u;
/* 109169e1: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 109169e3: jae 0x10916a11 */
  if (!cf) goto L_10916a11;
L_109169e5: /* 109169e5: jmp 0x109169f0 */
  goto L_109169f0;
L_109169f0: /* 109169f0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 109169f3: mov edx, dword ptr [ecx*4 + 0x10922758] */
  edx = R32((uint32_t)(ecx*4 + 0x10922758u));
/* 109169fa: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 109169fd: mov dword ptr [ecx + edx*4], 0 */
  W32((uint32_t)(ecx + edx*4), 0x0u);
/* 10916a04: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* 10916a07: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10916a08: mov ecx, edx */
  ecx = edx;
/* 10916a0a: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10916a0c: mov dword ptr [ebx + 8], edx */
  W32((uint32_t)(ebx + 0x8u), edx);
/* 10916a0f: jb 0x109169f0 */
  if (cf) goto L_109169f0;
L_10916a11: /* 10916a11: mov edx, dword ptr [ebx + 0x24] */
  edx = R32((uint32_t)(ebx + 0x24u));
/* 10916a14: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10916a15: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10916a16: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 10916a19: lea ecx, [ebx + 0x14] */
  ecx = (uint32_t)(ebx + 0x14u);
/* 10916a1c: lea eax, [ebx + 0x10] */
  eax = (uint32_t)(ebx + 0x10u);
/* 10916a1f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10916a20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10916a21: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10916a22: mov dword ptr [eax], 7 */
  W32((uint32_t)(eax), 0x7u);
/* 10916a28: call 0x10917e00 */
  esp -= 4; W32(esp, 0x10916a2du); SPILL(); f_10917e00(); if (g_unwind) return; RELOAD();
/* 10916a2d: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916a30: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10916a32: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 10916a36: jne 0x10916e92 */
  if (!zf) goto L_10916e92;
L_10916a3c: /* 10916a3c: mov dword ptr [ebx + 8], eax */
  W32((uint32_t)(ebx + 0x8u), eax);
/* 10916a3f: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 10916a43: mov dword ptr [ebx], 5 */
  W32((uint32_t)(ebx), 0x5u);
L_10916a49: /* 10916a49: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 10916a4c: mov edx, ecx */
  edx = ecx;
/* 10916a4e: shr edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 10916a51: and edx, 0x1f */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 10916a54: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 10916a57: lea ecx, [edx + ecx + 0x102] */
  ecx = (uint32_t)(edx + ecx + 0x102u);
/* 10916a5e: cmp dword ptr [ebx + 8], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x8u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10916a61: jae 0x10916c07 */
  if (!cf) goto L_10916c07;
L_10916a67: /* 10916a67: jmp 0x10916a70 */
  goto L_10916a70;
L_10916a69: /* 10916a69: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 10916a6d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_10916a70: /* 10916a70: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* 10916a73: cmp ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10916a75: jae 0x10916ab3 */
  if (!cf) goto L_10916ab3;
L_10916a77: /* 10916a77: jmp 0x10916a80 */
  goto L_10916a80;
L_10916a80: /* 10916a80: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 10916a84: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 10916a86: je 0x10916eee */
  if (zf) goto L_10916eee;
L_10916a8c: /* 10916a8c: mov edx, ecx */
  edx = ecx;
/* 10916a8e: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  of = (r) == 0x7fffffffu;
  edx = r;
  }
/* 10916a8f: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 10916a93: movzx edx, byte ptr [edi] */
  edx = (uint32_t)(R8((uint32_t)(edi)));
/* 10916a96: mov ecx, ebp */
  ecx = ebp;
/* 10916a98: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 10916a9a: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* 10916a9d: add ebp, 8 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 10916aa0: mov dword ptr [esp + 0x50], 0 */
  W32((uint32_t)(esp + 0x50u), 0x0u);
/* 10916aa8: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 10916aaa: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 10916aab: cmp ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10916aad: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 10916ab1: jb 0x10916a80 */
  if (cf) goto L_10916a80;
L_10916ab3: /* 10916ab3: mov ecx, dword ptr [ecx*4 + 0x10930908] */
  ecx = R32((uint32_t)(ecx*4 + 0x10930908u));
/* 10916aba: mov edx, dword ptr [ebx + 0x14] */
  edx = R32((uint32_t)(ebx + 0x14u));
/* 10916abd: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 10916abf: lea edx, [edx + ecx*8] */
  edx = (uint32_t)(edx + ecx*8);
/* 10916ac2: movzx ecx, byte ptr [edx + 1] */
  ecx = (uint32_t)(R8((uint32_t)(edx + 0x1u)));
/* 10916ac6: mov edx, dword ptr [edx + 4] */
  edx = R32((uint32_t)(edx + 0x4u));
/* 10916ac9: cmp edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10916acc: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 10916ad0: mov dword ptr [esp + 0x38], edx */
  W32((uint32_t)(esp + 0x38u), edx);
/* 10916ad4: jae 0x10916aef */
  if (!cf) goto L_10916aef;
L_10916ad6: /* 10916ad6: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 10916ad8: sub ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 10916ada: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 10916add: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 10916ae1: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 10916ae4: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 10916ae7: inc dword ptr [ebx + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebx + 0x8u), r);
  }
/* 10916aea: jmp 0x10916be9 */
  goto L_10916be9;
L_10916aef: /* 10916aef: cmp edx, 0x12 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x12u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10916af2: jne 0x10916afe */
  if (!zf) goto L_10916afe;
L_10916af4: /* 10916af4: mov dword ptr [esp + 0x20], 7 */
  W32((uint32_t)(esp + 0x20u), 0x7u);
/* 10916afc: jmp 0x10916b05 */
  goto L_10916b05;
L_10916afe: /* 10916afe: lea ecx, [edx - 0xe] */
  ecx = (uint32_t)(edx + 0xfffffff2u);
/* 10916b01: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
L_10916b05: /* 10916b05: xor ecx, ecx */
  ecx = 0;
/* 10916b07: cmp edx, 0x12 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x12u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10916b0a: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 10916b0e: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 10916b11: lea ecx, [ecx*8 + 3] */
  ecx = (uint32_t)(ecx*8 + 0x3u);
/* 10916b18: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 10916b1c: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 10916b20: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10916b22: cmp ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10916b24: mov dword ptr [esp + 0x34], ecx */
  W32((uint32_t)(esp + 0x34u), ecx);
/* 10916b28: jae 0x10916b64 */
  if (!cf) goto L_10916b64;
L_10916b2a: /* 10916b2a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_10916b30: /* 10916b30: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 10916b34: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 10916b36: je 0x10916f2d */
  if (zf) goto L_10916f2d;
L_10916b3c: /* 10916b3c: mov edx, ecx */
  edx = ecx;
/* 10916b3e: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  of = (r) == 0x7fffffffu;
  edx = r;
  }
/* 10916b3f: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 10916b43: movzx edx, byte ptr [edi] */
  edx = (uint32_t)(R8((uint32_t)(edi)));
/* 10916b46: mov ecx, ebp */
  ecx = ebp;
/* 10916b48: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 10916b4a: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 10916b4e: add ebp, 8 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 10916b51: mov dword ptr [esp + 0x50], 0 */
  W32((uint32_t)(esp + 0x50u), 0x0u);
/* 10916b59: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 10916b5b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 10916b5c: cmp ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10916b5e: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 10916b62: jb 0x10916b30 */
  if (cf) goto L_10916b30;
L_10916b64: /* 10916b64: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 10916b68: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 10916b6a: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 10916b6e: mov edx, dword ptr [ecx*4 + 0x10930908] */
  edx = R32((uint32_t)(ecx*4 + 0x10930908u));
/* 10916b75: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 10916b79: and edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 10916b7b: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (r) < (a);
  of = ((((a) ^ (r)) & ((b) ^ (r))) >> 31) & 1;
  ecx = r;
  }
/* 10916b7d: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 10916b81: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 10916b85: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 10916b87: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 10916b8b: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 10916b8f: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10916b91: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 10916b94: mov edx, eax */
  edx = eax;
/* 10916b96: shr edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 10916b99: and edx, 0x1f */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 10916b9c: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 10916b9f: lea eax, [edx + eax + 0x102] */
  eax = (uint32_t)(edx + eax + 0x102u);
/* 10916ba6: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 10916baa: sub ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 10916bac: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 10916baf: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10916bb1: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 10916bb3: ja 0x10916f56 */
  if ((!cf && !zf)) goto L_10916f56;
L_10916bb9: /* 10916bb9: cmp dword ptr [esp + 0x38], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x38u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10916bbe: jne 0x10916bd2 */
  if (!zf) goto L_10916bd2;
L_10916bc0: /* 10916bc0: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10916bc3: jb 0x10916f56 */
  if (cf) goto L_10916f56;
L_10916bc9: /* 10916bc9: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 10916bcc: mov eax, dword ptr [eax + ecx*4 - 4] */
  eax = R32((uint32_t)(eax + ecx*4 + 0xfffffffcu));
/* 10916bd0: jmp 0x10916bd4 */
  goto L_10916bd4;
L_10916bd2: /* 10916bd2: xor eax, eax */
  eax = 0;
L_10916bd4: /* 10916bd4: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 10916bd7: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* 10916bda: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 10916bde: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10916bdf: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 10916be0: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 10916be4: jne 0x10916bd4 */
  if (!zf) goto L_10916bd4;
L_10916be6: /* 10916be6: mov dword ptr [ebx + 8], ecx */
  W32((uint32_t)(ebx + 0x8u), ecx);
L_10916be9: /* 10916be9: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 10916bec: mov ecx, eax */
  ecx = eax;
/* 10916bee: shr ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 10916bf1: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 10916bf4: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 10916bf7: lea edx, [ecx + eax + 0x102] */
  edx = (uint32_t)(ecx + eax + 0x102u);
/* 10916bfe: cmp dword ptr [ebx + 8], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x8u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10916c01: jb 0x10916a69 */
  if (cf) goto L_10916a69;
L_10916c07: /* 10916c07: mov ecx, dword ptr [ebx + 0x24] */
  ecx = R32((uint32_t)(ebx + 0x24u));
/* 10916c0a: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 10916c0d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10916c0e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10916c0f: lea edx, [esp + 0x44] */
  edx = (uint32_t)(esp + 0x44u);
/* 10916c13: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10916c14: lea ecx, [esp + 0x4c] */
  ecx = (uint32_t)(esp + 0x4cu);
/* 10916c18: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10916c19: lea edx, [esp + 0x30] */
  edx = (uint32_t)(esp + 0x30u);
/* 10916c1d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10916c1e: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 10916c21: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 10916c25: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10916c26: mov ecx, eax */
  ecx = eax;
/* 10916c28: shr ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 10916c2b: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 10916c2e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10916c2f: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10916c30: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 10916c33: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10916c34: add eax, 0x101 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x101u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10916c39: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10916c3a: mov dword ptr [ebx + 0x14], 0 */
  W32((uint32_t)(ebx + 0x14u), 0x0u);
/* 10916c41: mov dword ptr [esp + 0x40], 9 */
  W32((uint32_t)(esp + 0x40u), 0x9u);
/* 10916c49: mov dword ptr [esp + 0x44], 6 */
  W32((uint32_t)(esp + 0x44u), 0x6u);
/* 10916c51: call 0x10917eb0 */
  esp -= 4; W32(esp, 0x10916c56u); SPILL(); f_10917eb0(); if (g_unwind) return; RELOAD();
/* 10916c56: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 10916c59: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 10916c5d: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 10916c60: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10916c61: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10916c62: call dword ptr [esi + 0x24] */
  { uint32_t t = R32((uint32_t)(esi + 0x24u)); esp -= 4; W32(esp, 0x10916c65u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10916c65: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 10916c69: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916c6c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10916c6e: jne 0x10916faa */
  if (!zf) goto L_10916faa;
L_10916c74: /* 10916c74: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 10916c78: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 10916c7c: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 10916c80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10916c81: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10916c82: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 10916c86: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10916c87: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10916c88: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10916c89: call 0x109171a0 */
  esp -= 4; W32(esp, 0x10916c8eu); SPILL(); f_109171a0(); if (g_unwind) return; RELOAD();
/* 10916c8e: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916c91: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10916c93: je 0x10916ff6 */
  if (zf) goto L_10916ff6;
L_10916c99: /* 10916c99: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 10916c9c: mov dword ptr [ebx], 6 */
  W32((uint32_t)(ebx), 0x6u);
L_10916ca2: /* 10916ca2: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 10916ca6: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 10916caa: mov dword ptr [ebx + 0x20], edx */
  W32((uint32_t)(ebx + 0x20u), edx);
/* 10916cad: mov dword ptr [ebx + 0x1c], ebp */
  W32((uint32_t)(ebx + 0x1cu), ebp);
/* 10916cb0: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* 10916cb2: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 10916cb5: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 10916cb8: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 10916cbc: mov ecx, edi */
  ecx = edi;
/* 10916cbe: sub ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 10916cc0: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10916cc2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10916cc3: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 10916cc6: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 10916cca: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10916ccb: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 10916ccd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10916cce: mov dword ptr [ebx + 0x34], edx */
  W32((uint32_t)(ebx + 0x34u), edx);
/* 10916cd1: call 0x109171e0 */
  esp -= 4; W32(esp, 0x10916cd6u); SPILL(); f_109171e0(); if (g_unwind) return; RELOAD();
/* 10916cd6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916cd9: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10916cdc: jne 0x10917032 */
  if (!zf) goto L_10917032;
L_10916ce2: /* 10916ce2: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 10916ce5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10916ce6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10916ce7: mov dword ptr [esp + 0x58], 0 */
  W32((uint32_t)(esp + 0x58u), 0x0u);
/* 10916cef: call 0x109178f0 */
  esp -= 4; W32(esp, 0x10916cf4u); SPILL(); f_109178f0(); if (g_unwind) return; RELOAD();
/* 10916cf4: mov eax, dword ptr [ebx + 0x20] */
  eax = R32((uint32_t)(ebx + 0x20u));
/* 10916cf7: mov ecx, dword ptr [ebx + 0x34] */
  ecx = R32((uint32_t)(ebx + 0x34u));
/* 10916cfa: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 10916cfc: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 10916cff: mov ebp, dword ptr [ebx + 0x1c] */
  ebp = R32((uint32_t)(ebx + 0x1cu));
/* 10916d02: mov dword ptr [esp + 0x50], eax */
  W32((uint32_t)(esp + 0x50u), eax);
/* 10916d06: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* 10916d09: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916d0c: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10916d0e: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 10916d12: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 10916d16: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 10916d1a: jae 0x10916d23 */
  if (!cf) goto L_10916d23;
L_10916d1c: /* 10916d1c: mov edx, ecx */
  edx = ecx;
/* 10916d1e: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10916d20: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 10916d21: jmp 0x10916d2a */
  goto L_10916d2a;
L_10916d23: /* 10916d23: mov eax, dword ptr [ebx + 0x2c] */
  eax = R32((uint32_t)(ebx + 0x2cu));
/* 10916d26: sub eax, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
L_10916d2a: /* 10916d2a: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 10916d2e: mov eax, dword ptr [ebx + 0x18] */
  eax = R32((uint32_t)(ebx + 0x18u));
/* 10916d31: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10916d33: jne 0x10917045 */
  if (!zf) goto L_10917045;
L_10916d39: /* 10916d39: mov dword ptr [ebx], 0 */
  W32((uint32_t)(ebx), 0x0u);
L_10916d3f: /* 10916d3f: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 10916d41: cmp edx, 9 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x9u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 10916d44: mov esi, dword ptr [esp + 0x4c] */
  esi = R32((uint32_t)(esp + 0x4cu));
/* 10916d48: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 10916d4c: jbe 0x10916625 */
  if ((cf | zf)) goto L_10916625;
L_10916d52: /* 10916d52: jmp 0x109165e9 */
  goto L_109165e9;
L_10916d57: /* 10916d57: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 10916d5b: mov dword ptr [ebx + 0x20], ecx */
  W32((uint32_t)(ebx + 0x20u), ecx);
/* 10916d5e: mov dword ptr [ebx + 0x1c], ebp */
  W32((uint32_t)(ebx + 0x1cu), ebp);
/* 10916d61: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 10916d63: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 10916d66: mov edx, edi */
  edx = edi;
/* 10916d68: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 10916d6a: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 10916d6e: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10916d70: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10916d71: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 10916d74: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 10916d78: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10916d79: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 10916d80: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 10916d82: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10916d83: mov dword ptr [ebx + 0x34], eax */
  W32((uint32_t)(ebx + 0x34u), eax);
/* 10916d86: call 0x10918070 */
  esp -= 4; W32(esp, 0x10916d8bu); SPILL(); f_10918070(); if (g_unwind) return; RELOAD();
/* 10916d8b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916d8e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10916d8f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10916d90: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10916d91: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10916d92: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916d95: ret  */
  esp += 4; SPILL(); return;
L_10916d96: /* 10916d96: push -4 */
  { uint32_t v = 0xfffffffcu; esp -= 4; W32(esp, v); }
/* 10916d98: jmp 0x109165eb */
  goto L_109165eb;
L_10916d9d: /* 10916d9d: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 10916da1: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 10916da4: mov dword ptr [ebx], 9 */
  W32((uint32_t)(ebx), 0x9u);
/* 10916daa: mov dword ptr [esi + 0x18], 0x1092f664 */
  W32((uint32_t)(esi + 0x18u), 0x1092f664u);
/* 10916db1: mov dword ptr [ebx + 0x20], eax */
  W32((uint32_t)(ebx + 0x20u), eax);
/* 10916db4: add ebp, -3 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 10916db7: push -3 */
  { uint32_t v = 0xfffffffdu; esp -= 4; W32(esp, v); }
/* 10916db9: jmp 0x109165f2 */
  goto L_109165f2;
L_10916dbe: /* 10916dbe: mov dword ptr [ebx], 9 */
  W32((uint32_t)(ebx), 0x9u);
/* 10916dc4: mov dword ptr [esi + 0x18], 0x1092f678 */
  W32((uint32_t)(esi + 0x18u), 0x1092f678u);
L_10916dcb: /* 10916dcb: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 10916dcf: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 10916dd3: mov dword ptr [ebx + 0x20], ecx */
  W32((uint32_t)(ebx + 0x20u), ecx);
/* 10916dd6: mov dword ptr [ebx + 0x1c], ebp */
  W32((uint32_t)(ebx + 0x1cu), ebp);
/* 10916dd9: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 10916ddc: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 10916ddf: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 10916de1: mov eax, edi */
  eax = edi;
/* 10916de3: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10916de5: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10916de7: push -3 */
  { uint32_t v = 0xfffffffdu; esp -= 4; W32(esp, v); }
/* 10916de9: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 10916dec: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 10916df0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10916df1: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 10916df3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10916df4: mov dword ptr [ebx + 0x34], ecx */
  W32((uint32_t)(ebx + 0x34u), ecx);
/* 10916df7: call 0x10918070 */
  esp -= 4; W32(esp, 0x10916dfcu); SPILL(); f_10918070(); if (g_unwind) return; RELOAD();
/* 10916dfc: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916dff: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10916e00: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10916e01: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10916e02: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10916e03: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916e06: ret  */
  esp += 4; SPILL(); return;
L_10916e07: /* 10916e07: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 10916e0b: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 10916e0f: mov dword ptr [ebx + 0x20], ecx */
  W32((uint32_t)(ebx + 0x20u), ecx);
/* 10916e12: mov dword ptr [ebx + 0x1c], ebp */
  W32((uint32_t)(ebx + 0x1cu), ebp);
/* 10916e15: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* 10916e17: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 10916e1a: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 10916e1d: mov ecx, edi */
  ecx = edi;
/* 10916e1f: sub ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 10916e21: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10916e23: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 10916e26: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 10916e2a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10916e2b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10916e2c: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 10916e2e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10916e2f: mov dword ptr [ebx + 0x34], eax */
  W32((uint32_t)(ebx + 0x34u), eax);
/* 10916e32: call 0x10918070 */
  esp -= 4; W32(esp, 0x10916e37u); SPILL(); f_10918070(); if (g_unwind) return; RELOAD();
/* 10916e37: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916e3a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10916e3b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10916e3c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10916e3d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10916e3e: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916e41: ret  */
  esp += 4; SPILL(); return;
L_10916e42: /* 10916e42: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 10916e46: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 10916e4a: mov dword ptr [ebx + 0x20], ecx */
  W32((uint32_t)(ebx + 0x20u), ecx);
/* 10916e4d: mov dword ptr [ebx + 0x1c], ebp */
  W32((uint32_t)(ebx + 0x1cu), ebp);
/* 10916e50: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 10916e53: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 10916e56: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 10916e58: mov eax, edi */
  eax = edi;
/* 10916e5a: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10916e5c: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10916e5e: push -4 */
  { uint32_t v = 0xfffffffcu; esp -= 4; W32(esp, v); }
/* 10916e60: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 10916e63: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 10916e67: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10916e68: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 10916e6a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10916e6b: mov dword ptr [ebx + 0x34], ecx */
  W32((uint32_t)(ebx + 0x34u), ecx);
/* 10916e6e: call 0x10918070 */
  esp -= 4; W32(esp, 0x10916e73u); SPILL(); f_10918070(); if (g_unwind) return; RELOAD();
/* 10916e73: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916e76: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10916e77: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10916e78: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10916e79: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10916e7a: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916e7d: ret  */
  esp += 4; SPILL(); return;
L_10916e7e: /* 10916e7e: mov dword ptr [ebx], 9 */
  W32((uint32_t)(ebx), 0x9u);
/* 10916e84: mov dword ptr [esi + 0x18], 0x1092f698 */
  W32((uint32_t)(esi + 0x18u), 0x1092f698u);
/* 10916e8b: push -3 */
  { uint32_t v = 0xfffffffdu; esp -= 4; W32(esp, v); }
/* 10916e8d: jmp 0x109165eb */
  goto L_109165eb;
L_10916e92: /* 10916e92: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 10916e95: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 10916e98: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10916e99: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10916e9a: call dword ptr [esi + 0x24] */
  { uint32_t t = R32((uint32_t)(esi + 0x24u)); esp -= 4; W32(esp, 0x10916e9du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10916e9d: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 10916ea1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916ea4: cmp eax, -3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10916ea7: jne 0x10916eaf */
  if (!zf) goto L_10916eaf;
L_10916ea9: /* 10916ea9: mov dword ptr [ebx], 9 */
  W32((uint32_t)(ebx), 0x9u);
L_10916eaf: /* 10916eaf: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 10916eb3: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 10916eb7: mov dword ptr [ebx + 0x20], eax */
  W32((uint32_t)(ebx + 0x20u), eax);
/* 10916eba: mov dword ptr [ebx + 0x1c], ebp */
  W32((uint32_t)(ebx + 0x1cu), ebp);
/* 10916ebd: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 10916ec0: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 10916ec3: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 10916ec5: mov edx, edi */
  edx = edi;
/* 10916ec7: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 10916ec9: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 10916ecd: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10916ecf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10916ed0: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 10916ed3: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 10916ed7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10916ed8: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 10916eda: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10916edb: mov dword ptr [ebx + 0x34], eax */
  W32((uint32_t)(ebx + 0x34u), eax);
/* 10916ede: call 0x10918070 */
  esp -= 4; W32(esp, 0x10916ee3u); SPILL(); f_10918070(); if (g_unwind) return; RELOAD();
/* 10916ee3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916ee6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10916ee7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10916ee8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10916ee9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10916eea: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916eed: ret  */
  esp += 4; SPILL(); return;
L_10916eee: /* 10916eee: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 10916ef2: mov dword ptr [ebx + 0x20], edx */
  W32((uint32_t)(ebx + 0x20u), edx);
/* 10916ef5: mov dword ptr [ebx + 0x1c], ebp */
  W32((uint32_t)(ebx + 0x1cu), ebp);
/* 10916ef8: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 10916efa: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 10916efd: mov eax, edi */
  eax = edi;
/* 10916eff: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10916f01: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 10916f05: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10916f07: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10916f08: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 10916f0b: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 10916f0f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10916f10: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 10916f17: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 10916f19: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10916f1a: mov dword ptr [ebx + 0x34], ecx */
  W32((uint32_t)(ebx + 0x34u), ecx);
/* 10916f1d: call 0x10918070 */
  esp -= 4; W32(esp, 0x10916f22u); SPILL(); f_10918070(); if (g_unwind) return; RELOAD();
/* 10916f22: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916f25: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10916f26: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10916f27: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10916f28: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10916f29: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916f2c: ret  */
  esp += 4; SPILL(); return;
L_10916f2d: /* 10916f2d: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 10916f31: mov dword ptr [ebx + 0x20], eax */
  W32((uint32_t)(ebx + 0x20u), eax);
/* 10916f34: mov dword ptr [ebx + 0x1c], ebp */
  W32((uint32_t)(ebx + 0x1cu), ebp);
/* 10916f37: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 10916f39: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 10916f3c: mov ecx, edi */
  ecx = edi;
/* 10916f3e: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 10916f40: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10916f42: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 10916f45: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 10916f49: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 10916f50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10916f51: jmp 0x1091660a */
  goto L_1091660a;
L_10916f56: /* 10916f56: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 10916f59: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 10916f5c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10916f5d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10916f5e: call dword ptr [esi + 0x24] */
  { uint32_t t = R32((uint32_t)(esi + 0x24u)); esp -= 4; W32(esp, 0x10916f61u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10916f61: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 10916f65: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 10916f69: mov dword ptr [ebx], 9 */
  W32((uint32_t)(ebx), 0x9u);
/* 10916f6f: mov dword ptr [esi + 0x18], 0x1092f6bc */
  W32((uint32_t)(esi + 0x18u), 0x1092f6bcu);
/* 10916f76: mov dword ptr [ebx + 0x20], eax */
  W32((uint32_t)(ebx + 0x20u), eax);
/* 10916f79: mov dword ptr [ebx + 0x1c], ebp */
  W32((uint32_t)(ebx + 0x1cu), ebp);
/* 10916f7c: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 10916f7f: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 10916f82: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 10916f84: mov edx, edi */
  edx = edi;
/* 10916f86: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 10916f88: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10916f8a: push -3 */
  { uint32_t v = 0xfffffffdu; esp -= 4; W32(esp, v); }
/* 10916f8c: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 10916f8f: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 10916f93: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10916f94: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 10916f96: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10916f97: mov dword ptr [ebx + 0x34], eax */
  W32((uint32_t)(ebx + 0x34u), eax);
/* 10916f9a: call 0x10918070 */
  esp -= 4; W32(esp, 0x10916f9fu); SPILL(); f_10918070(); if (g_unwind) return; RELOAD();
/* 10916f9f: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916fa2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10916fa3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10916fa4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10916fa5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10916fa6: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916fa9: ret  */
  esp += 4; SPILL(); return;
L_10916faa: /* 10916faa: cmp dword ptr [esp + 0x18], -3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10916faf: jne 0x10916fb7 */
  if (!zf) goto L_10916fb7;
L_10916fb1: /* 10916fb1: mov dword ptr [ebx], 9 */
  W32((uint32_t)(ebx), 0x9u);
L_10916fb7: /* 10916fb7: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 10916fbb: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 10916fbf: mov dword ptr [ebx + 0x20], ecx */
  W32((uint32_t)(ebx + 0x20u), ecx);
/* 10916fc2: mov dword ptr [ebx + 0x1c], ebp */
  W32((uint32_t)(ebx + 0x1cu), ebp);
/* 10916fc5: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 10916fc8: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 10916fcb: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 10916fcd: mov eax, edi */
  eax = edi;
/* 10916fcf: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10916fd1: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 10916fd5: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10916fd7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10916fd8: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 10916fdb: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 10916fdf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10916fe0: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 10916fe2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10916fe3: mov dword ptr [ebx + 0x34], ecx */
  W32((uint32_t)(ebx + 0x34u), ecx);
/* 10916fe6: call 0x10918070 */
  esp -= 4; W32(esp, 0x10916febu); SPILL(); f_10918070(); if (g_unwind) return; RELOAD();
/* 10916feb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916fee: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10916fef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10916ff0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10916ff1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10916ff2: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916ff5: ret  */
  esp += 4; SPILL(); return;
L_10916ff6: /* 10916ff6: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 10916ffa: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 10916ffe: mov dword ptr [ebx + 0x20], eax */
  W32((uint32_t)(ebx + 0x20u), eax);
/* 10917001: mov dword ptr [ebx + 0x1c], ebp */
  W32((uint32_t)(ebx + 0x1cu), ebp);
/* 10917004: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 10917007: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 1091700a: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 1091700c: mov edx, edi */
  edx = edi;
/* 1091700e: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 10917010: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10917012: push -4 */
  { uint32_t v = 0xfffffffcu; esp -= 4; W32(esp, v); }
/* 10917014: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 10917017: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 1091701b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1091701c: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 1091701e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1091701f: mov dword ptr [ebx + 0x34], eax */
  W32((uint32_t)(ebx + 0x34u), eax);
/* 10917022: call 0x10918070 */
  esp -= 4; W32(esp, 0x10917027u); SPILL(); f_10918070(); if (g_unwind) return; RELOAD();
/* 10917027: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1091702a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1091702b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1091702c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1091702d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1091702e: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10917031: ret  */
  esp += 4; SPILL(); return;
L_10917032: /* 10917032: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10917033: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10917034: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10917035: call 0x10918070 */
  esp -= 4; W32(esp, 0x1091703au); SPILL(); f_10918070(); if (g_unwind) return; RELOAD();
/* 1091703a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1091703d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1091703e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1091703f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10917040: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10917041: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10917044: ret  */
  esp += 4; SPILL(); return;
L_10917045: /* 10917045: mov dword ptr [ebx], 7 */
  W32((uint32_t)(ebx), 0x7u);
L_1091704b: /* 1091704b: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 1091704f: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 10917053: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10917054: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10917055: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10917056: mov dword ptr [ebx + 0x34], ecx */
  W32((uint32_t)(ebx + 0x34u), ecx);
/* 10917059: call 0x10918070 */
  esp -= 4; W32(esp, 0x1091705eu); SPILL(); f_10918070(); if (g_unwind) return; RELOAD();
/* 1091705e: mov ecx, dword ptr [ebx + 0x34] */
  ecx = R32((uint32_t)(ebx + 0x34u));
/* 10917061: mov edx, dword ptr [ebx + 0x30] */
  edx = R32((uint32_t)(ebx + 0x30u));
/* 10917064: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10917067: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10917069: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 1091706d: je 0x10917094 */
  if (zf) goto L_10917094;
L_1091706f: /* 1091706f: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 10917073: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 10917077: mov dword ptr [ebx + 0x20], ecx */
  W32((uint32_t)(ebx + 0x20u), ecx);
/* 1091707a: mov dword ptr [ebx + 0x1c], ebp */
  W32((uint32_t)(ebx + 0x1cu), ebp);
/* 1091707d: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* 1091707f: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 10917082: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 10917085: mov ecx, edi */
  ecx = edi;
/* 10917087: sub ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 10917089: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1091708b: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 1091708e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1091708f: jmp 0x1091660a */
  goto L_1091660a;
L_10917094: /* 10917094: mov dword ptr [ebx], 8 */
  W32((uint32_t)(ebx), 0x8u);
L_1091709a: /* 1091709a: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 1091709e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 109170a2: mov dword ptr [ebx + 0x20], eax */
  W32((uint32_t)(ebx + 0x20u), eax);
/* 109170a5: mov dword ptr [ebx + 0x1c], ebp */
  W32((uint32_t)(ebx + 0x1cu), ebp);
/* 109170a8: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 109170ab: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 109170ae: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 109170b0: mov edx, edi */
  edx = edi;
/* 109170b2: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 109170b4: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 109170b6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 109170b8: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 109170bb: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 109170bf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 109170c0: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 109170c2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 109170c3: mov dword ptr [ebx + 0x34], eax */
  W32((uint32_t)(ebx + 0x34u), eax);
/* 109170c6: call 0x10918070 */
  esp -= 4; W32(esp, 0x109170cbu); SPILL(); f_10918070(); if (g_unwind) return; RELOAD();
/* 109170cb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109170ce: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 109170cf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 109170d0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 109170d1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 109170d2: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109170d5: ret  */
  esp += 4; SPILL(); return;
}

void f_109169e7(void) {
  LOAD_REGS();
  goto L_109169e7;
L_109165e9: /* 109165e9: push -2 */
  { uint32_t v = 0xfffffffeu; esp -= 4; W32(esp, v); }
L_109165eb: /* 109165eb: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 109165ef: mov dword ptr [ebx + 0x20], edx */
  W32((uint32_t)(ebx + 0x20u), edx);
L_109165f2: /* 109165f2: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 109165f6: mov dword ptr [ebx + 0x1c], ebp */
  W32((uint32_t)(ebx + 0x1cu), ebp);
/* 109165f9: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 109165fb: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 109165fe: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 10916601: mov ecx, edi */
  ecx = edi;
/* 10916603: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 10916605: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10916607: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
L_1091660a: /* 1091660a: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 1091660e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1091660f: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 10916611: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10916612: mov dword ptr [ebx + 0x34], edx */
  W32((uint32_t)(ebx + 0x34u), edx);
/* 10916615: call 0x10918070 */
  esp -= 4; W32(esp, 0x1091661au); SPILL(); f_10918070(); if (g_unwind) return; RELOAD();
/* 1091661a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1091661d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1091661e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1091661f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10916620: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10916621: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916624: ret  */
  esp += 4; SPILL(); return;
L_10916625: /* 10916625: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 10916629: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 1091662d: jmp dword ptr [edx*4 + 0x109170d8] */
  switch (R32((uint32_t)(edx*4 + 0x109170d8u))) {
    case 0x10916634u: goto L_10916634;
    case 0x10916694u: goto L_10916694;
    case 0x109166b2u: goto L_109166b2;
    case 0x10916707u: goto L_10916707;
    case 0x1091671cu: goto L_1091671c;
    case 0x1091678au: goto L_1091678a;
    case 0x109168bdu: goto L_109168bd;
    case 0x10916954u: goto L_10916954;
    case 0x10916a49u: goto L_10916a49;
    case 0x10916ca2u: goto L_10916ca2;
    case 0x10916d9du: goto L_10916d9d;
    case 0x10916dcbu: goto L_10916dcb;
    case 0x1091704bu: goto L_1091704b;
    case 0x1091709au: goto L_1091709a;
    default: guest_badjump(0x1091662d, R32((uint32_t)(edx*4 + 0x109170d8u))); return;
  }
L_10916634: /* 10916634: cmp ebp, 3 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10916637: jae 0x10916675 */
  if (!cf) goto L_10916675;
L_10916639: /* 10916639: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_10916640: /* 10916640: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 10916644: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 10916646: je 0x10916d57 */
  if (zf) goto L_10916d57;
L_1091664c: /* 1091664c: mov edx, ecx */
  edx = ecx;
/* 1091664e: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  of = (r) == 0x7fffffffu;
  edx = r;
  }
/* 1091664f: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 10916653: movzx edx, byte ptr [edi] */
  edx = (uint32_t)(R8((uint32_t)(edi)));
/* 10916656: mov ecx, ebp */
  ecx = ebp;
/* 10916658: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 1091665a: add ebp, 8 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1091665d: mov dword ptr [esp + 0x50], 0 */
  W32((uint32_t)(esp + 0x50u), 0x0u);
/* 10916665: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 10916667: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 10916668: cmp ebp, 3 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 1091666b: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 1091666f: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 10916673: jb 0x10916640 */
  if (cf) goto L_10916640;
L_10916675: /* 10916675: mov ecx, eax */
  ecx = eax;
/* 10916677: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 1091667a: mov edx, ecx */
  edx = ecx;
/* 1091667c: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 1091667f: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 10916681: cmp ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 10916684: mov dword ptr [ebx + 0x18], edx */
  W32((uint32_t)(ebx + 0x18u), edx);
/* 10916687: ja 0x10916d3f */
  if ((!cf && !zf)) goto L_10916d3f;
L_1091668d: /* 1091668d: jmp dword ptr [ecx*4 + 0x10917100] */
  switch (R32((uint32_t)(ecx*4 + 0x10917100u))) {
    case 0x10916694u: goto L_10916694;
    case 0x109166b2u: goto L_109166b2;
    case 0x10916707u: goto L_10916707;
    case 0x10916d9du: goto L_10916d9d;
    default: guest_badjump(0x1091668d, R32((uint32_t)(ecx*4 + 0x10917100u))); return;
  }
L_10916694: /* 10916694: sub ebp, 3 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 10916697: mov ecx, ebp */
  ecx = ebp;
/* 10916699: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 1091669c: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  cf = ((uint32_t)a >> (c - 1)) & 1;
  of = (a >> 31) & 1;
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  eax = r;
  }
/* 1091669f: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 109166a1: sub ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 109166a3: mov dword ptr [ebx], 1 */
  W32((uint32_t)(ebx), 0x1u);
/* 109166a9: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 109166ad: jmp 0x10916d3f */
  goto L_10916d3f;
L_109166b2: /* 109166b2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 109166b3: lea eax, [esp + 0x28] */
  eax = (uint32_t)(esp + 0x28u);
/* 109166b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109166b8: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 109166bc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 109166bd: lea edx, [esp + 0x38] */
  edx = (uint32_t)(esp + 0x38u);
/* 109166c1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 109166c2: lea eax, [esp + 0x40] */
  eax = (uint32_t)(esp + 0x40u);
/* 109166c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109166c7: call 0x10918040 */
  esp -= 4; W32(esp, 0x109166ccu); SPILL(); f_10918040(); if (g_unwind) return; RELOAD();
/* 109166cc: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 109166d0: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 109166d4: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 109166d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 109166d9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 109166da: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* 109166de: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 109166df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109166e0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 109166e1: call 0x109171a0 */
  esp -= 4; W32(esp, 0x109166e6u); SPILL(); f_109171a0(); if (g_unwind) return; RELOAD();
/* 109166e6: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109166e9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109166eb: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 109166ee: je 0x10916d96 */
  if (zf) goto L_10916d96;
L_109166f4: /* 109166f4: shr dword ptr [esp + 0x48], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x48u))); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  W32((uint32_t)(esp + 0x48u), r);
  }
/* 109166f9: sub ebp, 3 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 109166fc: mov dword ptr [ebx], 6 */
  W32((uint32_t)(ebx), 0x6u);
/* 10916702: jmp 0x10916d3f */
  goto L_10916d3f;
L_10916707: /* 10916707: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 1091670a: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 1091670e: sub ebp, 3 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 10916711: mov dword ptr [ebx], 3 */
  W32((uint32_t)(ebx), 0x3u);
/* 10916717: jmp 0x10916d3f */
  goto L_10916d3f;
L_1091671c: /* 1091671c: cmp ebp, 0x20 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 1091671f: jae 0x10916756 */
  if (!cf) goto L_10916756;
L_10916721: /* 10916721: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 10916725: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 10916727: je 0x10916f2d */
  if (zf) goto L_10916f2d;
L_1091672d: /* 1091672d: mov edx, ecx */
  edx = ecx;
/* 1091672f: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  of = (r) == 0x7fffffffu;
  edx = r;
  }
/* 10916730: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 10916734: movzx edx, byte ptr [edi] */
  edx = (uint32_t)(R8((uint32_t)(edi)));
/* 10916737: mov ecx, ebp */
  ecx = ebp;
/* 10916739: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 1091673b: add ebp, 8 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1091673e: mov dword ptr [esp + 0x50], 0 */
  W32((uint32_t)(esp + 0x50u), 0x0u);
/* 10916746: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 10916748: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 10916749: cmp ebp, 0x20 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 1091674c: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 10916750: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 10916754: jb 0x10916721 */
  if (cf) goto L_10916721;
L_10916756: /* 10916756: mov ecx, eax */
  ecx = eax;
/* 10916758: not eax */
  eax = ~eax;
/* 1091675a: and ecx, 0xffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 10916760: shr eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 10916763: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10916765: jne 0x10916dbe */
  if (!zf) goto L_10916dbe;
L_1091676b: /* 1091676b: xor ebp, ebp */
  ebp = 0;
/* 1091676d: mov eax, ecx */
  eax = ecx;
/* 1091676f: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10916771: mov dword ptr [ebx + 4], ecx */
  W32((uint32_t)(ebx + 0x4u), ecx);
/* 10916774: mov dword ptr [esp + 0x48], ebp */
  W32((uint32_t)(esp + 0x48u), ebp);
/* 10916778: je 0x109168ac */
  if (zf) goto L_109168ac;
L_1091677e: /* 1091677e: mov eax, 2 */
  eax = 0x2u;
/* 10916783: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 10916785: jmp 0x10916d3f */
  goto L_10916d3f;
L_1091678a: /* 1091678a: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 1091678e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10916790: je 0x10916eee */
  if (zf) goto L_10916eee;
L_10916796: /* 10916796: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10916798: jne 0x10916843 */
  if (!zf) goto L_10916843;
L_1091679e: /* 1091679e: mov edx, dword ptr [ebx + 0x2c] */
  edx = R32((uint32_t)(ebx + 0x2cu));
/* 109167a1: cmp dword ptr [esp + 0x14], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109167a5: jne 0x109167ca */
  if (!zf) goto L_109167ca;
L_109167a7: /* 109167a7: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* 109167aa: mov ecx, dword ptr [ebx + 0x28] */
  ecx = R32((uint32_t)(ebx + 0x28u));
/* 109167ad: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 109167af: je 0x109167ca */
  if (zf) goto L_109167ca;
L_109167b1: /* 109167b1: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 109167b5: jae 0x109167be */
  if (!cf) goto L_109167be;
L_109167b7: /* 109167b7: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 109167b9: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 109167ba: mov ecx, eax */
  ecx = eax;
/* 109167bc: jmp 0x109167c2 */
  goto L_109167c2;
L_109167be: /* 109167be: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 109167c0: mov ecx, edx */
  ecx = edx;
L_109167c2: /* 109167c2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109167c4: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 109167c8: jne 0x10916843 */
  if (!zf) goto L_10916843;
L_109167ca: /* 109167ca: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 109167ce: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 109167d2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 109167d3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 109167d4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 109167d5: mov dword ptr [ebx + 0x34], eax */
  W32((uint32_t)(ebx + 0x34u), eax);
/* 109167d8: call 0x10918070 */
  esp -= 4; W32(esp, 0x109167ddu); SPILL(); f_10918070(); if (g_unwind) return; RELOAD();
/* 109167dd: mov ecx, dword ptr [ebx + 0x30] */
  ecx = R32((uint32_t)(ebx + 0x30u));
/* 109167e0: mov dword ptr [esp + 0x5c], eax */
  W32((uint32_t)(esp + 0x5cu), eax);
/* 109167e4: mov eax, dword ptr [ebx + 0x34] */
  eax = R32((uint32_t)(ebx + 0x34u));
/* 109167e7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109167ea: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 109167ec: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 109167f0: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 109167f4: jae 0x109167fb */
  if (!cf) goto L_109167fb;
L_109167f6: /* 109167f6: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 109167f8: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 109167f9: jmp 0x10916800 */
  goto L_10916800;
L_109167fb: /* 109167fb: mov ecx, dword ptr [ebx + 0x2c] */
  ecx = R32((uint32_t)(ebx + 0x2cu));
/* 109167fe: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
L_10916800: /* 10916800: mov edx, dword ptr [ebx + 0x2c] */
  edx = R32((uint32_t)(ebx + 0x2cu));
/* 10916803: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10916805: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 10916809: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
/* 1091680d: jne 0x1091683b */
  if (!zf) goto L_1091683b;
L_1091680f: /* 1091680f: mov eax, dword ptr [ebx + 0x28] */
  eax = R32((uint32_t)(ebx + 0x28u));
/* 10916812: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 10916816: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 10916818: je 0x10916837 */
  if (zf) goto L_10916837;
L_1091681a: /* 1091681a: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 1091681e: jae 0x1091682b */
  if (!cf) goto L_1091682b;
L_10916820: /* 10916820: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 10916822: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 10916823: mov ecx, edx */
  ecx = edx;
/* 10916825: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 10916829: jmp 0x1091683b */
  goto L_1091683b;
L_1091682b: /* 1091682b: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 1091682f: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 10916831: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 10916835: jmp 0x1091683b */
  goto L_1091683b;
L_10916837: /* 10916837: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
L_1091683b: /* 1091683b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1091683d: je 0x10916e07 */
  if (zf) goto L_10916e07;
L_10916843: /* 10916843: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 10916846: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 1091684a: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 1091684c: mov dword ptr [esp + 0x50], 0 */
  W32((uint32_t)(esp + 0x50u), 0x0u);
/* 10916854: jbe 0x10916858 */
  if ((cf | zf)) goto L_10916858;
L_10916856: /* 10916856: mov eax, edx */
  eax = edx;
L_10916858: /* 10916858: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 1091685a: jbe 0x1091685e */
  if ((cf | zf)) goto L_1091685e;
L_1091685c: /* 1091685c: mov eax, ecx */
  eax = ecx;
L_1091685e: /* 1091685e: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 10916862: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 10916866: mov ecx, eax */
  ecx = eax;
/* 10916868: mov edx, ecx */
  edx = ecx;
/* 1091686a: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 1091686d: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 1091686f: mov ecx, edx */
  ecx = edx;
/* 10916871: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 10916875: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 10916878: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 1091687a: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 1091687e: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 10916882: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 10916886: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10916888: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 1091688c: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 1091688f: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 10916891: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 10916893: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 10916895: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* 10916897: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 1091689b: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 1091689f: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 109168a3: mov dword ptr [ebx + 4], ecx */
  W32((uint32_t)(ebx + 0x4u), ecx);
/* 109168a6: jne 0x10916d3f */
  if (!zf) goto L_10916d3f;
L_109168ac: /* 109168ac: mov eax, dword ptr [ebx + 0x18] */
  eax = R32((uint32_t)(ebx + 0x18u));
/* 109168af: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 109168b1: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 109168b3: and eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 109168b6: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 109168b8: jmp 0x10916d3f */
  goto L_10916d3f;
L_109168bd: /* 109168bd: cmp ebp, 0xe */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xeu);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 109168c0: jae 0x109168f3 */
  if (!cf) goto L_109168f3;
L_109168c2: /* 109168c2: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 109168c6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 109168c8: je 0x10916f2d */
  if (zf) goto L_10916f2d;
L_109168ce: /* 109168ce: mov edx, ecx */
  edx = ecx;
/* 109168d0: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  of = (r) == 0x7fffffffu;
  edx = r;
  }
/* 109168d1: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 109168d5: movzx edx, byte ptr [edi] */
  edx = (uint32_t)(R8((uint32_t)(edi)));
/* 109168d8: mov ecx, ebp */
  ecx = ebp;
/* 109168da: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 109168dc: add ebp, 8 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 109168df: mov dword ptr [esp + 0x50], 0 */
  W32((uint32_t)(esp + 0x50u), 0x0u);
/* 109168e7: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 109168e9: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 109168ea: cmp ebp, 0xe */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xeu);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 109168ed: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 109168f1: jb 0x109168c2 */
  if (cf) goto L_109168c2;
L_109168f3: /* 109168f3: and eax, 0x3fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3fffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 109168f8: mov ecx, eax */
  ecx = eax;
/* 109168fa: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 109168fd: cmp ecx, 0x1d */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 10916900: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 10916903: ja 0x10916e7e */
  if ((!cf && !zf)) goto L_10916e7e;
L_10916909: /* 10916909: shr eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 1091690c: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 1091690f: cmp eax, 0x1d */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 10916912: ja 0x10916e7e */
  if ((!cf && !zf)) goto L_10916e7e;
L_10916918: /* 10916918: lea eax, [eax + ecx + 0x102] */
  eax = (uint32_t)(eax + ecx + 0x102u);
/* 1091691f: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 10916922: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 10916924: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10916925: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10916926: call dword ptr [esi + 0x20] */
  { uint32_t t = R32((uint32_t)(esi + 0x20u)); esp -= 4; W32(esp, 0x10916929u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10916929: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1091692c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1091692e: mov dword ptr [ebx + 0xc], eax */
  W32((uint32_t)(ebx + 0xcu), eax);
/* 10916931: je 0x10916e42 */
  if (zf) goto L_10916e42;
L_10916937: /* 10916937: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 1091693b: shr ecx, 0xe */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 14;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 1091693e: mov dword ptr [esp + 0x48], ecx */
  W32((uint32_t)(esp + 0x48u), ecx);
/* 10916942: sub ebp, 0xe */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xeu);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 10916945: mov dword ptr [ebx + 8], 0 */
  W32((uint32_t)(ebx + 0x8u), 0x0u);
/* 1091694c: mov dword ptr [ebx], 4 */
  W32((uint32_t)(ebx), 0x4u);
/* 10916952: mov eax, ecx */
  eax = ecx;
L_10916954: /* 10916954: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 10916957: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 1091695a: shr edx, 0xa */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 1091695d: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10916960: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10916962: jae 0x109169d9 */
  if (!cf) goto L_109169d9;
L_10916964: /* 10916964: cmp ebp, 3 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10916967: jae 0x109169a1 */
  if (!cf) goto L_109169a1;
L_10916969: /* 10916969: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_10916970: /* 10916970: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 10916974: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 10916976: je 0x10916f2d */
  if (zf) goto L_10916f2d;
L_1091697c: /* 1091697c: mov edx, ecx */
  edx = ecx;
/* 1091697e: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  of = (r) == 0x7fffffffu;
  edx = r;
  }
/* 1091697f: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 10916983: movzx edx, byte ptr [edi] */
  edx = (uint32_t)(R8((uint32_t)(edi)));
/* 10916986: mov ecx, ebp */
  ecx = ebp;
/* 10916988: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 1091698a: add ebp, 8 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1091698d: mov dword ptr [esp + 0x50], 0 */
  W32((uint32_t)(esp + 0x50u), 0x0u);
/* 10916995: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 10916997: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 10916998: cmp ebp, 3 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 1091699b: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 1091699f: jb 0x10916970 */
  if (cf) goto L_10916970;
L_109169a1: /* 109169a1: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 109169a4: mov edx, dword ptr [ecx*4 + 0x10922758] */
  edx = R32((uint32_t)(ecx*4 + 0x10922758u));
/* 109169ab: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 109169ae: and eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 109169b1: mov dword ptr [ecx + edx*4], eax */
  W32((uint32_t)(ecx + edx*4), eax);
/* 109169b4: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* 109169b7: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 109169bb: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 109169bc: mov dword ptr [ebx + 8], edx */
  W32((uint32_t)(ebx + 0x8u), edx);
/* 109169bf: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 109169c2: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 109169c5: shr edx, 0xa */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 109169c8: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 109169cb: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 109169ce: sub ebp, 3 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 109169d1: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 109169d3: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 109169d7: jb 0x10916964 */
  if (cf) goto L_10916964;
L_109169d9: /* 109169d9: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 109169dc: mov eax, 0x13 */
  eax = 0x13u;
/* 109169e1: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 109169e3: jae 0x10916a11 */
  if (!cf) goto L_10916a11;
L_109169e5: /* 109169e5: jmp 0x109169f0 */
  goto L_109169f0;
L_109169e7: /* 109169e7: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 109169ee: mov edi, edi */
  edi = edi;
L_109169f0: /* 109169f0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 109169f3: mov edx, dword ptr [ecx*4 + 0x10922758] */
  edx = R32((uint32_t)(ecx*4 + 0x10922758u));
/* 109169fa: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 109169fd: mov dword ptr [ecx + edx*4], 0 */
  W32((uint32_t)(ecx + edx*4), 0x0u);
/* 10916a04: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* 10916a07: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10916a08: mov ecx, edx */
  ecx = edx;
/* 10916a0a: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10916a0c: mov dword ptr [ebx + 8], edx */
  W32((uint32_t)(ebx + 0x8u), edx);
/* 10916a0f: jb 0x109169f0 */
  if (cf) goto L_109169f0;
L_10916a11: /* 10916a11: mov edx, dword ptr [ebx + 0x24] */
  edx = R32((uint32_t)(ebx + 0x24u));
/* 10916a14: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10916a15: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10916a16: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 10916a19: lea ecx, [ebx + 0x14] */
  ecx = (uint32_t)(ebx + 0x14u);
/* 10916a1c: lea eax, [ebx + 0x10] */
  eax = (uint32_t)(ebx + 0x10u);
/* 10916a1f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10916a20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10916a21: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10916a22: mov dword ptr [eax], 7 */
  W32((uint32_t)(eax), 0x7u);
/* 10916a28: call 0x10917e00 */
  esp -= 4; W32(esp, 0x10916a2du); SPILL(); f_10917e00(); if (g_unwind) return; RELOAD();
/* 10916a2d: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916a30: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10916a32: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 10916a36: jne 0x10916e92 */
  if (!zf) goto L_10916e92;
L_10916a3c: /* 10916a3c: mov dword ptr [ebx + 8], eax */
  W32((uint32_t)(ebx + 0x8u), eax);
/* 10916a3f: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 10916a43: mov dword ptr [ebx], 5 */
  W32((uint32_t)(ebx), 0x5u);
L_10916a49: /* 10916a49: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 10916a4c: mov edx, ecx */
  edx = ecx;
/* 10916a4e: shr edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 10916a51: and edx, 0x1f */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 10916a54: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 10916a57: lea ecx, [edx + ecx + 0x102] */
  ecx = (uint32_t)(edx + ecx + 0x102u);
/* 10916a5e: cmp dword ptr [ebx + 8], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x8u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10916a61: jae 0x10916c07 */
  if (!cf) goto L_10916c07;
L_10916a67: /* 10916a67: jmp 0x10916a70 */
  goto L_10916a70;
L_10916a69: /* 10916a69: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 10916a6d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_10916a70: /* 10916a70: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* 10916a73: cmp ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10916a75: jae 0x10916ab3 */
  if (!cf) goto L_10916ab3;
L_10916a77: /* 10916a77: jmp 0x10916a80 */
  goto L_10916a80;
L_10916a80: /* 10916a80: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 10916a84: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 10916a86: je 0x10916eee */
  if (zf) goto L_10916eee;
L_10916a8c: /* 10916a8c: mov edx, ecx */
  edx = ecx;
/* 10916a8e: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  of = (r) == 0x7fffffffu;
  edx = r;
  }
/* 10916a8f: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 10916a93: movzx edx, byte ptr [edi] */
  edx = (uint32_t)(R8((uint32_t)(edi)));
/* 10916a96: mov ecx, ebp */
  ecx = ebp;
/* 10916a98: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 10916a9a: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* 10916a9d: add ebp, 8 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 10916aa0: mov dword ptr [esp + 0x50], 0 */
  W32((uint32_t)(esp + 0x50u), 0x0u);
/* 10916aa8: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 10916aaa: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 10916aab: cmp ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10916aad: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 10916ab1: jb 0x10916a80 */
  if (cf) goto L_10916a80;
L_10916ab3: /* 10916ab3: mov ecx, dword ptr [ecx*4 + 0x10930908] */
  ecx = R32((uint32_t)(ecx*4 + 0x10930908u));
/* 10916aba: mov edx, dword ptr [ebx + 0x14] */
  edx = R32((uint32_t)(ebx + 0x14u));
/* 10916abd: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 10916abf: lea edx, [edx + ecx*8] */
  edx = (uint32_t)(edx + ecx*8);
/* 10916ac2: movzx ecx, byte ptr [edx + 1] */
  ecx = (uint32_t)(R8((uint32_t)(edx + 0x1u)));
/* 10916ac6: mov edx, dword ptr [edx + 4] */
  edx = R32((uint32_t)(edx + 0x4u));
/* 10916ac9: cmp edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10916acc: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 10916ad0: mov dword ptr [esp + 0x38], edx */
  W32((uint32_t)(esp + 0x38u), edx);
/* 10916ad4: jae 0x10916aef */
  if (!cf) goto L_10916aef;
L_10916ad6: /* 10916ad6: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 10916ad8: sub ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 10916ada: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 10916add: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 10916ae1: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 10916ae4: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 10916ae7: inc dword ptr [ebx + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebx + 0x8u), r);
  }
/* 10916aea: jmp 0x10916be9 */
  goto L_10916be9;
L_10916aef: /* 10916aef: cmp edx, 0x12 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x12u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10916af2: jne 0x10916afe */
  if (!zf) goto L_10916afe;
L_10916af4: /* 10916af4: mov dword ptr [esp + 0x20], 7 */
  W32((uint32_t)(esp + 0x20u), 0x7u);
/* 10916afc: jmp 0x10916b05 */
  goto L_10916b05;
L_10916afe: /* 10916afe: lea ecx, [edx - 0xe] */
  ecx = (uint32_t)(edx + 0xfffffff2u);
/* 10916b01: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
L_10916b05: /* 10916b05: xor ecx, ecx */
  ecx = 0;
/* 10916b07: cmp edx, 0x12 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x12u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10916b0a: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 10916b0e: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 10916b11: lea ecx, [ecx*8 + 3] */
  ecx = (uint32_t)(ecx*8 + 0x3u);
/* 10916b18: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 10916b1c: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 10916b20: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10916b22: cmp ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10916b24: mov dword ptr [esp + 0x34], ecx */
  W32((uint32_t)(esp + 0x34u), ecx);
/* 10916b28: jae 0x10916b64 */
  if (!cf) goto L_10916b64;
L_10916b2a: /* 10916b2a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_10916b30: /* 10916b30: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 10916b34: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 10916b36: je 0x10916f2d */
  if (zf) goto L_10916f2d;
L_10916b3c: /* 10916b3c: mov edx, ecx */
  edx = ecx;
/* 10916b3e: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  of = (r) == 0x7fffffffu;
  edx = r;
  }
/* 10916b3f: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 10916b43: movzx edx, byte ptr [edi] */
  edx = (uint32_t)(R8((uint32_t)(edi)));
/* 10916b46: mov ecx, ebp */
  ecx = ebp;
/* 10916b48: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 10916b4a: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 10916b4e: add ebp, 8 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 10916b51: mov dword ptr [esp + 0x50], 0 */
  W32((uint32_t)(esp + 0x50u), 0x0u);
/* 10916b59: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 10916b5b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 10916b5c: cmp ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10916b5e: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 10916b62: jb 0x10916b30 */
  if (cf) goto L_10916b30;
L_10916b64: /* 10916b64: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 10916b68: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 10916b6a: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 10916b6e: mov edx, dword ptr [ecx*4 + 0x10930908] */
  edx = R32((uint32_t)(ecx*4 + 0x10930908u));
/* 10916b75: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 10916b79: and edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 10916b7b: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (r) < (a);
  of = ((((a) ^ (r)) & ((b) ^ (r))) >> 31) & 1;
  ecx = r;
  }
/* 10916b7d: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 10916b81: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 10916b85: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 10916b87: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 10916b8b: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 10916b8f: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10916b91: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 10916b94: mov edx, eax */
  edx = eax;
/* 10916b96: shr edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 10916b99: and edx, 0x1f */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 10916b9c: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 10916b9f: lea eax, [edx + eax + 0x102] */
  eax = (uint32_t)(edx + eax + 0x102u);
/* 10916ba6: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 10916baa: sub ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 10916bac: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 10916baf: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10916bb1: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 10916bb3: ja 0x10916f56 */
  if ((!cf && !zf)) goto L_10916f56;
L_10916bb9: /* 10916bb9: cmp dword ptr [esp + 0x38], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x38u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10916bbe: jne 0x10916bd2 */
  if (!zf) goto L_10916bd2;
L_10916bc0: /* 10916bc0: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10916bc3: jb 0x10916f56 */
  if (cf) goto L_10916f56;
L_10916bc9: /* 10916bc9: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 10916bcc: mov eax, dword ptr [eax + ecx*4 - 4] */
  eax = R32((uint32_t)(eax + ecx*4 + 0xfffffffcu));
/* 10916bd0: jmp 0x10916bd4 */
  goto L_10916bd4;
L_10916bd2: /* 10916bd2: xor eax, eax */
  eax = 0;
L_10916bd4: /* 10916bd4: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 10916bd7: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* 10916bda: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 10916bde: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10916bdf: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 10916be0: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 10916be4: jne 0x10916bd4 */
  if (!zf) goto L_10916bd4;
L_10916be6: /* 10916be6: mov dword ptr [ebx + 8], ecx */
  W32((uint32_t)(ebx + 0x8u), ecx);
L_10916be9: /* 10916be9: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 10916bec: mov ecx, eax */
  ecx = eax;
/* 10916bee: shr ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 10916bf1: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 10916bf4: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 10916bf7: lea edx, [ecx + eax + 0x102] */
  edx = (uint32_t)(ecx + eax + 0x102u);
/* 10916bfe: cmp dword ptr [ebx + 8], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x8u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10916c01: jb 0x10916a69 */
  if (cf) goto L_10916a69;
L_10916c07: /* 10916c07: mov ecx, dword ptr [ebx + 0x24] */
  ecx = R32((uint32_t)(ebx + 0x24u));
/* 10916c0a: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 10916c0d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10916c0e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10916c0f: lea edx, [esp + 0x44] */
  edx = (uint32_t)(esp + 0x44u);
/* 10916c13: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10916c14: lea ecx, [esp + 0x4c] */
  ecx = (uint32_t)(esp + 0x4cu);
/* 10916c18: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10916c19: lea edx, [esp + 0x30] */
  edx = (uint32_t)(esp + 0x30u);
/* 10916c1d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10916c1e: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 10916c21: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 10916c25: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10916c26: mov ecx, eax */
  ecx = eax;
/* 10916c28: shr ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 10916c2b: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 10916c2e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10916c2f: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10916c30: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 10916c33: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10916c34: add eax, 0x101 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x101u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10916c39: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10916c3a: mov dword ptr [ebx + 0x14], 0 */
  W32((uint32_t)(ebx + 0x14u), 0x0u);
/* 10916c41: mov dword ptr [esp + 0x40], 9 */
  W32((uint32_t)(esp + 0x40u), 0x9u);
/* 10916c49: mov dword ptr [esp + 0x44], 6 */
  W32((uint32_t)(esp + 0x44u), 0x6u);
/* 10916c51: call 0x10917eb0 */
  esp -= 4; W32(esp, 0x10916c56u); SPILL(); f_10917eb0(); if (g_unwind) return; RELOAD();
/* 10916c56: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 10916c59: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 10916c5d: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 10916c60: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10916c61: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10916c62: call dword ptr [esi + 0x24] */
  { uint32_t t = R32((uint32_t)(esi + 0x24u)); esp -= 4; W32(esp, 0x10916c65u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10916c65: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 10916c69: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916c6c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10916c6e: jne 0x10916faa */
  if (!zf) goto L_10916faa;
L_10916c74: /* 10916c74: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 10916c78: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 10916c7c: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 10916c80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10916c81: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10916c82: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 10916c86: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10916c87: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10916c88: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10916c89: call 0x109171a0 */
  esp -= 4; W32(esp, 0x10916c8eu); SPILL(); f_109171a0(); if (g_unwind) return; RELOAD();
/* 10916c8e: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916c91: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10916c93: je 0x10916ff6 */
  if (zf) goto L_10916ff6;
L_10916c99: /* 10916c99: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 10916c9c: mov dword ptr [ebx], 6 */
  W32((uint32_t)(ebx), 0x6u);
L_10916ca2: /* 10916ca2: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 10916ca6: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 10916caa: mov dword ptr [ebx + 0x20], edx */
  W32((uint32_t)(ebx + 0x20u), edx);
/* 10916cad: mov dword ptr [ebx + 0x1c], ebp */
  W32((uint32_t)(ebx + 0x1cu), ebp);
/* 10916cb0: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* 10916cb2: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 10916cb5: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 10916cb8: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 10916cbc: mov ecx, edi */
  ecx = edi;
/* 10916cbe: sub ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 10916cc0: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10916cc2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10916cc3: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 10916cc6: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 10916cca: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10916ccb: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 10916ccd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10916cce: mov dword ptr [ebx + 0x34], edx */
  W32((uint32_t)(ebx + 0x34u), edx);
/* 10916cd1: call 0x109171e0 */
  esp -= 4; W32(esp, 0x10916cd6u); SPILL(); f_109171e0(); if (g_unwind) return; RELOAD();
/* 10916cd6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916cd9: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10916cdc: jne 0x10917032 */
  if (!zf) goto L_10917032;
L_10916ce2: /* 10916ce2: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 10916ce5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10916ce6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10916ce7: mov dword ptr [esp + 0x58], 0 */
  W32((uint32_t)(esp + 0x58u), 0x0u);
/* 10916cef: call 0x109178f0 */
  esp -= 4; W32(esp, 0x10916cf4u); SPILL(); f_109178f0(); if (g_unwind) return; RELOAD();
/* 10916cf4: mov eax, dword ptr [ebx + 0x20] */
  eax = R32((uint32_t)(ebx + 0x20u));
/* 10916cf7: mov ecx, dword ptr [ebx + 0x34] */
  ecx = R32((uint32_t)(ebx + 0x34u));
/* 10916cfa: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 10916cfc: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 10916cff: mov ebp, dword ptr [ebx + 0x1c] */
  ebp = R32((uint32_t)(ebx + 0x1cu));
/* 10916d02: mov dword ptr [esp + 0x50], eax */
  W32((uint32_t)(esp + 0x50u), eax);
/* 10916d06: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* 10916d09: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916d0c: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10916d0e: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 10916d12: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 10916d16: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 10916d1a: jae 0x10916d23 */
  if (!cf) goto L_10916d23;
L_10916d1c: /* 10916d1c: mov edx, ecx */
  edx = ecx;
/* 10916d1e: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10916d20: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 10916d21: jmp 0x10916d2a */
  goto L_10916d2a;
L_10916d23: /* 10916d23: mov eax, dword ptr [ebx + 0x2c] */
  eax = R32((uint32_t)(ebx + 0x2cu));
/* 10916d26: sub eax, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
L_10916d2a: /* 10916d2a: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 10916d2e: mov eax, dword ptr [ebx + 0x18] */
  eax = R32((uint32_t)(ebx + 0x18u));
/* 10916d31: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10916d33: jne 0x10917045 */
  if (!zf) goto L_10917045;
L_10916d39: /* 10916d39: mov dword ptr [ebx], 0 */
  W32((uint32_t)(ebx), 0x0u);
L_10916d3f: /* 10916d3f: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 10916d41: cmp edx, 9 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x9u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 10916d44: mov esi, dword ptr [esp + 0x4c] */
  esi = R32((uint32_t)(esp + 0x4cu));
/* 10916d48: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 10916d4c: jbe 0x10916625 */
  if ((cf | zf)) goto L_10916625;
L_10916d52: /* 10916d52: jmp 0x109165e9 */
  goto L_109165e9;
L_10916d57: /* 10916d57: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 10916d5b: mov dword ptr [ebx + 0x20], ecx */
  W32((uint32_t)(ebx + 0x20u), ecx);
/* 10916d5e: mov dword ptr [ebx + 0x1c], ebp */
  W32((uint32_t)(ebx + 0x1cu), ebp);
/* 10916d61: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 10916d63: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 10916d66: mov edx, edi */
  edx = edi;
/* 10916d68: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 10916d6a: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 10916d6e: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10916d70: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10916d71: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 10916d74: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 10916d78: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10916d79: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 10916d80: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 10916d82: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10916d83: mov dword ptr [ebx + 0x34], eax */
  W32((uint32_t)(ebx + 0x34u), eax);
/* 10916d86: call 0x10918070 */
  esp -= 4; W32(esp, 0x10916d8bu); SPILL(); f_10918070(); if (g_unwind) return; RELOAD();
/* 10916d8b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916d8e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10916d8f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10916d90: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10916d91: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10916d92: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916d95: ret  */
  esp += 4; SPILL(); return;
L_10916d96: /* 10916d96: push -4 */
  { uint32_t v = 0xfffffffcu; esp -= 4; W32(esp, v); }
/* 10916d98: jmp 0x109165eb */
  goto L_109165eb;
L_10916d9d: /* 10916d9d: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 10916da1: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 10916da4: mov dword ptr [ebx], 9 */
  W32((uint32_t)(ebx), 0x9u);
/* 10916daa: mov dword ptr [esi + 0x18], 0x1092f664 */
  W32((uint32_t)(esi + 0x18u), 0x1092f664u);
/* 10916db1: mov dword ptr [ebx + 0x20], eax */
  W32((uint32_t)(ebx + 0x20u), eax);
/* 10916db4: add ebp, -3 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 10916db7: push -3 */
  { uint32_t v = 0xfffffffdu; esp -= 4; W32(esp, v); }
/* 10916db9: jmp 0x109165f2 */
  goto L_109165f2;
L_10916dbe: /* 10916dbe: mov dword ptr [ebx], 9 */
  W32((uint32_t)(ebx), 0x9u);
/* 10916dc4: mov dword ptr [esi + 0x18], 0x1092f678 */
  W32((uint32_t)(esi + 0x18u), 0x1092f678u);
L_10916dcb: /* 10916dcb: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 10916dcf: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 10916dd3: mov dword ptr [ebx + 0x20], ecx */
  W32((uint32_t)(ebx + 0x20u), ecx);
/* 10916dd6: mov dword ptr [ebx + 0x1c], ebp */
  W32((uint32_t)(ebx + 0x1cu), ebp);
/* 10916dd9: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 10916ddc: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 10916ddf: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 10916de1: mov eax, edi */
  eax = edi;
/* 10916de3: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10916de5: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10916de7: push -3 */
  { uint32_t v = 0xfffffffdu; esp -= 4; W32(esp, v); }
/* 10916de9: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 10916dec: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 10916df0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10916df1: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 10916df3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10916df4: mov dword ptr [ebx + 0x34], ecx */
  W32((uint32_t)(ebx + 0x34u), ecx);
/* 10916df7: call 0x10918070 */
  esp -= 4; W32(esp, 0x10916dfcu); SPILL(); f_10918070(); if (g_unwind) return; RELOAD();
/* 10916dfc: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916dff: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10916e00: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10916e01: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10916e02: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10916e03: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916e06: ret  */
  esp += 4; SPILL(); return;
L_10916e07: /* 10916e07: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 10916e0b: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 10916e0f: mov dword ptr [ebx + 0x20], ecx */
  W32((uint32_t)(ebx + 0x20u), ecx);
/* 10916e12: mov dword ptr [ebx + 0x1c], ebp */
  W32((uint32_t)(ebx + 0x1cu), ebp);
/* 10916e15: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* 10916e17: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 10916e1a: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 10916e1d: mov ecx, edi */
  ecx = edi;
/* 10916e1f: sub ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 10916e21: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10916e23: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 10916e26: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 10916e2a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10916e2b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10916e2c: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 10916e2e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10916e2f: mov dword ptr [ebx + 0x34], eax */
  W32((uint32_t)(ebx + 0x34u), eax);
/* 10916e32: call 0x10918070 */
  esp -= 4; W32(esp, 0x10916e37u); SPILL(); f_10918070(); if (g_unwind) return; RELOAD();
/* 10916e37: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916e3a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10916e3b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10916e3c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10916e3d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10916e3e: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916e41: ret  */
  esp += 4; SPILL(); return;
L_10916e42: /* 10916e42: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 10916e46: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 10916e4a: mov dword ptr [ebx + 0x20], ecx */
  W32((uint32_t)(ebx + 0x20u), ecx);
/* 10916e4d: mov dword ptr [ebx + 0x1c], ebp */
  W32((uint32_t)(ebx + 0x1cu), ebp);
/* 10916e50: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 10916e53: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 10916e56: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 10916e58: mov eax, edi */
  eax = edi;
/* 10916e5a: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10916e5c: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10916e5e: push -4 */
  { uint32_t v = 0xfffffffcu; esp -= 4; W32(esp, v); }
/* 10916e60: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 10916e63: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 10916e67: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10916e68: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 10916e6a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10916e6b: mov dword ptr [ebx + 0x34], ecx */
  W32((uint32_t)(ebx + 0x34u), ecx);
/* 10916e6e: call 0x10918070 */
  esp -= 4; W32(esp, 0x10916e73u); SPILL(); f_10918070(); if (g_unwind) return; RELOAD();
/* 10916e73: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916e76: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10916e77: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10916e78: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10916e79: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10916e7a: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916e7d: ret  */
  esp += 4; SPILL(); return;
L_10916e7e: /* 10916e7e: mov dword ptr [ebx], 9 */
  W32((uint32_t)(ebx), 0x9u);
/* 10916e84: mov dword ptr [esi + 0x18], 0x1092f698 */
  W32((uint32_t)(esi + 0x18u), 0x1092f698u);
/* 10916e8b: push -3 */
  { uint32_t v = 0xfffffffdu; esp -= 4; W32(esp, v); }
/* 10916e8d: jmp 0x109165eb */
  goto L_109165eb;
L_10916e92: /* 10916e92: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 10916e95: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 10916e98: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10916e99: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10916e9a: call dword ptr [esi + 0x24] */
  { uint32_t t = R32((uint32_t)(esi + 0x24u)); esp -= 4; W32(esp, 0x10916e9du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10916e9d: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 10916ea1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916ea4: cmp eax, -3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10916ea7: jne 0x10916eaf */
  if (!zf) goto L_10916eaf;
L_10916ea9: /* 10916ea9: mov dword ptr [ebx], 9 */
  W32((uint32_t)(ebx), 0x9u);
L_10916eaf: /* 10916eaf: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 10916eb3: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 10916eb7: mov dword ptr [ebx + 0x20], eax */
  W32((uint32_t)(ebx + 0x20u), eax);
/* 10916eba: mov dword ptr [ebx + 0x1c], ebp */
  W32((uint32_t)(ebx + 0x1cu), ebp);
/* 10916ebd: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 10916ec0: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 10916ec3: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 10916ec5: mov edx, edi */
  edx = edi;
/* 10916ec7: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 10916ec9: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 10916ecd: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10916ecf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10916ed0: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 10916ed3: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 10916ed7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10916ed8: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 10916eda: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10916edb: mov dword ptr [ebx + 0x34], eax */
  W32((uint32_t)(ebx + 0x34u), eax);
/* 10916ede: call 0x10918070 */
  esp -= 4; W32(esp, 0x10916ee3u); SPILL(); f_10918070(); if (g_unwind) return; RELOAD();
/* 10916ee3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916ee6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10916ee7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10916ee8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10916ee9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10916eea: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916eed: ret  */
  esp += 4; SPILL(); return;
L_10916eee: /* 10916eee: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 10916ef2: mov dword ptr [ebx + 0x20], edx */
  W32((uint32_t)(ebx + 0x20u), edx);
/* 10916ef5: mov dword ptr [ebx + 0x1c], ebp */
  W32((uint32_t)(ebx + 0x1cu), ebp);
/* 10916ef8: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 10916efa: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 10916efd: mov eax, edi */
  eax = edi;
/* 10916eff: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10916f01: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 10916f05: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10916f07: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10916f08: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 10916f0b: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 10916f0f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10916f10: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 10916f17: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 10916f19: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10916f1a: mov dword ptr [ebx + 0x34], ecx */
  W32((uint32_t)(ebx + 0x34u), ecx);
/* 10916f1d: call 0x10918070 */
  esp -= 4; W32(esp, 0x10916f22u); SPILL(); f_10918070(); if (g_unwind) return; RELOAD();
/* 10916f22: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916f25: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10916f26: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10916f27: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10916f28: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10916f29: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916f2c: ret  */
  esp += 4; SPILL(); return;
L_10916f2d: /* 10916f2d: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 10916f31: mov dword ptr [ebx + 0x20], eax */
  W32((uint32_t)(ebx + 0x20u), eax);
/* 10916f34: mov dword ptr [ebx + 0x1c], ebp */
  W32((uint32_t)(ebx + 0x1cu), ebp);
/* 10916f37: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 10916f39: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 10916f3c: mov ecx, edi */
  ecx = edi;
/* 10916f3e: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 10916f40: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10916f42: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 10916f45: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 10916f49: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 10916f50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10916f51: jmp 0x1091660a */
  goto L_1091660a;
L_10916f56: /* 10916f56: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 10916f59: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 10916f5c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10916f5d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10916f5e: call dword ptr [esi + 0x24] */
  { uint32_t t = R32((uint32_t)(esi + 0x24u)); esp -= 4; W32(esp, 0x10916f61u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10916f61: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 10916f65: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 10916f69: mov dword ptr [ebx], 9 */
  W32((uint32_t)(ebx), 0x9u);
/* 10916f6f: mov dword ptr [esi + 0x18], 0x1092f6bc */
  W32((uint32_t)(esi + 0x18u), 0x1092f6bcu);
/* 10916f76: mov dword ptr [ebx + 0x20], eax */
  W32((uint32_t)(ebx + 0x20u), eax);
/* 10916f79: mov dword ptr [ebx + 0x1c], ebp */
  W32((uint32_t)(ebx + 0x1cu), ebp);
/* 10916f7c: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 10916f7f: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 10916f82: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 10916f84: mov edx, edi */
  edx = edi;
/* 10916f86: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 10916f88: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10916f8a: push -3 */
  { uint32_t v = 0xfffffffdu; esp -= 4; W32(esp, v); }
/* 10916f8c: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 10916f8f: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 10916f93: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10916f94: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 10916f96: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10916f97: mov dword ptr [ebx + 0x34], eax */
  W32((uint32_t)(ebx + 0x34u), eax);
/* 10916f9a: call 0x10918070 */
  esp -= 4; W32(esp, 0x10916f9fu); SPILL(); f_10918070(); if (g_unwind) return; RELOAD();
/* 10916f9f: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916fa2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10916fa3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10916fa4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10916fa5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10916fa6: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916fa9: ret  */
  esp += 4; SPILL(); return;
L_10916faa: /* 10916faa: cmp dword ptr [esp + 0x18], -3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10916faf: jne 0x10916fb7 */
  if (!zf) goto L_10916fb7;
L_10916fb1: /* 10916fb1: mov dword ptr [ebx], 9 */
  W32((uint32_t)(ebx), 0x9u);
L_10916fb7: /* 10916fb7: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 10916fbb: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 10916fbf: mov dword ptr [ebx + 0x20], ecx */
  W32((uint32_t)(ebx + 0x20u), ecx);
/* 10916fc2: mov dword ptr [ebx + 0x1c], ebp */
  W32((uint32_t)(ebx + 0x1cu), ebp);
/* 10916fc5: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 10916fc8: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 10916fcb: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 10916fcd: mov eax, edi */
  eax = edi;
/* 10916fcf: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10916fd1: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 10916fd5: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10916fd7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10916fd8: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 10916fdb: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 10916fdf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10916fe0: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 10916fe2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10916fe3: mov dword ptr [ebx + 0x34], ecx */
  W32((uint32_t)(ebx + 0x34u), ecx);
/* 10916fe6: call 0x10918070 */
  esp -= 4; W32(esp, 0x10916febu); SPILL(); f_10918070(); if (g_unwind) return; RELOAD();
/* 10916feb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916fee: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10916fef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10916ff0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10916ff1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10916ff2: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916ff5: ret  */
  esp += 4; SPILL(); return;
L_10916ff6: /* 10916ff6: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 10916ffa: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 10916ffe: mov dword ptr [ebx + 0x20], eax */
  W32((uint32_t)(ebx + 0x20u), eax);
/* 10917001: mov dword ptr [ebx + 0x1c], ebp */
  W32((uint32_t)(ebx + 0x1cu), ebp);
/* 10917004: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 10917007: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 1091700a: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 1091700c: mov edx, edi */
  edx = edi;
/* 1091700e: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 10917010: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10917012: push -4 */
  { uint32_t v = 0xfffffffcu; esp -= 4; W32(esp, v); }
/* 10917014: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 10917017: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 1091701b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1091701c: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 1091701e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1091701f: mov dword ptr [ebx + 0x34], eax */
  W32((uint32_t)(ebx + 0x34u), eax);
/* 10917022: call 0x10918070 */
  esp -= 4; W32(esp, 0x10917027u); SPILL(); f_10918070(); if (g_unwind) return; RELOAD();
/* 10917027: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1091702a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1091702b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1091702c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1091702d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1091702e: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10917031: ret  */
  esp += 4; SPILL(); return;
L_10917032: /* 10917032: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10917033: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10917034: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10917035: call 0x10918070 */
  esp -= 4; W32(esp, 0x1091703au); SPILL(); f_10918070(); if (g_unwind) return; RELOAD();
/* 1091703a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1091703d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1091703e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1091703f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10917040: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10917041: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10917044: ret  */
  esp += 4; SPILL(); return;
L_10917045: /* 10917045: mov dword ptr [ebx], 7 */
  W32((uint32_t)(ebx), 0x7u);
L_1091704b: /* 1091704b: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 1091704f: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 10917053: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10917054: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10917055: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10917056: mov dword ptr [ebx + 0x34], ecx */
  W32((uint32_t)(ebx + 0x34u), ecx);
/* 10917059: call 0x10918070 */
  esp -= 4; W32(esp, 0x1091705eu); SPILL(); f_10918070(); if (g_unwind) return; RELOAD();
/* 1091705e: mov ecx, dword ptr [ebx + 0x34] */
  ecx = R32((uint32_t)(ebx + 0x34u));
/* 10917061: mov edx, dword ptr [ebx + 0x30] */
  edx = R32((uint32_t)(ebx + 0x30u));
/* 10917064: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10917067: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10917069: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 1091706d: je 0x10917094 */
  if (zf) goto L_10917094;
L_1091706f: /* 1091706f: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 10917073: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 10917077: mov dword ptr [ebx + 0x20], ecx */
  W32((uint32_t)(ebx + 0x20u), ecx);
/* 1091707a: mov dword ptr [ebx + 0x1c], ebp */
  W32((uint32_t)(ebx + 0x1cu), ebp);
/* 1091707d: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* 1091707f: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 10917082: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 10917085: mov ecx, edi */
  ecx = edi;
/* 10917087: sub ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 10917089: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1091708b: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 1091708e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1091708f: jmp 0x1091660a */
  goto L_1091660a;
L_10917094: /* 10917094: mov dword ptr [ebx], 8 */
  W32((uint32_t)(ebx), 0x8u);
L_1091709a: /* 1091709a: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 1091709e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 109170a2: mov dword ptr [ebx + 0x20], eax */
  W32((uint32_t)(ebx + 0x20u), eax);
/* 109170a5: mov dword ptr [ebx + 0x1c], ebp */
  W32((uint32_t)(ebx + 0x1cu), ebp);
/* 109170a8: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 109170ab: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 109170ae: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 109170b0: mov edx, edi */
  edx = edi;
/* 109170b2: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 109170b4: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 109170b6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 109170b8: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 109170bb: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 109170bf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 109170c0: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 109170c2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 109170c3: mov dword ptr [ebx + 0x34], eax */
  W32((uint32_t)(ebx + 0x34u), eax);
/* 109170c6: call 0x10918070 */
  esp -= 4; W32(esp, 0x109170cbu); SPILL(); f_10918070(); if (g_unwind) return; RELOAD();
/* 109170cb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109170ce: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 109170cf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 109170d0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 109170d1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 109170d2: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109170d5: ret  */
  esp += 4; SPILL(); return;
}

void f_10916a79(void) {
  LOAD_REGS();
  goto L_10916a79;
L_109165e9: /* 109165e9: push -2 */
  { uint32_t v = 0xfffffffeu; esp -= 4; W32(esp, v); }
L_109165eb: /* 109165eb: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 109165ef: mov dword ptr [ebx + 0x20], edx */
  W32((uint32_t)(ebx + 0x20u), edx);
L_109165f2: /* 109165f2: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 109165f6: mov dword ptr [ebx + 0x1c], ebp */
  W32((uint32_t)(ebx + 0x1cu), ebp);
/* 109165f9: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 109165fb: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 109165fe: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 10916601: mov ecx, edi */
  ecx = edi;
/* 10916603: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 10916605: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10916607: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
L_1091660a: /* 1091660a: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 1091660e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1091660f: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 10916611: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10916612: mov dword ptr [ebx + 0x34], edx */
  W32((uint32_t)(ebx + 0x34u), edx);
/* 10916615: call 0x10918070 */
  esp -= 4; W32(esp, 0x1091661au); SPILL(); f_10918070(); if (g_unwind) return; RELOAD();
/* 1091661a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1091661d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1091661e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1091661f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10916620: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10916621: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916624: ret  */
  esp += 4; SPILL(); return;
L_10916625: /* 10916625: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 10916629: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 1091662d: jmp dword ptr [edx*4 + 0x109170d8] */
  switch (R32((uint32_t)(edx*4 + 0x109170d8u))) {
    case 0x10916634u: goto L_10916634;
    case 0x10916694u: goto L_10916694;
    case 0x109166b2u: goto L_109166b2;
    case 0x10916707u: goto L_10916707;
    case 0x1091671cu: goto L_1091671c;
    case 0x1091678au: goto L_1091678a;
    case 0x109168bdu: goto L_109168bd;
    case 0x10916954u: goto L_10916954;
    case 0x10916a49u: goto L_10916a49;
    case 0x10916ca2u: goto L_10916ca2;
    case 0x10916d9du: goto L_10916d9d;
    case 0x10916dcbu: goto L_10916dcb;
    case 0x1091704bu: goto L_1091704b;
    case 0x1091709au: goto L_1091709a;
    default: guest_badjump(0x1091662d, R32((uint32_t)(edx*4 + 0x109170d8u))); return;
  }
L_10916634: /* 10916634: cmp ebp, 3 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10916637: jae 0x10916675 */
  if (!cf) goto L_10916675;
L_10916639: /* 10916639: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_10916640: /* 10916640: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 10916644: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 10916646: je 0x10916d57 */
  if (zf) goto L_10916d57;
L_1091664c: /* 1091664c: mov edx, ecx */
  edx = ecx;
/* 1091664e: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  of = (r) == 0x7fffffffu;
  edx = r;
  }
/* 1091664f: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 10916653: movzx edx, byte ptr [edi] */
  edx = (uint32_t)(R8((uint32_t)(edi)));
/* 10916656: mov ecx, ebp */
  ecx = ebp;
/* 10916658: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 1091665a: add ebp, 8 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1091665d: mov dword ptr [esp + 0x50], 0 */
  W32((uint32_t)(esp + 0x50u), 0x0u);
/* 10916665: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 10916667: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 10916668: cmp ebp, 3 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 1091666b: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 1091666f: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 10916673: jb 0x10916640 */
  if (cf) goto L_10916640;
L_10916675: /* 10916675: mov ecx, eax */
  ecx = eax;
/* 10916677: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 1091667a: mov edx, ecx */
  edx = ecx;
/* 1091667c: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 1091667f: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 10916681: cmp ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 10916684: mov dword ptr [ebx + 0x18], edx */
  W32((uint32_t)(ebx + 0x18u), edx);
/* 10916687: ja 0x10916d3f */
  if ((!cf && !zf)) goto L_10916d3f;
L_1091668d: /* 1091668d: jmp dword ptr [ecx*4 + 0x10917100] */
  switch (R32((uint32_t)(ecx*4 + 0x10917100u))) {
    case 0x10916694u: goto L_10916694;
    case 0x109166b2u: goto L_109166b2;
    case 0x10916707u: goto L_10916707;
    case 0x10916d9du: goto L_10916d9d;
    default: guest_badjump(0x1091668d, R32((uint32_t)(ecx*4 + 0x10917100u))); return;
  }
L_10916694: /* 10916694: sub ebp, 3 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 10916697: mov ecx, ebp */
  ecx = ebp;
/* 10916699: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 1091669c: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  cf = ((uint32_t)a >> (c - 1)) & 1;
  of = (a >> 31) & 1;
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  eax = r;
  }
/* 1091669f: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 109166a1: sub ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 109166a3: mov dword ptr [ebx], 1 */
  W32((uint32_t)(ebx), 0x1u);
/* 109166a9: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 109166ad: jmp 0x10916d3f */
  goto L_10916d3f;
L_109166b2: /* 109166b2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 109166b3: lea eax, [esp + 0x28] */
  eax = (uint32_t)(esp + 0x28u);
/* 109166b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109166b8: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 109166bc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 109166bd: lea edx, [esp + 0x38] */
  edx = (uint32_t)(esp + 0x38u);
/* 109166c1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 109166c2: lea eax, [esp + 0x40] */
  eax = (uint32_t)(esp + 0x40u);
/* 109166c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109166c7: call 0x10918040 */
  esp -= 4; W32(esp, 0x109166ccu); SPILL(); f_10918040(); if (g_unwind) return; RELOAD();
/* 109166cc: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 109166d0: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 109166d4: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 109166d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 109166d9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 109166da: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* 109166de: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 109166df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109166e0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 109166e1: call 0x109171a0 */
  esp -= 4; W32(esp, 0x109166e6u); SPILL(); f_109171a0(); if (g_unwind) return; RELOAD();
/* 109166e6: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109166e9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109166eb: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 109166ee: je 0x10916d96 */
  if (zf) goto L_10916d96;
L_109166f4: /* 109166f4: shr dword ptr [esp + 0x48], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x48u))); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  W32((uint32_t)(esp + 0x48u), r);
  }
/* 109166f9: sub ebp, 3 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 109166fc: mov dword ptr [ebx], 6 */
  W32((uint32_t)(ebx), 0x6u);
/* 10916702: jmp 0x10916d3f */
  goto L_10916d3f;
L_10916707: /* 10916707: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 1091670a: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 1091670e: sub ebp, 3 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 10916711: mov dword ptr [ebx], 3 */
  W32((uint32_t)(ebx), 0x3u);
/* 10916717: jmp 0x10916d3f */
  goto L_10916d3f;
L_1091671c: /* 1091671c: cmp ebp, 0x20 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 1091671f: jae 0x10916756 */
  if (!cf) goto L_10916756;
L_10916721: /* 10916721: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 10916725: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 10916727: je 0x10916f2d */
  if (zf) goto L_10916f2d;
L_1091672d: /* 1091672d: mov edx, ecx */
  edx = ecx;
/* 1091672f: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  of = (r) == 0x7fffffffu;
  edx = r;
  }
/* 10916730: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 10916734: movzx edx, byte ptr [edi] */
  edx = (uint32_t)(R8((uint32_t)(edi)));
/* 10916737: mov ecx, ebp */
  ecx = ebp;
/* 10916739: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 1091673b: add ebp, 8 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1091673e: mov dword ptr [esp + 0x50], 0 */
  W32((uint32_t)(esp + 0x50u), 0x0u);
/* 10916746: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 10916748: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 10916749: cmp ebp, 0x20 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 1091674c: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 10916750: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 10916754: jb 0x10916721 */
  if (cf) goto L_10916721;
L_10916756: /* 10916756: mov ecx, eax */
  ecx = eax;
/* 10916758: not eax */
  eax = ~eax;
/* 1091675a: and ecx, 0xffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 10916760: shr eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 10916763: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10916765: jne 0x10916dbe */
  if (!zf) goto L_10916dbe;
L_1091676b: /* 1091676b: xor ebp, ebp */
  ebp = 0;
/* 1091676d: mov eax, ecx */
  eax = ecx;
/* 1091676f: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10916771: mov dword ptr [ebx + 4], ecx */
  W32((uint32_t)(ebx + 0x4u), ecx);
/* 10916774: mov dword ptr [esp + 0x48], ebp */
  W32((uint32_t)(esp + 0x48u), ebp);
/* 10916778: je 0x109168ac */
  if (zf) goto L_109168ac;
L_1091677e: /* 1091677e: mov eax, 2 */
  eax = 0x2u;
/* 10916783: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 10916785: jmp 0x10916d3f */
  goto L_10916d3f;
L_1091678a: /* 1091678a: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 1091678e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10916790: je 0x10916eee */
  if (zf) goto L_10916eee;
L_10916796: /* 10916796: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10916798: jne 0x10916843 */
  if (!zf) goto L_10916843;
L_1091679e: /* 1091679e: mov edx, dword ptr [ebx + 0x2c] */
  edx = R32((uint32_t)(ebx + 0x2cu));
/* 109167a1: cmp dword ptr [esp + 0x14], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109167a5: jne 0x109167ca */
  if (!zf) goto L_109167ca;
L_109167a7: /* 109167a7: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* 109167aa: mov ecx, dword ptr [ebx + 0x28] */
  ecx = R32((uint32_t)(ebx + 0x28u));
/* 109167ad: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 109167af: je 0x109167ca */
  if (zf) goto L_109167ca;
L_109167b1: /* 109167b1: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 109167b5: jae 0x109167be */
  if (!cf) goto L_109167be;
L_109167b7: /* 109167b7: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 109167b9: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 109167ba: mov ecx, eax */
  ecx = eax;
/* 109167bc: jmp 0x109167c2 */
  goto L_109167c2;
L_109167be: /* 109167be: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 109167c0: mov ecx, edx */
  ecx = edx;
L_109167c2: /* 109167c2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109167c4: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 109167c8: jne 0x10916843 */
  if (!zf) goto L_10916843;
L_109167ca: /* 109167ca: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 109167ce: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 109167d2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 109167d3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 109167d4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 109167d5: mov dword ptr [ebx + 0x34], eax */
  W32((uint32_t)(ebx + 0x34u), eax);
/* 109167d8: call 0x10918070 */
  esp -= 4; W32(esp, 0x109167ddu); SPILL(); f_10918070(); if (g_unwind) return; RELOAD();
/* 109167dd: mov ecx, dword ptr [ebx + 0x30] */
  ecx = R32((uint32_t)(ebx + 0x30u));
/* 109167e0: mov dword ptr [esp + 0x5c], eax */
  W32((uint32_t)(esp + 0x5cu), eax);
/* 109167e4: mov eax, dword ptr [ebx + 0x34] */
  eax = R32((uint32_t)(ebx + 0x34u));
/* 109167e7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109167ea: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 109167ec: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 109167f0: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 109167f4: jae 0x109167fb */
  if (!cf) goto L_109167fb;
L_109167f6: /* 109167f6: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 109167f8: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 109167f9: jmp 0x10916800 */
  goto L_10916800;
L_109167fb: /* 109167fb: mov ecx, dword ptr [ebx + 0x2c] */
  ecx = R32((uint32_t)(ebx + 0x2cu));
/* 109167fe: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
L_10916800: /* 10916800: mov edx, dword ptr [ebx + 0x2c] */
  edx = R32((uint32_t)(ebx + 0x2cu));
/* 10916803: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10916805: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 10916809: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
/* 1091680d: jne 0x1091683b */
  if (!zf) goto L_1091683b;
L_1091680f: /* 1091680f: mov eax, dword ptr [ebx + 0x28] */
  eax = R32((uint32_t)(ebx + 0x28u));
/* 10916812: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 10916816: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 10916818: je 0x10916837 */
  if (zf) goto L_10916837;
L_1091681a: /* 1091681a: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 1091681e: jae 0x1091682b */
  if (!cf) goto L_1091682b;
L_10916820: /* 10916820: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 10916822: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 10916823: mov ecx, edx */
  ecx = edx;
/* 10916825: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 10916829: jmp 0x1091683b */
  goto L_1091683b;
L_1091682b: /* 1091682b: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 1091682f: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 10916831: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 10916835: jmp 0x1091683b */
  goto L_1091683b;
L_10916837: /* 10916837: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
L_1091683b: /* 1091683b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1091683d: je 0x10916e07 */
  if (zf) goto L_10916e07;
L_10916843: /* 10916843: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 10916846: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 1091684a: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 1091684c: mov dword ptr [esp + 0x50], 0 */
  W32((uint32_t)(esp + 0x50u), 0x0u);
/* 10916854: jbe 0x10916858 */
  if ((cf | zf)) goto L_10916858;
L_10916856: /* 10916856: mov eax, edx */
  eax = edx;
L_10916858: /* 10916858: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 1091685a: jbe 0x1091685e */
  if ((cf | zf)) goto L_1091685e;
L_1091685c: /* 1091685c: mov eax, ecx */
  eax = ecx;
L_1091685e: /* 1091685e: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 10916862: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 10916866: mov ecx, eax */
  ecx = eax;
/* 10916868: mov edx, ecx */
  edx = ecx;
/* 1091686a: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 1091686d: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 1091686f: mov ecx, edx */
  ecx = edx;
/* 10916871: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 10916875: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 10916878: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 1091687a: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 1091687e: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 10916882: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 10916886: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10916888: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 1091688c: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 1091688f: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 10916891: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 10916893: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 10916895: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* 10916897: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 1091689b: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 1091689f: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 109168a3: mov dword ptr [ebx + 4], ecx */
  W32((uint32_t)(ebx + 0x4u), ecx);
/* 109168a6: jne 0x10916d3f */
  if (!zf) goto L_10916d3f;
L_109168ac: /* 109168ac: mov eax, dword ptr [ebx + 0x18] */
  eax = R32((uint32_t)(ebx + 0x18u));
/* 109168af: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 109168b1: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 109168b3: and eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 109168b6: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 109168b8: jmp 0x10916d3f */
  goto L_10916d3f;
L_109168bd: /* 109168bd: cmp ebp, 0xe */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xeu);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 109168c0: jae 0x109168f3 */
  if (!cf) goto L_109168f3;
L_109168c2: /* 109168c2: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 109168c6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 109168c8: je 0x10916f2d */
  if (zf) goto L_10916f2d;
L_109168ce: /* 109168ce: mov edx, ecx */
  edx = ecx;
/* 109168d0: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  of = (r) == 0x7fffffffu;
  edx = r;
  }
/* 109168d1: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 109168d5: movzx edx, byte ptr [edi] */
  edx = (uint32_t)(R8((uint32_t)(edi)));
/* 109168d8: mov ecx, ebp */
  ecx = ebp;
/* 109168da: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 109168dc: add ebp, 8 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 109168df: mov dword ptr [esp + 0x50], 0 */
  W32((uint32_t)(esp + 0x50u), 0x0u);
/* 109168e7: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 109168e9: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 109168ea: cmp ebp, 0xe */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xeu);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 109168ed: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 109168f1: jb 0x109168c2 */
  if (cf) goto L_109168c2;
L_109168f3: /* 109168f3: and eax, 0x3fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3fffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 109168f8: mov ecx, eax */
  ecx = eax;
/* 109168fa: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 109168fd: cmp ecx, 0x1d */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 10916900: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 10916903: ja 0x10916e7e */
  if ((!cf && !zf)) goto L_10916e7e;
L_10916909: /* 10916909: shr eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 1091690c: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 1091690f: cmp eax, 0x1d */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 10916912: ja 0x10916e7e */
  if ((!cf && !zf)) goto L_10916e7e;
L_10916918: /* 10916918: lea eax, [eax + ecx + 0x102] */
  eax = (uint32_t)(eax + ecx + 0x102u);
/* 1091691f: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 10916922: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 10916924: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10916925: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10916926: call dword ptr [esi + 0x20] */
  { uint32_t t = R32((uint32_t)(esi + 0x20u)); esp -= 4; W32(esp, 0x10916929u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10916929: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1091692c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1091692e: mov dword ptr [ebx + 0xc], eax */
  W32((uint32_t)(ebx + 0xcu), eax);
/* 10916931: je 0x10916e42 */
  if (zf) goto L_10916e42;
L_10916937: /* 10916937: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 1091693b: shr ecx, 0xe */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 14;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 1091693e: mov dword ptr [esp + 0x48], ecx */
  W32((uint32_t)(esp + 0x48u), ecx);
/* 10916942: sub ebp, 0xe */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xeu);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 10916945: mov dword ptr [ebx + 8], 0 */
  W32((uint32_t)(ebx + 0x8u), 0x0u);
/* 1091694c: mov dword ptr [ebx], 4 */
  W32((uint32_t)(ebx), 0x4u);
/* 10916952: mov eax, ecx */
  eax = ecx;
L_10916954: /* 10916954: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 10916957: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 1091695a: shr edx, 0xa */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 1091695d: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10916960: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10916962: jae 0x109169d9 */
  if (!cf) goto L_109169d9;
L_10916964: /* 10916964: cmp ebp, 3 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10916967: jae 0x109169a1 */
  if (!cf) goto L_109169a1;
L_10916969: /* 10916969: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_10916970: /* 10916970: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 10916974: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 10916976: je 0x10916f2d */
  if (zf) goto L_10916f2d;
L_1091697c: /* 1091697c: mov edx, ecx */
  edx = ecx;
/* 1091697e: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  of = (r) == 0x7fffffffu;
  edx = r;
  }
/* 1091697f: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 10916983: movzx edx, byte ptr [edi] */
  edx = (uint32_t)(R8((uint32_t)(edi)));
/* 10916986: mov ecx, ebp */
  ecx = ebp;
/* 10916988: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 1091698a: add ebp, 8 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1091698d: mov dword ptr [esp + 0x50], 0 */
  W32((uint32_t)(esp + 0x50u), 0x0u);
/* 10916995: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 10916997: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 10916998: cmp ebp, 3 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 1091699b: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 1091699f: jb 0x10916970 */
  if (cf) goto L_10916970;
L_109169a1: /* 109169a1: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 109169a4: mov edx, dword ptr [ecx*4 + 0x10922758] */
  edx = R32((uint32_t)(ecx*4 + 0x10922758u));
/* 109169ab: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 109169ae: and eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 109169b1: mov dword ptr [ecx + edx*4], eax */
  W32((uint32_t)(ecx + edx*4), eax);
/* 109169b4: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* 109169b7: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 109169bb: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 109169bc: mov dword ptr [ebx + 8], edx */
  W32((uint32_t)(ebx + 0x8u), edx);
/* 109169bf: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 109169c2: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 109169c5: shr edx, 0xa */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 109169c8: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 109169cb: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 109169ce: sub ebp, 3 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 109169d1: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 109169d3: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 109169d7: jb 0x10916964 */
  if (cf) goto L_10916964;
L_109169d9: /* 109169d9: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 109169dc: mov eax, 0x13 */
  eax = 0x13u;
/* 109169e1: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 109169e3: jae 0x10916a11 */
  if (!cf) goto L_10916a11;
L_109169e5: /* 109169e5: jmp 0x109169f0 */
  goto L_109169f0;
L_109169f0: /* 109169f0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 109169f3: mov edx, dword ptr [ecx*4 + 0x10922758] */
  edx = R32((uint32_t)(ecx*4 + 0x10922758u));
/* 109169fa: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 109169fd: mov dword ptr [ecx + edx*4], 0 */
  W32((uint32_t)(ecx + edx*4), 0x0u);
/* 10916a04: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* 10916a07: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10916a08: mov ecx, edx */
  ecx = edx;
/* 10916a0a: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10916a0c: mov dword ptr [ebx + 8], edx */
  W32((uint32_t)(ebx + 0x8u), edx);
/* 10916a0f: jb 0x109169f0 */
  if (cf) goto L_109169f0;
L_10916a11: /* 10916a11: mov edx, dword ptr [ebx + 0x24] */
  edx = R32((uint32_t)(ebx + 0x24u));
/* 10916a14: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10916a15: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10916a16: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 10916a19: lea ecx, [ebx + 0x14] */
  ecx = (uint32_t)(ebx + 0x14u);
/* 10916a1c: lea eax, [ebx + 0x10] */
  eax = (uint32_t)(ebx + 0x10u);
/* 10916a1f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10916a20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10916a21: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10916a22: mov dword ptr [eax], 7 */
  W32((uint32_t)(eax), 0x7u);
/* 10916a28: call 0x10917e00 */
  esp -= 4; W32(esp, 0x10916a2du); SPILL(); f_10917e00(); if (g_unwind) return; RELOAD();
/* 10916a2d: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916a30: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10916a32: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 10916a36: jne 0x10916e92 */
  if (!zf) goto L_10916e92;
L_10916a3c: /* 10916a3c: mov dword ptr [ebx + 8], eax */
  W32((uint32_t)(ebx + 0x8u), eax);
/* 10916a3f: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 10916a43: mov dword ptr [ebx], 5 */
  W32((uint32_t)(ebx), 0x5u);
L_10916a49: /* 10916a49: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 10916a4c: mov edx, ecx */
  edx = ecx;
/* 10916a4e: shr edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 10916a51: and edx, 0x1f */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 10916a54: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 10916a57: lea ecx, [edx + ecx + 0x102] */
  ecx = (uint32_t)(edx + ecx + 0x102u);
/* 10916a5e: cmp dword ptr [ebx + 8], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x8u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10916a61: jae 0x10916c07 */
  if (!cf) goto L_10916c07;
L_10916a67: /* 10916a67: jmp 0x10916a70 */
  goto L_10916a70;
L_10916a69: /* 10916a69: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 10916a6d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_10916a70: /* 10916a70: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* 10916a73: cmp ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10916a75: jae 0x10916ab3 */
  if (!cf) goto L_10916ab3;
L_10916a77: /* 10916a77: jmp 0x10916a80 */
  goto L_10916a80;
L_10916a79: /* 10916a79: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_10916a80: /* 10916a80: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 10916a84: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 10916a86: je 0x10916eee */
  if (zf) goto L_10916eee;
L_10916a8c: /* 10916a8c: mov edx, ecx */
  edx = ecx;
/* 10916a8e: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  of = (r) == 0x7fffffffu;
  edx = r;
  }
/* 10916a8f: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 10916a93: movzx edx, byte ptr [edi] */
  edx = (uint32_t)(R8((uint32_t)(edi)));
/* 10916a96: mov ecx, ebp */
  ecx = ebp;
/* 10916a98: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 10916a9a: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* 10916a9d: add ebp, 8 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 10916aa0: mov dword ptr [esp + 0x50], 0 */
  W32((uint32_t)(esp + 0x50u), 0x0u);
/* 10916aa8: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 10916aaa: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 10916aab: cmp ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10916aad: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 10916ab1: jb 0x10916a80 */
  if (cf) goto L_10916a80;
L_10916ab3: /* 10916ab3: mov ecx, dword ptr [ecx*4 + 0x10930908] */
  ecx = R32((uint32_t)(ecx*4 + 0x10930908u));
/* 10916aba: mov edx, dword ptr [ebx + 0x14] */
  edx = R32((uint32_t)(ebx + 0x14u));
/* 10916abd: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 10916abf: lea edx, [edx + ecx*8] */
  edx = (uint32_t)(edx + ecx*8);
/* 10916ac2: movzx ecx, byte ptr [edx + 1] */
  ecx = (uint32_t)(R8((uint32_t)(edx + 0x1u)));
/* 10916ac6: mov edx, dword ptr [edx + 4] */
  edx = R32((uint32_t)(edx + 0x4u));
/* 10916ac9: cmp edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10916acc: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 10916ad0: mov dword ptr [esp + 0x38], edx */
  W32((uint32_t)(esp + 0x38u), edx);
/* 10916ad4: jae 0x10916aef */
  if (!cf) goto L_10916aef;
L_10916ad6: /* 10916ad6: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 10916ad8: sub ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 10916ada: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 10916add: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 10916ae1: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 10916ae4: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 10916ae7: inc dword ptr [ebx + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebx + 0x8u), r);
  }
/* 10916aea: jmp 0x10916be9 */
  goto L_10916be9;
L_10916aef: /* 10916aef: cmp edx, 0x12 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x12u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10916af2: jne 0x10916afe */
  if (!zf) goto L_10916afe;
L_10916af4: /* 10916af4: mov dword ptr [esp + 0x20], 7 */
  W32((uint32_t)(esp + 0x20u), 0x7u);
/* 10916afc: jmp 0x10916b05 */
  goto L_10916b05;
L_10916afe: /* 10916afe: lea ecx, [edx - 0xe] */
  ecx = (uint32_t)(edx + 0xfffffff2u);
/* 10916b01: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
L_10916b05: /* 10916b05: xor ecx, ecx */
  ecx = 0;
/* 10916b07: cmp edx, 0x12 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x12u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10916b0a: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 10916b0e: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 10916b11: lea ecx, [ecx*8 + 3] */
  ecx = (uint32_t)(ecx*8 + 0x3u);
/* 10916b18: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 10916b1c: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 10916b20: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10916b22: cmp ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10916b24: mov dword ptr [esp + 0x34], ecx */
  W32((uint32_t)(esp + 0x34u), ecx);
/* 10916b28: jae 0x10916b64 */
  if (!cf) goto L_10916b64;
L_10916b2a: /* 10916b2a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_10916b30: /* 10916b30: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 10916b34: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 10916b36: je 0x10916f2d */
  if (zf) goto L_10916f2d;
L_10916b3c: /* 10916b3c: mov edx, ecx */
  edx = ecx;
/* 10916b3e: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  of = (r) == 0x7fffffffu;
  edx = r;
  }
/* 10916b3f: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 10916b43: movzx edx, byte ptr [edi] */
  edx = (uint32_t)(R8((uint32_t)(edi)));
/* 10916b46: mov ecx, ebp */
  ecx = ebp;
/* 10916b48: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 10916b4a: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 10916b4e: add ebp, 8 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 10916b51: mov dword ptr [esp + 0x50], 0 */
  W32((uint32_t)(esp + 0x50u), 0x0u);
/* 10916b59: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 10916b5b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 10916b5c: cmp ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10916b5e: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 10916b62: jb 0x10916b30 */
  if (cf) goto L_10916b30;
L_10916b64: /* 10916b64: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 10916b68: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 10916b6a: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 10916b6e: mov edx, dword ptr [ecx*4 + 0x10930908] */
  edx = R32((uint32_t)(ecx*4 + 0x10930908u));
/* 10916b75: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 10916b79: and edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 10916b7b: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (r) < (a);
  of = ((((a) ^ (r)) & ((b) ^ (r))) >> 31) & 1;
  ecx = r;
  }
/* 10916b7d: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 10916b81: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 10916b85: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 10916b87: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 10916b8b: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 10916b8f: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10916b91: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 10916b94: mov edx, eax */
  edx = eax;
/* 10916b96: shr edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 10916b99: and edx, 0x1f */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 10916b9c: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 10916b9f: lea eax, [edx + eax + 0x102] */
  eax = (uint32_t)(edx + eax + 0x102u);
/* 10916ba6: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 10916baa: sub ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 10916bac: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 10916baf: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10916bb1: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 10916bb3: ja 0x10916f56 */
  if ((!cf && !zf)) goto L_10916f56;
L_10916bb9: /* 10916bb9: cmp dword ptr [esp + 0x38], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x38u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10916bbe: jne 0x10916bd2 */
  if (!zf) goto L_10916bd2;
L_10916bc0: /* 10916bc0: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10916bc3: jb 0x10916f56 */
  if (cf) goto L_10916f56;
L_10916bc9: /* 10916bc9: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 10916bcc: mov eax, dword ptr [eax + ecx*4 - 4] */
  eax = R32((uint32_t)(eax + ecx*4 + 0xfffffffcu));
/* 10916bd0: jmp 0x10916bd4 */
  goto L_10916bd4;
L_10916bd2: /* 10916bd2: xor eax, eax */
  eax = 0;
L_10916bd4: /* 10916bd4: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 10916bd7: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* 10916bda: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 10916bde: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10916bdf: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 10916be0: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 10916be4: jne 0x10916bd4 */
  if (!zf) goto L_10916bd4;
L_10916be6: /* 10916be6: mov dword ptr [ebx + 8], ecx */
  W32((uint32_t)(ebx + 0x8u), ecx);
L_10916be9: /* 10916be9: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 10916bec: mov ecx, eax */
  ecx = eax;
/* 10916bee: shr ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 10916bf1: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 10916bf4: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 10916bf7: lea edx, [ecx + eax + 0x102] */
  edx = (uint32_t)(ecx + eax + 0x102u);
/* 10916bfe: cmp dword ptr [ebx + 8], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x8u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10916c01: jb 0x10916a69 */
  if (cf) goto L_10916a69;
L_10916c07: /* 10916c07: mov ecx, dword ptr [ebx + 0x24] */
  ecx = R32((uint32_t)(ebx + 0x24u));
/* 10916c0a: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 10916c0d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10916c0e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10916c0f: lea edx, [esp + 0x44] */
  edx = (uint32_t)(esp + 0x44u);
/* 10916c13: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10916c14: lea ecx, [esp + 0x4c] */
  ecx = (uint32_t)(esp + 0x4cu);
/* 10916c18: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10916c19: lea edx, [esp + 0x30] */
  edx = (uint32_t)(esp + 0x30u);
/* 10916c1d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10916c1e: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 10916c21: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 10916c25: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10916c26: mov ecx, eax */
  ecx = eax;
/* 10916c28: shr ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 10916c2b: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 10916c2e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10916c2f: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10916c30: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 10916c33: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10916c34: add eax, 0x101 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x101u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10916c39: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10916c3a: mov dword ptr [ebx + 0x14], 0 */
  W32((uint32_t)(ebx + 0x14u), 0x0u);
/* 10916c41: mov dword ptr [esp + 0x40], 9 */
  W32((uint32_t)(esp + 0x40u), 0x9u);
/* 10916c49: mov dword ptr [esp + 0x44], 6 */
  W32((uint32_t)(esp + 0x44u), 0x6u);
/* 10916c51: call 0x10917eb0 */
  esp -= 4; W32(esp, 0x10916c56u); SPILL(); f_10917eb0(); if (g_unwind) return; RELOAD();
/* 10916c56: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 10916c59: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 10916c5d: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 10916c60: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10916c61: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10916c62: call dword ptr [esi + 0x24] */
  { uint32_t t = R32((uint32_t)(esi + 0x24u)); esp -= 4; W32(esp, 0x10916c65u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10916c65: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 10916c69: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916c6c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10916c6e: jne 0x10916faa */
  if (!zf) goto L_10916faa;
L_10916c74: /* 10916c74: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 10916c78: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 10916c7c: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 10916c80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10916c81: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10916c82: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 10916c86: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10916c87: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10916c88: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10916c89: call 0x109171a0 */
  esp -= 4; W32(esp, 0x10916c8eu); SPILL(); f_109171a0(); if (g_unwind) return; RELOAD();
/* 10916c8e: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916c91: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10916c93: je 0x10916ff6 */
  if (zf) goto L_10916ff6;
L_10916c99: /* 10916c99: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 10916c9c: mov dword ptr [ebx], 6 */
  W32((uint32_t)(ebx), 0x6u);
L_10916ca2: /* 10916ca2: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 10916ca6: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 10916caa: mov dword ptr [ebx + 0x20], edx */
  W32((uint32_t)(ebx + 0x20u), edx);
/* 10916cad: mov dword ptr [ebx + 0x1c], ebp */
  W32((uint32_t)(ebx + 0x1cu), ebp);
/* 10916cb0: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* 10916cb2: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 10916cb5: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 10916cb8: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 10916cbc: mov ecx, edi */
  ecx = edi;
/* 10916cbe: sub ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 10916cc0: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10916cc2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10916cc3: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 10916cc6: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 10916cca: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10916ccb: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 10916ccd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10916cce: mov dword ptr [ebx + 0x34], edx */
  W32((uint32_t)(ebx + 0x34u), edx);
/* 10916cd1: call 0x109171e0 */
  esp -= 4; W32(esp, 0x10916cd6u); SPILL(); f_109171e0(); if (g_unwind) return; RELOAD();
/* 10916cd6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916cd9: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10916cdc: jne 0x10917032 */
  if (!zf) goto L_10917032;
L_10916ce2: /* 10916ce2: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 10916ce5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10916ce6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10916ce7: mov dword ptr [esp + 0x58], 0 */
  W32((uint32_t)(esp + 0x58u), 0x0u);
/* 10916cef: call 0x109178f0 */
  esp -= 4; W32(esp, 0x10916cf4u); SPILL(); f_109178f0(); if (g_unwind) return; RELOAD();
/* 10916cf4: mov eax, dword ptr [ebx + 0x20] */
  eax = R32((uint32_t)(ebx + 0x20u));
/* 10916cf7: mov ecx, dword ptr [ebx + 0x34] */
  ecx = R32((uint32_t)(ebx + 0x34u));
/* 10916cfa: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 10916cfc: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 10916cff: mov ebp, dword ptr [ebx + 0x1c] */
  ebp = R32((uint32_t)(ebx + 0x1cu));
/* 10916d02: mov dword ptr [esp + 0x50], eax */
  W32((uint32_t)(esp + 0x50u), eax);
/* 10916d06: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* 10916d09: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916d0c: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10916d0e: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 10916d12: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 10916d16: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 10916d1a: jae 0x10916d23 */
  if (!cf) goto L_10916d23;
L_10916d1c: /* 10916d1c: mov edx, ecx */
  edx = ecx;
/* 10916d1e: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10916d20: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 10916d21: jmp 0x10916d2a */
  goto L_10916d2a;
L_10916d23: /* 10916d23: mov eax, dword ptr [ebx + 0x2c] */
  eax = R32((uint32_t)(ebx + 0x2cu));
/* 10916d26: sub eax, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
L_10916d2a: /* 10916d2a: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 10916d2e: mov eax, dword ptr [ebx + 0x18] */
  eax = R32((uint32_t)(ebx + 0x18u));
/* 10916d31: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10916d33: jne 0x10917045 */
  if (!zf) goto L_10917045;
L_10916d39: /* 10916d39: mov dword ptr [ebx], 0 */
  W32((uint32_t)(ebx), 0x0u);
L_10916d3f: /* 10916d3f: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 10916d41: cmp edx, 9 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x9u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 10916d44: mov esi, dword ptr [esp + 0x4c] */
  esi = R32((uint32_t)(esp + 0x4cu));
/* 10916d48: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 10916d4c: jbe 0x10916625 */
  if ((cf | zf)) goto L_10916625;
L_10916d52: /* 10916d52: jmp 0x109165e9 */
  goto L_109165e9;
L_10916d57: /* 10916d57: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 10916d5b: mov dword ptr [ebx + 0x20], ecx */
  W32((uint32_t)(ebx + 0x20u), ecx);
/* 10916d5e: mov dword ptr [ebx + 0x1c], ebp */
  W32((uint32_t)(ebx + 0x1cu), ebp);
/* 10916d61: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 10916d63: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 10916d66: mov edx, edi */
  edx = edi;
/* 10916d68: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 10916d6a: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 10916d6e: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10916d70: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10916d71: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 10916d74: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 10916d78: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10916d79: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 10916d80: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 10916d82: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10916d83: mov dword ptr [ebx + 0x34], eax */
  W32((uint32_t)(ebx + 0x34u), eax);
/* 10916d86: call 0x10918070 */
  esp -= 4; W32(esp, 0x10916d8bu); SPILL(); f_10918070(); if (g_unwind) return; RELOAD();
/* 10916d8b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916d8e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10916d8f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10916d90: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10916d91: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10916d92: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916d95: ret  */
  esp += 4; SPILL(); return;
L_10916d96: /* 10916d96: push -4 */
  { uint32_t v = 0xfffffffcu; esp -= 4; W32(esp, v); }
/* 10916d98: jmp 0x109165eb */
  goto L_109165eb;
L_10916d9d: /* 10916d9d: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 10916da1: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 10916da4: mov dword ptr [ebx], 9 */
  W32((uint32_t)(ebx), 0x9u);
/* 10916daa: mov dword ptr [esi + 0x18], 0x1092f664 */
  W32((uint32_t)(esi + 0x18u), 0x1092f664u);
/* 10916db1: mov dword ptr [ebx + 0x20], eax */
  W32((uint32_t)(ebx + 0x20u), eax);
/* 10916db4: add ebp, -3 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 10916db7: push -3 */
  { uint32_t v = 0xfffffffdu; esp -= 4; W32(esp, v); }
/* 10916db9: jmp 0x109165f2 */
  goto L_109165f2;
L_10916dbe: /* 10916dbe: mov dword ptr [ebx], 9 */
  W32((uint32_t)(ebx), 0x9u);
/* 10916dc4: mov dword ptr [esi + 0x18], 0x1092f678 */
  W32((uint32_t)(esi + 0x18u), 0x1092f678u);
L_10916dcb: /* 10916dcb: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 10916dcf: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 10916dd3: mov dword ptr [ebx + 0x20], ecx */
  W32((uint32_t)(ebx + 0x20u), ecx);
/* 10916dd6: mov dword ptr [ebx + 0x1c], ebp */
  W32((uint32_t)(ebx + 0x1cu), ebp);
/* 10916dd9: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 10916ddc: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 10916ddf: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 10916de1: mov eax, edi */
  eax = edi;
/* 10916de3: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10916de5: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10916de7: push -3 */
  { uint32_t v = 0xfffffffdu; esp -= 4; W32(esp, v); }
/* 10916de9: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 10916dec: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 10916df0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10916df1: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 10916df3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10916df4: mov dword ptr [ebx + 0x34], ecx */
  W32((uint32_t)(ebx + 0x34u), ecx);
/* 10916df7: call 0x10918070 */
  esp -= 4; W32(esp, 0x10916dfcu); SPILL(); f_10918070(); if (g_unwind) return; RELOAD();
/* 10916dfc: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916dff: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10916e00: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10916e01: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10916e02: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10916e03: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916e06: ret  */
  esp += 4; SPILL(); return;
L_10916e07: /* 10916e07: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 10916e0b: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 10916e0f: mov dword ptr [ebx + 0x20], ecx */
  W32((uint32_t)(ebx + 0x20u), ecx);
/* 10916e12: mov dword ptr [ebx + 0x1c], ebp */
  W32((uint32_t)(ebx + 0x1cu), ebp);
/* 10916e15: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* 10916e17: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 10916e1a: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 10916e1d: mov ecx, edi */
  ecx = edi;
/* 10916e1f: sub ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 10916e21: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10916e23: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 10916e26: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 10916e2a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10916e2b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10916e2c: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 10916e2e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10916e2f: mov dword ptr [ebx + 0x34], eax */
  W32((uint32_t)(ebx + 0x34u), eax);
/* 10916e32: call 0x10918070 */
  esp -= 4; W32(esp, 0x10916e37u); SPILL(); f_10918070(); if (g_unwind) return; RELOAD();
/* 10916e37: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916e3a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10916e3b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10916e3c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10916e3d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10916e3e: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916e41: ret  */
  esp += 4; SPILL(); return;
L_10916e42: /* 10916e42: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 10916e46: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 10916e4a: mov dword ptr [ebx + 0x20], ecx */
  W32((uint32_t)(ebx + 0x20u), ecx);
/* 10916e4d: mov dword ptr [ebx + 0x1c], ebp */
  W32((uint32_t)(ebx + 0x1cu), ebp);
/* 10916e50: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 10916e53: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 10916e56: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 10916e58: mov eax, edi */
  eax = edi;
/* 10916e5a: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10916e5c: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10916e5e: push -4 */
  { uint32_t v = 0xfffffffcu; esp -= 4; W32(esp, v); }
/* 10916e60: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 10916e63: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 10916e67: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10916e68: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 10916e6a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10916e6b: mov dword ptr [ebx + 0x34], ecx */
  W32((uint32_t)(ebx + 0x34u), ecx);
/* 10916e6e: call 0x10918070 */
  esp -= 4; W32(esp, 0x10916e73u); SPILL(); f_10918070(); if (g_unwind) return; RELOAD();
/* 10916e73: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916e76: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10916e77: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10916e78: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10916e79: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10916e7a: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916e7d: ret  */
  esp += 4; SPILL(); return;
L_10916e7e: /* 10916e7e: mov dword ptr [ebx], 9 */
  W32((uint32_t)(ebx), 0x9u);
/* 10916e84: mov dword ptr [esi + 0x18], 0x1092f698 */
  W32((uint32_t)(esi + 0x18u), 0x1092f698u);
/* 10916e8b: push -3 */
  { uint32_t v = 0xfffffffdu; esp -= 4; W32(esp, v); }
/* 10916e8d: jmp 0x109165eb */
  goto L_109165eb;
L_10916e92: /* 10916e92: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 10916e95: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 10916e98: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10916e99: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10916e9a: call dword ptr [esi + 0x24] */
  { uint32_t t = R32((uint32_t)(esi + 0x24u)); esp -= 4; W32(esp, 0x10916e9du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10916e9d: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 10916ea1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916ea4: cmp eax, -3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10916ea7: jne 0x10916eaf */
  if (!zf) goto L_10916eaf;
L_10916ea9: /* 10916ea9: mov dword ptr [ebx], 9 */
  W32((uint32_t)(ebx), 0x9u);
L_10916eaf: /* 10916eaf: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 10916eb3: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 10916eb7: mov dword ptr [ebx + 0x20], eax */
  W32((uint32_t)(ebx + 0x20u), eax);
/* 10916eba: mov dword ptr [ebx + 0x1c], ebp */
  W32((uint32_t)(ebx + 0x1cu), ebp);
/* 10916ebd: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 10916ec0: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 10916ec3: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 10916ec5: mov edx, edi */
  edx = edi;
/* 10916ec7: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 10916ec9: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 10916ecd: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10916ecf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10916ed0: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 10916ed3: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 10916ed7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10916ed8: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 10916eda: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10916edb: mov dword ptr [ebx + 0x34], eax */
  W32((uint32_t)(ebx + 0x34u), eax);
/* 10916ede: call 0x10918070 */
  esp -= 4; W32(esp, 0x10916ee3u); SPILL(); f_10918070(); if (g_unwind) return; RELOAD();
/* 10916ee3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916ee6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10916ee7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10916ee8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10916ee9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10916eea: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916eed: ret  */
  esp += 4; SPILL(); return;
L_10916eee: /* 10916eee: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 10916ef2: mov dword ptr [ebx + 0x20], edx */
  W32((uint32_t)(ebx + 0x20u), edx);
/* 10916ef5: mov dword ptr [ebx + 0x1c], ebp */
  W32((uint32_t)(ebx + 0x1cu), ebp);
/* 10916ef8: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 10916efa: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 10916efd: mov eax, edi */
  eax = edi;
/* 10916eff: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10916f01: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 10916f05: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10916f07: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10916f08: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 10916f0b: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 10916f0f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10916f10: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 10916f17: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 10916f19: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10916f1a: mov dword ptr [ebx + 0x34], ecx */
  W32((uint32_t)(ebx + 0x34u), ecx);
/* 10916f1d: call 0x10918070 */
  esp -= 4; W32(esp, 0x10916f22u); SPILL(); f_10918070(); if (g_unwind) return; RELOAD();
/* 10916f22: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916f25: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10916f26: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10916f27: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10916f28: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10916f29: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916f2c: ret  */
  esp += 4; SPILL(); return;
L_10916f2d: /* 10916f2d: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 10916f31: mov dword ptr [ebx + 0x20], eax */
  W32((uint32_t)(ebx + 0x20u), eax);
/* 10916f34: mov dword ptr [ebx + 0x1c], ebp */
  W32((uint32_t)(ebx + 0x1cu), ebp);
/* 10916f37: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 10916f39: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 10916f3c: mov ecx, edi */
  ecx = edi;
/* 10916f3e: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 10916f40: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10916f42: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 10916f45: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 10916f49: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 10916f50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10916f51: jmp 0x1091660a */
  goto L_1091660a;
L_10916f56: /* 10916f56: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 10916f59: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 10916f5c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10916f5d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10916f5e: call dword ptr [esi + 0x24] */
  { uint32_t t = R32((uint32_t)(esi + 0x24u)); esp -= 4; W32(esp, 0x10916f61u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10916f61: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 10916f65: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 10916f69: mov dword ptr [ebx], 9 */
  W32((uint32_t)(ebx), 0x9u);
/* 10916f6f: mov dword ptr [esi + 0x18], 0x1092f6bc */
  W32((uint32_t)(esi + 0x18u), 0x1092f6bcu);
/* 10916f76: mov dword ptr [ebx + 0x20], eax */
  W32((uint32_t)(ebx + 0x20u), eax);
/* 10916f79: mov dword ptr [ebx + 0x1c], ebp */
  W32((uint32_t)(ebx + 0x1cu), ebp);
/* 10916f7c: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 10916f7f: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 10916f82: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 10916f84: mov edx, edi */
  edx = edi;
/* 10916f86: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 10916f88: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10916f8a: push -3 */
  { uint32_t v = 0xfffffffdu; esp -= 4; W32(esp, v); }
/* 10916f8c: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 10916f8f: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 10916f93: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10916f94: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 10916f96: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10916f97: mov dword ptr [ebx + 0x34], eax */
  W32((uint32_t)(ebx + 0x34u), eax);
/* 10916f9a: call 0x10918070 */
  esp -= 4; W32(esp, 0x10916f9fu); SPILL(); f_10918070(); if (g_unwind) return; RELOAD();
/* 10916f9f: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916fa2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10916fa3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10916fa4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10916fa5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10916fa6: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916fa9: ret  */
  esp += 4; SPILL(); return;
L_10916faa: /* 10916faa: cmp dword ptr [esp + 0x18], -3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10916faf: jne 0x10916fb7 */
  if (!zf) goto L_10916fb7;
L_10916fb1: /* 10916fb1: mov dword ptr [ebx], 9 */
  W32((uint32_t)(ebx), 0x9u);
L_10916fb7: /* 10916fb7: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 10916fbb: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 10916fbf: mov dword ptr [ebx + 0x20], ecx */
  W32((uint32_t)(ebx + 0x20u), ecx);
/* 10916fc2: mov dword ptr [ebx + 0x1c], ebp */
  W32((uint32_t)(ebx + 0x1cu), ebp);
/* 10916fc5: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 10916fc8: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 10916fcb: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 10916fcd: mov eax, edi */
  eax = edi;
/* 10916fcf: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10916fd1: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 10916fd5: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10916fd7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10916fd8: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 10916fdb: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 10916fdf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10916fe0: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 10916fe2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10916fe3: mov dword ptr [ebx + 0x34], ecx */
  W32((uint32_t)(ebx + 0x34u), ecx);
/* 10916fe6: call 0x10918070 */
  esp -= 4; W32(esp, 0x10916febu); SPILL(); f_10918070(); if (g_unwind) return; RELOAD();
/* 10916feb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916fee: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10916fef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10916ff0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10916ff1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10916ff2: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10916ff5: ret  */
  esp += 4; SPILL(); return;
L_10916ff6: /* 10916ff6: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 10916ffa: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 10916ffe: mov dword ptr [ebx + 0x20], eax */
  W32((uint32_t)(ebx + 0x20u), eax);
/* 10917001: mov dword ptr [ebx + 0x1c], ebp */
  W32((uint32_t)(ebx + 0x1cu), ebp);
/* 10917004: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 10917007: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 1091700a: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 1091700c: mov edx, edi */
  edx = edi;
/* 1091700e: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 10917010: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10917012: push -4 */
  { uint32_t v = 0xfffffffcu; esp -= 4; W32(esp, v); }
/* 10917014: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 10917017: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 1091701b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1091701c: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 1091701e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1091701f: mov dword ptr [ebx + 0x34], eax */
  W32((uint32_t)(ebx + 0x34u), eax);
/* 10917022: call 0x10918070 */
  esp -= 4; W32(esp, 0x10917027u); SPILL(); f_10918070(); if (g_unwind) return; RELOAD();
/* 10917027: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1091702a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1091702b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1091702c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1091702d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1091702e: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10917031: ret  */
  esp += 4; SPILL(); return;
L_10917032: /* 10917032: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10917033: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10917034: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10917035: call 0x10918070 */
  esp -= 4; W32(esp, 0x1091703au); SPILL(); f_10918070(); if (g_unwind) return; RELOAD();
/* 1091703a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1091703d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1091703e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1091703f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10917040: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10917041: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10917044: ret  */
  esp += 4; SPILL(); return;
L_10917045: /* 10917045: mov dword ptr [ebx], 7 */
  W32((uint32_t)(ebx), 0x7u);
L_1091704b: /* 1091704b: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 1091704f: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 10917053: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10917054: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10917055: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10917056: mov dword ptr [ebx + 0x34], ecx */
  W32((uint32_t)(ebx + 0x34u), ecx);
/* 10917059: call 0x10918070 */
  esp -= 4; W32(esp, 0x1091705eu); SPILL(); f_10918070(); if (g_unwind) return; RELOAD();
/* 1091705e: mov ecx, dword ptr [ebx + 0x34] */
  ecx = R32((uint32_t)(ebx + 0x34u));
/* 10917061: mov edx, dword ptr [ebx + 0x30] */
  edx = R32((uint32_t)(ebx + 0x30u));
/* 10917064: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10917067: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10917069: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 1091706d: je 0x10917094 */
  if (zf) goto L_10917094;
L_1091706f: /* 1091706f: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 10917073: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 10917077: mov dword ptr [ebx + 0x20], ecx */
  W32((uint32_t)(ebx + 0x20u), ecx);
/* 1091707a: mov dword ptr [ebx + 0x1c], ebp */
  W32((uint32_t)(ebx + 0x1cu), ebp);
/* 1091707d: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* 1091707f: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 10917082: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 10917085: mov ecx, edi */
  ecx = edi;
/* 10917087: sub ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 10917089: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1091708b: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 1091708e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1091708f: jmp 0x1091660a */
  goto L_1091660a;
L_10917094: /* 10917094: mov dword ptr [ebx], 8 */
  W32((uint32_t)(ebx), 0x8u);
L_1091709a: /* 1091709a: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 1091709e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 109170a2: mov dword ptr [ebx + 0x20], eax */
  W32((uint32_t)(ebx + 0x20u), eax);
/* 109170a5: mov dword ptr [ebx + 0x1c], ebp */
  W32((uint32_t)(ebx + 0x1cu), ebp);
/* 109170a8: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 109170ab: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 109170ae: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 109170b0: mov edx, edi */
  edx = edi;
/* 109170b2: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 109170b4: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 109170b6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 109170b8: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 109170bb: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 109170bf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 109170c0: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 109170c2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 109170c3: mov dword ptr [ebx + 0x34], eax */
  W32((uint32_t)(ebx + 0x34u), eax);
/* 109170c6: call 0x10918070 */
  esp -= 4; W32(esp, 0x109170cbu); SPILL(); f_10918070(); if (g_unwind) return; RELOAD();
/* 109170cb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109170ce: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 109170cf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 109170d0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 109170d1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 109170d2: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109170d5: ret  */
  esp += 4; SPILL(); return;
}

void f_10917110(void) {
  LOAD_REGS();
L_10917110: /* 10917110: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10917111: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 10917115: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10917116: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 1091711a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1091711c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1091711d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1091711e: call 0x10916480 */
  esp -= 4; W32(esp, 0x10917123u); SPILL(); f_10916480(); if (g_unwind) return; RELOAD();
/* 10917123: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 10917126: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 10917129: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1091712a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1091712b: call dword ptr [esi + 0x24] */
  { uint32_t t = R32((uint32_t)(esi + 0x24u)); esp -= 4; W32(esp, 0x1091712eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1091712e: mov edx, dword ptr [edi + 0x24] */
  edx = R32((uint32_t)(edi + 0x24u));
/* 10917131: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 10917134: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10917135: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10917136: call dword ptr [esi + 0x24] */
  { uint32_t t = R32((uint32_t)(esi + 0x24u)); esp -= 4; W32(esp, 0x10917139u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10917139: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 1091713c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1091713d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1091713e: call dword ptr [esi + 0x24] */
  { uint32_t t = R32((uint32_t)(esi + 0x24u)); esp -= 4; W32(esp, 0x10917141u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10917141: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10917144: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10917145: xor eax, eax */
  eax = 0;
/* 10917147: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10917148: ret  */
  esp += 4; SPILL(); return;
}

void f_10917150(void) {
  LOAD_REGS();
L_10917150: /* 10917150: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 10917154: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 10917158: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10917159: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1091715a: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 1091715e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1091715f: mov edi, dword ptr [eax + 0x28] */
  edi = R32((uint32_t)(eax + 0x28u));
/* 10917162: mov ecx, edx */
  ecx = edx;
/* 10917164: mov ebx, ecx */
  ebx = ecx;
/* 10917166: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 10917169: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 1091716b: mov ecx, ebx */
  ecx = ebx;
/* 1091716d: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 10917170: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 10917172: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 10917175: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10917176: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10917178: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10917179: mov dword ptr [eax + 0x34], ecx */
  W32((uint32_t)(eax + 0x34u), ecx);
/* 1091717c: mov dword ptr [eax + 0x30], ecx */
  W32((uint32_t)(eax + 0x30u), ecx);
/* 1091717f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10917180: ret  */
  esp += 4; SPILL(); return;
}

void f_109171a0(void) {
  LOAD_REGS();
L_109171a0: /* 109171a0: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 109171a4: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 109171a7: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 109171a9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 109171ab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 109171ac: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0x109171afu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 109171af: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109171b2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109171b4: je 0x109171d8 */
  if (zf) goto L_109171d8;
L_109171b6: /* 109171b6: mov dl, byte ptr [esp + 4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x4u))) & 0xffu);
/* 109171ba: mov cl, byte ptr [esp + 8] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 109171be: mov byte ptr [eax + 0x10], dl */
  W8((uint32_t)(eax + 0x10u), (edx & 0xffu));
/* 109171c1: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 109171c5: mov byte ptr [eax + 0x11], cl */
  W8((uint32_t)(eax + 0x11u), (ecx & 0xffu));
/* 109171c8: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 109171cc: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 109171d2: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 109171d5: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
L_109171d8: /* 109171d8: ret  */
  esp += 4; SPILL(); return;
}

void f_109171e0(void) {
  LOAD_REGS();
L_109171e0: /* 109171e0: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 109171e3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 109171e4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 109171e5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 109171e6: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 109171ea: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 109171ed: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 109171f0: mov ebx, dword ptr [esi + 0x1c] */
  ebx = R32((uint32_t)(esi + 0x1cu));
/* 109171f3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 109171f4: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
/* 109171f8: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 109171fb: mov ebp, dword ptr [edi] */
  ebp = R32((uint32_t)(edi));
/* 109171fd: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 10917201: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 10917204: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 10917208: mov edx, dword ptr [esi + 0x34] */
  edx = R32((uint32_t)(esi + 0x34u));
/* 1091720b: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 1091720d: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 10917211: jae 0x10917218 */
  if (!cf) goto L_10917218;
L_10917213: /* 10917213: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10917215: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 10917216: jmp 0x1091721d */
  goto L_1091721d;
L_10917218: /* 10917218: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 1091721b: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
L_1091721d: /* 1091721d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 1091721f: cmp ecx, 9 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x9u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 10917222: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 10917226: ja 0x1091777a */
  if ((!cf && !zf)) goto L_1091777a;
L_1091722c: /* 1091722c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_10917230: /* 10917230: jmp dword ptr [ecx*4 + 0x109178c4] */
  switch (R32((uint32_t)(ecx*4 + 0x109178c4u))) {
    case 0x10917237u: goto L_10917237;
    case 0x109172f6u: goto L_109172f6;
    case 0x109173e2u: goto L_109173e2;
    case 0x1091745fu: goto L_1091745f;
    case 0x10917525u: goto L_10917525;
    case 0x10917593u: goto L_10917593;
    case 0x109176b1u: goto L_109176b1;
    case 0x1091783cu: goto L_1091783c;
    case 0x10917894u: goto L_10917894;
    case 0x1091789bu: goto L_1091789b;
    default: guest_badjump(0x10917230, R32((uint32_t)(ecx*4 + 0x109178c4u))); return;
  }
L_10917237: /* 10917237: cmp eax, 0x102 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x102u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 1091723c: jb 0x109172df */
  if (cf) goto L_109172df;
L_10917242: /* 10917242: cmp dword ptr [esp + 0x2c], 0xa */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x2cu))); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10917247: jb 0x109172df */
  if (cf) goto L_109172df;
L_1091724d: /* 1091724d: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 10917251: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 10917255: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 10917258: mov dword ptr [esi + 0x1c], ebx */
  W32((uint32_t)(esi + 0x1cu), ebx);
/* 1091725b: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 1091725d: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 10917260: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 10917263: mov eax, ebp */
  eax = ebp;
/* 10917265: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10917267: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10917269: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 1091726d: mov dword ptr [edi + 8], ecx */
  W32((uint32_t)(edi + 0x8u), ecx);
/* 10917270: mov dword ptr [edi], ebp */
  W32((uint32_t)(edi), ebp);
/* 10917272: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10917273: mov dword ptr [esi + 0x34], edx */
  W32((uint32_t)(esi + 0x34u), edx);
/* 10917276: mov ecx, dword ptr [eax + 0x18] */
  ecx = R32((uint32_t)(eax + 0x18u));
/* 10917279: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 1091727c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1091727d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1091727e: movzx ecx, byte ptr [eax + 0x11] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x11u)));
/* 10917282: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10917283: movzx edx, byte ptr [eax + 0x10] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x10u)));
/* 10917287: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10917288: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10917289: call 0x109181a0 */
  esp -= 4; W32(esp, 0x1091728eu); SPILL(); f_109181a0(); if (g_unwind) return; RELOAD();
/* 1091728e: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 10917291: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 10917294: mov ebp, dword ptr [edi] */
  ebp = R32((uint32_t)(edi));
/* 10917296: mov ebx, dword ptr [esi + 0x1c] */
  ebx = R32((uint32_t)(esi + 0x1cu));
/* 10917299: mov dword ptr [esp + 0x44], ecx */
  W32((uint32_t)(esp + 0x44u), ecx);
/* 1091729d: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 109172a0: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 109172a4: mov edx, dword ptr [esi + 0x34] */
  edx = R32((uint32_t)(esi + 0x34u));
/* 109172a7: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109172aa: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 109172ac: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 109172b0: jae 0x109172b7 */
  if (!cf) goto L_109172b7;
L_109172b2: /* 109172b2: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 109172b4: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 109172b5: jmp 0x109172bc */
  goto L_109172bc;
L_109172b7: /* 109172b7: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 109172ba: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
L_109172bc: /* 109172bc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109172be: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 109172c2: je 0x109172df */
  if (zf) goto L_109172df;
L_109172c4: /* 109172c4: xor ecx, ecx */
  ecx = 0;
/* 109172c6: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109172c9: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 109172cd: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 109172d0: lea ecx, [ecx + ecx + 7] */
  ecx = (uint32_t)(ecx + ecx + 0x7u);
/* 109172d4: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 109172d6: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 109172da: jmp 0x1091776b */
  goto L_1091776b;
L_109172df: /* 109172df: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 109172e3: movzx ecx, byte ptr [eax + 0x10] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x10u)));
/* 109172e7: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 109172ea: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 109172ed: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 109172f0: mov dword ptr [eax], 1 */
  W32((uint32_t)(eax), 0x1u);
L_109172f6: /* 109172f6: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 109172fa: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 109172fd: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 109172ff: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 10917303: jae 0x10917347 */
  if (!cf) goto L_10917347;
L_10917305: /* 10917305: jmp 0x10917310 */
  goto L_10917310;
L_10917310: /* 10917310: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 10917314: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 10917316: je 0x109177d8 */
  if (zf) goto L_109177d8;
L_1091731c: /* 1091731c: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  of = (r) == 0x7fffffffu;
  eax = r;
  }
/* 1091731d: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 10917321: movzx eax, byte ptr [ebp] */
  eax = (uint32_t)(R8((uint32_t)(ebp)));
/* 10917325: mov ecx, ebx */
  ecx = ebx;
/* 10917327: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 10917329: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 1091732d: add ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 10917330: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 10917338: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 1091733a: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 1091733e: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 1091733f: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10917341: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 10917345: jb 0x10917310 */
  if (cf) goto L_10917310;
L_10917347: /* 10917347: mov ecx, dword ptr [eax*4 + 0x10930908] */
  ecx = R32((uint32_t)(eax*4 + 0x10930908u));
/* 1091734e: and ecx, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 10917352: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 10917356: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 10917359: lea eax, [eax + ecx*8] */
  eax = (uint32_t)(eax + ecx*8);
/* 1091735c: movzx ecx, byte ptr [eax + 1] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* 10917360: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 10917364: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 10917368: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 1091736a: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 1091736e: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 10917372: movzx eax, byte ptr [ecx + 1] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0x1u)));
/* 10917376: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 10917378: movzx eax, byte ptr [ecx] */
  eax = (uint32_t)(R8((uint32_t)(ecx)));
/* 1091737b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1091737d: jne 0x10917398 */
  if (!zf) goto L_10917398;
L_1091737f: /* 1091737f: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 10917383: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 10917386: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 10917389: mov dword ptr [eax], 6 */
  W32((uint32_t)(eax), 0x6u);
/* 1091738f: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 10917393: jmp 0x1091776b */
  goto L_1091776b;
L_10917398: /* 10917398: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1091739a: je 0x109173bf */
  if (zf) goto L_109173bf;
L_1091739c: /* 1091739c: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 109173a0: and eax, 0xf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 109173a3: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 109173a6: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 109173aa: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 109173ad: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 109173b0: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 109173b4: mov dword ptr [ecx], 2 */
  W32((uint32_t)(ecx), 0x2u);
/* 109173ba: jmp 0x1091776b */
  goto L_1091776b;
L_109173bf: /* 109173bf: test al, 0x40 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 109173c1: je 0x10917504 */
  if (zf) goto L_10917504;
L_109173c7: /* 109173c7: test al, 0x20 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 109173c9: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 109173cd: je 0x109177b2 */
  if (zf) goto L_109177b2;
L_109173d3: /* 109173d3: mov dword ptr [eax], 7 */
  W32((uint32_t)(eax), 0x7u);
/* 109173d9: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 109173dd: jmp 0x1091776b */
  goto L_1091776b;
L_109173e2: /* 109173e2: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 109173e6: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 109173e9: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 109173eb: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 109173ef: jae 0x10917428 */
  if (!cf) goto L_10917428;
L_109173f1: /* 109173f1: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 109173f5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 109173f7: je 0x109177d8 */
  if (zf) goto L_109177d8;
L_109173fd: /* 109173fd: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  of = (r) == 0x7fffffffu;
  eax = r;
  }
/* 109173fe: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 10917402: movzx eax, byte ptr [ebp] */
  eax = (uint32_t)(R8((uint32_t)(ebp)));
/* 10917406: mov ecx, ebx */
  ecx = ebx;
/* 10917408: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 1091740a: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 1091740e: add ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 10917411: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 10917419: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 1091741b: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 1091741f: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 10917420: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10917422: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 10917426: jb 0x109173f1 */
  if (cf) goto L_109173f1;
L_10917428: /* 10917428: mov ecx, dword ptr [eax*4 + 0x10930908] */
  ecx = R32((uint32_t)(eax*4 + 0x10930908u));
/* 1091742f: and ecx, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 10917433: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 10917437: add dword ptr [eax + 4], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (r) < (a);
  of = ((((a) ^ (r)) & ((b) ^ (r))) >> 31) & 1;
  W32((uint32_t)(eax + 0x4u), r);
  }
/* 1091743a: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 1091743e: shr dword ptr [esp + 0x28], cl */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x28u))); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  W32((uint32_t)(esp + 0x28u), r);
  }
  }
/* 10917442: mov eax, ecx */
  eax = ecx;
/* 10917444: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 10917446: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 1091744a: movzx ecx, byte ptr [eax + 0x11] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x11u)));
/* 1091744e: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 10917451: mov ecx, dword ptr [eax + 0x18] */
  ecx = R32((uint32_t)(eax + 0x18u));
/* 10917454: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 10917457: mov dword ptr [eax], 3 */
  W32((uint32_t)(eax), 0x3u);
/* 1091745d: jmp 0x10917463 */
  goto L_10917463;
L_1091745f: /* 1091745f: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_10917463: /* 10917463: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 10917466: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10917468: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 1091746c: jae 0x109174a7 */
  if (!cf) goto L_109174a7;
L_1091746e: /* 1091746e: mov edi, edi */
  edi = edi;
L_10917470: /* 10917470: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 10917474: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 10917476: je 0x109177d8 */
  if (zf) goto L_109177d8;
L_1091747c: /* 1091747c: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  of = (r) == 0x7fffffffu;
  eax = r;
  }
/* 1091747d: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 10917481: movzx eax, byte ptr [ebp] */
  eax = (uint32_t)(R8((uint32_t)(ebp)));
/* 10917485: mov ecx, ebx */
  ecx = ebx;
/* 10917487: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 10917489: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 1091748d: add ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 10917490: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 10917498: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 1091749a: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 1091749e: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 1091749f: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 109174a1: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 109174a5: jb 0x10917470 */
  if (cf) goto L_10917470;
L_109174a7: /* 109174a7: mov ecx, dword ptr [eax*4 + 0x10930908] */
  ecx = R32((uint32_t)(eax*4 + 0x10930908u));
/* 109174ae: and ecx, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 109174b2: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 109174b6: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 109174b9: lea eax, [eax + ecx*8] */
  eax = (uint32_t)(eax + ecx*8);
/* 109174bc: movzx ecx, byte ptr [eax + 1] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* 109174c0: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 109174c4: shr dword ptr [esp + 0x28], cl */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x28u))); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  W32((uint32_t)(esp + 0x28u), r);
  }
  }
/* 109174c8: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 109174cc: movzx ecx, byte ptr [eax + 1] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* 109174d0: movzx eax, byte ptr [eax] */
  eax = (uint32_t)(R8((uint32_t)(eax)));
/* 109174d3: sub ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 109174d5: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 109174d7: je 0x109174fc */
  if (zf) goto L_109174fc;
L_109174d9: /* 109174d9: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 109174dd: and eax, 0xf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 109174e0: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 109174e3: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 109174e7: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 109174ea: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 109174ed: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 109174f1: mov dword ptr [ecx], 4 */
  W32((uint32_t)(ecx), 0x4u);
/* 109174f7: jmp 0x1091776b */
  goto L_1091776b;
L_109174fc: /* 109174fc: test al, 0x40 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 109174fe: jne 0x109177c3 */
  if (!zf) goto L_109177c3;
L_10917504: /* 10917504: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 10917508: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 1091750b: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 1091750f: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 10917512: lea eax, [eax + ecx*8] */
  eax = (uint32_t)(eax + ecx*8);
/* 10917515: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 10917519: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 1091751c: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 10917520: jmp 0x1091776b */
  goto L_1091776b;
L_10917525: /* 10917525: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 10917529: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 1091752c: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 1091752e: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 10917532: jae 0x1091756b */
  if (!cf) goto L_1091756b;
L_10917534: /* 10917534: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 10917538: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 1091753a: je 0x109177d8 */
  if (zf) goto L_109177d8;
L_10917540: /* 10917540: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  of = (r) == 0x7fffffffu;
  eax = r;
  }
/* 10917541: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 10917545: movzx eax, byte ptr [ebp] */
  eax = (uint32_t)(R8((uint32_t)(ebp)));
/* 10917549: mov ecx, ebx */
  ecx = ebx;
/* 1091754b: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 1091754d: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 10917551: add ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 10917554: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 1091755c: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 1091755e: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 10917562: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 10917563: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10917565: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 10917569: jb 0x10917534 */
  if (cf) goto L_10917534;
L_1091756b: /* 1091756b: mov ecx, dword ptr [eax*4 + 0x10930908] */
  ecx = R32((uint32_t)(eax*4 + 0x10930908u));
/* 10917572: and ecx, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 10917576: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 1091757a: add dword ptr [eax + 0xc], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (r) < (a);
  of = ((((a) ^ (r)) & ((b) ^ (r))) >> 31) & 1;
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 1091757d: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 10917581: shr dword ptr [esp + 0x28], cl */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x28u))); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  W32((uint32_t)(esp + 0x28u), r);
  }
  }
/* 10917585: mov eax, ecx */
  eax = ecx;
/* 10917587: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 10917589: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 1091758d: mov dword ptr [eax], 5 */
  W32((uint32_t)(eax), 0x5u);
L_10917593: /* 10917593: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 10917596: mov ecx, edx */
  ecx = edx;
/* 10917598: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1091759a: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 1091759e: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 109175a1: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 109175a3: jae 0x109175bc */
  if (!cf) goto L_109175bc;
L_109175a5: /* 109175a5: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 109175a8: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 109175ab: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 109175ad: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 109175b1: sub eax, dword ptr [ecx + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 109175b4: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 109175b6: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 109175ba: jmp 0x109175c4 */
  goto L_109175c4;
L_109175bc: /* 109175bc: mov ecx, edx */
  ecx = edx;
/* 109175be: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 109175c0: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
L_109175c4: /* 109175c4: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 109175c8: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 109175cb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109175cd: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 109175d1: je 0x10917765 */
  if (zf) goto L_10917765;
L_109175d7: /* 109175d7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109175d9: jne 0x10917670 */
  if (!zf) goto L_10917670;
L_109175df: /* 109175df: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 109175e2: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109175e4: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 109175e8: jne 0x10917609 */
  if (!zf) goto L_10917609;
L_109175ea: /* 109175ea: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 109175ed: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 109175f0: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109175f2: je 0x10917609 */
  if (zf) goto L_10917609;
L_109175f4: /* 109175f4: mov edx, ecx */
  edx = ecx;
/* 109175f6: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 109175f8: jae 0x109175ff */
  if (!cf) goto L_109175ff;
L_109175fa: /* 109175fa: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 109175fc: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 109175fd: jmp 0x10917605 */
  goto L_10917605;
L_109175ff: /* 109175ff: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 10917603: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
L_10917605: /* 10917605: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10917607: jne 0x10917670 */
  if (!zf) goto L_10917670;
L_10917609: /* 10917609: mov dword ptr [esi + 0x34], edx */
  W32((uint32_t)(esi + 0x34u), edx);
/* 1091760c: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 10917610: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10917611: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10917612: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10917613: call 0x10918070 */
  esp -= 4; W32(esp, 0x10917618u); SPILL(); f_10918070(); if (g_unwind) return; RELOAD();
/* 10917618: mov edx, dword ptr [esi + 0x34] */
  edx = R32((uint32_t)(esi + 0x34u));
/* 1091761b: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 1091761f: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 10917622: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10917625: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10917627: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 1091762b: jae 0x10917632 */
  if (!cf) goto L_10917632;
L_1091762d: /* 1091762d: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 1091762f: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 10917630: jmp 0x10917637 */
  goto L_10917637;
L_10917632: /* 10917632: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 10917635: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
L_10917637: /* 10917637: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 1091763a: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1091763c: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 10917640: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 10917644: jne 0x10917668 */
  if (!zf) goto L_10917668;
L_10917646: /* 10917646: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 10917649: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 1091764d: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1091764f: je 0x10917664 */
  if (zf) goto L_10917664;
L_10917651: /* 10917651: mov edx, ecx */
  edx = ecx;
/* 10917653: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10917655: jae 0x1091765c */
  if (!cf) goto L_1091765c;
L_10917657: /* 10917657: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10917659: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 1091765a: jmp 0x10917668 */
  goto L_10917668;
L_1091765c: /* 1091765c: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 10917660: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10917662: jmp 0x10917668 */
  goto L_10917668;
L_10917664: /* 10917664: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
L_10917668: /* 10917668: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1091766a: je 0x10917813 */
  if (zf) goto L_10917813;
L_10917670: /* 10917670: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 10917674: mov cl, byte ptr [ecx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 10917676: mov byte ptr [edx], cl */
  W8((uint32_t)(edx), (ecx & 0xffu));
/* 10917678: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 1091767c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 1091767d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 1091767e: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 1091767f: cmp ecx, dword ptr [esi + 0x2c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10917682: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 1091768a: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 1091768e: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 10917692: jne 0x1091769b */
  if (!zf) goto L_1091769b;
L_10917694: /* 10917694: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 10917697: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
L_1091769b: /* 1091769b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 1091769f: dec dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ecx + 0x4u), r);
  }
/* 109176a2: cmp dword ptr [ecx + 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109176a6: jne 0x109175d7 */
  if (!zf) goto L_109175d7;
L_109176ac: /* 109176ac: jmp 0x10917765 */
  goto L_10917765;
L_109176b1: /* 109176b1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109176b3: jne 0x1091774a */
  if (!zf) goto L_1091774a;
L_109176b9: /* 109176b9: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 109176bc: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109176be: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 109176c2: jne 0x109176e3 */
  if (!zf) goto L_109176e3;
L_109176c4: /* 109176c4: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 109176c7: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 109176ca: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109176cc: je 0x109176e3 */
  if (zf) goto L_109176e3;
L_109176ce: /* 109176ce: mov edx, ecx */
  edx = ecx;
/* 109176d0: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 109176d2: jae 0x109176d9 */
  if (!cf) goto L_109176d9;
L_109176d4: /* 109176d4: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 109176d6: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 109176d7: jmp 0x109176df */
  goto L_109176df;
L_109176d9: /* 109176d9: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 109176dd: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
L_109176df: /* 109176df: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109176e1: jne 0x1091774a */
  if (!zf) goto L_1091774a;
L_109176e3: /* 109176e3: mov dword ptr [esi + 0x34], edx */
  W32((uint32_t)(esi + 0x34u), edx);
/* 109176e6: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 109176ea: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 109176eb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 109176ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 109176ed: call 0x10918070 */
  esp -= 4; W32(esp, 0x109176f2u); SPILL(); f_10918070(); if (g_unwind) return; RELOAD();
/* 109176f2: mov edx, dword ptr [esi + 0x34] */
  edx = R32((uint32_t)(esi + 0x34u));
/* 109176f5: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 109176f9: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 109176fc: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109176ff: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10917701: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 10917705: jae 0x1091770c */
  if (!cf) goto L_1091770c;
L_10917707: /* 10917707: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10917709: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 1091770a: jmp 0x10917711 */
  goto L_10917711;
L_1091770c: /* 1091770c: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 1091770f: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
L_10917711: /* 10917711: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 10917714: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10917716: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 1091771a: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 1091771e: jne 0x10917742 */
  if (!zf) goto L_10917742;
L_10917720: /* 10917720: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 10917723: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 10917727: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10917729: je 0x1091773e */
  if (zf) goto L_1091773e;
L_1091772b: /* 1091772b: mov edx, ecx */
  edx = ecx;
/* 1091772d: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 1091772f: jae 0x10917736 */
  if (!cf) goto L_10917736;
L_10917731: /* 10917731: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10917733: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 10917734: jmp 0x10917742 */
  goto L_10917742;
L_10917736: /* 10917736: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 1091773a: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 1091773c: jmp 0x10917742 */
  goto L_10917742;
L_1091773e: /* 1091773e: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
L_10917742: /* 10917742: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10917744: je 0x10917813 */
  if (zf) goto L_10917813;
L_1091774a: /* 1091774a: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 1091774e: mov cl, byte ptr [ecx + 8] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x8u))) & 0xffu);
/* 10917751: mov byte ptr [edx], cl */
  W8((uint32_t)(edx), (ecx & 0xffu));
/* 10917753: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 10917757: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10917758: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 10917759: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 10917761: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
L_10917765: /* 10917765: mov dword ptr [ecx], 0 */
  W32((uint32_t)(ecx), 0x0u);
L_1091776b: /* 1091776b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 1091776f: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 10917771: cmp ecx, 9 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x9u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 10917774: jbe 0x10917230 */
  if ((cf | zf)) goto L_10917230;
L_1091777a: /* 1091777a: push -2 */
  { uint32_t v = 0xfffffffeu; esp -= 4; W32(esp, v); }
L_1091777c: /* 1091777c: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 10917780: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 10917784: mov dword ptr [esi + 0x20], ecx */
  W32((uint32_t)(esi + 0x20u), ecx);
/* 10917787: mov dword ptr [esi + 0x1c], ebx */
  W32((uint32_t)(esi + 0x1cu), ebx);
/* 1091778a: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 1091778c: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* 1091778f: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 10917792: mov ecx, ebp */
  ecx = ebp;
/* 10917794: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 10917796: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10917798: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
L_1091779b: /* 1091779b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1091779c: mov dword ptr [edi], ebp */
  W32((uint32_t)(edi), ebp);
/* 1091779e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1091779f: mov dword ptr [esi + 0x34], edx */
  W32((uint32_t)(esi + 0x34u), edx);
/* 109177a2: call 0x10918070 */
  esp -= 4; W32(esp, 0x109177a7u); SPILL(); f_10918070(); if (g_unwind) return; RELOAD();
/* 109177a7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109177aa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 109177ab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 109177ac: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 109177ad: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 109177ae: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109177b1: ret  */
  esp += 4; SPILL(); return;
L_109177b2: /* 109177b2: mov dword ptr [eax], 9 */
  W32((uint32_t)(eax), 0x9u);
/* 109177b8: mov dword ptr [edi + 0x18], 0x1092f6d8 */
  W32((uint32_t)(edi + 0x18u), 0x1092f6d8u);
/* 109177bf: push -3 */
  { uint32_t v = 0xfffffffdu; esp -= 4; W32(esp, v); }
/* 109177c1: jmp 0x1091777c */
  goto L_1091777c;
L_109177c3: /* 109177c3: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 109177c7: mov dword ptr [eax], 9 */
  W32((uint32_t)(eax), 0x9u);
/* 109177cd: mov dword ptr [edi + 0x18], 0x1092f6f4 */
  W32((uint32_t)(edi + 0x18u), 0x1092f6f4u);
/* 109177d4: push -3 */
  { uint32_t v = 0xfffffffdu; esp -= 4; W32(esp, v); }
/* 109177d6: jmp 0x1091777c */
  goto L_1091777c;
L_109177d8: /* 109177d8: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 109177dc: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 109177df: mov dword ptr [esi + 0x1c], ebx */
  W32((uint32_t)(esi + 0x1cu), ebx);
/* 109177e2: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 109177e4: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 109177e7: mov ecx, ebp */
  ecx = ebp;
/* 109177e9: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 109177eb: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 109177ed: mov dword ptr [edi + 4], 0 */
  W32((uint32_t)(edi + 0x4u), 0x0u);
/* 109177f4: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 109177f7: mov dword ptr [edi], ebp */
  W32((uint32_t)(edi), ebp);
/* 109177f9: mov dword ptr [esi + 0x34], edx */
  W32((uint32_t)(esi + 0x34u), edx);
/* 109177fc: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 10917800: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10917801: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10917802: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10917803: call 0x10918070 */
  esp -= 4; W32(esp, 0x10917808u); SPILL(); f_10918070(); if (g_unwind) return; RELOAD();
/* 10917808: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1091780b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1091780c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1091780d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1091780e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1091780f: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10917812: ret  */
  esp += 4; SPILL(); return;
L_10917813: /* 10917813: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 10917817: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 1091781b: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 1091781e: mov dword ptr [esi + 0x1c], ebx */
  W32((uint32_t)(esi + 0x1cu), ebx);
/* 10917821: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 10917823: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 10917826: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 10917829: mov eax, ebp */
  eax = ebp;
/* 1091782b: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 1091782d: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1091782f: mov dword ptr [edi + 8], ecx */
  W32((uint32_t)(edi + 0x8u), ecx);
/* 10917832: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 10917836: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10917837: jmp 0x1091779b */
  goto L_1091779b;
L_1091783c: /* 1091783c: cmp ebx, 7 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 1091783f: jbe 0x1091784e */
  if ((cf | zf)) goto L_1091784e;
L_10917841: /* 10917841: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 10917845: sub ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 10917848: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10917849: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* 1091784d: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  ebp = r;
  }
L_1091784e: /* 1091784e: mov dword ptr [esi + 0x34], edx */
  W32((uint32_t)(esi + 0x34u), edx);
/* 10917851: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 10917855: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10917856: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10917857: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10917858: call 0x10918070 */
  esp -= 4; W32(esp, 0x1091785du); SPILL(); f_10918070(); if (g_unwind) return; RELOAD();
/* 1091785d: mov edx, dword ptr [esi + 0x34] */
  edx = R32((uint32_t)(esi + 0x34u));
/* 10917860: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 10917863: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10917866: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10917868: je 0x1091788a */
  if (zf) goto L_1091788a;
L_1091786a: /* 1091786a: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 1091786e: mov dword ptr [esi + 0x20], ecx */
  W32((uint32_t)(esi + 0x20u), ecx);
/* 10917871: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 10917875: mov dword ptr [esi + 0x1c], ebx */
  W32((uint32_t)(esi + 0x1cu), ebx);
/* 10917878: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 1091787a: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 1091787d: mov ecx, ebp */
  ecx = ebp;
/* 1091787f: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 10917881: add dword ptr [edi + 8], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x8u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(edi + 0x8u), r);
  }
/* 10917884: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10917885: jmp 0x1091779b */
  goto L_1091779b;
L_1091788a: /* 1091788a: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 1091788e: mov dword ptr [eax], 8 */
  W32((uint32_t)(eax), 0x8u);
L_10917894: /* 10917894: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 10917896: jmp 0x1091777c */
  goto L_1091777c;
L_1091789b: /* 1091789b: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 1091789f: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 109178a3: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 109178a6: mov dword ptr [esi + 0x1c], ebx */
  W32((uint32_t)(esi + 0x1cu), ebx);
/* 109178a9: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 109178ab: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 109178ae: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 109178b1: mov eax, ebp */
  eax = ebp;
/* 109178b3: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 109178b5: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 109178b7: mov dword ptr [edi + 8], ecx */
  W32((uint32_t)(edi + 0x8u), ecx);
/* 109178ba: push -3 */
  { uint32_t v = 0xfffffffdu; esp -= 4; W32(esp, v); }
/* 109178bc: jmp 0x1091779b */
  goto L_1091779b;
}

void f_10917307(void) {
  LOAD_REGS();
  goto L_10917307;
L_10917230: /* 10917230: jmp dword ptr [ecx*4 + 0x109178c4] */
  switch (R32((uint32_t)(ecx*4 + 0x109178c4u))) {
    case 0x10917237u: goto L_10917237;
    case 0x109172f6u: goto L_109172f6;
    case 0x109173e2u: goto L_109173e2;
    case 0x1091745fu: goto L_1091745f;
    case 0x10917525u: goto L_10917525;
    case 0x10917593u: goto L_10917593;
    case 0x109176b1u: goto L_109176b1;
    case 0x1091783cu: goto L_1091783c;
    case 0x10917894u: goto L_10917894;
    case 0x1091789bu: goto L_1091789b;
    default: guest_badjump(0x10917230, R32((uint32_t)(ecx*4 + 0x109178c4u))); return;
  }
L_10917237: /* 10917237: cmp eax, 0x102 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x102u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 1091723c: jb 0x109172df */
  if (cf) goto L_109172df;
L_10917242: /* 10917242: cmp dword ptr [esp + 0x2c], 0xa */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x2cu))); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10917247: jb 0x109172df */
  if (cf) goto L_109172df;
L_1091724d: /* 1091724d: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 10917251: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 10917255: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 10917258: mov dword ptr [esi + 0x1c], ebx */
  W32((uint32_t)(esi + 0x1cu), ebx);
/* 1091725b: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 1091725d: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 10917260: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 10917263: mov eax, ebp */
  eax = ebp;
/* 10917265: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10917267: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10917269: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 1091726d: mov dword ptr [edi + 8], ecx */
  W32((uint32_t)(edi + 0x8u), ecx);
/* 10917270: mov dword ptr [edi], ebp */
  W32((uint32_t)(edi), ebp);
/* 10917272: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10917273: mov dword ptr [esi + 0x34], edx */
  W32((uint32_t)(esi + 0x34u), edx);
/* 10917276: mov ecx, dword ptr [eax + 0x18] */
  ecx = R32((uint32_t)(eax + 0x18u));
/* 10917279: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 1091727c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1091727d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1091727e: movzx ecx, byte ptr [eax + 0x11] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x11u)));
/* 10917282: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10917283: movzx edx, byte ptr [eax + 0x10] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x10u)));
/* 10917287: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10917288: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10917289: call 0x109181a0 */
  esp -= 4; W32(esp, 0x1091728eu); SPILL(); f_109181a0(); if (g_unwind) return; RELOAD();
/* 1091728e: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 10917291: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 10917294: mov ebp, dword ptr [edi] */
  ebp = R32((uint32_t)(edi));
/* 10917296: mov ebx, dword ptr [esi + 0x1c] */
  ebx = R32((uint32_t)(esi + 0x1cu));
/* 10917299: mov dword ptr [esp + 0x44], ecx */
  W32((uint32_t)(esp + 0x44u), ecx);
/* 1091729d: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 109172a0: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 109172a4: mov edx, dword ptr [esi + 0x34] */
  edx = R32((uint32_t)(esi + 0x34u));
/* 109172a7: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109172aa: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 109172ac: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 109172b0: jae 0x109172b7 */
  if (!cf) goto L_109172b7;
L_109172b2: /* 109172b2: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 109172b4: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 109172b5: jmp 0x109172bc */
  goto L_109172bc;
L_109172b7: /* 109172b7: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 109172ba: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
L_109172bc: /* 109172bc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109172be: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 109172c2: je 0x109172df */
  if (zf) goto L_109172df;
L_109172c4: /* 109172c4: xor ecx, ecx */
  ecx = 0;
/* 109172c6: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109172c9: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 109172cd: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 109172d0: lea ecx, [ecx + ecx + 7] */
  ecx = (uint32_t)(ecx + ecx + 0x7u);
/* 109172d4: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 109172d6: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 109172da: jmp 0x1091776b */
  goto L_1091776b;
L_109172df: /* 109172df: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 109172e3: movzx ecx, byte ptr [eax + 0x10] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x10u)));
/* 109172e7: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 109172ea: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 109172ed: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 109172f0: mov dword ptr [eax], 1 */
  W32((uint32_t)(eax), 0x1u);
L_109172f6: /* 109172f6: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 109172fa: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 109172fd: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 109172ff: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 10917303: jae 0x10917347 */
  if (!cf) goto L_10917347;
L_10917305: /* 10917305: jmp 0x10917310 */
  goto L_10917310;
L_10917307: /* 10917307: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 1091730e: mov edi, edi */
  edi = edi;
L_10917310: /* 10917310: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 10917314: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 10917316: je 0x109177d8 */
  if (zf) goto L_109177d8;
L_1091731c: /* 1091731c: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  of = (r) == 0x7fffffffu;
  eax = r;
  }
/* 1091731d: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 10917321: movzx eax, byte ptr [ebp] */
  eax = (uint32_t)(R8((uint32_t)(ebp)));
/* 10917325: mov ecx, ebx */
  ecx = ebx;
/* 10917327: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 10917329: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 1091732d: add ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 10917330: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 10917338: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 1091733a: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 1091733e: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 1091733f: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10917341: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 10917345: jb 0x10917310 */
  if (cf) goto L_10917310;
L_10917347: /* 10917347: mov ecx, dword ptr [eax*4 + 0x10930908] */
  ecx = R32((uint32_t)(eax*4 + 0x10930908u));
/* 1091734e: and ecx, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 10917352: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 10917356: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 10917359: lea eax, [eax + ecx*8] */
  eax = (uint32_t)(eax + ecx*8);
/* 1091735c: movzx ecx, byte ptr [eax + 1] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* 10917360: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 10917364: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 10917368: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 1091736a: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 1091736e: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 10917372: movzx eax, byte ptr [ecx + 1] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0x1u)));
/* 10917376: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 10917378: movzx eax, byte ptr [ecx] */
  eax = (uint32_t)(R8((uint32_t)(ecx)));
/* 1091737b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1091737d: jne 0x10917398 */
  if (!zf) goto L_10917398;
L_1091737f: /* 1091737f: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 10917383: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 10917386: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 10917389: mov dword ptr [eax], 6 */
  W32((uint32_t)(eax), 0x6u);
/* 1091738f: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 10917393: jmp 0x1091776b */
  goto L_1091776b;
L_10917398: /* 10917398: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1091739a: je 0x109173bf */
  if (zf) goto L_109173bf;
L_1091739c: /* 1091739c: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 109173a0: and eax, 0xf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 109173a3: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 109173a6: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 109173aa: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 109173ad: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 109173b0: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 109173b4: mov dword ptr [ecx], 2 */
  W32((uint32_t)(ecx), 0x2u);
/* 109173ba: jmp 0x1091776b */
  goto L_1091776b;
L_109173bf: /* 109173bf: test al, 0x40 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 109173c1: je 0x10917504 */
  if (zf) goto L_10917504;
L_109173c7: /* 109173c7: test al, 0x20 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 109173c9: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 109173cd: je 0x109177b2 */
  if (zf) goto L_109177b2;
L_109173d3: /* 109173d3: mov dword ptr [eax], 7 */
  W32((uint32_t)(eax), 0x7u);
/* 109173d9: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 109173dd: jmp 0x1091776b */
  goto L_1091776b;
L_109173e2: /* 109173e2: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 109173e6: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 109173e9: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 109173eb: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 109173ef: jae 0x10917428 */
  if (!cf) goto L_10917428;
L_109173f1: /* 109173f1: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 109173f5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 109173f7: je 0x109177d8 */
  if (zf) goto L_109177d8;
L_109173fd: /* 109173fd: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  of = (r) == 0x7fffffffu;
  eax = r;
  }
/* 109173fe: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 10917402: movzx eax, byte ptr [ebp] */
  eax = (uint32_t)(R8((uint32_t)(ebp)));
/* 10917406: mov ecx, ebx */
  ecx = ebx;
/* 10917408: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 1091740a: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 1091740e: add ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 10917411: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 10917419: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 1091741b: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 1091741f: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 10917420: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10917422: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 10917426: jb 0x109173f1 */
  if (cf) goto L_109173f1;
L_10917428: /* 10917428: mov ecx, dword ptr [eax*4 + 0x10930908] */
  ecx = R32((uint32_t)(eax*4 + 0x10930908u));
/* 1091742f: and ecx, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 10917433: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 10917437: add dword ptr [eax + 4], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (r) < (a);
  of = ((((a) ^ (r)) & ((b) ^ (r))) >> 31) & 1;
  W32((uint32_t)(eax + 0x4u), r);
  }
/* 1091743a: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 1091743e: shr dword ptr [esp + 0x28], cl */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x28u))); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  W32((uint32_t)(esp + 0x28u), r);
  }
  }
/* 10917442: mov eax, ecx */
  eax = ecx;
/* 10917444: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 10917446: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 1091744a: movzx ecx, byte ptr [eax + 0x11] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x11u)));
/* 1091744e: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 10917451: mov ecx, dword ptr [eax + 0x18] */
  ecx = R32((uint32_t)(eax + 0x18u));
/* 10917454: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 10917457: mov dword ptr [eax], 3 */
  W32((uint32_t)(eax), 0x3u);
/* 1091745d: jmp 0x10917463 */
  goto L_10917463;
L_1091745f: /* 1091745f: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_10917463: /* 10917463: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 10917466: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10917468: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 1091746c: jae 0x109174a7 */
  if (!cf) goto L_109174a7;
L_1091746e: /* 1091746e: mov edi, edi */
  edi = edi;
L_10917470: /* 10917470: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 10917474: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 10917476: je 0x109177d8 */
  if (zf) goto L_109177d8;
L_1091747c: /* 1091747c: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  of = (r) == 0x7fffffffu;
  eax = r;
  }
/* 1091747d: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 10917481: movzx eax, byte ptr [ebp] */
  eax = (uint32_t)(R8((uint32_t)(ebp)));
/* 10917485: mov ecx, ebx */
  ecx = ebx;
/* 10917487: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 10917489: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 1091748d: add ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 10917490: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 10917498: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 1091749a: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 1091749e: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 1091749f: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 109174a1: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 109174a5: jb 0x10917470 */
  if (cf) goto L_10917470;
L_109174a7: /* 109174a7: mov ecx, dword ptr [eax*4 + 0x10930908] */
  ecx = R32((uint32_t)(eax*4 + 0x10930908u));
/* 109174ae: and ecx, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 109174b2: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 109174b6: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 109174b9: lea eax, [eax + ecx*8] */
  eax = (uint32_t)(eax + ecx*8);
/* 109174bc: movzx ecx, byte ptr [eax + 1] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* 109174c0: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 109174c4: shr dword ptr [esp + 0x28], cl */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x28u))); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  W32((uint32_t)(esp + 0x28u), r);
  }
  }
/* 109174c8: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 109174cc: movzx ecx, byte ptr [eax + 1] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* 109174d0: movzx eax, byte ptr [eax] */
  eax = (uint32_t)(R8((uint32_t)(eax)));
/* 109174d3: sub ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 109174d5: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 109174d7: je 0x109174fc */
  if (zf) goto L_109174fc;
L_109174d9: /* 109174d9: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 109174dd: and eax, 0xf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 109174e0: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 109174e3: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 109174e7: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 109174ea: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 109174ed: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 109174f1: mov dword ptr [ecx], 4 */
  W32((uint32_t)(ecx), 0x4u);
/* 109174f7: jmp 0x1091776b */
  goto L_1091776b;
L_109174fc: /* 109174fc: test al, 0x40 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 109174fe: jne 0x109177c3 */
  if (!zf) goto L_109177c3;
L_10917504: /* 10917504: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 10917508: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 1091750b: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 1091750f: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 10917512: lea eax, [eax + ecx*8] */
  eax = (uint32_t)(eax + ecx*8);
/* 10917515: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 10917519: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 1091751c: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 10917520: jmp 0x1091776b */
  goto L_1091776b;
L_10917525: /* 10917525: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 10917529: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 1091752c: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 1091752e: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 10917532: jae 0x1091756b */
  if (!cf) goto L_1091756b;
L_10917534: /* 10917534: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 10917538: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 1091753a: je 0x109177d8 */
  if (zf) goto L_109177d8;
L_10917540: /* 10917540: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  of = (r) == 0x7fffffffu;
  eax = r;
  }
/* 10917541: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 10917545: movzx eax, byte ptr [ebp] */
  eax = (uint32_t)(R8((uint32_t)(ebp)));
/* 10917549: mov ecx, ebx */
  ecx = ebx;
/* 1091754b: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 1091754d: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 10917551: add ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 10917554: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 1091755c: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 1091755e: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 10917562: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 10917563: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10917565: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 10917569: jb 0x10917534 */
  if (cf) goto L_10917534;
L_1091756b: /* 1091756b: mov ecx, dword ptr [eax*4 + 0x10930908] */
  ecx = R32((uint32_t)(eax*4 + 0x10930908u));
/* 10917572: and ecx, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 10917576: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 1091757a: add dword ptr [eax + 0xc], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (r) < (a);
  of = ((((a) ^ (r)) & ((b) ^ (r))) >> 31) & 1;
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 1091757d: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 10917581: shr dword ptr [esp + 0x28], cl */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x28u))); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  W32((uint32_t)(esp + 0x28u), r);
  }
  }
/* 10917585: mov eax, ecx */
  eax = ecx;
/* 10917587: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 10917589: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 1091758d: mov dword ptr [eax], 5 */
  W32((uint32_t)(eax), 0x5u);
L_10917593: /* 10917593: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 10917596: mov ecx, edx */
  ecx = edx;
/* 10917598: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1091759a: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 1091759e: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 109175a1: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 109175a3: jae 0x109175bc */
  if (!cf) goto L_109175bc;
L_109175a5: /* 109175a5: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 109175a8: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 109175ab: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 109175ad: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 109175b1: sub eax, dword ptr [ecx + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 109175b4: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 109175b6: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 109175ba: jmp 0x109175c4 */
  goto L_109175c4;
L_109175bc: /* 109175bc: mov ecx, edx */
  ecx = edx;
/* 109175be: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 109175c0: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
L_109175c4: /* 109175c4: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 109175c8: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 109175cb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109175cd: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 109175d1: je 0x10917765 */
  if (zf) goto L_10917765;
L_109175d7: /* 109175d7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109175d9: jne 0x10917670 */
  if (!zf) goto L_10917670;
L_109175df: /* 109175df: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 109175e2: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109175e4: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 109175e8: jne 0x10917609 */
  if (!zf) goto L_10917609;
L_109175ea: /* 109175ea: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 109175ed: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 109175f0: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109175f2: je 0x10917609 */
  if (zf) goto L_10917609;
L_109175f4: /* 109175f4: mov edx, ecx */
  edx = ecx;
/* 109175f6: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 109175f8: jae 0x109175ff */
  if (!cf) goto L_109175ff;
L_109175fa: /* 109175fa: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 109175fc: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 109175fd: jmp 0x10917605 */
  goto L_10917605;
L_109175ff: /* 109175ff: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 10917603: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
L_10917605: /* 10917605: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10917607: jne 0x10917670 */
  if (!zf) goto L_10917670;
L_10917609: /* 10917609: mov dword ptr [esi + 0x34], edx */
  W32((uint32_t)(esi + 0x34u), edx);
/* 1091760c: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 10917610: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10917611: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10917612: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10917613: call 0x10918070 */
  esp -= 4; W32(esp, 0x10917618u); SPILL(); f_10918070(); if (g_unwind) return; RELOAD();
/* 10917618: mov edx, dword ptr [esi + 0x34] */
  edx = R32((uint32_t)(esi + 0x34u));
/* 1091761b: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 1091761f: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 10917622: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10917625: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10917627: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 1091762b: jae 0x10917632 */
  if (!cf) goto L_10917632;
L_1091762d: /* 1091762d: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 1091762f: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 10917630: jmp 0x10917637 */
  goto L_10917637;
L_10917632: /* 10917632: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 10917635: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
L_10917637: /* 10917637: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 1091763a: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1091763c: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 10917640: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 10917644: jne 0x10917668 */
  if (!zf) goto L_10917668;
L_10917646: /* 10917646: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 10917649: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 1091764d: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1091764f: je 0x10917664 */
  if (zf) goto L_10917664;
L_10917651: /* 10917651: mov edx, ecx */
  edx = ecx;
/* 10917653: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10917655: jae 0x1091765c */
  if (!cf) goto L_1091765c;
L_10917657: /* 10917657: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10917659: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 1091765a: jmp 0x10917668 */
  goto L_10917668;
L_1091765c: /* 1091765c: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 10917660: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10917662: jmp 0x10917668 */
  goto L_10917668;
L_10917664: /* 10917664: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
L_10917668: /* 10917668: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1091766a: je 0x10917813 */
  if (zf) goto L_10917813;
L_10917670: /* 10917670: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 10917674: mov cl, byte ptr [ecx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 10917676: mov byte ptr [edx], cl */
  W8((uint32_t)(edx), (ecx & 0xffu));
/* 10917678: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 1091767c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 1091767d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 1091767e: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 1091767f: cmp ecx, dword ptr [esi + 0x2c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10917682: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 1091768a: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 1091768e: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 10917692: jne 0x1091769b */
  if (!zf) goto L_1091769b;
L_10917694: /* 10917694: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 10917697: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
L_1091769b: /* 1091769b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 1091769f: dec dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ecx + 0x4u), r);
  }
/* 109176a2: cmp dword ptr [ecx + 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109176a6: jne 0x109175d7 */
  if (!zf) goto L_109175d7;
L_109176ac: /* 109176ac: jmp 0x10917765 */
  goto L_10917765;
L_109176b1: /* 109176b1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109176b3: jne 0x1091774a */
  if (!zf) goto L_1091774a;
L_109176b9: /* 109176b9: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 109176bc: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109176be: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 109176c2: jne 0x109176e3 */
  if (!zf) goto L_109176e3;
L_109176c4: /* 109176c4: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 109176c7: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 109176ca: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109176cc: je 0x109176e3 */
  if (zf) goto L_109176e3;
L_109176ce: /* 109176ce: mov edx, ecx */
  edx = ecx;
/* 109176d0: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 109176d2: jae 0x109176d9 */
  if (!cf) goto L_109176d9;
L_109176d4: /* 109176d4: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 109176d6: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 109176d7: jmp 0x109176df */
  goto L_109176df;
L_109176d9: /* 109176d9: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 109176dd: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
L_109176df: /* 109176df: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109176e1: jne 0x1091774a */
  if (!zf) goto L_1091774a;
L_109176e3: /* 109176e3: mov dword ptr [esi + 0x34], edx */
  W32((uint32_t)(esi + 0x34u), edx);
/* 109176e6: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 109176ea: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 109176eb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 109176ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 109176ed: call 0x10918070 */
  esp -= 4; W32(esp, 0x109176f2u); SPILL(); f_10918070(); if (g_unwind) return; RELOAD();
/* 109176f2: mov edx, dword ptr [esi + 0x34] */
  edx = R32((uint32_t)(esi + 0x34u));
/* 109176f5: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 109176f9: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 109176fc: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109176ff: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10917701: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 10917705: jae 0x1091770c */
  if (!cf) goto L_1091770c;
L_10917707: /* 10917707: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10917709: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 1091770a: jmp 0x10917711 */
  goto L_10917711;
L_1091770c: /* 1091770c: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 1091770f: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
L_10917711: /* 10917711: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 10917714: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10917716: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 1091771a: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 1091771e: jne 0x10917742 */
  if (!zf) goto L_10917742;
L_10917720: /* 10917720: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 10917723: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 10917727: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10917729: je 0x1091773e */
  if (zf) goto L_1091773e;
L_1091772b: /* 1091772b: mov edx, ecx */
  edx = ecx;
/* 1091772d: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 1091772f: jae 0x10917736 */
  if (!cf) goto L_10917736;
L_10917731: /* 10917731: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10917733: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 10917734: jmp 0x10917742 */
  goto L_10917742;
L_10917736: /* 10917736: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 1091773a: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 1091773c: jmp 0x10917742 */
  goto L_10917742;
L_1091773e: /* 1091773e: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
L_10917742: /* 10917742: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10917744: je 0x10917813 */
  if (zf) goto L_10917813;
L_1091774a: /* 1091774a: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 1091774e: mov cl, byte ptr [ecx + 8] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x8u))) & 0xffu);
/* 10917751: mov byte ptr [edx], cl */
  W8((uint32_t)(edx), (ecx & 0xffu));
/* 10917753: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 10917757: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10917758: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 10917759: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 10917761: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
L_10917765: /* 10917765: mov dword ptr [ecx], 0 */
  W32((uint32_t)(ecx), 0x0u);
L_1091776b: /* 1091776b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 1091776f: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 10917771: cmp ecx, 9 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x9u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 10917774: jbe 0x10917230 */
  if ((cf | zf)) goto L_10917230;
L_1091777a: /* 1091777a: push -2 */
  { uint32_t v = 0xfffffffeu; esp -= 4; W32(esp, v); }
L_1091777c: /* 1091777c: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 10917780: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 10917784: mov dword ptr [esi + 0x20], ecx */
  W32((uint32_t)(esi + 0x20u), ecx);
/* 10917787: mov dword ptr [esi + 0x1c], ebx */
  W32((uint32_t)(esi + 0x1cu), ebx);
/* 1091778a: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 1091778c: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* 1091778f: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 10917792: mov ecx, ebp */
  ecx = ebp;
/* 10917794: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 10917796: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10917798: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
L_1091779b: /* 1091779b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1091779c: mov dword ptr [edi], ebp */
  W32((uint32_t)(edi), ebp);
/* 1091779e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1091779f: mov dword ptr [esi + 0x34], edx */
  W32((uint32_t)(esi + 0x34u), edx);
/* 109177a2: call 0x10918070 */
  esp -= 4; W32(esp, 0x109177a7u); SPILL(); f_10918070(); if (g_unwind) return; RELOAD();
/* 109177a7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109177aa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 109177ab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 109177ac: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 109177ad: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 109177ae: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109177b1: ret  */
  esp += 4; SPILL(); return;
L_109177b2: /* 109177b2: mov dword ptr [eax], 9 */
  W32((uint32_t)(eax), 0x9u);
/* 109177b8: mov dword ptr [edi + 0x18], 0x1092f6d8 */
  W32((uint32_t)(edi + 0x18u), 0x1092f6d8u);
/* 109177bf: push -3 */
  { uint32_t v = 0xfffffffdu; esp -= 4; W32(esp, v); }
/* 109177c1: jmp 0x1091777c */
  goto L_1091777c;
L_109177c3: /* 109177c3: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 109177c7: mov dword ptr [eax], 9 */
  W32((uint32_t)(eax), 0x9u);
/* 109177cd: mov dword ptr [edi + 0x18], 0x1092f6f4 */
  W32((uint32_t)(edi + 0x18u), 0x1092f6f4u);
/* 109177d4: push -3 */
  { uint32_t v = 0xfffffffdu; esp -= 4; W32(esp, v); }
/* 109177d6: jmp 0x1091777c */
  goto L_1091777c;
L_109177d8: /* 109177d8: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 109177dc: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 109177df: mov dword ptr [esi + 0x1c], ebx */
  W32((uint32_t)(esi + 0x1cu), ebx);
/* 109177e2: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 109177e4: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 109177e7: mov ecx, ebp */
  ecx = ebp;
/* 109177e9: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 109177eb: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 109177ed: mov dword ptr [edi + 4], 0 */
  W32((uint32_t)(edi + 0x4u), 0x0u);
/* 109177f4: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 109177f7: mov dword ptr [edi], ebp */
  W32((uint32_t)(edi), ebp);
/* 109177f9: mov dword ptr [esi + 0x34], edx */
  W32((uint32_t)(esi + 0x34u), edx);
/* 109177fc: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 10917800: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10917801: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10917802: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10917803: call 0x10918070 */
  esp -= 4; W32(esp, 0x10917808u); SPILL(); f_10918070(); if (g_unwind) return; RELOAD();
/* 10917808: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1091780b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1091780c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1091780d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1091780e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1091780f: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10917812: ret  */
  esp += 4; SPILL(); return;
L_10917813: /* 10917813: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 10917817: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 1091781b: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 1091781e: mov dword ptr [esi + 0x1c], ebx */
  W32((uint32_t)(esi + 0x1cu), ebx);
/* 10917821: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 10917823: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 10917826: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 10917829: mov eax, ebp */
  eax = ebp;
/* 1091782b: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 1091782d: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1091782f: mov dword ptr [edi + 8], ecx */
  W32((uint32_t)(edi + 0x8u), ecx);
/* 10917832: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 10917836: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10917837: jmp 0x1091779b */
  goto L_1091779b;
L_1091783c: /* 1091783c: cmp ebx, 7 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 1091783f: jbe 0x1091784e */
  if ((cf | zf)) goto L_1091784e;
L_10917841: /* 10917841: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 10917845: sub ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 10917848: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10917849: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* 1091784d: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  ebp = r;
  }
L_1091784e: /* 1091784e: mov dword ptr [esi + 0x34], edx */
  W32((uint32_t)(esi + 0x34u), edx);
/* 10917851: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 10917855: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10917856: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10917857: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10917858: call 0x10918070 */
  esp -= 4; W32(esp, 0x1091785du); SPILL(); f_10918070(); if (g_unwind) return; RELOAD();
/* 1091785d: mov edx, dword ptr [esi + 0x34] */
  edx = R32((uint32_t)(esi + 0x34u));
/* 10917860: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 10917863: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10917866: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10917868: je 0x1091788a */
  if (zf) goto L_1091788a;
L_1091786a: /* 1091786a: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 1091786e: mov dword ptr [esi + 0x20], ecx */
  W32((uint32_t)(esi + 0x20u), ecx);
/* 10917871: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 10917875: mov dword ptr [esi + 0x1c], ebx */
  W32((uint32_t)(esi + 0x1cu), ebx);
/* 10917878: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 1091787a: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 1091787d: mov ecx, ebp */
  ecx = ebp;
/* 1091787f: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 10917881: add dword ptr [edi + 8], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x8u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(edi + 0x8u), r);
  }
/* 10917884: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10917885: jmp 0x1091779b */
  goto L_1091779b;
L_1091788a: /* 1091788a: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 1091788e: mov dword ptr [eax], 8 */
  W32((uint32_t)(eax), 0x8u);
L_10917894: /* 10917894: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 10917896: jmp 0x1091777c */
  goto L_1091777c;
L_1091789b: /* 1091789b: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 1091789f: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 109178a3: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 109178a6: mov dword ptr [esi + 0x1c], ebx */
  W32((uint32_t)(esi + 0x1cu), ebx);
/* 109178a9: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 109178ab: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 109178ae: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 109178b1: mov eax, ebp */
  eax = ebp;
/* 109178b3: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 109178b5: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 109178b7: mov dword ptr [edi + 8], ecx */
  W32((uint32_t)(edi + 0x8u), ecx);
/* 109178ba: push -3 */
  { uint32_t v = 0xfffffffdu; esp -= 4; W32(esp, v); }
/* 109178bc: jmp 0x1091779b */
  goto L_1091779b;
}
