#include "recomp.h"
#include "rec_mod.h"

void f_f87f40(void) {
  LOAD_REGS();
L_f87f40: /* f87f40: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* f87f44: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f87f46: je 0xf87f6b */
  if (zf) goto L_f87f6b;
L_f87f48: /* f87f48: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* f87f4b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f87f4d: mov edx, dword ptr [0xfce51c] */
  edx = R32((uint32_t)(0xfce51cu));
/* f87f53: je 0xf87f60 */
  if (zf) goto L_f87f60;
L_f87f55: /* f87f55: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f87f57: je 0xf87f6d */
  if (zf) goto L_f87f6d;
L_f87f59: /* f87f59: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* f87f5c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f87f5e: jne 0xf87f55 */
  if (!zf) goto L_f87f55;
L_f87f60: /* f87f60: xor ecx, ecx */
  ecx = 0;
/* f87f62: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f87f64: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* f87f67: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f87f69: jne 0xf87f6d */
  if (!zf) goto L_f87f6d;
L_f87f6b: /* f87f6b: xor eax, eax */
  eax = 0;
L_f87f6d: /* f87f6d: ret  */
  esp += 4; SPILL(); return;
}

void f_f87f80(void) {
  LOAD_REGS();
L_f87f80: /* f87f80: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* f87f84: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f87f86: je 0xf87fab */
  if (zf) goto L_f87fab;
L_f87f88: /* f87f88: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* f87f8b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f87f8d: mov edx, dword ptr [0xfce520] */
  edx = R32((uint32_t)(0xfce520u));
/* f87f93: je 0xf87fa0 */
  if (zf) goto L_f87fa0;
L_f87f95: /* f87f95: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f87f97: je 0xf87fad */
  if (zf) goto L_f87fad;
L_f87f99: /* f87f99: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* f87f9c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f87f9e: jne 0xf87f95 */
  if (!zf) goto L_f87f95;
L_f87fa0: /* f87fa0: xor ecx, ecx */
  ecx = 0;
/* f87fa2: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f87fa4: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* f87fa7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f87fa9: jne 0xf87fad */
  if (!zf) goto L_f87fad;
L_f87fab: /* f87fab: xor eax, eax */
  eax = 0;
L_f87fad: /* f87fad: ret  */
  esp += 4; SPILL(); return;
}

void f_f87fc0(void) {
  LOAD_REGS();
L_f87fc0: /* f87fc0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* f87fc4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f87fc6: je 0xf87feb */
  if (zf) goto L_f87feb;
L_f87fc8: /* f87fc8: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* f87fcb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f87fcd: mov edx, dword ptr [0xfce524] */
  edx = R32((uint32_t)(0xfce524u));
/* f87fd3: je 0xf87fe0 */
  if (zf) goto L_f87fe0;
L_f87fd5: /* f87fd5: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f87fd7: je 0xf87fed */
  if (zf) goto L_f87fed;
L_f87fd9: /* f87fd9: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* f87fdc: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f87fde: jne 0xf87fd5 */
  if (!zf) goto L_f87fd5;
L_f87fe0: /* f87fe0: xor ecx, ecx */
  ecx = 0;
/* f87fe2: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f87fe4: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* f87fe7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f87fe9: jne 0xf87fed */
  if (!zf) goto L_f87fed;
L_f87feb: /* f87feb: xor eax, eax */
  eax = 0;
L_f87fed: /* f87fed: ret  */
  esp += 4; SPILL(); return;
}

void f_f88000(void) {
  LOAD_REGS();
L_f88000: /* f88000: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* f88004: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f88006: je 0xf8802b */
  if (zf) goto L_f8802b;
L_f88008: /* f88008: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* f8800b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8800d: mov edx, dword ptr [0xfce3fc] */
  edx = R32((uint32_t)(0xfce3fcu));
/* f88013: je 0xf88020 */
  if (zf) goto L_f88020;
L_f88015: /* f88015: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f88017: je 0xf8802d */
  if (zf) goto L_f8802d;
L_f88019: /* f88019: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* f8801c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8801e: jne 0xf88015 */
  if (!zf) goto L_f88015;
L_f88020: /* f88020: xor ecx, ecx */
  ecx = 0;
/* f88022: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f88024: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* f88027: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f88029: jne 0xf8802d */
  if (!zf) goto L_f8802d;
L_f8802b: /* f8802b: xor eax, eax */
  eax = 0;
L_f8802d: /* f8802d: ret  */
  esp += 4; SPILL(); return;
}

void f_f88040(void) {
  LOAD_REGS();
L_f88040: /* f88040: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f88041: mov ebp, esp */
  ebp = esp;
/* f88043: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f88045: push 0xf9a140 */
  { uint32_t v = 0xf9a140u; esp -= 4; W32(esp, v); }
/* f8804a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f88050: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f88051: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f88058: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8805b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8805c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* f8805f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f88060: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f88061: xor edi, edi */
  edi = 0;
/* f88063: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f88065: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f88068: mov esi, ecx */
  esi = ecx;
/* f8806a: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* f8806d: je 0xf88139 */
  if (zf) goto L_f88139;
L_f88073: /* f88073: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* f88076: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f88078: je 0xf88139 */
  if (zf) goto L_f88139;
L_f8807e: /* f8807e: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* f88081: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f88083: je 0xf88139 */
  if (zf) goto L_f88139;
L_f88089: /* f88089: cmp dword ptr [ecx + 0x30], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x30u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f8808c: je 0xf88139 */
  if (zf) goto L_f88139;
L_f88092: /* f88092: mov ecx, dword ptr [ecx + 0x2c] */
  ecx = R32((uint32_t)(ecx + 0x2cu));
/* f88095: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* f88097: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f88099: je 0xf88139 */
  if (zf) goto L_f88139;
L_f8809f: /* f8809f: test byte ptr [ecx + 0x38], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x38u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f880a3: je 0xf880ed */
  if (zf) goto L_f880ed;
L_f880a5: /* f880a5: mov edx, dword ptr [esi + 0xa8] */
  edx = R32((uint32_t)(esi + 0xa8u));
/* f880ab: mov ecx, dword ptr [esi + 0xac] */
  ecx = R32((uint32_t)(esi + 0xacu));
/* f880b1: mov dword ptr [esi + 0xb4], ecx */
  W32((uint32_t)(esi + 0xb4u), ecx);
/* f880b7: mov dword ptr [esi + 0xb0], edx */
  W32((uint32_t)(esi + 0xb0u), edx);
/* f880bd: mov edx, dword ptr [eax + 0x28] */
  edx = R32((uint32_t)(eax + 0x28u));
/* f880c0: mov ecx, dword ptr [edx + 0x2c] */
  ecx = R32((uint32_t)(edx + 0x2cu));
/* f880c3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f880c5: mov ecx, dword ptr [edx + 0x3c] */
  ecx = R32((uint32_t)(edx + 0x3cu));
/* f880c8: mov dword ptr [esi + 0xa8], ecx */
  W32((uint32_t)(esi + 0xa8u), ecx);
/* f880ce: mov edx, dword ptr [eax + 0x28] */
  edx = R32((uint32_t)(eax + 0x28u));
/* f880d1: mov ecx, dword ptr [edx + 0x2c] */
  ecx = R32((uint32_t)(edx + 0x2cu));
/* f880d4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f880d6: mov ecx, dword ptr [edx + 0x40] */
  ecx = R32((uint32_t)(edx + 0x40u));
/* f880d9: mov dword ptr [esi + 0xac], ecx */
  W32((uint32_t)(esi + 0xacu), ecx);
/* f880df: mov edx, dword ptr [eax + 0x28] */
  edx = R32((uint32_t)(eax + 0x28u));
/* f880e2: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* f880e5: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* f880e7: or dword ptr [eax + 0x38], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x38u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x38u), r);
  }
/* f880eb: jmp 0xf880f1 */
  goto L_f880f1;
L_f880ed: /* f880ed: and dword ptr [ecx + 0x38], 0xfffffffd */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x38u))); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ecx + 0x38u), r);
  }
L_f880f1: /* f880f1: cmp edi, dword ptr [esi + 0x50] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x50u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f880f4: jge 0xf88139 */
  if ((sf == of)) goto L_f88139;
L_f880f6: /* f880f6: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* f880f9: mov ecx, dword ptr [ecx + edi*4] */
  ecx = R32((uint32_t)(ecx + edi*4));
/* f880fc: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f880fe: je 0xf88106 */
  if (zf) goto L_f88106;
L_f88100: /* f88100: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f88102: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f88103: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0xf88106u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f88106: /* f88106: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* f88107: jmp 0xf880f1 */
  goto L_f880f1;
L_f88139: /* f88139: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8813c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8813d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8813e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f88145: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f88146: mov esp, ebp */
  esp = ebp;
/* f88148: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f88149: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f88109(void) {
  LOAD_REGS();
L_f88109: /* f88109: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8810c: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f88111: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* f88114: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f88115: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* f88118: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8811du); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f8811d(); return;
}

void f_f8811d(void) {
  LOAD_REGS();
L_f8811d: /* f8811d: push 0xfa3f0c */
  { uint32_t v = 0xfa3f0cu; esp -= 4; W32(esp, v); }
/* f88122: push 0xfb9704 */
  { uint32_t v = 0xfb9704u; esp -= 4; W32(esp, v); }
/* f88127: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf8812du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f8812d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f88130: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f88132: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f88134: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf88139u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
/* f88139: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8813c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8813d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8813e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f88145: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f88146: mov esp, ebp */
  esp = ebp;
/* f88148: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f88149: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f881a0(void) {
  LOAD_REGS();
L_f881a0: /* f881a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f881a1: mov ebp, esp */
  ebp = esp;
/* f881a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f881a5: push 0xf9a150 */
  { uint32_t v = 0xf9a150u; esp -= 4; W32(esp, v); }
/* f881aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f881b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f881b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f881b8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f881bb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f881be: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* f881c1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f881c2: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* f881c3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f881c4: mov esi, ecx */
  esi = ecx;
/* f881c6: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* f881c9: cmp byte ptr [edx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f881cc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f881cd: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f881d0: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f881d7: jne 0xf881ee */
  if (!zf) goto L_f881ee;
L_f881d9: /* f881d9: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* f881dc: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* f881dd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f881df: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* f881e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f881e3: mov eax, dword ptr [0xfce3e4] */
  eax = R32((uint32_t)(0xfce3e4u));
/* f881e8: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0xf881eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f881ee: /* f881ee: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* f881f1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f881f3: je 0xf88230 */
  if (zf) goto L_f88230;
L_f881f5: /* f881f5: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* f881f8: mov edx, dword ptr [0xfce51c] */
  edx = R32((uint32_t)(0xfce51cu));
/* f881fe: mov edi, edi */
  edi = edi;
L_f88200: /* f88200: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f88202: je 0xf8820d */
  if (zf) goto L_f8820d;
L_f88204: /* f88204: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f88206: je 0xf88218 */
  if (zf) goto L_f88218;
L_f88208: /* f88208: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* f8820b: jmp 0xf88200 */
  goto L_f88200;
L_f8820d: /* f8820d: xor eax, eax */
  eax = 0;
/* f8820f: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f88211: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* f88214: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f88216: je 0xf88230 */
  if (zf) goto L_f88230;
L_f88218: /* f88218: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8821a: je 0xf88230 */
  if (zf) goto L_f88230;
L_f8821c: /* f8821c: mov eax, dword ptr [ecx + 0x6c] */
  eax = R32((uint32_t)(ecx + 0x6cu));
/* f8821f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f88221: je 0xf88230 */
  if (zf) goto L_f88230;
L_f88223: /* f88223: mov eax, dword ptr [eax + 0x24] */
  eax = R32((uint32_t)(eax + 0x24u));
/* f88226: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f88227: call dword ptr [0xfce400] */
  esp -= 4; W32(esp, 0xf8822du); SPILL(); f_4e1898(); if (g_unwind) return; /* Core!?ResetConfig@UObject@@SAXPAVUClass@@@Z */ RELOAD();
/* f8822d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f88230: /* f88230: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f88233: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f88234: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f88235: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8823c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8823d: mov esp, ebp */
  esp = ebp;
/* f8823f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f88240: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f88243(void) {
  LOAD_REGS();
L_f88243: /* f88243: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f88246: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f8824b: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* f8824e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8824f: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* f88252: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf88257u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f88257(); return;
}

void f_f88257(void) {
  LOAD_REGS();
L_f88257: /* f88257: push 0xfa3f58 */
  { uint32_t v = 0xfa3f58u; esp -= 4; W32(esp, v); }
/* f8825c: push 0xfb9828 */
  { uint32_t v = 0xfb9828u; esp -= 4; W32(esp, v); }
/* f88261: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf88267u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f88267: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8826a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8826c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8826e: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf88273u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f88273: guest_badaddr(0xf88273); return;
}

void f_f882c0(void) {
  LOAD_REGS();
L_f882c0: /* f882c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f882c1: mov ebp, esp */
  ebp = esp;
/* f882c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f882c5: push 0xf9a160 */
  { uint32_t v = 0xf9a160u; esp -= 4; W32(esp, v); }
/* f882ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f882d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f882d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f882d8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f882db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f882dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f882dd: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* f882e0: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* f882e3: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* f882ea: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* f882ed: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f882ee: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f882ef: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* f882f2: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f882f5: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* f882f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f882f9: mov eax, dword ptr [0xfce3e4] */
  eax = R32((uint32_t)(0xfce3e4u));
/* f882fe: mov edi, ecx */
  edi = ecx;
/* f88300: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* f88303: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f88304: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f8830b: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xf8830eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8830e: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* f88311: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* f88312: mov eax, edx */
  eax = edx;
/* f88314: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* f88317: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f8831a: jne 0xf88332 */
  if (!zf) goto L_f88332;
L_f8831c: /* f8831c: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* f8831f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f88320: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f88322: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* f88325: mov edx, dword ptr [0xfce3e4] */
  edx = R32((uint32_t)(0xfce3e4u));
/* f8832b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f8832c: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0xf88332u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f88332: /* f88332: test byte ptr [edi + 0x40], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x40u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f88336: je 0xf883a4 */
  if (zf) goto L_f883a4;
L_f88338: /* f88338: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f8833b: xor eax, eax */
  eax = 0;
/* f8833d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8833f: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* f88342: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f88345: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f88348: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* f8834a: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* f8834c: mov ecx, dword ptr [edi + 0x150] */
  ecx = R32((uint32_t)(edi + 0x150u));
/* f88352: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* f88354: and ecx, 0xfffffff9 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffff9u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f88357: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* f88359: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8835b: mov dword ptr [edi + 0x150], eax */
  W32((uint32_t)(edi + 0x150u), eax);
/* f88361: je 0xf883a4 */
  if (zf) goto L_f883a4;
L_f88363: /* f88363: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* f88366: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* f88369: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* f8836c: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* f8836e: mov eax, dword ptr [edx + 0x88] */
  eax = R32((uint32_t)(edx + 0x88u));
/* f88374: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* f88375: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f88377: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* f88379: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* f8837c: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* f8837f: fstp dword ptr [edi + 0xa8] */
  WF32((uint32_t)(edi + 0xa8u), ST0); FPOP();
/* f88385: mov eax, dword ptr [ecx + 0x28] */
  eax = R32((uint32_t)(ecx + 0x28u));
/* f88388: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* f8838b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f8838d: mov eax, dword ptr [edx + 0x8c] */
  eax = R32((uint32_t)(edx + 0x8cu));
/* f88393: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* f88394: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f88396: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* f88398: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* f8839b: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* f8839e: fstp dword ptr [edi + 0xac] */
  WF32((uint32_t)(edi + 0xacu), ST0); FPOP();
L_f883a4: /* f883a4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f883a7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f883a8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f883a9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f883b0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f883b1: mov esp, ebp */
  esp = ebp;
/* f883b3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f883b4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f883b7(void) {
  LOAD_REGS();
L_f883b7: /* f883b7: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* f883ba: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f883bf: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* f883c2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f883c3: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* f883c6: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf883cbu); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f883cb(); return;
}

void f_f883cb(void) {
  LOAD_REGS();
L_f883cb: /* f883cb: push 0xfa3fb0 */
  { uint32_t v = 0xfa3fb0u; esp -= 4; W32(esp, v); }
/* f883d0: push 0xfb9830 */
  { uint32_t v = 0xfb9830u; esp -= 4; W32(esp, v); }
/* f883d5: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf883dbu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f883db: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f883de: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f883e0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f883e2: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf883e7u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f883e7: guest_badaddr(0xf883e7); return;
}

void f_f88440(void) {
  LOAD_REGS();
L_f88440: /* f88440: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f88441: mov ebp, esp */
  ebp = esp;
/* f88443: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f88445: push 0xf9a182 */
  { uint32_t v = 0xf9a182u; esp -= 4; W32(esp, v); }
/* f8844a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f88450: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f88451: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f88458: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8845b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f8845e: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* f88461: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f88462: xor ebx, ebx */
  ebx = 0;
/* f88464: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* f88465: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f88466: mov esi, ecx */
  esi = ecx;
/* f88468: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* f8846b: cmp byte ptr [edx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f8846e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8846f: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f88472: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* f88475: jne 0xf8848b */
  if (!zf) goto L_f8848b;
L_f88477: /* f88477: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* f8847a: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* f8847b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8847c: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* f8847f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f88480: mov eax, dword ptr [0xfce3e4] */
  eax = R32((uint32_t)(0xfce3e4u));
/* f88485: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0xf8848bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f8848b: /* f8848b: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* f8848e: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f88490: je 0xf884fa */
  if (zf) goto L_f884fa;
L_f88492: /* f88492: mov eax, dword ptr [ecx + 0x28] */
  eax = R32((uint32_t)(ecx + 0x28u));
/* f88495: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f88497: je 0xf884fa */
  if (zf) goto L_f884fa;
L_f88499: /* f88499: cmp dword ptr [eax + 0x30], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x30u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f8849c: je 0xf884fa */
  if (zf) goto L_f884fa;
L_f8849e: /* f8849e: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* f884a1: cmp dword ptr [edx], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f884a3: je 0xf884fa */
  if (zf) goto L_f884fa;
L_f884a5: /* f884a5: mov eax, dword ptr [ecx + 0x28] */
  eax = R32((uint32_t)(ecx + 0x28u));
/* f884a8: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* f884ab: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* f884ad: mov edx, dword ptr [eax + 0x8c] */
  edx = R32((uint32_t)(eax + 0x8cu));
/* f884b3: mov eax, dword ptr [eax + 0x88] */
  eax = R32((uint32_t)(eax + 0x88u));
/* f884b9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f884ba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f884bb: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* f884be: push 0xfb985c */
  { uint32_t v = 0xfb985cu; esp -= 4; W32(esp, v); }
/* f884c3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f884c4: call dword ptr [0xfce404] */
  esp -= 4; W32(esp, 0xf884cau); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* f884ca: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f884cd: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
L_f884d1: /* f884d1: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* f884d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f884d5: call dword ptr [0xfce3d0] */
  esp -= 4; W32(esp, 0xf884dbu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* f884db: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* f884de: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* f884e1: call dword ptr [0xfce31c] */
  esp -= 4; W32(esp, 0xf884e7u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* f884e7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f884ea: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f884eb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f884ec: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f884f3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f884f4: mov esp, ebp */
  esp = ebp;
/* f884f6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f884f7: ret 8 */
  esp += 12; SPILL(); return;
L_f884fa: /* f884fa: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* f884fd: push 0xfba528 */
  { uint32_t v = 0xfba528u; esp -= 4; W32(esp, v); }
/* f88502: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f88503: call dword ptr [0xfce404] */
  esp -= 4; W32(esp, 0xf88509u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* f88509: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8850c: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* f88510: jmp 0xf884d1 */
  goto L_f884d1;
}

void f_f88512(void) {
  LOAD_REGS();
L_f88512: /* f88512: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* f88515: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f8851a: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* f8851d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8851e: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* f88521: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf88526u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f88526(); return;
}

void f_f88526(void) {
  LOAD_REGS();
L_f88526: /* f88526: push 0xfa4008 */
  { uint32_t v = 0xfa4008u; esp -= 4; W32(esp, v); }
/* f8852b: push 0xfb9868 */
  { uint32_t v = 0xfb9868u; esp -= 4; W32(esp, v); }
/* f88530: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf88536u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f88536: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f88539: xor ebx, ebx */
  ebx = 0;
/* f8853b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8853c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8853d: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf88542u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f88542: guest_badaddr(0xf88542); return;
}

void f_f885a0(void) {
  LOAD_REGS();
L_f885a0: /* f885a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f885a1: mov ebp, esp */
  ebp = esp;
/* f885a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f885a5: push 0xf9a1a0 */
  { uint32_t v = 0xf9a1a0u; esp -= 4; W32(esp, v); }
/* f885aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f885b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f885b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f885b8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f885bb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f885be: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* f885c1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f885c2: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* f885c3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f885c4: mov esi, ecx */
  esi = ecx;
/* f885c6: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* f885c9: cmp byte ptr [edx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f885cc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f885cd: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f885d0: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f885d7: jne 0xf885ee */
  if (!zf) goto L_f885ee;
L_f885d9: /* f885d9: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* f885dc: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* f885dd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f885df: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* f885e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f885e3: mov eax, dword ptr [0xfce3e4] */
  eax = R32((uint32_t)(0xfce3e4u));
/* f885e8: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0xf885eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f885ee: /* f885ee: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* f885f1: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* f885f4: mov ecx, dword ptr [edx + 0x28] */
  ecx = R32((uint32_t)(edx + 0x28u));
/* f885f7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f885f9: je 0xf88620 */
  if (zf) goto L_f88620;
L_f885fb: /* f885fb: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* f885fe: mov edx, dword ptr [0xfce520] */
  edx = R32((uint32_t)(0xfce520u));
L_f88604: /* f88604: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f88606: je 0xf88611 */
  if (zf) goto L_f88611;
L_f88608: /* f88608: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f8860a: je 0xf8861c */
  if (zf) goto L_f8861c;
L_f8860c: /* f8860c: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* f8860f: jmp 0xf88604 */
  goto L_f88604;
L_f88611: /* f88611: xor eax, eax */
  eax = 0;
/* f88613: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f88615: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* f88618: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8861a: je 0xf88620 */
  if (zf) goto L_f88620;
L_f8861c: /* f8861c: mov eax, ecx */
  eax = ecx;
/* f8861e: jmp 0xf88622 */
  goto L_f88622;
L_f88620: /* f88620: xor eax, eax */
  eax = 0;
L_f88622: /* f88622: lea ecx, [eax + 0x184] */
  ecx = (uint32_t)(eax + 0x184u);
/* f88628: call dword ptr [0xfce3ec] */
  esp -= 4; W32(esp, 0xf8862eu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* f8862e: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* f88631: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f88632: call dword ptr [0xfce408] */
  esp -= 4; W32(esp, 0xf88638u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* f88638: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8863b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8863c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8863d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f88644: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f88645: mov esp, ebp */
  esp = ebp;
/* f88647: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f88648: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f8864b(void) {
  LOAD_REGS();
L_f8864b: /* f8864b: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8864e: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f88653: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* f88656: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f88657: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* f8865a: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8865fu); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f8865f(); return;
}

void f_f8865f(void) {
  LOAD_REGS();
L_f8865f: /* f8865f: push 0xfa4058 */
  { uint32_t v = 0xfa4058u; esp -= 4; W32(esp, v); }
/* f88664: push 0xfb9870 */
  { uint32_t v = 0xfb9870u; esp -= 4; W32(esp, v); }
/* f88669: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf8866fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f8866f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f88672: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f88674: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f88676: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8867bu); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f8867b: guest_badaddr(0xf8867b); return;
}

void f_f886c0(void) {
  LOAD_REGS();
L_f886c0: /* f886c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f886c1: mov ebp, esp */
  ebp = esp;
/* f886c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f886c5: push 0xf9a1b9 */
  { uint32_t v = 0xf9a1b9u; esp -= 4; W32(esp, v); }
/* f886ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f886d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f886d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f886d8: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f886db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f886dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f886dd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f886de: mov edi, ecx */
  edi = ecx;
/* f886e0: xor ebx, ebx */
  ebx = 0;
/* f886e2: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* f886e5: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f886e8: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* f886eb: call dword ptr [0xfce340] */
  esp -= 4; W32(esp, 0xf886f1u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* f886f1: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* f886f4: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* f886f7: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* f886fa: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* f886fd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f886fe: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* f88701: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* f88704: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f88705: mov eax, dword ptr [0xfce3e4] */
  eax = R32((uint32_t)(0xfce3e4u));
/* f8870a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f8870b: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* f8870f: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xf88712u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f88712: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* f88715: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* f88716: mov eax, edx */
  eax = edx;
/* f88718: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* f8871b: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f8871e: jne 0xf88735 */
  if (!zf) goto L_f88735;
L_f88720: /* f88720: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* f88723: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f88724: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f88725: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* f88728: mov edx, dword ptr [0xfce3e4] */
  edx = R32((uint32_t)(0xfce3e4u));
/* f8872e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f8872f: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0xf88735u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f88735: /* f88735: cmp dword ptr [edi + 0x60], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x60u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f88738: je 0xf88789 */
  if (zf) goto L_f88789;
L_f8873a: /* f8873a: xor esi, esi */
  esi = 0;
/* f8873c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_f88740: /* f88740: cmp esi, dword ptr [edi + 0x60] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x60u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f88743: jge 0xf88789 */
  if ((sf == of)) goto L_f88789;
L_f88745: /* f88745: mov ecx, dword ptr [edi + 0x5c] */
  ecx = R32((uint32_t)(edi + 0x5cu));
/* f88748: mov edx, dword ptr [ecx + esi*4] */
  edx = R32((uint32_t)(ecx + esi*4));
/* f8874b: add edx, 0x2c */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f8874e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8874f: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* f88752: call dword ptr [0xfce40c] */
  esp -= 4; W32(esp, 0xf88758u); SPILL(); f_4e3b43(); if (g_unwind) return; /* Core!??8FString@@QBEHABV0@@Z */ RELOAD();
/* f88758: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f8875a: je 0xf88786 */
  if (zf) goto L_f88786;
L_f8875c: /* f8875c: mov eax, dword ptr [edi + 0x5c] */
  eax = R32((uint32_t)(edi + 0x5cu));
/* f8875f: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* f88762: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* f88765: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
L_f88767: /* f88767: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* f8876a: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* f8876d: call dword ptr [0xfce31c] */
  esp -= 4; W32(esp, 0xf88773u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* f88773: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f88776: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f88777: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f88778: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8877f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f88780: mov esp, ebp */
  esp = ebp;
/* f88782: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f88783: ret 8 */
  esp += 12; SPILL(); return;
L_f88786: /* f88786: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* f88787: jmp 0xf88740 */
  goto L_f88740;
L_f88789: /* f88789: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* f8878c: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* f8878e: jmp 0xf88767 */
  goto L_f88767;
}

void f_f88790(void) {
  LOAD_REGS();
L_f88790: /* f88790: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f88793: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f88798: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* f8879b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8879c: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* f8879f: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf887a4u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f887a4(); return;
}

void f_f887a4(void) {
  LOAD_REGS();
L_f887a4: /* f887a4: push 0xfa40a8 */
  { uint32_t v = 0xfa40a8u; esp -= 4; W32(esp, v); }
/* f887a9: push 0xfb9878 */
  { uint32_t v = 0xfb9878u; esp -= 4; W32(esp, v); }
/* f887ae: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf887b4u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f887b4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f887b7: xor ebx, ebx */
  ebx = 0;
/* f887b9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f887ba: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f887bb: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf887c0u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f887c0: guest_badaddr(0xf887c0); return;
}

void f_f88820(void) {
  LOAD_REGS();
L_f88820: /* f88820: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f88821: mov ebp, esp */
  ebp = esp;
/* f88823: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f88825: push 0xf9a1d9 */
  { uint32_t v = 0xf9a1d9u; esp -= 4; W32(esp, v); }
/* f8882a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f88830: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f88831: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f88838: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8883b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8883c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f8883d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8883e: mov edi, ecx */
  edi = ecx;
/* f88840: xor ebx, ebx */
  ebx = 0;
/* f88842: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* f88845: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f88848: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* f8884b: call dword ptr [0xfce340] */
  esp -= 4; W32(esp, 0xf88851u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* f88851: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* f88854: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* f88857: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* f8885a: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* f8885d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f8885e: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* f88861: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* f88864: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f88865: mov eax, dword ptr [0xfce3e4] */
  eax = R32((uint32_t)(0xfce3e4u));
/* f8886a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f8886b: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* f8886f: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xf88872u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f88872: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* f88875: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* f88876: mov eax, edx */
  eax = edx;
/* f88878: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* f8887b: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f8887e: jne 0xf88895 */
  if (!zf) goto L_f88895;
L_f88880: /* f88880: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* f88883: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f88884: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f88885: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* f88888: mov edx, dword ptr [0xfce3e4] */
  edx = R32((uint32_t)(0xfce3e4u));
/* f8888e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f8888f: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0xf88895u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f88895: /* f88895: cmp dword ptr [edi + 0x6c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x6cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f88898: je 0xf888e9 */
  if (zf) goto L_f888e9;
L_f8889a: /* f8889a: xor esi, esi */
  esi = 0;
/* f8889c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_f888a0: /* f888a0: cmp esi, dword ptr [edi + 0x6c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x6cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f888a3: jge 0xf888e9 */
  if ((sf == of)) goto L_f888e9;
L_f888a5: /* f888a5: mov ecx, dword ptr [edi + 0x68] */
  ecx = R32((uint32_t)(edi + 0x68u));
/* f888a8: mov edx, dword ptr [ecx + esi*4] */
  edx = R32((uint32_t)(ecx + esi*4));
/* f888ab: add edx, 0x2c */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f888ae: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f888af: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* f888b2: call dword ptr [0xfce40c] */
  esp -= 4; W32(esp, 0xf888b8u); SPILL(); f_4e3b43(); if (g_unwind) return; /* Core!??8FString@@QBEHABV0@@Z */ RELOAD();
/* f888b8: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f888ba: je 0xf888e6 */
  if (zf) goto L_f888e6;
L_f888bc: /* f888bc: mov eax, dword ptr [edi + 0x68] */
  eax = R32((uint32_t)(edi + 0x68u));
/* f888bf: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* f888c2: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* f888c5: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
L_f888c7: /* f888c7: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* f888ca: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* f888cd: call dword ptr [0xfce31c] */
  esp -= 4; W32(esp, 0xf888d3u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* f888d3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f888d6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f888d7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f888d8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f888df: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f888e0: mov esp, ebp */
  esp = ebp;
/* f888e2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f888e3: ret 8 */
  esp += 12; SPILL(); return;
L_f888e6: /* f888e6: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* f888e7: jmp 0xf888a0 */
  goto L_f888a0;
L_f888e9: /* f888e9: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* f888ec: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* f888ee: jmp 0xf888c7 */
  goto L_f888c7;
}

void f_f888f0(void) {
  LOAD_REGS();
L_f888f0: /* f888f0: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f888f3: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f888f8: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* f888fb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f888fc: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* f888ff: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf88904u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f88904(); return;
}

void f_f88904(void) {
  LOAD_REGS();
L_f88904: /* f88904: push 0xfa40f4 */
  { uint32_t v = 0xfa40f4u; esp -= 4; W32(esp, v); }
/* f88909: push 0xfb9880 */
  { uint32_t v = 0xfb9880u; esp -= 4; W32(esp, v); }
/* f8890e: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf88914u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f88914: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f88917: xor ebx, ebx */
  ebx = 0;
/* f88919: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8891a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8891b: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf88920u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f88920: guest_badaddr(0xf88920); return;
}

void f_f88980(void) {
  LOAD_REGS();
L_f88980: /* f88980: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f88982: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f88988: push 0xf9a1f9 */
  { uint32_t v = 0xf9a1f9u; esp -= 4; W32(esp, v); }
/* f8898d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8898e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f88995: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f88998: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f88999: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f8899a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f8899b: mov esi, ecx */
  esi = ecx;
/* f8899d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8899e: mov edi, dword ptr [esi + 0x30] */
  edi = R32((uint32_t)(esi + 0x30u));
/* f889a1: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f889a3: je 0xf89398 */
  if (zf) goto L_f89398;
L_f889a9: /* f889a9: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* f889ac: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f889ae: je 0xf89398 */
  if (zf) goto L_f89398;
L_f889b4: /* f889b4: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* f889b7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f889b9: je 0xf89398 */
  if (zf) goto L_f89398;
L_f889bf: /* f889bf: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* f889c2: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f889c5: je 0xf89398 */
  if (zf) goto L_f89398;
L_f889cb: /* f889cb: mov cl, byte ptr [esi + 0xa5] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xa5u))) & 0xffu);
/* f889d1: mov dl, byte ptr [esi + 0xa4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xa4u))) & 0xffu);
/* f889d7: and dl, cl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f889d9: cmp dl, cl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f889db: jne 0xf8933e */
  if (!zf) goto L_f8933e;
L_f889e1: /* f889e1: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* f889e4: mov cl, byte ptr [eax + 0x80] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x80u))) & 0xffu);
/* f889ea: mov byte ptr [esi + 0xa5], cl */
  W8((uint32_t)(esi + 0xa5u), (ecx & 0xffu));
/* f889f0: mov edx, dword ptr [edi + 0x28] */
  edx = R32((uint32_t)(edi + 0x28u));
/* f889f3: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* f889f6: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* f889f8: fild dword ptr [eax + 0x88] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x88u)); FPUSH(v); }
/* f889fe: mov ecx, dword ptr [esi + 0x21c] */
  ecx = R32((uint32_t)(esi + 0x21cu));
/* f88a04: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f88a06: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* f88a0a: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* f88a10: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* f88a14: je 0xf88a46 */
  if (zf) goto L_f88a46;
L_f88a16: /* f88a16: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f88a18: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0xf88a1bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f88a1b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f88a1d: jne 0xf88a46 */
  if (!zf) goto L_f88a46;
L_f88a1f: /* f88a1f: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* f88a23: cmp byte ptr [eax], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f88a26: jne 0xf88d98 */
  if (!zf) goto L_f88d98;
L_f88a2c: /* f88a2c: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* f88a30: xor edx, edx */
  edx = 0;
/* f88a32: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* f88a34: mov ecx, esi */
  ecx = esi;
/* f88a36: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f88a37: call 0xf71a0a */
  esp -= 4; W32(esp, 0xf88a3cu); SPILL(); f_f71a0a(); if (g_unwind) return; RELOAD();
/* f88a3c: mov eax, 1 */
  eax = 0x1u;
/* f88a41: jmp 0xf8939a */
  goto L_f8939a;
L_f88a46: /* f88a46: mov ecx, dword ptr [esi + 0x104] */
  ecx = R32((uint32_t)(esi + 0x104u));
/* f88a4c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f88a4e: mov edi, dword ptr [esp + 0x3c] */
  edi = R32((uint32_t)(esp + 0x3cu));
/* f88a52: mov ebp, dword ptr [esp + 0x38] */
  ebp = R32((uint32_t)(esp + 0x38u));
/* f88a56: je 0xf88a77 */
  if (zf) goto L_f88a77;
L_f88a58: /* f88a58: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* f88a5c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* f88a5e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f88a5f: movzx edx, byte ptr [esi + 0xa5] */
  edx = (uint32_t)(R8((uint32_t)(esi + 0xa5u)));
/* f88a66: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f88a67: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f88a68: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f88a69: call dword ptr [eax + 0xc0] */
  { uint32_t t = R32((uint32_t)(eax + 0xc0u)); esp -= 4; W32(esp, 0xf88a6fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f88a6f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f88a71: jne 0xf8933e */
  if (!zf) goto L_f8933e;
L_f88a77: /* f88a77: mov al, byte ptr [ebp] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp))) & 0xffu);
/* f88a7a: cmp al, 0xd */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f88a7c: jne 0xf88a8b */
  if (!zf) goto L_f88a8b;
L_f88a7e: /* f88a7e: test byte ptr [esi + 0xb8], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xb8u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f88a85: jne 0xf8933e */
  if (!zf) goto L_f8933e;
L_f88a8b: /* f88a8b: cmp al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f88a8d: jne 0xf88aae */
  if (!zf) goto L_f88aae;
L_f88a8f: /* f88a8f: mov cl, byte ptr [edi] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* f88a91: mov ebx, dword ptr [esi + 0xb8] */
  ebx = R32((uint32_t)(esi + 0xb8u));
/* f88a97: xor eax, eax */
  eax = 0;
/* f88a99: cmp cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f88a9c: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* f88a9f: mov ecx, ebx */
  ecx = ebx;
/* f88aa1: xor eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f88aa3: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f88aa6: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f88aa8: mov dword ptr [esi + 0xb8], ecx */
  W32((uint32_t)(esi + 0xb8u), ecx);
L_f88aae: /* f88aae: cmp byte ptr [ebp], 0x12 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp))); uint8_t b = (uint8_t)(0x12u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f88ab2: jne 0xf88ad4 */
  if (!zf) goto L_f88ad4;
L_f88ab4: /* f88ab4: mov al, byte ptr [edi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* f88ab6: mov edi, dword ptr [esi + 0xb8] */
  edi = R32((uint32_t)(esi + 0xb8u));
/* f88abc: xor ecx, ecx */
  ecx = 0;
/* f88abe: cmp al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f88ac0: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* f88ac3: mov eax, edi */
  eax = edi;
/* f88ac5: shl ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* f88ac7: xor ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f88ac9: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f88acc: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f88ace: mov dword ptr [esi + 0xb8], eax */
  W32((uint32_t)(esi + 0xb8u), eax);
L_f88ad4: /* f88ad4: cmp byte ptr [ebp], 0x11 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp))); uint8_t b = (uint8_t)(0x11u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f88ad8: mov edi, dword ptr [esp + 0x3c] */
  edi = R32((uint32_t)(esp + 0x3cu));
/* f88adc: mov ebx, 4 */
  ebx = 0x4u;
/* f88ae1: jne 0xf88b01 */
  if (!zf) goto L_f88b01;
L_f88ae3: /* f88ae3: mov al, byte ptr [edi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* f88ae5: xor edx, edx */
  edx = 0;
/* f88ae7: cmp al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f88ae9: mov eax, dword ptr [esi + 0xb8] */
  eax = R32((uint32_t)(esi + 0xb8u));
/* f88aef: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* f88af2: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* f88af5: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f88af7: and edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* f88af9: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f88afb: mov dword ptr [esi + 0xb8], eax */
  W32((uint32_t)(esi + 0xb8u), eax);
L_f88b01: /* f88b01: cmp byte ptr [ebp], 0xf0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp))); uint8_t b = (uint8_t)(0xf0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f88b05: jne 0xf88b19 */
  if (!zf) goto L_f88b19;
L_f88b07: /* f88b07: movzx eax, byte ptr [esi + 0xa5] */
  eax = (uint32_t)(R8((uint32_t)(esi + 0xa5u)));
/* f88b0e: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* f88b12: fstp dword ptr [esi + eax*4 + 0x158] */
  WF32((uint32_t)(esi + eax*4 + 0x158u), ST0); FPOP();
L_f88b19: /* f88b19: cmp byte ptr [ebp], 0xf1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp))); uint8_t b = (uint8_t)(0xf1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f88b1d: jne 0xf88b31 */
  if (!zf) goto L_f88b31;
L_f88b1f: /* f88b1f: movzx ecx, byte ptr [esi + 0xa5] */
  ecx = (uint32_t)(R8((uint32_t)(esi + 0xa5u)));
/* f88b26: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* f88b2a: fstp dword ptr [esi + ecx*4 + 0x168] */
  WF32((uint32_t)(esi + ecx*4 + 0x168u), ST0); FPOP();
L_f88b31: /* f88b31: cmp byte ptr [ebp], 0xe8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp))); uint8_t b = (uint8_t)(0xe8u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f88b35: jne 0xf88b49 */
  if (!zf) goto L_f88b49;
L_f88b37: /* f88b37: movzx edx, byte ptr [esi + 0xa5] */
  edx = (uint32_t)(R8((uint32_t)(esi + 0xa5u)));
/* f88b3e: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* f88b42: fstp dword ptr [esi + edx*4 + 0x178] */
  WF32((uint32_t)(esi + edx*4 + 0x178u), ST0); FPOP();
L_f88b49: /* f88b49: cmp byte ptr [ebp], 0xe9 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp))); uint8_t b = (uint8_t)(0xe9u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f88b4d: jne 0xf88b61 */
  if (!zf) goto L_f88b61;
L_f88b4f: /* f88b4f: movzx eax, byte ptr [esi + 0xa5] */
  eax = (uint32_t)(R8((uint32_t)(esi + 0xa5u)));
/* f88b56: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* f88b5a: fstp dword ptr [esi + eax*4 + 0x188] */
  WF32((uint32_t)(esi + eax*4 + 0x188u), ST0); FPOP();
L_f88b61: /* f88b61: mov al, byte ptr [ebp] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp))) & 0xffu);
/* f88b64: cmp al, 0xc8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xc8u);
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* f88b66: jb 0xf88b95 */
  if (cf) goto L_f88b95;
L_f88b68: /* f88b68: cmp al, 0xd7 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xd7u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* f88b6a: ja 0xf88b95 */
  if ((!cf && !zf)) goto L_f88b95;
L_f88b6c: /* f88b6c: movzx ecx, byte ptr [esi + 0xa5] */
  ecx = (uint32_t)(R8((uint32_t)(esi + 0xa5u)));
/* f88b73: movzx edx, al */
  edx = (uint32_t)((eax & 0xffu));
/* f88b76: xor eax, eax */
  eax = 0;
/* f88b78: mov al, byte ptr [edi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* f88b7a: mov edi, dword ptr [esp + 0x3c] */
  edi = R32((uint32_t)(esp + 0x3cu));
/* f88b7e: lea ecx, [edx + ecx*4 - 0xc8] */
  ecx = (uint32_t)(edx + ecx*4 + 0xffffff38u);
/* f88b85: cmp al, 3 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f88b87: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* f88b8a: dec dl */
  { uint8_t a = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - 1);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f88b8c: and edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* f88b8e: mov byte ptr [ecx + esi + 0x198], dl */
  W8((uint32_t)(ecx + esi + 0x198u), (edx & 0xffu));
L_f88b95: /* f88b95: mov eax, dword ptr [esi + 0x114] */
  eax = R32((uint32_t)(esi + 0x114u));
/* f88b9b: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f88b9d: je 0xf88bd3 */
  if (zf) goto L_f88bd3;
L_f88b9f: /* f88b9f: mov ecx, dword ptr [esi + 0xb8] */
  ecx = R32((uint32_t)(esi + 0xb8u));
/* f88ba5: test bl, cl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f88ba7: je 0xf88bd3 */
  if (zf) goto L_f88bd3;
L_f88ba9: /* f88ba9: test cl, 2 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f88bac: je 0xf88bd3 */
  if (zf) goto L_f88bd3;
L_f88bae: /* f88bae: cmp byte ptr [ebp], 0x44 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp))); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f88bb2: jne 0xf88bd3 */
  if (!zf) goto L_f88bd3;
L_f88bb4: /* f88bb4: cmp byte ptr [edi], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f88bb7: jne 0xf88bd3 */
  if (!zf) goto L_f88bd3;
L_f88bb9: /* f88bb9: mov ecx, eax */
  ecx = eax;
/* f88bbb: not ecx */
  ecx = ~ecx;
/* f88bbd: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f88bbf: and ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f88bc1: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f88bc3: mov dword ptr [esi + 0x114], ecx */
  W32((uint32_t)(esi + 0x114u), ecx);
/* f88bc9: mov dword ptr [esi + 0x110], 0 */
  W32((uint32_t)(esi + 0x110u), 0x0u);
L_f88bd3: /* f88bd3: mov eax, dword ptr [esi + 0x114] */
  eax = R32((uint32_t)(esi + 0x114u));
/* f88bd9: test bl, al */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f88bdb: je 0xf88e26 */
  if (zf) goto L_f88e26;
L_f88be1: /* f88be1: mov edx, dword ptr [esi + 0xb8] */
  edx = R32((uint32_t)(esi + 0xb8u));
/* f88be7: shr edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* f88bea: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  edx = r;
  }
/* f88bed: je 0xf88c0b */
  if (zf) goto L_f88c0b;
L_f88bef: /* f88bef: cmp byte ptr [ebp], 0x48 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp))); uint8_t b = (uint8_t)(0x48u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f88bf3: jne 0xf88c0b */
  if (!zf) goto L_f88c0b;
L_f88bf5: /* f88bf5: cmp byte ptr [edi], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f88bf8: jne 0xf88c0b */
  if (!zf) goto L_f88c0b;
L_f88bfa: /* f88bfa: mov ecx, eax */
  ecx = eax;
/* f88bfc: not ecx */
  ecx = ~ecx;
/* f88bfe: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f88c00: and ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f88c03: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f88c05: mov dword ptr [esi + 0x114], ecx */
  W32((uint32_t)(esi + 0x114u), ecx);
L_f88c0b: /* f88c0b: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f88c0d: je 0xf88c76 */
  if (zf) goto L_f88c76;
L_f88c0f: /* f88c0f: cmp byte ptr [ebp], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f88c13: jne 0xf88c76 */
  if (!zf) goto L_f88c76;
L_f88c15: /* f88c15: cmp byte ptr [edi], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f88c18: jne 0xf88c76 */
  if (!zf) goto L_f88c76;
L_f88c1a: /* f88c1a: mov eax, dword ptr [esi + 0x58] */
  eax = R32((uint32_t)(esi + 0x58u));
/* f88c1d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f88c1f: je 0xf88c76 */
  if (zf) goto L_f88c76;
L_f88c21: /* f88c21: mov edi, dword ptr [esi + 0x110] */
  edi = R32((uint32_t)(esi + 0x110u));
/* f88c27: xor ebx, ebx */
  ebx = 0;
/* f88c29: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f88c2b: je 0xf88c4b */
  if (zf) goto L_f88c4b;
L_f88c2d: /* f88c2d: mov dword ptr [esi + 0x110], ebx */
  W32((uint32_t)(esi + 0x110u), ebx);
/* f88c33: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* f88c35: mov ecx, edi */
  ecx = edi;
/* f88c37: call dword ptr [edx + 0xb4] */
  { uint32_t t = R32((uint32_t)(edx + 0xb4u)); esp -= 4; W32(esp, 0xf88c3du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f88c3d: cmp dword ptr [esi + 0x110], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x110u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f88c43: je 0xf88c4b */
  if (zf) goto L_f88c4b;
L_f88c45: /* f88c45: mov dword ptr [esi + 0x110], ebx */
  W32((uint32_t)(esi + 0x110u), ebx);
L_f88c4b: /* f88c4b: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* f88c4e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* f88c50: call dword ptr [eax + 0xb4] */
  { uint32_t t = R32((uint32_t)(eax + 0xb4u)); esp -= 4; W32(esp, 0xf88c56u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f88c56: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f88c58: je 0xf88c66 */
  if (zf) goto L_f88c66;
L_f88c5a: /* f88c5a: cmp dword ptr [esi + 0x110], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x110u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f88c60: jne 0xf88d98 */
  if (!zf) goto L_f88d98;
L_f88c66: /* f88c66: mov dword ptr [esi + 0x110], ebx */
  W32((uint32_t)(esi + 0x110u), ebx);
/* f88c6c: mov eax, 1 */
  eax = 0x1u;
/* f88c71: jmp 0xf8939a */
  goto L_f8939a;
L_f88c76: /* f88c76: mov eax, dword ptr [esi + 0x110] */
  eax = R32((uint32_t)(esi + 0x110u));
/* f88c7c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f88c7e: je 0xf88db9 */
  if (zf) goto L_f88db9;
L_f88c84: /* f88c84: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f88c86: je 0xf88e26 */
  if (zf) goto L_f88e26;
L_f88c8c: /* f88c8c: cmp byte ptr [edi], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f88c8f: jne 0xf88db9 */
  if (!zf) goto L_f88db9;
L_f88c95: /* f88c95: mov cl, byte ptr [ebp] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp))) & 0xffu);
/* f88c98: cmp cl, 0x25 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x25u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f88c9b: jne 0xf88cc1 */
  if (!zf) goto L_f88cc1;
L_f88c9d: /* f88c9d: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* f88ca1: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* f88ca5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f88ca6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f88ca7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f88ca9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f88cab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f88cad: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f88caf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f88cb0: mov ecx, esi */
  ecx = esi;
/* f88cb2: call 0xf71a50 */
  esp -= 4; W32(esp, 0xf88cb7u); SPILL(); f_f71a50(); if (g_unwind) return; RELOAD();
/* f88cb7: mov eax, 1 */
  eax = 0x1u;
/* f88cbc: jmp 0xf8939a */
  goto L_f8939a;
L_f88cc1: /* f88cc1: cmp cl, 0x27 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x27u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f88cc4: jne 0xf88cea */
  if (!zf) goto L_f88cea;
L_f88cc6: /* f88cc6: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* f88cca: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* f88cce: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f88ccf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f88cd0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f88cd2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f88cd4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f88cd6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f88cd8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f88cd9: mov ecx, esi */
  ecx = esi;
/* f88cdb: call 0xf71a50 */
  esp -= 4; W32(esp, 0xf88ce0u); SPILL(); f_f71a50(); if (g_unwind) return; RELOAD();
/* f88ce0: mov eax, 1 */
  eax = 0x1u;
/* f88ce5: jmp 0xf8939a */
  goto L_f8939a;
L_f88cea: /* f88cea: cmp cl, 0x26 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x26u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f88ced: jne 0xf88d13 */
  if (!zf) goto L_f88d13;
L_f88cef: /* f88cef: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* f88cf3: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* f88cf7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f88cf8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f88cf9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f88cfb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f88cfd: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f88cff: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f88d01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f88d02: mov ecx, esi */
  ecx = esi;
/* f88d04: call 0xf71a50 */
  esp -= 4; W32(esp, 0xf88d09u); SPILL(); f_f71a50(); if (g_unwind) return; RELOAD();
/* f88d09: mov eax, 1 */
  eax = 0x1u;
/* f88d0e: jmp 0xf8939a */
  goto L_f8939a;
L_f88d13: /* f88d13: cmp cl, 0x28 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x28u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f88d16: jne 0xf88d3c */
  if (!zf) goto L_f88d3c;
L_f88d18: /* f88d18: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* f88d1c: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* f88d20: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f88d21: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f88d22: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f88d24: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f88d26: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f88d28: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f88d2a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f88d2b: mov ecx, esi */
  ecx = esi;
/* f88d2d: call 0xf71a50 */
  esp -= 4; W32(esp, 0xf88d32u); SPILL(); f_f71a50(); if (g_unwind) return; RELOAD();
/* f88d32: mov eax, 1 */
  eax = 0x1u;
/* f88d37: jmp 0xf8939a */
  goto L_f8939a;
L_f88d3c: /* f88d3c: cmp cl, 0x6b */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x6bu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f88d3f: jne 0xf88d51 */
  if (!zf) goto L_f88d51;
L_f88d41: /* f88d41: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* f88d45: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* f88d49: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f88d4a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f88d4b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f88d4d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f88d4f: jmp 0xf88d8c */
  goto L_f88d8c;
L_f88d51: /* f88d51: cmp cl, 0x6d */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x6du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f88d54: jne 0xf88d66 */
  if (!zf) goto L_f88d66;
L_f88d56: /* f88d56: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* f88d5a: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* f88d5e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f88d5f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f88d60: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f88d62: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f88d64: jmp 0xf88d8c */
  goto L_f88d8c;
L_f88d66: /* f88d66: cmp cl, 0xbb */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0xbbu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f88d69: jne 0xf88d79 */
  if (!zf) goto L_f88d79;
L_f88d6b: /* f88d6b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* f88d6f: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* f88d73: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f88d74: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f88d75: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f88d77: jmp 0xf88d8a */
  goto L_f88d8a;
L_f88d79: /* f88d79: cmp cl, 0xbd */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0xbdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f88d7c: jne 0xf88da2 */
  if (!zf) goto L_f88da2;
L_f88d7e: /* f88d7e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* f88d82: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* f88d86: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f88d87: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f88d88: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
L_f88d8a: /* f88d8a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
L_f88d8c: /* f88d8c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f88d8e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f88d90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f88d91: mov ecx, esi */
  ecx = esi;
/* f88d93: call 0xf71a50 */
  esp -= 4; W32(esp, 0xf88d98u); SPILL(); f_f71a50(); if (g_unwind) return; RELOAD();
L_f88d98: /* f88d98: mov eax, 1 */
  eax = 0x1u;
/* f88d9d: jmp 0xf8939a */
  goto L_f8939a;
L_f88da2: /* f88da2: cmp cl, 0xec */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0xecu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f88da5: jne 0xf88db9 */
  if (!zf) goto L_f88db9;
L_f88da7: /* f88da7: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* f88daa: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f88dac: je 0xf88db9 */
  if (zf) goto L_f88db9;
L_f88dae: /* f88dae: cmp eax, dword ptr [esi + 0x58] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x58u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f88db1: je 0xf88db9 */
  if (zf) goto L_f88db9;
L_f88db3: /* f88db3: mov dword ptr [esi + 0x110], ecx */
  W32((uint32_t)(esi + 0x110u), ecx);
L_f88db9: /* f88db9: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f88dbb: je 0xf88e26 */
  if (zf) goto L_f88e26;
L_f88dbd: /* f88dbd: cmp byte ptr [ebp], 0x43 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp))); uint8_t b = (uint8_t)(0x43u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f88dc1: jne 0xf88e26 */
  if (!zf) goto L_f88e26;
L_f88dc3: /* f88dc3: mov eax, dword ptr [esi + 0x110] */
  eax = R32((uint32_t)(esi + 0x110u));
/* f88dc9: fld dword ptr [eax + 0x6c] */
  { double v = F32((uint32_t)(eax + 0x6cu)); FPUSH(v); }
/* f88dcc: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f88dcf: fstp qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0); FPOP();
/* f88dd3: fld dword ptr [eax + 0x70] */
  { double v = F32((uint32_t)(eax + 0x70u)); FPUSH(v); }
/* f88dd6: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* f88dda: fld dword ptr [eax + 0x78] */
  { double v = F32((uint32_t)(eax + 0x78u)); FPUSH(v); }
/* f88ddd: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* f88de1: fld dword ptr [eax + 0x74] */
  { double v = F32((uint32_t)(eax + 0x74u)); FPUSH(v); }
/* f88de4: lea eax, [esp + 0x3c] */
  eax = (uint32_t)(esp + 0x3cu);
/* f88de8: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* f88deb: push 0xfb9888 */
  { uint32_t v = 0xfb9888u; esp -= 4; W32(esp, v); }
/* f88df0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f88df1: call dword ptr [0xfce404] */
  esp -= 4; W32(esp, 0xf88df7u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* f88df7: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f88dfa: mov ecx, eax */
  ecx = eax;
/* f88dfc: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* f88e04: call dword ptr [0xfce3ec] */
  esp -= 4; W32(esp, 0xf88e0au); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* f88e0a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f88e0b: call dword ptr [0xfce410] */
  esp -= 4; W32(esp, 0xf88e11u); SPILL(); f_4e15eb(); if (g_unwind) return; /* Core!?appClipboardCopy@@YAXPBG@Z */ RELOAD();
/* f88e11: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f88e14: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* f88e18: mov dword ptr [esp + 0x30], 0xffffffff */
  W32((uint32_t)(esp + 0x30u), 0xffffffffu);
/* f88e20: call dword ptr [0xfce31c] */
  esp -= 4; W32(esp, 0xf88e26u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_f88e26: /* f88e26: test byte ptr [esi + 0x150], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x150u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f88e2d: je 0xf88edd */
  if (zf) goto L_f88edd;
L_f88e33: /* f88e33: mov al, byte ptr [ebp] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp))) & 0xffu);
/* f88e36: cmp al, 0x26 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x26u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f88e38: jne 0xf88e43 */
  if (!zf) goto L_f88e43;
L_f88e3a: /* f88e3a: mov byte ptr [ebp], 0xd0 */
  W8((uint32_t)(ebp), 0xd0u);
/* f88e3e: jmp 0xf88edd */
  goto L_f88edd;
L_f88e43: /* f88e43: cmp al, 0x28 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x28u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f88e45: jne 0xf88e50 */
  if (!zf) goto L_f88e50;
L_f88e47: /* f88e47: mov byte ptr [ebp], 0xd1 */
  W8((uint32_t)(ebp), 0xd1u);
/* f88e4b: jmp 0xf88edd */
  goto L_f88edd;
L_f88e50: /* f88e50: cmp al, 0x25 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x25u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f88e52: jne 0xf88e5d */
  if (!zf) goto L_f88e5d;
L_f88e54: /* f88e54: mov byte ptr [ebp], 0xd2 */
  W8((uint32_t)(ebp), 0xd2u);
/* f88e58: jmp 0xf88edd */
  goto L_f88edd;
L_f88e5d: /* f88e5d: cmp al, 0x27 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x27u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f88e5f: jne 0xf88e67 */
  if (!zf) goto L_f88e67;
L_f88e61: /* f88e61: mov byte ptr [ebp], 0xd3 */
  W8((uint32_t)(ebp), 0xd3u);
/* f88e65: jmp 0xf88edd */
  goto L_f88edd;
L_f88e67: /* f88e67: cmp al, 0x41 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f88e69: jne 0xf88e71 */
  if (!zf) goto L_f88e71;
L_f88e6b: /* f88e6b: mov byte ptr [ebp], 0xc8 */
  W8((uint32_t)(ebp), 0xc8u);
/* f88e6f: jmp 0xf88edd */
  goto L_f88edd;
L_f88e71: /* f88e71: cmp al, 0x42 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f88e73: jne 0xf88e7b */
  if (!zf) goto L_f88e7b;
L_f88e75: /* f88e75: mov byte ptr [ebp], 0xc9 */
  W8((uint32_t)(ebp), 0xc9u);
/* f88e79: jmp 0xf88edd */
  goto L_f88edd;
L_f88e7b: /* f88e7b: cmp al, 0x58 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x58u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f88e7d: jne 0xf88e85 */
  if (!zf) goto L_f88e85;
L_f88e7f: /* f88e7f: mov byte ptr [ebp], 0xca */
  W8((uint32_t)(ebp), 0xcau);
/* f88e83: jmp 0xf88edd */
  goto L_f88edd;
L_f88e85: /* f88e85: cmp al, 0x59 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x59u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f88e87: jne 0xf88e8f */
  if (!zf) goto L_f88e8f;
L_f88e89: /* f88e89: mov byte ptr [ebp], 0xcb */
  W8((uint32_t)(ebp), 0xcbu);
/* f88e8d: jmp 0xf88edd */
  goto L_f88edd;
L_f88e8f: /* f88e8f: cmp al, 0x4b */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4bu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f88e91: jne 0xf88e99 */
  if (!zf) goto L_f88e99;
L_f88e93: /* f88e93: mov byte ptr [ebp], 0xcc */
  W8((uint32_t)(ebp), 0xccu);
/* f88e97: jmp 0xf88edd */
  goto L_f88edd;
L_f88e99: /* f88e99: cmp al, 0x57 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x57u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f88e9b: jne 0xf88ea3 */
  if (!zf) goto L_f88ea3;
L_f88e9d: /* f88e9d: mov byte ptr [ebp], 0xcd */
  W8((uint32_t)(ebp), 0xcdu);
/* f88ea1: jmp 0xf88edd */
  goto L_f88edd;
L_f88ea3: /* f88ea3: cmp al, 0xdb */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xdbu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f88ea5: jne 0xf88ead */
  if (!zf) goto L_f88ead;
L_f88ea7: /* f88ea7: mov byte ptr [ebp], 0xce */
  W8((uint32_t)(ebp), 0xceu);
/* f88eab: jmp 0xf88edd */
  goto L_f88edd;
L_f88ead: /* f88ead: cmp al, 0xdd */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xddu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f88eaf: jne 0xf88eb7 */
  if (!zf) goto L_f88eb7;
L_f88eb1: /* f88eb1: mov byte ptr [ebp], 0xcf */
  W8((uint32_t)(ebp), 0xcfu);
/* f88eb5: jmp 0xf88edd */
  goto L_f88edd;
L_f88eb7: /* f88eb7: cmp al, 0xba */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xbau);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f88eb9: jne 0xf88ec1 */
  if (!zf) goto L_f88ec1;
L_f88ebb: /* f88ebb: mov byte ptr [ebp], 0xd6 */
  W8((uint32_t)(ebp), 0xd6u);
/* f88ebf: jmp 0xf88edd */
  goto L_f88edd;
L_f88ec1: /* f88ec1: cmp al, 0xde */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xdeu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f88ec3: jne 0xf88ecb */
  if (!zf) goto L_f88ecb;
L_f88ec5: /* f88ec5: mov byte ptr [ebp], 0xd7 */
  W8((uint32_t)(ebp), 0xd7u);
/* f88ec9: jmp 0xf88edd */
  goto L_f88edd;
L_f88ecb: /* f88ecb: cmp al, 0xd */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f88ecd: jne 0xf88ed5 */
  if (!zf) goto L_f88ed5;
L_f88ecf: /* f88ecf: mov byte ptr [ebp], 0xd4 */
  W8((uint32_t)(ebp), 0xd4u);
/* f88ed3: jmp 0xf88edd */
  goto L_f88edd;
L_f88ed5: /* f88ed5: cmp al, 0x1b */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1bu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f88ed7: jne 0xf88edd */
  if (!zf) goto L_f88edd;
L_f88ed9: /* f88ed9: mov byte ptr [ebp], 0xd5 */
  W8((uint32_t)(ebp), 0xd5u);
L_f88edd: /* f88edd: test byte ptr [esi + 0x150], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x150u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f88ee4: je 0xf88f60 */
  if (zf) goto L_f88f60;
L_f88ee6: /* f88ee6: cmp byte ptr [edi], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f88ee8: jne 0xf88f48 */
  if (!zf) goto L_f88f48;
L_f88eea: /* f88eea: fld dword ptr [esi + 0x154] */
  { double v = F32((uint32_t)(esi + 0x154u)); FPUSH(v); }
/* f88ef0: fmul dword ptr [0xfa413c] */
  ST0 = ST0 * (F32((uint32_t)(0xfa413cu)));
/* f88ef6: fcomp dword ptr [esp + 0x40] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x40u)));
  FPOP();
/* f88efa: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f88efc: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f88eff: je 0xf88f12 */
  if (zf) goto L_f88f12;
L_f88f01: /* f88f01: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* f88f05: fcomp dword ptr [esi + 0x154] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x154u)));
  FPOP();
/* f88f0b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f88f0d: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f88f10: jne 0xf88f48 */
  if (!zf) goto L_f88f48;
L_f88f12: /* f88f12: mov al, byte ptr [ebp] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp))) & 0xffu);
/* f88f15: cmp al, 0xe8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xe8u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f88f17: jne 0xf88f1f */
  if (!zf) goto L_f88f1f;
L_f88f19: /* f88f19: mov byte ptr [ebp], 0xe4 */
  W8((uint32_t)(ebp), 0xe4u);
/* f88f1d: jmp 0xf88f27 */
  goto L_f88f27;
L_f88f1f: /* f88f1f: cmp al, 0xe9 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xe9u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f88f21: jne 0xf88f48 */
  if (!zf) goto L_f88f48;
L_f88f23: /* f88f23: mov byte ptr [ebp], 0xe5 */
  W8((uint32_t)(ebp), 0xe5u);
L_f88f27: /* f88f27: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* f88f2b: mov dword ptr [esp + 0x40], 0xbfc00000 */
  W32((uint32_t)(esp + 0x40u), 0xbfc00000u);
/* f88f33: fcomp dword ptr [0xfa4138] */
  fpu_com(ST0, F32((uint32_t)(0xfa4138u)));
  FPOP();
/* f88f39: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f88f3b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f88f3e: jnp 0xf88f48 */
  if (!pf) goto L_f88f48;
L_f88f40: /* f88f40: mov dword ptr [esp + 0x40], 0x3fc00000 */
  W32((uint32_t)(esp + 0x40u), 0x3fc00000u);
L_f88f48: /* f88f48: test byte ptr [esi + 0x150], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x150u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f88f4f: je 0xf88f60 */
  if (zf) goto L_f88f60;
L_f88f51: /* f88f51: mov al, byte ptr [ebp] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp))) & 0xffu);
/* f88f54: cmp al, 0xd6 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xd6u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f88f56: je 0xf88f5c */
  if (zf) goto L_f88f5c;
L_f88f58: /* f88f58: cmp al, 0xd7 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xd7u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f88f5a: jne 0xf88f60 */
  if (!zf) goto L_f88f60;
L_f88f5c: /* f88f5c: mov byte ptr [ebp], 1 */
  W8((uint32_t)(ebp), 0x1u);
L_f88f60: /* f88f60: cmp byte ptr [edi], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f88f63: je 0xf8933e */
  if (zf) goto L_f8933e;
L_f88f69: /* f88f69: mov al, byte ptr [ebp] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp))) & 0xffu);
/* f88f6c: cmp al, 0xe4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xe4u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f88f6e: mov edi, 0xfffffffe */
  edi = 0xfffffffeu;
/* f88f73: je 0xf88f86 */
  if (zf) goto L_f88f86;
L_f88f75: /* f88f75: cmp al, 0xe5 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xe5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f88f77: je 0xf88f86 */
  if (zf) goto L_f88f86;
L_f88f79: /* f88f79: test byte ptr [esi + 0x140], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x140u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f88f80: je 0xf890ed */
  if (zf) goto L_f890ed;
L_f88f86: /* f88f86: and dword ptr [esi + 0x140], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x140u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x140u), r);
  }
/* f88f8c: mov al, byte ptr [ebp] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp))) & 0xffu);
/* f88f8f: cmp al, 0xe4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xe4u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f88f91: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* f88f99: mov dword ptr [esp + 0x38], 0 */
  W32((uint32_t)(esp + 0x38u), 0x0u);
/* f88fa1: jne 0xf89040 */
  if (!zf) goto L_f89040;
L_f88fa7: /* f88fa7: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* f88fab: mov al, byte ptr [esi + 0x114] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x114u))) & 0xffu);
/* f88fb1: test bl, al */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f88fb3: fmul dword ptr [esi + 0x124] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x124u)));
/* f88fb9: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* f88fbd: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* f88fc1: fadd dword ptr [esi + 0xa8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0xa8u)));
/* f88fc7: fstp dword ptr [esi + 0xa8] */
  WF32((uint32_t)(esi + 0xa8u), ST0); FPOP();
/* f88fcd: je 0xf890d9 */
  if (zf) goto L_f890d9;
L_f88fd3: /* f88fd3: mov ecx, dword ptr [esi + 0x110] */
  ecx = R32((uint32_t)(esi + 0x110u));
/* f88fd9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f88fdb: je 0xf890d9 */
  if (zf) goto L_f890d9;
L_f88fe1: /* f88fe1: mov eax, dword ptr [esi + 0xb8] */
  eax = R32((uint32_t)(esi + 0xb8u));
/* f88fe7: test bl, al */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f88fe9: je 0xf890d9 */
  if (zf) goto L_f890d9;
L_f88fef: /* f88fef: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f88ff1: je 0xf890d9 */
  if (zf) goto L_f890d9;
L_f88ff7: /* f88ff7: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* f88ffb: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* f88fff: fcomp dword ptr [0xfa4138] */
  fpu_com(ST0, F32((uint32_t)(0xfa4138u)));
  FPOP();
/* f89005: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f89006: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f89008: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8900b: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* f8900f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f89010: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f89012: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f89014: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f89016: jne 0xf8902c */
  if (!zf) goto L_f8902c;
L_f89018: /* f89018: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f8901a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8901b: mov ecx, esi */
  ecx = esi;
/* f8901d: call 0xf71a50 */
  esp -= 4; W32(esp, 0xf89022u); SPILL(); f_f71a50(); if (g_unwind) return; RELOAD();
/* f89022: mov eax, 1 */
  eax = 0x1u;
/* f89027: jmp 0xf8939a */
  goto L_f8939a;
L_f8902c: /* f8902c: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f8902e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8902f: mov ecx, esi */
  ecx = esi;
/* f89031: call 0xf71a50 */
  esp -= 4; W32(esp, 0xf89036u); SPILL(); f_f71a50(); if (g_unwind) return; RELOAD();
/* f89036: mov eax, 1 */
  eax = 0x1u;
/* f8903b: jmp 0xf8939a */
  goto L_f8939a;
L_f89040: /* f89040: cmp al, 0xe5 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xe5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f89042: jne 0xf890d9 */
  if (!zf) goto L_f890d9;
L_f89048: /* f89048: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* f8904c: mov al, byte ptr [esi + 0x114] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x114u))) & 0xffu);
/* f89052: test bl, al */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f89054: fmul dword ptr [esi + 0x124] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x124u)));
/* f8905a: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* f8905e: mov dword ptr [esp + 0x38], ecx */
  W32((uint32_t)(esp + 0x38u), ecx);
/* f89062: fsubr dword ptr [esi + 0xac] */
  ST0 = (F32((uint32_t)(esi + 0xacu))) - ST0;
/* f89068: fstp dword ptr [esi + 0xac] */
  WF32((uint32_t)(esi + 0xacu), ST0); FPOP();
/* f8906e: je 0xf890d9 */
  if (zf) goto L_f890d9;
L_f89070: /* f89070: mov ecx, dword ptr [esi + 0x110] */
  ecx = R32((uint32_t)(esi + 0x110u));
/* f89076: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f89078: je 0xf890d9 */
  if (zf) goto L_f890d9;
L_f8907a: /* f8907a: mov eax, dword ptr [esi + 0xb8] */
  eax = R32((uint32_t)(esi + 0xb8u));
/* f89080: test bl, al */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f89082: je 0xf890d9 */
  if (zf) goto L_f890d9;
L_f89084: /* f89084: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f89086: je 0xf890d9 */
  if (zf) goto L_f890d9;
L_f89088: /* f89088: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* f8908c: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* f89090: fmul dword ptr [0xfa413c] */
  ST0 = ST0 * (F32((uint32_t)(0xfa413cu)));
/* f89096: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f89097: fcomp dword ptr [0xfa4138] */
  fpu_com(ST0, F32((uint32_t)(0xfa4138u)));
  FPOP();
/* f8909d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f8909f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f890a2: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* f890a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f890a7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f890a9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f890ab: jne 0xf890c3 */
  if (!zf) goto L_f890c3;
L_f890ad: /* f890ad: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f890af: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f890b1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f890b2: mov ecx, esi */
  ecx = esi;
/* f890b4: call 0xf71a50 */
  esp -= 4; W32(esp, 0xf890b9u); SPILL(); f_f71a50(); if (g_unwind) return; RELOAD();
/* f890b9: mov eax, 1 */
  eax = 0x1u;
/* f890be: jmp 0xf8939a */
  goto L_f8939a;
L_f890c3: /* f890c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f890c5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f890c7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f890c8: mov ecx, esi */
  ecx = esi;
/* f890ca: call 0xf71a50 */
  esp -= 4; W32(esp, 0xf890cfu); SPILL(); f_f71a50(); if (g_unwind) return; RELOAD();
/* f890cf: mov eax, 1 */
  eax = 0x1u;
/* f890d4: jmp 0xf8939a */
  goto L_f8939a;
L_f890d9: /* f890d9: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* f890dd: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* f890e1: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f890e3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f890e4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f890e5: mov ecx, esi */
  ecx = esi;
/* f890e7: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0xf890edu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f890ed: /* f890ed: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* f890f1: cmp byte ptr [ecx], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f890f3: jne 0xf89173 */
  if (!zf) goto L_f89173;
L_f890f5: /* f890f5: fld dword ptr [esi + 0x154] */
  { double v = F32((uint32_t)(esi + 0x154u)); FPUSH(v); }
/* f890fb: fmul dword ptr [0xfa413c] */
  ST0 = ST0 * (F32((uint32_t)(0xfa413cu)));
/* f89101: fcomp dword ptr [esp + 0x40] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x40u)));
  FPOP();
/* f89105: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f89107: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f8910a: jp 0xf89139 */
  if (pf) goto L_f89139;
L_f8910c: /* f8910c: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* f89110: fcomp dword ptr [esi + 0x154] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x154u)));
  FPOP();
/* f89116: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f89118: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f8911b: jp 0xf89139 */
  if (pf) goto L_f89139;
L_f8911d: /* f8911d: movzx edx, byte ptr [esi + 0xa5] */
  edx = (uint32_t)(R8((uint32_t)(esi + 0xa5u)));
/* f89124: mov al, byte ptr [edx + esi + 0xd0] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + esi + 0xd0u))) & 0xffu);
/* f8912b: cmp al, byte ptr [ebp] */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ebp)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f8912e: jne 0xf8933e */
  if (!zf) goto L_f8933e;
L_f89134: /* f89134: mov byte ptr [ecx], 3 */
  W8((uint32_t)(ecx), 0x3u);
/* f89137: jmp 0xf89173 */
  goto L_f89173;
L_f89139: /* f89139: movzx edx, byte ptr [esi + 0xa5] */
  edx = (uint32_t)(R8((uint32_t)(esi + 0xa5u)));
/* f89140: mov al, byte ptr [edx + esi + 0xd0] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + esi + 0xd0u))) & 0xffu);
/* f89147: cmp al, byte ptr [ebp] */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ebp)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f8914a: je 0xf8933e */
  if (zf) goto L_f8933e;
L_f89150: /* f89150: cmp al, 0xf0 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xf0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f89152: je 0xf8933e */
  if (zf) goto L_f8933e;
L_f89158: /* f89158: cmp al, 0xf1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xf1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f8915a: je 0xf8933e */
  if (zf) goto L_f8933e;
L_f89160: /* f89160: cmp al, 0xe8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xe8u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f89162: je 0xf8933e */
  if (zf) goto L_f8933e;
L_f89168: /* f89168: cmp al, 0xe9 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xe9u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f8916a: je 0xf8933e */
  if (zf) goto L_f8933e;
L_f89170: /* f89170: mov byte ptr [ecx], 1 */
  W8((uint32_t)(ecx), 0x1u);
L_f89173: /* f89173: movzx eax, byte ptr [esi + 0xa5] */
  eax = (uint32_t)(R8((uint32_t)(esi + 0xa5u)));
/* f8917a: mov cl, byte ptr [ebp] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp))) & 0xffu);
/* f8917d: mov dl, byte ptr [eax + esi + 0xd0] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + esi + 0xd0u))) & 0xffu);
/* f89184: cmp cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f89186: mov ebx, dword ptr [esp + 0x3c] */
  ebx = R32((uint32_t)(esp + 0x3cu));
/* f8918a: lea eax, [eax + esi + 0xd0] */
  eax = (uint32_t)(eax + esi + 0xd0u);
/* f89191: jne 0xf891be */
  if (!zf) goto L_f891be;
L_f89193: /* f89193: cmp byte ptr [ebx], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f89196: jne 0xf891ba */
  if (!zf) goto L_f891ba;
L_f89198: /* f89198: xor ecx, ecx */
  ecx = 0;
/* f8919a: mov byte ptr [eax], cl */
  W8((uint32_t)(eax), (ecx & 0xffu));
/* f8919c: movzx edx, byte ptr [esi + 0xa5] */
  edx = (uint32_t)(R8((uint32_t)(esi + 0xa5u)));
/* f891a3: mov dword ptr [esi + edx*4 + 0xe4], ecx */
  W32((uint32_t)(esi + edx*4 + 0xe4u), ecx);
/* f891aa: movzx eax, byte ptr [esi + 0xa5] */
  eax = (uint32_t)(R8((uint32_t)(esi + 0xa5u)));
/* f891b1: mov dword ptr [esi + eax*4 + 0xd4], ecx */
  W32((uint32_t)(esi + eax*4 + 0xd4u), ecx);
/* f891b8: jmp 0xf891f5 */
  goto L_f891f5;
L_f891ba: /* f891ba: cmp cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f891bc: je 0xf891f5 */
  if (zf) goto L_f891f5;
L_f891be: /* f891be: cmp byte ptr [ebx], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f891c1: jne 0xf89269 */
  if (!zf) goto L_f89269;
L_f891c7: /* f891c7: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* f891cb: mov byte ptr [eax], cl */
  W8((uint32_t)(eax), (ecx & 0xffu));
/* f891cd: movzx ecx, byte ptr [esi + 0xa5] */
  ecx = (uint32_t)(R8((uint32_t)(esi + 0xa5u)));
/* f891d4: fstp dword ptr [esi + ecx*4 + 0xd4] */
  WF32((uint32_t)(esi + ecx*4 + 0xd4u), ST0); FPOP();
/* f891db: movzx edx, byte ptr [esi + 0xa5] */
  edx = (uint32_t)(R8((uint32_t)(esi + 0xa5u)));
/* f891e2: fld dword ptr [esi + 0xcc] */
  { double v = F32((uint32_t)(esi + 0xccu)); FPUSH(v); }
/* f891e8: fmul dword ptr [0xfa4134] */
  ST0 = ST0 * (F32((uint32_t)(0xfa4134u)));
/* f891ee: fstp dword ptr [esi + edx*4 + 0xe4] */
  WF32((uint32_t)(esi + edx*4 + 0xe4u), ST0); FPOP();
L_f891f5: /* f891f5: cmp byte ptr [ebx], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f891f8: jne 0xf89269 */
  if (!zf) goto L_f89269;
L_f891fa: /* f891fa: mov al, byte ptr [ebp] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp))) & 0xffu);
/* f891fd: cmp al, 0xf1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xf1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f891ff: je 0xf89205 */
  if (zf) goto L_f89205;
L_f89201: /* f89201: cmp al, 0xe9 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xe9u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f89203: jne 0xf8922f */
  if (!zf) goto L_f8922f;
L_f89205: /* f89205: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* f89209: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* f8920c: fcomp dword ptr [0xfa4138] */
  fpu_com(ST0, F32((uint32_t)(0xfa4138u)));
  FPOP();
/* f89212: movzx edx, byte ptr [esi + 0xa5] */
  edx = (uint32_t)(R8((uint32_t)(esi + 0xa5u)));
/* f89219: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f8921b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8921e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* f89220: jne 0xf89226 */
  if (!zf) goto L_f89226;
L_f89222: /* f89222: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* f89224: jmp 0xf89228 */
  goto L_f89228;
L_f89226: /* f89226: push 0xd */
  { uint32_t v = 0xdu; esp -= 4; W32(esp, v); }
L_f89228: /* f89228: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f89229: call dword ptr [eax + 0xbc] */
  { uint32_t t = R32((uint32_t)(eax + 0xbcu)); esp -= 4; W32(esp, 0xf8922fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f8922f: /* f8922f: cmp byte ptr [ebx], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f89232: jne 0xf89269 */
  if (!zf) goto L_f89269;
L_f89234: /* f89234: mov al, byte ptr [ebp] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp))) & 0xffu);
/* f89237: cmp al, 0xf0 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xf0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f89239: je 0xf8923f */
  if (zf) goto L_f8923f;
L_f8923b: /* f8923b: cmp al, 0xe8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xe8u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f8923d: jne 0xf89269 */
  if (!zf) goto L_f89269;
L_f8923f: /* f8923f: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* f89243: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* f89246: fcomp dword ptr [0xfa4138] */
  fpu_com(ST0, F32((uint32_t)(0xfa4138u)));
  FPOP();
/* f8924c: movzx edx, byte ptr [esi + 0xa5] */
  edx = (uint32_t)(R8((uint32_t)(esi + 0xa5u)));
/* f89253: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f89255: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f89258: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* f8925a: jp 0xf89260 */
  if (pf) goto L_f89260;
L_f8925c: /* f8925c: push 0xe */
  { uint32_t v = 0xeu; esp -= 4; W32(esp, v); }
/* f8925e: jmp 0xf89262 */
  goto L_f89262;
L_f89260: /* f89260: push 0xf */
  { uint32_t v = 0xfu; esp -= 4; W32(esp, v); }
L_f89262: /* f89262: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f89263: call dword ptr [eax + 0xbc] */
  { uint32_t t = R32((uint32_t)(eax + 0xbcu)); esp -= 4; W32(esp, 0xf89269u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f89269: /* f89269: mov al, byte ptr [ebp] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp))) & 0xffu);
/* f8926c: cmp al, 0xd0 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xd0u);
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* f8926e: jb 0xf8929d */
  if (cf) goto L_f8929d;
L_f89270: /* f89270: cmp al, 0xd3 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xd3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* f89272: ja 0xf8929d */
  if ((!cf && !zf)) goto L_f8929d;
L_f89274: /* f89274: cmp byte ptr [ebx], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f89277: je 0xf8929d */
  if (zf) goto L_f8929d;
L_f89279: /* f89279: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* f8927c: add eax, 0xffffff30 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffff30u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f89281: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* f89284: ja 0xf892fe */
  if ((!cf && !zf)) goto L_f892fe;
L_f89286: /* f89286: jmp dword ptr [eax*4 + 0xf893b0] */
  switch (R32((uint32_t)(eax*4 + 0xf893b0u))) {
    case 0xf8928du: goto L_f8928d;
    case 0xf89291u: goto L_f89291;
    case 0xf89295u: goto L_f89295;
    case 0xf89299u: goto L_f89299;
    case 0xf892c5u: goto L_f892c5;
    case 0xf892c9u: goto L_f892c9;
    case 0xf892cdu: goto L_f892cd;
    case 0xf892d1u: goto L_f892d1;
    case 0xf892d5u: goto L_f892d5;
    case 0xf892d9u: goto L_f892d9;
    case 0xf892ddu: goto L_f892dd;
    case 0xf892e1u: goto L_f892e1;
    case 0xf892e5u: goto L_f892e5;
    case 0xf892e9u: goto L_f892e9;
    case 0xf892feu: goto L_f892fe;
    default: guest_badjump(0xf89286, R32((uint32_t)(eax*4 + 0xf893b0u))); return;
  }
L_f8928d: /* f8928d: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* f8928f: jmp 0xf892eb */
  goto L_f892eb;
L_f89291: /* f89291: push 0xd */
  { uint32_t v = 0xdu; esp -= 4; W32(esp, v); }
/* f89293: jmp 0xf892eb */
  goto L_f892eb;
L_f89295: /* f89295: push 0xe */
  { uint32_t v = 0xeu; esp -= 4; W32(esp, v); }
/* f89297: jmp 0xf892eb */
  goto L_f892eb;
L_f89299: /* f89299: push 0xf */
  { uint32_t v = 0xfu; esp -= 4; W32(esp, v); }
/* f8929b: jmp 0xf892eb */
  goto L_f892eb;
L_f8929d: /* f8929d: cmp al, 0xc8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xc8u);
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* f8929f: jb 0xf892fe */
  if (cf) goto L_f892fe;
L_f892a1: /* f892a1: cmp al, 0xd7 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xd7u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* f892a3: ja 0xf892fe */
  if ((!cf && !zf)) goto L_f892fe;
L_f892a5: /* f892a5: mov cl, byte ptr [ebx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx))) & 0xffu);
/* f892a7: cmp cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f892aa: je 0xf892b1 */
  if (zf) goto L_f892b1;
L_f892ac: /* f892ac: cmp cl, 5 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f892af: jne 0xf892fe */
  if (!zf) goto L_f892fe;
L_f892b1: /* f892b1: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* f892b4: add eax, 0xffffff38 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffff38u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f892b9: cmp eax, 0xf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* f892bc: ja 0xf892fe */
  if ((!cf && !zf)) goto L_f892fe;
L_f892be: /* f892be: jmp dword ptr [eax*4 + 0xf893c0] */
  switch (R32((uint32_t)(eax*4 + 0xf893c0u))) {
    case 0xf892c5u: goto L_f892c5;
    case 0xf892c9u: goto L_f892c9;
    case 0xf892cdu: goto L_f892cd;
    case 0xf892d1u: goto L_f892d1;
    case 0xf892d5u: goto L_f892d5;
    case 0xf892d9u: goto L_f892d9;
    case 0xf892ddu: goto L_f892dd;
    case 0xf892e1u: goto L_f892e1;
    case 0xf892e5u: goto L_f892e5;
    case 0xf892e9u: goto L_f892e9;
    case 0xf892feu: goto L_f892fe;
    default: guest_badjump(0xf892be, R32((uint32_t)(eax*4 + 0xf893c0u))); return;
  }
L_f892c5: /* f892c5: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* f892c7: jmp 0xf892eb */
  goto L_f892eb;
L_f892c9: /* f892c9: push 0x11 */
  { uint32_t v = 0x11u; esp -= 4; W32(esp, v); }
/* f892cb: jmp 0xf892eb */
  goto L_f892eb;
L_f892cd: /* f892cd: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* f892cf: jmp 0xf892eb */
  goto L_f892eb;
L_f892d1: /* f892d1: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* f892d3: jmp 0xf892eb */
  goto L_f892eb;
L_f892d5: /* f892d5: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* f892d7: jmp 0xf892eb */
  goto L_f892eb;
L_f892d9: /* f892d9: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* f892db: jmp 0xf892eb */
  goto L_f892eb;
L_f892dd: /* f892dd: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* f892df: jmp 0xf892eb */
  goto L_f892eb;
L_f892e1: /* f892e1: push 0xb */
  { uint32_t v = 0xbu; esp -= 4; W32(esp, v); }
/* f892e3: jmp 0xf892eb */
  goto L_f892eb;
L_f892e5: /* f892e5: push 0x12 */
  { uint32_t v = 0x12u; esp -= 4; W32(esp, v); }
/* f892e7: jmp 0xf892eb */
  goto L_f892eb;
L_f892e9: /* f892e9: push 0x13 */
  { uint32_t v = 0x13u; esp -= 4; W32(esp, v); }
L_f892eb: /* f892eb: movzx edx, byte ptr [esi + 0xa5] */
  edx = (uint32_t)(R8((uint32_t)(esi + 0xa5u)));
/* f892f2: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* f892f5: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* f892f7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f892f8: call dword ptr [eax + 0xbc] */
  { uint32_t t = R32((uint32_t)(eax + 0xbcu)); esp -= 4; W32(esp, 0xf892feu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f892fe: /* f892fe: cmp byte ptr [ebp], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f89302: jne 0xf89345 */
  if (!zf) goto L_f89345;
L_f89304: /* f89304: mov al, byte ptr [ebx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx))) & 0xffu);
/* f89306: cmp al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f89308: je 0xf89332 */
  if (zf) goto L_f89332;
L_f8930a: /* f8930a: cmp al, 5 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f8930c: je 0xf89332 */
  if (zf) goto L_f89332;
L_f8930e: /* f8930e: cmp al, 3 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f89310: jne 0xf8933e */
  if (!zf) goto L_f8933e;
L_f89312: /* f89312: test byte ptr [esi + 0x114], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x114u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f89319: jne 0xf89325 */
  if (!zf) goto L_f89325;
L_f8931b: /* f8931b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8931d: mov ecx, esi */
  ecx = esi;
/* f8931f: call dword ptr [eax + 0x8c] */
  { uint32_t t = R32((uint32_t)(eax + 0x8cu)); esp -= 4; W32(esp, 0xf89325u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f89325: /* f89325: and dword ptr [esi + 0x114], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x114u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x114u), r);
  }
/* f8932b: mov eax, 1 */
  eax = 0x1u;
/* f89330: jmp 0xf8939a */
  goto L_f8939a;
L_f89332: /* f89332: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f89334: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f89336: mov ecx, esi */
  ecx = esi;
/* f89338: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0xf8933eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f8933e: /* f8933e: mov eax, 1 */
  eax = 0x1u;
/* f89343: jmp 0xf8939a */
  goto L_f8939a;
L_f89345: /* f89345: cmp byte ptr [ebx], 5 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx))); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f89348: jne 0xf8934d */
  if (!zf) goto L_f8934d;
L_f8934a: /* f8934a: mov byte ptr [ebx], 1 */
  W8((uint32_t)(ebx), 0x1u);
L_f8934d: /* f8934d: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* f89350: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f89352: je 0xf89367 */
  if (zf) goto L_f89367;
L_f89354: /* f89354: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* f89358: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* f8935a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8935b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8935c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f8935d: call dword ptr [eax + 0xa8] */
  { uint32_t t = R32((uint32_t)(eax + 0xa8u)); esp -= 4; W32(esp, 0xf89363u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f89363: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f89365: jne 0xf8933e */
  if (!zf) goto L_f8933e;
L_f89367: /* f89367: mov edi, dword ptr [esi + 0x50] */
  edi = R32((uint32_t)(esi + 0x50u));
/* f8936a: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  edi = r;
  }
/* f8936b: js 0xf8933e */
  if (sf) goto L_f8933e;
L_f8936d: /* f8936d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_f89370: /* f89370: mov eax, dword ptr [esi + 0x4c] */
  eax = R32((uint32_t)(esi + 0x4cu));
/* f89373: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* f89376: cmp ecx, dword ptr [esi + 0x58] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x58u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f89379: je 0xf8938e */
  if (zf) goto L_f8938e;
L_f8937b: /* f8937b: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* f8937f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f89381: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f89382: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f89383: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f89384: call dword ptr [edx + 0xa8] */
  { uint32_t t = R32((uint32_t)(edx + 0xa8u)); esp -= 4; W32(esp, 0xf8938au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8938a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8938c: jne 0xf8933e */
  if (!zf) goto L_f8933e;
L_f8938e: /* f8938e: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  edi = r;
  }
/* f8938f: jns 0xf89370 */
  if (!sf) goto L_f89370;
L_f89391: /* f89391: mov eax, 1 */
  eax = 0x1u;
/* f89396: jmp 0xf8939a */
  goto L_f8939a;
L_f89398: /* f89398: xor eax, eax */
  eax = 0;
L_f8939a: /* f8939a: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* f8939e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8939f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f893a0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f893a1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f893a2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f893a9: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f893ac: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_f896a0(void) {
  LOAD_REGS();
L_f896a0: /* f896a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f896a1: mov ebp, esp */
  ebp = esp;
/* f896a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f896a5: push 0xf9a210 */
  { uint32_t v = 0xf9a210u; esp -= 4; W32(esp, v); }
/* f896aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f896b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f896b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f896b8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f896bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f896bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f896bd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f896be: mov edi, ecx */
  edi = ecx;
/* f896c0: mov ecx, dword ptr [edi + 0x58] */
  ecx = R32((uint32_t)(edi + 0x58u));
/* f896c3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f896c5: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f896c8: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f896cf: jne 0xf896e9 */
  if (!zf) goto L_f896e9;
L_f896d1: /* f896d1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f896d4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f896d5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f896d6: mov eax, 1 */
  eax = 0x1u;
/* f896db: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f896e2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f896e3: mov esp, ebp */
  esp = ebp;
/* f896e5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f896e6: ret 8 */
  esp += 12; SPILL(); return;
L_f896e9: /* f896e9: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* f896ec: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* f896ef: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* f896f1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f896f2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f896f3: call dword ptr [eax + 0xa4] */
  { uint32_t t = R32((uint32_t)(eax + 0xa4u)); esp -= 4; W32(esp, 0xf896f9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f896f9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f896fb: jne 0xf896d1 */
  if (!zf) goto L_f896d1;
L_f896fd: /* f896fd: mov eax, dword ptr [edi + 0x50] */
  eax = R32((uint32_t)(edi + 0x50u));
/* f89700: lea esi, [eax - 1] */
  esi = (uint32_t)(eax + 0xffffffffu);
L_f89703: /* f89703: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f89705: jl 0xf896d1 */
  if ((sf != of)) goto L_f896d1;
L_f89707: /* f89707: mov eax, dword ptr [edi + 0x4c] */
  eax = R32((uint32_t)(edi + 0x4cu));
/* f8970a: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* f8970d: cmp ecx, dword ptr [edi + 0x58] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x58u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f89710: je 0xf89723 */
  if (zf) goto L_f89723;
L_f89712: /* f89712: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f89715: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f89717: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f89718: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f89719: call dword ptr [edx + 0xa4] */
  { uint32_t t = R32((uint32_t)(edx + 0xa4u)); esp -= 4; W32(esp, 0xf8971fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8971f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f89721: jne 0xf896d1 */
  if (!zf) goto L_f896d1;
L_f89723: /* f89723: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* f89724: jmp 0xf89703 */
  goto L_f89703;
}

void f_f89726(void) {
  LOAD_REGS();
L_f89726: /* f89726: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f89729: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f8972e: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* f89731: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f89732: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* f89735: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8973au); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f8973a(); return;
}

void f_f8973a(void) {
  LOAD_REGS();
L_f8973a: /* f8973a: push 0xfa4140 */
  { uint32_t v = 0xfa4140u; esp -= 4; W32(esp, v); }
/* f8973f: push 0xfb98f8 */
  { uint32_t v = 0xfb98f8u; esp -= 4; W32(esp, v); }
/* f89744: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf8974au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f8974a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8974d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8974f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f89751: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf89756u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f89756: guest_badaddr(0xf89756); return;
}

void f_f89790(void) {
  LOAD_REGS();
L_f89790: /* f89790: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f89791: mov ebp, esp */
  ebp = esp;
/* f89793: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f89795: push 0xf9a220 */
  { uint32_t v = 0xf9a220u; esp -= 4; W32(esp, v); }
/* f8979a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f897a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f897a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f897a8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f897ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f897ac: mov eax, ecx */
  eax = ecx;
/* f897ae: mov ecx, dword ptr [eax + 0x108] */
  ecx = R32((uint32_t)(eax + 0x108u));
/* f897b4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f897b5: mov esi, dword ptr [eax + 0x140] */
  esi = R32((uint32_t)(eax + 0x140u));
/* f897bb: and esi, 0xfffffffd */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* f897be: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f897c0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f897c1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f897c4: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f897cb: mov dword ptr [eax + 0x140], esi */
  W32((uint32_t)(eax + 0x140u), esi);
/* f897d1: je 0xf897fd */
  if (zf) goto L_f897fd;
L_f897d3: /* f897d3: test byte ptr [ecx + 0x58], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x58u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f897d7: je 0xf897fd */
  if (zf) goto L_f897fd;
L_f897d9: /* f897d9: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* f897dc: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* f897de: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f897df: call dword ptr [eax + 0x98] */
  { uint32_t t = R32((uint32_t)(eax + 0x98u)); esp -= 4; W32(esp, 0xf897e5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f897e5: mov eax, 1 */
  eax = 0x1u;
/* f897ea: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f897ed: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f897f4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f897f5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f897f6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f897f7: mov esp, ebp */
  esp = ebp;
/* f897f9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f897fa: ret 4 */
  esp += 8; SPILL(); return;
L_f897fd: /* f897fd: mov ecx, dword ptr [eax + 0x50] */
  ecx = R32((uint32_t)(eax + 0x50u));
/* f89800: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f89802: jle 0xf89867 */
  if ((zf || sf != of)) goto L_f89867;
L_f89804: /* f89804: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* f89805: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f89807: jl 0xf89867 */
  if ((sf != of)) goto L_f89867;
L_f89809: /* f89809: mov eax, dword ptr [eax + 0x4c] */
  eax = R32((uint32_t)(eax + 0x4cu));
/* f8980c: mov ecx, dword ptr [eax + ecx*4] */
  ecx = R32((uint32_t)(eax + ecx*4));
/* f8980f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f89812: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f89814: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f89815: call dword ptr [edx + 0x98] */
  { uint32_t t = R32((uint32_t)(edx + 0x98u)); esp -= 4; W32(esp, 0xf8981bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8981b: xor ecx, ecx */
  ecx = 0;
/* f8981d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8981f: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* f89822: mov eax, ecx */
  eax = ecx;
/* f89824: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f89827: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8982e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8982f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f89830: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f89831: mov esp, ebp */
  esp = ebp;
/* f89833: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f89834: ret 4 */
  esp += 8; SPILL(); return;
L_f89867: /* f89867: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8986a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8986b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8986c: xor eax, eax */
  eax = 0;
/* f8986e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f89875: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f89876: mov esp, ebp */
  esp = ebp;
/* f89878: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f89879: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f89837(void) {
  LOAD_REGS();
L_f89837: /* f89837: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8983a: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f8983f: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* f89842: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f89843: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* f89846: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8984bu); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f8984b(); return;
}

void f_f8984b(void) {
  LOAD_REGS();
L_f8984b: /* f8984b: push 0xfa4188 */
  { uint32_t v = 0xfa4188u; esp -= 4; W32(esp, v); }
/* f89850: push 0xfb9900 */
  { uint32_t v = 0xfb9900u; esp -= 4; W32(esp, v); }
/* f89855: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf8985bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f8985b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8985e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f89860: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f89862: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf89867u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
/* f89867: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8986a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8986b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8986c: xor eax, eax */
  eax = 0;
/* f8986e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f89875: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f89876: mov esp, ebp */
  esp = ebp;
/* f89878: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f89879: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f898c0(void) {
  LOAD_REGS();
L_f898c0: /* f898c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f898c1: mov ebp, esp */
  ebp = esp;
/* f898c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f898c5: push 0xf9a230 */
  { uint32_t v = 0xf9a230u; esp -= 4; W32(esp, v); }
/* f898ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f898d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f898d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f898d8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f898db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f898dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f898dd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f898de: mov edi, ecx */
  edi = ecx;
/* f898e0: test byte ptr [edi + 0x140], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x140u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f898e7: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f898ea: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f898f1: jne 0xf8997e */
  if (!zf) goto L_f8997e;
L_f898f7: /* f898f7: mov ecx, dword ptr [edi + 0x108] */
  ecx = R32((uint32_t)(edi + 0x108u));
/* f898fd: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f898ff: je 0xf8992b */
  if (zf) goto L_f8992b;
L_f89901: /* f89901: cmp byte ptr [ecx + 0x30], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x30u))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f89905: jne 0xf8992b */
  if (!zf) goto L_f8992b;
L_f89907: /* f89907: test byte ptr [ecx + 0x58], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x58u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8990b: je 0xf8992b */
  if (zf) goto L_f8992b;
L_f8990d: /* f8990d: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* f8990f: call dword ptr [eax + 0x9c] */
  { uint32_t t = R32((uint32_t)(eax + 0x9cu)); esp -= 4; W32(esp, 0xf89915u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f89915: /* f89915: mov eax, 1 */
  eax = 0x1u;
/* f8991a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8991d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f89924: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f89925: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f89926: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f89927: mov esp, ebp */
  esp = ebp;
/* f89929: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8992a: ret  */
  esp += 4; SPILL(); return;
L_f8992b: /* f8992b: mov eax, dword ptr [edi + 0x50] */
  eax = R32((uint32_t)(edi + 0x50u));
/* f8992e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f89930: jle 0xf8997e */
  if ((zf || sf != of)) goto L_f8997e;
L_f89932: /* f89932: lea esi, [eax - 1] */
  esi = (uint32_t)(eax + 0xffffffffu);
L_f89935: /* f89935: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f89937: jl 0xf8997e */
  if ((sf != of)) goto L_f8997e;
L_f89939: /* f89939: mov ecx, dword ptr [edi + 0x4c] */
  ecx = R32((uint32_t)(edi + 0x4cu));
/* f8993c: mov ecx, dword ptr [ecx + esi*4] */
  ecx = R32((uint32_t)(ecx + esi*4));
/* f8993f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f89941: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0xf89947u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f89947: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f89949: jne 0xf89915 */
  if (!zf) goto L_f89915;
L_f8994b: /* f8994b: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* f8994c: jmp 0xf89935 */
  goto L_f89935;
L_f8997e: /* f8997e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f89981: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f89982: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f89983: xor eax, eax */
  eax = 0;
/* f89985: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8998c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8998d: mov esp, ebp */
  esp = ebp;
/* f8998f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f89990: ret  */
  esp += 4; SPILL(); return;
}

void f_f8994e(void) {
  LOAD_REGS();
L_f8994e: /* f8994e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* f89951: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f89956: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* f89959: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8995a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* f8995d: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf89962u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f89962(); return;
}

void f_f89962(void) {
  LOAD_REGS();
L_f89962: /* f89962: push 0xfa41d0 */
  { uint32_t v = 0xfa41d0u; esp -= 4; W32(esp, v); }
/* f89967: push 0xfb9908 */
  { uint32_t v = 0xfb9908u; esp -= 4; W32(esp, v); }
/* f8996c: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf89972u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f89972: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f89975: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f89977: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f89979: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8997eu); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
/* f8997e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f89981: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f89982: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f89983: xor eax, eax */
  eax = 0;
/* f89985: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8998c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8998d: mov esp, ebp */
  esp = ebp;
/* f8998f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f89990: ret  */
  esp += 4; SPILL(); return;
}

void f_f899e0(void) {
  LOAD_REGS();
L_f899e0: /* f899e0: movzx eax, byte ptr [esp + 4] */
  eax = (uint32_t)(R8((uint32_t)(esp + 0x4u)));
/* f899e5: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* f899e6: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* f899e9: ja 0xf89a1d */
  if ((!cf && !zf)) goto L_f89a1d;
L_f899eb: /* f899eb: jmp dword ptr [eax*4 + 0xf89a20] */
  switch (R32((uint32_t)(eax*4 + 0xf89a20u))) {
    case 0xf899f2u: goto L_f899f2;
    case 0xf899fau: goto L_f899fa;
    case 0xf89a02u: goto L_f89a02;
    case 0xf89a0au: goto L_f89a0a;
    default: guest_badjump(0xf899eb, R32((uint32_t)(eax*4 + 0xf89a20u))); return;
  }
L_f899f2: /* f899f2: mov eax, dword ptr [ecx + 0x130] */
  eax = R32((uint32_t)(ecx + 0x130u));
/* f899f8: jmp 0xf89a10 */
  goto L_f89a10;
L_f899fa: /* f899fa: mov eax, dword ptr [ecx + 0x134] */
  eax = R32((uint32_t)(ecx + 0x134u));
/* f89a00: jmp 0xf89a10 */
  goto L_f89a10;
L_f89a02: /* f89a02: mov eax, dword ptr [ecx + 0x138] */
  eax = R32((uint32_t)(ecx + 0x138u));
/* f89a08: jmp 0xf89a10 */
  goto L_f89a10;
L_f89a0a: /* f89a0a: mov eax, dword ptr [ecx + 0x13c] */
  eax = R32((uint32_t)(ecx + 0x13cu));
L_f89a10: /* f89a10: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f89a12: je 0xf89a1d */
  if (zf) goto L_f89a1d;
L_f89a14: /* f89a14: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* f89a18: jmp 0xf715f0 */
  SPILL(); f_f715f0(); return;
L_f89a1d: /* f89a1d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f89a50(void) {
  LOAD_REGS();
L_f89a50: /* f89a50: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f89a51: mov ebp, esp */
  ebp = esp;
/* f89a53: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f89a55: push 0xf9a240 */
  { uint32_t v = 0xf9a240u; esp -= 4; W32(esp, v); }
/* f89a5a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f89a60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f89a61: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f89a68: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f89a6b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f89a6c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f89a6d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* f89a70: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* f89a73: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f89a74: xor edi, edi */
  edi = 0;
/* f89a76: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* f89a79: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* f89a7c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f89a7d: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* f89a80: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f89a83: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* f89a86: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f89a87: mov eax, dword ptr [0xfce3e4] */
  eax = R32((uint32_t)(0xfce3e4u));
/* f89a8c: mov ebx, ecx */
  ebx = ecx;
/* f89a8e: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* f89a91: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f89a92: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* f89a95: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0xf89a98u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f89a98: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* f89a9b: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* f89a9c: mov eax, edx */
  eax = edx;
/* f89a9e: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* f89aa1: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f89aa4: jne 0xf89abb */
  if (!zf) goto L_f89abb;
L_f89aa6: /* f89aa6: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* f89aa9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f89aaa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f89aab: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* f89aae: mov edx, dword ptr [0xfce3e4] */
  edx = R32((uint32_t)(0xfce3e4u));
/* f89ab4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f89ab5: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0xf89abbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f89abb: /* f89abb: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f89abe: cmp eax, 0x320 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x320u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f89ac3: jl 0xf89af8 */
  if ((sf != of)) goto L_f89af8;
L_f89ac5: /* f89ac5: test byte ptr [ebx + 0x38], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x38u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f89ac9: jne 0xf89af8 */
  if (!zf) goto L_f89af8;
L_f89acb: /* f89acb: cmp eax, 0x400 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f89ad0: jge 0xf89ad9 */
  if ((sf == of)) goto L_f89ad9;
L_f89ad2: /* f89ad2: mov esi, 1 */
  esi = 0x1u;
/* f89ad7: jmp 0xf89afa */
  goto L_f89afa;
L_f89ad9: /* f89ad9: cmp eax, 0x500 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x500u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f89ade: jge 0xf89ae7 */
  if ((sf == of)) goto L_f89ae7;
L_f89ae0: /* f89ae0: mov esi, 2 */
  esi = 0x2u;
/* f89ae5: jmp 0xf89afa */
  goto L_f89afa;
L_f89ae7: /* f89ae7: xor ecx, ecx */
  ecx = 0;
/* f89ae9: cmp eax, 0x640 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x640u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f89aee: setge cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((sf == of)) ? 1 : 0) & 0xffu);
/* f89af1: add ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f89af4: mov esi, ecx */
  esi = ecx;
/* f89af6: jmp 0xf89afa */
  goto L_f89afa;
L_f89af8: /* f89af8: xor esi, esi */
  esi = 0;
L_f89afa: /* f89afa: mov eax, dword ptr [ebx + 0x40] */
  eax = R32((uint32_t)(ebx + 0x40u));
/* f89afd: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* f89afe: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f89b00: jle 0xf89b04 */
  if ((zf || sf != of)) goto L_f89b04;
L_f89b02: /* f89b02: mov esi, eax */
  esi = eax;
L_f89b04: /* f89b04: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f89b06: jge 0xf89b0d */
  if ((sf == of)) goto L_f89b0d;
L_f89b08: /* f89b08: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* f89b0b: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
L_f89b0d: /* f89b0d: mov eax, dword ptr [ebx + 0x4c] */
  eax = R32((uint32_t)(ebx + 0x4cu));
/* f89b10: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f89b12: jl 0xf89b25 */
  if ((sf != of)) goto L_f89b25;
L_f89b14: /* f89b14: mov ecx, esi */
  ecx = esi;
/* f89b16: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* f89b18: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* f89b19: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f89b1a: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f89b1c: lea ecx, [ebx + 0x48] */
  ecx = (uint32_t)(ebx + 0x48u);
/* f89b1f: call dword ptr [0xfce3f0] */
  esp -= 4; W32(esp, 0xf89b25u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
L_f89b25: /* f89b25: mov edx, dword ptr [ebx + 0x48] */
  edx = R32((uint32_t)(ebx + 0x48u));
/* f89b28: lea edi, [esi*4] */
  edi = (uint32_t)(esi*4);
/* f89b2f: cmp dword ptr [edi + edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f89b33: jne 0xf89bd1 */
  if (!zf) goto L_f89bd1;
L_f89b39: /* f89b39: mov ecx, dword ptr [ebx + 0x3c] */
  ecx = R32((uint32_t)(ebx + 0x3cu));
/* f89b3c: mov edi, dword ptr [0xfce524] */
  edi = R32((uint32_t)(0xfce524u));
/* f89b42: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* f89b45: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* f89b48: call dword ptr [0xfce3ec] */
  esp -= 4; W32(esp, 0xf89b4eu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* f89b4e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f89b50: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* f89b52: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f89b54: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f89b55: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f89b57: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f89b58: call dword ptr [0xfce420] */
  esp -= 4; W32(esp, 0xf89b5eu); SPILL(); f_4e302b(); if (g_unwind) return; /* Core!?StaticLoadObject@UObject@@SAPAV1@PAVUClass@@PAV1@PBG2KPAVUPackageMap@@@Z */ RELOAD();
/* f89b5e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f89b61: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f89b63: je 0xf89b88 */
  if (zf) goto L_f89b88;
L_f89b65: /* f89b65: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* f89b68: mov edi, dword ptr [0xfce524] */
  edi = R32((uint32_t)(0xfce524u));
/* f89b6e: mov edi, edi */
  edi = edi;
L_f89b70: /* f89b70: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f89b72: je 0xf89b7d */
  if (zf) goto L_f89b7d;
L_f89b74: /* f89b74: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f89b76: je 0xf89b8a */
  if (zf) goto L_f89b8a;
L_f89b78: /* f89b78: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* f89b7b: jmp 0xf89b70 */
  goto L_f89b70;
L_f89b7d: /* f89b7d: xor ecx, ecx */
  ecx = 0;
/* f89b7f: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f89b81: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* f89b84: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f89b86: jne 0xf89b8a */
  if (!zf) goto L_f89b8a;
L_f89b88: /* f89b88: xor eax, eax */
  eax = 0;
L_f89b8a: /* f89b8a: mov edx, dword ptr [ebx + 0x48] */
  edx = R32((uint32_t)(ebx + 0x48u));
/* f89b8d: lea edi, [esi*4] */
  edi = (uint32_t)(esi*4);
/* f89b94: mov dword ptr [edi + edx], eax */
  W32((uint32_t)(edi + edx), eax);
/* f89b97: mov eax, dword ptr [ebx + 0x48] */
  eax = R32((uint32_t)(ebx + 0x48u));
/* f89b9a: cmp dword ptr [edi + eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f89b9e: jne 0xf89bd1 */
  if (!zf) goto L_f89bd1;
L_f89ba0: /* f89ba0: mov edx, dword ptr [ebx + 0x3c] */
  edx = R32((uint32_t)(ebx + 0x3cu));
/* f89ba3: lea ecx, [esi + esi*2] */
  ecx = (uint32_t)(esi + esi*2);
/* f89ba6: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* f89ba9: call dword ptr [0xfce3ec] */
  esp -= 4; W32(esp, 0xf89bafu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* f89baf: mov ecx, ebx */
  ecx = ebx;
/* f89bb1: mov esi, eax */
  esi = eax;
/* f89bb3: call dword ptr [0xfce41c] */
  esp -= 4; W32(esp, 0xf89bb9u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* f89bb9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f89bba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f89bbb: mov eax, dword ptr [0xfce418] */
  eax = R32((uint32_t)(0xfce418u));
/* f89bc0: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* f89bc2: push 0xfb9918 */
  { uint32_t v = 0xfb9918u; esp -= 4; W32(esp, v); }
/* f89bc7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f89bc8: call dword ptr [0xfce414] */
  esp -= 4; W32(esp, 0xf89bceu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* f89bce: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f89bd1: /* f89bd1: mov edx, dword ptr [ebx + 0x48] */
  edx = R32((uint32_t)(ebx + 0x48u));
/* f89bd4: mov eax, dword ptr [edi + edx] */
  eax = R32((uint32_t)(edi + edx));
/* f89bd7: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* f89bda: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f89bdb: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* f89bdd: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f89be0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f89be1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f89be8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f89be9: mov esp, ebp */
  esp = ebp;
/* f89beb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f89bec: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f89bef(void) {
  LOAD_REGS();
L_f89bef: /* f89bef: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* f89bf2: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f89bf7: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* f89bfa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f89bfb: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* f89bfe: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf89c03u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f89c03(); return;
}

void f_f89c03(void) {
  LOAD_REGS();
L_f89c03: /* f89c03: push 0xfa4218 */
  { uint32_t v = 0xfa4218u; esp -= 4; W32(esp, v); }
/* f89c08: push 0xfb9960 */
  { uint32_t v = 0xfb9960u; esp -= 4; W32(esp, v); }
/* f89c0d: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf89c13u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f89c13: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f89c16: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f89c18: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f89c1a: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf89c1fu); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f89c1f: guest_badaddr(0xf89c1f); return;
}

void f_f89ca0(void) {
  LOAD_REGS();
L_f89ca0: /* f89ca0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f89ca1: mov ebp, esp */
  ebp = esp;
/* f89ca3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f89ca5: push 0xf9a250 */
  { uint32_t v = 0xf9a250u; esp -= 4; W32(esp, v); }
/* f89caa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f89cb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f89cb1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f89cb8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f89cbb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f89cbc: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* f89cbf: cmp bl, 5 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* f89cc2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f89cc3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f89cc4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f89cc7: mov edi, ecx */
  edi = ecx;
/* f89cc9: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f89cd0: ja 0xf89d9f */
  if ((!cf && !zf)) goto L_f89d9f;
L_f89cd6: /* f89cd6: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* f89cd9: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* f89cdc: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* f89cdf: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* f89ce2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f89ce3: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* f89ce6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f89ce7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f89ce8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f89ce9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f89cea: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f89ceb: mov ecx, edi */
  ecx = edi;
/* f89ced: call 0xf715e6 */
  esp -= 4; W32(esp, 0xf89cf2u); SPILL(); f_f715e6(); if (g_unwind) return; RELOAD();
/* f89cf2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f89cf4: jne 0xf89d9f */
  if (!zf) goto L_f89d9f;
L_f89cfa: /* f89cfa: movzx eax, bl */
  eax = (uint32_t)((ebx & 0xffu));
/* f89cfd: mov ecx, dword ptr [edi + eax*4 + 0x40] */
  ecx = R32((uint32_t)(edi + eax*4 + 0x40u));
/* f89d01: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f89d03: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* f89d06: je 0xf89d9f */
  if (zf) goto L_f89d9f;
L_f89d0c: /* f89d0c: cmp bl, 4 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f89d0f: mov byte ptr [ebp + 0xf], 0xff */
  W8((uint32_t)(ebp + 0xfu), 0xffu);
/* f89d13: jne 0xf89d28 */
  if (!zf) goto L_f89d28;
L_f89d15: /* f89d15: mov cl, 0x80 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x80u) & 0xffu);
/* f89d17: mov byte ptr [ebp + 0xc], cl */
  W8((uint32_t)(ebp + 0xcu), (ecx & 0xffu));
/* f89d1a: mov byte ptr [ebp + 0xd], cl */
  W8((uint32_t)(ebp + 0xdu), (ecx & 0xffu));
/* f89d1d: mov byte ptr [ebp + 0xe], cl */
  W8((uint32_t)(ebp + 0xeu), (ecx & 0xffu));
/* f89d20: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* f89d23: mov dword ptr [esi + 0x58], ecx */
  W32((uint32_t)(esi + 0x58u), ecx);
/* f89d26: jmp 0xf89d3a */
  goto L_f89d3a;
L_f89d28: /* f89d28: mov byte ptr [ebp + 0xc], 0xff */
  W8((uint32_t)(ebp + 0xcu), 0xffu);
/* f89d2c: mov byte ptr [ebp + 0xd], 0xff */
  W8((uint32_t)(ebp + 0xdu), 0xffu);
/* f89d30: mov byte ptr [ebp + 0xe], 0xff */
  W8((uint32_t)(ebp + 0xeu), 0xffu);
/* f89d34: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* f89d37: mov dword ptr [esi + 0x58], edx */
  W32((uint32_t)(esi + 0x58u), edx);
L_f89d3a: /* f89d3a: mov ebx, dword ptr [edi + eax*4 + 0x40] */
  ebx = R32((uint32_t)(edi + eax*4 + 0x40u));
/* f89d3e: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f89d40: je 0xf89d9f */
  if (zf) goto L_f89d9f;
L_f89d42: /* f89d42: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* f89d44: mov ecx, ebx */
  ecx = ebx;
/* f89d46: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0xf89d49u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f89d49: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* f89d4b: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* f89d4e: fild dword ptr [ebp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* f89d51: mov ecx, ebx */
  ecx = ebx;
/* f89d53: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* f89d56: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0xf89d59u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f89d59: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* f89d5c: fild dword ptr [ebp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* f89d5f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f89d62: mov cl, byte ptr [eax + edi + 0x38] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + edi + 0x38u))) & 0xffu);
/* f89d66: mov byte ptr [esi + 0x50], cl */
  W8((uint32_t)(esi + 0x50u), (ecx & 0xffu));
/* f89d69: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* f89d6c: mov edx, dword ptr [edi + eax*4 + 0x70] */
  edx = R32((uint32_t)(edi + eax*4 + 0x70u));
/* f89d70: mov dword ptr [esi + 0x58], edx */
  W32((uint32_t)(esi + 0x58u), edx);
/* f89d73: movzx eax, byte ptr [eax + edi + 0x54] */
  eax = (uint32_t)(R8((uint32_t)(eax + edi + 0x54u)));
/* f89d78: xor edi, edi */
  edi = 0;
/* f89d7a: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* f89d7c: je 0xf89de0 */
  if (zf) goto L_f89de0;
L_f89d7e: /* f89d7e: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* f89d7f: je 0xf89db2 */
  if (zf) goto L_f89db2;
L_f89d81: /* f89d81: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* f89d82: jne 0xf89d9f */
  if (!zf) goto L_f89d9f;
L_f89d84: /* f89d84: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* f89d87: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* f89d8a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f89d8c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f89d8d: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* f89d90: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f89d91: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* f89d94: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f89d95: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f89d96: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f89d97: mov ecx, esi */
  ecx = esi;
/* f89d99: call dword ptr [eax + 0xa8] */
  { uint32_t t = R32((uint32_t)(eax + 0xa8u)); esp -= 4; W32(esp, 0xf89d9fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f89d9f: /* f89d9f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f89da2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f89da9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f89daa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f89dab: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f89dac: mov esp, ebp */
  esp = ebp;
/* f89dae: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f89daf: ret 0x18 */
  esp += 28; SPILL(); return;
L_f89db2: /* f89db2: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* f89db5: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* f89db8: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f89dba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f89dbb: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* f89dbe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f89dbf: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* f89dc2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f89dc3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f89dc4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f89dc5: mov ecx, esi */
  ecx = esi;
/* f89dc7: call dword ptr [eax + 0x98] */
  { uint32_t t = R32((uint32_t)(eax + 0x98u)); esp -= 4; W32(esp, 0xf89dcdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f89dcd: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f89dd0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f89dd7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f89dd8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f89dd9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f89dda: mov esp, ebp */
  esp = ebp;
/* f89ddc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f89ddd: ret 0x18 */
  esp += 28; SPILL(); return;
L_f89de0: /* f89de0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f89de3: mov dword ptr [ebp + 0x1c], esp */
  W32((uint32_t)(ebp + 0x1cu), esp);
/* f89de6: mov eax, esp */
  eax = esp;
/* f89de8: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* f89dea: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* f89ded: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* f89df0: mov dword ptr [eax + 0xc], edi */
  W32((uint32_t)(eax + 0xcu), edi);
/* f89df3: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f89df6: mov eax, esp */
  eax = esp;
/* f89df8: mov dword ptr [ebp + 0x18], esp */
  W32((uint32_t)(ebp + 0x18u), esp);
/* f89dfb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f89dfc: lea ecx, [ebp + 0x1c] */
  ecx = (uint32_t)(ebp + 0x1cu);
/* f89dff: mov byte ptr [ebp + 0x1c], 0xff */
  W8((uint32_t)(ebp + 0x1cu), 0xffu);
/* f89e03: mov byte ptr [ebp + 0x1d], 0xff */
  W8((uint32_t)(ebp + 0x1du), 0xffu);
/* f89e07: mov byte ptr [ebp + 0x1e], 0xff */
  W8((uint32_t)(ebp + 0x1eu), 0xffu);
/* f89e0b: mov byte ptr [ebp + 0x1f], 0xff */
  W8((uint32_t)(ebp + 0x1fu), 0xffu);
/* f89e0f: call dword ptr [0xfce528] */
  esp -= 4; W32(esp, 0xf89e15u); SPILL(); f_6c3044(); if (g_unwind) return; /* Engine!??BFColor@@QBE?AVFPlane@@XZ */ RELOAD();
/* f89e15: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* f89e18: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f89e1b: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f89e1d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f89e1e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f89e1f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f89e20: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f89e21: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f89e22: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f89e23: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* f89e26: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f89e27: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* f89e2a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f89e2b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f89e2c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f89e2d: mov ecx, esi */
  ecx = esi;
/* f89e2f: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0xf89e32u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f89e32: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f89e35: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f89e36: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f89e37: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f89e3e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f89e3f: mov esp, ebp */
  esp = ebp;
/* f89e41: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f89e42: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_f89e45(void) {
  LOAD_REGS();
L_f89e45: /* f89e45: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* f89e48: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f89e4d: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* f89e50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f89e51: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* f89e54: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf89e59u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f89e59(); return;
}

void f_f89e59(void) {
  LOAD_REGS();
L_f89e59: /* f89e59: push 0xfa424c */
  { uint32_t v = 0xfa424cu; esp -= 4; W32(esp, v); }
/* f89e5e: push 0xfb9978 */
  { uint32_t v = 0xfb9978u; esp -= 4; W32(esp, v); }
/* f89e63: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf89e69u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f89e69: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f89e6c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f89e6e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f89e70: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf89e75u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f89e75: guest_badaddr(0xf89e75); return;
}

void f_f89f00(void) {
  LOAD_REGS();
L_f89f00: /* f89f00: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f89f01: mov ebp, esp */
  ebp = esp;
/* f89f03: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f89f05: push 0xf9a260 */
  { uint32_t v = 0xf9a260u; esp -= 4; W32(esp, v); }
/* f89f0a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f89f10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f89f11: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f89f18: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f89f1b: movzx edx, byte ptr [ebp + 0xc] */
  edx = (uint32_t)(R8((uint32_t)(ebp + 0xcu)));
/* f89f1f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f89f20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f89f21: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* f89f24: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
/* f89f27: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f89f28: mov edi, dword ptr [ecx + edx*4 + 0x84] */
  edi = R32((uint32_t)(ecx + edx*4 + 0x84u));
/* f89f2f: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f89f32: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* f89f35: mov eax, dword ptr [0xfba3ec] */
  eax = R32((uint32_t)(0xfba3ecu));
/* f89f3a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f89f3c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f89f3d: mov ecx, edi */
  ecx = edi;
/* f89f3f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f89f46: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* f89f4d: call dword ptr [0xfce334] */
  esp -= 4; W32(esp, 0xf89f53u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* f89f53: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* f89f55: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f89f57: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* f89f5a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f89f5b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f89f5c: mov ecx, edi */
  ecx = edi;
/* f89f5e: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0xf89f61u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f89f61: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* f89f64: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f89f66: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* f89f69: je 0xf89f9c */
  if (zf) goto L_f89f9c;
L_f89f6b: /* f89f6b: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* f89f6e: cmp word ptr [ecx], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* f89f72: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f89f74: jne 0xf89faf */
  if (!zf) goto L_f89faf;
L_f89f76: /* f89f76: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* f89f79: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* f89f7c: push 0xfb9998 */
  { uint32_t v = 0xfb9998u; esp -= 4; W32(esp, v); }
/* f89f81: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f89f82: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f89f83: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* f89f88: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* f89f8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f89f8e: mov ecx, esi */
  ecx = esi;
/* f89f90: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0xf89f96u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f89f96: mov dword ptr [edi], 0 */
  W32((uint32_t)(edi), 0x0u);
L_f89f9c: /* f89f9c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f89f9f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f89fa6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f89fa7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f89fa8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f89fa9: mov esp, ebp */
  esp = ebp;
/* f89fab: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f89fac: ret 0x14 */
  esp += 24; SPILL(); return;
L_f89faf: /* f89faf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f89fb0: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* f89fb3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f89fb4: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* f89fb7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f89fb8: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* f89fbd: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* f89fc2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f89fc3: mov ecx, esi */
  ecx = esi;
/* f89fc5: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0xf89fcbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f89fcb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f89fce: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f89fcf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f89fd0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f89fd7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f89fd8: mov esp, ebp */
  esp = ebp;
/* f89fda: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f89fdb: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_f89fde(void) {
  LOAD_REGS();
L_f89fde: /* f89fde: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f89fe1: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f89fe6: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* f89fe9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f89fea: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* f89fed: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf89ff2u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f89ff2(); return;
}

void f_f89ff2(void) {
  LOAD_REGS();
L_f89ff2: /* f89ff2: push 0xfa4274 */
  { uint32_t v = 0xfa4274u; esp -= 4; W32(esp, v); }
/* f89ff7: push 0xfb999c */
  { uint32_t v = 0xfb999cu; esp -= 4; W32(esp, v); }
/* f89ffc: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf8a002u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f8a002: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8a005: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8a007: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8a009: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8a00eu); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f8a00e: guest_badaddr(0xf8a00e); return;
}

void f_f8a060(void) {
  LOAD_REGS();
L_f8a060: /* f8a060: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f8a061: mov ebp, esp */
  ebp = esp;
/* f8a063: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f8a065: push 0xf9a270 */
  { uint32_t v = 0xf9a270u; esp -= 4; W32(esp, v); }
/* f8a06a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8a070: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8a071: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f8a078: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8a07b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8a07c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f8a07d: mov esi, ecx */
  esi = ecx;
/* f8a07f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8a081: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8a082: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f8a085: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f8a08c: call dword ptr [eax + 0x74] */
  { uint32_t t = R32((uint32_t)(eax + 0x74u)); esp -= 4; W32(esp, 0xf8a08fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8a08f: mov ecx, dword ptr [esi + 0x10c] */
  ecx = R32((uint32_t)(esi + 0x10cu));
/* f8a095: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8a097: lea edi, [esi + 0x10c] */
  edi = (uint32_t)(esi + 0x10cu);
/* f8a09d: je 0xf8a0c6 */
  if (zf) goto L_f8a0c6;
L_f8a09f: /* f8a09f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f8a0a1: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0xf8a0a4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8a0a4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8a0a6: jne 0xf8a0c6 */
  if (!zf) goto L_f8a0c6;
L_f8a0a8: /* f8a0a8: mov ecx, dword ptr [0xfba47c] */
  ecx = R32((uint32_t)(0xfba47cu));
/* f8a0ae: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8a0b0: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* f8a0b3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f8a0b6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8a0b8: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* f8a0bb: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* f8a0be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8a0bf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8a0c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8a0c1: mov ecx, esi */
  ecx = esi;
/* f8a0c3: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0xf8a0c6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f8a0c6: /* f8a0c6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8a0c9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8a0ca: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8a0cb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8a0d2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8a0d3: mov esp, ebp */
  esp = ebp;
/* f8a0d5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8a0d6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f8a0d9(void) {
  LOAD_REGS();
L_f8a0d9: /* f8a0d9: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8a0dc: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f8a0e1: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* f8a0e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8a0e5: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* f8a0e8: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8a0edu); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f8a0ed(); return;
}

void f_f8a0ed(void) {
  LOAD_REGS();
L_f8a0ed: /* f8a0ed: push 0xfa42a8 */
  { uint32_t v = 0xfa42a8u; esp -= 4; W32(esp, v); }
/* f8a0f2: push 0xfb99a4 */
  { uint32_t v = 0xfb99a4u; esp -= 4; W32(esp, v); }
/* f8a0f7: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf8a0fdu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f8a0fd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8a100: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8a102: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8a104: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8a109u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f8a109: guest_badaddr(0xf8a109); return;
}

void f_f8a140(void) {
  LOAD_REGS();
L_f8a140: /* f8a140: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f8a141: mov ebp, esp */
  ebp = esp;
/* f8a143: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f8a145: push 0xf9a280 */
  { uint32_t v = 0xf9a280u; esp -= 4; W32(esp, v); }
/* f8a14a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8a150: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8a151: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f8a158: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8a15b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8a15c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f8a15d: mov esi, ecx */
  esi = ecx;
/* f8a15f: test byte ptr [esi + 0x58], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x58u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8a163: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8a164: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f8a167: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f8a16e: je 0xf8a1ec */
  if (zf) goto L_f8a1ec;
L_f8a170: /* f8a170: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8a172: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0xf8a178u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8a178: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* f8a17b: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* f8a17e: fstp dword ptr [edi + 0x44] */
  WF32((uint32_t)(edi + 0x44u), ST0); FPOP();
/* f8a181: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8a183: mov ecx, esi */
  ecx = esi;
/* f8a185: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0xf8a18bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8a18b: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* f8a18e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f8a191: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
/* f8a194: mov eax, dword ptr [esi + 0xa0] */
  eax = R32((uint32_t)(esi + 0xa0u));
/* f8a19a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8a19c: je 0xf8a1ec */
  if (zf) goto L_f8a1ec;
L_f8a19e: /* f8a19e: movzx ecx, byte ptr [esi + 0x30] */
  ecx = (uint32_t)(R8((uint32_t)(esi + 0x30u)));
/* f8a1a2: mov edx, dword ptr [eax + ecx*4 + 0x5c] */
  edx = R32((uint32_t)(eax + ecx*4 + 0x5cu));
/* f8a1a6: mov dword ptr [edi + 0x58], edx */
  W32((uint32_t)(edi + 0x58u), edx);
/* f8a1a9: movzx eax, byte ptr [esi + 0x30] */
  eax = (uint32_t)(R8((uint32_t)(esi + 0x30u)));
/* f8a1ad: mov ecx, dword ptr [esi + 0xa0] */
  ecx = R32((uint32_t)(esi + 0xa0u));
/* f8a1b3: mov dl, byte ptr [eax + ecx + 0x38] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0x38u))) & 0xffu);
/* f8a1b7: mov byte ptr [edi + 0x50], dl */
  W8((uint32_t)(edi + 0x50u), (edx & 0xffu));
/* f8a1ba: movzx eax, byte ptr [esi + 0x30] */
  eax = (uint32_t)(R8((uint32_t)(esi + 0x30u)));
/* f8a1be: mov ecx, dword ptr [esi + 0xa0] */
  ecx = R32((uint32_t)(esi + 0xa0u));
/* f8a1c4: mov ecx, dword ptr [ecx + eax*4 + 0x84] */
  ecx = R32((uint32_t)(ecx + eax*4 + 0x84u));
/* f8a1cb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8a1cd: je 0xf8a1ec */
  if (zf) goto L_f8a1ec;
L_f8a1cf: /* f8a1cf: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* f8a1d2: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* f8a1d5: mov edx, dword ptr [eax + 0x28] */
  edx = R32((uint32_t)(eax + 0x28u));
/* f8a1d8: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* f8a1db: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* f8a1dd: mov eax, dword ptr [edx + 0x88] */
  eax = R32((uint32_t)(edx + 0x88u));
/* f8a1e3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8a1e4: call 0xf71a14 */
  esp -= 4; W32(esp, 0xf8a1e9u); SPILL(); f_f71a14(); if (g_unwind) return; RELOAD();
/* f8a1e9: mov dword ptr [edi + 0x28], eax */
  W32((uint32_t)(edi + 0x28u), eax);
L_f8a1ec: /* f8a1ec: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8a1ef: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8a1f0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8a1f1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8a1f8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8a1f9: mov esp, ebp */
  esp = ebp;
/* f8a1fb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8a1fc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f8a1ff(void) {
  LOAD_REGS();
L_f8a1ff: /* f8a1ff: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* f8a202: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f8a207: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* f8a20a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8a20b: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* f8a20e: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8a213u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f8a213(); return;
}

void f_f8a213(void) {
  LOAD_REGS();
L_f8a213: /* f8a213: push 0xfa42dc */
  { uint32_t v = 0xfa42dcu; esp -= 4; W32(esp, v); }
/* f8a218: push 0xfb99ac */
  { uint32_t v = 0xfb99acu; esp -= 4; W32(esp, v); }
/* f8a21d: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf8a223u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f8a223: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8a226: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8a228: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8a22a: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8a22fu); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f8a22f: guest_badaddr(0xf8a22f); return;
}

void f_f8a270(void) {
  LOAD_REGS();
L_f8a270: /* f8a270: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f8a271: mov ebp, esp */
  ebp = esp;
/* f8a273: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f8a275: push 0xf9a290 */
  { uint32_t v = 0xf9a290u; esp -= 4; W32(esp, v); }
/* f8a27a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8a280: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8a281: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f8a288: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8a28b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8a28c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f8a28d: mov esi, ecx */
  esi = ecx;
/* f8a28f: mov eax, dword ptr [esi + 0x58] */
  eax = R32((uint32_t)(esi + 0x58u));
/* f8a292: test al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8a294: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8a295: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f8a298: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f8a29f: je 0xf8a365 */
  if (zf) goto L_f8a365;
L_f8a2a5: /* f8a2a5: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8a2a7: je 0xf8a365 */
  if (zf) goto L_f8a365;
L_f8a2ad: /* f8a2ad: cmp byte ptr [esi + 0x30], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x30u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f8a2b1: je 0xf8a365 */
  if (zf) goto L_f8a365;
L_f8a2b7: /* f8a2b7: mov ecx, dword ptr [esi + 0x134] */
  ecx = R32((uint32_t)(esi + 0x134u));
/* f8a2bd: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8a2bf: je 0xf8a2e1 */
  if (zf) goto L_f8a2e1;
L_f8a2c1: /* f8a2c1: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* f8a2c3: call dword ptr [eax + 0x30] */
  { uint32_t t = R32((uint32_t)(eax + 0x30u)); esp -= 4; W32(esp, 0xf8a2c6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8a2c6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8a2c8: jne 0xf8a2e1 */
  if (!zf) goto L_f8a2e1;
L_f8a2ca: /* f8a2ca: fild dword ptr [ebp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* f8a2cd: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8a2d0: mov ecx, esi */
  ecx = esi;
/* f8a2d2: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* f8a2d6: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* f8a2d9: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f8a2dc: call 0xf713ac */
  esp -= 4; W32(esp, 0xf8a2e1u); SPILL(); f_f713ac(); if (g_unwind) return; RELOAD();
L_f8a2e1: /* f8a2e1: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* f8a2e4: fcom dword ptr [esi + 0xa4] */
  fpu_com(ST0, F32((uint32_t)(esi + 0xa4u)));
/* f8a2ea: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f8a2ec: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8a2ef: jne 0xf8a363 */
  if (!zf) goto L_f8a363;
L_f8a2f1: /* f8a2f1: fcomp dword ptr [esi + 0xac] */
  fpu_com(ST0, F32((uint32_t)(esi + 0xacu)));
  FPOP();
/* f8a2f7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f8a2f9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f8a2fc: jp 0xf8a365 */
  if (pf) goto L_f8a365;
L_f8a2fe: /* f8a2fe: fild dword ptr [ebp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* f8a301: fcom dword ptr [esi + 0xa8] */
  fpu_com(ST0, F32((uint32_t)(esi + 0xa8u)));
/* f8a307: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f8a309: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8a30c: jne 0xf8a363 */
  if (!zf) goto L_f8a363;
L_f8a30e: /* f8a30e: fcomp dword ptr [esi + 0xb0] */
  fpu_com(ST0, F32((uint32_t)(esi + 0xb0u)));
  FPOP();
/* f8a314: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f8a316: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f8a319: jp 0xf8a365 */
  if (pf) goto L_f8a365;
L_f8a31b: /* f8a31b: mov eax, 1 */
  eax = 0x1u;
/* f8a320: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8a323: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8a32a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8a32b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8a32c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8a32d: mov esp, ebp */
  esp = ebp;
/* f8a32f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8a330: ret 8 */
  esp += 12; SPILL(); return;
L_f8a363: /* f8a363: fstp st(0) */
  STI(0) = ST0; FPOP();
L_f8a365: /* f8a365: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8a368: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8a369: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8a36a: xor eax, eax */
  eax = 0;
/* f8a36c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8a373: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8a374: mov esp, ebp */
  esp = ebp;
/* f8a376: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8a377: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f8a333(void) {
  LOAD_REGS();
L_f8a333: /* f8a333: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8a336: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f8a33b: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* f8a33e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8a33f: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* f8a342: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8a347u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f8a347(); return;
}

void f_f8a347(void) {
  LOAD_REGS();
L_f8a347: /* f8a347: push 0xfa430c */
  { uint32_t v = 0xfa430cu; esp -= 4; W32(esp, v); }
/* f8a34c: push 0xfb99bc */
  { uint32_t v = 0xfb99bcu; esp -= 4; W32(esp, v); }
/* f8a351: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf8a357u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f8a357: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8a35a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8a35c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8a35e: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8a363u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
/* f8a363: fstp st(0) */
  STI(0) = ST0; FPOP();
/* f8a365: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8a368: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8a369: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8a36a: xor eax, eax */
  eax = 0;
/* f8a36c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8a373: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8a374: mov esp, ebp */
  esp = ebp;
/* f8a376: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8a377: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f8a3d0(void) {
  LOAD_REGS();
L_f8a3d0: /* f8a3d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f8a3d1: mov ebp, esp */
  ebp = esp;
/* f8a3d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f8a3d5: push 0xf9a2a0 */
  { uint32_t v = 0xf9a2a0u; esp -= 4; W32(esp, v); }
/* f8a3da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8a3e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8a3e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f8a3e8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8a3eb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8a3ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f8a3ed: mov esi, ecx */
  esi = ecx;
/* f8a3ef: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* f8a3f2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8a3f4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8a3f5: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f8a3f8: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f8a3ff: je 0xf8a4ca */
  if (zf) goto L_f8a4ca;
L_f8a405: /* f8a405: mov eax, dword ptr [eax + 0x30] */
  eax = R32((uint32_t)(eax + 0x30u));
/* f8a408: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8a40a: je 0xf8a4ca */
  if (zf) goto L_f8a4ca;
L_f8a410: /* f8a410: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* f8a413: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8a415: je 0xf8a4ca */
  if (zf) goto L_f8a4ca;
L_f8a41b: /* f8a41b: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* f8a41e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8a420: je 0xf8a4ca */
  if (zf) goto L_f8a4ca;
L_f8a426: /* f8a426: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* f8a429: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* f8a42b: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8a42d: je 0xf8a4ca */
  if (zf) goto L_f8a4ca;
L_f8a433: /* f8a433: fld dword ptr [esi + 0x74] */
  { double v = F32((uint32_t)(esi + 0x74u)); FPUSH(v); }
/* f8a436: fcomp dword ptr [0xfa4394] */
  fpu_com(ST0, F32((uint32_t)(0xfa4394u)));
  FPOP();
/* f8a43c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f8a43e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f8a441: jp 0xf8a4b6 */
  if (pf) goto L_f8a4b6;
L_f8a443: /* f8a443: test byte ptr [esi + 0x58], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x58u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8a447: je 0xf8a49c */
  if (zf) goto L_f8a49c;
L_f8a449: /* f8a449: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* f8a44c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8a44e: je 0xf8a49c */
  if (zf) goto L_f8a49c;
L_f8a450: /* f8a450: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f8a452: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xf8a455u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8a455: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* f8a458: fmul dword ptr [esi + 0x74] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x74u)));
/* f8a45b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8a45e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8a465: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8a466: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8a467: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8a468: mov esp, ebp */
  esp = ebp;
/* f8a46a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8a46b: ret  */
  esp += 4; SPILL(); return;
L_f8a49c: /* f8a49c: fild dword ptr [edx + 0x88] */
  { double v = (double)(int32_t)R32((uint32_t)(edx + 0x88u)); FPUSH(v); }
/* f8a4a2: fmul dword ptr [esi + 0x74] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x74u)));
/* f8a4a5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8a4a8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8a4af: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8a4b0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8a4b1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8a4b2: mov esp, ebp */
  esp = ebp;
/* f8a4b4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8a4b5: ret  */
  esp += 4; SPILL(); return;
L_f8a4b6: /* f8a4b6: fld dword ptr [esi + 0x74] */
  { double v = F32((uint32_t)(esi + 0x74u)); FPUSH(v); }
/* f8a4b9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8a4bc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8a4c3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8a4c4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8a4c5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8a4c6: mov esp, ebp */
  esp = ebp;
/* f8a4c8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8a4c9: ret  */
  esp += 4; SPILL(); return;
L_f8a4ca: /* f8a4ca: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8a4cd: fld dword ptr [0xfa4138] */
  { double v = F32((uint32_t)(0xfa4138u)); FPUSH(v); }
/* f8a4d3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8a4d4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8a4d5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8a4dc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8a4dd: mov esp, ebp */
  esp = ebp;
/* f8a4df: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8a4e0: ret  */
  esp += 4; SPILL(); return;
}

void f_f8a46c(void) {
  LOAD_REGS();
L_f8a46c: /* f8a46c: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* f8a46f: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f8a474: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* f8a477: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8a478: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* f8a47b: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8a480u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f8a480(); return;
}

void f_f8a480(void) {
  LOAD_REGS();
L_f8a480: /* f8a480: push 0xfa4354 */
  { uint32_t v = 0xfa4354u; esp -= 4; W32(esp, v); }
/* f8a485: push 0xfb99c4 */
  { uint32_t v = 0xfb99c4u; esp -= 4; W32(esp, v); }
/* f8a48a: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf8a490u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f8a490: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8a493: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8a495: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8a497: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8a49cu); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
/* f8a49c: fild dword ptr [edx + 0x88] */
  { double v = (double)(int32_t)R32((uint32_t)(edx + 0x88u)); FPUSH(v); }
/* f8a4a2: fmul dword ptr [esi + 0x74] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x74u)));
/* f8a4a5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8a4a8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8a4af: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8a4b0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8a4b1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8a4b2: mov esp, ebp */
  esp = ebp;
/* f8a4b4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8a4b5: ret  */
  esp += 4; SPILL(); return;
}

void f_f8a540(void) {
  LOAD_REGS();
L_f8a540: /* f8a540: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f8a541: mov ebp, esp */
  ebp = esp;
/* f8a543: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f8a545: push 0xf9a2b0 */
  { uint32_t v = 0xf9a2b0u; esp -= 4; W32(esp, v); }
/* f8a54a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8a550: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8a551: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f8a558: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8a55b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8a55c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f8a55d: mov esi, ecx */
  esi = ecx;
/* f8a55f: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* f8a562: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8a564: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8a565: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f8a568: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f8a56f: je 0xf8a63a */
  if (zf) goto L_f8a63a;
L_f8a575: /* f8a575: mov eax, dword ptr [eax + 0x30] */
  eax = R32((uint32_t)(eax + 0x30u));
/* f8a578: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8a57a: je 0xf8a63a */
  if (zf) goto L_f8a63a;
L_f8a580: /* f8a580: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* f8a583: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8a585: je 0xf8a63a */
  if (zf) goto L_f8a63a;
L_f8a58b: /* f8a58b: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* f8a58e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8a590: je 0xf8a63a */
  if (zf) goto L_f8a63a;
L_f8a596: /* f8a596: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* f8a599: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* f8a59b: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8a59d: je 0xf8a63a */
  if (zf) goto L_f8a63a;
L_f8a5a3: /* f8a5a3: fld dword ptr [esi + 0x78] */
  { double v = F32((uint32_t)(esi + 0x78u)); FPUSH(v); }
/* f8a5a6: fcomp dword ptr [0xfa4394] */
  fpu_com(ST0, F32((uint32_t)(0xfa4394u)));
  FPOP();
/* f8a5ac: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f8a5ae: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f8a5b1: jp 0xf8a626 */
  if (pf) goto L_f8a626;
L_f8a5b3: /* f8a5b3: test byte ptr [esi + 0x58], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x58u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8a5b7: je 0xf8a60c */
  if (zf) goto L_f8a60c;
L_f8a5b9: /* f8a5b9: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* f8a5bc: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8a5be: je 0xf8a60c */
  if (zf) goto L_f8a60c;
L_f8a5c0: /* f8a5c0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f8a5c2: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0xf8a5c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8a5c5: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* f8a5c8: fmul dword ptr [esi + 0x78] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x78u)));
/* f8a5cb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8a5ce: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8a5d5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8a5d6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8a5d7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8a5d8: mov esp, ebp */
  esp = ebp;
/* f8a5da: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8a5db: ret  */
  esp += 4; SPILL(); return;
L_f8a60c: /* f8a60c: fild dword ptr [edx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(edx + 0x8cu)); FPUSH(v); }
/* f8a612: fmul dword ptr [esi + 0x78] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x78u)));
/* f8a615: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8a618: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8a61f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8a620: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8a621: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8a622: mov esp, ebp */
  esp = ebp;
/* f8a624: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8a625: ret  */
  esp += 4; SPILL(); return;
L_f8a626: /* f8a626: fld dword ptr [esi + 0x78] */
  { double v = F32((uint32_t)(esi + 0x78u)); FPUSH(v); }
/* f8a629: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8a62c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8a633: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8a634: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8a635: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8a636: mov esp, ebp */
  esp = ebp;
/* f8a638: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8a639: ret  */
  esp += 4; SPILL(); return;
L_f8a63a: /* f8a63a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8a63d: fld dword ptr [0xfa4138] */
  { double v = F32((uint32_t)(0xfa4138u)); FPUSH(v); }
/* f8a643: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8a644: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8a645: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8a64c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8a64d: mov esp, ebp */
  esp = ebp;
/* f8a64f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8a650: ret  */
  esp += 4; SPILL(); return;
}

void f_f8a5dc(void) {
  LOAD_REGS();
L_f8a5dc: /* f8a5dc: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* f8a5df: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f8a5e4: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* f8a5e7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8a5e8: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* f8a5eb: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8a5f0u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f8a5f0(); return;
}

void f_f8a5f0(void) {
  LOAD_REGS();
L_f8a5f0: /* f8a5f0: push 0xfa4398 */
  { uint32_t v = 0xfa4398u; esp -= 4; W32(esp, v); }
/* f8a5f5: push 0xfb99d4 */
  { uint32_t v = 0xfb99d4u; esp -= 4; W32(esp, v); }
/* f8a5fa: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf8a600u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f8a600: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8a603: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8a605: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8a607: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8a60cu); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
/* f8a60c: fild dword ptr [edx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(edx + 0x8cu)); FPUSH(v); }
/* f8a612: fmul dword ptr [esi + 0x78] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x78u)));
/* f8a615: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8a618: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8a61f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8a620: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8a621: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8a622: mov esp, ebp */
  esp = ebp;
/* f8a624: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8a625: ret  */
  esp += 4; SPILL(); return;
}

void f_f8a6b0(void) {
  LOAD_REGS();
L_f8a6b0: /* f8a6b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f8a6b1: mov ebp, esp */
  ebp = esp;
/* f8a6b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f8a6b5: push 0xf9a2c0 */
  { uint32_t v = 0xf9a2c0u; esp -= 4; W32(esp, v); }
/* f8a6ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8a6c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8a6c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f8a6c8: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8a6cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8a6cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f8a6cd: mov esi, ecx */
  esi = ecx;
/* f8a6cf: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* f8a6d2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8a6d4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8a6d5: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f8a6d8: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f8a6df: je 0xf8a7e6 */
  if (zf) goto L_f8a7e6;
L_f8a6e5: /* f8a6e5: mov eax, dword ptr [eax + 0x30] */
  eax = R32((uint32_t)(eax + 0x30u));
/* f8a6e8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8a6ea: je 0xf8a7e6 */
  if (zf) goto L_f8a7e6;
L_f8a6f0: /* f8a6f0: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* f8a6f3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8a6f5: je 0xf8a7e6 */
  if (zf) goto L_f8a7e6;
L_f8a6fb: /* f8a6fb: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* f8a6fe: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8a700: je 0xf8a7e6 */
  if (zf) goto L_f8a7e6;
L_f8a706: /* f8a706: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* f8a709: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* f8a70b: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8a70d: je 0xf8a7e6 */
  if (zf) goto L_f8a7e6;
L_f8a713: /* f8a713: fld dword ptr [esi + 0x70] */
  { double v = F32((uint32_t)(esi + 0x70u)); FPUSH(v); }
/* f8a716: fcomp dword ptr [0xfa4394] */
  fpu_com(ST0, F32((uint32_t)(0xfa4394u)));
  FPOP();
/* f8a71c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f8a71e: mov al, byte ptr [esi + 0x58] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x58u))) & 0xffu);
/* f8a721: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f8a724: jp 0xf8a778 */
  if (pf) goto L_f8a778;
L_f8a726: /* f8a726: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8a728: je 0xf8a75e */
  if (zf) goto L_f8a75e;
L_f8a72a: /* f8a72a: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* f8a72d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8a72f: je 0xf8a75e */
  if (zf) goto L_f8a75e;
L_f8a731: /* f8a731: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f8a733: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0xf8a739u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8a739: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f8a73c: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* f8a73f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* f8a741: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0xf8a744u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8a744: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* f8a747: fmul dword ptr [esi + 0x70] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x70u)));
/* f8a74a: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* f8a74d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8a750: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8a757: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8a758: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8a759: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8a75a: mov esp, ebp */
  esp = ebp;
/* f8a75c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8a75d: ret  */
  esp += 4; SPILL(); return;
L_f8a75e: /* f8a75e: fild dword ptr [edx + 0x88] */
  { double v = (double)(int32_t)R32((uint32_t)(edx + 0x88u)); FPUSH(v); }
/* f8a764: fmul dword ptr [esi + 0x70] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x70u)));
/* f8a767: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8a76a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8a771: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8a772: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8a773: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8a774: mov esp, ebp */
  esp = ebp;
/* f8a776: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8a777: ret  */
  esp += 4; SPILL(); return;
L_f8a778: /* f8a778: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8a77a: je 0xf8a7d2 */
  if (zf) goto L_f8a7d2;
L_f8a77c: /* f8a77c: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* f8a77f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8a781: je 0xf8a7d2 */
  if (zf) goto L_f8a7d2;
L_f8a783: /* f8a783: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f8a785: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0xf8a78bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8a78b: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* f8a78e: fadd dword ptr [esi + 0x70] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x70u)));
/* f8a791: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8a794: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8a79b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8a79c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8a79d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8a79e: mov esp, ebp */
  esp = ebp;
/* f8a7a0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8a7a1: ret  */
  esp += 4; SPILL(); return;
L_f8a7d2: /* f8a7d2: fld dword ptr [esi + 0x70] */
  { double v = F32((uint32_t)(esi + 0x70u)); FPUSH(v); }
/* f8a7d5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8a7d8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8a7df: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8a7e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8a7e1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8a7e2: mov esp, ebp */
  esp = ebp;
/* f8a7e4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8a7e5: ret  */
  esp += 4; SPILL(); return;
L_f8a7e6: /* f8a7e6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8a7e9: fld dword ptr [0xfa4138] */
  { double v = F32((uint32_t)(0xfa4138u)); FPUSH(v); }
/* f8a7ef: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8a7f0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8a7f1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8a7f8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8a7f9: mov esp, ebp */
  esp = ebp;
/* f8a7fb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8a7fc: ret  */
  esp += 4; SPILL(); return;
}

void f_f8a7a2(void) {
  LOAD_REGS();
L_f8a7a2: /* f8a7a2: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* f8a7a5: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f8a7aa: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* f8a7ad: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8a7ae: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* f8a7b1: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8a7b6u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f8a7b6(); return;
}

void f_f8a7b6(void) {
  LOAD_REGS();
L_f8a7b6: /* f8a7b6: push 0xfa43dc */
  { uint32_t v = 0xfa43dcu; esp -= 4; W32(esp, v); }
/* f8a7bb: push 0xfb99e4 */
  { uint32_t v = 0xfb99e4u; esp -= 4; W32(esp, v); }
/* f8a7c0: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf8a7c6u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f8a7c6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8a7c9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8a7cb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8a7cd: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8a7d2u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
/* f8a7d2: fld dword ptr [esi + 0x70] */
  { double v = F32((uint32_t)(esi + 0x70u)); FPUSH(v); }
/* f8a7d5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8a7d8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8a7df: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8a7e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8a7e1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8a7e2: mov esp, ebp */
  esp = ebp;
/* f8a7e4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8a7e5: ret  */
  esp += 4; SPILL(); return;
}

void f_f8a860(void) {
  LOAD_REGS();
L_f8a860: /* f8a860: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f8a861: mov ebp, esp */
  ebp = esp;
/* f8a863: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f8a865: push 0xf9a2d0 */
  { uint32_t v = 0xf9a2d0u; esp -= 4; W32(esp, v); }
/* f8a86a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8a870: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8a871: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f8a878: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8a87b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8a87c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f8a87d: mov esi, ecx */
  esi = ecx;
/* f8a87f: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* f8a882: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8a884: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8a885: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f8a888: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f8a88f: je 0xf8a996 */
  if (zf) goto L_f8a996;
L_f8a895: /* f8a895: mov eax, dword ptr [eax + 0x30] */
  eax = R32((uint32_t)(eax + 0x30u));
/* f8a898: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8a89a: je 0xf8a996 */
  if (zf) goto L_f8a996;
L_f8a8a0: /* f8a8a0: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* f8a8a3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8a8a5: je 0xf8a996 */
  if (zf) goto L_f8a996;
L_f8a8ab: /* f8a8ab: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* f8a8ae: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8a8b0: je 0xf8a996 */
  if (zf) goto L_f8a996;
L_f8a8b6: /* f8a8b6: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* f8a8b9: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* f8a8bb: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8a8bd: je 0xf8a996 */
  if (zf) goto L_f8a996;
L_f8a8c3: /* f8a8c3: fld dword ptr [esi + 0x6c] */
  { double v = F32((uint32_t)(esi + 0x6cu)); FPUSH(v); }
/* f8a8c6: fcomp dword ptr [0xfa4394] */
  fpu_com(ST0, F32((uint32_t)(0xfa4394u)));
  FPOP();
/* f8a8cc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f8a8ce: mov al, byte ptr [esi + 0x58] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x58u))) & 0xffu);
/* f8a8d1: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f8a8d4: jp 0xf8a928 */
  if (pf) goto L_f8a928;
L_f8a8d6: /* f8a8d6: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8a8d8: je 0xf8a90e */
  if (zf) goto L_f8a90e;
L_f8a8da: /* f8a8da: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* f8a8dd: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8a8df: je 0xf8a90e */
  if (zf) goto L_f8a90e;
L_f8a8e1: /* f8a8e1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f8a8e3: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0xf8a8e9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8a8e9: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f8a8ec: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* f8a8ef: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* f8a8f1: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0xf8a8f4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8a8f4: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* f8a8f7: fmul dword ptr [esi + 0x6c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x6cu)));
/* f8a8fa: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* f8a8fd: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8a900: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8a907: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8a908: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8a909: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8a90a: mov esp, ebp */
  esp = ebp;
/* f8a90c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8a90d: ret  */
  esp += 4; SPILL(); return;
L_f8a90e: /* f8a90e: fild dword ptr [edx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(edx + 0x8cu)); FPUSH(v); }
/* f8a914: fmul dword ptr [esi + 0x6c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x6cu)));
/* f8a917: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8a91a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8a921: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8a922: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8a923: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8a924: mov esp, ebp */
  esp = ebp;
/* f8a926: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8a927: ret  */
  esp += 4; SPILL(); return;
L_f8a928: /* f8a928: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8a92a: je 0xf8a982 */
  if (zf) goto L_f8a982;
L_f8a92c: /* f8a92c: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* f8a92f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8a931: je 0xf8a982 */
  if (zf) goto L_f8a982;
L_f8a933: /* f8a933: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f8a935: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0xf8a93bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8a93b: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* f8a93e: fadd dword ptr [esi + 0x6c] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x6cu)));
/* f8a941: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8a944: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8a94b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8a94c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8a94d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8a94e: mov esp, ebp */
  esp = ebp;
/* f8a950: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8a951: ret  */
  esp += 4; SPILL(); return;
L_f8a982: /* f8a982: fld dword ptr [esi + 0x6c] */
  { double v = F32((uint32_t)(esi + 0x6cu)); FPUSH(v); }
/* f8a985: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8a988: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8a98f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8a990: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8a991: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8a992: mov esp, ebp */
  esp = ebp;
/* f8a994: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8a995: ret  */
  esp += 4; SPILL(); return;
L_f8a996: /* f8a996: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8a999: fld dword ptr [0xfa4138] */
  { double v = F32((uint32_t)(0xfa4138u)); FPUSH(v); }
/* f8a99f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8a9a0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8a9a1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8a9a8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8a9a9: mov esp, ebp */
  esp = ebp;
/* f8a9ab: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8a9ac: ret  */
  esp += 4; SPILL(); return;
}

void f_f8a952(void) {
  LOAD_REGS();
L_f8a952: /* f8a952: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* f8a955: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f8a95a: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* f8a95d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8a95e: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* f8a961: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8a966u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f8a966(); return;
}

void f_f8a966(void) {
  LOAD_REGS();
L_f8a966: /* f8a966: push 0xfa441c */
  { uint32_t v = 0xfa441cu; esp -= 4; W32(esp, v); }
/* f8a96b: push 0xfb99f4 */
  { uint32_t v = 0xfb99f4u; esp -= 4; W32(esp, v); }
/* f8a970: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf8a976u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f8a976: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8a979: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8a97b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8a97d: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8a982u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
/* f8a982: fld dword ptr [esi + 0x6c] */
  { double v = F32((uint32_t)(esi + 0x6cu)); FPUSH(v); }
/* f8a985: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8a988: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8a98f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8a990: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8a991: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8a992: mov esp, ebp */
  esp = ebp;
/* f8a994: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8a995: ret  */
  esp += 4; SPILL(); return;
}

void f_f8aa10(void) {
  LOAD_REGS();
L_f8aa10: /* f8aa10: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f8aa11: mov ebp, esp */
  ebp = esp;
/* f8aa13: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f8aa15: push 0xf9a2e0 */
  { uint32_t v = 0xf9a2e0u; esp -= 4; W32(esp, v); }
/* f8aa1a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8aa20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8aa21: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f8aa28: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8aa2b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8aa2c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f8aa2d: mov esi, ecx */
  esi = ecx;
/* f8aa2f: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* f8aa31: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8aa32: mov edi, dword ptr [esi + 0x28] */
  edi = R32((uint32_t)(esi + 0x28u));
/* f8aa35: fld dword ptr [edi + 0xac] */
  { double v = F32((uint32_t)(edi + 0xacu)); FPUSH(v); }
/* f8aa3b: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f8aa3e: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f8aa45: call 0xf979dc */
  esp -= 4; W32(esp, 0xf8aa4au); SPILL(); f_f979dc(); if (g_unwind) return; RELOAD();
/* f8aa4a: fld dword ptr [edi + 0xa8] */
  { double v = F32((uint32_t)(edi + 0xa8u)); FPUSH(v); }
/* f8aa50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8aa51: call 0xf979dc */
  esp -= 4; W32(esp, 0xf8aa56u); SPILL(); f_f979dc(); if (g_unwind) return; RELOAD();
/* f8aa56: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8aa57: mov ecx, esi */
  ecx = esi;
/* f8aa59: call dword ptr [ebx + 0x70] */
  { uint32_t t = R32((uint32_t)(ebx + 0x70u)); esp -= 4; W32(esp, 0xf8aa5cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8aa5c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8aa5e: jne 0xf8aa73 */
  if (!zf) goto L_f8aa73;
L_f8aa60: /* f8aa60: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8aa63: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8aa6a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8aa6b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8aa6c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8aa6d: mov esp, ebp */
  esp = ebp;
/* f8aa6f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8aa70: ret 4 */
  esp += 8; SPILL(); return;
L_f8aa73: /* f8aa73: mov eax, dword ptr [0xfba360] */
  eax = R32((uint32_t)(0xfba360u));
/* f8aa78: mov edi, dword ptr [0xfce334] */
  edi = R32((uint32_t)(0xfce334u));
/* f8aa7e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8aa80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8aa81: mov ecx, esi */
  ecx = esi;
/* f8aa83: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* f8aa8a: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xf8aa8cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8aa8c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8aa8e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8aa90: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* f8aa93: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8aa94: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8aa95: mov ecx, esi */
  ecx = esi;
/* f8aa97: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0xf8aa9au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8aa9a: mov edx, dword ptr [0xfba404] */
  edx = R32((uint32_t)(0xfba404u));
/* f8aaa0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8aaa2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8aaa3: mov ecx, esi */
  ecx = esi;
/* f8aaa5: mov byte ptr [ebp - 0x11], 3 */
  W8((uint32_t)(ebp + 0xffffffefu), 0x3u);
/* f8aaa9: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xf8aaabu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8aaab: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8aaad: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8aaaf: lea ecx, [ebp - 0x11] */
  ecx = (uint32_t)(ebp + 0xffffffefu);
/* f8aab2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8aab3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8aab4: mov ecx, esi */
  ecx = esi;
/* f8aab6: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0xf8aab9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8aab9: mov ecx, dword ptr [esi + 0x17c] */
  ecx = R32((uint32_t)(esi + 0x17cu));
/* f8aabf: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8aac1: je 0xf8aad8 */
  if (zf) goto L_f8aad8;
L_f8aac3: /* f8aac3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f8aac5: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0xf8aac8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8aac8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8aaca: jne 0xf8aad8 */
  if (!zf) goto L_f8aad8;
L_f8aacc: /* f8aacc: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f8aacf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8aad0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f8aad1: mov ecx, esi */
  ecx = esi;
/* f8aad3: call 0xf7157d */
  esp -= 4; W32(esp, 0xf8aad8u); SPILL(); f_f7157d(); if (g_unwind) return; RELOAD();
L_f8aad8: /* f8aad8: mov eax, dword ptr [esi + 0x58] */
  eax = R32((uint32_t)(esi + 0x58u));
/* f8aadb: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8aade: je 0xf8ab0c */
  if (zf) goto L_f8ab0c;
L_f8aae0: /* f8aae0: xor ecx, ecx */
  ecx = 0;
/* f8aae2: mov cl, byte ptr [esi + 0x9c] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x9cu))) & 0xffu);
/* f8aae8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8aae9: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* f8aaec: call 0xf71f87 */
  esp -= 4; W32(esp, 0xf8aaf1u); SPILL(); f_f71f87(); if (g_unwind) return; RELOAD();
/* f8aaf1: mov ecx, dword ptr [esi + 0x164] */
  ecx = R32((uint32_t)(esi + 0x164u));
/* f8aaf7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8aaf9: je 0xf8ab0c */
  if (zf) goto L_f8ab0c;
L_f8aafb: /* f8aafb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f8aafd: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0xf8ab00u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8ab00: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8ab02: jne 0xf8ab0c */
  if (!zf) goto L_f8ab0c;
L_f8ab04: /* f8ab04: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f8ab05: mov ecx, esi */
  ecx = esi;
/* f8ab07: call 0xf71776 */
  esp -= 4; W32(esp, 0xf8ab0cu); SPILL(); f_f71776(); if (g_unwind) return; RELOAD();
L_f8ab0c: /* f8ab0c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8ab0f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8ab10: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8ab11: mov eax, 1 */
  eax = 0x1u;
/* f8ab16: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8ab1d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8ab1e: mov esp, ebp */
  esp = ebp;
/* f8ab20: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8ab21: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f8ab24(void) {
  LOAD_REGS();
L_f8ab24: /* f8ab24: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* f8ab27: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f8ab2c: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* f8ab2f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8ab30: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* f8ab33: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8ab38u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f8ab38(); return;
}

void f_f8ab38(void) {
  LOAD_REGS();
L_f8ab38: /* f8ab38: push 0xfa4458 */
  { uint32_t v = 0xfa4458u; esp -= 4; W32(esp, v); }
/* f8ab3d: push 0xfb9a04 */
  { uint32_t v = 0xfb9a04u; esp -= 4; W32(esp, v); }
/* f8ab42: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf8ab48u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f8ab48: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8ab4b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8ab4d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8ab4f: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8ab54u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f8ab54: guest_badaddr(0xf8ab54); return;
}

void f_f8abc0(void) {
  LOAD_REGS();
L_f8abc0: /* f8abc0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f8abc1: mov ebp, esp */
  ebp = esp;
/* f8abc3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f8abc5: push 0xf9a2f0 */
  { uint32_t v = 0xf9a2f0u; esp -= 4; W32(esp, v); }
/* f8abca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8abd0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8abd1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f8abd8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8abdb: cmp byte ptr [ecx + 0x30], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x30u))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f8abdf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8abe0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f8abe1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8abe2: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f8abe5: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f8abec: jne 0xf8ac4c */
  if (!zf) goto L_f8ac4c;
L_f8abee: /* f8abee: test byte ptr [ecx + 0x58], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x58u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8abf2: je 0xf8ac4c */
  if (zf) goto L_f8ac4c;
L_f8abf4: /* f8abf4: fild dword ptr [ebp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* f8abf7: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8abfa: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* f8abfe: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* f8ac01: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f8ac04: call 0xf714ba */
  esp -= 4; W32(esp, 0xf8ac09u); SPILL(); f_f714ba(); if (g_unwind) return; RELOAD();
/* f8ac09: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8ac0c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8ac13: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8ac14: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8ac15: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8ac16: mov esp, ebp */
  esp = ebp;
/* f8ac18: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8ac19: ret 8 */
  esp += 12; SPILL(); return;
L_f8ac4c: /* f8ac4c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8ac4f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8ac50: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8ac51: xor eax, eax */
  eax = 0;
/* f8ac53: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8ac5a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8ac5b: mov esp, ebp */
  esp = ebp;
/* f8ac5d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8ac5e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f8ac1c(void) {
  LOAD_REGS();
L_f8ac1c: /* f8ac1c: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8ac1f: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f8ac24: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* f8ac27: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8ac28: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* f8ac2b: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8ac30u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f8ac30(); return;
}

void f_f8ac30(void) {
  LOAD_REGS();
L_f8ac30: /* f8ac30: push 0xfa4498 */
  { uint32_t v = 0xfa4498u; esp -= 4; W32(esp, v); }
/* f8ac35: push 0xfb9a14 */
  { uint32_t v = 0xfb9a14u; esp -= 4; W32(esp, v); }
/* f8ac3a: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf8ac40u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f8ac40: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8ac43: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8ac45: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8ac47: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8ac4cu); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
/* f8ac4c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8ac4f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8ac50: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8ac51: xor eax, eax */
  eax = 0;
/* f8ac53: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8ac5a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8ac5b: mov esp, ebp */
  esp = ebp;
/* f8ac5d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8ac5e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f8aca0(void) {
  LOAD_REGS();
L_f8aca0: /* f8aca0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f8aca1: mov ebp, esp */
  ebp = esp;
/* f8aca3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f8aca5: push 0xf9a300 */
  { uint32_t v = 0xf9a300u; esp -= 4; W32(esp, v); }
/* f8acaa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8acb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8acb1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f8acb8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8acbb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8acbc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f8acbd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8acbe: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* f8acc1: cmp byte ptr [edi], 9 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi))); uint8_t b = (uint8_t)(0x9u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f8acc4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f8acc7: mov esi, ecx */
  esi = ecx;
/* f8acc9: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f8acd0: jne 0xf8ad1c */
  if (!zf) goto L_f8ad1c;
L_f8acd2: /* f8acd2: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* f8acd5: mov ecx, dword ptr [eax + 0xb8] */
  ecx = R32((uint32_t)(eax + 0xb8u));
/* f8acdb: test cl, 4 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8acde: je 0xf8ad1c */
  if (zf) goto L_f8ad1c;
L_f8ace0: /* f8ace0: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* f8ace3: mov al, byte ptr [edx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* f8ace5: cmp al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f8ace7: je 0xf8aced */
  if (zf) goto L_f8aced;
L_f8ace9: /* f8ace9: cmp al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f8aceb: jne 0xf8ad1c */
  if (!zf) goto L_f8ad1c;
L_f8aced: /* f8aced: test cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8acf0: mov ecx, esi */
  ecx = esi;
/* f8acf2: je 0xf8ad15 */
  if (zf) goto L_f8ad15;
L_f8acf4: /* f8acf4: call 0xf7187a */
  esp -= 4; W32(esp, 0xf8acf9u); SPILL(); f_f7187a(); if (g_unwind) return; RELOAD();
L_f8acf9: /* f8acf9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8acfb: je 0xf8ad1c */
  if (zf) goto L_f8ad1c;
L_f8acfd: /* f8acfd: mov eax, 1 */
  eax = 0x1u;
/* f8ad02: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8ad05: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8ad0c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8ad0d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8ad0e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8ad0f: mov esp, ebp */
  esp = ebp;
/* f8ad11: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8ad12: ret 0xc */
  esp += 16; SPILL(); return;
L_f8ad15: /* f8ad15: call 0xf715e1 */
  esp -= 4; W32(esp, 0xf8ad1au); SPILL(); f_f715e1(); if (g_unwind) return; RELOAD();
/* f8ad1a: jmp 0xf8acf9 */
  goto L_f8acf9;
L_f8ad1c: /* f8ad1c: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* f8ad1f: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* f8ad22: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8ad23: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8ad24: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8ad25: mov ecx, esi */
  ecx = esi;
/* f8ad27: call 0xf719b5 */
  esp -= 4; W32(esp, 0xf8ad2cu); SPILL(); f_f719b5(); if (g_unwind) return; RELOAD();
/* f8ad2c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8ad2f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8ad30: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8ad31: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8ad38: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8ad39: mov esp, ebp */
  esp = ebp;
/* f8ad3b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8ad3c: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_f8ad3f(void) {
  LOAD_REGS();
L_f8ad3f: /* f8ad3f: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8ad42: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f8ad47: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* f8ad4a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8ad4b: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* f8ad4e: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8ad53u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f8ad53(); return;
}

void f_f8ad53(void) {
  LOAD_REGS();
L_f8ad53: /* f8ad53: push 0xfa44d4 */
  { uint32_t v = 0xfa44d4u; esp -= 4; W32(esp, v); }
/* f8ad58: push 0xfb9a24 */
  { uint32_t v = 0xfb9a24u; esp -= 4; W32(esp, v); }
/* f8ad5d: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf8ad63u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f8ad63: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8ad66: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8ad68: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8ad6a: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8ad6fu); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f8ad6f: guest_badaddr(0xf8ad6f); return;
}

void f_f8adb0(void) {
  LOAD_REGS();
L_f8adb0: /* f8adb0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f8adb1: mov ebp, esp */
  ebp = esp;
/* f8adb3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f8adb5: push 0xf9a310 */
  { uint32_t v = 0xf9a310u; esp -= 4; W32(esp, v); }
/* f8adba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8adc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8adc1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f8adc8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8adcb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8adcc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f8adcd: mov esi, ecx */
  esi = ecx;
/* f8adcf: cmp byte ptr [esi + 0x30], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x30u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f8add3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8add4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f8add7: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f8adde: jne 0xf8ae45 */
  if (!zf) goto L_f8ae45;
L_f8ade0: /* f8ade0: mov ecx, dword ptr [esi + 0x1b4] */
  ecx = R32((uint32_t)(esi + 0x1b4u));
/* f8ade6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8ade8: je 0xf8ae45 */
  if (zf) goto L_f8ae45;
L_f8adea: /* f8adea: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* f8adec: call dword ptr [eax + 0x30] */
  { uint32_t t = R32((uint32_t)(eax + 0x30u)); esp -= 4; W32(esp, 0xf8adefu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8adef: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8adf1: jne 0xf8ae45 */
  if (!zf) goto L_f8ae45;
L_f8adf3: /* f8adf3: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* f8adf6: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* f8adf9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8adfa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8adfb: mov ecx, esi */
  ecx = esi;
/* f8adfd: call 0xf7227f */
  esp -= 4; W32(esp, 0xf8ae02u); SPILL(); f_f7227f(); if (g_unwind) return; RELOAD();
/* f8ae02: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8ae05: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8ae0c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8ae0d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8ae0e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8ae0f: mov esp, ebp */
  esp = ebp;
/* f8ae11: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8ae12: ret 8 */
  esp += 12; SPILL(); return;
L_f8ae45: /* f8ae45: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8ae48: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8ae49: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8ae4a: xor eax, eax */
  eax = 0;
/* f8ae4c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8ae53: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8ae54: mov esp, ebp */
  esp = ebp;
/* f8ae56: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8ae57: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f8ae15(void) {
  LOAD_REGS();
L_f8ae15: /* f8ae15: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8ae18: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f8ae1d: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* f8ae20: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8ae21: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* f8ae24: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8ae29u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f8ae29(); return;
}

void f_f8ae29(void) {
  LOAD_REGS();
L_f8ae29: /* f8ae29: push 0xfa451c */
  { uint32_t v = 0xfa451cu; esp -= 4; W32(esp, v); }
/* f8ae2e: push 0xfb9a3c */
  { uint32_t v = 0xfb9a3cu; esp -= 4; W32(esp, v); }
/* f8ae33: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf8ae39u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f8ae39: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8ae3c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8ae3e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8ae40: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8ae45u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
/* f8ae45: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8ae48: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8ae49: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8ae4a: xor eax, eax */
  eax = 0;
/* f8ae4c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8ae53: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8ae54: mov esp, ebp */
  esp = ebp;
/* f8ae56: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8ae57: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f8ae90(void) {
  LOAD_REGS();
L_f8ae90: /* f8ae90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f8ae91: mov ebp, esp */
  ebp = esp;
/* f8ae93: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f8ae95: push 0xf9a320 */
  { uint32_t v = 0xf9a320u; esp -= 4; W32(esp, v); }
/* f8ae9a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8aea0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8aea1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f8aea8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8aeab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8aeac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f8aead: mov esi, ecx */
  esi = ecx;
/* f8aeaf: mov ecx, dword ptr [esi + 0x1ac] */
  ecx = R32((uint32_t)(esi + 0x1acu));
/* f8aeb5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8aeb7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8aeb8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f8aebb: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f8aec2: je 0xf8af27 */
  if (zf) goto L_f8af27;
L_f8aec4: /* f8aec4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* f8aec6: call dword ptr [eax + 0x30] */
  { uint32_t t = R32((uint32_t)(eax + 0x30u)); esp -= 4; W32(esp, 0xf8aec9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8aec9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8aecb: jne 0xf8af27 */
  if (!zf) goto L_f8af27;
L_f8aecd: /* f8aecd: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* f8aed0: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* f8aed3: lea ecx, [ebp + 0x14] */
  ecx = (uint32_t)(ebp + 0x14u);
/* f8aed6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8aed7: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f8aeda: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8aedb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8aedc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8aedd: mov ecx, esi */
  ecx = esi;
/* f8aedf: call 0xf72072 */
  esp -= 4; W32(esp, 0xf8aee4u); SPILL(); f_f72072(); if (g_unwind) return; RELOAD();
/* f8aee4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8aee7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8aeee: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8aeef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8aef0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8aef1: mov esp, ebp */
  esp = ebp;
/* f8aef3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8aef4: ret 0x10 */
  esp += 20; SPILL(); return;
L_f8af27: /* f8af27: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8af2a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8af2b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8af2c: xor eax, eax */
  eax = 0;
/* f8af2e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8af35: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8af36: mov esp, ebp */
  esp = ebp;
/* f8af38: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8af39: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_f8aef7(void) {
  LOAD_REGS();
L_f8aef7: /* f8aef7: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8aefa: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f8aeff: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* f8af02: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8af03: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* f8af06: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8af0bu); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f8af0b(); return;
}

void f_f8af0b(void) {
  LOAD_REGS();
L_f8af0b: /* f8af0b: push 0xfa4568 */
  { uint32_t v = 0xfa4568u; esp -= 4; W32(esp, v); }
/* f8af10: push 0xfb9a44 */
  { uint32_t v = 0xfb9a44u; esp -= 4; W32(esp, v); }
/* f8af15: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf8af1bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f8af1b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8af1e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8af20: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8af22: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8af27u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
/* f8af27: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8af2a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8af2b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8af2c: xor eax, eax */
  eax = 0;
/* f8af2e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8af35: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8af36: mov esp, ebp */
  esp = ebp;
/* f8af38: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8af39: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_f8af70(void) {
  LOAD_REGS();
L_f8af70: /* f8af70: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* f8af74: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f8af76: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* f8af7a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8af7c: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* f8af80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8af81: lea eax, [ecx + 0x15c] */
  eax = (uint32_t)(ecx + 0x15cu);
/* f8af87: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8af88: mov eax, dword ptr [0xfba450] */
  eax = R32((uint32_t)(0xfba450u));
/* f8af8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8af8e: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0xf8af91u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8af91: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f8afb0(void) {
  LOAD_REGS();
L_f8afb0: /* f8afb0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f8afb1: mov ebp, esp */
  ebp = esp;
/* f8afb3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f8afb5: push 0xf9a330 */
  { uint32_t v = 0xf9a330u; esp -= 4; W32(esp, v); }
/* f8afba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8afc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8afc1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f8afc8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8afcb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8afcc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f8afcd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8afce: mov edi, ecx */
  edi = ecx;
/* f8afd0: mov al, byte ptr [edi + 0x58] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x58u))) & 0xffu);
/* f8afd3: xor esi, esi */
  esi = 0;
/* f8afd5: test al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8afd7: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f8afda: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* f8afdd: jne 0xf8aff4 */
  if (!zf) goto L_f8aff4;
L_f8afdf: /* f8afdf: xor eax, eax */
  eax = 0;
/* f8afe1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8afe4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8afeb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8afec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8afed: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8afee: mov esp, ebp */
  esp = ebp;
/* f8aff0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8aff1: ret 8 */
  esp += 12; SPILL(); return;
L_f8aff4: /* f8aff4: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
L_f8aff7: /* f8aff7: cmp esi, dword ptr [edi + 0x1d0] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x1d0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f8affd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8affe: jge 0xf8b031 */
  if ((sf == of)) goto L_f8b031;
L_f8b000: /* f8b000: mov eax, dword ptr [edi + 0x1cc] */
  eax = R32((uint32_t)(edi + 0x1ccu));
/* f8b006: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* f8b009: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f8b00c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f8b00e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8b00f: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0xf8b012u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8b012: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8b014: je 0xf8b02e */
  if (zf) goto L_f8b02e;
L_f8b016: /* f8b016: mov eax, 1 */
  eax = 0x1u;
/* f8b01b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8b01e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8b025: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8b026: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8b027: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8b028: mov esp, ebp */
  esp = ebp;
/* f8b02a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8b02b: ret 8 */
  esp += 12; SPILL(); return;
L_f8b02e: /* f8b02e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* f8b02f: jmp 0xf8aff7 */
  goto L_f8aff7;
L_f8b031: /* f8b031: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f8b034: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8b035: mov ecx, edi */
  ecx = edi;
/* f8b037: call 0xf712e4 */
  esp -= 4; W32(esp, 0xf8b03cu); SPILL(); f_f712e4(); if (g_unwind) return; RELOAD();
/* f8b03c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8b03f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8b040: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8b041: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8b048: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8b049: mov esp, ebp */
  esp = ebp;
/* f8b04b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8b04c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f8b04f(void) {
  LOAD_REGS();
L_f8b04f: /* f8b04f: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8b052: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f8b057: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* f8b05a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8b05b: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* f8b05e: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8b063u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f8b063(); return;
}

void f_f8b063(void) {
  LOAD_REGS();
L_f8b063: /* f8b063: push 0xfa45b0 */
  { uint32_t v = 0xfa45b0u; esp -= 4; W32(esp, v); }
/* f8b068: push 0xfb9a8c */
  { uint32_t v = 0xfb9a8cu; esp -= 4; W32(esp, v); }
/* f8b06d: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf8b073u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f8b073: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8b076: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8b078: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8b07a: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8b07fu); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f8b07f: guest_badaddr(0xf8b07f); return;
}

void f_f8b0c0(void) {
  LOAD_REGS();
L_f8b0c0: /* f8b0c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f8b0c1: mov ebp, esp */
  ebp = esp;
/* f8b0c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f8b0c5: push 0xf9a340 */
  { uint32_t v = 0xf9a340u; esp -= 4; W32(esp, v); }
/* f8b0ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8b0d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8b0d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f8b0d8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8b0db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8b0dc: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* f8b0df: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f8b0e0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8b0e1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f8b0e4: xor esi, esi */
  esi = 0;
/* f8b0e6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8b0e7: mov edi, ecx */
  edi = ecx;
/* f8b0e9: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* f8b0ec: call 0xf711fe */
  esp -= 4; W32(esp, 0xf8b0f1u); SPILL(); f_f711fe(); if (g_unwind) return; RELOAD();
L_f8b0f1: /* f8b0f1: cmp esi, dword ptr [edi + 0x1d0] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x1d0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f8b0f7: jge 0xf8b13f */
  if ((sf == of)) goto L_f8b13f;
L_f8b0f9: /* f8b0f9: mov eax, dword ptr [edi + 0x1cc] */
  eax = R32((uint32_t)(edi + 0x1ccu));
/* f8b0ff: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* f8b102: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8b104: je 0xf8b10c */
  if (zf) goto L_f8b10c;
L_f8b106: /* f8b106: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f8b108: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8b109: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0xf8b10cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f8b10c: /* f8b10c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* f8b10d: jmp 0xf8b0f1 */
  goto L_f8b0f1;
L_f8b13f: /* f8b13f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8b142: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8b143: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8b144: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8b14b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8b14c: mov esp, ebp */
  esp = ebp;
/* f8b14e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8b14f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f8b10f(void) {
  LOAD_REGS();
L_f8b10f: /* f8b10f: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8b112: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f8b117: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* f8b11a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8b11b: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* f8b11e: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8b123u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f8b123(); return;
}

void f_f8b123(void) {
  LOAD_REGS();
L_f8b123: /* f8b123: push 0xfa4604 */
  { uint32_t v = 0xfa4604u; esp -= 4; W32(esp, v); }
/* f8b128: push 0xfb9a94 */
  { uint32_t v = 0xfb9a94u; esp -= 4; W32(esp, v); }
/* f8b12d: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf8b133u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f8b133: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8b136: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8b138: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8b13a: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8b13fu); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
/* f8b13f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8b142: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8b143: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8b144: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8b14b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8b14c: mov esp, ebp */
  esp = ebp;
/* f8b14e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8b14f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f8b190(void) {
  LOAD_REGS();
L_f8b190: /* f8b190: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f8b191: mov ebp, esp */
  ebp = esp;
/* f8b193: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f8b195: push 0xf9a350 */
  { uint32_t v = 0xf9a350u; esp -= 4; W32(esp, v); }
/* f8b19a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8b1a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8b1a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f8b1a8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8b1ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8b1ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f8b1ad: mov esi, ecx */
  esi = ecx;
/* f8b1af: mov al, byte ptr [esi + 0x58] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x58u))) & 0xffu);
/* f8b1b2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8b1b3: xor edi, edi */
  edi = 0;
/* f8b1b5: test al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8b1b7: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f8b1ba: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* f8b1bd: je 0xf8b26f */
  if (zf) goto L_f8b26f;
L_f8b1c3: /* f8b1c3: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* f8b1c6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8b1c7: call 0xf716a9 */
  esp -= 4; W32(esp, 0xf8b1ccu); SPILL(); f_f716a9(); if (g_unwind) return; RELOAD();
/* f8b1cc: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* f8b1cf: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
L_f8b1d2: /* f8b1d2: cmp edi, dword ptr [esi + 0x1d0] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1d0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f8b1d8: jge 0xf8b228 */
  if ((sf == of)) goto L_f8b228;
L_f8b1da: /* f8b1da: mov eax, dword ptr [esi + 0x1cc] */
  eax = R32((uint32_t)(esi + 0x1ccu));
/* f8b1e0: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* f8b1e3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8b1e5: je 0xf8b222 */
  if (zf) goto L_f8b222;
L_f8b1e7: /* f8b1e7: cmp ecx, dword ptr [esi + 0x1e4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1e4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f8b1ed: jne 0xf8b1f8 */
  if (!zf) goto L_f8b1f8;
L_f8b1ef: /* f8b1ef: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* f8b1f2: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f8b1f5: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* f8b1f6: jmp 0xf8b1d2 */
  goto L_f8b1d2;
L_f8b1f8: /* f8b1f8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f8b1fa: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8b1fb: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0xf8b201u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8b201: mov eax, dword ptr [esi + 0x1cc] */
  eax = R32((uint32_t)(esi + 0x1ccu));
/* f8b207: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* f8b20a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f8b20c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8b20d: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0xf8b210u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8b210: mov eax, dword ptr [esi + 0x1cc] */
  eax = R32((uint32_t)(esi + 0x1ccu));
/* f8b216: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* f8b219: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f8b21b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8b21c: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0xf8b222u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f8b222: /* f8b222: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f8b225: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* f8b226: jmp 0xf8b1d2 */
  goto L_f8b1d2;
L_f8b228: /* f8b228: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f8b22b: je 0xf8b26f */
  if (zf) goto L_f8b26f;
L_f8b22d: /* f8b22d: cmp eax, dword ptr [esi + 0x1d0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1d0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f8b233: jge 0xf8b26f */
  if ((sf == of)) goto L_f8b26f;
L_f8b235: /* f8b235: mov ecx, dword ptr [esi + 0x1cc] */
  ecx = R32((uint32_t)(esi + 0x1ccu));
/* f8b23b: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* f8b23e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8b240: je 0xf8b26f */
  if (zf) goto L_f8b26f;
L_f8b242: /* f8b242: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f8b244: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8b245: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0xf8b24bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8b24b: mov eax, dword ptr [esi + 0x1cc] */
  eax = R32((uint32_t)(esi + 0x1ccu));
/* f8b251: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* f8b254: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* f8b257: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f8b259: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8b25a: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0xf8b25du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8b25d: mov eax, dword ptr [esi + 0x1cc] */
  eax = R32((uint32_t)(esi + 0x1ccu));
/* f8b263: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* f8b266: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f8b268: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8b269: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0xf8b26fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f8b26f: /* f8b26f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8b272: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8b273: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8b274: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8b27b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8b27c: mov esp, ebp */
  esp = ebp;
/* f8b27e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8b27f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f8b282(void) {
  LOAD_REGS();
L_f8b282: /* f8b282: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8b285: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f8b28a: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* f8b28d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8b28e: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* f8b291: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8b296u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f8b296(); return;
}

void f_f8b296(void) {
  LOAD_REGS();
L_f8b296: /* f8b296: push 0xfa4644 */
  { uint32_t v = 0xfa4644u; esp -= 4; W32(esp, v); }
/* f8b29b: push 0xfb9a9c */
  { uint32_t v = 0xfb9a9cu; esp -= 4; W32(esp, v); }
/* f8b2a0: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf8b2a6u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f8b2a6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8b2a9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8b2ab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8b2ad: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8b2b2u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f8b2b2: guest_badaddr(0xf8b2b2); return;
}

void f_f8b310(void) {
  LOAD_REGS();
L_f8b310: /* f8b310: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f8b311: mov ebp, esp */
  ebp = esp;
/* f8b313: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f8b315: push 0xf9a360 */
  { uint32_t v = 0xf9a360u; esp -= 4; W32(esp, v); }
/* f8b31a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8b320: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8b321: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f8b328: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8b32b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8b32c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f8b32d: mov esi, ecx */
  esi = ecx;
/* f8b32f: mov ecx, dword ptr [esi + 0x1e4] */
  ecx = R32((uint32_t)(esi + 0x1e4u));
/* f8b335: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8b337: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8b338: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f8b33b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f8b342: je 0xf8b374 */
  if (zf) goto L_f8b374;
L_f8b344: /* f8b344: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* f8b347: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* f8b349: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8b34a: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* f8b34d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8b34e: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* f8b351: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8b352: call dword ptr [eax + 0xa8] */
  { uint32_t t = R32((uint32_t)(eax + 0xa8u)); esp -= 4; W32(esp, 0xf8b358u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8b358: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8b35a: je 0xf8b374 */
  if (zf) goto L_f8b374;
L_f8b35c: /* f8b35c: mov eax, 1 */
  eax = 0x1u;
/* f8b361: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8b364: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8b36b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8b36c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8b36d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8b36e: mov esp, ebp */
  esp = ebp;
/* f8b370: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8b371: ret 0xc */
  esp += 16; SPILL(); return;
L_f8b374: /* f8b374: cmp byte ptr [esi + 0x30], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x30u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f8b378: jne 0xf8b3d0 */
  if (!zf) goto L_f8b3d0;
L_f8b37a: /* f8b37a: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* f8b37d: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* f8b380: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* f8b383: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8b384: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8b385: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8b386: mov ecx, esi */
  ecx = esi;
/* f8b388: call 0xf7184d */
  esp -= 4; W32(esp, 0xf8b38du); SPILL(); f_f7184d(); if (g_unwind) return; RELOAD();
/* f8b38d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8b390: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8b397: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8b398: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8b399: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8b39a: mov esp, ebp */
  esp = ebp;
/* f8b39c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8b39d: ret 0xc */
  esp += 16; SPILL(); return;
L_f8b3d0: /* f8b3d0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8b3d3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8b3d4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8b3d5: xor eax, eax */
  eax = 0;
/* f8b3d7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8b3de: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8b3df: mov esp, ebp */
  esp = ebp;
/* f8b3e1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8b3e2: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_f8b3a0(void) {
  LOAD_REGS();
L_f8b3a0: /* f8b3a0: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8b3a3: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f8b3a8: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* f8b3ab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8b3ac: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* f8b3af: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8b3b4u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f8b3b4(); return;
}

void f_f8b3b4(void) {
  LOAD_REGS();
L_f8b3b4: /* f8b3b4: push 0xfa4680 */
  { uint32_t v = 0xfa4680u; esp -= 4; W32(esp, v); }
/* f8b3b9: push 0xfb9aa4 */
  { uint32_t v = 0xfb9aa4u; esp -= 4; W32(esp, v); }
/* f8b3be: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf8b3c4u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f8b3c4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8b3c7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8b3c9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8b3cb: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8b3d0u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
/* f8b3d0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8b3d3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8b3d4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8b3d5: xor eax, eax */
  eax = 0;
/* f8b3d7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8b3de: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8b3df: mov esp, ebp */
  esp = ebp;
/* f8b3e1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8b3e2: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_f8b430(void) {
  LOAD_REGS();
L_f8b430: /* f8b430: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f8b431: mov ebp, esp */
  ebp = esp;
/* f8b433: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f8b435: push 0xf9a370 */
  { uint32_t v = 0xf9a370u; esp -= 4; W32(esp, v); }
/* f8b43a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8b440: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8b441: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f8b448: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8b44b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f8b44e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8b44f: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* f8b452: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f8b453: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8b454: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f8b457: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8b458: xor edi, edi */
  edi = 0;
/* f8b45a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8b45b: mov esi, ecx */
  esi = ecx;
/* f8b45d: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* f8b460: call 0xf71f23 */
  esp -= 4; W32(esp, 0xf8b465u); SPILL(); f_f71f23(); if (g_unwind) return; RELOAD();
/* f8b465: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f8b467: jne 0xf8b4db */
  if (!zf) goto L_f8b4db;
L_f8b469: /* f8b469: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_f8b470: /* f8b470: cmp edi, dword ptr [esi + 0x1d0] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1d0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f8b476: jge 0xf8b495 */
  if ((sf == of)) goto L_f8b495;
L_f8b478: /* f8b478: mov ecx, dword ptr [esi + 0x1cc] */
  ecx = R32((uint32_t)(esi + 0x1ccu));
/* f8b47e: mov ecx, dword ptr [ecx + edi*4] */
  ecx = R32((uint32_t)(ecx + edi*4));
/* f8b481: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f8b484: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f8b486: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8b487: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8b488: call dword ptr [edx + 0xbc] */
  { uint32_t t = R32((uint32_t)(edx + 0xbcu)); esp -= 4; W32(esp, 0xf8b48eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8b48e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8b490: jne 0xf8b4db */
  if (!zf) goto L_f8b4db;
L_f8b492: /* f8b492: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* f8b493: jmp 0xf8b470 */
  goto L_f8b470;
L_f8b495: /* f8b495: mov esi, dword ptr [esi + 0x1e4] */
  esi = R32((uint32_t)(esi + 0x1e4u));
/* f8b49b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8b49d: je 0xf8b4f3 */
  if (zf) goto L_f8b4f3;
L_f8b49f: /* f8b49f: sub bl, 0xc */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0xcu);
  uint8_t r = (uint8_t)(a - b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* f8b4a2: cmp bl, 4 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* f8b4a5: jae 0xf8b4f3 */
  if (!cf) goto L_f8b4f3;
L_f8b4a7: /* f8b4a7: movzx ecx, bl */
  ecx = (uint32_t)((ebx & 0xffu));
/* f8b4aa: mov esi, dword ptr [esi + ecx*4 + 0xfc] */
  esi = R32((uint32_t)(esi + ecx*4 + 0xfcu));
/* f8b4b1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8b4b3: je 0xf8b4f3 */
  if (zf) goto L_f8b4f3;
L_f8b4b5: /* f8b4b5: mov edx, dword ptr [0xfba360] */
  edx = R32((uint32_t)(0xfba360u));
/* f8b4bb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8b4bd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8b4be: mov ecx, esi */
  ecx = esi;
/* f8b4c0: mov dword ptr [ebp + 8], 0 */
  W32((uint32_t)(ebp + 0x8u), 0x0u);
/* f8b4c7: call dword ptr [0xfce334] */
  esp -= 4; W32(esp, 0xf8b4cdu); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* f8b4cd: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8b4cf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8b4d1: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* f8b4d4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8b4d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8b4d6: mov ecx, esi */
  ecx = esi;
/* f8b4d8: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0xf8b4dbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f8b4db: /* f8b4db: mov eax, 1 */
  eax = 0x1u;
/* f8b4e0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8b4e3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8b4ea: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8b4eb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8b4ec: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8b4ed: mov esp, ebp */
  esp = ebp;
/* f8b4ef: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8b4f0: ret 8 */
  esp += 12; SPILL(); return;
L_f8b4f3: /* f8b4f3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8b4f6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8b4f7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8b4f8: xor eax, eax */
  eax = 0;
/* f8b4fa: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8b501: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8b502: mov esp, ebp */
  esp = ebp;
/* f8b504: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8b505: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f8b508(void) {
  LOAD_REGS();
L_f8b508: /* f8b508: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8b50b: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f8b510: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* f8b513: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8b514: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* f8b517: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8b51cu); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f8b51c(); return;
}

void f_f8b51c(void) {
  LOAD_REGS();
L_f8b51c: /* f8b51c: push 0xfa46d8 */
  { uint32_t v = 0xfa46d8u; esp -= 4; W32(esp, v); }
/* f8b521: push 0xfb9ab4 */
  { uint32_t v = 0xfb9ab4u; esp -= 4; W32(esp, v); }
/* f8b526: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf8b52cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f8b52c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8b52f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8b531: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8b533: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8b538u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f8b538: guest_badaddr(0xf8b538); return;
}

void f_f8b590(void) {
  LOAD_REGS();
L_f8b590: /* f8b590: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f8b591: mov ebp, esp */
  ebp = esp;
/* f8b593: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f8b595: push 0xf9a380 */
  { uint32_t v = 0xf9a380u; esp -= 4; W32(esp, v); }
/* f8b59a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8b5a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8b5a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f8b5a8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8b5ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8b5ac: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* f8b5af: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f8b5b0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8b5b1: mov edi, ecx */
  edi = ecx;
/* f8b5b3: mov ecx, dword ptr [edi + 0x1e4] */
  ecx = R32((uint32_t)(edi + 0x1e4u));
/* f8b5b9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8b5bb: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f8b5be: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f8b5c5: je 0xf8b5d8 */
  if (zf) goto L_f8b5d8;
L_f8b5c7: /* f8b5c7: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* f8b5ca: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* f8b5cc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8b5cd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8b5ce: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0xf8b5d4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8b5d4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8b5d6: jne 0xf8b61a */
  if (!zf) goto L_f8b61a;
L_f8b5d8: /* f8b5d8: mov esi, dword ptr [edi + 0x1d0] */
  esi = R32((uint32_t)(edi + 0x1d0u));
/* f8b5de: mov edi, edi */
  edi = edi;
L_f8b5e0: /* f8b5e0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f8b5e2: jle 0xf8b60e */
  if ((zf || sf != of)) goto L_f8b60e;
L_f8b5e4: /* f8b5e4: mov eax, dword ptr [edi + 0x1cc] */
  eax = R32((uint32_t)(edi + 0x1ccu));
/* f8b5ea: mov ecx, dword ptr [eax + esi*4 - 4] */
  ecx = R32((uint32_t)(eax + esi*4 + 0xfffffffcu));
/* f8b5ee: test byte ptr [ecx + 0x58], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x58u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8b5f2: je 0xf8b60b */
  if (zf) goto L_f8b60b;
L_f8b5f4: /* f8b5f4: cmp byte ptr [ecx + 0x30], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x30u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f8b5f8: je 0xf8b60b */
  if (zf) goto L_f8b60b;
L_f8b5fa: /* f8b5fa: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f8b5fd: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f8b5ff: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8b600: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8b601: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0xf8b607u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8b607: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8b609: jne 0xf8b61a */
  if (!zf) goto L_f8b61a;
L_f8b60b: /* f8b60b: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* f8b60c: jmp 0xf8b5e0 */
  goto L_f8b5e0;
L_f8b60e: /* f8b60e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f8b611: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8b612: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8b613: mov ecx, edi */
  ecx = edi;
/* f8b615: call 0xf72009 */
  esp -= 4; W32(esp, 0xf8b61au); SPILL(); f_f72009(); if (g_unwind) return; RELOAD();
L_f8b61a: /* f8b61a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8b61d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8b61e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8b61f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8b626: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8b627: mov esp, ebp */
  esp = ebp;
/* f8b629: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8b62a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f8b62d(void) {
  LOAD_REGS();
L_f8b62d: /* f8b62d: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8b630: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f8b635: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* f8b638: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8b639: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* f8b63c: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8b641u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f8b641(); return;
}

void f_f8b641(void) {
  LOAD_REGS();
L_f8b641: /* f8b641: push 0xfa4730 */
  { uint32_t v = 0xfa4730u; esp -= 4; W32(esp, v); }
/* f8b646: push 0xfb9abc */
  { uint32_t v = 0xfb9abcu; esp -= 4; W32(esp, v); }
/* f8b64b: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf8b651u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f8b651: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8b654: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8b656: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8b658: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8b65du); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f8b65d: guest_badaddr(0xf8b65d); return;
}

void f_f8b6a0(void) {
  LOAD_REGS();
L_f8b6a0: /* f8b6a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f8b6a1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8b6a2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* f8b6a6: mov esi, ecx */
  esi = ecx;
/* f8b6a8: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8b6aa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8b6ac: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* f8b6b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8b6b1: mov ecx, dword ptr [0xfba450] */
  ecx = R32((uint32_t)(0xfba450u));
/* f8b6b7: lea edx, [esi + 0x15c] */
  edx = (uint32_t)(esi + 0x15cu);
/* f8b6bd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8b6be: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8b6bf: mov ecx, esi */
  ecx = esi;
/* f8b6c1: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* f8b6c5: call dword ptr [eax + 0x14] */
  { uint32_t t = R32((uint32_t)(eax + 0x14u)); esp -= 4; W32(esp, 0xf8b6c8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8b6c8: mov ecx, dword ptr [esi + 0x1e4] */
  ecx = R32((uint32_t)(esi + 0x1e4u));
/* f8b6ce: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8b6d0: je 0xf8b6db */
  if (zf) goto L_f8b6db;
L_f8b6d2: /* f8b6d2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f8b6d4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8b6d5: call dword ptr [edx + 0xb8] */
  { uint32_t t = R32((uint32_t)(edx + 0xb8u)); esp -= 4; W32(esp, 0xf8b6dbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f8b6db: /* f8b6db: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8b6dc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8b6dd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f8b6f0(void) {
  LOAD_REGS();
L_f8b6f0: /* f8b6f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f8b6f1: mov ebp, esp */
  ebp = esp;
/* f8b6f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f8b6f5: push 0xf9a390 */
  { uint32_t v = 0xf9a390u; esp -= 4; W32(esp, v); }
/* f8b6fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8b700: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8b701: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f8b708: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8b70b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8b70c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f8b70d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8b70e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f8b711: mov edi, ecx */
  edi = ecx;
/* f8b713: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f8b71a: call 0xf71f69 */
  esp -= 4; W32(esp, 0xf8b71fu); SPILL(); f_f71f69(); if (g_unwind) return; RELOAD();
/* f8b71f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8b721: je 0xf8b739 */
  if (zf) goto L_f8b739;
L_f8b723: /* f8b723: mov eax, 1 */
  eax = 0x1u;
/* f8b728: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8b72b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8b732: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8b733: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8b734: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8b735: mov esp, ebp */
  esp = ebp;
/* f8b737: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8b738: ret  */
  esp += 4; SPILL(); return;
L_f8b739: /* f8b739: xor esi, esi */
  esi = 0;
/* f8b73b: jmp 0xf8b740 */
  goto L_f8b740;
L_f8b740: /* f8b740: cmp esi, dword ptr [edi + 0x1d0] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x1d0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f8b746: jge 0xf8b764 */
  if ((sf == of)) goto L_f8b764;
L_f8b748: /* f8b748: mov eax, dword ptr [edi + 0x1cc] */
  eax = R32((uint32_t)(edi + 0x1ccu));
/* f8b74e: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* f8b751: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8b753: je 0xf8b761 */
  if (zf) goto L_f8b761;
L_f8b755: /* f8b755: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f8b757: call dword ptr [edx + 0xb4] */
  { uint32_t t = R32((uint32_t)(edx + 0xb4u)); esp -= 4; W32(esp, 0xf8b75du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8b75d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8b75f: jne 0xf8b723 */
  if (!zf) goto L_f8b723;
L_f8b761: /* f8b761: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* f8b762: jmp 0xf8b740 */
  goto L_f8b740;
L_f8b764: /* f8b764: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8b767: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8b768: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8b769: xor eax, eax */
  eax = 0;
/* f8b76b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8b772: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8b773: mov esp, ebp */
  esp = ebp;
/* f8b775: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8b776: ret  */
  esp += 4; SPILL(); return;
}

void f_f8b739(void) {
  LOAD_REGS();
  goto L_f8b739;
L_f8b723: /* f8b723: mov eax, 1 */
  eax = 0x1u;
/* f8b728: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8b72b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8b732: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8b733: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8b734: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8b735: mov esp, ebp */
  esp = ebp;
/* f8b737: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8b738: ret  */
  esp += 4; SPILL(); return;
L_f8b739: /* f8b739: xor esi, esi */
  esi = 0;
/* f8b73b: jmp 0xf8b740 */
  goto L_f8b740;
L_f8b740: /* f8b740: cmp esi, dword ptr [edi + 0x1d0] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x1d0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f8b746: jge 0xf8b764 */
  if ((sf == of)) goto L_f8b764;
L_f8b748: /* f8b748: mov eax, dword ptr [edi + 0x1cc] */
  eax = R32((uint32_t)(edi + 0x1ccu));
/* f8b74e: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* f8b751: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8b753: je 0xf8b761 */
  if (zf) goto L_f8b761;
L_f8b755: /* f8b755: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f8b757: call dword ptr [edx + 0xb4] */
  { uint32_t t = R32((uint32_t)(edx + 0xb4u)); esp -= 4; W32(esp, 0xf8b75du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8b75d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8b75f: jne 0xf8b723 */
  if (!zf) goto L_f8b723;
L_f8b761: /* f8b761: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* f8b762: jmp 0xf8b740 */
  goto L_f8b740;
L_f8b764: /* f8b764: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8b767: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8b768: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8b769: xor eax, eax */
  eax = 0;
/* f8b76b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8b772: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8b773: mov esp, ebp */
  esp = ebp;
/* f8b775: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8b776: ret  */
  esp += 4; SPILL(); return;
}

void f_f8b73d(void) {
  LOAD_REGS();
  goto L_f8b73d;
L_f8b723: /* f8b723: mov eax, 1 */
  eax = 0x1u;
/* f8b728: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8b72b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8b732: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8b733: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8b734: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8b735: mov esp, ebp */
  esp = ebp;
/* f8b737: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8b738: ret  */
  esp += 4; SPILL(); return;
L_f8b73d: /* f8b73d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_f8b740: /* f8b740: cmp esi, dword ptr [edi + 0x1d0] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x1d0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f8b746: jge 0xf8b764 */
  if ((sf == of)) goto L_f8b764;
L_f8b748: /* f8b748: mov eax, dword ptr [edi + 0x1cc] */
  eax = R32((uint32_t)(edi + 0x1ccu));
/* f8b74e: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* f8b751: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8b753: je 0xf8b761 */
  if (zf) goto L_f8b761;
L_f8b755: /* f8b755: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f8b757: call dword ptr [edx + 0xb4] */
  { uint32_t t = R32((uint32_t)(edx + 0xb4u)); esp -= 4; W32(esp, 0xf8b75du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8b75d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8b75f: jne 0xf8b723 */
  if (!zf) goto L_f8b723;
L_f8b761: /* f8b761: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* f8b762: jmp 0xf8b740 */
  goto L_f8b740;
L_f8b764: /* f8b764: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8b767: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8b768: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8b769: xor eax, eax */
  eax = 0;
/* f8b76b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8b772: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8b773: mov esp, ebp */
  esp = ebp;
/* f8b775: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8b776: ret  */
  esp += 4; SPILL(); return;
}

void f_f8b777(void) {
  LOAD_REGS();
L_f8b777: /* f8b777: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8b77a: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f8b77f: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* f8b782: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8b783: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* f8b786: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8b78bu); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f8b78b(); return;
}

void f_f8b78b(void) {
  LOAD_REGS();
L_f8b78b: /* f8b78b: push 0xfa477c */
  { uint32_t v = 0xfa477cu; esp -= 4; W32(esp, v); }
/* f8b790: push 0xfb9ac4 */
  { uint32_t v = 0xfb9ac4u; esp -= 4; W32(esp, v); }
/* f8b795: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf8b79bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f8b79b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8b79e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8b7a0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8b7a2: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8b7a7u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f8b7a7: guest_badaddr(0xf8b7a7); return;
}

void f_f8b7e0(void) {
  LOAD_REGS();
L_f8b7e0: /* f8b7e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f8b7e1: mov ebp, esp */
  ebp = esp;
/* f8b7e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f8b7e5: push 0xf9a3a0 */
  { uint32_t v = 0xf9a3a0u; esp -= 4; W32(esp, v); }
/* f8b7ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8b7f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8b7f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f8b7f8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8b7fb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8b7fc: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* f8b7ff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f8b800: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8b801: mov edi, ecx */
  edi = ecx;
/* f8b803: mov ecx, dword ptr [edi + 0x1e4] */
  ecx = R32((uint32_t)(edi + 0x1e4u));
/* f8b809: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8b80b: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f8b80e: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f8b815: je 0xf8b824 */
  if (zf) goto L_f8b824;
L_f8b817: /* f8b817: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* f8b819: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8b81a: call dword ptr [eax + 0x98] */
  { uint32_t t = R32((uint32_t)(eax + 0x98u)); esp -= 4; W32(esp, 0xf8b820u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8b820: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8b822: jne 0xf8b852 */
  if (!zf) goto L_f8b852;
L_f8b824: /* f8b824: mov eax, dword ptr [edi + 0x1d0] */
  eax = R32((uint32_t)(edi + 0x1d0u));
/* f8b82a: lea esi, [eax - 1] */
  esi = (uint32_t)(eax + 0xffffffffu);
/* f8b82d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_f8b830: /* f8b830: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f8b832: jl 0xf8b89d */
  if ((sf != of)) goto L_f8b89d;
L_f8b834: /* f8b834: mov ecx, dword ptr [edi + 0x1cc] */
  ecx = R32((uint32_t)(edi + 0x1ccu));
/* f8b83a: mov ecx, dword ptr [ecx + esi*4] */
  ecx = R32((uint32_t)(ecx + esi*4));
/* f8b83d: cmp ecx, dword ptr [edi + 0x1e4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x1e4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f8b843: je 0xf8b89a */
  if (zf) goto L_f8b89a;
L_f8b845: /* f8b845: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f8b847: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8b848: call dword ptr [edx + 0x98] */
  { uint32_t t = R32((uint32_t)(edx + 0x98u)); esp -= 4; W32(esp, 0xf8b84eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8b84e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8b850: je 0xf8b89a */
  if (zf) goto L_f8b89a;
L_f8b852: /* f8b852: mov eax, 1 */
  eax = 0x1u;
/* f8b857: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8b85a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8b861: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8b862: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8b863: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8b864: mov esp, ebp */
  esp = ebp;
/* f8b866: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8b867: ret 4 */
  esp += 8; SPILL(); return;
L_f8b89a: /* f8b89a: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* f8b89b: jmp 0xf8b830 */
  goto L_f8b830;
L_f8b89d: /* f8b89d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8b8a0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8b8a1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8b8a2: xor eax, eax */
  eax = 0;
/* f8b8a4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8b8ab: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8b8ac: mov esp, ebp */
  esp = ebp;
/* f8b8ae: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8b8af: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f8b86a(void) {
  LOAD_REGS();
L_f8b86a: /* f8b86a: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8b86d: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f8b872: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* f8b875: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8b876: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* f8b879: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8b87eu); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f8b87e(); return;
}

void f_f8b87e(void) {
  LOAD_REGS();
  goto L_f8b87e;
L_f8b830: /* f8b830: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f8b832: jl 0xf8b89d */
  if ((sf != of)) goto L_f8b89d;
L_f8b834: /* f8b834: mov ecx, dword ptr [edi + 0x1cc] */
  ecx = R32((uint32_t)(edi + 0x1ccu));
/* f8b83a: mov ecx, dword ptr [ecx + esi*4] */
  ecx = R32((uint32_t)(ecx + esi*4));
/* f8b83d: cmp ecx, dword ptr [edi + 0x1e4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x1e4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f8b843: je 0xf8b89a */
  if (zf) goto L_f8b89a;
L_f8b845: /* f8b845: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f8b847: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8b848: call dword ptr [edx + 0x98] */
  { uint32_t t = R32((uint32_t)(edx + 0x98u)); esp -= 4; W32(esp, 0xf8b84eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8b84e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8b850: je 0xf8b89a */
  if (zf) goto L_f8b89a;
L_f8b852: /* f8b852: mov eax, 1 */
  eax = 0x1u;
/* f8b857: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8b85a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8b861: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8b862: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8b863: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8b864: mov esp, ebp */
  esp = ebp;
/* f8b866: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8b867: ret 4 */
  esp += 8; SPILL(); return;
L_f8b87e: /* f8b87e: push 0xfa47c8 */
  { uint32_t v = 0xfa47c8u; esp -= 4; W32(esp, v); }
/* f8b883: push 0xfb9acc */
  { uint32_t v = 0xfb9accu; esp -= 4; W32(esp, v); }
/* f8b888: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf8b88eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f8b88e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8b891: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8b893: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8b895: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8b89au); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f8b89a: /* f8b89a: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* f8b89b: jmp 0xf8b830 */
  goto L_f8b830;
L_f8b89d: /* f8b89d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8b8a0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8b8a1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8b8a2: xor eax, eax */
  eax = 0;
/* f8b8a4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8b8ab: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8b8ac: mov esp, ebp */
  esp = ebp;
/* f8b8ae: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8b8af: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f8b900(void) {
  LOAD_REGS();
L_f8b900: /* f8b900: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f8b901: mov ebp, esp */
  ebp = esp;
/* f8b903: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f8b905: push 0xf9a3b0 */
  { uint32_t v = 0xf9a3b0u; esp -= 4; W32(esp, v); }
/* f8b90a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8b910: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8b911: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f8b918: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8b91b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8b91c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f8b91d: mov esi, ecx */
  esi = ecx;
/* f8b91f: mov ecx, dword ptr [esi + 0x1e4] */
  ecx = R32((uint32_t)(esi + 0x1e4u));
/* f8b925: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8b927: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8b928: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f8b92b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f8b932: je 0xf8b940 */
  if (zf) goto L_f8b940;
L_f8b934: /* f8b934: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* f8b936: call dword ptr [eax + 0x9c] */
  { uint32_t t = R32((uint32_t)(eax + 0x9cu)); esp -= 4; W32(esp, 0xf8b93cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8b93c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8b93e: jne 0xf8b971 */
  if (!zf) goto L_f8b971;
L_f8b940: /* f8b940: mov eax, dword ptr [esi + 0x1d0] */
  eax = R32((uint32_t)(esi + 0x1d0u));
/* f8b946: lea edi, [eax - 1] */
  edi = (uint32_t)(eax + 0xffffffffu);
/* f8b949: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_f8b950: /* f8b950: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f8b952: jl 0xf8b9ba */
  if ((sf != of)) goto L_f8b9ba;
L_f8b954: /* f8b954: mov ecx, dword ptr [esi + 0x1cc] */
  ecx = R32((uint32_t)(esi + 0x1ccu));
/* f8b95a: mov ecx, dword ptr [ecx + edi*4] */
  ecx = R32((uint32_t)(ecx + edi*4));
/* f8b95d: cmp ecx, dword ptr [esi + 0x1e4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1e4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f8b963: je 0xf8b9b7 */
  if (zf) goto L_f8b9b7;
L_f8b965: /* f8b965: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f8b967: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0xf8b96du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8b96d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8b96f: je 0xf8b9b7 */
  if (zf) goto L_f8b9b7;
L_f8b971: /* f8b971: mov eax, 1 */
  eax = 0x1u;
/* f8b976: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8b979: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8b980: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8b981: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8b982: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8b983: mov esp, ebp */
  esp = ebp;
/* f8b985: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8b986: ret  */
  esp += 4; SPILL(); return;
L_f8b9b7: /* f8b9b7: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* f8b9b8: jmp 0xf8b950 */
  goto L_f8b950;
L_f8b9ba: /* f8b9ba: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8b9bd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8b9be: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8b9bf: xor eax, eax */
  eax = 0;
/* f8b9c1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8b9c8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8b9c9: mov esp, ebp */
  esp = ebp;
/* f8b9cb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8b9cc: ret  */
  esp += 4; SPILL(); return;
}

void f_f8b987(void) {
  LOAD_REGS();
L_f8b987: /* f8b987: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8b98a: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f8b98f: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* f8b992: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8b993: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* f8b996: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8b99bu); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f8b99b(); return;
}

void f_f8b99b(void) {
  LOAD_REGS();
  goto L_f8b99b;
L_f8b950: /* f8b950: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f8b952: jl 0xf8b9ba */
  if ((sf != of)) goto L_f8b9ba;
L_f8b954: /* f8b954: mov ecx, dword ptr [esi + 0x1cc] */
  ecx = R32((uint32_t)(esi + 0x1ccu));
/* f8b95a: mov ecx, dword ptr [ecx + edi*4] */
  ecx = R32((uint32_t)(ecx + edi*4));
/* f8b95d: cmp ecx, dword ptr [esi + 0x1e4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1e4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f8b963: je 0xf8b9b7 */
  if (zf) goto L_f8b9b7;
L_f8b965: /* f8b965: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f8b967: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0xf8b96du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8b96d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8b96f: je 0xf8b9b7 */
  if (zf) goto L_f8b9b7;
L_f8b971: /* f8b971: mov eax, 1 */
  eax = 0x1u;
/* f8b976: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8b979: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8b980: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8b981: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8b982: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8b983: mov esp, ebp */
  esp = ebp;
/* f8b985: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8b986: ret  */
  esp += 4; SPILL(); return;
L_f8b99b: /* f8b99b: push 0xfa4818 */
  { uint32_t v = 0xfa4818u; esp -= 4; W32(esp, v); }
/* f8b9a0: push 0xfb9ad4 */
  { uint32_t v = 0xfb9ad4u; esp -= 4; W32(esp, v); }
/* f8b9a5: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf8b9abu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f8b9ab: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8b9ae: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8b9b0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8b9b2: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8b9b7u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f8b9b7: /* f8b9b7: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* f8b9b8: jmp 0xf8b950 */
  goto L_f8b950;
L_f8b9ba: /* f8b9ba: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8b9bd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8b9be: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8b9bf: xor eax, eax */
  eax = 0;
/* f8b9c1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8b9c8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8b9c9: mov esp, ebp */
  esp = ebp;
/* f8b9cb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8b9cc: ret  */
  esp += 4; SPILL(); return;
}

void f_f8ba10(void) {
  LOAD_REGS();
L_f8ba10: /* f8ba10: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f8ba11: mov ebp, esp */
  ebp = esp;
/* f8ba13: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f8ba15: push 0xf9a3c0 */
  { uint32_t v = 0xf9a3c0u; esp -= 4; W32(esp, v); }
/* f8ba1a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8ba20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8ba21: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f8ba28: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8ba2b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* f8ba2e: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* f8ba31: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8ba32: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f8ba33: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8ba34: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f8ba37: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8ba38: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8ba39: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f8ba40: call 0xf712e4 */
  esp -= 4; W32(esp, 0xf8ba45u); SPILL(); f_f712e4(); if (g_unwind) return; RELOAD();
/* f8ba45: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8ba48: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8ba49: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8ba4a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8ba51: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8ba52: mov esp, ebp */
  esp = ebp;
/* f8ba54: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8ba55: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f8ba58(void) {
  LOAD_REGS();
L_f8ba58: /* f8ba58: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8ba5b: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f8ba60: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* f8ba63: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8ba64: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* f8ba67: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8ba6cu); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f8ba6c(); return;
}

void f_f8ba6c(void) {
  LOAD_REGS();
L_f8ba6c: /* f8ba6c: push 0xfa4868 */
  { uint32_t v = 0xfa4868u; esp -= 4; W32(esp, v); }
/* f8ba71: push 0xfb9adc */
  { uint32_t v = 0xfb9adcu; esp -= 4; W32(esp, v); }
/* f8ba76: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf8ba7cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f8ba7c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8ba7f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8ba81: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8ba83: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8ba88u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f8ba88: guest_badaddr(0xf8ba88); return;
}

void f_f8bab0(void) {
  LOAD_REGS();
L_f8bab0: /* f8bab0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f8bab1: mov ebp, esp */
  ebp = esp;
/* f8bab3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f8bab5: push 0xf9a3d0 */
  { uint32_t v = 0xf9a3d0u; esp -= 4; W32(esp, v); }
/* f8baba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8bac0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8bac1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f8bac8: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8bacb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8bacc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f8bacd: mov esi, ecx */
  esi = ecx;
/* f8bacf: test byte ptr [esi + 0x58], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x58u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8bad3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8bad4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f8bad7: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f8bade: je 0xf8bb92 */
  if (zf) goto L_f8bb92;
L_f8bae4: /* f8bae4: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* f8bae7: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8bae9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8baea: call dword ptr [eax + 0x88] */
  { uint32_t t = R32((uint32_t)(eax + 0x88u)); esp -= 4; W32(esp, 0xf8baf0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8baf0: mov eax, dword ptr [esi + 0x1ec] */
  eax = R32((uint32_t)(esi + 0x1ecu));
/* f8baf6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8baf8: je 0xf8bb5b */
  if (zf) goto L_f8bb5b;
L_f8bafa: /* f8bafa: mov ecx, dword ptr [esi + 0x1f0] */
  ecx = R32((uint32_t)(esi + 0x1f0u));
/* f8bb00: mov dword ptr [edi + 0x58], ecx */
  W32((uint32_t)(edi + 0x58u), ecx);
/* f8bb03: mov dl, byte ptr [esi + 0x1f8] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1f8u))) & 0xffu);
/* f8bb09: mov byte ptr [edi + 0x50], dl */
  W8((uint32_t)(edi + 0x50u), (edx & 0xffu));
/* f8bb0c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8bb0e: mov ecx, esi */
  ecx = esi;
/* f8bb10: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0xf8bb13u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8bb13: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* f8bb16: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8bb18: mov ecx, esi */
  ecx = esi;
/* f8bb1a: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xf8bb1du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8bb1d: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* f8bb20: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8bb22: mov ecx, esi */
  ecx = esi;
/* f8bb24: call dword ptr [eax + 0x84] */
  { uint32_t t = R32((uint32_t)(eax + 0x84u)); esp -= 4; W32(esp, 0xf8bb2au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8bb2a: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f8bb2d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8bb2f: mov ecx, esi */
  ecx = esi;
/* f8bb31: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0xf8bb37u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8bb37: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* f8bb3a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f8bb3d: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f8bb40: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* f8bb42: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8bb43: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8bb46: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8bb47: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* f8bb4a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8bb4b: mov ecx, dword ptr [esi + 0x1ec] */
  ecx = R32((uint32_t)(esi + 0x1ecu));
/* f8bb51: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8bb52: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8bb53: mov ecx, edi */
  ecx = edi;
/* f8bb55: call dword ptr [eax + 0xa8] */
  { uint32_t t = R32((uint32_t)(eax + 0xa8u)); esp -= 4; W32(esp, 0xf8bb5bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f8bb5b: /* f8bb5b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8bb5c: mov ecx, esi */
  ecx = esi;
/* f8bb5e: call 0xf71019 */
  esp -= 4; W32(esp, 0xf8bb63u); SPILL(); f_f71019(); if (g_unwind) return; RELOAD();
/* f8bb63: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8bb65: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8bb67: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* f8bb6a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8bb6b: mov eax, dword ptr [0xfba474] */
  eax = R32((uint32_t)(0xfba474u));
/* f8bb70: lea ecx, [esi + 0x114] */
  ecx = (uint32_t)(esi + 0x114u);
/* f8bb76: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8bb77: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8bb78: mov ecx, esi */
  ecx = esi;
/* f8bb7a: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* f8bb81: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* f8bb84: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0xf8bb87u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8bb87: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8bb89: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8bb8a: mov ecx, esi */
  ecx = esi;
/* f8bb8c: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0xf8bb92u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f8bb92: /* f8bb92: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8bb95: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8bb96: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8bb97: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8bb9e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8bb9f: mov esp, ebp */
  esp = ebp;
/* f8bba1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8bba2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f8bba5(void) {
  LOAD_REGS();
L_f8bba5: /* f8bba5: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* f8bba8: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f8bbad: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* f8bbb0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8bbb1: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* f8bbb4: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8bbb9u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f8bbb9(); return;
}

void f_f8bbb9(void) {
  LOAD_REGS();
L_f8bbb9: /* f8bbb9: push 0xfa48a4 */
  { uint32_t v = 0xfa48a4u; esp -= 4; W32(esp, v); }
/* f8bbbe: push 0xfb9ae4 */
  { uint32_t v = 0xfb9ae4u; esp -= 4; W32(esp, v); }
/* f8bbc3: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf8bbc9u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f8bbc9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8bbcc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8bbce: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8bbd0: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8bbd5u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f8bbd5: guest_badaddr(0xf8bbd5); return;
}

void f_f8bc30(void) {
  LOAD_REGS();
L_f8bc30: /* f8bc30: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f8bc31: mov ebp, esp */
  ebp = esp;
/* f8bc33: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f8bc35: push 0xf9a3e0 */
  { uint32_t v = 0xf9a3e0u; esp -= 4; W32(esp, v); }
/* f8bc3a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8bc40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8bc41: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f8bc48: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8bc4b: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* f8bc4e: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* f8bc51: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8bc52: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f8bc53: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8bc54: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f8bc57: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8bc58: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f8bc5b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8bc5c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8bc5d: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f8bc64: call 0xf7196f */
  esp -= 4; W32(esp, 0xf8bc69u); SPILL(); f_f7196f(); if (g_unwind) return; RELOAD();
/* f8bc69: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8bc6c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8bc6d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8bc6e: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* f8bc71: mov eax, 1 */
  eax = 0x1u;
/* f8bc76: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8bc7d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8bc7e: mov esp, ebp */
  esp = ebp;
/* f8bc80: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8bc81: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_f8bc84(void) {
  LOAD_REGS();
L_f8bc84: /* f8bc84: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8bc87: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f8bc8c: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* f8bc8f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8bc90: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* f8bc93: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8bc98u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f8bc98(); return;
}

void f_f8bc98(void) {
  LOAD_REGS();
L_f8bc98: /* f8bc98: push 0xfa48c8 */
  { uint32_t v = 0xfa48c8u; esp -= 4; W32(esp, v); }
/* f8bc9d: push 0xfb9aec */
  { uint32_t v = 0xfb9aecu; esp -= 4; W32(esp, v); }
/* f8bca2: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf8bca8u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f8bca8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8bcab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8bcad: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8bcaf: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8bcb4u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f8bcb4: guest_badaddr(0xf8bcb4); return;
}

void f_f8bcf0(void) {
  LOAD_REGS();
L_f8bcf0: /* f8bcf0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f8bcf1: mov ebp, esp */
  ebp = esp;
/* f8bcf3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f8bcf5: push 0xf9a3f0 */
  { uint32_t v = 0xf9a3f0u; esp -= 4; W32(esp, v); }
/* f8bcfa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8bd00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8bd01: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f8bd08: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8bd0b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* f8bd0e: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* f8bd11: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8bd12: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f8bd13: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8bd14: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f8bd17: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8bd18: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8bd19: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f8bd20: call 0xf71faf */
  esp -= 4; W32(esp, 0xf8bd25u); SPILL(); f_f71faf(); if (g_unwind) return; RELOAD();
/* f8bd25: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8bd28: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8bd29: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8bd2a: mov eax, 1 */
  eax = 0x1u;
/* f8bd2f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8bd36: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8bd37: mov esp, ebp */
  esp = ebp;
/* f8bd39: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8bd3a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f8bd3d(void) {
  LOAD_REGS();
L_f8bd3d: /* f8bd3d: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8bd40: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f8bd45: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* f8bd48: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8bd49: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* f8bd4c: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8bd51u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f8bd51(); return;
}

void f_f8bd51(void) {
  LOAD_REGS();
L_f8bd51: /* f8bd51: push 0xfa4904 */
  { uint32_t v = 0xfa4904u; esp -= 4; W32(esp, v); }
/* f8bd56: push 0xfb9af4 */
  { uint32_t v = 0xfb9af4u; esp -= 4; W32(esp, v); }
/* f8bd5b: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf8bd61u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f8bd61: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8bd64: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8bd66: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8bd68: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8bd6du); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f8bd6d: guest_badaddr(0xf8bd6d); return;
}

void f_f8bd90(void) {
  LOAD_REGS();
L_f8bd90: /* f8bd90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f8bd91: mov ebp, esp */
  ebp = esp;
/* f8bd93: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f8bd95: push 0xf9a400 */
  { uint32_t v = 0xf9a400u; esp -= 4; W32(esp, v); }
/* f8bd9a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8bda0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8bda1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f8bda8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8bdab: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f8bdae: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8bdaf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f8bdb0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8bdb1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f8bdb4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8bdb5: mov esi, ecx */
  esi = ecx;
/* f8bdb7: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f8bdbe: call 0xf7189d */
  esp -= 4; W32(esp, 0xf8bdc3u); SPILL(); f_f7189d(); if (g_unwind) return; RELOAD();
/* f8bdc3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8bdc5: jne 0xf8be03 */
  if (!zf) goto L_f8be03;
L_f8bdc7: /* f8bdc7: mov edi, dword ptr [esi + 0x28] */
  edi = R32((uint32_t)(esi + 0x28u));
/* f8bdca: fld dword ptr [edi + 0xac] */
  { double v = F32((uint32_t)(edi + 0xacu)); FPUSH(v); }
/* f8bdd0: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* f8bdd2: call 0xf979dc */
  esp -= 4; W32(esp, 0xf8bdd7u); SPILL(); f_f979dc(); if (g_unwind) return; RELOAD();
/* f8bdd7: fld dword ptr [edi + 0xa8] */
  { double v = F32((uint32_t)(edi + 0xa8u)); FPUSH(v); }
/* f8bddd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8bdde: call 0xf979dc */
  esp -= 4; W32(esp, 0xf8bde3u); SPILL(); f_f979dc(); if (g_unwind) return; RELOAD();
/* f8bde3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8bde4: mov ecx, esi */
  ecx = esi;
/* f8bde6: call dword ptr [ebx + 0x70] */
  { uint32_t t = R32((uint32_t)(ebx + 0x70u)); esp -= 4; W32(esp, 0xf8bde9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8bde9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8bdeb: je 0xf8be1b */
  if (zf) goto L_f8be1b;
L_f8bded: /* f8bded: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* f8bdf0: mov ecx, dword ptr [ecx + 0x104] */
  ecx = R32((uint32_t)(ecx + 0x104u));
/* f8bdf6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8bdf8: je 0xf8be03 */
  if (zf) goto L_f8be03;
L_f8bdfa: /* f8bdfa: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f8bdfc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f8bdfd: call dword ptr [edx + 0xb8] */
  { uint32_t t = R32((uint32_t)(edx + 0xb8u)); esp -= 4; W32(esp, 0xf8be03u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f8be03: /* f8be03: mov eax, 1 */
  eax = 0x1u;
/* f8be08: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8be0b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8be12: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8be13: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8be14: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8be15: mov esp, ebp */
  esp = ebp;
/* f8be17: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8be18: ret 4 */
  esp += 8; SPILL(); return;
L_f8be1b: /* f8be1b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8be1e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8be1f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8be20: xor eax, eax */
  eax = 0;
/* f8be22: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8be29: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8be2a: mov esp, ebp */
  esp = ebp;
/* f8be2c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8be2d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f8be30(void) {
  LOAD_REGS();
L_f8be30: /* f8be30: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8be33: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f8be38: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* f8be3b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8be3c: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* f8be3f: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8be44u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f8be44(); return;
}

void f_f8be44(void) {
  LOAD_REGS();
L_f8be44: /* f8be44: push 0xfa4944 */
  { uint32_t v = 0xfa4944u; esp -= 4; W32(esp, v); }
/* f8be49: push 0xfb9b04 */
  { uint32_t v = 0xfb9b04u; esp -= 4; W32(esp, v); }
/* f8be4e: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf8be54u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f8be54: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8be57: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8be59: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8be5b: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8be60u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f8be60: guest_badaddr(0xf8be60); return;
}

void f_f8beb0(void) {
  LOAD_REGS();
L_f8beb0: /* f8beb0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f8beb1: mov ebp, esp */
  ebp = esp;
/* f8beb3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f8beb5: push 0xf9a410 */
  { uint32_t v = 0xf9a410u; esp -= 4; W32(esp, v); }
/* f8beba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8bec0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8bec1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f8bec8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8becb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8becc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f8becd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8bece: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f8bed1: mov esi, ecx */
  esi = ecx;
/* f8bed3: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f8beda: call 0xf71c12 */
  esp -= 4; W32(esp, 0xf8bedfu); SPILL(); f_f71c12(); if (g_unwind) return; RELOAD();
/* f8bedf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8bee1: je 0xf8bef9 */
  if (zf) goto L_f8bef9;
L_f8bee3: /* f8bee3: mov eax, 1 */
  eax = 0x1u;
/* f8bee8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8beeb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8bef2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8bef3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8bef4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8bef5: mov esp, ebp */
  esp = ebp;
/* f8bef7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8bef8: ret  */
  esp += 4; SPILL(); return;
L_f8bef9: /* f8bef9: mov edi, dword ptr [esi + 0x28] */
  edi = R32((uint32_t)(esi + 0x28u));
/* f8befc: fld dword ptr [edi + 0xac] */
  { double v = F32((uint32_t)(edi + 0xacu)); FPUSH(v); }
/* f8bf02: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* f8bf04: call 0xf979dc */
  esp -= 4; W32(esp, 0xf8bf09u); SPILL(); f_f979dc(); if (g_unwind) return; RELOAD();
/* f8bf09: fld dword ptr [edi + 0xa8] */
  { double v = F32((uint32_t)(edi + 0xa8u)); FPUSH(v); }
/* f8bf0f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8bf10: call 0xf979dc */
  esp -= 4; W32(esp, 0xf8bf15u); SPILL(); f_f979dc(); if (g_unwind) return; RELOAD();
/* f8bf15: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8bf16: mov ecx, esi */
  ecx = esi;
/* f8bf18: call dword ptr [ebx + 0x70] */
  { uint32_t t = R32((uint32_t)(ebx + 0x70u)); esp -= 4; W32(esp, 0xf8bf1bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8bf1b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8bf1e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8bf1f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8bf20: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8bf27: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8bf28: mov esp, ebp */
  esp = ebp;
/* f8bf2a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8bf2b: ret  */
  esp += 4; SPILL(); return;
}

void f_f8bf2c(void) {
  LOAD_REGS();
L_f8bf2c: /* f8bf2c: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8bf2f: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f8bf34: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* f8bf37: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8bf38: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* f8bf3b: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8bf40u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f8bf40(); return;
}

void f_f8bf40(void) {
  LOAD_REGS();
L_f8bf40: /* f8bf40: push 0xfa497c */
  { uint32_t v = 0xfa497cu; esp -= 4; W32(esp, v); }
/* f8bf45: push 0xfb9b0c */
  { uint32_t v = 0xfb9b0cu; esp -= 4; W32(esp, v); }
/* f8bf4a: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf8bf50u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f8bf50: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8bf53: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8bf55: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8bf57: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8bf5cu); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f8bf5c: guest_badaddr(0xf8bf5c); return;
}

void f_f8bf90(void) {
  LOAD_REGS();
L_f8bf90: /* f8bf90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f8bf91: mov ebp, esp */
  ebp = esp;
/* f8bf93: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f8bf95: push 0xf9a420 */
  { uint32_t v = 0xf9a420u; esp -= 4; W32(esp, v); }
/* f8bf9a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8bfa0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8bfa1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f8bfa8: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8bfab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8bfac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f8bfad: mov esi, ecx */
  esi = ecx;
/* f8bfaf: test byte ptr [esi + 0x58], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x58u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8bfb3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8bfb4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f8bfb7: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f8bfbe: je 0xf8c15c */
  if (zf) goto L_f8c15c;
L_f8bfc4: /* f8bfc4: mov eax, dword ptr [esi + 0x1cc] */
  eax = R32((uint32_t)(esi + 0x1ccu));
/* f8bfca: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8bfcc: je 0xf8c15c */
  if (zf) goto L_f8c15c;
L_f8bfd2: /* f8bfd2: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* f8bfd5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8bfd6: call 0xf716a9 */
  esp -= 4; W32(esp, 0xf8bfdbu); SPILL(); f_f716a9(); if (g_unwind) return; RELOAD();
/* f8bfdb: mov al, byte ptr [esi + 0x1d5] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1d5u))) & 0xffu);
/* f8bfe1: mov byte ptr [edi + 0x50], al */
  W8((uint32_t)(edi + 0x50u), (eax & 0xffu));
/* f8bfe4: mov ecx, dword ptr [esi + 0x1d0] */
  ecx = R32((uint32_t)(esi + 0x1d0u));
/* f8bfea: lea ebx, [edi + 0x58] */
  ebx = (uint32_t)(edi + 0x58u);
/* f8bfed: mov dword ptr [ebx], ecx */
  W32((uint32_t)(ebx), ecx);
/* f8bfef: movzx eax, byte ptr [esi + 0x1d4] */
  eax = (uint32_t)(R8((uint32_t)(esi + 0x1d4u)));
/* f8bff6: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* f8bff9: ja 0xf8c15c */
  if ((!cf && !zf)) goto L_f8c15c;
L_f8bfff: /* f8bfff: jmp dword ptr [eax*4 + 0xf8c5a0] */
  switch (R32((uint32_t)(eax*4 + 0xf8c5a0u))) {
    case 0xf8c006u: goto L_f8c006;
    case 0xf8c1bau: goto L_f8c1ba;
    case 0xf8c43fu: goto L_f8c43f;
    case 0xf8c4a1u: goto L_f8c4a1;
    case 0xf8c503u: goto L_f8c503;
    default: guest_badjump(0xf8bfff, R32((uint32_t)(eax*4 + 0xf8c5a0u))); return;
  }
L_f8c006: /* f8c006: mov ecx, dword ptr [esi + 0x1d8] */
  ecx = R32((uint32_t)(esi + 0x1d8u));
/* f8c00c: cmp ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f8c00f: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* f8c012: je 0xf8c01c */
  if (zf) goto L_f8c01c;
L_f8c014: /* f8c014: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* f8c017: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* f8c01a: jmp 0xf8c023 */
  goto L_f8c023;
L_f8c01c: /* f8c01c: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
L_f8c023: /* f8c023: mov eax, dword ptr [esi + 0x1dc] */
  eax = R32((uint32_t)(esi + 0x1dcu));
/* f8c029: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f8c02c: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* f8c02f: je 0xf8c039 */
  if (zf) goto L_f8c039;
L_f8c031: /* f8c031: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* f8c034: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f8c037: jmp 0xf8c040 */
  goto L_f8c040;
L_f8c039: /* f8c039: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
L_f8c040: /* f8c040: mov eax, dword ptr [esi + 0x1e0] */
  eax = R32((uint32_t)(esi + 0x1e0u));
/* f8c046: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f8c049: jne 0xf8c078 */
  if (!zf) goto L_f8c078;
L_f8c04b: /* f8c04b: mov ecx, dword ptr [esi + 0x1cc] */
  ecx = R32((uint32_t)(esi + 0x1ccu));
/* f8c051: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f8c053: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xf8c056u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8c056: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* f8c059: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8c05b: mov ecx, esi */
  ecx = esi;
/* f8c05d: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0xf8c060u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8c060: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* f8c063: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* f8c066: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8c067: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f8c06a: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f8c06d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8c06e: call 0xf71c26 */
  esp -= 4; W32(esp, 0xf8c073u); SPILL(); f_f71c26(); if (g_unwind) return; RELOAD();
/* f8c073: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8c076: jmp 0xf8c080 */
  goto L_f8c080;
L_f8c078: /* f8c078: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f8c07a: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* f8c07d: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
L_f8c080: /* f8c080: mov eax, dword ptr [esi + 0x1e4] */
  eax = R32((uint32_t)(esi + 0x1e4u));
/* f8c086: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* f8c089: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f8c08c: jne 0xf8c0bb */
  if (!zf) goto L_f8c0bb;
L_f8c08e: /* f8c08e: mov ecx, dword ptr [esi + 0x1cc] */
  ecx = R32((uint32_t)(esi + 0x1ccu));
/* f8c094: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f8c096: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0xf8c099u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8c099: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* f8c09c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8c09e: mov ecx, esi */
  ecx = esi;
/* f8c0a0: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0xf8c0a3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8c0a3: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* f8c0a6: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* f8c0a9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8c0aa: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* f8c0ad: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f8c0b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8c0b1: call 0xf71c26 */
  esp -= 4; W32(esp, 0xf8c0b6u); SPILL(); f_f71c26(); if (g_unwind) return; RELOAD();
/* f8c0b6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8c0b9: jmp 0xf8c0c7 */
  goto L_f8c0c7;
L_f8c0bb: /* f8c0bb: sub eax, dword ptr [esi + 0x1dc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1dcu)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f8c0c1: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* f8c0c4: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
L_f8c0c7: /* f8c0c7: mov al, byte ptr [esi + 0x1d6] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1d6u))) & 0xffu);
/* f8c0cd: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* f8c0d0: xor ecx, ecx */
  ecx = 0;
/* f8c0d2: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8c0d5: cmp al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f8c0d7: mov eax, esp */
  eax = esp;
/* f8c0d9: mov dword ptr [ebp - 0x2c], esp */
  W32((uint32_t)(ebp + 0xffffffd4u), esp);
/* f8c0dc: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* f8c0df: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* f8c0e2: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* f8c0e5: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* f8c0e7: jne 0xf8c16f */
  if (!zf) goto L_f8c16f;
L_f8c0ed: /* f8c0ed: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8c0f0: mov edx, esp */
  edx = esp;
/* f8c0f2: mov dword ptr [ebp - 0x2c], esp */
  W32((uint32_t)(ebp + 0xffffffd4u), esp);
/* f8c0f5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8c0f6: mov ecx, ebx */
  ecx = ebx;
/* f8c0f8: call dword ptr [0xfce528] */
  esp -= 4; W32(esp, 0xf8c0feu); SPILL(); f_6c3044(); if (g_unwind) return; /* Engine!??BFColor@@QBE?AVFPlane@@XZ */ RELOAD();
/* f8c0fe: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8c100: mov ecx, esi */
  ecx = esi;
/* f8c102: call dword ptr [eax + 0x84] */
  { uint32_t t = R32((uint32_t)(eax + 0x84u)); esp -= 4; W32(esp, 0xf8c108u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8c108: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* f8c10b: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8c10d: mov ecx, esi */
  ecx = esi;
/* f8c10f: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0xf8c115u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8c115: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* f8c118: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f8c11b: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* f8c11e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f8c121: fmul dword ptr [0xfa49dc] */
  ST0 = ST0 * (F32((uint32_t)(0xfa49dcu)));
/* f8c127: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8c12a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8c12c: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* f8c12e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8c12f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8c130: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8c131: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* f8c134: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8c135: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8c136: fsubr dword ptr [ebp - 0x20] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffe0u))) - ST0;
/* f8c139: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8c13a: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8c13d: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* f8c141: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* f8c144: fmul dword ptr [0xfa49dc] */
  ST0 = ST0 * (F32((uint32_t)(0xfa49dcu)));
/* f8c14a: fsubr dword ptr [ebp - 0x24] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffdcu))) - ST0;
/* f8c14d: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
L_f8c150: /* f8c150: mov eax, dword ptr [esi + 0x1cc] */
  eax = R32((uint32_t)(esi + 0x1ccu));
/* f8c156: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8c157: mov ecx, edi */
  ecx = edi;
/* f8c159: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0xf8c15cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f8c15c: /* f8c15c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8c15f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8c166: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8c167: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8c168: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8c169: mov esp, ebp */
  esp = ebp;
/* f8c16b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8c16c: ret 4 */
  esp += 8; SPILL(); return;
L_f8c16f: /* f8c16f: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8c172: mov ecx, esp */
  ecx = esp;
/* f8c174: mov dword ptr [ebp - 0x2c], esp */
  W32((uint32_t)(ebp + 0xffffffd4u), esp);
/* f8c177: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8c178: mov ecx, ebx */
  ecx = ebx;
/* f8c17a: call dword ptr [0xfce528] */
  esp -= 4; W32(esp, 0xf8c180u); SPILL(); f_6c3044(); if (g_unwind) return; /* Engine!??BFColor@@QBE?AVFPlane@@XZ */ RELOAD();
/* f8c180: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8c182: mov ecx, esi */
  ecx = esi;
/* f8c184: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0xf8c18au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8c18a: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* f8c18d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8c18f: mov ecx, esi */
  ecx = esi;
/* f8c191: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0xf8c197u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8c197: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* f8c19a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f8c19d: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f8c1a0: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8c1a3: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* f8c1a5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8c1a7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8c1a8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8c1a9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8c1aa: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* f8c1ad: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8c1ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8c1af: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* f8c1b2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8c1b3: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* f8c1b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8c1b7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8c1b8: jmp 0xf8c150 */
  goto L_f8c150;
L_f8c1ba: /* f8c1ba: mov ecx, dword ptr [esi + 0x1d8] */
  ecx = R32((uint32_t)(esi + 0x1d8u));
/* f8c1c0: xor edx, edx */
  edx = 0;
/* f8c1c2: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f8c1c4: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* f8c1c7: jge 0xf8c243 */
  if ((sf == of)) goto L_f8c243;
L_f8c1c9: /* f8c1c9: cmp dword ptr [esi + 0x1e0], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x1e0u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f8c1cf: jge 0xf8c243 */
  if ((sf == of)) goto L_f8c243;
L_f8c1d1: /* f8c1d1: cmp dword ptr [esi + 0x1dc], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x1dcu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f8c1d7: jge 0xf8c243 */
  if ((sf == of)) goto L_f8c243;
L_f8c1d9: /* f8c1d9: cmp dword ptr [esi + 0x1e4], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x1e4u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f8c1df: jge 0xf8c243 */
  if ((sf == of)) goto L_f8c243;
L_f8c1e1: /* f8c1e1: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8c1e3: mov ecx, esi */
  ecx = esi;
/* f8c1e5: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0xf8c1e8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8c1e8: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* f8c1eb: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8c1ed: mov ecx, esi */
  ecx = esi;
/* f8c1ef: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0xf8c1f2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8c1f2: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* f8c1f5: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8c1f7: mov ecx, esi */
  ecx = esi;
/* f8c1f9: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0xf8c1ffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8c1ff: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* f8c202: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8c204: mov ecx, esi */
  ecx = esi;
/* f8c206: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0xf8c20cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8c20c: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* f8c20f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f8c212: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* f8c215: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* f8c217: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8c218: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* f8c21b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8c21c: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* f8c21f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8c220: mov eax, dword ptr [esi + 0x1cc] */
  eax = R32((uint32_t)(esi + 0x1ccu));
/* f8c226: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8c227: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8c228: mov ecx, edi */
  ecx = edi;
/* f8c22a: call dword ptr [edx + 0x98] */
  { uint32_t t = R32((uint32_t)(edx + 0x98u)); esp -= 4; W32(esp, 0xf8c230u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8c230: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8c233: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8c23a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8c23b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8c23c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8c23d: mov esp, ebp */
  esp = ebp;
/* f8c23f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8c240: ret 4 */
  esp += 8; SPILL(); return;
L_f8c243: /* f8c243: cmp ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f8c246: je 0xf8c250 */
  if (zf) goto L_f8c250;
L_f8c248: /* f8c248: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* f8c24b: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f8c24e: jmp 0xf8c257 */
  goto L_f8c257;
L_f8c250: /* f8c250: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
L_f8c257: /* f8c257: mov eax, dword ptr [esi + 0x1dc] */
  eax = R32((uint32_t)(esi + 0x1dcu));
/* f8c25d: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f8c260: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* f8c263: je 0xf8c26d */
  if (zf) goto L_f8c26d;
L_f8c265: /* f8c265: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* f8c268: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* f8c26b: jmp 0xf8c274 */
  goto L_f8c274;
L_f8c26d: /* f8c26d: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
L_f8c274: /* f8c274: mov eax, dword ptr [esi + 0x1e0] */
  eax = R32((uint32_t)(esi + 0x1e0u));
/* f8c27a: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f8c27d: jne 0xf8c2ae */
  if (!zf) goto L_f8c2ae;
L_f8c27f: /* f8c27f: mov ecx, dword ptr [esi + 0x1cc] */
  ecx = R32((uint32_t)(esi + 0x1ccu));
/* f8c285: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f8c287: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xf8c28au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8c28a: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* f8c28d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8c28f: mov ecx, esi */
  ecx = esi;
/* f8c291: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0xf8c294u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8c294: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* f8c297: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* f8c29a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8c29b: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* f8c29e: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f8c2a1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8c2a2: call 0xf71c26 */
  esp -= 4; W32(esp, 0xf8c2a7u); SPILL(); f_f71c26(); if (g_unwind) return; RELOAD();
/* f8c2a7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8c2aa: xor edx, edx */
  edx = 0;
/* f8c2ac: jmp 0xf8c2b6 */
  goto L_f8c2b6;
L_f8c2ae: /* f8c2ae: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f8c2b0: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* f8c2b3: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
L_f8c2b6: /* f8c2b6: mov eax, dword ptr [esi + 0x1e4] */
  eax = R32((uint32_t)(esi + 0x1e4u));
/* f8c2bc: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* f8c2bf: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f8c2c2: jne 0xf8c2f3 */
  if (!zf) goto L_f8c2f3;
L_f8c2c4: /* f8c2c4: mov ecx, dword ptr [esi + 0x1cc] */
  ecx = R32((uint32_t)(esi + 0x1ccu));
/* f8c2ca: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f8c2cc: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0xf8c2cfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8c2cf: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* f8c2d2: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8c2d4: mov ecx, esi */
  ecx = esi;
/* f8c2d6: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0xf8c2d9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8c2d9: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* f8c2dc: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* f8c2df: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8c2e0: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* f8c2e3: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f8c2e6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8c2e7: call 0xf71c26 */
  esp -= 4; W32(esp, 0xf8c2ecu); SPILL(); f_f71c26(); if (g_unwind) return; RELOAD();
/* f8c2ec: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8c2ef: xor edx, edx */
  edx = 0;
/* f8c2f1: jmp 0xf8c2ff */
  goto L_f8c2ff;
L_f8c2f3: /* f8c2f3: sub eax, dword ptr [esi + 0x1dc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1dcu)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* f8c2f9: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* f8c2fc: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
L_f8c2ff: /* f8c2ff: mov al, byte ptr [esi + 0x1d6] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1d6u))) & 0xffu);
/* f8c305: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* f8c308: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8c30b: cmp al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f8c30d: mov eax, esp */
  eax = esp;
/* f8c30f: mov ecx, ebx */
  ecx = ebx;
/* f8c311: mov dword ptr [ebp - 0x2c], esp */
  W32((uint32_t)(ebp + 0xffffffd4u), esp);
/* f8c314: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* f8c317: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* f8c31a: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* f8c31d: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* f8c31f: jne 0xf8c3bf */
  if (!zf) goto L_f8c3bf;
L_f8c325: /* f8c325: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8c328: mov edx, esp */
  edx = esp;
/* f8c32a: mov dword ptr [ebp - 0x2c], esp */
  W32((uint32_t)(ebp + 0xffffffd4u), esp);
/* f8c32d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8c32e: call dword ptr [0xfce528] */
  esp -= 4; W32(esp, 0xf8c334u); SPILL(); f_6c3044(); if (g_unwind) return; /* Engine!??BFColor@@QBE?AVFPlane@@XZ */ RELOAD();
/* f8c334: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8c336: mov ecx, esi */
  ecx = esi;
/* f8c338: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0xf8c33bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8c33b: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* f8c33e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8c340: mov ecx, esi */
  ecx = esi;
/* f8c342: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xf8c345u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8c345: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* f8c348: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8c34a: mov ecx, esi */
  ecx = esi;
/* f8c34c: call dword ptr [eax + 0x84] */
  { uint32_t t = R32((uint32_t)(eax + 0x84u)); esp -= 4; W32(esp, 0xf8c352u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8c352: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* f8c355: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8c357: mov ecx, esi */
  ecx = esi;
/* f8c359: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0xf8c35fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8c35f: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* f8c362: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f8c365: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* f8c368: fmul dword ptr [0xfa49dc] */
  ST0 = ST0 * (F32((uint32_t)(0xfa49dcu)));
/* f8c36e: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f8c371: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8c373: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8c374: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* f8c377: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8c378: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8c37b: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* f8c37d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8c37e: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* f8c381: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8c382: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* f8c385: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8c386: mov ecx, dword ptr [esi + 0x1cc] */
  ecx = R32((uint32_t)(esi + 0x1ccu));
/* f8c38c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8c38d: fsubr dword ptr [ebp - 0x28] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffd8u))) - ST0;
/* f8c390: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8c393: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* f8c397: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* f8c39a: fmul dword ptr [0xfa49dc] */
  ST0 = ST0 * (F32((uint32_t)(0xfa49dcu)));
/* f8c3a0: fsubr dword ptr [ebp - 0x2c] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffd4u))) - ST0;
/* f8c3a3: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f8c3a6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8c3a7: mov ecx, edi */
  ecx = edi;
/* f8c3a9: call dword ptr [eax + 0x70] */
  { uint32_t t = R32((uint32_t)(eax + 0x70u)); esp -= 4; W32(esp, 0xf8c3acu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8c3ac: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8c3af: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8c3b6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8c3b7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8c3b8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8c3b9: mov esp, ebp */
  esp = ebp;
/* f8c3bb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8c3bc: ret 4 */
  esp += 8; SPILL(); return;
L_f8c3bf: /* f8c3bf: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8c3c2: mov edx, esp */
  edx = esp;
/* f8c3c4: mov dword ptr [ebp - 0x2c], esp */
  W32((uint32_t)(ebp + 0xffffffd4u), esp);
/* f8c3c7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8c3c8: call dword ptr [0xfce528] */
  esp -= 4; W32(esp, 0xf8c3ceu); SPILL(); f_6c3044(); if (g_unwind) return; /* Engine!??BFColor@@QBE?AVFPlane@@XZ */ RELOAD();
/* f8c3ce: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8c3d0: mov ecx, esi */
  ecx = esi;
/* f8c3d2: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0xf8c3d5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8c3d5: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* f8c3d8: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8c3da: mov ecx, esi */
  ecx = esi;
/* f8c3dc: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xf8c3dfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8c3df: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* f8c3e2: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8c3e4: mov ecx, esi */
  ecx = esi;
/* f8c3e6: call dword ptr [eax + 0x84] */
  { uint32_t t = R32((uint32_t)(eax + 0x84u)); esp -= 4; W32(esp, 0xf8c3ecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8c3ec: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* f8c3ef: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8c3f1: mov ecx, esi */
  ecx = esi;
/* f8c3f3: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0xf8c3f9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8c3f9: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* f8c3fc: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f8c3ff: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* f8c402: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* f8c404: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8c406: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8c407: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* f8c40a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8c40b: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8c40e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8c40f: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* f8c412: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8c413: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* f8c416: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8c417: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* f8c41a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8c41b: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* f8c41e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8c41f: mov ecx, dword ptr [esi + 0x1cc] */
  ecx = R32((uint32_t)(esi + 0x1ccu));
/* f8c425: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8c426: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8c427: mov ecx, edi */
  ecx = edi;
/* f8c429: call dword ptr [eax + 0x70] */
  { uint32_t t = R32((uint32_t)(eax + 0x70u)); esp -= 4; W32(esp, 0xf8c42cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8c42c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8c42f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8c436: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8c437: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8c438: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8c439: mov esp, ebp */
  esp = ebp;
/* f8c43b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8c43c: ret 4 */
  esp += 8; SPILL(); return;
L_f8c43f: /* f8c43f: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8c441: mov ecx, esi */
  ecx = esi;
/* f8c443: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0xf8c446u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8c446: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* f8c449: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8c44b: mov ecx, esi */
  ecx = esi;
/* f8c44d: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0xf8c450u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8c450: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* f8c453: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8c455: mov ecx, esi */
  ecx = esi;
/* f8c457: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0xf8c45du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8c45d: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* f8c460: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8c462: mov ecx, esi */
  ecx = esi;
/* f8c464: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0xf8c46au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8c46a: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* f8c46d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f8c470: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* f8c473: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* f8c475: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8c476: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* f8c479: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8c47a: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* f8c47d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8c47e: mov eax, dword ptr [esi + 0x1cc] */
  eax = R32((uint32_t)(esi + 0x1ccu));
/* f8c484: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8c485: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8c486: mov ecx, edi */
  ecx = edi;
/* f8c488: call dword ptr [edx + 0xa8] */
  { uint32_t t = R32((uint32_t)(edx + 0xa8u)); esp -= 4; W32(esp, 0xf8c48eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8c48e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8c491: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8c498: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8c499: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8c49a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8c49b: mov esp, ebp */
  esp = ebp;
/* f8c49d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8c49e: ret 4 */
  esp += 8; SPILL(); return;
L_f8c4a1: /* f8c4a1: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8c4a3: mov ecx, esi */
  ecx = esi;
/* f8c4a5: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0xf8c4a8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8c4a8: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* f8c4ab: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8c4ad: mov ecx, esi */
  ecx = esi;
/* f8c4af: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0xf8c4b2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8c4b2: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* f8c4b5: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8c4b7: mov ecx, esi */
  ecx = esi;
/* f8c4b9: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0xf8c4bfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8c4bf: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* f8c4c2: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8c4c4: mov ecx, esi */
  ecx = esi;
/* f8c4c6: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0xf8c4ccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8c4cc: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* f8c4cf: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f8c4d2: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* f8c4d5: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* f8c4d7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8c4d8: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* f8c4db: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8c4dc: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* f8c4df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8c4e0: mov eax, dword ptr [esi + 0x1cc] */
  eax = R32((uint32_t)(esi + 0x1ccu));
/* f8c4e6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8c4e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8c4e8: mov ecx, edi */
  ecx = edi;
/* f8c4ea: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0xf8c4f0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8c4f0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8c4f3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8c4fa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8c4fb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8c4fc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8c4fd: mov esp, ebp */
  esp = ebp;
/* f8c4ff: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8c500: ret 4 */
  esp += 8; SPILL(); return;
L_f8c503: /* f8c503: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8c505: mov ecx, esi */
  ecx = esi;
/* f8c507: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0xf8c50au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8c50a: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* f8c50d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8c50f: mov ecx, esi */
  ecx = esi;
/* f8c511: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0xf8c514u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8c514: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* f8c517: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8c519: mov ecx, esi */
  ecx = esi;
/* f8c51b: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0xf8c521u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8c521: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* f8c524: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8c526: mov ecx, esi */
  ecx = esi;
/* f8c528: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0xf8c52eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8c52e: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* f8c531: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f8c534: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* f8c536: xor eax, eax */
  eax = 0;
/* f8c538: mov al, byte ptr [esi + 0x1d6] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1d6u))) & 0xffu);
/* f8c53e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8c53f: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* f8c542: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8c543: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* f8c546: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8c547: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* f8c54a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8c54b: mov ecx, dword ptr [esi + 0x1cc] */
  ecx = R32((uint32_t)(esi + 0x1ccu));
/* f8c551: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8c552: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8c553: mov ecx, edi */
  ecx = edi;
/* f8c555: call dword ptr [edx + 0xa4] */
  { uint32_t t = R32((uint32_t)(edx + 0xa4u)); esp -= 4; W32(esp, 0xf8c55bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8c55b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8c55e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8c55f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8c560: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8c567: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8c568: mov esp, ebp */
  esp = ebp;
/* f8c56a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8c56b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f8c56e(void) {
  LOAD_REGS();
L_f8c56e: /* f8c56e: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* f8c571: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f8c576: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* f8c579: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8c57a: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* f8c57d: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8c582u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f8c582(); return;
}

void f_f8c582(void) {
  LOAD_REGS();
L_f8c582: /* f8c582: push 0xfa49b8 */
  { uint32_t v = 0xfa49b8u; esp -= 4; W32(esp, v); }
/* f8c587: push 0xfb9b14 */
  { uint32_t v = 0xfb9b14u; esp -= 4; W32(esp, v); }
/* f8c58c: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf8c592u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f8c592: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8c595: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8c597: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8c599: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8c59eu); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
/* f8c59e: mov edi, edi */
  edi = edi;
/* f8c5a0: push es */
  guest_unsupported(0xf8c5a0); /* push es */
/* f8c5a1: sar al, 0 */
/* f8c5a4: mov edx, 0x3f00f8c1 */
  edx = 0x3f00f8c1u;
L_f8c5a9: guest_badaddr(0xf8c5a9); return;
}

void f_f8c750(void) {
  LOAD_REGS();
L_f8c750: /* f8c750: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f8c751: mov ebp, esp */
  ebp = esp;
/* f8c753: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f8c755: push 0xf9a430 */
  { uint32_t v = 0xf9a430u; esp -= 4; W32(esp, v); }
/* f8c75a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8c760: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8c761: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f8c768: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8c76b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8c76c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f8c76d: mov esi, ecx */
  esi = ecx;
/* f8c76f: mov al, byte ptr [esi + 0x58] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x58u))) & 0xffu);
/* f8c772: mov bl, 8 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x8u) & 0xffu);
/* f8c774: test bl, al */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8c776: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8c777: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f8c77a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f8c781: je 0xf8c971 */
  if (zf) goto L_f8c971;
L_f8c787: /* f8c787: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8c789: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0xf8c78cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8c78c: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* f8c78f: fmul dword ptr [0xfa49dc] */
  ST0 = ST0 * (F32((uint32_t)(0xfa49dcu)));
/* f8c795: mov ecx, dword ptr [esi + 0x1f0] */
  ecx = R32((uint32_t)(esi + 0x1f0u));
/* f8c79b: fst dword ptr [ecx + 0x74] */
  WF32((uint32_t)(ecx + 0x74u), ST0);
/* f8c79e: mov edx, dword ptr [esi + 0x1f4] */
  edx = R32((uint32_t)(esi + 0x1f4u));
/* f8c7a4: fst dword ptr [edx + 0x74] */
  WF32((uint32_t)(edx + 0x74u), ST0);
/* f8c7a7: mov eax, dword ptr [esi + 0x1f0] */
  eax = R32((uint32_t)(esi + 0x1f0u));
/* f8c7ad: fst dword ptr [eax + 0x78] */
  WF32((uint32_t)(eax + 0x78u), ST0);
/* f8c7b0: mov ecx, dword ptr [esi + 0x1f4] */
  ecx = R32((uint32_t)(esi + 0x1f4u));
/* f8c7b6: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* f8c7b9: fstp dword ptr [ecx + 0x78] */
  WF32((uint32_t)(ecx + 0x78u), ST0); FPOP();
/* f8c7bc: mov al, byte ptr [esi + 0x204] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x204u))) & 0xffu);
/* f8c7c2: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8c7c4: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8c7c6: mov ecx, esi */
  ecx = esi;
/* f8c7c8: je 0xf8c891 */
  if (zf) goto L_f8c891;
L_f8c7ce: /* f8c7ce: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0xf8c7d4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8c7d4: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f8c7d7: mov eax, dword ptr [esi + 0x1f0] */
  eax = R32((uint32_t)(esi + 0x1f0u));
/* f8c7dd: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8c7e0: mov dword ptr [eax + 0x70], ecx */
  W32((uint32_t)(eax + 0x70u), ecx);
/* f8c7e3: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8c7e5: mov ecx, esi */
  ecx = esi;
/* f8c7e7: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0xf8c7edu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8c7ed: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f8c7f0: mov eax, dword ptr [esi + 0x1f4] */
  eax = R32((uint32_t)(esi + 0x1f4u));
/* f8c7f6: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8c7f9: mov dword ptr [eax + 0x70], ecx */
  W32((uint32_t)(eax + 0x70u), ecx);
/* f8c7fc: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8c7fe: mov ecx, esi */
  ecx = esi;
/* f8c800: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0xf8c806u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8c806: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f8c809: mov eax, dword ptr [esi + 0x1f0] */
  eax = R32((uint32_t)(esi + 0x1f0u));
/* f8c80f: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8c812: mov dword ptr [eax + 0x6c], ecx */
  W32((uint32_t)(eax + 0x6cu), ecx);
/* f8c815: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8c817: mov ecx, esi */
  ecx = esi;
/* f8c819: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0xf8c81fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8c81f: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* f8c822: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* f8c825: mov eax, dword ptr [esi + 0x1f4] */
  eax = R32((uint32_t)(esi + 0x1f4u));
/* f8c82b: mov ecx, esi */
  ecx = esi;
/* f8c82d: fstp dword ptr [eax + 0x6c] */
  WF32((uint32_t)(eax + 0x6cu), ST0); FPOP();
/* f8c830: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8c832: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xf8c835u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8c835: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* f8c838: fsub dword ptr [ebp - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffecu)));
/* f8c83b: mov eax, dword ptr [esi + 0x1ec] */
  eax = R32((uint32_t)(esi + 0x1ecu));
/* f8c841: mov ecx, esi */
  ecx = esi;
/* f8c843: fstp dword ptr [eax + 0x74] */
  WF32((uint32_t)(eax + 0x74u), ST0); FPOP();
/* f8c846: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8c848: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0xf8c84bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8c84b: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f8c84e: mov eax, dword ptr [esi + 0x1ec] */
  eax = R32((uint32_t)(esi + 0x1ecu));
/* f8c854: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8c857: mov dword ptr [eax + 0x78], ecx */
  W32((uint32_t)(eax + 0x78u), ecx);
/* f8c85a: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8c85c: mov ecx, esi */
  ecx = esi;
/* f8c85e: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0xf8c864u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8c864: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* f8c867: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* f8c86a: mov eax, dword ptr [esi + 0x1ec] */
  eax = R32((uint32_t)(esi + 0x1ecu));
/* f8c870: mov ecx, esi */
  ecx = esi;
/* f8c872: fstp dword ptr [eax + 0x70] */
  WF32((uint32_t)(eax + 0x70u), ST0); FPOP();
/* f8c875: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8c877: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0xf8c87du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8c87d: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f8c880: mov eax, dword ptr [esi + 0x1ec] */
  eax = R32((uint32_t)(esi + 0x1ecu));
/* f8c886: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8c889: mov dword ptr [eax + 0x6c], ecx */
  W32((uint32_t)(eax + 0x6cu), ecx);
/* f8c88c: jmp 0xf8c961 */
  goto L_f8c961;
L_f8c891: /* f8c891: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xf8c894u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8c894: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* f8c897: fsub dword ptr [ebp - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffecu)));
/* f8c89a: mov eax, dword ptr [esi + 0x1ec] */
  eax = R32((uint32_t)(esi + 0x1ecu));
/* f8c8a0: mov ecx, esi */
  ecx = esi;
/* f8c8a2: fstp dword ptr [eax + 0x74] */
  WF32((uint32_t)(eax + 0x74u), ST0); FPOP();
/* f8c8a5: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8c8a7: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0xf8c8aau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8c8aa: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f8c8ad: mov eax, dword ptr [esi + 0x1ec] */
  eax = R32((uint32_t)(esi + 0x1ecu));
/* f8c8b3: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8c8b6: mov dword ptr [eax + 0x78], ecx */
  W32((uint32_t)(eax + 0x78u), ecx);
/* f8c8b9: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8c8bb: mov ecx, esi */
  ecx = esi;
/* f8c8bd: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0xf8c8c3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8c8c3: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f8c8c6: mov eax, dword ptr [esi + 0x1ec] */
  eax = R32((uint32_t)(esi + 0x1ecu));
/* f8c8cc: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8c8cf: mov dword ptr [eax + 0x70], ecx */
  W32((uint32_t)(eax + 0x70u), ecx);
/* f8c8d2: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8c8d4: mov ecx, esi */
  ecx = esi;
/* f8c8d6: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0xf8c8dcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8c8dc: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f8c8df: mov eax, dword ptr [esi + 0x1ec] */
  eax = R32((uint32_t)(esi + 0x1ecu));
/* f8c8e5: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8c8e8: mov dword ptr [eax + 0x6c], ecx */
  W32((uint32_t)(eax + 0x6cu), ecx);
/* f8c8eb: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8c8ed: mov ecx, esi */
  ecx = esi;
/* f8c8ef: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0xf8c8f5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8c8f5: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f8c8f8: mov eax, dword ptr [esi + 0x1ec] */
  eax = R32((uint32_t)(esi + 0x1ecu));
/* f8c8fe: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* f8c901: fadd dword ptr [eax + 0x74] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x74u)));
/* f8c904: mov ecx, dword ptr [esi + 0x1f0] */
  ecx = R32((uint32_t)(esi + 0x1f0u));
/* f8c90a: fstp dword ptr [ecx + 0x70] */
  WF32((uint32_t)(ecx + 0x70u), ST0); FPOP();
/* f8c90d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8c90f: mov ecx, esi */
  ecx = esi;
/* f8c911: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0xf8c917u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8c917: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f8c91a: mov eax, dword ptr [esi + 0x1ec] */
  eax = R32((uint32_t)(esi + 0x1ecu));
/* f8c920: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* f8c923: fadd dword ptr [eax + 0x74] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x74u)));
/* f8c926: mov ecx, dword ptr [esi + 0x1f4] */
  ecx = R32((uint32_t)(esi + 0x1f4u));
/* f8c92c: fstp dword ptr [ecx + 0x70] */
  WF32((uint32_t)(ecx + 0x70u), ST0); FPOP();
/* f8c92f: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8c931: mov ecx, esi */
  ecx = esi;
/* f8c933: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0xf8c939u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8c939: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f8c93c: mov eax, dword ptr [esi + 0x1f0] */
  eax = R32((uint32_t)(esi + 0x1f0u));
/* f8c942: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8c945: mov dword ptr [eax + 0x6c], ecx */
  W32((uint32_t)(eax + 0x6cu), ecx);
/* f8c948: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8c94a: mov ecx, esi */
  ecx = esi;
/* f8c94c: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0xf8c952u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8c952: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* f8c955: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* f8c958: mov eax, dword ptr [esi + 0x1f4] */
  eax = R32((uint32_t)(esi + 0x1f4u));
/* f8c95e: fstp dword ptr [eax + 0x6c] */
  WF32((uint32_t)(eax + 0x6cu), ST0); FPOP();
L_f8c961: /* f8c961: test byte ptr [esi + 0x58], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x58u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8c964: je 0xf8c971 */
  if (zf) goto L_f8c971;
L_f8c966: /* f8c966: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f8c969: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8c96a: mov ecx, esi */
  ecx = esi;
/* f8c96c: call 0xf71019 */
  esp -= 4; W32(esp, 0xf8c971u); SPILL(); f_f71019(); if (g_unwind) return; RELOAD();
L_f8c971: /* f8c971: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8c974: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8c975: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8c976: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8c97d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8c97e: mov esp, ebp */
  esp = ebp;
/* f8c980: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8c981: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f8c984(void) {
  LOAD_REGS();
L_f8c984: /* f8c984: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* f8c987: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f8c98c: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* f8c98f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8c990: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* f8c993: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8c998u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f8c998(); return;
}

void f_f8c998(void) {
  LOAD_REGS();
L_f8c998: /* f8c998: push 0xfa49e0 */
  { uint32_t v = 0xfa49e0u; esp -= 4; W32(esp, v); }
/* f8c99d: push 0xfb9b58 */
  { uint32_t v = 0xfb9b58u; esp -= 4; W32(esp, v); }
/* f8c9a2: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf8c9a8u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f8c9a8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8c9ab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8c9ad: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8c9af: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8c9b4u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f8c9b4: guest_badaddr(0xf8c9b4); return;
}

void f_f8ca60(void) {
  LOAD_REGS();
L_f8ca60: /* f8ca60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f8ca61: mov ebp, esp */
  ebp = esp;
/* f8ca63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f8ca65: push 0xf9a440 */
  { uint32_t v = 0xf9a440u; esp -= 4; W32(esp, v); }
/* f8ca6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8ca70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8ca71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f8ca78: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8ca7b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8ca7c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f8ca7d: mov esi, ecx */
  esi = ecx;
/* f8ca7f: mov al, byte ptr [esi + 0x58] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x58u))) & 0xffu);
/* f8ca82: mov bl, 8 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x8u) & 0xffu);
/* f8ca84: test bl, al */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8ca86: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8ca87: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f8ca8a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f8ca91: je 0xf8cc81 */
  if (zf) goto L_f8cc81;
L_f8ca97: /* f8ca97: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8ca99: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0xf8ca9cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8ca9c: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* f8ca9f: fmul dword ptr [0xfa49dc] */
  ST0 = ST0 * (F32((uint32_t)(0xfa49dcu)));
/* f8caa5: mov ecx, dword ptr [esi + 0x1f0] */
  ecx = R32((uint32_t)(esi + 0x1f0u));
/* f8caab: fst dword ptr [ecx + 0x74] */
  WF32((uint32_t)(ecx + 0x74u), ST0);
/* f8caae: mov edx, dword ptr [esi + 0x1f4] */
  edx = R32((uint32_t)(esi + 0x1f4u));
/* f8cab4: fst dword ptr [edx + 0x74] */
  WF32((uint32_t)(edx + 0x74u), ST0);
/* f8cab7: mov eax, dword ptr [esi + 0x1f0] */
  eax = R32((uint32_t)(esi + 0x1f0u));
/* f8cabd: fst dword ptr [eax + 0x78] */
  WF32((uint32_t)(eax + 0x78u), ST0);
/* f8cac0: mov ecx, dword ptr [esi + 0x1f4] */
  ecx = R32((uint32_t)(esi + 0x1f4u));
/* f8cac6: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* f8cac9: fstp dword ptr [ecx + 0x78] */
  WF32((uint32_t)(ecx + 0x78u), ST0); FPOP();
/* f8cacc: mov al, byte ptr [esi + 0x204] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x204u))) & 0xffu);
/* f8cad2: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8cad4: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8cad6: mov ecx, esi */
  ecx = esi;
/* f8cad8: je 0xf8cba1 */
  if (zf) goto L_f8cba1;
L_f8cade: /* f8cade: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0xf8cae4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8cae4: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f8cae7: mov eax, dword ptr [esi + 0x1f0] */
  eax = R32((uint32_t)(esi + 0x1f0u));
/* f8caed: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8caf0: mov dword ptr [eax + 0x70], ecx */
  W32((uint32_t)(eax + 0x70u), ecx);
/* f8caf3: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8caf5: mov ecx, esi */
  ecx = esi;
/* f8caf7: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0xf8cafdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8cafd: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f8cb00: mov eax, dword ptr [esi + 0x1f4] */
  eax = R32((uint32_t)(esi + 0x1f4u));
/* f8cb06: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8cb09: mov dword ptr [eax + 0x70], ecx */
  W32((uint32_t)(eax + 0x70u), ecx);
/* f8cb0c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8cb0e: mov ecx, esi */
  ecx = esi;
/* f8cb10: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0xf8cb16u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8cb16: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f8cb19: mov eax, dword ptr [esi + 0x1f0] */
  eax = R32((uint32_t)(esi + 0x1f0u));
/* f8cb1f: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8cb22: mov dword ptr [eax + 0x6c], ecx */
  W32((uint32_t)(eax + 0x6cu), ecx);
/* f8cb25: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8cb27: mov ecx, esi */
  ecx = esi;
/* f8cb29: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0xf8cb2fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8cb2f: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* f8cb32: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* f8cb35: mov eax, dword ptr [esi + 0x1f4] */
  eax = R32((uint32_t)(esi + 0x1f4u));
/* f8cb3b: mov ecx, esi */
  ecx = esi;
/* f8cb3d: fstp dword ptr [eax + 0x6c] */
  WF32((uint32_t)(eax + 0x6cu), ST0); FPOP();
/* f8cb40: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8cb42: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xf8cb45u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8cb45: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* f8cb48: fsub dword ptr [ebp - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffecu)));
/* f8cb4b: mov eax, dword ptr [esi + 0x1ec] */
  eax = R32((uint32_t)(esi + 0x1ecu));
/* f8cb51: mov ecx, esi */
  ecx = esi;
/* f8cb53: fstp dword ptr [eax + 0x74] */
  WF32((uint32_t)(eax + 0x74u), ST0); FPOP();
/* f8cb56: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8cb58: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0xf8cb5bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8cb5b: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f8cb5e: mov eax, dword ptr [esi + 0x1ec] */
  eax = R32((uint32_t)(esi + 0x1ecu));
/* f8cb64: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8cb67: mov dword ptr [eax + 0x78], ecx */
  W32((uint32_t)(eax + 0x78u), ecx);
/* f8cb6a: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8cb6c: mov ecx, esi */
  ecx = esi;
/* f8cb6e: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0xf8cb74u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8cb74: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* f8cb77: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* f8cb7a: mov eax, dword ptr [esi + 0x1ec] */
  eax = R32((uint32_t)(esi + 0x1ecu));
/* f8cb80: mov ecx, esi */
  ecx = esi;
/* f8cb82: fstp dword ptr [eax + 0x70] */
  WF32((uint32_t)(eax + 0x70u), ST0); FPOP();
/* f8cb85: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8cb87: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0xf8cb8du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8cb8d: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f8cb90: mov eax, dword ptr [esi + 0x1ec] */
  eax = R32((uint32_t)(esi + 0x1ecu));
/* f8cb96: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8cb99: mov dword ptr [eax + 0x6c], ecx */
  W32((uint32_t)(eax + 0x6cu), ecx);
/* f8cb9c: jmp 0xf8cc71 */
  goto L_f8cc71;
L_f8cba1: /* f8cba1: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xf8cba4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8cba4: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* f8cba7: fsub dword ptr [ebp - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffecu)));
/* f8cbaa: mov eax, dword ptr [esi + 0x1ec] */
  eax = R32((uint32_t)(esi + 0x1ecu));
/* f8cbb0: mov ecx, esi */
  ecx = esi;
/* f8cbb2: fstp dword ptr [eax + 0x74] */
  WF32((uint32_t)(eax + 0x74u), ST0); FPOP();
/* f8cbb5: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8cbb7: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0xf8cbbau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8cbba: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f8cbbd: mov eax, dword ptr [esi + 0x1ec] */
  eax = R32((uint32_t)(esi + 0x1ecu));
/* f8cbc3: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8cbc6: mov dword ptr [eax + 0x78], ecx */
  W32((uint32_t)(eax + 0x78u), ecx);
/* f8cbc9: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8cbcb: mov ecx, esi */
  ecx = esi;
/* f8cbcd: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0xf8cbd3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8cbd3: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f8cbd6: mov eax, dword ptr [esi + 0x1ec] */
  eax = R32((uint32_t)(esi + 0x1ecu));
/* f8cbdc: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8cbdf: mov dword ptr [eax + 0x70], ecx */
  W32((uint32_t)(eax + 0x70u), ecx);
/* f8cbe2: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8cbe4: mov ecx, esi */
  ecx = esi;
/* f8cbe6: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0xf8cbecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8cbec: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f8cbef: mov eax, dword ptr [esi + 0x1ec] */
  eax = R32((uint32_t)(esi + 0x1ecu));
/* f8cbf5: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8cbf8: mov dword ptr [eax + 0x6c], ecx */
  W32((uint32_t)(eax + 0x6cu), ecx);
/* f8cbfb: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8cbfd: mov ecx, esi */
  ecx = esi;
/* f8cbff: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0xf8cc05u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8cc05: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f8cc08: mov eax, dword ptr [esi + 0x1ec] */
  eax = R32((uint32_t)(esi + 0x1ecu));
/* f8cc0e: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* f8cc11: fadd dword ptr [eax + 0x74] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x74u)));
/* f8cc14: mov ecx, dword ptr [esi + 0x1f0] */
  ecx = R32((uint32_t)(esi + 0x1f0u));
/* f8cc1a: fstp dword ptr [ecx + 0x70] */
  WF32((uint32_t)(ecx + 0x70u), ST0); FPOP();
/* f8cc1d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8cc1f: mov ecx, esi */
  ecx = esi;
/* f8cc21: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0xf8cc27u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8cc27: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f8cc2a: mov eax, dword ptr [esi + 0x1ec] */
  eax = R32((uint32_t)(esi + 0x1ecu));
/* f8cc30: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* f8cc33: fadd dword ptr [eax + 0x74] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x74u)));
/* f8cc36: mov ecx, dword ptr [esi + 0x1f4] */
  ecx = R32((uint32_t)(esi + 0x1f4u));
/* f8cc3c: fstp dword ptr [ecx + 0x70] */
  WF32((uint32_t)(ecx + 0x70u), ST0); FPOP();
/* f8cc3f: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8cc41: mov ecx, esi */
  ecx = esi;
/* f8cc43: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0xf8cc49u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8cc49: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f8cc4c: mov eax, dword ptr [esi + 0x1f0] */
  eax = R32((uint32_t)(esi + 0x1f0u));
/* f8cc52: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8cc55: mov dword ptr [eax + 0x6c], ecx */
  W32((uint32_t)(eax + 0x6cu), ecx);
/* f8cc58: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8cc5a: mov ecx, esi */
  ecx = esi;
/* f8cc5c: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0xf8cc62u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8cc62: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* f8cc65: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* f8cc68: mov eax, dword ptr [esi + 0x1f4] */
  eax = R32((uint32_t)(esi + 0x1f4u));
/* f8cc6e: fstp dword ptr [eax + 0x6c] */
  WF32((uint32_t)(eax + 0x6cu), ST0); FPOP();
L_f8cc71: /* f8cc71: test byte ptr [esi + 0x58], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x58u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8cc74: je 0xf8cc81 */
  if (zf) goto L_f8cc81;
L_f8cc76: /* f8cc76: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f8cc79: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8cc7a: mov ecx, esi */
  ecx = esi;
/* f8cc7c: call 0xf71019 */
  esp -= 4; W32(esp, 0xf8cc81u); SPILL(); f_f71019(); if (g_unwind) return; RELOAD();
L_f8cc81: /* f8cc81: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8cc84: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8cc85: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8cc86: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8cc8d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8cc8e: mov esp, ebp */
  esp = ebp;
/* f8cc90: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8cc91: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f8cc94(void) {
  LOAD_REGS();
L_f8cc94: /* f8cc94: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* f8cc97: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f8cc9c: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* f8cc9f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8cca0: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* f8cca3: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8cca8u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f8cca8(); return;
}

void f_f8cca8(void) {
  LOAD_REGS();
L_f8cca8: /* f8cca8: push 0xfa4a14 */
  { uint32_t v = 0xfa4a14u; esp -= 4; W32(esp, v); }
/* f8ccad: push 0xfb9b60 */
  { uint32_t v = 0xfb9b60u; esp -= 4; W32(esp, v); }
/* f8ccb2: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf8ccb8u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f8ccb8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8ccbb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8ccbd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8ccbf: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8ccc4u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f8ccc4: guest_badaddr(0xf8ccc4); return;
}

void f_f8cd70(void) {
  LOAD_REGS();
L_f8cd70: /* f8cd70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f8cd71: mov ebp, esp */
  ebp = esp;
/* f8cd73: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f8cd75: push 0xf9a450 */
  { uint32_t v = 0xf9a450u; esp -= 4; W32(esp, v); }
/* f8cd7a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8cd80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8cd81: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f8cd88: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8cd8b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8cd8c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f8cd8d: mov esi, ecx */
  esi = ecx;
/* f8cd8f: test byte ptr [esi + 0x58], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x58u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8cd93: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8cd94: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f8cd97: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f8cd9e: je 0xf8ce39 */
  if (zf) goto L_f8ce39;
L_f8cda4: /* f8cda4: mov eax, dword ptr [esi + 0xa0] */
  eax = R32((uint32_t)(esi + 0xa0u));
/* f8cdaa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8cdac: je 0xf8ce39 */
  if (zf) goto L_f8ce39;
L_f8cdb2: /* f8cdb2: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8cdb4: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0xf8cdb7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8cdb7: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* f8cdba: fcomp dword ptr [0xfa4394] */
  fpu_com(ST0, F32((uint32_t)(0xfa4394u)));
  FPOP();
/* f8cdc0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f8cdc2: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f8cdc5: jnp 0xf8ce39 */
  if (!pf) goto L_f8ce39;
L_f8cdc7: /* f8cdc7: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8cdc9: mov ecx, esi */
  ecx = esi;
/* f8cdcb: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0xf8cdceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8cdce: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* f8cdd1: fcomp dword ptr [0xfa4394] */
  fpu_com(ST0, F32((uint32_t)(0xfa4394u)));
  FPOP();
/* f8cdd7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f8cdd9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f8cddc: jnp 0xf8ce39 */
  if (!pf) goto L_f8ce39;
L_f8cdde: /* f8cdde: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* f8cde1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8cde2: mov ecx, esi */
  ecx = esi;
/* f8cde4: call 0xf716a9 */
  esp -= 4; W32(esp, 0xf8cde9u); SPILL(); f_f716a9(); if (g_unwind) return; RELOAD();
/* f8cde9: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8cdeb: mov ecx, esi */
  ecx = esi;
/* f8cded: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0xf8cdf0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8cdf0: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* f8cdf3: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8cdf5: mov ecx, esi */
  ecx = esi;
/* f8cdf7: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xf8cdfau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8cdfa: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* f8cdfd: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8cdff: mov ecx, esi */
  ecx = esi;
/* f8ce01: call dword ptr [eax + 0x84] */
  { uint32_t t = R32((uint32_t)(eax + 0x84u)); esp -= 4; W32(esp, 0xf8ce07u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8ce07: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f8ce0a: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8ce0c: mov ecx, esi */
  ecx = esi;
/* f8ce0e: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0xf8ce14u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8ce14: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* f8ce17: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f8ce1a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f8ce1d: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8ce20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8ce21: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* f8ce24: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8ce25: xor ecx, ecx */
  ecx = 0;
/* f8ce27: mov cl, byte ptr [esi + 0x30] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x30u))) & 0xffu);
/* f8ce2a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8ce2b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8ce2c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8ce2d: mov ecx, dword ptr [esi + 0xa0] */
  ecx = R32((uint32_t)(esi + 0xa0u));
/* f8ce33: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8ce34: call 0xf71a64 */
  esp -= 4; W32(esp, 0xf8ce39u); SPILL(); f_f71a64(); if (g_unwind) return; RELOAD();
L_f8ce39: /* f8ce39: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8ce3c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8ce3d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8ce3e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8ce45: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8ce46: mov esp, ebp */
  esp = ebp;
/* f8ce48: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8ce49: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f8ce4c(void) {
  LOAD_REGS();
L_f8ce4c: /* f8ce4c: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* f8ce4f: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f8ce54: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* f8ce57: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8ce58: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* f8ce5b: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8ce60u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f8ce60(); return;
}

void f_f8ce60(void) {
  LOAD_REGS();
L_f8ce60: /* f8ce60: push 0xfa4a44 */
  { uint32_t v = 0xfa4a44u; esp -= 4; W32(esp, v); }
/* f8ce65: push 0xfb9b68 */
  { uint32_t v = 0xfb9b68u; esp -= 4; W32(esp, v); }
/* f8ce6a: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf8ce70u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f8ce70: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8ce73: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8ce75: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8ce77: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8ce7cu); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f8ce7c: guest_badaddr(0xf8ce7c); return;
}

void f_f8ced0(void) {
  LOAD_REGS();
L_f8ced0: /* f8ced0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f8ced1: mov ebp, esp */
  ebp = esp;
/* f8ced3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f8ced5: push 0xf9a460 */
  { uint32_t v = 0xf9a460u; esp -= 4; W32(esp, v); }
/* f8ceda: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8cee0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8cee1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f8cee8: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8ceeb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f8ceee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8ceef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f8cef0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8cef1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f8cef4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8cef5: mov esi, ecx */
  esi = ecx;
/* f8cef7: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f8cefe: call 0xf710d7 */
  esp -= 4; W32(esp, 0xf8cf03u); SPILL(); f_f710d7(); if (g_unwind) return; RELOAD();
/* f8cf03: test byte ptr [esi + 0x58], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x58u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8cf07: je 0xf8d0a2 */
  if (zf) goto L_f8d0a2;
L_f8cf0d: /* f8cf0d: mov eax, dword ptr [esi + 0x1ec] */
  eax = R32((uint32_t)(esi + 0x1ecu));
/* f8cf13: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8cf15: je 0xf8d0a2 */
  if (zf) goto L_f8d0a2;
L_f8cf1b: /* f8cf1b: mov ecx, dword ptr [eax + 0x1ec] */
  ecx = R32((uint32_t)(eax + 0x1ecu));
/* f8cf21: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8cf23: je 0xf8d0a2 */
  if (zf) goto L_f8d0a2;
L_f8cf29: /* f8cf29: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8cf2b: mov ecx, esi */
  ecx = esi;
/* f8cf2d: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xf8cf30u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8cf30: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* f8cf33: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f8cf36: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8cf38: mov ecx, esi */
  ecx = esi;
/* f8cf3a: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* f8cf3d: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0xf8cf40u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8cf40: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* f8cf43: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* f8cf46: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8cf48: mov ecx, esi */
  ecx = esi;
/* f8cf4a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* f8cf4d: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0xf8cf53u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8cf53: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f8cf56: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8cf58: mov ecx, esi */
  ecx = esi;
/* f8cf5a: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0xf8cf60u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8cf60: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* f8cf63: mov ecx, dword ptr [esi + 0x1f0] */
  ecx = R32((uint32_t)(esi + 0x1f0u));
/* f8cf69: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* f8cf6c: fadd dword ptr [ebp + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x8u)));
/* f8cf6f: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* f8cf72: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* f8cf75: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f8cf77: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8cf78: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f8cf7b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8cf7c: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* f8cf7f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8cf80: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* f8cf82: fsubr dword ptr [ebp - 0x14] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffecu))) - ST0;
/* f8cf85: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f8cf88: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8cf89: call dword ptr [edx + 0xac] */
  { uint32_t t = R32((uint32_t)(edx + 0xacu)); esp -= 4; W32(esp, 0xf8cf8fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8cf8f: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8cf91: mov ecx, esi */
  ecx = esi;
/* f8cf93: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0xf8cf99u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8cf99: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* f8cf9c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8cf9e: mov ecx, esi */
  ecx = esi;
/* f8cfa0: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0xf8cfa6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8cfa6: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f8cfa9: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* f8cfac: mov ecx, dword ptr [esi + 0x1f4] */
  ecx = R32((uint32_t)(esi + 0x1f4u));
/* f8cfb2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f8cfb4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8cfb5: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8cfb8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8cfb9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8cfba: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8cfbb: call dword ptr [edx + 0xac] */
  { uint32_t t = R32((uint32_t)(edx + 0xacu)); esp -= 4; W32(esp, 0xf8cfc1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8cfc1: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8cfc3: mov ecx, esi */
  ecx = esi;
/* f8cfc5: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0xf8cfcbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8cfcb: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* f8cfce: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8cfd0: mov ecx, esi */
  ecx = esi;
/* f8cfd2: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0xf8cfd8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8cfd8: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f8cfdb: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* f8cfde: mov ecx, dword ptr [esi + 0x1f8] */
  ecx = R32((uint32_t)(esi + 0x1f8u));
/* f8cfe4: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* f8cfe7: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8cfea: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f8cfec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8cfed: fsub dword ptr [ebp + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x8u)));
/* f8cff0: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f8cff3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8cff4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8cff5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8cff6: call dword ptr [edx + 0xac] */
  { uint32_t t = R32((uint32_t)(edx + 0xacu)); esp -= 4; W32(esp, 0xf8cffcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8cffc: mov ecx, dword ptr [esi + 0x1f0] */
  ecx = R32((uint32_t)(esi + 0x1f0u));
/* f8d002: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f8d004: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0xf8d007u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8d007: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* f8d00a: mov eax, dword ptr [esi + 0x1ec] */
  eax = R32((uint32_t)(esi + 0x1ecu));
/* f8d010: fild dword ptr [eax + 0x1e0] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x1e0u)); FPUSH(v); }
/* f8d016: fidiv dword ptr [eax + 0x1ec] */
  ST0 = ST0 / ((double)(int32_t)R32((uint32_t)(eax + 0x1ecu)));
/* f8d01c: fmul st(1) */
  ST0 = ST0 * STI(1);
/* f8d01e: fst dword ptr [esi + 0x204] */
  WF32((uint32_t)(esi + 0x204u), ST0);
/* f8d024: fcomp dword ptr [0xfa4ac0] */
  fpu_com(ST0, F32((uint32_t)(0xfa4ac0u)));
  FPOP();
/* f8d02a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* f8d02c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* f8d02f: jp 0xf8d03b */
  if (pf) goto L_f8d03b;
L_f8d031: /* f8d031: mov dword ptr [esi + 0x204], 0x41400000 */
  W32((uint32_t)(esi + 0x204u), 0x41400000u);
L_f8d03b: /* f8d03b: fsub dword ptr [esi + 0x204] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x204u)));
/* f8d041: mov ecx, dword ptr [esi + 0x1f0] */
  ecx = R32((uint32_t)(esi + 0x1f0u));
/* f8d047: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* f8d049: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* f8d04c: call dword ptr [eax + 0x84] */
  { uint32_t t = R32((uint32_t)(eax + 0x84u)); esp -= 4; W32(esp, 0xf8d052u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8d052: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* f8d055: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8d056: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* f8d059: fmul dword ptr [esi + 0x200] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x200u)));
/* f8d05f: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f8d062: call dword ptr [0xfce424] */
  esp -= 4; W32(esp, 0xf8d068u); SPILL(); f_4e392c(); if (g_unwind) return; /* Core!?appFloor@@YAHM@Z */ RELOAD();
/* f8d068: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8d06a: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* f8d06d: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* f8d070: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8d073: mov ecx, esi */
  ecx = esi;
/* f8d075: fadd dword ptr [ebp - 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe4u)));
/* f8d078: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* f8d07b: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0xf8d081u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8d081: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* f8d084: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* f8d087: mov ecx, dword ptr [esi + 0x1fc] */
  ecx = R32((uint32_t)(esi + 0x1fcu));
/* f8d08d: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* f8d08f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8d090: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* f8d093: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8d094: mov edx, dword ptr [esi + 0x204] */
  edx = R32((uint32_t)(esi + 0x204u));
/* f8d09a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8d09b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8d09c: call dword ptr [eax + 0xac] */
  { uint32_t t = R32((uint32_t)(eax + 0xacu)); esp -= 4; W32(esp, 0xf8d0a2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f8d0a2: /* f8d0a2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8d0a5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8d0a6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8d0a7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8d0ae: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8d0af: mov esp, ebp */
  esp = ebp;
/* f8d0b1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8d0b2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f8d0b5(void) {
  LOAD_REGS();
L_f8d0b5: /* f8d0b5: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* f8d0b8: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f8d0bd: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* f8d0c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8d0c1: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* f8d0c4: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8d0c9u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f8d0c9(); return;
}

void f_f8d0c9(void) {
  LOAD_REGS();
L_f8d0c9: /* f8d0c9: push 0xfa4a80 */
  { uint32_t v = 0xfa4a80u; esp -= 4; W32(esp, v); }
/* f8d0ce: push 0xfb9b70 */
  { uint32_t v = 0xfb9b70u; esp -= 4; W32(esp, v); }
/* f8d0d3: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf8d0d9u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f8d0d9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8d0dc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8d0de: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8d0e0: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8d0e5u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f8d0e5: guest_badaddr(0xf8d0e5); return;
}

void f_f8d180(void) {
  LOAD_REGS();
L_f8d180: /* f8d180: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f8d181: mov ebp, esp */
  ebp = esp;
/* f8d183: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f8d185: push 0xf9a470 */
  { uint32_t v = 0xf9a470u; esp -= 4; W32(esp, v); }
/* f8d18a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8d190: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8d191: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f8d198: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8d19b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f8d19e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8d19f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f8d1a0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8d1a1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f8d1a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8d1a5: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f8d1ac: call 0xf71019 */
  esp -= 4; W32(esp, 0xf8d1b1u); SPILL(); f_f71019(); if (g_unwind) return; RELOAD();
/* f8d1b1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8d1b4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8d1b5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8d1b6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8d1bd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8d1be: mov esp, ebp */
  esp = ebp;
/* f8d1c0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8d1c1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f8d1c4(void) {
  LOAD_REGS();
L_f8d1c4: /* f8d1c4: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8d1c7: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f8d1cc: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* f8d1cf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8d1d0: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* f8d1d3: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8d1d8u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f8d1d8(); return;
}

void f_f8d1d8(void) {
  LOAD_REGS();
L_f8d1d8: /* f8d1d8: push 0xfa4ac4 */
  { uint32_t v = 0xfa4ac4u; esp -= 4; W32(esp, v); }
/* f8d1dd: push 0xfb9b80 */
  { uint32_t v = 0xfb9b80u; esp -= 4; W32(esp, v); }
/* f8d1e2: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf8d1e8u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f8d1e8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8d1eb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8d1ed: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8d1ef: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8d1f4u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f8d1f4: guest_badaddr(0xf8d1f4); return;
}

void f_f8d220(void) {
  LOAD_REGS();
L_f8d220: /* f8d220: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f8d221: mov ebp, esp */
  ebp = esp;
/* f8d223: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f8d225: push 0xf9a480 */
  { uint32_t v = 0xf9a480u; esp -= 4; W32(esp, v); }
/* f8d22a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8d230: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8d231: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f8d238: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8d23b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* f8d23e: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* f8d241: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8d242: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f8d243: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8d244: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f8d247: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8d248: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8d249: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f8d250: call 0xf712e4 */
  esp -= 4; W32(esp, 0xf8d255u); SPILL(); f_f712e4(); if (g_unwind) return; RELOAD();
/* f8d255: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8d258: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8d259: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8d25a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8d261: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8d262: mov esp, ebp */
  esp = ebp;
/* f8d264: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8d265: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f8d268(void) {
  LOAD_REGS();
L_f8d268: /* f8d268: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8d26b: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f8d270: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* f8d273: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8d274: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* f8d277: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8d27cu); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f8d27c(); return;
}

void f_f8d27c(void) {
  LOAD_REGS();
L_f8d27c: /* f8d27c: push 0xfa4aec */
  { uint32_t v = 0xfa4aecu; esp -= 4; W32(esp, v); }
/* f8d281: push 0xfb9b88 */
  { uint32_t v = 0xfb9b88u; esp -= 4; W32(esp, v); }
/* f8d286: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf8d28cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f8d28c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8d28f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8d291: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8d293: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8d298u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f8d298: guest_badaddr(0xf8d298); return;
}

void f_f8d2c0(void) {
  LOAD_REGS();
L_f8d2c0: /* f8d2c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f8d2c1: mov ebp, esp */
  ebp = esp;
/* f8d2c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f8d2c5: push 0xf9a490 */
  { uint32_t v = 0xf9a490u; esp -= 4; W32(esp, v); }
/* f8d2ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8d2d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8d2d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f8d2d8: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8d2db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8d2dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f8d2dd: mov esi, ecx */
  esi = ecx;
/* f8d2df: test byte ptr [esi + 0x58], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x58u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8d2e3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8d2e4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f8d2e7: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f8d2ee: je 0xf8d346 */
  if (zf) goto L_f8d346;
L_f8d2f0: /* f8d2f0: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* f8d2f3: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8d2f5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8d2f7: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* f8d2fa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8d2fb: mov ecx, dword ptr [0xfba474] */
  ecx = R32((uint32_t)(0xfba474u));
/* f8d301: lea edx, [esi + 0x114] */
  edx = (uint32_t)(esi + 0x114u);
/* f8d307: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8d308: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8d309: mov ecx, esi */
  ecx = esi;
/* f8d30b: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* f8d312: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* f8d315: call dword ptr [eax + 0x14] */
  { uint32_t t = R32((uint32_t)(eax + 0x14u)); esp -= 4; W32(esp, 0xf8d318u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8d318: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* f8d31b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8d31d: jne 0xf8d346 */
  if (!zf) goto L_f8d346;
L_f8d31f: /* f8d31f: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* f8d322: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8d324: jne 0xf8d359 */
  if (!zf) goto L_f8d359;
L_f8d326: /* f8d326: mov ecx, esi */
  ecx = esi;
/* f8d328: call dword ptr [0xfce41c] */
  esp -= 4; W32(esp, 0xf8d32eu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* f8d32e: mov edx, dword ptr [0xfce428] */
  edx = R32((uint32_t)(0xfce428u));
/* f8d334: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8d335: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* f8d337: push 0xfb9b90 */
  { uint32_t v = 0xfb9b90u; esp -= 4; W32(esp, v); }
/* f8d33c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8d33d: call dword ptr [0xfce414] */
  esp -= 4; W32(esp, 0xf8d343u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* f8d343: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f8d346: /* f8d346: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8d349: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8d350: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8d351: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8d352: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8d353: mov esp, ebp */
  esp = ebp;
/* f8d355: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8d356: ret 4 */
  esp += 8; SPILL(); return;
L_f8d359: /* f8d359: mov eax, dword ptr [esi + 0x1ec] */
  eax = R32((uint32_t)(esi + 0x1ecu));
/* f8d35f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8d361: je 0xf8d3b2 */
  if (zf) goto L_f8d3b2;
L_f8d363: /* f8d363: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8d365: mov ecx, esi */
  ecx = esi;
/* f8d367: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0xf8d36au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8d36a: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* f8d36d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8d36f: mov ecx, esi */
  ecx = esi;
/* f8d371: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0xf8d374u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8d374: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* f8d377: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8d379: mov ecx, esi */
  ecx = esi;
/* f8d37b: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0xf8d381u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8d381: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f8d384: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8d386: mov ecx, esi */
  ecx = esi;
/* f8d388: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0xf8d38eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8d38e: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* f8d391: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* f8d394: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* f8d397: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* f8d399: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8d39a: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8d39d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8d39e: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* f8d3a1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8d3a2: mov eax, dword ptr [esi + 0x1ec] */
  eax = R32((uint32_t)(esi + 0x1ecu));
/* f8d3a8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8d3a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8d3aa: mov ecx, edi */
  ecx = edi;
/* f8d3ac: call dword ptr [edx + 0xa8] */
  { uint32_t t = R32((uint32_t)(edx + 0xa8u)); esp -= 4; W32(esp, 0xf8d3b2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f8d3b2: /* f8d3b2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8d3b3: mov ecx, esi */
  ecx = esi;
/* f8d3b5: call 0xf71019 */
  esp -= 4; W32(esp, 0xf8d3bau); SPILL(); f_f71019(); if (g_unwind) return; RELOAD();
/* f8d3ba: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8d3bd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8d3be: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8d3bf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8d3c6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8d3c7: mov esp, ebp */
  esp = ebp;
/* f8d3c9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8d3ca: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f8d3cd(void) {
  LOAD_REGS();
L_f8d3cd: /* f8d3cd: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* f8d3d0: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f8d3d5: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* f8d3d8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8d3d9: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* f8d3dc: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8d3e1u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f8d3e1(); return;
}

void f_f8d3e1(void) {
  LOAD_REGS();
L_f8d3e1: /* f8d3e1: push 0xfa4b28 */
  { uint32_t v = 0xfa4b28u; esp -= 4; W32(esp, v); }
/* f8d3e6: push 0xfb9bb8 */
  { uint32_t v = 0xfb9bb8u; esp -= 4; W32(esp, v); }
/* f8d3eb: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf8d3f1u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f8d3f1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8d3f4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8d3f6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8d3f8: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8d3fdu); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f8d3fd: guest_badaddr(0xf8d3fd); return;
}

void f_f8d450(void) {
  LOAD_REGS();
L_f8d450: /* f8d450: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f8d451: mov ebp, esp */
  ebp = esp;
/* f8d453: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f8d455: push 0xf9a4a0 */
  { uint32_t v = 0xf9a4a0u; esp -= 4; W32(esp, v); }
/* f8d45a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8d460: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8d461: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f8d468: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8d46b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8d46c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f8d46d: mov esi, ecx */
  esi = ecx;
/* f8d46f: test byte ptr [esi + 0x58], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x58u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8d473: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8d474: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f8d477: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f8d47e: je 0xf8d505 */
  if (zf) goto L_f8d505;
L_f8d484: /* f8d484: mov eax, dword ptr [esi + 0xa0] */
  eax = R32((uint32_t)(esi + 0xa0u));
/* f8d48a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8d48c: je 0xf8d505 */
  if (zf) goto L_f8d505;
L_f8d48e: /* f8d48e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* f8d491: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8d492: call 0xf711fe */
  esp -= 4; W32(esp, 0xf8d497u); SPILL(); f_f711fe(); if (g_unwind) return; RELOAD();
/* f8d497: movzx ecx, byte ptr [esi + 0x30] */
  ecx = (uint32_t)(R8((uint32_t)(esi + 0x30u)));
/* f8d49b: mov eax, dword ptr [edi + 0x60] */
  eax = R32((uint32_t)(edi + 0x60u));
/* f8d49e: mov edx, dword ptr [esi + 0xa0] */
  edx = R32((uint32_t)(esi + 0xa0u));
/* f8d4a4: mov ecx, dword ptr [edx + ecx*4 + 0x84] */
  ecx = R32((uint32_t)(edx + ecx*4 + 0x84u));
/* f8d4ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8d4ac: call 0xf71a14 */
  esp -= 4; W32(esp, 0xf8d4b1u); SPILL(); f_f71a14(); if (g_unwind) return; RELOAD();
/* f8d4b1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8d4b3: mov dword ptr [edi + 0x28], eax */
  W32((uint32_t)(edi + 0x28u), eax);
/* f8d4b6: je 0xf8d505 */
  if (zf) goto L_f8d505;
L_f8d4b8: /* f8d4b8: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* f8d4ba: push 0xfb9bc0 */
  { uint32_t v = 0xfb9bc0u; esp -= 4; W32(esp, v); }
/* f8d4bf: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* f8d4c2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8d4c3: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* f8d4c6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8d4c7: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* f8d4cc: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* f8d4d1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8d4d2: mov ecx, edi */
  ecx = edi;
/* f8d4d4: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0xf8d4dau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8d4da: fld dword ptr [esi + 0xc0] */
  { double v = F32((uint32_t)(esi + 0xc0u)); FPUSH(v); }
/* f8d4e0: fsub dword ptr [esi + 0xb8] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xb8u)));
/* f8d4e6: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* f8d4e9: fidiv dword ptr [ebp + 8] */
  ST0 = ST0 / ((double)(int32_t)R32((uint32_t)(ebp + 0x8u)));
/* f8d4ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8d4ed: mov dword ptr [esi + 0x1e4], edx */
  W32((uint32_t)(esi + 0x1e4u), edx);
/* f8d4f3: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f8d4f6: call dword ptr [0xfce424] */
  esp -= 4; W32(esp, 0xf8d4fcu); SPILL(); f_4e392c(); if (g_unwind) return; /* Core!?appFloor@@YAHM@Z */ RELOAD();
/* f8d4fc: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8d4ff: mov dword ptr [esi + 0x1e0], eax */
  W32((uint32_t)(esi + 0x1e0u), eax);
L_f8d505: /* f8d505: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8d508: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8d509: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8d50a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8d511: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8d512: mov esp, ebp */
  esp = ebp;
/* f8d514: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8d515: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f8d518(void) {
  LOAD_REGS();
L_f8d518: /* f8d518: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* f8d51b: push 0xfa7d60 */
  { uint32_t v = 0xfa7d60u; esp -= 4; W32(esp, v); }
/* f8d520: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* f8d523: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8d524: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* f8d527: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8d52cu); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
  SPILL(); f_f8d52c(); return;
}

void f_f8d52c(void) {
  LOAD_REGS();
L_f8d52c: /* f8d52c: push 0xfa4b4c */
  { uint32_t v = 0xfa4b4cu; esp -= 4; W32(esp, v); }
/* f8d531: push 0xfb9bcc */
  { uint32_t v = 0xfb9bccu; esp -= 4; W32(esp, v); }
/* f8d536: call dword ptr [0xfce3e0] */
  esp -= 4; W32(esp, 0xf8d53cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* f8d53c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8d53f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8d541: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8d543: call 0xf979d4 */
  esp -= 4; W32(esp, 0xf8d548u); SPILL(); f_f979d4(); if (g_unwind) return; RELOAD();
L_f8d548: guest_badaddr(0xf8d548); return;
}

void f_f8d590(void) {
  LOAD_REGS();
L_f8d590: /* f8d590: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f8d591: mov ebp, esp */
  ebp = esp;
/* f8d593: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f8d595: push 0xf9a4b0 */
  { uint32_t v = 0xf9a4b0u; esp -= 4; W32(esp, v); }
/* f8d59a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8d5a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8d5a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f8d5a8: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8d5ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f8d5ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f8d5ad: mov esi, ecx */
  esi = ecx;
/* f8d5af: test byte ptr [esi + 0x58], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x58u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8d5b3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8d5b4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* f8d5b7: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* f8d5be: je 0xf8d8c8 */
  if (zf) goto L_f8d8c8;
L_f8d5c4: /* f8d5c4: mov eax, dword ptr [esi + 0xa0] */
  eax = R32((uint32_t)(esi + 0xa0u));
/* f8d5ca: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8d5cc: je 0xf8d8c8 */
  if (zf) goto L_f8d8c8;
L_f8d5d2: /* f8d5d2: mov eax, dword ptr [esi + 0x1ec] */
  eax = R32((uint32_t)(esi + 0x1ecu));
/* f8d5d8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8d5da: jne 0xf8d5e9 */
  if (!zf) goto L_f8d5e9;
L_f8d5dc: /* f8d5dc: test byte ptr [esi + 0x1f0], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x1f0u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8d5e3: je 0xf8d8c8 */
  if (zf) goto L_f8d8c8;
L_f8d5e9: /* f8d5e9: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8d5eb: mov ecx, esi */
  ecx = esi;
/* f8d5ed: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0xf8d5f0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8d5f0: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* f8d5f3: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8d5f5: mov ecx, esi */
  ecx = esi;
/* f8d5f7: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xf8d5fau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8d5fa: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* f8d5fd: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8d5ff: mov ecx, esi */
  ecx = esi;
/* f8d601: call dword ptr [eax + 0x84] */
  { uint32_t t = R32((uint32_t)(eax + 0x84u)); esp -= 4; W32(esp, 0xf8d607u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8d607: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* f8d60a: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f8d60c: mov ecx, esi */
  ecx = esi;
/* f8d60e: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0xf8d614u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8d614: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* f8d617: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8d61a: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* f8d61d: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* f8d620: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8d621: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* f8d624: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8d625: xor ecx, ecx */
  ecx = 0;
/* f8d627: mov cl, byte ptr [esi + 0x30] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x30u))) & 0xffu);
/* f8d62a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8d62b: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* f8d62e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8d62f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8d630: mov ecx, dword ptr [esi + 0xa0] */
  ecx = R32((uint32_t)(esi + 0xa0u));
/* f8d636: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8d637: call 0xf71a64 */
  esp -= 4; W32(esp, 0xf8d63cu); SPILL(); f_f71a64(); if (g_unwind) return; RELOAD();
/* f8d63c: fld dword ptr [esi + 0xb8] */
  { double v = F32((uint32_t)(esi + 0xb8u)); FPUSH(v); }
/* f8d642: call 0xf979dc */
  esp -= 4; W32(esp, 0xf8d647u); SPILL(); f_f979dc(); if (g_unwind) return; RELOAD();
/* f8d647: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* f8d64a: test byte ptr [esi + 0x1f0], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x1f0u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f8d651: je 0xf8d6b4 */
  if (zf) goto L_f8d6b4;
L_f8d653: /* f8d653: mov edi, dword ptr [esi + 0x28] */
  edi = R32((uint32_t)(esi + 0x28u));
/* f8d656: mov ecx, edi */
  ecx = edi;
/* f8d658: call 0xf71686 */
  esp -= 4; W32(esp, 0xf8d65du); SPILL(); f_f71686(); if (g_unwind) return; RELOAD();
/* f8d65d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8d65f: je 0xf8d6b4 */
  if (zf) goto L_f8d6b4;
L_f8d661: /* f8d661: fld dword ptr [edi + 0xac] */
  { double v = F32((uint32_t)(edi + 0xacu)); FPUSH(v); }
/* f8d667: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* f8d669: call 0xf979dc */
  esp -= 4; W32(esp, 0xf8d66eu); SPILL(); f_f979dc(); if (g_unwind) return; RELOAD();
/* f8d66e: fld dword ptr [edi + 0xa8] */
  { double v = F32((uint32_t)(edi + 0xa8u)); FPUSH(v); }
/* f8d674: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8d675: call 0xf979dc */
  esp -= 4; W32(esp, 0xf8d67au); SPILL(); f_f979dc(); if (g_unwind) return; RELOAD();
/* f8d67a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8d67b: mov ecx, esi */
  ecx = esi;
/* f8d67d: call dword ptr [ebx + 0x70] */
  { uint32_t t = R32((uint32_t)(ebx + 0x70u)); esp -= 4; W32(esp, 0xf8d680u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8d680: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8d682: je 0xf8d6b4 */
  if (zf) goto L_f8d6b4;
L_f8d684: /* f8d684: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* f8d687: fld dword ptr [eax + 0xac] */
  { double v = F32((uint32_t)(eax + 0xacu)); FPUSH(v); }
/* f8d68d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8d68e: fsub dword ptr [esi + 0xb8] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xb8u)));
/* f8d694: fidiv dword ptr [esi + 0x1e4] */
  ST0 = ST0 / ((double)(int32_t)R32((uint32_t)(esi + 0x1e4u)));
/* f8d69a: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f8d69d: call dword ptr [0xfce424] */
  esp -= 4; W32(esp, 0xf8d6a3u); SPILL(); f_4e392c(); if (g_unwind) return; /* Core!?appFloor@@YAHM@Z */ RELOAD();
/* f8d6a3: mov ecx, dword ptr [esi + 0x1d8] */
  ecx = R32((uint32_t)(esi + 0x1d8u));
/* f8d6a9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8d6ac: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f8d6ae: mov dword ptr [esi + 0x1dc], ecx */
  W32((uint32_t)(esi + 0x1dcu), ecx);
L_f8d6b4: /* f8d6b4: xor ebx, ebx */
  ebx = 0;
/* f8d6b6: jmp 0xf8d6c0 */
  goto L_f8d6c0;
L_f8d6c0: /* f8d6c0: cmp ebx, dword ptr [esi + 0x1e0] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1e0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f8d6c6: jge 0xf8d8c8 */
  if ((sf == of)) goto L_f8d8c8;
L_f8d6cc: /* f8d6cc: mov eax, dword ptr [esi + 0x1d8] */
  eax = R32((uint32_t)(esi + 0x1d8u));
/* f8d6d2: mov ecx, dword ptr [esi + 0x1ec] */
  ecx = R32((uint32_t)(esi + 0x1ecu));
/* f8d6d8: mov dl, byte ptr [esi + 0x30] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x30u))) & 0xffu);
/* f8d6db: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f8d6dd: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f8d6df: mov byte ptr [ebp - 0x11], dl */
  W8((uint32_t)(ebp + 0xffffffefu), (edx & 0xffu));
/* f8d6e2: jge 0xf8d87e */
  if ((sf == of)) goto L_f8d87e;
L_f8d6e8: /* f8d6e8: mov edx, dword ptr [esi + 0x1dc] */
  edx = R32((uint32_t)(esi + 0x1dcu));
/* f8d6ee: xor ecx, ecx */
  ecx = 0;
/* f8d6f0: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f8d6f2: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* f8d6f5: xor edx, edx */
  edx = 0;
/* f8d6f7: mov edi, ecx */
  edi = ecx;
/* f8d6f9: mov ecx, dword ptr [esi + 0x1f8] */
  ecx = R32((uint32_t)(esi + 0x1f8u));
/* f8d6ff: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f8d701: je 0xf8d752 */
  if (zf) goto L_f8d752;
L_f8d703: /* f8d703: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f8d705: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0xf8d708u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8d708: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f8d70a: jne 0xf8d750 */
  if (!zf) goto L_f8d750;
L_f8d70c: /* f8d70c: fild dword ptr [esi + 0x1e4] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x1e4u)); FPUSH(v); }
/* f8d712: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* f8d718: mov ecx, dword ptr [esi + 0x1d8] */
  ecx = R32((uint32_t)(esi + 0x1d8u));
/* f8d71e: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* f8d721: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8d722: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8d725: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* f8d729: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f8d72b: fld dword ptr [esi + 0xbc] */
  { double v = F32((uint32_t)(esi + 0xbcu)); FPUSH(v); }
/* f8d731: fsub dword ptr [esi + 0xb4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xb4u)));
/* f8d737: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* f8d73b: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* f8d73e: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f8d741: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8d742: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8d743: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8d744: mov ecx, esi */
  ecx = esi;
/* f8d746: call 0xf717a3 */
  esp -= 4; W32(esp, 0xf8d74bu); SPILL(); f_f717a3(); if (g_unwind) return; RELOAD();
/* f8d74b: jmp 0xf8d87e */
  goto L_f8d87e;
L_f8d750: /* f8d750: xor edx, edx */
  edx = 0;
L_f8d752: /* f8d752: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f8d754: je 0xf8d833 */
  if (zf) goto L_f8d833;
L_f8d75a: /* f8d75a: mov al, byte ptr [esi + 0x30] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x30u))) & 0xffu);
/* f8d75d: cmp al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f8d75f: je 0xf8d769 */
  if (zf) goto L_f8d769;
L_f8d761: /* f8d761: cmp al, 3 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f8d763: jne 0xf8d82d */
  if (!zf) goto L_f8d82d;
L_f8d769: /* f8d769: cmp dword ptr [esi + 0x1d4], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x1d4u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f8d76f: jne 0xf8d7e8 */
  if (!zf) goto L_f8d7e8;
L_f8d771: /* f8d771: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8d774: mov eax, esp */
  eax = esp;
/* f8d776: mov dword ptr [ebp - 0x24], esp */
  W32((uint32_t)(ebp + 0xffffffdcu), esp);
/* f8d779: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8d77c: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* f8d77e: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* f8d781: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* f8d784: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* f8d787: mov eax, esp */
  eax = esp;
/* f8d789: mov dword ptr [ebp - 0x24], esp */
  W32((uint32_t)(ebp + 0xffffffdcu), esp);
/* f8d78c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8d78d: lea ecx, [esi + 0x1d0] */
  ecx = (uint32_t)(esi + 0x1d0u);
/* f8d793: call dword ptr [0xfce528] */
  esp -= 4; W32(esp, 0xf8d799u); SPILL(); f_6c3044(); if (g_unwind) return; /* Engine!??BFColor@@QBE?AVFPlane@@XZ */ RELOAD();
/* f8d799: fild dword ptr [esi + 0x1e4] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x1e4u)); FPUSH(v); }
/* f8d79f: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* f8d7a5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8d7a7: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f8d7aa: push 0x42000000 */
  { uint32_t v = 0x42000000u; esp -= 4; W32(esp, v); }
/* f8d7af: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f8d7b1: push 0x42000000 */
  { uint32_t v = 0x42000000u; esp -= 4; W32(esp, v); }
/* f8d7b6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8d7b8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f8d7ba: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8d7bd: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* f8d7c1: fld dword ptr [esi + 0xbc] */
  { double v = F32((uint32_t)(esi + 0xbcu)); FPUSH(v); }
/* f8d7c7: fsub dword ptr [esi + 0xb4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xb4u)));
/* f8d7cd: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* f8d7d1: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* f8d7d4: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f8d7d7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8d7d8: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* f8d7db: mov eax, dword ptr [eax + 0x34] */
  eax = R32((uint32_t)(eax + 0x34u));
/* f8d7de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8d7df: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0xf8d7e2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8d7e2: mov byte ptr [esi + 0x30], 3 */
  W8((uint32_t)(esi + 0x30u), 0x3u);
/* f8d7e6: jmp 0xf8d83d */
  goto L_f8d83d;
L_f8d7e8: /* f8d7e8: mov edx, dword ptr [esi + 0x1d0] */
  edx = R32((uint32_t)(esi + 0x1d0u));
/* f8d7ee: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f8d7f1: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* f8d7f3: mov dword ptr [ecx + 0x58], edx */
  W32((uint32_t)(ecx + 0x58u), edx);
/* f8d7f6: fild dword ptr [esi + 0x1e4] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x1e4u)); FPUSH(v); }
/* f8d7fc: mov edx, dword ptr [esi + 0xb4] */
  edx = R32((uint32_t)(esi + 0xb4u));
/* f8d802: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8d805: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* f8d809: fld dword ptr [esi + 0xbc] */
  { double v = F32((uint32_t)(esi + 0xbcu)); FPUSH(v); }
/* f8d80f: fsub dword ptr [esi + 0xb4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xb4u)));
/* f8d815: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* f8d819: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* f8d81c: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f8d81f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8d820: mov edx, dword ptr [esi + 0x1d4] */
  edx = R32((uint32_t)(esi + 0x1d4u));
/* f8d826: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8d827: call dword ptr [eax + 0x98] */
  { uint32_t t = R32((uint32_t)(eax + 0x98u)); esp -= 4; W32(esp, 0xf8d82du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f8d82d: /* f8d82d: mov byte ptr [esi + 0x30], 3 */
  W8((uint32_t)(esi + 0x30u), 0x3u);
/* f8d831: jmp 0xf8d83d */
  goto L_f8d83d;
L_f8d833: /* f8d833: cmp byte ptr [esi + 0x30], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x30u))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* f8d837: jne 0xf8d83d */
  if (!zf) goto L_f8d83d;
L_f8d839: /* f8d839: mov byte ptr [esi + 0x30], 2 */
  W8((uint32_t)(esi + 0x30u), 0x2u);
L_f8d83d: /* f8d83d: fild dword ptr [esi + 0x1e4] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x1e4u)); FPUSH(v); }
/* f8d843: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* f8d849: mov edx, dword ptr [esi + 0x1d8] */
  edx = R32((uint32_t)(esi + 0x1d8u));
/* f8d84f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f8d851: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f8d854: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* f8d858: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f8d85a: fld dword ptr [esi + 0xbc] */
  { double v = F32((uint32_t)(esi + 0xbcu)); FPUSH(v); }
/* f8d860: fsub dword ptr [esi + 0xb4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xb4u)));
/* f8d866: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* f8d86a: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* f8d86d: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* f8d870: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8d871: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* f8d874: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f8d875: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f8d876: mov ecx, esi */
  ecx = esi;
/* f8d878: call dword ptr [eax + 0xc4] */
  { uint32_t t = R32((uint32_t)(eax + 0xc4u)); esp -= 4; W32(esp, 0xf8d87eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f8d87e: /* f8d87e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* f8d881: mov eax, dword ptr [esi + 0x1e4] */
  eax = R32((uint32_t)(esi + 0x1e4u));
/* f8d887: mov dl, byte ptr [ebp - 0x11] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffefu))) & 0xffu);
/* f8d88a: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f8d88c: mov byte ptr [esi + 0x30], dl */
  W8((uint32_t)(esi + 0x30u), (edx & 0xffu));
/* f8d88f: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* f8d892: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* f8d893: jmp 0xf8d6c0 */
  goto L_f8d6c0;
L_f8d8c8: /* f8d8c8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* f8d8cb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f8d8cc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f8d8cd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8d8d4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f8d8d5: mov esp, ebp */
  esp = ebp;
/* f8d8d7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f8d8d8: ret 4 */
  esp += 8; SPILL(); return;
}
