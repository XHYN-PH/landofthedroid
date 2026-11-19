#include "recomp.h"
#include "rec_mod.h"

void f_e16a2b(void) {
  LOAD_REGS();
L_e16a2b: /* e16a2b: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* e16a2e: push 0xe5ec4c */
  { uint32_t v = 0xe5ec4cu; esp -= 4; W32(esp, v); }
/* e16a33: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* e16a36: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e16a37: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* e16a3a: call 0xe25f60 */
  esp -= 4; W32(esp, 0xe16a3fu); SPILL(); f_e25f60(); if (g_unwind) return; RELOAD();
  SPILL(); f_e16a3f(); return;
}

void f_e16a3f(void) {
  LOAD_REGS();
  goto L_e16a3f;
L_e169ec: /* e169ec: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e169ee: je 0xe16a6b */
  if (zf) goto L_e16a6b;
L_e169f0: /* e169f0: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e169f3: mov ecx, dword ptr [eax + 0x6c] */
  ecx = R32((uint32_t)(eax + 0x6cu));
/* e169f6: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* e169f9: jmp 0xe16a74 */
  goto L_e16a74;
L_e16a3f: /* e16a3f: push 0xe2ed44 */
  { uint32_t v = 0xe2ed44u; esp -= 4; W32(esp, v); }
/* e16a44: push 0xe63714 */
  { uint32_t v = 0xe63714u; esp -= 4; W32(esp, v); }
/* e16a49: call dword ptr [0xe65a5c] */
  esp -= 4; W32(esp, 0xe16a4fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* e16a4f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e16a52: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e16a54: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e16a56: call 0xe25f60 */
  esp -= 4; W32(esp, 0xe16a5bu); SPILL(); f_e25f60(); if (g_unwind) return; RELOAD();
/* e16a5b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e16a5e: mov ebx, dword ptr [ecx + 0x60] */
  ebx = R32((uint32_t)(ecx + 0x60u));
/* e16a61: jmp 0xe169ec */
  goto L_e169ec;
L_e16a6b: /* e16a6b: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* e16a6e: mov eax, dword ptr [edx + 0x64] */
  eax = R32((uint32_t)(edx + 0x64u));
/* e16a71: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
L_e16a74: /* e16a74: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e16a76: jge 0xe16a90 */
  if ((sf == of)) goto L_e16a90;
L_e16a78: /* e16a78: push 0x89f */
  { uint32_t v = 0x89fu; esp -= 4; W32(esp, v); }
/* e16a7d: push 0xe6371c */
  { uint32_t v = 0xe6371cu; esp -= 4; W32(esp, v); }
/* e16a82: push 0xe6372c */
  { uint32_t v = 0xe6372cu; esp -= 4; W32(esp, v); }
/* e16a87: call dword ptr [0xe658f4] */
  esp -= 4; W32(esp, 0xe16a8du); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* e16a8d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_e16a90: /* e16a90: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* e16a93: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e16a95: jge 0xe16aaf */
  if ((sf == of)) goto L_e16aaf;
L_e16a97: /* e16a97: push 0x8a0 */
  { uint32_t v = 0x8a0u; esp -= 4; W32(esp, v); }
/* e16a9c: push 0xe63734 */
  { uint32_t v = 0xe63734u; esp -= 4; W32(esp, v); }
/* e16aa1: push 0xe63744 */
  { uint32_t v = 0xe63744u; esp -= 4; W32(esp, v); }
/* e16aa6: call dword ptr [0xe658f4] */
  esp -= 4; W32(esp, 0xe16aacu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* e16aac: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_e16aaf: /* e16aaf: mov al, byte ptr [esi + 0x1a8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1a8u))) & 0xffu);
/* e16ab5: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* e16ab6: and ebx, 0xfffffffe */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* e16ab9: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e16abb: mov dword ptr [ebp + 0x10], ebx */
  W32((uint32_t)(ebp + 0x10u), ebx);
/* e16abe: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* e16ac2: je 0xe16b6f */
  if (zf) goto L_e16b6f;
L_e16ac8: /* e16ac8: mov ecx, dword ptr [esi + 0x194] */
  ecx = R32((uint32_t)(esi + 0x194u));
/* e16ace: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* e16ad1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e16ad2: call dword ptr [0xe65d80] */
  esp -= 4; W32(esp, 0xe16ad8u); SPILL(); call_ind(R32(0xe65d80u)); if (g_unwind) return; /* USER32!SetFocus */ RELOAD();
/* e16ad8: mov eax, edi */
  eax = edi;
/* e16ada: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e16adc: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* e16adf: mov dword ptr [ebp - 0x5c], ecx */
  W32((uint32_t)(ebp + 0xffffffa4u), ecx);
/* e16ae2: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* e16ae5: mov dword ptr [ebp - 0x58], edx */
  W32((uint32_t)(ebp + 0xffffffa8u), edx);
/* e16ae8: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* e16aeb: mov eax, dword ptr [esi + 0x1d8] */
  eax = R32((uint32_t)(esi + 0x1d8u));
/* e16af1: mov dword ptr [ebp - 0x54], ecx */
  W32((uint32_t)(ebp + 0xffffffacu), ecx);
/* e16af4: mov ecx, esi */
  ecx = esi;
/* e16af6: mov dword ptr [ebp - 0x50], edx */
  W32((uint32_t)(ebp + 0xffffffb0u), edx);
/* e16af9: mov dword ptr [esi + 0xa0], eax */
  W32((uint32_t)(esi + 0xa0u), eax);
/* e16aff: call 0xe110cd */
  esp -= 4; W32(esp, 0xe16b04u); SPILL(); f_e110cd(); if (g_unwind) return; RELOAD();
/* e16b04: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* e16b06: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e16b08: mov ecx, esi */
  ecx = esi;
/* e16b0a: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xe16b0du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e16b0d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e16b10: movzx ecx, word ptr [eax + 0xf4] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0xf4u)));
/* e16b17: mov edx, dword ptr [esi + 0x194] */
  edx = R32((uint32_t)(esi + 0x194u));
/* e16b1d: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* e16b20: mov ebx, dword ptr [0xe65d84] */
  ebx = R32((uint32_t)(0xe65d84u));
/* e16b26: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e16b27: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e16b28: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xe16b2au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e16b2a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e16b2d: movzx edx, word ptr [ecx + 0xf6] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0xf6u)));
/* e16b34: mov eax, dword ptr [esi + 0x194] */
  eax = R32((uint32_t)(esi + 0x194u));
/* e16b3a: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e16b3d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e16b3e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e16b3f: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xe16b41u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e16b41: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* e16b44: movzx eax, word ptr [edx + 0xf8] */
  eax = (uint32_t)(R16((uint32_t)(edx + 0xf8u)));
/* e16b4b: mov ecx, dword ptr [esi + 0x194] */
  ecx = R32((uint32_t)(esi + 0x194u));
/* e16b51: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* e16b54: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e16b55: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e16b56: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xe16b58u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e16b58: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e16b5b: movzx ecx, word ptr [eax + 0xfa] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0xfau)));
/* e16b62: mov edx, dword ptr [esi + 0x194] */
  edx = R32((uint32_t)(esi + 0x194u));
/* e16b68: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* e16b6b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e16b6c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e16b6d: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xe16b6fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e16b6f: /* e16b6f: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* e16b72: mov eax, ebx */
  eax = ebx;
/* e16b74: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* e16b77: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* e16b7e: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* e16b82: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* e16b85: je 0xe16d3b */
  if (zf) goto L_e16d3b;
L_e16b8b: /* e16b8b: test byte ptr [esi + 0x1a8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x1a8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e16b92: jne 0xe16d3b */
  if (!zf) goto L_e16d3b;
L_e16b98: /* e16b98: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* e16b9b: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* e16b9e: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* e16ba1: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* e16ba3: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* e16ba6: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* e16ba9: mov ecx, dword ptr [esi + 0xa0] */
  ecx = R32((uint32_t)(esi + 0xa0u));
/* e16baf: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* e16bb2: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* e16bb5: mov dword ptr [edi + 0xc], eax */
  W32((uint32_t)(edi + 0xcu), eax);
/* e16bb8: mov dword ptr [esi + 0x1d8], ecx */
  W32((uint32_t)(esi + 0x1d8u), ecx);
/* e16bbe: mov ecx, dword ptr [edx + 0xf0] */
  ecx = R32((uint32_t)(edx + 0xf0u));
/* e16bc4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e16bc6: je 0xe16be1 */
  if (zf) goto L_e16be1;
L_e16bc8: /* e16bc8: mov eax, edx */
  eax = edx;
/* e16bca: mov dword ptr [eax + 0xcc], 0 */
  W32((uint32_t)(eax + 0xccu), 0x0u);
/* e16bd4: call dword ptr [0xe65f40] */
  esp -= 4; W32(esp, 0xe16bdau); SPILL(); f_d8237e(); if (g_unwind) return; /* Window!??BWWindow@@QBEPAUHWND__@@XZ */ RELOAD();
/* e16bda: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e16bdb: call dword ptr [0xe65e20] */
  esp -= 4; W32(esp, 0xe16be1u); SPILL(); call_ind(R32(0xe65e20u)); if (g_unwind) return; /* USER32!DestroyWindow */ RELOAD();
L_e16be1: /* e16be1: inc dword ptr [esi + 0x1a4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x1a4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi + 0x1a4u), r);
  }
/* e16be7: mov eax, dword ptr [0xe65920] */
  eax = R32((uint32_t)(0xe65920u));
/* e16bec: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e16bef: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e16bf1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e16bf3: push 0xb */
  { uint32_t v = 0xbu; esp -= 4; W32(esp, v); }
/* e16bf5: je 0xe16c69 */
  if (zf) goto L_e16c69;
L_e16bf7: /* e16bf7: mov ecx, dword ptr [esi + 0x194] */
  ecx = R32((uint32_t)(esi + 0x194u));
/* e16bfd: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* e16c00: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e16c01: call dword ptr [0xe65df8] */
  esp -= 4; W32(esp, 0xe16c07u); SPILL(); call_ind(R32(0xe65df8u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* e16c07: jmp 0xe16c79 */
  goto L_e16c79;
L_e16c69: /* e16c69: mov eax, dword ptr [esi + 0x194] */
  eax = R32((uint32_t)(esi + 0x194u));
/* e16c6f: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e16c72: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e16c73: call dword ptr [0xe65dfc] */
  esp -= 4; W32(esp, 0xe16c79u); SPILL(); call_ind(R32(0xe65dfcu)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
L_e16c79: /* e16c79: mov edx, dword ptr [esi + 0x194] */
  edx = R32((uint32_t)(esi + 0x194u));
/* e16c7f: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* e16c82: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e16c84: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e16c85: call dword ptr [0xe65d88] */
  esp -= 4; W32(esp, 0xe16c8bu); SPILL(); call_ind(R32(0xe65d88u)); if (g_unwind) return; /* USER32!SetMenu */ RELOAD();
/* e16c8b: mov ecx, dword ptr [0xe6590c] */
  ecx = R32((uint32_t)(0xe6590cu));
/* e16c91: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e16c94: jne 0xe16cff */
  if (!zf) goto L_e16cff;
L_e16c96: /* e16c96: mov edx, dword ptr [0xe65920] */
  edx = R32((uint32_t)(0xe65920u));
/* e16c9c: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e16c9f: push -0x10 */
  { uint32_t v = 0xfffffff0u; esp -= 4; W32(esp, v); }
/* e16ca1: je 0xe16ccd */
  if (zf) goto L_e16ccd;
L_e16ca3: /* e16ca3: mov eax, dword ptr [esi + 0x194] */
  eax = R32((uint32_t)(esi + 0x194u));
/* e16ca9: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e16cac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e16cad: call dword ptr [0xe65d8c] */
  esp -= 4; W32(esp, 0xe16cb3u); SPILL(); call_ind(R32(0xe65d8cu)); if (g_unwind) return; /* USER32!GetWindowLongW */ RELOAD();
/* e16cb3: mov edx, dword ptr [esi + 0x194] */
  edx = R32((uint32_t)(esi + 0x194u));
/* e16cb9: and eax, 0xff3bffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xff3bffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e16cbe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e16cbf: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* e16cc2: push -0x10 */
  { uint32_t v = 0xfffffff0u; esp -= 4; W32(esp, v); }
/* e16cc4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e16cc5: call dword ptr [0xe65dcc] */
  esp -= 4; W32(esp, 0xe16ccbu); SPILL(); call_ind(R32(0xe65dccu)); if (g_unwind) return; /* USER32!SetWindowLongW */ RELOAD();
/* e16ccb: jmp 0xe16cf5 */
  goto L_e16cf5;
L_e16ccd: /* e16ccd: mov ecx, dword ptr [esi + 0x194] */
  ecx = R32((uint32_t)(esi + 0x194u));
/* e16cd3: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* e16cd6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e16cd7: call dword ptr [0xe65d90] */
  esp -= 4; W32(esp, 0xe16cddu); SPILL(); call_ind(R32(0xe65d90u)); if (g_unwind) return; /* USER32!GetWindowLongA */ RELOAD();
/* e16cdd: and eax, 0xff3bffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xff3bffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e16ce2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e16ce3: mov eax, dword ptr [esi + 0x194] */
  eax = R32((uint32_t)(esi + 0x194u));
/* e16ce9: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e16cec: push -0x10 */
  { uint32_t v = 0xfffffff0u; esp -= 4; W32(esp, v); }
/* e16cee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e16cef: call dword ptr [0xe65dd0] */
  esp -= 4; W32(esp, 0xe16cf5u); SPILL(); call_ind(R32(0xe65dd0u)); if (g_unwind) return; /* USER32!SetWindowLongA */ RELOAD();
L_e16cf5: /* e16cf5: mov dword ptr [esi + 0x1ac], 1 */
  W32((uint32_t)(esi + 0x1acu), 0x1u);
L_e16cff: /* e16cff: mov edx, dword ptr [0xe65920] */
  edx = R32((uint32_t)(0xe65920u));
/* e16d05: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e16d08: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e16d0a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e16d0c: push 0xb */
  { uint32_t v = 0xbu; esp -= 4; W32(esp, v); }
/* e16d0e: je 0xe16d22 */
  if (zf) goto L_e16d22;
L_e16d10: /* e16d10: mov eax, dword ptr [esi + 0x194] */
  eax = R32((uint32_t)(esi + 0x194u));
/* e16d16: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e16d19: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e16d1a: call dword ptr [0xe65df8] */
  esp -= 4; W32(esp, 0xe16d20u); SPILL(); call_ind(R32(0xe65df8u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* e16d20: jmp 0xe16d32 */
  goto L_e16d32;
L_e16d22: /* e16d22: mov edx, dword ptr [esi + 0x194] */
  edx = R32((uint32_t)(esi + 0x194u));
/* e16d28: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* e16d2b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e16d2c: call dword ptr [0xe65dfc] */
  esp -= 4; W32(esp, 0xe16d32u); SPILL(); call_ind(R32(0xe65dfcu)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
L_e16d32: /* e16d32: dec dword ptr [esi + 0x1a4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x1a4u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(esi + 0x1a4u), r);
  }
/* e16d38: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
L_e16d3b: /* e16d3b: xor edx, edx */
  edx = 0;
/* e16d3d: mov ecx, ebx */
  ecx = ebx;
/* e16d3f: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  ecx = r;
  }
/* e16d42: mov dword ptr [ebp - 4], edx */
  W32((uint32_t)(ebp + 0xfffffffcu), edx);
/* e16d45: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* e16d48: jne 0xe16d50 */
  if (!zf) goto L_e16d50;
L_e16d4a: /* e16d4a: mov dword ptr [esi + 0x140], edx */
  W32((uint32_t)(esi + 0x140u), edx);
L_e16d50: /* e16d50: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e16d52: je 0xe16e5a */
  if (zf) goto L_e16e5a;
L_e16d58: /* e16d58: mov ecx, dword ptr [0xe6590c] */
  ecx = R32((uint32_t)(0xe6590cu));
/* e16d5e: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e16d61: jne 0xe16e5a */
  if (!zf) goto L_e16e5a;
L_e16d67: /* e16d67: mov ecx, dword ptr [esi + 0x70] */
  ecx = R32((uint32_t)(esi + 0x70u));
/* e16d6a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e16d6c: je 0xe16e5a */
  if (zf) goto L_e16e5a;
L_e16d72: /* e16d72: call dword ptr [0xe65954] */
  esp -= 4; W32(esp, 0xe16d78u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* e16d78: mov ecx, eax */
  ecx = eax;
/* e16d7a: call dword ptr [0xe65900] */
  esp -= 4; W32(esp, 0xe16d80u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* e16d80: mov edi, dword ptr [0xe65888] */
  edi = R32((uint32_t)(0xe65888u));
/* e16d86: push 0xe6375c */
  { uint32_t v = 0xe6375cu; esp -= 4; W32(esp, v); }
/* e16d8b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e16d8c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe16d8eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e16d8e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e16d91: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e16d93: je 0xe16db9 */
  if (zf) goto L_e16db9;
L_e16d95: /* e16d95: mov ecx, dword ptr [esi + 0x70] */
  ecx = R32((uint32_t)(esi + 0x70u));
/* e16d98: call dword ptr [0xe65954] */
  esp -= 4; W32(esp, 0xe16d9eu); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* e16d9e: mov ecx, eax */
  ecx = eax;
/* e16da0: call dword ptr [0xe65900] */
  esp -= 4; W32(esp, 0xe16da6u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* e16da6: push 0xe63780 */
  { uint32_t v = 0xe63780u; esp -= 4; W32(esp, v); }
/* e16dab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e16dac: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe16daeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e16dae: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e16db1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e16db3: jne 0xe16e5a */
  if (!zf) goto L_e16e5a;
L_e16db9: /* e16db9: inc dword ptr [esi + 0x1a4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x1a4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi + 0x1a4u), r);
  }
/* e16dbf: mov edx, dword ptr [0xe65920] */
  edx = R32((uint32_t)(0xe65920u));
/* e16dc5: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e16dc8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e16dca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e16dcc: push 0xb */
  { uint32_t v = 0xbu; esp -= 4; W32(esp, v); }
/* e16dce: je 0xe16de2 */
  if (zf) goto L_e16de2;
L_e16dd0: /* e16dd0: mov eax, dword ptr [esi + 0x194] */
  eax = R32((uint32_t)(esi + 0x194u));
/* e16dd6: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e16dd9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e16dda: call dword ptr [0xe65df8] */
  esp -= 4; W32(esp, 0xe16de0u); SPILL(); call_ind(R32(0xe65df8u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* e16de0: jmp 0xe16df2 */
  goto L_e16df2;
L_e16de2: /* e16de2: mov edx, dword ptr [esi + 0x194] */
  edx = R32((uint32_t)(esi + 0x194u));
/* e16de8: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* e16deb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e16dec: call dword ptr [0xe65dfc] */
  esp -= 4; W32(esp, 0xe16df2u); SPILL(); call_ind(R32(0xe65dfcu)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
L_e16df2: /* e16df2: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* e16df5: xor ecx, ecx */
  ecx = 0;
/* e16df7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e16df8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e16dfb: xor eax, eax */
  eax = 0;
/* e16dfd: mov edx, esp */
  edx = esp;
/* e16dff: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* e16e01: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* e16e04: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* e16e07: mov ecx, dword ptr [esi + 0x194] */
  ecx = R32((uint32_t)(esi + 0x194u));
/* e16e0d: mov dword ptr [edx + 8], ebx */
  W32((uint32_t)(edx + 0x8u), ebx);
/* e16e10: mov dword ptr [edx + 0xc], eax */
  W32((uint32_t)(edx + 0xcu), eax);
/* e16e13: call dword ptr [0xe65f3c] */
  esp -= 4; W32(esp, 0xe16e19u); SPILL(); f_d8171c(); if (g_unwind) return; /* Window!?MoveWindow@WWindow@@QAEXUFRect@@H@Z */ RELOAD();
/* e16e19: mov ecx, dword ptr [0xe65920] */
  ecx = R32((uint32_t)(0xe65920u));
/* e16e1f: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e16e22: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e16e24: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e16e26: push 0xb */
  { uint32_t v = 0xbu; esp -= 4; W32(esp, v); }
/* e16e28: je 0xe16e42 */
  if (zf) goto L_e16e42;
L_e16e2a: /* e16e2a: mov edx, dword ptr [esi + 0x194] */
  edx = R32((uint32_t)(esi + 0x194u));
/* e16e30: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* e16e33: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e16e34: call dword ptr [0xe65df8] */
  esp -= 4; W32(esp, 0xe16e3au); SPILL(); call_ind(R32(0xe65df8u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* e16e3a: dec dword ptr [esi + 0x1a4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x1a4u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(esi + 0x1a4u), r);
  }
/* e16e40: jmp 0xe16e5d */
  goto L_e16e5d;
L_e16e42: /* e16e42: mov ecx, dword ptr [esi + 0x194] */
  ecx = R32((uint32_t)(esi + 0x194u));
/* e16e48: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* e16e4b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e16e4c: call dword ptr [0xe65dfc] */
  esp -= 4; W32(esp, 0xe16e52u); SPILL(); call_ind(R32(0xe65dfcu)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* e16e52: dec dword ptr [esi + 0x1a4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x1a4u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(esi + 0x1a4u), r);
  }
/* e16e58: jmp 0xe16e5d */
  goto L_e16e5d;
L_e16e5a: /* e16e5a: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
L_e16e5d: /* e16e5d: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* e16e60: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* e16e63: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* e16e66: mov eax, dword ptr [esi + 0x1a8] */
  eax = R32((uint32_t)(esi + 0x1a8u));
/* e16e6c: and ecx, 0xffffffdf */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffdfu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* e16e6f: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e16e71: mov dword ptr [esi + 0x1a8], ecx */
  W32((uint32_t)(esi + 0x1a8u), ecx);
/* e16e77: mov dword ptr [esi + 0x88], ebx */
  W32((uint32_t)(esi + 0x88u), ebx);
/* e16e7d: mov dword ptr [esi + 0x8c], edx */
  W32((uint32_t)(esi + 0x8cu), edx);
/* e16e83: jne 0xe16e96 */
  if (!zf) goto L_e16e96;
L_e16e85: /* e16e85: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e16e87: je 0xe16e96 */
  if (zf) goto L_e16e96;
L_e16e89: /* e16e89: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* e16e8b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e16e8c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e16e8d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e16e8e: mov ecx, esi */
  ecx = esi;
/* e16e90: call dword ptr [eax + 0xa0] */
  { uint32_t t = R32((uint32_t)(eax + 0xa0u)); esp -= 4; W32(esp, 0xe16e96u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e16e96: /* e16e96: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e16e98: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* e16e9c: je 0xe16f29 */
  if (zf) goto L_e16f29;
L_e16ea2: /* e16ea2: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* e16ea4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e16ea6: mov ecx, esi */
  ecx = esi;
/* e16ea8: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xe16eabu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e16eab: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* e16ead: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e16eaf: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e16eb1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e16eb3: mov ecx, esi */
  ecx = esi;
/* e16eb5: call dword ptr [eax + 0xa0] */
  { uint32_t t = R32((uint32_t)(eax + 0xa0u)); esp -= 4; W32(esp, 0xe16ebbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e16ebb: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* e16ebe: movzx ecx, word ptr [ebx + 0xf4] */
  ecx = (uint32_t)(R16((uint32_t)(ebx + 0xf4u)));
/* e16ec5: mov edx, dword ptr [esi + 0x194] */
  edx = R32((uint32_t)(esi + 0x194u));
/* e16ecb: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* e16ece: mov edi, dword ptr [0xe65d94] */
  edi = R32((uint32_t)(0xe65d94u));
/* e16ed4: push 0x1b */
  { uint32_t v = 0x1bu; esp -= 4; W32(esp, v); }
/* e16ed6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e16ed8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e16ed9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e16eda: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe16edcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e16edc: movzx ecx, word ptr [ebx + 0xf6] */
  ecx = (uint32_t)(R16((uint32_t)(ebx + 0xf6u)));
/* e16ee3: mov edx, dword ptr [esi + 0x194] */
  edx = R32((uint32_t)(esi + 0x194u));
/* e16ee9: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* e16eec: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* e16eee: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e16ef0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e16ef1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e16ef2: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe16ef4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e16ef4: movzx ecx, word ptr [ebx + 0xf8] */
  ecx = (uint32_t)(R16((uint32_t)(ebx + 0xf8u)));
/* e16efb: mov edx, dword ptr [esi + 0x194] */
  edx = R32((uint32_t)(esi + 0x194u));
/* e16f01: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* e16f04: push 0x1b */
  { uint32_t v = 0x1bu; esp -= 4; W32(esp, v); }
/* e16f06: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e16f08: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e16f09: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e16f0a: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe16f0cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e16f0c: movzx ecx, word ptr [ebx + 0xfa] */
  ecx = (uint32_t)(R16((uint32_t)(ebx + 0xfau)));
/* e16f13: mov edx, dword ptr [esi + 0x194] */
  edx = R32((uint32_t)(esi + 0x194u));
/* e16f19: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* e16f1c: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* e16f1e: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e16f20: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e16f21: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e16f22: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe16f24u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e16f24: jmp 0xe1706b */
  goto L_e1706b;
L_e16f29: /* e16f29: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* e16f2c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e16f2e: jne 0xe17068 */
  if (!zf) goto L_e17068;
L_e16f34: /* e16f34: test byte ptr [ebp + 8], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x8u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e16f38: jne 0xe17068 */
  if (!zf) goto L_e17068;
L_e16f3e: /* e16f3e: mov eax, dword ptr [esi + 0x1ac] */
  eax = R32((uint32_t)(esi + 0x1acu));
/* e16f44: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e16f46: je 0xe16fb3 */
  if (zf) goto L_e16fb3;
L_e16f48: /* e16f48: inc dword ptr [esi + 0x1a4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x1a4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi + 0x1a4u), r);
  }
/* e16f4e: mov ecx, dword ptr [0xe65920] */
  ecx = R32((uint32_t)(0xe65920u));
/* e16f54: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e16f57: push -0x10 */
  { uint32_t v = 0xfffffff0u; esp -= 4; W32(esp, v); }
/* e16f59: je 0xe16f85 */
  if (zf) goto L_e16f85;
L_e16f5b: /* e16f5b: mov edx, dword ptr [esi + 0x194] */
  edx = R32((uint32_t)(esi + 0x194u));
/* e16f61: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* e16f64: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e16f65: call dword ptr [0xe65d8c] */
  esp -= 4; W32(esp, 0xe16f6bu); SPILL(); call_ind(R32(0xe65d8cu)); if (g_unwind) return; /* USER32!GetWindowLongW */ RELOAD();
/* e16f6b: mov ecx, dword ptr [esi + 0x194] */
  ecx = R32((uint32_t)(esi + 0x194u));
/* e16f71: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* e16f74: or eax, 0xc40000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xc40000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* e16f79: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e16f7a: push -0x10 */
  { uint32_t v = 0xfffffff0u; esp -= 4; W32(esp, v); }
/* e16f7c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e16f7d: call dword ptr [0xe65dcc] */
  esp -= 4; W32(esp, 0xe16f83u); SPILL(); call_ind(R32(0xe65dccu)); if (g_unwind) return; /* USER32!SetWindowLongW */ RELOAD();
/* e16f83: jmp 0xe16fad */
  goto L_e16fad;
L_e16f85: /* e16f85: mov eax, dword ptr [esi + 0x194] */
  eax = R32((uint32_t)(esi + 0x194u));
/* e16f8b: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e16f8e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e16f8f: call dword ptr [0xe65d90] */
  esp -= 4; W32(esp, 0xe16f95u); SPILL(); call_ind(R32(0xe65d90u)); if (g_unwind) return; /* USER32!GetWindowLongA */ RELOAD();
/* e16f95: mov edx, dword ptr [esi + 0x194] */
  edx = R32((uint32_t)(esi + 0x194u));
/* e16f9b: or eax, 0xc40000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xc40000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* e16fa0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e16fa1: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* e16fa4: push -0x10 */
  { uint32_t v = 0xfffffff0u; esp -= 4; W32(esp, v); }
/* e16fa6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e16fa7: call dword ptr [0xe65dd0] */
  esp -= 4; W32(esp, 0xe16fadu); SPILL(); call_ind(R32(0xe65dd0u)); if (g_unwind) return; /* USER32!SetWindowLongA */ RELOAD();
L_e16fad: /* e16fad: dec dword ptr [esi + 0x1a4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x1a4u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(esi + 0x1a4u), r);
  }
L_e16fb3: /* e16fb3: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* e16fb6: mov edx, dword ptr [0xe65920] */
  edx = R32((uint32_t)(0xe65920u));
/* e16fbc: xor eax, eax */
  eax = 0;
/* e16fbe: mov dword ptr [ebp - 0x6c], eax */
  W32((uint32_t)(ebp + 0xffffff94u), eax);
/* e16fc1: mov dword ptr [ebp - 0x68], eax */
  W32((uint32_t)(ebp + 0xffffff98u), eax);
/* e16fc4: mov dword ptr [ebp - 0x64], ebx */
  W32((uint32_t)(ebp + 0xffffff9cu), ebx);
/* e16fc7: mov dword ptr [ebp - 0x60], ecx */
  W32((uint32_t)(ebp + 0xffffffa0u), ecx);
/* e16fca: cmp dword ptr [edx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e16fcc: push -0x10 */
  { uint32_t v = 0xfffffff0u; esp -= 4; W32(esp, v); }
/* e16fce: je 0xe16fe2 */
  if (zf) goto L_e16fe2;
L_e16fd0: /* e16fd0: mov eax, dword ptr [esi + 0x194] */
  eax = R32((uint32_t)(esi + 0x194u));
/* e16fd6: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e16fd9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e16fda: call dword ptr [0xe65d8c] */
  esp -= 4; W32(esp, 0xe16fe0u); SPILL(); call_ind(R32(0xe65d8cu)); if (g_unwind) return; /* USER32!GetWindowLongW */ RELOAD();
/* e16fe0: jmp 0xe16ff2 */
  goto L_e16ff2;
L_e16fe2: /* e16fe2: mov edx, dword ptr [esi + 0x194] */
  edx = R32((uint32_t)(esi + 0x194u));
/* e16fe8: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* e16feb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e16fec: call dword ptr [0xe65d90] */
  esp -= 4; W32(esp, 0xe16ff2u); SPILL(); call_ind(R32(0xe65d90u)); if (g_unwind) return; /* USER32!GetWindowLongA */ RELOAD();
L_e16ff2: /* e16ff2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e16ff4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e16ff5: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* e16ff8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e16ff9: call dword ptr [0xe65dc8] */
  esp -= 4; W32(esp, 0xe16fffu); SPILL(); call_ind(R32(0xe65dc8u)); if (g_unwind) return; /* USER32!AdjustWindowRect */ RELOAD();
/* e16fff: mov edx, dword ptr [esi + 0x30] */
  edx = R32((uint32_t)(esi + 0x30u));
/* e17002: mov eax, dword ptr [edx + 0x534] */
  eax = R32((uint32_t)(edx + 0x534u));
/* e17008: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e1700b: jne 0xe1705f */
  if (!zf) goto L_e1705f;
L_e1700d: /* e1700d: mov edi, dword ptr [ebp - 0x68] */
  edi = R32((uint32_t)(ebp + 0xffffff98u));
/* e17010: mov ebx, dword ptr [esi + 0x1a4] */
  ebx = R32((uint32_t)(esi + 0x1a4u));
/* e17016: mov eax, dword ptr [ebp - 0x60] */
  eax = R32((uint32_t)(ebp + 0xffffffa0u));
/* e17019: mov edx, dword ptr [ebp - 0x6c] */
  edx = R32((uint32_t)(ebp + 0xffffff94u));
/* e1701c: mov ecx, dword ptr [ebp - 0x64] */
  ecx = R32((uint32_t)(ebp + 0xffffff9cu));
/* e1701f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* e17020: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* e17022: mov edi, dword ptr [ebp - 0x58] */
  edi = R32((uint32_t)(ebp + 0xffffffa8u));
/* e17025: mov dword ptr [esi + 0x1a4], ebx */
  W32((uint32_t)(esi + 0x1a4u), ebx);
/* e1702b: mov ebx, dword ptr [ebp - 0x5c] */
  ebx = R32((uint32_t)(ebp + 0xffffffa4u));
/* e1702e: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* e17030: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e17032: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e17034: mov dword ptr [ebp - 0x34], ebx */
  W32((uint32_t)(ebp + 0xffffffccu), ebx);
/* e17037: mov edx, edi */
  edx = edi;
/* e17039: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e1703b: mov eax, ebx */
  eax = ebx;
/* e1703d: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e17040: mov ebx, esp */
  ebx = esp;
/* e17042: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* e17044: mov dword ptr [ebx + 4], edi */
  W32((uint32_t)(ebx + 0x4u), edi);
/* e17047: mov dword ptr [ebx + 8], ecx */
  W32((uint32_t)(ebx + 0x8u), ecx);
/* e1704a: mov ecx, dword ptr [esi + 0x194] */
  ecx = R32((uint32_t)(esi + 0x194u));
/* e17050: mov dword ptr [ebx + 0xc], edx */
  W32((uint32_t)(ebx + 0xcu), edx);
/* e17053: call dword ptr [0xe65f3c] */
  esp -= 4; W32(esp, 0xe17059u); SPILL(); f_d8171c(); if (g_unwind) return; /* Window!?MoveWindow@WWindow@@QAEXUFRect@@H@Z */ RELOAD();
/* e17059: dec dword ptr [esi + 0x1a4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x1a4u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(esi + 0x1a4u), r);
  }
L_e1705f: /* e1705f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* e17061: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e17063: mov ecx, esi */
  ecx = esi;
/* e17065: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0xe17068u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e17068: /* e17068: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
L_e1706b: /* e1706b: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* e1706e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e17070: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* e17077: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* e1707b: je 0xe1709b */
  if (zf) goto L_e1709b;
L_e1707d: /* e1707d: mov eax, dword ptr [ebx + 0x28] */
  eax = R32((uint32_t)(ebx + 0x28u));
/* e17080: mov ecx, dword ptr [eax + 0x34] */
  ecx = R32((uint32_t)(eax + 0x34u));
/* e17083: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e17085: call dword ptr [edx + 0xa8] */
  { uint32_t t = R32((uint32_t)(edx + 0xa8u)); esp -= 4; W32(esp, 0xe1708bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e1708b: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1708d: je 0xe1709b */
  if (zf) goto L_e1709b;
L_e1708f: /* e1708f: mov eax, dword ptr [ebx + 0x28] */
  eax = R32((uint32_t)(ebx + 0x28u));
/* e17092: mov ecx, dword ptr [eax + 0x34] */
  ecx = R32((uint32_t)(eax + 0x34u));
/* e17095: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e17097: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e17098: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0xe1709bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e1709b: /* e1709b: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* e1709d: mov ecx, esi */
  ecx = esi;
/* e1709f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* e170a6: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0xe170acu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e170ac: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e170af: mov edi, dword ptr [esi + 0x38] */
  edi = R32((uint32_t)(esi + 0x38u));
/* e170b2: not eax */
  eax = ~eax;
/* e170b4: xor eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* e170b6: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e170b9: mov ecx, edi */
  ecx = edi;
/* e170bb: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* e170bd: mov eax, dword ptr [esi + 0x70] */
  eax = R32((uint32_t)(esi + 0x70u));
/* e170c0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e170c2: mov dword ptr [esi + 0x38], ecx */
  W32((uint32_t)(esi + 0x38u), ecx);
/* e170c5: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* e170c9: je 0xe17189 */
  if (zf) goto L_e17189;
L_e170cf: /* e170cf: mov eax, dword ptr [0xe6590c] */
  eax = R32((uint32_t)(0xe6590cu));
/* e170d4: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e170d7: jne 0xe17189 */
  if (!zf) goto L_e17189;
L_e170dd: /* e170dd: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* e170e0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e170e2: je 0xe17189 */
  if (zf) goto L_e17189;
L_e170e8: /* e170e8: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* e170eb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e170ed: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* e170f0: je 0xe17169 */
  if (zf) goto L_e17169;
L_e170f2: /* e170f2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e170f4: je 0xe1717a */
  if (zf) goto L_e1717a;
L_e170fa: /* e170fa: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* e170fd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e170ff: je 0xe1717a */
  if (zf) goto L_e1717a;
L_e17101: /* e17101: mov dword ptr [ebx + 0x68], ecx */
  W32((uint32_t)(ebx + 0x68u), ecx);
/* e17104: mov dword ptr [ebx + 0x6c], eax */
  W32((uint32_t)(ebx + 0x6cu), eax);
/* e17107: jmp 0xe1717a */
  goto L_e1717a;
L_e17169: /* e17169: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e1716b: je 0xe1717a */
  if (zf) goto L_e1717a;
L_e1716d: /* e1716d: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* e17170: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e17172: je 0xe1717a */
  if (zf) goto L_e1717a;
L_e17174: /* e17174: mov dword ptr [ebx + 0x60], ecx */
  W32((uint32_t)(ebx + 0x60u), ecx);
/* e17177: mov dword ptr [ebx + 0x64], eax */
  W32((uint32_t)(ebx + 0x64u), eax);
L_e1717a: /* e1717a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e1717c: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* e17181: mov ecx, ebx */
  ecx = ebx;
/* e17183: call dword ptr [0xe6588c] */
  esp -= 4; W32(esp, 0xe17189u); SPILL(); f_4e3b84(); if (g_unwind) return; /* Core!?SaveConfig@UObject@@QAEXKPBG@Z */ RELOAD();
L_e17189: /* e17189: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e1718c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e1718d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e1718e: mov eax, 1 */
  eax = 0x1u;
/* e17193: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e1719a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e1719b: mov esp, ebp */
  esp = ebp;
/* e1719d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e1719e: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_e16c09(void) {
  LOAD_REGS();
L_e16c09: /* e16c09: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* e16c0c: push 0xe5ec4c */
  { uint32_t v = 0xe5ec4cu; esp -= 4; W32(esp, v); }
/* e16c11: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* e16c14: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e16c15: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* e16c18: call 0xe25f60 */
  esp -= 4; W32(esp, 0xe16c1du); SPILL(); f_e25f60(); if (g_unwind) return; RELOAD();
  SPILL(); f_e16c1d(); return;
}

void f_e16c1d(void) {
  LOAD_REGS();
L_e16c1d: /* e16c1d: push 0xe2ed20 */
  { uint32_t v = 0xe2ed20u; esp -= 4; W32(esp, v); }
/* e16c22: push 0xe6374c */
  { uint32_t v = 0xe6374cu; esp -= 4; W32(esp, v); }
/* e16c27: call dword ptr [0xe65a5c] */
  esp -= 4; W32(esp, 0xe16c2du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* e16c2d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e16c30: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e16c32: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e16c34: call 0xe25f60 */
  esp -= 4; W32(esp, 0xe16c39u); SPILL(); f_e25f60(); if (g_unwind) return; RELOAD();
  SPILL(); f_e16c39(); return;
}

void f_e16c39(void) {
  LOAD_REGS();
L_e16c39: /* e16c39: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* e16c3c: push 0xe5ec4c */
  { uint32_t v = 0xe5ec4cu; esp -= 4; W32(esp, v); }
/* e16c41: lea edx, [ebp - 0x2c] */
  edx = (uint32_t)(ebp + 0xffffffd4u);
/* e16c44: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e16c45: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* e16c48: call 0xe25f60 */
  esp -= 4; W32(esp, 0xe16c4du); SPILL(); f_e25f60(); if (g_unwind) return; RELOAD();
  SPILL(); f_e16c4d(); return;
}

void f_e16c4d(void) {
  LOAD_REGS();
L_e16c4d: /* e16c4d: push 0xe2ecf8 */
  { uint32_t v = 0xe2ecf8u; esp -= 4; W32(esp, v); }
/* e16c52: push 0xe63754 */
  { uint32_t v = 0xe63754u; esp -= 4; W32(esp, v); }
/* e16c57: call dword ptr [0xe65a5c] */
  esp -= 4; W32(esp, 0xe16c5du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* e16c5d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e16c60: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e16c62: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e16c64: call 0xe25f60 */
  esp -= 4; W32(esp, 0xe16c69u); SPILL(); f_e25f60(); if (g_unwind) return; RELOAD();
/* e16c69: mov eax, dword ptr [esi + 0x194] */
  eax = R32((uint32_t)(esi + 0x194u));
/* e16c6f: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e16c72: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e16c73: call dword ptr [0xe65dfc] */
  esp -= 4; W32(esp, 0xe16c79u); SPILL(); call_ind(R32(0xe65dfcu)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* e16c79: mov edx, dword ptr [esi + 0x194] */
  edx = R32((uint32_t)(esi + 0x194u));
/* e16c7f: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* e16c82: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e16c84: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e16c85: call dword ptr [0xe65d88] */
  esp -= 4; W32(esp, 0xe16c8bu); SPILL(); call_ind(R32(0xe65d88u)); if (g_unwind) return; /* USER32!SetMenu */ RELOAD();
/* e16c8b: mov ecx, dword ptr [0xe6590c] */
  ecx = R32((uint32_t)(0xe6590cu));
/* e16c91: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e16c94: jne 0xe16cff */
  if (!zf) goto L_e16cff;
L_e16c96: /* e16c96: mov edx, dword ptr [0xe65920] */
  edx = R32((uint32_t)(0xe65920u));
/* e16c9c: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e16c9f: push -0x10 */
  { uint32_t v = 0xfffffff0u; esp -= 4; W32(esp, v); }
/* e16ca1: je 0xe16ccd */
  if (zf) goto L_e16ccd;
L_e16ca3: /* e16ca3: mov eax, dword ptr [esi + 0x194] */
  eax = R32((uint32_t)(esi + 0x194u));
/* e16ca9: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e16cac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e16cad: call dword ptr [0xe65d8c] */
  esp -= 4; W32(esp, 0xe16cb3u); SPILL(); call_ind(R32(0xe65d8cu)); if (g_unwind) return; /* USER32!GetWindowLongW */ RELOAD();
/* e16cb3: mov edx, dword ptr [esi + 0x194] */
  edx = R32((uint32_t)(esi + 0x194u));
/* e16cb9: and eax, 0xff3bffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xff3bffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e16cbe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e16cbf: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* e16cc2: push -0x10 */
  { uint32_t v = 0xfffffff0u; esp -= 4; W32(esp, v); }
/* e16cc4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e16cc5: call dword ptr [0xe65dcc] */
  esp -= 4; W32(esp, 0xe16ccbu); SPILL(); call_ind(R32(0xe65dccu)); if (g_unwind) return; /* USER32!SetWindowLongW */ RELOAD();
/* e16ccb: jmp 0xe16cf5 */
  goto L_e16cf5;
L_e16ccd: /* e16ccd: mov ecx, dword ptr [esi + 0x194] */
  ecx = R32((uint32_t)(esi + 0x194u));
/* e16cd3: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* e16cd6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e16cd7: call dword ptr [0xe65d90] */
  esp -= 4; W32(esp, 0xe16cddu); SPILL(); call_ind(R32(0xe65d90u)); if (g_unwind) return; /* USER32!GetWindowLongA */ RELOAD();
/* e16cdd: and eax, 0xff3bffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xff3bffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e16ce2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e16ce3: mov eax, dword ptr [esi + 0x194] */
  eax = R32((uint32_t)(esi + 0x194u));
/* e16ce9: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e16cec: push -0x10 */
  { uint32_t v = 0xfffffff0u; esp -= 4; W32(esp, v); }
/* e16cee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e16cef: call dword ptr [0xe65dd0] */
  esp -= 4; W32(esp, 0xe16cf5u); SPILL(); call_ind(R32(0xe65dd0u)); if (g_unwind) return; /* USER32!SetWindowLongA */ RELOAD();
L_e16cf5: /* e16cf5: mov dword ptr [esi + 0x1ac], 1 */
  W32((uint32_t)(esi + 0x1acu), 0x1u);
L_e16cff: /* e16cff: mov edx, dword ptr [0xe65920] */
  edx = R32((uint32_t)(0xe65920u));
/* e16d05: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e16d08: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e16d0a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e16d0c: push 0xb */
  { uint32_t v = 0xbu; esp -= 4; W32(esp, v); }
/* e16d0e: je 0xe16d22 */
  if (zf) goto L_e16d22;
L_e16d10: /* e16d10: mov eax, dword ptr [esi + 0x194] */
  eax = R32((uint32_t)(esi + 0x194u));
/* e16d16: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e16d19: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e16d1a: call dword ptr [0xe65df8] */
  esp -= 4; W32(esp, 0xe16d20u); SPILL(); call_ind(R32(0xe65df8u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* e16d20: jmp 0xe16d32 */
  goto L_e16d32;
L_e16d22: /* e16d22: mov edx, dword ptr [esi + 0x194] */
  edx = R32((uint32_t)(esi + 0x194u));
/* e16d28: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* e16d2b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e16d2c: call dword ptr [0xe65dfc] */
  esp -= 4; W32(esp, 0xe16d32u); SPILL(); call_ind(R32(0xe65dfcu)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
L_e16d32: /* e16d32: dec dword ptr [esi + 0x1a4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x1a4u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(esi + 0x1a4u), r);
  }
/* e16d38: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* e16d3b: xor edx, edx */
  edx = 0;
/* e16d3d: mov ecx, ebx */
  ecx = ebx;
/* e16d3f: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  ecx = r;
  }
/* e16d42: mov dword ptr [ebp - 4], edx */
  W32((uint32_t)(ebp + 0xfffffffcu), edx);
/* e16d45: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* e16d48: jne 0xe16d50 */
  if (!zf) goto L_e16d50;
L_e16d4a: /* e16d4a: mov dword ptr [esi + 0x140], edx */
  W32((uint32_t)(esi + 0x140u), edx);
L_e16d50: /* e16d50: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e16d52: je 0xe16e5a */
  if (zf) goto L_e16e5a;
L_e16d58: /* e16d58: mov ecx, dword ptr [0xe6590c] */
  ecx = R32((uint32_t)(0xe6590cu));
/* e16d5e: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e16d61: jne 0xe16e5a */
  if (!zf) goto L_e16e5a;
L_e16d67: /* e16d67: mov ecx, dword ptr [esi + 0x70] */
  ecx = R32((uint32_t)(esi + 0x70u));
/* e16d6a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e16d6c: je 0xe16e5a */
  if (zf) goto L_e16e5a;
L_e16d72: /* e16d72: call dword ptr [0xe65954] */
  esp -= 4; W32(esp, 0xe16d78u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* e16d78: mov ecx, eax */
  ecx = eax;
/* e16d7a: call dword ptr [0xe65900] */
  esp -= 4; W32(esp, 0xe16d80u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* e16d80: mov edi, dword ptr [0xe65888] */
  edi = R32((uint32_t)(0xe65888u));
/* e16d86: push 0xe6375c */
  { uint32_t v = 0xe6375cu; esp -= 4; W32(esp, v); }
/* e16d8b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e16d8c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe16d8eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e16d8e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e16d91: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e16d93: je 0xe16db9 */
  if (zf) goto L_e16db9;
L_e16d95: /* e16d95: mov ecx, dword ptr [esi + 0x70] */
  ecx = R32((uint32_t)(esi + 0x70u));
/* e16d98: call dword ptr [0xe65954] */
  esp -= 4; W32(esp, 0xe16d9eu); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* e16d9e: mov ecx, eax */
  ecx = eax;
/* e16da0: call dword ptr [0xe65900] */
  esp -= 4; W32(esp, 0xe16da6u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* e16da6: push 0xe63780 */
  { uint32_t v = 0xe63780u; esp -= 4; W32(esp, v); }
/* e16dab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e16dac: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe16daeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e16dae: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e16db1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e16db3: jne 0xe16e5a */
  if (!zf) goto L_e16e5a;
L_e16db9: /* e16db9: inc dword ptr [esi + 0x1a4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x1a4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi + 0x1a4u), r);
  }
/* e16dbf: mov edx, dword ptr [0xe65920] */
  edx = R32((uint32_t)(0xe65920u));
/* e16dc5: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e16dc8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e16dca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e16dcc: push 0xb */
  { uint32_t v = 0xbu; esp -= 4; W32(esp, v); }
/* e16dce: je 0xe16de2 */
  if (zf) goto L_e16de2;
L_e16dd0: /* e16dd0: mov eax, dword ptr [esi + 0x194] */
  eax = R32((uint32_t)(esi + 0x194u));
/* e16dd6: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e16dd9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e16dda: call dword ptr [0xe65df8] */
  esp -= 4; W32(esp, 0xe16de0u); SPILL(); call_ind(R32(0xe65df8u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* e16de0: jmp 0xe16df2 */
  goto L_e16df2;
L_e16de2: /* e16de2: mov edx, dword ptr [esi + 0x194] */
  edx = R32((uint32_t)(esi + 0x194u));
/* e16de8: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* e16deb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e16dec: call dword ptr [0xe65dfc] */
  esp -= 4; W32(esp, 0xe16df2u); SPILL(); call_ind(R32(0xe65dfcu)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
L_e16df2: /* e16df2: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* e16df5: xor ecx, ecx */
  ecx = 0;
/* e16df7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e16df8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e16dfb: xor eax, eax */
  eax = 0;
/* e16dfd: mov edx, esp */
  edx = esp;
/* e16dff: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* e16e01: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* e16e04: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* e16e07: mov ecx, dword ptr [esi + 0x194] */
  ecx = R32((uint32_t)(esi + 0x194u));
/* e16e0d: mov dword ptr [edx + 8], ebx */
  W32((uint32_t)(edx + 0x8u), ebx);
/* e16e10: mov dword ptr [edx + 0xc], eax */
  W32((uint32_t)(edx + 0xcu), eax);
/* e16e13: call dword ptr [0xe65f3c] */
  esp -= 4; W32(esp, 0xe16e19u); SPILL(); f_d8171c(); if (g_unwind) return; /* Window!?MoveWindow@WWindow@@QAEXUFRect@@H@Z */ RELOAD();
/* e16e19: mov ecx, dword ptr [0xe65920] */
  ecx = R32((uint32_t)(0xe65920u));
/* e16e1f: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e16e22: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e16e24: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e16e26: push 0xb */
  { uint32_t v = 0xbu; esp -= 4; W32(esp, v); }
/* e16e28: je 0xe16e42 */
  if (zf) goto L_e16e42;
L_e16e2a: /* e16e2a: mov edx, dword ptr [esi + 0x194] */
  edx = R32((uint32_t)(esi + 0x194u));
/* e16e30: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* e16e33: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e16e34: call dword ptr [0xe65df8] */
  esp -= 4; W32(esp, 0xe16e3au); SPILL(); call_ind(R32(0xe65df8u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* e16e3a: dec dword ptr [esi + 0x1a4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x1a4u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(esi + 0x1a4u), r);
  }
/* e16e40: jmp 0xe16e5d */
  goto L_e16e5d;
L_e16e42: /* e16e42: mov ecx, dword ptr [esi + 0x194] */
  ecx = R32((uint32_t)(esi + 0x194u));
/* e16e48: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* e16e4b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e16e4c: call dword ptr [0xe65dfc] */
  esp -= 4; W32(esp, 0xe16e52u); SPILL(); call_ind(R32(0xe65dfcu)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* e16e52: dec dword ptr [esi + 0x1a4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x1a4u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(esi + 0x1a4u), r);
  }
/* e16e58: jmp 0xe16e5d */
  goto L_e16e5d;
L_e16e5a: /* e16e5a: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
L_e16e5d: /* e16e5d: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* e16e60: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* e16e63: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* e16e66: mov eax, dword ptr [esi + 0x1a8] */
  eax = R32((uint32_t)(esi + 0x1a8u));
/* e16e6c: and ecx, 0xffffffdf */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffdfu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* e16e6f: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e16e71: mov dword ptr [esi + 0x1a8], ecx */
  W32((uint32_t)(esi + 0x1a8u), ecx);
/* e16e77: mov dword ptr [esi + 0x88], ebx */
  W32((uint32_t)(esi + 0x88u), ebx);
/* e16e7d: mov dword ptr [esi + 0x8c], edx */
  W32((uint32_t)(esi + 0x8cu), edx);
/* e16e83: jne 0xe16e96 */
  if (!zf) goto L_e16e96;
L_e16e85: /* e16e85: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e16e87: je 0xe16e96 */
  if (zf) goto L_e16e96;
L_e16e89: /* e16e89: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* e16e8b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e16e8c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e16e8d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e16e8e: mov ecx, esi */
  ecx = esi;
/* e16e90: call dword ptr [eax + 0xa0] */
  { uint32_t t = R32((uint32_t)(eax + 0xa0u)); esp -= 4; W32(esp, 0xe16e96u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e16e96: /* e16e96: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e16e98: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* e16e9c: je 0xe16f29 */
  if (zf) goto L_e16f29;
L_e16ea2: /* e16ea2: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* e16ea4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e16ea6: mov ecx, esi */
  ecx = esi;
/* e16ea8: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xe16eabu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e16eab: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* e16ead: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e16eaf: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e16eb1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e16eb3: mov ecx, esi */
  ecx = esi;
/* e16eb5: call dword ptr [eax + 0xa0] */
  { uint32_t t = R32((uint32_t)(eax + 0xa0u)); esp -= 4; W32(esp, 0xe16ebbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e16ebb: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* e16ebe: movzx ecx, word ptr [ebx + 0xf4] */
  ecx = (uint32_t)(R16((uint32_t)(ebx + 0xf4u)));
/* e16ec5: mov edx, dword ptr [esi + 0x194] */
  edx = R32((uint32_t)(esi + 0x194u));
/* e16ecb: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* e16ece: mov edi, dword ptr [0xe65d94] */
  edi = R32((uint32_t)(0xe65d94u));
/* e16ed4: push 0x1b */
  { uint32_t v = 0x1bu; esp -= 4; W32(esp, v); }
/* e16ed6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e16ed8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e16ed9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e16eda: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe16edcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e16edc: movzx ecx, word ptr [ebx + 0xf6] */
  ecx = (uint32_t)(R16((uint32_t)(ebx + 0xf6u)));
/* e16ee3: mov edx, dword ptr [esi + 0x194] */
  edx = R32((uint32_t)(esi + 0x194u));
/* e16ee9: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* e16eec: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* e16eee: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e16ef0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e16ef1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e16ef2: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe16ef4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e16ef4: movzx ecx, word ptr [ebx + 0xf8] */
  ecx = (uint32_t)(R16((uint32_t)(ebx + 0xf8u)));
/* e16efb: mov edx, dword ptr [esi + 0x194] */
  edx = R32((uint32_t)(esi + 0x194u));
/* e16f01: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* e16f04: push 0x1b */
  { uint32_t v = 0x1bu; esp -= 4; W32(esp, v); }
/* e16f06: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e16f08: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e16f09: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e16f0a: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe16f0cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e16f0c: movzx ecx, word ptr [ebx + 0xfa] */
  ecx = (uint32_t)(R16((uint32_t)(ebx + 0xfau)));
/* e16f13: mov edx, dword ptr [esi + 0x194] */
  edx = R32((uint32_t)(esi + 0x194u));
/* e16f19: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* e16f1c: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* e16f1e: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e16f20: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e16f21: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e16f22: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe16f24u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e16f24: jmp 0xe1706b */
  goto L_e1706b;
L_e16f29: /* e16f29: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* e16f2c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e16f2e: jne 0xe17068 */
  if (!zf) goto L_e17068;
L_e16f34: /* e16f34: test byte ptr [ebp + 8], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x8u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e16f38: jne 0xe17068 */
  if (!zf) goto L_e17068;
L_e16f3e: /* e16f3e: mov eax, dword ptr [esi + 0x1ac] */
  eax = R32((uint32_t)(esi + 0x1acu));
/* e16f44: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e16f46: je 0xe16fb3 */
  if (zf) goto L_e16fb3;
L_e16f48: /* e16f48: inc dword ptr [esi + 0x1a4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x1a4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi + 0x1a4u), r);
  }
/* e16f4e: mov ecx, dword ptr [0xe65920] */
  ecx = R32((uint32_t)(0xe65920u));
/* e16f54: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e16f57: push -0x10 */
  { uint32_t v = 0xfffffff0u; esp -= 4; W32(esp, v); }
/* e16f59: je 0xe16f85 */
  if (zf) goto L_e16f85;
L_e16f5b: /* e16f5b: mov edx, dword ptr [esi + 0x194] */
  edx = R32((uint32_t)(esi + 0x194u));
/* e16f61: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* e16f64: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e16f65: call dword ptr [0xe65d8c] */
  esp -= 4; W32(esp, 0xe16f6bu); SPILL(); call_ind(R32(0xe65d8cu)); if (g_unwind) return; /* USER32!GetWindowLongW */ RELOAD();
/* e16f6b: mov ecx, dword ptr [esi + 0x194] */
  ecx = R32((uint32_t)(esi + 0x194u));
/* e16f71: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* e16f74: or eax, 0xc40000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xc40000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* e16f79: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e16f7a: push -0x10 */
  { uint32_t v = 0xfffffff0u; esp -= 4; W32(esp, v); }
/* e16f7c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e16f7d: call dword ptr [0xe65dcc] */
  esp -= 4; W32(esp, 0xe16f83u); SPILL(); call_ind(R32(0xe65dccu)); if (g_unwind) return; /* USER32!SetWindowLongW */ RELOAD();
/* e16f83: jmp 0xe16fad */
  goto L_e16fad;
L_e16f85: /* e16f85: mov eax, dword ptr [esi + 0x194] */
  eax = R32((uint32_t)(esi + 0x194u));
/* e16f8b: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e16f8e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e16f8f: call dword ptr [0xe65d90] */
  esp -= 4; W32(esp, 0xe16f95u); SPILL(); call_ind(R32(0xe65d90u)); if (g_unwind) return; /* USER32!GetWindowLongA */ RELOAD();
/* e16f95: mov edx, dword ptr [esi + 0x194] */
  edx = R32((uint32_t)(esi + 0x194u));
/* e16f9b: or eax, 0xc40000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xc40000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* e16fa0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e16fa1: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* e16fa4: push -0x10 */
  { uint32_t v = 0xfffffff0u; esp -= 4; W32(esp, v); }
/* e16fa6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e16fa7: call dword ptr [0xe65dd0] */
  esp -= 4; W32(esp, 0xe16fadu); SPILL(); call_ind(R32(0xe65dd0u)); if (g_unwind) return; /* USER32!SetWindowLongA */ RELOAD();
L_e16fad: /* e16fad: dec dword ptr [esi + 0x1a4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x1a4u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(esi + 0x1a4u), r);
  }
L_e16fb3: /* e16fb3: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* e16fb6: mov edx, dword ptr [0xe65920] */
  edx = R32((uint32_t)(0xe65920u));
/* e16fbc: xor eax, eax */
  eax = 0;
/* e16fbe: mov dword ptr [ebp - 0x6c], eax */
  W32((uint32_t)(ebp + 0xffffff94u), eax);
/* e16fc1: mov dword ptr [ebp - 0x68], eax */
  W32((uint32_t)(ebp + 0xffffff98u), eax);
/* e16fc4: mov dword ptr [ebp - 0x64], ebx */
  W32((uint32_t)(ebp + 0xffffff9cu), ebx);
/* e16fc7: mov dword ptr [ebp - 0x60], ecx */
  W32((uint32_t)(ebp + 0xffffffa0u), ecx);
/* e16fca: cmp dword ptr [edx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e16fcc: push -0x10 */
  { uint32_t v = 0xfffffff0u; esp -= 4; W32(esp, v); }
/* e16fce: je 0xe16fe2 */
  if (zf) goto L_e16fe2;
L_e16fd0: /* e16fd0: mov eax, dword ptr [esi + 0x194] */
  eax = R32((uint32_t)(esi + 0x194u));
/* e16fd6: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e16fd9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e16fda: call dword ptr [0xe65d8c] */
  esp -= 4; W32(esp, 0xe16fe0u); SPILL(); call_ind(R32(0xe65d8cu)); if (g_unwind) return; /* USER32!GetWindowLongW */ RELOAD();
/* e16fe0: jmp 0xe16ff2 */
  goto L_e16ff2;
L_e16fe2: /* e16fe2: mov edx, dword ptr [esi + 0x194] */
  edx = R32((uint32_t)(esi + 0x194u));
/* e16fe8: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* e16feb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e16fec: call dword ptr [0xe65d90] */
  esp -= 4; W32(esp, 0xe16ff2u); SPILL(); call_ind(R32(0xe65d90u)); if (g_unwind) return; /* USER32!GetWindowLongA */ RELOAD();
L_e16ff2: /* e16ff2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e16ff4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e16ff5: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* e16ff8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e16ff9: call dword ptr [0xe65dc8] */
  esp -= 4; W32(esp, 0xe16fffu); SPILL(); call_ind(R32(0xe65dc8u)); if (g_unwind) return; /* USER32!AdjustWindowRect */ RELOAD();
/* e16fff: mov edx, dword ptr [esi + 0x30] */
  edx = R32((uint32_t)(esi + 0x30u));
/* e17002: mov eax, dword ptr [edx + 0x534] */
  eax = R32((uint32_t)(edx + 0x534u));
/* e17008: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e1700b: jne 0xe1705f */
  if (!zf) goto L_e1705f;
L_e1700d: /* e1700d: mov edi, dword ptr [ebp - 0x68] */
  edi = R32((uint32_t)(ebp + 0xffffff98u));
/* e17010: mov ebx, dword ptr [esi + 0x1a4] */
  ebx = R32((uint32_t)(esi + 0x1a4u));
/* e17016: mov eax, dword ptr [ebp - 0x60] */
  eax = R32((uint32_t)(ebp + 0xffffffa0u));
/* e17019: mov edx, dword ptr [ebp - 0x6c] */
  edx = R32((uint32_t)(ebp + 0xffffff94u));
/* e1701c: mov ecx, dword ptr [ebp - 0x64] */
  ecx = R32((uint32_t)(ebp + 0xffffff9cu));
/* e1701f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* e17020: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* e17022: mov edi, dword ptr [ebp - 0x58] */
  edi = R32((uint32_t)(ebp + 0xffffffa8u));
/* e17025: mov dword ptr [esi + 0x1a4], ebx */
  W32((uint32_t)(esi + 0x1a4u), ebx);
/* e1702b: mov ebx, dword ptr [ebp - 0x5c] */
  ebx = R32((uint32_t)(ebp + 0xffffffa4u));
/* e1702e: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* e17030: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e17032: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e17034: mov dword ptr [ebp - 0x34], ebx */
  W32((uint32_t)(ebp + 0xffffffccu), ebx);
/* e17037: mov edx, edi */
  edx = edi;
/* e17039: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e1703b: mov eax, ebx */
  eax = ebx;
/* e1703d: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e17040: mov ebx, esp */
  ebx = esp;
/* e17042: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* e17044: mov dword ptr [ebx + 4], edi */
  W32((uint32_t)(ebx + 0x4u), edi);
/* e17047: mov dword ptr [ebx + 8], ecx */
  W32((uint32_t)(ebx + 0x8u), ecx);
/* e1704a: mov ecx, dword ptr [esi + 0x194] */
  ecx = R32((uint32_t)(esi + 0x194u));
/* e17050: mov dword ptr [ebx + 0xc], edx */
  W32((uint32_t)(ebx + 0xcu), edx);
/* e17053: call dword ptr [0xe65f3c] */
  esp -= 4; W32(esp, 0xe17059u); SPILL(); f_d8171c(); if (g_unwind) return; /* Window!?MoveWindow@WWindow@@QAEXUFRect@@H@Z */ RELOAD();
/* e17059: dec dword ptr [esi + 0x1a4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x1a4u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(esi + 0x1a4u), r);
  }
L_e1705f: /* e1705f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* e17061: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e17063: mov ecx, esi */
  ecx = esi;
/* e17065: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0xe17068u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e17068: /* e17068: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
L_e1706b: /* e1706b: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* e1706e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e17070: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* e17077: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* e1707b: je 0xe1709b */
  if (zf) goto L_e1709b;
L_e1707d: /* e1707d: mov eax, dword ptr [ebx + 0x28] */
  eax = R32((uint32_t)(ebx + 0x28u));
/* e17080: mov ecx, dword ptr [eax + 0x34] */
  ecx = R32((uint32_t)(eax + 0x34u));
/* e17083: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e17085: call dword ptr [edx + 0xa8] */
  { uint32_t t = R32((uint32_t)(edx + 0xa8u)); esp -= 4; W32(esp, 0xe1708bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e1708b: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1708d: je 0xe1709b */
  if (zf) goto L_e1709b;
L_e1708f: /* e1708f: mov eax, dword ptr [ebx + 0x28] */
  eax = R32((uint32_t)(ebx + 0x28u));
/* e17092: mov ecx, dword ptr [eax + 0x34] */
  ecx = R32((uint32_t)(eax + 0x34u));
/* e17095: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e17097: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e17098: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0xe1709bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e1709b: /* e1709b: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* e1709d: mov ecx, esi */
  ecx = esi;
/* e1709f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* e170a6: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0xe170acu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e170ac: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e170af: mov edi, dword ptr [esi + 0x38] */
  edi = R32((uint32_t)(esi + 0x38u));
/* e170b2: not eax */
  eax = ~eax;
/* e170b4: xor eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* e170b6: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e170b9: mov ecx, edi */
  ecx = edi;
/* e170bb: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* e170bd: mov eax, dword ptr [esi + 0x70] */
  eax = R32((uint32_t)(esi + 0x70u));
/* e170c0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e170c2: mov dword ptr [esi + 0x38], ecx */
  W32((uint32_t)(esi + 0x38u), ecx);
/* e170c5: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* e170c9: je 0xe17189 */
  if (zf) goto L_e17189;
L_e170cf: /* e170cf: mov eax, dword ptr [0xe6590c] */
  eax = R32((uint32_t)(0xe6590cu));
/* e170d4: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e170d7: jne 0xe17189 */
  if (!zf) goto L_e17189;
L_e170dd: /* e170dd: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* e170e0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e170e2: je 0xe17189 */
  if (zf) goto L_e17189;
L_e170e8: /* e170e8: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* e170eb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e170ed: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* e170f0: je 0xe17169 */
  if (zf) goto L_e17169;
L_e170f2: /* e170f2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e170f4: je 0xe1717a */
  if (zf) goto L_e1717a;
L_e170fa: /* e170fa: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* e170fd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e170ff: je 0xe1717a */
  if (zf) goto L_e1717a;
L_e17101: /* e17101: mov dword ptr [ebx + 0x68], ecx */
  W32((uint32_t)(ebx + 0x68u), ecx);
/* e17104: mov dword ptr [ebx + 0x6c], eax */
  W32((uint32_t)(ebx + 0x6cu), eax);
/* e17107: jmp 0xe1717a */
  goto L_e1717a;
L_e17169: /* e17169: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e1716b: je 0xe1717a */
  if (zf) goto L_e1717a;
L_e1716d: /* e1716d: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* e17170: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e17172: je 0xe1717a */
  if (zf) goto L_e1717a;
L_e17174: /* e17174: mov dword ptr [ebx + 0x60], ecx */
  W32((uint32_t)(ebx + 0x60u), ecx);
/* e17177: mov dword ptr [ebx + 0x64], eax */
  W32((uint32_t)(ebx + 0x64u), eax);
L_e1717a: /* e1717a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e1717c: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* e17181: mov ecx, ebx */
  ecx = ebx;
/* e17183: call dword ptr [0xe6588c] */
  esp -= 4; W32(esp, 0xe17189u); SPILL(); f_4e3b84(); if (g_unwind) return; /* Core!?SaveConfig@UObject@@QAEXKPBG@Z */ RELOAD();
L_e17189: /* e17189: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e1718c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e1718d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e1718e: mov eax, 1 */
  eax = 0x1u;
/* e17193: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e1719a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e1719b: mov esp, ebp */
  esp = ebp;
/* e1719d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e1719e: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_e17109(void) {
  LOAD_REGS();
L_e17109: /* e17109: mov ecx, dword ptr [ebp - 0x48] */
  ecx = R32((uint32_t)(ebp + 0xffffffb8u));
/* e1710c: push 0xe5ec4c */
  { uint32_t v = 0xe5ec4cu; esp -= 4; W32(esp, v); }
/* e17111: lea edx, [ebp - 0x38] */
  edx = (uint32_t)(ebp + 0xffffffc8u);
/* e17114: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e17115: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* e17118: call 0xe25f60 */
  esp -= 4; W32(esp, 0xe1711du); SPILL(); f_e25f60(); if (g_unwind) return; RELOAD();
  SPILL(); f_e1711d(); return;
}

void f_e1711d(void) {
  LOAD_REGS();
L_e1711d: /* e1711d: push 0xe2ecdc */
  { uint32_t v = 0xe2ecdcu; esp -= 4; W32(esp, v); }
/* e17122: push 0xe637a8 */
  { uint32_t v = 0xe637a8u; esp -= 4; W32(esp, v); }
/* e17127: call dword ptr [0xe65a5c] */
  esp -= 4; W32(esp, 0xe1712du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* e1712d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e17130: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e17132: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e17134: call 0xe25f60 */
  esp -= 4; W32(esp, 0xe17139u); SPILL(); f_e25f60(); if (g_unwind) return; RELOAD();
  SPILL(); f_e17139(); return;
}

void f_e17139(void) {
  LOAD_REGS();
L_e17139: /* e17139: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* e1713c: push 0xe5ec4c */
  { uint32_t v = 0xe5ec4cu; esp -= 4; W32(esp, v); }
/* e17141: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* e17144: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e17145: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* e17148: call 0xe25f60 */
  esp -= 4; W32(esp, 0xe1714du); SPILL(); f_e25f60(); if (g_unwind) return; RELOAD();
  SPILL(); f_e1714d(); return;
}

void f_e1714d(void) {
  LOAD_REGS();
L_e1714d: /* e1714d: push 0xe2ecc0 */
  { uint32_t v = 0xe2ecc0u; esp -= 4; W32(esp, v); }
/* e17152: push 0xe637b0 */
  { uint32_t v = 0xe637b0u; esp -= 4; W32(esp, v); }
/* e17157: call dword ptr [0xe65a5c] */
  esp -= 4; W32(esp, 0xe1715du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* e1715d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e17160: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e17162: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e17164: call 0xe25f60 */
  esp -= 4; W32(esp, 0xe17169u); SPILL(); f_e25f60(); if (g_unwind) return; RELOAD();
/* e17169: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e1716b: je 0xe1717a */
  if (zf) goto L_e1717a;
L_e1716d: /* e1716d: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* e17170: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e17172: je 0xe1717a */
  if (zf) goto L_e1717a;
L_e17174: /* e17174: mov dword ptr [ebx + 0x60], ecx */
  W32((uint32_t)(ebx + 0x60u), ecx);
/* e17177: mov dword ptr [ebx + 0x64], eax */
  W32((uint32_t)(ebx + 0x64u), eax);
L_e1717a: /* e1717a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e1717c: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* e17181: mov ecx, ebx */
  ecx = ebx;
/* e17183: call dword ptr [0xe6588c] */
  esp -= 4; W32(esp, 0xe17189u); SPILL(); f_4e3b84(); if (g_unwind) return; /* Core!?SaveConfig@UObject@@QAEXKPBG@Z */ RELOAD();
/* e17189: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e1718c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e1718d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e1718e: mov eax, 1 */
  eax = 0x1u;
/* e17193: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e1719a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e1719b: mov esp, ebp */
  esp = ebp;
/* e1719d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e1719e: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_e171a1(void) {
  LOAD_REGS();
L_e171a1: /* e171a1: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* e171a4: push 0xe5ec4c */
  { uint32_t v = 0xe5ec4cu; esp -= 4; W32(esp, v); }
/* e171a9: lea edx, [ebp - 0x40] */
  edx = (uint32_t)(ebp + 0xffffffc0u);
/* e171ac: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e171ad: mov dword ptr [ebp - 0x40], ecx */
  W32((uint32_t)(ebp + 0xffffffc0u), ecx);
/* e171b0: call 0xe25f60 */
  esp -= 4; W32(esp, 0xe171b5u); SPILL(); f_e25f60(); if (g_unwind) return; RELOAD();
  SPILL(); f_e171b5(); return;
}

void f_e171b5(void) {
  LOAD_REGS();
L_e171b5: /* e171b5: push 0xe2eca8 */
  { uint32_t v = 0xe2eca8u; esp -= 4; W32(esp, v); }
/* e171ba: push 0xe637b8 */
  { uint32_t v = 0xe637b8u; esp -= 4; W32(esp, v); }
/* e171bf: call dword ptr [0xe65a5c] */
  esp -= 4; W32(esp, 0xe171c5u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* e171c5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e171c8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e171ca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e171cc: call 0xe25f60 */
  esp -= 4; W32(esp, 0xe171d1u); SPILL(); f_e25f60(); if (g_unwind) return; RELOAD();
  SPILL(); f_e171d1(); return;
}

void f_e171d1(void) {
  LOAD_REGS();
L_e171d1: /* e171d1: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* e171d4: push 0xe5ec4c */
  { uint32_t v = 0xe5ec4cu; esp -= 4; W32(esp, v); }
/* e171d9: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* e171dc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e171dd: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* e171e0: call 0xe25f60 */
  esp -= 4; W32(esp, 0xe171e5u); SPILL(); f_e25f60(); if (g_unwind) return; RELOAD();
  SPILL(); f_e171e5(); return;
}

void f_e171e5(void) {
  LOAD_REGS();
L_e171e5: /* e171e5: push 0xe2ec58 */
  { uint32_t v = 0xe2ec58u; esp -= 4; W32(esp, v); }
/* e171ea: push 0xe637c0 */
  { uint32_t v = 0xe637c0u; esp -= 4; W32(esp, v); }
/* e171ef: call dword ptr [0xe65a5c] */
  esp -= 4; W32(esp, 0xe171f5u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* e171f5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e171f8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e171fa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e171fc: call 0xe25f60 */
  esp -= 4; W32(esp, 0xe17201u); SPILL(); f_e25f60(); if (g_unwind) return; RELOAD();
L_e17201: guest_badaddr(0xe17201); return;
}

void f_e17460(void) {
  LOAD_REGS();
L_e17460: /* e17460: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* e17463: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e17464: xor eax, eax */
  eax = 0;
/* e17466: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e17468: jle 0xe1747e */
  if ((zf || sf != of)) goto L_e1747e;
L_e1746a: /* e1746a: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* e1746e: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* e17470: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
L_e17472: /* e17472: cmp dword ptr [ecx], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e17474: je 0xe17481 */
  if (zf) goto L_e17481;
L_e17476: /* e17476: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* e17477: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e1747a: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e1747c: jl 0xe17472 */
  if ((sf != of)) goto L_e17472;
L_e1747e: /* e1747e: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_e17481: /* e17481: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e17482: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e174a0(void) {
  LOAD_REGS();
L_e174a0: /* e174a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e174a1: mov ebp, esp */
  ebp = esp;
/* e174a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* e174a5: push 0xe2a4c2 */
  { uint32_t v = 0xe2a4c2u; esp -= 4; W32(esp, v); }
/* e174aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* e174b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e174b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* e174b8: sub esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e174bb: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* e174be: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e174bf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e174c0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e174c1: mov ebx, ecx */
  ebx = ecx;
/* e174c3: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* e174c6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* e174c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e174ca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e174cb: xor edi, edi */
  edi = 0;
/* e174cd: mov ecx, ebx */
  ecx = ebx;
/* e174cf: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* e174d2: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* e174d5: call dword ptr [0xe65b6c] */
  esp -= 4; W32(esp, 0xe174dbu); SPILL(); f_6cb9c4(); if (g_unwind) return; /* Engine!?Exec@UViewport@@UAEHPBGAAVFOutputDevice@@@Z */ RELOAD();
/* e174db: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e174dd: jne 0xe175b8 */
  if (!zf) goto L_e175b8;
L_e174e3: /* e174e3: mov esi, dword ptr [0xe65868] */
  esi = R32((uint32_t)(0xe65868u));
/* e174e9: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* e174ec: push 0xe62d1c */
  { uint32_t v = 0xe62d1cu; esp -= 4; W32(esp, v); }
/* e174f1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e174f2: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xe174f4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e174f4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e174f7: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e174f9: je 0xe17595 */
  if (zf) goto L_e17595;
L_e174ff: /* e174ff: call dword ptr [0xe65c80] */
  esp -= 4; W32(esp, 0xe17505u); SPILL(); call_ind(R32(0xe65c80u)); if (g_unwind) return; /* KERNEL32!GetSystemDefaultLangID */ RELOAD();
/* e17505: mov ecx, dword ptr [0xe65920] */
  ecx = R32((uint32_t)(0xe65920u));
/* e1750b: cmp dword ptr [ecx], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1750d: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* e17510: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* e17512: je 0xe17523 */
  if (zf) goto L_e17523;
L_e17514: /* e17514: lea edx, [ebp - 0x54] */
  edx = (uint32_t)(ebp + 0xffffffacu);
/* e17517: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e17518: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* e1751a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e1751b: call dword ptr [0xe65c84] */
  esp -= 4; W32(esp, 0xe17521u); SPILL(); call_ind(R32(0xe65c84u)); if (g_unwind) return; /* KERNEL32!GetLocaleInfoW */ RELOAD();
/* e17521: jmp 0xe17530 */
  goto L_e17530;
L_e17523: /* e17523: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* e17526: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e17527: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* e17529: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e1752a: call dword ptr [0xe65c88] */
  esp -= 4; W32(esp, 0xe17530u); SPILL(); call_ind(R32(0xe65c88u)); if (g_unwind) return; /* KERNEL32!GetLocaleInfoA */ RELOAD();
L_e17530: /* e17530: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e17532: je 0xe17585 */
  if (zf) goto L_e17585;
L_e17534: /* e17534: lea edx, [ebp - 0x54] */
  edx = (uint32_t)(ebp + 0xffffffacu);
/* e17537: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e17538: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* e1753b: call dword ptr [0xe65914] */
  esp -= 4; W32(esp, 0xe17541u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e17541: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e17543: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* e17546: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e17547: mov ecx, eax */
  ecx = eax;
/* e17549: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* e1754d: call dword ptr [0xe6586c] */
  esp -= 4; W32(esp, 0xe17553u); SPILL(); f_4e42f0(); if (g_unwind) return; /* Core!?Left@FString@@QBE?AV1@H@Z */ RELOAD();
/* e17553: mov ecx, eax */
  ecx = eax;
/* e17555: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* e17559: call dword ptr [0xe65870] */
  esp -= 4; W32(esp, 0xe1755fu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* e1755f: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* e17562: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e17563: call dword ptr [0xe65874] */
  esp -= 4; W32(esp, 0xe17569u); SPILL(); f_4e35da(); if (g_unwind) return; /* Core!?Log@FOutputDevice@@QAEXPBG@Z */ RELOAD();
/* e17569: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* e1756c: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* e17570: call dword ptr [0xe658dc] */
  esp -= 4; W32(esp, 0xe17576u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* e17576: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* e17579: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* e1757d: call dword ptr [0xe658dc] */
  esp -= 4; W32(esp, 0xe17583u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* e17583: jmp 0xe175b8 */
  goto L_e175b8;
L_e17585: /* e17585: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* e17588: push 0xe62d40 */
  { uint32_t v = 0xe62d40u; esp -= 4; W32(esp, v); }
/* e1758d: call dword ptr [0xe65874] */
  esp -= 4; W32(esp, 0xe17593u); SPILL(); f_4e35da(); if (g_unwind) return; /* Core!?Log@FOutputDevice@@QAEXPBG@Z */ RELOAD();
/* e17593: jmp 0xe175b8 */
  goto L_e175b8;
L_e17595: /* e17595: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* e17598: push 0xe62d48 */
  { uint32_t v = 0xe62d48u; esp -= 4; W32(esp, v); }
/* e1759d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e1759e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xe175a0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e175a0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e175a3: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e175a5: je 0xe175d0 */
  if (zf) goto L_e175d0;
L_e175a7: /* e175a7: test byte ptr [ebx + 0x17c], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x17cu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e175ae: je 0xe175b8 */
  if (zf) goto L_e175b8;
L_e175b0: /* e175b0: lea ecx, [ebx - 0x2c] */
  ecx = (uint32_t)(ebx + 0xffffffd4u);
L_e175b3: /* e175b3: call 0xe1106e */
  esp -= 4; W32(esp, 0xe175b8u); SPILL(); f_e1106e(); if (g_unwind) return; RELOAD();
L_e175b8: /* e175b8: mov eax, 1 */
  eax = 0x1u;
/* e175bd: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e175c0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e175c7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e175c8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e175c9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e175ca: mov esp, ebp */
  esp = ebp;
/* e175cc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e175cd: ret 8 */
  esp += 12; SPILL(); return;
L_e175d0: /* e175d0: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* e175d3: push 0xe62d64 */
  { uint32_t v = 0xe62d64u; esp -= 4; W32(esp, v); }
/* e175d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e175d9: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xe175dbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e175db: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e175de: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e175e0: je 0xe175ec */
  if (zf) goto L_e175ec;
L_e175e2: /* e175e2: lea ecx, [ebx - 0x2c] */
  ecx = (uint32_t)(ebx + 0xffffffd4u);
/* e175e5: call 0xe1101e */
  esp -= 4; W32(esp, 0xe175eau); SPILL(); f_e1101e(); if (g_unwind) return; RELOAD();
/* e175ea: jmp 0xe175b8 */
  goto L_e175b8;
L_e175ec: /* e175ec: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* e175ef: push 0xe62d88 */
  { uint32_t v = 0xe62d88u; esp -= 4; W32(esp, v); }
/* e175f4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e175f5: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xe175f7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e175f7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e175fa: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e175fc: je 0xe176d6 */
  if (zf) goto L_e176d6;
L_e17602: /* e17602: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* e17605: push 0xe64284 */
  { uint32_t v = 0xe64284u; esp -= 4; W32(esp, v); }
/* e1760a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e1760b: xor esi, esi */
  esi = 0;
/* e1760d: call dword ptr [0xe658a8] */
  esp -= 4; W32(esp, 0xe17613u); SPILL(); f_4e4192(); if (g_unwind) return; /* Core!?appStrcmp@@YAHPBG0@Z */ RELOAD();
/* e17613: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e17616: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e17618: je 0xe17629 */
  if (zf) goto L_e17629;
L_e1761a: /* e1761a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e1761d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e1761e: call dword ptr [0xe65878] */
  esp -= 4; W32(esp, 0xe17624u); SPILL(); f_4e3fe9(); if (g_unwind) return; /* Core!?appAtoi@@YAHPBG@Z */ RELOAD();
/* e17624: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e17627: mov esi, eax */
  esi = eax;
L_e17629: /* e17629: cmp dword ptr [ebx + 0x188], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x188u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1762f: je 0xe175b8 */
  if (zf) goto L_e175b8;
L_e17631: /* e17631: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e17633: jne 0xe17650 */
  if (!zf) goto L_e17650;
L_e17635: /* e17635: mov ecx, dword ptr [ebx + 0x168] */
  ecx = R32((uint32_t)(ebx + 0x168u));
/* e1763b: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* e1763e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e1763f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e17640: call 0xe25d92 */
  esp -= 4; W32(esp, 0xe17645u); SPILL(); f_e25d92(); if (g_unwind) return; RELOAD();
/* e17645: mov dword ptr [ebx + 0x190], edi */
  W32((uint32_t)(ebx + 0x190u), edi);
/* e1764b: jmp 0xe175b8 */
  goto L_e175b8;
L_e17650: /* e17650: mov eax, dword ptr [ebx + 0x168] */
  eax = R32((uint32_t)(ebx + 0x168u));
/* e17656: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e17659: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e1765a: call 0xe25d98 */
  esp -= 4; W32(esp, 0xe1765fu); SPILL(); f_e25d98(); if (g_unwind) return; RELOAD();
/* e1765f: mov esi, eax */
  esi = eax;
/* e17661: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e17663: jne 0xe176b1 */
  if (!zf) goto L_e176b1;
L_e17665: /* e17665: mov edx, dword ptr [0xe65924] */
  edx = R32((uint32_t)(0xe65924u));
/* e1766b: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e1766d: push 0xe62d9c */
  { uint32_t v = 0xe62d9cu; esp -= 4; W32(esp, v); }
/* e17672: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e17673: call dword ptr [0xe65904] */
  esp -= 4; W32(esp, 0xe17679u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* e17679: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e1767c: call 0xe25da4 */
  esp -= 4; W32(esp, 0xe17681u); SPILL(); f_e25da4(); if (g_unwind) return; RELOAD();
/* e17681: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e17683: je 0xe176a0 */
  if (zf) goto L_e176a0;
L_e17685: /* e17685: mov ecx, dword ptr [ebx + 0x168] */
  ecx = R32((uint32_t)(ebx + 0x168u));
/* e1768b: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* e1768e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e1768f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e17690: call 0xe25d92 */
  esp -= 4; W32(esp, 0xe17695u); SPILL(); f_e25d92(); if (g_unwind) return; RELOAD();
/* e17695: mov dword ptr [ebx + 0x190], edi */
  W32((uint32_t)(ebx + 0x190u), edi);
/* e1769b: jmp 0xe175b8 */
  goto L_e175b8;
L_e176a0: /* e176a0: mov dword ptr [ebx + 0x188], edi */
  W32((uint32_t)(ebx + 0x188u), edi);
/* e176a6: mov dword ptr [ebx + 0x190], edi */
  W32((uint32_t)(ebx + 0x190u), edi);
/* e176ac: jmp 0xe175b8 */
  goto L_e175b8;
L_e176b1: /* e176b1: mov eax, dword ptr [ebx + 0x168] */
  eax = R32((uint32_t)(ebx + 0x168u));
/* e176b7: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e176ba: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e176bb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e176bc: call 0xe25d92 */
  esp -= 4; W32(esp, 0xe176c1u); SPILL(); f_e25d92(); if (g_unwind) return; RELOAD();
/* e176c1: mov edx, dword ptr [ebx + 0x168] */
  edx = R32((uint32_t)(ebx + 0x168u));
/* e176c7: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* e176ca: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e176cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e176cc: call 0xe25d9e */
  esp -= 4; W32(esp, 0xe176d1u); SPILL(); f_e25d9e(); if (g_unwind) return; RELOAD();
/* e176d1: jmp 0xe175b8 */
  goto L_e175b8;
L_e176d6: /* e176d6: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* e176d9: push 0xe62dc8 */
  { uint32_t v = 0xe62dc8u; esp -= 4; W32(esp, v); }
/* e176de: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e176df: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xe176e1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e176e1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e176e4: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e176e6: je 0xe17707 */
  if (zf) goto L_e17707;
L_e176e8: /* e176e8: mov edx, dword ptr [ebx + 0x60] */
  edx = R32((uint32_t)(ebx + 0x60u));
/* e176eb: mov eax, dword ptr [ebx + 0x5c] */
  eax = R32((uint32_t)(ebx + 0x5cu));
/* e176ee: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* e176f1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e176f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e176f3: push 0xe62de4 */
  { uint32_t v = 0xe62de4u; esp -= 4; W32(esp, v); }
/* e176f8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e176f9: call dword ptr [0xe65904] */
  esp -= 4; W32(esp, 0xe176ffu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* e176ff: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e17702: jmp 0xe175b8 */
  goto L_e175b8;
L_e17707: /* e17707: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* e1770a: push 0xe62df0 */
  { uint32_t v = 0xe62df0u; esp -= 4; W32(esp, v); }
/* e1770f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e17710: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xe17712u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e17712: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e17715: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e17717: je 0xe17740 */
  if (zf) goto L_e17740;
L_e17719: /* e17719: mov eax, dword ptr [ebx + 0x6c] */
  eax = R32((uint32_t)(ebx + 0x6cu));
/* e1771c: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1771e: jne 0xe17725 */
  if (!zf) goto L_e17725;
L_e17720: /* e17720: mov eax, 2 */
  eax = 0x2u;
L_e17725: /* e17725: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* e17728: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* e1772b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e1772c: push 0xe62e1c */
  { uint32_t v = 0xe62e1cu; esp -= 4; W32(esp, v); }
/* e17731: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e17732: call dword ptr [0xe65904] */
  esp -= 4; W32(esp, 0xe17738u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* e17738: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e1773b: jmp 0xe175b8 */
  goto L_e175b8;
L_e17740: /* e17740: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* e17743: push 0xe62e24 */
  { uint32_t v = 0xe62e24u; esp -= 4; W32(esp, v); }
/* e17748: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e17749: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xe1774bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e1774b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e1774e: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e17750: je 0xe17765 */
  if (zf) goto L_e17765;
L_e17752: /* e17752: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* e17755: push 0xe62e44 */
  { uint32_t v = 0xe62e44u; esp -= 4; W32(esp, v); }
/* e1775a: call dword ptr [0xe65874] */
  esp -= 4; W32(esp, 0xe17760u); SPILL(); f_4e35da(); if (g_unwind) return; /* Core!?Log@FOutputDevice@@QAEXPBG@Z */ RELOAD();
/* e17760: jmp 0xe175b8 */
  goto L_e175b8;
L_e17765: /* e17765: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* e17768: push 0xe62e4c */
  { uint32_t v = 0xe62e4cu; esp -= 4; W32(esp, v); }
/* e1776d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e1776e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xe17770u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e17770: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e17773: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e17775: je 0xe17799 */
  if (zf) goto L_e17799;
L_e17777: /* e17777: mov ecx, dword ptr [ebx + 0x44] */
  ecx = R32((uint32_t)(ebx + 0x44u));
/* e1777a: call dword ptr [0xe65954] */
  esp -= 4; W32(esp, 0xe17780u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* e17780: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e17781: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e17782: mov ecx, eax */
  ecx = eax;
/* e17784: call dword ptr [0xe6587c] */
  esp -= 4; W32(esp, 0xe1778au); SPILL(); f_4e2cde(); if (g_unwind) return; /* Core!?GetPathName@UObject@@QBEPBGPAV1@PAG@Z */ RELOAD();
/* e1778a: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* e1778d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e1778e: call dword ptr [0xe65874] */
  esp -= 4; W32(esp, 0xe17794u); SPILL(); f_4e35da(); if (g_unwind) return; /* Core!?Log@FOutputDevice@@QAEXPBG@Z */ RELOAD();
/* e17794: jmp 0xe175b8 */
  goto L_e175b8;
L_e17799: /* e17799: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* e1779c: push 0xe62e7c */
  { uint32_t v = 0xe62e7cu; esp -= 4; W32(esp, v); }
/* e177a1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e177a2: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xe177a4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e177a4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e177a7: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e177a9: je 0xe1795d */
  if (zf) goto L_e1795d;
L_e177af: /* e177af: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* e177b2: mov ebx, dword ptr [0xe65878] */
  ebx = R32((uint32_t)(0xe65878u));
/* e177b8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e177b9: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xe177bbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e177bb: mov edi, dword ptr [0xe65880] */
  edi = R32((uint32_t)(0xe65880u));
/* e177c1: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e177c4: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* e177c7: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e177ca: push 0x78 */
  { uint32_t v = 0x78u; esp -= 4; W32(esp, v); }
/* e177cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e177cd: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe177cfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e177cf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e177d2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e177d4: je 0xe177e6 */
  if (zf) goto L_e177e6;
L_e177d6: /* e177d6: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* e177d9: push 0x78 */
  { uint32_t v = 0x78u; esp -= 4; W32(esp, v); }
/* e177db: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e177dc: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe177deu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e177de: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e177e1: lea esi, [eax + 2] */
  esi = (uint32_t)(eax + 0x2u);
/* e177e4: jmp 0xe1780a */
  goto L_e1780a;
L_e177e6: /* e177e6: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* e177e9: push 0x58 */
  { uint32_t v = 0x58u; esp -= 4; W32(esp, v); }
/* e177eb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e177ec: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe177eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e177ee: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e177f1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e177f3: je 0xe17805 */
  if (zf) goto L_e17805;
L_e177f5: /* e177f5: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e177f8: push 0x58 */
  { uint32_t v = 0x58u; esp -= 4; W32(esp, v); }
/* e177fa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e177fb: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe177fdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e177fd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e17800: lea esi, [eax + 2] */
  esi = (uint32_t)(eax + 0x2u);
/* e17803: jmp 0xe1780a */
  goto L_e1780a;
L_e17805: /* e17805: mov esi, 0xe64288 */
  esi = 0xe64288u;
L_e1780a: /* e1780a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e1780b: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xe1780du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e1780d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e17810: push 0x78 */
  { uint32_t v = 0x78u; esp -= 4; W32(esp, v); }
/* e17812: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e17813: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* e17816: mov dword ptr [ebp + 8], esi */
  W32((uint32_t)(ebp + 0x8u), esi);
/* e17819: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe1781bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e1781b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e1781e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e17820: je 0xe17832 */
  if (zf) goto L_e17832;
L_e17822: /* e17822: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* e17825: push 0x78 */
  { uint32_t v = 0x78u; esp -= 4; W32(esp, v); }
/* e17827: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e17828: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe1782au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e1782a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e1782d: lea esi, [eax + 2] */
  esi = (uint32_t)(eax + 0x2u);
/* e17830: jmp 0xe17856 */
  goto L_e17856;
L_e17832: /* e17832: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* e17835: push 0x58 */
  { uint32_t v = 0x58u; esp -= 4; W32(esp, v); }
/* e17837: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e17838: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe1783au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e1783a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e1783d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e1783f: je 0xe17851 */
  if (zf) goto L_e17851;
L_e17841: /* e17841: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e17844: push 0x58 */
  { uint32_t v = 0x58u; esp -= 4; W32(esp, v); }
/* e17846: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e17847: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe17849u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e17849: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e1784c: lea esi, [eax + 2] */
  esi = (uint32_t)(eax + 0x2u);
/* e1784f: jmp 0xe17856 */
  goto L_e17856;
L_e17851: /* e17851: mov esi, 0xe6428c */
  esi = 0xe6428cu;
L_e17856: /* e17856: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e17857: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xe17859u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e17859: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* e1785c: mov edx, dword ptr [ebx - 0x2c] */
  edx = R32((uint32_t)(ebx + 0xffffffd4u));
/* e1785f: add ebx, -0x2c */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffd4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* e17862: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e17865: mov ecx, ebx */
  ecx = ebx;
/* e17867: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* e1786a: mov dword ptr [ebp + 8], esi */
  W32((uint32_t)(ebp + 0x8u), esi);
/* e1786d: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0xe17870u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e17870: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e17872: jne 0xe17885 */
  if (!zf) goto L_e17885;
L_e17874: /* e17874: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e17877: mov ecx, dword ptr [eax + 0x90] */
  ecx = R32((uint32_t)(eax + 0x90u));
/* e1787d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e1787f: jne 0xe17885 */
  if (!zf) goto L_e17885;
L_e17881: /* e17881: xor esi, esi */
  esi = 0;
/* e17883: jmp 0xe1788a */
  goto L_e1788a;
L_e17885: /* e17885: mov esi, 1 */
  esi = 0x1u;
L_e1788a: /* e1788a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* e1788d: push 0x77 */
  { uint32_t v = 0x77u; esp -= 4; W32(esp, v); }
/* e1788f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e17890: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe17892u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e17892: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e17895: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e17897: jne 0xe178cd */
  if (!zf) goto L_e178cd;
L_e17899: /* e17899: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* e1789c: push 0x57 */
  { uint32_t v = 0x57u; esp -= 4; W32(esp, v); }
/* e1789e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e1789f: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe178a1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e178a1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e178a4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e178a6: jne 0xe178cd */
  if (!zf) goto L_e178cd;
L_e178a8: /* e178a8: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e178ab: push 0x66 */
  { uint32_t v = 0x66u; esp -= 4; W32(esp, v); }
/* e178ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e178ae: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe178b0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e178b0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e178b3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e178b5: jne 0xe178c6 */
  if (!zf) goto L_e178c6;
L_e178b7: /* e178b7: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* e178ba: push 0x46 */
  { uint32_t v = 0x46u; esp -= 4; W32(esp, v); }
/* e178bc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e178bd: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe178bfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e178bf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e178c2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e178c4: je 0xe178cf */
  if (zf) goto L_e178cf;
L_e178c6: /* e178c6: mov esi, 1 */
  esi = 0x1u;
/* e178cb: jmp 0xe178cf */
  goto L_e178cf;
L_e178cd: /* e178cd: xor esi, esi */
  esi = 0;
L_e178cf: /* e178cf: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* e178d2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e178d4: je 0xe175b8 */
  if (zf) goto L_e175b8;
L_e178da: /* e178da: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* e178dd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e178df: je 0xe175b8 */
  if (zf) goto L_e175b8;
L_e178e5: /* e178e5: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* e178e8: xor edx, edx */
  edx = 0;
/* e178ea: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e178ed: je 0xe17900 */
  if (zf) goto L_e17900;
L_e178ef: /* e178ef: cmp eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e178f2: je 0xe178f9 */
  if (zf) goto L_e178f9;
L_e178f4: /* e178f4: cmp eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e178f7: jne 0xe17905 */
  if (!zf) goto L_e17905;
L_e178f9: /* e178f9: mov edx, 4 */
  edx = 0x4u;
/* e178fe: jmp 0xe17905 */
  goto L_e17905;
L_e17900: /* e17900: mov edx, 2 */
  edx = 0x2u;
L_e17905: /* e17905: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* e17908: mov ecx, dword ptr [edi + 0x178] */
  ecx = R32((uint32_t)(edi + 0x178u));
/* e1790e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* e1790f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e17911: mov dword ptr [edi + 0x178], ecx */
  W32((uint32_t)(edi + 0x178u), ecx);
/* e17917: jne 0xe17927 */
  if (!zf) goto L_e17927;
L_e17919: /* e17919: mov eax, dword ptr [edi + 0x90] */
  eax = R32((uint32_t)(edi + 0x90u));
/* e1791f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e17921: jne 0xe17927 */
  if (!zf) goto L_e17927;
L_e17923: /* e17923: xor eax, eax */
  eax = 0;
/* e17925: jmp 0xe1792c */
  goto L_e1792c;
L_e17927: /* e17927: mov eax, 1 */
  eax = 0x1u;
L_e1792c: /* e1792c: mov ecx, dword ptr [edi + 0x44] */
  ecx = R32((uint32_t)(edi + 0x44u));
/* e1792f: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* e17931: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e17933: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e17934: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* e17937: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e17938: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* e1793b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e1793c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e1793d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e1793e: call dword ptr [esi + 0x70] */
  { uint32_t t = R32((uint32_t)(esi + 0x70u)); esp -= 4; W32(esp, 0xe17941u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e17941: mov edx, dword ptr [edi + 0x178] */
  edx = R32((uint32_t)(edi + 0x178u));
/* e17947: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* e17948: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e1794a: mov dword ptr [edi + 0x178], edx */
  W32((uint32_t)(edi + 0x178u), edx);
/* e17950: jne 0xe175b8 */
  if (!zf) goto L_e175b8;
L_e17956: /* e17956: mov ecx, ebx */
  ecx = ebx;
/* e17958: jmp 0xe175b3 */
  goto L_e175b3;
L_e1795d: /* e1795d: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* e17960: push 0xe62e8c */
  { uint32_t v = 0xe62e8cu; esp -= 4; W32(esp, v); }
/* e17965: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e17966: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xe17968u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e17968: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e1796b: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e1796d: je 0xe17b8e */
  if (zf) goto L_e17b8e;
L_e17973: /* e17973: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* e17976: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e17977: call dword ptr [0xe65878] */
  esp -= 4; W32(esp, 0xe1797du); SPILL(); f_4e3fe9(); if (g_unwind) return; /* Core!?appAtoi@@YAHPBG@Z */ RELOAD();
/* e1797d: mov edi, dword ptr [0xe65880] */
  edi = R32((uint32_t)(0xe65880u));
/* e17983: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e17986: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* e17989: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e1798c: push 0x78 */
  { uint32_t v = 0x78u; esp -= 4; W32(esp, v); }
/* e1798e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e1798f: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe17991u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e17991: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e17994: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e17996: je 0xe179a8 */
  if (zf) goto L_e179a8;
L_e17998: /* e17998: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* e1799b: push 0x78 */
  { uint32_t v = 0x78u; esp -= 4; W32(esp, v); }
/* e1799d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e1799e: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe179a0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e179a0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e179a3: lea esi, [eax + 2] */
  esi = (uint32_t)(eax + 0x2u);
/* e179a6: jmp 0xe179cc */
  goto L_e179cc;
L_e179a8: /* e179a8: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* e179ab: push 0x58 */
  { uint32_t v = 0x58u; esp -= 4; W32(esp, v); }
/* e179ad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e179ae: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe179b0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e179b0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e179b3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e179b5: je 0xe179c7 */
  if (zf) goto L_e179c7;
L_e179b7: /* e179b7: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e179ba: push 0x58 */
  { uint32_t v = 0x58u; esp -= 4; W32(esp, v); }
/* e179bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e179bd: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe179bfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e179bf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e179c2: lea esi, [eax + 2] */
  esi = (uint32_t)(eax + 0x2u);
/* e179c5: jmp 0xe179cc */
  goto L_e179cc;
L_e179c7: /* e179c7: mov esi, 0xe64290 */
  esi = 0xe64290u;
L_e179cc: /* e179cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e179cd: call dword ptr [0xe65878] */
  esp -= 4; W32(esp, 0xe179d3u); SPILL(); f_4e3fe9(); if (g_unwind) return; /* Core!?appAtoi@@YAHPBG@Z */ RELOAD();
/* e179d3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e179d6: push 0x78 */
  { uint32_t v = 0x78u; esp -= 4; W32(esp, v); }
/* e179d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e179d9: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* e179dc: mov dword ptr [ebp + 8], esi */
  W32((uint32_t)(ebp + 0x8u), esi);
/* e179df: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe179e1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e179e1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e179e4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e179e6: je 0xe179f8 */
  if (zf) goto L_e179f8;
L_e179e8: /* e179e8: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* e179eb: push 0x78 */
  { uint32_t v = 0x78u; esp -= 4; W32(esp, v); }
/* e179ed: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e179ee: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe179f0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e179f0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e179f3: lea esi, [eax + 2] */
  esi = (uint32_t)(eax + 0x2u);
/* e179f6: jmp 0xe17a1c */
  goto L_e17a1c;
L_e179f8: /* e179f8: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* e179fb: push 0x58 */
  { uint32_t v = 0x58u; esp -= 4; W32(esp, v); }
/* e179fd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e179fe: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe17a00u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e17a00: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e17a03: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e17a05: je 0xe17a17 */
  if (zf) goto L_e17a17;
L_e17a07: /* e17a07: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e17a0a: push 0x58 */
  { uint32_t v = 0x58u; esp -= 4; W32(esp, v); }
/* e17a0c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e17a0d: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe17a0fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e17a0f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e17a12: lea esi, [eax + 2] */
  esi = (uint32_t)(eax + 0x2u);
/* e17a15: jmp 0xe17a1c */
  goto L_e17a1c;
L_e17a17: /* e17a17: mov esi, 0xe64294 */
  esi = 0xe64294u;
L_e17a1c: /* e17a1c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e17a1d: call dword ptr [0xe65878] */
  esp -= 4; W32(esp, 0xe17a23u); SPILL(); f_4e3fe9(); if (g_unwind) return; /* Core!?appAtoi@@YAHPBG@Z */ RELOAD();
/* e17a23: mov edx, dword ptr [ebx - 0x2c] */
  edx = R32((uint32_t)(ebx + 0xffffffd4u));
/* e17a26: mov dword ptr [ebp + 8], esi */
  W32((uint32_t)(ebp + 0x8u), esi);
/* e17a29: lea esi, [ebx - 0x2c] */
  esi = (uint32_t)(ebx + 0xffffffd4u);
/* e17a2c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e17a2f: mov ecx, esi */
  ecx = esi;
/* e17a31: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* e17a34: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0xe17a37u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e17a37: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e17a39: jne 0xe17a49 */
  if (!zf) goto L_e17a49;
L_e17a3b: /* e17a3b: mov eax, dword ptr [ebx + 0x90] */
  eax = R32((uint32_t)(ebx + 0x90u));
/* e17a41: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e17a43: jne 0xe17a49 */
  if (!zf) goto L_e17a49;
L_e17a45: /* e17a45: xor ebx, ebx */
  ebx = 0;
/* e17a47: jmp 0xe17a4e */
  goto L_e17a4e;
L_e17a49: /* e17a49: mov ebx, 1 */
  ebx = 0x1u;
L_e17a4e: /* e17a4e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e17a51: push 0x77 */
  { uint32_t v = 0x77u; esp -= 4; W32(esp, v); }
/* e17a53: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e17a54: mov dword ptr [ebp + 0xc], ebx */
  W32((uint32_t)(ebp + 0xcu), ebx);
/* e17a57: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe17a59u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e17a59: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e17a5c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e17a5e: jne 0xe17a94 */
  if (!zf) goto L_e17a94;
L_e17a60: /* e17a60: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* e17a63: push 0x57 */
  { uint32_t v = 0x57u; esp -= 4; W32(esp, v); }
/* e17a65: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e17a66: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe17a68u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e17a68: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e17a6b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e17a6d: jne 0xe17a94 */
  if (!zf) goto L_e17a94;
L_e17a6f: /* e17a6f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* e17a72: push 0x66 */
  { uint32_t v = 0x66u; esp -= 4; W32(esp, v); }
/* e17a74: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e17a75: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe17a77u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e17a77: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e17a7a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e17a7c: jne 0xe17a8d */
  if (!zf) goto L_e17a8d;
L_e17a7e: /* e17a7e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e17a81: push 0x46 */
  { uint32_t v = 0x46u; esp -= 4; W32(esp, v); }
/* e17a83: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e17a84: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe17a86u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e17a86: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e17a89: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e17a8b: je 0xe17a99 */
  if (zf) goto L_e17a99;
L_e17a8d: /* e17a8d: mov ebx, 1 */
  ebx = 0x1u;
/* e17a92: jmp 0xe17a96 */
  goto L_e17a96;
L_e17a94: /* e17a94: xor ebx, ebx */
  ebx = 0;
L_e17a96: /* e17a96: mov dword ptr [ebp + 0xc], ebx */
  W32((uint32_t)(ebp + 0xcu), ebx);
L_e17a99: /* e17a99: mov ecx, esi */
  ecx = esi;
/* e17a9b: call dword ptr [0xe65860] */
  esp -= 4; W32(esp, 0xe17aa1u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* e17aa1: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e17aa3: mov esi, eax */
  esi = eax;
/* e17aa5: je 0xe17aaf */
  if (zf) goto L_e17aaf;
L_e17aa7: /* e17aa7: mov edi, dword ptr [esi + 0x68] */
  edi = R32((uint32_t)(esi + 0x68u));
/* e17aaa: mov eax, dword ptr [esi + 0x6c] */
  eax = R32((uint32_t)(esi + 0x6cu));
/* e17aad: jmp 0xe17ab5 */
  goto L_e17ab5;
L_e17aaf: /* e17aaf: mov edi, dword ptr [esi + 0x60] */
  edi = R32((uint32_t)(esi + 0x60u));
/* e17ab2: mov eax, dword ptr [esi + 0x64] */
  eax = R32((uint32_t)(esi + 0x64u));
L_e17ab5: /* e17ab5: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* e17ab8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e17aba: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* e17abd: je 0xe17b56 */
  if (zf) goto L_e17b56;
L_e17ac3: /* e17ac3: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* e17ac6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e17ac8: je 0xe17b56 */
  if (zf) goto L_e17b56;
L_e17ace: /* e17ace: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* e17ad1: xor edx, edx */
  edx = 0;
/* e17ad3: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e17ad6: je 0xe17ae9 */
  if (zf) goto L_e17ae9;
L_e17ad8: /* e17ad8: cmp eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e17adb: je 0xe17ae2 */
  if (zf) goto L_e17ae2;
L_e17add: /* e17add: cmp eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e17ae0: jne 0xe17aee */
  if (!zf) goto L_e17aee;
L_e17ae2: /* e17ae2: mov edx, 4 */
  edx = 0x4u;
/* e17ae7: jmp 0xe17aee */
  goto L_e17aee;
L_e17ae9: /* e17ae9: mov edx, 2 */
  edx = 0x2u;
L_e17aee: /* e17aee: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e17af1: mov ecx, dword ptr [eax + 0x178] */
  ecx = R32((uint32_t)(eax + 0x178u));
/* e17af7: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* e17af8: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e17afa: mov dword ptr [eax + 0x178], ecx */
  W32((uint32_t)(eax + 0x178u), ecx);
/* e17b00: jne 0xe17b10 */
  if (!zf) goto L_e17b10;
L_e17b02: /* e17b02: mov ecx, dword ptr [eax + 0x90] */
  ecx = R32((uint32_t)(eax + 0x90u));
/* e17b08: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e17b0a: jne 0xe17b10 */
  if (!zf) goto L_e17b10;
L_e17b0c: /* e17b0c: xor eax, eax */
  eax = 0;
/* e17b0e: jmp 0xe17b15 */
  goto L_e17b15;
L_e17b10: /* e17b10: mov eax, 1 */
  eax = 0x1u;
L_e17b15: /* e17b15: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e17b18: mov ecx, dword ptr [ecx + 0x44] */
  ecx = R32((uint32_t)(ecx + 0x44u));
/* e17b1b: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* e17b1d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e17b1f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e17b20: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* e17b23: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e17b24: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* e17b27: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e17b28: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* e17b2b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e17b2c: mov eax, ebx */
  eax = ebx;
/* e17b2e: lea ebx, [edx - 0x2c] */
  ebx = (uint32_t)(edx + 0xffffffd4u);
/* e17b31: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e17b32: call dword ptr [eax + 0x70] */
  { uint32_t t = R32((uint32_t)(eax + 0x70u)); esp -= 4; W32(esp, 0xe17b35u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e17b35: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e17b38: mov edx, dword ptr [ecx + 0x178] */
  edx = R32((uint32_t)(ecx + 0x178u));
/* e17b3e: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* e17b3f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e17b41: mov dword ptr [ecx + 0x178], edx */
  W32((uint32_t)(ecx + 0x178u), edx);
/* e17b47: jne 0xe17b50 */
  if (!zf) goto L_e17b50;
L_e17b49: /* e17b49: mov ecx, ebx */
  ecx = ebx;
/* e17b4b: call 0xe1106e */
  esp -= 4; W32(esp, 0xe17b50u); SPILL(); f_e1106e(); if (g_unwind) return; RELOAD();
L_e17b50: /* e17b50: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* e17b53: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
L_e17b56: /* e17b56: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e17b58: je 0xe17b74 */
  if (zf) goto L_e17b74;
L_e17b5a: /* e17b5a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e17b5c: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* e17b61: mov ecx, esi */
  ecx = esi;
/* e17b63: mov dword ptr [esi + 0x68], edi */
  W32((uint32_t)(esi + 0x68u), edi);
/* e17b66: mov dword ptr [esi + 0x6c], eax */
  W32((uint32_t)(esi + 0x6cu), eax);
/* e17b69: call dword ptr [0xe6588c] */
  esp -= 4; W32(esp, 0xe17b6fu); SPILL(); f_4e3b84(); if (g_unwind) return; /* Core!?SaveConfig@UObject@@QAEXKPBG@Z */ RELOAD();
/* e17b6f: jmp 0xe175b8 */
  goto L_e175b8;
L_e17b74: /* e17b74: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e17b76: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* e17b7b: mov ecx, esi */
  ecx = esi;
/* e17b7d: mov dword ptr [esi + 0x60], edi */
  W32((uint32_t)(esi + 0x60u), edi);
/* e17b80: mov dword ptr [esi + 0x64], eax */
  W32((uint32_t)(esi + 0x64u), eax);
/* e17b83: call dword ptr [0xe6588c] */
  esp -= 4; W32(esp, 0xe17b89u); SPILL(); f_4e3b84(); if (g_unwind) return; /* Core!?SaveConfig@UObject@@QAEXKPBG@Z */ RELOAD();
/* e17b89: jmp 0xe175b8 */
  goto L_e175b8;
L_e17b8e: /* e17b8e: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* e17b91: push 0xe62ea4 */
  { uint32_t v = 0xe62ea4u; esp -= 4; W32(esp, v); }
/* e17b96: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e17b97: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xe17b99u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e17b99: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e17b9c: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e17b9e: je 0xe17c20 */
  if (zf) goto L_e17c20;
L_e17ba4: /* e17ba4: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* e17ba7: mov ebx, dword ptr [0xe65878] */
  ebx = R32((uint32_t)(0xe65878u));
/* e17bad: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e17bae: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xe17bb0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e17bb0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e17bb3: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
L_e17bb6: /* e17bb6: xor ecx, ecx */
  ecx = 0;
/* e17bb8: mov cx, word ptr [esi] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* e17bbb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e17bbc: call 0xe1104b */
  esp -= 4; W32(esp, 0xe17bc1u); SPILL(); f_e1104b(); if (g_unwind) return; RELOAD();
/* e17bc1: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e17bc4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e17bc6: je 0xe17bcd */
  if (zf) goto L_e17bcd;
L_e17bc8: /* e17bc8: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e17bcb: jmp 0xe17bb6 */
  goto L_e17bb6;
L_e17bcd: /* e17bcd: mov edi, dword ptr [0xe65cf4] */
  edi = R32((uint32_t)(0xe65cf4u));
L_e17bd3: /* e17bd3: xor eax, eax */
  eax = 0;
/* e17bd5: mov ax, word ptr [esi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* e17bd8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e17bd9: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe17bdbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e17bdb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e17bde: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e17be0: je 0xe17be7 */
  if (zf) goto L_e17be7;
L_e17be2: /* e17be2: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e17be5: jmp 0xe17bd3 */
  goto L_e17bd3;
L_e17be7: /* e17be7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e17be8: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xe17beau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e17bea: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* e17bed: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e17bf0: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* e17bf3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e17bf6: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* e17bf9: mov edx, dword ptr [ecx + 0x168] */
  edx = R32((uint32_t)(ecx + 0x168u));
/* e17bff: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* e17c02: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e17c03: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* e17c06: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e17c07: call dword ptr [0xe65d7c] */
  esp -= 4; W32(esp, 0xe17c0du); SPILL(); call_ind(R32(0xe65d7cu)); if (g_unwind) return; /* USER32!ClientToScreen */ RELOAD();
/* e17c0d: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* e17c10: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* e17c13: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e17c14: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e17c15: call dword ptr [0xe65dc0] */
  esp -= 4; W32(esp, 0xe17c1bu); SPILL(); call_ind(R32(0xe65dc0u)); if (g_unwind) return; /* USER32!SetCursorPos */ RELOAD();
/* e17c1b: jmp 0xe175b8 */
  goto L_e175b8;
L_e17c20: /* e17c20: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e17c23: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e17c24: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e17c25: xor eax, eax */
  eax = 0;
/* e17c27: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e17c2e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e17c2f: mov esp, ebp */
  esp = ebp;
/* e17c31: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e17c32: ret 8 */
  esp += 12; SPILL(); return;
}

void f_e17c35(void) {
  LOAD_REGS();
L_e17c35: /* e17c35: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* e17c38: push 0xe5ec4c */
  { uint32_t v = 0xe5ec4cu; esp -= 4; W32(esp, v); }
/* e17c3d: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* e17c40: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e17c41: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* e17c44: call 0xe25f60 */
  esp -= 4; W32(esp, 0xe17c49u); SPILL(); f_e25f60(); if (g_unwind) return; RELOAD();
  SPILL(); f_e17c49(); return;
}

void f_e17c49(void) {
  LOAD_REGS();
L_e17c49: /* e17c49: push 0xe2ed88 */
  { uint32_t v = 0xe2ed88u; esp -= 4; W32(esp, v); }
/* e17c4e: push 0xe62eb8 */
  { uint32_t v = 0xe62eb8u; esp -= 4; W32(esp, v); }
/* e17c53: call dword ptr [0xe65a5c] */
  esp -= 4; W32(esp, 0xe17c59u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* e17c59: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e17c5c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e17c5e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e17c60: call 0xe25f60 */
  esp -= 4; W32(esp, 0xe17c65u); SPILL(); f_e25f60(); if (g_unwind) return; RELOAD();
L_e17c65: guest_badaddr(0xe17c65); return;
}

void f_e17e70(void) {
  LOAD_REGS();
L_e17e70: /* e17e70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e17e71: mov ebp, esp */
  ebp = esp;
/* e17e73: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* e17e75: push 0xe2a4f8 */
  { uint32_t v = 0xe2a4f8u; esp -= 4; W32(esp, v); }
/* e17e7a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* e17e80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e17e81: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* e17e88: sub esp, 0x37c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x37cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e17e8e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e17e8f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e17e90: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e17e91: xor edi, edi */
  edi = 0;
/* e17e93: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* e17e96: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* e17e99: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* e17e9c: call dword ptr [0xe65860] */
  esp -= 4; W32(esp, 0xe17ea2u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* e17ea2: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* e17ea5: mov ebx, eax */
  ebx = eax;
/* e17ea7: cmp dword ptr [edx + 0x1a4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x1a4u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e17ead: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* e17eb0: jne 0xe19be7 */
  if (!zf) goto L_e19be7;
L_e17eb6: /* e17eb6: xor eax, eax */
  eax = 0;
/* e17eb8: jmp 0xe17ec0 */
  goto L_e17ec0;
L_e17ec0: /* e17ec0: cmp eax, dword ptr [ebx + 0x30] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e17ec3: jge 0xe19be7 */
  if ((sf == of)) goto L_e19be7;
L_e17ec9: /* e17ec9: mov ecx, dword ptr [ebx + 0x2c] */
  ecx = R32((uint32_t)(ebx + 0x2cu));
/* e17ecc: cmp dword ptr [ecx + eax*4], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*4))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e17ecf: je 0xe17ed4 */
  if (zf) goto L_e17ed4;
L_e17ed1: /* e17ed1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* e17ed2: jmp 0xe17ec0 */
  goto L_e17ec0;
L_e17ed4: /* e17ed4: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e17ed7: je 0xe19be7 */
  if (zf) goto L_e19be7;
L_e17edd: /* e17edd: cmp dword ptr [edx + 0x30], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x30u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e17ee0: je 0xe19be7 */
  if (zf) goto L_e19be7;
L_e17ee6: /* e17ee6: mov ecx, dword ptr [0xe65f48] */
  ecx = R32((uint32_t)(0xe65f48u));
/* e17eec: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e17eef: cmp eax, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e17ef1: jne 0xe17f0a */
  if (!zf) goto L_e17f0a;
L_e17ef3: /* e17ef3: movzx ecx, word ptr [ebp + 0xc] */
  ecx = (uint32_t)(R16((uint32_t)(ebp + 0xcu)));
/* e17ef7: mov eax, 0x20a */
  eax = 0x20au;
/* e17efc: shl ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* e17eff: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* e17f02: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* e17f05: jmp 0xe18dde */
  goto L_e18dde;
L_e17f0a: /* e17f0a: cmp eax, 0x14 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e17f0d: ja 0xe18470 */
  if ((!cf && !zf)) goto L_e18470;
L_e17f13: /* e17f13: je 0xe197b0 */
  if (zf) goto L_e197b0;
L_e17f19: /* e17f19: lea ecx, [eax - 1] */
  ecx = (uint32_t)(eax + 0xffffffffu);
/* e17f1c: cmp ecx, 0xe */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xeu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e17f1f: ja 0xe19ba2 */
  if ((!cf && !zf)) goto L_e19ba2;
L_e17f25: /* e17f25: movzx ecx, byte ptr [ecx + 0xe19c64] */
  ecx = (uint32_t)(R8((uint32_t)(ecx + 0xe19c64u)));
/* e17f2c: jmp dword ptr [ecx*4 + 0xe19c44] */
  switch (R32((uint32_t)(ecx*4 + 0xe19c44u))) {
    case 0xe17f33u: goto L_e17f33;
    case 0xe17fd0u: goto L_e17fd0;
    case 0xe180b0u: goto L_e180b0;
    case 0xe180f3u: goto L_e180f3;
    case 0xe1815fu: goto L_e1815f;
    case 0xe182bcu: goto L_e182bc;
    case 0xe1838au: goto L_e1838a;
    case 0xe19ba2u: goto L_e19ba2;
    default: guest_badjump(0xe17f2c, R32((uint32_t)(ecx*4 + 0xe19c44u))); return;
  }
L_e17f33: /* e17f33: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* e17f36: mov dword ptr [edx + 0x198], 1 */
  W32((uint32_t)(edx + 0x198u), 0x1u);
/* e17f40: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e17f43: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* e17f47: call dword ptr [0xe65b84] */
  esp -= 4; W32(esp, 0xe17f4du); SPILL(); f_6c2cc0(); if (g_unwind) return; /* Engine!?GetOuterUClient@UViewport@@QBEPAVUClient@@XZ */ RELOAD();
/* e17f4d: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e17f50: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e17f52: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e17f53: mov ecx, eax */
  ecx = eax;
/* e17f55: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0xe17f5bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e17f5b: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* e17f5e: mov eax, dword ptr [edx + 0x194] */
  eax = R32((uint32_t)(edx + 0x194u));
/* e17f64: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e17f67: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e17f68: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e17f69: call 0xe25d92 */
  esp -= 4; W32(esp, 0xe17f6eu); SPILL(); f_e25d92(); if (g_unwind) return; RELOAD();
/* e17f6e: mov edx, dword ptr [0xe6590c] */
  edx = R32((uint32_t)(0xe6590cu));
/* e17f74: cmp dword ptr [edx], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e17f76: jne 0xe17f8b */
  if (!zf) goto L_e17f8b;
L_e17f78: /* e17f78: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e17f7b: mov ecx, dword ptr [eax + 0x194] */
  ecx = R32((uint32_t)(eax + 0x194u));
/* e17f81: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* e17f84: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e17f85: call dword ptr [0xe65d80] */
  esp -= 4; W32(esp, 0xe17f8bu); SPILL(); call_ind(R32(0xe65d80u)); if (g_unwind) return; /* USER32!SetFocus */ RELOAD();
L_e17f8b: /* e17f8b: xor eax, eax */
  eax = 0;
/* e17f8d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e17f90: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e17f97: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e17f98: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e17f99: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e17f9a: mov esp, ebp */
  esp = ebp;
/* e17f9c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e17f9d: ret 0xc */
  esp += 16; SPILL(); return;
L_e17fd0: /* e17fd0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e17fd3: test byte ptr [ecx + 0x1a8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x1a8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e17fda: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* e17fde: je 0xe17fe5 */
  if (zf) goto L_e17fe5;
L_e17fe0: /* e17fe0: call 0xe1106e */
  esp -= 4; W32(esp, 0xe17fe5u); SPILL(); f_e1106e(); if (g_unwind) return; RELOAD();
L_e17fe5: /* e17fe5: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* e17fe8: call dword ptr [0xe65918] */
  esp -= 4; W32(esp, 0xe17feeu); SPILL(); f_4e2987(); if (g_unwind) return; /* Core!?appCmdLine@@YAPBGXZ */ RELOAD();
/* e17fee: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* e17ff1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e17ff2: push 0xe63368 */
  { uint32_t v = 0xe63368u; esp -= 4; W32(esp, v); }
/* e17ff7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e17ff8: call dword ptr [0xe658a4] */
  esp -= 4; W32(esp, 0xe17ffeu); SPILL(); f_4e44cb(); if (g_unwind) return; /* Core!?Parse@@YAHPBG0AAK@Z */ RELOAD();
/* e17ffe: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* e18001: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e18004: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e18006: je 0xe18026 */
  if (zf) goto L_e18026;
L_e18008: /* e18008: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e1800b: mov ecx, dword ptr [eax + 0x194] */
  ecx = R32((uint32_t)(eax + 0x194u));
/* e18011: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* e18014: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e18015: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e18016: call dword ptr [0xe65d4c] */
  esp -= 4; W32(esp, 0xe1801cu); SPILL(); call_ind(R32(0xe65d4cu)); if (g_unwind) return; /* USER32!SetParent */ RELOAD();
/* e1801c: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* e1801f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e18020: call dword ptr [0xe65d80] */
  esp -= 4; W32(esp, 0xe18026u); SPILL(); call_ind(R32(0xe65d80u)); if (g_unwind) return; /* USER32!SetFocus */ RELOAD();
L_e18026: /* e18026: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e18029: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e1802b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e1802c: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xe1802fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e1802f: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e18032: cmp dword ptr [eax + 0x198], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x198u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e18039: jne 0xe1804f */
  if (!zf) goto L_e1804f;
L_e1803b: /* e1803b: mov dword ptr [eax + 0x198], 2 */
  W32((uint32_t)(eax + 0x198u), 0x2u);
/* e18045: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e18048: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e1804a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e1804c: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0xe1804fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e1804f: /* e1804f: mov ecx, dword ptr [0xe65924] */
  ecx = R32((uint32_t)(0xe65924u));
/* e18055: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e18057: push 0xe63374 */
  { uint32_t v = 0xe63374u; esp -= 4; W32(esp, v); }
/* e1805c: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* e18061: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e18062: call dword ptr [0xe65928] */
  esp -= 4; W32(esp, 0xe18068u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* e18068: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e1806b: xor eax, eax */
  eax = 0;
/* e1806d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e18070: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e18077: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e18078: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e18079: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e1807a: mov esp, ebp */
  esp = ebp;
/* e1807c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e1807d: ret 0xc */
  esp += 16; SPILL(); return;
L_e180b0: /* e180b0: test dword ptr [edx + 0x1a8], 0x191 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x1a8u))); uint32_t b = (uint32_t)(0x191u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e180ba: je 0xe18adc */
  if (zf) goto L_e18adc;
L_e180c0: /* e180c0: mov dword ptr [edx + 0x84], 1 */
  W32((uint32_t)(edx + 0x84u), 0x1u);
/* e180ca: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* e180cd: mov eax, dword ptr [edx + 0x194] */
  eax = R32((uint32_t)(edx + 0x194u));
/* e180d3: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e180d6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e180d7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e180d8: call dword ptr [0xe65d50] */
  esp -= 4; W32(esp, 0xe180deu); SPILL(); call_ind(R32(0xe65d50u)); if (g_unwind) return; /* USER32!ValidateRect */ RELOAD();
/* e180de: xor eax, eax */
  eax = 0;
/* e180e0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e180e3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e180ea: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e180eb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e180ec: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e180ed: mov esp, ebp */
  esp = ebp;
/* e180ef: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e180f0: ret 0xc */
  esp += 16; SPILL(); return;
L_e180f3: /* e180f3: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* e180f6: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e180f8: mov byte ptr [ebp - 4], 0x15 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x15u);
/* e180fc: jne 0xe1810a */
  if (!zf) goto L_e1810a;
L_e180fe: /* e180fe: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e18101: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e18103: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e18104: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xe18107u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e18107: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
L_e1810a: /* e1810a: mov edx, dword ptr [0xe65920] */
  edx = R32((uint32_t)(0xe65920u));
/* e18110: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* e18112: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* e18115: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e18117: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* e1811a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e1811b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e1811c: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e1811f: mov ecx, dword ptr [eax + 0x194] */
  ecx = R32((uint32_t)(eax + 0x194u));
/* e18125: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e18126: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* e18129: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e1812a: jmp 0xe18bd0 */
  goto L_e18bd0;
L_e1815f: /* e1815f: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* e18162: movzx esi, ax */
  esi = (uint32_t)((eax & 0xffffu));
/* e18165: shr eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* e18168: xor ebx, ebx */
  ebx = 0;
/* e1816a: mov edi, eax */
  edi = eax;
/* e1816c: cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e18170: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* e18173: mov byte ptr [ebp - 4], 0x23 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x23u);
/* e18177: jne 0xe1818e */
  if (!zf) goto L_e1818e;
L_e18179: /* e18179: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e1817c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e1817e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e1817f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e18181: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e18183: call dword ptr [eax + 0xa0] */
  { uint32_t t = R32((uint32_t)(eax + 0xa0u)); esp -= 4; W32(esp, 0xe18189u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e18189: mov ebx, 1 */
  ebx = 0x1u;
L_e1818e: /* e1818e: cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e18192: jne 0xe181a5 */
  if (!zf) goto L_e181a5;
L_e18194: /* e18194: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e18197: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e18199: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e1819b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e1819d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e1819f: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0xe181a5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e181a5: /* e181a5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e181a8: mov edx, dword ptr [eax + 0x1a8] */
  edx = R32((uint32_t)(eax + 0x1a8u));
/* e181ae: test dl, 1 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e181b1: je 0xe18210 */
  if (zf) goto L_e18210;
L_e181b3: /* e181b3: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* e181b6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e181b8: jne 0xe181fb */
  if (!zf) goto L_e181fb;
L_e181ba: /* e181ba: inc dword ptr [eax + 0x1a4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x1a4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + 0x1a4u), r);
  }
/* e181c0: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e181c3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e181c5: lea ecx, [eax + 0x1c8] */
  ecx = (uint32_t)(eax + 0x1c8u);
/* e181cb: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* e181cd: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e181d0: mov edx, esp */
  edx = esp;
/* e181d2: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* e181d4: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* e181d7: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* e181da: mov esi, dword ptr [ecx + 8] */
  esi = R32((uint32_t)(ecx + 0x8u));
/* e181dd: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* e181e0: mov dword ptr [edx + 8], esi */
  W32((uint32_t)(edx + 0x8u), esi);
/* e181e3: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* e181e6: mov ecx, dword ptr [eax + 0x194] */
  ecx = R32((uint32_t)(eax + 0x194u));
/* e181ec: call dword ptr [0xe65f3c] */
  esp -= 4; W32(esp, 0xe181f2u); SPILL(); f_d8171c(); if (g_unwind) return; /* Window!?MoveWindow@WWindow@@QAEXUFRect@@H@Z */ RELOAD();
/* e181f2: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e181f5: dec dword ptr [eax + 0x1a4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x1a4u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(eax + 0x1a4u), r);
  }
L_e181fb: /* e181fb: xor eax, eax */
  eax = 0;
/* e181fd: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e18200: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e18207: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e18208: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e18209: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e1820a: mov esp, ebp */
  esp = ebp;
/* e1820c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e1820d: ret 0xc */
  esp += 16; SPILL(); return;
L_e18210: /* e18210: mov ecx, dword ptr [eax + 0x70] */
  ecx = R32((uint32_t)(eax + 0x70u));
/* e18213: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e18215: je 0xe1824d */
  if (zf) goto L_e1824d;
L_e18217: /* e18217: test dl, 0x90 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x90u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e1821a: je 0xe1824d */
  if (zf) goto L_e1824d;
L_e1821c: /* e1821c: mov edx, dword ptr [eax + 0xbc] */
  edx = R32((uint32_t)(eax + 0xbcu));
/* e18222: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e18224: jne 0xe1823a */
  if (!zf) goto L_e1823a;
L_e18226: /* e18226: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e18228: jne 0xe1823a */
  if (!zf) goto L_e1823a;
L_e1822a: /* e1822a: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* e1822c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e1822e: xor edx, edx */
  edx = 0;
/* e18230: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e18231: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e18232: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e18233: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e18234: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e18235: call dword ptr [ebx + 0x70] */
  { uint32_t t = R32((uint32_t)(ebx + 0x70u)); esp -= 4; W32(esp, 0xe18238u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e18238: jmp 0xe1825f */
  goto L_e1825f;
L_e1823a: /* e1823a: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* e1823c: mov edx, 1 */
  edx = 0x1u;
/* e18241: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e18242: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e18244: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e18245: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e18246: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e18247: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e18248: call dword ptr [ebx + 0x70] */
  { uint32_t t = R32((uint32_t)(ebx + 0x70u)); esp -= 4; W32(esp, 0xe1824bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e1824b: jmp 0xe1825f */
  goto L_e1825f;
L_e1824d: /* e1824d: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* e1824f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e18251: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e18252: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e18253: or edx, 0x20 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* e18256: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e18257: mov ecx, eax */
  ecx = eax;
/* e18259: call dword ptr [ebx + 0x80] */
  { uint32_t t = R32((uint32_t)(ebx + 0x80u)); esp -= 4; W32(esp, 0xe1825fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e1825f: /* e1825f: mov edx, dword ptr [0xe6590c] */
  edx = R32((uint32_t)(0xe6590cu));
/* e18265: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e18268: je 0xe18277 */
  if (zf) goto L_e18277;
L_e1826a: /* e1826a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e1826d: mov dword ptr [eax + 0x84], 0xffffffff */
  W32((uint32_t)(eax + 0x84u), 0xffffffffu);
L_e18277: /* e18277: xor eax, eax */
  eax = 0;
/* e18279: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e1827c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e18283: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e18284: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e18285: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e18286: mov esp, ebp */
  esp = ebp;
/* e18288: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e18289: ret 0xc */
  esp += 16; SPILL(); return;
L_e182bc: /* e182bc: mov eax, dword ptr [ebp + 0xc] */
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
L_e1838a: /* e1838a: mov edx, dword ptr [0xe6590c] */
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
L_e18470: /* e18470: cmp eax, 0x112 */
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
L_e18dde: /* e18dde: lea esi, [eax - 0x200] */
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

void f_e17eba(void) {
  LOAD_REGS();
L_e17eba: /* e17eba: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_e17ec0: /* e17ec0: cmp eax, dword ptr [ebx + 0x30] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e17ec3: jge 0xe19be7 */
  if ((sf == of)) goto L_e19be7;
L_e17ec9: /* e17ec9: mov ecx, dword ptr [ebx + 0x2c] */
  ecx = R32((uint32_t)(ebx + 0x2cu));
/* e17ecc: cmp dword ptr [ecx + eax*4], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*4))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e17ecf: je 0xe17ed4 */
  if (zf) goto L_e17ed4;
L_e17ed1: /* e17ed1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* e17ed2: jmp 0xe17ec0 */
  goto L_e17ec0;
L_e17ed4: /* e17ed4: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e17ed7: je 0xe19be7 */
  if (zf) goto L_e19be7;
L_e17edd: /* e17edd: cmp dword ptr [edx + 0x30], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x30u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e17ee0: je 0xe19be7 */
  if (zf) goto L_e19be7;
L_e17ee6: /* e17ee6: mov ecx, dword ptr [0xe65f48] */
  ecx = R32((uint32_t)(0xe65f48u));
/* e17eec: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e17eef: cmp eax, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e17ef1: jne 0xe17f0a */
  if (!zf) goto L_e17f0a;
L_e17ef3: /* e17ef3: movzx ecx, word ptr [ebp + 0xc] */
  ecx = (uint32_t)(R16((uint32_t)(ebp + 0xcu)));
/* e17ef7: mov eax, 0x20a */
  eax = 0x20au;
/* e17efc: shl ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* e17eff: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* e17f02: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* e17f05: jmp 0xe18dde */
  goto L_e18dde;
L_e17f0a: /* e17f0a: cmp eax, 0x14 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e17f0d: ja 0xe18470 */
  if ((!cf && !zf)) goto L_e18470;
L_e17f13: /* e17f13: je 0xe197b0 */
  if (zf) goto L_e197b0;
L_e17f19: /* e17f19: lea ecx, [eax - 1] */
  ecx = (uint32_t)(eax + 0xffffffffu);
/* e17f1c: cmp ecx, 0xe */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xeu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e17f1f: ja 0xe19ba2 */
  if ((!cf && !zf)) goto L_e19ba2;
L_e17f25: /* e17f25: movzx ecx, byte ptr [ecx + 0xe19c64] */
  ecx = (uint32_t)(R8((uint32_t)(ecx + 0xe19c64u)));
/* e17f2c: jmp dword ptr [ecx*4 + 0xe19c44] */
  switch (R32((uint32_t)(ecx*4 + 0xe19c44u))) {
    case 0xe17f33u: goto L_e17f33;
    case 0xe17fd0u: goto L_e17fd0;
    case 0xe180b0u: goto L_e180b0;
    case 0xe180f3u: goto L_e180f3;
    case 0xe1815fu: goto L_e1815f;
    case 0xe182bcu: goto L_e182bc;
    case 0xe1838au: goto L_e1838a;
    case 0xe19ba2u: goto L_e19ba2;
    default: guest_badjump(0xe17f2c, R32((uint32_t)(ecx*4 + 0xe19c44u))); return;
  }
L_e17f33: /* e17f33: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* e17f36: mov dword ptr [edx + 0x198], 1 */
  W32((uint32_t)(edx + 0x198u), 0x1u);
/* e17f40: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e17f43: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* e17f47: call dword ptr [0xe65b84] */
  esp -= 4; W32(esp, 0xe17f4du); SPILL(); f_6c2cc0(); if (g_unwind) return; /* Engine!?GetOuterUClient@UViewport@@QBEPAVUClient@@XZ */ RELOAD();
/* e17f4d: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e17f50: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e17f52: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e17f53: mov ecx, eax */
  ecx = eax;
/* e17f55: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0xe17f5bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e17f5b: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* e17f5e: mov eax, dword ptr [edx + 0x194] */
  eax = R32((uint32_t)(edx + 0x194u));
/* e17f64: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e17f67: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e17f68: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e17f69: call 0xe25d92 */
  esp -= 4; W32(esp, 0xe17f6eu); SPILL(); f_e25d92(); if (g_unwind) return; RELOAD();
/* e17f6e: mov edx, dword ptr [0xe6590c] */
  edx = R32((uint32_t)(0xe6590cu));
/* e17f74: cmp dword ptr [edx], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e17f76: jne 0xe17f8b */
  if (!zf) goto L_e17f8b;
L_e17f78: /* e17f78: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e17f7b: mov ecx, dword ptr [eax + 0x194] */
  ecx = R32((uint32_t)(eax + 0x194u));
/* e17f81: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* e17f84: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e17f85: call dword ptr [0xe65d80] */
  esp -= 4; W32(esp, 0xe17f8bu); SPILL(); call_ind(R32(0xe65d80u)); if (g_unwind) return; /* USER32!SetFocus */ RELOAD();
L_e17f8b: /* e17f8b: xor eax, eax */
  eax = 0;
/* e17f8d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e17f90: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e17f97: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e17f98: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e17f99: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e17f9a: mov esp, ebp */
  esp = ebp;
/* e17f9c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e17f9d: ret 0xc */
  esp += 16; SPILL(); return;
L_e17fd0: /* e17fd0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e17fd3: test byte ptr [ecx + 0x1a8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x1a8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e17fda: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* e17fde: je 0xe17fe5 */
  if (zf) goto L_e17fe5;
L_e17fe0: /* e17fe0: call 0xe1106e */
  esp -= 4; W32(esp, 0xe17fe5u); SPILL(); f_e1106e(); if (g_unwind) return; RELOAD();
L_e17fe5: /* e17fe5: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* e17fe8: call dword ptr [0xe65918] */
  esp -= 4; W32(esp, 0xe17feeu); SPILL(); f_4e2987(); if (g_unwind) return; /* Core!?appCmdLine@@YAPBGXZ */ RELOAD();
/* e17fee: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* e17ff1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e17ff2: push 0xe63368 */
  { uint32_t v = 0xe63368u; esp -= 4; W32(esp, v); }
/* e17ff7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e17ff8: call dword ptr [0xe658a4] */
  esp -= 4; W32(esp, 0xe17ffeu); SPILL(); f_4e44cb(); if (g_unwind) return; /* Core!?Parse@@YAHPBG0AAK@Z */ RELOAD();
/* e17ffe: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* e18001: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e18004: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e18006: je 0xe18026 */
  if (zf) goto L_e18026;
L_e18008: /* e18008: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e1800b: mov ecx, dword ptr [eax + 0x194] */
  ecx = R32((uint32_t)(eax + 0x194u));
/* e18011: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* e18014: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e18015: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e18016: call dword ptr [0xe65d4c] */
  esp -= 4; W32(esp, 0xe1801cu); SPILL(); call_ind(R32(0xe65d4cu)); if (g_unwind) return; /* USER32!SetParent */ RELOAD();
/* e1801c: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* e1801f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e18020: call dword ptr [0xe65d80] */
  esp -= 4; W32(esp, 0xe18026u); SPILL(); call_ind(R32(0xe65d80u)); if (g_unwind) return; /* USER32!SetFocus */ RELOAD();
L_e18026: /* e18026: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e18029: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e1802b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e1802c: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xe1802fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e1802f: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e18032: cmp dword ptr [eax + 0x198], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x198u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e18039: jne 0xe1804f */
  if (!zf) goto L_e1804f;
L_e1803b: /* e1803b: mov dword ptr [eax + 0x198], 2 */
  W32((uint32_t)(eax + 0x198u), 0x2u);
/* e18045: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e18048: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e1804a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e1804c: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0xe1804fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e1804f: /* e1804f: mov ecx, dword ptr [0xe65924] */
  ecx = R32((uint32_t)(0xe65924u));
/* e18055: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e18057: push 0xe63374 */
  { uint32_t v = 0xe63374u; esp -= 4; W32(esp, v); }
/* e1805c: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* e18061: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e18062: call dword ptr [0xe65928] */
  esp -= 4; W32(esp, 0xe18068u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* e18068: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e1806b: xor eax, eax */
  eax = 0;
/* e1806d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e18070: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e18077: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e18078: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e18079: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e1807a: mov esp, ebp */
  esp = ebp;
/* e1807c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e1807d: ret 0xc */
  esp += 16; SPILL(); return;
L_e180b0: /* e180b0: test dword ptr [edx + 0x1a8], 0x191 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x1a8u))); uint32_t b = (uint32_t)(0x191u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e180ba: je 0xe18adc */
  if (zf) goto L_e18adc;
L_e180c0: /* e180c0: mov dword ptr [edx + 0x84], 1 */
  W32((uint32_t)(edx + 0x84u), 0x1u);
/* e180ca: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* e180cd: mov eax, dword ptr [edx + 0x194] */
  eax = R32((uint32_t)(edx + 0x194u));
/* e180d3: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e180d6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e180d7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e180d8: call dword ptr [0xe65d50] */
  esp -= 4; W32(esp, 0xe180deu); SPILL(); call_ind(R32(0xe65d50u)); if (g_unwind) return; /* USER32!ValidateRect */ RELOAD();
/* e180de: xor eax, eax */
  eax = 0;
/* e180e0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e180e3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e180ea: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e180eb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e180ec: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e180ed: mov esp, ebp */
  esp = ebp;
/* e180ef: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e180f0: ret 0xc */
  esp += 16; SPILL(); return;
L_e180f3: /* e180f3: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* e180f6: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e180f8: mov byte ptr [ebp - 4], 0x15 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x15u);
/* e180fc: jne 0xe1810a */
  if (!zf) goto L_e1810a;
L_e180fe: /* e180fe: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e18101: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e18103: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e18104: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xe18107u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e18107: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
L_e1810a: /* e1810a: mov edx, dword ptr [0xe65920] */
  edx = R32((uint32_t)(0xe65920u));
/* e18110: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* e18112: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* e18115: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e18117: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* e1811a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e1811b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e1811c: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e1811f: mov ecx, dword ptr [eax + 0x194] */
  ecx = R32((uint32_t)(eax + 0x194u));
/* e18125: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e18126: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* e18129: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e1812a: jmp 0xe18bd0 */
  goto L_e18bd0;
L_e1815f: /* e1815f: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* e18162: movzx esi, ax */
  esi = (uint32_t)((eax & 0xffffu));
/* e18165: shr eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* e18168: xor ebx, ebx */
  ebx = 0;
/* e1816a: mov edi, eax */
  edi = eax;
/* e1816c: cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e18170: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* e18173: mov byte ptr [ebp - 4], 0x23 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x23u);
/* e18177: jne 0xe1818e */
  if (!zf) goto L_e1818e;
L_e18179: /* e18179: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e1817c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e1817e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e1817f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e18181: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e18183: call dword ptr [eax + 0xa0] */
  { uint32_t t = R32((uint32_t)(eax + 0xa0u)); esp -= 4; W32(esp, 0xe18189u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e18189: mov ebx, 1 */
  ebx = 0x1u;
L_e1818e: /* e1818e: cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e18192: jne 0xe181a5 */
  if (!zf) goto L_e181a5;
L_e18194: /* e18194: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e18197: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e18199: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e1819b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e1819d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e1819f: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0xe181a5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e181a5: /* e181a5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e181a8: mov edx, dword ptr [eax + 0x1a8] */
  edx = R32((uint32_t)(eax + 0x1a8u));
/* e181ae: test dl, 1 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e181b1: je 0xe18210 */
  if (zf) goto L_e18210;
L_e181b3: /* e181b3: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* e181b6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e181b8: jne 0xe181fb */
  if (!zf) goto L_e181fb;
L_e181ba: /* e181ba: inc dword ptr [eax + 0x1a4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x1a4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + 0x1a4u), r);
  }
/* e181c0: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e181c3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e181c5: lea ecx, [eax + 0x1c8] */
  ecx = (uint32_t)(eax + 0x1c8u);
/* e181cb: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* e181cd: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e181d0: mov edx, esp */
  edx = esp;
/* e181d2: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* e181d4: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* e181d7: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* e181da: mov esi, dword ptr [ecx + 8] */
  esi = R32((uint32_t)(ecx + 0x8u));
/* e181dd: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* e181e0: mov dword ptr [edx + 8], esi */
  W32((uint32_t)(edx + 0x8u), esi);
/* e181e3: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* e181e6: mov ecx, dword ptr [eax + 0x194] */
  ecx = R32((uint32_t)(eax + 0x194u));
/* e181ec: call dword ptr [0xe65f3c] */
  esp -= 4; W32(esp, 0xe181f2u); SPILL(); f_d8171c(); if (g_unwind) return; /* Window!?MoveWindow@WWindow@@QAEXUFRect@@H@Z */ RELOAD();
/* e181f2: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e181f5: dec dword ptr [eax + 0x1a4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x1a4u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(eax + 0x1a4u), r);
  }
L_e181fb: /* e181fb: xor eax, eax */
  eax = 0;
/* e181fd: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e18200: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e18207: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e18208: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e18209: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e1820a: mov esp, ebp */
  esp = ebp;
/* e1820c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e1820d: ret 0xc */
  esp += 16; SPILL(); return;
L_e18210: /* e18210: mov ecx, dword ptr [eax + 0x70] */
  ecx = R32((uint32_t)(eax + 0x70u));
/* e18213: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e18215: je 0xe1824d */
  if (zf) goto L_e1824d;
L_e18217: /* e18217: test dl, 0x90 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x90u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e1821a: je 0xe1824d */
  if (zf) goto L_e1824d;
L_e1821c: /* e1821c: mov edx, dword ptr [eax + 0xbc] */
  edx = R32((uint32_t)(eax + 0xbcu));
/* e18222: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e18224: jne 0xe1823a */
  if (!zf) goto L_e1823a;
L_e18226: /* e18226: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e18228: jne 0xe1823a */
  if (!zf) goto L_e1823a;
L_e1822a: /* e1822a: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* e1822c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e1822e: xor edx, edx */
  edx = 0;
/* e18230: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e18231: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e18232: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e18233: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e18234: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e18235: call dword ptr [ebx + 0x70] */
  { uint32_t t = R32((uint32_t)(ebx + 0x70u)); esp -= 4; W32(esp, 0xe18238u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e18238: jmp 0xe1825f */
  goto L_e1825f;
L_e1823a: /* e1823a: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* e1823c: mov edx, 1 */
  edx = 0x1u;
/* e18241: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e18242: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e18244: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e18245: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e18246: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e18247: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e18248: call dword ptr [ebx + 0x70] */
  { uint32_t t = R32((uint32_t)(ebx + 0x70u)); esp -= 4; W32(esp, 0xe1824bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e1824b: jmp 0xe1825f */
  goto L_e1825f;
L_e1824d: /* e1824d: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* e1824f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e18251: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e18252: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e18253: or edx, 0x20 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* e18256: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e18257: mov ecx, eax */
  ecx = eax;
/* e18259: call dword ptr [ebx + 0x80] */
  { uint32_t t = R32((uint32_t)(ebx + 0x80u)); esp -= 4; W32(esp, 0xe1825fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e1825f: /* e1825f: mov edx, dword ptr [0xe6590c] */
  edx = R32((uint32_t)(0xe6590cu));
/* e18265: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e18268: je 0xe18277 */
  if (zf) goto L_e18277;
L_e1826a: /* e1826a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e1826d: mov dword ptr [eax + 0x84], 0xffffffff */
  W32((uint32_t)(eax + 0x84u), 0xffffffffu);
L_e18277: /* e18277: xor eax, eax */
  eax = 0;
/* e18279: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e1827c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e18283: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e18284: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e18285: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e18286: mov esp, ebp */
  esp = ebp;
/* e18288: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e18289: ret 0xc */
  esp += 16; SPILL(); return;
L_e182bc: /* e182bc: mov eax, dword ptr [ebp + 0xc] */
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
L_e1838a: /* e1838a: mov edx, dword ptr [0xe6590c] */
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
L_e18470: /* e18470: cmp eax, 0x112 */
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
L_e18dde: /* e18dde: lea esi, [eax - 0x200] */
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

void f_e17fa0(void) {
  LOAD_REGS();
L_e17fa0: /* e17fa0: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* e17fa3: push 0xe5ec4c */
  { uint32_t v = 0xe5ec4cu; esp -= 4; W32(esp, v); }
/* e17fa8: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* e17fab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e17fac: mov dword ptr [ebp - 0x74], eax */
  W32((uint32_t)(ebp + 0xffffff8cu), eax);
/* e17faf: call 0xe25f60 */
  esp -= 4; W32(esp, 0xe17fb4u); SPILL(); f_e25f60(); if (g_unwind) return; RELOAD();
  SPILL(); f_e17fb4(); return;
}

void f_e17fb4(void) {
  LOAD_REGS();
L_e17fb4: /* e17fb4: push 0xe2f090 */
  { uint32_t v = 0xe2f090u; esp -= 4; W32(esp, v); }
/* e17fb9: push 0xe63360 */
  { uint32_t v = 0xe63360u; esp -= 4; W32(esp, v); }
/* e17fbe: call dword ptr [0xe65a5c] */
  esp -= 4; W32(esp, 0xe17fc4u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* e17fc4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e17fc7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e17fc9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e17fcb: call 0xe25f60 */
  esp -= 4; W32(esp, 0xe17fd0u); SPILL(); f_e25f60(); if (g_unwind) return; RELOAD();
/* e17fd0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e17fd3: test byte ptr [ecx + 0x1a8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x1a8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e17fda: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* e17fde: je 0xe17fe5 */
  if (zf) goto L_e17fe5;
L_e17fe0: /* e17fe0: call 0xe1106e */
  esp -= 4; W32(esp, 0xe17fe5u); SPILL(); f_e1106e(); if (g_unwind) return; RELOAD();
L_e17fe5: /* e17fe5: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* e17fe8: call dword ptr [0xe65918] */
  esp -= 4; W32(esp, 0xe17feeu); SPILL(); f_4e2987(); if (g_unwind) return; /* Core!?appCmdLine@@YAPBGXZ */ RELOAD();
/* e17fee: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* e17ff1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e17ff2: push 0xe63368 */
  { uint32_t v = 0xe63368u; esp -= 4; W32(esp, v); }
/* e17ff7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e17ff8: call dword ptr [0xe658a4] */
  esp -= 4; W32(esp, 0xe17ffeu); SPILL(); f_4e44cb(); if (g_unwind) return; /* Core!?Parse@@YAHPBG0AAK@Z */ RELOAD();
/* e17ffe: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* e18001: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e18004: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e18006: je 0xe18026 */
  if (zf) goto L_e18026;
L_e18008: /* e18008: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e1800b: mov ecx, dword ptr [eax + 0x194] */
  ecx = R32((uint32_t)(eax + 0x194u));
/* e18011: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* e18014: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e18015: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e18016: call dword ptr [0xe65d4c] */
  esp -= 4; W32(esp, 0xe1801cu); SPILL(); call_ind(R32(0xe65d4cu)); if (g_unwind) return; /* USER32!SetParent */ RELOAD();
/* e1801c: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* e1801f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e18020: call dword ptr [0xe65d80] */
  esp -= 4; W32(esp, 0xe18026u); SPILL(); call_ind(R32(0xe65d80u)); if (g_unwind) return; /* USER32!SetFocus */ RELOAD();
L_e18026: /* e18026: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e18029: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e1802b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e1802c: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xe1802fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e1802f: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e18032: cmp dword ptr [eax + 0x198], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x198u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e18039: jne 0xe1804f */
  if (!zf) goto L_e1804f;
L_e1803b: /* e1803b: mov dword ptr [eax + 0x198], 2 */
  W32((uint32_t)(eax + 0x198u), 0x2u);
/* e18045: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e18048: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e1804a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e1804c: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0xe1804fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e1804f: /* e1804f: mov ecx, dword ptr [0xe65924] */
  ecx = R32((uint32_t)(0xe65924u));
/* e18055: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e18057: push 0xe63374 */
  { uint32_t v = 0xe63374u; esp -= 4; W32(esp, v); }
/* e1805c: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* e18061: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e18062: call dword ptr [0xe65928] */
  esp -= 4; W32(esp, 0xe18068u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* e18068: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e1806b: xor eax, eax */
  eax = 0;
/* e1806d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e18070: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e18077: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e18078: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e18079: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e1807a: mov esp, ebp */
  esp = ebp;
/* e1807c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e1807d: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_e18080(void) {
  LOAD_REGS();
L_e18080: /* e18080: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* e18083: push 0xe5ec4c */
  { uint32_t v = 0xe5ec4cu; esp -= 4; W32(esp, v); }
/* e18088: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* e1808b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e1808c: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
/* e1808f: call 0xe25f60 */
  esp -= 4; W32(esp, 0xe18094u); SPILL(); f_e25f60(); if (g_unwind) return; RELOAD();
  SPILL(); f_e18094(); return;
}

void f_e18094(void) {
  LOAD_REGS();
L_e18094: /* e18094: push 0xe2f074 */
  { uint32_t v = 0xe2f074u; esp -= 4; W32(esp, v); }
/* e18099: push 0xe63394 */
  { uint32_t v = 0xe63394u; esp -= 4; W32(esp, v); }
/* e1809e: call dword ptr [0xe65a5c] */
  esp -= 4; W32(esp, 0xe180a4u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* e180a4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e180a7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e180a9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e180ab: call 0xe25f60 */
  esp -= 4; W32(esp, 0xe180b0u); SPILL(); f_e25f60(); if (g_unwind) return; RELOAD();
/* e180b0: test dword ptr [edx + 0x1a8], 0x191 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x1a8u))); uint32_t b = (uint32_t)(0x191u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e180ba: je 0xe18adc */
  if (zf) goto L_e18adc;
L_e180c0: /* e180c0: mov dword ptr [edx + 0x84], 1 */
  W32((uint32_t)(edx + 0x84u), 0x1u);
/* e180ca: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* e180cd: mov eax, dword ptr [edx + 0x194] */
  eax = R32((uint32_t)(edx + 0x194u));
/* e180d3: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e180d6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e180d7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e180d8: call dword ptr [0xe65d50] */
  esp -= 4; W32(esp, 0xe180deu); SPILL(); call_ind(R32(0xe65d50u)); if (g_unwind) return; /* USER32!ValidateRect */ RELOAD();
/* e180de: xor eax, eax */
  eax = 0;
/* e180e0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e180e3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e180ea: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e180eb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e180ec: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e180ed: mov esp, ebp */
  esp = ebp;
/* e180ef: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e180f0: ret 0xc */
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
}

void f_e1812f(void) {
  LOAD_REGS();
L_e1812f: /* e1812f: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* e18132: push 0xe5ec4c */
  { uint32_t v = 0xe5ec4cu; esp -= 4; W32(esp, v); }
/* e18137: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* e1813a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e1813b: mov dword ptr [ebp - 0x68], eax */
  W32((uint32_t)(ebp + 0xffffff98u), eax);
/* e1813e: call 0xe25f60 */
  esp -= 4; W32(esp, 0xe18143u); SPILL(); f_e25f60(); if (g_unwind) return; RELOAD();
  SPILL(); f_e18143(); return;
}

void f_e18143(void) {
  LOAD_REGS();
L_e18143: /* e18143: push 0xe2f058 */
  { uint32_t v = 0xe2f058u; esp -= 4; W32(esp, v); }
/* e18148: push 0xe63414 */
  { uint32_t v = 0xe63414u; esp -= 4; W32(esp, v); }
/* e1814d: call dword ptr [0xe65a5c] */
  esp -= 4; W32(esp, 0xe18153u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* e18153: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e18156: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e18158: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e1815a: call 0xe25f60 */
  esp -= 4; W32(esp, 0xe1815fu); SPILL(); f_e25f60(); if (g_unwind) return; RELOAD();
/* e1815f: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* e18162: movzx esi, ax */
  esi = (uint32_t)((eax & 0xffffu));
/* e18165: shr eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* e18168: xor ebx, ebx */
  ebx = 0;
/* e1816a: mov edi, eax */
  edi = eax;
/* e1816c: cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e18170: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* e18173: mov byte ptr [ebp - 4], 0x23 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x23u);
/* e18177: jne 0xe1818e */
  if (!zf) goto L_e1818e;
L_e18179: /* e18179: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e1817c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e1817e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e1817f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e18181: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e18183: call dword ptr [eax + 0xa0] */
  { uint32_t t = R32((uint32_t)(eax + 0xa0u)); esp -= 4; W32(esp, 0xe18189u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e18189: mov ebx, 1 */
  ebx = 0x1u;
L_e1818e: /* e1818e: cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e18192: jne 0xe181a5 */
  if (!zf) goto L_e181a5;
L_e18194: /* e18194: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e18197: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e18199: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e1819b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e1819d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e1819f: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0xe181a5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e181a5: /* e181a5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e181a8: mov edx, dword ptr [eax + 0x1a8] */
  edx = R32((uint32_t)(eax + 0x1a8u));
/* e181ae: test dl, 1 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e181b1: je 0xe18210 */
  if (zf) goto L_e18210;
L_e181b3: /* e181b3: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* e181b6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e181b8: jne 0xe181fb */
  if (!zf) goto L_e181fb;
L_e181ba: /* e181ba: inc dword ptr [eax + 0x1a4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x1a4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + 0x1a4u), r);
  }
/* e181c0: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e181c3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e181c5: lea ecx, [eax + 0x1c8] */
  ecx = (uint32_t)(eax + 0x1c8u);
/* e181cb: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* e181cd: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e181d0: mov edx, esp */
  edx = esp;
/* e181d2: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* e181d4: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* e181d7: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* e181da: mov esi, dword ptr [ecx + 8] */
  esi = R32((uint32_t)(ecx + 0x8u));
/* e181dd: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* e181e0: mov dword ptr [edx + 8], esi */
  W32((uint32_t)(edx + 0x8u), esi);
/* e181e3: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* e181e6: mov ecx, dword ptr [eax + 0x194] */
  ecx = R32((uint32_t)(eax + 0x194u));
/* e181ec: call dword ptr [0xe65f3c] */
  esp -= 4; W32(esp, 0xe181f2u); SPILL(); f_d8171c(); if (g_unwind) return; /* Window!?MoveWindow@WWindow@@QAEXUFRect@@H@Z */ RELOAD();
/* e181f2: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e181f5: dec dword ptr [eax + 0x1a4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x1a4u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(eax + 0x1a4u), r);
  }
L_e181fb: /* e181fb: xor eax, eax */
  eax = 0;
/* e181fd: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e18200: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e18207: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e18208: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e18209: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e1820a: mov esp, ebp */
  esp = ebp;
/* e1820c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e1820d: ret 0xc */
  esp += 16; SPILL(); return;
L_e18210: /* e18210: mov ecx, dword ptr [eax + 0x70] */
  ecx = R32((uint32_t)(eax + 0x70u));
/* e18213: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e18215: je 0xe1824d */
  if (zf) goto L_e1824d;
L_e18217: /* e18217: test dl, 0x90 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x90u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e1821a: je 0xe1824d */
  if (zf) goto L_e1824d;
L_e1821c: /* e1821c: mov edx, dword ptr [eax + 0xbc] */
  edx = R32((uint32_t)(eax + 0xbcu));
/* e18222: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e18224: jne 0xe1823a */
  if (!zf) goto L_e1823a;
L_e18226: /* e18226: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e18228: jne 0xe1823a */
  if (!zf) goto L_e1823a;
L_e1822a: /* e1822a: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* e1822c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e1822e: xor edx, edx */
  edx = 0;
/* e18230: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e18231: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e18232: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e18233: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e18234: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e18235: call dword ptr [ebx + 0x70] */
  { uint32_t t = R32((uint32_t)(ebx + 0x70u)); esp -= 4; W32(esp, 0xe18238u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e18238: jmp 0xe1825f */
  goto L_e1825f;
L_e1823a: /* e1823a: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* e1823c: mov edx, 1 */
  edx = 0x1u;
/* e18241: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e18242: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e18244: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e18245: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e18246: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e18247: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e18248: call dword ptr [ebx + 0x70] */
  { uint32_t t = R32((uint32_t)(ebx + 0x70u)); esp -= 4; W32(esp, 0xe1824bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e1824b: jmp 0xe1825f */
  goto L_e1825f;
L_e1824d: /* e1824d: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* e1824f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e18251: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e18252: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e18253: or edx, 0x20 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* e18256: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e18257: mov ecx, eax */
  ecx = eax;
/* e18259: call dword ptr [ebx + 0x80] */
  { uint32_t t = R32((uint32_t)(ebx + 0x80u)); esp -= 4; W32(esp, 0xe1825fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e1825f: /* e1825f: mov edx, dword ptr [0xe6590c] */
  edx = R32((uint32_t)(0xe6590cu));
/* e18265: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e18268: je 0xe18277 */
  if (zf) goto L_e18277;
L_e1826a: /* e1826a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e1826d: mov dword ptr [eax + 0x84], 0xffffffff */
  W32((uint32_t)(eax + 0x84u), 0xffffffffu);
L_e18277: /* e18277: xor eax, eax */
  eax = 0;
/* e18279: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e1827c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e18283: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e18284: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e18285: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e18286: mov esp, ebp */
  esp = ebp;
/* e18288: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e18289: ret 0xc */
  esp += 16; SPILL(); return;
}
