#include "recomp.h"
#include "rec_mod.h"

void f_e86820(void) {
  LOAD_REGS();
L_e86820: /* e86820: sub esp, 0xa0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xa0u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e86826: mov eax, dword ptr [esp + 0xac] */
  eax = R32((uint32_t)(esp + 0xacu));
/* e8682d: mov edx, dword ptr [esp + 0xa4] */
  edx = R32((uint32_t)(esp + 0xa4u));
/* e86834: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e86835: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e86836: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e86837: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e86838: xor edi, edi */
  edi = 0;
/* e8683a: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8683c: mov ebp, ecx */
  ebp = ecx;
/* e8683e: mov dword ptr [esp + 0x20], edi */
  W32((uint32_t)(esp + 0x20u), edi);
/* e86842: mov dword ptr [esp + 0x24], 0x41000000 */
  W32((uint32_t)(esp + 0x24u), 0x41000000u);
/* e8684a: jne 0xe86937 */
  if (!zf) goto L_e86937;
L_e86850: /* e86850: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e86852: je 0xe86937 */
  if (zf) goto L_e86937;
L_e86858: /* e86858: mov eax, dword ptr [edx + 0x24] */
  eax = R32((uint32_t)(edx + 0x24u));
/* e8685b: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8685d: mov ecx, dword ptr [0xeae268] */
  ecx = R32((uint32_t)(0xeae268u));
/* e86863: je 0xe86870 */
  if (zf) goto L_e86870;
L_e86865: /* e86865: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e86867: je 0xe8687f */
  if (zf) goto L_e8687f;
L_e86869: /* e86869: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e8686c: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8686e: jne 0xe86865 */
  if (!zf) goto L_e86865;
L_e86870: /* e86870: xor eax, eax */
  eax = 0;
/* e86872: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e86874: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e86877: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e86879: je 0xe86937 */
  if (zf) goto L_e86937;
L_e8687f: /* e8687f: mov eax, dword ptr [edx + 0x7c] */
  eax = R32((uint32_t)(edx + 0x7cu));
/* e86882: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e86884: je 0xe868de */
  if (zf) goto L_e868de;
L_e86886: /* e86886: mov ecx, dword ptr [esp + 0xc0] */
  ecx = R32((uint32_t)(esp + 0xc0u));
/* e8688d: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8688f: mov esi, 1 */
  esi = 0x1u;
/* e86894: mov dword ptr [esp + 0xbc], esi */
  W32((uint32_t)(esp + 0xbcu), esi);
/* e8689b: je 0xe868ae */
  if (zf) goto L_e868ae;
L_e8689d: /* e8689d: cmp dword ptr [esp + 0x12c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x12cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e868a4: mov byte ptr [esp + 0x110], 2 */
  W8((uint32_t)(esp + 0x110u), 0x2u);
/* e868ac: jne 0xe868b6 */
  if (!zf) goto L_e868b6;
L_e868ae: /* e868ae: mov byte ptr [esp + 0x110], 0 */
  W8((uint32_t)(esp + 0x110u), 0x0u);
L_e868b6: /* e868b6: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e868b8: mov dword ptr [esp + 0x114], esi */
  W32((uint32_t)(esp + 0x114u), esi);
/* e868bf: mov dword ptr [esp + 0x118], esi */
  W32((uint32_t)(esp + 0x118u), esi);
/* e868c6: mov dword ptr [esp + 0x11c], esi */
  W32((uint32_t)(esp + 0x11cu), esi);
/* e868cd: mov byte ptr [esp + 0x124], 0x7f */
  W8((uint32_t)(esp + 0x124u), 0x7fu);
/* e868d5: jne 0xe86929 */
  if (!zf) goto L_e86929;
L_e868d7: /* e868d7: shr eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* e868da: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e868dc: jmp 0xe86922 */
  goto L_e86922;
L_e868de: /* e868de: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e868e0: je 0xe86913 */
  if (zf) goto L_e86913;
L_e868e2: /* e868e2: mov ecx, 1 */
  ecx = 0x1u;
/* e868e7: mov dword ptr [esp + 0xbc], ecx */
  W32((uint32_t)(esp + 0xbcu), ecx);
/* e868ee: mov byte ptr [esp + 0x110], 2 */
  W8((uint32_t)(esp + 0x110u), 0x2u);
/* e868f6: mov dword ptr [esp + 0x114], ecx */
  W32((uint32_t)(esp + 0x114u), ecx);
/* e868fd: mov dword ptr [esp + 0x118], ecx */
  W32((uint32_t)(esp + 0x118u), ecx);
/* e86904: mov dword ptr [esp + 0x11c], ecx */
  W32((uint32_t)(esp + 0x11cu), ecx);
/* e8690b: mov byte ptr [esp + 0x124], 0 */
  W8((uint32_t)(esp + 0x124u), 0x0u);
L_e86913: /* e86913: cmp dword ptr [esp + 0xc0], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xc0u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8691a: jne 0xe86929 */
  if (!zf) goto L_e86929;
L_e8691c: /* e8691c: shr eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* e8691f: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_e86922: /* e86922: mov dword ptr [esp + 0x120], eax */
  W32((uint32_t)(esp + 0x120u), eax);
L_e86929: /* e86929: mov eax, dword ptr [edx + 0x54] */
  eax = R32((uint32_t)(edx + 0x54u));
/* e8692c: mov ecx, dword ptr [edx + 0x58] */
  ecx = R32((uint32_t)(edx + 0x58u));
/* e8692f: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* e86933: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
L_e86937: /* e86937: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* e8693a: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* e8693e: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* e86942: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* e86946: mov ecx, dword ptr [eax + 0x41e4] */
  ecx = R32((uint32_t)(eax + 0x41e4u));
/* e8694c: mov ebx, dword ptr [eax + 0x41e0] */
  ebx = R32((uint32_t)(eax + 0x41e0u));
/* e86952: mov eax, dword ptr [esp + 0x140] */
  eax = R32((uint32_t)(esp + 0x140u));
/* e86959: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8695a: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* e8695e: sub ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* e86960: mov ecx, dword ptr [esp + 0x140] */
  ecx = R32((uint32_t)(esp + 0x140u));
/* e86967: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e86968: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e86969: sub esp, 0x84 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8696f: mov edi, esp */
  edi = esp;
/* e86971: mov ecx, 0x21 */
  ecx = 0x21u;
/* e86976: lea esi, [esp + 0x148] */
  esi = (uint32_t)(esp + 0x148u);
/* e8697d: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e8697f: lea eax, [esp + 0xa8] */
  eax = (uint32_t)(esp + 0xa8u);
/* e86986: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e86987: lea ecx, [esp + 0xa8] */
  ecx = (uint32_t)(esp + 0xa8u);
/* e8698e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8698f: lea eax, [esp + 0xa8] */
  eax = (uint32_t)(esp + 0xa8u);
/* e86996: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e86997: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e86998: mov ecx, ebp */
  ecx = ebp;
/* e8699a: call 0xe899a0 */
  esp -= 4; W32(esp, 0xe8699fu); SPILL(); f_e899a0(); if (g_unwind) return; RELOAD();
/* e8699f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e869a1: je 0xe86d72 */
  if (zf) goto L_e86d72;
L_e869a7: /* e869a7: mov eax, dword ptr [ebp + 0x2b00c] */
  eax = R32((uint32_t)(ebp + 0x2b00cu));
/* e869ad: mov ecx, dword ptr [eax + 0x194] */
  ecx = R32((uint32_t)(eax + 0x194u));
/* e869b3: xor edi, edi */
  edi = 0;
/* e869b5: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e869b7: jne 0xe869c1 */
  if (!zf) goto L_e869c1;
L_e869b9: /* e869b9: cmp dword ptr [eax + 0x190], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x190u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e869bf: je 0xe869f8 */
  if (zf) goto L_e869f8;
L_e869c1: /* e869c1: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e869c5: mov eax, dword ptr [eax + ecx*4 + 0x52c] */
  eax = R32((uint32_t)(eax + ecx*4 + 0x52cu));
/* e869cc: add eax, 0x38 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e869cf: mov dword ptr [eax + 0x24], edi */
  W32((uint32_t)(eax + 0x24u), edi);
/* e869d2: mov dword ptr [eax + 0x30], edi */
  W32((uint32_t)(eax + 0x30u), edi);
/* e869d5: mov edx, dword ptr [ebp + 0x2b00c] */
  edx = R32((uint32_t)(ebp + 0x2b00cu));
/* e869db: cmp dword ptr [edx + 0x198], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x198u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e869e1: mov ecx, dword ptr [0xeba050] */
  ecx = R32((uint32_t)(0xeba050u));
/* e869e7: jne 0xe869ee */
  if (!zf) goto L_e869ee;
L_e869e9: /* e869e9: mov ecx, 4 */
  ecx = 0x4u;
L_e869ee: /* e869ee: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* e869f1: mov dword ptr [eax + 0x18], 4 */
  W32((uint32_t)(eax + 0x18u), 0x4u);
L_e869f8: /* e869f8: mov eax, dword ptr [ebp + 0x2b00c] */
  eax = R32((uint32_t)(ebp + 0x2b00cu));
/* e869fe: cmp dword ptr [eax + 0x1a0], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x1a0u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e86a04: je 0xe86b78 */
  if (zf) goto L_e86b78;
L_e86a0a: /* e86a0a: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* e86a0e: cmp ecx, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e86a12: jge 0xe86a44 */
  if ((sf == of)) goto L_e86a44;
L_e86a14: /* e86a14: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* e86a18: mov esi, dword ptr [eax + esi*4 + 0x52c] */
  esi = R32((uint32_t)(eax + esi*4 + 0x52cu));
/* e86a1f: mov edx, ecx */
  edx = ecx;
/* e86a21: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e86a27: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* e86a28: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* e86a2c: mov eax, dword ptr [eax + 0x1a0] */
  eax = R32((uint32_t)(eax + 0x1a0u));
/* e86a32: lea edx, [esi + edx + 0x38] */
  edx = (uint32_t)(esi + edx + 0x38u);
/* e86a36: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e86a37: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e86a38: mov ecx, ebp */
  ecx = ebp;
/* e86a3a: call 0xe87a30 */
  esp -= 4; W32(esp, 0xe86a3fu); SPILL(); f_e87a30(); if (g_unwind) return; RELOAD();
/* e86a3f: jmp 0xe86b78 */
  goto L_e86b78;
L_e86a44: /* e86a44: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e86a48: mov eax, dword ptr [eax + edx*4 + 0x52c] */
  eax = R32((uint32_t)(eax + edx*4 + 0x52cu));
/* e86a4f: mov dword ptr [eax + 0x34], ecx */
  W32((uint32_t)(eax + 0x34u), ecx);
/* e86a52: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* e86a56: lea ecx, [ebp + 0x2b010] */
  ecx = (uint32_t)(ebp + 0x2b010u);
/* e86a5c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e86a5d: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* e86a5e: lea ecx, [ebp + 0x2b470] */
  ecx = (uint32_t)(ebp + 0x2b470u);
/* e86a64: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* e86a68: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* e86a6c: call 0xe8b370 */
  esp -= 4; W32(esp, 0xe86a71u); SPILL(); f_e8b370(); if (g_unwind) return; RELOAD();
/* e86a71: mov edx, dword ptr [ebp + 0x2b00c] */
  edx = R32((uint32_t)(ebp + 0x2b00cu));
/* e86a77: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e86a7b: mov dword ptr [edx + ecx*4 + 0x52c], eax */
  W32((uint32_t)(edx + ecx*4 + 0x52cu), eax);
/* e86a82: mov edx, dword ptr [ebp + 0x2b00c] */
  edx = R32((uint32_t)(ebp + 0x2b00cu));
/* e86a88: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e86a8c: mov ecx, dword ptr [edx + eax*4 + 0x52c] */
  ecx = R32((uint32_t)(edx + eax*4 + 0x52cu));
/* e86a93: mov dword ptr [ecx + 0x14], edi */
  W32((uint32_t)(ecx + 0x14u), edi);
/* e86a96: mov eax, dword ptr [ebp + 0x2b00c] */
  eax = R32((uint32_t)(ebp + 0x2b00cu));
/* e86a9c: mov edx, dword ptr [eax + 0x194] */
  edx = R32((uint32_t)(eax + 0x194u));
/* e86aa2: mov ecx, dword ptr [eax + 0x1a0] */
  ecx = R32((uint32_t)(eax + 0x1a0u));
/* e86aa8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e86aa9: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* e86aad: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e86ab3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e86ab4: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* e86ab8: mov eax, dword ptr [eax + ecx*4 + 0x52c] */
  eax = R32((uint32_t)(eax + ecx*4 + 0x52cu));
/* e86abf: lea ecx, [eax + edx + 0x38] */
  ecx = (uint32_t)(eax + edx + 0x38u);
/* e86ac3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e86ac4: mov ecx, ebp */
  ecx = ebp;
/* e86ac6: call 0xe87bd0 */
  esp -= 4; W32(esp, 0xe86acbu); SPILL(); f_e87bd0(); if (g_unwind) return; RELOAD();
/* e86acb: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e86acf: mov edx, dword ptr [ebp + 0x2b00c] */
  edx = R32((uint32_t)(ebp + 0x2b00cu));
/* e86ad5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* e86ad6: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* e86ada: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e86ade: mov ecx, dword ptr [edx + eax*4 + 0x52c] */
  ecx = R32((uint32_t)(edx + eax*4 + 0x52cu));
/* e86ae5: mov dword ptr [ecx + 0x24], 9 */
  W32((uint32_t)(ecx + 0x24u), 0x9u);
/* e86aec: mov edx, dword ptr [ebp + 0x2b00c] */
  edx = R32((uint32_t)(ebp + 0x2b00cu));
/* e86af2: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e86af6: mov ecx, dword ptr [edx + eax*4 + 0x52c] */
  ecx = R32((uint32_t)(edx + eax*4 + 0x52cu));
/* e86afd: mov dword ptr [ecx + 0x28], 3 */
  W32((uint32_t)(ecx + 0x28u), 0x3u);
/* e86b04: mov edx, dword ptr [ebp + 0x2b00c] */
  edx = R32((uint32_t)(ebp + 0x2b00cu));
/* e86b0a: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e86b0e: mov ecx, dword ptr [edx + eax*4 + 0x52c] */
  ecx = R32((uint32_t)(edx + eax*4 + 0x52cu));
/* e86b15: mov byte ptr [esp + 0x1c], 0x7f */
  W8((uint32_t)(esp + 0x1cu), 0x7fu);
/* e86b1a: mov byte ptr [esp + 0x1d], 0x7f */
  W8((uint32_t)(esp + 0x1du), 0x7fu);
/* e86b1f: mov byte ptr [esp + 0x1e], 0x7f */
  W8((uint32_t)(esp + 0x1eu), 0x7fu);
/* e86b24: mov byte ptr [esp + 0x1f], 0 */
  W8((uint32_t)(esp + 0x1fu), 0x0u);
/* e86b29: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* e86b2d: mov dword ptr [ecx + 0x30], edx */
  W32((uint32_t)(ecx + 0x30u), edx);
/* e86b30: mov eax, dword ptr [ebp + 0x2b00c] */
  eax = R32((uint32_t)(ebp + 0x2b00cu));
/* e86b36: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e86b3a: mov edx, dword ptr [eax + ecx*4 + 0x52c] */
  edx = R32((uint32_t)(eax + ecx*4 + 0x52cu));
/* e86b41: mov eax, 1 */
  eax = 0x1u;
/* e86b46: mov dword ptr [edx + 0x2c], eax */
  W32((uint32_t)(edx + 0x2cu), eax);
/* e86b49: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e86b4d: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e86b53: mov ecx, dword ptr [ecx + edx*4 + 0x52c] */
  ecx = R32((uint32_t)(ecx + edx*4 + 0x52cu));
/* e86b5a: mov edx, dword ptr [esp + 0x120] */
  edx = R32((uint32_t)(esp + 0x120u));
/* e86b61: mov dword ptr [ecx + 0x18], edx */
  W32((uint32_t)(ecx + 0x18u), edx);
/* e86b64: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e86b6a: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e86b6e: mov ecx, dword ptr [ecx + edx*4 + 0x52c] */
  ecx = R32((uint32_t)(ecx + edx*4 + 0x52cu));
/* e86b75: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
L_e86b78: /* e86b78: cmp dword ptr [esp + 0xbc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xbcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e86b7f: je 0xe86b90 */
  if (zf) goto L_e86b90;
L_e86b81: /* e86b81: lea edx, [esp + 0xb8] */
  edx = (uint32_t)(esp + 0xb8u);
/* e86b88: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e86b89: mov ecx, ebp */
  ecx = ebp;
/* e86b8b: call 0xe87d20 */
  esp -= 4; W32(esp, 0xe86b90u); SPILL(); f_e87d20(); if (g_unwind) return; RELOAD();
L_e86b90: /* e86b90: cmp dword ptr [esp + 0xc0], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xc0u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e86b97: je 0xe86c7e */
  if (zf) goto L_e86c7e;
L_e86b9d: /* e86b9d: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e86ba1: lea ecx, [ebx + eax] */
  ecx = (uint32_t)(ebx + eax);
/* e86ba4: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e86ba8: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e86baa: jge 0xe86d48 */
  if ((sf == of)) goto L_e86d48;
L_e86bb0: /* e86bb0: mov esi, dword ptr [esp + 0x12c] */
  esi = R32((uint32_t)(esp + 0x12cu));
/* e86bb7: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e86bb9: je 0xe86bfb */
  if (zf) goto L_e86bfb;
L_e86bbb: /* e86bbb: mov edx, dword ptr [ebp + 0x2b00c] */
  edx = R32((uint32_t)(ebp + 0x2b00cu));
/* e86bc1: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e86bc5: mov ecx, dword ptr [edx + ecx*4 + 0x52c] */
  ecx = R32((uint32_t)(edx + ecx*4 + 0x52cu));
/* e86bcc: cmp dword ptr [ecx + 0x24], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x24u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e86bd0: jne 0xe86bfb */
  if (!zf) goto L_e86bfb;
L_e86bd2: /* e86bd2: cmp dword ptr [ecx + 0x28], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x28u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e86bd6: jne 0xe86bfb */
  if (!zf) goto L_e86bfb;
L_e86bd8: /* e86bd8: mov dword ptr [ecx + 0x24], 5 */
  W32((uint32_t)(ecx + 0x24u), 0x5u);
/* e86bdf: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e86be3: mov edx, dword ptr [ebp + 0x2b00c] */
  edx = R32((uint32_t)(ebp + 0x2b00cu));
/* e86be9: mov ecx, dword ptr [edx + eax*4 + 0x52c] */
  ecx = R32((uint32_t)(edx + eax*4 + 0x52cu));
/* e86bf0: mov dword ptr [ecx + 0x28], 6 */
  W32((uint32_t)(ecx + 0x28u), 0x6u);
/* e86bf7: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
L_e86bfb: /* e86bfb: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e86bff: imul eax, eax, 0x84 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x84u);
  eax = (uint32_t)r;
  }
/* e86c05: mov edx, dword ptr [ebp + 0x2b00c] */
  edx = R32((uint32_t)(ebp + 0x2b00cu));
/* e86c0b: mov edx, dword ptr [edx + ecx*4 + 0x52c] */
  edx = R32((uint32_t)(edx + ecx*4 + 0x52cu));
/* e86c12: lea eax, [edx + eax + 0x38] */
  eax = (uint32_t)(edx + eax + 0x38u);
/* e86c16: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e86c17: mov ecx, ebp */
  ecx = ebp;
/* e86c19: call 0xe87b80 */
  esp -= 4; W32(esp, 0xe86c1eu); SPILL(); f_e87b80(); if (g_unwind) return; RELOAD();
/* e86c1e: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e86c24: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e86c28: mov eax, dword ptr [ecx + edx*4 + 0x52c] */
  eax = R32((uint32_t)(ecx + edx*4 + 0x52cu));
/* e86c2f: mov ecx, dword ptr [esp + 0x128] */
  ecx = R32((uint32_t)(esp + 0x128u));
/* e86c36: mov dword ptr [eax + 0x20], ecx */
  W32((uint32_t)(eax + 0x20u), ecx);
/* e86c39: mov edx, dword ptr [ebp + 0x2b00c] */
  edx = R32((uint32_t)(ebp + 0x2b00cu));
/* e86c3f: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e86c43: mov eax, dword ptr [edx + eax*4 + 0x52c] */
  eax = R32((uint32_t)(edx + eax*4 + 0x52cu));
/* e86c4a: or dword ptr [eax + 4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x4u), r);
  }
/* e86c4d: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e86c53: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e86c57: mov eax, dword ptr [ecx + edx*4 + 0x52c] */
  eax = R32((uint32_t)(ecx + edx*4 + 0x52cu));
/* e86c5e: mov edx, dword ptr [eax + 0x18] */
  edx = R32((uint32_t)(eax + 0x18u));
/* e86c61: mov ecx, dword ptr [esp + 0x120] */
  ecx = R32((uint32_t)(esp + 0x120u));
/* e86c68: or edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* e86c6a: mov dword ptr [eax + 0x18], edx */
  W32((uint32_t)(eax + 0x18u), edx);
/* e86c6d: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* e86c71: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* e86c72: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e86c74: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* e86c78: je 0xe86c7e */
  if (zf) goto L_e86c7e;
L_e86c7a: /* e86c7a: inc dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x18u), r);
  }
L_e86c7e: /* e86c7e: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* e86c81: cmp dword ptr [eax + 0x40], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x40u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e86c84: je 0xe86d0d */
  if (zf) goto L_e86d0d;
L_e86c8a: /* e86c8a: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e86c90: cmp dword ptr [ecx + 0x18c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x18cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e86c96: je 0xe86d0d */
  if (zf) goto L_e86d0d;
L_e86c98: /* e86c98: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* e86c9c: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e86c9e: je 0xe86d0d */
  if (zf) goto L_e86d0d;
L_e86ca0: /* e86ca0: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* e86ca4: mov ecx, 0x21 */
  ecx = 0x21u;
/* e86ca9: lea esi, [esp + 0xb8] */
  esi = (uint32_t)(esp + 0xb8u);
/* e86cb0: lea edi, [esp + 0x2c] */
  edi = (uint32_t)(esp + 0x2cu);
/* e86cb4: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e86cb6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e86cb7: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* e86cbb: call 0xe82640 */
  esp -= 4; W32(esp, 0xe86cc0u); SPILL(); f_e82640(); if (g_unwind) return; RELOAD();
/* e86cc0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e86cc2: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* e86cc6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e86cc7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e86cc8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e86cc9: call 0xe88b60 */
  esp -= 4; W32(esp, 0xe86cceu); SPILL(); f_e88b60(); if (g_unwind) return; RELOAD();
/* e86cce: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e86cd1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e86cd3: je 0xe86d0d */
  if (zf) goto L_e86d0d;
L_e86cd5: /* e86cd5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e86cd7: sub esp, 0x84 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e86cdd: mov edi, esp */
  edi = esp;
/* e86cdf: mov ecx, 0x21 */
  ecx = 0x21u;
/* e86ce4: lea esi, [esp + 0xb4] */
  esi = (uint32_t)(esp + 0xb4u);
/* e86ceb: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e86ced: lea edx, [esp + 0xa0] */
  edx = (uint32_t)(esp + 0xa0u);
/* e86cf4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e86cf5: lea ecx, [esp + 0xa0] */
  ecx = (uint32_t)(esp + 0xa0u);
/* e86cfc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e86cfd: lea edx, [esp + 0xa0] */
  edx = (uint32_t)(esp + 0xa0u);
/* e86d04: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e86d05: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e86d06: mov ecx, ebp */
  ecx = ebp;
/* e86d08: call 0xe8b3e0 */
  esp -= 4; W32(esp, 0xe86d0du); SPILL(); f_e8b3e0(); if (g_unwind) return; RELOAD();
L_e86d0d: /* e86d0d: mov eax, dword ptr [ebp + 0x2b00c] */
  eax = R32((uint32_t)(ebp + 0x2b00cu));
/* e86d13: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e86d17: mov edx, dword ptr [eax + ecx*4 + 0x52c] */
  edx = R32((uint32_t)(eax + ecx*4 + 0x52cu));
/* e86d1e: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e86d22: mov dword ptr [edx + 0x34], eax */
  W32((uint32_t)(edx + 0x34u), eax);
/* e86d25: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e86d29: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e86d2f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* e86d30: mov dword ptr [ecx + 0x54c], eax */
  W32((uint32_t)(ecx + 0x54cu), eax);
/* e86d36: mov eax, 1 */
  eax = 0x1u;
/* e86d3b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e86d3c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e86d3d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e86d3e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e86d3f: add esp, 0xa0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xa0u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e86d45: ret 0x90 */
  esp += 148; SPILL(); return;
L_e86d48: /* e86d48: mov ecx, dword ptr [esp + 0x13c] */
  ecx = R32((uint32_t)(esp + 0x13cu));
/* e86d4f: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e86d51: je 0xe86d5e */
  if (zf) goto L_e86d5e;
L_e86d53: /* e86d53: push 0xeaf4d8 */
  { uint32_t v = 0xeaf4d8u; esp -= 4; W32(esp, v); }
/* e86d58: call dword ptr [0xeae0bc] */
  esp -= 4; W32(esp, 0xe86d5eu); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
L_e86d5e: /* e86d5e: mov eax, dword ptr [esp + 0x140] */
  eax = R32((uint32_t)(esp + 0x140u));
/* e86d65: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e86d67: je 0xe86d72 */
  if (zf) goto L_e86d72;
L_e86d69: /* e86d69: mov edx, dword ptr [esp + 0xb4] */
  edx = R32((uint32_t)(esp + 0xb4u));
/* e86d70: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
L_e86d72: /* e86d72: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e86d73: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e86d74: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e86d75: xor eax, eax */
  eax = 0;
/* e86d77: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e86d78: add esp, 0xa0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xa0u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e86d7e: ret 0x90 */
  esp += 148; SPILL(); return;
}

void f_e86d90(void) {
  LOAD_REGS();
L_e86d90: /* e86d90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e86d91: mov ebp, esp */
  ebp = esp;
/* e86d93: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* e86d96: sub esp, 0x1a4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1a4u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e86d9c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e86d9d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e86d9e: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* e86da1: cmp byte ptr [esi + 0x44], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x44u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* e86da5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e86da6: mov edi, ecx */
  edi = ecx;
/* e86da8: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* e86dac: jne 0xe8720e */
  if (!zf) goto L_e8720e;
L_e86db2: /* e86db2: test byte ptr [esi + 0x30], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x30u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e86db6: je 0xe86dd4 */
  if (zf) goto L_e86dd4;
L_e86db8: /* e86db8: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* e86dbb: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* e86dbd: or dword ptr [eax + 0x30], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x30u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x30u), r);
  }
/* e86dc1: mov edi, dword ptr [esi + 0x38] */
  edi = R32((uint32_t)(esi + 0x38u));
/* e86dc4: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* e86dc6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e86dc8: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0xe86dceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e86dce: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* e86dd0: and dword ptr [esi + 0x30], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x30u))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x30u), r);
  }
L_e86dd4: /* e86dd4: lea ecx, [esp + 0xa0] */
  ecx = (uint32_t)(esp + 0xa0u);
/* e86ddb: call 0xe825e0 */
  esp -= 4; W32(esp, 0xe86de0u); SPILL(); f_e825e0(); if (g_unwind) return; RELOAD();
/* e86de0: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* e86de3: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* e86de7: mov dword ptr [esp + 0xa0], 1 */
  W32((uint32_t)(esp + 0xa0u), 0x1u);
/* e86df2: lea esi, [eax + 8] */
  esi = (uint32_t)(eax + 0x8u);
/* e86df5: mov ecx, 0x10 */
  ecx = 0x10u;
/* e86dfa: lea edi, [esp + 0xb0] */
  edi = (uint32_t)(esp + 0xb0u);
/* e86e01: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e86e03: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e86e05: lea ecx, [esp + 0xa4] */
  ecx = (uint32_t)(esp + 0xa4u);
/* e86e0c: mov byte ptr [esp + 0xf4], 8 */
  W8((uint32_t)(esp + 0xf4u), 0x8u);
/* e86e14: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e86e16: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e86e17: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e86e18: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e86e19: call 0xe88b60 */
  esp -= 4; W32(esp, 0xe86e1eu); SPILL(); f_e88b60(); if (g_unwind) return; RELOAD();
/* e86e1e: mov edi, eax */
  edi = eax;
/* e86e20: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e86e23: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e86e25: je 0xe86fe3 */
  if (zf) goto L_e86fe3;
L_e86e2b: /* e86e2b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* e86e2e: mov eax, dword ptr [ebx + 0x2b00c] */
  eax = R32((uint32_t)(ebx + 0x2b00cu));
/* e86e34: test byte ptr [ecx + 0x48], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x48u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e86e38: mov eax, dword ptr [eax + 0x52c] */
  eax = R32((uint32_t)(eax + 0x52cu));
/* e86e3e: lea esi, [eax + 0x38] */
  esi = (uint32_t)(eax + 0x38u);
/* e86e41: je 0xe86e80 */
  if (zf) goto L_e86e80;
L_e86e43: /* e86e43: mov dword ptr [eax + 0x24], 2 */
  W32((uint32_t)(eax + 0x24u), 0x2u);
/* e86e4a: mov edx, dword ptr [ebx + 0x2b00c] */
  edx = R32((uint32_t)(ebx + 0x2b00cu));
/* e86e50: mov eax, dword ptr [edx + 0x52c] */
  eax = R32((uint32_t)(edx + 0x52cu));
/* e86e56: mov ecx, 1 */
  ecx = 0x1u;
/* e86e5b: mov dword ptr [eax + 0x28], ecx */
  W32((uint32_t)(eax + 0x28u), ecx);
/* e86e5e: mov edx, dword ptr [ebx + 0x2b00c] */
  edx = R32((uint32_t)(ebx + 0x2b00cu));
/* e86e64: mov edx, dword ptr [edx + 0x52c] */
  edx = R32((uint32_t)(edx + 0x52cu));
/* e86e6a: xor eax, eax */
  eax = 0;
/* e86e6c: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* e86e6f: mov edx, dword ptr [ebx + 0x2b00c] */
  edx = R32((uint32_t)(ebx + 0x2b00cu));
/* e86e75: mov edx, dword ptr [edx + 0x52c] */
  edx = R32((uint32_t)(edx + 0x52cu));
/* e86e7b: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* e86e7e: jmp 0xe86ec4 */
  goto L_e86ec4;
L_e86e80: /* e86e80: mov dword ptr [eax + 0x24], 5 */
  W32((uint32_t)(eax + 0x24u), 0x5u);
/* e86e87: mov eax, dword ptr [ebx + 0x2b00c] */
  eax = R32((uint32_t)(ebx + 0x2b00cu));
/* e86e8d: mov ecx, dword ptr [eax + 0x52c] */
  ecx = R32((uint32_t)(eax + 0x52cu));
/* e86e93: mov dword ptr [ecx + 0x28], 6 */
  W32((uint32_t)(ecx + 0x28u), 0x6u);
/* e86e9a: mov edx, dword ptr [ebx + 0x2b00c] */
  edx = R32((uint32_t)(ebx + 0x2b00cu));
/* e86ea0: mov ecx, dword ptr [edx + 0x52c] */
  ecx = R32((uint32_t)(edx + 0x52cu));
/* e86ea6: mov eax, 1 */
  eax = 0x1u;
/* e86eab: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* e86eae: mov edx, dword ptr [ebx + 0x2b00c] */
  edx = R32((uint32_t)(ebx + 0x2b00cu));
/* e86eb4: mov ecx, dword ptr [edx + 0x52c] */
  ecx = R32((uint32_t)(edx + 0x52cu));
/* e86eba: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* e86ebd: xor eax, eax */
  eax = 0;
/* e86ebf: mov ecx, 1 */
  ecx = 0x1u;
L_e86ec4: /* e86ec4: mov edx, dword ptr [ebx + 0x2b00c] */
  edx = R32((uint32_t)(ebx + 0x2b00cu));
/* e86eca: mov edx, dword ptr [edx + 0x52c] */
  edx = R32((uint32_t)(edx + 0x52cu));
/* e86ed0: mov dword ptr [edx + 0x2c], eax */
  W32((uint32_t)(edx + 0x2cu), eax);
/* e86ed3: mov edx, dword ptr [ebx + 0x2b00c] */
  edx = R32((uint32_t)(ebx + 0x2b00cu));
/* e86ed9: mov edx, dword ptr [edx + 0x52c] */
  edx = R32((uint32_t)(edx + 0x52cu));
/* e86edf: mov dword ptr [edx + 0x14], ecx */
  W32((uint32_t)(edx + 0x14u), ecx);
/* e86ee2: mov edx, dword ptr [ebx + 0x2b00c] */
  edx = R32((uint32_t)(ebx + 0x2b00cu));
/* e86ee8: mov edx, dword ptr [edx + 0x52c] */
  edx = R32((uint32_t)(edx + 0x52cu));
/* e86eee: mov dword ptr [edx + 0x10], ecx */
  W32((uint32_t)(edx + 0x10u), ecx);
/* e86ef1: mov ecx, dword ptr [ebx + 0x2b00c] */
  ecx = R32((uint32_t)(ebx + 0x2b00cu));
/* e86ef7: mov edx, dword ptr [ecx + 0x52c] */
  edx = R32((uint32_t)(ecx + 0x52cu));
/* e86efd: mov dword ptr [edx + 0x18], eax */
  W32((uint32_t)(edx + 0x18u), eax);
/* e86f00: mov eax, dword ptr [ebx + 0x2b00c] */
  eax = R32((uint32_t)(ebx + 0x2b00cu));
/* e86f06: mov ecx, dword ptr [eax + 0x52c] */
  ecx = R32((uint32_t)(eax + 0x52cu));
/* e86f0c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e86f0d: mov byte ptr [ecx + 0xc], 0 */
  W8((uint32_t)(ecx + 0xcu), 0x0u);
/* e86f11: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e86f12: mov ecx, ebx */
  ecx = ebx;
/* e86f14: call 0xe87c50 */
  esp -= 4; W32(esp, 0xe86f19u); SPILL(); f_e87c50(); if (g_unwind) return; RELOAD();
/* e86f19: mov ecx, 2 */
  ecx = 0x2u;
/* e86f1e: mov dword ptr [esi + 0x20], ecx */
  W32((uint32_t)(esi + 0x20u), ecx);
/* e86f21: mov dword ptr [esi + 0x24], 0 */
  W32((uint32_t)(esi + 0x24u), 0x0u);
/* e86f28: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* e86f2b: mov eax, dword ptr [ebx + 0x2b00c] */
  eax = R32((uint32_t)(ebx + 0x2b00cu));
/* e86f31: mov edx, dword ptr [eax + 0x194] */
  edx = R32((uint32_t)(eax + 0x194u));
/* e86f37: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e86f39: jne 0xe86f47 */
  if (!zf) goto L_e86f47;
L_e86f3b: /* e86f3b: mov edx, dword ptr [eax + 0x190] */
  edx = R32((uint32_t)(eax + 0x190u));
/* e86f41: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e86f43: mov eax, ecx */
  eax = ecx;
/* e86f45: je 0xe86f4c */
  if (zf) goto L_e86f4c;
L_e86f47: /* e86f47: mov eax, dword ptr [0xeba050] */
  eax = R32((uint32_t)(0xeba050u));
L_e86f4c: /* e86f4c: lea edx, [esp + 0xa0] */
  edx = (uint32_t)(esp + 0xa0u);
/* e86f53: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e86f54: mov dword ptr [esi + 0x18], ecx */
  W32((uint32_t)(esi + 0x18u), ecx);
/* e86f57: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e86f58: mov ecx, ebx */
  ecx = ebx;
/* e86f5a: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* e86f5d: call 0xe88140 */
  esp -= 4; W32(esp, 0xe86f62u); SPILL(); f_e88140(); if (g_unwind) return; RELOAD();
/* e86f62: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e86f65: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* e86f68: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* e86f6b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e86f6c: add esi, 0x84 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e86f72: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e86f73: mov ecx, ebx */
  ecx = ebx;
/* e86f75: call 0xe87c50 */
  esp -= 4; W32(esp, 0xe86f7au); SPILL(); f_e87c50(); if (g_unwind) return; RELOAD();
/* e86f7a: mov eax, 2 */
  eax = 0x2u;
/* e86f7f: mov dword ptr [esi + 0x20], 1 */
  W32((uint32_t)(esi + 0x20u), 0x1u);
/* e86f86: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* e86f89: mov dword ptr [esi + 0x2c], eax */
  W32((uint32_t)(esi + 0x2cu), eax);
/* e86f8c: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* e86f8e: mov ecx, edi */
  ecx = edi;
/* e86f90: call dword ptr [eax + 0x84] */
  { uint32_t t = R32((uint32_t)(eax + 0x84u)); esp -= 4; W32(esp, 0xe86f96u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e86f96: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* e86f98: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* e86f9a: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e86f9d: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e86fa0: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* e86fa4: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* e86fa7: call 0xe825e0 */
  esp -= 4; W32(esp, 0xe86facu); SPILL(); f_e825e0(); if (g_unwind) return; RELOAD();
/* e86fac: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* e86fb0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e86fb1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e86fb2: mov ecx, ebx */
  ecx = ebx;
/* e86fb4: mov dword ptr [esp + 0x20], 1 */
  W32((uint32_t)(esp + 0x20u), 0x1u);
/* e86fbc: mov byte ptr [esp + 0x70], 0 */
  W8((uint32_t)(esp + 0x70u), 0x0u);
/* e86fc1: call 0xe88140 */
  esp -= 4; W32(esp, 0xe86fc6u); SPILL(); f_e88140(); if (g_unwind) return; RELOAD();
/* e86fc6: mov edx, dword ptr [ebx + 0x2b00c] */
  edx = R32((uint32_t)(ebx + 0x2b00cu));
/* e86fcc: mov ecx, dword ptr [edx + 0x52c] */
  ecx = R32((uint32_t)(edx + 0x52cu));
/* e86fd2: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* e86fd4: add esi, 0x4c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e86fd7: mov eax, 0x3e0f83e1 */
  eax = 0x3e0f83e1u;
/* e86fdc: imul esi */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(esi); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* e86fde: jmp 0xe87a03 */
  goto L_e87a03;
L_e86fe3: /* e86fe3: mov eax, dword ptr [0xebdd50] */
  eax = R32((uint32_t)(0xebdd50u));
/* e86fe8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e86fea: jne 0xe87036 */
  if (!zf) goto L_e87036;
L_e86fec: /* e86fec: mov edi, dword ptr [0xeae298] */
  edi = R32((uint32_t)(0xeae298u));
/* e86ff2: xor esi, esi */
  esi = 0;
/* e86ff4: call dword ptr [0xeae0ac] */
  esp -= 4; W32(esp, 0xe86ffau); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* e86ffa: mov ecx, dword ptr [0xeae020] */
  ecx = R32((uint32_t)(0xeae020u));
/* e87000: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e87002: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e87003: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e87004: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e87005: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e87006: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e87007: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e87008: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e87009: call dword ptr [0xeae0a8] */
  esp -= 4; W32(esp, 0xe8700fu); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* e8700f: mov dword ptr [0xebdd50], eax */
  W32((uint32_t)(0xebdd50u), eax);
/* e87014: mov eax, dword ptr [0xeae294] */
  eax = R32((uint32_t)(0xeae294u));
/* e87019: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* e8701b: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8701e: add esi, 0x28 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e87021: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e87023: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e87025: mov ecx, esi */
  ecx = esi;
/* e87027: call dword ptr [0xeae018] */
  esp -= 4; W32(esp, 0xe8702du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* e8702d: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* e8702f: mov dword ptr [ecx + eax*4], 0xebdd50 */
  W32((uint32_t)(ecx + eax*4), 0xebdd50u);
L_e87036: /* e87036: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e87039: mov edx, dword ptr [eax + 0x38] */
  edx = R32((uint32_t)(eax + 0x38u));
/* e8703c: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* e8703e: mov edx, dword ptr [0xebdd50] */
  edx = R32((uint32_t)(0xebdd50u));
/* e87044: mov dword ptr [edx + 0x38], ecx */
  W32((uint32_t)(edx + 0x38u), ecx);
/* e87047: mov esi, dword ptr [eax + 0x38] */
  esi = R32((uint32_t)(eax + 0x38u));
/* e8704a: mov edi, dword ptr [0xebdd50] */
  edi = R32((uint32_t)(0xebdd50u));
/* e87050: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e87053: add edi, 0x44 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* e87056: mov ecx, 0x10 */
  ecx = 0x10u;
/* e8705b: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e8705d: mov ecx, dword ptr [0xebdd50] */
  ecx = R32((uint32_t)(0xebdd50u));
/* e87063: mov byte ptr [ecx + 0x3c], 8 */
  W8((uint32_t)(ecx + 0x3cu), 0x8u);
/* e87067: mov ecx, dword ptr [0xebdd4c] */
  ecx = R32((uint32_t)(0xebdd4cu));
/* e8706d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8706f: jne 0xe870bf */
  if (!zf) goto L_e870bf;
L_e87071: /* e87071: mov edi, dword ptr [0xeae298] */
  edi = R32((uint32_t)(0xeae298u));
/* e87077: xor esi, esi */
  esi = 0;
/* e87079: call dword ptr [0xeae0ac] */
  esp -= 4; W32(esp, 0xe8707fu); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* e8707f: mov edx, dword ptr [0xeae020] */
  edx = R32((uint32_t)(0xeae020u));
/* e87085: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* e87087: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e87088: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e87089: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e8708a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e8708b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e8708c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8708d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e8708e: call dword ptr [0xeae0a8] */
  esp -= 4; W32(esp, 0xe87094u); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* e87094: mov edx, dword ptr [0xeae294] */
  edx = R32((uint32_t)(0xeae294u));
/* e8709a: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8709d: mov dword ptr [0xebdd4c], eax */
  W32((uint32_t)(0xebdd4cu), eax);
/* e870a2: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* e870a4: add esi, 0x28 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e870a7: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e870a9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e870ab: mov ecx, esi */
  ecx = esi;
/* e870ad: call dword ptr [0xeae018] */
  esp -= 4; W32(esp, 0xe870b3u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* e870b3: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* e870b5: mov dword ptr [ecx + eax*4], 0xebdd4c */
  W32((uint32_t)(ecx + eax*4), 0xebdd4cu);
/* e870bc: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_e870bf: /* e870bf: mov edx, dword ptr [eax + 0x38] */
  edx = R32((uint32_t)(eax + 0x38u));
/* e870c2: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* e870c5: mov edx, dword ptr [0xebdd4c] */
  edx = R32((uint32_t)(0xebdd4cu));
/* e870cb: mov dword ptr [edx + 0x38], ecx */
  W32((uint32_t)(edx + 0x38u), ecx);
/* e870ce: mov edi, dword ptr [0xebdd4c] */
  edi = R32((uint32_t)(0xebdd4cu));
/* e870d4: mov esi, dword ptr [0xeae0a0] */
  esi = R32((uint32_t)(0xeae0a0u));
/* e870da: add edi, 0x44 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* e870dd: mov ecx, 0x10 */
  ecx = 0x10u;
/* e870e2: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e870e4: mov ecx, dword ptr [0xebdd4c] */
  ecx = R32((uint32_t)(0xebdd4cu));
/* e870ea: mov byte ptr [ecx + 0x3c], 0 */
  W8((uint32_t)(ecx + 0x3cu), 0x0u);
/* e870ee: mov ecx, dword ptr [0xebdd48] */
  ecx = R32((uint32_t)(0xebdd48u));
/* e870f4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e870f6: jne 0xe8714f */
  if (!zf) goto L_e8714f;
L_e870f8: /* e870f8: mov edi, dword ptr [0xeae284] */
  edi = R32((uint32_t)(0xeae284u));
/* e870fe: xor esi, esi */
  esi = 0;
/* e87100: call dword ptr [0xeae0ac] */
  esp -= 4; W32(esp, 0xe87106u); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* e87106: mov edx, dword ptr [0xeae020] */
  edx = R32((uint32_t)(0xeae020u));
/* e8710c: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* e8710e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e8710f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e87110: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e87111: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e87112: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e87113: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e87114: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e87115: call dword ptr [0xeae0a8] */
  esp -= 4; W32(esp, 0xe8711bu); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* e8711b: mov edx, dword ptr [0xeae294] */
  edx = R32((uint32_t)(0xeae294u));
/* e87121: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e87124: mov dword ptr [0xebdd48], eax */
  W32((uint32_t)(0xebdd48u), eax);
/* e87129: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* e8712b: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e8712d: add esi, 0x28 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e87130: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e87132: mov ecx, esi */
  ecx = esi;
/* e87134: call dword ptr [0xeae018] */
  esp -= 4; W32(esp, 0xe8713au); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* e8713a: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* e8713c: mov dword ptr [ecx + eax*4], 0xebdd48 */
  W32((uint32_t)(ecx + eax*4), 0xebdd48u);
/* e87143: mov eax, dword ptr [0xebdd48] */
  eax = R32((uint32_t)(0xebdd48u));
/* e87148: or dword ptr [eax + 0x40], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x40u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x40u), r);
  }
/* e8714c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_e8714f: /* e8714f: mov edx, dword ptr [0xebdd50] */
  edx = R32((uint32_t)(0xebdd50u));
/* e87155: mov ecx, dword ptr [0xebdd48] */
  ecx = R32((uint32_t)(0xebdd48u));
/* e8715b: mov dword ptr [ecx + 0x38], edx */
  W32((uint32_t)(ecx + 0x38u), edx);
/* e8715e: mov ecx, dword ptr [0xebdd48] */
  ecx = R32((uint32_t)(0xebdd48u));
/* e87164: mov edx, dword ptr [0xebdd4c] */
  edx = R32((uint32_t)(0xebdd4cu));
/* e8716a: mov dword ptr [ecx + 0x3c], edx */
  W32((uint32_t)(ecx + 0x3cu), edx);
/* e8716d: test byte ptr [eax + 0x48], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x48u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e87171: mov esi, dword ptr [0xebdd50] */
  esi = R32((uint32_t)(0xebdd50u));
/* e87177: jne 0xe8717f */
  if (!zf) goto L_e8717f;
L_e87179: /* e87179: mov esi, dword ptr [0xebdd48] */
  esi = R32((uint32_t)(0xebdd48u));
L_e8717f: /* e8717f: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* e87183: call 0xe825e0 */
  esp -= 4; W32(esp, 0xe87188u); SPILL(); f_e825e0(); if (g_unwind) return; RELOAD();
/* e87188: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8718a: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* e8718e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8718f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e87190: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e87191: call 0xe89610 */
  esp -= 4; W32(esp, 0xe87196u); SPILL(); f_e89610(); if (g_unwind) return; RELOAD();
/* e87196: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e87199: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8719b: je 0xe871da */
  if (zf) goto L_e871da;
L_e8719d: /* e8719d: mov ecx, dword ptr [ebp + 0x94] */
  ecx = R32((uint32_t)(ebp + 0x94u));
/* e871a3: mov edx, dword ptr [ebp + 0x90] */
  edx = R32((uint32_t)(ebp + 0x90u));
/* e871a9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e871aa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e871ab: sub esp, 0x84 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e871b1: mov edi, esp */
  edi = esp;
/* e871b3: mov ecx, 0x21 */
  ecx = 0x21u;
/* e871b8: lea esi, [esp + 0xa4] */
  esi = (uint32_t)(esp + 0xa4u);
/* e871bf: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e871c1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e871c2: mov ecx, ebx */
  ecx = ebx;
/* e871c4: call 0xe84ae0 */
  esp -= 4; W32(esp, 0xe871c9u); SPILL(); f_e84ae0(); if (g_unwind) return; RELOAD();
/* e871c9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e871cb: jne 0xe87a10 */
  if (!zf) goto L_e87a10;
L_e871d1: /* e871d1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e871d2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e871d3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e871d4: mov esp, ebp */
  esp = ebp;
/* e871d6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e871d7: ret 0x90 */
  esp += 148; SPILL(); return;
L_e871da: /* e871da: mov ecx, dword ptr [ebp + 0x90] */
  ecx = R32((uint32_t)(ebp + 0x90u));
/* e871e0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e871e2: je 0xe871ef */
  if (zf) goto L_e871ef;
L_e871e4: /* e871e4: push 0xeaf560 */
  { uint32_t v = 0xeaf560u; esp -= 4; W32(esp, v); }
/* e871e9: call dword ptr [0xeae0bc] */
  esp -= 4; W32(esp, 0xe871efu); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
L_e871ef: /* e871ef: mov eax, dword ptr [ebp + 0x94] */
  eax = R32((uint32_t)(ebp + 0x94u));
/* e871f5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e871f7: je 0xe87203 */
  if (zf) goto L_e87203;
L_e871f9: /* e871f9: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* e871fc: mov edx, dword ptr [ecx + 0x38] */
  edx = R32((uint32_t)(ecx + 0x38u));
/* e871ff: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* e87201: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_e87203: /* e87203: xor eax, eax */
  eax = 0;
/* e87205: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e87206: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e87207: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e87208: mov esp, ebp */
  esp = ebp;
/* e8720a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e8720b: ret 0x90 */
  esp += 148; SPILL(); return;
L_e8720e: /* e8720e: mov edx, dword ptr [edi + 0x2b00c] */
  edx = R32((uint32_t)(edi + 0x2b00cu));
/* e87214: mov eax, dword ptr [edx + 0x52c] */
  eax = R32((uint32_t)(edx + 0x52cu));
/* e8721a: mov ecx, 2 */
  ecx = 0x2u;
/* e8721f: mov dword ptr [eax + 0x24], ecx */
  W32((uint32_t)(eax + 0x24u), ecx);
/* e87222: lea ebx, [eax + 0x38] */
  ebx = (uint32_t)(eax + 0x38u);
/* e87225: test byte ptr [esi + 0x48], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x48u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e87229: mov eax, dword ptr [edi + 0x2b00c] */
  eax = R32((uint32_t)(edi + 0x2b00cu));
/* e8722f: mov edx, dword ptr [eax + 0x52c] */
  edx = R32((uint32_t)(eax + 0x52cu));
/* e87235: je 0xe87270 */
  if (zf) goto L_e87270;
L_e87237: /* e87237: mov ecx, 1 */
  ecx = 0x1u;
/* e8723c: mov dword ptr [edx + 0x28], ecx */
  W32((uint32_t)(edx + 0x28u), ecx);
/* e8723f: mov eax, dword ptr [edi + 0x2b00c] */
  eax = R32((uint32_t)(edi + 0x2b00cu));
/* e87245: mov edx, dword ptr [eax + 0x52c] */
  edx = R32((uint32_t)(eax + 0x52cu));
/* e8724b: xor eax, eax */
  eax = 0;
/* e8724d: mov dword ptr [edx + 0x2c], eax */
  W32((uint32_t)(edx + 0x2cu), eax);
/* e87250: mov edx, dword ptr [edi + 0x2b00c] */
  edx = R32((uint32_t)(edi + 0x2b00cu));
/* e87256: mov edx, dword ptr [edx + 0x52c] */
  edx = R32((uint32_t)(edx + 0x52cu));
/* e8725c: mov dword ptr [edx + 0x14], ecx */
  W32((uint32_t)(edx + 0x14u), ecx);
/* e8725f: mov edx, dword ptr [edi + 0x2b00c] */
  edx = R32((uint32_t)(edi + 0x2b00cu));
/* e87265: mov edx, dword ptr [edx + 0x52c] */
  edx = R32((uint32_t)(edx + 0x52cu));
/* e8726b: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* e8726e: jmp 0xe872d4 */
  goto L_e872d4;
L_e87270: /* e87270: mov dword ptr [edx + 0x28], ecx */
  W32((uint32_t)(edx + 0x28u), ecx);
/* e87273: mov eax, dword ptr [edi + 0x2b00c] */
  eax = R32((uint32_t)(edi + 0x2b00cu));
/* e87279: mov ecx, dword ptr [eax + 0x52c] */
  ecx = R32((uint32_t)(eax + 0x52cu));
/* e8727f: mov eax, 1 */
  eax = 0x1u;
/* e87284: mov dword ptr [ecx + 0x2c], eax */
  W32((uint32_t)(ecx + 0x2cu), eax);
/* e87287: mov edx, dword ptr [edi + 0x2b00c] */
  edx = R32((uint32_t)(edi + 0x2b00cu));
/* e8728d: mov ecx, dword ptr [edx + 0x52c] */
  ecx = R32((uint32_t)(edx + 0x52cu));
/* e87293: mov byte ptr [esp + 0xc], 0 */
  W8((uint32_t)(esp + 0xcu), 0x0u);
/* e87298: mov byte ptr [esp + 0xd], 0 */
  W8((uint32_t)(esp + 0xdu), 0x0u);
/* e8729d: mov byte ptr [esp + 0xe], 0 */
  W8((uint32_t)(esp + 0xeu), 0x0u);
/* e872a2: mov byte ptr [esp + 0xf], 0 */
  W8((uint32_t)(esp + 0xfu), 0x0u);
/* e872a7: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e872ab: mov dword ptr [ecx + 0x30], edx */
  W32((uint32_t)(ecx + 0x30u), edx);
/* e872ae: mov ecx, dword ptr [edi + 0x2b00c] */
  ecx = R32((uint32_t)(edi + 0x2b00cu));
/* e872b4: mov edx, dword ptr [ecx + 0x52c] */
  edx = R32((uint32_t)(ecx + 0x52cu));
/* e872ba: mov dword ptr [edx + 0x14], 0 */
  W32((uint32_t)(edx + 0x14u), 0x0u);
/* e872c1: mov ecx, dword ptr [edi + 0x2b00c] */
  ecx = R32((uint32_t)(edi + 0x2b00cu));
/* e872c7: mov edx, dword ptr [ecx + 0x52c] */
  edx = R32((uint32_t)(ecx + 0x52cu));
/* e872cd: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* e872d0: mov ecx, eax */
  ecx = eax;
/* e872d2: xor eax, eax */
  eax = 0;
L_e872d4: /* e872d4: mov edx, dword ptr [edi + 0x2b00c] */
  edx = R32((uint32_t)(edi + 0x2b00cu));
/* e872da: mov edx, dword ptr [edx + 0x52c] */
  edx = R32((uint32_t)(edx + 0x52cu));
/* e872e0: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* e872e3: mov edx, dword ptr [edi + 0x2b00c] */
  edx = R32((uint32_t)(edi + 0x2b00cu));
/* e872e9: mov edx, dword ptr [edx + 0x52c] */
  edx = R32((uint32_t)(edx + 0x52cu));
/* e872ef: mov dword ptr [edx + 0x10], ecx */
  W32((uint32_t)(edx + 0x10u), ecx);
/* e872f2: mov ecx, dword ptr [edi + 0x2b00c] */
  ecx = R32((uint32_t)(edi + 0x2b00cu));
/* e872f8: mov edx, dword ptr [ecx + 0x52c] */
  edx = R32((uint32_t)(ecx + 0x52cu));
/* e872fe: mov dword ptr [edx + 0x18], eax */
  W32((uint32_t)(edx + 0x18u), eax);
/* e87301: mov eax, dword ptr [edi + 0x2b00c] */
  eax = R32((uint32_t)(edi + 0x2b00cu));
/* e87307: mov ecx, dword ptr [eax + 0x52c] */
  ecx = R32((uint32_t)(eax + 0x52cu));
/* e8730d: mov byte ptr [ecx + 0xc], 0 */
  W8((uint32_t)(ecx + 0xcu), 0x0u);
/* e87311: cmp byte ptr [esi + 0x44], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x44u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* e87315: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* e87319: jne 0xe87598 */
  if (!zf) goto L_e87598;
L_e8731f: /* e8731f: call 0xe825e0 */
  esp -= 4; W32(esp, 0xe87324u); SPILL(); f_e825e0(); if (g_unwind) return; RELOAD();
/* e87324: lea ecx, [esp + 0xa0] */
  ecx = (uint32_t)(esp + 0xa0u);
/* e8732b: call 0xe825e0 */
  esp -= 4; W32(esp, 0xe87330u); SPILL(); f_e825e0(); if (g_unwind) return; RELOAD();
/* e87330: mov edx, dword ptr [esi + 0x38] */
  edx = R32((uint32_t)(esi + 0x38u));
/* e87333: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* e87336: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e87337: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e87338: mov ecx, edi */
  ecx = edi;
/* e8733a: call 0xe87c50 */
  esp -= 4; W32(esp, 0xe8733fu); SPILL(); f_e87c50(); if (g_unwind) return; RELOAD();
/* e8733f: lea ecx, [esp + 0xa0] */
  ecx = (uint32_t)(esp + 0xa0u);
/* e87346: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e87347: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e87348: mov ecx, edi */
  ecx = edi;
/* e8734a: mov dword ptr [esp + 0xa8], 1 */
  W32((uint32_t)(esp + 0xa8u), 0x1u);
/* e87355: mov byte ptr [esp + 0xf8], 0 */
  W8((uint32_t)(esp + 0xf8u), 0x0u);
/* e8735d: call 0xe88140 */
  esp -= 4; W32(esp, 0xe87362u); SPILL(); f_e88140(); if (g_unwind) return; RELOAD();
/* e87362: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* e87365: lea esi, [eax + 8] */
  esi = (uint32_t)(eax + 0x8u);
/* e87368: mov dword ptr [esp + 0x18], 1 */
  W32((uint32_t)(esp + 0x18u), 0x1u);
/* e87370: mov ecx, 0x10 */
  ecx = 0x10u;
/* e87375: lea edi, [esp + 0x28] */
  edi = (uint32_t)(esp + 0x28u);
/* e87379: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e8737b: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* e8737f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e87381: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* e87385: mov byte ptr [esp + 0x6c], 8 */
  W8((uint32_t)(esp + 0x6cu), 0x8u);
/* e8738a: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* e8738c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8738d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8738e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e8738f: add ebx, 0x84 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* e87395: call 0xe88b60 */
  esp -= 4; W32(esp, 0xe8739au); SPILL(); f_e88b60(); if (g_unwind) return; RELOAD();
/* e8739a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8739d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8739e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e8739f: mov ecx, esi */
  ecx = esi;
/* e873a1: call 0xe87c50 */
  esp -= 4; W32(esp, 0xe873a6u); SPILL(); f_e87c50(); if (g_unwind) return; RELOAD();
/* e873a6: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* e873aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e873ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e873ac: mov ecx, esi */
  ecx = esi;
/* e873ae: call 0xe88140 */
  esp -= 4; W32(esp, 0xe873b3u); SPILL(); f_e88140(); if (g_unwind) return; RELOAD();
/* e873b3: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* e873b6: mov eax, dword ptr [edx + 0x3c] */
  eax = R32((uint32_t)(edx + 0x3cu));
/* e873b9: add ebx, 0x84 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* e873bf: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e873c2: jle 0xe87538 */
  if ((zf || sf != of)) goto L_e87538;
L_e873c8: /* e873c8: lea ecx, [esp + 0x12c] */
  ecx = (uint32_t)(esp + 0x12cu);
/* e873cf: call 0xe825e0 */
  esp -= 4; W32(esp, 0xe873d4u); SPILL(); f_e825e0(); if (g_unwind) return; RELOAD();
/* e873d4: mov esi, eax */
  esi = eax;
/* e873d6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e873d9: mov eax, dword ptr [eax + 0x38] */
  eax = R32((uint32_t)(eax + 0x38u));
/* e873dc: mov ecx, 0x21 */
  ecx = 0x21u;
/* e873e1: lea edi, [esp + 0x18] */
  edi = (uint32_t)(esp + 0x18u);
/* e873e5: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e873e7: mov dword ptr [esp + 0x18], 1 */
  W32((uint32_t)(esp + 0x18u), 0x1u);
/* e873ef: lea esi, [eax + 0x50] */
  esi = (uint32_t)(eax + 0x50u);
/* e873f2: mov ecx, 0x10 */
  ecx = 0x10u;
/* e873f7: lea edi, [esp + 0x28] */
  edi = (uint32_t)(esp + 0x28u);
/* e873fb: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e873fd: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* e87401: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e87403: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* e87407: mov byte ptr [esp + 0x6c], 8 */
  W8((uint32_t)(esp + 0x6cu), 0x8u);
/* e8740c: mov edx, dword ptr [eax + 0x48] */
  edx = R32((uint32_t)(eax + 0x48u));
/* e8740f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e87410: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e87411: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e87412: call 0xe88b60 */
  esp -= 4; W32(esp, 0xe87417u); SPILL(); f_e88b60(); if (g_unwind) return; RELOAD();
/* e87417: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8741a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8741b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e8741c: mov ecx, esi */
  ecx = esi;
/* e8741e: call 0xe87c50 */
  esp -= 4; W32(esp, 0xe87423u); SPILL(); f_e87c50(); if (g_unwind) return; RELOAD();
/* e87423: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* e87427: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e87428: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e87429: mov ecx, esi */
  ecx = esi;
/* e8742b: call 0xe88140 */
  esp -= 4; W32(esp, 0xe87430u); SPILL(); f_e88140(); if (g_unwind) return; RELOAD();
/* e87430: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* e87433: mov eax, dword ptr [ecx + 0x3c] */
  eax = R32((uint32_t)(ecx + 0x3cu));
/* e87436: add ebx, 0x84 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* e8743c: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e8743f: jle 0xe87538 */
  if ((zf || sf != of)) goto L_e87538;
L_e87445: /* e87445: lea ecx, [esp + 0x12c] */
  ecx = (uint32_t)(esp + 0x12cu);
/* e8744c: call 0xe825e0 */
  esp -= 4; W32(esp, 0xe87451u); SPILL(); f_e825e0(); if (g_unwind) return; RELOAD();
/* e87451: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* e87454: mov esi, eax */
  esi = eax;
/* e87456: mov eax, dword ptr [edx + 0x38] */
  eax = R32((uint32_t)(edx + 0x38u));
/* e87459: mov ecx, 0x21 */
  ecx = 0x21u;
/* e8745e: lea edi, [esp + 0x18] */
  edi = (uint32_t)(esp + 0x18u);
/* e87462: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e87464: mov dword ptr [esp + 0x18], 1 */
  W32((uint32_t)(esp + 0x18u), 0x1u);
/* e8746c: lea esi, [eax + 0x98] */
  esi = (uint32_t)(eax + 0x98u);
/* e87472: mov ecx, 0x10 */
  ecx = 0x10u;
/* e87477: lea edi, [esp + 0x28] */
  edi = (uint32_t)(esp + 0x28u);
/* e8747b: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e8747d: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* e87481: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e87483: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* e87487: mov byte ptr [esp + 0x6c], 8 */
  W8((uint32_t)(esp + 0x6cu), 0x8u);
/* e8748c: mov edx, dword ptr [eax + 0x90] */
  edx = R32((uint32_t)(eax + 0x90u));
/* e87492: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e87493: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e87494: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e87495: call 0xe88b60 */
  esp -= 4; W32(esp, 0xe8749au); SPILL(); f_e88b60(); if (g_unwind) return; RELOAD();
/* e8749a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8749d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8749e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e8749f: mov ecx, esi */
  ecx = esi;
/* e874a1: call 0xe87c50 */
  esp -= 4; W32(esp, 0xe874a6u); SPILL(); f_e87c50(); if (g_unwind) return; RELOAD();
/* e874a6: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* e874aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e874ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e874ac: mov ecx, esi */
  ecx = esi;
/* e874ae: call 0xe88140 */
  esp -= 4; W32(esp, 0xe874b3u); SPILL(); f_e88140(); if (g_unwind) return; RELOAD();
/* e874b3: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* e874b6: mov eax, dword ptr [ecx + 0x3c] */
  eax = R32((uint32_t)(ecx + 0x3cu));
/* e874b9: add ebx, 0x84 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* e874bf: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e874c2: jle 0xe87538 */
  if ((zf || sf != of)) goto L_e87538;
L_e874c4: /* e874c4: lea ecx, [esp + 0x12c] */
  ecx = (uint32_t)(esp + 0x12cu);
/* e874cb: call 0xe825e0 */
  esp -= 4; W32(esp, 0xe874d0u); SPILL(); f_e825e0(); if (g_unwind) return; RELOAD();
/* e874d0: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* e874d3: mov esi, eax */
  esi = eax;
/* e874d5: mov eax, dword ptr [edx + 0x38] */
  eax = R32((uint32_t)(edx + 0x38u));
/* e874d8: mov ecx, 0x21 */
  ecx = 0x21u;
/* e874dd: lea edi, [esp + 0x18] */
  edi = (uint32_t)(esp + 0x18u);
/* e874e1: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e874e3: mov dword ptr [esp + 0x18], 1 */
  W32((uint32_t)(esp + 0x18u), 0x1u);
/* e874eb: lea esi, [eax + 0xe0] */
  esi = (uint32_t)(eax + 0xe0u);
/* e874f1: mov ecx, 0x10 */
  ecx = 0x10u;
/* e874f6: lea edi, [esp + 0x28] */
  edi = (uint32_t)(esp + 0x28u);
/* e874fa: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e874fc: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* e87500: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e87502: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* e87506: mov byte ptr [esp + 0x6c], 8 */
  W8((uint32_t)(esp + 0x6cu), 0x8u);
/* e8750b: mov edx, dword ptr [eax + 0xd8] */
  edx = R32((uint32_t)(eax + 0xd8u));
/* e87511: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e87512: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e87513: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e87514: call 0xe88b60 */
  esp -= 4; W32(esp, 0xe87519u); SPILL(); f_e88b60(); if (g_unwind) return; RELOAD();
/* e87519: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8751c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8751d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e8751e: mov ecx, esi */
  ecx = esi;
/* e87520: call 0xe87c50 */
  esp -= 4; W32(esp, 0xe87525u); SPILL(); f_e87c50(); if (g_unwind) return; RELOAD();
/* e87525: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* e87529: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8752a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e8752b: mov ecx, esi */
  ecx = esi;
/* e8752d: call 0xe88140 */
  esp -= 4; W32(esp, 0xe87532u); SPILL(); f_e88140(); if (g_unwind) return; RELOAD();
/* e87532: add ebx, 0x84 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_e87538: /* e87538: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* e8753b: mov eax, dword ptr [ecx + 0x3c] */
  eax = R32((uint32_t)(ecx + 0x3cu));
/* e8753e: sub eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* e87541: je 0xe8757d */
  if (zf) goto L_e8757d;
L_e87543: /* e87543: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* e87544: je 0xe87562 */
  if (zf) goto L_e87562;
L_e87546: /* e87546: mov edx, dword ptr [0xeae020] */
  edx = R32((uint32_t)(0xeae020u));
/* e8754c: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e8754e: push 0xeaf530 */
  { uint32_t v = 0xeaf530u; esp -= 4; W32(esp, v); }
/* e87553: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e87554: call dword ptr [0xeae0b4] */
  esp -= 4; W32(esp, 0xe8755au); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* e8755a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8755d: jmp 0xe879e3 */
  goto L_e879e3;
L_e87562: /* e87562: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e87566: mov edx, dword ptr [ecx + 0x2b00c] */
  edx = R32((uint32_t)(ecx + 0x2b00cu));
/* e8756c: mov eax, dword ptr [edx + 0x52c] */
  eax = R32((uint32_t)(edx + 0x52cu));
/* e87572: mov dword ptr [eax], 2 */
  W32((uint32_t)(eax), 0x2u);
/* e87578: jmp 0xe879e3 */
  goto L_e879e3;
L_e8757d: /* e8757d: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e87581: mov edx, dword ptr [ecx + 0x2b00c] */
  edx = R32((uint32_t)(ecx + 0x2b00cu));
/* e87587: mov eax, dword ptr [edx + 0x52c] */
  eax = R32((uint32_t)(edx + 0x52cu));
/* e8758d: mov dword ptr [eax], 1 */
  W32((uint32_t)(eax), 0x1u);
/* e87593: jmp 0xe879e3 */
  goto L_e879e3;
L_e87598: /* e87598: call 0xe825e0 */
  esp -= 4; W32(esp, 0xe8759du); SPILL(); f_e825e0(); if (g_unwind) return; RELOAD();
/* e8759d: lea ecx, [esp + 0xa0] */
  ecx = (uint32_t)(esp + 0xa0u);
/* e875a4: call 0xe825e0 */
  esp -= 4; W32(esp, 0xe875a9u); SPILL(); f_e825e0(); if (g_unwind) return; RELOAD();
/* e875a9: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* e875ac: mov eax, dword ptr [ecx + 0x416c] */
  eax = R32((uint32_t)(ecx + 0x416cu));
/* e875b2: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e875b5: jne 0xe877e8 */
  if (!zf) goto L_e877e8;
L_e875bb: /* e875bb: xor edx, edx */
  edx = 0;
/* e875bd: mov ecx, 2 */
  ecx = 0x2u;
/* e875c2: mov dword ptr [ebx + 0x20], ecx */
  W32((uint32_t)(ebx + 0x20u), ecx);
/* e875c5: mov dword ptr [ebx + 0x24], edx */
  W32((uint32_t)(ebx + 0x24u), edx);
/* e875c8: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* e875cb: mov edi, 1 */
  edi = 0x1u;
/* e875d0: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e875d2: mov eax, dword ptr [0xeba050] */
  eax = R32((uint32_t)(0xeba050u));
/* e875d7: je 0xe875db */
  if (zf) goto L_e875db;
L_e875d9: /* e875d9: mov eax, ecx */
  eax = ecx;
L_e875db: /* e875db: mov dword ptr [ebx + 0x2c], edx */
  W32((uint32_t)(ebx + 0x2cu), edx);
/* e875de: mov dword ptr [ebx + 0x18], ecx */
  W32((uint32_t)(ebx + 0x18u), ecx);
/* e875e1: mov dword ptr [ebx + 0x14], eax */
  W32((uint32_t)(ebx + 0x14u), eax);
/* e875e4: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* e875e7: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* e875eb: lea esi, [eax + 8] */
  esi = (uint32_t)(eax + 0x8u);
/* e875ee: mov ecx, 0x10 */
  ecx = 0x10u;
/* e875f3: lea edi, [esp + 0x28] */
  edi = (uint32_t)(esp + 0x28u);
/* e875f7: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e875f9: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* e875fd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e875ff: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* e87603: mov byte ptr [esp + 0x6c], 8 */
  W8((uint32_t)(esp + 0x6cu), 0x8u);
/* e87608: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* e8760a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8760b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8760c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e8760d: call 0xe88b60 */
  esp -= 4; W32(esp, 0xe87612u); SPILL(); f_e88b60(); if (g_unwind) return; RELOAD();
/* e87612: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e87615: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e87616: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e87617: mov ecx, esi */
  ecx = esi;
/* e87619: call 0xe87c50 */
  esp -= 4; W32(esp, 0xe8761eu); SPILL(); f_e87c50(); if (g_unwind) return; RELOAD();
/* e8761e: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* e87622: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e87623: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e87624: mov ecx, esi */
  ecx = esi;
/* e87626: call 0xe88140 */
  esp -= 4; W32(esp, 0xe8762bu); SPILL(); f_e88140(); if (g_unwind) return; RELOAD();
/* e8762b: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* e8762e: mov edx, dword ptr [edi + 0x38] */
  edx = R32((uint32_t)(edi + 0x38u));
/* e87631: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* e87634: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e87635: add ebx, 0x84 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* e8763b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e8763c: mov ecx, esi */
  ecx = esi;
/* e8763e: call 0xe87c50 */
  esp -= 4; W32(esp, 0xe87643u); SPILL(); f_e87c50(); if (g_unwind) return; RELOAD();
/* e87643: lea ecx, [esp + 0xa0] */
  ecx = (uint32_t)(esp + 0xa0u);
/* e8764a: mov eax, 1 */
  eax = 0x1u;
/* e8764f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e87650: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e87651: mov ecx, esi */
  ecx = esi;
/* e87653: mov dword ptr [ebx + 0x20], eax */
  W32((uint32_t)(ebx + 0x20u), eax);
/* e87656: mov dword ptr [ebx + 0x24], 0x22 */
  W32((uint32_t)(ebx + 0x24u), 0x22u);
/* e8765d: mov dword ptr [ebx + 0x14], 4 */
  W32((uint32_t)(ebx + 0x14u), 0x4u);
/* e87664: mov dword ptr [ebx + 0x2c], eax */
  W32((uint32_t)(ebx + 0x2cu), eax);
/* e87667: mov dword ptr [ebx + 0x18], 2 */
  W32((uint32_t)(ebx + 0x18u), 0x2u);
/* e8766e: mov dword ptr [esp + 0xa8], eax */
  W32((uint32_t)(esp + 0xa8u), eax);
/* e87675: mov byte ptr [esp + 0xf8], 0 */
  W8((uint32_t)(esp + 0xf8u), 0x0u);
/* e8767d: call 0xe88140 */
  esp -= 4; W32(esp, 0xe87682u); SPILL(); f_e88140(); if (g_unwind) return; RELOAD();
/* e87682: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* e87685: add ebx, 0x84 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* e8768b: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e8768e: jle 0xe879e3 */
  if ((zf || sf != of)) goto L_e879e3;
L_e87694: /* e87694: mov ecx, 1 */
  ecx = 0x1u;
/* e87699: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e8769b: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* e8769f: jle 0xe877bc */
  if ((zf || sf != of)) goto L_e877bc;
L_e876a5: /* e876a5: mov dword ptr [esp + 0xc], 0x48 */
  W32((uint32_t)(esp + 0xcu), 0x48u);
/* e876ad: jmp 0xe876b2 */
  goto L_e876b2;
L_e876af: /* e876af: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
L_e876b2: /* e876b2: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* e876b6: mov eax, 2 */
  eax = 0x2u;
/* e876bb: mov dword ptr [ebx + 0x20], ecx */
  W32((uint32_t)(ebx + 0x20u), ecx);
/* e876be: mov dword ptr [ebx + 0x14], eax */
  W32((uint32_t)(ebx + 0x14u), eax);
/* e876c1: mov dword ptr [ebx + 0x2c], eax */
  W32((uint32_t)(ebx + 0x2cu), eax);
/* e876c4: mov dword ptr [ebx + 0x18], eax */
  W32((uint32_t)(ebx + 0x18u), eax);
/* e876c7: mov edx, dword ptr [edi + 0x38] */
  edx = R32((uint32_t)(edi + 0x38u));
/* e876ca: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e876ce: mov dword ptr [esp + 0xa0], ecx */
  W32((uint32_t)(esp + 0xa0u), ecx);
/* e876d5: mov byte ptr [esp + 0xf0], 0 */
  W8((uint32_t)(esp + 0xf0u), 0x0u);
/* e876dd: mov ecx, dword ptr [eax + edx + 4] */
  ecx = R32((uint32_t)(eax + edx + 0x4u));
/* e876e1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e876e2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e876e3: mov ecx, esi */
  ecx = esi;
/* e876e5: call 0xe87c50 */
  esp -= 4; W32(esp, 0xe876eau); SPILL(); f_e87c50(); if (g_unwind) return; RELOAD();
/* e876ea: lea edx, [esp + 0xa0] */
  edx = (uint32_t)(esp + 0xa0u);
/* e876f1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e876f2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e876f3: mov ecx, esi */
  ecx = esi;
/* e876f5: call 0xe88140 */
  esp -= 4; W32(esp, 0xe876fau); SPILL(); f_e88140(); if (g_unwind) return; RELOAD();
/* e876fa: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* e876fd: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e87701: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e87703: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* e87707: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e87708: mov eax, dword ptr [edx + ecx] */
  eax = R32((uint32_t)(edx + ecx));
/* e8770b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8770c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e8770d: add ebx, 0x84 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* e87713: call 0xe88b60 */
  esp -= 4; W32(esp, 0xe87718u); SPILL(); f_e88b60(); if (g_unwind) return; RELOAD();
/* e87718: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8771b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8771c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e8771d: mov ecx, esi */
  ecx = esi;
/* e8771f: call 0xe87c50 */
  esp -= 4; W32(esp, 0xe87724u); SPILL(); f_e87c50(); if (g_unwind) return; RELOAD();
/* e87724: mov ecx, 2 */
  ecx = 0x2u;
/* e87729: mov eax, 1 */
  eax = 0x1u;
/* e8772e: mov dword ptr [ebx + 0x24], ecx */
  W32((uint32_t)(ebx + 0x24u), ecx);
/* e87731: mov dword ptr [ebx + 0x18], ecx */
  W32((uint32_t)(ebx + 0x18u), ecx);
/* e87734: lea ecx, [esp + 0x12c] */
  ecx = (uint32_t)(esp + 0x12cu);
/* e8773b: mov dword ptr [ebx + 0x20], eax */
  W32((uint32_t)(ebx + 0x20u), eax);
/* e8773e: mov dword ptr [ebx + 0x14], 0x12 */
  W32((uint32_t)(ebx + 0x14u), 0x12u);
/* e87745: mov dword ptr [ebx + 0x2c], eax */
  W32((uint32_t)(ebx + 0x2cu), eax);
/* e87748: call 0xe825e0 */
  esp -= 4; W32(esp, 0xe8774du); SPILL(); f_e825e0(); if (g_unwind) return; RELOAD();
/* e8774d: mov esi, eax */
  esi = eax;
/* e8774f: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e87753: mov ecx, 0x21 */
  ecx = 0x21u;
/* e87758: lea edi, [esp + 0x18] */
  edi = (uint32_t)(esp + 0x18u);
/* e8775c: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e8775e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* e87761: mov edx, dword ptr [ecx + 0x38] */
  edx = R32((uint32_t)(ecx + 0x38u));
/* e87764: lea esi, [eax + edx + 8] */
  esi = (uint32_t)(eax + edx + 0x8u);
/* e87768: mov dword ptr [esp + 0x18], 1 */
  W32((uint32_t)(esp + 0x18u), 0x1u);
/* e87770: mov ecx, 0x10 */
  ecx = 0x10u;
/* e87775: lea edi, [esp + 0x28] */
  edi = (uint32_t)(esp + 0x28u);
/* e87779: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e8777b: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* e8777f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e87780: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* e87784: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e87785: mov byte ptr [esp + 0x70], 8 */
  W8((uint32_t)(esp + 0x70u), 0x8u);
/* e8778a: call 0xe88140 */
  esp -= 4; W32(esp, 0xe8778fu); SPILL(); f_e88140(); if (g_unwind) return; RELOAD();
/* e8778f: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e87793: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e87797: add edx, 0x48 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e8779a: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* e8779e: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* e877a1: mov ecx, dword ptr [edx + 0x3c] */
  ecx = R32((uint32_t)(edx + 0x3cu));
/* e877a4: add ebx, 0x84 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* e877aa: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* e877ab: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e877ad: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* e877b1: mov ecx, 1 */
  ecx = 0x1u;
/* e877b6: jl 0xe876af */
  if ((sf != of)) goto L_e876af;
L_e877bc: /* e877bc: xor eax, eax */
  eax = 0;
/* e877be: mov dword ptr [ebx + 0x20], eax */
  W32((uint32_t)(ebx + 0x20u), eax);
/* e877c1: mov dword ptr [ebx + 0x24], ecx */
  W32((uint32_t)(ebx + 0x24u), ecx);
/* e877c4: mov edx, dword ptr [0xeba050] */
  edx = R32((uint32_t)(0xeba050u));
/* e877ca: mov dword ptr [ebx + 0x14], edx */
  W32((uint32_t)(ebx + 0x14u), edx);
/* e877cd: mov dword ptr [ebx + 0x2c], ecx */
  W32((uint32_t)(ebx + 0x2cu), ecx);
/* e877d0: mov dword ptr [ebx + 0x18], 2 */
  W32((uint32_t)(ebx + 0x18u), 0x2u);
/* e877d7: mov dword ptr [ebx + 0x38], eax */
  W32((uint32_t)(ebx + 0x38u), eax);
/* e877da: mov dword ptr [ebx + 0x40], eax */
  W32((uint32_t)(ebx + 0x40u), eax);
/* e877dd: add ebx, 0x84 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* e877e3: jmp 0xe879e3 */
  goto L_e879e3;
L_e877e8: /* e877e8: mov dword ptr [ebx + 0x20], 2 */
  W32((uint32_t)(ebx + 0x20u), 0x2u);
/* e877ef: mov dword ptr [ebx + 0x24], 0 */
  W32((uint32_t)(ebx + 0x24u), 0x0u);
/* e877f6: mov eax, dword ptr [0xeba050] */
  eax = R32((uint32_t)(0xeba050u));
/* e877fb: mov dword ptr [ebx + 0x14], eax */
  W32((uint32_t)(ebx + 0x14u), eax);
/* e877fe: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* e87801: mov dword ptr [esp + 0x18], 1 */
  W32((uint32_t)(esp + 0x18u), 0x1u);
/* e87809: lea esi, [eax + 8] */
  esi = (uint32_t)(eax + 0x8u);
/* e8780c: mov ecx, 0x10 */
  ecx = 0x10u;
/* e87811: lea edi, [esp + 0x28] */
  edi = (uint32_t)(esp + 0x28u);
/* e87815: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e87817: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* e8781b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8781d: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* e87821: mov byte ptr [esp + 0x6c], 8 */
  W8((uint32_t)(esp + 0x6cu), 0x8u);
/* e87826: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e87828: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e87829: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8782a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e8782b: call 0xe88b60 */
  esp -= 4; W32(esp, 0xe87830u); SPILL(); f_e88b60(); if (g_unwind) return; RELOAD();
/* e87830: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e87833: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e87834: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e87835: mov ecx, esi */
  ecx = esi;
/* e87837: call 0xe87c50 */
  esp -= 4; W32(esp, 0xe8783cu); SPILL(); f_e87c50(); if (g_unwind) return; RELOAD();
/* e8783c: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* e87840: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e87841: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e87842: mov ecx, esi */
  ecx = esi;
/* e87844: call 0xe88140 */
  esp -= 4; W32(esp, 0xe87849u); SPILL(); f_e88140(); if (g_unwind) return; RELOAD();
/* e87849: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* e8784c: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* e8784f: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* e87852: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e87853: add ebx, 0x84 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* e87859: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e8785a: mov ecx, esi */
  ecx = esi;
/* e8785c: call 0xe87c50 */
  esp -= 4; W32(esp, 0xe87861u); SPILL(); f_e87c50(); if (g_unwind) return; RELOAD();
/* e87861: mov eax, 1 */
  eax = 0x1u;
/* e87866: xor ecx, ecx */
  ecx = 0;
/* e87868: mov dword ptr [ebx + 0x20], eax */
  W32((uint32_t)(ebx + 0x20u), eax);
/* e8786b: mov dword ptr [ebx + 0x24], 2 */
  W32((uint32_t)(ebx + 0x24u), 0x2u);
/* e87872: mov dword ptr [ebx + 0x14], 4 */
  W32((uint32_t)(ebx + 0x14u), 0x4u);
/* e87879: cmp dword ptr [edi + 0x3c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x3cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8787c: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* e8787f: lea edx, [esp + 0xa0] */
  edx = (uint32_t)(esp + 0xa0u);
/* e87886: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e87887: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e87888: mov dword ptr [esp + 0xa8], eax */
  W32((uint32_t)(esp + 0xa8u), eax);
/* e8788f: mov byte ptr [esp + 0xf8], 0 */
  W8((uint32_t)(esp + 0xf8u), 0x0u);
/* e87897: lea ecx, [ecx*4 + 1] */
  ecx = (uint32_t)(ecx*4 + 0x1u);
/* e8789e: mov dword ptr [ebx + 0x34], ecx */
  W32((uint32_t)(ebx + 0x34u), ecx);
/* e878a1: mov ecx, esi */
  ecx = esi;
/* e878a3: call 0xe88140 */
  esp -= 4; W32(esp, 0xe878a8u); SPILL(); f_e88140(); if (g_unwind) return; RELOAD();
/* e878a8: mov ecx, dword ptr [edi + 0x3c] */
  ecx = R32((uint32_t)(edi + 0x3cu));
/* e878ab: mov eax, 1 */
  eax = 0x1u;
/* e878b0: add ebx, 0x84 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* e878b6: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e878b8: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* e878bc: jle 0xe879e3 */
  if ((zf || sf != of)) goto L_e879e3;
L_e878c2: /* e878c2: mov dword ptr [esp + 0xc], 0x48 */
  W32((uint32_t)(esp + 0xcu), 0x48u);
/* e878ca: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_e878d0: /* e878d0: mov dword ptr [ebx + 0x20], 2 */
  W32((uint32_t)(ebx + 0x20u), 0x2u);
/* e878d7: mov dword ptr [ebx + 0x24], 0 */
  W32((uint32_t)(ebx + 0x24u), 0x0u);
/* e878de: mov eax, dword ptr [0xeba050] */
  eax = R32((uint32_t)(0xeba050u));
/* e878e3: lea ecx, [esp + 0x12c] */
  ecx = (uint32_t)(esp + 0x12cu);
/* e878ea: mov dword ptr [ebx + 0x14], eax */
  W32((uint32_t)(ebx + 0x14u), eax);
/* e878ed: call 0xe825e0 */
  esp -= 4; W32(esp, 0xe878f2u); SPILL(); f_e825e0(); if (g_unwind) return; RELOAD();
/* e878f2: mov esi, eax */
  esi = eax;
/* e878f4: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e878f8: mov ecx, 0x21 */
  ecx = 0x21u;
/* e878fd: lea edi, [esp + 0x18] */
  edi = (uint32_t)(esp + 0x18u);
/* e87901: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e87903: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* e87906: mov edx, dword ptr [ecx + 0x38] */
  edx = R32((uint32_t)(ecx + 0x38u));
/* e87909: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e8790b: mov dword ptr [esp + 0x18], 1 */
  W32((uint32_t)(esp + 0x18u), 0x1u);
/* e87913: lea esi, [eax + 8] */
  esi = (uint32_t)(eax + 0x8u);
/* e87916: mov ecx, 0x10 */
  ecx = 0x10u;
/* e8791b: lea edi, [esp + 0x28] */
  edi = (uint32_t)(esp + 0x28u);
/* e8791f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e87921: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* e87925: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e87927: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* e8792b: mov byte ptr [esp + 0x6c], 8 */
  W8((uint32_t)(esp + 0x6cu), 0x8u);
/* e87930: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e87932: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e87933: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e87934: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e87935: call 0xe88b60 */
  esp -= 4; W32(esp, 0xe8793au); SPILL(); f_e88b60(); if (g_unwind) return; RELOAD();
/* e8793a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8793d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8793e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e8793f: mov ecx, esi */
  ecx = esi;
/* e87941: call 0xe87c50 */
  esp -= 4; W32(esp, 0xe87946u); SPILL(); f_e87c50(); if (g_unwind) return; RELOAD();
/* e87946: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* e8794a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8794b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e8794c: mov ecx, esi */
  ecx = esi;
/* e8794e: call 0xe88140 */
  esp -= 4; W32(esp, 0xe87953u); SPILL(); f_e88140(); if (g_unwind) return; RELOAD();
/* e87953: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* e87956: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* e87959: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e8795d: mov eax, dword ptr [edx + ecx + 4] */
  eax = R32((uint32_t)(edx + ecx + 0x4u));
/* e87961: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e87962: add ebx, 0x84 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* e87968: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e87969: mov ecx, esi */
  ecx = esi;
/* e8796b: call 0xe87c50 */
  esp -= 4; W32(esp, 0xe87970u); SPILL(); f_e87c50(); if (g_unwind) return; RELOAD();
/* e87970: mov eax, 1 */
  eax = 0x1u;
/* e87975: mov dword ptr [ebx + 0x24], eax */
  W32((uint32_t)(ebx + 0x24u), eax);
/* e87978: mov dword ptr [ebx + 0x20], 2 */
  W32((uint32_t)(ebx + 0x20u), 0x2u);
/* e8797f: mov dword ptr [ebx + 0x1c], 5 */
  W32((uint32_t)(ebx + 0x1cu), 0x5u);
/* e87986: mov dword ptr [ebx + 0x14], 0x19 */
  W32((uint32_t)(ebx + 0x14u), 0x19u);
/* e8798d: mov ecx, dword ptr [edi + 0x3c] */
  ecx = R32((uint32_t)(edi + 0x3cu));
/* e87990: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* e87994: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* e87995: xor edx, edx */
  edx = 0;
/* e87997: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e87999: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* e8799c: mov dword ptr [esp + 0xa0], eax */
  W32((uint32_t)(esp + 0xa0u), eax);
/* e879a3: lea eax, [esp + 0xa0] */
  eax = (uint32_t)(esp + 0xa0u);
/* e879aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e879ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e879ac: mov ecx, esi */
  ecx = esi;
/* e879ae: mov byte ptr [esp + 0xf8], 0 */
  W8((uint32_t)(esp + 0xf8u), 0x0u);
/* e879b6: lea edx, [edx*4 + 1] */
  edx = (uint32_t)(edx*4 + 0x1u);
/* e879bd: mov dword ptr [ebx + 0x34], edx */
  W32((uint32_t)(ebx + 0x34u), edx);
/* e879c0: call 0xe88140 */
  esp -= 4; W32(esp, 0xe879c5u); SPILL(); f_e88140(); if (g_unwind) return; RELOAD();
/* e879c5: add dword ptr [esp + 0xc], 0x48 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu))); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0xcu), r);
  }
/* e879ca: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* e879cd: mov eax, dword ptr [ecx + 0x3c] */
  eax = R32((uint32_t)(ecx + 0x3cu));
/* e879d0: add ebx, 0x84 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* e879d6: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* e879d7: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e879d9: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* e879dd: jl 0xe878d0 */
  if ((sf != of)) goto L_e878d0;
L_e879e3: /* e879e3: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e879e7: mov eax, dword ptr [edx + 0x2b00c] */
  eax = R32((uint32_t)(edx + 0x2b00cu));
/* e879ed: mov ecx, dword ptr [eax + 0x52c] */
  ecx = R32((uint32_t)(eax + 0x52cu));
/* e879f3: sub ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* e879f5: sub ebx, 0x38 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* e879f8: mov eax, 0x3e0f83e1 */
  eax = 0x3e0f83e1u;
/* e879fd: imul ebx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(ebx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* e879ff: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
L_e87a03: /* e87a03: sar edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* e87a06: mov eax, edx */
  eax = edx;
/* e87a08: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* e87a0b: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e87a0d: mov dword ptr [ecx + 0x34], edx */
  W32((uint32_t)(ecx + 0x34u), edx);
L_e87a10: /* e87a10: mov ecx, dword ptr [ebx + 0x2b00c] */
  ecx = R32((uint32_t)(ebx + 0x2b00cu));
/* e87a16: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e87a17: mov eax, 1 */
  eax = 0x1u;
/* e87a1c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e87a1d: mov dword ptr [ecx + 0x54c], eax */
  W32((uint32_t)(ecx + 0x54cu), eax);
/* e87a23: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e87a24: mov esp, ebp */
  esp = ebp;
/* e87a26: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e87a27: ret 0x90 */
  esp += 148; SPILL(); return;
}

void f_e87a30(void) {
  LOAD_REGS();
L_e87a30: /* e87a30: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* e87a34: mov edx, 1 */
  edx = 0x1u;
/* e87a39: mov dword ptr [eax + 0x2c], edx */
  W32((uint32_t)(eax + 0x2cu), edx);
/* e87a3c: mov dword ptr [eax + 0x20], 2 */
  W32((uint32_t)(eax + 0x20u), 0x2u);
/* e87a43: mov dword ptr [eax + 0x24], edx */
  W32((uint32_t)(eax + 0x24u), edx);
/* e87a46: mov dword ptr [eax + 0x18], 2 */
  W32((uint32_t)(eax + 0x18u), 0x2u);
/* e87a4d: mov ecx, dword ptr [ecx + 0x2b00c] */
  ecx = R32((uint32_t)(ecx + 0x2b00cu));
/* e87a53: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e87a54: mov esi, dword ptr [ecx + 0x198] */
  esi = R32((uint32_t)(ecx + 0x198u));
/* e87a5a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e87a5c: je 0xe87a6e */
  if (zf) goto L_e87a6e;
L_e87a5e: /* e87a5e: mov esi, dword ptr [ecx + 0x194] */
  esi = R32((uint32_t)(ecx + 0x194u));
/* e87a64: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e87a66: mov ecx, dword ptr [0xeba050] */
  ecx = R32((uint32_t)(0xeba050u));
/* e87a6c: je 0xe87a73 */
  if (zf) goto L_e87a73;
L_e87a6e: /* e87a6e: mov ecx, 4 */
  ecx = 0x4u;
L_e87a73: /* e87a73: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* e87a76: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e87a7a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* e87a7c: mov ecx, 3 */
  ecx = 0x3u;
/* e87a81: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* e87a84: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* e87a87: mov dword ptr [eax + 0x38], edx */
  W32((uint32_t)(eax + 0x38u), edx);
/* e87a8a: mov dword ptr [eax + 0x40], 0 */
  W32((uint32_t)(eax + 0x40u), 0x0u);
/* e87a91: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e87a92: ret 8 */
  esp += 12; SPILL(); return;
}

void f_e87aa0(void) {
  LOAD_REGS();
L_e87aa0: /* e87aa0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* e87aa4: xor edx, edx */
  edx = 0;
/* e87aa6: mov dword ptr [eax + 0x24], edx */
  W32((uint32_t)(eax + 0x24u), edx);
/* e87aa9: mov dword ptr [eax + 0x30], edx */
  W32((uint32_t)(eax + 0x30u), edx);
/* e87aac: mov ecx, dword ptr [ecx + 0x2b00c] */
  ecx = R32((uint32_t)(ecx + 0x2b00cu));
/* e87ab2: cmp dword ptr [ecx + 0x198], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x198u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e87ab8: je 0xe87acd */
  if (zf) goto L_e87acd;
L_e87aba: /* e87aba: mov ecx, dword ptr [0xeba050] */
  ecx = R32((uint32_t)(0xeba050u));
/* e87ac0: mov dword ptr [eax + 0x18], 4 */
  W32((uint32_t)(eax + 0x18u), 0x4u);
/* e87ac7: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* e87aca: ret 8 */
  esp += 12; SPILL(); return;
L_e87acd: /* e87acd: mov ecx, 4 */
  ecx = 0x4u;
/* e87ad2: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* e87ad5: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* e87ad8: ret 8 */
  esp += 12; SPILL(); return;
}

void f_e87ae0(void) {
  LOAD_REGS();
L_e87ae0: /* e87ae0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* e87ae4: mov dword ptr [eax + 0x20], 0 */
  W32((uint32_t)(eax + 0x20u), 0x0u);
/* e87aeb: mov edx, dword ptr [ecx + 0x2b00c] */
  edx = R32((uint32_t)(ecx + 0x2b00cu));
/* e87af1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e87af2: mov edi, dword ptr [edx + 0x198] */
  edi = R32((uint32_t)(edx + 0x198u));
/* e87af8: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e87afa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e87afb: je 0xe87b01 */
  if (zf) goto L_e87b01;
L_e87afd: /* e87afd: xor edx, edx */
  edx = 0;
/* e87aff: jmp 0xe87b04 */
  goto L_e87b04;
L_e87b01: /* e87b01: mov edx, dword ptr [eax + 0x24] */
  edx = R32((uint32_t)(eax + 0x24u));
L_e87b04: /* e87b04: mov dword ptr [eax + 0x24], edx */
  W32((uint32_t)(eax + 0x24u), edx);
/* e87b07: mov ecx, dword ptr [ecx + 0x2b00c] */
  ecx = R32((uint32_t)(ecx + 0x2b00cu));
/* e87b0d: mov edx, dword ptr [ecx + 0x198] */
  edx = R32((uint32_t)(ecx + 0x198u));
/* e87b13: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  edx = r;
  }
/* e87b15: sbb edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edx = r;
  }
/* e87b17: and edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* e87b1a: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e87b1d: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* e87b20: mov dword ptr [eax + 0x2c], 0 */
  W32((uint32_t)(eax + 0x2cu), 0x0u);
/* e87b27: mov dword ptr [eax + 0x18], 2 */
  W32((uint32_t)(eax + 0x18u), 0x2u);
/* e87b2e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e87b40(void) {
  LOAD_REGS();
L_e87b40: /* e87b40: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* e87b44: mov dword ptr [eax + 0x20], 0 */
  W32((uint32_t)(eax + 0x20u), 0x0u);
/* e87b4b: mov edx, 1 */
  edx = 0x1u;
/* e87b50: mov dword ptr [eax + 0x24], edx */
  W32((uint32_t)(eax + 0x24u), edx);
/* e87b53: mov ecx, dword ptr [ecx + 0x2b00c] */
  ecx = R32((uint32_t)(ecx + 0x2b00cu));
/* e87b59: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e87b5a: mov esi, dword ptr [ecx + 0x198] */
  esi = R32((uint32_t)(ecx + 0x198u));
/* e87b60: mov ecx, dword ptr [0xeba050] */
  ecx = R32((uint32_t)(0xeba050u));
/* e87b66: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e87b68: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e87b69: jne 0xe87b70 */
  if (!zf) goto L_e87b70;
L_e87b6b: /* e87b6b: mov ecx, 4 */
  ecx = 0x4u;
L_e87b70: /* e87b70: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* e87b73: mov dword ptr [eax + 0x30], edx */
  W32((uint32_t)(eax + 0x30u), edx);
/* e87b76: mov dword ptr [eax + 0x18], 3 */
  W32((uint32_t)(eax + 0x18u), 0x3u);
/* e87b7d: ret 8 */
  esp += 12; SPILL(); return;
}

void f_e87b80(void) {
  LOAD_REGS();
L_e87b80: /* e87b80: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* e87b84: mov edx, 3 */
  edx = 0x3u;
/* e87b89: mov dword ptr [eax + 0x2c], 1 */
  W32((uint32_t)(eax + 0x2cu), 0x1u);
/* e87b90: mov dword ptr [eax + 0x30], edx */
  W32((uint32_t)(eax + 0x30u), edx);
/* e87b93: mov dword ptr [eax + 0x20], 1 */
  W32((uint32_t)(eax + 0x20u), 0x1u);
/* e87b9a: mov dword ptr [eax + 0x24], edx */
  W32((uint32_t)(eax + 0x24u), edx);
/* e87b9d: mov dword ptr [eax + 0x18], 4 */
  W32((uint32_t)(eax + 0x18u), 0x4u);
/* e87ba4: mov ecx, dword ptr [ecx + 0x2b00c] */
  ecx = R32((uint32_t)(ecx + 0x2b00cu));
/* e87baa: mov edx, dword ptr [ecx + 0x198] */
  edx = R32((uint32_t)(ecx + 0x198u));
/* e87bb0: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e87bb2: mov ecx, dword ptr [0xeba050] */
  ecx = R32((uint32_t)(0xeba050u));
/* e87bb8: jne 0xe87bbf */
  if (!zf) goto L_e87bbf;
L_e87bba: /* e87bba: mov ecx, 4 */
  ecx = 0x4u;
L_e87bbf: /* e87bbf: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* e87bc2: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* e87bc8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e87bd0(void) {
  LOAD_REGS();
L_e87bd0: /* e87bd0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* e87bd4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e87bd5: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* e87bd9: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e87bdb: mov edx, 2 */
  edx = 0x2u;
/* e87be0: mov dword ptr [eax + 0x2c], 0 */
  W32((uint32_t)(eax + 0x2cu), 0x0u);
/* e87be7: mov dword ptr [eax + 0x20], edx */
  W32((uint32_t)(eax + 0x20u), edx);
/* e87bea: mov dword ptr [eax + 0x24], 0 */
  W32((uint32_t)(eax + 0x24u), 0x0u);
/* e87bf1: mov dword ptr [eax + 0x18], edx */
  W32((uint32_t)(eax + 0x18u), edx);
/* e87bf4: jne 0xe87bff */
  if (!zf) goto L_e87bff;
L_e87bf6: /* e87bf6: mov dword ptr [eax + 0x14], 3 */
  W32((uint32_t)(eax + 0x14u), 0x3u);
/* e87bfd: jmp 0xe87c2c */
  goto L_e87c2c;
L_e87bff: /* e87bff: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e87c00: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* e87c04: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e87c06: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e87c07: jne 0xe87c0e */
  if (!zf) goto L_e87c0e;
L_e87c09: /* e87c09: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* e87c0c: jmp 0xe87c2c */
  goto L_e87c2c;
L_e87c0e: /* e87c0e: mov ecx, dword ptr [ecx + 0x2b00c] */
  ecx = R32((uint32_t)(ecx + 0x2b00cu));
/* e87c14: mov edx, dword ptr [ecx + 0x198] */
  edx = R32((uint32_t)(ecx + 0x198u));
/* e87c1a: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e87c1c: mov ecx, dword ptr [0xeba050] */
  ecx = R32((uint32_t)(0xeba050u));
/* e87c22: jne 0xe87c29 */
  if (!zf) goto L_e87c29;
L_e87c24: /* e87c24: mov ecx, 4 */
  ecx = 0x4u;
L_e87c29: /* e87c29: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
L_e87c2c: /* e87c2c: mov ecx, 1 */
  ecx = 0x1u;
/* e87c31: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* e87c33: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* e87c36: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* e87c39: mov dword ptr [eax + 0x38], ecx */
  W32((uint32_t)(eax + 0x38u), ecx);
/* e87c3c: mov dword ptr [eax + 0x40], 0 */
  W32((uint32_t)(eax + 0x40u), 0x0u);
/* e87c43: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e87c44: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_e87c50(void) {
  LOAD_REGS();
L_e87c50: /* e87c50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e87c51: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* e87c55: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e87c57: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e87c58: mov edi, ecx */
  edi = ecx;
/* e87c5a: je 0xe87d05 */
  if (zf) goto L_e87d05;
L_e87c60: /* e87c60: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* e87c63: mov ecx, dword ptr [eax + 0x13c] */
  ecx = R32((uint32_t)(eax + 0x13cu));
/* e87c69: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* e87c6b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e87c6c: mov eax, dword ptr [eax + 0x138] */
  eax = R32((uint32_t)(eax + 0x138u));
/* e87c72: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e87c73: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e87c74: mov ecx, esi */
  ecx = esi;
/* e87c76: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0xe87c7cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e87c7c: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e87c7e: mov ecx, eax */
  ecx = eax;
/* e87c80: call dword ptr [edx + 0x98] */
  { uint32_t t = R32((uint32_t)(edx + 0x98u)); esp -= 4; W32(esp, 0xe87c86u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e87c86: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e87c87: mov ecx, edi */
  ecx = edi;
/* e87c89: call 0xe909c0 */
  esp -= 4; W32(esp, 0xe87c8eu); SPILL(); f_e909c0(); if (g_unwind) return; RELOAD();
/* e87c8e: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e87c92: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* e87c94: mov edx, dword ptr [eax + 0x30] */
  edx = R32((uint32_t)(eax + 0x30u));
/* e87c97: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e87c99: je 0xe87cc4 */
  if (zf) goto L_e87cc4;
L_e87c9b: /* e87c9b: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* e87c9e: mov edx, dword ptr [eax + 0x4668] */
  edx = R32((uint32_t)(eax + 0x4668u));
/* e87ca4: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* e87ca7: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* e87caa: mov edx, dword ptr [eax + 0x4668] */
  edx = R32((uint32_t)(eax + 0x4668u));
L_e87cb0: /* e87cb0: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
L_e87cb3: /* e87cb3: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* e87cb6: mov edx, dword ptr [eax + 0x4668] */
  edx = R32((uint32_t)(eax + 0x4668u));
/* e87cbc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e87cbd: mov dword ptr [ecx + 0xc], edx */
  W32((uint32_t)(ecx + 0xcu), edx);
/* e87cc0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e87cc1: ret 8 */
  esp += 12; SPILL(); return;
L_e87cc4: /* e87cc4: movzx eax, byte ptr [esi + 0x39] */
  eax = (uint32_t)(R8((uint32_t)(esi + 0x39u)));
/* e87cc8: sub eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* e87ccb: mov edx, 1 */
  edx = 0x1u;
/* e87cd0: je 0xe87cde */
  if (zf) goto L_e87cde;
L_e87cd2: /* e87cd2: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* e87cd3: jne 0xe87ce1 */
  if (!zf) goto L_e87ce1;
L_e87cd5: /* e87cd5: mov dword ptr [ecx + 4], 3 */
  W32((uint32_t)(ecx + 0x4u), 0x3u);
/* e87cdc: jmp 0xe87ce1 */
  goto L_e87ce1;
L_e87cde: /* e87cde: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
L_e87ce1: /* e87ce1: movzx eax, byte ptr [esi + 0x3a] */
  eax = (uint32_t)(R8((uint32_t)(esi + 0x3au)));
/* e87ce5: sub eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* e87ce8: je 0xe87cb0 */
  if (zf) goto L_e87cb0;
L_e87cea: /* e87cea: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* e87ceb: jne 0xe87cb3 */
  if (!zf) goto L_e87cb3;
L_e87ced: /* e87ced: mov dword ptr [ecx + 8], 3 */
  W32((uint32_t)(ecx + 0x8u), 0x3u);
/* e87cf4: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* e87cf7: mov edx, dword ptr [eax + 0x4668] */
  edx = R32((uint32_t)(eax + 0x4668u));
/* e87cfd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e87cfe: mov dword ptr [ecx + 0xc], edx */
  W32((uint32_t)(ecx + 0xcu), edx);
/* e87d01: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e87d02: ret 8 */
  esp += 12; SPILL(); return;
L_e87d05: /* e87d05: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e87d09: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e87d0a: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* e87d10: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e87d11: ret 8 */
  esp += 12; SPILL(); return;
}

void f_e87d20(void) {
  LOAD_REGS();
L_e87d20: /* e87d20: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* e87d24: movzx eax, byte ptr [edx + 0x58] */
  eax = (uint32_t)(R8((uint32_t)(edx + 0x58u)));
/* e87d28: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e87d2b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e87d2c: ja 0xe87f60 */
  if ((!cf && !zf)) goto L_e87f60;
L_e87d32: /* e87d32: jmp dword ptr [eax*4 + 0xe87fc0] */
  switch (R32((uint32_t)(eax*4 + 0xe87fc0u))) {
    case 0xe87d39u: goto L_e87d39;
    case 0xe87d77u: goto L_e87d77;
    case 0xe87db5u: goto L_e87db5;
    case 0xe87de0u: goto L_e87de0;
    case 0xe87e35u: goto L_e87e35;
    case 0xe87e5du: goto L_e87e5d;
    case 0xe87e95u: goto L_e87e95;
    case 0xe87ebdu: goto L_e87ebd;
    case 0xe87ef2u: goto L_e87ef2;
    default: guest_badjump(0xe87d32, R32((uint32_t)(eax*4 + 0xe87fc0u))); return;
  }
L_e87d39: /* e87d39: mov eax, dword ptr [ecx + 0x2b00c] */
  eax = R32((uint32_t)(ecx + 0x2b00cu));
/* e87d3f: mov eax, dword ptr [eax + 0x52c] */
  eax = R32((uint32_t)(eax + 0x52cu));
/* e87d45: mov dword ptr [eax + 0x24], 2 */
  W32((uint32_t)(eax + 0x24u), 0x2u);
/* e87d4c: mov eax, dword ptr [ecx + 0x2b00c] */
  eax = R32((uint32_t)(ecx + 0x2b00cu));
/* e87d52: mov eax, dword ptr [eax + 0x52c] */
  eax = R32((uint32_t)(eax + 0x52cu));
/* e87d58: mov dword ptr [eax + 0x28], 1 */
  W32((uint32_t)(eax + 0x28u), 0x1u);
/* e87d5f: mov eax, dword ptr [ecx + 0x2b00c] */
  eax = R32((uint32_t)(ecx + 0x2b00cu));
/* e87d65: mov eax, dword ptr [eax + 0x52c] */
  eax = R32((uint32_t)(eax + 0x52cu));
/* e87d6b: mov dword ptr [eax + 4], 0 */
  W32((uint32_t)(eax + 0x4u), 0x0u);
/* e87d72: jmp 0xe87f60 */
  goto L_e87f60;
L_e87d77: /* e87d77: mov eax, dword ptr [ecx + 0x2b00c] */
  eax = R32((uint32_t)(ecx + 0x2b00cu));
/* e87d7d: mov eax, dword ptr [eax + 0x52c] */
  eax = R32((uint32_t)(eax + 0x52cu));
/* e87d83: mov dword ptr [eax + 0x24], 5 */
  W32((uint32_t)(eax + 0x24u), 0x5u);
/* e87d8a: mov eax, dword ptr [ecx + 0x2b00c] */
  eax = R32((uint32_t)(ecx + 0x2b00cu));
/* e87d90: mov eax, dword ptr [eax + 0x52c] */
  eax = R32((uint32_t)(eax + 0x52cu));
/* e87d96: mov dword ptr [eax + 0x28], 6 */
  W32((uint32_t)(eax + 0x28u), 0x6u);
/* e87d9d: mov eax, dword ptr [ecx + 0x2b00c] */
  eax = R32((uint32_t)(ecx + 0x2b00cu));
/* e87da3: mov eax, dword ptr [eax + 0x52c] */
  eax = R32((uint32_t)(eax + 0x52cu));
/* e87da9: mov dword ptr [eax + 4], 1 */
  W32((uint32_t)(eax + 0x4u), 0x1u);
/* e87db0: jmp 0xe87f60 */
  goto L_e87f60;
L_e87db5: /* e87db5: mov eax, dword ptr [ecx + 0x2b00c] */
  eax = R32((uint32_t)(ecx + 0x2b00cu));
/* e87dbb: mov eax, dword ptr [eax + 0x52c] */
  eax = R32((uint32_t)(eax + 0x52cu));
/* e87dc1: mov dword ptr [eax + 0x24], 2 */
  W32((uint32_t)(eax + 0x24u), 0x2u);
/* e87dc8: mov eax, dword ptr [ecx + 0x2b00c] */
  eax = R32((uint32_t)(ecx + 0x2b00cu));
/* e87dce: mov eax, dword ptr [eax + 0x52c] */
  eax = R32((uint32_t)(eax + 0x52cu));
/* e87dd4: mov dword ptr [eax + 0x28], 6 */
  W32((uint32_t)(eax + 0x28u), 0x6u);
/* e87ddb: jmp 0xe87f18 */
  goto L_e87f18;
L_e87de0: /* e87de0: mov eax, dword ptr [ecx + 0x2b00c] */
  eax = R32((uint32_t)(ecx + 0x2b00cu));
/* e87de6: mov eax, dword ptr [eax + 0x52c] */
  eax = R32((uint32_t)(eax + 0x52cu));
/* e87dec: mov dword ptr [eax + 0x24], 9 */
  W32((uint32_t)(eax + 0x24u), 0x9u);
/* e87df3: mov eax, dword ptr [ecx + 0x2b00c] */
  eax = R32((uint32_t)(ecx + 0x2b00cu));
/* e87df9: mov eax, dword ptr [eax + 0x52c] */
  eax = R32((uint32_t)(eax + 0x52cu));
/* e87dff: mov dword ptr [eax + 0x28], 3 */
  W32((uint32_t)(eax + 0x28u), 0x3u);
/* e87e06: mov eax, dword ptr [ecx + 0x2b00c] */
  eax = R32((uint32_t)(ecx + 0x2b00cu));
/* e87e0c: mov esi, dword ptr [eax + 0x52c] */
  esi = R32((uint32_t)(eax + 0x52cu));
/* e87e12: mov eax, 1 */
  eax = 0x1u;
/* e87e17: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* e87e1a: mov esi, dword ptr [ecx + 0x2b00c] */
  esi = R32((uint32_t)(ecx + 0x2b00cu));
/* e87e20: mov esi, dword ptr [esi + 0x52c] */
  esi = R32((uint32_t)(esi + 0x52cu));
/* e87e26: mov dword ptr [esi + 0x2c], eax */
  W32((uint32_t)(esi + 0x2cu), eax);
/* e87e29: mov al, 0x7f */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x7fu) & 0xffu);
/* e87e2b: mov byte ptr [esp + 0xb], 0 */
  W8((uint32_t)(esp + 0xbu), 0x0u);
/* e87e30: jmp 0xe87f41 */
  goto L_e87f41;
L_e87e35: /* e87e35: mov eax, dword ptr [ecx + 0x2b00c] */
  eax = R32((uint32_t)(ecx + 0x2b00cu));
/* e87e3b: mov esi, dword ptr [eax + 0x52c] */
  esi = R32((uint32_t)(eax + 0x52cu));
/* e87e41: mov eax, 2 */
  eax = 0x2u;
/* e87e46: mov dword ptr [esi + 0x24], eax */
  W32((uint32_t)(esi + 0x24u), eax);
/* e87e49: mov esi, dword ptr [ecx + 0x2b00c] */
  esi = R32((uint32_t)(ecx + 0x2b00cu));
/* e87e4f: mov esi, dword ptr [esi + 0x52c] */
  esi = R32((uint32_t)(esi + 0x52cu));
/* e87e55: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* e87e58: jmp 0xe87f18 */
  goto L_e87f18;
L_e87e5d: /* e87e5d: mov eax, dword ptr [ecx + 0x2b00c] */
  eax = R32((uint32_t)(ecx + 0x2b00cu));
/* e87e63: mov esi, dword ptr [eax + 0x52c] */
  esi = R32((uint32_t)(eax + 0x52cu));
/* e87e69: mov eax, 1 */
  eax = 0x1u;
/* e87e6e: mov dword ptr [esi + 0x24], eax */
  W32((uint32_t)(esi + 0x24u), eax);
/* e87e71: mov esi, dword ptr [ecx + 0x2b00c] */
  esi = R32((uint32_t)(ecx + 0x2b00cu));
/* e87e77: mov esi, dword ptr [esi + 0x52c] */
  esi = R32((uint32_t)(esi + 0x52cu));
/* e87e7d: mov dword ptr [esi + 0x28], 4 */
  W32((uint32_t)(esi + 0x28u), 0x4u);
/* e87e84: mov esi, dword ptr [ecx + 0x2b00c] */
  esi = R32((uint32_t)(ecx + 0x2b00cu));
/* e87e8a: mov esi, dword ptr [esi + 0x52c] */
  esi = R32((uint32_t)(esi + 0x52cu));
/* e87e90: jmp 0xe87f29 */
  goto L_e87f29;
L_e87e95: /* e87e95: mov eax, dword ptr [ecx + 0x2b00c] */
  eax = R32((uint32_t)(ecx + 0x2b00cu));
/* e87e9b: mov eax, dword ptr [eax + 0x52c] */
  eax = R32((uint32_t)(eax + 0x52cu));
/* e87ea1: mov dword ptr [eax + 0x24], 2 */
  W32((uint32_t)(eax + 0x24u), 0x2u);
/* e87ea8: mov eax, dword ptr [ecx + 0x2b00c] */
  eax = R32((uint32_t)(ecx + 0x2b00cu));
/* e87eae: mov eax, dword ptr [eax + 0x52c] */
  eax = R32((uint32_t)(eax + 0x52cu));
/* e87eb4: mov dword ptr [eax + 0x28], 4 */
  W32((uint32_t)(eax + 0x28u), 0x4u);
/* e87ebb: jmp 0xe87f18 */
  goto L_e87f18;
L_e87ebd: /* e87ebd: mov eax, dword ptr [ecx + 0x2b00c] */
  eax = R32((uint32_t)(ecx + 0x2b00cu));
/* e87ec3: mov esi, dword ptr [eax + 0x52c] */
  esi = R32((uint32_t)(eax + 0x52cu));
/* e87ec9: mov eax, 1 */
  eax = 0x1u;
/* e87ece: mov dword ptr [esi + 0x24], eax */
  W32((uint32_t)(esi + 0x24u), eax);
/* e87ed1: mov esi, dword ptr [ecx + 0x2b00c] */
  esi = R32((uint32_t)(ecx + 0x2b00cu));
/* e87ed7: mov esi, dword ptr [esi + 0x52c] */
  esi = R32((uint32_t)(esi + 0x52cu));
/* e87edd: mov dword ptr [esi + 0x28], 2 */
  W32((uint32_t)(esi + 0x28u), 0x2u);
/* e87ee4: mov esi, dword ptr [ecx + 0x2b00c] */
  esi = R32((uint32_t)(ecx + 0x2b00cu));
/* e87eea: mov esi, dword ptr [esi + 0x52c] */
  esi = R32((uint32_t)(esi + 0x52cu));
/* e87ef0: jmp 0xe87f29 */
  goto L_e87f29;
L_e87ef2: /* e87ef2: mov eax, dword ptr [ecx + 0x2b00c] */
  eax = R32((uint32_t)(ecx + 0x2b00cu));
/* e87ef8: mov eax, dword ptr [eax + 0x52c] */
  eax = R32((uint32_t)(eax + 0x52cu));
/* e87efe: mov dword ptr [eax + 0x24], 5 */
  W32((uint32_t)(eax + 0x24u), 0x5u);
/* e87f05: mov eax, dword ptr [ecx + 0x2b00c] */
  eax = R32((uint32_t)(ecx + 0x2b00cu));
/* e87f0b: mov eax, dword ptr [eax + 0x52c] */
  eax = R32((uint32_t)(eax + 0x52cu));
/* e87f11: mov dword ptr [eax + 0x28], 2 */
  W32((uint32_t)(eax + 0x28u), 0x2u);
L_e87f18: /* e87f18: mov eax, dword ptr [ecx + 0x2b00c] */
  eax = R32((uint32_t)(ecx + 0x2b00cu));
/* e87f1e: mov esi, dword ptr [eax + 0x52c] */
  esi = R32((uint32_t)(eax + 0x52cu));
/* e87f24: mov eax, 1 */
  eax = 0x1u;
L_e87f29: /* e87f29: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* e87f2c: mov esi, dword ptr [ecx + 0x2b00c] */
  esi = R32((uint32_t)(ecx + 0x2b00cu));
/* e87f32: mov esi, dword ptr [esi + 0x52c] */
  esi = R32((uint32_t)(esi + 0x52cu));
/* e87f38: mov dword ptr [esi + 0x2c], eax */
  W32((uint32_t)(esi + 0x2cu), eax);
/* e87f3b: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* e87f3d: mov byte ptr [esp + 0xb], al */
  W8((uint32_t)(esp + 0xbu), (eax & 0xffu));
L_e87f41: /* e87f41: mov byte ptr [esp + 8], al */
  W8((uint32_t)(esp + 0x8u), (eax & 0xffu));
/* e87f45: mov byte ptr [esp + 9], al */
  W8((uint32_t)(esp + 0x9u), (eax & 0xffu));
/* e87f49: mov byte ptr [esp + 0xa], al */
  W8((uint32_t)(esp + 0xau), (eax & 0xffu));
/* e87f4d: mov eax, dword ptr [ecx + 0x2b00c] */
  eax = R32((uint32_t)(ecx + 0x2b00cu));
/* e87f53: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* e87f57: mov eax, dword ptr [eax + 0x52c] */
  eax = R32((uint32_t)(eax + 0x52cu));
/* e87f5d: mov dword ptr [eax + 0x30], esi */
  W32((uint32_t)(eax + 0x30u), esi);
L_e87f60: /* e87f60: mov eax, dword ptr [ecx + 0x2b00c] */
  eax = R32((uint32_t)(ecx + 0x2b00cu));
/* e87f66: mov eax, dword ptr [eax + 0x52c] */
  eax = R32((uint32_t)(eax + 0x52cu));
/* e87f6c: mov esi, dword ptr [edx + 0x5c] */
  esi = R32((uint32_t)(edx + 0x5cu));
/* e87f6f: mov dword ptr [eax + 0x14], esi */
  W32((uint32_t)(eax + 0x14u), esi);
/* e87f72: mov eax, dword ptr [ecx + 0x2b00c] */
  eax = R32((uint32_t)(ecx + 0x2b00cu));
/* e87f78: mov eax, dword ptr [eax + 0x52c] */
  eax = R32((uint32_t)(eax + 0x52cu));
/* e87f7e: mov esi, dword ptr [edx + 0x60] */
  esi = R32((uint32_t)(edx + 0x60u));
/* e87f81: mov dword ptr [eax + 0x10], esi */
  W32((uint32_t)(eax + 0x10u), esi);
/* e87f84: mov eax, dword ptr [ecx + 0x2b00c] */
  eax = R32((uint32_t)(ecx + 0x2b00cu));
/* e87f8a: mov eax, dword ptr [eax + 0x52c] */
  eax = R32((uint32_t)(eax + 0x52cu));
/* e87f90: mov esi, dword ptr [edx + 0x68] */
  esi = R32((uint32_t)(edx + 0x68u));
/* e87f93: mov dword ptr [eax + 0x18], esi */
  W32((uint32_t)(eax + 0x18u), esi);
/* e87f96: mov eax, dword ptr [ecx + 0x2b00c] */
  eax = R32((uint32_t)(ecx + 0x2b00cu));
/* e87f9c: mov eax, dword ptr [eax + 0x52c] */
  eax = R32((uint32_t)(eax + 0x52cu));
/* e87fa2: mov esi, dword ptr [edx + 0x64] */
  esi = R32((uint32_t)(edx + 0x64u));
/* e87fa5: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* e87fa8: mov ecx, dword ptr [ecx + 0x2b00c] */
  ecx = R32((uint32_t)(ecx + 0x2b00cu));
/* e87fae: mov eax, dword ptr [ecx + 0x52c] */
  eax = R32((uint32_t)(ecx + 0x52cu));
/* e87fb4: mov cl, byte ptr [edx + 0x6c] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x6cu))) & 0xffu);
/* e87fb7: mov byte ptr [eax + 0xc], cl */
  W8((uint32_t)(eax + 0xcu), (ecx & 0xffu));
/* e87fba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e87fbb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e87ff0(void) {
  LOAD_REGS();
L_e87ff0: /* e87ff0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* e87ff4: mov dword ptr [eax + 0x2c], 0 */
  W32((uint32_t)(eax + 0x2cu), 0x0u);
/* e87ffb: mov dword ptr [eax + 0x18], 2 */
  W32((uint32_t)(eax + 0x18u), 0x2u);
/* e88002: mov dword ptr [eax + 0x24], 1 */
  W32((uint32_t)(eax + 0x24u), 0x1u);
/* e88009: mov dword ptr [eax + 0x14], 3 */
  W32((uint32_t)(eax + 0x14u), 0x3u);
/* e88010: ret 8 */
  esp += 12; SPILL(); return;
}

void f_e88020(void) {
  LOAD_REGS();
L_e88020: /* e88020: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* e88024: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e88025: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* e88029: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8802a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e8802b: call 0xe87c50 */
  esp -= 4; W32(esp, 0xe88030u); SPILL(); f_e87c50(); if (g_unwind) return; RELOAD();
/* e88030: mov ecx, 1 */
  ecx = 0x1u;
/* e88035: mov eax, 2 */
  eax = 0x2u;
/* e8803a: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* e8803d: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* e88040: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* e88043: mov dword ptr [esi + 0x24], ecx */
  W32((uint32_t)(esi + 0x24u), ecx);
/* e88046: mov dword ptr [esi + 0x14], 0x10 */
  W32((uint32_t)(esi + 0x14u), 0x10u);
/* e8804d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e8804e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_e88060(void) {
  LOAD_REGS();
L_e88060: /* e88060: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* e88064: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e88065: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* e88069: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e8806a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8806b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e8806c: mov edi, ecx */
  edi = ecx;
/* e8806e: call 0xe87c50 */
  esp -= 4; W32(esp, 0xe88073u); SPILL(); f_e87c50(); if (g_unwind) return; RELOAD();
/* e88073: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* e88077: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88079: mov eax, 2 */
  eax = 0x2u;
/* e8807e: mov ecx, 1 */
  ecx = 0x1u;
/* e88083: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* e88086: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* e88089: mov dword ptr [esi + 0x24], eax */
  W32((uint32_t)(esi + 0x24u), eax);
/* e8808c: jne 0xe8809d */
  if (!zf) goto L_e8809d;
L_e8808e: /* e8808e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e8808f: mov dword ptr [esi + 0x20], ecx */
  W32((uint32_t)(esi + 0x20u), ecx);
/* e88092: mov dword ptr [esi + 0x14], 7 */
  W32((uint32_t)(esi + 0x14u), 0x7u);
/* e88099: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e8809a: ret 0x10 */
  esp += 20; SPILL(); return;
L_e8809d: /* e8809d: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* e880a1: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e880a3: je 0xe880bb */
  if (zf) goto L_e880bb;
L_e880a5: /* e880a5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e880a6: mov dword ptr [esi + 0x20], 3 */
  W32((uint32_t)(esi + 0x20u), 0x3u);
/* e880ad: mov dword ptr [esi + 0x1c], ecx */
  W32((uint32_t)(esi + 0x1cu), ecx);
/* e880b0: mov dword ptr [esi + 0x14], 0x19 */
  W32((uint32_t)(esi + 0x14u), 0x19u);
/* e880b7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e880b8: ret 0x10 */
  esp += 20; SPILL(); return;
L_e880bb: /* e880bb: mov dword ptr [esi + 0x20], ecx */
  W32((uint32_t)(esi + 0x20u), ecx);
/* e880be: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* e880c1: test dword ptr [ecx + 0x41dc], 0x20000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x41dcu))); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e880cb: je 0xe880d9 */
  if (zf) goto L_e880d9;
L_e880cd: /* e880cd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e880ce: mov dword ptr [esi + 0x14], 0x12 */
  W32((uint32_t)(esi + 0x14u), 0x12u);
/* e880d5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e880d6: ret 0x10 */
  esp += 20; SPILL(); return;
L_e880d9: /* e880d9: mov edx, dword ptr [0xeba050] */
  edx = R32((uint32_t)(0xeba050u));
/* e880df: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e880e0: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* e880e3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e880e4: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_e880f0(void) {
  LOAD_REGS();
L_e880f0: /* e880f0: xor eax, eax */
  eax = 0;
/* e880f2: ret  */
  esp += 4; SPILL(); return;
}

void f_e88100(void) {
  LOAD_REGS();
L_e88100: /* e88100: mov eax, 1 */
  eax = 0x1u;
/* e88105: ret  */
  esp += 4; SPILL(); return;
}

void f_e88110(void) {
  LOAD_REGS();
L_e88110: /* e88110: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* e88114: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88116: je 0xe8813b */
  if (zf) goto L_e8813b;
L_e88118: /* e88118: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* e8811b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8811d: mov edx, dword ptr [0xeae274] */
  edx = R32((uint32_t)(0xeae274u));
/* e88123: je 0xe88130 */
  if (zf) goto L_e88130;
L_e88125: /* e88125: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e88127: je 0xe8813d */
  if (zf) goto L_e8813d;
L_e88129: /* e88129: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* e8812c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8812e: jne 0xe88125 */
  if (!zf) goto L_e88125;
L_e88130: /* e88130: xor ecx, ecx */
  ecx = 0;
/* e88132: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88134: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e88137: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88139: jne 0xe8813d */
  if (!zf) goto L_e8813d;
L_e8813b: /* e8813b: xor eax, eax */
  eax = 0;
L_e8813d: /* e8813d: ret  */
  esp += 4; SPILL(); return;
}

void f_e88140(void) {
  LOAD_REGS();
L_e88140: /* e88140: sub esp, 0x80 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e88146: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e88147: mov esi, dword ptr [esp + 0x8c] */
  esi = R32((uint32_t)(esp + 0x8cu));
/* e8814e: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e88151: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e88152: mov edi, ecx */
  edi = ecx;
/* e88154: je 0xe883ef */
  if (zf) goto L_e883ef;
L_e8815a: /* e8815a: movzx ecx, byte ptr [esi + 0x51] */
  ecx = (uint32_t)(R8((uint32_t)(esi + 0x51u)));
/* e8815e: mov eax, ecx */
  eax = ecx;
/* e88160: sub eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* e88163: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e88164: mov ebx, dword ptr [esp + 0x90] */
  ebx = R32((uint32_t)(esp + 0x90u));
/* e8816b: je 0xe8819e */
  if (zf) goto L_e8819e;
L_e8816d: /* e8816d: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* e8816e: je 0xe88195 */
  if (zf) goto L_e88195;
L_e88170: /* e88170: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* e88171: je 0xe8818c */
  if (zf) goto L_e8818c;
L_e88173: /* e88173: mov eax, dword ptr [0xeae020] */
  eax = R32((uint32_t)(0xeae020u));
/* e88178: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e88179: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8817b: push 0xeae4f0 */
  { uint32_t v = 0xeae4f0u; esp -= 4; W32(esp, v); }
/* e88180: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e88181: call dword ptr [0xeae0b4] */
  esp -= 4; W32(esp, 0xe88187u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* e88187: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8818a: jmp 0xe881a5 */
  goto L_e881a5;
L_e8818c: /* e8818c: mov dword ptr [ebx + 0x3c], 4 */
  W32((uint32_t)(ebx + 0x3cu), 0x4u);
/* e88193: jmp 0xe881a5 */
  goto L_e881a5;
L_e88195: /* e88195: mov dword ptr [ebx + 0x3c], 3 */
  W32((uint32_t)(ebx + 0x3cu), 0x3u);
/* e8819c: jmp 0xe881a5 */
  goto L_e881a5;
L_e8819e: /* e8819e: mov dword ptr [ebx + 0x3c], 2 */
  W32((uint32_t)(ebx + 0x3cu), 0x2u);
L_e881a5: /* e881a5: mov eax, dword ptr [esi + 0x54] */
  eax = R32((uint32_t)(esi + 0x54u));
/* e881a8: xor ecx, ecx */
  ecx = 0;
/* e881aa: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e881ac: je 0xe881b5 */
  if (zf) goto L_e881b5;
L_e881ae: /* e881ae: or dword ptr [ebx + 0x3c], 0x100 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x3cu))); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebx + 0x3cu), r);
  }
L_e881b5: /* e881b5: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* e881b8: cmp dword ptr [edx + 0x64], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x64u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e881bb: je 0xe881d8 */
  if (zf) goto L_e881d8;
L_e881bd: /* e881bd: mov al, byte ptr [esi + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x50u))) & 0xffu);
/* e881c0: cmp al, 0xa */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xau);
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* e881c2: jb 0xe881cc */
  if (cf) goto L_e881cc;
L_e881c4: /* e881c4: cmp al, 0xb */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xbu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e881c6: ja 0xe881cc */
  if ((!cf && !zf)) goto L_e881cc;
L_e881c8: /* e881c8: mov byte ptr [esi + 0x50], 8 */
  W8((uint32_t)(esi + 0x50u), 0x8u);
L_e881cc: /* e881cc: cmp dword ptr [esi + 0x54], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x54u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e881cf: jne 0xe881d8 */
  if (!zf) goto L_e881d8;
L_e881d1: /* e881d1: mov dword ptr [ebx + 0x3c], 2 */
  W32((uint32_t)(ebx + 0x3cu), 0x2u);
L_e881d8: /* e881d8: movzx eax, byte ptr [esi + 0x50] */
  eax = (uint32_t)(R8((uint32_t)(esi + 0x50u)));
/* e881dc: cmp eax, 0xd */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e881df: ja 0xe883d6 */
  if ((!cf && !zf)) goto L_e883d6;
L_e881e5: /* e881e5: movzx edx, byte ptr [eax + 0xe88418] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0xe88418u)));
/* e881ec: jmp dword ptr [edx*4 + 0xe883fc] */
  switch (R32((uint32_t)(edx*4 + 0xe883fcu))) {
    case 0xe881f3u: goto L_e881f3;
    case 0xe88205u: goto L_e88205;
    case 0xe88253u: goto L_e88253;
    case 0xe882bcu: goto L_e882bc;
    case 0xe88310u: goto L_e88310;
    case 0xe88383u: goto L_e88383;
    case 0xe883d6u: goto L_e883d6;
    default: guest_badjump(0xe881ec, R32((uint32_t)(edx*4 + 0xe883fcu))); return;
  }
L_e881f3: /* e881f3: mov dword ptr [ebx + 0x38], ecx */
  W32((uint32_t)(ebx + 0x38u), ecx);
/* e881f6: mov dword ptr [ebx + 0x40], ecx */
  W32((uint32_t)(ebx + 0x40u), ecx);
/* e881f9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e881fa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e881fb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e881fc: add esp, 0x80 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e88202: ret 8 */
  esp += 12; SPILL(); return;
L_e88205: /* e88205: mov dword ptr [ebx + 0x38], eax */
  W32((uint32_t)(ebx + 0x38u), eax);
/* e88208: cmp dword ptr [esi + 0x54], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x54u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8820b: jne 0xe88233 */
  if (!zf) goto L_e88233;
L_e8820d: /* e8820d: mov eax, dword ptr [0xeae0a0] */
  eax = R32((uint32_t)(0xeae0a0u));
/* e88212: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e88213: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* e88216: call dword ptr [0xeae0b0] */
  esp -= 4; W32(esp, 0xe8821cu); SPILL(); f_4e4070(); if (g_unwind) return; /* Core!??8FMatrix@@QBEHAAV0@@Z */ RELOAD();
/* e8821c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8821e: je 0xe88233 */
  if (zf) goto L_e88233;
L_e88220: /* e88220: mov dword ptr [ebx + 0x40], 0 */
  W32((uint32_t)(ebx + 0x40u), 0x0u);
/* e88227: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e88228: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e88229: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e8822a: add esp, 0x80 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e88230: ret 8 */
  esp += 12; SPILL(); return;
L_e88233: /* e88233: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e88236: lea edi, [ebx + 0x44] */
  edi = (uint32_t)(ebx + 0x44u);
/* e88239: mov ecx, 0x10 */
  ecx = 0x10u;
/* e8823e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e88240: mov dword ptr [ebx + 0x40], 1 */
  W32((uint32_t)(ebx + 0x40u), 0x1u);
/* e88247: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e88248: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e88249: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e8824a: add esp, 0x80 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e88250: ret 8 */
  esp += 12; SPILL(); return;
L_e88253: /* e88253: mov edx, dword ptr [edi + 0x2b00c] */
  edx = R32((uint32_t)(edi + 0x2b00cu));
/* e88259: add edx, 0x78 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e8825c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8825d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8825e: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* e88262: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e88263: call 0xe9c430 */
  esp -= 4; W32(esp, 0xe88268u); SPILL(); f_e9c430(); if (g_unwind) return; RELOAD();
/* e88268: mov ecx, dword ptr [0xeae0a0] */
  ecx = R32((uint32_t)(0xeae0a0u));
/* e8826e: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e88271: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e88272: mov ecx, esi */
  ecx = esi;
/* e88274: call dword ptr [0xeae0b0] */
  esp -= 4; W32(esp, 0xe8827au); SPILL(); f_4e4070(); if (g_unwind) return; /* Core!??8FMatrix@@QBEHAAV0@@Z */ RELOAD();
/* e8827a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8827c: jne 0xe88294 */
  if (!zf) goto L_e88294;
L_e8827e: /* e8827e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e8827f: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* e88283: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e88284: lea eax, [esp + 0x54] */
  eax = (uint32_t)(esp + 0x54u);
/* e88288: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e88289: call 0xe9bf24 */
  esp -= 4; W32(esp, 0xe8828eu); SPILL(); f_e9bf24(); if (g_unwind) return; RELOAD();
/* e8828e: lea esi, [esp + 0x4c] */
  esi = (uint32_t)(esp + 0x4cu);
/* e88292: jmp 0xe88298 */
  goto L_e88298;
L_e88294: /* e88294: lea esi, [esp + 0xc] */
  esi = (uint32_t)(esp + 0xcu);
L_e88298: /* e88298: lea edi, [ebx + 0x44] */
  edi = (uint32_t)(ebx + 0x44u);
/* e8829b: mov ecx, 0x10 */
  ecx = 0x10u;
/* e882a0: mov dword ptr [ebx + 0x40], 1 */
  W32((uint32_t)(ebx + 0x40u), 0x1u);
/* e882a7: mov dword ptr [ebx + 0x38], 0x20000 */
  W32((uint32_t)(ebx + 0x38u), 0x20000u);
/* e882ae: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e882af: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e882b1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e882b2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e882b3: add esp, 0x80 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e882b9: ret 8 */
  esp += 12; SPILL(); return;
L_e882bc: /* e882bc: mov ecx, dword ptr [0xeae0a0] */
  ecx = R32((uint32_t)(0xeae0a0u));
/* e882c2: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e882c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e882c6: mov ecx, esi */
  ecx = esi;
/* e882c8: call dword ptr [0xeae0b0] */
  esp -= 4; W32(esp, 0xe882ceu); SPILL(); f_4e4070(); if (g_unwind) return; /* Core!??8FMatrix@@QBEHAAV0@@Z */ RELOAD();
/* e882ce: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e882d0: jne 0xe882f6 */
  if (!zf) goto L_e882f6;
L_e882d2: /* e882d2: lea edi, [ebx + 0x44] */
  edi = (uint32_t)(ebx + 0x44u);
/* e882d5: mov ecx, 0x10 */
  ecx = 0x10u;
/* e882da: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e882dc: mov dword ptr [ebx + 0x40], 1 */
  W32((uint32_t)(ebx + 0x40u), 0x1u);
/* e882e3: mov dword ptr [ebx + 0x38], 0x20000 */
  W32((uint32_t)(ebx + 0x38u), 0x20000u);
/* e882ea: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e882eb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e882ec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e882ed: add esp, 0x80 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e882f3: ret 8 */
  esp += 12; SPILL(); return;
L_e882f6: /* e882f6: mov dword ptr [ebx + 0x40], 0 */
  W32((uint32_t)(ebx + 0x40u), 0x0u);
/* e882fd: mov dword ptr [ebx + 0x38], 0x20000 */
  W32((uint32_t)(ebx + 0x38u), 0x20000u);
/* e88304: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e88305: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e88306: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e88307: add esp, 0x80 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8830d: ret 8 */
  esp += 12; SPILL(); return;
L_e88310: /* e88310: mov edx, dword ptr [0xeae0a0] */
  edx = R32((uint32_t)(0xeae0a0u));
/* e88316: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e88319: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8831a: mov ecx, esi */
  ecx = esi;
/* e8831c: call dword ptr [0xeae0b0] */
  esp -= 4; W32(esp, 0xe88322u); SPILL(); f_4e4070(); if (g_unwind) return; /* Core!??8FMatrix@@QBEHAAV0@@Z */ RELOAD();
/* e88322: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88324: jne 0xe88347 */
  if (!zf) goto L_e88347;
L_e88326: /* e88326: mov eax, dword ptr [edi + 0x2b00c] */
  eax = R32((uint32_t)(edi + 0x2b00cu));
/* e8832c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e8832d: add eax, 0x78 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e88330: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e88331: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* e88335: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e88336: call 0xe9bf24 */
  esp -= 4; W32(esp, 0xe8833bu); SPILL(); f_e9bf24(); if (g_unwind) return; RELOAD();
/* e8833b: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* e8833f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e88340: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* e88344: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e88345: jmp 0xe88356 */
  goto L_e88356;
L_e88347: /* e88347: mov ecx, dword ptr [edi + 0x2b00c] */
  ecx = R32((uint32_t)(edi + 0x2b00cu));
/* e8834d: add ecx, 0x78 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e88350: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e88351: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* e88355: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
L_e88356: /* e88356: call 0xe9c16d */
  esp -= 4; W32(esp, 0xe8835bu); SPILL(); f_e9c16d(); if (g_unwind) return; RELOAD();
/* e8835b: lea edi, [ebx + 0x44] */
  edi = (uint32_t)(ebx + 0x44u);
/* e8835e: mov ecx, 0x10 */
  ecx = 0x10u;
/* e88363: lea esi, [esp + 0xc] */
  esi = (uint32_t)(esp + 0xcu);
/* e88367: mov dword ptr [ebx + 0x40], 1 */
  W32((uint32_t)(ebx + 0x40u), 0x1u);
/* e8836e: mov dword ptr [ebx + 0x38], 0x30000 */
  W32((uint32_t)(ebx + 0x38u), 0x30000u);
/* e88375: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e88376: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e88378: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e88379: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e8837a: add esp, 0x80 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e88380: ret 8 */
  esp += 12; SPILL(); return;
L_e88383: /* e88383: mov eax, dword ptr [0xeae0a0] */
  eax = R32((uint32_t)(0xeae0a0u));
/* e88388: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e8838b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8838c: mov ecx, esi */
  ecx = esi;
/* e8838e: call dword ptr [0xeae0b0] */
  esp -= 4; W32(esp, 0xe88394u); SPILL(); f_4e4070(); if (g_unwind) return; /* Core!??8FMatrix@@QBEHAAV0@@Z */ RELOAD();
/* e88394: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88396: jne 0xe883bc */
  if (!zf) goto L_e883bc;
L_e88398: /* e88398: lea edi, [ebx + 0x44] */
  edi = (uint32_t)(ebx + 0x44u);
/* e8839b: mov ecx, 0x10 */
  ecx = 0x10u;
/* e883a0: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e883a2: mov dword ptr [ebx + 0x40], 1 */
  W32((uint32_t)(ebx + 0x40u), 0x1u);
/* e883a9: mov dword ptr [ebx + 0x38], 0x30000 */
  W32((uint32_t)(ebx + 0x38u), 0x30000u);
/* e883b0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e883b1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e883b2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e883b3: add esp, 0x80 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e883b9: ret 8 */
  esp += 12; SPILL(); return;
L_e883bc: /* e883bc: mov dword ptr [ebx + 0x40], 0 */
  W32((uint32_t)(ebx + 0x40u), 0x0u);
/* e883c3: mov dword ptr [ebx + 0x38], 0x30000 */
  W32((uint32_t)(ebx + 0x38u), 0x30000u);
/* e883ca: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e883cb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e883cc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e883cd: add esp, 0x80 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e883d3: ret 8 */
  esp += 12; SPILL(); return;
L_e883d6: /* e883d6: mov ecx, dword ptr [0xeae020] */
  ecx = R32((uint32_t)(0xeae020u));
/* e883dc: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e883de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e883df: push 0xeae4bc */
  { uint32_t v = 0xeae4bcu; esp -= 4; W32(esp, v); }
/* e883e4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e883e5: call dword ptr [0xeae0b4] */
  esp -= 4; W32(esp, 0xe883ebu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* e883eb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e883ee: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_e883ef: /* e883ef: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e883f0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e883f1: add esp, 0x80 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e883f7: ret 8 */
  esp += 12; SPILL(); return;
}

void f_e88420(void) {
  LOAD_REGS();
L_e88420: /* e88420: add dword ptr [edx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(edx), r);
  }
/* e88422: add eax, dword ptr [esi + eax] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + eax)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e88425: add eax, 0x90909090 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x90909090u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e8842a: nop  */
/* e8842b: nop  */
/* e8842c: nop  */
/* e8842d: nop  */
/* e8842e: nop  */
/* e8842f: nop  */
  SPILL(); f_e88430(); return;
}

void f_e88430(void) {
  LOAD_REGS();
L_e88430: /* e88430: mov eax, ecx */
  eax = ecx;
/* e88432: ret  */
  esp += 4; SPILL(); return;
}

void f_e88440(void) {
  LOAD_REGS();
L_e88440: /* e88440: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e88443: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e88444: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e88445: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e88446: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* e8844a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8844c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e8844d: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* e88451: je 0xe88463 */
  if (zf) goto L_e88463;
L_e88453: /* e88453: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88455: je 0xe88463 */
  if (zf) goto L_e88463;
L_e88457: /* e88457: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* e88459: mov ecx, edi */
  ecx = edi;
/* e8845b: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0xe88461u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e88461: jmp 0xe88465 */
  goto L_e88465;
L_e88463: /* e88463: mov eax, edi */
  eax = edi;
L_e88465: /* e88465: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88467: mov ebp, dword ptr [0xeae270] */
  ebp = R32((uint32_t)(0xeae270u));
/* e8846d: je 0xe88494 */
  if (zf) goto L_e88494;
L_e8846f: /* e8846f: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* e88472: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88474: je 0xe88485 */
  if (zf) goto L_e88485;
L_e88476: /* e88476: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e88478: je 0xe887c6 */
  if (zf) goto L_e887c6;
L_e8847e: /* e8847e: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* e88481: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88483: jne 0xe88476 */
  if (!zf) goto L_e88476;
L_e88485: /* e88485: xor ecx, ecx */
  ecx = 0;
/* e88487: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88489: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e8848c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8848e: jne 0xe887c6 */
  if (!zf) goto L_e887c6;
L_e88494: /* e88494: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88496: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* e8849e: je 0xe884b6 */
  if (zf) goto L_e884b6;
L_e884a0: /* e884a0: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e884a2: je 0xe884b6 */
  if (zf) goto L_e884b6;
L_e884a4: /* e884a4: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* e884a6: mov ecx, edi */
  ecx = edi;
/* e884a8: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0xe884aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e884ae: mov ebp, dword ptr [0xeae270] */
  ebp = R32((uint32_t)(0xeae270u));
/* e884b4: jmp 0xe884b8 */
  goto L_e884b8;
L_e884b6: /* e884b6: mov eax, edi */
  eax = edi;
L_e884b8: /* e884b8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e884ba: je 0xe887c2 */
  if (zf) goto L_e887c2;
L_e884c0: /* e884c0: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* e884c3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e884c5: mov edx, dword ptr [0xeae274] */
  edx = R32((uint32_t)(0xeae274u));
/* e884cb: je 0xe884db */
  if (zf) goto L_e884db;
L_e884cd: /* e884cd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_e884d0: /* e884d0: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e884d2: je 0xe884ea */
  if (zf) goto L_e884ea;
L_e884d4: /* e884d4: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* e884d7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e884d9: jne 0xe884d0 */
  if (!zf) goto L_e884d0;
L_e884db: /* e884db: xor ecx, ecx */
  ecx = 0;
/* e884dd: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e884df: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e884e2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e884e4: je 0xe887c2 */
  if (zf) goto L_e887c2;
L_e884ea: /* e884ea: mov esi, eax */
  esi = eax;
/* e884ec: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e884f0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e884f2: je 0xe88511 */
  if (zf) goto L_e88511;
L_e884f4: /* e884f4: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* e884f7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e884f9: je 0xe88511 */
  if (zf) goto L_e88511;
L_e884fb: /* e884fb: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e884fd: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0xe88503u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e88503: mov ebp, dword ptr [0xeae270] */
  ebp = R32((uint32_t)(0xeae270u));
/* e88509: mov edx, dword ptr [0xeae274] */
  edx = R32((uint32_t)(0xeae274u));
/* e8850f: jmp 0xe88514 */
  goto L_e88514;
L_e88511: /* e88511: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
L_e88514: /* e88514: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88516: je 0xe8853a */
  if (zf) goto L_e8853a;
L_e88518: /* e88518: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* e8851b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8851d: je 0xe8852b */
  if (zf) goto L_e8852b;
L_e8851f: /* e8851f: nop  */
L_e88520: /* e88520: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e88522: je 0xe88536 */
  if (zf) goto L_e88536;
L_e88524: /* e88524: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* e88527: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88529: jne 0xe88520 */
  if (!zf) goto L_e88520;
L_e8852b: /* e8852b: xor ecx, ecx */
  ecx = 0;
/* e8852d: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8852f: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e88532: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88534: je 0xe8853a */
  if (zf) goto L_e8853a;
L_e88536: /* e88536: mov ebx, eax */
  ebx = eax;
/* e88538: jmp 0xe8853c */
  goto L_e8853c;
L_e8853a: /* e8853a: xor ebx, ebx */
  ebx = 0;
L_e8853c: /* e8853c: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e88540: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88542: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* e88546: je 0xe88565 */
  if (zf) goto L_e88565;
L_e88548: /* e88548: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* e8854b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8854d: je 0xe88565 */
  if (zf) goto L_e88565;
L_e8854f: /* e8854f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e88551: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0xe88557u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e88557: mov ebp, dword ptr [0xeae270] */
  ebp = R32((uint32_t)(0xeae270u));
/* e8855d: mov edx, dword ptr [0xeae274] */
  edx = R32((uint32_t)(0xeae274u));
/* e88563: jmp 0xe88568 */
  goto L_e88568;
L_e88565: /* e88565: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
L_e88568: /* e88568: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8856a: je 0xe88591 */
  if (zf) goto L_e88591;
L_e8856c: /* e8856c: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* e8856f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88571: je 0xe88582 */
  if (zf) goto L_e88582;
L_e88573: /* e88573: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e88575: je 0xe884ea */
  if (zf) goto L_e884ea;
L_e8857b: /* e8857b: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* e8857e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88580: jne 0xe88573 */
  if (!zf) goto L_e88573;
L_e88582: /* e88582: xor ecx, ecx */
  ecx = 0;
/* e88584: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88586: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e88589: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8858b: jne 0xe884ea */
  if (!zf) goto L_e884ea;
L_e88591: /* e88591: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88593: je 0xe887c2 */
  if (zf) goto L_e887c2;
L_e88599: /* e88599: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
/* e8859d: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8859f: je 0xe887c2 */
  if (zf) goto L_e887c2;
L_e885a5: /* e885a5: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e885a9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e885ab: mov esi, 1 */
  esi = 0x1u;
/* e885b0: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* e885b4: je 0xe885c6 */
  if (zf) goto L_e885c6;
L_e885b6: /* e885b6: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e885b8: je 0xe885c6 */
  if (zf) goto L_e885c6;
L_e885ba: /* e885ba: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* e885bc: mov ecx, edi */
  ecx = edi;
/* e885be: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0xe885c4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e885c4: jmp 0xe885c8 */
  goto L_e885c8;
L_e885c6: /* e885c6: mov eax, edi */
  eax = edi;
L_e885c8: /* e885c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e885c9: call 0xe88110 */
  esp -= 4; W32(esp, 0xe885ceu); SPILL(); f_e88110(); if (g_unwind) return; RELOAD();
/* e885ce: mov ebp, eax */
  ebp = eax;
/* e885d0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e885d3: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e885d5: je 0xe887c2 */
  if (zf) goto L_e887c2;
L_e885db: /* e885db: jmp 0xe885e0 */
  goto L_e885e0;
L_e885e0: /* e885e0: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* e885e3: mov ecx, ebp */
  ecx = ebp;
/* e885e5: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0xe885ebu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e885eb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e885ed: je 0xe885fa */
  if (zf) goto L_e885fa;
L_e885ef: /* e885ef: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e885f3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e885f5: je 0xe885fa */
  if (zf) goto L_e885fa;
L_e885f7: /* e885f7: mov dword ptr [ebx + 0x78], ebp */
  W32((uint32_t)(ebx + 0x78u), ebp);
L_e885fa: /* e885fa: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* e885fd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e885ff: mov ecx, dword ptr [0xeae278] */
  ecx = R32((uint32_t)(0xeae278u));
/* e88605: je 0xe88612 */
  if (zf) goto L_e88612;
L_e88607: /* e88607: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e88609: je 0xe8861d */
  if (zf) goto L_e8861d;
L_e8860b: /* e8860b: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e8860e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88610: jne 0xe88607 */
  if (!zf) goto L_e88607;
L_e88612: /* e88612: xor eax, eax */
  eax = 0;
/* e88614: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88616: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e88619: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8861b: je 0xe88691 */
  if (zf) goto L_e88691;
L_e8861d: /* e8861d: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* e88621: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* e88624: mov ecx, dword ptr [edx + 0x30] */
  ecx = R32((uint32_t)(edx + 0x30u));
/* e88627: mov edx, dword ptr [ecx + 0xb0] */
  edx = R32((uint32_t)(ecx + 0xb0u));
/* e8862d: mov ecx, dword ptr [edx + 0x3ac] */
  ecx = R32((uint32_t)(edx + 0x3acu));
/* e88633: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* e88636: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e88637: mov ecx, ebp */
  ecx = ebp;
/* e88639: call dword ptr [eax + 0x98] */
  { uint32_t t = R32((uint32_t)(eax + 0x98u)); esp -= 4; W32(esp, 0xe8863fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8863f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88641: je 0xe88665 */
  if (zf) goto L_e88665;
L_e88643: /* e88643: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e88646: mov esi, eax */
  esi = eax;
/* e88648: mov edi, esp */
  edi = esp;
/* e8864a: mov dword ptr [ebx], 1 */
  W32((uint32_t)(ebx), 0x1u);
/* e88650: mov ecx, 0x10 */
  ecx = 0x10u;
/* e88655: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e88657: lea ecx, [ebx + 0x10] */
  ecx = (uint32_t)(ebx + 0x10u);
/* e8865a: call dword ptr [0xeae0b8] */
  esp -= 4; W32(esp, 0xe88660u); SPILL(); f_4e28a6(); if (g_unwind) return; /* Core!??XFMatrix@@QAEXV0@@Z */ RELOAD();
/* e88660: mov esi, 1 */
  esi = 0x1u;
L_e88665: /* e88665: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e88669: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8866b: je 0xe88691 */
  if (zf) goto L_e88691;
L_e8866d: /* e8866d: cmp byte ptr [ebp + 0x3c], 0xd */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x3cu))); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* e88671: je 0xe88691 */
  if (zf) goto L_e88691;
L_e88673: /* e88673: mov dword ptr [ebx], esi */
  W32((uint32_t)(ebx), esi);
/* e88675: mov dl, byte ptr [ebp + 0x3c] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x3cu))) & 0xffu);
/* e88678: mov byte ptr [ebx + 0x50], dl */
  W8((uint32_t)(ebx + 0x50u), (edx & 0xffu));
/* e8867b: mov al, byte ptr [ebp + 0x3d] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x3du))) & 0xffu);
/* e8867e: mov byte ptr [ebx + 0x51], al */
  W8((uint32_t)(ebx + 0x51u), (eax & 0xffu));
/* e88681: mov ecx, dword ptr [ebp + 0x40] */
  ecx = R32((uint32_t)(ebp + 0x40u));
/* e88684: and ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* e88686: mov dword ptr [ebx + 0x54], ecx */
  W32((uint32_t)(ebx + 0x54u), ecx);
/* e88689: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
L_e88691: /* e88691: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* e88694: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88696: mov ecx, dword ptr [0xeae27c] */
  ecx = R32((uint32_t)(0xeae27cu));
/* e8869c: je 0xe886ab */
  if (zf) goto L_e886ab;
L_e8869e: /* e8869e: mov edi, edi */
  edi = edi;
L_e886a0: /* e886a0: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e886a2: je 0xe886b6 */
  if (zf) goto L_e886b6;
L_e886a4: /* e886a4: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e886a7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e886a9: jne 0xe886a0 */
  if (!zf) goto L_e886a0;
L_e886ab: /* e886ab: xor eax, eax */
  eax = 0;
/* e886ad: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e886af: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e886b2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e886b4: je 0xe886ed */
  if (zf) goto L_e886ed;
L_e886b6: /* e886b6: mov dword ptr [ebx + 4], esi */
  W32((uint32_t)(ebx + 0x4u), esi);
/* e886b9: mov dl, byte ptr [ebp + 0x3c] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x3cu))) & 0xffu);
/* e886bc: mov byte ptr [ebx + 0x58], dl */
  W8((uint32_t)(ebx + 0x58u), (edx & 0xffu));
/* e886bf: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* e886c2: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e886c4: mov dword ptr [ebx + 0x5c], eax */
  W32((uint32_t)(ebx + 0x5cu), eax);
/* e886c7: mov ecx, dword ptr [ebp + 0x40] */
  ecx = R32((uint32_t)(ebp + 0x40u));
/* e886ca: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* e886cc: and ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* e886ce: mov dword ptr [ebx + 0x60], ecx */
  W32((uint32_t)(ebx + 0x60u), ecx);
/* e886d1: mov edx, dword ptr [ebp + 0x40] */
  edx = R32((uint32_t)(ebp + 0x40u));
/* e886d4: shr edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* e886d7: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* e886d9: mov dword ptr [ebx + 0x64], edx */
  W32((uint32_t)(ebx + 0x64u), edx);
/* e886dc: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* e886df: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* e886e2: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e886e4: mov dword ptr [ebx + 0x68], eax */
  W32((uint32_t)(ebx + 0x68u), eax);
/* e886e7: mov cl, byte ptr [ebp + 0x44] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x44u))) & 0xffu);
/* e886ea: mov byte ptr [ebx + 0x6c], cl */
  W8((uint32_t)(ebx + 0x6cu), (ecx & 0xffu));
L_e886ed: /* e886ed: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* e886f0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e886f2: mov ecx, dword ptr [0xeae280] */
  ecx = R32((uint32_t)(0xeae280u));
/* e886f8: je 0xe8870b */
  if (zf) goto L_e8870b;
L_e886fa: /* e886fa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_e88700: /* e88700: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e88702: je 0xe88716 */
  if (zf) goto L_e88716;
L_e88704: /* e88704: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e88707: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88709: jne 0xe88700 */
  if (!zf) goto L_e88700;
L_e8870b: /* e8870b: xor eax, eax */
  eax = 0;
/* e8870d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8870f: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e88712: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88714: je 0xe8873b */
  if (zf) goto L_e8873b;
L_e88716: /* e88716: mov edi, dword ptr [ebx + 0x74] */
  edi = R32((uint32_t)(ebx + 0x74u));
/* e88719: mov ecx, dword ptr [ebx + 0x68] */
  ecx = R32((uint32_t)(ebx + 0x68u));
/* e8871c: mov dword ptr [ebx + 8], esi */
  W32((uint32_t)(ebx + 0x8u), esi);
/* e8871f: mov edx, dword ptr [ebp + 0x40] */
  edx = R32((uint32_t)(ebp + 0x40u));
/* e88722: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* e88724: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* e88726: or edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* e88728: mov dword ptr [ebx + 0x74], edi */
  W32((uint32_t)(ebx + 0x74u), edi);
/* e8872b: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* e8872e: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e88730: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* e88732: mov dword ptr [ebx + 0x68], ecx */
  W32((uint32_t)(ebx + 0x68u), ecx);
/* e88735: mov ecx, dword ptr [ebp + 0x3c] */
  ecx = R32((uint32_t)(ebp + 0x3cu));
/* e88738: mov dword ptr [ebx + 0x70], ecx */
  W32((uint32_t)(ebx + 0x70u), ecx);
L_e8873b: /* e8873b: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* e8873e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88740: mov ecx, dword ptr [0xeae284] */
  ecx = R32((uint32_t)(0xeae284u));
/* e88746: je 0xe88753 */
  if (zf) goto L_e88753;
L_e88748: /* e88748: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8874a: je 0xe8875e */
  if (zf) goto L_e8875e;
L_e8874c: /* e8874c: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e8874f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88751: jne 0xe88748 */
  if (!zf) goto L_e88748;
L_e88753: /* e88753: xor eax, eax */
  eax = 0;
/* e88755: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88757: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e8875a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8875c: je 0xe88772 */
  if (zf) goto L_e88772;
L_e8875e: /* e8875e: mov dword ptr [ebx + 0xc], esi */
  W32((uint32_t)(ebx + 0xcu), esi);
/* e88761: mov edx, dword ptr [ebp + 0x3c] */
  edx = R32((uint32_t)(ebp + 0x3cu));
/* e88764: mov dword ptr [ebx + 0x7c], edx */
  W32((uint32_t)(ebx + 0x7cu), edx);
/* e88767: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* e8876a: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e8876c: mov dword ptr [ebx + 0x80], eax */
  W32((uint32_t)(ebx + 0x80u), eax);
L_e88772: /* e88772: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e88776: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88778: je 0xe8878b */
  if (zf) goto L_e8878b;
L_e8877a: /* e8877a: mov ecx, dword ptr [ebp + 0x38] */
  ecx = R32((uint32_t)(ebp + 0x38u));
/* e8877d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8877f: je 0xe8878b */
  if (zf) goto L_e8878b;
L_e88781: /* e88781: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e88783: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0xe88789u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e88789: jmp 0xe8878e */
  goto L_e8878e;
L_e8878b: /* e8878b: mov eax, dword ptr [ebp + 0x38] */
  eax = R32((uint32_t)(ebp + 0x38u));
L_e8878e: /* e8878e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88790: je 0xe887c2 */
  if (zf) goto L_e887c2;
L_e88792: /* e88792: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* e88795: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88797: mov esi, dword ptr [0xeae274] */
  esi = R32((uint32_t)(0xeae274u));
/* e8879d: je 0xe887ab */
  if (zf) goto L_e887ab;
L_e8879f: /* e8879f: nop  */
L_e887a0: /* e887a0: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e887a2: je 0xe887b6 */
  if (zf) goto L_e887b6;
L_e887a4: /* e887a4: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* e887a7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e887a9: jne 0xe887a0 */
  if (!zf) goto L_e887a0;
L_e887ab: /* e887ab: xor ecx, ecx */
  ecx = 0;
/* e887ad: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e887af: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e887b2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e887b4: je 0xe887c2 */
  if (zf) goto L_e887c2;
L_e887b6: /* e887b6: mov ebp, eax */
  ebp = eax;
/* e887b8: mov esi, 1 */
  esi = 0x1u;
/* e887bd: jmp 0xe885e0 */
  goto L_e885e0;
L_e887c2: /* e887c2: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_e887c6: /* e887c6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e887c7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e887c8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e887c9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e887ca: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e887cd: ret  */
  esp += 4; SPILL(); return;
}

void f_e885dd(void) {
  LOAD_REGS();
L_e885dd: /* e885dd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_e885e0: /* e885e0: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* e885e3: mov ecx, ebp */
  ecx = ebp;
/* e885e5: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0xe885ebu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e885eb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e885ed: je 0xe885fa */
  if (zf) goto L_e885fa;
L_e885ef: /* e885ef: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e885f3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e885f5: je 0xe885fa */
  if (zf) goto L_e885fa;
L_e885f7: /* e885f7: mov dword ptr [ebx + 0x78], ebp */
  W32((uint32_t)(ebx + 0x78u), ebp);
L_e885fa: /* e885fa: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* e885fd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e885ff: mov ecx, dword ptr [0xeae278] */
  ecx = R32((uint32_t)(0xeae278u));
/* e88605: je 0xe88612 */
  if (zf) goto L_e88612;
L_e88607: /* e88607: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e88609: je 0xe8861d */
  if (zf) goto L_e8861d;
L_e8860b: /* e8860b: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e8860e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88610: jne 0xe88607 */
  if (!zf) goto L_e88607;
L_e88612: /* e88612: xor eax, eax */
  eax = 0;
/* e88614: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88616: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e88619: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8861b: je 0xe88691 */
  if (zf) goto L_e88691;
L_e8861d: /* e8861d: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* e88621: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* e88624: mov ecx, dword ptr [edx + 0x30] */
  ecx = R32((uint32_t)(edx + 0x30u));
/* e88627: mov edx, dword ptr [ecx + 0xb0] */
  edx = R32((uint32_t)(ecx + 0xb0u));
/* e8862d: mov ecx, dword ptr [edx + 0x3ac] */
  ecx = R32((uint32_t)(edx + 0x3acu));
/* e88633: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* e88636: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e88637: mov ecx, ebp */
  ecx = ebp;
/* e88639: call dword ptr [eax + 0x98] */
  { uint32_t t = R32((uint32_t)(eax + 0x98u)); esp -= 4; W32(esp, 0xe8863fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8863f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88641: je 0xe88665 */
  if (zf) goto L_e88665;
L_e88643: /* e88643: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e88646: mov esi, eax */
  esi = eax;
/* e88648: mov edi, esp */
  edi = esp;
/* e8864a: mov dword ptr [ebx], 1 */
  W32((uint32_t)(ebx), 0x1u);
/* e88650: mov ecx, 0x10 */
  ecx = 0x10u;
/* e88655: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e88657: lea ecx, [ebx + 0x10] */
  ecx = (uint32_t)(ebx + 0x10u);
/* e8865a: call dword ptr [0xeae0b8] */
  esp -= 4; W32(esp, 0xe88660u); SPILL(); f_4e28a6(); if (g_unwind) return; /* Core!??XFMatrix@@QAEXV0@@Z */ RELOAD();
/* e88660: mov esi, 1 */
  esi = 0x1u;
L_e88665: /* e88665: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e88669: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8866b: je 0xe88691 */
  if (zf) goto L_e88691;
L_e8866d: /* e8866d: cmp byte ptr [ebp + 0x3c], 0xd */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x3cu))); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* e88671: je 0xe88691 */
  if (zf) goto L_e88691;
L_e88673: /* e88673: mov dword ptr [ebx], esi */
  W32((uint32_t)(ebx), esi);
/* e88675: mov dl, byte ptr [ebp + 0x3c] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x3cu))) & 0xffu);
/* e88678: mov byte ptr [ebx + 0x50], dl */
  W8((uint32_t)(ebx + 0x50u), (edx & 0xffu));
/* e8867b: mov al, byte ptr [ebp + 0x3d] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x3du))) & 0xffu);
/* e8867e: mov byte ptr [ebx + 0x51], al */
  W8((uint32_t)(ebx + 0x51u), (eax & 0xffu));
/* e88681: mov ecx, dword ptr [ebp + 0x40] */
  ecx = R32((uint32_t)(ebp + 0x40u));
/* e88684: and ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* e88686: mov dword ptr [ebx + 0x54], ecx */
  W32((uint32_t)(ebx + 0x54u), ecx);
/* e88689: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
L_e88691: /* e88691: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* e88694: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88696: mov ecx, dword ptr [0xeae27c] */
  ecx = R32((uint32_t)(0xeae27cu));
/* e8869c: je 0xe886ab */
  if (zf) goto L_e886ab;
L_e8869e: /* e8869e: mov edi, edi */
  edi = edi;
L_e886a0: /* e886a0: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e886a2: je 0xe886b6 */
  if (zf) goto L_e886b6;
L_e886a4: /* e886a4: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e886a7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e886a9: jne 0xe886a0 */
  if (!zf) goto L_e886a0;
L_e886ab: /* e886ab: xor eax, eax */
  eax = 0;
/* e886ad: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e886af: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e886b2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e886b4: je 0xe886ed */
  if (zf) goto L_e886ed;
L_e886b6: /* e886b6: mov dword ptr [ebx + 4], esi */
  W32((uint32_t)(ebx + 0x4u), esi);
/* e886b9: mov dl, byte ptr [ebp + 0x3c] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x3cu))) & 0xffu);
/* e886bc: mov byte ptr [ebx + 0x58], dl */
  W8((uint32_t)(ebx + 0x58u), (edx & 0xffu));
/* e886bf: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* e886c2: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e886c4: mov dword ptr [ebx + 0x5c], eax */
  W32((uint32_t)(ebx + 0x5cu), eax);
/* e886c7: mov ecx, dword ptr [ebp + 0x40] */
  ecx = R32((uint32_t)(ebp + 0x40u));
/* e886ca: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* e886cc: and ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* e886ce: mov dword ptr [ebx + 0x60], ecx */
  W32((uint32_t)(ebx + 0x60u), ecx);
/* e886d1: mov edx, dword ptr [ebp + 0x40] */
  edx = R32((uint32_t)(ebp + 0x40u));
/* e886d4: shr edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* e886d7: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* e886d9: mov dword ptr [ebx + 0x64], edx */
  W32((uint32_t)(ebx + 0x64u), edx);
/* e886dc: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* e886df: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* e886e2: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e886e4: mov dword ptr [ebx + 0x68], eax */
  W32((uint32_t)(ebx + 0x68u), eax);
/* e886e7: mov cl, byte ptr [ebp + 0x44] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x44u))) & 0xffu);
/* e886ea: mov byte ptr [ebx + 0x6c], cl */
  W8((uint32_t)(ebx + 0x6cu), (ecx & 0xffu));
L_e886ed: /* e886ed: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* e886f0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e886f2: mov ecx, dword ptr [0xeae280] */
  ecx = R32((uint32_t)(0xeae280u));
/* e886f8: je 0xe8870b */
  if (zf) goto L_e8870b;
L_e886fa: /* e886fa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_e88700: /* e88700: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e88702: je 0xe88716 */
  if (zf) goto L_e88716;
L_e88704: /* e88704: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e88707: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88709: jne 0xe88700 */
  if (!zf) goto L_e88700;
L_e8870b: /* e8870b: xor eax, eax */
  eax = 0;
/* e8870d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8870f: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e88712: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88714: je 0xe8873b */
  if (zf) goto L_e8873b;
L_e88716: /* e88716: mov edi, dword ptr [ebx + 0x74] */
  edi = R32((uint32_t)(ebx + 0x74u));
/* e88719: mov ecx, dword ptr [ebx + 0x68] */
  ecx = R32((uint32_t)(ebx + 0x68u));
/* e8871c: mov dword ptr [ebx + 8], esi */
  W32((uint32_t)(ebx + 0x8u), esi);
/* e8871f: mov edx, dword ptr [ebp + 0x40] */
  edx = R32((uint32_t)(ebp + 0x40u));
/* e88722: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* e88724: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* e88726: or edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* e88728: mov dword ptr [ebx + 0x74], edi */
  W32((uint32_t)(ebx + 0x74u), edi);
/* e8872b: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* e8872e: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e88730: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* e88732: mov dword ptr [ebx + 0x68], ecx */
  W32((uint32_t)(ebx + 0x68u), ecx);
/* e88735: mov ecx, dword ptr [ebp + 0x3c] */
  ecx = R32((uint32_t)(ebp + 0x3cu));
/* e88738: mov dword ptr [ebx + 0x70], ecx */
  W32((uint32_t)(ebx + 0x70u), ecx);
L_e8873b: /* e8873b: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* e8873e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88740: mov ecx, dword ptr [0xeae284] */
  ecx = R32((uint32_t)(0xeae284u));
/* e88746: je 0xe88753 */
  if (zf) goto L_e88753;
L_e88748: /* e88748: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8874a: je 0xe8875e */
  if (zf) goto L_e8875e;
L_e8874c: /* e8874c: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e8874f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88751: jne 0xe88748 */
  if (!zf) goto L_e88748;
L_e88753: /* e88753: xor eax, eax */
  eax = 0;
/* e88755: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88757: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e8875a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8875c: je 0xe88772 */
  if (zf) goto L_e88772;
L_e8875e: /* e8875e: mov dword ptr [ebx + 0xc], esi */
  W32((uint32_t)(ebx + 0xcu), esi);
/* e88761: mov edx, dword ptr [ebp + 0x3c] */
  edx = R32((uint32_t)(ebp + 0x3cu));
/* e88764: mov dword ptr [ebx + 0x7c], edx */
  W32((uint32_t)(ebx + 0x7cu), edx);
/* e88767: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* e8876a: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e8876c: mov dword ptr [ebx + 0x80], eax */
  W32((uint32_t)(ebx + 0x80u), eax);
L_e88772: /* e88772: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e88776: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88778: je 0xe8878b */
  if (zf) goto L_e8878b;
L_e8877a: /* e8877a: mov ecx, dword ptr [ebp + 0x38] */
  ecx = R32((uint32_t)(ebp + 0x38u));
/* e8877d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8877f: je 0xe8878b */
  if (zf) goto L_e8878b;
L_e88781: /* e88781: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e88783: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0xe88789u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e88789: jmp 0xe8878e */
  goto L_e8878e;
L_e8878b: /* e8878b: mov eax, dword ptr [ebp + 0x38] */
  eax = R32((uint32_t)(ebp + 0x38u));
L_e8878e: /* e8878e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88790: je 0xe887c2 */
  if (zf) goto L_e887c2;
L_e88792: /* e88792: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* e88795: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88797: mov esi, dword ptr [0xeae274] */
  esi = R32((uint32_t)(0xeae274u));
/* e8879d: je 0xe887ab */
  if (zf) goto L_e887ab;
L_e8879f: /* e8879f: nop  */
L_e887a0: /* e887a0: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e887a2: je 0xe887b6 */
  if (zf) goto L_e887b6;
L_e887a4: /* e887a4: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* e887a7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e887a9: jne 0xe887a0 */
  if (!zf) goto L_e887a0;
L_e887ab: /* e887ab: xor ecx, ecx */
  ecx = 0;
/* e887ad: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e887af: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e887b2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e887b4: je 0xe887c2 */
  if (zf) goto L_e887c2;
L_e887b6: /* e887b6: mov ebp, eax */
  ebp = eax;
/* e887b8: mov esi, 1 */
  esi = 0x1u;
/* e887bd: jmp 0xe885e0 */
  goto L_e885e0;
L_e887c2: /* e887c2: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e887c6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e887c7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e887c8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e887c9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e887ca: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e887cd: ret  */
  esp += 4; SPILL(); return;
}

void f_e887d0(void) {
  LOAD_REGS();
L_e887d0: /* e887d0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e887d3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e887d4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e887d5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e887d6: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* e887da: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e887dc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e887dd: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* e887e1: je 0xe887f3 */
  if (zf) goto L_e887f3;
L_e887e3: /* e887e3: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e887e5: je 0xe887f3 */
  if (zf) goto L_e887f3;
L_e887e7: /* e887e7: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* e887e9: mov ecx, edi */
  ecx = edi;
/* e887eb: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0xe887f1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e887f1: jmp 0xe887f5 */
  goto L_e887f5;
L_e887f3: /* e887f3: mov eax, edi */
  eax = edi;
L_e887f5: /* e887f5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e887f7: mov ebp, dword ptr [0xeae288] */
  ebp = R32((uint32_t)(0xeae288u));
/* e887fd: je 0xe88824 */
  if (zf) goto L_e88824;
L_e887ff: /* e887ff: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* e88802: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88804: je 0xe88815 */
  if (zf) goto L_e88815;
L_e88806: /* e88806: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e88808: je 0xe88b56 */
  if (zf) goto L_e88b56;
L_e8880e: /* e8880e: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* e88811: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88813: jne 0xe88806 */
  if (!zf) goto L_e88806;
L_e88815: /* e88815: xor ecx, ecx */
  ecx = 0;
/* e88817: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88819: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e8881c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8881e: jne 0xe88b56 */
  if (!zf) goto L_e88b56;
L_e88824: /* e88824: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88826: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* e8882e: je 0xe88846 */
  if (zf) goto L_e88846;
L_e88830: /* e88830: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88832: je 0xe88846 */
  if (zf) goto L_e88846;
L_e88834: /* e88834: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* e88836: mov ecx, edi */
  ecx = edi;
/* e88838: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0xe8883eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8883e: mov ebp, dword ptr [0xeae288] */
  ebp = R32((uint32_t)(0xeae288u));
/* e88844: jmp 0xe88848 */
  goto L_e88848;
L_e88846: /* e88846: mov eax, edi */
  eax = edi;
L_e88848: /* e88848: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8884a: je 0xe88b52 */
  if (zf) goto L_e88b52;
L_e88850: /* e88850: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* e88853: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88855: mov edx, dword ptr [0xeae274] */
  edx = R32((uint32_t)(0xeae274u));
/* e8885b: je 0xe8886b */
  if (zf) goto L_e8886b;
L_e8885d: /* e8885d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_e88860: /* e88860: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e88862: je 0xe8887a */
  if (zf) goto L_e8887a;
L_e88864: /* e88864: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* e88867: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88869: jne 0xe88860 */
  if (!zf) goto L_e88860;
L_e8886b: /* e8886b: xor ecx, ecx */
  ecx = 0;
/* e8886d: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8886f: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e88872: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88874: je 0xe88b52 */
  if (zf) goto L_e88b52;
L_e8887a: /* e8887a: mov esi, eax */
  esi = eax;
/* e8887c: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e88880: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88882: je 0xe888a1 */
  if (zf) goto L_e888a1;
L_e88884: /* e88884: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* e88887: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88889: je 0xe888a1 */
  if (zf) goto L_e888a1;
L_e8888b: /* e8888b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e8888d: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0xe88893u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e88893: mov ebp, dword ptr [0xeae288] */
  ebp = R32((uint32_t)(0xeae288u));
/* e88899: mov edx, dword ptr [0xeae274] */
  edx = R32((uint32_t)(0xeae274u));
/* e8889f: jmp 0xe888a4 */
  goto L_e888a4;
L_e888a1: /* e888a1: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
L_e888a4: /* e888a4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e888a6: je 0xe888ca */
  if (zf) goto L_e888ca;
L_e888a8: /* e888a8: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* e888ab: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e888ad: je 0xe888bb */
  if (zf) goto L_e888bb;
L_e888af: /* e888af: nop  */
L_e888b0: /* e888b0: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e888b2: je 0xe888c6 */
  if (zf) goto L_e888c6;
L_e888b4: /* e888b4: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* e888b7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e888b9: jne 0xe888b0 */
  if (!zf) goto L_e888b0;
L_e888bb: /* e888bb: xor ecx, ecx */
  ecx = 0;
/* e888bd: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e888bf: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e888c2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e888c4: je 0xe888ca */
  if (zf) goto L_e888ca;
L_e888c6: /* e888c6: mov ebx, eax */
  ebx = eax;
/* e888c8: jmp 0xe888cc */
  goto L_e888cc;
L_e888ca: /* e888ca: xor ebx, ebx */
  ebx = 0;
L_e888cc: /* e888cc: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e888d0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e888d2: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* e888d6: je 0xe888f5 */
  if (zf) goto L_e888f5;
L_e888d8: /* e888d8: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* e888db: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e888dd: je 0xe888f5 */
  if (zf) goto L_e888f5;
L_e888df: /* e888df: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e888e1: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0xe888e7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e888e7: mov ebp, dword ptr [0xeae288] */
  ebp = R32((uint32_t)(0xeae288u));
/* e888ed: mov edx, dword ptr [0xeae274] */
  edx = R32((uint32_t)(0xeae274u));
/* e888f3: jmp 0xe888f8 */
  goto L_e888f8;
L_e888f5: /* e888f5: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
L_e888f8: /* e888f8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e888fa: je 0xe88921 */
  if (zf) goto L_e88921;
L_e888fc: /* e888fc: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* e888ff: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88901: je 0xe88912 */
  if (zf) goto L_e88912;
L_e88903: /* e88903: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e88905: je 0xe8887a */
  if (zf) goto L_e8887a;
L_e8890b: /* e8890b: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* e8890e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88910: jne 0xe88903 */
  if (!zf) goto L_e88903;
L_e88912: /* e88912: xor ecx, ecx */
  ecx = 0;
/* e88914: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88916: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e88919: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8891b: jne 0xe8887a */
  if (!zf) goto L_e8887a;
L_e88921: /* e88921: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88923: je 0xe88b52 */
  if (zf) goto L_e88b52;
L_e88929: /* e88929: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
/* e8892d: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8892f: je 0xe88b52 */
  if (zf) goto L_e88b52;
L_e88935: /* e88935: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e88939: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8893b: mov esi, 1 */
  esi = 0x1u;
/* e88940: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* e88944: je 0xe88956 */
  if (zf) goto L_e88956;
L_e88946: /* e88946: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88948: je 0xe88956 */
  if (zf) goto L_e88956;
L_e8894a: /* e8894a: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* e8894c: mov ecx, edi */
  ecx = edi;
/* e8894e: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0xe88954u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e88954: jmp 0xe88958 */
  goto L_e88958;
L_e88956: /* e88956: mov eax, edi */
  eax = edi;
L_e88958: /* e88958: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e88959: call 0xe88110 */
  esp -= 4; W32(esp, 0xe8895eu); SPILL(); f_e88110(); if (g_unwind) return; RELOAD();
/* e8895e: mov ebp, eax */
  ebp = eax;
/* e88960: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e88963: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88965: je 0xe88b52 */
  if (zf) goto L_e88b52;
L_e8896b: /* e8896b: jmp 0xe88970 */
  goto L_e88970;
L_e88970: /* e88970: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* e88973: mov ecx, ebp */
  ecx = ebp;
/* e88975: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0xe8897bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8897b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8897d: je 0xe8898a */
  if (zf) goto L_e8898a;
L_e8897f: /* e8897f: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e88983: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88985: je 0xe8898a */
  if (zf) goto L_e8898a;
L_e88987: /* e88987: mov dword ptr [ebx + 0x78], ebp */
  W32((uint32_t)(ebx + 0x78u), ebp);
L_e8898a: /* e8898a: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* e8898d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8898f: mov ecx, dword ptr [0xeae278] */
  ecx = R32((uint32_t)(0xeae278u));
/* e88995: je 0xe889a2 */
  if (zf) goto L_e889a2;
L_e88997: /* e88997: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e88999: je 0xe889ad */
  if (zf) goto L_e889ad;
L_e8899b: /* e8899b: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e8899e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e889a0: jne 0xe88997 */
  if (!zf) goto L_e88997;
L_e889a2: /* e889a2: xor eax, eax */
  eax = 0;
/* e889a4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e889a6: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e889a9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e889ab: je 0xe88a21 */
  if (zf) goto L_e88a21;
L_e889ad: /* e889ad: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* e889b1: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* e889b4: mov ecx, dword ptr [edx + 0x30] */
  ecx = R32((uint32_t)(edx + 0x30u));
/* e889b7: mov edx, dword ptr [ecx + 0xb0] */
  edx = R32((uint32_t)(ecx + 0xb0u));
/* e889bd: mov ecx, dword ptr [edx + 0x3ac] */
  ecx = R32((uint32_t)(edx + 0x3acu));
/* e889c3: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* e889c6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e889c7: mov ecx, ebp */
  ecx = ebp;
/* e889c9: call dword ptr [eax + 0x98] */
  { uint32_t t = R32((uint32_t)(eax + 0x98u)); esp -= 4; W32(esp, 0xe889cfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e889cf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e889d1: je 0xe889f5 */
  if (zf) goto L_e889f5;
L_e889d3: /* e889d3: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e889d6: mov esi, eax */
  esi = eax;
/* e889d8: mov edi, esp */
  edi = esp;
/* e889da: mov dword ptr [ebx], 1 */
  W32((uint32_t)(ebx), 0x1u);
/* e889e0: mov ecx, 0x10 */
  ecx = 0x10u;
/* e889e5: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e889e7: lea ecx, [ebx + 0x10] */
  ecx = (uint32_t)(ebx + 0x10u);
/* e889ea: call dword ptr [0xeae0b8] */
  esp -= 4; W32(esp, 0xe889f0u); SPILL(); f_4e28a6(); if (g_unwind) return; /* Core!??XFMatrix@@QAEXV0@@Z */ RELOAD();
/* e889f0: mov esi, 1 */
  esi = 0x1u;
L_e889f5: /* e889f5: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e889f9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e889fb: je 0xe88a21 */
  if (zf) goto L_e88a21;
L_e889fd: /* e889fd: cmp byte ptr [ebp + 0x3c], 0xd */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x3cu))); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* e88a01: je 0xe88a21 */
  if (zf) goto L_e88a21;
L_e88a03: /* e88a03: mov dword ptr [ebx], esi */
  W32((uint32_t)(ebx), esi);
/* e88a05: mov dl, byte ptr [ebp + 0x3c] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x3cu))) & 0xffu);
/* e88a08: mov byte ptr [ebx + 0x50], dl */
  W8((uint32_t)(ebx + 0x50u), (edx & 0xffu));
/* e88a0b: mov al, byte ptr [ebp + 0x3d] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x3du))) & 0xffu);
/* e88a0e: mov byte ptr [ebx + 0x51], al */
  W8((uint32_t)(ebx + 0x51u), (eax & 0xffu));
/* e88a11: mov ecx, dword ptr [ebp + 0x40] */
  ecx = R32((uint32_t)(ebp + 0x40u));
/* e88a14: and ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* e88a16: mov dword ptr [ebx + 0x54], ecx */
  W32((uint32_t)(ebx + 0x54u), ecx);
/* e88a19: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
L_e88a21: /* e88a21: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* e88a24: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88a26: mov ecx, dword ptr [0xeae27c] */
  ecx = R32((uint32_t)(0xeae27cu));
/* e88a2c: je 0xe88a3b */
  if (zf) goto L_e88a3b;
L_e88a2e: /* e88a2e: mov edi, edi */
  edi = edi;
L_e88a30: /* e88a30: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e88a32: je 0xe88a46 */
  if (zf) goto L_e88a46;
L_e88a34: /* e88a34: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e88a37: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88a39: jne 0xe88a30 */
  if (!zf) goto L_e88a30;
L_e88a3b: /* e88a3b: xor eax, eax */
  eax = 0;
/* e88a3d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88a3f: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e88a42: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88a44: je 0xe88a7d */
  if (zf) goto L_e88a7d;
L_e88a46: /* e88a46: mov dword ptr [ebx + 4], esi */
  W32((uint32_t)(ebx + 0x4u), esi);
/* e88a49: mov dl, byte ptr [ebp + 0x3c] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x3cu))) & 0xffu);
/* e88a4c: mov byte ptr [ebx + 0x58], dl */
  W8((uint32_t)(ebx + 0x58u), (edx & 0xffu));
/* e88a4f: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* e88a52: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e88a54: mov dword ptr [ebx + 0x5c], eax */
  W32((uint32_t)(ebx + 0x5cu), eax);
/* e88a57: mov ecx, dword ptr [ebp + 0x40] */
  ecx = R32((uint32_t)(ebp + 0x40u));
/* e88a5a: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* e88a5c: and ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* e88a5e: mov dword ptr [ebx + 0x60], ecx */
  W32((uint32_t)(ebx + 0x60u), ecx);
/* e88a61: mov edx, dword ptr [ebp + 0x40] */
  edx = R32((uint32_t)(ebp + 0x40u));
/* e88a64: shr edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* e88a67: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* e88a69: mov dword ptr [ebx + 0x64], edx */
  W32((uint32_t)(ebx + 0x64u), edx);
/* e88a6c: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* e88a6f: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* e88a72: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e88a74: mov dword ptr [ebx + 0x68], eax */
  W32((uint32_t)(ebx + 0x68u), eax);
/* e88a77: mov cl, byte ptr [ebp + 0x44] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x44u))) & 0xffu);
/* e88a7a: mov byte ptr [ebx + 0x6c], cl */
  W8((uint32_t)(ebx + 0x6cu), (ecx & 0xffu));
L_e88a7d: /* e88a7d: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* e88a80: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88a82: mov ecx, dword ptr [0xeae280] */
  ecx = R32((uint32_t)(0xeae280u));
/* e88a88: je 0xe88a9b */
  if (zf) goto L_e88a9b;
L_e88a8a: /* e88a8a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_e88a90: /* e88a90: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e88a92: je 0xe88aa6 */
  if (zf) goto L_e88aa6;
L_e88a94: /* e88a94: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e88a97: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88a99: jne 0xe88a90 */
  if (!zf) goto L_e88a90;
L_e88a9b: /* e88a9b: xor eax, eax */
  eax = 0;
/* e88a9d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88a9f: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e88aa2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88aa4: je 0xe88acb */
  if (zf) goto L_e88acb;
L_e88aa6: /* e88aa6: mov edi, dword ptr [ebx + 0x74] */
  edi = R32((uint32_t)(ebx + 0x74u));
/* e88aa9: mov ecx, dword ptr [ebx + 0x68] */
  ecx = R32((uint32_t)(ebx + 0x68u));
/* e88aac: mov dword ptr [ebx + 8], esi */
  W32((uint32_t)(ebx + 0x8u), esi);
/* e88aaf: mov edx, dword ptr [ebp + 0x40] */
  edx = R32((uint32_t)(ebp + 0x40u));
/* e88ab2: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* e88ab4: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* e88ab6: or edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* e88ab8: mov dword ptr [ebx + 0x74], edi */
  W32((uint32_t)(ebx + 0x74u), edi);
/* e88abb: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* e88abe: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e88ac0: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* e88ac2: mov dword ptr [ebx + 0x68], ecx */
  W32((uint32_t)(ebx + 0x68u), ecx);
/* e88ac5: mov ecx, dword ptr [ebp + 0x3c] */
  ecx = R32((uint32_t)(ebp + 0x3cu));
/* e88ac8: mov dword ptr [ebx + 0x70], ecx */
  W32((uint32_t)(ebx + 0x70u), ecx);
L_e88acb: /* e88acb: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* e88ace: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88ad0: mov ecx, dword ptr [0xeae284] */
  ecx = R32((uint32_t)(0xeae284u));
/* e88ad6: je 0xe88ae3 */
  if (zf) goto L_e88ae3;
L_e88ad8: /* e88ad8: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e88ada: je 0xe88aee */
  if (zf) goto L_e88aee;
L_e88adc: /* e88adc: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e88adf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88ae1: jne 0xe88ad8 */
  if (!zf) goto L_e88ad8;
L_e88ae3: /* e88ae3: xor eax, eax */
  eax = 0;
/* e88ae5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88ae7: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e88aea: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88aec: je 0xe88b02 */
  if (zf) goto L_e88b02;
L_e88aee: /* e88aee: mov dword ptr [ebx + 0xc], esi */
  W32((uint32_t)(ebx + 0xcu), esi);
/* e88af1: mov edx, dword ptr [ebp + 0x3c] */
  edx = R32((uint32_t)(ebp + 0x3cu));
/* e88af4: mov dword ptr [ebx + 0x7c], edx */
  W32((uint32_t)(ebx + 0x7cu), edx);
/* e88af7: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* e88afa: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e88afc: mov dword ptr [ebx + 0x80], eax */
  W32((uint32_t)(ebx + 0x80u), eax);
L_e88b02: /* e88b02: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e88b06: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88b08: je 0xe88b1b */
  if (zf) goto L_e88b1b;
L_e88b0a: /* e88b0a: mov ecx, dword ptr [ebp + 0x38] */
  ecx = R32((uint32_t)(ebp + 0x38u));
/* e88b0d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88b0f: je 0xe88b1b */
  if (zf) goto L_e88b1b;
L_e88b11: /* e88b11: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e88b13: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0xe88b19u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e88b19: jmp 0xe88b1e */
  goto L_e88b1e;
L_e88b1b: /* e88b1b: mov eax, dword ptr [ebp + 0x38] */
  eax = R32((uint32_t)(ebp + 0x38u));
L_e88b1e: /* e88b1e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88b20: je 0xe88b52 */
  if (zf) goto L_e88b52;
L_e88b22: /* e88b22: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* e88b25: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88b27: mov esi, dword ptr [0xeae274] */
  esi = R32((uint32_t)(0xeae274u));
/* e88b2d: je 0xe88b3b */
  if (zf) goto L_e88b3b;
L_e88b2f: /* e88b2f: nop  */
L_e88b30: /* e88b30: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e88b32: je 0xe88b46 */
  if (zf) goto L_e88b46;
L_e88b34: /* e88b34: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* e88b37: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88b39: jne 0xe88b30 */
  if (!zf) goto L_e88b30;
L_e88b3b: /* e88b3b: xor ecx, ecx */
  ecx = 0;
/* e88b3d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88b3f: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e88b42: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88b44: je 0xe88b52 */
  if (zf) goto L_e88b52;
L_e88b46: /* e88b46: mov ebp, eax */
  ebp = eax;
/* e88b48: mov esi, 1 */
  esi = 0x1u;
/* e88b4d: jmp 0xe88970 */
  goto L_e88970;
L_e88b52: /* e88b52: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_e88b56: /* e88b56: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e88b57: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e88b58: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e88b59: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e88b5a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e88b5d: ret  */
  esp += 4; SPILL(); return;
}

void f_e8896d(void) {
  LOAD_REGS();
L_e8896d: /* e8896d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_e88970: /* e88970: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* e88973: mov ecx, ebp */
  ecx = ebp;
/* e88975: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0xe8897bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8897b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8897d: je 0xe8898a */
  if (zf) goto L_e8898a;
L_e8897f: /* e8897f: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e88983: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88985: je 0xe8898a */
  if (zf) goto L_e8898a;
L_e88987: /* e88987: mov dword ptr [ebx + 0x78], ebp */
  W32((uint32_t)(ebx + 0x78u), ebp);
L_e8898a: /* e8898a: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* e8898d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8898f: mov ecx, dword ptr [0xeae278] */
  ecx = R32((uint32_t)(0xeae278u));
/* e88995: je 0xe889a2 */
  if (zf) goto L_e889a2;
L_e88997: /* e88997: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e88999: je 0xe889ad */
  if (zf) goto L_e889ad;
L_e8899b: /* e8899b: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e8899e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e889a0: jne 0xe88997 */
  if (!zf) goto L_e88997;
L_e889a2: /* e889a2: xor eax, eax */
  eax = 0;
/* e889a4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e889a6: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e889a9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e889ab: je 0xe88a21 */
  if (zf) goto L_e88a21;
L_e889ad: /* e889ad: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* e889b1: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* e889b4: mov ecx, dword ptr [edx + 0x30] */
  ecx = R32((uint32_t)(edx + 0x30u));
/* e889b7: mov edx, dword ptr [ecx + 0xb0] */
  edx = R32((uint32_t)(ecx + 0xb0u));
/* e889bd: mov ecx, dword ptr [edx + 0x3ac] */
  ecx = R32((uint32_t)(edx + 0x3acu));
/* e889c3: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* e889c6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e889c7: mov ecx, ebp */
  ecx = ebp;
/* e889c9: call dword ptr [eax + 0x98] */
  { uint32_t t = R32((uint32_t)(eax + 0x98u)); esp -= 4; W32(esp, 0xe889cfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e889cf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e889d1: je 0xe889f5 */
  if (zf) goto L_e889f5;
L_e889d3: /* e889d3: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e889d6: mov esi, eax */
  esi = eax;
/* e889d8: mov edi, esp */
  edi = esp;
/* e889da: mov dword ptr [ebx], 1 */
  W32((uint32_t)(ebx), 0x1u);
/* e889e0: mov ecx, 0x10 */
  ecx = 0x10u;
/* e889e5: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e889e7: lea ecx, [ebx + 0x10] */
  ecx = (uint32_t)(ebx + 0x10u);
/* e889ea: call dword ptr [0xeae0b8] */
  esp -= 4; W32(esp, 0xe889f0u); SPILL(); f_4e28a6(); if (g_unwind) return; /* Core!??XFMatrix@@QAEXV0@@Z */ RELOAD();
/* e889f0: mov esi, 1 */
  esi = 0x1u;
L_e889f5: /* e889f5: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e889f9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e889fb: je 0xe88a21 */
  if (zf) goto L_e88a21;
L_e889fd: /* e889fd: cmp byte ptr [ebp + 0x3c], 0xd */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x3cu))); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* e88a01: je 0xe88a21 */
  if (zf) goto L_e88a21;
L_e88a03: /* e88a03: mov dword ptr [ebx], esi */
  W32((uint32_t)(ebx), esi);
/* e88a05: mov dl, byte ptr [ebp + 0x3c] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x3cu))) & 0xffu);
/* e88a08: mov byte ptr [ebx + 0x50], dl */
  W8((uint32_t)(ebx + 0x50u), (edx & 0xffu));
/* e88a0b: mov al, byte ptr [ebp + 0x3d] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x3du))) & 0xffu);
/* e88a0e: mov byte ptr [ebx + 0x51], al */
  W8((uint32_t)(ebx + 0x51u), (eax & 0xffu));
/* e88a11: mov ecx, dword ptr [ebp + 0x40] */
  ecx = R32((uint32_t)(ebp + 0x40u));
/* e88a14: and ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* e88a16: mov dword ptr [ebx + 0x54], ecx */
  W32((uint32_t)(ebx + 0x54u), ecx);
/* e88a19: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
L_e88a21: /* e88a21: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* e88a24: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88a26: mov ecx, dword ptr [0xeae27c] */
  ecx = R32((uint32_t)(0xeae27cu));
/* e88a2c: je 0xe88a3b */
  if (zf) goto L_e88a3b;
L_e88a2e: /* e88a2e: mov edi, edi */
  edi = edi;
L_e88a30: /* e88a30: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e88a32: je 0xe88a46 */
  if (zf) goto L_e88a46;
L_e88a34: /* e88a34: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e88a37: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88a39: jne 0xe88a30 */
  if (!zf) goto L_e88a30;
L_e88a3b: /* e88a3b: xor eax, eax */
  eax = 0;
/* e88a3d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88a3f: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e88a42: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88a44: je 0xe88a7d */
  if (zf) goto L_e88a7d;
L_e88a46: /* e88a46: mov dword ptr [ebx + 4], esi */
  W32((uint32_t)(ebx + 0x4u), esi);
/* e88a49: mov dl, byte ptr [ebp + 0x3c] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x3cu))) & 0xffu);
/* e88a4c: mov byte ptr [ebx + 0x58], dl */
  W8((uint32_t)(ebx + 0x58u), (edx & 0xffu));
/* e88a4f: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* e88a52: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e88a54: mov dword ptr [ebx + 0x5c], eax */
  W32((uint32_t)(ebx + 0x5cu), eax);
/* e88a57: mov ecx, dword ptr [ebp + 0x40] */
  ecx = R32((uint32_t)(ebp + 0x40u));
/* e88a5a: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* e88a5c: and ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* e88a5e: mov dword ptr [ebx + 0x60], ecx */
  W32((uint32_t)(ebx + 0x60u), ecx);
/* e88a61: mov edx, dword ptr [ebp + 0x40] */
  edx = R32((uint32_t)(ebp + 0x40u));
/* e88a64: shr edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* e88a67: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* e88a69: mov dword ptr [ebx + 0x64], edx */
  W32((uint32_t)(ebx + 0x64u), edx);
/* e88a6c: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* e88a6f: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* e88a72: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e88a74: mov dword ptr [ebx + 0x68], eax */
  W32((uint32_t)(ebx + 0x68u), eax);
/* e88a77: mov cl, byte ptr [ebp + 0x44] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x44u))) & 0xffu);
/* e88a7a: mov byte ptr [ebx + 0x6c], cl */
  W8((uint32_t)(ebx + 0x6cu), (ecx & 0xffu));
L_e88a7d: /* e88a7d: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* e88a80: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88a82: mov ecx, dword ptr [0xeae280] */
  ecx = R32((uint32_t)(0xeae280u));
/* e88a88: je 0xe88a9b */
  if (zf) goto L_e88a9b;
L_e88a8a: /* e88a8a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_e88a90: /* e88a90: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e88a92: je 0xe88aa6 */
  if (zf) goto L_e88aa6;
L_e88a94: /* e88a94: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e88a97: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88a99: jne 0xe88a90 */
  if (!zf) goto L_e88a90;
L_e88a9b: /* e88a9b: xor eax, eax */
  eax = 0;
/* e88a9d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88a9f: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e88aa2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88aa4: je 0xe88acb */
  if (zf) goto L_e88acb;
L_e88aa6: /* e88aa6: mov edi, dword ptr [ebx + 0x74] */
  edi = R32((uint32_t)(ebx + 0x74u));
/* e88aa9: mov ecx, dword ptr [ebx + 0x68] */
  ecx = R32((uint32_t)(ebx + 0x68u));
/* e88aac: mov dword ptr [ebx + 8], esi */
  W32((uint32_t)(ebx + 0x8u), esi);
/* e88aaf: mov edx, dword ptr [ebp + 0x40] */
  edx = R32((uint32_t)(ebp + 0x40u));
/* e88ab2: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* e88ab4: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* e88ab6: or edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* e88ab8: mov dword ptr [ebx + 0x74], edi */
  W32((uint32_t)(ebx + 0x74u), edi);
/* e88abb: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* e88abe: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e88ac0: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* e88ac2: mov dword ptr [ebx + 0x68], ecx */
  W32((uint32_t)(ebx + 0x68u), ecx);
/* e88ac5: mov ecx, dword ptr [ebp + 0x3c] */
  ecx = R32((uint32_t)(ebp + 0x3cu));
/* e88ac8: mov dword ptr [ebx + 0x70], ecx */
  W32((uint32_t)(ebx + 0x70u), ecx);
L_e88acb: /* e88acb: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* e88ace: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88ad0: mov ecx, dword ptr [0xeae284] */
  ecx = R32((uint32_t)(0xeae284u));
/* e88ad6: je 0xe88ae3 */
  if (zf) goto L_e88ae3;
L_e88ad8: /* e88ad8: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e88ada: je 0xe88aee */
  if (zf) goto L_e88aee;
L_e88adc: /* e88adc: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e88adf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88ae1: jne 0xe88ad8 */
  if (!zf) goto L_e88ad8;
L_e88ae3: /* e88ae3: xor eax, eax */
  eax = 0;
/* e88ae5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88ae7: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e88aea: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88aec: je 0xe88b02 */
  if (zf) goto L_e88b02;
L_e88aee: /* e88aee: mov dword ptr [ebx + 0xc], esi */
  W32((uint32_t)(ebx + 0xcu), esi);
/* e88af1: mov edx, dword ptr [ebp + 0x3c] */
  edx = R32((uint32_t)(ebp + 0x3cu));
/* e88af4: mov dword ptr [ebx + 0x7c], edx */
  W32((uint32_t)(ebx + 0x7cu), edx);
/* e88af7: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* e88afa: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e88afc: mov dword ptr [ebx + 0x80], eax */
  W32((uint32_t)(ebx + 0x80u), eax);
L_e88b02: /* e88b02: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e88b06: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88b08: je 0xe88b1b */
  if (zf) goto L_e88b1b;
L_e88b0a: /* e88b0a: mov ecx, dword ptr [ebp + 0x38] */
  ecx = R32((uint32_t)(ebp + 0x38u));
/* e88b0d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88b0f: je 0xe88b1b */
  if (zf) goto L_e88b1b;
L_e88b11: /* e88b11: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e88b13: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0xe88b19u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e88b19: jmp 0xe88b1e */
  goto L_e88b1e;
L_e88b1b: /* e88b1b: mov eax, dword ptr [ebp + 0x38] */
  eax = R32((uint32_t)(ebp + 0x38u));
L_e88b1e: /* e88b1e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88b20: je 0xe88b52 */
  if (zf) goto L_e88b52;
L_e88b22: /* e88b22: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* e88b25: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88b27: mov esi, dword ptr [0xeae274] */
  esi = R32((uint32_t)(0xeae274u));
/* e88b2d: je 0xe88b3b */
  if (zf) goto L_e88b3b;
L_e88b2f: /* e88b2f: nop  */
L_e88b30: /* e88b30: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e88b32: je 0xe88b46 */
  if (zf) goto L_e88b46;
L_e88b34: /* e88b34: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* e88b37: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88b39: jne 0xe88b30 */
  if (!zf) goto L_e88b30;
L_e88b3b: /* e88b3b: xor ecx, ecx */
  ecx = 0;
/* e88b3d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88b3f: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e88b42: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88b44: je 0xe88b52 */
  if (zf) goto L_e88b52;
L_e88b46: /* e88b46: mov ebp, eax */
  ebp = eax;
/* e88b48: mov esi, 1 */
  esi = 0x1u;
/* e88b4d: jmp 0xe88970 */
  goto L_e88970;
L_e88b52: /* e88b52: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e88b56: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e88b57: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e88b58: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e88b59: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e88b5a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e88b5d: ret  */
  esp += 4; SPILL(); return;
}

void f_e88b60(void) {
  LOAD_REGS();
L_e88b60: /* e88b60: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e88b63: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e88b64: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e88b65: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e88b66: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* e88b6a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88b6c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e88b6d: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* e88b71: je 0xe88b83 */
  if (zf) goto L_e88b83;
L_e88b73: /* e88b73: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88b75: je 0xe88b83 */
  if (zf) goto L_e88b83;
L_e88b77: /* e88b77: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* e88b79: mov ecx, edi */
  ecx = edi;
/* e88b7b: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0xe88b81u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e88b81: jmp 0xe88b85 */
  goto L_e88b85;
L_e88b83: /* e88b83: mov eax, edi */
  eax = edi;
L_e88b85: /* e88b85: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88b87: mov ebp, dword ptr [0xeae28c] */
  ebp = R32((uint32_t)(0xeae28cu));
/* e88b8d: je 0xe88bb4 */
  if (zf) goto L_e88bb4;
L_e88b8f: /* e88b8f: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* e88b92: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88b94: je 0xe88ba5 */
  if (zf) goto L_e88ba5;
L_e88b96: /* e88b96: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e88b98: je 0xe88ee6 */
  if (zf) goto L_e88ee6;
L_e88b9e: /* e88b9e: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* e88ba1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88ba3: jne 0xe88b96 */
  if (!zf) goto L_e88b96;
L_e88ba5: /* e88ba5: xor ecx, ecx */
  ecx = 0;
/* e88ba7: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88ba9: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e88bac: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88bae: jne 0xe88ee6 */
  if (!zf) goto L_e88ee6;
L_e88bb4: /* e88bb4: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88bb6: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* e88bbe: je 0xe88bd6 */
  if (zf) goto L_e88bd6;
L_e88bc0: /* e88bc0: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88bc2: je 0xe88bd6 */
  if (zf) goto L_e88bd6;
L_e88bc4: /* e88bc4: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* e88bc6: mov ecx, edi */
  ecx = edi;
/* e88bc8: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0xe88bceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e88bce: mov ebp, dword ptr [0xeae28c] */
  ebp = R32((uint32_t)(0xeae28cu));
/* e88bd4: jmp 0xe88bd8 */
  goto L_e88bd8;
L_e88bd6: /* e88bd6: mov eax, edi */
  eax = edi;
L_e88bd8: /* e88bd8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88bda: je 0xe88ee2 */
  if (zf) goto L_e88ee2;
L_e88be0: /* e88be0: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* e88be3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88be5: mov edx, dword ptr [0xeae274] */
  edx = R32((uint32_t)(0xeae274u));
/* e88beb: je 0xe88bfb */
  if (zf) goto L_e88bfb;
L_e88bed: /* e88bed: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_e88bf0: /* e88bf0: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e88bf2: je 0xe88c0a */
  if (zf) goto L_e88c0a;
L_e88bf4: /* e88bf4: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* e88bf7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88bf9: jne 0xe88bf0 */
  if (!zf) goto L_e88bf0;
L_e88bfb: /* e88bfb: xor ecx, ecx */
  ecx = 0;
/* e88bfd: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88bff: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e88c02: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88c04: je 0xe88ee2 */
  if (zf) goto L_e88ee2;
L_e88c0a: /* e88c0a: mov esi, eax */
  esi = eax;
/* e88c0c: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e88c10: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88c12: je 0xe88c31 */
  if (zf) goto L_e88c31;
L_e88c14: /* e88c14: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* e88c17: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88c19: je 0xe88c31 */
  if (zf) goto L_e88c31;
L_e88c1b: /* e88c1b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e88c1d: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0xe88c23u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e88c23: mov ebp, dword ptr [0xeae28c] */
  ebp = R32((uint32_t)(0xeae28cu));
/* e88c29: mov edx, dword ptr [0xeae274] */
  edx = R32((uint32_t)(0xeae274u));
/* e88c2f: jmp 0xe88c34 */
  goto L_e88c34;
L_e88c31: /* e88c31: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
L_e88c34: /* e88c34: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88c36: je 0xe88c5a */
  if (zf) goto L_e88c5a;
L_e88c38: /* e88c38: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* e88c3b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88c3d: je 0xe88c4b */
  if (zf) goto L_e88c4b;
L_e88c3f: /* e88c3f: nop  */
L_e88c40: /* e88c40: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e88c42: je 0xe88c56 */
  if (zf) goto L_e88c56;
L_e88c44: /* e88c44: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* e88c47: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88c49: jne 0xe88c40 */
  if (!zf) goto L_e88c40;
L_e88c4b: /* e88c4b: xor ecx, ecx */
  ecx = 0;
/* e88c4d: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88c4f: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e88c52: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88c54: je 0xe88c5a */
  if (zf) goto L_e88c5a;
L_e88c56: /* e88c56: mov ebx, eax */
  ebx = eax;
/* e88c58: jmp 0xe88c5c */
  goto L_e88c5c;
L_e88c5a: /* e88c5a: xor ebx, ebx */
  ebx = 0;
L_e88c5c: /* e88c5c: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e88c60: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88c62: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* e88c66: je 0xe88c85 */
  if (zf) goto L_e88c85;
L_e88c68: /* e88c68: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* e88c6b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88c6d: je 0xe88c85 */
  if (zf) goto L_e88c85;
L_e88c6f: /* e88c6f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e88c71: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0xe88c77u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e88c77: mov ebp, dword ptr [0xeae28c] */
  ebp = R32((uint32_t)(0xeae28cu));
/* e88c7d: mov edx, dword ptr [0xeae274] */
  edx = R32((uint32_t)(0xeae274u));
/* e88c83: jmp 0xe88c88 */
  goto L_e88c88;
L_e88c85: /* e88c85: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
L_e88c88: /* e88c88: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88c8a: je 0xe88cb1 */
  if (zf) goto L_e88cb1;
L_e88c8c: /* e88c8c: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* e88c8f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88c91: je 0xe88ca2 */
  if (zf) goto L_e88ca2;
L_e88c93: /* e88c93: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e88c95: je 0xe88c0a */
  if (zf) goto L_e88c0a;
L_e88c9b: /* e88c9b: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* e88c9e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88ca0: jne 0xe88c93 */
  if (!zf) goto L_e88c93;
L_e88ca2: /* e88ca2: xor ecx, ecx */
  ecx = 0;
/* e88ca4: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88ca6: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e88ca9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88cab: jne 0xe88c0a */
  if (!zf) goto L_e88c0a;
L_e88cb1: /* e88cb1: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88cb3: je 0xe88ee2 */
  if (zf) goto L_e88ee2;
L_e88cb9: /* e88cb9: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
/* e88cbd: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88cbf: je 0xe88ee2 */
  if (zf) goto L_e88ee2;
L_e88cc5: /* e88cc5: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e88cc9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88ccb: mov esi, 1 */
  esi = 0x1u;
/* e88cd0: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* e88cd4: je 0xe88ce6 */
  if (zf) goto L_e88ce6;
L_e88cd6: /* e88cd6: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88cd8: je 0xe88ce6 */
  if (zf) goto L_e88ce6;
L_e88cda: /* e88cda: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* e88cdc: mov ecx, edi */
  ecx = edi;
/* e88cde: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0xe88ce4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e88ce4: jmp 0xe88ce8 */
  goto L_e88ce8;
L_e88ce6: /* e88ce6: mov eax, edi */
  eax = edi;
L_e88ce8: /* e88ce8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e88ce9: call 0xe88110 */
  esp -= 4; W32(esp, 0xe88ceeu); SPILL(); f_e88110(); if (g_unwind) return; RELOAD();
/* e88cee: mov ebp, eax */
  ebp = eax;
/* e88cf0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e88cf3: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88cf5: je 0xe88ee2 */
  if (zf) goto L_e88ee2;
L_e88cfb: /* e88cfb: jmp 0xe88d00 */
  goto L_e88d00;
L_e88d00: /* e88d00: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* e88d03: mov ecx, ebp */
  ecx = ebp;
/* e88d05: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0xe88d0bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e88d0b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88d0d: je 0xe88d1a */
  if (zf) goto L_e88d1a;
L_e88d0f: /* e88d0f: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e88d13: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88d15: je 0xe88d1a */
  if (zf) goto L_e88d1a;
L_e88d17: /* e88d17: mov dword ptr [ebx + 0x78], ebp */
  W32((uint32_t)(ebx + 0x78u), ebp);
L_e88d1a: /* e88d1a: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* e88d1d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88d1f: mov ecx, dword ptr [0xeae278] */
  ecx = R32((uint32_t)(0xeae278u));
/* e88d25: je 0xe88d32 */
  if (zf) goto L_e88d32;
L_e88d27: /* e88d27: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e88d29: je 0xe88d3d */
  if (zf) goto L_e88d3d;
L_e88d2b: /* e88d2b: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e88d2e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88d30: jne 0xe88d27 */
  if (!zf) goto L_e88d27;
L_e88d32: /* e88d32: xor eax, eax */
  eax = 0;
/* e88d34: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88d36: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e88d39: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88d3b: je 0xe88db1 */
  if (zf) goto L_e88db1;
L_e88d3d: /* e88d3d: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* e88d41: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* e88d44: mov ecx, dword ptr [edx + 0x30] */
  ecx = R32((uint32_t)(edx + 0x30u));
/* e88d47: mov edx, dword ptr [ecx + 0xb0] */
  edx = R32((uint32_t)(ecx + 0xb0u));
/* e88d4d: mov ecx, dword ptr [edx + 0x3ac] */
  ecx = R32((uint32_t)(edx + 0x3acu));
/* e88d53: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* e88d56: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e88d57: mov ecx, ebp */
  ecx = ebp;
/* e88d59: call dword ptr [eax + 0x98] */
  { uint32_t t = R32((uint32_t)(eax + 0x98u)); esp -= 4; W32(esp, 0xe88d5fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e88d5f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88d61: je 0xe88d85 */
  if (zf) goto L_e88d85;
L_e88d63: /* e88d63: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e88d66: mov esi, eax */
  esi = eax;
/* e88d68: mov edi, esp */
  edi = esp;
/* e88d6a: mov dword ptr [ebx], 1 */
  W32((uint32_t)(ebx), 0x1u);
/* e88d70: mov ecx, 0x10 */
  ecx = 0x10u;
/* e88d75: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e88d77: lea ecx, [ebx + 0x10] */
  ecx = (uint32_t)(ebx + 0x10u);
/* e88d7a: call dword ptr [0xeae0b8] */
  esp -= 4; W32(esp, 0xe88d80u); SPILL(); f_4e28a6(); if (g_unwind) return; /* Core!??XFMatrix@@QAEXV0@@Z */ RELOAD();
/* e88d80: mov esi, 1 */
  esi = 0x1u;
L_e88d85: /* e88d85: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e88d89: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88d8b: je 0xe88db1 */
  if (zf) goto L_e88db1;
L_e88d8d: /* e88d8d: cmp byte ptr [ebp + 0x3c], 0xd */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x3cu))); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* e88d91: je 0xe88db1 */
  if (zf) goto L_e88db1;
L_e88d93: /* e88d93: mov dword ptr [ebx], esi */
  W32((uint32_t)(ebx), esi);
/* e88d95: mov dl, byte ptr [ebp + 0x3c] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x3cu))) & 0xffu);
/* e88d98: mov byte ptr [ebx + 0x50], dl */
  W8((uint32_t)(ebx + 0x50u), (edx & 0xffu));
/* e88d9b: mov al, byte ptr [ebp + 0x3d] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x3du))) & 0xffu);
/* e88d9e: mov byte ptr [ebx + 0x51], al */
  W8((uint32_t)(ebx + 0x51u), (eax & 0xffu));
/* e88da1: mov ecx, dword ptr [ebp + 0x40] */
  ecx = R32((uint32_t)(ebp + 0x40u));
/* e88da4: and ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* e88da6: mov dword ptr [ebx + 0x54], ecx */
  W32((uint32_t)(ebx + 0x54u), ecx);
/* e88da9: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
L_e88db1: /* e88db1: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* e88db4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88db6: mov ecx, dword ptr [0xeae27c] */
  ecx = R32((uint32_t)(0xeae27cu));
/* e88dbc: je 0xe88dcb */
  if (zf) goto L_e88dcb;
L_e88dbe: /* e88dbe: mov edi, edi */
  edi = edi;
L_e88dc0: /* e88dc0: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e88dc2: je 0xe88dd6 */
  if (zf) goto L_e88dd6;
L_e88dc4: /* e88dc4: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e88dc7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88dc9: jne 0xe88dc0 */
  if (!zf) goto L_e88dc0;
L_e88dcb: /* e88dcb: xor eax, eax */
  eax = 0;
/* e88dcd: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88dcf: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e88dd2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88dd4: je 0xe88e0d */
  if (zf) goto L_e88e0d;
L_e88dd6: /* e88dd6: mov dword ptr [ebx + 4], esi */
  W32((uint32_t)(ebx + 0x4u), esi);
/* e88dd9: mov dl, byte ptr [ebp + 0x3c] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x3cu))) & 0xffu);
/* e88ddc: mov byte ptr [ebx + 0x58], dl */
  W8((uint32_t)(ebx + 0x58u), (edx & 0xffu));
/* e88ddf: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* e88de2: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e88de4: mov dword ptr [ebx + 0x5c], eax */
  W32((uint32_t)(ebx + 0x5cu), eax);
/* e88de7: mov ecx, dword ptr [ebp + 0x40] */
  ecx = R32((uint32_t)(ebp + 0x40u));
/* e88dea: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* e88dec: and ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* e88dee: mov dword ptr [ebx + 0x60], ecx */
  W32((uint32_t)(ebx + 0x60u), ecx);
/* e88df1: mov edx, dword ptr [ebp + 0x40] */
  edx = R32((uint32_t)(ebp + 0x40u));
/* e88df4: shr edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* e88df7: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* e88df9: mov dword ptr [ebx + 0x64], edx */
  W32((uint32_t)(ebx + 0x64u), edx);
/* e88dfc: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* e88dff: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* e88e02: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e88e04: mov dword ptr [ebx + 0x68], eax */
  W32((uint32_t)(ebx + 0x68u), eax);
/* e88e07: mov cl, byte ptr [ebp + 0x44] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x44u))) & 0xffu);
/* e88e0a: mov byte ptr [ebx + 0x6c], cl */
  W8((uint32_t)(ebx + 0x6cu), (ecx & 0xffu));
L_e88e0d: /* e88e0d: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* e88e10: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88e12: mov ecx, dword ptr [0xeae280] */
  ecx = R32((uint32_t)(0xeae280u));
/* e88e18: je 0xe88e2b */
  if (zf) goto L_e88e2b;
L_e88e1a: /* e88e1a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_e88e20: /* e88e20: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e88e22: je 0xe88e36 */
  if (zf) goto L_e88e36;
L_e88e24: /* e88e24: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e88e27: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88e29: jne 0xe88e20 */
  if (!zf) goto L_e88e20;
L_e88e2b: /* e88e2b: xor eax, eax */
  eax = 0;
/* e88e2d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88e2f: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e88e32: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88e34: je 0xe88e5b */
  if (zf) goto L_e88e5b;
L_e88e36: /* e88e36: mov edi, dword ptr [ebx + 0x74] */
  edi = R32((uint32_t)(ebx + 0x74u));
/* e88e39: mov ecx, dword ptr [ebx + 0x68] */
  ecx = R32((uint32_t)(ebx + 0x68u));
/* e88e3c: mov dword ptr [ebx + 8], esi */
  W32((uint32_t)(ebx + 0x8u), esi);
/* e88e3f: mov edx, dword ptr [ebp + 0x40] */
  edx = R32((uint32_t)(ebp + 0x40u));
/* e88e42: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* e88e44: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* e88e46: or edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* e88e48: mov dword ptr [ebx + 0x74], edi */
  W32((uint32_t)(ebx + 0x74u), edi);
/* e88e4b: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* e88e4e: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e88e50: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* e88e52: mov dword ptr [ebx + 0x68], ecx */
  W32((uint32_t)(ebx + 0x68u), ecx);
/* e88e55: mov ecx, dword ptr [ebp + 0x3c] */
  ecx = R32((uint32_t)(ebp + 0x3cu));
/* e88e58: mov dword ptr [ebx + 0x70], ecx */
  W32((uint32_t)(ebx + 0x70u), ecx);
L_e88e5b: /* e88e5b: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* e88e5e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88e60: mov ecx, dword ptr [0xeae284] */
  ecx = R32((uint32_t)(0xeae284u));
/* e88e66: je 0xe88e73 */
  if (zf) goto L_e88e73;
L_e88e68: /* e88e68: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e88e6a: je 0xe88e7e */
  if (zf) goto L_e88e7e;
L_e88e6c: /* e88e6c: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e88e6f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88e71: jne 0xe88e68 */
  if (!zf) goto L_e88e68;
L_e88e73: /* e88e73: xor eax, eax */
  eax = 0;
/* e88e75: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88e77: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e88e7a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88e7c: je 0xe88e92 */
  if (zf) goto L_e88e92;
L_e88e7e: /* e88e7e: mov dword ptr [ebx + 0xc], esi */
  W32((uint32_t)(ebx + 0xcu), esi);
/* e88e81: mov edx, dword ptr [ebp + 0x3c] */
  edx = R32((uint32_t)(ebp + 0x3cu));
/* e88e84: mov dword ptr [ebx + 0x7c], edx */
  W32((uint32_t)(ebx + 0x7cu), edx);
/* e88e87: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* e88e8a: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e88e8c: mov dword ptr [ebx + 0x80], eax */
  W32((uint32_t)(ebx + 0x80u), eax);
L_e88e92: /* e88e92: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e88e96: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88e98: je 0xe88eab */
  if (zf) goto L_e88eab;
L_e88e9a: /* e88e9a: mov ecx, dword ptr [ebp + 0x38] */
  ecx = R32((uint32_t)(ebp + 0x38u));
/* e88e9d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88e9f: je 0xe88eab */
  if (zf) goto L_e88eab;
L_e88ea1: /* e88ea1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e88ea3: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0xe88ea9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e88ea9: jmp 0xe88eae */
  goto L_e88eae;
L_e88eab: /* e88eab: mov eax, dword ptr [ebp + 0x38] */
  eax = R32((uint32_t)(ebp + 0x38u));
L_e88eae: /* e88eae: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88eb0: je 0xe88ee2 */
  if (zf) goto L_e88ee2;
L_e88eb2: /* e88eb2: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* e88eb5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88eb7: mov esi, dword ptr [0xeae274] */
  esi = R32((uint32_t)(0xeae274u));
/* e88ebd: je 0xe88ecb */
  if (zf) goto L_e88ecb;
L_e88ebf: /* e88ebf: nop  */
L_e88ec0: /* e88ec0: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e88ec2: je 0xe88ed6 */
  if (zf) goto L_e88ed6;
L_e88ec4: /* e88ec4: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* e88ec7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88ec9: jne 0xe88ec0 */
  if (!zf) goto L_e88ec0;
L_e88ecb: /* e88ecb: xor ecx, ecx */
  ecx = 0;
/* e88ecd: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88ecf: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e88ed2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88ed4: je 0xe88ee2 */
  if (zf) goto L_e88ee2;
L_e88ed6: /* e88ed6: mov ebp, eax */
  ebp = eax;
/* e88ed8: mov esi, 1 */
  esi = 0x1u;
/* e88edd: jmp 0xe88d00 */
  goto L_e88d00;
L_e88ee2: /* e88ee2: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_e88ee6: /* e88ee6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e88ee7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e88ee8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e88ee9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e88eea: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e88eed: ret  */
  esp += 4; SPILL(); return;
}

void f_e88cfd(void) {
  LOAD_REGS();
L_e88cfd: /* e88cfd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_e88d00: /* e88d00: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* e88d03: mov ecx, ebp */
  ecx = ebp;
/* e88d05: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0xe88d0bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e88d0b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88d0d: je 0xe88d1a */
  if (zf) goto L_e88d1a;
L_e88d0f: /* e88d0f: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e88d13: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88d15: je 0xe88d1a */
  if (zf) goto L_e88d1a;
L_e88d17: /* e88d17: mov dword ptr [ebx + 0x78], ebp */
  W32((uint32_t)(ebx + 0x78u), ebp);
L_e88d1a: /* e88d1a: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* e88d1d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88d1f: mov ecx, dword ptr [0xeae278] */
  ecx = R32((uint32_t)(0xeae278u));
/* e88d25: je 0xe88d32 */
  if (zf) goto L_e88d32;
L_e88d27: /* e88d27: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e88d29: je 0xe88d3d */
  if (zf) goto L_e88d3d;
L_e88d2b: /* e88d2b: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e88d2e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88d30: jne 0xe88d27 */
  if (!zf) goto L_e88d27;
L_e88d32: /* e88d32: xor eax, eax */
  eax = 0;
/* e88d34: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88d36: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e88d39: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88d3b: je 0xe88db1 */
  if (zf) goto L_e88db1;
L_e88d3d: /* e88d3d: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* e88d41: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* e88d44: mov ecx, dword ptr [edx + 0x30] */
  ecx = R32((uint32_t)(edx + 0x30u));
/* e88d47: mov edx, dword ptr [ecx + 0xb0] */
  edx = R32((uint32_t)(ecx + 0xb0u));
/* e88d4d: mov ecx, dword ptr [edx + 0x3ac] */
  ecx = R32((uint32_t)(edx + 0x3acu));
/* e88d53: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* e88d56: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e88d57: mov ecx, ebp */
  ecx = ebp;
/* e88d59: call dword ptr [eax + 0x98] */
  { uint32_t t = R32((uint32_t)(eax + 0x98u)); esp -= 4; W32(esp, 0xe88d5fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e88d5f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88d61: je 0xe88d85 */
  if (zf) goto L_e88d85;
L_e88d63: /* e88d63: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e88d66: mov esi, eax */
  esi = eax;
/* e88d68: mov edi, esp */
  edi = esp;
/* e88d6a: mov dword ptr [ebx], 1 */
  W32((uint32_t)(ebx), 0x1u);
/* e88d70: mov ecx, 0x10 */
  ecx = 0x10u;
/* e88d75: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e88d77: lea ecx, [ebx + 0x10] */
  ecx = (uint32_t)(ebx + 0x10u);
/* e88d7a: call dword ptr [0xeae0b8] */
  esp -= 4; W32(esp, 0xe88d80u); SPILL(); f_4e28a6(); if (g_unwind) return; /* Core!??XFMatrix@@QAEXV0@@Z */ RELOAD();
/* e88d80: mov esi, 1 */
  esi = 0x1u;
L_e88d85: /* e88d85: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e88d89: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88d8b: je 0xe88db1 */
  if (zf) goto L_e88db1;
L_e88d8d: /* e88d8d: cmp byte ptr [ebp + 0x3c], 0xd */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x3cu))); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* e88d91: je 0xe88db1 */
  if (zf) goto L_e88db1;
L_e88d93: /* e88d93: mov dword ptr [ebx], esi */
  W32((uint32_t)(ebx), esi);
/* e88d95: mov dl, byte ptr [ebp + 0x3c] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x3cu))) & 0xffu);
/* e88d98: mov byte ptr [ebx + 0x50], dl */
  W8((uint32_t)(ebx + 0x50u), (edx & 0xffu));
/* e88d9b: mov al, byte ptr [ebp + 0x3d] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x3du))) & 0xffu);
/* e88d9e: mov byte ptr [ebx + 0x51], al */
  W8((uint32_t)(ebx + 0x51u), (eax & 0xffu));
/* e88da1: mov ecx, dword ptr [ebp + 0x40] */
  ecx = R32((uint32_t)(ebp + 0x40u));
/* e88da4: and ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* e88da6: mov dword ptr [ebx + 0x54], ecx */
  W32((uint32_t)(ebx + 0x54u), ecx);
/* e88da9: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
L_e88db1: /* e88db1: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* e88db4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88db6: mov ecx, dword ptr [0xeae27c] */
  ecx = R32((uint32_t)(0xeae27cu));
/* e88dbc: je 0xe88dcb */
  if (zf) goto L_e88dcb;
L_e88dbe: /* e88dbe: mov edi, edi */
  edi = edi;
L_e88dc0: /* e88dc0: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e88dc2: je 0xe88dd6 */
  if (zf) goto L_e88dd6;
L_e88dc4: /* e88dc4: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e88dc7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88dc9: jne 0xe88dc0 */
  if (!zf) goto L_e88dc0;
L_e88dcb: /* e88dcb: xor eax, eax */
  eax = 0;
/* e88dcd: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88dcf: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e88dd2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88dd4: je 0xe88e0d */
  if (zf) goto L_e88e0d;
L_e88dd6: /* e88dd6: mov dword ptr [ebx + 4], esi */
  W32((uint32_t)(ebx + 0x4u), esi);
/* e88dd9: mov dl, byte ptr [ebp + 0x3c] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x3cu))) & 0xffu);
/* e88ddc: mov byte ptr [ebx + 0x58], dl */
  W8((uint32_t)(ebx + 0x58u), (edx & 0xffu));
/* e88ddf: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* e88de2: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e88de4: mov dword ptr [ebx + 0x5c], eax */
  W32((uint32_t)(ebx + 0x5cu), eax);
/* e88de7: mov ecx, dword ptr [ebp + 0x40] */
  ecx = R32((uint32_t)(ebp + 0x40u));
/* e88dea: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* e88dec: and ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* e88dee: mov dword ptr [ebx + 0x60], ecx */
  W32((uint32_t)(ebx + 0x60u), ecx);
/* e88df1: mov edx, dword ptr [ebp + 0x40] */
  edx = R32((uint32_t)(ebp + 0x40u));
/* e88df4: shr edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* e88df7: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* e88df9: mov dword ptr [ebx + 0x64], edx */
  W32((uint32_t)(ebx + 0x64u), edx);
/* e88dfc: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* e88dff: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* e88e02: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e88e04: mov dword ptr [ebx + 0x68], eax */
  W32((uint32_t)(ebx + 0x68u), eax);
/* e88e07: mov cl, byte ptr [ebp + 0x44] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x44u))) & 0xffu);
/* e88e0a: mov byte ptr [ebx + 0x6c], cl */
  W8((uint32_t)(ebx + 0x6cu), (ecx & 0xffu));
L_e88e0d: /* e88e0d: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* e88e10: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88e12: mov ecx, dword ptr [0xeae280] */
  ecx = R32((uint32_t)(0xeae280u));
/* e88e18: je 0xe88e2b */
  if (zf) goto L_e88e2b;
L_e88e1a: /* e88e1a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_e88e20: /* e88e20: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e88e22: je 0xe88e36 */
  if (zf) goto L_e88e36;
L_e88e24: /* e88e24: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e88e27: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88e29: jne 0xe88e20 */
  if (!zf) goto L_e88e20;
L_e88e2b: /* e88e2b: xor eax, eax */
  eax = 0;
/* e88e2d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88e2f: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e88e32: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88e34: je 0xe88e5b */
  if (zf) goto L_e88e5b;
L_e88e36: /* e88e36: mov edi, dword ptr [ebx + 0x74] */
  edi = R32((uint32_t)(ebx + 0x74u));
/* e88e39: mov ecx, dword ptr [ebx + 0x68] */
  ecx = R32((uint32_t)(ebx + 0x68u));
/* e88e3c: mov dword ptr [ebx + 8], esi */
  W32((uint32_t)(ebx + 0x8u), esi);
/* e88e3f: mov edx, dword ptr [ebp + 0x40] */
  edx = R32((uint32_t)(ebp + 0x40u));
/* e88e42: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* e88e44: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* e88e46: or edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* e88e48: mov dword ptr [ebx + 0x74], edi */
  W32((uint32_t)(ebx + 0x74u), edi);
/* e88e4b: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* e88e4e: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e88e50: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* e88e52: mov dword ptr [ebx + 0x68], ecx */
  W32((uint32_t)(ebx + 0x68u), ecx);
/* e88e55: mov ecx, dword ptr [ebp + 0x3c] */
  ecx = R32((uint32_t)(ebp + 0x3cu));
/* e88e58: mov dword ptr [ebx + 0x70], ecx */
  W32((uint32_t)(ebx + 0x70u), ecx);
L_e88e5b: /* e88e5b: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* e88e5e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88e60: mov ecx, dword ptr [0xeae284] */
  ecx = R32((uint32_t)(0xeae284u));
/* e88e66: je 0xe88e73 */
  if (zf) goto L_e88e73;
L_e88e68: /* e88e68: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e88e6a: je 0xe88e7e */
  if (zf) goto L_e88e7e;
L_e88e6c: /* e88e6c: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e88e6f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88e71: jne 0xe88e68 */
  if (!zf) goto L_e88e68;
L_e88e73: /* e88e73: xor eax, eax */
  eax = 0;
/* e88e75: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88e77: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e88e7a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88e7c: je 0xe88e92 */
  if (zf) goto L_e88e92;
L_e88e7e: /* e88e7e: mov dword ptr [ebx + 0xc], esi */
  W32((uint32_t)(ebx + 0xcu), esi);
/* e88e81: mov edx, dword ptr [ebp + 0x3c] */
  edx = R32((uint32_t)(ebp + 0x3cu));
/* e88e84: mov dword ptr [ebx + 0x7c], edx */
  W32((uint32_t)(ebx + 0x7cu), edx);
/* e88e87: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* e88e8a: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e88e8c: mov dword ptr [ebx + 0x80], eax */
  W32((uint32_t)(ebx + 0x80u), eax);
L_e88e92: /* e88e92: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e88e96: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88e98: je 0xe88eab */
  if (zf) goto L_e88eab;
L_e88e9a: /* e88e9a: mov ecx, dword ptr [ebp + 0x38] */
  ecx = R32((uint32_t)(ebp + 0x38u));
/* e88e9d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88e9f: je 0xe88eab */
  if (zf) goto L_e88eab;
L_e88ea1: /* e88ea1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e88ea3: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0xe88ea9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e88ea9: jmp 0xe88eae */
  goto L_e88eae;
L_e88eab: /* e88eab: mov eax, dword ptr [ebp + 0x38] */
  eax = R32((uint32_t)(ebp + 0x38u));
L_e88eae: /* e88eae: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88eb0: je 0xe88ee2 */
  if (zf) goto L_e88ee2;
L_e88eb2: /* e88eb2: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* e88eb5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88eb7: mov esi, dword ptr [0xeae274] */
  esi = R32((uint32_t)(0xeae274u));
/* e88ebd: je 0xe88ecb */
  if (zf) goto L_e88ecb;
L_e88ebf: /* e88ebf: nop  */
L_e88ec0: /* e88ec0: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e88ec2: je 0xe88ed6 */
  if (zf) goto L_e88ed6;
L_e88ec4: /* e88ec4: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* e88ec7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88ec9: jne 0xe88ec0 */
  if (!zf) goto L_e88ec0;
L_e88ecb: /* e88ecb: xor ecx, ecx */
  ecx = 0;
/* e88ecd: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88ecf: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e88ed2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88ed4: je 0xe88ee2 */
  if (zf) goto L_e88ee2;
L_e88ed6: /* e88ed6: mov ebp, eax */
  ebp = eax;
/* e88ed8: mov esi, 1 */
  esi = 0x1u;
/* e88edd: jmp 0xe88d00 */
  goto L_e88d00;
L_e88ee2: /* e88ee2: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e88ee6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e88ee7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e88ee8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e88ee9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e88eea: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e88eed: ret  */
  esp += 4; SPILL(); return;
}

void f_e88ef0(void) {
  LOAD_REGS();
L_e88ef0: /* e88ef0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e88ef3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e88ef4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e88ef5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e88ef6: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* e88efa: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88efc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e88efd: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* e88f01: je 0xe88f13 */
  if (zf) goto L_e88f13;
L_e88f03: /* e88f03: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88f05: je 0xe88f13 */
  if (zf) goto L_e88f13;
L_e88f07: /* e88f07: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* e88f09: mov ecx, edi */
  ecx = edi;
/* e88f0b: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0xe88f11u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e88f11: jmp 0xe88f15 */
  goto L_e88f15;
L_e88f13: /* e88f13: mov eax, edi */
  eax = edi;
L_e88f15: /* e88f15: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88f17: mov ebp, dword ptr [0xeae290] */
  ebp = R32((uint32_t)(0xeae290u));
/* e88f1d: je 0xe88f44 */
  if (zf) goto L_e88f44;
L_e88f1f: /* e88f1f: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* e88f22: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88f24: je 0xe88f35 */
  if (zf) goto L_e88f35;
L_e88f26: /* e88f26: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e88f28: je 0xe89276 */
  if (zf) goto L_e89276;
L_e88f2e: /* e88f2e: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* e88f31: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88f33: jne 0xe88f26 */
  if (!zf) goto L_e88f26;
L_e88f35: /* e88f35: xor ecx, ecx */
  ecx = 0;
/* e88f37: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88f39: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e88f3c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88f3e: jne 0xe89276 */
  if (!zf) goto L_e89276;
L_e88f44: /* e88f44: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88f46: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* e88f4e: je 0xe88f66 */
  if (zf) goto L_e88f66;
L_e88f50: /* e88f50: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88f52: je 0xe88f66 */
  if (zf) goto L_e88f66;
L_e88f54: /* e88f54: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* e88f56: mov ecx, edi */
  ecx = edi;
/* e88f58: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0xe88f5eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e88f5e: mov ebp, dword ptr [0xeae290] */
  ebp = R32((uint32_t)(0xeae290u));
/* e88f64: jmp 0xe88f68 */
  goto L_e88f68;
L_e88f66: /* e88f66: mov eax, edi */
  eax = edi;
L_e88f68: /* e88f68: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88f6a: je 0xe89272 */
  if (zf) goto L_e89272;
L_e88f70: /* e88f70: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* e88f73: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88f75: mov edx, dword ptr [0xeae274] */
  edx = R32((uint32_t)(0xeae274u));
/* e88f7b: je 0xe88f8b */
  if (zf) goto L_e88f8b;
L_e88f7d: /* e88f7d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_e88f80: /* e88f80: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e88f82: je 0xe88f9a */
  if (zf) goto L_e88f9a;
L_e88f84: /* e88f84: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* e88f87: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88f89: jne 0xe88f80 */
  if (!zf) goto L_e88f80;
L_e88f8b: /* e88f8b: xor ecx, ecx */
  ecx = 0;
/* e88f8d: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88f8f: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e88f92: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88f94: je 0xe89272 */
  if (zf) goto L_e89272;
L_e88f9a: /* e88f9a: mov esi, eax */
  esi = eax;
/* e88f9c: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e88fa0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88fa2: je 0xe88fc1 */
  if (zf) goto L_e88fc1;
L_e88fa4: /* e88fa4: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* e88fa7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88fa9: je 0xe88fc1 */
  if (zf) goto L_e88fc1;
L_e88fab: /* e88fab: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e88fad: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0xe88fb3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e88fb3: mov ebp, dword ptr [0xeae290] */
  ebp = R32((uint32_t)(0xeae290u));
/* e88fb9: mov edx, dword ptr [0xeae274] */
  edx = R32((uint32_t)(0xeae274u));
/* e88fbf: jmp 0xe88fc4 */
  goto L_e88fc4;
L_e88fc1: /* e88fc1: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
L_e88fc4: /* e88fc4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88fc6: je 0xe88fea */
  if (zf) goto L_e88fea;
L_e88fc8: /* e88fc8: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* e88fcb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88fcd: je 0xe88fdb */
  if (zf) goto L_e88fdb;
L_e88fcf: /* e88fcf: nop  */
L_e88fd0: /* e88fd0: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e88fd2: je 0xe88fe6 */
  if (zf) goto L_e88fe6;
L_e88fd4: /* e88fd4: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* e88fd7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88fd9: jne 0xe88fd0 */
  if (!zf) goto L_e88fd0;
L_e88fdb: /* e88fdb: xor ecx, ecx */
  ecx = 0;
/* e88fdd: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88fdf: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e88fe2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88fe4: je 0xe88fea */
  if (zf) goto L_e88fea;
L_e88fe6: /* e88fe6: mov ebx, eax */
  ebx = eax;
/* e88fe8: jmp 0xe88fec */
  goto L_e88fec;
L_e88fea: /* e88fea: xor ebx, ebx */
  ebx = 0;
L_e88fec: /* e88fec: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e88ff0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88ff2: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* e88ff6: je 0xe89015 */
  if (zf) goto L_e89015;
L_e88ff8: /* e88ff8: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* e88ffb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e88ffd: je 0xe89015 */
  if (zf) goto L_e89015;
L_e88fff: /* e88fff: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e89001: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0xe89007u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e89007: mov ebp, dword ptr [0xeae290] */
  ebp = R32((uint32_t)(0xeae290u));
/* e8900d: mov edx, dword ptr [0xeae274] */
  edx = R32((uint32_t)(0xeae274u));
/* e89013: jmp 0xe89018 */
  goto L_e89018;
L_e89015: /* e89015: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
L_e89018: /* e89018: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8901a: je 0xe89041 */
  if (zf) goto L_e89041;
L_e8901c: /* e8901c: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* e8901f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89021: je 0xe89032 */
  if (zf) goto L_e89032;
L_e89023: /* e89023: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e89025: je 0xe88f9a */
  if (zf) goto L_e88f9a;
L_e8902b: /* e8902b: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* e8902e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89030: jne 0xe89023 */
  if (!zf) goto L_e89023;
L_e89032: /* e89032: xor ecx, ecx */
  ecx = 0;
/* e89034: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89036: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e89039: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8903b: jne 0xe88f9a */
  if (!zf) goto L_e88f9a;
L_e89041: /* e89041: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89043: je 0xe89272 */
  if (zf) goto L_e89272;
L_e89049: /* e89049: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
/* e8904d: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8904f: je 0xe89272 */
  if (zf) goto L_e89272;
L_e89055: /* e89055: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e89059: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8905b: mov esi, 1 */
  esi = 0x1u;
/* e89060: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* e89064: je 0xe89076 */
  if (zf) goto L_e89076;
L_e89066: /* e89066: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89068: je 0xe89076 */
  if (zf) goto L_e89076;
L_e8906a: /* e8906a: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* e8906c: mov ecx, edi */
  ecx = edi;
/* e8906e: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0xe89074u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e89074: jmp 0xe89078 */
  goto L_e89078;
L_e89076: /* e89076: mov eax, edi */
  eax = edi;
L_e89078: /* e89078: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e89079: call 0xe88110 */
  esp -= 4; W32(esp, 0xe8907eu); SPILL(); f_e88110(); if (g_unwind) return; RELOAD();
/* e8907e: mov ebp, eax */
  ebp = eax;
/* e89080: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e89083: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89085: je 0xe89272 */
  if (zf) goto L_e89272;
L_e8908b: /* e8908b: jmp 0xe89090 */
  goto L_e89090;
L_e89090: /* e89090: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* e89093: mov ecx, ebp */
  ecx = ebp;
/* e89095: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0xe8909bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8909b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8909d: je 0xe890aa */
  if (zf) goto L_e890aa;
L_e8909f: /* e8909f: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e890a3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e890a5: je 0xe890aa */
  if (zf) goto L_e890aa;
L_e890a7: /* e890a7: mov dword ptr [ebx + 0x78], ebp */
  W32((uint32_t)(ebx + 0x78u), ebp);
L_e890aa: /* e890aa: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* e890ad: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e890af: mov ecx, dword ptr [0xeae278] */
  ecx = R32((uint32_t)(0xeae278u));
/* e890b5: je 0xe890c2 */
  if (zf) goto L_e890c2;
L_e890b7: /* e890b7: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e890b9: je 0xe890cd */
  if (zf) goto L_e890cd;
L_e890bb: /* e890bb: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e890be: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e890c0: jne 0xe890b7 */
  if (!zf) goto L_e890b7;
L_e890c2: /* e890c2: xor eax, eax */
  eax = 0;
/* e890c4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e890c6: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e890c9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e890cb: je 0xe89141 */
  if (zf) goto L_e89141;
L_e890cd: /* e890cd: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* e890d1: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* e890d4: mov ecx, dword ptr [edx + 0x30] */
  ecx = R32((uint32_t)(edx + 0x30u));
/* e890d7: mov edx, dword ptr [ecx + 0xb0] */
  edx = R32((uint32_t)(ecx + 0xb0u));
/* e890dd: mov ecx, dword ptr [edx + 0x3ac] */
  ecx = R32((uint32_t)(edx + 0x3acu));
/* e890e3: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* e890e6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e890e7: mov ecx, ebp */
  ecx = ebp;
/* e890e9: call dword ptr [eax + 0x98] */
  { uint32_t t = R32((uint32_t)(eax + 0x98u)); esp -= 4; W32(esp, 0xe890efu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e890ef: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e890f1: je 0xe89115 */
  if (zf) goto L_e89115;
L_e890f3: /* e890f3: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e890f6: mov esi, eax */
  esi = eax;
/* e890f8: mov edi, esp */
  edi = esp;
/* e890fa: mov dword ptr [ebx], 1 */
  W32((uint32_t)(ebx), 0x1u);
/* e89100: mov ecx, 0x10 */
  ecx = 0x10u;
/* e89105: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e89107: lea ecx, [ebx + 0x10] */
  ecx = (uint32_t)(ebx + 0x10u);
/* e8910a: call dword ptr [0xeae0b8] */
  esp -= 4; W32(esp, 0xe89110u); SPILL(); f_4e28a6(); if (g_unwind) return; /* Core!??XFMatrix@@QAEXV0@@Z */ RELOAD();
/* e89110: mov esi, 1 */
  esi = 0x1u;
L_e89115: /* e89115: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e89119: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8911b: je 0xe89141 */
  if (zf) goto L_e89141;
L_e8911d: /* e8911d: cmp byte ptr [ebp + 0x3c], 0xd */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x3cu))); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* e89121: je 0xe89141 */
  if (zf) goto L_e89141;
L_e89123: /* e89123: mov dword ptr [ebx], esi */
  W32((uint32_t)(ebx), esi);
/* e89125: mov dl, byte ptr [ebp + 0x3c] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x3cu))) & 0xffu);
/* e89128: mov byte ptr [ebx + 0x50], dl */
  W8((uint32_t)(ebx + 0x50u), (edx & 0xffu));
/* e8912b: mov al, byte ptr [ebp + 0x3d] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x3du))) & 0xffu);
/* e8912e: mov byte ptr [ebx + 0x51], al */
  W8((uint32_t)(ebx + 0x51u), (eax & 0xffu));
/* e89131: mov ecx, dword ptr [ebp + 0x40] */
  ecx = R32((uint32_t)(ebp + 0x40u));
/* e89134: and ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* e89136: mov dword ptr [ebx + 0x54], ecx */
  W32((uint32_t)(ebx + 0x54u), ecx);
/* e89139: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
L_e89141: /* e89141: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* e89144: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89146: mov ecx, dword ptr [0xeae27c] */
  ecx = R32((uint32_t)(0xeae27cu));
/* e8914c: je 0xe8915b */
  if (zf) goto L_e8915b;
L_e8914e: /* e8914e: mov edi, edi */
  edi = edi;
L_e89150: /* e89150: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e89152: je 0xe89166 */
  if (zf) goto L_e89166;
L_e89154: /* e89154: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e89157: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89159: jne 0xe89150 */
  if (!zf) goto L_e89150;
L_e8915b: /* e8915b: xor eax, eax */
  eax = 0;
/* e8915d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8915f: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e89162: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89164: je 0xe8919d */
  if (zf) goto L_e8919d;
L_e89166: /* e89166: mov dword ptr [ebx + 4], esi */
  W32((uint32_t)(ebx + 0x4u), esi);
/* e89169: mov dl, byte ptr [ebp + 0x3c] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x3cu))) & 0xffu);
/* e8916c: mov byte ptr [ebx + 0x58], dl */
  W8((uint32_t)(ebx + 0x58u), (edx & 0xffu));
/* e8916f: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* e89172: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e89174: mov dword ptr [ebx + 0x5c], eax */
  W32((uint32_t)(ebx + 0x5cu), eax);
/* e89177: mov ecx, dword ptr [ebp + 0x40] */
  ecx = R32((uint32_t)(ebp + 0x40u));
/* e8917a: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* e8917c: and ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* e8917e: mov dword ptr [ebx + 0x60], ecx */
  W32((uint32_t)(ebx + 0x60u), ecx);
/* e89181: mov edx, dword ptr [ebp + 0x40] */
  edx = R32((uint32_t)(ebp + 0x40u));
/* e89184: shr edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* e89187: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* e89189: mov dword ptr [ebx + 0x64], edx */
  W32((uint32_t)(ebx + 0x64u), edx);
/* e8918c: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* e8918f: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* e89192: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e89194: mov dword ptr [ebx + 0x68], eax */
  W32((uint32_t)(ebx + 0x68u), eax);
/* e89197: mov cl, byte ptr [ebp + 0x44] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x44u))) & 0xffu);
/* e8919a: mov byte ptr [ebx + 0x6c], cl */
  W8((uint32_t)(ebx + 0x6cu), (ecx & 0xffu));
L_e8919d: /* e8919d: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* e891a0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e891a2: mov ecx, dword ptr [0xeae280] */
  ecx = R32((uint32_t)(0xeae280u));
/* e891a8: je 0xe891bb */
  if (zf) goto L_e891bb;
L_e891aa: /* e891aa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_e891b0: /* e891b0: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e891b2: je 0xe891c6 */
  if (zf) goto L_e891c6;
L_e891b4: /* e891b4: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e891b7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e891b9: jne 0xe891b0 */
  if (!zf) goto L_e891b0;
L_e891bb: /* e891bb: xor eax, eax */
  eax = 0;
/* e891bd: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e891bf: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e891c2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e891c4: je 0xe891eb */
  if (zf) goto L_e891eb;
L_e891c6: /* e891c6: mov edi, dword ptr [ebx + 0x74] */
  edi = R32((uint32_t)(ebx + 0x74u));
/* e891c9: mov ecx, dword ptr [ebx + 0x68] */
  ecx = R32((uint32_t)(ebx + 0x68u));
/* e891cc: mov dword ptr [ebx + 8], esi */
  W32((uint32_t)(ebx + 0x8u), esi);
/* e891cf: mov edx, dword ptr [ebp + 0x40] */
  edx = R32((uint32_t)(ebp + 0x40u));
/* e891d2: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* e891d4: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* e891d6: or edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* e891d8: mov dword ptr [ebx + 0x74], edi */
  W32((uint32_t)(ebx + 0x74u), edi);
/* e891db: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* e891de: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e891e0: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* e891e2: mov dword ptr [ebx + 0x68], ecx */
  W32((uint32_t)(ebx + 0x68u), ecx);
/* e891e5: mov ecx, dword ptr [ebp + 0x3c] */
  ecx = R32((uint32_t)(ebp + 0x3cu));
/* e891e8: mov dword ptr [ebx + 0x70], ecx */
  W32((uint32_t)(ebx + 0x70u), ecx);
L_e891eb: /* e891eb: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* e891ee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e891f0: mov ecx, dword ptr [0xeae284] */
  ecx = R32((uint32_t)(0xeae284u));
/* e891f6: je 0xe89203 */
  if (zf) goto L_e89203;
L_e891f8: /* e891f8: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e891fa: je 0xe8920e */
  if (zf) goto L_e8920e;
L_e891fc: /* e891fc: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e891ff: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89201: jne 0xe891f8 */
  if (!zf) goto L_e891f8;
L_e89203: /* e89203: xor eax, eax */
  eax = 0;
/* e89205: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89207: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e8920a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8920c: je 0xe89222 */
  if (zf) goto L_e89222;
L_e8920e: /* e8920e: mov dword ptr [ebx + 0xc], esi */
  W32((uint32_t)(ebx + 0xcu), esi);
/* e89211: mov edx, dword ptr [ebp + 0x3c] */
  edx = R32((uint32_t)(ebp + 0x3cu));
/* e89214: mov dword ptr [ebx + 0x7c], edx */
  W32((uint32_t)(ebx + 0x7cu), edx);
/* e89217: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* e8921a: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e8921c: mov dword ptr [ebx + 0x80], eax */
  W32((uint32_t)(ebx + 0x80u), eax);
L_e89222: /* e89222: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e89226: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89228: je 0xe8923b */
  if (zf) goto L_e8923b;
L_e8922a: /* e8922a: mov ecx, dword ptr [ebp + 0x38] */
  ecx = R32((uint32_t)(ebp + 0x38u));
/* e8922d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8922f: je 0xe8923b */
  if (zf) goto L_e8923b;
L_e89231: /* e89231: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e89233: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0xe89239u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e89239: jmp 0xe8923e */
  goto L_e8923e;
L_e8923b: /* e8923b: mov eax, dword ptr [ebp + 0x38] */
  eax = R32((uint32_t)(ebp + 0x38u));
L_e8923e: /* e8923e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89240: je 0xe89272 */
  if (zf) goto L_e89272;
L_e89242: /* e89242: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* e89245: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89247: mov esi, dword ptr [0xeae274] */
  esi = R32((uint32_t)(0xeae274u));
/* e8924d: je 0xe8925b */
  if (zf) goto L_e8925b;
L_e8924f: /* e8924f: nop  */
L_e89250: /* e89250: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e89252: je 0xe89266 */
  if (zf) goto L_e89266;
L_e89254: /* e89254: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* e89257: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89259: jne 0xe89250 */
  if (!zf) goto L_e89250;
L_e8925b: /* e8925b: xor ecx, ecx */
  ecx = 0;
/* e8925d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8925f: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e89262: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89264: je 0xe89272 */
  if (zf) goto L_e89272;
L_e89266: /* e89266: mov ebp, eax */
  ebp = eax;
/* e89268: mov esi, 1 */
  esi = 0x1u;
/* e8926d: jmp 0xe89090 */
  goto L_e89090;
L_e89272: /* e89272: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_e89276: /* e89276: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e89277: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e89278: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e89279: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e8927a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8927d: ret  */
  esp += 4; SPILL(); return;
}

void f_e8908d(void) {
  LOAD_REGS();
L_e8908d: /* e8908d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_e89090: /* e89090: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* e89093: mov ecx, ebp */
  ecx = ebp;
/* e89095: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0xe8909bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8909b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8909d: je 0xe890aa */
  if (zf) goto L_e890aa;
L_e8909f: /* e8909f: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e890a3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e890a5: je 0xe890aa */
  if (zf) goto L_e890aa;
L_e890a7: /* e890a7: mov dword ptr [ebx + 0x78], ebp */
  W32((uint32_t)(ebx + 0x78u), ebp);
L_e890aa: /* e890aa: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* e890ad: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e890af: mov ecx, dword ptr [0xeae278] */
  ecx = R32((uint32_t)(0xeae278u));
/* e890b5: je 0xe890c2 */
  if (zf) goto L_e890c2;
L_e890b7: /* e890b7: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e890b9: je 0xe890cd */
  if (zf) goto L_e890cd;
L_e890bb: /* e890bb: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e890be: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e890c0: jne 0xe890b7 */
  if (!zf) goto L_e890b7;
L_e890c2: /* e890c2: xor eax, eax */
  eax = 0;
/* e890c4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e890c6: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e890c9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e890cb: je 0xe89141 */
  if (zf) goto L_e89141;
L_e890cd: /* e890cd: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* e890d1: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* e890d4: mov ecx, dword ptr [edx + 0x30] */
  ecx = R32((uint32_t)(edx + 0x30u));
/* e890d7: mov edx, dword ptr [ecx + 0xb0] */
  edx = R32((uint32_t)(ecx + 0xb0u));
/* e890dd: mov ecx, dword ptr [edx + 0x3ac] */
  ecx = R32((uint32_t)(edx + 0x3acu));
/* e890e3: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* e890e6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e890e7: mov ecx, ebp */
  ecx = ebp;
/* e890e9: call dword ptr [eax + 0x98] */
  { uint32_t t = R32((uint32_t)(eax + 0x98u)); esp -= 4; W32(esp, 0xe890efu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e890ef: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e890f1: je 0xe89115 */
  if (zf) goto L_e89115;
L_e890f3: /* e890f3: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e890f6: mov esi, eax */
  esi = eax;
/* e890f8: mov edi, esp */
  edi = esp;
/* e890fa: mov dword ptr [ebx], 1 */
  W32((uint32_t)(ebx), 0x1u);
/* e89100: mov ecx, 0x10 */
  ecx = 0x10u;
/* e89105: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e89107: lea ecx, [ebx + 0x10] */
  ecx = (uint32_t)(ebx + 0x10u);
/* e8910a: call dword ptr [0xeae0b8] */
  esp -= 4; W32(esp, 0xe89110u); SPILL(); f_4e28a6(); if (g_unwind) return; /* Core!??XFMatrix@@QAEXV0@@Z */ RELOAD();
/* e89110: mov esi, 1 */
  esi = 0x1u;
L_e89115: /* e89115: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e89119: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8911b: je 0xe89141 */
  if (zf) goto L_e89141;
L_e8911d: /* e8911d: cmp byte ptr [ebp + 0x3c], 0xd */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x3cu))); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* e89121: je 0xe89141 */
  if (zf) goto L_e89141;
L_e89123: /* e89123: mov dword ptr [ebx], esi */
  W32((uint32_t)(ebx), esi);
/* e89125: mov dl, byte ptr [ebp + 0x3c] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x3cu))) & 0xffu);
/* e89128: mov byte ptr [ebx + 0x50], dl */
  W8((uint32_t)(ebx + 0x50u), (edx & 0xffu));
/* e8912b: mov al, byte ptr [ebp + 0x3d] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x3du))) & 0xffu);
/* e8912e: mov byte ptr [ebx + 0x51], al */
  W8((uint32_t)(ebx + 0x51u), (eax & 0xffu));
/* e89131: mov ecx, dword ptr [ebp + 0x40] */
  ecx = R32((uint32_t)(ebp + 0x40u));
/* e89134: and ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* e89136: mov dword ptr [ebx + 0x54], ecx */
  W32((uint32_t)(ebx + 0x54u), ecx);
/* e89139: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
L_e89141: /* e89141: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* e89144: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89146: mov ecx, dword ptr [0xeae27c] */
  ecx = R32((uint32_t)(0xeae27cu));
/* e8914c: je 0xe8915b */
  if (zf) goto L_e8915b;
L_e8914e: /* e8914e: mov edi, edi */
  edi = edi;
L_e89150: /* e89150: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e89152: je 0xe89166 */
  if (zf) goto L_e89166;
L_e89154: /* e89154: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e89157: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89159: jne 0xe89150 */
  if (!zf) goto L_e89150;
L_e8915b: /* e8915b: xor eax, eax */
  eax = 0;
/* e8915d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8915f: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e89162: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89164: je 0xe8919d */
  if (zf) goto L_e8919d;
L_e89166: /* e89166: mov dword ptr [ebx + 4], esi */
  W32((uint32_t)(ebx + 0x4u), esi);
/* e89169: mov dl, byte ptr [ebp + 0x3c] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x3cu))) & 0xffu);
/* e8916c: mov byte ptr [ebx + 0x58], dl */
  W8((uint32_t)(ebx + 0x58u), (edx & 0xffu));
/* e8916f: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* e89172: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e89174: mov dword ptr [ebx + 0x5c], eax */
  W32((uint32_t)(ebx + 0x5cu), eax);
/* e89177: mov ecx, dword ptr [ebp + 0x40] */
  ecx = R32((uint32_t)(ebp + 0x40u));
/* e8917a: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* e8917c: and ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* e8917e: mov dword ptr [ebx + 0x60], ecx */
  W32((uint32_t)(ebx + 0x60u), ecx);
/* e89181: mov edx, dword ptr [ebp + 0x40] */
  edx = R32((uint32_t)(ebp + 0x40u));
/* e89184: shr edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* e89187: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* e89189: mov dword ptr [ebx + 0x64], edx */
  W32((uint32_t)(ebx + 0x64u), edx);
/* e8918c: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* e8918f: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* e89192: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e89194: mov dword ptr [ebx + 0x68], eax */
  W32((uint32_t)(ebx + 0x68u), eax);
/* e89197: mov cl, byte ptr [ebp + 0x44] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x44u))) & 0xffu);
/* e8919a: mov byte ptr [ebx + 0x6c], cl */
  W8((uint32_t)(ebx + 0x6cu), (ecx & 0xffu));
L_e8919d: /* e8919d: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* e891a0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e891a2: mov ecx, dword ptr [0xeae280] */
  ecx = R32((uint32_t)(0xeae280u));
/* e891a8: je 0xe891bb */
  if (zf) goto L_e891bb;
L_e891aa: /* e891aa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_e891b0: /* e891b0: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e891b2: je 0xe891c6 */
  if (zf) goto L_e891c6;
L_e891b4: /* e891b4: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e891b7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e891b9: jne 0xe891b0 */
  if (!zf) goto L_e891b0;
L_e891bb: /* e891bb: xor eax, eax */
  eax = 0;
/* e891bd: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e891bf: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e891c2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e891c4: je 0xe891eb */
  if (zf) goto L_e891eb;
L_e891c6: /* e891c6: mov edi, dword ptr [ebx + 0x74] */
  edi = R32((uint32_t)(ebx + 0x74u));
/* e891c9: mov ecx, dword ptr [ebx + 0x68] */
  ecx = R32((uint32_t)(ebx + 0x68u));
/* e891cc: mov dword ptr [ebx + 8], esi */
  W32((uint32_t)(ebx + 0x8u), esi);
/* e891cf: mov edx, dword ptr [ebp + 0x40] */
  edx = R32((uint32_t)(ebp + 0x40u));
/* e891d2: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* e891d4: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* e891d6: or edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* e891d8: mov dword ptr [ebx + 0x74], edi */
  W32((uint32_t)(ebx + 0x74u), edi);
/* e891db: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* e891de: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e891e0: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* e891e2: mov dword ptr [ebx + 0x68], ecx */
  W32((uint32_t)(ebx + 0x68u), ecx);
/* e891e5: mov ecx, dword ptr [ebp + 0x3c] */
  ecx = R32((uint32_t)(ebp + 0x3cu));
/* e891e8: mov dword ptr [ebx + 0x70], ecx */
  W32((uint32_t)(ebx + 0x70u), ecx);
L_e891eb: /* e891eb: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* e891ee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e891f0: mov ecx, dword ptr [0xeae284] */
  ecx = R32((uint32_t)(0xeae284u));
/* e891f6: je 0xe89203 */
  if (zf) goto L_e89203;
L_e891f8: /* e891f8: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e891fa: je 0xe8920e */
  if (zf) goto L_e8920e;
L_e891fc: /* e891fc: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e891ff: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89201: jne 0xe891f8 */
  if (!zf) goto L_e891f8;
L_e89203: /* e89203: xor eax, eax */
  eax = 0;
/* e89205: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89207: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e8920a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8920c: je 0xe89222 */
  if (zf) goto L_e89222;
L_e8920e: /* e8920e: mov dword ptr [ebx + 0xc], esi */
  W32((uint32_t)(ebx + 0xcu), esi);
/* e89211: mov edx, dword ptr [ebp + 0x3c] */
  edx = R32((uint32_t)(ebp + 0x3cu));
/* e89214: mov dword ptr [ebx + 0x7c], edx */
  W32((uint32_t)(ebx + 0x7cu), edx);
/* e89217: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* e8921a: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e8921c: mov dword ptr [ebx + 0x80], eax */
  W32((uint32_t)(ebx + 0x80u), eax);
L_e89222: /* e89222: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e89226: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89228: je 0xe8923b */
  if (zf) goto L_e8923b;
L_e8922a: /* e8922a: mov ecx, dword ptr [ebp + 0x38] */
  ecx = R32((uint32_t)(ebp + 0x38u));
/* e8922d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8922f: je 0xe8923b */
  if (zf) goto L_e8923b;
L_e89231: /* e89231: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e89233: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0xe89239u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e89239: jmp 0xe8923e */
  goto L_e8923e;
L_e8923b: /* e8923b: mov eax, dword ptr [ebp + 0x38] */
  eax = R32((uint32_t)(ebp + 0x38u));
L_e8923e: /* e8923e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89240: je 0xe89272 */
  if (zf) goto L_e89272;
L_e89242: /* e89242: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* e89245: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89247: mov esi, dword ptr [0xeae274] */
  esi = R32((uint32_t)(0xeae274u));
/* e8924d: je 0xe8925b */
  if (zf) goto L_e8925b;
L_e8924f: /* e8924f: nop  */
L_e89250: /* e89250: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e89252: je 0xe89266 */
  if (zf) goto L_e89266;
L_e89254: /* e89254: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* e89257: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89259: jne 0xe89250 */
  if (!zf) goto L_e89250;
L_e8925b: /* e8925b: xor ecx, ecx */
  ecx = 0;
/* e8925d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8925f: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e89262: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89264: je 0xe89272 */
  if (zf) goto L_e89272;
L_e89266: /* e89266: mov ebp, eax */
  ebp = eax;
/* e89268: mov esi, 1 */
  esi = 0x1u;
/* e8926d: jmp 0xe89090 */
  goto L_e89090;
L_e89272: /* e89272: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e89276: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e89277: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e89278: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e89279: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e8927a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8927d: ret  */
  esp += 4; SPILL(); return;
}

void f_e89280(void) {
  LOAD_REGS();
L_e89280: /* e89280: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e89283: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e89284: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e89285: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e89286: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* e8928a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8928c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e8928d: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* e89291: je 0xe892a3 */
  if (zf) goto L_e892a3;
L_e89293: /* e89293: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89295: je 0xe892a3 */
  if (zf) goto L_e892a3;
L_e89297: /* e89297: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* e89299: mov ecx, edi */
  ecx = edi;
/* e8929b: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0xe892a1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e892a1: jmp 0xe892a5 */
  goto L_e892a5;
L_e892a3: /* e892a3: mov eax, edi */
  eax = edi;
L_e892a5: /* e892a5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e892a7: mov ebp, dword ptr [0xeae268] */
  ebp = R32((uint32_t)(0xeae268u));
/* e892ad: je 0xe892d4 */
  if (zf) goto L_e892d4;
L_e892af: /* e892af: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* e892b2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e892b4: je 0xe892c5 */
  if (zf) goto L_e892c5;
L_e892b6: /* e892b6: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e892b8: je 0xe89606 */
  if (zf) goto L_e89606;
L_e892be: /* e892be: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* e892c1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e892c3: jne 0xe892b6 */
  if (!zf) goto L_e892b6;
L_e892c5: /* e892c5: xor ecx, ecx */
  ecx = 0;
/* e892c7: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e892c9: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e892cc: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e892ce: jne 0xe89606 */
  if (!zf) goto L_e89606;
L_e892d4: /* e892d4: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e892d6: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* e892de: je 0xe892f6 */
  if (zf) goto L_e892f6;
L_e892e0: /* e892e0: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e892e2: je 0xe892f6 */
  if (zf) goto L_e892f6;
L_e892e4: /* e892e4: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* e892e6: mov ecx, edi */
  ecx = edi;
/* e892e8: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0xe892eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e892ee: mov ebp, dword ptr [0xeae268] */
  ebp = R32((uint32_t)(0xeae268u));
/* e892f4: jmp 0xe892f8 */
  goto L_e892f8;
L_e892f6: /* e892f6: mov eax, edi */
  eax = edi;
L_e892f8: /* e892f8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e892fa: je 0xe89602 */
  if (zf) goto L_e89602;
L_e89300: /* e89300: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* e89303: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89305: mov edx, dword ptr [0xeae274] */
  edx = R32((uint32_t)(0xeae274u));
/* e8930b: je 0xe8931b */
  if (zf) goto L_e8931b;
L_e8930d: /* e8930d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_e89310: /* e89310: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e89312: je 0xe8932a */
  if (zf) goto L_e8932a;
L_e89314: /* e89314: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* e89317: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89319: jne 0xe89310 */
  if (!zf) goto L_e89310;
L_e8931b: /* e8931b: xor ecx, ecx */
  ecx = 0;
/* e8931d: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8931f: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e89322: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89324: je 0xe89602 */
  if (zf) goto L_e89602;
L_e8932a: /* e8932a: mov esi, eax */
  esi = eax;
/* e8932c: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e89330: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89332: je 0xe89351 */
  if (zf) goto L_e89351;
L_e89334: /* e89334: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* e89337: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89339: je 0xe89351 */
  if (zf) goto L_e89351;
L_e8933b: /* e8933b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e8933d: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0xe89343u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e89343: mov ebp, dword ptr [0xeae268] */
  ebp = R32((uint32_t)(0xeae268u));
/* e89349: mov edx, dword ptr [0xeae274] */
  edx = R32((uint32_t)(0xeae274u));
/* e8934f: jmp 0xe89354 */
  goto L_e89354;
L_e89351: /* e89351: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
L_e89354: /* e89354: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89356: je 0xe8937a */
  if (zf) goto L_e8937a;
L_e89358: /* e89358: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* e8935b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8935d: je 0xe8936b */
  if (zf) goto L_e8936b;
L_e8935f: /* e8935f: nop  */
L_e89360: /* e89360: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e89362: je 0xe89376 */
  if (zf) goto L_e89376;
L_e89364: /* e89364: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* e89367: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89369: jne 0xe89360 */
  if (!zf) goto L_e89360;
L_e8936b: /* e8936b: xor ecx, ecx */
  ecx = 0;
/* e8936d: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8936f: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e89372: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89374: je 0xe8937a */
  if (zf) goto L_e8937a;
L_e89376: /* e89376: mov ebx, eax */
  ebx = eax;
/* e89378: jmp 0xe8937c */
  goto L_e8937c;
L_e8937a: /* e8937a: xor ebx, ebx */
  ebx = 0;
L_e8937c: /* e8937c: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e89380: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89382: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* e89386: je 0xe893a5 */
  if (zf) goto L_e893a5;
L_e89388: /* e89388: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* e8938b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8938d: je 0xe893a5 */
  if (zf) goto L_e893a5;
L_e8938f: /* e8938f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e89391: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0xe89397u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e89397: mov ebp, dword ptr [0xeae268] */
  ebp = R32((uint32_t)(0xeae268u));
/* e8939d: mov edx, dword ptr [0xeae274] */
  edx = R32((uint32_t)(0xeae274u));
/* e893a3: jmp 0xe893a8 */
  goto L_e893a8;
L_e893a5: /* e893a5: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
L_e893a8: /* e893a8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e893aa: je 0xe893d1 */
  if (zf) goto L_e893d1;
L_e893ac: /* e893ac: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* e893af: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e893b1: je 0xe893c2 */
  if (zf) goto L_e893c2;
L_e893b3: /* e893b3: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e893b5: je 0xe8932a */
  if (zf) goto L_e8932a;
L_e893bb: /* e893bb: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* e893be: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e893c0: jne 0xe893b3 */
  if (!zf) goto L_e893b3;
L_e893c2: /* e893c2: xor ecx, ecx */
  ecx = 0;
/* e893c4: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e893c6: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e893c9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e893cb: jne 0xe8932a */
  if (!zf) goto L_e8932a;
L_e893d1: /* e893d1: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e893d3: je 0xe89602 */
  if (zf) goto L_e89602;
L_e893d9: /* e893d9: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
/* e893dd: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e893df: je 0xe89602 */
  if (zf) goto L_e89602;
L_e893e5: /* e893e5: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e893e9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e893eb: mov esi, 1 */
  esi = 0x1u;
/* e893f0: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* e893f4: je 0xe89406 */
  if (zf) goto L_e89406;
L_e893f6: /* e893f6: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e893f8: je 0xe89406 */
  if (zf) goto L_e89406;
L_e893fa: /* e893fa: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* e893fc: mov ecx, edi */
  ecx = edi;
/* e893fe: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0xe89404u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e89404: jmp 0xe89408 */
  goto L_e89408;
L_e89406: /* e89406: mov eax, edi */
  eax = edi;
L_e89408: /* e89408: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e89409: call 0xe88110 */
  esp -= 4; W32(esp, 0xe8940eu); SPILL(); f_e88110(); if (g_unwind) return; RELOAD();
/* e8940e: mov ebp, eax */
  ebp = eax;
/* e89410: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e89413: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89415: je 0xe89602 */
  if (zf) goto L_e89602;
L_e8941b: /* e8941b: jmp 0xe89420 */
  goto L_e89420;
L_e89420: /* e89420: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* e89423: mov ecx, ebp */
  ecx = ebp;
/* e89425: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0xe8942bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8942b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8942d: je 0xe8943a */
  if (zf) goto L_e8943a;
L_e8942f: /* e8942f: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e89433: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89435: je 0xe8943a */
  if (zf) goto L_e8943a;
L_e89437: /* e89437: mov dword ptr [ebx + 0x78], ebp */
  W32((uint32_t)(ebx + 0x78u), ebp);
L_e8943a: /* e8943a: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* e8943d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8943f: mov ecx, dword ptr [0xeae278] */
  ecx = R32((uint32_t)(0xeae278u));
/* e89445: je 0xe89452 */
  if (zf) goto L_e89452;
L_e89447: /* e89447: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e89449: je 0xe8945d */
  if (zf) goto L_e8945d;
L_e8944b: /* e8944b: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e8944e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89450: jne 0xe89447 */
  if (!zf) goto L_e89447;
L_e89452: /* e89452: xor eax, eax */
  eax = 0;
/* e89454: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89456: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e89459: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8945b: je 0xe894d1 */
  if (zf) goto L_e894d1;
L_e8945d: /* e8945d: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* e89461: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* e89464: mov ecx, dword ptr [edx + 0x30] */
  ecx = R32((uint32_t)(edx + 0x30u));
/* e89467: mov edx, dword ptr [ecx + 0xb0] */
  edx = R32((uint32_t)(ecx + 0xb0u));
/* e8946d: mov ecx, dword ptr [edx + 0x3ac] */
  ecx = R32((uint32_t)(edx + 0x3acu));
/* e89473: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* e89476: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e89477: mov ecx, ebp */
  ecx = ebp;
/* e89479: call dword ptr [eax + 0x98] */
  { uint32_t t = R32((uint32_t)(eax + 0x98u)); esp -= 4; W32(esp, 0xe8947fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8947f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89481: je 0xe894a5 */
  if (zf) goto L_e894a5;
L_e89483: /* e89483: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e89486: mov esi, eax */
  esi = eax;
/* e89488: mov edi, esp */
  edi = esp;
/* e8948a: mov dword ptr [ebx], 1 */
  W32((uint32_t)(ebx), 0x1u);
/* e89490: mov ecx, 0x10 */
  ecx = 0x10u;
/* e89495: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e89497: lea ecx, [ebx + 0x10] */
  ecx = (uint32_t)(ebx + 0x10u);
/* e8949a: call dword ptr [0xeae0b8] */
  esp -= 4; W32(esp, 0xe894a0u); SPILL(); f_4e28a6(); if (g_unwind) return; /* Core!??XFMatrix@@QAEXV0@@Z */ RELOAD();
/* e894a0: mov esi, 1 */
  esi = 0x1u;
L_e894a5: /* e894a5: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e894a9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e894ab: je 0xe894d1 */
  if (zf) goto L_e894d1;
L_e894ad: /* e894ad: cmp byte ptr [ebp + 0x3c], 0xd */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x3cu))); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* e894b1: je 0xe894d1 */
  if (zf) goto L_e894d1;
L_e894b3: /* e894b3: mov dword ptr [ebx], esi */
  W32((uint32_t)(ebx), esi);
/* e894b5: mov dl, byte ptr [ebp + 0x3c] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x3cu))) & 0xffu);
/* e894b8: mov byte ptr [ebx + 0x50], dl */
  W8((uint32_t)(ebx + 0x50u), (edx & 0xffu));
/* e894bb: mov al, byte ptr [ebp + 0x3d] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x3du))) & 0xffu);
/* e894be: mov byte ptr [ebx + 0x51], al */
  W8((uint32_t)(ebx + 0x51u), (eax & 0xffu));
/* e894c1: mov ecx, dword ptr [ebp + 0x40] */
  ecx = R32((uint32_t)(ebp + 0x40u));
/* e894c4: and ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* e894c6: mov dword ptr [ebx + 0x54], ecx */
  W32((uint32_t)(ebx + 0x54u), ecx);
/* e894c9: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
L_e894d1: /* e894d1: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* e894d4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e894d6: mov ecx, dword ptr [0xeae27c] */
  ecx = R32((uint32_t)(0xeae27cu));
/* e894dc: je 0xe894eb */
  if (zf) goto L_e894eb;
L_e894de: /* e894de: mov edi, edi */
  edi = edi;
L_e894e0: /* e894e0: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e894e2: je 0xe894f6 */
  if (zf) goto L_e894f6;
L_e894e4: /* e894e4: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e894e7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e894e9: jne 0xe894e0 */
  if (!zf) goto L_e894e0;
L_e894eb: /* e894eb: xor eax, eax */
  eax = 0;
/* e894ed: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e894ef: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e894f2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e894f4: je 0xe8952d */
  if (zf) goto L_e8952d;
L_e894f6: /* e894f6: mov dword ptr [ebx + 4], esi */
  W32((uint32_t)(ebx + 0x4u), esi);
/* e894f9: mov dl, byte ptr [ebp + 0x3c] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x3cu))) & 0xffu);
/* e894fc: mov byte ptr [ebx + 0x58], dl */
  W8((uint32_t)(ebx + 0x58u), (edx & 0xffu));
/* e894ff: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* e89502: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e89504: mov dword ptr [ebx + 0x5c], eax */
  W32((uint32_t)(ebx + 0x5cu), eax);
/* e89507: mov ecx, dword ptr [ebp + 0x40] */
  ecx = R32((uint32_t)(ebp + 0x40u));
/* e8950a: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* e8950c: and ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* e8950e: mov dword ptr [ebx + 0x60], ecx */
  W32((uint32_t)(ebx + 0x60u), ecx);
/* e89511: mov edx, dword ptr [ebp + 0x40] */
  edx = R32((uint32_t)(ebp + 0x40u));
/* e89514: shr edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* e89517: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* e89519: mov dword ptr [ebx + 0x64], edx */
  W32((uint32_t)(ebx + 0x64u), edx);
/* e8951c: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* e8951f: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* e89522: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e89524: mov dword ptr [ebx + 0x68], eax */
  W32((uint32_t)(ebx + 0x68u), eax);
/* e89527: mov cl, byte ptr [ebp + 0x44] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x44u))) & 0xffu);
/* e8952a: mov byte ptr [ebx + 0x6c], cl */
  W8((uint32_t)(ebx + 0x6cu), (ecx & 0xffu));
L_e8952d: /* e8952d: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* e89530: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89532: mov ecx, dword ptr [0xeae280] */
  ecx = R32((uint32_t)(0xeae280u));
/* e89538: je 0xe8954b */
  if (zf) goto L_e8954b;
L_e8953a: /* e8953a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_e89540: /* e89540: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e89542: je 0xe89556 */
  if (zf) goto L_e89556;
L_e89544: /* e89544: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e89547: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89549: jne 0xe89540 */
  if (!zf) goto L_e89540;
L_e8954b: /* e8954b: xor eax, eax */
  eax = 0;
/* e8954d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8954f: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e89552: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89554: je 0xe8957b */
  if (zf) goto L_e8957b;
L_e89556: /* e89556: mov edi, dword ptr [ebx + 0x74] */
  edi = R32((uint32_t)(ebx + 0x74u));
/* e89559: mov ecx, dword ptr [ebx + 0x68] */
  ecx = R32((uint32_t)(ebx + 0x68u));
/* e8955c: mov dword ptr [ebx + 8], esi */
  W32((uint32_t)(ebx + 0x8u), esi);
/* e8955f: mov edx, dword ptr [ebp + 0x40] */
  edx = R32((uint32_t)(ebp + 0x40u));
/* e89562: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* e89564: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* e89566: or edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* e89568: mov dword ptr [ebx + 0x74], edi */
  W32((uint32_t)(ebx + 0x74u), edi);
/* e8956b: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* e8956e: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e89570: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* e89572: mov dword ptr [ebx + 0x68], ecx */
  W32((uint32_t)(ebx + 0x68u), ecx);
/* e89575: mov ecx, dword ptr [ebp + 0x3c] */
  ecx = R32((uint32_t)(ebp + 0x3cu));
/* e89578: mov dword ptr [ebx + 0x70], ecx */
  W32((uint32_t)(ebx + 0x70u), ecx);
L_e8957b: /* e8957b: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* e8957e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89580: mov ecx, dword ptr [0xeae284] */
  ecx = R32((uint32_t)(0xeae284u));
/* e89586: je 0xe89593 */
  if (zf) goto L_e89593;
L_e89588: /* e89588: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8958a: je 0xe8959e */
  if (zf) goto L_e8959e;
L_e8958c: /* e8958c: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e8958f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89591: jne 0xe89588 */
  if (!zf) goto L_e89588;
L_e89593: /* e89593: xor eax, eax */
  eax = 0;
/* e89595: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89597: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e8959a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8959c: je 0xe895b2 */
  if (zf) goto L_e895b2;
L_e8959e: /* e8959e: mov dword ptr [ebx + 0xc], esi */
  W32((uint32_t)(ebx + 0xcu), esi);
/* e895a1: mov edx, dword ptr [ebp + 0x3c] */
  edx = R32((uint32_t)(ebp + 0x3cu));
/* e895a4: mov dword ptr [ebx + 0x7c], edx */
  W32((uint32_t)(ebx + 0x7cu), edx);
/* e895a7: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* e895aa: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e895ac: mov dword ptr [ebx + 0x80], eax */
  W32((uint32_t)(ebx + 0x80u), eax);
L_e895b2: /* e895b2: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e895b6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e895b8: je 0xe895cb */
  if (zf) goto L_e895cb;
L_e895ba: /* e895ba: mov ecx, dword ptr [ebp + 0x38] */
  ecx = R32((uint32_t)(ebp + 0x38u));
/* e895bd: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e895bf: je 0xe895cb */
  if (zf) goto L_e895cb;
L_e895c1: /* e895c1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e895c3: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0xe895c9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e895c9: jmp 0xe895ce */
  goto L_e895ce;
L_e895cb: /* e895cb: mov eax, dword ptr [ebp + 0x38] */
  eax = R32((uint32_t)(ebp + 0x38u));
L_e895ce: /* e895ce: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e895d0: je 0xe89602 */
  if (zf) goto L_e89602;
L_e895d2: /* e895d2: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* e895d5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e895d7: mov esi, dword ptr [0xeae274] */
  esi = R32((uint32_t)(0xeae274u));
/* e895dd: je 0xe895eb */
  if (zf) goto L_e895eb;
L_e895df: /* e895df: nop  */
L_e895e0: /* e895e0: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e895e2: je 0xe895f6 */
  if (zf) goto L_e895f6;
L_e895e4: /* e895e4: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* e895e7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e895e9: jne 0xe895e0 */
  if (!zf) goto L_e895e0;
L_e895eb: /* e895eb: xor ecx, ecx */
  ecx = 0;
/* e895ed: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e895ef: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e895f2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e895f4: je 0xe89602 */
  if (zf) goto L_e89602;
L_e895f6: /* e895f6: mov ebp, eax */
  ebp = eax;
/* e895f8: mov esi, 1 */
  esi = 0x1u;
/* e895fd: jmp 0xe89420 */
  goto L_e89420;
L_e89602: /* e89602: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_e89606: /* e89606: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e89607: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e89608: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e89609: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e8960a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8960d: ret  */
  esp += 4; SPILL(); return;
}

void f_e8941d(void) {
  LOAD_REGS();
L_e8941d: /* e8941d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_e89420: /* e89420: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* e89423: mov ecx, ebp */
  ecx = ebp;
/* e89425: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0xe8942bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8942b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8942d: je 0xe8943a */
  if (zf) goto L_e8943a;
L_e8942f: /* e8942f: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e89433: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89435: je 0xe8943a */
  if (zf) goto L_e8943a;
L_e89437: /* e89437: mov dword ptr [ebx + 0x78], ebp */
  W32((uint32_t)(ebx + 0x78u), ebp);
L_e8943a: /* e8943a: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* e8943d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8943f: mov ecx, dword ptr [0xeae278] */
  ecx = R32((uint32_t)(0xeae278u));
/* e89445: je 0xe89452 */
  if (zf) goto L_e89452;
L_e89447: /* e89447: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e89449: je 0xe8945d */
  if (zf) goto L_e8945d;
L_e8944b: /* e8944b: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e8944e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89450: jne 0xe89447 */
  if (!zf) goto L_e89447;
L_e89452: /* e89452: xor eax, eax */
  eax = 0;
/* e89454: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89456: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e89459: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8945b: je 0xe894d1 */
  if (zf) goto L_e894d1;
L_e8945d: /* e8945d: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* e89461: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* e89464: mov ecx, dword ptr [edx + 0x30] */
  ecx = R32((uint32_t)(edx + 0x30u));
/* e89467: mov edx, dword ptr [ecx + 0xb0] */
  edx = R32((uint32_t)(ecx + 0xb0u));
/* e8946d: mov ecx, dword ptr [edx + 0x3ac] */
  ecx = R32((uint32_t)(edx + 0x3acu));
/* e89473: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* e89476: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e89477: mov ecx, ebp */
  ecx = ebp;
/* e89479: call dword ptr [eax + 0x98] */
  { uint32_t t = R32((uint32_t)(eax + 0x98u)); esp -= 4; W32(esp, 0xe8947fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8947f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89481: je 0xe894a5 */
  if (zf) goto L_e894a5;
L_e89483: /* e89483: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e89486: mov esi, eax */
  esi = eax;
/* e89488: mov edi, esp */
  edi = esp;
/* e8948a: mov dword ptr [ebx], 1 */
  W32((uint32_t)(ebx), 0x1u);
/* e89490: mov ecx, 0x10 */
  ecx = 0x10u;
/* e89495: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e89497: lea ecx, [ebx + 0x10] */
  ecx = (uint32_t)(ebx + 0x10u);
/* e8949a: call dword ptr [0xeae0b8] */
  esp -= 4; W32(esp, 0xe894a0u); SPILL(); f_4e28a6(); if (g_unwind) return; /* Core!??XFMatrix@@QAEXV0@@Z */ RELOAD();
/* e894a0: mov esi, 1 */
  esi = 0x1u;
L_e894a5: /* e894a5: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e894a9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e894ab: je 0xe894d1 */
  if (zf) goto L_e894d1;
L_e894ad: /* e894ad: cmp byte ptr [ebp + 0x3c], 0xd */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x3cu))); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* e894b1: je 0xe894d1 */
  if (zf) goto L_e894d1;
L_e894b3: /* e894b3: mov dword ptr [ebx], esi */
  W32((uint32_t)(ebx), esi);
/* e894b5: mov dl, byte ptr [ebp + 0x3c] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x3cu))) & 0xffu);
/* e894b8: mov byte ptr [ebx + 0x50], dl */
  W8((uint32_t)(ebx + 0x50u), (edx & 0xffu));
/* e894bb: mov al, byte ptr [ebp + 0x3d] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x3du))) & 0xffu);
/* e894be: mov byte ptr [ebx + 0x51], al */
  W8((uint32_t)(ebx + 0x51u), (eax & 0xffu));
/* e894c1: mov ecx, dword ptr [ebp + 0x40] */
  ecx = R32((uint32_t)(ebp + 0x40u));
/* e894c4: and ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* e894c6: mov dword ptr [ebx + 0x54], ecx */
  W32((uint32_t)(ebx + 0x54u), ecx);
/* e894c9: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
L_e894d1: /* e894d1: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* e894d4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e894d6: mov ecx, dword ptr [0xeae27c] */
  ecx = R32((uint32_t)(0xeae27cu));
/* e894dc: je 0xe894eb */
  if (zf) goto L_e894eb;
L_e894de: /* e894de: mov edi, edi */
  edi = edi;
L_e894e0: /* e894e0: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e894e2: je 0xe894f6 */
  if (zf) goto L_e894f6;
L_e894e4: /* e894e4: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e894e7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e894e9: jne 0xe894e0 */
  if (!zf) goto L_e894e0;
L_e894eb: /* e894eb: xor eax, eax */
  eax = 0;
/* e894ed: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e894ef: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e894f2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e894f4: je 0xe8952d */
  if (zf) goto L_e8952d;
L_e894f6: /* e894f6: mov dword ptr [ebx + 4], esi */
  W32((uint32_t)(ebx + 0x4u), esi);
/* e894f9: mov dl, byte ptr [ebp + 0x3c] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x3cu))) & 0xffu);
/* e894fc: mov byte ptr [ebx + 0x58], dl */
  W8((uint32_t)(ebx + 0x58u), (edx & 0xffu));
/* e894ff: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* e89502: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e89504: mov dword ptr [ebx + 0x5c], eax */
  W32((uint32_t)(ebx + 0x5cu), eax);
/* e89507: mov ecx, dword ptr [ebp + 0x40] */
  ecx = R32((uint32_t)(ebp + 0x40u));
/* e8950a: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* e8950c: and ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* e8950e: mov dword ptr [ebx + 0x60], ecx */
  W32((uint32_t)(ebx + 0x60u), ecx);
/* e89511: mov edx, dword ptr [ebp + 0x40] */
  edx = R32((uint32_t)(ebp + 0x40u));
/* e89514: shr edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* e89517: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* e89519: mov dword ptr [ebx + 0x64], edx */
  W32((uint32_t)(ebx + 0x64u), edx);
/* e8951c: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* e8951f: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* e89522: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e89524: mov dword ptr [ebx + 0x68], eax */
  W32((uint32_t)(ebx + 0x68u), eax);
/* e89527: mov cl, byte ptr [ebp + 0x44] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x44u))) & 0xffu);
/* e8952a: mov byte ptr [ebx + 0x6c], cl */
  W8((uint32_t)(ebx + 0x6cu), (ecx & 0xffu));
L_e8952d: /* e8952d: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* e89530: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89532: mov ecx, dword ptr [0xeae280] */
  ecx = R32((uint32_t)(0xeae280u));
/* e89538: je 0xe8954b */
  if (zf) goto L_e8954b;
L_e8953a: /* e8953a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_e89540: /* e89540: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e89542: je 0xe89556 */
  if (zf) goto L_e89556;
L_e89544: /* e89544: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e89547: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89549: jne 0xe89540 */
  if (!zf) goto L_e89540;
L_e8954b: /* e8954b: xor eax, eax */
  eax = 0;
/* e8954d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8954f: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e89552: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89554: je 0xe8957b */
  if (zf) goto L_e8957b;
L_e89556: /* e89556: mov edi, dword ptr [ebx + 0x74] */
  edi = R32((uint32_t)(ebx + 0x74u));
/* e89559: mov ecx, dword ptr [ebx + 0x68] */
  ecx = R32((uint32_t)(ebx + 0x68u));
/* e8955c: mov dword ptr [ebx + 8], esi */
  W32((uint32_t)(ebx + 0x8u), esi);
/* e8955f: mov edx, dword ptr [ebp + 0x40] */
  edx = R32((uint32_t)(ebp + 0x40u));
/* e89562: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* e89564: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* e89566: or edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* e89568: mov dword ptr [ebx + 0x74], edi */
  W32((uint32_t)(ebx + 0x74u), edi);
/* e8956b: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* e8956e: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e89570: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* e89572: mov dword ptr [ebx + 0x68], ecx */
  W32((uint32_t)(ebx + 0x68u), ecx);
/* e89575: mov ecx, dword ptr [ebp + 0x3c] */
  ecx = R32((uint32_t)(ebp + 0x3cu));
/* e89578: mov dword ptr [ebx + 0x70], ecx */
  W32((uint32_t)(ebx + 0x70u), ecx);
L_e8957b: /* e8957b: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* e8957e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89580: mov ecx, dword ptr [0xeae284] */
  ecx = R32((uint32_t)(0xeae284u));
/* e89586: je 0xe89593 */
  if (zf) goto L_e89593;
L_e89588: /* e89588: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8958a: je 0xe8959e */
  if (zf) goto L_e8959e;
L_e8958c: /* e8958c: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e8958f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89591: jne 0xe89588 */
  if (!zf) goto L_e89588;
L_e89593: /* e89593: xor eax, eax */
  eax = 0;
/* e89595: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89597: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e8959a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8959c: je 0xe895b2 */
  if (zf) goto L_e895b2;
L_e8959e: /* e8959e: mov dword ptr [ebx + 0xc], esi */
  W32((uint32_t)(ebx + 0xcu), esi);
/* e895a1: mov edx, dword ptr [ebp + 0x3c] */
  edx = R32((uint32_t)(ebp + 0x3cu));
/* e895a4: mov dword ptr [ebx + 0x7c], edx */
  W32((uint32_t)(ebx + 0x7cu), edx);
/* e895a7: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* e895aa: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e895ac: mov dword ptr [ebx + 0x80], eax */
  W32((uint32_t)(ebx + 0x80u), eax);
L_e895b2: /* e895b2: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e895b6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e895b8: je 0xe895cb */
  if (zf) goto L_e895cb;
L_e895ba: /* e895ba: mov ecx, dword ptr [ebp + 0x38] */
  ecx = R32((uint32_t)(ebp + 0x38u));
/* e895bd: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e895bf: je 0xe895cb */
  if (zf) goto L_e895cb;
L_e895c1: /* e895c1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e895c3: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0xe895c9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e895c9: jmp 0xe895ce */
  goto L_e895ce;
L_e895cb: /* e895cb: mov eax, dword ptr [ebp + 0x38] */
  eax = R32((uint32_t)(ebp + 0x38u));
L_e895ce: /* e895ce: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e895d0: je 0xe89602 */
  if (zf) goto L_e89602;
L_e895d2: /* e895d2: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* e895d5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e895d7: mov esi, dword ptr [0xeae274] */
  esi = R32((uint32_t)(0xeae274u));
/* e895dd: je 0xe895eb */
  if (zf) goto L_e895eb;
L_e895df: /* e895df: nop  */
L_e895e0: /* e895e0: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e895e2: je 0xe895f6 */
  if (zf) goto L_e895f6;
L_e895e4: /* e895e4: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* e895e7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e895e9: jne 0xe895e0 */
  if (!zf) goto L_e895e0;
L_e895eb: /* e895eb: xor ecx, ecx */
  ecx = 0;
/* e895ed: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e895ef: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e895f2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e895f4: je 0xe89602 */
  if (zf) goto L_e89602;
L_e895f6: /* e895f6: mov ebp, eax */
  ebp = eax;
/* e895f8: mov esi, 1 */
  esi = 0x1u;
/* e895fd: jmp 0xe89420 */
  goto L_e89420;
L_e89602: /* e89602: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e89606: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e89607: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e89608: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e89609: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e8960a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8960d: ret  */
  esp += 4; SPILL(); return;
}

void f_e89610(void) {
  LOAD_REGS();
L_e89610: /* e89610: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e89613: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e89614: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e89615: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e89616: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* e8961a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8961c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e8961d: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* e89621: je 0xe89633 */
  if (zf) goto L_e89633;
L_e89623: /* e89623: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89625: je 0xe89633 */
  if (zf) goto L_e89633;
L_e89627: /* e89627: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* e89629: mov ecx, edi */
  ecx = edi;
/* e8962b: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0xe89631u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e89631: jmp 0xe89635 */
  goto L_e89635;
L_e89633: /* e89633: mov eax, edi */
  eax = edi;
L_e89635: /* e89635: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89637: mov ebp, dword ptr [0xeae26c] */
  ebp = R32((uint32_t)(0xeae26cu));
/* e8963d: je 0xe89664 */
  if (zf) goto L_e89664;
L_e8963f: /* e8963f: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* e89642: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89644: je 0xe89655 */
  if (zf) goto L_e89655;
L_e89646: /* e89646: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e89648: je 0xe89996 */
  if (zf) goto L_e89996;
L_e8964e: /* e8964e: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* e89651: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89653: jne 0xe89646 */
  if (!zf) goto L_e89646;
L_e89655: /* e89655: xor ecx, ecx */
  ecx = 0;
/* e89657: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89659: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e8965c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8965e: jne 0xe89996 */
  if (!zf) goto L_e89996;
L_e89664: /* e89664: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89666: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* e8966e: je 0xe89686 */
  if (zf) goto L_e89686;
L_e89670: /* e89670: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89672: je 0xe89686 */
  if (zf) goto L_e89686;
L_e89674: /* e89674: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* e89676: mov ecx, edi */
  ecx = edi;
/* e89678: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0xe8967eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8967e: mov ebp, dword ptr [0xeae26c] */
  ebp = R32((uint32_t)(0xeae26cu));
/* e89684: jmp 0xe89688 */
  goto L_e89688;
L_e89686: /* e89686: mov eax, edi */
  eax = edi;
L_e89688: /* e89688: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8968a: je 0xe89992 */
  if (zf) goto L_e89992;
L_e89690: /* e89690: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* e89693: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89695: mov edx, dword ptr [0xeae274] */
  edx = R32((uint32_t)(0xeae274u));
/* e8969b: je 0xe896ab */
  if (zf) goto L_e896ab;
L_e8969d: /* e8969d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_e896a0: /* e896a0: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e896a2: je 0xe896ba */
  if (zf) goto L_e896ba;
L_e896a4: /* e896a4: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* e896a7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e896a9: jne 0xe896a0 */
  if (!zf) goto L_e896a0;
L_e896ab: /* e896ab: xor ecx, ecx */
  ecx = 0;
/* e896ad: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e896af: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e896b2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e896b4: je 0xe89992 */
  if (zf) goto L_e89992;
L_e896ba: /* e896ba: mov esi, eax */
  esi = eax;
/* e896bc: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e896c0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e896c2: je 0xe896e1 */
  if (zf) goto L_e896e1;
L_e896c4: /* e896c4: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* e896c7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e896c9: je 0xe896e1 */
  if (zf) goto L_e896e1;
L_e896cb: /* e896cb: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e896cd: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0xe896d3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e896d3: mov ebp, dword ptr [0xeae26c] */
  ebp = R32((uint32_t)(0xeae26cu));
/* e896d9: mov edx, dword ptr [0xeae274] */
  edx = R32((uint32_t)(0xeae274u));
/* e896df: jmp 0xe896e4 */
  goto L_e896e4;
L_e896e1: /* e896e1: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
L_e896e4: /* e896e4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e896e6: je 0xe8970a */
  if (zf) goto L_e8970a;
L_e896e8: /* e896e8: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* e896eb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e896ed: je 0xe896fb */
  if (zf) goto L_e896fb;
L_e896ef: /* e896ef: nop  */
L_e896f0: /* e896f0: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e896f2: je 0xe89706 */
  if (zf) goto L_e89706;
L_e896f4: /* e896f4: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* e896f7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e896f9: jne 0xe896f0 */
  if (!zf) goto L_e896f0;
L_e896fb: /* e896fb: xor ecx, ecx */
  ecx = 0;
/* e896fd: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e896ff: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e89702: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89704: je 0xe8970a */
  if (zf) goto L_e8970a;
L_e89706: /* e89706: mov ebx, eax */
  ebx = eax;
/* e89708: jmp 0xe8970c */
  goto L_e8970c;
L_e8970a: /* e8970a: xor ebx, ebx */
  ebx = 0;
L_e8970c: /* e8970c: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e89710: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89712: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* e89716: je 0xe89735 */
  if (zf) goto L_e89735;
L_e89718: /* e89718: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* e8971b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8971d: je 0xe89735 */
  if (zf) goto L_e89735;
L_e8971f: /* e8971f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e89721: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0xe89727u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e89727: mov ebp, dword ptr [0xeae26c] */
  ebp = R32((uint32_t)(0xeae26cu));
/* e8972d: mov edx, dword ptr [0xeae274] */
  edx = R32((uint32_t)(0xeae274u));
/* e89733: jmp 0xe89738 */
  goto L_e89738;
L_e89735: /* e89735: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
L_e89738: /* e89738: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8973a: je 0xe89761 */
  if (zf) goto L_e89761;
L_e8973c: /* e8973c: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* e8973f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89741: je 0xe89752 */
  if (zf) goto L_e89752;
L_e89743: /* e89743: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e89745: je 0xe896ba */
  if (zf) goto L_e896ba;
L_e8974b: /* e8974b: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* e8974e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89750: jne 0xe89743 */
  if (!zf) goto L_e89743;
L_e89752: /* e89752: xor ecx, ecx */
  ecx = 0;
/* e89754: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89756: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e89759: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8975b: jne 0xe896ba */
  if (!zf) goto L_e896ba;
L_e89761: /* e89761: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89763: je 0xe89992 */
  if (zf) goto L_e89992;
L_e89769: /* e89769: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
/* e8976d: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8976f: je 0xe89992 */
  if (zf) goto L_e89992;
L_e89775: /* e89775: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e89779: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8977b: mov esi, 1 */
  esi = 0x1u;
/* e89780: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* e89784: je 0xe89796 */
  if (zf) goto L_e89796;
L_e89786: /* e89786: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89788: je 0xe89796 */
  if (zf) goto L_e89796;
L_e8978a: /* e8978a: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* e8978c: mov ecx, edi */
  ecx = edi;
/* e8978e: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0xe89794u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e89794: jmp 0xe89798 */
  goto L_e89798;
L_e89796: /* e89796: mov eax, edi */
  eax = edi;
L_e89798: /* e89798: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e89799: call 0xe88110 */
  esp -= 4; W32(esp, 0xe8979eu); SPILL(); f_e88110(); if (g_unwind) return; RELOAD();
/* e8979e: mov ebp, eax */
  ebp = eax;
/* e897a0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e897a3: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e897a5: je 0xe89992 */
  if (zf) goto L_e89992;
L_e897ab: /* e897ab: jmp 0xe897b0 */
  goto L_e897b0;
L_e897b0: /* e897b0: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* e897b3: mov ecx, ebp */
  ecx = ebp;
/* e897b5: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0xe897bbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e897bb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e897bd: je 0xe897ca */
  if (zf) goto L_e897ca;
L_e897bf: /* e897bf: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e897c3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e897c5: je 0xe897ca */
  if (zf) goto L_e897ca;
L_e897c7: /* e897c7: mov dword ptr [ebx + 0x78], ebp */
  W32((uint32_t)(ebx + 0x78u), ebp);
L_e897ca: /* e897ca: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* e897cd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e897cf: mov ecx, dword ptr [0xeae278] */
  ecx = R32((uint32_t)(0xeae278u));
/* e897d5: je 0xe897e2 */
  if (zf) goto L_e897e2;
L_e897d7: /* e897d7: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e897d9: je 0xe897ed */
  if (zf) goto L_e897ed;
L_e897db: /* e897db: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e897de: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e897e0: jne 0xe897d7 */
  if (!zf) goto L_e897d7;
L_e897e2: /* e897e2: xor eax, eax */
  eax = 0;
/* e897e4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e897e6: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e897e9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e897eb: je 0xe89861 */
  if (zf) goto L_e89861;
L_e897ed: /* e897ed: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* e897f1: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* e897f4: mov ecx, dword ptr [edx + 0x30] */
  ecx = R32((uint32_t)(edx + 0x30u));
/* e897f7: mov edx, dword ptr [ecx + 0xb0] */
  edx = R32((uint32_t)(ecx + 0xb0u));
/* e897fd: mov ecx, dword ptr [edx + 0x3ac] */
  ecx = R32((uint32_t)(edx + 0x3acu));
/* e89803: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* e89806: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e89807: mov ecx, ebp */
  ecx = ebp;
/* e89809: call dword ptr [eax + 0x98] */
  { uint32_t t = R32((uint32_t)(eax + 0x98u)); esp -= 4; W32(esp, 0xe8980fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8980f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89811: je 0xe89835 */
  if (zf) goto L_e89835;
L_e89813: /* e89813: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e89816: mov esi, eax */
  esi = eax;
/* e89818: mov edi, esp */
  edi = esp;
/* e8981a: mov dword ptr [ebx], 1 */
  W32((uint32_t)(ebx), 0x1u);
/* e89820: mov ecx, 0x10 */
  ecx = 0x10u;
/* e89825: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e89827: lea ecx, [ebx + 0x10] */
  ecx = (uint32_t)(ebx + 0x10u);
/* e8982a: call dword ptr [0xeae0b8] */
  esp -= 4; W32(esp, 0xe89830u); SPILL(); f_4e28a6(); if (g_unwind) return; /* Core!??XFMatrix@@QAEXV0@@Z */ RELOAD();
/* e89830: mov esi, 1 */
  esi = 0x1u;
L_e89835: /* e89835: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e89839: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8983b: je 0xe89861 */
  if (zf) goto L_e89861;
L_e8983d: /* e8983d: cmp byte ptr [ebp + 0x3c], 0xd */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x3cu))); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* e89841: je 0xe89861 */
  if (zf) goto L_e89861;
L_e89843: /* e89843: mov dword ptr [ebx], esi */
  W32((uint32_t)(ebx), esi);
/* e89845: mov dl, byte ptr [ebp + 0x3c] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x3cu))) & 0xffu);
/* e89848: mov byte ptr [ebx + 0x50], dl */
  W8((uint32_t)(ebx + 0x50u), (edx & 0xffu));
/* e8984b: mov al, byte ptr [ebp + 0x3d] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x3du))) & 0xffu);
/* e8984e: mov byte ptr [ebx + 0x51], al */
  W8((uint32_t)(ebx + 0x51u), (eax & 0xffu));
/* e89851: mov ecx, dword ptr [ebp + 0x40] */
  ecx = R32((uint32_t)(ebp + 0x40u));
/* e89854: and ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* e89856: mov dword ptr [ebx + 0x54], ecx */
  W32((uint32_t)(ebx + 0x54u), ecx);
/* e89859: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
L_e89861: /* e89861: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* e89864: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89866: mov ecx, dword ptr [0xeae27c] */
  ecx = R32((uint32_t)(0xeae27cu));
/* e8986c: je 0xe8987b */
  if (zf) goto L_e8987b;
L_e8986e: /* e8986e: mov edi, edi */
  edi = edi;
L_e89870: /* e89870: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e89872: je 0xe89886 */
  if (zf) goto L_e89886;
L_e89874: /* e89874: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e89877: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89879: jne 0xe89870 */
  if (!zf) goto L_e89870;
L_e8987b: /* e8987b: xor eax, eax */
  eax = 0;
/* e8987d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8987f: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e89882: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89884: je 0xe898bd */
  if (zf) goto L_e898bd;
L_e89886: /* e89886: mov dword ptr [ebx + 4], esi */
  W32((uint32_t)(ebx + 0x4u), esi);
/* e89889: mov dl, byte ptr [ebp + 0x3c] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x3cu))) & 0xffu);
/* e8988c: mov byte ptr [ebx + 0x58], dl */
  W8((uint32_t)(ebx + 0x58u), (edx & 0xffu));
/* e8988f: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* e89892: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e89894: mov dword ptr [ebx + 0x5c], eax */
  W32((uint32_t)(ebx + 0x5cu), eax);
/* e89897: mov ecx, dword ptr [ebp + 0x40] */
  ecx = R32((uint32_t)(ebp + 0x40u));
/* e8989a: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* e8989c: and ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* e8989e: mov dword ptr [ebx + 0x60], ecx */
  W32((uint32_t)(ebx + 0x60u), ecx);
/* e898a1: mov edx, dword ptr [ebp + 0x40] */
  edx = R32((uint32_t)(ebp + 0x40u));
/* e898a4: shr edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* e898a7: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* e898a9: mov dword ptr [ebx + 0x64], edx */
  W32((uint32_t)(ebx + 0x64u), edx);
/* e898ac: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* e898af: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* e898b2: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e898b4: mov dword ptr [ebx + 0x68], eax */
  W32((uint32_t)(ebx + 0x68u), eax);
/* e898b7: mov cl, byte ptr [ebp + 0x44] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x44u))) & 0xffu);
/* e898ba: mov byte ptr [ebx + 0x6c], cl */
  W8((uint32_t)(ebx + 0x6cu), (ecx & 0xffu));
L_e898bd: /* e898bd: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* e898c0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e898c2: mov ecx, dword ptr [0xeae280] */
  ecx = R32((uint32_t)(0xeae280u));
/* e898c8: je 0xe898db */
  if (zf) goto L_e898db;
L_e898ca: /* e898ca: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_e898d0: /* e898d0: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e898d2: je 0xe898e6 */
  if (zf) goto L_e898e6;
L_e898d4: /* e898d4: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e898d7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e898d9: jne 0xe898d0 */
  if (!zf) goto L_e898d0;
L_e898db: /* e898db: xor eax, eax */
  eax = 0;
/* e898dd: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e898df: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e898e2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e898e4: je 0xe8990b */
  if (zf) goto L_e8990b;
L_e898e6: /* e898e6: mov edi, dword ptr [ebx + 0x74] */
  edi = R32((uint32_t)(ebx + 0x74u));
/* e898e9: mov ecx, dword ptr [ebx + 0x68] */
  ecx = R32((uint32_t)(ebx + 0x68u));
/* e898ec: mov dword ptr [ebx + 8], esi */
  W32((uint32_t)(ebx + 0x8u), esi);
/* e898ef: mov edx, dword ptr [ebp + 0x40] */
  edx = R32((uint32_t)(ebp + 0x40u));
/* e898f2: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* e898f4: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* e898f6: or edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* e898f8: mov dword ptr [ebx + 0x74], edi */
  W32((uint32_t)(ebx + 0x74u), edi);
/* e898fb: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* e898fe: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e89900: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* e89902: mov dword ptr [ebx + 0x68], ecx */
  W32((uint32_t)(ebx + 0x68u), ecx);
/* e89905: mov ecx, dword ptr [ebp + 0x3c] */
  ecx = R32((uint32_t)(ebp + 0x3cu));
/* e89908: mov dword ptr [ebx + 0x70], ecx */
  W32((uint32_t)(ebx + 0x70u), ecx);
L_e8990b: /* e8990b: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* e8990e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89910: mov ecx, dword ptr [0xeae284] */
  ecx = R32((uint32_t)(0xeae284u));
/* e89916: je 0xe89923 */
  if (zf) goto L_e89923;
L_e89918: /* e89918: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8991a: je 0xe8992e */
  if (zf) goto L_e8992e;
L_e8991c: /* e8991c: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e8991f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89921: jne 0xe89918 */
  if (!zf) goto L_e89918;
L_e89923: /* e89923: xor eax, eax */
  eax = 0;
/* e89925: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89927: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e8992a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8992c: je 0xe89942 */
  if (zf) goto L_e89942;
L_e8992e: /* e8992e: mov dword ptr [ebx + 0xc], esi */
  W32((uint32_t)(ebx + 0xcu), esi);
/* e89931: mov edx, dword ptr [ebp + 0x3c] */
  edx = R32((uint32_t)(ebp + 0x3cu));
/* e89934: mov dword ptr [ebx + 0x7c], edx */
  W32((uint32_t)(ebx + 0x7cu), edx);
/* e89937: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* e8993a: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e8993c: mov dword ptr [ebx + 0x80], eax */
  W32((uint32_t)(ebx + 0x80u), eax);
L_e89942: /* e89942: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e89946: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89948: je 0xe8995b */
  if (zf) goto L_e8995b;
L_e8994a: /* e8994a: mov ecx, dword ptr [ebp + 0x38] */
  ecx = R32((uint32_t)(ebp + 0x38u));
/* e8994d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8994f: je 0xe8995b */
  if (zf) goto L_e8995b;
L_e89951: /* e89951: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e89953: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0xe89959u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e89959: jmp 0xe8995e */
  goto L_e8995e;
L_e8995b: /* e8995b: mov eax, dword ptr [ebp + 0x38] */
  eax = R32((uint32_t)(ebp + 0x38u));
L_e8995e: /* e8995e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89960: je 0xe89992 */
  if (zf) goto L_e89992;
L_e89962: /* e89962: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* e89965: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89967: mov esi, dword ptr [0xeae274] */
  esi = R32((uint32_t)(0xeae274u));
/* e8996d: je 0xe8997b */
  if (zf) goto L_e8997b;
L_e8996f: /* e8996f: nop  */
L_e89970: /* e89970: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e89972: je 0xe89986 */
  if (zf) goto L_e89986;
L_e89974: /* e89974: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* e89977: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89979: jne 0xe89970 */
  if (!zf) goto L_e89970;
L_e8997b: /* e8997b: xor ecx, ecx */
  ecx = 0;
/* e8997d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8997f: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e89982: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89984: je 0xe89992 */
  if (zf) goto L_e89992;
L_e89986: /* e89986: mov ebp, eax */
  ebp = eax;
/* e89988: mov esi, 1 */
  esi = 0x1u;
/* e8998d: jmp 0xe897b0 */
  goto L_e897b0;
L_e89992: /* e89992: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_e89996: /* e89996: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e89997: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e89998: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e89999: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e8999a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8999d: ret  */
  esp += 4; SPILL(); return;
}

void f_e897ad(void) {
  LOAD_REGS();
L_e897ad: /* e897ad: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_e897b0: /* e897b0: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* e897b3: mov ecx, ebp */
  ecx = ebp;
/* e897b5: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0xe897bbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e897bb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e897bd: je 0xe897ca */
  if (zf) goto L_e897ca;
L_e897bf: /* e897bf: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e897c3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e897c5: je 0xe897ca */
  if (zf) goto L_e897ca;
L_e897c7: /* e897c7: mov dword ptr [ebx + 0x78], ebp */
  W32((uint32_t)(ebx + 0x78u), ebp);
L_e897ca: /* e897ca: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* e897cd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e897cf: mov ecx, dword ptr [0xeae278] */
  ecx = R32((uint32_t)(0xeae278u));
/* e897d5: je 0xe897e2 */
  if (zf) goto L_e897e2;
L_e897d7: /* e897d7: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e897d9: je 0xe897ed */
  if (zf) goto L_e897ed;
L_e897db: /* e897db: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e897de: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e897e0: jne 0xe897d7 */
  if (!zf) goto L_e897d7;
L_e897e2: /* e897e2: xor eax, eax */
  eax = 0;
/* e897e4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e897e6: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e897e9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e897eb: je 0xe89861 */
  if (zf) goto L_e89861;
L_e897ed: /* e897ed: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* e897f1: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* e897f4: mov ecx, dword ptr [edx + 0x30] */
  ecx = R32((uint32_t)(edx + 0x30u));
/* e897f7: mov edx, dword ptr [ecx + 0xb0] */
  edx = R32((uint32_t)(ecx + 0xb0u));
/* e897fd: mov ecx, dword ptr [edx + 0x3ac] */
  ecx = R32((uint32_t)(edx + 0x3acu));
/* e89803: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* e89806: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e89807: mov ecx, ebp */
  ecx = ebp;
/* e89809: call dword ptr [eax + 0x98] */
  { uint32_t t = R32((uint32_t)(eax + 0x98u)); esp -= 4; W32(esp, 0xe8980fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8980f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89811: je 0xe89835 */
  if (zf) goto L_e89835;
L_e89813: /* e89813: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e89816: mov esi, eax */
  esi = eax;
/* e89818: mov edi, esp */
  edi = esp;
/* e8981a: mov dword ptr [ebx], 1 */
  W32((uint32_t)(ebx), 0x1u);
/* e89820: mov ecx, 0x10 */
  ecx = 0x10u;
/* e89825: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e89827: lea ecx, [ebx + 0x10] */
  ecx = (uint32_t)(ebx + 0x10u);
/* e8982a: call dword ptr [0xeae0b8] */
  esp -= 4; W32(esp, 0xe89830u); SPILL(); f_4e28a6(); if (g_unwind) return; /* Core!??XFMatrix@@QAEXV0@@Z */ RELOAD();
/* e89830: mov esi, 1 */
  esi = 0x1u;
L_e89835: /* e89835: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e89839: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8983b: je 0xe89861 */
  if (zf) goto L_e89861;
L_e8983d: /* e8983d: cmp byte ptr [ebp + 0x3c], 0xd */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x3cu))); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* e89841: je 0xe89861 */
  if (zf) goto L_e89861;
L_e89843: /* e89843: mov dword ptr [ebx], esi */
  W32((uint32_t)(ebx), esi);
/* e89845: mov dl, byte ptr [ebp + 0x3c] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x3cu))) & 0xffu);
/* e89848: mov byte ptr [ebx + 0x50], dl */
  W8((uint32_t)(ebx + 0x50u), (edx & 0xffu));
/* e8984b: mov al, byte ptr [ebp + 0x3d] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x3du))) & 0xffu);
/* e8984e: mov byte ptr [ebx + 0x51], al */
  W8((uint32_t)(ebx + 0x51u), (eax & 0xffu));
/* e89851: mov ecx, dword ptr [ebp + 0x40] */
  ecx = R32((uint32_t)(ebp + 0x40u));
/* e89854: and ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* e89856: mov dword ptr [ebx + 0x54], ecx */
  W32((uint32_t)(ebx + 0x54u), ecx);
/* e89859: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
L_e89861: /* e89861: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* e89864: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89866: mov ecx, dword ptr [0xeae27c] */
  ecx = R32((uint32_t)(0xeae27cu));
/* e8986c: je 0xe8987b */
  if (zf) goto L_e8987b;
L_e8986e: /* e8986e: mov edi, edi */
  edi = edi;
L_e89870: /* e89870: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e89872: je 0xe89886 */
  if (zf) goto L_e89886;
L_e89874: /* e89874: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e89877: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89879: jne 0xe89870 */
  if (!zf) goto L_e89870;
L_e8987b: /* e8987b: xor eax, eax */
  eax = 0;
/* e8987d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8987f: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e89882: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89884: je 0xe898bd */
  if (zf) goto L_e898bd;
L_e89886: /* e89886: mov dword ptr [ebx + 4], esi */
  W32((uint32_t)(ebx + 0x4u), esi);
/* e89889: mov dl, byte ptr [ebp + 0x3c] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x3cu))) & 0xffu);
/* e8988c: mov byte ptr [ebx + 0x58], dl */
  W8((uint32_t)(ebx + 0x58u), (edx & 0xffu));
/* e8988f: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* e89892: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e89894: mov dword ptr [ebx + 0x5c], eax */
  W32((uint32_t)(ebx + 0x5cu), eax);
/* e89897: mov ecx, dword ptr [ebp + 0x40] */
  ecx = R32((uint32_t)(ebp + 0x40u));
/* e8989a: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* e8989c: and ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* e8989e: mov dword ptr [ebx + 0x60], ecx */
  W32((uint32_t)(ebx + 0x60u), ecx);
/* e898a1: mov edx, dword ptr [ebp + 0x40] */
  edx = R32((uint32_t)(ebp + 0x40u));
/* e898a4: shr edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* e898a7: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* e898a9: mov dword ptr [ebx + 0x64], edx */
  W32((uint32_t)(ebx + 0x64u), edx);
/* e898ac: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* e898af: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* e898b2: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e898b4: mov dword ptr [ebx + 0x68], eax */
  W32((uint32_t)(ebx + 0x68u), eax);
/* e898b7: mov cl, byte ptr [ebp + 0x44] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x44u))) & 0xffu);
/* e898ba: mov byte ptr [ebx + 0x6c], cl */
  W8((uint32_t)(ebx + 0x6cu), (ecx & 0xffu));
L_e898bd: /* e898bd: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* e898c0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e898c2: mov ecx, dword ptr [0xeae280] */
  ecx = R32((uint32_t)(0xeae280u));
/* e898c8: je 0xe898db */
  if (zf) goto L_e898db;
L_e898ca: /* e898ca: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_e898d0: /* e898d0: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e898d2: je 0xe898e6 */
  if (zf) goto L_e898e6;
L_e898d4: /* e898d4: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e898d7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e898d9: jne 0xe898d0 */
  if (!zf) goto L_e898d0;
L_e898db: /* e898db: xor eax, eax */
  eax = 0;
/* e898dd: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e898df: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e898e2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e898e4: je 0xe8990b */
  if (zf) goto L_e8990b;
L_e898e6: /* e898e6: mov edi, dword ptr [ebx + 0x74] */
  edi = R32((uint32_t)(ebx + 0x74u));
/* e898e9: mov ecx, dword ptr [ebx + 0x68] */
  ecx = R32((uint32_t)(ebx + 0x68u));
/* e898ec: mov dword ptr [ebx + 8], esi */
  W32((uint32_t)(ebx + 0x8u), esi);
/* e898ef: mov edx, dword ptr [ebp + 0x40] */
  edx = R32((uint32_t)(ebp + 0x40u));
/* e898f2: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* e898f4: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* e898f6: or edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* e898f8: mov dword ptr [ebx + 0x74], edi */
  W32((uint32_t)(ebx + 0x74u), edi);
/* e898fb: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* e898fe: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e89900: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* e89902: mov dword ptr [ebx + 0x68], ecx */
  W32((uint32_t)(ebx + 0x68u), ecx);
/* e89905: mov ecx, dword ptr [ebp + 0x3c] */
  ecx = R32((uint32_t)(ebp + 0x3cu));
/* e89908: mov dword ptr [ebx + 0x70], ecx */
  W32((uint32_t)(ebx + 0x70u), ecx);
L_e8990b: /* e8990b: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* e8990e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89910: mov ecx, dword ptr [0xeae284] */
  ecx = R32((uint32_t)(0xeae284u));
/* e89916: je 0xe89923 */
  if (zf) goto L_e89923;
L_e89918: /* e89918: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8991a: je 0xe8992e */
  if (zf) goto L_e8992e;
L_e8991c: /* e8991c: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* e8991f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89921: jne 0xe89918 */
  if (!zf) goto L_e89918;
L_e89923: /* e89923: xor eax, eax */
  eax = 0;
/* e89925: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89927: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e8992a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8992c: je 0xe89942 */
  if (zf) goto L_e89942;
L_e8992e: /* e8992e: mov dword ptr [ebx + 0xc], esi */
  W32((uint32_t)(ebx + 0xcu), esi);
/* e89931: mov edx, dword ptr [ebp + 0x3c] */
  edx = R32((uint32_t)(ebp + 0x3cu));
/* e89934: mov dword ptr [ebx + 0x7c], edx */
  W32((uint32_t)(ebx + 0x7cu), edx);
/* e89937: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* e8993a: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e8993c: mov dword ptr [ebx + 0x80], eax */
  W32((uint32_t)(ebx + 0x80u), eax);
L_e89942: /* e89942: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e89946: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89948: je 0xe8995b */
  if (zf) goto L_e8995b;
L_e8994a: /* e8994a: mov ecx, dword ptr [ebp + 0x38] */
  ecx = R32((uint32_t)(ebp + 0x38u));
/* e8994d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8994f: je 0xe8995b */
  if (zf) goto L_e8995b;
L_e89951: /* e89951: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e89953: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0xe89959u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e89959: jmp 0xe8995e */
  goto L_e8995e;
L_e8995b: /* e8995b: mov eax, dword ptr [ebp + 0x38] */
  eax = R32((uint32_t)(ebp + 0x38u));
L_e8995e: /* e8995e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89960: je 0xe89992 */
  if (zf) goto L_e89992;
L_e89962: /* e89962: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* e89965: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89967: mov esi, dword ptr [0xeae274] */
  esi = R32((uint32_t)(0xeae274u));
/* e8996d: je 0xe8997b */
  if (zf) goto L_e8997b;
L_e8996f: /* e8996f: nop  */
L_e89970: /* e89970: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e89972: je 0xe89986 */
  if (zf) goto L_e89986;
L_e89974: /* e89974: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* e89977: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89979: jne 0xe89970 */
  if (!zf) goto L_e89970;
L_e8997b: /* e8997b: xor ecx, ecx */
  ecx = 0;
/* e8997d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8997f: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e89982: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89984: je 0xe89992 */
  if (zf) goto L_e89992;
L_e89986: /* e89986: mov ebp, eax */
  ebp = eax;
/* e89988: mov esi, 1 */
  esi = 0x1u;
/* e8998d: jmp 0xe897b0 */
  goto L_e897b0;
L_e89992: /* e89992: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e89996: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e89997: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e89998: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e89999: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e8999a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8999d: ret  */
  esp += 4; SPILL(); return;
}

void f_e899a0(void) {
  LOAD_REGS();
L_e899a0: /* e899a0: sub esp, 0x128 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x128u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e899a6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e899a7: mov ebx, dword ptr [esp + 0x130] */
  ebx = R32((uint32_t)(esp + 0x130u));
/* e899ae: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e899af: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e899b0: mov ebp, ecx */
  ebp = ecx;
/* e899b2: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* e899b5: mov esi, dword ptr [eax + 0x41e0] */
  esi = R32((uint32_t)(eax + 0x41e0u));
/* e899bb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e899bc: mov edi, dword ptr [eax + 0x41e4] */
  edi = R32((uint32_t)(eax + 0x41e4u));
/* e899c2: sub esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* e899c4: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e899c6: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* e899ca: je 0xe8abc2 */
  if (zf) goto L_e8abc2;
L_e899d0: /* e899d0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e899d2: lea eax, [esp + 0x150] */
  eax = (uint32_t)(esp + 0x150u);
/* e899d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e899da: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e899db: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e899dc: call 0xe88440 */
  esp -= 4; W32(esp, 0xe899e1u); SPILL(); f_e88440(); if (g_unwind) return; RELOAD();
/* e899e1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e899e4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e899e6: je 0xe89adb */
  if (zf) goto L_e89adb;
L_e899ec: /* e899ec: mov eax, dword ptr [esp + 0x144] */
  eax = R32((uint32_t)(esp + 0x144u));
/* e899f3: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e899f5: lea edx, [esi + edi] */
  edx = (uint32_t)(esi + edi);
/* e899f8: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e899fa: jl 0xe89a32 */
  if ((sf != of)) goto L_e89a32;
L_e899fc: /* e899fc: mov ecx, dword ptr [esp + 0x1d4] */
  ecx = R32((uint32_t)(esp + 0x1d4u));
/* e89a03: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89a05: je 0xe89a12 */
  if (zf) goto L_e89a12;
L_e89a07: /* e89a07: push 0xeaecb0 */
  { uint32_t v = 0xeaecb0u; esp -= 4; W32(esp, v); }
/* e89a0c: call dword ptr [0xeae0bc] */
  esp -= 4; W32(esp, 0xe89a12u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
L_e89a12: /* e89a12: mov eax, dword ptr [esp + 0x1d8] */
  eax = R32((uint32_t)(esp + 0x1d8u));
/* e89a19: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89a1b: je 0xe8aac8 */
  if (zf) goto L_e8aac8;
L_e89a21: /* e89a21: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* e89a23: xor eax, eax */
  eax = 0;
/* e89a25: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e89a26: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e89a27: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e89a28: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e89a29: add esp, 0x128 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x128u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e89a2f: ret 0xa0 */
  esp += 164; SPILL(); return;
L_e89a32: /* e89a32: mov ebx, dword ptr [ebp + 0x2b00c] */
  ebx = R32((uint32_t)(ebp + 0x2b00cu));
/* e89a38: imul ecx, ecx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x84u);
  ecx = (uint32_t)r;
  }
/* e89a3e: mov edx, dword ptr [esp + 0x140] */
  edx = R32((uint32_t)(esp + 0x140u));
/* e89a45: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* e89a47: mov edi, dword ptr [ebx + edi*4 + 0x52c] */
  edi = R32((uint32_t)(ebx + edi*4 + 0x52cu));
/* e89a4e: mov dword ptr [edi + ecx + 0x68], 1 */
  W32((uint32_t)(edi + ecx + 0x68u), 0x1u);
/* e89a56: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* e89a58: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* e89a5a: imul ebx, ebx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0x84u);
  ebx = (uint32_t)r;
  }
/* e89a60: mov edi, dword ptr [ebp + 0x2b00c] */
  edi = R32((uint32_t)(ebp + 0x2b00cu));
/* e89a66: mov ecx, dword ptr [edi + ecx*4 + 0x52c] */
  ecx = R32((uint32_t)(edi + ecx*4 + 0x52cu));
/* e89a6d: mov dword ptr [ecx + ebx + 0x50], 3 */
  W32((uint32_t)(ecx + ebx + 0x50u), 0x3u);
/* e89a75: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* e89a77: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* e89a79: imul ebx, ebx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0x84u);
  ebx = (uint32_t)r;
  }
/* e89a7f: mov edi, dword ptr [ebp + 0x2b00c] */
  edi = R32((uint32_t)(ebp + 0x2b00cu));
/* e89a85: mov ecx, dword ptr [edi + ecx*4 + 0x52c] */
  ecx = R32((uint32_t)(edi + ecx*4 + 0x52cu));
/* e89a8c: mov dword ptr [ecx + ebx + 0x58], 0 */
  W32((uint32_t)(ecx + ebx + 0x58u), 0x0u);
/* e89a94: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* e89a96: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e89a9c: imul edi, edi, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x84u);
  edi = (uint32_t)r;
  }
/* e89aa2: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* e89aa4: mov edx, dword ptr [ecx + edx*4 + 0x52c] */
  edx = R32((uint32_t)(ecx + edx*4 + 0x52cu));
/* e89aab: mov dword ptr [edx + edi + 0x4c], 2 */
  W32((uint32_t)(edx + edi + 0x4cu), 0x2u);
/* e89ab3: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e89ab5: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* e89ab6: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89ab8: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* e89aba: je 0xe8abc2 */
  if (zf) goto L_e8abc2;
L_e89ac0: /* e89ac0: mov eax, dword ptr [esp + 0x148] */
  eax = R32((uint32_t)(esp + 0x148u));
/* e89ac7: inc dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax), r);
  }
/* e89ac9: mov eax, 1 */
  eax = 0x1u;
/* e89ace: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e89acf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e89ad0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e89ad1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e89ad2: add esp, 0x128 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x128u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e89ad8: ret 0xa0 */
  esp += 164; SPILL(); return;
L_e89adb: /* e89adb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e89add: lea eax, [esp + 0x150] */
  eax = (uint32_t)(esp + 0x150u);
/* e89ae4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e89ae5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e89ae6: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e89ae7: call 0xe887d0 */
  esp -= 4; W32(esp, 0xe89aecu); SPILL(); f_e887d0(); if (g_unwind) return; RELOAD();
/* e89aec: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e89aef: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89af1: je 0xe89c59 */
  if (zf) goto L_e89c59;
L_e89af7: /* e89af7: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* e89afa: mov ecx, dword ptr [ecx + 0x30] */
  ecx = R32((uint32_t)(ecx + 0x30u));
/* e89afd: mov ecx, dword ptr [ecx + 0xb0] */
  ecx = R32((uint32_t)(ecx + 0xb0u));
/* e89b03: mov ecx, dword ptr [ecx + 0x3ac] */
  ecx = R32((uint32_t)(ecx + 0x3acu));
/* e89b09: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e89b0b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e89b0c: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* e89b10: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e89b11: mov ecx, eax */
  ecx = eax;
/* e89b13: call dword ptr [edx + 0x98] */
  { uint32_t t = R32((uint32_t)(edx + 0x98u)); esp -= 4; W32(esp, 0xe89b19u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e89b19: mov ecx, dword ptr [esp + 0x140] */
  ecx = R32((uint32_t)(esp + 0x140u));
/* e89b20: mov eax, dword ptr [ebp + 0x2b00c] */
  eax = R32((uint32_t)(ebp + 0x2b00cu));
/* e89b26: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e89b28: mov edx, dword ptr [eax + edx*4 + 0x52c] */
  edx = R32((uint32_t)(eax + edx*4 + 0x52cu));
/* e89b2f: mov eax, dword ptr [edx + 0x20] */
  eax = R32((uint32_t)(edx + 0x20u));
/* e89b32: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89b34: je 0xe89b72 */
  if (zf) goto L_e89b72;
L_e89b36: /* e89b36: cmp eax, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e89b3a: je 0xe89b72 */
  if (zf) goto L_e89b72;
L_e89b3c: /* e89b3c: mov ecx, dword ptr [esp + 0x1d4] */
  ecx = R32((uint32_t)(esp + 0x1d4u));
/* e89b43: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89b45: je 0xe89b52 */
  if (zf) goto L_e89b52;
L_e89b47: /* e89b47: push 0xeaec48 */
  { uint32_t v = 0xeaec48u; esp -= 4; W32(esp, v); }
/* e89b4c: call dword ptr [0xeae0bc] */
  esp -= 4; W32(esp, 0xe89b52u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
L_e89b52: /* e89b52: mov eax, dword ptr [esp + 0x1d8] */
  eax = R32((uint32_t)(esp + 0x1d8u));
/* e89b59: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89b5b: je 0xe8aac8 */
  if (zf) goto L_e8aac8;
L_e89b61: /* e89b61: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* e89b63: xor eax, eax */
  eax = 0;
/* e89b65: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e89b66: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e89b67: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e89b68: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e89b69: add esp, 0x128 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x128u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e89b6f: ret 0xa0 */
  esp += 164; SPILL(); return;
L_e89b72: /* e89b72: mov eax, dword ptr [esp + 0x144] */
  eax = R32((uint32_t)(esp + 0x144u));
/* e89b79: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* e89b7b: cmp dword ptr [eax], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e89b7d: jl 0xe89bb5 */
  if ((sf != of)) goto L_e89bb5;
L_e89b7f: /* e89b7f: mov ecx, dword ptr [esp + 0x1d4] */
  ecx = R32((uint32_t)(esp + 0x1d4u));
/* e89b86: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89b88: je 0xe89b95 */
  if (zf) goto L_e89b95;
L_e89b8a: /* e89b8a: push 0xeaec00 */
  { uint32_t v = 0xeaec00u; esp -= 4; W32(esp, v); }
/* e89b8f: call dword ptr [0xeae0bc] */
  esp -= 4; W32(esp, 0xe89b95u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
L_e89b95: /* e89b95: mov eax, dword ptr [esp + 0x1d8] */
  eax = R32((uint32_t)(esp + 0x1d8u));
/* e89b9c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89b9e: je 0xe8aac8 */
  if (zf) goto L_e8aac8;
L_e89ba4: /* e89ba4: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* e89ba6: xor eax, eax */
  eax = 0;
/* e89ba8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e89ba9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e89baa: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e89bab: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e89bac: add esp, 0x128 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x128u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e89bb2: ret 0xa0 */
  esp += 164; SPILL(); return;
L_e89bb5: /* e89bb5: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* e89bb9: mov dword ptr [edx + 0x20], edi */
  W32((uint32_t)(edx + 0x20u), edi);
/* e89bbc: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* e89bbe: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e89bc0: imul ebx, ebx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0x84u);
  ebx = (uint32_t)r;
  }
/* e89bc6: mov edi, dword ptr [ebp + 0x2b00c] */
  edi = R32((uint32_t)(ebp + 0x2b00cu));
/* e89bcc: mov edx, dword ptr [edi + edx*4 + 0x52c] */
  edx = R32((uint32_t)(edi + edx*4 + 0x52cu));
/* e89bd3: mov dword ptr [edx + ebx + 0x64], 3 */
  W32((uint32_t)(edx + ebx + 0x64u), 0x3u);
/* e89bdb: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* e89bdd: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e89bdf: imul ebx, ebx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0x84u);
  ebx = (uint32_t)r;
  }
/* e89be5: mov edi, dword ptr [ebp + 0x2b00c] */
  edi = R32((uint32_t)(ebp + 0x2b00cu));
/* e89beb: mov edx, dword ptr [edi + edx*4 + 0x52c] */
  edx = R32((uint32_t)(edi + edx*4 + 0x52cu));
/* e89bf2: mov dword ptr [edx + ebx + 0x50], 2 */
  W32((uint32_t)(edx + ebx + 0x50u), 0x2u);
/* e89bfa: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* e89bfc: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e89bfe: imul ebx, ebx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0x84u);
  ebx = (uint32_t)r;
  }
/* e89c04: mov edi, dword ptr [ebp + 0x2b00c] */
  edi = R32((uint32_t)(ebp + 0x2b00cu));
/* e89c0a: mov edx, dword ptr [edi + edx*4 + 0x52c] */
  edx = R32((uint32_t)(edi + edx*4 + 0x52cu));
/* e89c11: mov dword ptr [edx + ebx + 0x58], 3 */
  W32((uint32_t)(edx + ebx + 0x58u), 0x3u);
/* e89c19: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* e89c1b: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* e89c1d: imul edi, edi, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x84u);
  edi = (uint32_t)r;
  }
/* e89c23: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89c25: mov edx, dword ptr [ebp + 0x2b00c] */
  edx = R32((uint32_t)(ebp + 0x2b00cu));
/* e89c2b: mov ecx, dword ptr [edx + ecx*4 + 0x52c] */
  ecx = R32((uint32_t)(edx + ecx*4 + 0x52cu));
/* e89c32: mov dword ptr [ecx + edi + 0x4c], 2 */
  W32((uint32_t)(ecx + edi + 0x4cu), 0x2u);
/* e89c3a: je 0xe89c45 */
  if (zf) goto L_e89c45;
L_e89c3c: /* e89c3c: mov ecx, dword ptr [esp + 0x148] */
  ecx = R32((uint32_t)(esp + 0x148u));
/* e89c43: inc dword ptr [ecx] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ecx), r);
  }
L_e89c45: /* e89c45: inc dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax), r);
  }
/* e89c47: mov eax, 1 */
  eax = 0x1u;
/* e89c4c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e89c4d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e89c4e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e89c4f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e89c50: add esp, 0x128 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x128u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e89c56: ret 0xa0 */
  esp += 164; SPILL(); return;
L_e89c59: /* e89c59: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e89c5b: lea edx, [esp + 0x150] */
  edx = (uint32_t)(esp + 0x150u);
/* e89c62: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e89c63: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e89c64: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e89c65: call 0xe88b60 */
  esp -= 4; W32(esp, 0xe89c6au); SPILL(); f_e88b60(); if (g_unwind) return; RELOAD();
/* e89c6a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e89c6d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89c6f: je 0xe89dad */
  if (zf) goto L_e89dad;
L_e89c75: /* e89c75: mov edx, dword ptr [esp + 0x148] */
  edx = R32((uint32_t)(esp + 0x148u));
/* e89c7c: mov esi, dword ptr [esp + 0x144] */
  esi = R32((uint32_t)(esp + 0x144u));
/* e89c83: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* e89c85: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* e89c87: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e89c89: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e89c8b: jl 0xe89cc3 */
  if ((sf != of)) goto L_e89cc3;
L_e89c8d: /* e89c8d: mov ecx, dword ptr [esp + 0x1d4] */
  ecx = R32((uint32_t)(esp + 0x1d4u));
/* e89c94: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89c96: je 0xe89ca3 */
  if (zf) goto L_e89ca3;
L_e89c98: /* e89c98: push 0xeaebb8 */
  { uint32_t v = 0xeaebb8u; esp -= 4; W32(esp, v); }
/* e89c9d: call dword ptr [0xeae0bc] */
  esp -= 4; W32(esp, 0xe89ca3u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
L_e89ca3: /* e89ca3: mov eax, dword ptr [esp + 0x1d8] */
  eax = R32((uint32_t)(esp + 0x1d8u));
/* e89caa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89cac: je 0xe8aac8 */
  if (zf) goto L_e8aac8;
L_e89cb2: /* e89cb2: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* e89cb4: xor eax, eax */
  eax = 0;
/* e89cb6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e89cb7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e89cb8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e89cb9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e89cba: add esp, 0x128 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x128u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e89cc0: ret 0xa0 */
  esp += 164; SPILL(); return;
L_e89cc3: /* e89cc3: mov edi, dword ptr [esp + 0x140] */
  edi = R32((uint32_t)(esp + 0x140u));
/* e89cca: imul ecx, ecx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x84u);
  ecx = (uint32_t)r;
  }
/* e89cd0: mov edx, dword ptr [ebp + 0x2b00c] */
  edx = R32((uint32_t)(ebp + 0x2b00cu));
/* e89cd6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e89cd7: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* e89cd9: mov eax, dword ptr [edx + eax*4 + 0x52c] */
  eax = R32((uint32_t)(edx + eax*4 + 0x52cu));
/* e89ce0: lea ecx, [eax + ecx + 0x38] */
  ecx = (uint32_t)(eax + ecx + 0x38u);
/* e89ce4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e89ce5: mov ecx, ebp */
  ecx = ebp;
/* e89ce7: call 0xe87c50 */
  esp -= 4; W32(esp, 0xe89cecu); SPILL(); f_e87c50(); if (g_unwind) return; RELOAD();
/* e89cec: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* e89cee: mov edx, dword ptr [esp + 0x1d0] */
  edx = R32((uint32_t)(esp + 0x1d0u));
/* e89cf5: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e89cfb: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* e89cfd: mov eax, dword ptr [ecx + eax*4 + 0x52c] */
  eax = R32((uint32_t)(ecx + eax*4 + 0x52cu));
/* e89d04: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  edx = r;
  }
/* e89d06: sbb edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edx = r;
  }
/* e89d08: imul ebx, ebx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0x84u);
  ebx = (uint32_t)r;
  }
/* e89d0e: and edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* e89d11: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e89d14: mov dword ptr [eax + ebx + 0x64], edx */
  W32((uint32_t)(eax + ebx + 0x64u), edx);
/* e89d18: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* e89d1a: mov edx, dword ptr [ebp + 0x2b00c] */
  edx = R32((uint32_t)(ebp + 0x2b00cu));
/* e89d20: imul ebx, ebx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0x84u);
  ebx = (uint32_t)r;
  }
/* e89d26: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* e89d28: mov ecx, dword ptr [edx + ecx*4 + 0x52c] */
  ecx = R32((uint32_t)(edx + ecx*4 + 0x52cu));
/* e89d2f: mov eax, 2 */
  eax = 0x2u;
/* e89d34: mov dword ptr [ecx + ebx + 0x50], eax */
  W32((uint32_t)(ecx + ebx + 0x50u), eax);
/* e89d38: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* e89d3a: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e89d40: imul ebx, ebx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0x84u);
  ebx = (uint32_t)r;
  }
/* e89d46: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* e89d48: mov edx, dword ptr [ecx + edx*4 + 0x52c] */
  edx = R32((uint32_t)(ecx + edx*4 + 0x52cu));
/* e89d4f: mov dword ptr [edx + ebx + 0x58], eax */
  W32((uint32_t)(edx + ebx + 0x58u), eax);
/* e89d53: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* e89d55: mov edx, dword ptr [ebp + 0x2b00c] */
  edx = R32((uint32_t)(ebp + 0x2b00cu));
/* e89d5b: imul ebx, ebx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0x84u);
  ebx = (uint32_t)r;
  }
/* e89d61: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* e89d63: mov ecx, dword ptr [edx + ecx*4 + 0x52c] */
  ecx = R32((uint32_t)(edx + ecx*4 + 0x52cu));
/* e89d6a: mov dword ptr [ecx + ebx + 0x4c], eax */
  W32((uint32_t)(ecx + ebx + 0x4cu), eax);
/* e89d6e: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e89d74: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* e89d76: mov eax, dword ptr [ecx + eax*4 + 0x52c] */
  eax = R32((uint32_t)(ecx + eax*4 + 0x52cu));
/* e89d7d: lea edx, [esp + 0x14c] */
  edx = (uint32_t)(esp + 0x14cu);
/* e89d84: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e89d85: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* e89d87: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e89d8d: lea ecx, [eax + edx + 0x38] */
  ecx = (uint32_t)(eax + edx + 0x38u);
/* e89d91: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e89d92: mov ecx, ebp */
  ecx = ebp;
/* e89d94: call 0xe88140 */
  esp -= 4; W32(esp, 0xe89d99u); SPILL(); f_e88140(); if (g_unwind) return; RELOAD();
/* e89d99: inc dword ptr [esi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi), r);
  }
/* e89d9b: mov eax, 1 */
  eax = 0x1u;
/* e89da0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e89da1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e89da2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e89da3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e89da4: add esp, 0x128 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x128u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e89daa: ret 0xa0 */
  esp += 164; SPILL(); return;
L_e89dad: /* e89dad: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e89daf: lea edx, [esp + 0x150] */
  edx = (uint32_t)(esp + 0x150u);
/* e89db6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e89db7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e89db8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e89db9: call 0xe88ef0 */
  esp -= 4; W32(esp, 0xe89dbeu); SPILL(); f_e88ef0(); if (g_unwind) return; RELOAD();
/* e89dbe: mov esi, eax */
  esi = eax;
/* e89dc0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e89dc3: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89dc5: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* e89dc9: je 0xe8abc2 */
  if (zf) goto L_e8abc2;
L_e89dcf: /* e89dcf: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* e89dd2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e89dd4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e89dd6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e89dd7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e89dd8: call 0xe88b60 */
  esp -= 4; W32(esp, 0xe89dddu); SPILL(); f_e88b60(); if (g_unwind) return; RELOAD();
/* e89ddd: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* e89de0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e89de2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e89de4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e89de5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e89de6: mov edi, eax */
  edi = eax;
/* e89de8: call 0xe88b60 */
  esp -= 4; W32(esp, 0xe89dedu); SPILL(); f_e88b60(); if (g_unwind) return; RELOAD();
/* e89ded: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* e89df0: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e89df3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89df5: jne 0xe89e2d */
  if (!zf) goto L_e89e2d;
L_e89df7: /* e89df7: mov ecx, dword ptr [esp + 0x1d4] */
  ecx = R32((uint32_t)(esp + 0x1d4u));
/* e89dfe: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89e00: je 0xe89e0d */
  if (zf) goto L_e89e0d;
L_e89e02: /* e89e02: push 0xeaeb78 */
  { uint32_t v = 0xeaeb78u; esp -= 4; W32(esp, v); }
/* e89e07: call dword ptr [0xeae0bc] */
  esp -= 4; W32(esp, 0xe89e0du); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
L_e89e0d: /* e89e0d: mov eax, dword ptr [esp + 0x1d8] */
  eax = R32((uint32_t)(esp + 0x1d8u));
/* e89e14: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89e16: je 0xe8aac8 */
  if (zf) goto L_e8aac8;
L_e89e1c: /* e89e1c: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* e89e1e: xor eax, eax */
  eax = 0;
/* e89e20: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e89e21: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e89e22: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e89e23: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e89e24: add esp, 0x128 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x128u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e89e2a: ret 0xa0 */
  esp += 164; SPILL(); return;
L_e89e2d: /* e89e2d: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89e2f: jne 0xe89e6b */
  if (!zf) goto L_e89e6b;
L_e89e31: /* e89e31: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89e33: jne 0xe89e80 */
  if (!zf) goto L_e89e80;
L_e89e35: /* e89e35: mov ecx, dword ptr [esp + 0x1d4] */
  ecx = R32((uint32_t)(esp + 0x1d4u));
/* e89e3c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89e3e: je 0xe89e4b */
  if (zf) goto L_e89e4b;
L_e89e40: /* e89e40: push 0xeaeaf8 */
  { uint32_t v = 0xeaeaf8u; esp -= 4; W32(esp, v); }
/* e89e45: call dword ptr [0xeae0bc] */
  esp -= 4; W32(esp, 0xe89e4bu); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
L_e89e4b: /* e89e4b: mov eax, dword ptr [esp + 0x1d8] */
  eax = R32((uint32_t)(esp + 0x1d8u));
/* e89e52: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89e54: je 0xe8aac8 */
  if (zf) goto L_e8aac8;
L_e89e5a: /* e89e5a: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* e89e5c: xor eax, eax */
  eax = 0;
/* e89e5e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e89e5f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e89e60: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e89e61: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e89e62: add esp, 0x128 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x128u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e89e68: ret 0xa0 */
  esp += 164; SPILL(); return;
L_e89e6b: /* e89e6b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89e6d: jne 0xe89e80 */
  if (!zf) goto L_e89e80;
L_e89e6f: /* e89e6f: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* e89e72: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* e89e76: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* e89e7e: jmp 0xe89eb1 */
  goto L_e89eb1;
L_e89e80: /* e89e80: test byte ptr [esi + 0x48], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x48u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e89e84: je 0xe89ea0 */
  if (zf) goto L_e89ea0;
L_e89e86: /* e89e86: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89e88: je 0xe89ea0 */
  if (zf) goto L_e89ea0;
L_e89e8a: /* e89e8a: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* e89e8d: cmp dword ptr [esi + 0x44], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x44u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e89e90: jne 0xe89ea0 */
  if (!zf) goto L_e89ea0;
L_e89e92: /* e89e92: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* e89e96: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* e89e9e: jmp 0xe89eb1 */
  goto L_e89eb1;
L_e89ea0: /* e89ea0: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* e89ea3: mov eax, ecx */
  eax = ecx;
/* e89ea5: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* e89ea9: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
L_e89eb1: /* e89eb1: cmp dword ptr [esi + 0x44], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x44u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e89eb4: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* e89eb8: jne 0xe89ec7 */
  if (!zf) goto L_e89ec7;
L_e89eba: /* e89eba: test byte ptr [esi + 0x48], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x48u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e89ebe: je 0xe89ec7 */
  if (zf) goto L_e89ec7;
L_e89ec0: /* e89ec0: mov eax, 1 */
  eax = 0x1u;
/* e89ec5: jmp 0xe89ec9 */
  goto L_e89ec9;
L_e89ec7: /* e89ec7: xor eax, eax */
  eax = 0;
L_e89ec9: /* e89ec9: mov ecx, dword ptr [esp + 0x1d8] */
  ecx = R32((uint32_t)(esp + 0x1d8u));
/* e89ed0: mov edx, dword ptr [esp + 0x1d4] */
  edx = R32((uint32_t)(esp + 0x1d4u));
/* e89ed7: mov ebx, dword ptr [esp + 0x144] */
  ebx = R32((uint32_t)(esp + 0x144u));
/* e89ede: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e89edf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e89ee0: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* e89ee4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e89ee5: mov eax, dword ptr [esp + 0x154] */
  eax = R32((uint32_t)(esp + 0x154u));
/* e89eec: sub esp, 0x84 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e89ef2: mov edi, esp */
  edi = esp;
/* e89ef4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e89ef5: mov ecx, 0x21 */
  ecx = 0x21u;
/* e89efa: lea esi, [esp + 0x1e0] */
  esi = (uint32_t)(esp + 0x1e0u);
/* e89f01: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e89f03: mov ecx, dword ptr [esp + 0x1d4] */
  ecx = R32((uint32_t)(esp + 0x1d4u));
/* e89f0a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e89f0b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e89f0c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e89f0d: mov ecx, ebp */
  ecx = ebp;
/* e89f0f: call 0xe899a0 */
  esp -= 4; W32(esp, 0xe89f14u); SPILL(); f_e899a0(); if (g_unwind) return; RELOAD();
/* e89f14: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89f16: je 0xe8aac8 */
  if (zf) goto L_e8aac8;
L_e89f1c: /* e89f1c: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* e89f20: mov eax, dword ptr [esi + 0x44] */
  eax = R32((uint32_t)(esi + 0x44u));
/* e89f23: xor edx, edx */
  edx = 0;
/* e89f25: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e89f27: mov dword ptr [esp + 0x2c], edx */
  W32((uint32_t)(esp + 0x2cu), edx);
/* e89f2b: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* e89f2f: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* e89f33: mov edi, 2 */
  edi = 0x2u;
/* e89f38: je 0xe8a0ef */
  if (zf) goto L_e8a0ef;
L_e89f3e: /* e89f3e: cmp eax, dword ptr [esp + 0x20] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e89f42: jne 0xe8a18d */
  if (!zf) goto L_e8a18d;
L_e89f48: /* e89f48: test byte ptr [esi + 0x48], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x48u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e89f4c: je 0xe8a12f */
  if (zf) goto L_e8a12f;
L_e89f52: /* e89f52: mov ecx, dword ptr [esp + 0x148] */
  ecx = R32((uint32_t)(esp + 0x148u));
/* e89f59: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* e89f5b: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* e89f5f: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* e89f61: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e89f63: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e89f65: jl 0xe89fb0 */
  if ((sf != of)) goto L_e89fb0;
L_e89f67: /* e89f67: mov ecx, dword ptr [esp + 0x1d4] */
  ecx = R32((uint32_t)(esp + 0x1d4u));
/* e89f6e: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e89f70: je 0xe89f89 */
  if (zf) goto L_e89f89;
L_e89f72: /* e89f72: cmp dword ptr [esp + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e89f76: mov eax, 0xeaea78 */
  eax = 0xeaea78u;
/* e89f7b: jne 0xe89f82 */
  if (!zf) goto L_e89f82;
L_e89f7d: /* e89f7d: mov eax, 0xeae9f8 */
  eax = 0xeae9f8u;
L_e89f82: /* e89f82: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_e89f83: /* e89f83: call dword ptr [0xeae0bc] */
  esp -= 4; W32(esp, 0xe89f89u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
L_e89f89: /* e89f89: mov eax, dword ptr [esp + 0x1d8] */
  eax = R32((uint32_t)(esp + 0x1d8u));
/* e89f90: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e89f92: je 0xe8aac8 */
  if (zf) goto L_e8aac8;
L_e89f98: /* e89f98: mov edx, dword ptr [esp + 0x13c] */
  edx = R32((uint32_t)(esp + 0x13cu));
/* e89f9f: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* e89fa1: xor eax, eax */
  eax = 0;
/* e89fa3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e89fa4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e89fa5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e89fa6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e89fa7: add esp, 0x128 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x128u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e89fad: ret 0xa0 */
  esp += 164; SPILL(); return;
L_e89fb0: /* e89fb0: mov ecx, 0x21 */
  ecx = 0x21u;
/* e89fb5: lea esi, [esp + 0x14c] */
  esi = (uint32_t)(esp + 0x14cu);
/* e89fbc: lea edi, [esp + 0x30] */
  edi = (uint32_t)(esp + 0x30u);
/* e89fc0: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e89fc2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e89fc4: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* e89fc8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e89fc9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e89fca: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e89fcb: call 0xe88b60 */
  esp -= 4; W32(esp, 0xe89fd0u); SPILL(); f_e88b60(); if (g_unwind) return; RELOAD();
/* e89fd0: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* e89fd2: mov esi, dword ptr [esp + 0x150] */
  esi = R32((uint32_t)(esp + 0x150u));
/* e89fd9: imul ecx, ecx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x84u);
  ecx = (uint32_t)r;
  }
/* e89fdf: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* e89fe1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e89fe4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e89fe5: mov eax, dword ptr [ebp + 0x2b00c] */
  eax = R32((uint32_t)(ebp + 0x2b00cu));
/* e89feb: mov edx, dword ptr [eax + edx*4 + 0x52c] */
  edx = R32((uint32_t)(eax + edx*4 + 0x52cu));
/* e89ff2: lea eax, [edx + ecx + 0x38] */
  eax = (uint32_t)(edx + ecx + 0x38u);
/* e89ff6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e89ff7: mov ecx, ebp */
  ecx = ebp;
/* e89ff9: call 0xe87c50 */
  esp -= 4; W32(esp, 0xe89ffeu); SPILL(); f_e87c50(); if (g_unwind) return; RELOAD();
/* e89ffe: mov eax, dword ptr [ebp + 0x2b00c] */
  eax = R32((uint32_t)(ebp + 0x2b00cu));
/* e8a004: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* e8a006: mov edx, dword ptr [eax + edx*4 + 0x52c] */
  edx = R32((uint32_t)(eax + edx*4 + 0x52cu));
/* e8a00d: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* e8a011: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8a012: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* e8a014: imul ecx, ecx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x84u);
  ecx = (uint32_t)r;
  }
/* e8a01a: lea eax, [edx + ecx + 0x38] */
  eax = (uint32_t)(edx + ecx + 0x38u);
/* e8a01e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8a01f: mov ecx, ebp */
  ecx = ebp;
/* e8a021: call 0xe88140 */
  esp -= 4; W32(esp, 0xe8a026u); SPILL(); f_e88140(); if (g_unwind) return; RELOAD();
/* e8a026: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* e8a028: mov edx, dword ptr [ebp + 0x2b00c] */
  edx = R32((uint32_t)(ebp + 0x2b00cu));
/* e8a02e: imul eax, eax, 0x84 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x84u);
  eax = (uint32_t)r;
  }
/* e8a034: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* e8a036: mov ecx, dword ptr [edx + ecx*4 + 0x52c] */
  ecx = R32((uint32_t)(edx + ecx*4 + 0x52cu));
/* e8a03d: mov dword ptr [ecx + eax + 0x64], 0x12 */
  W32((uint32_t)(ecx + eax + 0x64u), 0x12u);
/* e8a045: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* e8a047: mov eax, dword ptr [ebp + 0x2b00c] */
  eax = R32((uint32_t)(ebp + 0x2b00cu));
/* e8a04d: imul ecx, ecx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x84u);
  ecx = (uint32_t)r;
  }
/* e8a053: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* e8a055: mov edx, dword ptr [eax + edx*4 + 0x52c] */
  edx = R32((uint32_t)(eax + edx*4 + 0x52cu));
/* e8a05c: mov eax, 2 */
  eax = 0x2u;
/* e8a061: mov dword ptr [edx + ecx + 0x50], eax */
  W32((uint32_t)(edx + ecx + 0x50u), eax);
/* e8a065: mov edi, dword ptr [ebx] */
  edi = R32((uint32_t)(ebx));
/* e8a067: mov edx, dword ptr [ebp + 0x2b00c] */
  edx = R32((uint32_t)(ebp + 0x2b00cu));
/* e8a06d: imul edi, edi, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x84u);
  edi = (uint32_t)r;
  }
/* e8a073: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* e8a075: mov ecx, dword ptr [edx + ecx*4 + 0x52c] */
  ecx = R32((uint32_t)(edx + ecx*4 + 0x52cu));
/* e8a07c: mov dword ptr [ecx + edi + 0x58], 1 */
  W32((uint32_t)(ecx + edi + 0x58u), 0x1u);
/* e8a084: mov edi, dword ptr [ebx] */
  edi = R32((uint32_t)(ebx));
/* e8a086: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* e8a088: imul edi, edi, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x84u);
  edi = (uint32_t)r;
  }
/* e8a08e: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e8a094: mov edx, dword ptr [ecx + edx*4 + 0x52c] */
  edx = R32((uint32_t)(ecx + edx*4 + 0x52cu));
/* e8a09b: mov dword ptr [edx + edi + 0x4c], eax */
  W32((uint32_t)(edx + edi + 0x4cu), eax);
L_e8a09f: /* e8a09f: mov edi, dword ptr [ebx] */
  edi = R32((uint32_t)(ebx));
/* e8a0a1: mov ecx, dword ptr [esp + 0x1d0] */
  ecx = R32((uint32_t)(esp + 0x1d0u));
/* e8a0a8: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* e8a0a9: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  ecx = r;
  }
/* e8a0ab: sbb ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ecx = r;
  }
/* e8a0ad: mov eax, edi */
  eax = edi;
/* e8a0af: imul eax, eax, 0x84 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x84u);
  eax = (uint32_t)r;
  }
/* e8a0b5: mov dword ptr [ebx], edi */
  W32((uint32_t)(ebx), edi);
/* e8a0b7: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* e8a0b9: mov edi, dword ptr [ebp + 0x2b00c] */
  edi = R32((uint32_t)(ebp + 0x2b00cu));
/* e8a0bf: mov edx, dword ptr [edi + edx*4 + 0x52c] */
  edx = R32((uint32_t)(edi + edx*4 + 0x52cu));
/* e8a0c6: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* e8a0c9: or ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* e8a0cc: mov dword ptr [edx + eax + 0x64], ecx */
  W32((uint32_t)(edx + eax + 0x64u), ecx);
/* e8a0d0: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* e8a0d2: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* e8a0d4: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e8a0da: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e8a0e0: mov eax, dword ptr [ecx + eax*4 + 0x52c] */
  eax = R32((uint32_t)(ecx + eax*4 + 0x52cu));
/* e8a0e7: mov dword ptr [eax + edx + 0x50], 2 */
  W32((uint32_t)(eax + edx + 0x50u), 0x2u);
L_e8a0ef: /* e8a0ef: mov edx, dword ptr [esp + 0x148] */
  edx = R32((uint32_t)(esp + 0x148u));
/* e8a0f6: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e8a0f8: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* e8a0fc: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* e8a0fe: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e8a100: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e8a102: jl 0xe8a422 */
  if ((sf != of)) goto L_e8a422;
L_e8a108: /* e8a108: mov ecx, dword ptr [esp + 0x1d4] */
  ecx = R32((uint32_t)(esp + 0x1d4u));
/* e8a10f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8a111: je 0xe8aab4 */
  if (zf) goto L_e8aab4;
L_e8a117: /* e8a117: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e8a11b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8a11d: mov eax, 0xeae9b0 */
  eax = 0xeae9b0u;
/* e8a122: jne 0xe8a129 */
  if (!zf) goto L_e8a129;
L_e8a124: /* e8a124: mov eax, 0xeae968 */
  eax = 0xeae968u;
L_e8a129: /* e8a129: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8a12a: jmp 0xe8aaae */
  goto L_e8aaae;
L_e8a12f: /* e8a12f: mov ecx, dword ptr [esp + 0x1d0] */
  ecx = R32((uint32_t)(esp + 0x1d0u));
/* e8a136: mov eax, dword ptr [esp + 0x140] */
  eax = R32((uint32_t)(esp + 0x140u));
/* e8a13d: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e8a13f: mov esi, dword ptr [ebp + 0x2b00c] */
  esi = R32((uint32_t)(ebp + 0x2b00cu));
/* e8a145: mov edx, dword ptr [esi + edx*4 + 0x52c] */
  edx = R32((uint32_t)(esi + edx*4 + 0x52cu));
/* e8a14c: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  ecx = r;
  }
/* e8a14e: sbb ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ecx = r;
  }
/* e8a150: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* e8a153: or ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* e8a155: mov edi, dword ptr [ebx] */
  edi = R32((uint32_t)(ebx));
/* e8a157: imul edi, edi, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x84u);
  edi = (uint32_t)r;
  }
/* e8a15d: mov dword ptr [edx + edi + 0x64], ecx */
  W32((uint32_t)(edx + edi + 0x64u), ecx);
/* e8a161: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* e8a163: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* e8a165: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e8a16b: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e8a171: mov eax, dword ptr [ecx + eax*4 + 0x52c] */
  eax = R32((uint32_t)(ecx + eax*4 + 0x52cu));
/* e8a178: mov dword ptr [eax + edx + 0x50], 2 */
  W32((uint32_t)(eax + edx + 0x50u), 0x2u);
/* e8a180: mov dword ptr [esp + 0x2c], 1 */
  W32((uint32_t)(esp + 0x2cu), 0x1u);
/* e8a188: jmp 0xe8a0ef */
  goto L_e8a0ef;
L_e8a18d: /* e8a18d: cmp eax, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8a191: je 0xe8a0ef */
  if (zf) goto L_e8a0ef;
L_e8a197: /* e8a197: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8a198: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8a199: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8a19a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e8a19b: call 0xe88b60 */
  esp -= 4; W32(esp, 0xe8a1a0u); SPILL(); f_e88b60(); if (g_unwind) return; RELOAD();
/* e8a1a0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8a1a3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8a1a5: je 0xe8a2e3 */
  if (zf) goto L_e8a2e3;
L_e8a1ab: /* e8a1ab: mov ecx, dword ptr [esp + 0x148] */
  ecx = R32((uint32_t)(esp + 0x148u));
/* e8a1b2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e8a1b4: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* e8a1b8: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* e8a1ba: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e8a1bc: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e8a1be: jl 0xe8a1d9 */
  if ((sf != of)) goto L_e8a1d9;
L_e8a1c0: /* e8a1c0: mov ecx, dword ptr [esp + 0x1d4] */
  ecx = R32((uint32_t)(esp + 0x1d4u));
/* e8a1c7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8a1c9: je 0xe8aab4 */
  if (zf) goto L_e8aab4;
L_e8a1cf: /* e8a1cf: push 0xeae928 */
  { uint32_t v = 0xeae928u; esp -= 4; W32(esp, v); }
/* e8a1d4: jmp 0xe8aaae */
  goto L_e8aaae;
L_e8a1d9: /* e8a1d9: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e8a1dd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8a1df: mov ecx, 0x21 */
  ecx = 0x21u;
/* e8a1e4: lea esi, [esp + 0x150] */
  esi = (uint32_t)(esp + 0x150u);
/* e8a1eb: lea edi, [esp + 0x34] */
  edi = (uint32_t)(esp + 0x34u);
/* e8a1ef: lea edx, [esp + 0x34] */
  edx = (uint32_t)(esp + 0x34u);
/* e8a1f3: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e8a1f5: mov ecx, dword ptr [eax + 0x44] */
  ecx = R32((uint32_t)(eax + 0x44u));
/* e8a1f8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8a1f9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8a1fa: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e8a1fb: call 0xe88b60 */
  esp -= 4; W32(esp, 0xe8a200u); SPILL(); f_e88b60(); if (g_unwind) return; RELOAD();
/* e8a200: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* e8a202: mov esi, dword ptr [esp + 0x150] */
  esi = R32((uint32_t)(esp + 0x150u));
/* e8a209: imul ecx, ecx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x84u);
  ecx = (uint32_t)r;
  }
/* e8a20f: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* e8a211: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8a214: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8a215: mov eax, dword ptr [ebp + 0x2b00c] */
  eax = R32((uint32_t)(ebp + 0x2b00cu));
/* e8a21b: mov edx, dword ptr [eax + edx*4 + 0x52c] */
  edx = R32((uint32_t)(eax + edx*4 + 0x52cu));
/* e8a222: lea eax, [edx + ecx + 0x38] */
  eax = (uint32_t)(edx + ecx + 0x38u);
/* e8a226: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8a227: mov ecx, ebp */
  ecx = ebp;
/* e8a229: call 0xe87c50 */
  esp -= 4; W32(esp, 0xe8a22eu); SPILL(); f_e87c50(); if (g_unwind) return; RELOAD();
/* e8a22e: mov eax, dword ptr [ebp + 0x2b00c] */
  eax = R32((uint32_t)(ebp + 0x2b00cu));
/* e8a234: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* e8a236: mov edx, dword ptr [eax + edx*4 + 0x52c] */
  edx = R32((uint32_t)(eax + edx*4 + 0x52cu));
/* e8a23d: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* e8a241: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8a242: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* e8a244: imul ecx, ecx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x84u);
  ecx = (uint32_t)r;
  }
/* e8a24a: lea eax, [edx + ecx + 0x38] */
  eax = (uint32_t)(edx + ecx + 0x38u);
/* e8a24e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8a24f: mov ecx, ebp */
  ecx = ebp;
/* e8a251: call 0xe88140 */
  esp -= 4; W32(esp, 0xe8a256u); SPILL(); f_e88140(); if (g_unwind) return; RELOAD();
/* e8a256: mov edi, dword ptr [ebx] */
  edi = R32((uint32_t)(ebx));
/* e8a258: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* e8a25c: imul edi, edi, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x84u);
  edi = (uint32_t)r;
  }
/* e8a262: mov edx, dword ptr [ecx + 0x48] */
  edx = R32((uint32_t)(ecx + 0x48u));
/* e8a265: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e8a26b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* e8a26d: mov eax, dword ptr [ecx + eax*4 + 0x52c] */
  eax = R32((uint32_t)(ecx + eax*4 + 0x52cu));
/* e8a274: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* e8a277: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* e8a27a: or edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* e8a27d: mov dword ptr [eax + edi + 0x64], edx */
  W32((uint32_t)(eax + edi + 0x64u), edx);
/* e8a281: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* e8a283: mov edx, dword ptr [ebp + 0x2b00c] */
  edx = R32((uint32_t)(ebp + 0x2b00cu));
/* e8a289: imul eax, eax, 0x84 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x84u);
  eax = (uint32_t)r;
  }
/* e8a28f: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* e8a291: mov ecx, dword ptr [edx + ecx*4 + 0x52c] */
  ecx = R32((uint32_t)(edx + ecx*4 + 0x52cu));
/* e8a298: mov dword ptr [ecx + eax + 0x50], 2 */
  W32((uint32_t)(ecx + eax + 0x50u), 0x2u);
/* e8a2a0: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* e8a2a2: mov eax, dword ptr [ebp + 0x2b00c] */
  eax = R32((uint32_t)(ebp + 0x2b00cu));
/* e8a2a8: imul ecx, ecx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x84u);
  ecx = (uint32_t)r;
  }
/* e8a2ae: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* e8a2b0: mov edx, dword ptr [eax + edx*4 + 0x52c] */
  edx = R32((uint32_t)(eax + edx*4 + 0x52cu));
/* e8a2b7: mov dword ptr [edx + ecx + 0x5c], 1 */
  W32((uint32_t)(edx + ecx + 0x5cu), 0x1u);
/* e8a2bf: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* e8a2c1: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* e8a2c3: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e8a2c9: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e8a2cf: mov eax, dword ptr [ecx + eax*4 + 0x52c] */
  eax = R32((uint32_t)(ecx + eax*4 + 0x52cu));
/* e8a2d6: mov dword ptr [eax + edx + 0x4c], 3 */
  W32((uint32_t)(eax + edx + 0x4cu), 0x3u);
/* e8a2de: jmp 0xe8a09f */
  goto L_e8a09f;
L_e8a2e3: /* e8a2e3: mov ecx, dword ptr [esi + 0x44] */
  ecx = R32((uint32_t)(esi + 0x44u));
/* e8a2e6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8a2e8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8a2ea: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8a2eb: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e8a2ec: call 0xe88440 */
  esp -= 4; W32(esp, 0xe8a2f1u); SPILL(); f_e88440(); if (g_unwind) return; RELOAD();
/* e8a2f1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8a2f4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8a2f6: je 0xe8a346 */
  if (zf) goto L_e8a346;
L_e8a2f8: /* e8a2f8: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* e8a2fa: mov eax, dword ptr [esp + 0x140] */
  eax = R32((uint32_t)(esp + 0x140u));
/* e8a301: imul esi, esi, 0x84 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x84u);
  esi = (uint32_t)r;
  }
/* e8a307: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e8a309: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e8a30f: mov edx, dword ptr [ecx + edx*4 + 0x52c] */
  edx = R32((uint32_t)(ecx + edx*4 + 0x52cu));
/* e8a316: mov dword ptr [edx + esi + 0x64], 0 */
  W32((uint32_t)(edx + esi + 0x64u), 0x0u);
/* e8a31e: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* e8a320: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* e8a322: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e8a328: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e8a32e: mov eax, dword ptr [ecx + eax*4 + 0x52c] */
  eax = R32((uint32_t)(ecx + eax*4 + 0x52cu));
/* e8a335: mov dword ptr [eax + edx + 0x50], edi */
  W32((uint32_t)(eax + edx + 0x50u), edi);
/* e8a339: mov dword ptr [esp + 0x24], 1 */
  W32((uint32_t)(esp + 0x24u), 0x1u);
/* e8a341: jmp 0xe8a0ef */
  goto L_e8a0ef;
L_e8a346: /* e8a346: mov ecx, dword ptr [esi + 0x44] */
  ecx = R32((uint32_t)(esi + 0x44u));
/* e8a349: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8a34b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8a34d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8a34e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e8a34f: call 0xe887d0 */
  esp -= 4; W32(esp, 0xe8a354u); SPILL(); f_e887d0(); if (g_unwind) return; RELOAD();
/* e8a354: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8a357: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8a359: je 0xe8a409 */
  if (zf) goto L_e8a409;
L_e8a35f: /* e8a35f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* e8a362: mov ecx, dword ptr [ecx + 0x30] */
  ecx = R32((uint32_t)(ecx + 0x30u));
/* e8a365: mov ecx, dword ptr [ecx + 0xb0] */
  ecx = R32((uint32_t)(ecx + 0xb0u));
/* e8a36b: mov ecx, dword ptr [ecx + 0x3ac] */
  ecx = R32((uint32_t)(ecx + 0x3acu));
/* e8a371: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e8a373: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8a374: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* e8a378: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8a379: mov ecx, eax */
  ecx = eax;
/* e8a37b: call dword ptr [edx + 0x98] */
  { uint32_t t = R32((uint32_t)(edx + 0x98u)); esp -= 4; W32(esp, 0xe8a381u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8a381: mov ecx, dword ptr [esp + 0x140] */
  ecx = R32((uint32_t)(esp + 0x140u));
/* e8a388: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e8a38a: mov eax, dword ptr [ebp + 0x2b00c] */
  eax = R32((uint32_t)(ebp + 0x2b00cu));
/* e8a390: mov eax, dword ptr [eax + edx*4 + 0x52c] */
  eax = R32((uint32_t)(eax + edx*4 + 0x52cu));
/* e8a397: mov edx, dword ptr [eax + 0x20] */
  edx = R32((uint32_t)(eax + 0x20u));
/* e8a39a: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8a39c: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* e8a3a0: je 0xe8a3bf */
  if (zf) goto L_e8a3bf;
L_e8a3a2: /* e8a3a2: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8a3a4: je 0xe8a3bf */
  if (zf) goto L_e8a3bf;
L_e8a3a6: /* e8a3a6: mov ecx, dword ptr [esp + 0x1d4] */
  ecx = R32((uint32_t)(esp + 0x1d4u));
/* e8a3ad: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8a3af: je 0xe8aab4 */
  if (zf) goto L_e8aab4;
L_e8a3b5: /* e8a3b5: push 0xeaec48 */
  { uint32_t v = 0xeaec48u; esp -= 4; W32(esp, v); }
/* e8a3ba: jmp 0xe8aaae */
  goto L_e8aaae;
L_e8a3bf: /* e8a3bf: mov dword ptr [eax + 0x20], esi */
  W32((uint32_t)(eax + 0x20u), esi);
/* e8a3c2: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* e8a3c4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e8a3c6: imul esi, esi, 0x84 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x84u);
  esi = (uint32_t)r;
  }
/* e8a3cc: mov eax, dword ptr [ebp + 0x2b00c] */
  eax = R32((uint32_t)(ebp + 0x2b00cu));
/* e8a3d2: mov edx, dword ptr [eax + edx*4 + 0x52c] */
  edx = R32((uint32_t)(eax + edx*4 + 0x52cu));
/* e8a3d9: mov dword ptr [edx + esi + 0x64], 3 */
  W32((uint32_t)(edx + esi + 0x64u), 0x3u);
/* e8a3e1: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* e8a3e3: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e8a3e5: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e8a3eb: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e8a3f1: mov eax, dword ptr [ecx + eax*4 + 0x52c] */
  eax = R32((uint32_t)(ecx + eax*4 + 0x52cu));
/* e8a3f8: mov dword ptr [eax + edx + 0x50], edi */
  W32((uint32_t)(eax + edx + 0x50u), edi);
/* e8a3fc: mov dword ptr [esp + 0x1c], 1 */
  W32((uint32_t)(esp + 0x1cu), 0x1u);
/* e8a404: jmp 0xe8a0ef */
  goto L_e8a0ef;
L_e8a409: /* e8a409: mov ecx, dword ptr [esp + 0x1d4] */
  ecx = R32((uint32_t)(esp + 0x1d4u));
/* e8a410: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8a412: je 0xe8aab4 */
  if (zf) goto L_e8aab4;
L_e8a418: /* e8a418: push 0xeae860 */
  { uint32_t v = 0xeae860u; esp -= 4; W32(esp, v); }
/* e8a41d: jmp 0xe8aaae */
  goto L_e8aaae;
L_e8a422: /* e8a422: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* e8a426: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8a428: lea edx, [esp + 0xb8] */
  edx = (uint32_t)(esp + 0xb8u);
/* e8a42f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8a430: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8a431: mov ecx, 0x21 */
  ecx = 0x21u;
/* e8a436: lea esi, [esp + 0x158] */
  esi = (uint32_t)(esp + 0x158u);
/* e8a43d: lea edi, [esp + 0xc0] */
  edi = (uint32_t)(esp + 0xc0u);
/* e8a444: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e8a445: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e8a447: call 0xe88b60 */
  esp -= 4; W32(esp, 0xe8a44cu); SPILL(); f_e88b60(); if (g_unwind) return; RELOAD();
/* e8a44c: mov esi, dword ptr [esp + 0x150] */
  esi = R32((uint32_t)(esp + 0x150u));
/* e8a453: mov edx, dword ptr [ebp + 0x2b00c] */
  edx = R32((uint32_t)(ebp + 0x2b00cu));
/* e8a459: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* e8a45b: mov ecx, dword ptr [edx + ecx*4 + 0x52c] */
  ecx = R32((uint32_t)(edx + ecx*4 + 0x52cu));
/* e8a462: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8a465: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8a466: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* e8a468: imul eax, eax, 0x84 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x84u);
  eax = (uint32_t)r;
  }
/* e8a46e: lea edx, [ecx + eax + 0x38] */
  edx = (uint32_t)(ecx + eax + 0x38u);
/* e8a472: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8a473: mov ecx, ebp */
  ecx = ebp;
/* e8a475: call 0xe87c50 */
  esp -= 4; W32(esp, 0xe8a47au); SPILL(); f_e87c50(); if (g_unwind) return; RELOAD();
/* e8a47a: mov edx, dword ptr [ebp + 0x2b00c] */
  edx = R32((uint32_t)(ebp + 0x2b00cu));
/* e8a480: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* e8a482: mov ecx, dword ptr [edx + ecx*4 + 0x52c] */
  ecx = R32((uint32_t)(edx + ecx*4 + 0x52cu));
/* e8a489: lea eax, [esp + 0xb4] */
  eax = (uint32_t)(esp + 0xb4u);
/* e8a490: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8a491: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* e8a493: imul eax, eax, 0x84 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x84u);
  eax = (uint32_t)r;
  }
/* e8a499: lea edx, [ecx + eax + 0x38] */
  edx = (uint32_t)(ecx + eax + 0x38u);
/* e8a49d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8a49e: mov ecx, ebp */
  ecx = ebp;
/* e8a4a0: call 0xe88140 */
  esp -= 4; W32(esp, 0xe8a4a5u); SPILL(); f_e88140(); if (g_unwind) return; RELOAD();
/* e8a4a5: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e8a4a9: movzx eax, byte ptr [eax + 0x38] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0x38u)));
/* e8a4ad: cmp eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e8a4b0: ja 0xe8a83b */
  if ((!cf && !zf)) goto L_e8a83b;
L_e8a4b6: /* e8a4b6: jmp dword ptr [eax*4 + 0xe8abd4] */
  switch (R32((uint32_t)(eax*4 + 0xe8abd4u))) {
    case 0xe8a4bdu: goto L_e8a4bd;
    case 0xe8a512u: goto L_e8a512;
    case 0xe8a56au: goto L_e8a56a;
    case 0xe8a602u: goto L_e8a602;
    case 0xe8a670u: goto L_e8a670;
    case 0xe8a6e9u: goto L_e8a6e9;
    case 0xe8a78eu: goto L_e8a78e;
    case 0xe8a860u: goto L_e8a860;
    case 0xe8a8e8u: goto L_e8a8e8;
    case 0xe8a970u: goto L_e8a970;
    case 0xe8aa8du: goto L_e8aa8d;
    default: guest_badjump(0xe8a4b6, R32((uint32_t)(eax*4 + 0xe8abd4u))); return;
  }
L_e8a4bd: /* e8a4bd: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* e8a4bf: mov eax, dword ptr [esp + 0x140] */
  eax = R32((uint32_t)(esp + 0x140u));
/* e8a4c6: imul esi, esi, 0x84 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x84u);
  esi = (uint32_t)r;
  }
/* e8a4cc: mov edx, dword ptr [ebp + 0x2b00c] */
  edx = R32((uint32_t)(ebp + 0x2b00cu));
/* e8a4d2: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8a4d4: mov ecx, dword ptr [edx + ecx*4 + 0x52c] */
  ecx = R32((uint32_t)(edx + ecx*4 + 0x52cu));
/* e8a4db: mov dword ptr [ecx + esi + 0x58], 2 */
  W32((uint32_t)(ecx + esi + 0x58u), 0x2u);
/* e8a4e3: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* e8a4e5: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e8a4eb: imul esi, esi, 0x84 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x84u);
  esi = (uint32_t)r;
  }
/* e8a4f1: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e8a4f3: mov edx, dword ptr [ecx + edx*4 + 0x52c] */
  edx = R32((uint32_t)(ecx + edx*4 + 0x52cu));
/* e8a4fa: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e8a4fe: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  ecx = r;
  }
/* e8a500: sbb ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ecx = r;
  }
/* e8a502: mov dword ptr [edx + esi + 0x5c], 1 */
  W32((uint32_t)(edx + esi + 0x5cu), 0x1u);
/* e8a50a: add ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e8a50d: jmp 0xe8a76e */
  goto L_e8a76e;
L_e8a512: /* e8a512: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* e8a514: mov eax, dword ptr [esp + 0x140] */
  eax = R32((uint32_t)(esp + 0x140u));
/* e8a51b: imul esi, esi, 0x84 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x84u);
  esi = (uint32_t)r;
  }
/* e8a521: mov edx, dword ptr [ebp + 0x2b00c] */
  edx = R32((uint32_t)(ebp + 0x2b00cu));
/* e8a527: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8a529: mov ecx, dword ptr [edx + ecx*4 + 0x52c] */
  ecx = R32((uint32_t)(edx + ecx*4 + 0x52cu));
/* e8a530: mov dword ptr [ecx + esi + 0x58], 2 */
  W32((uint32_t)(ecx + esi + 0x58u), 0x2u);
/* e8a538: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* e8a53a: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e8a540: imul esi, esi, 0x84 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x84u);
  esi = (uint32_t)r;
  }
/* e8a546: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e8a548: mov edx, dword ptr [ecx + edx*4 + 0x52c] */
  edx = R32((uint32_t)(ecx + edx*4 + 0x52cu));
/* e8a54f: mov dword ptr [edx + esi + 0x5c], 1 */
  W32((uint32_t)(edx + esi + 0x5cu), 0x1u);
/* e8a557: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* e8a55b: xor ecx, ecx */
  ecx = 0;
/* e8a55d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8a55f: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* e8a562: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e8a565: jmp 0xe8a76e */
  goto L_e8a76e;
L_e8a56a: /* e8a56a: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* e8a56c: mov eax, dword ptr [esp + 0x140] */
  eax = R32((uint32_t)(esp + 0x140u));
/* e8a573: imul esi, esi, 0x84 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x84u);
  esi = (uint32_t)r;
  }
/* e8a579: mov edx, dword ptr [ebp + 0x2b00c] */
  edx = R32((uint32_t)(ebp + 0x2b00cu));
/* e8a57f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8a581: mov ecx, dword ptr [edx + ecx*4 + 0x52c] */
  ecx = R32((uint32_t)(edx + ecx*4 + 0x52cu));
/* e8a588: mov dword ptr [ecx + esi + 0x58], 2 */
  W32((uint32_t)(ecx + esi + 0x58u), 0x2u);
/* e8a590: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* e8a592: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e8a598: imul esi, esi, 0x84 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x84u);
  esi = (uint32_t)r;
  }
/* e8a59e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e8a5a0: mov edx, dword ptr [ecx + edx*4 + 0x52c] */
  edx = R32((uint32_t)(ecx + edx*4 + 0x52cu));
/* e8a5a7: mov dword ptr [edx + esi + 0x5c], 1 */
  W32((uint32_t)(edx + esi + 0x5cu), 0x1u);
/* e8a5af: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* e8a5b3: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* e8a5b6: test cl, 4 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e8a5b9: je 0xe8a5c5 */
  if (zf) goto L_e8a5c5;
L_e8a5bb: /* e8a5bb: mov dword ptr [esp + 0x18], 6 */
  W32((uint32_t)(esp + 0x18u), 0x6u);
/* e8a5c3: jmp 0xe8a5de */
  goto L_e8a5de;
L_e8a5c5: /* e8a5c5: test cl, 2 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e8a5c8: je 0xe8a5d6 */
  if (zf) goto L_e8a5d6;
L_e8a5ca: /* e8a5ca: mov ecx, dword ptr [0xeba050] */
  ecx = R32((uint32_t)(0xeba050u));
/* e8a5d0: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* e8a5d4: jmp 0xe8a5de */
  goto L_e8a5de;
L_e8a5d6: /* e8a5d6: mov dword ptr [esp + 0x18], 4 */
  W32((uint32_t)(esp + 0x18u), 0x4u);
L_e8a5de: /* e8a5de: mov edi, dword ptr [ebx] */
  edi = R32((uint32_t)(ebx));
/* e8a5e0: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e8a5e6: imul edi, edi, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x84u);
  edi = (uint32_t)r;
  }
/* e8a5ec: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e8a5ee: mov edx, dword ptr [ecx + edx*4 + 0x52c] */
  edx = R32((uint32_t)(ecx + edx*4 + 0x52cu));
/* e8a5f5: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* e8a5f9: mov dword ptr [edx + edi + 0x4c], ecx */
  W32((uint32_t)(edx + edi + 0x4cu), ecx);
/* e8a5fd: jmp 0xe8a846 */
  goto L_e8a846;
L_e8a602: /* e8a602: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* e8a604: mov eax, dword ptr [esp + 0x140] */
  eax = R32((uint32_t)(esp + 0x140u));
/* e8a60b: imul esi, esi, 0x84 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x84u);
  esi = (uint32_t)r;
  }
/* e8a611: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e8a617: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e8a619: mov edx, dword ptr [ecx + edx*4 + 0x52c] */
  edx = R32((uint32_t)(ecx + edx*4 + 0x52cu));
/* e8a620: mov edi, 2 */
  edi = 0x2u;
/* e8a625: mov dword ptr [edx + esi + 0x58], edi */
  W32((uint32_t)(edx + esi + 0x58u), edi);
/* e8a629: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* e8a62b: mov edx, dword ptr [ebp + 0x2b00c] */
  edx = R32((uint32_t)(ebp + 0x2b00cu));
/* e8a631: imul esi, esi, 0x84 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x84u);
  esi = (uint32_t)r;
  }
/* e8a637: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8a639: mov ecx, dword ptr [edx + ecx*4 + 0x52c] */
  ecx = R32((uint32_t)(edx + ecx*4 + 0x52cu));
/* e8a640: mov dword ptr [ecx + esi + 0x5c], 1 */
  W32((uint32_t)(ecx + esi + 0x5cu), 0x1u);
/* e8a648: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* e8a64a: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e8a64c: imul esi, esi, 0x84 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x84u);
  esi = (uint32_t)r;
  }
/* e8a652: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e8a658: mov edx, dword ptr [ecx + edx*4 + 0x52c] */
  edx = R32((uint32_t)(ecx + edx*4 + 0x52cu));
/* e8a65f: mov dword ptr [edx + esi + 0x4c], 7 */
  W32((uint32_t)(edx + esi + 0x4cu), 0x7u);
/* e8a667: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* e8a66b: jmp 0xe8a84b */
  goto L_e8a84b;
L_e8a670: /* e8a670: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e8a674: mov edi, dword ptr [ebx] */
  edi = R32((uint32_t)(ebx));
/* e8a676: mov esi, dword ptr [ebp + 0x2b00c] */
  esi = R32((uint32_t)(ebp + 0x2b00cu));
/* e8a67c: xor ecx, ecx */
  ecx = 0;
/* e8a67e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8a680: mov eax, dword ptr [esp + 0x140] */
  eax = R32((uint32_t)(esp + 0x140u));
/* e8a687: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e8a689: mov edx, dword ptr [esi + edx*4 + 0x52c] */
  edx = R32((uint32_t)(esi + edx*4 + 0x52cu));
/* e8a690: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* e8a694: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e8a697: imul edi, edi, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x84u);
  edi = (uint32_t)r;
  }
/* e8a69d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* e8a69e: mov dword ptr [edx + edi + 0x58], ecx */
  W32((uint32_t)(edx + edi + 0x58u), ecx);
/* e8a6a2: mov edi, dword ptr [ebx] */
  edi = R32((uint32_t)(ebx));
/* e8a6a4: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e8a6a6: xor ecx, ecx */
  ecx = 0;
/* e8a6a8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8a6aa: mov esi, dword ptr [ebp + 0x2b00c] */
  esi = R32((uint32_t)(ebp + 0x2b00cu));
/* e8a6b0: mov edx, dword ptr [esi + edx*4 + 0x52c] */
  edx = R32((uint32_t)(esi + edx*4 + 0x52cu));
/* e8a6b7: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* e8a6ba: imul edi, edi, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x84u);
  edi = (uint32_t)r;
  }
/* e8a6c0: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* e8a6c1: mov dword ptr [edx + edi + 0x5c], ecx */
  W32((uint32_t)(edx + edi + 0x5cu), ecx);
/* e8a6c5: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* e8a6c7: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8a6c9: imul esi, esi, 0x84 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x84u);
  esi = (uint32_t)r;
  }
/* e8a6cf: mov edx, dword ptr [ebp + 0x2b00c] */
  edx = R32((uint32_t)(ebp + 0x2b00cu));
/* e8a6d5: mov ecx, dword ptr [edx + ecx*4 + 0x52c] */
  ecx = R32((uint32_t)(edx + ecx*4 + 0x52cu));
/* e8a6dc: mov dword ptr [ecx + esi + 0x4c], 0xa */
  W32((uint32_t)(ecx + esi + 0x4cu), 0xau);
/* e8a6e4: jmp 0xe8a842 */
  goto L_e8a842;
L_e8a6e9: /* e8a6e9: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e8a6ed: mov edi, dword ptr [ebx] */
  edi = R32((uint32_t)(ebx));
/* e8a6ef: mov eax, dword ptr [esp + 0x140] */
  eax = R32((uint32_t)(esp + 0x140u));
/* e8a6f6: mov esi, dword ptr [ebp + 0x2b00c] */
  esi = R32((uint32_t)(ebp + 0x2b00cu));
/* e8a6fc: xor edx, edx */
  edx = 0;
/* e8a6fe: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8a700: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8a702: mov ecx, dword ptr [esi + ecx*4 + 0x52c] */
  ecx = R32((uint32_t)(esi + ecx*4 + 0x52cu));
/* e8a709: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e8a70c: imul edi, edi, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x84u);
  edi = (uint32_t)r;
  }
/* e8a712: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* e8a713: mov dword ptr [ecx + edi + 0x58], edx */
  W32((uint32_t)(ecx + edi + 0x58u), edx);
/* e8a717: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* e8a71b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8a71d: mov esi, dword ptr [ebp + 0x2b00c] */
  esi = R32((uint32_t)(ebp + 0x2b00cu));
/* e8a723: mov ecx, dword ptr [esi + ecx*4 + 0x52c] */
  ecx = R32((uint32_t)(esi + ecx*4 + 0x52cu));
/* e8a72a: xor edx, edx */
  edx = 0;
/* e8a72c: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8a72e: mov edi, dword ptr [ebx] */
  edi = R32((uint32_t)(ebx));
/* e8a730: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* e8a733: imul edi, edi, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x84u);
  edi = (uint32_t)r;
  }
/* e8a739: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* e8a73a: mov dword ptr [ecx + edi + 0x5c], edx */
  W32((uint32_t)(ecx + edi + 0x5cu), edx);
/* e8a73e: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* e8a742: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8a744: je 0xe8a74d */
  if (zf) goto L_e8a74d;
L_e8a746: /* e8a746: mov ecx, 0xd */
  ecx = 0xdu;
/* e8a74b: jmp 0xe8a76e */
  goto L_e8a76e;
L_e8a74d: /* e8a74d: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* e8a751: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8a753: je 0xe8a75c */
  if (zf) goto L_e8a75c;
L_e8a755: /* e8a755: mov ecx, 0xe */
  ecx = 0xeu;
/* e8a75a: jmp 0xe8a76e */
  goto L_e8a76e;
L_e8a75c: /* e8a75c: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* e8a760: xor ecx, ecx */
  ecx = 0;
/* e8a762: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8a764: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e8a767: lea ecx, [ecx*4 + 0xc] */
  ecx = (uint32_t)(ecx*4 + 0xcu);
L_e8a76e: /* e8a76e: mov edi, dword ptr [ebx] */
  edi = R32((uint32_t)(ebx));
/* e8a770: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e8a772: imul edi, edi, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x84u);
  edi = (uint32_t)r;
  }
/* e8a778: mov esi, dword ptr [ebp + 0x2b00c] */
  esi = R32((uint32_t)(ebp + 0x2b00cu));
/* e8a77e: mov edx, dword ptr [esi + edx*4 + 0x52c] */
  edx = R32((uint32_t)(esi + edx*4 + 0x52cu));
/* e8a785: mov dword ptr [edx + edi + 0x4c], ecx */
  W32((uint32_t)(edx + edi + 0x4cu), ecx);
/* e8a789: jmp 0xe8a842 */
  goto L_e8a842;
L_e8a78e: /* e8a78e: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e8a792: mov edi, dword ptr [ebx] */
  edi = R32((uint32_t)(ebx));
/* e8a794: mov eax, dword ptr [esp + 0x140] */
  eax = R32((uint32_t)(esp + 0x140u));
/* e8a79b: mov esi, dword ptr [ebp + 0x2b00c] */
  esi = R32((uint32_t)(ebp + 0x2b00cu));
/* e8a7a1: xor ecx, ecx */
  ecx = 0;
/* e8a7a3: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8a7a5: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e8a7a7: mov edx, dword ptr [esi + edx*4 + 0x52c] */
  edx = R32((uint32_t)(esi + edx*4 + 0x52cu));
/* e8a7ae: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e8a7b1: imul edi, edi, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x84u);
  edi = (uint32_t)r;
  }
/* e8a7b7: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* e8a7b8: mov dword ptr [edx + edi + 0x58], ecx */
  W32((uint32_t)(edx + edi + 0x58u), ecx);
/* e8a7bc: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* e8a7c0: mov esi, dword ptr [ebp + 0x2b00c] */
  esi = R32((uint32_t)(ebp + 0x2b00cu));
/* e8a7c6: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e8a7c8: mov edx, dword ptr [esi + edx*4 + 0x52c] */
  edx = R32((uint32_t)(esi + edx*4 + 0x52cu));
/* e8a7cf: xor ecx, ecx */
  ecx = 0;
/* e8a7d1: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8a7d3: mov edi, dword ptr [ebx] */
  edi = R32((uint32_t)(ebx));
/* e8a7d5: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* e8a7d8: imul edi, edi, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x84u);
  edi = (uint32_t)r;
  }
/* e8a7de: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* e8a7df: mov dword ptr [edx + edi + 0x5c], ecx */
  W32((uint32_t)(edx + edi + 0x5cu), ecx);
/* e8a7e3: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* e8a7e6: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* e8a7e8: mov edx, dword ptr [ecx + 0x41dc] */
  edx = R32((uint32_t)(ecx + 0x41dcu));
/* e8a7ee: imul esi, esi, 0x84 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x84u);
  esi = (uint32_t)r;
  }
/* e8a7f4: test edx, 0x20000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8a7fa: mov edi, 2 */
  edi = 0x2u;
/* e8a7ff: je 0xe8a81e */
  if (zf) goto L_e8a81e;
L_e8a801: /* e8a801: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e8a803: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e8a809: mov edx, dword ptr [ecx + edx*4 + 0x52c] */
  edx = R32((uint32_t)(ecx + edx*4 + 0x52cu));
/* e8a810: mov dword ptr [edx + esi + 0x4c], 0x12 */
  W32((uint32_t)(edx + esi + 0x4cu), 0x12u);
/* e8a818: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* e8a81c: jmp 0xe8a84b */
  goto L_e8a84b;
L_e8a81e: /* e8a81e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8a820: mov edx, dword ptr [ebp + 0x2b00c] */
  edx = R32((uint32_t)(ebp + 0x2b00cu));
/* e8a826: mov ecx, dword ptr [edx + ecx*4 + 0x52c] */
  ecx = R32((uint32_t)(edx + ecx*4 + 0x52cu));
/* e8a82d: mov dword ptr [ecx + esi + 0x4c], 7 */
  W32((uint32_t)(ecx + esi + 0x4cu), 0x7u);
/* e8a835: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* e8a839: jmp 0xe8a84b */
  goto L_e8a84b;
L_e8a83b: /* e8a83b: mov eax, dword ptr [esp + 0x140] */
  eax = R32((uint32_t)(esp + 0x140u));
L_e8a842: /* e8a842: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
L_e8a846: /* e8a846: mov edi, 2 */
  edi = 0x2u;
L_e8a84b: /* e8a84b: movzx ecx, byte ptr [esi + 0x39] */
  ecx = (uint32_t)(R8((uint32_t)(esi + 0x39u)));
/* e8a84f: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* e8a850: cmp ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e8a853: ja 0xe8abc0 */
  if ((!cf && !zf)) goto L_e8abc0;
L_e8a859: /* e8a859: jmp dword ptr [ecx*4 + 0xe8abf0] */
  switch (R32((uint32_t)(ecx*4 + 0xe8abf0u))) {
    case 0xe8a860u: goto L_e8a860;
    case 0xe8a8e8u: goto L_e8a8e8;
    case 0xe8a970u: goto L_e8a970;
    case 0xe8aa8du: goto L_e8aa8d;
    default: guest_badjump(0xe8a859, R32((uint32_t)(ecx*4 + 0xe8abf0u))); return;
  }
L_e8a860: /* e8a860: mov ecx, dword ptr [esi + 0x44] */
  ecx = R32((uint32_t)(esi + 0x44u));
/* e8a863: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8a865: je 0xe8a88a */
  if (zf) goto L_e8a88a;
L_e8a867: /* e8a867: cmp ecx, dword ptr [esi + 0x3c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x3cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8a86a: je 0xe8a88a */
  if (zf) goto L_e8a88a;
L_e8a86c: /* e8a86c: cmp ecx, dword ptr [esi + 0x40] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x40u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8a86f: je 0xe8a88a */
  if (zf) goto L_e8a88a;
L_e8a871: /* e8a871: mov ecx, dword ptr [esp + 0x1d4] */
  ecx = R32((uint32_t)(esp + 0x1d4u));
/* e8a878: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8a87a: je 0xe89f89 */
  if (zf) goto L_e89f89;
L_e8a880: /* e8a880: push 0xeae7a0 */
  { uint32_t v = 0xeae7a0u; esp -= 4; W32(esp, v); }
/* e8a885: jmp 0xe89f83 */
  goto L_e89f83;
L_e8a88a: /* e8a88a: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* e8a88c: mov edx, dword ptr [ebp + 0x2b00c] */
  edx = R32((uint32_t)(ebp + 0x2b00cu));
/* e8a892: imul esi, esi, 0x84 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x84u);
  esi = (uint32_t)r;
  }
/* e8a898: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8a89a: mov ecx, dword ptr [edx + ecx*4 + 0x52c] */
  ecx = R32((uint32_t)(edx + ecx*4 + 0x52cu));
/* e8a8a1: mov dword ptr [ecx + esi + 0x64], edi */
  W32((uint32_t)(ecx + esi + 0x64u), edi);
/* e8a8a5: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* e8a8a7: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e8a8ad: imul esi, esi, 0x84 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x84u);
  esi = (uint32_t)r;
  }
/* e8a8b3: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e8a8b5: mov edx, dword ptr [ecx + edx*4 + 0x52c] */
  edx = R32((uint32_t)(ecx + edx*4 + 0x52cu));
/* e8a8bc: mov dword ptr [edx + esi + 0x68], 1 */
  W32((uint32_t)(edx + esi + 0x68u), 0x1u);
/* e8a8c4: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* e8a8c6: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8a8c8: imul esi, esi, 0x84 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x84u);
  esi = (uint32_t)r;
  }
/* e8a8ce: mov edx, dword ptr [ebp + 0x2b00c] */
  edx = R32((uint32_t)(ebp + 0x2b00cu));
/* e8a8d4: mov ecx, dword ptr [edx + ecx*4 + 0x52c] */
  ecx = R32((uint32_t)(edx + ecx*4 + 0x52cu));
/* e8a8db: mov dword ptr [ecx + esi + 0x50], 4 */
  W32((uint32_t)(ecx + esi + 0x50u), 0x4u);
/* e8a8e3: jmp 0xe8aa02 */
  goto L_e8aa02;
L_e8a8e8: /* e8a8e8: mov ecx, dword ptr [esi + 0x44] */
  ecx = R32((uint32_t)(esi + 0x44u));
/* e8a8eb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8a8ed: je 0xe8a912 */
  if (zf) goto L_e8a912;
L_e8a8ef: /* e8a8ef: cmp ecx, dword ptr [esi + 0x3c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x3cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8a8f2: je 0xe8a912 */
  if (zf) goto L_e8a912;
L_e8a8f4: /* e8a8f4: cmp ecx, dword ptr [esi + 0x40] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x40u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8a8f7: je 0xe8a912 */
  if (zf) goto L_e8a912;
L_e8a8f9: /* e8a8f9: mov ecx, dword ptr [esp + 0x1d4] */
  ecx = R32((uint32_t)(esp + 0x1d4u));
/* e8a900: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8a902: je 0xe8aab4 */
  if (zf) goto L_e8aab4;
L_e8a908: /* e8a908: push 0xeae6e8 */
  { uint32_t v = 0xeae6e8u; esp -= 4; W32(esp, v); }
/* e8a90d: jmp 0xe8aaae */
  goto L_e8aaae;
L_e8a912: /* e8a912: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* e8a914: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e8a91a: imul esi, esi, 0x84 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x84u);
  esi = (uint32_t)r;
  }
/* e8a920: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e8a922: mov edx, dword ptr [ecx + edx*4 + 0x52c] */
  edx = R32((uint32_t)(ecx + edx*4 + 0x52cu));
/* e8a929: mov dword ptr [edx + esi + 0x64], edi */
  W32((uint32_t)(edx + esi + 0x64u), edi);
/* e8a92d: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* e8a92f: mov edx, dword ptr [ebp + 0x2b00c] */
  edx = R32((uint32_t)(ebp + 0x2b00cu));
/* e8a935: imul esi, esi, 0x84 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x84u);
  esi = (uint32_t)r;
  }
/* e8a93b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8a93d: mov ecx, dword ptr [edx + ecx*4 + 0x52c] */
  ecx = R32((uint32_t)(edx + ecx*4 + 0x52cu));
/* e8a944: mov dword ptr [ecx + esi + 0x68], 1 */
  W32((uint32_t)(ecx + esi + 0x68u), 0x1u);
/* e8a94c: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* e8a94e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e8a950: imul esi, esi, 0x84 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x84u);
  esi = (uint32_t)r;
  }
/* e8a956: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e8a95c: mov edx, dword ptr [ecx + edx*4 + 0x52c] */
  edx = R32((uint32_t)(ecx + edx*4 + 0x52cu));
/* e8a963: mov dword ptr [edx + esi + 0x50], 7 */
  W32((uint32_t)(edx + esi + 0x50u), 0x7u);
/* e8a96b: jmp 0xe8aa02 */
  goto L_e8aa02;
L_e8a970: /* e8a970: mov ecx, dword ptr [esi + 0x44] */
  ecx = R32((uint32_t)(esi + 0x44u));
/* e8a973: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8a975: je 0xe8a99a */
  if (zf) goto L_e8a99a;
L_e8a977: /* e8a977: cmp ecx, dword ptr [esi + 0x3c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x3cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8a97a: je 0xe8a99a */
  if (zf) goto L_e8a99a;
L_e8a97c: /* e8a97c: cmp ecx, dword ptr [esi + 0x40] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x40u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8a97f: je 0xe8a99a */
  if (zf) goto L_e8a99a;
L_e8a981: /* e8a981: mov ecx, dword ptr [esp + 0x1d4] */
  ecx = R32((uint32_t)(esp + 0x1d4u));
/* e8a988: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8a98a: je 0xe8aab4 */
  if (zf) goto L_e8aab4;
L_e8a990: /* e8a990: push 0xeae608 */
  { uint32_t v = 0xeae608u; esp -= 4; W32(esp, v); }
/* e8a995: jmp 0xe8aaae */
  goto L_e8aaae;
L_e8a99a: /* e8a99a: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* e8a99c: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e8a9a2: imul esi, esi, 0x84 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x84u);
  esi = (uint32_t)r;
  }
/* e8a9a8: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e8a9aa: mov edx, dword ptr [ecx + edx*4 + 0x52c] */
  edx = R32((uint32_t)(ecx + edx*4 + 0x52cu));
/* e8a9b1: mov dword ptr [edx + esi + 0x64], edi */
  W32((uint32_t)(edx + esi + 0x64u), edi);
/* e8a9b5: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* e8a9b7: mov edx, dword ptr [ebp + 0x2b00c] */
  edx = R32((uint32_t)(ebp + 0x2b00cu));
/* e8a9bd: imul esi, esi, 0x84 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x84u);
  esi = (uint32_t)r;
  }
/* e8a9c3: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8a9c5: mov ecx, dword ptr [edx + ecx*4 + 0x52c] */
  ecx = R32((uint32_t)(edx + ecx*4 + 0x52cu));
/* e8a9cc: mov dword ptr [ecx + esi + 0x68], 1 */
  W32((uint32_t)(ecx + esi + 0x68u), 0x1u);
/* e8a9d4: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e8a9d8: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* e8a9da: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e8a9dc: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  ecx = r;
  }
/* e8a9de: sbb ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ecx = r;
  }
/* e8a9e0: add ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e8a9e3: imul esi, esi, 0x84 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x84u);
  esi = (uint32_t)r;
  }
/* e8a9e9: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* e8a9ed: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e8a9f3: mov edx, dword ptr [ecx + edx*4 + 0x52c] */
  edx = R32((uint32_t)(ecx + edx*4 + 0x52cu));
/* e8a9fa: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* e8a9fe: mov dword ptr [edx + esi + 0x50], ecx */
  W32((uint32_t)(edx + esi + 0x50u), ecx);
L_e8aa02: /* e8aa02: mov ecx, dword ptr [esp + 0x1d0] */
  ecx = R32((uint32_t)(esp + 0x1d0u));
/* e8aa09: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8aa0b: je 0xe8abc0 */
  if (zf) goto L_e8abc0;
L_e8aa11: /* e8aa11: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* e8aa13: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* e8aa14: mov dword ptr [ebx], ecx */
  W32((uint32_t)(ebx), ecx);
/* e8aa16: imul ecx, ecx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x84u);
  ecx = (uint32_t)r;
  }
/* e8aa1c: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e8aa1e: mov esi, dword ptr [ebp + 0x2b00c] */
  esi = R32((uint32_t)(ebp + 0x2b00cu));
/* e8aa24: mov edx, dword ptr [esi + edx*4 + 0x52c] */
  edx = R32((uint32_t)(esi + edx*4 + 0x52cu));
/* e8aa2b: mov dword ptr [edx + ecx + 0x58], 1 */
  W32((uint32_t)(edx + ecx + 0x58u), 0x1u);
/* e8aa33: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* e8aa35: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8aa37: imul esi, esi, 0x84 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x84u);
  esi = (uint32_t)r;
  }
/* e8aa3d: mov edx, dword ptr [ebp + 0x2b00c] */
  edx = R32((uint32_t)(ebp + 0x2b00cu));
/* e8aa43: mov ecx, dword ptr [edx + ecx*4 + 0x52c] */
  ecx = R32((uint32_t)(edx + ecx*4 + 0x52cu));
/* e8aa4a: mov dword ptr [ecx + esi + 0x4c], edi */
  W32((uint32_t)(ecx + esi + 0x4cu), edi);
/* e8aa4e: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* e8aa50: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e8aa52: imul esi, esi, 0x84 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x84u);
  esi = (uint32_t)r;
  }
/* e8aa58: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e8aa5e: mov edx, dword ptr [ecx + edx*4 + 0x52c] */
  edx = R32((uint32_t)(ecx + edx*4 + 0x52cu));
/* e8aa65: mov dword ptr [edx + esi + 0x64], 0x11 */
  W32((uint32_t)(edx + esi + 0x64u), 0x11u);
/* e8aa6d: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* e8aa6f: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* e8aa71: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e8aa77: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e8aa7d: mov eax, dword ptr [ecx + eax*4 + 0x52c] */
  eax = R32((uint32_t)(ecx + eax*4 + 0x52cu));
/* e8aa84: mov dword ptr [eax + edx + 0x50], edi */
  W32((uint32_t)(eax + edx + 0x50u), edi);
/* e8aa88: jmp 0xe8abc0 */
  goto L_e8abc0;
L_e8aa8d: /* e8aa8d: mov ecx, dword ptr [esi + 0x44] */
  ecx = R32((uint32_t)(esi + 0x44u));
/* e8aa90: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8aa92: je 0xe8aad7 */
  if (zf) goto L_e8aad7;
L_e8aa94: /* e8aa94: cmp ecx, dword ptr [esi + 0x3c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x3cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8aa97: je 0xe8aad7 */
  if (zf) goto L_e8aad7;
L_e8aa99: /* e8aa99: cmp ecx, dword ptr [esi + 0x40] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x40u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8aa9c: je 0xe8aad7 */
  if (zf) goto L_e8aad7;
L_e8aa9e: /* e8aa9e: mov ecx, dword ptr [esp + 0x1d4] */
  ecx = R32((uint32_t)(esp + 0x1d4u));
/* e8aaa5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8aaa7: je 0xe8aab4 */
  if (zf) goto L_e8aab4;
L_e8aaa9: /* e8aaa9: push 0xeae528 */
  { uint32_t v = 0xeae528u; esp -= 4; W32(esp, v); }
L_e8aaae: /* e8aaae: call dword ptr [0xeae0bc] */
  esp -= 4; W32(esp, 0xe8aab4u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
L_e8aab4: /* e8aab4: mov eax, dword ptr [esp + 0x1d8] */
  eax = R32((uint32_t)(esp + 0x1d8u));
/* e8aabb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8aabd: je 0xe8aac8 */
  if (zf) goto L_e8aac8;
L_e8aabf: /* e8aabf: mov ecx, dword ptr [esp + 0x13c] */
  ecx = R32((uint32_t)(esp + 0x13cu));
/* e8aac6: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_e8aac8: /* e8aac8: xor eax, eax */
  eax = 0;
/* e8aaca: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e8aacb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e8aacc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e8aacd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e8aace: add esp, 0x128 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x128u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8aad4: ret 0xa0 */
  esp += 164; SPILL(); return;
L_e8aad7: /* e8aad7: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* e8aad9: mov ecx, dword ptr [ebp + 0x2b00c] */
  ecx = R32((uint32_t)(ebp + 0x2b00cu));
/* e8aadf: imul esi, esi, 0x84 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x84u);
  esi = (uint32_t)r;
  }
/* e8aae5: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e8aae7: mov edx, dword ptr [ecx + edx*4 + 0x52c] */
  edx = R32((uint32_t)(ecx + edx*4 + 0x52cu));
/* e8aaee: mov dword ptr [edx + esi + 0x64], edi */
  W32((uint32_t)(edx + esi + 0x64u), edi);
/* e8aaf2: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* e8aaf4: mov edx, dword ptr [ebp + 0x2b00c] */
  edx = R32((uint32_t)(ebp + 0x2b00cu));
/* e8aafa: imul esi, esi, 0x84 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x84u);
  esi = (uint32_t)r;
  }
/* e8ab00: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8ab02: mov ecx, dword ptr [edx + ecx*4 + 0x52c] */
  ecx = R32((uint32_t)(edx + ecx*4 + 0x52cu));
/* e8ab09: mov dword ptr [ecx + esi + 0x68], 1 */
  W32((uint32_t)(ecx + esi + 0x68u), 0x1u);
/* e8ab11: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e8ab15: mov esi, dword ptr [ebp + 0x2b00c] */
  esi = R32((uint32_t)(ebp + 0x2b00cu));
/* e8ab1b: xor edx, edx */
  edx = 0;
/* e8ab1d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8ab1f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8ab21: mov ecx, dword ptr [esi + ecx*4 + 0x52c] */
  ecx = R32((uint32_t)(esi + ecx*4 + 0x52cu));
/* e8ab28: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* e8ab2b: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e8ab2d: mov edi, dword ptr [ebx] */
  edi = R32((uint32_t)(ebx));
/* e8ab2f: imul edi, edi, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x84u);
  edi = (uint32_t)r;
  }
/* e8ab35: mov dword ptr [ecx + edi + 0x50], edx */
  W32((uint32_t)(ecx + edi + 0x50u), edx);
/* e8ab39: mov ecx, dword ptr [esp + 0x1d0] */
  ecx = R32((uint32_t)(esp + 0x1d0u));
/* e8ab40: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8ab42: je 0xe8abc0 */
  if (zf) goto L_e8abc0;
L_e8ab44: /* e8ab44: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* e8ab46: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* e8ab47: mov dword ptr [ebx], ecx */
  W32((uint32_t)(ebx), ecx);
/* e8ab49: imul ecx, ecx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x84u);
  ecx = (uint32_t)r;
  }
/* e8ab4f: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e8ab51: mov esi, dword ptr [ebp + 0x2b00c] */
  esi = R32((uint32_t)(ebp + 0x2b00cu));
/* e8ab57: mov edx, dword ptr [esi + edx*4 + 0x52c] */
  edx = R32((uint32_t)(esi + edx*4 + 0x52cu));
/* e8ab5e: mov dword ptr [edx + ecx + 0x58], 1 */
  W32((uint32_t)(edx + ecx + 0x58u), 0x1u);
/* e8ab66: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* e8ab68: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8ab6a: imul esi, esi, 0x84 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x84u);
  esi = (uint32_t)r;
  }
/* e8ab70: mov edx, dword ptr [ebp + 0x2b00c] */
  edx = R32((uint32_t)(ebp + 0x2b00cu));
/* e8ab76: mov edx, dword ptr [edx + ecx*4 + 0x52c] */
  edx = R32((uint32_t)(edx + ecx*4 + 0x52cu));
/* e8ab7d: mov ecx, 2 */
  ecx = 0x2u;
/* e8ab82: mov dword ptr [edx + esi + 0x4c], ecx */
  W32((uint32_t)(edx + esi + 0x4cu), ecx);
/* e8ab86: mov edi, dword ptr [ebx] */
  edi = R32((uint32_t)(ebx));
/* e8ab88: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e8ab8a: imul edi, edi, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x84u);
  edi = (uint32_t)r;
  }
/* e8ab90: mov esi, dword ptr [ebp + 0x2b00c] */
  esi = R32((uint32_t)(ebp + 0x2b00cu));
/* e8ab96: mov edx, dword ptr [esi + edx*4 + 0x52c] */
  edx = R32((uint32_t)(esi + edx*4 + 0x52cu));
/* e8ab9d: mov dword ptr [edx + edi + 0x64], 0x11 */
  W32((uint32_t)(edx + edi + 0x64u), 0x11u);
/* e8aba5: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* e8aba7: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* e8aba9: imul esi, esi, 0x84 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x84u);
  esi = (uint32_t)r;
  }
/* e8abaf: mov edx, dword ptr [ebp + 0x2b00c] */
  edx = R32((uint32_t)(ebp + 0x2b00cu));
/* e8abb5: mov eax, dword ptr [edx + eax*4 + 0x52c] */
  eax = R32((uint32_t)(edx + eax*4 + 0x52cu));
/* e8abbc: mov dword ptr [eax + esi + 0x50], ecx */
  W32((uint32_t)(eax + esi + 0x50u), ecx);
L_e8abc0: /* e8abc0: inc dword ptr [ebx] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebx), r);
  }
L_e8abc2: /* e8abc2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e8abc3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e8abc4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e8abc5: mov eax, 1 */
  eax = 0x1u;
/* e8abca: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e8abcb: add esp, 0x128 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x128u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8abd1: ret 0xa0 */
  esp += 164; SPILL(); return;
}
