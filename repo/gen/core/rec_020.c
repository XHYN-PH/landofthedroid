#include "recomp.h"
#include "rec_mod.h"

void f_547a3d(void) {
  LOAD_REGS();
  goto L_547a3d;
L_5479d0: /* 5479d0: cmp eax, dword ptr [edi + 0x88] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x88u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5479d6: jge 0x547b70 */
  if ((sf == of)) goto L_547b70;
L_5479dc: /* 5479dc: lea edx, [eax + eax*8] */
  edx = (uint32_t)(eax + eax*8);
/* 5479df: mov eax, dword ptr [edi + 0x84] */
  eax = R32((uint32_t)(edi + 0x84u));
/* 5479e5: lea esi, [eax + edx*4] */
  esi = (uint32_t)(eax + edx*4);
/* 5479e8: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 5479eb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5479ed: je 0x547b2f */
  if (zf) goto L_547b2f;
L_5479f3: /* 5479f3: mov eax, dword ptr [eax + 0x24] */
  eax = R32((uint32_t)(eax + 0x24u));
L_5479f6: /* 5479f6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5479f8: je 0x547a06 */
  if (zf) goto L_547a06;
L_5479fa: /* 5479fa: cmp eax, 0x5f0d80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5f0d80u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5479ff: je 0x547a35 */
  if (zf) goto L_547a35;
L_547a01: /* 547a01: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 547a04: jmp 0x5479f6 */
  goto L_5479f6;
L_547a06: /* 547a06: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 547a09: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* 547a0c: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 547a0f: mov edx, dword ptr [edi + 0xf8] */
  edx = R32((uint32_t)(edi + 0xf8u));
/* 547a15: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 547a18: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547a1a: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 547a1c: jne 0x547a35 */
  if (!zf) goto L_547a35;
L_547a1e: /* 547a1e: push 0xc39 */
  { uint32_t v = 0xc39u; esp -= 4; W32(esp, v); }
/* 547a23: push 0x5abe14 */
  { uint32_t v = 0x5abe14u; esp -= 4; W32(esp, v); }
/* 547a28: push 0x5abe20 */
  { uint32_t v = 0x5abe20u; esp -= 4; W32(esp, v); }
/* 547a2d: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x547a32u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 547a32: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_547a35: /* 547a35: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 547a38: mov eax, dword ptr [eax + 0x24] */
  eax = R32((uint32_t)(eax + 0x24u));
/* 547a3b: jmp 0x547a40 */
  goto L_547a40;
L_547a3d: /* 547a3d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_547a40: /* 547a40: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547a42: je 0x547a84 */
  if (zf) goto L_547a84;
L_547a44: /* 547a44: cmp eax, 0x5f0848 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5f0848u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 547a49: je 0x547a50 */
  if (zf) goto L_547a50;
L_547a4b: /* 547a4b: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 547a4e: jmp 0x547a40 */
  goto L_547a40;
L_547a50: /* 547a50: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 547a53: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 547a56: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547a58: je 0x547a84 */
  if (zf) goto L_547a84;
L_547a5a: /* 547a5a: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 547a5d: mov ecx, dword ptr [edi + 0xf8] */
  ecx = R32((uint32_t)(edi + 0xf8u));
/* 547a63: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 547a66: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547a68: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 547a6b: jne 0x547a84 */
  if (!zf) goto L_547a84;
L_547a6d: /* 547a6d: push 0xc41 */
  { uint32_t v = 0xc41u; esp -= 4; W32(esp, v); }
/* 547a72: push 0x5abe38 */
  { uint32_t v = 0x5abe38u; esp -= 4; W32(esp, v); }
/* 547a77: push 0x5abe44 */
  { uint32_t v = 0x5abe44u; esp -= 4; W32(esp, v); }
/* 547a7c: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x547a81u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 547a81: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_547a84: /* 547a84: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* 547a87: mov eax, dword ptr [edx + 0x18] */
  eax = R32((uint32_t)(edx + 0x18u));
/* 547a8a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 547a8d: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 547a8f: je 0x547af0 */
  if (zf) goto L_547af0;
L_547a91: /* 547a91: mov eax, dword ptr [eax + 0x18] */
  eax = R32((uint32_t)(eax + 0x18u));
/* 547a94: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547a96: je 0x547a9e */
  if (zf) goto L_547a9e;
L_547a98: /* 547a98: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 547a9a: je 0x547ac0 */
  if (zf) goto L_547ac0;
L_547a9c: /* 547a9c: jmp 0x547a91 */
  goto L_547a91;
L_547a9e: /* 547a9e: xor eax, eax */
  eax = 0;
/* 547aa0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547aa2: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 547aa5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547aa7: jne 0x547ac0 */
  if (!zf) goto L_547ac0;
L_547aa9: /* 547aa9: push 0xc48 */
  { uint32_t v = 0xc48u; esp -= 4; W32(esp, v); }
/* 547aae: push 0x5abe5c */
  { uint32_t v = 0x5abe5cu; esp -= 4; W32(esp, v); }
/* 547ab3: push 0x5abe68 */
  { uint32_t v = 0x5abe68u; esp -= 4; W32(esp, v); }
/* 547ab8: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x547abdu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 547abd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_547ac0: /* 547ac0: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 547ac3: mov eax, dword ptr [eax + 0x18] */
  eax = R32((uint32_t)(eax + 0x18u));
/* 547ac6: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 547ac9: mov ecx, dword ptr [edi + 0xf8] */
  ecx = R32((uint32_t)(edi + 0xf8u));
/* 547acf: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 547ad2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 547ad4: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 547ad7: jg 0x547af0 */
  if ((!zf && sf == of)) goto L_547af0;
L_547ad9: /* 547ad9: push 0xc4a */
  { uint32_t v = 0xc4au; esp -= 4; W32(esp, v); }
/* 547ade: push 0x5abe94 */
  { uint32_t v = 0x5abe94u; esp -= 4; W32(esp, v); }
/* 547ae3: push 0x5abea0 */
  { uint32_t v = 0x5abea0u; esp -= 4; W32(esp, v); }
/* 547ae8: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x547aedu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 547aed: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_547af0: /* 547af0: mov edx, dword ptr [edi + 0xb4] */
  edx = R32((uint32_t)(edi + 0xb4u));
/* 547af6: lea ebx, [edi + 0xb4] */
  ebx = (uint32_t)(edi + 0xb4u);
/* 547afc: mov ecx, ebx */
  ecx = ebx;
/* 547afe: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x547b01u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 547b01: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 547b04: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 547b07: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 547b09: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 547b0a: call dword ptr [eax + 0x2c] */
  { uint32_t t = R32((uint32_t)(eax + 0x2cu)); esp -= 4; W32(esp, 0x547b0du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 547b0d: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 547b10: mov edx, dword ptr [edi + 0x84] */
  edx = R32((uint32_t)(edi + 0x84u));
/* 547b16: lea ecx, [eax + eax*8] */
  ecx = (uint32_t)(eax + eax*8);
/* 547b19: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 547b1c: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 547b1e: mov ecx, ebx */
  ecx = ebx;
/* 547b20: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 547b23: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x547b26u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 547b26: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 547b29: sub eax, dword ptr [ecx + 0x18] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 547b2c: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
L_547b2f: /* 547b2f: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 547b32: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 547b33: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 547b36: jmp 0x5479d0 */
  goto L_5479d0;
L_547b70: /* 547b70: mov edx, dword ptr [edi + 0xb4] */
  edx = R32((uint32_t)(edi + 0xb4u));
/* 547b76: lea ebx, [edi + 0xb4] */
  ebx = (uint32_t)(edi + 0xb4u);
/* 547b7c: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 547b83: mov ecx, ebx */
  ecx = ebx;
/* 547b85: mov byte ptr [ebp - 4], 0x2a */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2au);
/* 547b89: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x547b8cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 547b8c: mov dword ptr [edi + 0x4c], eax */
  W32((uint32_t)(edi + 0x4cu), eax);
/* 547b8f: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 547b96: jmp 0x547ba0 */
  goto L_547ba0;
L_547ba0: /* 547ba0: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 547ba3: cmp eax, dword ptr [edi + 0x7c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x7cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 547ba6: jge 0x547c3f */
  if ((sf == of)) goto L_547c3f;
L_547bac: /* 547bac: mov edx, dword ptr [edi + 0x78] */
  edx = R32((uint32_t)(edi + 0x78u));
/* 547baf: mov esi, eax */
  esi = eax;
/* 547bb1: imul esi, esi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x1cu);
  esi = (uint32_t)r;
  }
/* 547bb4: mov ecx, dword ptr [esi + edx + 0x10] */
  ecx = R32((uint32_t)(esi + edx + 0x10u));
/* 547bb8: mov eax, dword ptr [ecx + 0x18] */
  eax = R32((uint32_t)(ecx + 0x18u));
/* 547bbb: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 547bbd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547bbf: je 0x547c23 */
  if (zf) goto L_547c23;
L_547bc1: /* 547bc1: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_547bc4: /* 547bc4: mov eax, dword ptr [eax + 0x18] */
  eax = R32((uint32_t)(eax + 0x18u));
/* 547bc7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547bc9: je 0x547bd1 */
  if (zf) goto L_547bd1;
L_547bcb: /* 547bcb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 547bcd: je 0x547bdc */
  if (zf) goto L_547bdc;
L_547bcf: /* 547bcf: jmp 0x547bc4 */
  goto L_547bc4;
L_547bd1: /* 547bd1: xor eax, eax */
  eax = 0;
/* 547bd3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547bd5: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 547bd8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547bda: je 0x547bf3 */
  if (zf) goto L_547bf3;
L_547bdc: /* 547bdc: push 0xc5f */
  { uint32_t v = 0xc5fu; esp -= 4; W32(esp, v); }
/* 547be1: push 0x5abec0 */
  { uint32_t v = 0x5abec0u; esp -= 4; W32(esp, v); }
/* 547be6: push 0x5abecc */
  { uint32_t v = 0x5abeccu; esp -= 4; W32(esp, v); }
/* 547beb: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x547bf0u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 547bf0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_547bf3: /* 547bf3: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* 547bf6: mov eax, dword ptr [edx + 0x18] */
  eax = R32((uint32_t)(edx + 0x18u));
/* 547bf9: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 547bfc: mov ecx, dword ptr [edi + 0xf8] */
  ecx = R32((uint32_t)(edi + 0xf8u));
/* 547c02: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 547c05: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 547c07: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 547c0a: jl 0x547c23 */
  if ((sf != of)) goto L_547c23;
L_547c0c: /* 547c0c: push 0xc61 */
  { uint32_t v = 0xc61u; esp -= 4; W32(esp, v); }
/* 547c11: push 0x5abef8 */
  { uint32_t v = 0x5abef8u; esp -= 4; W32(esp, v); }
/* 547c16: push 0x5abf04 */
  { uint32_t v = 0x5abf04u; esp -= 4; W32(esp, v); }
/* 547c1b: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x547c20u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 547c20: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_547c23: /* 547c23: lea ebx, [edi + 0xb4] */
  ebx = (uint32_t)(edi + 0xb4u);
/* 547c29: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 547c2a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 547c2b: call 0x4e1ded */
  esp -= 4; W32(esp, 0x547c30u); SPILL(); f_4e1ded(); if (g_unwind) return; RELOAD();
/* 547c30: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 547c33: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547c36: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 547c37: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 547c3a: jmp 0x547ba0 */
  goto L_547ba0;
L_547c3f: /* 547c3f: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 547c41: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 547c48: mov ecx, ebx */
  ecx = ebx;
/* 547c4a: mov byte ptr [ebp - 4], 0x2c */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2cu);
/* 547c4e: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x547c51u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 547c51: mov dword ptr [edi + 0x44], eax */
  W32((uint32_t)(edi + 0x44u), eax);
/* 547c54: xor esi, esi */
  esi = 0;
L_547c56: /* 547c56: cmp esi, dword ptr [edi + 0x88] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x88u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 547c5c: jge 0x547c77 */
  if ((sf == of)) goto L_547c77;
L_547c5e: /* 547c5e: mov ecx, dword ptr [edi + 0x84] */
  ecx = R32((uint32_t)(edi + 0x84u));
/* 547c64: lea eax, [esi + esi*8] */
  eax = (uint32_t)(esi + esi*8);
/* 547c67: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 547c6a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 547c6b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 547c6c: call 0x4e2f3b */
  esp -= 4; W32(esp, 0x547c71u); SPILL(); f_4e2f3b(); if (g_unwind) return; RELOAD();
/* 547c71: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547c74: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 547c75: jmp 0x547c56 */
  goto L_547c56;
L_547c77: /* 547c77: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547c79: push 0x5abf2c */
  { uint32_t v = 0x5abf2cu; esp -= 4; W32(esp, v); }
/* 547c7e: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 547c85: push 0x5abf38 */
  { uint32_t v = 0x5abf38u; esp -= 4; W32(esp, v); }
/* 547c8a: mov byte ptr [ebp - 4], 0x2e */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2eu);
/* 547c8e: call 0x4e1b04 */
  esp -= 4; W32(esp, 0x547c93u); SPILL(); f_4e1b04(); if (g_unwind) return; RELOAD();
/* 547c93: mov ecx, dword ptr [0x5afee8] */
  ecx = R32((uint32_t)(0x5afee8u));
/* 547c99: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 547c9b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547c9e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547c9f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547ca1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547ca3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 547ca4: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x547ca7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 547ca7: mov eax, dword ptr [edi + 0x64] */
  eax = R32((uint32_t)(edi + 0x64u));
/* 547caa: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547cad: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 547caf: jg 0x547cc8 */
  if ((!zf && sf == of)) goto L_547cc8;
L_547cb1: /* 547cb1: push 0x1ad */
  { uint32_t v = 0x1adu; esp -= 4; W32(esp, v); }
/* 547cb6: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 547cbb: push 0x5a3804 */
  { uint32_t v = 0x5a3804u; esp -= 4; W32(esp, v); }
/* 547cc0: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x547cc5u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 547cc5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_547cc8: /* 547cc8: mov eax, dword ptr [edi + 0x64] */
  eax = R32((uint32_t)(edi + 0x64u));
/* 547ccb: mov ecx, dword ptr [edi + 0x60] */
  ecx = R32((uint32_t)(edi + 0x60u));
/* 547cce: mov edx, dword ptr [edi + 0x40] */
  edx = R32((uint32_t)(edi + 0x40u));
/* 547cd1: mov dword ptr [ecx + eax*8 - 8], edx */
  W32((uint32_t)(ecx + eax*8 + 0xfffffff8u), edx);
/* 547cd5: mov eax, dword ptr [edi + 0x64] */
  eax = R32((uint32_t)(edi + 0x64u));
/* 547cd8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 547cda: jg 0x547cf3 */
  if ((!zf && sf == of)) goto L_547cf3;
L_547cdc: /* 547cdc: push 0x1ad */
  { uint32_t v = 0x1adu; esp -= 4; W32(esp, v); }
/* 547ce1: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 547ce6: push 0x5a3804 */
  { uint32_t v = 0x5a3804u; esp -= 4; W32(esp, v); }
/* 547ceb: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x547cf0u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 547cf0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_547cf3: /* 547cf3: mov eax, dword ptr [edi + 0x64] */
  eax = R32((uint32_t)(edi + 0x64u));
/* 547cf6: mov ecx, dword ptr [edi + 0x60] */
  ecx = R32((uint32_t)(edi + 0x60u));
/* 547cf9: mov edx, dword ptr [edi + 0x38] */
  edx = R32((uint32_t)(edi + 0x38u));
/* 547cfc: mov dword ptr [ecx + eax*8 - 4], edx */
  W32((uint32_t)(ecx + eax*8 + 0xfffffffcu), edx);
/* 547d00: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 547d02: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547d04: mov ecx, ebx */
  ecx = ebx;
/* 547d06: call dword ptr [eax + 0x3c] */
  { uint32_t t = R32((uint32_t)(eax + 0x3cu)); esp -= 4; W32(esp, 0x547d09u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 547d09: add edi, 0x2c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 547d0c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 547d0d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 547d0e: call 0x4e36a2 */
  esp -= 4; W32(esp, 0x547d13u); SPILL(); f_4e36a2(); if (g_unwind) return; RELOAD();
/* 547d13: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547d16: mov edi, 1 */
  edi = 0x1u;
/* 547d1b: jmp 0x547f04 */
  goto L_547f04;
L_547f04: /* 547f04: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 547f07: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547f09: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 547f0c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 547f13: je 0x547f1c */
  if (zf) goto L_547f1c;
L_547f15: /* 547f15: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 547f17: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 547f19: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x547f1cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_547f1c: /* 547f1c: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 547f1e: mov ecx, dword ptr [ebp - 0xac] */
  ecx = R32((uint32_t)(ebp + 0xffffff54u));
/* 547f24: lea eax, [ecx + eax - 0xc] */
  eax = (uint32_t)(ecx + eax + 0xfffffff4u);
/* 547f28: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 547f2a: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 547f2d: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 547f30: jge 0x547f38 */
  if ((sf == of)) goto L_547f38;
L_547f32: /* 547f32: fadd qword ptr [0x56c4f8] */
  ST0 = ST0 + (F64((uint32_t)(0x56c4f8u)));
L_547f38: /* 547f38: fmul qword ptr [0x5a0f28] */
  ST0 = ST0 * (F64((uint32_t)(0x5a0f28u)));
/* 547f3e: mov edx, dword ptr [0x5a0c90] */
  edx = R32((uint32_t)(0x5a0c90u));
/* 547f44: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 547f47: fmul qword ptr [0x56b568] */
  ST0 = ST0 * (F64((uint32_t)(0x56b568u)));
/* 547f4d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 547f50: push 0x5abf58 */
  { uint32_t v = 0x5abf58u; esp -= 4; W32(esp, v); }
/* 547f55: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* 547f5a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 547f5b: call 0x4e30df */
  esp -= 4; W32(esp, 0x547f60u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 547f60: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547f63: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547f65: je 0x547fe0 */
  if (zf) goto L_547fe0;
L_547f67: /* 547f67: mov ecx, dword ptr [0x5a0c90] */
  ecx = R32((uint32_t)(0x5a0c90u));
/* 547f6d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 547f6e: lea eax, [ebp - 0x300] */
  eax = (uint32_t)(ebp + 0xfffffd00u);
/* 547f74: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547f75: push 0x5abf68 */
  { uint32_t v = 0x5abf68u; esp -= 4; W32(esp, v); }
/* 547f7a: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* 547f7f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 547f80: call 0x4e30df */
  esp -= 4; W32(esp, 0x547f85u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 547f85: mov ecx, dword ptr [0x5a0ca4] */
  ecx = R32((uint32_t)(0x5a0ca4u));
/* 547f8b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 547f8d: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547f90: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547f92: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547f94: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 547f96: lea eax, [ebp - 0x300] */
  eax = (uint32_t)(ebp + 0xfffffd00u);
/* 547f9c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547f9d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 547f9e: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x547fa1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 547fa1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547fa3: jne 0x547fe0 */
  if (!zf) goto L_547fe0;
L_547fa5: /* 547fa5: mov ecx, dword ptr [0x5a0ca4] */
  ecx = R32((uint32_t)(0x5a0ca4u));
/* 547fab: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 547fad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547fae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547faf: lea eax, [ebp - 0x300] */
  eax = (uint32_t)(ebp + 0xfffffd00u);
/* 547fb5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547fb6: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x547fb9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 547fb9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547fbb: push 0x5abf90 */
  { uint32_t v = 0x5abf90u; esp -= 4; W32(esp, v); }
/* 547fc0: push 0x5abf9c */
  { uint32_t v = 0x5abf9cu; esp -= 4; W32(esp, v); }
/* 547fc5: call 0x4e1613 */
  esp -= 4; W32(esp, 0x547fcau); SPILL(); f_4e1613(); if (g_unwind) return; RELOAD();
/* 547fca: mov ecx, dword ptr [0x5afee8] */
  ecx = R32((uint32_t)(0x5afee8u));
/* 547fd0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547fd3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 547fd4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547fd5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 547fd6: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x547fdbu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 547fdb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547fde: xor edi, edi */
  edi = 0;
L_547fe0: /* 547fe0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 547fe3: mov eax, edi */
  eax = edi;
/* 547fe5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 547fe6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 547fe7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 547fee: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 547fef: mov esp, ebp */
  esp = ebp;
/* 547ff1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 547ff2: ret  */
  esp += 4; SPILL(); return;
}

void f_547b3b(void) {
  LOAD_REGS();
L_547b3b: /* 547b3b: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 547b3e: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 547b43: lea eax, [ebp - 0xcc] */
  eax = (uint32_t)(ebp + 0xffffff34u);
/* 547b49: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547b4a: mov dword ptr [ebp - 0xcc], edx */
  W32((uint32_t)(ebp + 0xffffff34u), edx);
/* 547b50: call 0x554df6 */
  esp -= 4; W32(esp, 0x547b55u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_547b55(); return;
}

void f_547b55(void) {
  LOAD_REGS();
L_547b55: /* 547b55: push 0x56ee5c */
  { uint32_t v = 0x56ee5cu; esp -= 4; W32(esp, v); }
/* 547b5a: push 0x5abeb8 */
  { uint32_t v = 0x5abeb8u; esp -= 4; W32(esp, v); }
/* 547b5f: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x547b64u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 547b64: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547b67: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547b69: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547b6b: call 0x554df6 */
  esp -= 4; W32(esp, 0x547b70u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
/* 547b70: mov edx, dword ptr [edi + 0xb4] */
  edx = R32((uint32_t)(edi + 0xb4u));
/* 547b76: lea ebx, [edi + 0xb4] */
  ebx = (uint32_t)(edi + 0xb4u);
/* 547b7c: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 547b83: mov ecx, ebx */
  ecx = ebx;
/* 547b85: mov byte ptr [ebp - 4], 0x2a */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2au);
/* 547b89: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x547b8cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 547b8c: mov dword ptr [edi + 0x4c], eax */
  W32((uint32_t)(edi + 0x4cu), eax);
/* 547b8f: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 547b96: jmp 0x547ba0 */
  goto L_547ba0;
L_547ba0: /* 547ba0: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 547ba3: cmp eax, dword ptr [edi + 0x7c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x7cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 547ba6: jge 0x547c3f */
  if ((sf == of)) goto L_547c3f;
L_547bac: /* 547bac: mov edx, dword ptr [edi + 0x78] */
  edx = R32((uint32_t)(edi + 0x78u));
/* 547baf: mov esi, eax */
  esi = eax;
/* 547bb1: imul esi, esi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x1cu);
  esi = (uint32_t)r;
  }
/* 547bb4: mov ecx, dword ptr [esi + edx + 0x10] */
  ecx = R32((uint32_t)(esi + edx + 0x10u));
/* 547bb8: mov eax, dword ptr [ecx + 0x18] */
  eax = R32((uint32_t)(ecx + 0x18u));
/* 547bbb: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 547bbd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547bbf: je 0x547c23 */
  if (zf) goto L_547c23;
L_547bc1: /* 547bc1: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_547bc4: /* 547bc4: mov eax, dword ptr [eax + 0x18] */
  eax = R32((uint32_t)(eax + 0x18u));
/* 547bc7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547bc9: je 0x547bd1 */
  if (zf) goto L_547bd1;
L_547bcb: /* 547bcb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 547bcd: je 0x547bdc */
  if (zf) goto L_547bdc;
L_547bcf: /* 547bcf: jmp 0x547bc4 */
  goto L_547bc4;
L_547bd1: /* 547bd1: xor eax, eax */
  eax = 0;
/* 547bd3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547bd5: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 547bd8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547bda: je 0x547bf3 */
  if (zf) goto L_547bf3;
L_547bdc: /* 547bdc: push 0xc5f */
  { uint32_t v = 0xc5fu; esp -= 4; W32(esp, v); }
/* 547be1: push 0x5abec0 */
  { uint32_t v = 0x5abec0u; esp -= 4; W32(esp, v); }
/* 547be6: push 0x5abecc */
  { uint32_t v = 0x5abeccu; esp -= 4; W32(esp, v); }
/* 547beb: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x547bf0u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 547bf0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_547bf3: /* 547bf3: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* 547bf6: mov eax, dword ptr [edx + 0x18] */
  eax = R32((uint32_t)(edx + 0x18u));
/* 547bf9: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 547bfc: mov ecx, dword ptr [edi + 0xf8] */
  ecx = R32((uint32_t)(edi + 0xf8u));
/* 547c02: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 547c05: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 547c07: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 547c0a: jl 0x547c23 */
  if ((sf != of)) goto L_547c23;
L_547c0c: /* 547c0c: push 0xc61 */
  { uint32_t v = 0xc61u; esp -= 4; W32(esp, v); }
/* 547c11: push 0x5abef8 */
  { uint32_t v = 0x5abef8u; esp -= 4; W32(esp, v); }
/* 547c16: push 0x5abf04 */
  { uint32_t v = 0x5abf04u; esp -= 4; W32(esp, v); }
/* 547c1b: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x547c20u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 547c20: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_547c23: /* 547c23: lea ebx, [edi + 0xb4] */
  ebx = (uint32_t)(edi + 0xb4u);
/* 547c29: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 547c2a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 547c2b: call 0x4e1ded */
  esp -= 4; W32(esp, 0x547c30u); SPILL(); f_4e1ded(); if (g_unwind) return; RELOAD();
/* 547c30: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 547c33: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547c36: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 547c37: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 547c3a: jmp 0x547ba0 */
  goto L_547ba0;
L_547c3f: /* 547c3f: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 547c41: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 547c48: mov ecx, ebx */
  ecx = ebx;
/* 547c4a: mov byte ptr [ebp - 4], 0x2c */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2cu);
/* 547c4e: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x547c51u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 547c51: mov dword ptr [edi + 0x44], eax */
  W32((uint32_t)(edi + 0x44u), eax);
/* 547c54: xor esi, esi */
  esi = 0;
L_547c56: /* 547c56: cmp esi, dword ptr [edi + 0x88] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x88u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 547c5c: jge 0x547c77 */
  if ((sf == of)) goto L_547c77;
L_547c5e: /* 547c5e: mov ecx, dword ptr [edi + 0x84] */
  ecx = R32((uint32_t)(edi + 0x84u));
/* 547c64: lea eax, [esi + esi*8] */
  eax = (uint32_t)(esi + esi*8);
/* 547c67: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 547c6a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 547c6b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 547c6c: call 0x4e2f3b */
  esp -= 4; W32(esp, 0x547c71u); SPILL(); f_4e2f3b(); if (g_unwind) return; RELOAD();
/* 547c71: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547c74: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 547c75: jmp 0x547c56 */
  goto L_547c56;
L_547c77: /* 547c77: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547c79: push 0x5abf2c */
  { uint32_t v = 0x5abf2cu; esp -= 4; W32(esp, v); }
/* 547c7e: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 547c85: push 0x5abf38 */
  { uint32_t v = 0x5abf38u; esp -= 4; W32(esp, v); }
/* 547c8a: mov byte ptr [ebp - 4], 0x2e */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2eu);
/* 547c8e: call 0x4e1b04 */
  esp -= 4; W32(esp, 0x547c93u); SPILL(); f_4e1b04(); if (g_unwind) return; RELOAD();
/* 547c93: mov ecx, dword ptr [0x5afee8] */
  ecx = R32((uint32_t)(0x5afee8u));
/* 547c99: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 547c9b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547c9e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547c9f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547ca1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547ca3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 547ca4: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x547ca7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 547ca7: mov eax, dword ptr [edi + 0x64] */
  eax = R32((uint32_t)(edi + 0x64u));
/* 547caa: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547cad: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 547caf: jg 0x547cc8 */
  if ((!zf && sf == of)) goto L_547cc8;
L_547cb1: /* 547cb1: push 0x1ad */
  { uint32_t v = 0x1adu; esp -= 4; W32(esp, v); }
/* 547cb6: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 547cbb: push 0x5a3804 */
  { uint32_t v = 0x5a3804u; esp -= 4; W32(esp, v); }
/* 547cc0: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x547cc5u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 547cc5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_547cc8: /* 547cc8: mov eax, dword ptr [edi + 0x64] */
  eax = R32((uint32_t)(edi + 0x64u));
/* 547ccb: mov ecx, dword ptr [edi + 0x60] */
  ecx = R32((uint32_t)(edi + 0x60u));
/* 547cce: mov edx, dword ptr [edi + 0x40] */
  edx = R32((uint32_t)(edi + 0x40u));
/* 547cd1: mov dword ptr [ecx + eax*8 - 8], edx */
  W32((uint32_t)(ecx + eax*8 + 0xfffffff8u), edx);
/* 547cd5: mov eax, dword ptr [edi + 0x64] */
  eax = R32((uint32_t)(edi + 0x64u));
/* 547cd8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 547cda: jg 0x547cf3 */
  if ((!zf && sf == of)) goto L_547cf3;
L_547cdc: /* 547cdc: push 0x1ad */
  { uint32_t v = 0x1adu; esp -= 4; W32(esp, v); }
/* 547ce1: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 547ce6: push 0x5a3804 */
  { uint32_t v = 0x5a3804u; esp -= 4; W32(esp, v); }
/* 547ceb: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x547cf0u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 547cf0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_547cf3: /* 547cf3: mov eax, dword ptr [edi + 0x64] */
  eax = R32((uint32_t)(edi + 0x64u));
/* 547cf6: mov ecx, dword ptr [edi + 0x60] */
  ecx = R32((uint32_t)(edi + 0x60u));
/* 547cf9: mov edx, dword ptr [edi + 0x38] */
  edx = R32((uint32_t)(edi + 0x38u));
/* 547cfc: mov dword ptr [ecx + eax*8 - 4], edx */
  W32((uint32_t)(ecx + eax*8 + 0xfffffffcu), edx);
/* 547d00: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 547d02: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547d04: mov ecx, ebx */
  ecx = ebx;
/* 547d06: call dword ptr [eax + 0x3c] */
  { uint32_t t = R32((uint32_t)(eax + 0x3cu)); esp -= 4; W32(esp, 0x547d09u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 547d09: add edi, 0x2c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 547d0c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 547d0d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 547d0e: call 0x4e36a2 */
  esp -= 4; W32(esp, 0x547d13u); SPILL(); f_4e36a2(); if (g_unwind) return; RELOAD();
/* 547d13: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547d16: mov edi, 1 */
  edi = 0x1u;
/* 547d1b: jmp 0x547f04 */
  goto L_547f04;
L_547f04: /* 547f04: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 547f07: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547f09: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 547f0c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 547f13: je 0x547f1c */
  if (zf) goto L_547f1c;
L_547f15: /* 547f15: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 547f17: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 547f19: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x547f1cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_547f1c: /* 547f1c: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 547f1e: mov ecx, dword ptr [ebp - 0xac] */
  ecx = R32((uint32_t)(ebp + 0xffffff54u));
/* 547f24: lea eax, [ecx + eax - 0xc] */
  eax = (uint32_t)(ecx + eax + 0xfffffff4u);
/* 547f28: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 547f2a: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 547f2d: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 547f30: jge 0x547f38 */
  if ((sf == of)) goto L_547f38;
L_547f32: /* 547f32: fadd qword ptr [0x56c4f8] */
  ST0 = ST0 + (F64((uint32_t)(0x56c4f8u)));
L_547f38: /* 547f38: fmul qword ptr [0x5a0f28] */
  ST0 = ST0 * (F64((uint32_t)(0x5a0f28u)));
/* 547f3e: mov edx, dword ptr [0x5a0c90] */
  edx = R32((uint32_t)(0x5a0c90u));
/* 547f44: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 547f47: fmul qword ptr [0x56b568] */
  ST0 = ST0 * (F64((uint32_t)(0x56b568u)));
/* 547f4d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 547f50: push 0x5abf58 */
  { uint32_t v = 0x5abf58u; esp -= 4; W32(esp, v); }
/* 547f55: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* 547f5a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 547f5b: call 0x4e30df */
  esp -= 4; W32(esp, 0x547f60u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 547f60: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547f63: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547f65: je 0x547fe0 */
  if (zf) goto L_547fe0;
L_547f67: /* 547f67: mov ecx, dword ptr [0x5a0c90] */
  ecx = R32((uint32_t)(0x5a0c90u));
/* 547f6d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 547f6e: lea eax, [ebp - 0x300] */
  eax = (uint32_t)(ebp + 0xfffffd00u);
/* 547f74: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547f75: push 0x5abf68 */
  { uint32_t v = 0x5abf68u; esp -= 4; W32(esp, v); }
/* 547f7a: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* 547f7f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 547f80: call 0x4e30df */
  esp -= 4; W32(esp, 0x547f85u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 547f85: mov ecx, dword ptr [0x5a0ca4] */
  ecx = R32((uint32_t)(0x5a0ca4u));
/* 547f8b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 547f8d: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547f90: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547f92: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547f94: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 547f96: lea eax, [ebp - 0x300] */
  eax = (uint32_t)(ebp + 0xfffffd00u);
/* 547f9c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547f9d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 547f9e: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x547fa1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 547fa1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547fa3: jne 0x547fe0 */
  if (!zf) goto L_547fe0;
L_547fa5: /* 547fa5: mov ecx, dword ptr [0x5a0ca4] */
  ecx = R32((uint32_t)(0x5a0ca4u));
/* 547fab: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 547fad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547fae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547faf: lea eax, [ebp - 0x300] */
  eax = (uint32_t)(ebp + 0xfffffd00u);
/* 547fb5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547fb6: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x547fb9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 547fb9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547fbb: push 0x5abf90 */
  { uint32_t v = 0x5abf90u; esp -= 4; W32(esp, v); }
/* 547fc0: push 0x5abf9c */
  { uint32_t v = 0x5abf9cu; esp -= 4; W32(esp, v); }
/* 547fc5: call 0x4e1613 */
  esp -= 4; W32(esp, 0x547fcau); SPILL(); f_4e1613(); if (g_unwind) return; RELOAD();
/* 547fca: mov ecx, dword ptr [0x5afee8] */
  ecx = R32((uint32_t)(0x5afee8u));
/* 547fd0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547fd3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 547fd4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547fd5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 547fd6: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x547fdbu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 547fdb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547fde: xor edi, edi */
  edi = 0;
L_547fe0: /* 547fe0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 547fe3: mov eax, edi */
  eax = edi;
/* 547fe5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 547fe6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 547fe7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 547fee: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 547fef: mov esp, ebp */
  esp = ebp;
/* 547ff1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 547ff2: ret  */
  esp += 4; SPILL(); return;
}

void f_547b98(void) {
  LOAD_REGS();
L_547b98: /* 547b98: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 547b9f: nop  */
L_547ba0: /* 547ba0: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 547ba3: cmp eax, dword ptr [edi + 0x7c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x7cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 547ba6: jge 0x547c3f */
  if ((sf == of)) goto L_547c3f;
L_547bac: /* 547bac: mov edx, dword ptr [edi + 0x78] */
  edx = R32((uint32_t)(edi + 0x78u));
/* 547baf: mov esi, eax */
  esi = eax;
/* 547bb1: imul esi, esi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x1cu);
  esi = (uint32_t)r;
  }
/* 547bb4: mov ecx, dword ptr [esi + edx + 0x10] */
  ecx = R32((uint32_t)(esi + edx + 0x10u));
/* 547bb8: mov eax, dword ptr [ecx + 0x18] */
  eax = R32((uint32_t)(ecx + 0x18u));
/* 547bbb: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 547bbd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547bbf: je 0x547c23 */
  if (zf) goto L_547c23;
L_547bc1: /* 547bc1: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_547bc4: /* 547bc4: mov eax, dword ptr [eax + 0x18] */
  eax = R32((uint32_t)(eax + 0x18u));
/* 547bc7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547bc9: je 0x547bd1 */
  if (zf) goto L_547bd1;
L_547bcb: /* 547bcb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 547bcd: je 0x547bdc */
  if (zf) goto L_547bdc;
L_547bcf: /* 547bcf: jmp 0x547bc4 */
  goto L_547bc4;
L_547bd1: /* 547bd1: xor eax, eax */
  eax = 0;
/* 547bd3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547bd5: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 547bd8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547bda: je 0x547bf3 */
  if (zf) goto L_547bf3;
L_547bdc: /* 547bdc: push 0xc5f */
  { uint32_t v = 0xc5fu; esp -= 4; W32(esp, v); }
/* 547be1: push 0x5abec0 */
  { uint32_t v = 0x5abec0u; esp -= 4; W32(esp, v); }
/* 547be6: push 0x5abecc */
  { uint32_t v = 0x5abeccu; esp -= 4; W32(esp, v); }
/* 547beb: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x547bf0u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 547bf0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_547bf3: /* 547bf3: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* 547bf6: mov eax, dword ptr [edx + 0x18] */
  eax = R32((uint32_t)(edx + 0x18u));
/* 547bf9: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 547bfc: mov ecx, dword ptr [edi + 0xf8] */
  ecx = R32((uint32_t)(edi + 0xf8u));
/* 547c02: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 547c05: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 547c07: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 547c0a: jl 0x547c23 */
  if ((sf != of)) goto L_547c23;
L_547c0c: /* 547c0c: push 0xc61 */
  { uint32_t v = 0xc61u; esp -= 4; W32(esp, v); }
/* 547c11: push 0x5abef8 */
  { uint32_t v = 0x5abef8u; esp -= 4; W32(esp, v); }
/* 547c16: push 0x5abf04 */
  { uint32_t v = 0x5abf04u; esp -= 4; W32(esp, v); }
/* 547c1b: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x547c20u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 547c20: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_547c23: /* 547c23: lea ebx, [edi + 0xb4] */
  ebx = (uint32_t)(edi + 0xb4u);
/* 547c29: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 547c2a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 547c2b: call 0x4e1ded */
  esp -= 4; W32(esp, 0x547c30u); SPILL(); f_4e1ded(); if (g_unwind) return; RELOAD();
/* 547c30: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 547c33: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547c36: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 547c37: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 547c3a: jmp 0x547ba0 */
  goto L_547ba0;
L_547c3f: /* 547c3f: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 547c41: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 547c48: mov ecx, ebx */
  ecx = ebx;
/* 547c4a: mov byte ptr [ebp - 4], 0x2c */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2cu);
/* 547c4e: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x547c51u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 547c51: mov dword ptr [edi + 0x44], eax */
  W32((uint32_t)(edi + 0x44u), eax);
/* 547c54: xor esi, esi */
  esi = 0;
L_547c56: /* 547c56: cmp esi, dword ptr [edi + 0x88] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x88u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 547c5c: jge 0x547c77 */
  if ((sf == of)) goto L_547c77;
L_547c5e: /* 547c5e: mov ecx, dword ptr [edi + 0x84] */
  ecx = R32((uint32_t)(edi + 0x84u));
/* 547c64: lea eax, [esi + esi*8] */
  eax = (uint32_t)(esi + esi*8);
/* 547c67: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 547c6a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 547c6b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 547c6c: call 0x4e2f3b */
  esp -= 4; W32(esp, 0x547c71u); SPILL(); f_4e2f3b(); if (g_unwind) return; RELOAD();
/* 547c71: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547c74: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 547c75: jmp 0x547c56 */
  goto L_547c56;
L_547c77: /* 547c77: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547c79: push 0x5abf2c */
  { uint32_t v = 0x5abf2cu; esp -= 4; W32(esp, v); }
/* 547c7e: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 547c85: push 0x5abf38 */
  { uint32_t v = 0x5abf38u; esp -= 4; W32(esp, v); }
/* 547c8a: mov byte ptr [ebp - 4], 0x2e */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2eu);
/* 547c8e: call 0x4e1b04 */
  esp -= 4; W32(esp, 0x547c93u); SPILL(); f_4e1b04(); if (g_unwind) return; RELOAD();
/* 547c93: mov ecx, dword ptr [0x5afee8] */
  ecx = R32((uint32_t)(0x5afee8u));
/* 547c99: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 547c9b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547c9e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547c9f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547ca1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547ca3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 547ca4: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x547ca7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 547ca7: mov eax, dword ptr [edi + 0x64] */
  eax = R32((uint32_t)(edi + 0x64u));
/* 547caa: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547cad: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 547caf: jg 0x547cc8 */
  if ((!zf && sf == of)) goto L_547cc8;
L_547cb1: /* 547cb1: push 0x1ad */
  { uint32_t v = 0x1adu; esp -= 4; W32(esp, v); }
/* 547cb6: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 547cbb: push 0x5a3804 */
  { uint32_t v = 0x5a3804u; esp -= 4; W32(esp, v); }
/* 547cc0: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x547cc5u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 547cc5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_547cc8: /* 547cc8: mov eax, dword ptr [edi + 0x64] */
  eax = R32((uint32_t)(edi + 0x64u));
/* 547ccb: mov ecx, dword ptr [edi + 0x60] */
  ecx = R32((uint32_t)(edi + 0x60u));
/* 547cce: mov edx, dword ptr [edi + 0x40] */
  edx = R32((uint32_t)(edi + 0x40u));
/* 547cd1: mov dword ptr [ecx + eax*8 - 8], edx */
  W32((uint32_t)(ecx + eax*8 + 0xfffffff8u), edx);
/* 547cd5: mov eax, dword ptr [edi + 0x64] */
  eax = R32((uint32_t)(edi + 0x64u));
/* 547cd8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 547cda: jg 0x547cf3 */
  if ((!zf && sf == of)) goto L_547cf3;
L_547cdc: /* 547cdc: push 0x1ad */
  { uint32_t v = 0x1adu; esp -= 4; W32(esp, v); }
/* 547ce1: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 547ce6: push 0x5a3804 */
  { uint32_t v = 0x5a3804u; esp -= 4; W32(esp, v); }
/* 547ceb: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x547cf0u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 547cf0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_547cf3: /* 547cf3: mov eax, dword ptr [edi + 0x64] */
  eax = R32((uint32_t)(edi + 0x64u));
/* 547cf6: mov ecx, dword ptr [edi + 0x60] */
  ecx = R32((uint32_t)(edi + 0x60u));
/* 547cf9: mov edx, dword ptr [edi + 0x38] */
  edx = R32((uint32_t)(edi + 0x38u));
/* 547cfc: mov dword ptr [ecx + eax*8 - 4], edx */
  W32((uint32_t)(ecx + eax*8 + 0xfffffffcu), edx);
/* 547d00: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 547d02: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547d04: mov ecx, ebx */
  ecx = ebx;
/* 547d06: call dword ptr [eax + 0x3c] */
  { uint32_t t = R32((uint32_t)(eax + 0x3cu)); esp -= 4; W32(esp, 0x547d09u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 547d09: add edi, 0x2c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 547d0c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 547d0d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 547d0e: call 0x4e36a2 */
  esp -= 4; W32(esp, 0x547d13u); SPILL(); f_4e36a2(); if (g_unwind) return; RELOAD();
/* 547d13: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547d16: mov edi, 1 */
  edi = 0x1u;
/* 547d1b: jmp 0x547f04 */
  goto L_547f04;
L_547f04: /* 547f04: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 547f07: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547f09: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 547f0c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 547f13: je 0x547f1c */
  if (zf) goto L_547f1c;
L_547f15: /* 547f15: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 547f17: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 547f19: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x547f1cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_547f1c: /* 547f1c: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 547f1e: mov ecx, dword ptr [ebp - 0xac] */
  ecx = R32((uint32_t)(ebp + 0xffffff54u));
/* 547f24: lea eax, [ecx + eax - 0xc] */
  eax = (uint32_t)(ecx + eax + 0xfffffff4u);
/* 547f28: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 547f2a: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 547f2d: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 547f30: jge 0x547f38 */
  if ((sf == of)) goto L_547f38;
L_547f32: /* 547f32: fadd qword ptr [0x56c4f8] */
  ST0 = ST0 + (F64((uint32_t)(0x56c4f8u)));
L_547f38: /* 547f38: fmul qword ptr [0x5a0f28] */
  ST0 = ST0 * (F64((uint32_t)(0x5a0f28u)));
/* 547f3e: mov edx, dword ptr [0x5a0c90] */
  edx = R32((uint32_t)(0x5a0c90u));
/* 547f44: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 547f47: fmul qword ptr [0x56b568] */
  ST0 = ST0 * (F64((uint32_t)(0x56b568u)));
/* 547f4d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 547f50: push 0x5abf58 */
  { uint32_t v = 0x5abf58u; esp -= 4; W32(esp, v); }
/* 547f55: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* 547f5a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 547f5b: call 0x4e30df */
  esp -= 4; W32(esp, 0x547f60u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 547f60: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547f63: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547f65: je 0x547fe0 */
  if (zf) goto L_547fe0;
L_547f67: /* 547f67: mov ecx, dword ptr [0x5a0c90] */
  ecx = R32((uint32_t)(0x5a0c90u));
/* 547f6d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 547f6e: lea eax, [ebp - 0x300] */
  eax = (uint32_t)(ebp + 0xfffffd00u);
/* 547f74: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547f75: push 0x5abf68 */
  { uint32_t v = 0x5abf68u; esp -= 4; W32(esp, v); }
/* 547f7a: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* 547f7f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 547f80: call 0x4e30df */
  esp -= 4; W32(esp, 0x547f85u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 547f85: mov ecx, dword ptr [0x5a0ca4] */
  ecx = R32((uint32_t)(0x5a0ca4u));
/* 547f8b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 547f8d: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547f90: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547f92: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547f94: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 547f96: lea eax, [ebp - 0x300] */
  eax = (uint32_t)(ebp + 0xfffffd00u);
/* 547f9c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547f9d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 547f9e: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x547fa1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 547fa1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547fa3: jne 0x547fe0 */
  if (!zf) goto L_547fe0;
L_547fa5: /* 547fa5: mov ecx, dword ptr [0x5a0ca4] */
  ecx = R32((uint32_t)(0x5a0ca4u));
/* 547fab: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 547fad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547fae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547faf: lea eax, [ebp - 0x300] */
  eax = (uint32_t)(ebp + 0xfffffd00u);
/* 547fb5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547fb6: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x547fb9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 547fb9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547fbb: push 0x5abf90 */
  { uint32_t v = 0x5abf90u; esp -= 4; W32(esp, v); }
/* 547fc0: push 0x5abf9c */
  { uint32_t v = 0x5abf9cu; esp -= 4; W32(esp, v); }
/* 547fc5: call 0x4e1613 */
  esp -= 4; W32(esp, 0x547fcau); SPILL(); f_4e1613(); if (g_unwind) return; RELOAD();
/* 547fca: mov ecx, dword ptr [0x5afee8] */
  ecx = R32((uint32_t)(0x5afee8u));
/* 547fd0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547fd3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 547fd4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547fd5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 547fd6: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x547fdbu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 547fdb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547fde: xor edi, edi */
  edi = 0;
L_547fe0: /* 547fe0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 547fe3: mov eax, edi */
  eax = edi;
/* 547fe5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 547fe6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 547fe7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 547fee: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 547fef: mov esp, ebp */
  esp = ebp;
/* 547ff1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 547ff2: ret  */
  esp += 4; SPILL(); return;
}

void f_547d20(void) {
  LOAD_REGS();
L_547d20: /* 547d20: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 547d23: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 547d28: lea edx, [ebp - 0xd4] */
  edx = (uint32_t)(ebp + 0xffffff2cu);
/* 547d2e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 547d2f: mov dword ptr [ebp - 0xd4], ecx */
  W32((uint32_t)(ebp + 0xffffff2cu), ecx);
/* 547d35: call 0x554df6 */
  esp -= 4; W32(esp, 0x547d3au); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_547d3a(); return;
}

void f_547d3a(void) {
  LOAD_REGS();
L_547d3a: /* 547d3a: push 0x56ee38 */
  { uint32_t v = 0x56ee38u; esp -= 4; W32(esp, v); }
/* 547d3f: push 0x5abf48 */
  { uint32_t v = 0x5abf48u; esp -= 4; W32(esp, v); }
/* 547d44: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x547d49u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 547d49: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547d4c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547d4e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547d50: call 0x554df6 */
  esp -= 4; W32(esp, 0x547d55u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_547d55(); return;
}

void f_547d55(void) {
  LOAD_REGS();
L_547d55: /* 547d55: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 547d58: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 547d5d: lea ecx, [ebp - 0xb4] */
  ecx = (uint32_t)(ebp + 0xffffff4cu);
/* 547d63: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 547d64: mov dword ptr [ebp - 0xb4], eax */
  W32((uint32_t)(ebp + 0xffffff4cu), eax);
/* 547d6a: call 0x554df6 */
  esp -= 4; W32(esp, 0x547d6fu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_547d6f(); return;
}

void f_547d6f(void) {
  LOAD_REGS();
L_547d6f: /* 547d6f: push 0x56ee14 */
  { uint32_t v = 0x56ee14u; esp -= 4; W32(esp, v); }
/* 547d74: push 0x5abf24 */
  { uint32_t v = 0x5abf24u; esp -= 4; W32(esp, v); }
/* 547d79: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x547d7eu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 547d7e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547d81: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547d83: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547d85: call 0x554df6 */
  esp -= 4; W32(esp, 0x547d8au); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_547d8a(); return;
}

void f_547d8a(void) {
  LOAD_REGS();
L_547d8a: /* 547d8a: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 547d8d: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 547d92: lea eax, [ebp - 0xe4] */
  eax = (uint32_t)(ebp + 0xffffff1cu);
/* 547d98: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547d99: mov dword ptr [ebp - 0xe4], edx */
  W32((uint32_t)(ebp + 0xffffff1cu), edx);
/* 547d9f: call 0x554df6 */
  esp -= 4; W32(esp, 0x547da4u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_547da4(); return;
}

void f_547da4(void) {
  LOAD_REGS();
L_547da4: /* 547da4: push 0x56edf0 */
  { uint32_t v = 0x56edf0u; esp -= 4; W32(esp, v); }
/* 547da9: push 0x5abf1c */
  { uint32_t v = 0x5abf1cu; esp -= 4; W32(esp, v); }
/* 547dae: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x547db3u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 547db3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547db6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547db8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547dba: call 0x554df6 */
  esp -= 4; W32(esp, 0x547dbfu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_547dbf(); return;
}

void f_547dbf(void) {
  LOAD_REGS();
L_547dbf: /* 547dbf: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 547dc2: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 547dc7: lea edx, [ebp - 0xbc] */
  edx = (uint32_t)(ebp + 0xffffff44u);
/* 547dcd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 547dce: mov dword ptr [ebp - 0xbc], ecx */
  W32((uint32_t)(ebp + 0xffffff44u), ecx);
/* 547dd4: call 0x554df6 */
  esp -= 4; W32(esp, 0x547dd9u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_547dd9(); return;
}

void f_547dd9(void) {
  LOAD_REGS();
L_547dd9: /* 547dd9: push 0x56edd4 */
  { uint32_t v = 0x56edd4u; esp -= 4; W32(esp, v); }
/* 547dde: push 0x5abe04 */
  { uint32_t v = 0x5abe04u; esp -= 4; W32(esp, v); }
/* 547de3: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x547de8u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 547de8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547deb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547ded: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547def: call 0x554df6 */
  esp -= 4; W32(esp, 0x547df4u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_547df4(); return;
}

void f_547df4(void) {
  LOAD_REGS();
L_547df4: /* 547df4: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 547df7: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 547dfc: lea ecx, [ebp - 0xa8] */
  ecx = (uint32_t)(ebp + 0xffffff58u);
/* 547e02: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 547e03: mov dword ptr [ebp - 0xa8], eax */
  W32((uint32_t)(ebp + 0xffffff58u), eax);
/* 547e09: call 0x554df6 */
  esp -= 4; W32(esp, 0x547e0eu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_547e0e(); return;
}

void f_547e0e(void) {
  LOAD_REGS();
L_547e0e: /* 547e0e: push 0x56edb8 */
  { uint32_t v = 0x56edb8u; esp -= 4; W32(esp, v); }
/* 547e13: push 0x5abdb0 */
  { uint32_t v = 0x5abdb0u; esp -= 4; W32(esp, v); }
/* 547e18: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x547e1du); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 547e1d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547e20: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547e22: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547e24: call 0x554df6 */
  esp -= 4; W32(esp, 0x547e29u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_547e29(); return;
}

void f_547e29(void) {
  LOAD_REGS();
L_547e29: /* 547e29: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 547e2c: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 547e31: lea eax, [ebp - 0xc4] */
  eax = (uint32_t)(ebp + 0xffffff3cu);
/* 547e37: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547e38: mov dword ptr [ebp - 0xc4], edx */
  W32((uint32_t)(ebp + 0xffffff3cu), edx);
/* 547e3e: call 0x554df6 */
  esp -= 4; W32(esp, 0x547e43u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_547e43(); return;
}

void f_547e43(void) {
  LOAD_REGS();
L_547e43: /* 547e43: push 0x56eda0 */
  { uint32_t v = 0x56eda0u; esp -= 4; W32(esp, v); }
/* 547e48: push 0x5abd98 */
  { uint32_t v = 0x5abd98u; esp -= 4; W32(esp, v); }
/* 547e4d: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x547e52u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 547e52: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547e55: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547e57: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547e59: call 0x554df6 */
  esp -= 4; W32(esp, 0x547e5eu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_547e5e(); return;
}

void f_547e5e(void) {
  LOAD_REGS();
L_547e5e: /* 547e5e: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 547e61: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 547e66: lea edx, [ebp - 0xc8] */
  edx = (uint32_t)(ebp + 0xffffff38u);
/* 547e6c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 547e6d: mov dword ptr [ebp - 0xc8], ecx */
  W32((uint32_t)(ebp + 0xffffff38u), ecx);
/* 547e73: call 0x554df6 */
  esp -= 4; W32(esp, 0x547e78u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_547e78(); return;
}

void f_547e78(void) {
  LOAD_REGS();
L_547e78: /* 547e78: push 0x56ed80 */
  { uint32_t v = 0x56ed80u; esp -= 4; W32(esp, v); }
/* 547e7d: push 0x5abd90 */
  { uint32_t v = 0x5abd90u; esp -= 4; W32(esp, v); }
/* 547e82: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x547e87u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 547e87: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547e8a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547e8c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547e8e: call 0x554df6 */
  esp -= 4; W32(esp, 0x547e93u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_547e93(); return;
}

void f_547e93(void) {
  LOAD_REGS();
L_547e93: /* 547e93: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 547e96: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 547e9b: lea ecx, [ebp - 0xd0] */
  ecx = (uint32_t)(ebp + 0xffffff30u);
/* 547ea1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 547ea2: mov dword ptr [ebp - 0xd0], eax */
  W32((uint32_t)(ebp + 0xffffff30u), eax);
/* 547ea8: call 0x554df6 */
  esp -= 4; W32(esp, 0x547eadu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_547ead(); return;
}

void f_547ead(void) {
  LOAD_REGS();
L_547ead: /* 547ead: push 0x56ed64 */
  { uint32_t v = 0x56ed64u; esp -= 4; W32(esp, v); }
/* 547eb2: push 0x5abd88 */
  { uint32_t v = 0x5abd88u; esp -= 4; W32(esp, v); }
/* 547eb7: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x547ebcu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 547ebc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547ebf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547ec1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547ec3: call 0x554df6 */
  esp -= 4; W32(esp, 0x547ec8u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_547ec8(); return;
}

void f_547ec8(void) {
  LOAD_REGS();
L_547ec8: /* 547ec8: mov ecx, dword ptr [0x5a0ca4] */
  ecx = R32((uint32_t)(0x5a0ca4u));
/* 547ece: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 547ed0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547ed2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547ed4: lea eax, [ebp - 0x300] */
  eax = (uint32_t)(ebp + 0xfffffd00u);
/* 547eda: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547edb: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x547edeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 547ede: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 547ee1: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 547ee4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 547ee5: push 0x5abf50 */
  { uint32_t v = 0x5abf50u; esp -= 4; W32(esp, v); }
/* 547eea: push 0x2ff */
  { uint32_t v = 0x2ffu; esp -= 4; W32(esp, v); }
/* 547eef: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 547ef0: call 0x4e30df */
  esp -= 4; W32(esp, 0x547ef5u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 547ef5: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547ef8: mov eax, 0x547efe */
  eax = 0x547efeu;
/* 547efd: ret  */
  esp += 4; SPILL(); return;
}

void f_547efe(void) {
  LOAD_REGS();
L_547efe: /* 547efe: mov edi, dword ptr [ebp - 0xec] */
  edi = R32((uint32_t)(ebp + 0xffffff14u));
/* 547f04: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 547f07: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547f09: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 547f0c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 547f13: je 0x547f1c */
  if (zf) goto L_547f1c;
L_547f15: /* 547f15: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 547f17: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 547f19: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x547f1cu); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x547efeu: guest_unwind_done(); RELOAD(); goto L_547efe; } return; } RELOAD(); }
L_547f1c: /* 547f1c: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 547f1e: mov ecx, dword ptr [ebp - 0xac] */
  ecx = R32((uint32_t)(ebp + 0xffffff54u));
/* 547f24: lea eax, [ecx + eax - 0xc] */
  eax = (uint32_t)(ecx + eax + 0xfffffff4u);
/* 547f28: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 547f2a: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 547f2d: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 547f30: jge 0x547f38 */
  if ((sf == of)) goto L_547f38;
L_547f32: /* 547f32: fadd qword ptr [0x56c4f8] */
  ST0 = ST0 + (F64((uint32_t)(0x56c4f8u)));
L_547f38: /* 547f38: fmul qword ptr [0x5a0f28] */
  ST0 = ST0 * (F64((uint32_t)(0x5a0f28u)));
/* 547f3e: mov edx, dword ptr [0x5a0c90] */
  edx = R32((uint32_t)(0x5a0c90u));
/* 547f44: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 547f47: fmul qword ptr [0x56b568] */
  ST0 = ST0 * (F64((uint32_t)(0x56b568u)));
/* 547f4d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 547f50: push 0x5abf58 */
  { uint32_t v = 0x5abf58u; esp -= 4; W32(esp, v); }
/* 547f55: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* 547f5a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 547f5b: call 0x4e30df */
  esp -= 4; W32(esp, 0x547f60u); SPILL(); f_4e30df(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x547efeu: guest_unwind_done(); RELOAD(); goto L_547efe; } return; } RELOAD();
/* 547f60: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547f63: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547f65: je 0x547fe0 */
  if (zf) goto L_547fe0;
L_547f67: /* 547f67: mov ecx, dword ptr [0x5a0c90] */
  ecx = R32((uint32_t)(0x5a0c90u));
/* 547f6d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 547f6e: lea eax, [ebp - 0x300] */
  eax = (uint32_t)(ebp + 0xfffffd00u);
/* 547f74: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547f75: push 0x5abf68 */
  { uint32_t v = 0x5abf68u; esp -= 4; W32(esp, v); }
/* 547f7a: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* 547f7f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 547f80: call 0x4e30df */
  esp -= 4; W32(esp, 0x547f85u); SPILL(); f_4e30df(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x547efeu: guest_unwind_done(); RELOAD(); goto L_547efe; } return; } RELOAD();
/* 547f85: mov ecx, dword ptr [0x5a0ca4] */
  ecx = R32((uint32_t)(0x5a0ca4u));
/* 547f8b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 547f8d: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547f90: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547f92: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547f94: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 547f96: lea eax, [ebp - 0x300] */
  eax = (uint32_t)(ebp + 0xfffffd00u);
/* 547f9c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547f9d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 547f9e: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x547fa1u); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x547efeu: guest_unwind_done(); RELOAD(); goto L_547efe; } return; } RELOAD(); }
/* 547fa1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 547fa3: jne 0x547fe0 */
  if (!zf) goto L_547fe0;
L_547fa5: /* 547fa5: mov ecx, dword ptr [0x5a0ca4] */
  ecx = R32((uint32_t)(0x5a0ca4u));
/* 547fab: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 547fad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547fae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547faf: lea eax, [ebp - 0x300] */
  eax = (uint32_t)(ebp + 0xfffffd00u);
/* 547fb5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547fb6: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x547fb9u); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x547efeu: guest_unwind_done(); RELOAD(); goto L_547efe; } return; } RELOAD(); }
/* 547fb9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 547fbb: push 0x5abf90 */
  { uint32_t v = 0x5abf90u; esp -= 4; W32(esp, v); }
/* 547fc0: push 0x5abf9c */
  { uint32_t v = 0x5abf9cu; esp -= 4; W32(esp, v); }
/* 547fc5: call 0x4e1613 */
  esp -= 4; W32(esp, 0x547fcau); SPILL(); f_4e1613(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x547efeu: guest_unwind_done(); RELOAD(); goto L_547efe; } return; } RELOAD();
/* 547fca: mov ecx, dword ptr [0x5afee8] */
  ecx = R32((uint32_t)(0x5afee8u));
/* 547fd0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547fd3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 547fd4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 547fd5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 547fd6: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x547fdbu); SPILL(); f_4e2d4c(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x547efeu: guest_unwind_done(); RELOAD(); goto L_547efe; } return; } RELOAD();
/* 547fdb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 547fde: xor edi, edi */
  edi = 0;
L_547fe0: /* 547fe0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 547fe3: mov eax, edi */
  eax = edi;
/* 547fe5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 547fe6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 547fe7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 547fee: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 547fef: mov esp, ebp */
  esp = ebp;
/* 547ff1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 547ff2: ret  */
  esp += 4; SPILL(); return;
}

void f_547ff3(void) {
  LOAD_REGS();
L_547ff3: /* 547ff3: mov edx, dword ptr [ebp - 0x100] */
  edx = R32((uint32_t)(ebp + 0xffffff00u));
/* 547ff9: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 547ffe: lea eax, [ebp - 0xb0] */
  eax = (uint32_t)(ebp + 0xffffff50u);
/* 548004: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 548005: mov dword ptr [ebp - 0xb0], edx */
  W32((uint32_t)(ebp + 0xffffff50u), edx);
/* 54800b: call 0x554df6 */
  esp -= 4; W32(esp, 0x548010u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_548010(); return;
}

void f_548010(void) {
  LOAD_REGS();
L_548010: /* 548010: push 0x56ed30 */
  { uint32_t v = 0x56ed30u; esp -= 4; W32(esp, v); }
/* 548015: push 0x5abfb4 */
  { uint32_t v = 0x5abfb4u; esp -= 4; W32(esp, v); }
/* 54801a: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54801fu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54801f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 548022: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 548024: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 548026: call 0x554df6 */
  esp -= 4; W32(esp, 0x54802bu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_54802b: guest_badaddr(0x54802b); return;
}

void f_5485d0(void) {
  LOAD_REGS();
L_5485d0: /* 5485d0: cmp ax, 0x30 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x30u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 5485d4: jb 0x5485e3 */
  if (cf) goto L_5485e3;
L_5485d6: /* 5485d6: cmp ax, 0x39 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x39u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 5485da: ja 0x5485e3 */
  if ((!cf && !zf)) goto L_5485e3;
L_5485dc: /* 5485dc: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* 5485df: sub eax, 0x30 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 5485e2: ret  */
  esp += 4; SPILL(); return;
L_5485e3: /* 5485e3: cmp ax, 0x61 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x61u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 5485e7: jb 0x5485f6 */
  if (cf) goto L_5485f6;
L_5485e9: /* 5485e9: cmp ax, 0x66 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x66u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 5485ed: ja 0x5485f6 */
  if ((!cf && !zf)) goto L_5485f6;
L_5485ef: /* 5485ef: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* 5485f2: sub eax, 0x57 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x57u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 5485f5: ret  */
  esp += 4; SPILL(); return;
L_5485f6: /* 5485f6: cmp ax, 0x41 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x41u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 5485fa: jb 0x548609 */
  if (cf) goto L_548609;
L_5485fc: /* 5485fc: cmp ax, 0x46 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x46u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 548600: ja 0x548609 */
  if ((!cf && !zf)) goto L_548609;
L_548602: /* 548602: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* 548605: sub eax, 0x37 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x37u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 548608: ret  */
  esp += 4; SPILL(); return;
L_548609: /* 548609: xor eax, eax */
  eax = 0;
/* 54860b: ret  */
  esp += 4; SPILL(); return;
}

void f_548620(void) {
  LOAD_REGS();
L_548620: /* 548620: ret 4 */
  esp += 8; SPILL(); return;
}

void f_548640(void) {
  LOAD_REGS();
L_548640: /* 548640: mov eax, dword ptr [ecx + 0x38] */
  eax = R32((uint32_t)(ecx + 0x38u));
/* 548643: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 548647: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 54864b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54864c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54864d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54864e: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x548653u); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 548653: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 548656: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_548670(void) {
  LOAD_REGS();
L_548670: /* 548670: ret 4 */
  esp += 8; SPILL(); return;
}

void f_548690(void) {
  LOAD_REGS();
L_548690: /* 548690: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 548694: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 548696: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 548698: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 548699: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 54869d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54869e: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0x5486a4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5486a4: mov eax, 1 */
  eax = 0x1u;
/* 5486a9: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_5486c0(void) {
  LOAD_REGS();
L_5486c0: /* 5486c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5486c1: mov esi, ecx */
  esi = ecx;
/* 5486c3: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* 5486c6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5486c7: xor edi, edi */
  edi = 0;
/* 5486c9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 5486cb: jle 0x5486fd */
  if ((zf || sf != of)) goto L_5486fd;
L_5486cd: /* 5486cd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5486ce: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 5486d2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 5486d3: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
L_5486d7: /* 5486d7: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 5486da: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 5486dc: imul eax, edi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edi);
  eax = (uint32_t)r;
  }
/* 5486df: lea ecx, [eax + ebp] */
  ecx = (uint32_t)(eax + ebp);
/* 5486e2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5486e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5486e4: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 5486e8: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5486ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5486eb: mov ecx, esi */
  ecx = esi;
/* 5486ed: call dword ptr [edx + 0xa4] */
  { uint32_t t = R32((uint32_t)(edx + 0xa4u)); esp -= 4; W32(esp, 0x5486f3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5486f3: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* 5486f6: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 5486f7: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5486f9: jl 0x5486d7 */
  if ((sf != of)) goto L_5486d7;
L_5486fb: /* 5486fb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5486fc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_5486fd: /* 5486fd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5486fe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5486ff: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_548730(void) {
  LOAD_REGS();
L_548730: /* 548730: ret 8 */
  esp += 12; SPILL(); return;
}

void f_548750(void) {
  LOAD_REGS();
L_548750: /* 548750: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 548754: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 548756: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 54875a: mov byte ptr [edx], cl */
  W8((uint32_t)(edx), (ecx & 0xffu));
/* 54875c: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_548770(void) {
  LOAD_REGS();
L_548770: /* 548770: mov eax, dword ptr [ecx + 0x34] */
  eax = R32((uint32_t)(ecx + 0x34u));
/* 548773: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 548776: jne 0x548787 */
  if (!zf) goto L_548787;
L_548778: /* 548778: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 54877c: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 54877e: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 548782: mov byte ptr [edx], cl */
  W8((uint32_t)(edx), (ecx & 0xffu));
/* 548784: ret 0xc */
  esp += 16; SPILL(); return;
L_548787: /* 548787: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 54878b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54878c: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 548790: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 548791: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 548792: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x548797u); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 548797: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54879a: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_5487b0(void) {
  LOAD_REGS();
L_5487b0: /* 5487b0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 5487b4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5487b6: je 0x5487cc */
  if (zf) goto L_5487cc;
L_5487b8: /* 5487b8: movzx ecx, byte ptr [eax] */
  ecx = (uint32_t)(R8((uint32_t)(eax)));
/* 5487bb: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 5487bf: movzx eax, byte ptr [eax] */
  eax = (uint32_t)(R8((uint32_t)(eax)));
/* 5487c2: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 5487c4: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 5487c6: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 5487c8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5487c9: ret 8 */
  esp += 12; SPILL(); return;
L_5487cc: /* 5487cc: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 5487d0: movzx eax, byte ptr [eax] */
  eax = (uint32_t)(R8((uint32_t)(eax)));
/* 5487d3: xor ecx, ecx */
  ecx = 0;
/* 5487d5: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 5487d7: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 5487d9: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 5487db: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5487dc: ret 8 */
  esp += 12; SPILL(); return;
}

void f_5487f0(void) {
  LOAD_REGS();
L_5487f0: /* 5487f0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 5487f4: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 5487f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5487f9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5487fa: call 0x4e40e8 */
  esp -= 4; W32(esp, 0x5487ffu); SPILL(); f_4e40e8(); if (g_unwind) return; RELOAD();
/* 5487ff: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 548802: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_548820(void) {
  LOAD_REGS();
L_548820: /* 548820: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 548821: mov ebp, esp */
  ebp = esp;
/* 548823: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 548825: push 0x5596c0 */
  { uint32_t v = 0x5596c0u; esp -= 4; W32(esp, v); }
/* 54882a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 548830: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 548831: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 548838: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54883b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54883c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54883d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54883e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 548841: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 548844: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 548847: push 0x5ad530 */
  { uint32_t v = 0x5ad530u; esp -= 4; W32(esp, v); }
/* 54884c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 548853: call 0x4e35da */
  esp -= 4; W32(esp, 0x548858u); SPILL(); f_4e35da(); if (g_unwind) return; RELOAD();
/* 548858: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54885b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54885c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54885d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 548864: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 548865: mov esp, ebp */
  esp = ebp;
/* 548867: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 548868: ret 8 */
  esp += 12; SPILL(); return;
}

void f_54886b(void) {
  LOAD_REGS();
L_54886b: /* 54886b: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 54886e: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 548873: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 548876: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 548877: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 54887a: call 0x554df6 */
  esp -= 4; W32(esp, 0x54887fu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_54887f(); return;
}

void f_54887f(void) {
  LOAD_REGS();
L_54887f: /* 54887f: push 0x56ef28 */
  { uint32_t v = 0x56ef28u; esp -= 4; W32(esp, v); }
/* 548884: push 0x5ad53c */
  { uint32_t v = 0x5ad53cu; esp -= 4; W32(esp, v); }
/* 548889: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54888eu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54888e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 548891: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 548894: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 548896: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x54889bu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 54889b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54889c: push 0x5ad544 */
  { uint32_t v = 0x5ad544u; esp -= 4; W32(esp, v); }
/* 5488a1: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x5488a6u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 5488a6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5488a9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5488ab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5488ad: call 0x554df6 */
  esp -= 4; W32(esp, 0x5488b2u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_5488b2: guest_badaddr(0x5488b2); return;
}

void f_5488f0(void) {
  LOAD_REGS();
L_5488f0: /* 5488f0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 5488f4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 5488f6: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 5488fa: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 5488fc: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_548910(void) {
  LOAD_REGS();
L_548910: /* 548910: mov eax, dword ptr [ecx + 0x34] */
  eax = R32((uint32_t)(ecx + 0x34u));
/* 548913: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 548916: jne 0x548927 */
  if (!zf) goto L_548927;
L_548918: /* 548918: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 54891c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 54891e: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 548922: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 548924: ret 0xc */
  esp += 16; SPILL(); return;
L_548927: /* 548927: xor edx, edx */
  edx = 0;
/* 548929: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 54892b: jle 0x548952 */
  if ((zf || sf != of)) goto L_548952;
L_54892d: /* 54892d: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 548931: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 548932: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 548936: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 548937: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 548939: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_548940: /* 548940: mov edi, dword ptr [esi + eax] */
  edi = R32((uint32_t)(esi + eax));
/* 548943: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 548945: mov edi, dword ptr [ecx + 0x34] */
  edi = R32((uint32_t)(ecx + 0x34u));
/* 548948: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 548949: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54894c: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54894e: jl 0x548940 */
  if ((sf != of)) goto L_548940;
L_548950: /* 548950: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 548951: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_548952: /* 548952: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_548980(void) {
  LOAD_REGS();
L_548980: /* 548980: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 548984: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 548986: je 0x54899e */
  if (zf) goto L_54899e;
L_548988: /* 548988: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 54898c: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 54898e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54898f: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 548991: xor ecx, ecx */
  ecx = 0;
/* 548993: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 548995: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 548998: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 548999: mov eax, ecx */
  eax = ecx;
/* 54899b: ret 8 */
  esp += 12; SPILL(); return;
L_54899e: /* 54899e: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 5489a2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5489a3: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 5489a5: xor eax, eax */
  eax = 0;
/* 5489a7: xor ecx, ecx */
  ecx = 0;
/* 5489a9: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5489ab: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 5489ae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5489af: mov eax, ecx */
  eax = ecx;
/* 5489b1: ret 8 */
  esp += 12; SPILL(); return;
}

void f_5489d0(void) {
  LOAD_REGS();
L_5489d0: /* 5489d0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 5489d4: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 5489d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5489d9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5489da: call 0x4e4160 */
  esp -= 4; W32(esp, 0x5489dfu); SPILL(); f_4e4160(); if (g_unwind) return; RELOAD();
/* 5489df: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5489e2: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_548a00(void) {
  LOAD_REGS();
L_548a00: /* 548a00: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 548a04: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 548a08: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 548a09: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 548a0a: call 0x4e4160 */
  esp -= 4; W32(esp, 0x548a0fu); SPILL(); f_4e4160(); if (g_unwind) return; RELOAD();
/* 548a0f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 548a12: mov eax, 1 */
  eax = 0x1u;
/* 548a17: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_548a30(void) {
  LOAD_REGS();
L_548a30: /* 548a30: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 548a31: mov ebp, esp */
  ebp = esp;
/* 548a33: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 548a35: push 0x5596d0 */
  { uint32_t v = 0x5596d0u; esp -= 4; W32(esp, v); }
/* 548a3a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 548a40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 548a41: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 548a48: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 548a4b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 548a4c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 548a4d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 548a4e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 548a51: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 548a54: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 548a57: push 0x5ad5cc */
  { uint32_t v = 0x5ad5ccu; esp -= 4; W32(esp, v); }
/* 548a5c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 548a63: call 0x4e35da */
  esp -= 4; W32(esp, 0x548a68u); SPILL(); f_4e35da(); if (g_unwind) return; RELOAD();
/* 548a68: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 548a6b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 548a6c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 548a6d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 548a74: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 548a75: mov esp, ebp */
  esp = ebp;
/* 548a77: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 548a78: ret 8 */
  esp += 12; SPILL(); return;
}

void f_548a7b(void) {
  LOAD_REGS();
L_548a7b: /* 548a7b: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 548a7e: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 548a83: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 548a86: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 548a87: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 548a8a: call 0x554df6 */
  esp -= 4; W32(esp, 0x548a8fu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_548a8f(); return;
}

void f_548a8f(void) {
  LOAD_REGS();
L_548a8f: /* 548a8f: push 0x56ef70 */
  { uint32_t v = 0x56ef70u; esp -= 4; W32(esp, v); }
/* 548a94: push 0x5ad5d4 */
  { uint32_t v = 0x5ad5d4u; esp -= 4; W32(esp, v); }
/* 548a99: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x548a9eu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 548a9e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 548aa1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 548aa4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 548aa6: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x548aabu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 548aab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 548aac: push 0x5ad5dc */
  { uint32_t v = 0x5ad5dcu; esp -= 4; W32(esp, v); }
/* 548ab1: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x548ab6u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 548ab6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 548ab9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 548abb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 548abd: call 0x554df6 */
  esp -= 4; W32(esp, 0x548ac2u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_548ac2: guest_badaddr(0x548ac2); return;
}

void f_548b00(void) {
  LOAD_REGS();
L_548b00: /* 548b00: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 548b01: mov ebp, esp */
  ebp = esp;
/* 548b03: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 548b05: push 0x5596e0 */
  { uint32_t v = 0x5596e0u; esp -= 4; W32(esp, v); }
/* 548b0a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 548b10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 548b11: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 548b18: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 548b1b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 548b1e: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 548b21: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 548b22: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 548b23: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 548b24: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 548b27: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 548b2a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 548b2c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 548b2d: push 0x5ad5e8 */
  { uint32_t v = 0x5ad5e8u; esp -= 4; W32(esp, v); }
/* 548b32: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 548b33: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 548b3a: call 0x4e4183 */
  esp -= 4; W32(esp, 0x548b3fu); SPILL(); f_4e4183(); if (g_unwind) return; RELOAD();
/* 548b3f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 548b42: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 548b45: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 548b46: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 548b47: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 548b4e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 548b4f: mov esp, ebp */
  esp = ebp;
/* 548b51: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 548b52: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_548b55(void) {
  LOAD_REGS();
L_548b55: /* 548b55: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 548b58: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 548b5d: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 548b60: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 548b61: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 548b64: call 0x554df6 */
  esp -= 4; W32(esp, 0x548b69u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_548b69(); return;
}

void f_548b69(void) {
  LOAD_REGS();
L_548b69: /* 548b69: push 0x56efb4 */
  { uint32_t v = 0x56efb4u; esp -= 4; W32(esp, v); }
/* 548b6e: push 0x5ad5f0 */
  { uint32_t v = 0x5ad5f0u; esp -= 4; W32(esp, v); }
/* 548b73: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x548b78u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 548b78: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 548b7b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 548b7e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 548b80: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x548b85u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 548b85: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 548b86: push 0x5ad5f8 */
  { uint32_t v = 0x5ad5f8u; esp -= 4; W32(esp, v); }
/* 548b8b: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x548b90u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 548b90: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 548b93: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 548b95: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 548b97: call 0x554df6 */
  esp -= 4; W32(esp, 0x548b9cu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_548b9c: guest_badaddr(0x548b9c); return;
}

void f_548bd0(void) {
  LOAD_REGS();
L_548bd0: /* 548bd0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 548bd1: mov ebp, esp */
  ebp = esp;
/* 548bd3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 548bd5: push 0x5596f0 */
  { uint32_t v = 0x5596f0u; esp -= 4; W32(esp, v); }
/* 548bda: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 548be0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 548be1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 548be8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 548beb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 548bec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 548bed: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 548bf0: mov ax, word ptr [esi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 548bf3: cmp ax, 0x2d */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x2du);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 548bf7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 548bf8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 548bfb: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 548bfe: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 548c05: je 0x548c13 */
  if (zf) goto L_548c13;
L_548c07: /* 548c07: cmp ax, 0x30 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x30u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 548c0b: jb 0x548c21 */
  if (cf) goto L_548c21;
L_548c0d: /* 548c0d: cmp ax, 0x39 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x39u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 548c11: ja 0x548c21 */
  if ((!cf && !zf)) goto L_548c21;
L_548c13: /* 548c13: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 548c14: call 0x4e3fe9 */
  esp -= 4; W32(esp, 0x548c19u); SPILL(); f_4e3fe9(); if (g_unwind) return; RELOAD();
/* 548c19: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 548c1c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 548c1f: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
L_548c21: /* 548c21: mov ax, word ptr [esi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 548c24: cmp ax, 0x2d */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x2du);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 548c28: je 0x548c4b */
  if (zf) goto L_548c4b;
L_548c2a: /* 548c2a: cmp ax, 0x30 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x30u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 548c2e: jb 0x548c36 */
  if (cf) goto L_548c36;
L_548c30: /* 548c30: cmp ax, 0x39 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x39u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 548c34: jbe 0x548c4b */
  if ((cf | zf)) goto L_548c4b;
L_548c36: /* 548c36: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 548c39: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 548c3a: mov eax, esi */
  eax = esi;
/* 548c3c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 548c3d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 548c44: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 548c45: mov esp, ebp */
  esp = ebp;
/* 548c47: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 548c48: ret 0xc */
  esp += 16; SPILL(); return;
L_548c4b: /* 548c4b: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 548c4e: jmp 0x548c21 */
  goto L_548c21;
}

void f_548c50(void) {
  LOAD_REGS();
L_548c50: /* 548c50: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 548c53: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 548c58: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 548c5b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 548c5c: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 548c5f: call 0x554df6 */
  esp -= 4; W32(esp, 0x548c64u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_548c64(); return;
}

void f_548c64(void) {
  LOAD_REGS();
L_548c64: /* 548c64: push 0x56effc */
  { uint32_t v = 0x56effcu; esp -= 4; W32(esp, v); }
/* 548c69: push 0x5ad604 */
  { uint32_t v = 0x5ad604u; esp -= 4; W32(esp, v); }
/* 548c6e: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x548c73u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 548c73: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 548c76: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 548c79: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 548c7b: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x548c80u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 548c80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 548c81: push 0x5ad60c */
  { uint32_t v = 0x5ad60cu; esp -= 4; W32(esp, v); }
/* 548c86: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x548c8bu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 548c8b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 548c8e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 548c90: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 548c92: call 0x554df6 */
  esp -= 4; W32(esp, 0x548c97u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_548c97: guest_badaddr(0x548c97); return;
}

void f_548ce0(void) {
  LOAD_REGS();
L_548ce0: /* 548ce0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 548ce4: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 548ce6: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 548cea: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 548cec: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 548cef: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 548cf2: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_548d10(void) {
  LOAD_REGS();
L_548d10: /* 548d10: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 548d11: mov ebp, esp */
  ebp = esp;
/* 548d13: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 548d15: push 0x559700 */
  { uint32_t v = 0x559700u; esp -= 4; W32(esp, v); }
/* 548d1a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 548d20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 548d21: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 548d28: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 548d2b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 548d2c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 548d2d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 548d2e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 548d31: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 548d34: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 548d37: push 0x5ad648 */
  { uint32_t v = 0x5ad648u; esp -= 4; W32(esp, v); }
/* 548d3c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 548d43: call 0x4e35da */
  esp -= 4; W32(esp, 0x548d48u); SPILL(); f_4e35da(); if (g_unwind) return; RELOAD();
/* 548d48: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 548d4b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 548d4c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 548d4d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 548d54: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 548d55: mov esp, ebp */
  esp = ebp;
/* 548d57: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 548d58: ret 8 */
  esp += 12; SPILL(); return;
}

void f_548d5b(void) {
  LOAD_REGS();
L_548d5b: /* 548d5b: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 548d5e: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 548d63: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 548d66: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 548d67: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 548d6a: call 0x554df6 */
  esp -= 4; W32(esp, 0x548d6fu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_548d6f(); return;
}

void f_548d6f(void) {
  LOAD_REGS();
L_548d6f: /* 548d6f: push 0x56f038 */
  { uint32_t v = 0x56f038u; esp -= 4; W32(esp, v); }
/* 548d74: push 0x5ad668 */
  { uint32_t v = 0x5ad668u; esp -= 4; W32(esp, v); }
/* 548d79: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x548d7eu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 548d7e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 548d81: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 548d84: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 548d86: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x548d8bu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 548d8b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 548d8c: push 0x5ad670 */
  { uint32_t v = 0x5ad670u; esp -= 4; W32(esp, v); }
/* 548d91: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x548d96u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 548d96: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 548d99: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 548d9b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 548d9d: call 0x554df6 */
  esp -= 4; W32(esp, 0x548da2u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_548da2: guest_badaddr(0x548da2); return;
}

void f_548de0(void) {
  LOAD_REGS();
L_548de0: /* 548de0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 548de1: mov ebp, esp */
  ebp = esp;
/* 548de3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 548de5: push 0x559710 */
  { uint32_t v = 0x559710u; esp -= 4; W32(esp, v); }
/* 548dea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 548df0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 548df1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 548df8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 548dfb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 548dfc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 548dfd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 548dfe: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 548e01: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 548e04: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 548e07: push 0x5ad78c */
  { uint32_t v = 0x5ad78cu; esp -= 4; W32(esp, v); }
/* 548e0c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 548e13: call 0x4e35da */
  esp -= 4; W32(esp, 0x548e18u); SPILL(); f_4e35da(); if (g_unwind) return; RELOAD();
/* 548e18: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 548e1b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 548e1c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 548e1d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 548e24: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 548e25: mov esp, ebp */
  esp = ebp;
/* 548e27: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 548e28: ret 8 */
  esp += 12; SPILL(); return;
}

void f_548e2b(void) {
  LOAD_REGS();
L_548e2b: /* 548e2b: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 548e2e: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 548e33: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 548e36: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 548e37: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 548e3a: call 0x554df6 */
  esp -= 4; W32(esp, 0x548e3fu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_548e3f(); return;
}

void f_548e3f(void) {
  LOAD_REGS();
L_548e3f: /* 548e3f: push 0x56f088 */
  { uint32_t v = 0x56f088u; esp -= 4; W32(esp, v); }
/* 548e44: push 0x5ad7a0 */
  { uint32_t v = 0x5ad7a0u; esp -= 4; W32(esp, v); }
/* 548e49: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x548e4eu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 548e4e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 548e51: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 548e54: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 548e56: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x548e5bu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 548e5b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 548e5c: push 0x5ad7a8 */
  { uint32_t v = 0x5ad7a8u; esp -= 4; W32(esp, v); }
/* 548e61: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x548e66u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 548e66: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 548e69: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 548e6b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 548e6d: call 0x554df6 */
  esp -= 4; W32(esp, 0x548e72u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_548e72: guest_badaddr(0x548e72); return;
}

void f_548eb0(void) {
  LOAD_REGS();
L_548eb0: /* 548eb0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 548eb1: mov ebp, esp */
  ebp = esp;
/* 548eb3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 548eb5: push 0x559720 */
  { uint32_t v = 0x559720u; esp -= 4; W32(esp, v); }
/* 548eba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 548ec0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 548ec1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 548ec8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 548ecb: test byte ptr [ebp + 0x14], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x14u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 548ecf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 548ed0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 548ed1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 548ed2: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 548ed5: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 548ed8: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 548edf: je 0x548ef9 */
  if (zf) goto L_548ef9;
L_548ee1: /* 548ee1: mov eax, dword ptr [ecx + 0x6c] */
  eax = R32((uint32_t)(ecx + 0x6cu));
/* 548ee4: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 548ee7: test dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 548ee9: je 0x548ef2 */
  if (zf) goto L_548ef2;
L_548eeb: /* 548eeb: mov eax, 0x5a0da8 */
  eax = 0x5a0da8u;
/* 548ef0: jmp 0x548f0d */
  goto L_548f0d;
L_548ef2: /* 548ef2: mov eax, 0x5a0e28 */
  eax = 0x5a0e28u;
/* 548ef7: jmp 0x548f0d */
  goto L_548f0d;
L_548ef9: /* 548ef9: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 548efc: mov edx, dword ptr [ecx + 0x6c] */
  edx = R32((uint32_t)(ecx + 0x6cu));
/* 548eff: test dword ptr [eax], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 548f01: mov eax, 0x5ad7b4 */
  eax = 0x5ad7b4u;
/* 548f06: jne 0x548f0d */
  if (!zf) goto L_548f0d;
L_548f08: /* 548f08: mov eax, 0x5ad7c0 */
  eax = 0x5ad7c0u;
L_548f0d: /* 548f0d: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 548f10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 548f11: push 0x5ad7cc */
  { uint32_t v = 0x5ad7ccu; esp -= 4; W32(esp, v); }
/* 548f16: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 548f17: call 0x4e4183 */
  esp -= 4; W32(esp, 0x548f1cu); SPILL(); f_4e4183(); if (g_unwind) return; RELOAD();
/* 548f1c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 548f1f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 548f22: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 548f23: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 548f24: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 548f2b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 548f2c: mov esp, ebp */
  esp = ebp;
/* 548f2e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 548f2f: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_548f32(void) {
  LOAD_REGS();
L_548f32: /* 548f32: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 548f35: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 548f3a: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 548f3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 548f3e: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 548f41: call 0x554df6 */
  esp -= 4; W32(esp, 0x548f46u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_548f46(); return;
}

void f_548f46(void) {
  LOAD_REGS();
L_548f46: /* 548f46: push 0x56f0d0 */
  { uint32_t v = 0x56f0d0u; esp -= 4; W32(esp, v); }
/* 548f4b: push 0x5ad7d4 */
  { uint32_t v = 0x5ad7d4u; esp -= 4; W32(esp, v); }
/* 548f50: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x548f55u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 548f55: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 548f58: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 548f5b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 548f5d: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x548f62u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 548f62: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 548f63: push 0x5ad7dc */
  { uint32_t v = 0x5ad7dcu; esp -= 4; W32(esp, v); }
/* 548f68: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x548f6du); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 548f6d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 548f70: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 548f72: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 548f74: call 0x554df6 */
  esp -= 4; W32(esp, 0x548f79u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_548f79: guest_badaddr(0x548f79); return;
}

void f_548fc0(void) {
  LOAD_REGS();
L_548fc0: /* 548fc0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 548fc4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 548fc6: je 0x548fcc */
  if (zf) goto L_548fcc;
L_548fc8: /* 548fc8: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 548fca: jmp 0x548fce */
  goto L_548fce;
L_548fcc: /* 548fcc: xor edx, edx */
  edx = 0;
L_548fce: /* 548fce: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 548fd2: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 548fd4: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 548fd6: and eax, dword ptr [ecx + 0x6c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x6cu)));
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 548fd9: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 548fdb: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 548fdd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 548fde: ret 8 */
  esp += 12; SPILL(); return;
}

void f_549000(void) {
  LOAD_REGS();
L_549000: /* 549000: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 549001: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 549005: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 549007: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 549008: mov edi, ecx */
  edi = ecx;
/* 54900a: test dword ptr [edi + 0x6c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x6cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54900d: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 549011: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 549015: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 549016: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 549019: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54901a: mov byte ptr [esp + 0x18], cl */
  W8((uint32_t)(esp + 0x18u), (ecx & 0xffu));
/* 54901e: call 0x4e40e8 */
  esp -= 4; W32(esp, 0x549023u); SPILL(); f_4e40e8(); if (g_unwind) return; RELOAD();
/* 549023: mov al, byte ptr [esp + 0x18] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x18u))) & 0xffu);
/* 549027: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54902a: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 54902c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 54902e: je 0x54903c */
  if (zf) goto L_54903c;
L_549030: /* 549030: mov ecx, dword ptr [edi + 0x6c] */
  ecx = R32((uint32_t)(edi + 0x6cu));
/* 549033: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 549035: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 549036: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 549038: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 549039: ret 0xc */
  esp += 16; SPILL(); return;
L_54903c: /* 54903c: mov edx, dword ptr [edi + 0x6c] */
  edx = R32((uint32_t)(edi + 0x6cu));
/* 54903f: not edx */
  edx = ~edx;
/* 549041: and eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 549043: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 549044: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 549046: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 549047: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_549070(void) {
  LOAD_REGS();
L_549070: /* 549070: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 549071: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 549075: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 549077: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 549078: mov edi, ecx */
  edi = ecx;
/* 54907a: test dword ptr [edi + 0x6c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x6cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54907d: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 549080: mov byte ptr [esp + 0x14], cl */
  W8((uint32_t)(esp + 0x14u), (ecx & 0xffu));
/* 549084: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 549088: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 54908a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 54908c: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 549090: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 549091: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x549094u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 549094: mov al, byte ptr [esp + 0x14] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x14u))) & 0xffu);
/* 549098: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 54909a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 54909c: je 0x5490af */
  if (zf) goto L_5490af;
L_54909e: /* 54909e: mov ecx, dword ptr [edi + 0x6c] */
  ecx = R32((uint32_t)(edi + 0x6cu));
/* 5490a1: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 5490a3: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 5490a5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5490a6: mov eax, 1 */
  eax = 0x1u;
/* 5490ab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5490ac: ret 0xc */
  esp += 16; SPILL(); return;
L_5490af: /* 5490af: mov edx, dword ptr [edi + 0x6c] */
  edx = R32((uint32_t)(edi + 0x6cu));
/* 5490b2: not edx */
  edx = ~edx;
/* 5490b4: and eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 5490b6: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 5490b8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5490b9: mov eax, 1 */
  eax = 0x1u;
/* 5490be: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5490bf: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_5490f0(void) {
  LOAD_REGS();
L_5490f0: /* 5490f0: mov eax, dword ptr [ecx + 0x6c] */
  eax = R32((uint32_t)(ecx + 0x6cu));
/* 5490f3: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 5490f7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5490f8: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 5490fa: mov edx, eax */
  edx = eax;
/* 5490fc: not edx */
  edx = ~edx;
/* 5490fe: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 549100: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 549104: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 549106: and esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 549108: or edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 54910a: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 54910c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54910d: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_549120(void) {
  LOAD_REGS();
L_549120: /* 549120: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 549124: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 549126: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 54912a: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 54912c: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_549140(void) {
  LOAD_REGS();
L_549140: /* 549140: mov eax, dword ptr [ecx + 0x34] */
  eax = R32((uint32_t)(ecx + 0x34u));
/* 549143: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 549146: jne 0x549157 */
  if (!zf) goto L_549157;
L_549148: /* 549148: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 54914c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 54914e: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 549152: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 549154: ret 0xc */
  esp += 16; SPILL(); return;
L_549157: /* 549157: xor edx, edx */
  edx = 0;
/* 549159: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 54915b: jle 0x549182 */
  if ((zf || sf != of)) goto L_549182;
L_54915d: /* 54915d: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 549161: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 549162: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 549166: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 549167: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 549169: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_549170: /* 549170: mov edi, dword ptr [esi + eax] */
  edi = R32((uint32_t)(esi + eax));
/* 549173: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 549175: mov edi, dword ptr [ecx + 0x34] */
  edi = R32((uint32_t)(ecx + 0x34u));
/* 549178: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 549179: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54917c: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54917e: jl 0x549170 */
  if ((sf != of)) goto L_549170;
L_549180: /* 549180: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 549181: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_549182: /* 549182: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_5491b0(void) {
  LOAD_REGS();
L_5491b0: /* 5491b0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 5491b4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5491b6: je 0x5491bc */
  if (zf) goto L_5491bc;
L_5491b8: /* 5491b8: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 5491ba: jmp 0x5491c2 */
  goto L_5491c2;
L_5491bc: /* 5491bc: fld dword ptr [0x56947c] */
  { double v = F32((uint32_t)(0x56947cu)); FPUSH(v); }
L_5491c2: /* 5491c2: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 5491c6: fcomp dword ptr [eax] */
  fpu_com(ST0, F32((uint32_t)(eax)));
  FPOP();
/* 5491c8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 5491ca: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 5491cd: jp 0x5491d7 */
  if (pf) goto L_5491d7;
L_5491cf: /* 5491cf: mov eax, 1 */
  eax = 0x1u;
/* 5491d4: ret 8 */
  esp += 12; SPILL(); return;
L_5491d7: /* 5491d7: xor eax, eax */
  eax = 0;
/* 5491d9: ret 8 */
  esp += 12; SPILL(); return;
}

void f_5491f0(void) {
  LOAD_REGS();
L_5491f0: /* 5491f0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 5491f4: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 5491f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5491f9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5491fa: call 0x4e415b */
  esp -= 4; W32(esp, 0x5491ffu); SPILL(); f_4e415b(); if (g_unwind) return; RELOAD();
/* 5491ff: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 549202: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_549220(void) {
  LOAD_REGS();
L_549220: /* 549220: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 549224: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 549228: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 549229: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54922a: call 0x4e415b */
  esp -= 4; W32(esp, 0x54922fu); SPILL(); f_4e415b(); if (g_unwind) return; RELOAD();
/* 54922f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 549232: mov eax, 1 */
  eax = 0x1u;
/* 549237: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_549250(void) {
  LOAD_REGS();
L_549250: /* 549250: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 549251: mov ebp, esp */
  ebp = esp;
/* 549253: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 549255: push 0x559730 */
  { uint32_t v = 0x559730u; esp -= 4; W32(esp, v); }
/* 54925a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 549260: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 549261: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 549268: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54926b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54926c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54926d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54926e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 549271: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 549274: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 549277: push 0x5ad84c */
  { uint32_t v = 0x5ad84cu; esp -= 4; W32(esp, v); }
/* 54927c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 549283: call 0x4e35da */
  esp -= 4; W32(esp, 0x549288u); SPILL(); f_4e35da(); if (g_unwind) return; RELOAD();
/* 549288: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54928b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54928c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54928d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 549294: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 549295: mov esp, ebp */
  esp = ebp;
/* 549297: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 549298: ret 8 */
  esp += 12; SPILL(); return;
}

void f_54929b(void) {
  LOAD_REGS();
L_54929b: /* 54929b: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 54929e: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 5492a3: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 5492a6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5492a7: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 5492aa: call 0x554df6 */
  esp -= 4; W32(esp, 0x5492afu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_5492af(); return;
}

void f_5492af(void) {
  LOAD_REGS();
L_5492af: /* 5492af: push 0x56f118 */
  { uint32_t v = 0x56f118u; esp -= 4; W32(esp, v); }
/* 5492b4: push 0x5ad858 */
  { uint32_t v = 0x5ad858u; esp -= 4; W32(esp, v); }
/* 5492b9: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x5492beu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 5492be: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 5492c1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5492c4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5492c6: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x5492cbu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 5492cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5492cc: push 0x5ad860 */
  { uint32_t v = 0x5ad860u; esp -= 4; W32(esp, v); }
/* 5492d1: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x5492d6u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 5492d6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5492d9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5492db: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5492dd: call 0x554df6 */
  esp -= 4; W32(esp, 0x5492e2u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_5492e2: guest_badaddr(0x5492e2); return;
}

void f_549320(void) {
  LOAD_REGS();
L_549320: /* 549320: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 549321: mov ebp, esp */
  ebp = esp;
/* 549323: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 549325: push 0x559740 */
  { uint32_t v = 0x559740u; esp -= 4; W32(esp, v); }
/* 54932a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 549330: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 549331: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 549338: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54933b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 54933e: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 549340: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 549341: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 549342: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 549343: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 549346: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 549349: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 54934c: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 54934f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 549352: push 0x5ad86c */
  { uint32_t v = 0x5ad86cu; esp -= 4; W32(esp, v); }
/* 549357: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 549358: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 54935f: call 0x4e4183 */
  esp -= 4; W32(esp, 0x549364u); SPILL(); f_4e4183(); if (g_unwind) return; RELOAD();
/* 549364: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 549367: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54936a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54936b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54936c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 549373: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 549374: mov esp, ebp */
  esp = ebp;
/* 549376: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 549377: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_54937a(void) {
  LOAD_REGS();
L_54937a: /* 54937a: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 54937d: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 549382: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 549385: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 549386: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 549389: call 0x554df6 */
  esp -= 4; W32(esp, 0x54938eu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_54938e(); return;
}

void f_54938e(void) {
  LOAD_REGS();
L_54938e: /* 54938e: push 0x56f160 */
  { uint32_t v = 0x56f160u; esp -= 4; W32(esp, v); }
/* 549393: push 0x5ad874 */
  { uint32_t v = 0x5ad874u; esp -= 4; W32(esp, v); }
/* 549398: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54939du); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54939d: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 5493a0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5493a3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5493a5: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x5493aau); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 5493aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5493ab: push 0x5ad87c */
  { uint32_t v = 0x5ad87cu; esp -= 4; W32(esp, v); }
/* 5493b0: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x5493b5u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 5493b5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5493b8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5493ba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5493bc: call 0x554df6 */
  esp -= 4; W32(esp, 0x5493c1u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_5493c1: guest_badaddr(0x5493c1); return;
}

void f_549400(void) {
  LOAD_REGS();
L_549400: /* 549400: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 549401: mov ebp, esp */
  ebp = esp;
/* 549403: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 549405: push 0x559750 */
  { uint32_t v = 0x559750u; esp -= 4; W32(esp, v); }
/* 54940a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 549410: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 549411: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 549418: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54941b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54941c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54941d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 549420: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 549421: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 549424: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 549425: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 549428: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 54942f: call 0x4e3d69 */
  esp -= 4; W32(esp, 0x549434u); SPILL(); f_4e3d69(); if (g_unwind) return; RELOAD();
/* 549434: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 549437: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 54943a: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 54943c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54943f: nop  */
L_549440: /* 549440: mov ax, word ptr [esi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 549443: test ax, ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 549446: je 0x549465 */
  if (zf) goto L_549465;
L_549448: /* 549448: cmp ax, 0x2c */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x2cu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 54944c: je 0x549465 */
  if (zf) goto L_549465;
L_54944e: /* 54944e: cmp ax, 0x29 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x29u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 549452: je 0x549465 */
  if (zf) goto L_549465;
L_549454: /* 549454: cmp ax, 0xd */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xdu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 549458: je 0x549465 */
  if (zf) goto L_549465;
L_54945a: /* 54945a: cmp ax, 0xa */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xau);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 54945e: je 0x549465 */
  if (zf) goto L_549465;
L_549460: /* 549460: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 549463: jmp 0x549440 */
  goto L_549440;
L_549465: /* 549465: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 549468: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 549469: mov eax, esi */
  eax = esi;
/* 54946b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54946c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 549473: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 549474: mov esp, ebp */
  esp = ebp;
/* 549476: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 549477: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_54947a(void) {
  LOAD_REGS();
L_54947a: /* 54947a: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 54947d: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 549482: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 549485: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 549486: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 549489: call 0x554df6 */
  esp -= 4; W32(esp, 0x54948eu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_54948e(); return;
}

void f_54948e(void) {
  LOAD_REGS();
L_54948e: /* 54948e: push 0x56f1ac */
  { uint32_t v = 0x56f1acu; esp -= 4; W32(esp, v); }
/* 549493: push 0x5ad888 */
  { uint32_t v = 0x5ad888u; esp -= 4; W32(esp, v); }
/* 549498: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54949du); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54949d: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 5494a0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5494a3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5494a5: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x5494aau); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 5494aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5494ab: push 0x5ad890 */
  { uint32_t v = 0x5ad890u; esp -= 4; W32(esp, v); }
/* 5494b0: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x5494b5u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 5494b5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5494b8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5494ba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5494bc: call 0x554df6 */
  esp -= 4; W32(esp, 0x5494c1u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_5494c1: guest_badaddr(0x5494c1); return;
}

void f_549510(void) {
  LOAD_REGS();
L_549510: /* 549510: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 549511: mov ebp, esp */
  ebp = esp;
/* 549513: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 549515: push 0x559760 */
  { uint32_t v = 0x559760u; esp -= 4; W32(esp, v); }
/* 54951a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 549520: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 549521: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 549528: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54952b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54952c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54952d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54952e: mov ebx, ecx */
  ebx = ecx;
/* 549530: xor edi, edi */
  edi = 0;
/* 549532: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 549535: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 549538: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 54953b: jmp 0x549540 */
  goto L_549540;
L_549540: /* 549540: cmp edi, dword ptr [ebx + 0x34] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 549543: jge 0x5495dc */
  if ((sf == of)) goto L_5495dc;
L_549549: /* 549549: mov esi, dword ptr [ebx + 0x38] */
  esi = R32((uint32_t)(ebx + 0x38u));
/* 54954c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 54954f: imul esi, edi */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(edi);
  esi = (uint32_t)r;
  }
/* 549552: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 549554: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 549556: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 549558: je 0x549592 */
  if (zf) goto L_549592;
L_54955a: /* 54955a: call 0x4e1ba9 */
  esp -= 4; W32(esp, 0x54955fu); SPILL(); f_4e1ba9(); if (g_unwind) return; RELOAD();
/* 54955f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 549561: jne 0x54957a */
  if (!zf) goto L_54957a;
L_549563: /* 549563: push 0x338 */
  { uint32_t v = 0x338u; esp -= 4; W32(esp, v); }
/* 549568: push 0x5ad8bc */
  { uint32_t v = 0x5ad8bcu; esp -= 4; W32(esp, v); }
/* 54956d: push 0x5ad8c8 */
  { uint32_t v = 0x5ad8c8u; esp -= 4; W32(esp, v); }
/* 549572: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x549577u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 549577: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_54957a: /* 54957a: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 54957c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 54957e: call dword ptr [eax + 0x30] */
  { uint32_t t = R32((uint32_t)(eax + 0x30u)); esp -= 4; W32(esp, 0x549581u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 549581: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 549583: je 0x549592 */
  if (zf) goto L_549592;
L_549585: /* 549585: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 549587: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 549589: call dword ptr [edx + 0x20] */
  { uint32_t t = R32((uint32_t)(edx + 0x20u)); esp -= 4; W32(esp, 0x54958cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54958c: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
L_549592: /* 549592: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 549593: jmp 0x549540 */
  goto L_549540;
L_5495dc: /* 5495dc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5495df: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5495e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5495e1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5495e8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5495e9: mov esp, ebp */
  esp = ebp;
/* 5495eb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5495ec: ret 4 */
  esp += 8; SPILL(); return;
}

void f_54953d(void) {
  LOAD_REGS();
L_54953d: /* 54953d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_549540: /* 549540: cmp edi, dword ptr [ebx + 0x34] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 549543: jge 0x5495dc */
  if ((sf == of)) goto L_5495dc;
L_549549: /* 549549: mov esi, dword ptr [ebx + 0x38] */
  esi = R32((uint32_t)(ebx + 0x38u));
/* 54954c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 54954f: imul esi, edi */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(edi);
  esi = (uint32_t)r;
  }
/* 549552: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 549554: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 549556: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 549558: je 0x549592 */
  if (zf) goto L_549592;
L_54955a: /* 54955a: call 0x4e1ba9 */
  esp -= 4; W32(esp, 0x54955fu); SPILL(); f_4e1ba9(); if (g_unwind) return; RELOAD();
/* 54955f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 549561: jne 0x54957a */
  if (!zf) goto L_54957a;
L_549563: /* 549563: push 0x338 */
  { uint32_t v = 0x338u; esp -= 4; W32(esp, v); }
/* 549568: push 0x5ad8bc */
  { uint32_t v = 0x5ad8bcu; esp -= 4; W32(esp, v); }
/* 54956d: push 0x5ad8c8 */
  { uint32_t v = 0x5ad8c8u; esp -= 4; W32(esp, v); }
/* 549572: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x549577u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 549577: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_54957a: /* 54957a: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 54957c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 54957e: call dword ptr [eax + 0x30] */
  { uint32_t t = R32((uint32_t)(eax + 0x30u)); esp -= 4; W32(esp, 0x549581u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 549581: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 549583: je 0x549592 */
  if (zf) goto L_549592;
L_549585: /* 549585: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 549587: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 549589: call dword ptr [edx + 0x20] */
  { uint32_t t = R32((uint32_t)(edx + 0x20u)); esp -= 4; W32(esp, 0x54958cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54958c: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
L_549592: /* 549592: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 549593: jmp 0x549540 */
  goto L_549540;
L_5495dc: /* 5495dc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5495df: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5495e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5495e1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5495e8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5495e9: mov esp, ebp */
  esp = ebp;
/* 5495eb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5495ec: ret 4 */
  esp += 8; SPILL(); return;
}

void f_549595(void) {
  LOAD_REGS();
L_549595: /* 549595: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 549598: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 54959d: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 5495a0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5495a1: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 5495a4: call 0x554df6 */
  esp -= 4; W32(esp, 0x5495a9u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_5495a9(); return;
}

void f_5495a9(void) {
  LOAD_REGS();
L_5495a9: /* 5495a9: push 0x56f1f0 */
  { uint32_t v = 0x56f1f0u; esp -= 4; W32(esp, v); }
/* 5495ae: push 0x5ad8d8 */
  { uint32_t v = 0x5ad8d8u; esp -= 4; W32(esp, v); }
/* 5495b3: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x5495b8u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 5495b8: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 5495bb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5495be: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5495c0: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x5495c5u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 5495c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5495c6: push 0x5ad8e0 */
  { uint32_t v = 0x5ad8e0u; esp -= 4; W32(esp, v); }
/* 5495cb: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x5495d0u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 5495d0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5495d3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5495d5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5495d7: call 0x554df6 */
  esp -= 4; W32(esp, 0x5495dcu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
/* 5495dc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5495df: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5495e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5495e1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5495e8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5495e9: mov esp, ebp */
  esp = ebp;
/* 5495eb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5495ec: ret 4 */
  esp += 8; SPILL(); return;
}

void f_549630(void) {
  LOAD_REGS();
L_549630: /* 549630: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 549634: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 549636: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 54963a: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 54963c: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_549650(void) {
  LOAD_REGS();
L_549650: /* 549650: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 549654: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 549656: je 0x54966e */
  if (zf) goto L_54966e;
L_549658: /* 549658: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 54965c: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 54965e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54965f: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 549661: xor ecx, ecx */
  ecx = 0;
/* 549663: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 549665: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 549668: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 549669: mov eax, ecx */
  eax = ecx;
/* 54966b: ret 8 */
  esp += 12; SPILL(); return;
L_54966e: /* 54966e: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 549672: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 549673: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 549675: xor eax, eax */
  eax = 0;
/* 549677: xor ecx, ecx */
  ecx = 0;
/* 549679: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54967b: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 54967e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54967f: mov eax, ecx */
  eax = ecx;
/* 549681: ret 8 */
  esp += 12; SPILL(); return;
}

void f_5496a0(void) {
  LOAD_REGS();
L_5496a0: /* 5496a0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 5496a4: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 5496a8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 5496aa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5496ab: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x5496aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5496ae: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_5496d0(void) {
  LOAD_REGS();
L_5496d0: /* 5496d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5496d1: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 5496d5: mov eax, ecx */
  eax = ecx;
/* 5496d7: mov eax, dword ptr [eax + 0x6c] */
  eax = R32((uint32_t)(eax + 0x6cu));
/* 5496da: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 5496de: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5496e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5496e1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5496e2: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 5496e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5496e7: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0x5496eau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5496ea: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5496eb: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_549700(void) {
  LOAD_REGS();
L_549700: /* 549700: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 549701: mov ebp, esp */
  ebp = esp;
/* 549703: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 549705: push 0x559770 */
  { uint32_t v = 0x559770u; esp -= 4; W32(esp, v); }
/* 54970a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 549710: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 549711: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 549718: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54971b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54971c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54971d: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 549720: mov ecx, dword ptr [ecx + 0x6c] */
  ecx = R32((uint32_t)(ecx + 0x6cu));
/* 549723: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 549725: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 549726: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 549729: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 549730: call dword ptr [eax + 0x94] */
  { uint32_t t = R32((uint32_t)(eax + 0x94u)); esp -= 4; W32(esp, 0x549736u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 549736: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 549739: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54973a: push 0x5ad914 */
  { uint32_t v = 0x5ad914u; esp -= 4; W32(esp, v); }
/* 54973f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 549740: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x549745u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 549745: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 549748: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54974b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54974c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54974d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 549754: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 549755: mov esp, ebp */
  esp = ebp;
/* 549757: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 549758: ret 8 */
  esp += 12; SPILL(); return;
}

void f_54975b(void) {
  LOAD_REGS();
L_54975b: /* 54975b: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 54975e: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 549763: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 549766: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 549767: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 54976a: call 0x554df6 */
  esp -= 4; W32(esp, 0x54976fu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_54976f(); return;
}

void f_54976f(void) {
  LOAD_REGS();
L_54976f: /* 54976f: push 0x56f244 */
  { uint32_t v = 0x56f244u; esp -= 4; W32(esp, v); }
/* 549774: push 0x5ad928 */
  { uint32_t v = 0x5ad928u; esp -= 4; W32(esp, v); }
/* 549779: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54977eu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54977e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 549781: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 549784: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 549786: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x54978bu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 54978b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54978c: push 0x5ad930 */
  { uint32_t v = 0x5ad930u; esp -= 4; W32(esp, v); }
/* 549791: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x549796u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 549796: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 549799: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54979b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54979d: call 0x554df6 */
  esp -= 4; W32(esp, 0x5497a2u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_5497a2: guest_badaddr(0x5497a2); return;
}

void f_5497e0(void) {
  LOAD_REGS();
L_5497e0: /* 5497e0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 5497e4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 5497e6: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 5497ea: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 5497ec: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_549800(void) {
  LOAD_REGS();
L_549800: /* 549800: mov eax, dword ptr [ecx + 0x34] */
  eax = R32((uint32_t)(ecx + 0x34u));
/* 549803: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 549806: jne 0x549817 */
  if (!zf) goto L_549817;
L_549808: /* 549808: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 54980c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 54980e: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 549812: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 549814: ret 0xc */
  esp += 16; SPILL(); return;
L_549817: /* 549817: xor edx, edx */
  edx = 0;
/* 549819: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 54981b: jle 0x549842 */
  if ((zf || sf != of)) goto L_549842;
L_54981d: /* 54981d: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 549821: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 549822: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 549826: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 549827: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 549829: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_549830: /* 549830: mov edi, dword ptr [esi + eax] */
  edi = R32((uint32_t)(esi + eax));
/* 549833: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 549835: mov edi, dword ptr [ecx + 0x34] */
  edi = R32((uint32_t)(ecx + 0x34u));
/* 549838: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 549839: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54983c: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54983e: jl 0x549830 */
  if ((sf != of)) goto L_549830;
L_549840: /* 549840: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 549841: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_549842: /* 549842: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_549870(void) {
  LOAD_REGS();
L_549870: /* 549870: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 549874: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 549878: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 54987a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54987b: call dword ptr [eax + 0x1c] */
  { uint32_t t = R32((uint32_t)(eax + 0x1cu)); esp -= 4; W32(esp, 0x54987eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54987e: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_5498a0(void) {
  LOAD_REGS();
L_5498a0: /* 5498a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 5498a1: mov ebp, esp */
  ebp = esp;
/* 5498a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5498a5: push 0x559780 */
  { uint32_t v = 0x559780u; esp -= 4; W32(esp, v); }
/* 5498aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 5498b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5498b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 5498b8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5498bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5498bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5498bd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5498be: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 5498c1: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 5498c4: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 5498c7: push 0x5adb00 */
  { uint32_t v = 0x5adb00u; esp -= 4; W32(esp, v); }
/* 5498cc: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 5498d3: call 0x4e35da */
  esp -= 4; W32(esp, 0x5498d8u); SPILL(); f_4e35da(); if (g_unwind) return; RELOAD();
/* 5498d8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5498db: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5498dc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5498dd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5498e4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5498e5: mov esp, ebp */
  esp = ebp;
/* 5498e7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5498e8: ret 8 */
  esp += 12; SPILL(); return;
}

void f_5498eb(void) {
  LOAD_REGS();
L_5498eb: /* 5498eb: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 5498ee: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 5498f3: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 5498f6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5498f7: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 5498fa: call 0x554df6 */
  esp -= 4; W32(esp, 0x5498ffu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_5498ff(); return;
}

void f_5498ff(void) {
  LOAD_REGS();
L_5498ff: /* 5498ff: push 0x56f290 */
  { uint32_t v = 0x56f290u; esp -= 4; W32(esp, v); }
/* 549904: push 0x5adb0c */
  { uint32_t v = 0x5adb0cu; esp -= 4; W32(esp, v); }
/* 549909: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54990eu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54990e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 549911: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 549914: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 549916: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x54991bu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 54991b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54991c: push 0x5adb14 */
  { uint32_t v = 0x5adb14u; esp -= 4; W32(esp, v); }
/* 549921: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x549926u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 549926: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 549929: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54992b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54992d: call 0x554df6 */
  esp -= 4; W32(esp, 0x549932u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_549932: guest_badaddr(0x549932); return;
}

void f_549970(void) {
  LOAD_REGS();
L_549970: /* 549970: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 549974: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 549978: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 549979: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54997a: call 0x4e1451 */
  esp -= 4; W32(esp, 0x54997fu); SPILL(); f_4e1451(); if (g_unwind) return; RELOAD();
/* 54997f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 549982: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_5499a0(void) {
  LOAD_REGS();
L_5499a0: /* 5499a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 5499a1: mov ebp, esp */
  ebp = esp;
/* 5499a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5499a5: push 0x559790 */
  { uint32_t v = 0x559790u; esp -= 4; W32(esp, v); }
/* 5499aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 5499b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5499b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 5499b8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5499bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5499bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5499bd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5499be: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 5499c1: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 5499c4: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 5499c7: push 0x5adb98 */
  { uint32_t v = 0x5adb98u; esp -= 4; W32(esp, v); }
/* 5499cc: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 5499d3: call 0x4e35da */
  esp -= 4; W32(esp, 0x5499d8u); SPILL(); f_4e35da(); if (g_unwind) return; RELOAD();
/* 5499d8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5499db: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5499dc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5499dd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5499e4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5499e5: mov esp, ebp */
  esp = ebp;
/* 5499e7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5499e8: ret 8 */
  esp += 12; SPILL(); return;
}

void f_5499eb(void) {
  LOAD_REGS();
L_5499eb: /* 5499eb: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 5499ee: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 5499f3: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 5499f6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5499f7: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 5499fa: call 0x554df6 */
  esp -= 4; W32(esp, 0x5499ffu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_5499ff(); return;
}

void f_5499ff(void) {
  LOAD_REGS();
L_5499ff: /* 5499ff: push 0x56f2d8 */
  { uint32_t v = 0x56f2d8u; esp -= 4; W32(esp, v); }
/* 549a04: push 0x5adba8 */
  { uint32_t v = 0x5adba8u; esp -= 4; W32(esp, v); }
/* 549a09: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x549a0eu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 549a0e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 549a11: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 549a14: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 549a16: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x549a1bu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 549a1b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 549a1c: push 0x5adbb0 */
  { uint32_t v = 0x5adbb0u; esp -= 4; W32(esp, v); }
/* 549a21: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x549a26u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 549a26: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 549a29: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 549a2b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 549a2d: call 0x554df6 */
  esp -= 4; W32(esp, 0x549a32u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_549a32: guest_badaddr(0x549a32); return;
}

void f_549a70(void) {
  LOAD_REGS();
L_549a70: /* 549a70: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 549a71: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 549a72: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 549a73: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 549a74: mov edi, ecx */
  edi = ecx;
/* 549a76: mov eax, dword ptr [edi + 0x70] */
  eax = R32((uint32_t)(edi + 0x70u));
/* 549a79: xor esi, esi */
  esi = 0;
/* 549a7b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 549a7d: jle 0x549abb */
  if ((zf || sf != of)) goto L_549abb;
L_549a7f: /* 549a7f: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 549a83: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
L_549a87: /* 549a87: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 549a89: je 0x549a98 */
  if (zf) goto L_549a98;
L_549a8b: /* 549a8b: mov eax, dword ptr [edi + 0x6c] */
  eax = R32((uint32_t)(edi + 0x6cu));
/* 549a8e: mov eax, dword ptr [eax + 0x38] */
  eax = R32((uint32_t)(eax + 0x38u));
/* 549a91: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* 549a94: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 549a96: jmp 0x549a9a */
  goto L_549a9a;
L_549a98: /* 549a98: xor eax, eax */
  eax = 0;
L_549a9a: /* 549a9a: mov ecx, dword ptr [edi + 0x6c] */
  ecx = R32((uint32_t)(edi + 0x6cu));
/* 549a9d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 549a9f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 549aa0: mov eax, dword ptr [ecx + 0x38] */
  eax = R32((uint32_t)(ecx + 0x38u));
/* 549aa3: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* 549aa6: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 549aa8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 549aa9: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0x549aafu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 549aaf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 549ab1: je 0x549ac7 */
  if (zf) goto L_549ac7;
L_549ab3: /* 549ab3: mov eax, dword ptr [edi + 0x70] */
  eax = R32((uint32_t)(edi + 0x70u));
/* 549ab6: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 549ab7: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 549ab9: jl 0x549a87 */
  if ((sf != of)) goto L_549a87;
L_549abb: /* 549abb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 549abc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 549abd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 549abe: mov eax, 1 */
  eax = 0x1u;
/* 549ac3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 549ac4: ret 8 */
  esp += 12; SPILL(); return;
L_549ac7: /* 549ac7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 549ac8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 549ac9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 549aca: xor eax, eax */
  eax = 0;
/* 549acc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 549acd: ret 8 */
  esp += 12; SPILL(); return;
}

void f_549af0(void) {
  LOAD_REGS();
L_549af0: /* 549af0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 549af1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 549af2: mov edi, ecx */
  edi = ecx;
/* 549af4: mov ecx, dword ptr [edi + 0x70] */
  ecx = R32((uint32_t)(edi + 0x70u));
/* 549af7: xor esi, esi */
  esi = 0;
/* 549af9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 549afb: jle 0x549b36 */
  if ((zf || sf != of)) goto L_549b36;
L_549afd: /* 549afd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 549afe: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 549b02: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 549b03: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
L_549b07: /* 549b07: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 549b0b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 549b0d: jle 0x549b14 */
  if ((zf || sf != of)) goto L_549b14;
L_549b0f: /* 549b0f: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 549b10: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x549b10);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 549b12: jmp 0x549b16 */
  goto L_549b16;
L_549b14: /* 549b14: xor eax, eax */
  eax = 0;
L_549b16: /* 549b16: mov ecx, dword ptr [edi + 0x6c] */
  ecx = R32((uint32_t)(edi + 0x6cu));
/* 549b19: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 549b1b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 549b1c: mov eax, dword ptr [ecx + 0x38] */
  eax = R32((uint32_t)(ecx + 0x38u));
/* 549b1f: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* 549b22: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 549b24: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 549b25: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 549b26: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x549b2cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 549b2c: mov ecx, dword ptr [edi + 0x70] */
  ecx = R32((uint32_t)(edi + 0x70u));
/* 549b2f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 549b30: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 549b32: jl 0x549b07 */
  if ((sf != of)) goto L_549b07;
L_549b34: /* 549b34: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 549b35: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_549b36: /* 549b36: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 549b37: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 549b38: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_549b60(void) {
  LOAD_REGS();
L_549b60: /* 549b60: mov eax, 1 */
  eax = 0x1u;
/* 549b65: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_549b80(void) {
  LOAD_REGS();
L_549b80: /* 549b80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 549b81: mov ebp, esp */
  ebp = esp;
/* 549b83: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 549b85: push 0x5597a0 */
  { uint32_t v = 0x5597a0u; esp -= 4; W32(esp, v); }
/* 549b8a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 549b90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 549b91: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 549b98: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 549b9b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 549b9c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 549b9d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 549b9e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 549ba1: mov esi, ecx */
  esi = ecx;
/* 549ba3: mov ecx, dword ptr [esi + 0x6c] */
  ecx = R32((uint32_t)(esi + 0x6cu));
/* 549ba6: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 549ba8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 549bab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 549bad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 549bae: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 549bb1: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 549bb8: call dword ptr [eax + 0x8c] */
  { uint32_t t = R32((uint32_t)(eax + 0x8cu)); esp -= 4; W32(esp, 0x549bbeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 549bbe: mov ecx, dword ptr [esi + 0x70] */
  ecx = R32((uint32_t)(esi + 0x70u));
/* 549bc1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 549bc2: push 0x5adc48 */
  { uint32_t v = 0x5adc48u; esp -= 4; W32(esp, v); }
/* 549bc7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 549bc8: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x549bcdu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 549bcd: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 549bd0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 549bd3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 549bd4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 549bd5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 549bdc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 549bdd: mov esp, ebp */
  esp = ebp;
/* 549bdf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 549be0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_549be3(void) {
  LOAD_REGS();
L_549be3: /* 549be3: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 549be6: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 549beb: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 549bee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 549bef: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 549bf2: call 0x554df6 */
  esp -= 4; W32(esp, 0x549bf7u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_549bf7(); return;
}

void f_549bf7(void) {
  LOAD_REGS();
L_549bf7: /* 549bf7: push 0x56f320 */
  { uint32_t v = 0x56f320u; esp -= 4; W32(esp, v); }
/* 549bfc: push 0x5adc54 */
  { uint32_t v = 0x5adc54u; esp -= 4; W32(esp, v); }
/* 549c01: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x549c06u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 549c06: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 549c09: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 549c0c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 549c0e: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x549c13u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 549c13: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 549c14: push 0x5adc5c */
  { uint32_t v = 0x5adc5cu; esp -= 4; W32(esp, v); }
/* 549c19: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x549c1eu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 549c1e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 549c21: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 549c23: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 549c25: call 0x554df6 */
  esp -= 4; W32(esp, 0x549c2au); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_549c2a: guest_badaddr(0x549c2a); return;
}

void f_549c60(void) {
  LOAD_REGS();
L_549c60: /* 549c60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 549c61: mov ebp, esp */
  ebp = esp;
/* 549c63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 549c65: push 0x5597b0 */
  { uint32_t v = 0x5597b0u; esp -= 4; W32(esp, v); }
/* 549c6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 549c70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 549c71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 549c78: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 549c7b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 549c7c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 549c7d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 549c80: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 549c81: xor edi, edi */
  edi = 0;
/* 549c83: mov word ptr [esi], 0x28 */
  W16((uint32_t)(esi), 0x28u);
/* 549c88: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 549c8b: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 549c8e: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 549c91: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_549c94: /* 549c94: cmp edi, dword ptr [ecx + 0x70] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x70u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 549c97: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 549c9a: jge 0x549d38 */
  if ((sf == of)) goto L_549d38;
L_549ca0: /* 549ca0: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 549ca2: jle 0x549cac */
  if ((zf || sf != of)) goto L_549cac;
L_549ca4: /* 549ca4: mov word ptr [esi], 0x2c */
  W16((uint32_t)(esi), 0x2cu);
/* 549ca9: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_549cac: /* 549cac: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 549cae: je 0x549cbd */
  if (zf) goto L_549cbd;
L_549cb0: /* 549cb0: mov eax, dword ptr [ecx + 0x6c] */
  eax = R32((uint32_t)(ecx + 0x6cu));
/* 549cb3: mov eax, dword ptr [eax + 0x38] */
  eax = R32((uint32_t)(eax + 0x38u));
/* 549cb6: imul eax, edi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edi);
  eax = (uint32_t)r;
  }
/* 549cb9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 549cbb: jmp 0x549cbf */
  goto L_549cbf;
L_549cbd: /* 549cbd: xor eax, eax */
  eax = 0;
L_549cbf: /* 549cbf: mov ebx, dword ptr [ebp + 0x14] */
  ebx = R32((uint32_t)(ebp + 0x14u));
/* 549cc2: mov ecx, dword ptr [ecx + 0x6c] */
  ecx = R32((uint32_t)(ecx + 0x6cu));
/* 549cc5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 549cc7: or ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 549cca: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 549ccb: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 549cce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 549ccf: mov eax, dword ptr [ecx + 0x38] */
  eax = R32((uint32_t)(ecx + 0x38u));
/* 549cd2: imul eax, edi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edi);
  eax = (uint32_t)r;
  }
/* 549cd5: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 549cd7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 549cd8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 549cd9: call dword ptr [edx + 0x98] */
  { uint32_t t = R32((uint32_t)(edx + 0x98u)); esp -= 4; W32(esp, 0x549cdfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 549cdf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 549ce0: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x549ce5u); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 549ce5: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 549ce8: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 549ceb: lea esi, [esi + eax*2] */
  esi = (uint32_t)(esi + eax*2);
/* 549cee: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 549cef: jmp 0x549c94 */
  goto L_549c94;
L_549d38: /* 549d38: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 549d3b: mov word ptr [esi], 0x29 */
  W16((uint32_t)(esi), 0x29u);
/* 549d40: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 549d41: mov word ptr [esi + 2], 0 */
  W16((uint32_t)(esi + 0x2u), 0x0u);
/* 549d47: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 549d48: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 549d4f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 549d50: mov esp, ebp */
  esp = ebp;
/* 549d52: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 549d53: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_549cf1(void) {
  LOAD_REGS();
L_549cf1: /* 549cf1: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 549cf4: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 549cf9: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 549cfc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 549cfd: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 549d00: call 0x554df6 */
  esp -= 4; W32(esp, 0x549d05u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_549d05(); return;
}

void f_549d05(void) {
  LOAD_REGS();
L_549d05: /* 549d05: push 0x56f378 */
  { uint32_t v = 0x56f378u; esp -= 4; W32(esp, v); }
/* 549d0a: push 0x5adc68 */
  { uint32_t v = 0x5adc68u; esp -= 4; W32(esp, v); }
/* 549d0f: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x549d14u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 549d14: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 549d17: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 549d1a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 549d1c: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x549d21u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 549d21: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 549d22: push 0x5adc70 */
  { uint32_t v = 0x5adc70u; esp -= 4; W32(esp, v); }
/* 549d27: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x549d2cu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 549d2c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 549d2f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 549d31: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 549d33: call 0x554df6 */
  esp -= 4; W32(esp, 0x549d38u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
/* 549d38: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 549d3b: mov word ptr [esi], 0x29 */
  W16((uint32_t)(esi), 0x29u);
/* 549d40: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 549d41: mov word ptr [esi + 2], 0 */
  W16((uint32_t)(esi + 0x2u), 0x0u);
/* 549d47: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 549d48: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 549d4f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 549d50: mov esp, ebp */
  esp = ebp;
/* 549d52: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 549d53: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_549da0(void) {
  LOAD_REGS();
L_549da0: /* 549da0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 549da1: mov ebp, esp */
  ebp = esp;
/* 549da3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 549da5: push 0x5597c0 */
  { uint32_t v = 0x5597c0u; esp -= 4; W32(esp, v); }
/* 549daa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 549db0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 549db1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 549db8: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 549dbb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 549dbe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 549dbf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 549dc0: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 549dc3: mov cx, word ptr [eax] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 549dc6: xor esi, esi */
  esi = 0;
/* 549dc8: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 549dcb: cmp cx, 0x28 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x28u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 549dcf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 549dd0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 549dd3: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 549dd6: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 549dd9: jne 0x549ea0 */
  if (!zf) goto L_549ea0;
L_549ddf: /* 549ddf: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 549de2: mov eax, dword ptr [edx + 0x38] */
  eax = R32((uint32_t)(edx + 0x38u));
/* 549de5: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 549de8: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 549deb: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 549dee: xor eax, eax */
  eax = 0;
/* 549df0: mov ebx, ecx */
  ebx = ecx;
/* 549df2: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 549df5: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 549df8: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 549dfa: mov ecx, ebx */
  ecx = ebx;
/* 549dfc: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 549dfe: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 549e01: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_549e04: /* 549e04: cmp esi, dword ptr [ecx + 0x70] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x70u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 549e07: jge 0x549e94 */
  if ((sf == of)) goto L_549e94;
L_549e0d: /* 549e0d: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 549e10: mov ecx, dword ptr [ecx + 0x6c] */
  ecx = R32((uint32_t)(ecx + 0x6cu));
/* 549e13: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 549e16: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 549e18: or edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 549e1b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 549e1c: mov edi, dword ptr [ecx + 0x38] */
  edi = R32((uint32_t)(ecx + 0x38u));
/* 549e1f: imul edi, esi */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(esi);
  edi = (uint32_t)r;
  }
/* 549e22: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 549e24: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 549e25: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 549e26: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x549e2cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 549e2c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 549e2e: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 549e31: je 0x549ea0 */
  if (zf) goto L_549ea0;
L_549e33: /* 549e33: cmp word ptr [eax], 0x2c */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x2cu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 549e37: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 549e3a: je 0x549e44 */
  if (zf) goto L_549e44;
L_549e3c: /* 549e3c: mov edx, dword ptr [ecx + 0x70] */
  edx = R32((uint32_t)(ecx + 0x70u));
/* 549e3f: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 549e40: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 549e42: jne 0x549ea0 */
  if (!zf) goto L_549ea0;
L_549e44: /* 549e44: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 549e47: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 549e4a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 549e4b: jmp 0x549e04 */
  goto L_549e04;
L_549e94: /* 549e94: mov dx, word ptr [eax] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 549e97: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 549e9a: cmp dx, 0x29 */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(0x29u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 549e9e: je 0x549ea2 */
  if (zf) goto L_549ea2;
L_549ea0: /* 549ea0: xor eax, eax */
  eax = 0;
L_549ea2: /* 549ea2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 549ea5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 549ea6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 549ea7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 549eae: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 549eaf: mov esp, ebp */
  esp = ebp;
/* 549eb1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 549eb2: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_549e4d(void) {
  LOAD_REGS();
L_549e4d: /* 549e4d: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 549e50: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 549e55: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 549e58: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 549e59: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 549e5c: call 0x554df6 */
  esp -= 4; W32(esp, 0x549e61u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_549e61(); return;
}

void f_549e61(void) {
  LOAD_REGS();
L_549e61: /* 549e61: push 0x56f3d0 */
  { uint32_t v = 0x56f3d0u; esp -= 4; W32(esp, v); }
/* 549e66: push 0x5adc7c */
  { uint32_t v = 0x5adc7cu; esp -= 4; W32(esp, v); }
/* 549e6b: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x549e70u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 549e70: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 549e73: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 549e76: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 549e78: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x549e7du); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 549e7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 549e7e: push 0x5adc84 */
  { uint32_t v = 0x5adc84u; esp -= 4; W32(esp, v); }
/* 549e83: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x549e88u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 549e88: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 549e8b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 549e8d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 549e8f: call 0x554df6 */
  esp -= 4; W32(esp, 0x549e94u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
/* 549e94: mov dx, word ptr [eax] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 549e97: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 549e9a: cmp dx, 0x29 */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(0x29u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 549e9e: je 0x549ea2 */
  if (zf) goto L_549ea2;
L_549ea0: /* 549ea0: xor eax, eax */
  eax = 0;
L_549ea2: /* 549ea2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 549ea5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 549ea6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 549ea7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 549eae: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 549eaf: mov esp, ebp */
  esp = ebp;
/* 549eb1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 549eb2: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_549f10(void) {
  LOAD_REGS();
L_549f10: /* 549f10: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 549f11: mov ebp, esp */
  ebp = esp;
/* 549f13: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 549f15: push 0x5597d0 */
  { uint32_t v = 0x5597d0u; esp -= 4; W32(esp, v); }
/* 549f1a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 549f20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 549f21: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 549f28: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 549f2b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 549f2c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 549f2d: mov esi, ecx */
  esi = ecx;
/* 549f2f: mov eax, dword ptr [esi + 0x6c] */
  eax = R32((uint32_t)(esi + 0x6cu));
/* 549f32: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 549f34: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 549f35: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 549f38: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 549f3b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 549f42: je 0x549f5b */
  if (zf) goto L_549f5b;
L_549f44: /* 549f44: push 0x4f4 */
  { uint32_t v = 0x4f4u; esp -= 4; W32(esp, v); }
/* 549f49: push 0x5adc90 */
  { uint32_t v = 0x5adc90u; esp -= 4; W32(esp, v); }
/* 549f4e: push 0x5adc9c */
  { uint32_t v = 0x5adc9cu; esp -= 4; W32(esp, v); }
/* 549f53: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x549f58u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 549f58: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_549f5b: /* 549f5b: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 549f5e: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 549f60: jne 0x549f79 */
  if (!zf) goto L_549f79;
L_549f62: /* 549f62: push 0x4f5 */
  { uint32_t v = 0x4f5u; esp -= 4; W32(esp, v); }
/* 549f67: push 0x5adca4 */
  { uint32_t v = 0x5adca4u; esp -= 4; W32(esp, v); }
/* 549f6c: push 0x5adcb0 */
  { uint32_t v = 0x5adcb0u; esp -= 4; W32(esp, v); }
/* 549f71: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x549f76u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 549f76: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_549f79: /* 549f79: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 549f7c: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 549f7e: jg 0x549f97 */
  if ((!zf && sf == of)) goto L_549f97;
L_549f80: /* 549f80: push 0x4f6 */
  { uint32_t v = 0x4f6u; esp -= 4; W32(esp, v); }
/* 549f85: push 0x5adcbc */
  { uint32_t v = 0x5adcbcu; esp -= 4; W32(esp, v); }
/* 549f8a: push 0x5adcc8 */
  { uint32_t v = 0x5adcc8u; esp -= 4; W32(esp, v); }
/* 549f8f: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x549f94u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 549f94: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_549f97: /* 549f97: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 549f9a: mov dword ptr [esi + 0x70], edi */
  W32((uint32_t)(esi + 0x70u), edi);
/* 549f9d: mov dword ptr [esi + 0x6c], ebx */
  W32((uint32_t)(esi + 0x6cu), ebx);
/* 549fa0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 549fa1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 549fa2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 549fa9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 549faa: mov esp, ebp */
  esp = ebp;
/* 549fac: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 549fad: ret 8 */
  esp += 12; SPILL(); return;
}

void f_549fb0(void) {
  LOAD_REGS();
L_549fb0: /* 549fb0: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 549fb3: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 549fb8: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 549fbb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 549fbc: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 549fbf: call 0x554df6 */
  esp -= 4; W32(esp, 0x549fc4u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_549fc4(); return;
}

void f_549fc4(void) {
  LOAD_REGS();
L_549fc4: /* 549fc4: push 0x56f420 */
  { uint32_t v = 0x56f420u; esp -= 4; W32(esp, v); }
/* 549fc9: push 0x5adcd4 */
  { uint32_t v = 0x5adcd4u; esp -= 4; W32(esp, v); }
/* 549fce: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x549fd3u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 549fd3: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 549fd6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 549fd9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 549fdb: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x549fe0u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 549fe0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 549fe1: push 0x5adcdc */
  { uint32_t v = 0x5adcdcu; esp -= 4; W32(esp, v); }
/* 549fe6: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x549febu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 549feb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 549fee: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 549ff0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 549ff2: call 0x554df6 */
  esp -= 4; W32(esp, 0x549ff7u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_549ff7: guest_badaddr(0x549ff7); return;
}

void f_54a040(void) {
  LOAD_REGS();
L_54a040: /* 54a040: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54a041: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54a042: mov edi, ecx */
  edi = ecx;
/* 54a044: mov eax, dword ptr [edi + 0x70] */
  eax = R32((uint32_t)(edi + 0x70u));
/* 54a047: xor esi, esi */
  esi = 0;
/* 54a049: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 54a04b: jle 0x54a08b */
  if ((zf || sf != of)) goto L_54a08b;
L_54a04d: /* 54a04d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54a04e: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 54a052: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 54a053: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
L_54a057: /* 54a057: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54a059: je 0x54a068 */
  if (zf) goto L_54a068;
L_54a05b: /* 54a05b: mov eax, dword ptr [edi + 0x6c] */
  eax = R32((uint32_t)(edi + 0x6cu));
/* 54a05e: mov eax, dword ptr [eax + 0x38] */
  eax = R32((uint32_t)(eax + 0x38u));
/* 54a061: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* 54a064: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54a066: jmp 0x54a06a */
  goto L_54a06a;
L_54a068: /* 54a068: xor eax, eax */
  eax = 0;
L_54a06a: /* 54a06a: mov ecx, dword ptr [edi + 0x6c] */
  ecx = R32((uint32_t)(edi + 0x6cu));
/* 54a06d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 54a06f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54a071: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54a072: mov eax, dword ptr [ecx + 0x38] */
  eax = R32((uint32_t)(ecx + 0x38u));
/* 54a075: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* 54a078: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54a07a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54a07b: call dword ptr [edx + 0xa8] */
  { uint32_t t = R32((uint32_t)(edx + 0xa8u)); esp -= 4; W32(esp, 0x54a081u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54a081: mov eax, dword ptr [edi + 0x70] */
  eax = R32((uint32_t)(edi + 0x70u));
/* 54a084: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 54a085: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54a087: jl 0x54a057 */
  if ((sf != of)) goto L_54a057;
L_54a089: /* 54a089: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54a08a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_54a08b: /* 54a08b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54a08c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54a08d: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_54a0b0(void) {
  LOAD_REGS();
L_54a0b0: /* 54a0b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54a0b1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54a0b2: mov edi, ecx */
  edi = ecx;
/* 54a0b4: mov eax, dword ptr [edi + 0x70] */
  eax = R32((uint32_t)(edi + 0x70u));
/* 54a0b7: xor esi, esi */
  esi = 0;
/* 54a0b9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 54a0bb: jle 0x54a0df */
  if ((zf || sf != of)) goto L_54a0df;
L_54a0bd: /* 54a0bd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54a0be: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
L_54a0c2: /* 54a0c2: mov ecx, dword ptr [edi + 0x6c] */
  ecx = R32((uint32_t)(edi + 0x6cu));
/* 54a0c5: mov edx, dword ptr [ecx + 0x38] */
  edx = R32((uint32_t)(ecx + 0x38u));
/* 54a0c8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 54a0ca: imul edx, esi */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(esi);
  edx = (uint32_t)r;
  }
/* 54a0cd: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 54a0cf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54a0d0: call dword ptr [eax + 0xac] */
  { uint32_t t = R32((uint32_t)(eax + 0xacu)); esp -= 4; W32(esp, 0x54a0d6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54a0d6: mov eax, dword ptr [edi + 0x70] */
  eax = R32((uint32_t)(edi + 0x70u));
/* 54a0d9: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 54a0da: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54a0dc: jl 0x54a0c2 */
  if ((sf != of)) goto L_54a0c2;
L_54a0de: /* 54a0de: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_54a0df: /* 54a0df: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54a0e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54a0e1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_54a100(void) {
  LOAD_REGS();
L_54a100: /* 54a100: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54a101: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 54a105: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54a107: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 54a10b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54a10c: mov ebx, dword ptr [edx + 4] */
  ebx = R32((uint32_t)(edx + 0x4u));
/* 54a10f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54a110: mov dword ptr [esp + 8], ecx */
  W32((uint32_t)(esp + 0x8u), ecx);
/* 54a114: je 0x54a11b */
  if (zf) goto L_54a11b;
L_54a116: /* 54a116: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 54a119: jmp 0x54a11d */
  goto L_54a11d;
L_54a11b: /* 54a11b: xor esi, esi */
  esi = 0;
L_54a11d: /* 54a11d: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54a11f: je 0x54a129 */
  if (zf) goto L_54a129;
L_54a121: /* 54a121: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54a122: xor eax, eax */
  eax = 0;
/* 54a124: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54a125: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 54a126: ret 8 */
  esp += 12; SPILL(); return;
L_54a129: /* 54a129: mov esi, dword ptr [ecx + 0x6c] */
  esi = R32((uint32_t)(ecx + 0x6cu));
/* 54a12c: mov esi, dword ptr [esi + 0x38] */
  esi = R32((uint32_t)(esi + 0x38u));
/* 54a12f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 54a130: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54a131: xor edi, edi */
  edi = 0;
/* 54a133: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54a135: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
/* 54a139: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 54a13b: je 0x54a186 */
  if (zf) goto L_54a186;
L_54a13d: /* 54a13d: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 54a13f: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 54a141: jle 0x54a1ad */
  if ((zf || sf != of)) goto L_54a1ad;
L_54a143: /* 54a143: mov ebp, eax */
  ebp = eax;
/* 54a145: sub ebp, esi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 54a147: jmp 0x54a150 */
  goto L_54a150;
L_54a149: /* 54a149: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 54a14d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_54a150: /* 54a150: mov ecx, dword ptr [ecx + 0x6c] */
  ecx = R32((uint32_t)(ecx + 0x6cu));
/* 54a153: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 54a155: lea edx, [esi + ebp] */
  edx = (uint32_t)(esi + ebp);
/* 54a158: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54a159: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54a15a: call dword ptr [eax + 0x84] */
  { uint32_t t = R32((uint32_t)(eax + 0x84u)); esp -= 4; W32(esp, 0x54a160u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54a160: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54a162: je 0x54a17c */
  if (zf) goto L_54a17c;
L_54a164: /* 54a164: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 54a168: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 54a169: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 54a16b: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54a16d: jl 0x54a149 */
  if ((sf != of)) goto L_54a149;
L_54a16f: /* 54a16f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54a170: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54a171: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54a172: mov eax, 1 */
  eax = 0x1u;
/* 54a177: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54a178: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 54a179: ret 8 */
  esp += 12; SPILL(); return;
L_54a17c: /* 54a17c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54a17d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54a17e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54a17f: xor eax, eax */
  eax = 0;
/* 54a181: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54a182: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 54a183: ret 8 */
  esp += 12; SPILL(); return;
L_54a186: /* 54a186: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 54a188: jle 0x54a1ad */
  if ((zf || sf != of)) goto L_54a1ad;
L_54a18a: /* 54a18a: jmp 0x54a190 */
  goto L_54a190;
L_54a18c: /* 54a18c: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
L_54a190: /* 54a190: mov ecx, dword ptr [ecx + 0x6c] */
  ecx = R32((uint32_t)(ecx + 0x6cu));
/* 54a193: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 54a195: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54a197: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54a198: call dword ptr [eax + 0x84] */
  { uint32_t t = R32((uint32_t)(eax + 0x84u)); esp -= 4; W32(esp, 0x54a19eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54a19e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54a1a0: je 0x54a17c */
  if (zf) goto L_54a17c;
L_54a1a2: /* 54a1a2: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 54a1a6: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 54a1a7: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 54a1a9: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54a1ab: jl 0x54a18c */
  if ((sf != of)) goto L_54a18c;
L_54a1ad: /* 54a1ad: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54a1ae: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54a1af: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54a1b0: mov eax, 1 */
  eax = 0x1u;
/* 54a1b5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54a1b6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 54a1b7: ret 8 */
  esp += 12; SPILL(); return;
}

void f_54a1f0(void) {
  LOAD_REGS();
L_54a1f0: /* 54a1f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54a1f1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 54a1f2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54a1f3: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 54a1f7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54a1f8: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 54a1fc: mov ebp, ecx */
  ebp = ecx;
/* 54a1fe: mov eax, dword ptr [ebp + 0x6c] */
  eax = R32((uint32_t)(ebp + 0x6cu));
/* 54a201: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 54a204: mov ebx, dword ptr [eax + 0x38] */
  ebx = R32((uint32_t)(eax + 0x38u));
/* 54a207: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* 54a20b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54a20c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54a20d: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 54a211: call 0x4e2f2c */
  esp -= 4; W32(esp, 0x54a216u); SPILL(); f_4e2f2c(); if (g_unwind) return; RELOAD();
/* 54a216: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* 54a219: xor eax, eax */
  eax = 0;
/* 54a21b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54a21e: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54a220: je 0x54a23d */
  if (zf) goto L_54a23d;
L_54a222: /* 54a222: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54a223: mov ecx, esi */
  ecx = esi;
/* 54a225: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 54a228: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 54a22b: call 0x4e4502 */
  esp -= 4; W32(esp, 0x54a230u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 54a230: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 54a234: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54a235: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54a236: mov ecx, esi */
  ecx = esi;
/* 54a238: call 0x4e33b4 */
  esp -= 4; W32(esp, 0x54a23du); SPILL(); f_4e33b4(); if (g_unwind) return; RELOAD();
L_54a23d: /* 54a23d: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 54a23f: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 54a243: xor esi, esi */
  esi = 0;
/* 54a245: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 54a247: jle 0x54a27c */
  if ((zf || sf != of)) goto L_54a27c;
L_54a249: /* 54a249: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_54a250: /* 54a250: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 54a254: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 54a256: jle 0x54a25d */
  if ((zf || sf != of)) goto L_54a25d;
L_54a258: /* 54a258: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 54a259: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x54a259);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 54a25b: jmp 0x54a25f */
  goto L_54a25f;
L_54a25d: /* 54a25d: xor eax, eax */
  eax = 0;
L_54a25f: /* 54a25f: mov ecx, dword ptr [ebp + 0x6c] */
  ecx = R32((uint32_t)(ebp + 0x6cu));
/* 54a262: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 54a264: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54a265: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 54a269: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54a26a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54a26b: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x54a271u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54a271: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 54a275: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 54a276: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 54a278: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54a27a: jl 0x54a250 */
  if ((sf != of)) goto L_54a250;
L_54a27c: /* 54a27c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54a27d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54a27e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54a27f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54a280: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_54a2c0(void) {
  LOAD_REGS();
L_54a2c0: /* 54a2c0: mov eax, 1 */
  eax = 0x1u;
/* 54a2c5: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_54a2e0(void) {
  LOAD_REGS();
L_54a2e0: /* 54a2e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 54a2e1: mov ebp, esp */
  ebp = esp;
/* 54a2e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 54a2e5: push 0x5597e0 */
  { uint32_t v = 0x5597e0u; esp -= 4; W32(esp, v); }
/* 54a2ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 54a2f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54a2f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 54a2f8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54a2fb: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 54a2fe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54a300: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54a301: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54a302: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 54a305: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54a306: mov edi, ecx */
  edi = ecx;
/* 54a308: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 54a30b: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 54a30e: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 54a315: mov ecx, esi */
  ecx = esi;
/* 54a317: je 0x54a320 */
  if (zf) goto L_54a320;
L_54a319: /* 54a319: push 0x5add4c */
  { uint32_t v = 0x5add4cu; esp -= 4; W32(esp, v); }
/* 54a31e: jmp 0x54a325 */
  goto L_54a325;
L_54a320: /* 54a320: push 0x5add5c */
  { uint32_t v = 0x5add5cu; esp -= 4; W32(esp, v); }
L_54a325: /* 54a325: call 0x4e35da */
  esp -= 4; W32(esp, 0x54a32au); SPILL(); f_4e35da(); if (g_unwind) return; RELOAD();
/* 54a32a: mov ecx, dword ptr [edi + 0x6c] */
  ecx = R32((uint32_t)(edi + 0x6cu));
/* 54a32d: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 54a32f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54a331: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54a332: call dword ptr [eax + 0x8c] */
  { uint32_t t = R32((uint32_t)(eax + 0x8cu)); esp -= 4; W32(esp, 0x54a338u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54a338: push 0x5add78 */
  { uint32_t v = 0x5add78u; esp -= 4; W32(esp, v); }
/* 54a33d: mov ecx, esi */
  ecx = esi;
/* 54a33f: call 0x4e35da */
  esp -= 4; W32(esp, 0x54a344u); SPILL(); f_4e35da(); if (g_unwind) return; RELOAD();
/* 54a344: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54a347: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54a348: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54a349: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54a350: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54a351: mov esp, ebp */
  esp = ebp;
/* 54a353: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54a354: ret 8 */
  esp += 12; SPILL(); return;
}

void f_54a357(void) {
  LOAD_REGS();
L_54a357: /* 54a357: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 54a35a: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 54a35f: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 54a362: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54a363: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 54a366: call 0x554df6 */
  esp -= 4; W32(esp, 0x54a36bu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_54a36b(); return;
}

void f_54a36b(void) {
  LOAD_REGS();
L_54a36b: /* 54a36b: push 0x56f478 */
  { uint32_t v = 0x56f478u; esp -= 4; W32(esp, v); }
/* 54a370: push 0x5add7c */
  { uint32_t v = 0x5add7cu; esp -= 4; W32(esp, v); }
/* 54a375: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54a37au); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54a37a: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 54a37d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54a380: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54a382: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x54a387u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 54a387: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54a388: push 0x5add84 */
  { uint32_t v = 0x5add84u; esp -= 4; W32(esp, v); }
/* 54a38d: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54a392u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54a392: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54a395: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54a397: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54a399: call 0x554df6 */
  esp -= 4; W32(esp, 0x54a39eu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_54a39e: guest_badaddr(0x54a39e); return;
}

void f_54a3d0(void) {
  LOAD_REGS();
L_54a3d0: /* 54a3d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 54a3d1: mov ebp, esp */
  ebp = esp;
/* 54a3d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 54a3d5: push 0x5597f0 */
  { uint32_t v = 0x5597f0u; esp -= 4; W32(esp, v); }
/* 54a3da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 54a3e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54a3e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 54a3e8: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54a3eb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54a3ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54a3ed: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 54a3f0: mov word ptr [esi], 0x28 */
  W16((uint32_t)(esi), 0x28u);
/* 54a3f5: mov eax, dword ptr [ecx + 0x6c] */
  eax = R32((uint32_t)(ecx + 0x6cu));
/* 54a3f8: mov edx, dword ptr [eax + 0x38] */
  edx = R32((uint32_t)(eax + 0x38u));
/* 54a3fb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54a3fc: xor edi, edi */
  edi = 0;
/* 54a3fe: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 54a401: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 54a404: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 54a407: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 54a40a: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
/* 54a40d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_54a410: /* 54a410: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 54a413: cmp edi, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54a416: jge 0x54a4c0 */
  if ((sf == of)) goto L_54a4c0;
L_54a41c: /* 54a41c: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 54a41e: jle 0x54a428 */
  if ((zf || sf != of)) goto L_54a428;
L_54a420: /* 54a420: mov word ptr [esi], 0x2c */
  W16((uint32_t)(esi), 0x2cu);
/* 54a425: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_54a428: /* 54a428: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 54a42b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54a42d: je 0x54a440 */
  if (zf) goto L_54a440;
L_54a42f: /* 54a42f: cmp dword ptr [eax + 4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54a432: jl 0x54a440 */
  if ((sf != of)) goto L_54a440;
L_54a434: /* 54a434: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 54a436: mov eax, edi */
  eax = edi;
/* 54a438: imul eax, dword ptr [ebp + 8] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0x8u)));
  eax = (uint32_t)r;
  }
/* 54a43c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54a43e: jmp 0x54a442 */
  goto L_54a442;
L_54a440: /* 54a440: xor eax, eax */
  eax = 0;
L_54a442: /* 54a442: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 54a444: mov ebx, dword ptr [ebp + 0x14] */
  ebx = R32((uint32_t)(ebp + 0x14u));
/* 54a447: mov ecx, dword ptr [ecx + 0x6c] */
  ecx = R32((uint32_t)(ecx + 0x6cu));
/* 54a44a: or ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 54a44d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54a44e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54a44f: mov eax, edi */
  eax = edi;
/* 54a451: imul eax, dword ptr [ebp + 8] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0x8u)));
  eax = (uint32_t)r;
  }
/* 54a455: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 54a458: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 54a45b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 54a45d: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54a45f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54a460: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54a461: call dword ptr [edx + 0x98] */
  { uint32_t t = R32((uint32_t)(edx + 0x98u)); esp -= 4; W32(esp, 0x54a467u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54a467: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54a468: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x54a46du); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 54a46d: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 54a470: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54a473: lea esi, [esi + eax*2] */
  esi = (uint32_t)(esi + eax*2);
/* 54a476: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 54a477: jmp 0x54a410 */
  goto L_54a410;
L_54a4c0: /* 54a4c0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54a4c3: mov word ptr [esi], 0x29 */
  W16((uint32_t)(esi), 0x29u);
/* 54a4c8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54a4c9: mov word ptr [esi + 2], 0 */
  W16((uint32_t)(esi + 0x2u), 0x0u);
/* 54a4cf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54a4d0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54a4d7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54a4d8: mov esp, ebp */
  esp = ebp;
/* 54a4da: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54a4db: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_54a479(void) {
  LOAD_REGS();
L_54a479: /* 54a479: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 54a47c: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 54a481: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 54a484: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54a485: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 54a488: call 0x554df6 */
  esp -= 4; W32(esp, 0x54a48du); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_54a48d(); return;
}

void f_54a48d(void) {
  LOAD_REGS();
L_54a48d: /* 54a48d: push 0x56f4c0 */
  { uint32_t v = 0x56f4c0u; esp -= 4; W32(esp, v); }
/* 54a492: push 0x5add90 */
  { uint32_t v = 0x5add90u; esp -= 4; W32(esp, v); }
/* 54a497: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54a49cu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54a49c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 54a49f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54a4a2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54a4a4: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x54a4a9u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 54a4a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54a4aa: push 0x5add98 */
  { uint32_t v = 0x5add98u; esp -= 4; W32(esp, v); }
/* 54a4af: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54a4b4u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54a4b4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54a4b7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54a4b9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54a4bb: call 0x554df6 */
  esp -= 4; W32(esp, 0x54a4c0u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
/* 54a4c0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54a4c3: mov word ptr [esi], 0x29 */
  W16((uint32_t)(esi), 0x29u);
/* 54a4c8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54a4c9: mov word ptr [esi + 2], 0 */
  W16((uint32_t)(esi + 0x2u), 0x0u);
/* 54a4cf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54a4d0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54a4d7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54a4d8: mov esp, ebp */
  esp = ebp;
/* 54a4da: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54a4db: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_54a530(void) {
  LOAD_REGS();
L_54a530: /* 54a530: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 54a531: mov ebp, esp */
  ebp = esp;
/* 54a533: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 54a535: push 0x559800 */
  { uint32_t v = 0x559800u; esp -= 4; W32(esp, v); }
/* 54a53a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 54a540: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54a541: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 54a548: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54a54b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 54a54e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54a54f: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 54a552: mov dx, word ptr [eax] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 54a555: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54a556: xor ecx, ecx */
  ecx = 0;
/* 54a558: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54a55b: cmp dx, 0x28 */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(0x28u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 54a55f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54a560: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 54a563: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* 54a566: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 54a569: jne 0x54a632 */
  if (!zf) goto L_54a632;
L_54a56f: /* 54a56f: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 54a572: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 54a575: mov edx, dword ptr [eax + 0x6c] */
  edx = R32((uint32_t)(eax + 0x6cu));
/* 54a578: mov ebx, dword ptr [edx + 0x38] */
  ebx = R32((uint32_t)(edx + 0x38u));
/* 54a57b: lea edi, [esi + 4] */
  edi = (uint32_t)(esi + 0x4u);
/* 54a57e: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 54a580: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 54a583: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54a584: mov ecx, esi */
  ecx = esi;
/* 54a586: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 54a589: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* 54a58c: call 0x4e4502 */
  esp -= 4; W32(esp, 0x54a591u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 54a591: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_54a594: /* 54a594: cmp word ptr [eax], 0x29 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x29u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 54a598: je 0x54a626 */
  if (zf) goto L_54a626;
L_54a59e: /* 54a59e: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* 54a5a0: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 54a5a3: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 54a5a6: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 54a5a8: cmp ecx, dword ptr [esi + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54a5ab: jle 0x54a5c8 */
  if ((zf || sf != of)) goto L_54a5c8;
L_54a5ad: /* 54a5ad: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 54a5b0: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 54a5b1: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 54a5b4: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54a5b6: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 54a5b9: lea ecx, [eax + ecx + 0x20] */
  ecx = (uint32_t)(eax + ecx + 0x20u);
/* 54a5bd: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 54a5c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54a5c1: mov ecx, esi */
  ecx = esi;
/* 54a5c3: call 0x4e4502 */
  esp -= 4; W32(esp, 0x54a5c8u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_54a5c8: /* 54a5c8: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 54a5ca: mov edx, edi */
  edx = edi;
/* 54a5cc: imul edx, ebx */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ebx);
  edx = (uint32_t)r;
  }
/* 54a5cf: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54a5d1: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 54a5d4: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 54a5d7: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 54a5da: xor eax, eax */
  eax = 0;
/* 54a5dc: mov ebx, ecx */
  ebx = ecx;
/* 54a5de: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 54a5e1: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 54a5e4: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 54a5e6: mov ecx, ebx */
  ecx = ebx;
/* 54a5e8: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 54a5ea: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 54a5ed: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 54a5ef: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 54a5f2: mov ecx, dword ptr [ecx + 0x6c] */
  ecx = R32((uint32_t)(ecx + 0x6cu));
/* 54a5f5: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 54a5f7: or ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 54a5fa: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54a5fb: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 54a5fd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54a5fe: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 54a601: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54a602: call dword ptr [edi + 0x9c] */
  { uint32_t t = R32((uint32_t)(edi + 0x9cu)); esp -= 4; W32(esp, 0x54a608u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54a608: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54a60a: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 54a60d: je 0x54a632 */
  if (zf) goto L_54a632;
L_54a60f: /* 54a60f: cmp word ptr [eax], 0x2c */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x2cu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 54a613: jne 0x54a626 */
  if (!zf) goto L_54a626;
L_54a615: /* 54a615: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 54a618: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 54a61b: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54a61e: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 54a621: jmp 0x54a594 */
  goto L_54a594;
L_54a626: /* 54a626: mov cx, word ptr [eax] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 54a629: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54a62c: cmp cx, 0x29 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x29u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 54a630: je 0x54a634 */
  if (zf) goto L_54a634;
L_54a632: /* 54a632: xor eax, eax */
  eax = 0;
L_54a634: /* 54a634: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54a637: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54a638: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54a639: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54a640: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54a641: mov esp, ebp */
  esp = ebp;
/* 54a643: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54a644: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_54a647(void) {
  LOAD_REGS();
L_54a647: /* 54a647: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 54a64a: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 54a64f: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 54a652: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54a653: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 54a656: call 0x554df6 */
  esp -= 4; W32(esp, 0x54a65bu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_54a65b(); return;
}

void f_54a65b(void) {
  LOAD_REGS();
L_54a65b: /* 54a65b: push 0x56f50c */
  { uint32_t v = 0x56f50cu; esp -= 4; W32(esp, v); }
/* 54a660: push 0x5adda4 */
  { uint32_t v = 0x5adda4u; esp -= 4; W32(esp, v); }
/* 54a665: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54a66au); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54a66a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 54a66d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54a670: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54a672: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x54a677u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 54a677: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54a678: push 0x5addac */
  { uint32_t v = 0x5addacu; esp -= 4; W32(esp, v); }
/* 54a67d: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54a682u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54a682: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54a685: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54a687: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54a689: call 0x554df6 */
  esp -= 4; W32(esp, 0x54a68eu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_54a68e: guest_badaddr(0x54a68e); return;
}

void f_54a6f0(void) {
  LOAD_REGS();
L_54a6f0: /* 54a6f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 54a6f1: mov ebp, esp */
  ebp = esp;
/* 54a6f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 54a6f5: push 0x559810 */
  { uint32_t v = 0x559810u; esp -= 4; W32(esp, v); }
/* 54a6fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 54a700: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54a701: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 54a708: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54a70b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54a70c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54a70d: mov esi, ecx */
  esi = ecx;
/* 54a70f: mov eax, dword ptr [esi + 0x6c] */
  eax = R32((uint32_t)(esi + 0x6cu));
/* 54a712: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54a714: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54a715: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 54a718: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 54a71b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 54a722: je 0x54a73b */
  if (zf) goto L_54a73b;
L_54a724: /* 54a724: push 0x59b */
  { uint32_t v = 0x59bu; esp -= 4; W32(esp, v); }
/* 54a729: push 0x5addb8 */
  { uint32_t v = 0x5addb8u; esp -= 4; W32(esp, v); }
/* 54a72e: push 0x5addc4 */
  { uint32_t v = 0x5addc4u; esp -= 4; W32(esp, v); }
/* 54a733: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x54a738u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 54a738: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_54a73b: /* 54a73b: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 54a73e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54a740: jne 0x54a759 */
  if (!zf) goto L_54a759;
L_54a742: /* 54a742: push 0x59c */
  { uint32_t v = 0x59cu; esp -= 4; W32(esp, v); }
/* 54a747: push 0x5addcc */
  { uint32_t v = 0x5addccu; esp -= 4; W32(esp, v); }
/* 54a74c: push 0x5addd8 */
  { uint32_t v = 0x5addd8u; esp -= 4; W32(esp, v); }
/* 54a751: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x54a756u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 54a756: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_54a759: /* 54a759: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54a75c: mov dword ptr [esi + 0x6c], edi */
  W32((uint32_t)(esi + 0x6cu), edi);
/* 54a75f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54a760: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54a761: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54a768: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54a769: mov esp, ebp */
  esp = ebp;
/* 54a76b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54a76c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_54a76f(void) {
  LOAD_REGS();
L_54a76f: /* 54a76f: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 54a772: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 54a777: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 54a77a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54a77b: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 54a77e: call 0x554df6 */
  esp -= 4; W32(esp, 0x54a783u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_54a783(); return;
}

void f_54a783(void) {
  LOAD_REGS();
L_54a783: /* 54a783: push 0x56f54c */
  { uint32_t v = 0x56f54cu; esp -= 4; W32(esp, v); }
/* 54a788: push 0x5adde4 */
  { uint32_t v = 0x5adde4u; esp -= 4; W32(esp, v); }
/* 54a78d: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54a792u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54a792: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 54a795: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54a798: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54a79a: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x54a79fu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 54a79f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54a7a0: push 0x5addec */
  { uint32_t v = 0x5addecu; esp -= 4; W32(esp, v); }
/* 54a7a5: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54a7aau); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54a7aa: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54a7ad: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54a7af: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54a7b1: call 0x554df6 */
  esp -= 4; W32(esp, 0x54a7b6u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_54a7b6: guest_badaddr(0x54a7b6); return;
}

void f_54a800(void) {
  LOAD_REGS();
L_54a800: /* 54a800: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54a801: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54a802: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 54a803: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54a804: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 54a808: mov ebp, ecx */
  ebp = ecx;
/* 54a80a: mov eax, dword ptr [ebp + 0x6c] */
  eax = R32((uint32_t)(ebp + 0x6cu));
/* 54a80d: mov ebx, dword ptr [eax + 0x38] */
  ebx = R32((uint32_t)(eax + 0x38u));
/* 54a810: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54a811: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 54a815: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 54a818: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54a819: mov ecx, esi */
  ecx = esi;
/* 54a81b: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 54a81f: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 54a826: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 54a829: call 0x4e4502 */
  esp -= 4; W32(esp, 0x54a82eu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 54a82e: mov ecx, dword ptr [ebp + 0x6c] */
  ecx = R32((uint32_t)(ebp + 0x6cu));
/* 54a831: test dword ptr [ecx + 0x3c], 0x400000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x3cu))); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54a838: je 0x54a88e */
  if (zf) goto L_54a88e;
L_54a83a: /* 54a83a: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 54a83d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54a83e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54a83f: mov ecx, esi */
  ecx = esi;
/* 54a841: call 0x4e33b4 */
  esp -= 4; W32(esp, 0x54a846u); SPILL(); f_4e33b4(); if (g_unwind) return; RELOAD();
/* 54a846: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 54a849: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 54a84b: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 54a84d: xor ebp, ebp */
  ebp = 0;
/* 54a84f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 54a851: jle 0x54a8d2 */
  if ((zf || sf != of)) goto L_54a8d2;
L_54a853: /* 54a853: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 54a855: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 54a859: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_54a860: /* 54a860: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 54a864: mov ecx, dword ptr [eax + 0x6c] */
  ecx = R32((uint32_t)(eax + 0x6cu));
/* 54a867: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 54a86b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 54a86d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54a86e: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 54a872: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54a874: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54a875: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54a876: call dword ptr [edx + 0xa8] */
  { uint32_t t = R32((uint32_t)(edx + 0xa8u)); esp -= 4; W32(esp, 0x54a87cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54a87c: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 54a87f: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 54a880: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 54a882: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54a884: jl 0x54a860 */
  if ((sf != of)) goto L_54a860;
L_54a886: /* 54a886: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54a887: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54a888: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54a889: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54a88a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 54a88b: ret 0xc */
  esp += 16; SPILL(); return;
L_54a88e: /* 54a88e: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 54a891: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 54a894: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 54a897: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 54a899: mov ecx, edx */
  ecx = edx;
/* 54a89b: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54a89d: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 54a8a0: jle 0x54a8bd */
  if ((zf || sf != of)) goto L_54a8bd;
L_54a8a2: /* 54a8a2: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 54a8a5: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 54a8a6: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 54a8a9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54a8ab: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 54a8ae: lea edx, [eax + ecx + 0x20] */
  edx = (uint32_t)(eax + ecx + 0x20u);
/* 54a8b2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54a8b3: mov ecx, esi */
  ecx = esi;
/* 54a8b5: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 54a8b8: call 0x4e4502 */
  esp -= 4; W32(esp, 0x54a8bdu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_54a8bd: /* 54a8bd: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 54a8c0: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 54a8c2: imul eax, ebx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ebx);
  eax = (uint32_t)r;
  }
/* 54a8c5: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 54a8c7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54a8c8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54a8c9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54a8ca: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x54a8cfu); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 54a8cf: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_54a8d2: /* 54a8d2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54a8d3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54a8d4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54a8d5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54a8d6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 54a8d7: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_54a920(void) {
  LOAD_REGS();
L_54a920: /* 54a920: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 54a924: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 54a926: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54a927: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 54a92b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54a92c: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x54a92fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54a92f: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 54a931: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 54a934: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54a935: mov ecx, eax */
  ecx = eax;
/* 54a937: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x54a93au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54a93a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54a93b: ret  */
  esp += 4; SPILL(); return;
}

void f_54a950(void) {
  LOAD_REGS();
L_54a950: /* 54a950: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54a951: mov esi, ecx */
  esi = ecx;
/* 54a953: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 54a955: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54a957: je 0x54a965 */
  if (zf) goto L_54a965;
L_54a959: /* 54a959: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 54a95f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 54a961: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54a962: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x54a965u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_54a965: /* 54a965: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 54a96a: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 54a970: mov dword ptr [esi + 8], 0 */
  W32((uint32_t)(esi + 0x8u), 0x0u);
/* 54a977: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 54a97e: je 0x54a98c */
  if (zf) goto L_54a98c;
L_54a980: /* 54a980: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 54a986: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 54a988: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54a989: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x54a98cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_54a98c: /* 54a98c: mov eax, esi */
  eax = esi;
/* 54a98e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54a98f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_54a9c0(void) {
  LOAD_REGS();
L_54a9c0: /* 54a9c0: mov eax, 1 */
  eax = 0x1u;
/* 54a9c5: ret 8 */
  esp += 12; SPILL(); return;
}

void f_54a9e0(void) {
  LOAD_REGS();
L_54a9e0: /* 54a9e0: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_54aa00(void) {
  LOAD_REGS();
L_54aa00: /* 54aa00: mov eax, 1 */
  eax = 0x1u;
/* 54aa05: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_54aa20(void) {
  LOAD_REGS();
L_54aa20: /* 54aa20: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 54aa21: mov ebp, esp */
  ebp = esp;
/* 54aa23: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 54aa25: push 0x559820 */
  { uint32_t v = 0x559820u; esp -= 4; W32(esp, v); }
/* 54aa2a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 54aa30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54aa31: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 54aa38: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54aa3b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54aa3c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54aa3d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 54aa40: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54aa41: mov edi, ecx */
  edi = ecx;
/* 54aa43: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 54aa46: push 0x5ade40 */
  { uint32_t v = 0x5ade40u; esp -= 4; W32(esp, v); }
/* 54aa4b: mov ecx, esi */
  ecx = esi;
/* 54aa4d: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 54aa50: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 54aa57: call 0x4e35da */
  esp -= 4; W32(esp, 0x54aa5cu); SPILL(); f_4e35da(); if (g_unwind) return; RELOAD();
/* 54aa5c: mov ecx, dword ptr [edi + 0x6c] */
  ecx = R32((uint32_t)(edi + 0x6cu));
/* 54aa5f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 54aa61: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54aa63: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54aa64: call dword ptr [eax + 0x8c] */
  { uint32_t t = R32((uint32_t)(eax + 0x8cu)); esp -= 4; W32(esp, 0x54aa6au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54aa6a: push 0x5ade4c */
  { uint32_t v = 0x5ade4cu; esp -= 4; W32(esp, v); }
/* 54aa6f: mov ecx, esi */
  ecx = esi;
/* 54aa71: call 0x4e35da */
  esp -= 4; W32(esp, 0x54aa76u); SPILL(); f_4e35da(); if (g_unwind) return; RELOAD();
/* 54aa76: mov ecx, dword ptr [edi + 0x70] */
  ecx = R32((uint32_t)(edi + 0x70u));
/* 54aa79: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 54aa7b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54aa7d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54aa7e: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0x54aa84u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54aa84: push 0x5ade50 */
  { uint32_t v = 0x5ade50u; esp -= 4; W32(esp, v); }
/* 54aa89: mov ecx, esi */
  ecx = esi;
/* 54aa8b: call 0x4e35da */
  esp -= 4; W32(esp, 0x54aa90u); SPILL(); f_4e35da(); if (g_unwind) return; RELOAD();
/* 54aa90: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54aa93: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54aa94: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54aa95: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54aa9c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54aa9d: mov esp, ebp */
  esp = ebp;
/* 54aa9f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54aaa0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_54aaa3(void) {
  LOAD_REGS();
L_54aaa3: /* 54aaa3: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 54aaa6: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 54aaab: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 54aaae: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54aaaf: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 54aab2: call 0x554df6 */
  esp -= 4; W32(esp, 0x54aab7u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_54aab7(); return;
}

void f_54aab7(void) {
  LOAD_REGS();
L_54aab7: /* 54aab7: push 0x56f598 */
  { uint32_t v = 0x56f598u; esp -= 4; W32(esp, v); }
/* 54aabc: push 0x5ade54 */
  { uint32_t v = 0x5ade54u; esp -= 4; W32(esp, v); }
/* 54aac1: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54aac6u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54aac6: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 54aac9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54aacc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54aace: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x54aad3u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 54aad3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54aad4: push 0x5ade5c */
  { uint32_t v = 0x5ade5cu; esp -= 4; W32(esp, v); }
/* 54aad9: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54aadeu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54aade: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54aae1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54aae3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54aae5: call 0x554df6 */
  esp -= 4; W32(esp, 0x54aaeau); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_54aaea: guest_badaddr(0x54aaea); return;
}

void f_54ab30(void) {
  LOAD_REGS();
L_54ab30: /* 54ab30: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_54ab50(void) {
  LOAD_REGS();
L_54ab50: /* 54ab50: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 54ab54: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_54ab70(void) {
  LOAD_REGS();
L_54ab70: /* 54ab70: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_54ab90(void) {
  LOAD_REGS();
L_54ab90: /* 54ab90: ret 4 */
  esp += 8; SPILL(); return;
}

void f_54abb0(void) {
  LOAD_REGS();
L_54abb0: /* 54abb0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 54abb1: mov ebp, esp */
  ebp = esp;
/* 54abb3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 54abb5: push 0x559830 */
  { uint32_t v = 0x559830u; esp -= 4; W32(esp, v); }
/* 54abba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 54abc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54abc1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 54abc8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54abcb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54abcc: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 54abcf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54abd0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54abd1: mov esi, ecx */
  esi = ecx;
/* 54abd3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 54abd6: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 54abd9: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 54abe0: xor edi, edi */
  edi = 0;
L_54abe2: /* 54abe2: cmp edi, dword ptr [esi + 0x34] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54abe5: jge 0x54ac45 */
  if ((sf == of)) goto L_54ac45;
L_54abe7: /* 54abe7: mov edx, dword ptr [esi + 0x38] */
  edx = R32((uint32_t)(esi + 0x38u));
/* 54abea: mov ecx, dword ptr [esi + 0x6c] */
  ecx = R32((uint32_t)(esi + 0x6cu));
/* 54abed: imul edx, edi */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(edi);
  edx = (uint32_t)r;
  }
/* 54abf0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 54abf2: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 54abf4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54abf5: call dword ptr [eax + 0x8c] */
  { uint32_t t = R32((uint32_t)(eax + 0x8cu)); esp -= 4; W32(esp, 0x54abfbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54abfb: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 54abfc: jmp 0x54abe2 */
  goto L_54abe2;
L_54ac45: /* 54ac45: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54ac48: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54ac49: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54ac4a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54ac51: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54ac52: mov esp, ebp */
  esp = ebp;
/* 54ac54: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54ac55: ret 4 */
  esp += 8; SPILL(); return;
}

void f_54abfe(void) {
  LOAD_REGS();
L_54abfe: /* 54abfe: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 54ac01: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 54ac06: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 54ac09: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54ac0a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 54ac0d: call 0x554df6 */
  esp -= 4; W32(esp, 0x54ac12u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_54ac12(); return;
}

void f_54ac12(void) {
  LOAD_REGS();
L_54ac12: /* 54ac12: push 0x56f5e0 */
  { uint32_t v = 0x56f5e0u; esp -= 4; W32(esp, v); }
/* 54ac17: push 0x5adeac */
  { uint32_t v = 0x5adeacu; esp -= 4; W32(esp, v); }
/* 54ac1c: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54ac21u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54ac21: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 54ac24: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54ac27: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54ac29: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x54ac2eu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 54ac2e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54ac2f: push 0x5adeb4 */
  { uint32_t v = 0x5adeb4u; esp -= 4; W32(esp, v); }
/* 54ac34: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54ac39u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54ac39: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54ac3c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54ac3e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54ac40: call 0x554df6 */
  esp -= 4; W32(esp, 0x54ac45u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
/* 54ac45: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54ac48: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54ac49: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54ac4a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54ac51: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54ac52: mov esp, ebp */
  esp = ebp;
/* 54ac54: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54ac55: ret 4 */
  esp += 8; SPILL(); return;
}

void f_54ac90(void) {
  LOAD_REGS();
L_54ac90: /* 54ac90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54ac91: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 54ac95: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 54ac98: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54ac9a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54ac9b: mov edi, ecx */
  edi = ecx;
/* 54ac9d: jne 0x54aca6 */
  if (!zf) goto L_54aca6;
L_54ac9f: /* 54ac9f: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 54aca2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54aca4: je 0x54acd6 */
  if (zf) goto L_54acd6;
L_54aca6: /* 54aca6: cmp dword ptr [esi + 4], 0x76 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x76u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54acaa: jl 0x54acd6 */
  if ((sf != of)) goto L_54acd6;
L_54acac: /* 54acac: mov ecx, dword ptr [edi + 0x6c] */
  ecx = R32((uint32_t)(edi + 0x6cu));
/* 54acaf: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 54acb2: cmp eax, 0x57 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x57u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54acb5: je 0x54acd6 */
  if (zf) goto L_54acd6;
L_54acb7: /* 54acb7: cmp eax, 0x58 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54acba: je 0x54acd6 */
  if (zf) goto L_54acd6;
L_54acbc: /* 54acbc: cmp eax, 0x5a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54acbf: je 0x54acd6 */
  if (zf) goto L_54acd6;
L_54acc1: /* 54acc1: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 54acc5: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 54acc7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54acc9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54acca: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54accb: call dword ptr [eax + 0x88] */
  { uint32_t t = R32((uint32_t)(eax + 0x88u)); esp -= 4; W32(esp, 0x54acd1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54acd1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54acd2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54acd3: ret 0xc */
  esp += 16; SPILL(); return;
L_54acd6: /* 54acd6: mov ecx, dword ptr [edi + 0x6c] */
  ecx = R32((uint32_t)(edi + 0x6cu));
/* 54acd9: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 54acdb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54acdc: mov ecx, esi */
  ecx = esi;
/* 54acde: call dword ptr [eax + 0x10] */
  { uint32_t t = R32((uint32_t)(eax + 0x10u)); esp -= 4; W32(esp, 0x54ace1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54ace1: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 54ace5: mov ecx, dword ptr [edi + 0x6c] */
  ecx = R32((uint32_t)(edi + 0x6cu));
/* 54ace8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 54acea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54aceb: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 54acef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54acf0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54acf1: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0x54acf7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54acf7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54acf8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54acf9: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_54ad20(void) {
  LOAD_REGS();
L_54ad20: /* 54ad20: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 54ad21: mov ebp, esp */
  ebp = esp;
/* 54ad23: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 54ad25: push 0x559840 */
  { uint32_t v = 0x559840u; esp -= 4; W32(esp, v); }
/* 54ad2a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 54ad30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54ad31: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 54ad38: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54ad3b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54ad3c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54ad3d: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 54ad40: mov ecx, dword ptr [ecx + 0x6c] */
  ecx = R32((uint32_t)(ecx + 0x6cu));
/* 54ad43: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 54ad45: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54ad46: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 54ad49: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 54ad50: call dword ptr [eax + 0x94] */
  { uint32_t t = R32((uint32_t)(eax + 0x94u)); esp -= 4; W32(esp, 0x54ad56u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54ad56: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 54ad59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54ad5a: push 0x5adee8 */
  { uint32_t v = 0x5adee8u; esp -= 4; W32(esp, v); }
/* 54ad5f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54ad60: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x54ad65u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 54ad65: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54ad68: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54ad6b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54ad6c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54ad6d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54ad74: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54ad75: mov esp, ebp */
  esp = ebp;
/* 54ad77: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54ad78: ret 8 */
  esp += 12; SPILL(); return;
}

void f_54ad7b(void) {
  LOAD_REGS();
L_54ad7b: /* 54ad7b: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 54ad7e: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 54ad83: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 54ad86: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54ad87: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 54ad8a: call 0x554df6 */
  esp -= 4; W32(esp, 0x54ad8fu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_54ad8f(); return;
}

void f_54ad8f(void) {
  LOAD_REGS();
L_54ad8f: /* 54ad8f: push 0x56f634 */
  { uint32_t v = 0x56f634u; esp -= 4; W32(esp, v); }
/* 54ad94: push 0x5adef0 */
  { uint32_t v = 0x5adef0u; esp -= 4; W32(esp, v); }
/* 54ad99: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54ad9eu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54ad9e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 54ada1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54ada4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54ada6: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x54adabu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 54adab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54adac: push 0x5adef8 */
  { uint32_t v = 0x5adef8u; esp -= 4; W32(esp, v); }
/* 54adb1: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54adb6u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54adb6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54adb9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54adbb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54adbd: call 0x554df6 */
  esp -= 4; W32(esp, 0x54adc2u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_54adc2: guest_badaddr(0x54adc2); return;
}

void f_54ae00(void) {
  LOAD_REGS();
L_54ae00: /* 54ae00: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54ae01: mov ebx, ecx */
  ebx = ecx;
/* 54ae03: mov eax, dword ptr [ebx + 0x6c] */
  eax = R32((uint32_t)(ebx + 0x6cu));
/* 54ae06: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54ae07: mov esi, dword ptr [eax + 0x6c] */
  esi = R32((uint32_t)(eax + 0x6cu));
/* 54ae0a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54ae0c: je 0x54ae5c */
  if (zf) goto L_54ae5c;
L_54ae0e: /* 54ae0e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 54ae0f: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 54ae13: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_54ae14: /* 54ae14: mov eax, dword ptr [ebx + 0x34] */
  eax = R32((uint32_t)(ebx + 0x34u));
/* 54ae17: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 54ae19: jg 0x54ae2d */
  if ((!zf && sf == of)) goto L_54ae2d;
L_54ae1b: /* 54ae1b: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* 54ae1e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 54ae20: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54ae22: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54ae23: mov ecx, esi */
  ecx = esi;
/* 54ae25: call dword ptr [edx + 0xac] */
  { uint32_t t = R32((uint32_t)(edx + 0xacu)); esp -= 4; W32(esp, 0x54ae2bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54ae2b: jmp 0x54ae53 */
  goto L_54ae53;
L_54ae2d: /* 54ae2d: xor edi, edi */
  edi = 0;
/* 54ae2f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 54ae31: jle 0x54ae53 */
  if ((zf || sf != of)) goto L_54ae53;
L_54ae33: /* 54ae33: mov eax, dword ptr [ebx + 0x38] */
  eax = R32((uint32_t)(ebx + 0x38u));
/* 54ae36: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* 54ae39: imul eax, edi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edi);
  eax = (uint32_t)r;
  }
/* 54ae3c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 54ae3e: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54ae40: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54ae42: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54ae43: mov ecx, esi */
  ecx = esi;
/* 54ae45: call dword ptr [edx + 0xac] */
  { uint32_t t = R32((uint32_t)(edx + 0xacu)); esp -= 4; W32(esp, 0x54ae4bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54ae4b: mov eax, dword ptr [ebx + 0x34] */
  eax = R32((uint32_t)(ebx + 0x34u));
/* 54ae4e: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 54ae4f: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54ae51: jl 0x54ae33 */
  if ((sf != of)) goto L_54ae33;
L_54ae53: /* 54ae53: mov esi, dword ptr [esi + 0x54] */
  esi = R32((uint32_t)(esi + 0x54u));
/* 54ae56: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54ae58: jne 0x54ae14 */
  if (!zf) goto L_54ae14;
L_54ae5a: /* 54ae5a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54ae5b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_54ae5c: /* 54ae5c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54ae5d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54ae5e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_54ae90(void) {
  LOAD_REGS();
L_54ae90: /* 54ae90: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 54ae94: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 54ae98: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 54ae9a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54ae9b: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x54ae9eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54ae9e: ret  */
  esp += 4; SPILL(); return;
}

void f_54aeb0(void) {
  LOAD_REGS();
L_54aeb0: /* 54aeb0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 54aeb4: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 54aeb8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 54aeba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54aebb: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x54aebeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54aebe: ret  */
  esp += 4; SPILL(); return;
}

void f_54aed0(void) {
  LOAD_REGS();
L_54aed0: /* 54aed0: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 54aed3: ret  */
  esp += 4; SPILL(); return;
}

void f_54aef0(void) {
  LOAD_REGS();
L_54aef0: /* 54aef0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 54aef1: mov ebp, esp */
  ebp = esp;
/* 54aef3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 54aef5: push 0x559850 */
  { uint32_t v = 0x559850u; esp -= 4; W32(esp, v); }
/* 54aefa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 54af00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54af01: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 54af08: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54af0b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 54af0e: mov ax, word ptr [ecx] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* 54af11: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54af12: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54af13: xor edx, edx */
  edx = 0;
/* 54af15: cmp ax, 0x22 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x22u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 54af19: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54af1a: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 54af1d: mov dword ptr [ebp - 4], edx */
  W32((uint32_t)(ebp + 0xfffffffcu), edx);
/* 54af20: jne 0x54b003 */
  if (!zf) goto L_54b003;
L_54af26: /* 54af26: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 54af29: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
L_54af2c: /* 54af2c: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 54af2f: nop  */
L_54af30: /* 54af30: mov ax, word ptr [ecx] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* 54af33: test ax, ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 54af36: je 0x54af97 */
  if (zf) goto L_54af97;
L_54af38: /* 54af38: cmp ax, 0x22 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x22u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 54af3c: je 0x54af97 */
  if (zf) goto L_54af97;
L_54af3e: /* 54af3e: cmp ax, 0xd */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xdu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 54af42: je 0x54af97 */
  if (zf) goto L_54af97;
L_54af44: /* 54af44: cmp ax, 0xa */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xau);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 54af48: je 0x54af97 */
  if (zf) goto L_54af97;
L_54af4a: /* 54af4a: lea esi, [ebx - 1] */
  esi = (uint32_t)(ebx + 0xffffffffu);
/* 54af4d: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54af4f: jge 0x54af97 */
  if ((sf == of)) goto L_54af97;
L_54af51: /* 54af51: cmp ax, 0x5c */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x5cu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 54af55: je 0x54af5e */
  if (zf) goto L_54af5e;
L_54af57: /* 54af57: mov word ptr [edi + edx*2], ax */
  W16((uint32_t)(edi + edx*2), (eax & 0xffffu));
/* 54af5b: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 54af5c: jmp 0x54af2c */
  goto L_54af2c;
L_54af5e: /* 54af5e: mov si, word ptr [ecx + 2] */
  esi = (esi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x2u))) & 0xffffu);
/* 54af62: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 54af65: cmp si, 0x5c */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0x5cu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 54af69: jne 0x54af72 */
  if (!zf) goto L_54af72;
L_54af6b: /* 54af6b: mov word ptr [edi + edx*2], si */
  W16((uint32_t)(edi + edx*2), (esi & 0xffffu));
/* 54af6f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 54af70: jmp 0x54af2c */
  goto L_54af2c;
L_54af72: /* 54af72: mov ax, word ptr [ecx + 2] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x2u))) & 0xffffu);
/* 54af76: call 0x5485d0 */
  esp -= 4; W32(esp, 0x54af7bu); SPILL(); f_5485d0(); if (g_unwind) return; RELOAD();
/* 54af7b: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 54af7e: mov eax, esi */
  eax = esi;
/* 54af80: call 0x5485d0 */
  esp -= 4; W32(esp, 0x54af85u); SPILL(); f_5485d0(); if (g_unwind) return; RELOAD();
/* 54af85: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 54af88: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 54af8b: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 54af8d: mov word ptr [edi + edx*2], si */
  W16((uint32_t)(edi + edx*2), (esi & 0xffffu));
/* 54af91: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 54af92: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 54af95: jmp 0x54af30 */
  goto L_54af30;
L_54af97: /* 54af97: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 54af98: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54af9a: jne 0x54afc7 */
  if (!zf) goto L_54afc7;
L_54af9c: /* 54af9c: mov eax, dword ptr [0x5a0c90] */
  eax = R32((uint32_t)(0x5a0c90u));
/* 54afa1: push 0x5ad338 */
  { uint32_t v = 0x5ad338u; esp -= 4; W32(esp, v); }
/* 54afa6: push 0x2ff */
  { uint32_t v = 0x2ffu; esp -= 4; W32(esp, v); }
/* 54afab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54afac: call 0x4e30df */
  esp -= 4; W32(esp, 0x54afb1u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 54afb1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54afb4: xor eax, eax */
  eax = 0;
/* 54afb6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54afb9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54afc0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54afc1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54afc2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54afc3: mov esp, ebp */
  esp = ebp;
/* 54afc5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54afc6: ret  */
  esp += 4; SPILL(); return;
L_54afc7: /* 54afc7: mov ax, word ptr [ecx] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* 54afca: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 54afcd: cmp ax, 0x22 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x22u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 54afd1: je 0x54b0f1 */
  if (zf) goto L_54b0f1;
L_54afd7: /* 54afd7: mov ecx, dword ptr [0x5afee8] */
  ecx = R32((uint32_t)(0x5afee8u));
/* 54afdd: push 0x5ad37c */
  { uint32_t v = 0x5ad37cu; esp -= 4; W32(esp, v); }
/* 54afe2: push 0x2ff */
  { uint32_t v = 0x2ffu; esp -= 4; W32(esp, v); }
/* 54afe7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54afe8: call 0x4e30df */
  esp -= 4; W32(esp, 0x54afedu); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 54afed: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54aff0: xor eax, eax */
  eax = 0;
/* 54aff2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54aff5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54affc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54affd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54affe: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54afff: mov esp, ebp */
  esp = ebp;
/* 54b001: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54b002: ret  */
  esp += 4; SPILL(); return;
L_54b003: /* 54b003: cmp ax, 0x61 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x61u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 54b007: jb 0x54b00f */
  if (cf) goto L_54b00f;
L_54b009: /* 54b009: cmp ax, 0x7a */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x7au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 54b00d: jbe 0x54b02f */
  if ((cf | zf)) goto L_54b02f;
L_54b00f: /* 54b00f: cmp ax, 0x41 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x41u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 54b013: jb 0x54b01b */
  if (cf) goto L_54b01b;
L_54b015: /* 54b015: cmp ax, 0x5a */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x5au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 54b019: jbe 0x54b02f */
  if ((cf | zf)) goto L_54b02f;
L_54b01b: /* 54b01b: cmp ax, 0x30 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x30u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 54b01f: jb 0x54b0e6 */
  if (cf) goto L_54b0e6;
L_54b025: /* 54b025: cmp ax, 0x39 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x39u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 54b029: ja 0x54b0e6 */
  if ((!cf && !zf)) goto L_54b0e6;
L_54b02f: /* 54b02f: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 54b032: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
L_54b035: /* 54b035: mov ax, word ptr [ecx] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* 54b038: cmp ax, 0x61 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x61u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 54b03c: jb 0x54b044 */
  if (cf) goto L_54b044;
L_54b03e: /* 54b03e: cmp ax, 0x7a */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x7au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 54b042: jbe 0x54b075 */
  if ((cf | zf)) goto L_54b075;
L_54b044: /* 54b044: cmp ax, 0x41 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x41u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 54b048: jb 0x54b050 */
  if (cf) goto L_54b050;
L_54b04a: /* 54b04a: cmp ax, 0x5a */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x5au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 54b04e: jbe 0x54b075 */
  if ((cf | zf)) goto L_54b075;
L_54b050: /* 54b050: cmp ax, 0x30 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x30u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 54b054: jb 0x54b05c */
  if (cf) goto L_54b05c;
L_54b056: /* 54b056: cmp ax, 0x39 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x39u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 54b05a: jbe 0x54b075 */
  if ((cf | zf)) goto L_54b075;
L_54b05c: /* 54b05c: cmp ax, 0x5f */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x5fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 54b060: je 0x54b075 */
  if (zf) goto L_54b075;
L_54b062: /* 54b062: cmp ax, 0x2d */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x2du);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 54b066: je 0x54b075 */
  if (zf) goto L_54b075;
L_54b068: /* 54b068: mov ebx, dword ptr [ebp + 0x14] */
  ebx = R32((uint32_t)(ebp + 0x14u));
/* 54b06b: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54b06d: je 0x54b086 */
  if (zf) goto L_54b086;
L_54b06f: /* 54b06f: cmp ax, 0x2e */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x2eu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 54b073: jne 0x54b086 */
  if (!zf) goto L_54b086;
L_54b075: /* 54b075: lea ebx, [esi - 1] */
  ebx = (uint32_t)(esi + 0xffffffffu);
/* 54b078: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54b07a: jge 0x54b086 */
  if ((sf == of)) goto L_54b086;
L_54b07c: /* 54b07c: mov word ptr [edi + edx*2], ax */
  W16((uint32_t)(edi + edx*2), (eax & 0xffffu));
/* 54b080: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 54b081: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 54b084: jmp 0x54b035 */
  goto L_54b035;
L_54b086: /* 54b086: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 54b087: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54b089: jne 0x54b0f1 */
  if (!zf) goto L_54b0f1;
L_54b08b: /* 54b08b: mov edx, dword ptr [0x5a0c90] */
  edx = R32((uint32_t)(0x5a0c90u));
/* 54b091: push 0x5ad3b8 */
  { uint32_t v = 0x5ad3b8u; esp -= 4; W32(esp, v); }
/* 54b096: push 0x2ff */
  { uint32_t v = 0x2ffu; esp -= 4; W32(esp, v); }
/* 54b09b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54b09c: call 0x4e30df */
  esp -= 4; W32(esp, 0x54b0a1u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 54b0a1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54b0a4: xor eax, eax */
  eax = 0;
/* 54b0a6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54b0a9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54b0b0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54b0b1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54b0b2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54b0b3: mov esp, ebp */
  esp = ebp;
/* 54b0b5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54b0b6: ret  */
  esp += 4; SPILL(); return;
L_54b0e6: /* 54b0e6: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 54b0e9: mov word ptr [edi], ax */
  W16((uint32_t)(edi), (eax & 0xffffu));
/* 54b0ec: mov edx, 1 */
  edx = 0x1u;
L_54b0f1: /* 54b0f1: mov word ptr [edi + edx*2], 0 */
  W16((uint32_t)(edi + edx*2), 0x0u);
/* 54b0f7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54b0f8: mov eax, ecx */
  eax = ecx;
/* 54b0fa: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54b0fd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54b0fe: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54b105: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54b106: mov esp, ebp */
  esp = ebp;
/* 54b108: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54b109: ret  */
  esp += 4; SPILL(); return;
}

void f_54b0b7(void) {
  LOAD_REGS();
L_54b0b7: /* 54b0b7: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 54b0ba: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 54b0bf: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 54b0c2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54b0c3: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 54b0c6: call 0x554df6 */
  esp -= 4; W32(esp, 0x54b0cbu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_54b0cb(); return;
}

void f_54b0cb(void) {
  LOAD_REGS();
L_54b0cb: /* 54b0cb: push 0x56f680 */
  { uint32_t v = 0x56f680u; esp -= 4; W32(esp, v); }
/* 54b0d0: push 0x5ad3fc */
  { uint32_t v = 0x5ad3fcu; esp -= 4; W32(esp, v); }
/* 54b0d5: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54b0dau); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54b0da: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54b0dd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54b0df: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54b0e1: call 0x554df6 */
  esp -= 4; W32(esp, 0x54b0e6u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
/* 54b0e6: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 54b0e9: mov word ptr [edi], ax */
  W16((uint32_t)(edi), (eax & 0xffffu));
/* 54b0ec: mov edx, 1 */
  edx = 0x1u;
/* 54b0f1: mov word ptr [edi + edx*2], 0 */
  W16((uint32_t)(edi + edx*2), 0x0u);
/* 54b0f7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54b0f8: mov eax, ecx */
  eax = ecx;
/* 54b0fa: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54b0fd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54b0fe: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54b105: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54b106: mov esp, ebp */
  esp = ebp;
/* 54b108: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54b109: ret  */
  esp += 4; SPILL(); return;
}

void f_54b1a0(void) {
  LOAD_REGS();
L_54b1a0: /* 54b1a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 54b1a1: mov ebp, esp */
  ebp = esp;
/* 54b1a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 54b1a5: push 0x559860 */
  { uint32_t v = 0x559860u; esp -= 4; W32(esp, v); }
/* 54b1aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 54b1b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54b1b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 54b1b8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54b1bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54b1bc: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 54b1bf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54b1c0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54b1c1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 54b1c4: mov esi, ecx */
  esi = ecx;
/* 54b1c6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54b1c7: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 54b1ca: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 54b1d1: call 0x4e1de3 */
  esp -= 4; W32(esp, 0x54b1d6u); SPILL(); f_4e1de3(); if (g_unwind) return; RELOAD();
/* 54b1d6: lea eax, [esi + 0x34] */
  eax = (uint32_t)(esi + 0x34u);
/* 54b1d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54b1da: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54b1db: call 0x4e4160 */
  esp -= 4; W32(esp, 0x54b1e0u); SPILL(); f_4e4160(); if (g_unwind) return; RELOAD();
/* 54b1e0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54b1e3: lea edi, [esi + 0x3c] */
  edi = (uint32_t)(esi + 0x3cu);
/* 54b1e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54b1e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54b1e8: call 0x4e4165 */
  esp -= 4; W32(esp, 0x54b1edu); SPILL(); f_4e4165(); if (g_unwind) return; RELOAD();
/* 54b1ed: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 54b1ef: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54b1f2: lea ecx, [esi + 0x40] */
  ecx = (uint32_t)(esi + 0x40u);
/* 54b1f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54b1f6: mov ecx, eax */
  ecx = eax;
/* 54b1f8: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x54b1fbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54b1fb: test byte ptr [edi], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 54b1fe: je 0x54b20d */
  if (zf) goto L_54b20d;
L_54b200: /* 54b200: lea edx, [esi + 0x44] */
  edx = (uint32_t)(esi + 0x44u);
/* 54b203: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54b204: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54b205: call 0x4e4147 */
  esp -= 4; W32(esp, 0x54b20au); SPILL(); f_4e4147(); if (g_unwind) return; RELOAD();
/* 54b20a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_54b20d: /* 54b20d: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* 54b210: xor eax, eax */
  eax = 0;
/* 54b212: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54b214: je 0x54b21c */
  if (zf) goto L_54b21c;
L_54b216: /* 54b216: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* 54b219: mov dword ptr [esi + 0x54], eax */
  W32((uint32_t)(esi + 0x54u), eax);
L_54b21c: /* 54b21c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54b21f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54b220: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54b221: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54b228: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54b229: mov esp, ebp */
  esp = ebp;
/* 54b22b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54b22c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_54b22f(void) {
  LOAD_REGS();
L_54b22f: /* 54b22f: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 54b232: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 54b237: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 54b23a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54b23b: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 54b23e: call 0x554df6 */
  esp -= 4; W32(esp, 0x54b243u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_54b243(); return;
}

void f_54b243(void) {
  LOAD_REGS();
L_54b243: /* 54b243: push 0x56f698 */
  { uint32_t v = 0x56f698u; esp -= 4; W32(esp, v); }
/* 54b248: push 0x5ad404 */
  { uint32_t v = 0x5ad404u; esp -= 4; W32(esp, v); }
/* 54b24d: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54b252u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54b252: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 54b255: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54b258: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54b25a: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x54b25fu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 54b25f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54b260: push 0x5ad40c */
  { uint32_t v = 0x5ad40cu; esp -= 4; W32(esp, v); }
/* 54b265: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54b26au); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54b26a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54b26d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54b26f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54b271: call 0x554df6 */
  esp -= 4; W32(esp, 0x54b276u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_54b276: guest_badaddr(0x54b276); return;
}

void f_54b2c0(void) {
  LOAD_REGS();
L_54b2c0: /* 54b2c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 54b2c1: mov ebp, esp */
  ebp = esp;
/* 54b2c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 54b2c5: push 0x559870 */
  { uint32_t v = 0x559870u; esp -= 4; W32(esp, v); }
/* 54b2ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 54b2d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54b2d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 54b2d8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54b2db: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 54b2de: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54b2df: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 54b2e2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54b2e3: mov esi, ecx */
  esi = ecx;
/* 54b2e5: xor ecx, ecx */
  ecx = 0;
/* 54b2e7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54b2e8: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 54b2eb: mov word ptr [eax], cx */
  W16((uint32_t)(eax), (ecx & 0xffffu));
/* 54b2ee: cmp dword ptr [ebp + 0x10], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54b2f1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 54b2f4: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 54b2f7: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* 54b2fa: je 0x54b338 */
  if (zf) goto L_54b338;
L_54b2fc: /* 54b2fc: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 54b2ff: mov edx, dword ptr [esi + 0x48] */
  edx = R32((uint32_t)(esi + 0x48u));
/* 54b302: imul eax, ebx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ebx);
  eax = (uint32_t)r;
  }
/* 54b305: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54b307: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54b309: je 0x54b30e */
  if (zf) goto L_54b30e;
L_54b30b: /* 54b30b: lea ecx, [eax + edi] */
  ecx = (uint32_t)(eax + edi);
L_54b30e: /* 54b30e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 54b310: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54b311: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 54b314: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54b316: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54b317: mov ecx, esi */
  ecx = esi;
/* 54b319: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0x54b31fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54b31f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54b321: je 0x54b338 */
  if (zf) goto L_54b338;
L_54b323: /* 54b323: xor eax, eax */
  eax = 0;
/* 54b325: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54b328: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54b32f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54b330: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54b331: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54b332: mov esp, ebp */
  esp = ebp;
/* 54b334: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54b335: ret 0x14 */
  esp += 24; SPILL(); return;
L_54b338: /* 54b338: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54b33a: je 0x54b34b */
  if (zf) goto L_54b34b;
L_54b33c: /* 54b33c: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 54b33f: mov edx, dword ptr [esi + 0x48] */
  edx = R32((uint32_t)(esi + 0x48u));
/* 54b342: imul eax, ebx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ebx);
  eax = (uint32_t)r;
  }
/* 54b345: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54b347: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54b349: jmp 0x54b34d */
  goto L_54b34d;
L_54b34b: /* 54b34b: xor eax, eax */
  eax = 0;
L_54b34d: /* 54b34d: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 54b350: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 54b353: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 54b355: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54b356: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 54b359: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54b35a: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 54b35d: imul eax, ebx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ebx);
  eax = (uint32_t)r;
  }
/* 54b360: add eax, dword ptr [esi + 0x48] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x48u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54b363: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54b365: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54b366: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54b367: mov ecx, esi */
  ecx = esi;
/* 54b369: call dword ptr [edx + 0x98] */
  { uint32_t t = R32((uint32_t)(edx + 0x98u)); esp -= 4; W32(esp, 0x54b36fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54b36f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54b372: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54b373: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54b374: mov eax, 1 */
  eax = 0x1u;
/* 54b379: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54b380: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54b381: mov esp, ebp */
  esp = ebp;
/* 54b383: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54b384: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_54b387(void) {
  LOAD_REGS();
L_54b387: /* 54b387: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 54b38a: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 54b38f: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 54b392: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54b393: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 54b396: call 0x554df6 */
  esp -= 4; W32(esp, 0x54b39bu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_54b39b(); return;
}

void f_54b39b(void) {
  LOAD_REGS();
L_54b39b: /* 54b39b: push 0x56f6cc */
  { uint32_t v = 0x56f6ccu; esp -= 4; W32(esp, v); }
/* 54b3a0: push 0x5ad4e0 */
  { uint32_t v = 0x5ad4e0u; esp -= 4; W32(esp, v); }
/* 54b3a5: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54b3aau); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54b3aa: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 54b3ad: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54b3b0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54b3b2: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x54b3b7u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 54b3b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54b3b8: push 0x5ad4e8 */
  { uint32_t v = 0x5ad4e8u; esp -= 4; W32(esp, v); }
/* 54b3bd: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54b3c2u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54b3c2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54b3c5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54b3c7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54b3c9: call 0x554df6 */
  esp -= 4; W32(esp, 0x54b3ceu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_54b3ce: guest_badaddr(0x54b3ce); return;
}

void f_54b420(void) {
  LOAD_REGS();
L_54b420: /* 54b420: mov eax, dword ptr [ecx + 0x38] */
  eax = R32((uint32_t)(ecx + 0x38u));
/* 54b423: imul eax, dword ptr [ecx + 0x34] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ecx + 0x34u)));
  eax = (uint32_t)r;
  }
/* 54b427: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54b429: je 0x54b449 */
  if (zf) goto L_54b449;
L_54b42b: /* 54b42b: mov eax, dword ptr [ecx + 0x40] */
  eax = R32((uint32_t)(ecx + 0x40u));
/* 54b42e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54b430: jne 0x54b43a */
  if (!zf) goto L_54b43a;
L_54b432: /* 54b432: mov eax, dword ptr [ecx + 0x3c] */
  eax = R32((uint32_t)(ecx + 0x3cu));
/* 54b435: test ah, 0x30 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 54b438: jne 0x54b449 */
  if (!zf) goto L_54b449;
L_54b43a: /* 54b43a: cmp dword ptr [ecx + 0x20], 0x2a5 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x20u))); uint32_t b = (uint32_t)(0x2a5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54b441: je 0x54b449 */
  if (zf) goto L_54b449;
L_54b443: /* 54b443: mov eax, 1 */
  eax = 0x1u;
/* 54b448: ret  */
  esp += 4; SPILL(); return;
L_54b449: /* 54b449: xor eax, eax */
  eax = 0;
/* 54b44b: ret  */
  esp += 4; SPILL(); return;
}

void f_54b460(void) {
  LOAD_REGS();
L_54b460: /* 54b460: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* 54b463: mov al, byte ptr [eax + 0x20] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x20u))) & 0xffu);
/* 54b466: ret  */
  esp += 4; SPILL(); return;
}

void f_54b480(void) {
  LOAD_REGS();
L_54b480: /* 54b480: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 54b481: mov ebp, esp */
  ebp = esp;
/* 54b483: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 54b485: push 0x559880 */
  { uint32_t v = 0x559880u; esp -= 4; W32(esp, v); }
/* 54b48a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 54b490: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54b491: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 54b498: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54b49b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54b49c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54b49d: mov esi, ecx */
  esi = ecx;
/* 54b49f: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 54b4a2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54b4a3: mov dword ptr [esi + 0x38], 1 */
  W32((uint32_t)(esi + 0x38u), 0x1u);
/* 54b4aa: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 54b4ac: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 54b4af: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 54b4b2: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 54b4b9: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x54b4bcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54b4bc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54b4bf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54b4c0: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* 54b4c3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54b4c4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54b4cb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54b4cc: mov esp, ebp */
  esp = ebp;
/* 54b4ce: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54b4cf: ret 8 */
  esp += 12; SPILL(); return;
}

void f_54b4d2(void) {
  LOAD_REGS();
L_54b4d2: /* 54b4d2: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 54b4d5: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 54b4da: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 54b4dd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54b4de: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 54b4e1: call 0x554df6 */
  esp -= 4; W32(esp, 0x54b4e6u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_54b4e6(); return;
}

void f_54b4e6(void) {
  LOAD_REGS();
L_54b4e6: /* 54b4e6: push 0x56f700 */
  { uint32_t v = 0x56f700u; esp -= 4; W32(esp, v); }
/* 54b4eb: push 0x5ad508 */
  { uint32_t v = 0x5ad508u; esp -= 4; W32(esp, v); }
/* 54b4f0: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54b4f5u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54b4f5: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 54b4f8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54b4fb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54b4fd: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x54b502u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 54b502: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54b503: push 0x5ad510 */
  { uint32_t v = 0x5ad510u; esp -= 4; W32(esp, v); }
/* 54b508: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54b50du); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54b50d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54b510: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54b512: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54b514: call 0x554df6 */
  esp -= 4; W32(esp, 0x54b519u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_54b519: guest_badaddr(0x54b519); return;
}

void f_54b550(void) {
  LOAD_REGS();
L_54b550: /* 54b550: mov eax, dword ptr [ecx + 0x6c] */
  eax = R32((uint32_t)(ecx + 0x6cu));
/* 54b553: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54b555: je 0x54b568 */
  if (zf) goto L_54b568;
L_54b557: /* 54b557: mov eax, dword ptr [eax + 0x38] */
  eax = R32((uint32_t)(eax + 0x38u));
/* 54b55a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54b55b: call 0x4e2428 */
  esp -= 4; W32(esp, 0x54b560u); SPILL(); f_4e2428(); if (g_unwind) return; RELOAD();
/* 54b560: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54b563: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 54b566: jmp 0x54b56d */
  goto L_54b56d;
L_54b568: /* 54b568: mov eax, 8 */
  eax = 0x8u;
L_54b56d: /* 54b56d: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 54b571: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 54b573: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54b574: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 54b578: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54b579: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x54b57cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54b57c: mov eax, 1 */
  eax = 0x1u;
/* 54b581: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_54b5a0(void) {
  LOAD_REGS();
L_54b5a0: /* 54b5a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 54b5a1: mov ebp, esp */
  ebp = esp;
/* 54b5a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 54b5a5: push 0x559890 */
  { uint32_t v = 0x559890u; esp -= 4; W32(esp, v); }
/* 54b5aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 54b5b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54b5b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 54b5b8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54b5bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54b5bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54b5bd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54b5be: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 54b5c1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 54b5c4: mov esi, ecx */
  esi = ecx;
/* 54b5c6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54b5c7: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 54b5ca: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 54b5d1: call 0x4e12fd */
  esp -= 4; W32(esp, 0x54b5d6u); SPILL(); f_4e12fd(); if (g_unwind) return; RELOAD();
/* 54b5d6: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 54b5d8: add esi, 0x6c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 54b5db: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54b5dc: mov ecx, edi */
  ecx = edi;
/* 54b5de: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x54b5e1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54b5e1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54b5e4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54b5e5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54b5e6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54b5ed: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54b5ee: mov esp, ebp */
  esp = ebp;
/* 54b5f0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54b5f1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_54b5f4(void) {
  LOAD_REGS();
L_54b5f4: /* 54b5f4: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 54b5f7: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 54b5fc: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 54b5ff: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54b600: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 54b603: call 0x554df6 */
  esp -= 4; W32(esp, 0x54b608u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_54b608(); return;
}

void f_54b608(void) {
  LOAD_REGS();
L_54b608: /* 54b608: push 0x56f730 */
  { uint32_t v = 0x56f730u; esp -= 4; W32(esp, v); }
/* 54b60d: push 0x5ad51c */
  { uint32_t v = 0x5ad51cu; esp -= 4; W32(esp, v); }
/* 54b612: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54b617u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54b617: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 54b61a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54b61d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54b61f: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x54b624u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 54b624: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54b625: push 0x5ad524 */
  { uint32_t v = 0x5ad524u; esp -= 4; W32(esp, v); }
/* 54b62a: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54b62fu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54b62f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54b632: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54b634: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54b636: call 0x554df6 */
  esp -= 4; W32(esp, 0x54b63bu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_54b63b: guest_badaddr(0x54b63b); return;
}

void f_54b670(void) {
  LOAD_REGS();
L_54b670: /* 54b670: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 54b671: mov ebp, esp */
  ebp = esp;
/* 54b673: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 54b675: push 0x5598a0 */
  { uint32_t v = 0x5598a0u; esp -= 4; W32(esp, v); }
/* 54b67a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 54b680: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54b681: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 54b688: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54b68b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54b68c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54b68d: mov esi, ecx */
  esi = ecx;
/* 54b68f: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 54b692: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54b693: mov dword ptr [esi + 0x38], 4 */
  W32((uint32_t)(esi + 0x38u), 0x4u);
/* 54b69a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 54b69c: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 54b69f: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 54b6a2: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 54b6a9: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x54b6acu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54b6ac: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54b6af: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54b6b2: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 54b6b5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54b6b6: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* 54b6b9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54b6ba: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54b6c1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54b6c2: mov esp, ebp */
  esp = ebp;
/* 54b6c4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54b6c5: ret 8 */
  esp += 12; SPILL(); return;
}

void f_54b6c8(void) {
  LOAD_REGS();
L_54b6c8: /* 54b6c8: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 54b6cb: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 54b6d0: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 54b6d3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54b6d4: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 54b6d7: call 0x554df6 */
  esp -= 4; W32(esp, 0x54b6dcu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_54b6dc(); return;
}

void f_54b6dc(void) {
  LOAD_REGS();
L_54b6dc: /* 54b6dc: push 0x56f76c */
  { uint32_t v = 0x56f76cu; esp -= 4; W32(esp, v); }
/* 54b6e1: push 0x5ad5b8 */
  { uint32_t v = 0x5ad5b8u; esp -= 4; W32(esp, v); }
/* 54b6e6: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54b6ebu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54b6eb: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 54b6ee: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54b6f1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54b6f3: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x54b6f8u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 54b6f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54b6f9: push 0x5ad5c0 */
  { uint32_t v = 0x5ad5c0u; esp -= 4; W32(esp, v); }
/* 54b6fe: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54b703u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54b703: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54b706: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54b708: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54b70a: call 0x554df6 */
  esp -= 4; W32(esp, 0x54b70fu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_54b70f: guest_badaddr(0x54b70f); return;
}

void f_54b740(void) {
  LOAD_REGS();
L_54b740: /* 54b740: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 54b741: mov ebp, esp */
  ebp = esp;
/* 54b743: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 54b745: push 0x5598b0 */
  { uint32_t v = 0x5598b0u; esp -= 4; W32(esp, v); }
/* 54b74a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 54b750: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54b751: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 54b758: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54b75b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54b75c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54b75d: mov esi, ecx */
  esi = ecx;
/* 54b75f: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 54b762: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54b763: mov dword ptr [esi + 0x38], 8 */
  W32((uint32_t)(esi + 0x38u), 0x8u);
/* 54b76a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 54b76c: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 54b76f: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 54b772: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 54b779: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x54b77cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54b77c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54b77f: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54b782: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 54b785: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* 54b788: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 54b78b: or eax, 0x400000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 54b790: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54b791: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* 54b794: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54b795: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54b79c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54b79d: mov esp, ebp */
  esp = ebp;
/* 54b79f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54b7a0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_54b7a3(void) {
  LOAD_REGS();
L_54b7a3: /* 54b7a3: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 54b7a6: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 54b7ab: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 54b7ae: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54b7af: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 54b7b2: call 0x554df6 */
  esp -= 4; W32(esp, 0x54b7b7u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_54b7b7(); return;
}

void f_54b7b7(void) {
  LOAD_REGS();
L_54b7b7: /* 54b7b7: push 0x56f79c */
  { uint32_t v = 0x56f79cu; esp -= 4; W32(esp, v); }
/* 54b7bc: push 0x5ad634 */
  { uint32_t v = 0x5ad634u; esp -= 4; W32(esp, v); }
/* 54b7c1: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54b7c6u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54b7c6: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 54b7c9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54b7cc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54b7ce: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x54b7d3u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 54b7d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54b7d4: push 0x5ad63c */
  { uint32_t v = 0x5ad63cu; esp -= 4; W32(esp, v); }
/* 54b7d9: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54b7deu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54b7de: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54b7e1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54b7e3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54b7e5: call 0x554df6 */
  esp -= 4; W32(esp, 0x54b7eau); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_54b7ea: guest_badaddr(0x54b7ea); return;
}

void f_54b820(void) {
  LOAD_REGS();
L_54b820: /* 54b820: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 54b824: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54b826: mov eax, dword ptr [ecx + 0x34] */
  eax = R32((uint32_t)(ecx + 0x34u));
/* 54b829: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54b82a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54b82b: je 0x54b8fd */
  if (zf) goto L_54b8fd;
L_54b831: /* 54b831: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54b834: jne 0x54b882 */
  if (!zf) goto L_54b882;
L_54b836: /* 54b836: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 54b83a: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 54b83c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54b83e: je 0x54b855 */
  if (zf) goto L_54b855;
L_54b840: /* 54b840: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* 54b843: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54b845: je 0x54b855 */
  if (zf) goto L_54b855;
L_54b847: /* 54b847: cmp eax, 0x5f0d80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5f0d80u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54b84c: je 0x54b87e */
  if (zf) goto L_54b87e;
L_54b84e: /* 54b84e: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 54b851: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54b853: jne 0x54b847 */
  if (!zf) goto L_54b847;
L_54b855: /* 54b855: xor eax, eax */
  eax = 0;
L_54b857: /* 54b857: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54b859: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 54b85c: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 54b860: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 54b863: je 0x54b875 */
  if (zf) goto L_54b875;
L_54b865: /* 54b865: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54b866: mov ecx, edx */
  ecx = edx;
/* 54b868: call 0x4e2b3a */
  esp -= 4; W32(esp, 0x54b86du); SPILL(); f_4e2b3a(); if (g_unwind) return; RELOAD();
/* 54b86d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54b86f: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 54b873: jne 0x54b877 */
  if (!zf) goto L_54b877;
L_54b875: /* 54b875: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
L_54b877: /* 54b877: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54b878: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 54b87a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54b87b: ret 0xc */
  esp += 16; SPILL(); return;
L_54b87e: /* 54b87e: mov eax, ecx */
  eax = ecx;
/* 54b880: jmp 0x54b857 */
  goto L_54b857;
L_54b882: /* 54b882: xor edi, edi */
  edi = 0;
/* 54b884: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 54b886: jle 0x54b947 */
  if ((zf || sf != of)) goto L_54b947;
L_54b88c: /* 54b88c: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 54b890: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54b891: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 54b895: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 54b896: mov ebp, ebx */
  ebp = ebx;
/* 54b898: lea esi, [eax + 4] */
  esi = (uint32_t)(eax + 0x4u);
/* 54b89b: sub ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 54b89d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_54b8a0: /* 54b8a0: mov edx, dword ptr [ebx + edi*8] */
  edx = R32((uint32_t)(ebx + edi*8));
/* 54b8a3: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54b8a5: je 0x54b8be */
  if (zf) goto L_54b8be;
L_54b8a7: /* 54b8a7: mov eax, dword ptr [edx + 0x24] */
  eax = R32((uint32_t)(edx + 0x24u));
/* 54b8aa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54b8ac: je 0x54b8be */
  if (zf) goto L_54b8be;
L_54b8ae: /* 54b8ae: mov edi, edi */
  edi = edi;
L_54b8b0: /* 54b8b0: cmp eax, 0x5f0d80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5f0d80u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54b8b5: je 0x54b8c0 */
  if (zf) goto L_54b8c0;
L_54b8b7: /* 54b8b7: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 54b8ba: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54b8bc: jne 0x54b8b0 */
  if (!zf) goto L_54b8b0;
L_54b8be: /* 54b8be: xor edx, edx */
  edx = 0;
L_54b8c0: /* 54b8c0: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54b8c2: mov eax, dword ptr [esi + ebp] */
  eax = R32((uint32_t)(esi + ebp));
/* 54b8c5: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 54b8c7: je 0x54b8df */
  if (zf) goto L_54b8df;
L_54b8c9: /* 54b8c9: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 54b8cd: mov eax, dword ptr [eax + 0x24] */
  eax = R32((uint32_t)(eax + 0x24u));
/* 54b8d0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54b8d2: je 0x54b8df */
  if (zf) goto L_54b8df;
L_54b8d4: /* 54b8d4: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54b8d6: je 0x54b8f7 */
  if (zf) goto L_54b8f7;
L_54b8d8: /* 54b8d8: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 54b8db: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54b8dd: jne 0x54b8d4 */
  if (!zf) goto L_54b8d4;
L_54b8df: /* 54b8df: mov eax, dword ptr [ebx + edi*8] */
  eax = R32((uint32_t)(ebx + edi*8));
L_54b8e2: /* 54b8e2: mov dword ptr [esi - 4], eax */
  W32((uint32_t)(esi + 0xfffffffcu), eax);
/* 54b8e5: mov eax, dword ptr [ecx + 0x34] */
  eax = R32((uint32_t)(ecx + 0x34u));
/* 54b8e8: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 54b8e9: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 54b8ec: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54b8ee: jl 0x54b8a0 */
  if ((sf != of)) goto L_54b8a0;
L_54b8f0: /* 54b8f0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54b8f1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54b8f2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54b8f3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54b8f4: ret 0xc */
  esp += 16; SPILL(); return;
L_54b8f7: /* 54b8f7: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 54b8fb: jmp 0x54b8e2 */
  goto L_54b8e2;
L_54b8fd: /* 54b8fd: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54b900: jne 0x54b919 */
  if (!zf) goto L_54b919;
L_54b902: /* 54b902: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 54b906: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 54b908: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 54b90c: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 54b90e: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 54b911: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54b912: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 54b915: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54b916: ret 0xc */
  esp += 16; SPILL(); return;
L_54b919: /* 54b919: xor esi, esi */
  esi = 0;
/* 54b91b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 54b91d: jle 0x54b947 */
  if ((zf || sf != of)) goto L_54b947;
L_54b91f: /* 54b91f: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 54b923: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 54b927: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 54b929: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_54b930: /* 54b930: mov edi, dword ptr [eax + edx] */
  edi = R32((uint32_t)(eax + edx));
/* 54b933: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 54b935: mov edi, dword ptr [eax + edx + 4] */
  edi = R32((uint32_t)(eax + edx + 0x4u));
/* 54b939: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 54b93c: mov edi, dword ptr [ecx + 0x34] */
  edi = R32((uint32_t)(ecx + 0x34u));
/* 54b93f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 54b940: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54b943: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54b945: jl 0x54b930 */
  if ((sf != of)) goto L_54b930;
L_54b947: /* 54b947: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54b948: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54b949: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_54b9a0(void) {
  LOAD_REGS();
L_54b9a0: /* 54b9a0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 54b9a4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54b9a6: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 54b9aa: jne 0x54b9b5 */
  if (!zf) goto L_54b9b5;
L_54b9ac: /* 54b9ac: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54b9af: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 54b9b2: ret 8 */
  esp += 12; SPILL(); return;
L_54b9b5: /* 54b9b5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 54b9b7: cmp edx, dword ptr [eax] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54b9b9: jne 0x54b9cb */
  if (!zf) goto L_54b9cb;
L_54b9bb: /* 54b9bb: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 54b9be: cmp ecx, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54b9c1: jne 0x54b9cb */
  if (!zf) goto L_54b9cb;
L_54b9c3: /* 54b9c3: mov eax, 1 */
  eax = 0x1u;
/* 54b9c8: ret 8 */
  esp += 12; SPILL(); return;
L_54b9cb: /* 54b9cb: xor eax, eax */
  eax = 0;
/* 54b9cd: ret 8 */
  esp += 12; SPILL(); return;
}

void f_54b9e0(void) {
  LOAD_REGS();
L_54b9e0: /* 54b9e0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 54b9e4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 54b9e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54b9e7: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 54b9eb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54b9ec: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x54b9efu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54b9ef: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 54b9f1: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 54b9f4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54b9f5: mov ecx, eax */
  ecx = eax;
/* 54b9f7: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x54b9fau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54b9fa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54b9fb: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_54ba10(void) {
  LOAD_REGS();
L_54ba10: /* 54ba10: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 54ba14: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 54ba16: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54ba17: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 54ba1b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54ba1c: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x54ba1fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54ba1f: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 54ba21: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 54ba24: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54ba25: mov ecx, eax */
  ecx = eax;
/* 54ba27: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x54ba2au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54ba2a: mov eax, 1 */
  eax = 0x1u;
/* 54ba2f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54ba30: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_54ba50(void) {
  LOAD_REGS();
L_54ba50: /* 54ba50: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 54ba51: mov ebp, esp */
  ebp = esp;
/* 54ba53: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 54ba55: push 0x5598c0 */
  { uint32_t v = 0x5598c0u; esp -= 4; W32(esp, v); }
/* 54ba5a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 54ba60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54ba61: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 54ba68: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54ba6b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54ba6c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54ba6d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54ba6e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 54ba71: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 54ba74: mov esi, ecx */
  esi = ecx;
/* 54ba76: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54ba77: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 54ba7a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 54ba81: call 0x4e12fd */
  esp -= 4; W32(esp, 0x54ba86u); SPILL(); f_4e12fd(); if (g_unwind) return; RELOAD();
/* 54ba86: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 54ba88: add esi, 0x6c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 54ba8b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54ba8c: mov ecx, edi */
  ecx = edi;
/* 54ba8e: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x54ba91u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54ba91: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54ba94: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54ba95: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54ba96: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54ba9d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54ba9e: mov esp, ebp */
  esp = ebp;
/* 54baa0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54baa1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_54baa4(void) {
  LOAD_REGS();
L_54baa4: /* 54baa4: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 54baa7: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 54baac: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 54baaf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54bab0: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 54bab3: call 0x554df6 */
  esp -= 4; W32(esp, 0x54bab8u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_54bab8(); return;
}

void f_54bab8(void) {
  LOAD_REGS();
L_54bab8: /* 54bab8: push 0x56f7d8 */
  { uint32_t v = 0x56f7d8u; esp -= 4; W32(esp, v); }
/* 54babd: push 0x5ad6f0 */
  { uint32_t v = 0x5ad6f0u; esp -= 4; W32(esp, v); }
/* 54bac2: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54bac7u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54bac7: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 54baca: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54bacd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54bacf: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x54bad4u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 54bad4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54bad5: push 0x5ad6f8 */
  { uint32_t v = 0x5ad6f8u; esp -= 4; W32(esp, v); }
/* 54bada: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54badfu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54badf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54bae2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54bae4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54bae6: call 0x554df6 */
  esp -= 4; W32(esp, 0x54baebu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_54baeb: guest_badaddr(0x54baeb); return;
}

void f_54bb20(void) {
  LOAD_REGS();
L_54bb20: /* 54bb20: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 54bb21: mov ebp, esp */
  ebp = esp;
/* 54bb23: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 54bb25: push 0x5598d0 */
  { uint32_t v = 0x5598d0u; esp -= 4; W32(esp, v); }
/* 54bb2a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 54bb30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54bb31: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 54bb38: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54bb3b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54bb3c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54bb3d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54bb3e: mov ebx, ecx */
  ebx = ecx;
/* 54bb40: xor edi, edi */
  edi = 0;
/* 54bb42: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 54bb45: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 54bb48: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 54bb4b: jmp 0x54bb50 */
  goto L_54bb50;
L_54bb50: /* 54bb50: cmp edi, dword ptr [ebx + 0x34] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54bb53: jge 0x54bbf3 */
  if ((sf == of)) goto L_54bbf3;
L_54bb59: /* 54bb59: mov esi, dword ptr [ebx + 0x38] */
  esi = R32((uint32_t)(ebx + 0x38u));
/* 54bb5c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 54bb5f: imul esi, edi */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(edi);
  esi = (uint32_t)r;
  }
/* 54bb62: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 54bb64: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 54bb66: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54bb68: je 0x54bba9 */
  if (zf) goto L_54bba9;
L_54bb6a: /* 54bb6a: call 0x4e1ba9 */
  esp -= 4; W32(esp, 0x54bb6fu); SPILL(); f_4e1ba9(); if (g_unwind) return; RELOAD();
/* 54bb6f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54bb71: jne 0x54bb8a */
  if (!zf) goto L_54bb8a;
L_54bb73: /* 54bb73: push 0x269 */
  { uint32_t v = 0x269u; esp -= 4; W32(esp, v); }
/* 54bb78: push 0x5ad704 */
  { uint32_t v = 0x5ad704u; esp -= 4; W32(esp, v); }
/* 54bb7d: push 0x5ad710 */
  { uint32_t v = 0x5ad710u; esp -= 4; W32(esp, v); }
/* 54bb82: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x54bb87u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 54bb87: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_54bb8a: /* 54bb8a: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 54bb8c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 54bb8e: call dword ptr [eax + 0x30] */
  { uint32_t t = R32((uint32_t)(eax + 0x30u)); esp -= 4; W32(esp, 0x54bb91u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54bb91: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54bb93: je 0x54bba9 */
  if (zf) goto L_54bba9;
L_54bb95: /* 54bb95: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 54bb97: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 54bb99: call dword ptr [edx + 0x20] */
  { uint32_t t = R32((uint32_t)(edx + 0x20u)); esp -= 4; W32(esp, 0x54bb9cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54bb9c: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 54bba2: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
L_54bba9: /* 54bba9: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 54bbaa: jmp 0x54bb50 */
  goto L_54bb50;
L_54bbf3: /* 54bbf3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54bbf6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54bbf7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54bbf8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54bbff: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54bc00: mov esp, ebp */
  esp = ebp;
/* 54bc02: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54bc03: ret 4 */
  esp += 8; SPILL(); return;
}

void f_54bb4d(void) {
  LOAD_REGS();
L_54bb4d: /* 54bb4d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_54bb50: /* 54bb50: cmp edi, dword ptr [ebx + 0x34] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54bb53: jge 0x54bbf3 */
  if ((sf == of)) goto L_54bbf3;
L_54bb59: /* 54bb59: mov esi, dword ptr [ebx + 0x38] */
  esi = R32((uint32_t)(ebx + 0x38u));
/* 54bb5c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 54bb5f: imul esi, edi */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(edi);
  esi = (uint32_t)r;
  }
/* 54bb62: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 54bb64: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 54bb66: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54bb68: je 0x54bba9 */
  if (zf) goto L_54bba9;
L_54bb6a: /* 54bb6a: call 0x4e1ba9 */
  esp -= 4; W32(esp, 0x54bb6fu); SPILL(); f_4e1ba9(); if (g_unwind) return; RELOAD();
/* 54bb6f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54bb71: jne 0x54bb8a */
  if (!zf) goto L_54bb8a;
L_54bb73: /* 54bb73: push 0x269 */
  { uint32_t v = 0x269u; esp -= 4; W32(esp, v); }
/* 54bb78: push 0x5ad704 */
  { uint32_t v = 0x5ad704u; esp -= 4; W32(esp, v); }
/* 54bb7d: push 0x5ad710 */
  { uint32_t v = 0x5ad710u; esp -= 4; W32(esp, v); }
/* 54bb82: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x54bb87u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 54bb87: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_54bb8a: /* 54bb8a: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 54bb8c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 54bb8e: call dword ptr [eax + 0x30] */
  { uint32_t t = R32((uint32_t)(eax + 0x30u)); esp -= 4; W32(esp, 0x54bb91u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54bb91: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54bb93: je 0x54bba9 */
  if (zf) goto L_54bba9;
L_54bb95: /* 54bb95: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 54bb97: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 54bb99: call dword ptr [edx + 0x20] */
  { uint32_t t = R32((uint32_t)(edx + 0x20u)); esp -= 4; W32(esp, 0x54bb9cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54bb9c: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 54bba2: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
L_54bba9: /* 54bba9: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 54bbaa: jmp 0x54bb50 */
  goto L_54bb50;
L_54bbf3: /* 54bbf3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54bbf6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54bbf7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54bbf8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54bbff: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54bc00: mov esp, ebp */
  esp = ebp;
/* 54bc02: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54bc03: ret 4 */
  esp += 8; SPILL(); return;
}

void f_54bbac(void) {
  LOAD_REGS();
L_54bbac: /* 54bbac: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 54bbaf: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 54bbb4: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 54bbb7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54bbb8: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 54bbbb: call 0x554df6 */
  esp -= 4; W32(esp, 0x54bbc0u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_54bbc0(); return;
}

void f_54bbc0(void) {
  LOAD_REGS();
L_54bbc0: /* 54bbc0: push 0x56f820 */
  { uint32_t v = 0x56f820u; esp -= 4; W32(esp, v); }
/* 54bbc5: push 0x5ad72c */
  { uint32_t v = 0x5ad72cu; esp -= 4; W32(esp, v); }
/* 54bbca: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54bbcfu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54bbcf: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 54bbd2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54bbd5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54bbd7: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x54bbdcu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 54bbdc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54bbdd: push 0x5ad734 */
  { uint32_t v = 0x5ad734u; esp -= 4; W32(esp, v); }
/* 54bbe2: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54bbe7u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54bbe7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54bbea: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54bbec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54bbee: call 0x554df6 */
  esp -= 4; W32(esp, 0x54bbf3u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
/* 54bbf3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54bbf6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54bbf7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54bbf8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54bbff: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54bc00: mov esp, ebp */
  esp = ebp;
/* 54bc02: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54bc03: ret 4 */
  esp += 8; SPILL(); return;
}

void f_54bc50(void) {
  LOAD_REGS();
L_54bc50: /* 54bc50: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 54bc51: mov ebp, esp */
  ebp = esp;
/* 54bc53: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 54bc55: push 0x5598e0 */
  { uint32_t v = 0x5598e0u; esp -= 4; W32(esp, v); }
/* 54bc5a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 54bc60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54bc61: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 54bc68: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54bc6b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54bc6c: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 54bc6f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54bc70: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54bc71: xor edi, edi */
  edi = 0;
/* 54bc73: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54bc75: mov esi, ecx */
  esi = ecx;
/* 54bc77: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 54bc7a: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 54bc7d: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 54bc80: je 0x54bc97 */
  if (zf) goto L_54bc97;
L_54bc82: /* 54bc82: mov eax, dword ptr [ebx + 0x24] */
  eax = R32((uint32_t)(ebx + 0x24u));
L_54bc85: /* 54bc85: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54bc87: je 0x54bc97 */
  if (zf) goto L_54bc97;
L_54bc89: /* 54bc89: cmp eax, 0x6a5150 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6a5150u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54bc8e: je 0x54bc95 */
  if (zf) goto L_54bc95;
L_54bc90: /* 54bc90: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 54bc93: jmp 0x54bc85 */
  goto L_54bc85;
L_54bc95: /* 54bc95: mov edi, ebx */
  edi = ebx;
L_54bc97: /* 54bc97: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 54bc9a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 54bc9c: call dword ptr [eax + 0x6c] */
  { uint32_t t = R32((uint32_t)(eax + 0x6cu)); esp -= 4; W32(esp, 0x54bc9fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54bc9f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54bca1: je 0x54bcc0 */
  if (zf) goto L_54bcc0;
L_54bca3: /* 54bca3: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54bca5: je 0x54bcc0 */
  if (zf) goto L_54bcc0;
L_54bca7: /* 54bca7: test dword ptr [edi + 0x6c], 0x7fffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x6cu))); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54bcae: je 0x54bcc0 */
  if (zf) goto L_54bcc0;
L_54bcb0: /* 54bcb0: mov ecx, dword ptr [ebx + 0x48] */
  ecx = R32((uint32_t)(ebx + 0x48u));
/* 54bcb3: mov dword ptr [esi + 0x48], ecx */
  W32((uint32_t)(esi + 0x48u), ecx);
/* 54bcb6: mov edx, dword ptr [edi + 0x6c] */
  edx = R32((uint32_t)(edi + 0x6cu));
/* 54bcb9: shl edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 54bcbb: mov dword ptr [esi + 0x6c], edx */
  W32((uint32_t)(esi + 0x6cu), edx);
/* 54bcbe: jmp 0x54bcd8 */
  goto L_54bcd8;
L_54bcc0: /* 54bcc0: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 54bcc3: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 54bcc5: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x54bcc8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54bcc8: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54bccb: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 54bcce: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* 54bcd1: mov dword ptr [esi + 0x6c], 1 */
  W32((uint32_t)(esi + 0x6cu), 0x1u);
L_54bcd8: /* 54bcd8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54bcdb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54bcdc: mov dword ptr [esi + 0x38], 4 */
  W32((uint32_t)(esi + 0x38u), 0x4u);
/* 54bce3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54bce4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54bceb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54bcec: mov esp, ebp */
  esp = ebp;
/* 54bcee: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54bcef: ret 8 */
  esp += 12; SPILL(); return;
}

void f_54bcf2(void) {
  LOAD_REGS();
L_54bcf2: /* 54bcf2: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 54bcf5: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 54bcfa: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 54bcfd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54bcfe: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 54bd01: call 0x554df6 */
  esp -= 4; W32(esp, 0x54bd06u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_54bd06(); return;
}

void f_54bd06(void) {
  LOAD_REGS();
L_54bd06: /* 54bd06: push 0x56f878 */
  { uint32_t v = 0x56f878u; esp -= 4; W32(esp, v); }
/* 54bd0b: push 0x5ad764 */
  { uint32_t v = 0x5ad764u; esp -= 4; W32(esp, v); }
/* 54bd10: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54bd15u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54bd15: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 54bd18: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54bd1b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54bd1d: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x54bd22u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 54bd22: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54bd23: push 0x5ad76c */
  { uint32_t v = 0x5ad76cu; esp -= 4; W32(esp, v); }
/* 54bd28: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54bd2du); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54bd2d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54bd30: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54bd32: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54bd34: call 0x554df6 */
  esp -= 4; W32(esp, 0x54bd39u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_54bd39: guest_badaddr(0x54bd39); return;
}

void f_54bd80(void) {
  LOAD_REGS();
L_54bd80: /* 54bd80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 54bd81: mov ebp, esp */
  ebp = esp;
/* 54bd83: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 54bd85: push 0x5598f0 */
  { uint32_t v = 0x5598f0u; esp -= 4; W32(esp, v); }
/* 54bd8a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 54bd90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54bd91: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 54bd98: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54bd9b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54bd9c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54bd9d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 54bda0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54bda1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 54bda4: mov edi, ecx */
  edi = ecx;
/* 54bda6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54bda7: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 54bdaa: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 54bdb1: call 0x4e12fd */
  esp -= 4; W32(esp, 0x54bdb6u); SPILL(); f_4e12fd(); if (g_unwind) return; RELOAD();
/* 54bdb6: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 54bdb9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54bdbb: jne 0x54bdd1 */
  if (!zf) goto L_54bdd1;
L_54bdbd: /* 54bdbd: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 54bdc0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54bdc2: jne 0x54bdd1 */
  if (!zf) goto L_54bdd1;
L_54bdc4: /* 54bdc4: add edi, 0x6c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 54bdc7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54bdc8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54bdc9: call 0x4e4165 */
  esp -= 4; W32(esp, 0x54bdceu); SPILL(); f_4e4165(); if (g_unwind) return; RELOAD();
/* 54bdce: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_54bdd1: /* 54bdd1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54bdd4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54bdd5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54bdd6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54bddd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54bdde: mov esp, ebp */
  esp = ebp;
/* 54bde0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54bde1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_54bde4(void) {
  LOAD_REGS();
L_54bde4: /* 54bde4: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 54bde7: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 54bdec: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 54bdef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54bdf0: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 54bdf3: call 0x554df6 */
  esp -= 4; W32(esp, 0x54bdf8u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_54bdf8(); return;
}

void f_54bdf8(void) {
  LOAD_REGS();
L_54bdf8: /* 54bdf8: push 0x56f8a8 */
  { uint32_t v = 0x56f8a8u; esp -= 4; W32(esp, v); }
/* 54bdfd: push 0x5ad778 */
  { uint32_t v = 0x5ad778u; esp -= 4; W32(esp, v); }
/* 54be02: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54be07u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54be07: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 54be0a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54be0d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54be0f: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x54be14u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 54be14: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54be15: push 0x5ad780 */
  { uint32_t v = 0x5ad780u; esp -= 4; W32(esp, v); }
/* 54be1a: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54be1fu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54be1f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54be22: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54be24: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54be26: call 0x554df6 */
  esp -= 4; W32(esp, 0x54be2bu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_54be2b: guest_badaddr(0x54be2b); return;
}

void f_54be60(void) {
  LOAD_REGS();
L_54be60: /* 54be60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 54be61: mov ebp, esp */
  ebp = esp;
/* 54be63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 54be65: push 0x559900 */
  { uint32_t v = 0x559900u; esp -= 4; W32(esp, v); }
/* 54be6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 54be70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54be71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 54be78: sub esp, 0x810 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x810u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54be7e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54be7f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54be80: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54be81: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 54be84: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54be86: mov esi, ecx */
  esi = ecx;
/* 54be88: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 54be8b: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 54be90: lea eax, [ebp - 0x81c] */
  eax = (uint32_t)(ebp + 0xfffff7e4u);
/* 54be96: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54be97: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54be98: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 54be9b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 54bea2: call 0x4e230b */
  esp -= 4; W32(esp, 0x54bea7u); SPILL(); f_4e230b(); if (g_unwind) return; RELOAD();
/* 54bea7: mov edi, eax */
  edi = eax;
/* 54bea9: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54beac: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54beae: jne 0x54bec5 */
  if (!zf) goto L_54bec5;
L_54beb0: /* 54beb0: xor eax, eax */
  eax = 0;
/* 54beb2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54beb5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54bebc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54bebd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54bebe: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54bebf: mov esp, ebp */
  esp = ebp;
/* 54bec1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54bec2: ret 0xc */
  esp += 16; SPILL(); return;
L_54bec5: /* 54bec5: lea edx, [ebp - 0x81c] */
  edx = (uint32_t)(ebp + 0xfffff7e4u);
/* 54becb: push 0x5ad7e8 */
  { uint32_t v = 0x5ad7e8u; esp -= 4; W32(esp, v); }
/* 54bed0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54bed1: call 0x4e26df */
  esp -= 4; W32(esp, 0x54bed6u); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 54bed6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54bed9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54bedb: je 0x54bf84 */
  if (zf) goto L_54bf84;
L_54bee1: /* 54bee1: lea eax, [ebp - 0x81c] */
  eax = (uint32_t)(ebp + 0xfffff7e4u);
/* 54bee7: push 0x5ad7ec */
  { uint32_t v = 0x5ad7ecu; esp -= 4; W32(esp, v); }
/* 54beec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54beed: call 0x4e26df */
  esp -= 4; W32(esp, 0x54bef2u); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 54bef2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54bef5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54bef7: je 0x54bf84 */
  if (zf) goto L_54bf84;
L_54befd: /* 54befd: lea ecx, [ebp - 0x81c] */
  ecx = (uint32_t)(ebp + 0xfffff7e4u);
/* 54bf03: push 0x5a0da8 */
  { uint32_t v = 0x5a0da8u; esp -= 4; W32(esp, v); }
/* 54bf08: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54bf09: call 0x4e26df */
  esp -= 4; W32(esp, 0x54bf0eu); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 54bf0e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54bf11: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54bf13: je 0x54bf84 */
  if (zf) goto L_54bf84;
L_54bf15: /* 54bf15: lea edx, [ebp - 0x81c] */
  edx = (uint32_t)(ebp + 0xfffff7e4u);
/* 54bf1b: push 0x5ad7f8 */
  { uint32_t v = 0x5ad7f8u; esp -= 4; W32(esp, v); }
/* 54bf20: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54bf21: call 0x4e26df */
  esp -= 4; W32(esp, 0x54bf26u); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 54bf26: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54bf29: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54bf2b: je 0x54bf61 */
  if (zf) goto L_54bf61;
L_54bf2d: /* 54bf2d: lea eax, [ebp - 0x81c] */
  eax = (uint32_t)(ebp + 0xfffff7e4u);
/* 54bf33: push 0x5ad7fc */
  { uint32_t v = 0x5ad7fcu; esp -= 4; W32(esp, v); }
/* 54bf38: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54bf39: call 0x4e26df */
  esp -= 4; W32(esp, 0x54bf3eu); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 54bf3e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54bf41: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54bf43: je 0x54bf61 */
  if (zf) goto L_54bf61;
L_54bf45: /* 54bf45: lea ecx, [ebp - 0x81c] */
  ecx = (uint32_t)(ebp + 0xfffff7e4u);
/* 54bf4b: push 0x5a0e28 */
  { uint32_t v = 0x5a0e28u; esp -= 4; W32(esp, v); }
/* 54bf50: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54bf51: call 0x4e26df */
  esp -= 4; W32(esp, 0x54bf56u); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 54bf56: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54bf59: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54bf5b: jne 0x54beb0 */
  if (!zf) goto L_54beb0;
L_54bf61: /* 54bf61: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 54bf64: mov edx, dword ptr [esi + 0x6c] */
  edx = R32((uint32_t)(esi + 0x6cu));
/* 54bf67: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 54bf69: not edx */
  edx = ~edx;
/* 54bf6b: and ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 54bf6d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 54bf6f: mov eax, edi */
  eax = edi;
/* 54bf71: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54bf74: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54bf7b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54bf7c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54bf7d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54bf7e: mov esp, ebp */
  esp = ebp;
/* 54bf80: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54bf81: ret 0xc */
  esp += 16; SPILL(); return;
L_54bf84: /* 54bf84: mov ecx, dword ptr [esi + 0x6c] */
  ecx = R32((uint32_t)(esi + 0x6cu));
/* 54bf87: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 54bf8a: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 54bf8c: or edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 54bf8e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54bf91: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 54bf93: mov eax, edi */
  eax = edi;
/* 54bf95: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54bf96: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54bf97: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54bf9e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54bf9f: mov esp, ebp */
  esp = ebp;
/* 54bfa1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54bfa2: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_54bfa5(void) {
  LOAD_REGS();
L_54bfa5: /* 54bfa5: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 54bfa8: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 54bfad: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 54bfb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54bfb1: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 54bfb4: call 0x554df6 */
  esp -= 4; W32(esp, 0x54bfb9u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_54bfb9(); return;
}

void f_54bfb9(void) {
  LOAD_REGS();
L_54bfb9: /* 54bfb9: push 0x56f8e4 */
  { uint32_t v = 0x56f8e4u; esp -= 4; W32(esp, v); }
/* 54bfbe: push 0x5ad808 */
  { uint32_t v = 0x5ad808u; esp -= 4; W32(esp, v); }
/* 54bfc3: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54bfc8u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54bfc8: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 54bfcb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54bfce: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54bfd0: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x54bfd5u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 54bfd5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54bfd6: push 0x5ad810 */
  { uint32_t v = 0x5ad810u; esp -= 4; W32(esp, v); }
/* 54bfdb: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54bfe0u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54bfe0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54bfe3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54bfe5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54bfe7: call 0x554df6 */
  esp -= 4; W32(esp, 0x54bfecu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_54bfec: guest_badaddr(0x54bfec); return;
}

void f_54c060(void) {
  LOAD_REGS();
L_54c060: /* 54c060: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 54c061: mov ebp, esp */
  ebp = esp;
/* 54c063: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 54c065: push 0x559910 */
  { uint32_t v = 0x559910u; esp -= 4; W32(esp, v); }
/* 54c06a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 54c070: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54c071: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 54c078: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54c07b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54c07c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54c07d: mov esi, ecx */
  esi = ecx;
/* 54c07f: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 54c082: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54c083: mov dword ptr [esi + 0x38], 4 */
  W32((uint32_t)(esi + 0x38u), 0x4u);
/* 54c08a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 54c08c: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 54c08f: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 54c092: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 54c099: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x54c09cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54c09c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54c09f: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54c0a2: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 54c0a5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54c0a6: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* 54c0a9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54c0aa: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54c0b1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54c0b2: mov esp, ebp */
  esp = ebp;
/* 54c0b4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54c0b5: ret 8 */
  esp += 12; SPILL(); return;
}

void f_54c0b8(void) {
  LOAD_REGS();
L_54c0b8: /* 54c0b8: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 54c0bb: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 54c0c0: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 54c0c3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54c0c4: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 54c0c7: call 0x554df6 */
  esp -= 4; W32(esp, 0x54c0ccu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_54c0cc(); return;
}

void f_54c0cc(void) {
  LOAD_REGS();
L_54c0cc: /* 54c0cc: push 0x56f924 */
  { uint32_t v = 0x56f924u; esp -= 4; W32(esp, v); }
/* 54c0d1: push 0x5ad838 */
  { uint32_t v = 0x5ad838u; esp -= 4; W32(esp, v); }
/* 54c0d6: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54c0dbu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54c0db: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 54c0de: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54c0e1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54c0e3: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x54c0e8u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 54c0e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54c0e9: push 0x5ad840 */
  { uint32_t v = 0x5ad840u; esp -= 4; W32(esp, v); }
/* 54c0ee: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54c0f3u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54c0f3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54c0f6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54c0f8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54c0fa: call 0x554df6 */
  esp -= 4; W32(esp, 0x54c0ffu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_54c0ff: guest_badaddr(0x54c0ff); return;
}

void f_54c130(void) {
  LOAD_REGS();
L_54c130: /* 54c130: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 54c131: mov ebp, esp */
  ebp = esp;
/* 54c133: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 54c135: push 0x559920 */
  { uint32_t v = 0x559920u; esp -= 4; W32(esp, v); }
/* 54c13a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 54c140: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54c141: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 54c148: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54c14b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54c14c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54c14d: mov esi, ecx */
  esi = ecx;
/* 54c14f: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 54c152: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54c153: mov dword ptr [esi + 0x38], 4 */
  W32((uint32_t)(esi + 0x38u), 0x4u);
/* 54c15a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 54c15c: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 54c15f: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 54c162: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 54c169: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x54c16cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54c16c: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54c16f: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 54c172: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* 54c175: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 54c178: test eax, 0x4000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54c17d: je 0x54c183 */
  if (zf) goto L_54c183;
L_54c17f: /* 54c17f: test al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 54c181: jne 0x54c187 */
  if (!zf) goto L_54c187;
L_54c183: /* 54c183: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  }
/* 54c185: jns 0x54c18f */
  if (!sf) goto L_54c18f;
L_54c187: /* 54c187: or eax, 0x400000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 54c18c: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
L_54c18f: /* 54c18f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54c192: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54c193: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54c194: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54c19b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54c19c: mov esp, ebp */
  esp = ebp;
/* 54c19e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54c19f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_54c1a2(void) {
  LOAD_REGS();
L_54c1a2: /* 54c1a2: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 54c1a5: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 54c1aa: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 54c1ad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54c1ae: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 54c1b1: call 0x554df6 */
  esp -= 4; W32(esp, 0x54c1b6u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_54c1b6(); return;
}

void f_54c1b6(void) {
  LOAD_REGS();
L_54c1b6: /* 54c1b6: push 0x56f958 */
  { uint32_t v = 0x56f958u; esp -= 4; W32(esp, v); }
/* 54c1bb: push 0x5ad8ec */
  { uint32_t v = 0x5ad8ecu; esp -= 4; W32(esp, v); }
/* 54c1c0: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54c1c5u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54c1c5: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 54c1c8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54c1cb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54c1cd: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x54c1d2u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 54c1d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54c1d3: push 0x5ad8f4 */
  { uint32_t v = 0x5ad8f4u; esp -= 4; W32(esp, v); }
/* 54c1d8: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54c1ddu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54c1dd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54c1e0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54c1e2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54c1e4: call 0x554df6 */
  esp -= 4; W32(esp, 0x54c1e9u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_54c1e9: guest_badaddr(0x54c1e9); return;
}

void f_54c220(void) {
  LOAD_REGS();
L_54c220: /* 54c220: mov eax, dword ptr [0x5b211c] */
  eax = R32((uint32_t)(0x5b211cu));
/* 54c225: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54c226: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 54c227: mov ebp, ecx */
  ebp = ecx;
/* 54c229: xor ecx, ecx */
  ecx = 0;
/* 54c22b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54c22d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54c22e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54c22f: je 0x54c239 */
  if (zf) goto L_54c239;
L_54c231: /* 54c231: cmp dword ptr [0x5b2120], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x5b2120u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54c237: jne 0x54c2a7 */
  if (!zf) goto L_54c2a7;
L_54c239: /* 54c239: test dword ptr [ebp + 0x3c], 0x400000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x3cu))); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54c240: je 0x54c2a7 */
  if (zf) goto L_54c2a7;
L_54c242: /* 54c242: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 54c246: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54c248: je 0x54c2a7 */
  if (zf) goto L_54c2a7;
L_54c24a: /* 54c24a: cmp dword ptr [ebp + 0x34], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x34u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54c24d: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 54c251: jle 0x54c2c6 */
  if ((zf || sf != of)) goto L_54c2c6;
L_54c253: /* 54c253: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 54c257: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 54c25b: sub edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 54c25d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_54c260: /* 54c260: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 54c262: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54c264: je 0x54c28a */
  if (zf) goto L_54c28a;
L_54c266: /* 54c266: mov edx, dword ptr [0x5a0c94] */
  edx = R32((uint32_t)(0x5a0c94u));
/* 54c26c: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* 54c26f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54c270: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54c271: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54c272: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54c274: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54c275: mov eax, esp */
  eax = esp;
/* 54c277: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 54c27d: mov eax, dword ptr [ebx + 0x18] */
  eax = R32((uint32_t)(ebx + 0x18u));
/* 54c280: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54c281: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54c282: call 0x4e335a */
  esp -= 4; W32(esp, 0x54c287u); SPILL(); f_4e335a(); if (g_unwind) return; RELOAD();
/* 54c287: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_54c28a: /* 54c28a: mov dword ptr [edi + esi], eax */
  W32((uint32_t)(edi + esi), eax);
/* 54c28d: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 54c291: mov ecx, dword ptr [ebp + 0x34] */
  ecx = R32((uint32_t)(ebp + 0x34u));
/* 54c294: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 54c295: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 54c298: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54c29a: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 54c29e: jl 0x54c260 */
  if ((sf != of)) goto L_54c260;
L_54c2a0: /* 54c2a0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54c2a1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54c2a2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54c2a3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54c2a4: ret 0xc */
  esp += 16; SPILL(); return;
L_54c2a7: /* 54c2a7: cmp dword ptr [ebp + 0x34], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x34u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54c2aa: jle 0x54c2c6 */
  if ((zf || sf != of)) goto L_54c2c6;
L_54c2ac: /* 54c2ac: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 54c2b0: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 54c2b4: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
L_54c2b6: /* 54c2b6: mov esi, dword ptr [edx + eax] */
  esi = R32((uint32_t)(edx + eax));
/* 54c2b9: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 54c2bb: mov esi, dword ptr [ebp + 0x34] */
  esi = R32((uint32_t)(ebp + 0x34u));
/* 54c2be: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 54c2bf: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54c2c2: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54c2c4: jl 0x54c2b6 */
  if ((sf != of)) goto L_54c2b6;
L_54c2c6: /* 54c2c6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54c2c7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54c2c8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54c2c9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54c2ca: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_54c300(void) {
  LOAD_REGS();
L_54c300: /* 54c300: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 54c301: mov ebp, esp */
  ebp = esp;
/* 54c303: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 54c305: push 0x559930 */
  { uint32_t v = 0x559930u; esp -= 4; W32(esp, v); }
/* 54c30a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 54c310: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54c311: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 54c318: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54c31b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54c31c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54c31d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54c31e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 54c321: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 54c324: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54c326: mov esi, ecx */
  esi = ecx;
/* 54c328: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 54c32b: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 54c32e: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 54c335: je 0x54c34d */
  if (zf) goto L_54c34d;
L_54c337: /* 54c337: mov eax, dword ptr [esi + 0x6c] */
  eax = R32((uint32_t)(esi + 0x6cu));
/* 54c33a: test dword ptr [eax + 0x498], 0x200000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x498u))); uint32_t b = (uint32_t)(0x200000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54c344: je 0x54c34d */
  if (zf) goto L_54c34d;
L_54c346: /* 54c346: or dword ptr [esi + 0x3c], 0x4000008 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(0x4000008u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x3cu), r);
  }
L_54c34d: /* 54c34d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54c34e: mov ecx, esi */
  ecx = esi;
/* 54c350: call 0x4e12fd */
  esp -= 4; W32(esp, 0x54c355u); SPILL(); f_4e12fd(); if (g_unwind) return; RELOAD();
/* 54c355: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 54c357: add esi, 0x6c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 54c35a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54c35b: mov ecx, edi */
  ecx = edi;
/* 54c35d: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x54c360u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54c360: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54c363: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54c364: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54c365: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54c36c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54c36d: mov esp, ebp */
  esp = ebp;
/* 54c36f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54c370: ret 4 */
  esp += 8; SPILL(); return;
}

void f_54c373(void) {
  LOAD_REGS();
L_54c373: /* 54c373: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 54c376: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 54c37b: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 54c37e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54c37f: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 54c382: call 0x554df6 */
  esp -= 4; W32(esp, 0x54c387u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_54c387(); return;
}

void f_54c387(void) {
  LOAD_REGS();
L_54c387: /* 54c387: push 0x56f98c */
  { uint32_t v = 0x56f98cu; esp -= 4; W32(esp, v); }
/* 54c38c: push 0x5ad900 */
  { uint32_t v = 0x5ad900u; esp -= 4; W32(esp, v); }
/* 54c391: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54c396u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54c396: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 54c399: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54c39c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54c39e: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x54c3a3u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 54c3a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54c3a4: push 0x5ad908 */
  { uint32_t v = 0x5ad908u; esp -= 4; W32(esp, v); }
/* 54c3a9: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54c3aeu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54c3ae: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54c3b1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54c3b3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54c3b5: call 0x554df6 */
  esp -= 4; W32(esp, 0x54c3bau); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_54c3ba: guest_badaddr(0x54c3ba); return;
}

void f_54c3f0(void) {
  LOAD_REGS();
L_54c3f0: /* 54c3f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 54c3f1: mov ebp, esp */
  ebp = esp;
/* 54c3f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 54c3f5: push 0x559940 */
  { uint32_t v = 0x559940u; esp -= 4; W32(esp, v); }
/* 54c3fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 54c400: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54c401: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 54c408: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54c40b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54c40c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54c40d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54c40e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 54c411: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 54c414: mov esi, ecx */
  esi = ecx;
/* 54c416: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54c417: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 54c41a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 54c421: call 0x4e2c52 */
  esp -= 4; W32(esp, 0x54c426u); SPILL(); f_4e2c52(); if (g_unwind) return; RELOAD();
/* 54c426: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 54c428: add esi, 0x70 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 54c42b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54c42c: mov ecx, edi */
  ecx = edi;
/* 54c42e: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x54c431u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54c431: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54c434: jne 0x54c44d */
  if (!zf) goto L_54c44d;
L_54c436: /* 54c436: push 0x3e4 */
  { uint32_t v = 0x3e4u; esp -= 4; W32(esp, v); }
/* 54c43b: push 0x5ada98 */
  { uint32_t v = 0x5ada98u; esp -= 4; W32(esp, v); }
/* 54c440: push 0x5adaa4 */
  { uint32_t v = 0x5adaa4u; esp -= 4; W32(esp, v); }
/* 54c445: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x54c44au); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 54c44a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_54c44d: /* 54c44d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54c450: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54c451: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54c452: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54c459: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54c45a: mov esp, ebp */
  esp = ebp;
/* 54c45c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54c45d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_54c460(void) {
  LOAD_REGS();
L_54c460: /* 54c460: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 54c463: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 54c468: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 54c46b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54c46c: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 54c46f: call 0x554df6 */
  esp -= 4; W32(esp, 0x54c474u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_54c474(); return;
}

void f_54c474(void) {
  LOAD_REGS();
L_54c474: /* 54c474: push 0x56f9cc */
  { uint32_t v = 0x56f9ccu; esp -= 4; W32(esp, v); }
/* 54c479: push 0x5adab0 */
  { uint32_t v = 0x5adab0u; esp -= 4; W32(esp, v); }
/* 54c47e: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54c483u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54c483: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 54c486: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54c489: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54c48b: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x54c490u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 54c490: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54c491: push 0x5adab8 */
  { uint32_t v = 0x5adab8u; esp -= 4; W32(esp, v); }
/* 54c496: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54c49bu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54c49b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54c49e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54c4a0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54c4a2: call 0x554df6 */
  esp -= 4; W32(esp, 0x54c4a7u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_54c4a7: guest_badaddr(0x54c4a7); return;
}

void f_54c4e0(void) {
  LOAD_REGS();
L_54c4e0: /* 54c4e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 54c4e1: mov ebp, esp */
  ebp = esp;
/* 54c4e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 54c4e5: push 0x559950 */
  { uint32_t v = 0x559950u; esp -= 4; W32(esp, v); }
/* 54c4ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 54c4f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54c4f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 54c4f8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54c4fb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54c4fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54c4fd: mov esi, ecx */
  esi = ecx;
/* 54c4ff: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 54c502: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54c503: mov dword ptr [esi + 0x38], 4 */
  W32((uint32_t)(esi + 0x38u), 0x4u);
/* 54c50a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 54c50c: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 54c50f: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 54c512: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 54c519: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x54c51cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54c51c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54c51f: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54c522: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 54c525: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54c526: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* 54c529: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54c52a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54c531: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54c532: mov esp, ebp */
  esp = ebp;
/* 54c534: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54c535: ret 8 */
  esp += 12; SPILL(); return;
}

void f_54c538(void) {
  LOAD_REGS();
L_54c538: /* 54c538: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 54c53b: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 54c540: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 54c543: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54c544: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 54c547: call 0x554df6 */
  esp -= 4; W32(esp, 0x54c54cu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_54c54c(); return;
}

void f_54c54c(void) {
  LOAD_REGS();
L_54c54c: /* 54c54c: push 0x56fa0c */
  { uint32_t v = 0x56fa0cu; esp -= 4; W32(esp, v); }
/* 54c551: push 0x5adaec */
  { uint32_t v = 0x5adaecu; esp -= 4; W32(esp, v); }
/* 54c556: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54c55bu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54c55b: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 54c55e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54c561: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54c563: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x54c568u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 54c568: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54c569: push 0x5adaf4 */
  { uint32_t v = 0x5adaf4u; esp -= 4; W32(esp, v); }
/* 54c56e: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54c573u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54c573: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54c576: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54c578: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54c57a: call 0x554df6 */
  esp -= 4; W32(esp, 0x54c57fu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_54c57f: guest_badaddr(0x54c57f); return;
}

void f_54c5b0(void) {
  LOAD_REGS();
L_54c5b0: /* 54c5b0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 54c5b4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54c5b6: jne 0x54c5c0 */
  if (!zf) goto L_54c5c0;
L_54c5b8: /* 54c5b8: mov dword ptr [esp + 8], ecx */
  W32((uint32_t)(esp + 0x8u), ecx);
/* 54c5bc: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
L_54c5c0: /* 54c5c0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 54c5c4: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 54c5c6: sub eax, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 54c5c8: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 54c5ca: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 54c5cc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 54c5cd: ret 8 */
  esp += 12; SPILL(); return;
}

void f_54c5e0(void) {
  LOAD_REGS();
L_54c5e0: /* 54c5e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 54c5e1: mov ebp, esp */
  ebp = esp;
/* 54c5e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 54c5e5: push 0x559960 */
  { uint32_t v = 0x559960u; esp -= 4; W32(esp, v); }
/* 54c5ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 54c5f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54c5f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 54c5f8: sub esp, 0x810 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x810u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54c5fe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54c5ff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54c600: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54c601: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 54c604: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54c606: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 54c60b: lea eax, [ebp - 0x81c] */
  eax = (uint32_t)(ebp + 0xfffff7e4u);
/* 54c611: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 54c614: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 54c617: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54c618: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54c619: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 54c620: call 0x4e230b */
  esp -= 4; W32(esp, 0x54c625u); SPILL(); f_4e230b(); if (g_unwind) return; RELOAD();
/* 54c625: mov esi, eax */
  esi = eax;
/* 54c627: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54c62a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54c62c: jne 0x54c641 */
  if (!zf) goto L_54c641;
L_54c62e: /* 54c62e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54c631: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54c638: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54c639: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54c63a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54c63b: mov esp, ebp */
  esp = ebp;
/* 54c63d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54c63e: ret 0xc */
  esp += 16; SPILL(); return;
L_54c641: /* 54c641: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 54c643: lea edx, [ebp - 0x81c] */
  edx = (uint32_t)(ebp + 0xfffff7e4u);
/* 54c649: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54c64a: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 54c64d: call 0x4e36a7 */
  esp -= 4; W32(esp, 0x54c652u); SPILL(); f_4e36a7(); if (g_unwind) return; RELOAD();
/* 54c652: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 54c654: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 54c657: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 54c659: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54c65c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54c65d: mov eax, esi */
  eax = esi;
/* 54c65f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54c660: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54c667: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54c668: mov esp, ebp */
  esp = ebp;
/* 54c66a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54c66b: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_54c66e(void) {
  LOAD_REGS();
L_54c66e: /* 54c66e: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 54c671: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 54c676: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 54c679: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54c67a: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 54c67d: call 0x554df6 */
  esp -= 4; W32(esp, 0x54c682u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_54c682(); return;
}

void f_54c682(void) {
  LOAD_REGS();
L_54c682: /* 54c682: push 0x56fa3c */
  { uint32_t v = 0x56fa3cu; esp -= 4; W32(esp, v); }
/* 54c687: push 0x5adb40 */
  { uint32_t v = 0x5adb40u; esp -= 4; W32(esp, v); }
/* 54c68c: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54c691u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54c691: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 54c694: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54c697: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54c699: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x54c69eu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 54c69e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54c69f: push 0x5adb48 */
  { uint32_t v = 0x5adb48u; esp -= 4; W32(esp, v); }
/* 54c6a4: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54c6a9u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54c6a9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54c6ac: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54c6ae: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54c6b0: call 0x554df6 */
  esp -= 4; W32(esp, 0x54c6b5u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_54c6b5: guest_badaddr(0x54c6b5); return;
}

void f_54c700(void) {
  LOAD_REGS();
L_54c700: /* 54c700: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 54c701: mov ebp, esp */
  ebp = esp;
/* 54c703: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 54c705: push 0x559970 */
  { uint32_t v = 0x559970u; esp -= 4; W32(esp, v); }
/* 54c70a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 54c710: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54c711: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 54c718: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54c71b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54c71c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54c71d: mov esi, ecx */
  esi = ecx;
/* 54c71f: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 54c722: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54c723: mov dword ptr [esi + 0x38], 0xc */
  W32((uint32_t)(esi + 0x38u), 0xcu);
/* 54c72a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 54c72c: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 54c72f: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 54c732: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 54c739: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x54c73cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54c73c: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54c73f: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 54c742: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* 54c745: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 54c748: test ah, 0x10 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 54c74b: jne 0x54c755 */
  if (!zf) goto L_54c755;
L_54c74d: /* 54c74d: or eax, 0x400000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 54c752: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
L_54c755: /* 54c755: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54c758: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54c759: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54c75a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54c761: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54c762: mov esp, ebp */
  esp = ebp;
/* 54c764: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54c765: ret 8 */
  esp += 12; SPILL(); return;
}

void f_54c768(void) {
  LOAD_REGS();
L_54c768: /* 54c768: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 54c76b: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 54c770: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 54c773: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54c774: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 54c777: call 0x554df6 */
  esp -= 4; W32(esp, 0x54c77cu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_54c77c(); return;
}

void f_54c77c(void) {
  LOAD_REGS();
L_54c77c: /* 54c77c: push 0x56fa7c */
  { uint32_t v = 0x56fa7cu; esp -= 4; W32(esp, v); }
/* 54c781: push 0x5adb70 */
  { uint32_t v = 0x5adb70u; esp -= 4; W32(esp, v); }
/* 54c786: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54c78bu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54c78b: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 54c78e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54c791: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54c793: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x54c798u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 54c798: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54c799: push 0x5adb78 */
  { uint32_t v = 0x5adb78u; esp -= 4; W32(esp, v); }
/* 54c79e: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54c7a3u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54c7a3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54c7a6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54c7a8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54c7aa: call 0x554df6 */
  esp -= 4; W32(esp, 0x54c7afu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_54c7af: guest_badaddr(0x54c7af); return;
}

void f_54c7e0(void) {
  LOAD_REGS();
L_54c7e0: /* 54c7e0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 54c7e4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54c7e6: je 0x54c7fa */
  if (zf) goto L_54c7fa;
L_54c7e8: /* 54c7e8: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 54c7eb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54c7ed: je 0x54c7f3 */
  if (zf) goto L_54c7f3;
L_54c7ef: /* 54c7ef: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 54c7f1: jmp 0x54c7ff */
  goto L_54c7ff;
L_54c7f3: /* 54c7f3: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
/* 54c7f8: jmp 0x54c7ff */
  goto L_54c7ff;
L_54c7fa: /* 54c7fa: mov eax, 0x6a46e4 */
  eax = 0x6a46e4u;
L_54c7ff: /* 54c7ff: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 54c803: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 54c806: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54c808: je 0x54c81e */
  if (zf) goto L_54c81e;
L_54c80a: /* 54c80a: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 54c80c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54c80d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54c80e: call 0x4e26df */
  esp -= 4; W32(esp, 0x54c813u); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 54c813: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54c816: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 54c818: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 54c81a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 54c81b: ret 8 */
  esp += 12; SPILL(); return;
L_54c81e: /* 54c81e: mov ecx, 0x5ed66c */
  ecx = 0x5ed66cu;
/* 54c823: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54c824: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54c825: call 0x4e26df */
  esp -= 4; W32(esp, 0x54c82au); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 54c82a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54c82d: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 54c82f: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 54c831: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 54c832: ret 8 */
  esp += 12; SPILL(); return;
}

void f_54c860(void) {
  LOAD_REGS();
L_54c860: /* 54c860: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 54c861: mov ebp, esp */
  ebp = esp;
/* 54c863: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 54c865: push 0x559980 */
  { uint32_t v = 0x559980u; esp -= 4; W32(esp, v); }
/* 54c86a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 54c870: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54c871: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 54c878: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54c87b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 54c87e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54c87f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54c880: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54c881: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 54c884: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54c885: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 54c888: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 54c88f: call 0x4e12fd */
  esp -= 4; W32(esp, 0x54c894u); SPILL(); f_4e12fd(); if (g_unwind) return; RELOAD();
/* 54c894: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54c897: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54c898: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54c899: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54c8a0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54c8a1: mov esp, ebp */
  esp = ebp;
/* 54c8a3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54c8a4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_54c8a7(void) {
  LOAD_REGS();
L_54c8a7: /* 54c8a7: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 54c8aa: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 54c8af: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 54c8b2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54c8b3: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 54c8b6: call 0x554df6 */
  esp -= 4; W32(esp, 0x54c8bbu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_54c8bb(); return;
}

void f_54c8bb(void) {
  LOAD_REGS();
L_54c8bb: /* 54c8bb: push 0x56faac */
  { uint32_t v = 0x56faacu; esp -= 4; W32(esp, v); }
/* 54c8c0: push 0x5adb84 */
  { uint32_t v = 0x5adb84u; esp -= 4; W32(esp, v); }
/* 54c8c5: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54c8cau); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54c8ca: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 54c8cd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54c8d0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54c8d2: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x54c8d7u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 54c8d7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54c8d8: push 0x5adb8c */
  { uint32_t v = 0x5adb8cu; esp -= 4; W32(esp, v); }
/* 54c8dd: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54c8e2u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54c8e2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54c8e5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54c8e7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54c8e9: call 0x554df6 */
  esp -= 4; W32(esp, 0x54c8eeu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_54c8ee: guest_badaddr(0x54c8ee); return;
}

void f_54c920(void) {
  LOAD_REGS();
L_54c920: /* 54c920: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 54c921: mov ebp, esp */
  ebp = esp;
/* 54c923: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 54c925: push 0x559990 */
  { uint32_t v = 0x559990u; esp -= 4; W32(esp, v); }
/* 54c92a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 54c930: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54c931: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 54c938: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54c93b: mov al, byte ptr [ebp + 0x14] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x14u))) & 0xffu);
/* 54c93e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54c93f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54c940: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 54c942: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 54c945: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54c946: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 54c949: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 54c94c: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 54c94f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 54c956: jne 0x54c985 */
  if (!zf) goto L_54c985;
L_54c958: /* 54c958: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54c95a: je 0x54c960 */
  if (zf) goto L_54c960;
L_54c95c: /* 54c95c: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 54c95e: jmp 0x54c965 */
  goto L_54c965;
L_54c960: /* 54c960: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_54c965: /* 54c965: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54c966: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 54c969: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54c96a: call 0x4e27d9 */
  esp -= 4; W32(esp, 0x54c96fu); SPILL(); f_4e27d9(); if (g_unwind) return; RELOAD();
/* 54c96f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54c972: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54c975: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54c97c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54c97d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54c97e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54c97f: mov esp, ebp */
  esp = ebp;
/* 54c981: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54c982: ret 0x10 */
  esp += 20; SPILL(); return;
L_54c985: /* 54c985: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54c987: je 0x54c98d */
  if (zf) goto L_54c98d;
L_54c989: /* 54c989: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 54c98b: jmp 0x54c992 */
  goto L_54c992;
L_54c98d: /* 54c98d: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_54c992: /* 54c992: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 54c995: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54c996: push 0x5adbbc */
  { uint32_t v = 0x5adbbcu; esp -= 4; W32(esp, v); }
/* 54c99b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54c99c: call 0x4e4183 */
  esp -= 4; W32(esp, 0x54c9a1u); SPILL(); f_4e4183(); if (g_unwind) return; RELOAD();
/* 54c9a1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54c9a4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54c9a7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54c9a8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54c9a9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54c9b0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54c9b1: mov esp, ebp */
  esp = ebp;
/* 54c9b3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54c9b4: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_54c9b7(void) {
  LOAD_REGS();
L_54c9b7: /* 54c9b7: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 54c9ba: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 54c9bf: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 54c9c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54c9c3: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 54c9c6: call 0x554df6 */
  esp -= 4; W32(esp, 0x54c9cbu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_54c9cb(); return;
}

void f_54c9cb(void) {
  LOAD_REGS();
L_54c9cb: /* 54c9cb: push 0x56fae8 */
  { uint32_t v = 0x56fae8u; esp -= 4; W32(esp, v); }
/* 54c9d0: push 0x5adbc8 */
  { uint32_t v = 0x5adbc8u; esp -= 4; W32(esp, v); }
/* 54c9d5: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54c9dau); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54c9da: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 54c9dd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54c9e0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54c9e2: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x54c9e7u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 54c9e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54c9e8: push 0x5adbd0 */
  { uint32_t v = 0x5adbd0u; esp -= 4; W32(esp, v); }
/* 54c9ed: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54c9f2u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54c9f2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54c9f5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54c9f7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54c9f9: call 0x554df6 */
  esp -= 4; W32(esp, 0x54c9feu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_54c9fe: guest_badaddr(0x54c9fe); return;
}

void f_54ca40(void) {
  LOAD_REGS();
L_54ca40: /* 54ca40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 54ca41: mov ebp, esp */
  ebp = esp;
/* 54ca43: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 54ca45: push 0x5599a0 */
  { uint32_t v = 0x5599a0u; esp -= 4; W32(esp, v); }
/* 54ca4a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 54ca50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54ca51: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 54ca58: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54ca59: mov eax, 0x200c */
  eax = 0x200cu;
/* 54ca5e: call 0x554f80 */
  esp -= 4; W32(esp, 0x54ca63u); SPILL(); f_554f80(); if (g_unwind) return; RELOAD();
/* 54ca63: test byte ptr [ebp + 0x10], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x10u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 54ca67: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54ca68: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54ca69: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54ca6a: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 54ca6d: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 54ca70: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 54ca77: jne 0x54ca9a */
  if (!zf) goto L_54ca9a;
L_54ca79: /* 54ca79: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 54ca7c: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 54ca7f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54ca80: call 0x4e3e5e */
  esp -= 4; W32(esp, 0x54ca85u); SPILL(); f_4e3e5e(); if (g_unwind) return; RELOAD();
/* 54ca85: mov eax, esi */
  eax = esi;
/* 54ca87: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54ca8a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54ca91: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54ca92: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54ca93: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54ca94: mov esp, ebp */
  esp = ebp;
/* 54ca96: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54ca97: ret 0xc */
  esp += 16; SPILL(); return;
L_54ca9a: /* 54ca9a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 54ca9d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54ca9f: push 0x1000 */
  { uint32_t v = 0x1000u; esp -= 4; W32(esp, v); }
/* 54caa4: lea eax, [ebp - 0x201c] */
  eax = (uint32_t)(ebp + 0xffffdfe4u);
/* 54caaa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54caab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54caac: call 0x4e230b */
  esp -= 4; W32(esp, 0x54cab1u); SPILL(); f_4e230b(); if (g_unwind) return; RELOAD();
/* 54cab1: mov esi, eax */
  esi = eax;
/* 54cab3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54cab6: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54cab8: jne 0x54cacd */
  if (!zf) goto L_54cacd;
L_54caba: /* 54caba: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54cabd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54cac4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54cac5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54cac6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54cac7: mov esp, ebp */
  esp = ebp;
/* 54cac9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54caca: ret 0xc */
  esp += 16; SPILL(); return;
L_54cacd: /* 54cacd: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 54cad0: lea edx, [ebp - 0x201c] */
  edx = (uint32_t)(ebp + 0xffffdfe4u);
/* 54cad6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54cad7: call 0x4e3e5e */
  esp -= 4; W32(esp, 0x54cadcu); SPILL(); f_4e3e5e(); if (g_unwind) return; RELOAD();
/* 54cadc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54cadf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54cae0: mov eax, esi */
  eax = esi;
/* 54cae2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54cae3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54caea: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54caeb: mov esp, ebp */
  esp = ebp;
/* 54caed: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54caee: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_54caf1(void) {
  LOAD_REGS();
L_54caf1: /* 54caf1: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 54caf4: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 54caf9: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 54cafc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54cafd: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 54cb00: call 0x554df6 */
  esp -= 4; W32(esp, 0x54cb05u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_54cb05(); return;
}

void f_54cb05(void) {
  LOAD_REGS();
L_54cb05: /* 54cb05: push 0x56fb30 */
  { uint32_t v = 0x56fb30u; esp -= 4; W32(esp, v); }
/* 54cb0a: push 0x5adbdc */
  { uint32_t v = 0x5adbdcu; esp -= 4; W32(esp, v); }
/* 54cb0f: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54cb14u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54cb14: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 54cb17: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54cb1a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54cb1c: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x54cb21u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 54cb21: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54cb22: push 0x5adbe4 */
  { uint32_t v = 0x5adbe4u; esp -= 4; W32(esp, v); }
/* 54cb27: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54cb2cu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54cb2c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54cb2f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54cb31: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54cb33: call 0x554df6 */
  esp -= 4; W32(esp, 0x54cb38u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_54cb38: guest_badaddr(0x54cb38); return;
}

void f_54cb80(void) {
  LOAD_REGS();
L_54cb80: /* 54cb80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 54cb81: mov ebp, esp */
  ebp = esp;
/* 54cb83: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 54cb85: push 0x5599b0 */
  { uint32_t v = 0x5599b0u; esp -= 4; W32(esp, v); }
/* 54cb8a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 54cb90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54cb91: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 54cb98: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54cb9b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54cb9c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 54cb9f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54cba0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54cba1: mov esi, ecx */
  esi = ecx;
/* 54cba3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 54cba6: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 54cba9: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 54cbb0: xor edi, edi */
  edi = 0;
L_54cbb2: /* 54cbb2: cmp edi, dword ptr [esi + 0x70] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x70u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54cbb5: jge 0x54cc16 */
  if ((sf == of)) goto L_54cc16;
L_54cbb7: /* 54cbb7: mov edx, dword ptr [esi + 0x38] */
  edx = R32((uint32_t)(esi + 0x38u));
/* 54cbba: imul edx, dword ptr [esi + 0x34] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(esi + 0x34u)));
  edx = (uint32_t)r;
  }
/* 54cbbe: mov ecx, dword ptr [esi + 0x6c] */
  ecx = R32((uint32_t)(esi + 0x6cu));
/* 54cbc1: imul edx, edi */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(edi);
  edx = (uint32_t)r;
  }
/* 54cbc4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 54cbc6: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 54cbc8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54cbc9: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0x54cbccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54cbcc: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 54cbcd: jmp 0x54cbb2 */
  goto L_54cbb2;
L_54cc16: /* 54cc16: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54cc19: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54cc1a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54cc1b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54cc22: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54cc23: mov esp, ebp */
  esp = ebp;
/* 54cc25: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54cc26: ret 4 */
  esp += 8; SPILL(); return;
}

void f_54cbcf(void) {
  LOAD_REGS();
L_54cbcf: /* 54cbcf: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 54cbd2: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 54cbd7: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 54cbda: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54cbdb: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 54cbde: call 0x554df6 */
  esp -= 4; W32(esp, 0x54cbe3u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_54cbe3(); return;
}

void f_54cbe3(void) {
  LOAD_REGS();
L_54cbe3: /* 54cbe3: push 0x56fb70 */
  { uint32_t v = 0x56fb70u; esp -= 4; W32(esp, v); }
/* 54cbe8: push 0x5adc0c */
  { uint32_t v = 0x5adc0cu; esp -= 4; W32(esp, v); }
/* 54cbed: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54cbf2u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54cbf2: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 54cbf5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54cbf8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54cbfa: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x54cbffu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 54cbff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54cc00: push 0x5adc14 */
  { uint32_t v = 0x5adc14u; esp -= 4; W32(esp, v); }
/* 54cc05: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54cc0au); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54cc0a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54cc0d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54cc0f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54cc11: call 0x554df6 */
  esp -= 4; W32(esp, 0x54cc16u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
/* 54cc16: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54cc19: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54cc1a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54cc1b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54cc22: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54cc23: mov esp, ebp */
  esp = ebp;
/* 54cc25: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54cc26: ret 4 */
  esp += 8; SPILL(); return;
}

void f_54cc60(void) {
  LOAD_REGS();
L_54cc60: /* 54cc60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 54cc61: mov ebp, esp */
  ebp = esp;
/* 54cc63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 54cc65: push 0x5599c0 */
  { uint32_t v = 0x5599c0u; esp -= 4; W32(esp, v); }
/* 54cc6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 54cc70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54cc71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 54cc78: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54cc7b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54cc7c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54cc7d: mov esi, ecx */
  esi = ecx;
/* 54cc7f: mov ecx, dword ptr [esi + 0x6c] */
  ecx = R32((uint32_t)(esi + 0x6cu));
/* 54cc82: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54cc83: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 54cc86: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 54cc88: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 54cc8b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54cc8c: mov ecx, edi */
  ecx = edi;
/* 54cc8e: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 54cc91: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 54cc98: call dword ptr [eax + 0x10] */
  { uint32_t t = R32((uint32_t)(eax + 0x10u)); esp -= 4; W32(esp, 0x54cc9bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54cc9b: mov ecx, dword ptr [esi + 0x6c] */
  ecx = R32((uint32_t)(esi + 0x6cu));
/* 54cc9e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 54cca0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54cca2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54cca3: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0x54cca9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54cca9: mov eax, dword ptr [esi + 0x6c] */
  eax = R32((uint32_t)(esi + 0x6cu));
/* 54ccac: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* 54ccaf: imul ecx, dword ptr [esi + 0x70] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(esi + 0x70u)));
  ecx = (uint32_t)r;
  }
/* 54ccb3: mov dword ptr [esi + 0x38], ecx */
  W32((uint32_t)(esi + 0x38u), ecx);
/* 54ccb6: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 54ccb9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 54ccbb: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x54ccbeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54ccbe: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54ccc1: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 54ccc4: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* 54ccc7: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 54ccca: test ah, 0x10 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 54cccd: jne 0x54cce0 */
  if (!zf) goto L_54cce0;
L_54cccf: /* 54cccf: mov ecx, dword ptr [esi + 0x6c] */
  ecx = R32((uint32_t)(esi + 0x6cu));
/* 54ccd2: mov edx, dword ptr [ecx + 0x3c] */
  edx = R32((uint32_t)(ecx + 0x3cu));
/* 54ccd5: and edx, 0x400000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 54ccdb: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 54ccdd: mov dword ptr [esi + 0x3c], edx */
  W32((uint32_t)(esi + 0x3cu), edx);
L_54cce0: /* 54cce0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54cce3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54cce4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54cce5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54ccec: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54cced: mov esp, ebp */
  esp = ebp;
/* 54ccef: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54ccf0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_54ccf3(void) {
  LOAD_REGS();
L_54ccf3: /* 54ccf3: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 54ccf6: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 54ccfb: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 54ccfe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54ccff: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 54cd02: call 0x554df6 */
  esp -= 4; W32(esp, 0x54cd07u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_54cd07(); return;
}

void f_54cd07(void) {
  LOAD_REGS();
L_54cd07: /* 54cd07: push 0x56fbcc */
  { uint32_t v = 0x56fbccu; esp -= 4; W32(esp, v); }
/* 54cd0c: push 0x5adc20 */
  { uint32_t v = 0x5adc20u; esp -= 4; W32(esp, v); }
/* 54cd11: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54cd16u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54cd16: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 54cd19: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54cd1c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54cd1e: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x54cd23u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 54cd23: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54cd24: push 0x5adc28 */
  { uint32_t v = 0x5adc28u; esp -= 4; W32(esp, v); }
/* 54cd29: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54cd2eu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54cd2e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54cd31: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54cd33: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54cd35: call 0x554df6 */
  esp -= 4; W32(esp, 0x54cd3au); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_54cd3a: guest_badaddr(0x54cd3a); return;
}

void f_54cd80(void) {
  LOAD_REGS();
L_54cd80: /* 54cd80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 54cd81: mov ebp, esp */
  ebp = esp;
/* 54cd83: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 54cd85: push 0x5599d0 */
  { uint32_t v = 0x5599d0u; esp -= 4; W32(esp, v); }
/* 54cd8a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 54cd90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54cd91: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 54cd98: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54cd9b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54cd9c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54cd9d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54cd9e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 54cda1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 54cda4: mov esi, ecx */
  esi = ecx;
/* 54cda6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54cda7: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 54cdaa: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 54cdb1: call 0x4e12fd */
  esp -= 4; W32(esp, 0x54cdb6u); SPILL(); f_4e12fd(); if (g_unwind) return; RELOAD();
/* 54cdb6: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 54cdb8: lea ecx, [esi + 0x6c] */
  ecx = (uint32_t)(esi + 0x6cu);
/* 54cdbb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54cdbc: mov ecx, edi */
  ecx = edi;
/* 54cdbe: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x54cdc1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54cdc1: add esi, 0x70 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 54cdc4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54cdc5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54cdc6: call 0x4e4160 */
  esp -= 4; W32(esp, 0x54cdcbu); SPILL(); f_4e4160(); if (g_unwind) return; RELOAD();
/* 54cdcb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54cdce: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54cdd1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54cdd2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54cdd3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54cdda: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54cddb: mov esp, ebp */
  esp = ebp;
/* 54cddd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54cdde: ret 4 */
  esp += 8; SPILL(); return;
}

void f_54cde1(void) {
  LOAD_REGS();
L_54cde1: /* 54cde1: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 54cde4: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 54cde9: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 54cdec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54cded: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 54cdf0: call 0x554df6 */
  esp -= 4; W32(esp, 0x54cdf5u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_54cdf5(); return;
}

void f_54cdf5(void) {
  LOAD_REGS();
L_54cdf5: /* 54cdf5: push 0x56fc0c */
  { uint32_t v = 0x56fc0cu; esp -= 4; W32(esp, v); }
/* 54cdfa: push 0x5adc34 */
  { uint32_t v = 0x5adc34u; esp -= 4; W32(esp, v); }
/* 54cdff: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54ce04u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54ce04: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 54ce07: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54ce0a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54ce0c: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x54ce11u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 54ce11: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54ce12: push 0x5adc3c */
  { uint32_t v = 0x5adc3cu; esp -= 4; W32(esp, v); }
/* 54ce17: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54ce1cu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54ce1c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54ce1f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54ce21: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54ce23: call 0x554df6 */
  esp -= 4; W32(esp, 0x54ce28u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_54ce28: guest_badaddr(0x54ce28); return;
}

void f_54ce60(void) {
  LOAD_REGS();
L_54ce60: /* 54ce60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 54ce61: mov ebp, esp */
  ebp = esp;
/* 54ce63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 54ce65: push 0x5599e0 */
  { uint32_t v = 0x5599e0u; esp -= 4; W32(esp, v); }
/* 54ce6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 54ce70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54ce71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 54ce78: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54ce7b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54ce7c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54ce7d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54ce7e: mov ebx, ecx */
  ebx = ecx;
/* 54ce80: xor eax, eax */
  eax = 0;
/* 54ce82: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 54ce85: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 54ce88: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
L_54ce8b: /* 54ce8b: cmp eax, dword ptr [ebx + 0x34] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54ce8e: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 54ce91: jge 0x54cf15 */
  if ((sf == of)) goto L_54cf15;
L_54ce97: /* 54ce97: mov esi, dword ptr [ebx + 0x38] */
  esi = R32((uint32_t)(ebx + 0x38u));
/* 54ce9a: imul esi, eax */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(eax);
  esi = (uint32_t)r;
  }
/* 54ce9d: add esi, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 54cea0: xor edi, edi */
  edi = 0;
L_54cea2: /* 54cea2: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54cea5: jge 0x54cf0c */
  if ((sf == of)) goto L_54cf0c;
L_54cea7: /* 54cea7: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 54cea9: mov ecx, dword ptr [ebx + 0x6c] */
  ecx = R32((uint32_t)(ebx + 0x6cu));
/* 54ceac: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 54ceaf: mov eax, dword ptr [ecx + 0x38] */
  eax = R32((uint32_t)(ecx + 0x38u));
/* 54ceb2: imul eax, dword ptr [ecx + 0x34] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ecx + 0x34u)));
  eax = (uint32_t)r;
  }
/* 54ceb6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 54ceb8: imul eax, edi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edi);
  eax = (uint32_t)r;
  }
/* 54cebb: add eax, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54cebe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54cebf: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0x54cec2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54cec2: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 54cec3: jmp 0x54cea2 */
  goto L_54cea2;
L_54cf0c: /* 54cf0c: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 54cf0f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 54cf10: jmp 0x54ce8b */
  goto L_54ce8b;
L_54cf15: /* 54cf15: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54cf18: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54cf19: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54cf1a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54cf21: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54cf22: mov esp, ebp */
  esp = ebp;
/* 54cf24: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54cf25: ret 4 */
  esp += 8; SPILL(); return;
}

void f_54cec5(void) {
  LOAD_REGS();
L_54cec5: /* 54cec5: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 54cec8: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 54cecd: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 54ced0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54ced1: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 54ced4: call 0x554df6 */
  esp -= 4; W32(esp, 0x54ced9u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_54ced9(); return;
}

void f_54ced9(void) {
  LOAD_REGS();
  goto L_54ced9;
L_54ce8b: /* 54ce8b: cmp eax, dword ptr [ebx + 0x34] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54ce8e: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 54ce91: jge 0x54cf15 */
  if ((sf == of)) goto L_54cf15;
L_54ce97: /* 54ce97: mov esi, dword ptr [ebx + 0x38] */
  esi = R32((uint32_t)(ebx + 0x38u));
/* 54ce9a: imul esi, eax */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(eax);
  esi = (uint32_t)r;
  }
/* 54ce9d: add esi, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 54cea0: xor edi, edi */
  edi = 0;
L_54cea2: /* 54cea2: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54cea5: jge 0x54cf0c */
  if ((sf == of)) goto L_54cf0c;
L_54cea7: /* 54cea7: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 54cea9: mov ecx, dword ptr [ebx + 0x6c] */
  ecx = R32((uint32_t)(ebx + 0x6cu));
/* 54ceac: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 54ceaf: mov eax, dword ptr [ecx + 0x38] */
  eax = R32((uint32_t)(ecx + 0x38u));
/* 54ceb2: imul eax, dword ptr [ecx + 0x34] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ecx + 0x34u)));
  eax = (uint32_t)r;
  }
/* 54ceb6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 54ceb8: imul eax, edi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edi);
  eax = (uint32_t)r;
  }
/* 54cebb: add eax, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54cebe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54cebf: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0x54cec2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54cec2: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 54cec3: jmp 0x54cea2 */
  goto L_54cea2;
L_54ced9: /* 54ced9: push 0x56fc58 */
  { uint32_t v = 0x56fc58u; esp -= 4; W32(esp, v); }
/* 54cede: push 0x5add10 */
  { uint32_t v = 0x5add10u; esp -= 4; W32(esp, v); }
/* 54cee3: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54cee8u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54cee8: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 54ceeb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54ceee: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54cef0: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x54cef5u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 54cef5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54cef6: push 0x5add18 */
  { uint32_t v = 0x5add18u; esp -= 4; W32(esp, v); }
/* 54cefb: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54cf00u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54cf00: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54cf03: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54cf05: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54cf07: call 0x554df6 */
  esp -= 4; W32(esp, 0x54cf0cu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_54cf0c: /* 54cf0c: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 54cf0f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 54cf10: jmp 0x54ce8b */
  goto L_54ce8b;
L_54cf15: /* 54cf15: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54cf18: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54cf19: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54cf1a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54cf21: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54cf22: mov esp, ebp */
  esp = ebp;
/* 54cf24: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54cf25: ret 4 */
  esp += 8; SPILL(); return;
}

void f_54cf70(void) {
  LOAD_REGS();
L_54cf70: /* 54cf70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 54cf71: mov ebp, esp */
  ebp = esp;
/* 54cf73: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 54cf75: push 0x5599f0 */
  { uint32_t v = 0x5599f0u; esp -= 4; W32(esp, v); }
/* 54cf7a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 54cf80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54cf81: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 54cf88: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54cf8b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54cf8c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54cf8d: mov esi, ecx */
  esi = ecx;
/* 54cf8f: mov ecx, dword ptr [esi + 0x6c] */
  ecx = R32((uint32_t)(esi + 0x6cu));
/* 54cf92: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54cf93: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 54cf96: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 54cf98: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 54cf9b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54cf9c: mov ecx, edi */
  ecx = edi;
/* 54cf9e: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 54cfa1: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 54cfa8: call dword ptr [eax + 0x10] */
  { uint32_t t = R32((uint32_t)(eax + 0x10u)); esp -= 4; W32(esp, 0x54cfabu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54cfab: mov ecx, dword ptr [esi + 0x6c] */
  ecx = R32((uint32_t)(esi + 0x6cu));
/* 54cfae: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 54cfb0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54cfb2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54cfb3: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0x54cfb9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54cfb9: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 54cfbc: mov dword ptr [esi + 0x38], 0xc */
  W32((uint32_t)(esi + 0x38u), 0xcu);
/* 54cfc3: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 54cfc5: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x54cfc8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54cfc8: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54cfcb: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 54cfce: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* 54cfd1: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 54cfd4: test ah, 0x10 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 54cfd7: jne 0x54cfe1 */
  if (!zf) goto L_54cfe1;
L_54cfd9: /* 54cfd9: or eax, 0x400000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 54cfde: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
L_54cfe1: /* 54cfe1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54cfe4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54cfe5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54cfe6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54cfed: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54cfee: mov esp, ebp */
  esp = ebp;
/* 54cff0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54cff1: ret 8 */
  esp += 12; SPILL(); return;
}

void f_54cff4(void) {
  LOAD_REGS();
L_54cff4: /* 54cff4: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 54cff7: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 54cffc: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 54cfff: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54d000: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 54d003: call 0x554df6 */
  esp -= 4; W32(esp, 0x54d008u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_54d008(); return;
}

void f_54d008(void) {
  LOAD_REGS();
L_54d008: /* 54d008: push 0x56fca8 */
  { uint32_t v = 0x56fca8u; esp -= 4; W32(esp, v); }
/* 54d00d: push 0x5add24 */
  { uint32_t v = 0x5add24u; esp -= 4; W32(esp, v); }
/* 54d012: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54d017u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54d017: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 54d01a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54d01d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54d01f: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x54d024u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 54d024: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54d025: push 0x5add2c */
  { uint32_t v = 0x5add2cu; esp -= 4; W32(esp, v); }
/* 54d02a: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54d02fu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54d02f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54d032: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54d034: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54d036: call 0x554df6 */
  esp -= 4; W32(esp, 0x54d03bu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_54d03b: guest_badaddr(0x54d03b); return;
}

void f_54d080(void) {
  LOAD_REGS();
L_54d080: /* 54d080: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 54d081: mov ebp, esp */
  ebp = esp;
/* 54d083: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 54d085: push 0x559a00 */
  { uint32_t v = 0x559a00u; esp -= 4; W32(esp, v); }
/* 54d08a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 54d090: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54d091: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 54d098: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54d09b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54d09c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54d09d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54d09e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 54d0a1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 54d0a4: mov esi, ecx */
  esi = ecx;
/* 54d0a6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54d0a7: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 54d0aa: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 54d0b1: call 0x4e12fd */
  esp -= 4; W32(esp, 0x54d0b6u); SPILL(); f_4e12fd(); if (g_unwind) return; RELOAD();
/* 54d0b6: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 54d0b8: add esi, 0x6c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 54d0bb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54d0bc: mov ecx, edi */
  ecx = edi;
/* 54d0be: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x54d0c1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54d0c1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54d0c4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54d0c5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54d0c6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54d0cd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54d0ce: mov esp, ebp */
  esp = ebp;
/* 54d0d0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54d0d1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_54d0d4(void) {
  LOAD_REGS();
L_54d0d4: /* 54d0d4: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 54d0d7: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 54d0dc: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 54d0df: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54d0e0: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 54d0e3: call 0x554df6 */
  esp -= 4; W32(esp, 0x54d0e8u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_54d0e8(); return;
}

void f_54d0e8(void) {
  LOAD_REGS();
L_54d0e8: /* 54d0e8: push 0x56fcdc */
  { uint32_t v = 0x56fcdcu; esp -= 4; W32(esp, v); }
/* 54d0ed: push 0x5add38 */
  { uint32_t v = 0x5add38u; esp -= 4; W32(esp, v); }
/* 54d0f2: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54d0f7u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54d0f7: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 54d0fa: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54d0fd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54d0ff: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x54d104u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 54d104: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54d105: push 0x5add40 */
  { uint32_t v = 0x5add40u; esp -= 4; W32(esp, v); }
/* 54d10a: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54d10fu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54d10f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54d112: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54d114: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54d116: call 0x554df6 */
  esp -= 4; W32(esp, 0x54d11bu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_54d11b: guest_badaddr(0x54d11b); return;
}

void f_54d150(void) {
  LOAD_REGS();
L_54d150: /* 54d150: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54d151: mov eax, dword ptr [ecx + 0x48] */
  eax = R32((uint32_t)(ecx + 0x48u));
/* 54d154: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54d156: mov dword ptr [esp], ecx */
  W32((uint32_t)(esp), ecx);
/* 54d15a: jne 0x54d174 */
  if (!zf) goto L_54d174;
L_54d15c: /* 54d15c: mov eax, dword ptr [ecx + 0x18] */
  eax = R32((uint32_t)(ecx + 0x18u));
/* 54d15f: mov eax, dword ptr [eax + 0x24] */
  eax = R32((uint32_t)(eax + 0x24u));
/* 54d162: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54d164: je 0x54d174 */
  if (zf) goto L_54d174;
L_54d166: /* 54d166: cmp eax, 0x5f0d80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5f0d80u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54d16b: je 0x54d1d6 */
  if (zf) goto L_54d1d6;
L_54d16d: /* 54d16d: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 54d170: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54d172: jne 0x54d166 */
  if (!zf) goto L_54d166;
L_54d174: /* 54d174: mov eax, dword ptr [ecx + 0x6c] */
  eax = R32((uint32_t)(ecx + 0x6cu));
/* 54d177: test dword ptr [eax + 0x3c], 0x400000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x3cu))); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54d17e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54d17f: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 54d183: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54d184: je 0x54d1b8 */
  if (zf) goto L_54d1b8;
L_54d186: /* 54d186: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54d187: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 54d189: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 54d18a: mov ebp, dword ptr [eax + 0x38] */
  ebp = R32((uint32_t)(eax + 0x38u));
/* 54d18d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 54d190: xor edi, edi */
  edi = 0;
/* 54d192: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 54d194: jle 0x54d1b6 */
  if ((zf || sf != of)) goto L_54d1b6;
L_54d196: /* 54d196: jmp 0x54d1a0 */
  goto L_54d1a0;
L_54d198: /* 54d198: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 54d19c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_54d1a0: /* 54d1a0: mov ecx, dword ptr [ecx + 0x6c] */
  ecx = R32((uint32_t)(ecx + 0x6cu));
/* 54d1a3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 54d1a5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54d1a6: call dword ptr [edx + 0xac] */
  { uint32_t t = R32((uint32_t)(edx + 0xacu)); esp -= 4; W32(esp, 0x54d1acu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54d1ac: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 54d1af: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 54d1b0: add ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 54d1b2: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54d1b4: jl 0x54d198 */
  if ((sf != of)) goto L_54d198;
L_54d1b6: /* 54d1b6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54d1b7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_54d1b8: /* 54d1b8: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 54d1ba: xor edi, edi */
  edi = 0;
/* 54d1bc: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54d1be: je 0x54d1cc */
  if (zf) goto L_54d1cc;
L_54d1c0: /* 54d1c0: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 54d1c6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 54d1c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54d1c9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x54d1ccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_54d1cc: /* 54d1cc: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 54d1ce: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* 54d1d1: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 54d1d4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54d1d5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_54d1d6: /* 54d1d6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 54d1d7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_54d210(void) {
  LOAD_REGS();
L_54d210: /* 54d210: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 54d211: mov ebp, esp */
  ebp = esp;
/* 54d213: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 54d215: push 0x559a10 */
  { uint32_t v = 0x559a10u; esp -= 4; W32(esp, v); }
/* 54d21a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 54d220: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54d221: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 54d228: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54d22b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54d22c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54d22d: mov esi, ecx */
  esi = ecx;
/* 54d22f: mov ecx, dword ptr [esi + 0x6c] */
  ecx = R32((uint32_t)(esi + 0x6cu));
/* 54d232: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54d233: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 54d236: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 54d238: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 54d23b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54d23c: mov ecx, edi */
  ecx = edi;
/* 54d23e: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 54d241: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 54d248: call dword ptr [eax + 0x10] */
  { uint32_t t = R32((uint32_t)(eax + 0x10u)); esp -= 4; W32(esp, 0x54d24bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54d24b: mov ecx, dword ptr [esi + 0x6c] */
  ecx = R32((uint32_t)(esi + 0x6cu));
/* 54d24e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 54d250: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54d252: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54d253: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0x54d259u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54d259: mov ecx, dword ptr [esi + 0x70] */
  ecx = R32((uint32_t)(esi + 0x70u));
/* 54d25c: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 54d25e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54d25f: mov ecx, edi */
  ecx = edi;
/* 54d261: call dword ptr [eax + 0x10] */
  { uint32_t t = R32((uint32_t)(eax + 0x10u)); esp -= 4; W32(esp, 0x54d264u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54d264: mov ecx, dword ptr [esi + 0x70] */
  ecx = R32((uint32_t)(esi + 0x70u));
/* 54d267: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 54d269: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54d26b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54d26c: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0x54d272u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54d272: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 54d275: mov dword ptr [esi + 0x38], 0x14 */
  W32((uint32_t)(esi + 0x38u), 0x14u);
/* 54d27c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 54d27e: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x54d281u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54d281: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54d284: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 54d287: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* 54d28a: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 54d28d: test ah, 0x10 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 54d290: jne 0x54d29a */
  if (!zf) goto L_54d29a;
L_54d292: /* 54d292: or eax, 0x400000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 54d297: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
L_54d29a: /* 54d29a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54d29d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54d29e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54d29f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54d2a6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54d2a7: mov esp, ebp */
  esp = ebp;
/* 54d2a9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54d2aa: ret 8 */
  esp += 12; SPILL(); return;
}

void f_54d2ad(void) {
  LOAD_REGS();
L_54d2ad: /* 54d2ad: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 54d2b0: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 54d2b5: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 54d2b8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54d2b9: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 54d2bc: call 0x554df6 */
  esp -= 4; W32(esp, 0x54d2c1u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_54d2c1(); return;
}

void f_54d2c1(void) {
  LOAD_REGS();
L_54d2c1: /* 54d2c1: push 0x56fd1c */
  { uint32_t v = 0x56fd1cu; esp -= 4; W32(esp, v); }
/* 54d2c6: push 0x5ade18 */
  { uint32_t v = 0x5ade18u; esp -= 4; W32(esp, v); }
/* 54d2cb: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54d2d0u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54d2d0: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 54d2d3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54d2d6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54d2d8: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x54d2ddu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 54d2dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54d2de: push 0x5ade20 */
  { uint32_t v = 0x5ade20u; esp -= 4; W32(esp, v); }
/* 54d2e3: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54d2e8u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54d2e8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54d2eb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54d2ed: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54d2ef: call 0x554df6 */
  esp -= 4; W32(esp, 0x54d2f4u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_54d2f4: guest_badaddr(0x54d2f4); return;
}
