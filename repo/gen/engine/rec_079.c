#include "recomp.h"
#include "rec_mod.h"

void f_86bcfd(void) {
  LOAD_REGS();
  goto L_86bcfd;
L_86b64c: /* 86b64c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 86b64f: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 86b652: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86b655: je 0x86b671 */
  if (zf) goto L_86b671;
L_86b657: /* 86b657: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 86b65a: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 86b65d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86b65e: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 86b661: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86b662: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 86b665: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86b666: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86b667: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86b668: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86b669: call 0x86b3f0 */
  esp -= 4; W32(esp, 0x86b66eu); SPILL(); f_86b3f0(); if (g_unwind) return; RELOAD();
/* 86b66e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_86b671: /* 86b671: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 86b674: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 86b675: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 86b676: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 86b67d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 86b67e: mov esp, ebp */
  esp = ebp;
/* 86b680: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 86b681: ret  */
  esp += 4; SPILL(); return;
L_86bcfd: /* 86bcfd: xor eax, eax */
  eax = 0;
/* 86bcff: mov edx, dword ptr [ebx + 0x324] */
  edx = R32((uint32_t)(ebx + 0x324u));
/* 86bd05: mov dword ptr [ebx + 0x31c], eax */
  W32((uint32_t)(ebx + 0x31cu), eax);
/* 86bd0b: mov eax, dword ptr [ebx + 0x320] */
  eax = R32((uint32_t)(ebx + 0x320u));
/* 86bd11: or eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 86bd13: or edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 86bd15: mov dword ptr [ebx + 0x320], eax */
  W32((uint32_t)(ebx + 0x320u), eax);
/* 86bd1b: mov dword ptr [ebx + 0x324], edx */
  W32((uint32_t)(ebx + 0x324u), edx);
/* 86bd21: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86bd26: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86bd29: jne 0x86bd47 */
  if (!zf) goto L_86bd47;
L_86bd2b: /* 86bd2b: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86bd2e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86bd2f: mov esi, ebx */
  esi = ebx;
/* 86bd31: call 0x868660 */
  esp -= 4; W32(esp, 0x86bd36u); SPILL(); f_868660(); if (g_unwind) return; RELOAD();
/* 86bd36: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86bd39: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 86bd40: jmp 0x86be40 */
  goto L_86be40;
L_86bd47: /* 86bd47: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 86bd4e: jmp 0x86be40 */
  goto L_86be40;
L_86be40: /* 86be40: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86be43: mov ecx, dword ptr [edx + 0x1c] */
  ecx = R32((uint32_t)(edx + 0x1cu));
/* 86be46: mov edx, dword ptr [ebx + 0x328] */
  edx = R32((uint32_t)(ebx + 0x328u));
/* 86be4c: mov eax, ecx */
  eax = ecx;
/* 86be4e: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 86be51: lea esi, [eax + edx] */
  esi = (uint32_t)(eax + edx);
/* 86be54: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 86be57: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 86be59: shl al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint8_t r = (uint8_t)((uint32_t)a << c);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
  }
/* 86be5b: or byte ptr [esi], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(esi), r);
  }
/* 86be5d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 86be60: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 86be63: test byte ptr [edi + 4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86be67: je 0x86be74 */
  if (zf) goto L_86be74;
L_86be69: /* 86be69: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 86be6c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86be6e: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86be74: /* 86be74: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86be77: movzx ecx, byte ptr [edx + esi + 0x54] */
  ecx = (uint32_t)(R8((uint32_t)(edx + esi + 0x54u)));
/* 86be7c: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 86be7e: cmp ecx, dword ptr [eax + 0x1cc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x1ccu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86be84: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86be8a: /* 86be8a: cmp dword ptr [esi + 0x60], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x60u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86be8e: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86be94: /* 86be94: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 86be97: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 86be9a: test dword ptr [eax + 0x534], 0x2000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x534u))); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bea4: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86beaa: /* 86beaa: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86bead: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86beaf: je 0x86c2c9 */
  if (zf) goto L_86c2c9;
L_86beb5: /* 86beb5: mov ecx, dword ptr [ebx + 0x35c] */
  ecx = R32((uint32_t)(ebx + 0x35cu));
/* 86bebb: xor edi, edi */
  edi = 0;
/* 86bebd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_86bec0: /* 86bec0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bec2: je 0x86bee0 */
  if (zf) goto L_86bee0;
L_86bec4: /* 86bec4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86bec6: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86bec9: cmp dword ptr [eax + 0x14], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86becc: jne 0x86c28c */
  if (!zf) goto L_86c28c;
L_86bed2: /* 86bed2: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 86bed5: cmp edx, dword ptr [esi + 0x60] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x60u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86bed8: jne 0x86c28c */
  if (!zf) goto L_86c28c;
L_86bede: /* 86bede: mov edi, eax */
  edi = eax;
L_86bee0: /* 86bee0: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bee2: jne 0x86c2be */
  if (!zf) goto L_86c2be;
L_86bee8: /* 86bee8: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86beea: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 86beec: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86bef1: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86bef7u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86bef7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bef9: je 0x86c294 */
  if (zf) goto L_86c294;
L_86beff: /* 86beff: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86bf02: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 86bf05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86bf06: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 86bf09: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86bf0a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86bf0b: mov ecx, eax */
  ecx = eax;
/* 86bf0d: call 0x6c50b5 */
  esp -= 4; W32(esp, 0x86bf12u); SPILL(); f_6c50b5(); if (g_unwind) return; RELOAD();
/* 86bf12: mov edi, eax */
  edi = eax;
/* 86bf14: jmp 0x86c296 */
  goto L_86c296;
L_86c28c: /* 86c28c: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 86c28f: jmp 0x86bec0 */
  goto L_86bec0;
L_86c294: /* 86c294: xor edi, edi */
  edi = 0;
L_86c296: /* 86c296: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c298: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c29a: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c29f: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c2a5u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c2a5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2a7: je 0x86c2b6 */
  if (zf) goto L_86c2b6;
L_86c2a9: /* 86c2a9: mov ecx, dword ptr [ebx + 0x35c] */
  ecx = R32((uint32_t)(ebx + 0x35cu));
/* 86c2af: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 86c2b1: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86c2b4: jmp 0x86c2b8 */
  goto L_86c2b8;
L_86c2b6: /* 86c2b6: xor eax, eax */
  eax = 0;
L_86c2b8: /* 86c2b8: mov dword ptr [ebx + 0x35c], eax */
  W32((uint32_t)(ebx + 0x35cu), eax);
L_86c2be: /* 86c2be: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86c2c1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c2c2: mov ecx, edi */
  ecx = edi;
/* 86c2c4: call 0x6c7e37 */
  esp -= 4; W32(esp, 0x86c2c9u); SPILL(); f_6c7e37(); if (g_unwind) return; RELOAD();
L_86c2c9: /* 86c2c9: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 86c2cc: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 86c2cf: test eax, 0x20000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2d4: je 0x86c2de */
  if (zf) goto L_86c2de;
L_86c2d6: /* 86c2d6: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2d8: jne 0x86b64c */
  if (!zf) goto L_86b64c;
L_86c2de: /* 86c2de: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 86c2e0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2e2: je 0x86c3bb */
  if (zf) goto L_86c3bb;
L_86c2e8: /* 86c2e8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86c2ea: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0x86c2f0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86c2f0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2f2: je 0x86c3bb */
  if (zf) goto L_86c3bb;
L_86c2f8: /* 86c2f8: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 86c2fb: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2fd: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 86c300: mov edi, dword ptr [ebp + 0x1c] */
  edi = R32((uint32_t)(ebp + 0x1cu));
/* 86c303: mov dword ptr [ebp - 0x60], 1 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x1u);
/* 86c30a: mov dword ptr [ebp - 0x5c], ecx */
  W32((uint32_t)(ebp + 0xffffffa4u), ecx);
/* 86c30d: mov dword ptr [ebp - 0x54], esi */
  W32((uint32_t)(ebp + 0xffffffacu), esi);
/* 86c310: mov dword ptr [ebp - 0x4c], edi */
  W32((uint32_t)(ebp + 0xffffffb4u), edi);
/* 86c313: je 0x86c33f */
  if (zf) goto L_86c33f;
L_86c315: /* 86c315: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c317: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 86c318: push 0xcc9ad8 */
  { uint32_t v = 0xcc9ad8u; esp -= 4; W32(esp, v); }
/* 86c31d: call 0x6c3170 */
  esp -= 4; W32(esp, 0x86c322u); SPILL(); f_6c3170(); if (g_unwind) return; RELOAD();
/* 86c322: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 86c325: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c328: lea edx, [esi*4] */
  edx = (uint32_t)(esi*4);
/* 86c32f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c330: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c331: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c332: mov dword ptr [ebp - 0x58], eax */
  W32((uint32_t)(ebp + 0xffffffa8u), eax);
/* 86c335: call 0x6ca83f */
  esp -= 4; W32(esp, 0x86c33au); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 86c33a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c33d: jmp 0x86c346 */
  goto L_86c346;
L_86c33f: /* 86c33f: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
L_86c346: /* 86c346: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c348: je 0x86c374 */
  if (zf) goto L_86c374;
L_86c34a: /* 86c34a: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c34c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86c34d: push 0xcc9ad8 */
  { uint32_t v = 0xcc9ad8u; esp -= 4; W32(esp, v); }
/* 86c352: call 0x6c99e4 */
  esp -= 4; W32(esp, 0x86c357u); SPILL(); f_6c99e4(); if (g_unwind) return; RELOAD();
/* 86c357: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 86c35a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c35d: lea edx, [edi*4] */
  edx = (uint32_t)(edi*4);
/* 86c364: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c365: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c366: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c367: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 86c36a: call 0x6ca83f */
  esp -= 4; W32(esp, 0x86c36fu); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 86c36f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c372: jmp 0x86c37b */
  goto L_86c37b;
L_86c374: /* 86c374: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
L_86c37b: /* 86c37b: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c37d: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 86c37f: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c384: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c38au); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c38a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c38c: je 0x86c3ae */
  if (zf) goto L_86c3ae;
L_86c38e: /* 86c38e: mov edx, dword ptr [ebx + 0x33c] */
  edx = R32((uint32_t)(ebx + 0x33cu));
/* 86c394: mov ecx, 7 */
  ecx = 0x7u;
/* 86c399: lea esi, [ebp - 0x60] */
  esi = (uint32_t)(ebp + 0xffffffa0u);
/* 86c39c: mov edi, eax */
  edi = eax;
/* 86c39e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 86c3a0: mov dword ptr [eax + 0x1c], edx */
  W32((uint32_t)(eax + 0x1cu), edx);
/* 86c3a3: mov dword ptr [ebx + 0x33c], eax */
  W32((uint32_t)(ebx + 0x33cu), eax);
/* 86c3a9: jmp 0x86b64c */
  goto L_86b64c;
L_86c3ae: /* 86c3ae: xor eax, eax */
  eax = 0;
/* 86c3b0: mov dword ptr [ebx + 0x33c], eax */
  W32((uint32_t)(ebx + 0x33cu), eax);
/* 86c3b6: jmp 0x86b64c */
  goto L_86b64c;
L_86c3bb: /* 86c3bb: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 86c3be: mov eax, dword ptr [ebx + 0x354] */
  eax = R32((uint32_t)(ebx + 0x354u));
/* 86c3c4: cmp dword ptr [eax + edx*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + edx*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c3c8: jne 0x86c427 */
  if (!zf) goto L_86c427;
L_86c3ca: /* 86c3ca: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c3cc: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 86c3ce: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c3d3: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c3d9u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c3d9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c3db: je 0x86c3ee */
  if (zf) goto L_86c3ee;
L_86c3dd: /* 86c3dd: mov ecx, dword ptr [esi + 0x60] */
  ecx = R32((uint32_t)(esi + 0x60u));
/* 86c3e0: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 86c3e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c3e4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c3e5: mov ecx, eax */
  ecx = eax;
/* 86c3e7: call 0x6c1924 */
  esp -= 4; W32(esp, 0x86c3ecu); SPILL(); f_6c1924(); if (g_unwind) return; RELOAD();
/* 86c3ec: jmp 0x86c3f0 */
  goto L_86c3f0;
L_86c3ee: /* 86c3ee: xor eax, eax */
  eax = 0;
L_86c3f0: /* 86c3f0: mov ecx, dword ptr [esi + 0x60] */
  ecx = R32((uint32_t)(esi + 0x60u));
/* 86c3f3: mov edx, dword ptr [ebx + 0x354] */
  edx = R32((uint32_t)(ebx + 0x354u));
/* 86c3f9: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c3fb: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* 86c3fe: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c400: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c405: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c40bu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c40b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c40d: je 0x86c41f */
  if (zf) goto L_86c41f;
L_86c40f: /* 86c40f: mov ecx, dword ptr [ebx + 0x358] */
  ecx = R32((uint32_t)(ebx + 0x358u));
/* 86c415: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 86c418: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 86c41a: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86c41d: jmp 0x86c421 */
  goto L_86c421;
L_86c41f: /* 86c41f: xor eax, eax */
  eax = 0;
L_86c421: /* 86c421: mov dword ptr [ebx + 0x358], eax */
  W32((uint32_t)(ebx + 0x358u), eax);
L_86c427: /* 86c427: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 86c429: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 86c42c: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 86c42f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c430: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 86c433: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c434: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 86c437: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c438: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86c43b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c43c: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
/* 86c43f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c440: mov ecx, dword ptr [ebx + 0x354] */
  ecx = R32((uint32_t)(ebx + 0x354u));
/* 86c446: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 86c449: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c44a: call 0x6c83fa */
  esp -= 4; W32(esp, 0x86c44fu); SPILL(); f_6c83fa(); if (g_unwind) return; RELOAD();
/* 86c44f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86c452: mov esi, dword ptr [edx + 0x68] */
  esi = R32((uint32_t)(edx + 0x68u));
/* 86c455: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c458: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86c45e: /* 86c45e: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86c463: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c466: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86c46c: /* 86c46c: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 86c46f: imul esi, esi, 0xa4 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0xa4u);
  esi = (uint32_t)r;
  }
/* 86c475: add esi, dword ptr [ecx + 0xf0] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xf0u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 86c47b: xor edx, edx */
  edx = 0;
L_86c47d: /* 86c47d: cmp edx, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86c480: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 86c483: jge 0x86b64c */
  if ((sf == of)) goto L_86b64c;
L_86c489: /* 86c489: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 86c48c: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 86c48f: mov eax, dword ptr [ecx + 0x38] */
  eax = R32((uint32_t)(ecx + 0x38u));
/* 86c492: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c494: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 86c497: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c49d: /* 86c49d: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86c4a2: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c4a5: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c4ab: /* 86c4ab: xor eax, eax */
  eax = 0;
/* 86c4ad: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_86c4b0: /* 86c4b0: cmp eax, dword ptr [esi + 0x9c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x9cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86c4b6: jge 0x86c4cc */
  if ((sf == of)) goto L_86c4cc;
L_86c4b8: /* 86c4b8: mov edi, dword ptr [esi + 0x98] */
  edi = R32((uint32_t)(esi + 0x98u));
/* 86c4be: mov edi, dword ptr [edi + eax*4] */
  edi = R32((uint32_t)(edi + eax*4));
/* 86c4c1: cmp edi, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c4c3: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c4c9: /* 86c4c9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 86c4ca: jmp 0x86c4b0 */
  goto L_86c4b0;
L_86c4cc: /* 86c4cc: mov eax, 1 */
  eax = 0x1u;
/* 86c4d1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c4d3: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c4d5: /* 86c4d5: mov eax, dword ptr [esi + 0x9c] */
  eax = R32((uint32_t)(esi + 0x9cu));
/* 86c4db: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c4dd: jne 0x86c4ff */
  if (!zf) goto L_86c4ff;
L_86c4df: /* 86c4df: mov edi, dword ptr [ebx + 0xc] */
  edi = R32((uint32_t)(ebx + 0xcu));
/* 86c4e2: add edi, 0xfc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 86c4e8: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86c4ea: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86c4ec: mov ecx, edi */
  ecx = edi;
/* 86c4ee: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x86c4f4u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 86c4f4: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86c4f7: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 86c4f9: mov edx, dword ptr [edx + 0x68] */
  edx = R32((uint32_t)(edx + 0x68u));
/* 86c4fc: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
L_86c4ff: /* 86c4ff: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86c501: lea edi, [esi + 0x98] */
  edi = (uint32_t)(esi + 0x98u);
/* 86c507: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86c509: mov ecx, edi */
  ecx = edi;
/* 86c50b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x86c511u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 86c511: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 86c513: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86c516: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 86c518: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 86c51b: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 86c51e: mov edx, dword ptr [esi + 0x24] */
  edx = R32((uint32_t)(esi + 0x24u));
/* 86c521: imul eax, eax, 0x6c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x6cu);
  eax = (uint32_t)r;
  }
/* 86c524: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 86c525: mov dword ptr [esi + 0x24], edx */
  W32((uint32_t)(esi + 0x24u), edx);
/* 86c528: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 86c52b: mov edx, dword ptr [ecx + 0xe4] */
  edx = R32((uint32_t)(ecx + 0xe4u));
/* 86c531: mov ecx, dword ptr [eax + edx + 0x68] */
  ecx = R32((uint32_t)(eax + edx + 0x68u));
/* 86c535: lea eax, [eax + edx + 0x68] */
  eax = (uint32_t)(eax + edx + 0x68u);
/* 86c539: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86c53c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 86c53d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_86c53f: /* 86c53f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 86c540: jmp 0x86c47d */
  goto L_86c47d;
}

void f_86bd45(void) {
  LOAD_REGS();
  goto L_86bd45;
L_86b64c: /* 86b64c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 86b64f: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 86b652: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86b655: je 0x86b671 */
  if (zf) goto L_86b671;
L_86b657: /* 86b657: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 86b65a: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 86b65d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86b65e: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 86b661: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86b662: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 86b665: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86b666: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86b667: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86b668: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86b669: call 0x86b3f0 */
  esp -= 4; W32(esp, 0x86b66eu); SPILL(); f_86b3f0(); if (g_unwind) return; RELOAD();
/* 86b66e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_86b671: /* 86b671: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 86b674: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 86b675: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 86b676: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 86b67d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 86b67e: mov esp, ebp */
  esp = ebp;
/* 86b680: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 86b681: ret  */
  esp += 4; SPILL(); return;
L_86bd45: /* 86bd45: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 86bd47: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 86bd4e: jmp 0x86be40 */
  goto L_86be40;
L_86be40: /* 86be40: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86be43: mov ecx, dword ptr [edx + 0x1c] */
  ecx = R32((uint32_t)(edx + 0x1cu));
/* 86be46: mov edx, dword ptr [ebx + 0x328] */
  edx = R32((uint32_t)(ebx + 0x328u));
/* 86be4c: mov eax, ecx */
  eax = ecx;
/* 86be4e: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 86be51: lea esi, [eax + edx] */
  esi = (uint32_t)(eax + edx);
/* 86be54: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 86be57: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 86be59: shl al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint8_t r = (uint8_t)((uint32_t)a << c);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
  }
/* 86be5b: or byte ptr [esi], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(esi), r);
  }
/* 86be5d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 86be60: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 86be63: test byte ptr [edi + 4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86be67: je 0x86be74 */
  if (zf) goto L_86be74;
L_86be69: /* 86be69: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 86be6c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86be6e: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86be74: /* 86be74: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86be77: movzx ecx, byte ptr [edx + esi + 0x54] */
  ecx = (uint32_t)(R8((uint32_t)(edx + esi + 0x54u)));
/* 86be7c: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 86be7e: cmp ecx, dword ptr [eax + 0x1cc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x1ccu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86be84: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86be8a: /* 86be8a: cmp dword ptr [esi + 0x60], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x60u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86be8e: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86be94: /* 86be94: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 86be97: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 86be9a: test dword ptr [eax + 0x534], 0x2000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x534u))); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bea4: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86beaa: /* 86beaa: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86bead: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86beaf: je 0x86c2c9 */
  if (zf) goto L_86c2c9;
L_86beb5: /* 86beb5: mov ecx, dword ptr [ebx + 0x35c] */
  ecx = R32((uint32_t)(ebx + 0x35cu));
/* 86bebb: xor edi, edi */
  edi = 0;
/* 86bebd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_86bec0: /* 86bec0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bec2: je 0x86bee0 */
  if (zf) goto L_86bee0;
L_86bec4: /* 86bec4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86bec6: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86bec9: cmp dword ptr [eax + 0x14], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86becc: jne 0x86c28c */
  if (!zf) goto L_86c28c;
L_86bed2: /* 86bed2: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 86bed5: cmp edx, dword ptr [esi + 0x60] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x60u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86bed8: jne 0x86c28c */
  if (!zf) goto L_86c28c;
L_86bede: /* 86bede: mov edi, eax */
  edi = eax;
L_86bee0: /* 86bee0: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bee2: jne 0x86c2be */
  if (!zf) goto L_86c2be;
L_86bee8: /* 86bee8: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86beea: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 86beec: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86bef1: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86bef7u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86bef7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bef9: je 0x86c294 */
  if (zf) goto L_86c294;
L_86beff: /* 86beff: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86bf02: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 86bf05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86bf06: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 86bf09: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86bf0a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86bf0b: mov ecx, eax */
  ecx = eax;
/* 86bf0d: call 0x6c50b5 */
  esp -= 4; W32(esp, 0x86bf12u); SPILL(); f_6c50b5(); if (g_unwind) return; RELOAD();
/* 86bf12: mov edi, eax */
  edi = eax;
/* 86bf14: jmp 0x86c296 */
  goto L_86c296;
L_86c28c: /* 86c28c: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 86c28f: jmp 0x86bec0 */
  goto L_86bec0;
L_86c294: /* 86c294: xor edi, edi */
  edi = 0;
L_86c296: /* 86c296: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c298: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c29a: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c29f: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c2a5u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c2a5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2a7: je 0x86c2b6 */
  if (zf) goto L_86c2b6;
L_86c2a9: /* 86c2a9: mov ecx, dword ptr [ebx + 0x35c] */
  ecx = R32((uint32_t)(ebx + 0x35cu));
/* 86c2af: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 86c2b1: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86c2b4: jmp 0x86c2b8 */
  goto L_86c2b8;
L_86c2b6: /* 86c2b6: xor eax, eax */
  eax = 0;
L_86c2b8: /* 86c2b8: mov dword ptr [ebx + 0x35c], eax */
  W32((uint32_t)(ebx + 0x35cu), eax);
L_86c2be: /* 86c2be: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86c2c1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c2c2: mov ecx, edi */
  ecx = edi;
/* 86c2c4: call 0x6c7e37 */
  esp -= 4; W32(esp, 0x86c2c9u); SPILL(); f_6c7e37(); if (g_unwind) return; RELOAD();
L_86c2c9: /* 86c2c9: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 86c2cc: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 86c2cf: test eax, 0x20000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2d4: je 0x86c2de */
  if (zf) goto L_86c2de;
L_86c2d6: /* 86c2d6: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2d8: jne 0x86b64c */
  if (!zf) goto L_86b64c;
L_86c2de: /* 86c2de: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 86c2e0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2e2: je 0x86c3bb */
  if (zf) goto L_86c3bb;
L_86c2e8: /* 86c2e8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86c2ea: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0x86c2f0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86c2f0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2f2: je 0x86c3bb */
  if (zf) goto L_86c3bb;
L_86c2f8: /* 86c2f8: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 86c2fb: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2fd: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 86c300: mov edi, dword ptr [ebp + 0x1c] */
  edi = R32((uint32_t)(ebp + 0x1cu));
/* 86c303: mov dword ptr [ebp - 0x60], 1 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x1u);
/* 86c30a: mov dword ptr [ebp - 0x5c], ecx */
  W32((uint32_t)(ebp + 0xffffffa4u), ecx);
/* 86c30d: mov dword ptr [ebp - 0x54], esi */
  W32((uint32_t)(ebp + 0xffffffacu), esi);
/* 86c310: mov dword ptr [ebp - 0x4c], edi */
  W32((uint32_t)(ebp + 0xffffffb4u), edi);
/* 86c313: je 0x86c33f */
  if (zf) goto L_86c33f;
L_86c315: /* 86c315: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c317: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 86c318: push 0xcc9ad8 */
  { uint32_t v = 0xcc9ad8u; esp -= 4; W32(esp, v); }
/* 86c31d: call 0x6c3170 */
  esp -= 4; W32(esp, 0x86c322u); SPILL(); f_6c3170(); if (g_unwind) return; RELOAD();
/* 86c322: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 86c325: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c328: lea edx, [esi*4] */
  edx = (uint32_t)(esi*4);
/* 86c32f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c330: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c331: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c332: mov dword ptr [ebp - 0x58], eax */
  W32((uint32_t)(ebp + 0xffffffa8u), eax);
/* 86c335: call 0x6ca83f */
  esp -= 4; W32(esp, 0x86c33au); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 86c33a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c33d: jmp 0x86c346 */
  goto L_86c346;
L_86c33f: /* 86c33f: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
L_86c346: /* 86c346: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c348: je 0x86c374 */
  if (zf) goto L_86c374;
L_86c34a: /* 86c34a: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c34c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86c34d: push 0xcc9ad8 */
  { uint32_t v = 0xcc9ad8u; esp -= 4; W32(esp, v); }
/* 86c352: call 0x6c99e4 */
  esp -= 4; W32(esp, 0x86c357u); SPILL(); f_6c99e4(); if (g_unwind) return; RELOAD();
/* 86c357: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 86c35a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c35d: lea edx, [edi*4] */
  edx = (uint32_t)(edi*4);
/* 86c364: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c365: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c366: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c367: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 86c36a: call 0x6ca83f */
  esp -= 4; W32(esp, 0x86c36fu); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 86c36f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c372: jmp 0x86c37b */
  goto L_86c37b;
L_86c374: /* 86c374: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
L_86c37b: /* 86c37b: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c37d: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 86c37f: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c384: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c38au); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c38a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c38c: je 0x86c3ae */
  if (zf) goto L_86c3ae;
L_86c38e: /* 86c38e: mov edx, dword ptr [ebx + 0x33c] */
  edx = R32((uint32_t)(ebx + 0x33cu));
/* 86c394: mov ecx, 7 */
  ecx = 0x7u;
/* 86c399: lea esi, [ebp - 0x60] */
  esi = (uint32_t)(ebp + 0xffffffa0u);
/* 86c39c: mov edi, eax */
  edi = eax;
/* 86c39e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 86c3a0: mov dword ptr [eax + 0x1c], edx */
  W32((uint32_t)(eax + 0x1cu), edx);
/* 86c3a3: mov dword ptr [ebx + 0x33c], eax */
  W32((uint32_t)(ebx + 0x33cu), eax);
/* 86c3a9: jmp 0x86b64c */
  goto L_86b64c;
L_86c3ae: /* 86c3ae: xor eax, eax */
  eax = 0;
/* 86c3b0: mov dword ptr [ebx + 0x33c], eax */
  W32((uint32_t)(ebx + 0x33cu), eax);
/* 86c3b6: jmp 0x86b64c */
  goto L_86b64c;
L_86c3bb: /* 86c3bb: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 86c3be: mov eax, dword ptr [ebx + 0x354] */
  eax = R32((uint32_t)(ebx + 0x354u));
/* 86c3c4: cmp dword ptr [eax + edx*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + edx*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c3c8: jne 0x86c427 */
  if (!zf) goto L_86c427;
L_86c3ca: /* 86c3ca: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c3cc: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 86c3ce: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c3d3: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c3d9u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c3d9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c3db: je 0x86c3ee */
  if (zf) goto L_86c3ee;
L_86c3dd: /* 86c3dd: mov ecx, dword ptr [esi + 0x60] */
  ecx = R32((uint32_t)(esi + 0x60u));
/* 86c3e0: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 86c3e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c3e4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c3e5: mov ecx, eax */
  ecx = eax;
/* 86c3e7: call 0x6c1924 */
  esp -= 4; W32(esp, 0x86c3ecu); SPILL(); f_6c1924(); if (g_unwind) return; RELOAD();
/* 86c3ec: jmp 0x86c3f0 */
  goto L_86c3f0;
L_86c3ee: /* 86c3ee: xor eax, eax */
  eax = 0;
L_86c3f0: /* 86c3f0: mov ecx, dword ptr [esi + 0x60] */
  ecx = R32((uint32_t)(esi + 0x60u));
/* 86c3f3: mov edx, dword ptr [ebx + 0x354] */
  edx = R32((uint32_t)(ebx + 0x354u));
/* 86c3f9: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c3fb: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* 86c3fe: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c400: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c405: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c40bu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c40b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c40d: je 0x86c41f */
  if (zf) goto L_86c41f;
L_86c40f: /* 86c40f: mov ecx, dword ptr [ebx + 0x358] */
  ecx = R32((uint32_t)(ebx + 0x358u));
/* 86c415: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 86c418: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 86c41a: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86c41d: jmp 0x86c421 */
  goto L_86c421;
L_86c41f: /* 86c41f: xor eax, eax */
  eax = 0;
L_86c421: /* 86c421: mov dword ptr [ebx + 0x358], eax */
  W32((uint32_t)(ebx + 0x358u), eax);
L_86c427: /* 86c427: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 86c429: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 86c42c: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 86c42f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c430: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 86c433: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c434: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 86c437: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c438: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86c43b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c43c: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
/* 86c43f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c440: mov ecx, dword ptr [ebx + 0x354] */
  ecx = R32((uint32_t)(ebx + 0x354u));
/* 86c446: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 86c449: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c44a: call 0x6c83fa */
  esp -= 4; W32(esp, 0x86c44fu); SPILL(); f_6c83fa(); if (g_unwind) return; RELOAD();
/* 86c44f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86c452: mov esi, dword ptr [edx + 0x68] */
  esi = R32((uint32_t)(edx + 0x68u));
/* 86c455: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c458: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86c45e: /* 86c45e: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86c463: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c466: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86c46c: /* 86c46c: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 86c46f: imul esi, esi, 0xa4 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0xa4u);
  esi = (uint32_t)r;
  }
/* 86c475: add esi, dword ptr [ecx + 0xf0] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xf0u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 86c47b: xor edx, edx */
  edx = 0;
L_86c47d: /* 86c47d: cmp edx, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86c480: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 86c483: jge 0x86b64c */
  if ((sf == of)) goto L_86b64c;
L_86c489: /* 86c489: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 86c48c: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 86c48f: mov eax, dword ptr [ecx + 0x38] */
  eax = R32((uint32_t)(ecx + 0x38u));
/* 86c492: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c494: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 86c497: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c49d: /* 86c49d: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86c4a2: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c4a5: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c4ab: /* 86c4ab: xor eax, eax */
  eax = 0;
/* 86c4ad: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_86c4b0: /* 86c4b0: cmp eax, dword ptr [esi + 0x9c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x9cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86c4b6: jge 0x86c4cc */
  if ((sf == of)) goto L_86c4cc;
L_86c4b8: /* 86c4b8: mov edi, dword ptr [esi + 0x98] */
  edi = R32((uint32_t)(esi + 0x98u));
/* 86c4be: mov edi, dword ptr [edi + eax*4] */
  edi = R32((uint32_t)(edi + eax*4));
/* 86c4c1: cmp edi, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c4c3: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c4c9: /* 86c4c9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 86c4ca: jmp 0x86c4b0 */
  goto L_86c4b0;
L_86c4cc: /* 86c4cc: mov eax, 1 */
  eax = 0x1u;
/* 86c4d1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c4d3: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c4d5: /* 86c4d5: mov eax, dword ptr [esi + 0x9c] */
  eax = R32((uint32_t)(esi + 0x9cu));
/* 86c4db: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c4dd: jne 0x86c4ff */
  if (!zf) goto L_86c4ff;
L_86c4df: /* 86c4df: mov edi, dword ptr [ebx + 0xc] */
  edi = R32((uint32_t)(ebx + 0xcu));
/* 86c4e2: add edi, 0xfc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 86c4e8: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86c4ea: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86c4ec: mov ecx, edi */
  ecx = edi;
/* 86c4ee: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x86c4f4u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 86c4f4: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86c4f7: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 86c4f9: mov edx, dword ptr [edx + 0x68] */
  edx = R32((uint32_t)(edx + 0x68u));
/* 86c4fc: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
L_86c4ff: /* 86c4ff: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86c501: lea edi, [esi + 0x98] */
  edi = (uint32_t)(esi + 0x98u);
/* 86c507: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86c509: mov ecx, edi */
  ecx = edi;
/* 86c50b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x86c511u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 86c511: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 86c513: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86c516: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 86c518: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 86c51b: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 86c51e: mov edx, dword ptr [esi + 0x24] */
  edx = R32((uint32_t)(esi + 0x24u));
/* 86c521: imul eax, eax, 0x6c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x6cu);
  eax = (uint32_t)r;
  }
/* 86c524: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 86c525: mov dword ptr [esi + 0x24], edx */
  W32((uint32_t)(esi + 0x24u), edx);
/* 86c528: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 86c52b: mov edx, dword ptr [ecx + 0xe4] */
  edx = R32((uint32_t)(ecx + 0xe4u));
/* 86c531: mov ecx, dword ptr [eax + edx + 0x68] */
  ecx = R32((uint32_t)(eax + edx + 0x68u));
/* 86c535: lea eax, [eax + edx + 0x68] */
  eax = (uint32_t)(eax + edx + 0x68u);
/* 86c539: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86c53c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 86c53d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_86c53f: /* 86c53f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 86c540: jmp 0x86c47d */
  goto L_86c47d;
}

void f_86bd53(void) {
  LOAD_REGS();
  goto L_86bd53;
L_86b64c: /* 86b64c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 86b64f: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 86b652: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86b655: je 0x86b671 */
  if (zf) goto L_86b671;
L_86b657: /* 86b657: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 86b65a: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 86b65d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86b65e: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 86b661: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86b662: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 86b665: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86b666: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86b667: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86b668: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86b669: call 0x86b3f0 */
  esp -= 4; W32(esp, 0x86b66eu); SPILL(); f_86b3f0(); if (g_unwind) return; RELOAD();
/* 86b66e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_86b671: /* 86b671: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 86b674: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 86b675: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 86b676: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 86b67d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 86b67e: mov esp, ebp */
  esp = ebp;
/* 86b680: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 86b681: ret  */
  esp += 4; SPILL(); return;
L_86bd53: /* 86bd53: mov eax, dword ptr [edx + 0x3f4] */
  eax = R32((uint32_t)(edx + 0x3f4u));
/* 86bd59: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bd5b: je 0x86bd67 */
  if (zf) goto L_86bd67;
L_86bd5d: /* 86bd5d: mov eax, dword ptr [edx + 0x3f0] */
  eax = R32((uint32_t)(edx + 0x3f0u));
/* 86bd63: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bd65: jne 0x86bd7c */
  if (!zf) goto L_86bd7c;
L_86bd67: /* 86bd67: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 86bd6a: mov dword ptr [ecx + 0x3f4], 0 */
  W32((uint32_t)(ecx + 0x3f4u), 0x0u);
/* 86bd74: call 0x6ca088 */
  esp -= 4; W32(esp, 0x86bd79u); SPILL(); f_6ca088(); if (g_unwind) return; RELOAD();
/* 86bd79: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
L_86bd7c: /* 86bd7c: mov eax, dword ptr [edx + 0x3f4] */
  eax = R32((uint32_t)(edx + 0x3f4u));
/* 86bd82: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bd84: je 0x86be40 */
  if (zf) goto L_86be40;
L_86bd8a: /* 86bd8a: mov eax, dword ptr [edx + 0x3f0] */
  eax = R32((uint32_t)(edx + 0x3f0u));
/* 86bd90: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bd92: je 0x86be40 */
  if (zf) goto L_86be40;
L_86bd98: /* 86bd98: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 86bd9a: cmp dword ptr [eax + 0x10], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x10u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86bd9e: jge 0x86be40 */
  if ((sf == of)) goto L_86be40;
L_86bda4: /* 86bda4: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 86bda7: mov cl, byte ptr [eax + 0x150] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x150u))) & 0xffu);
/* 86bdad: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86bdaf: je 0x86be40 */
  if (zf) goto L_86be40;
L_86bdb5: /* 86bdb5: mov eax, dword ptr [ebx + 0x32c] */
  eax = R32((uint32_t)(ebx + 0x32cu));
/* 86bdbb: xor esi, esi */
  esi = 0;
/* 86bdbd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_86bdc0: /* 86bdc0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bdc2: je 0x86bddb */
  if (zf) goto L_86bddb;
L_86bdc4: /* 86bdc4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 86bdc6: mov edi, dword ptr [ecx + 0x1c8] */
  edi = R32((uint32_t)(ecx + 0x1c8u));
/* 86bdcc: cmp edi, dword ptr [edx + 0x3bc] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x3bcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86bdd2: jne 0x86bdd6 */
  if (!zf) goto L_86bdd6;
L_86bdd4: /* 86bdd4: mov esi, ecx */
  esi = ecx;
L_86bdd6: /* 86bdd6: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 86bdd9: jmp 0x86bdc0 */
  goto L_86bdc0;
L_86bddb: /* 86bddb: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bddd: jne 0x86be37 */
  if (!zf) goto L_86be37;
L_86bddf: /* 86bddf: push 0x1d4 */
  { uint32_t v = 0x1d4u; esp -= 4; W32(esp, v); }
/* 86bde4: call 0x6c242d */
  esp -= 4; W32(esp, 0x86bde9u); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 86bde9: mov ecx, eax */
  ecx = eax;
/* 86bdeb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86bdee: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 86bdf1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bdf3: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 86bdf7: je 0x86be09 */
  if (zf) goto L_86be09;
L_86bdf9: /* 86bdf9: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 86bdfc: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 86bdfe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86bdff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86be00: call 0x6cc9dc */
  esp -= 4; W32(esp, 0x86be05u); SPILL(); f_6cc9dc(); if (g_unwind) return; RELOAD();
/* 86be05: mov esi, eax */
  esi = eax;
/* 86be07: jmp 0x86be0b */
  goto L_86be0b;
L_86be09: /* 86be09: xor esi, esi */
  esi = 0;
L_86be0b: /* 86be0b: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86be0d: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86be0f: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86be14: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 86be18: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86be1eu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86be1e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86be20: je 0x86be2f */
  if (zf) goto L_86be2f;
L_86be22: /* 86be22: mov ecx, dword ptr [ebx + 0x32c] */
  ecx = R32((uint32_t)(ebx + 0x32cu));
/* 86be28: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 86be2a: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86be2d: jmp 0x86be31 */
  goto L_86be31;
L_86be2f: /* 86be2f: xor eax, eax */
  eax = 0;
L_86be31: /* 86be31: mov dword ptr [ebx + 0x32c], eax */
  W32((uint32_t)(ebx + 0x32cu), eax);
L_86be37: /* 86be37: mov ecx, dword ptr [esi + 0x1d0] */
  ecx = R32((uint32_t)(esi + 0x1d0u));
/* 86be3d: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
L_86be40: /* 86be40: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86be43: mov ecx, dword ptr [edx + 0x1c] */
  ecx = R32((uint32_t)(edx + 0x1cu));
/* 86be46: mov edx, dword ptr [ebx + 0x328] */
  edx = R32((uint32_t)(ebx + 0x328u));
/* 86be4c: mov eax, ecx */
  eax = ecx;
/* 86be4e: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 86be51: lea esi, [eax + edx] */
  esi = (uint32_t)(eax + edx);
/* 86be54: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 86be57: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 86be59: shl al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint8_t r = (uint8_t)((uint32_t)a << c);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
  }
/* 86be5b: or byte ptr [esi], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(esi), r);
  }
/* 86be5d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 86be60: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 86be63: test byte ptr [edi + 4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86be67: je 0x86be74 */
  if (zf) goto L_86be74;
L_86be69: /* 86be69: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 86be6c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86be6e: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86be74: /* 86be74: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86be77: movzx ecx, byte ptr [edx + esi + 0x54] */
  ecx = (uint32_t)(R8((uint32_t)(edx + esi + 0x54u)));
/* 86be7c: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 86be7e: cmp ecx, dword ptr [eax + 0x1cc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x1ccu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86be84: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86be8a: /* 86be8a: cmp dword ptr [esi + 0x60], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x60u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86be8e: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86be94: /* 86be94: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 86be97: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 86be9a: test dword ptr [eax + 0x534], 0x2000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x534u))); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bea4: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86beaa: /* 86beaa: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86bead: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86beaf: je 0x86c2c9 */
  if (zf) goto L_86c2c9;
L_86beb5: /* 86beb5: mov ecx, dword ptr [ebx + 0x35c] */
  ecx = R32((uint32_t)(ebx + 0x35cu));
/* 86bebb: xor edi, edi */
  edi = 0;
/* 86bebd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_86bec0: /* 86bec0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bec2: je 0x86bee0 */
  if (zf) goto L_86bee0;
L_86bec4: /* 86bec4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86bec6: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86bec9: cmp dword ptr [eax + 0x14], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86becc: jne 0x86c28c */
  if (!zf) goto L_86c28c;
L_86bed2: /* 86bed2: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 86bed5: cmp edx, dword ptr [esi + 0x60] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x60u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86bed8: jne 0x86c28c */
  if (!zf) goto L_86c28c;
L_86bede: /* 86bede: mov edi, eax */
  edi = eax;
L_86bee0: /* 86bee0: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bee2: jne 0x86c2be */
  if (!zf) goto L_86c2be;
L_86bee8: /* 86bee8: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86beea: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 86beec: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86bef1: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86bef7u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86bef7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bef9: je 0x86c294 */
  if (zf) goto L_86c294;
L_86beff: /* 86beff: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86bf02: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 86bf05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86bf06: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 86bf09: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86bf0a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86bf0b: mov ecx, eax */
  ecx = eax;
/* 86bf0d: call 0x6c50b5 */
  esp -= 4; W32(esp, 0x86bf12u); SPILL(); f_6c50b5(); if (g_unwind) return; RELOAD();
/* 86bf12: mov edi, eax */
  edi = eax;
/* 86bf14: jmp 0x86c296 */
  goto L_86c296;
L_86c28c: /* 86c28c: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 86c28f: jmp 0x86bec0 */
  goto L_86bec0;
L_86c294: /* 86c294: xor edi, edi */
  edi = 0;
L_86c296: /* 86c296: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c298: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c29a: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c29f: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c2a5u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c2a5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2a7: je 0x86c2b6 */
  if (zf) goto L_86c2b6;
L_86c2a9: /* 86c2a9: mov ecx, dword ptr [ebx + 0x35c] */
  ecx = R32((uint32_t)(ebx + 0x35cu));
/* 86c2af: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 86c2b1: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86c2b4: jmp 0x86c2b8 */
  goto L_86c2b8;
L_86c2b6: /* 86c2b6: xor eax, eax */
  eax = 0;
L_86c2b8: /* 86c2b8: mov dword ptr [ebx + 0x35c], eax */
  W32((uint32_t)(ebx + 0x35cu), eax);
L_86c2be: /* 86c2be: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86c2c1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c2c2: mov ecx, edi */
  ecx = edi;
/* 86c2c4: call 0x6c7e37 */
  esp -= 4; W32(esp, 0x86c2c9u); SPILL(); f_6c7e37(); if (g_unwind) return; RELOAD();
L_86c2c9: /* 86c2c9: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 86c2cc: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 86c2cf: test eax, 0x20000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2d4: je 0x86c2de */
  if (zf) goto L_86c2de;
L_86c2d6: /* 86c2d6: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2d8: jne 0x86b64c */
  if (!zf) goto L_86b64c;
L_86c2de: /* 86c2de: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 86c2e0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2e2: je 0x86c3bb */
  if (zf) goto L_86c3bb;
L_86c2e8: /* 86c2e8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86c2ea: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0x86c2f0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86c2f0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2f2: je 0x86c3bb */
  if (zf) goto L_86c3bb;
L_86c2f8: /* 86c2f8: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 86c2fb: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2fd: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 86c300: mov edi, dword ptr [ebp + 0x1c] */
  edi = R32((uint32_t)(ebp + 0x1cu));
/* 86c303: mov dword ptr [ebp - 0x60], 1 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x1u);
/* 86c30a: mov dword ptr [ebp - 0x5c], ecx */
  W32((uint32_t)(ebp + 0xffffffa4u), ecx);
/* 86c30d: mov dword ptr [ebp - 0x54], esi */
  W32((uint32_t)(ebp + 0xffffffacu), esi);
/* 86c310: mov dword ptr [ebp - 0x4c], edi */
  W32((uint32_t)(ebp + 0xffffffb4u), edi);
/* 86c313: je 0x86c33f */
  if (zf) goto L_86c33f;
L_86c315: /* 86c315: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c317: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 86c318: push 0xcc9ad8 */
  { uint32_t v = 0xcc9ad8u; esp -= 4; W32(esp, v); }
/* 86c31d: call 0x6c3170 */
  esp -= 4; W32(esp, 0x86c322u); SPILL(); f_6c3170(); if (g_unwind) return; RELOAD();
/* 86c322: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 86c325: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c328: lea edx, [esi*4] */
  edx = (uint32_t)(esi*4);
/* 86c32f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c330: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c331: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c332: mov dword ptr [ebp - 0x58], eax */
  W32((uint32_t)(ebp + 0xffffffa8u), eax);
/* 86c335: call 0x6ca83f */
  esp -= 4; W32(esp, 0x86c33au); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 86c33a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c33d: jmp 0x86c346 */
  goto L_86c346;
L_86c33f: /* 86c33f: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
L_86c346: /* 86c346: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c348: je 0x86c374 */
  if (zf) goto L_86c374;
L_86c34a: /* 86c34a: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c34c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86c34d: push 0xcc9ad8 */
  { uint32_t v = 0xcc9ad8u; esp -= 4; W32(esp, v); }
/* 86c352: call 0x6c99e4 */
  esp -= 4; W32(esp, 0x86c357u); SPILL(); f_6c99e4(); if (g_unwind) return; RELOAD();
/* 86c357: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 86c35a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c35d: lea edx, [edi*4] */
  edx = (uint32_t)(edi*4);
/* 86c364: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c365: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c366: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c367: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 86c36a: call 0x6ca83f */
  esp -= 4; W32(esp, 0x86c36fu); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 86c36f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c372: jmp 0x86c37b */
  goto L_86c37b;
L_86c374: /* 86c374: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
L_86c37b: /* 86c37b: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c37d: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 86c37f: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c384: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c38au); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c38a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c38c: je 0x86c3ae */
  if (zf) goto L_86c3ae;
L_86c38e: /* 86c38e: mov edx, dword ptr [ebx + 0x33c] */
  edx = R32((uint32_t)(ebx + 0x33cu));
/* 86c394: mov ecx, 7 */
  ecx = 0x7u;
/* 86c399: lea esi, [ebp - 0x60] */
  esi = (uint32_t)(ebp + 0xffffffa0u);
/* 86c39c: mov edi, eax */
  edi = eax;
/* 86c39e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 86c3a0: mov dword ptr [eax + 0x1c], edx */
  W32((uint32_t)(eax + 0x1cu), edx);
/* 86c3a3: mov dword ptr [ebx + 0x33c], eax */
  W32((uint32_t)(ebx + 0x33cu), eax);
/* 86c3a9: jmp 0x86b64c */
  goto L_86b64c;
L_86c3ae: /* 86c3ae: xor eax, eax */
  eax = 0;
/* 86c3b0: mov dword ptr [ebx + 0x33c], eax */
  W32((uint32_t)(ebx + 0x33cu), eax);
/* 86c3b6: jmp 0x86b64c */
  goto L_86b64c;
L_86c3bb: /* 86c3bb: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 86c3be: mov eax, dword ptr [ebx + 0x354] */
  eax = R32((uint32_t)(ebx + 0x354u));
/* 86c3c4: cmp dword ptr [eax + edx*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + edx*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c3c8: jne 0x86c427 */
  if (!zf) goto L_86c427;
L_86c3ca: /* 86c3ca: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c3cc: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 86c3ce: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c3d3: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c3d9u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c3d9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c3db: je 0x86c3ee */
  if (zf) goto L_86c3ee;
L_86c3dd: /* 86c3dd: mov ecx, dword ptr [esi + 0x60] */
  ecx = R32((uint32_t)(esi + 0x60u));
/* 86c3e0: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 86c3e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c3e4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c3e5: mov ecx, eax */
  ecx = eax;
/* 86c3e7: call 0x6c1924 */
  esp -= 4; W32(esp, 0x86c3ecu); SPILL(); f_6c1924(); if (g_unwind) return; RELOAD();
/* 86c3ec: jmp 0x86c3f0 */
  goto L_86c3f0;
L_86c3ee: /* 86c3ee: xor eax, eax */
  eax = 0;
L_86c3f0: /* 86c3f0: mov ecx, dword ptr [esi + 0x60] */
  ecx = R32((uint32_t)(esi + 0x60u));
/* 86c3f3: mov edx, dword ptr [ebx + 0x354] */
  edx = R32((uint32_t)(ebx + 0x354u));
/* 86c3f9: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c3fb: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* 86c3fe: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c400: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c405: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c40bu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c40b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c40d: je 0x86c41f */
  if (zf) goto L_86c41f;
L_86c40f: /* 86c40f: mov ecx, dword ptr [ebx + 0x358] */
  ecx = R32((uint32_t)(ebx + 0x358u));
/* 86c415: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 86c418: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 86c41a: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86c41d: jmp 0x86c421 */
  goto L_86c421;
L_86c41f: /* 86c41f: xor eax, eax */
  eax = 0;
L_86c421: /* 86c421: mov dword ptr [ebx + 0x358], eax */
  W32((uint32_t)(ebx + 0x358u), eax);
L_86c427: /* 86c427: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 86c429: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 86c42c: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 86c42f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c430: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 86c433: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c434: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 86c437: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c438: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86c43b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c43c: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
/* 86c43f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c440: mov ecx, dword ptr [ebx + 0x354] */
  ecx = R32((uint32_t)(ebx + 0x354u));
/* 86c446: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 86c449: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c44a: call 0x6c83fa */
  esp -= 4; W32(esp, 0x86c44fu); SPILL(); f_6c83fa(); if (g_unwind) return; RELOAD();
/* 86c44f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86c452: mov esi, dword ptr [edx + 0x68] */
  esi = R32((uint32_t)(edx + 0x68u));
/* 86c455: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c458: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86c45e: /* 86c45e: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86c463: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c466: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86c46c: /* 86c46c: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 86c46f: imul esi, esi, 0xa4 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0xa4u);
  esi = (uint32_t)r;
  }
/* 86c475: add esi, dword ptr [ecx + 0xf0] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xf0u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 86c47b: xor edx, edx */
  edx = 0;
L_86c47d: /* 86c47d: cmp edx, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86c480: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 86c483: jge 0x86b64c */
  if ((sf == of)) goto L_86b64c;
L_86c489: /* 86c489: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 86c48c: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 86c48f: mov eax, dword ptr [ecx + 0x38] */
  eax = R32((uint32_t)(ecx + 0x38u));
/* 86c492: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c494: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 86c497: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c49d: /* 86c49d: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86c4a2: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c4a5: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c4ab: /* 86c4ab: xor eax, eax */
  eax = 0;
/* 86c4ad: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_86c4b0: /* 86c4b0: cmp eax, dword ptr [esi + 0x9c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x9cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86c4b6: jge 0x86c4cc */
  if ((sf == of)) goto L_86c4cc;
L_86c4b8: /* 86c4b8: mov edi, dword ptr [esi + 0x98] */
  edi = R32((uint32_t)(esi + 0x98u));
/* 86c4be: mov edi, dword ptr [edi + eax*4] */
  edi = R32((uint32_t)(edi + eax*4));
/* 86c4c1: cmp edi, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c4c3: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c4c9: /* 86c4c9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 86c4ca: jmp 0x86c4b0 */
  goto L_86c4b0;
L_86c4cc: /* 86c4cc: mov eax, 1 */
  eax = 0x1u;
/* 86c4d1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c4d3: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c4d5: /* 86c4d5: mov eax, dword ptr [esi + 0x9c] */
  eax = R32((uint32_t)(esi + 0x9cu));
/* 86c4db: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c4dd: jne 0x86c4ff */
  if (!zf) goto L_86c4ff;
L_86c4df: /* 86c4df: mov edi, dword ptr [ebx + 0xc] */
  edi = R32((uint32_t)(ebx + 0xcu));
/* 86c4e2: add edi, 0xfc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 86c4e8: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86c4ea: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86c4ec: mov ecx, edi */
  ecx = edi;
/* 86c4ee: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x86c4f4u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 86c4f4: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86c4f7: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 86c4f9: mov edx, dword ptr [edx + 0x68] */
  edx = R32((uint32_t)(edx + 0x68u));
/* 86c4fc: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
L_86c4ff: /* 86c4ff: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86c501: lea edi, [esi + 0x98] */
  edi = (uint32_t)(esi + 0x98u);
/* 86c507: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86c509: mov ecx, edi */
  ecx = edi;
/* 86c50b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x86c511u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 86c511: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 86c513: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86c516: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 86c518: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 86c51b: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 86c51e: mov edx, dword ptr [esi + 0x24] */
  edx = R32((uint32_t)(esi + 0x24u));
/* 86c521: imul eax, eax, 0x6c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x6cu);
  eax = (uint32_t)r;
  }
/* 86c524: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 86c525: mov dword ptr [esi + 0x24], edx */
  W32((uint32_t)(esi + 0x24u), edx);
/* 86c528: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 86c52b: mov edx, dword ptr [ecx + 0xe4] */
  edx = R32((uint32_t)(ecx + 0xe4u));
/* 86c531: mov ecx, dword ptr [eax + edx + 0x68] */
  ecx = R32((uint32_t)(eax + edx + 0x68u));
/* 86c535: lea eax, [eax + edx + 0x68] */
  eax = (uint32_t)(eax + edx + 0x68u);
/* 86c539: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86c53c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 86c53d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_86c53f: /* 86c53f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 86c540: jmp 0x86c47d */
  goto L_86c47d;
}

void f_86bddb(void) {
  LOAD_REGS();
  goto L_86bddb;
L_86b64c: /* 86b64c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 86b64f: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 86b652: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86b655: je 0x86b671 */
  if (zf) goto L_86b671;
L_86b657: /* 86b657: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 86b65a: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 86b65d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86b65e: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 86b661: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86b662: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 86b665: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86b666: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86b667: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86b668: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86b669: call 0x86b3f0 */
  esp -= 4; W32(esp, 0x86b66eu); SPILL(); f_86b3f0(); if (g_unwind) return; RELOAD();
/* 86b66e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_86b671: /* 86b671: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 86b674: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 86b675: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 86b676: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 86b67d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 86b67e: mov esp, ebp */
  esp = ebp;
/* 86b680: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 86b681: ret  */
  esp += 4; SPILL(); return;
L_86bddb: /* 86bddb: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bddd: jne 0x86be37 */
  if (!zf) goto L_86be37;
L_86bddf: /* 86bddf: push 0x1d4 */
  { uint32_t v = 0x1d4u; esp -= 4; W32(esp, v); }
/* 86bde4: call 0x6c242d */
  esp -= 4; W32(esp, 0x86bde9u); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 86bde9: mov ecx, eax */
  ecx = eax;
/* 86bdeb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86bdee: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 86bdf1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bdf3: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 86bdf7: je 0x86be09 */
  if (zf) goto L_86be09;
L_86bdf9: /* 86bdf9: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 86bdfc: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 86bdfe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86bdff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86be00: call 0x6cc9dc */
  esp -= 4; W32(esp, 0x86be05u); SPILL(); f_6cc9dc(); if (g_unwind) return; RELOAD();
/* 86be05: mov esi, eax */
  esi = eax;
/* 86be07: jmp 0x86be0b */
  goto L_86be0b;
L_86be09: /* 86be09: xor esi, esi */
  esi = 0;
L_86be0b: /* 86be0b: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86be0d: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86be0f: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86be14: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 86be18: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86be1eu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86be1e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86be20: je 0x86be2f */
  if (zf) goto L_86be2f;
L_86be22: /* 86be22: mov ecx, dword ptr [ebx + 0x32c] */
  ecx = R32((uint32_t)(ebx + 0x32cu));
/* 86be28: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 86be2a: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86be2d: jmp 0x86be31 */
  goto L_86be31;
L_86be2f: /* 86be2f: xor eax, eax */
  eax = 0;
L_86be31: /* 86be31: mov dword ptr [ebx + 0x32c], eax */
  W32((uint32_t)(ebx + 0x32cu), eax);
L_86be37: /* 86be37: mov ecx, dword ptr [esi + 0x1d0] */
  ecx = R32((uint32_t)(esi + 0x1d0u));
/* 86be3d: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 86be40: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86be43: mov ecx, dword ptr [edx + 0x1c] */
  ecx = R32((uint32_t)(edx + 0x1cu));
/* 86be46: mov edx, dword ptr [ebx + 0x328] */
  edx = R32((uint32_t)(ebx + 0x328u));
/* 86be4c: mov eax, ecx */
  eax = ecx;
/* 86be4e: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 86be51: lea esi, [eax + edx] */
  esi = (uint32_t)(eax + edx);
/* 86be54: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 86be57: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 86be59: shl al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint8_t r = (uint8_t)((uint32_t)a << c);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
  }
/* 86be5b: or byte ptr [esi], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(esi), r);
  }
/* 86be5d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 86be60: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 86be63: test byte ptr [edi + 4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86be67: je 0x86be74 */
  if (zf) goto L_86be74;
L_86be69: /* 86be69: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 86be6c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86be6e: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86be74: /* 86be74: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86be77: movzx ecx, byte ptr [edx + esi + 0x54] */
  ecx = (uint32_t)(R8((uint32_t)(edx + esi + 0x54u)));
/* 86be7c: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 86be7e: cmp ecx, dword ptr [eax + 0x1cc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x1ccu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86be84: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86be8a: /* 86be8a: cmp dword ptr [esi + 0x60], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x60u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86be8e: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86be94: /* 86be94: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 86be97: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 86be9a: test dword ptr [eax + 0x534], 0x2000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x534u))); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bea4: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86beaa: /* 86beaa: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86bead: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86beaf: je 0x86c2c9 */
  if (zf) goto L_86c2c9;
L_86beb5: /* 86beb5: mov ecx, dword ptr [ebx + 0x35c] */
  ecx = R32((uint32_t)(ebx + 0x35cu));
/* 86bebb: xor edi, edi */
  edi = 0;
/* 86bebd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_86bec0: /* 86bec0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bec2: je 0x86bee0 */
  if (zf) goto L_86bee0;
L_86bec4: /* 86bec4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86bec6: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86bec9: cmp dword ptr [eax + 0x14], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86becc: jne 0x86c28c */
  if (!zf) goto L_86c28c;
L_86bed2: /* 86bed2: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 86bed5: cmp edx, dword ptr [esi + 0x60] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x60u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86bed8: jne 0x86c28c */
  if (!zf) goto L_86c28c;
L_86bede: /* 86bede: mov edi, eax */
  edi = eax;
L_86bee0: /* 86bee0: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bee2: jne 0x86c2be */
  if (!zf) goto L_86c2be;
L_86bee8: /* 86bee8: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86beea: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 86beec: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86bef1: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86bef7u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86bef7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bef9: je 0x86c294 */
  if (zf) goto L_86c294;
L_86beff: /* 86beff: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86bf02: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 86bf05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86bf06: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 86bf09: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86bf0a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86bf0b: mov ecx, eax */
  ecx = eax;
/* 86bf0d: call 0x6c50b5 */
  esp -= 4; W32(esp, 0x86bf12u); SPILL(); f_6c50b5(); if (g_unwind) return; RELOAD();
/* 86bf12: mov edi, eax */
  edi = eax;
/* 86bf14: jmp 0x86c296 */
  goto L_86c296;
L_86c28c: /* 86c28c: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 86c28f: jmp 0x86bec0 */
  goto L_86bec0;
L_86c294: /* 86c294: xor edi, edi */
  edi = 0;
L_86c296: /* 86c296: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c298: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c29a: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c29f: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c2a5u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c2a5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2a7: je 0x86c2b6 */
  if (zf) goto L_86c2b6;
L_86c2a9: /* 86c2a9: mov ecx, dword ptr [ebx + 0x35c] */
  ecx = R32((uint32_t)(ebx + 0x35cu));
/* 86c2af: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 86c2b1: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86c2b4: jmp 0x86c2b8 */
  goto L_86c2b8;
L_86c2b6: /* 86c2b6: xor eax, eax */
  eax = 0;
L_86c2b8: /* 86c2b8: mov dword ptr [ebx + 0x35c], eax */
  W32((uint32_t)(ebx + 0x35cu), eax);
L_86c2be: /* 86c2be: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86c2c1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c2c2: mov ecx, edi */
  ecx = edi;
/* 86c2c4: call 0x6c7e37 */
  esp -= 4; W32(esp, 0x86c2c9u); SPILL(); f_6c7e37(); if (g_unwind) return; RELOAD();
L_86c2c9: /* 86c2c9: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 86c2cc: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 86c2cf: test eax, 0x20000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2d4: je 0x86c2de */
  if (zf) goto L_86c2de;
L_86c2d6: /* 86c2d6: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2d8: jne 0x86b64c */
  if (!zf) goto L_86b64c;
L_86c2de: /* 86c2de: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 86c2e0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2e2: je 0x86c3bb */
  if (zf) goto L_86c3bb;
L_86c2e8: /* 86c2e8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86c2ea: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0x86c2f0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86c2f0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2f2: je 0x86c3bb */
  if (zf) goto L_86c3bb;
L_86c2f8: /* 86c2f8: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 86c2fb: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2fd: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 86c300: mov edi, dword ptr [ebp + 0x1c] */
  edi = R32((uint32_t)(ebp + 0x1cu));
/* 86c303: mov dword ptr [ebp - 0x60], 1 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x1u);
/* 86c30a: mov dword ptr [ebp - 0x5c], ecx */
  W32((uint32_t)(ebp + 0xffffffa4u), ecx);
/* 86c30d: mov dword ptr [ebp - 0x54], esi */
  W32((uint32_t)(ebp + 0xffffffacu), esi);
/* 86c310: mov dword ptr [ebp - 0x4c], edi */
  W32((uint32_t)(ebp + 0xffffffb4u), edi);
/* 86c313: je 0x86c33f */
  if (zf) goto L_86c33f;
L_86c315: /* 86c315: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c317: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 86c318: push 0xcc9ad8 */
  { uint32_t v = 0xcc9ad8u; esp -= 4; W32(esp, v); }
/* 86c31d: call 0x6c3170 */
  esp -= 4; W32(esp, 0x86c322u); SPILL(); f_6c3170(); if (g_unwind) return; RELOAD();
/* 86c322: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 86c325: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c328: lea edx, [esi*4] */
  edx = (uint32_t)(esi*4);
/* 86c32f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c330: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c331: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c332: mov dword ptr [ebp - 0x58], eax */
  W32((uint32_t)(ebp + 0xffffffa8u), eax);
/* 86c335: call 0x6ca83f */
  esp -= 4; W32(esp, 0x86c33au); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 86c33a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c33d: jmp 0x86c346 */
  goto L_86c346;
L_86c33f: /* 86c33f: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
L_86c346: /* 86c346: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c348: je 0x86c374 */
  if (zf) goto L_86c374;
L_86c34a: /* 86c34a: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c34c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86c34d: push 0xcc9ad8 */
  { uint32_t v = 0xcc9ad8u; esp -= 4; W32(esp, v); }
/* 86c352: call 0x6c99e4 */
  esp -= 4; W32(esp, 0x86c357u); SPILL(); f_6c99e4(); if (g_unwind) return; RELOAD();
/* 86c357: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 86c35a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c35d: lea edx, [edi*4] */
  edx = (uint32_t)(edi*4);
/* 86c364: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c365: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c366: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c367: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 86c36a: call 0x6ca83f */
  esp -= 4; W32(esp, 0x86c36fu); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 86c36f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c372: jmp 0x86c37b */
  goto L_86c37b;
L_86c374: /* 86c374: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
L_86c37b: /* 86c37b: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c37d: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 86c37f: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c384: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c38au); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c38a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c38c: je 0x86c3ae */
  if (zf) goto L_86c3ae;
L_86c38e: /* 86c38e: mov edx, dword ptr [ebx + 0x33c] */
  edx = R32((uint32_t)(ebx + 0x33cu));
/* 86c394: mov ecx, 7 */
  ecx = 0x7u;
/* 86c399: lea esi, [ebp - 0x60] */
  esi = (uint32_t)(ebp + 0xffffffa0u);
/* 86c39c: mov edi, eax */
  edi = eax;
/* 86c39e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 86c3a0: mov dword ptr [eax + 0x1c], edx */
  W32((uint32_t)(eax + 0x1cu), edx);
/* 86c3a3: mov dword ptr [ebx + 0x33c], eax */
  W32((uint32_t)(ebx + 0x33cu), eax);
/* 86c3a9: jmp 0x86b64c */
  goto L_86b64c;
L_86c3ae: /* 86c3ae: xor eax, eax */
  eax = 0;
/* 86c3b0: mov dword ptr [ebx + 0x33c], eax */
  W32((uint32_t)(ebx + 0x33cu), eax);
/* 86c3b6: jmp 0x86b64c */
  goto L_86b64c;
L_86c3bb: /* 86c3bb: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 86c3be: mov eax, dword ptr [ebx + 0x354] */
  eax = R32((uint32_t)(ebx + 0x354u));
/* 86c3c4: cmp dword ptr [eax + edx*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + edx*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c3c8: jne 0x86c427 */
  if (!zf) goto L_86c427;
L_86c3ca: /* 86c3ca: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c3cc: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 86c3ce: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c3d3: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c3d9u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c3d9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c3db: je 0x86c3ee */
  if (zf) goto L_86c3ee;
L_86c3dd: /* 86c3dd: mov ecx, dword ptr [esi + 0x60] */
  ecx = R32((uint32_t)(esi + 0x60u));
/* 86c3e0: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 86c3e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c3e4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c3e5: mov ecx, eax */
  ecx = eax;
/* 86c3e7: call 0x6c1924 */
  esp -= 4; W32(esp, 0x86c3ecu); SPILL(); f_6c1924(); if (g_unwind) return; RELOAD();
/* 86c3ec: jmp 0x86c3f0 */
  goto L_86c3f0;
L_86c3ee: /* 86c3ee: xor eax, eax */
  eax = 0;
L_86c3f0: /* 86c3f0: mov ecx, dword ptr [esi + 0x60] */
  ecx = R32((uint32_t)(esi + 0x60u));
/* 86c3f3: mov edx, dword ptr [ebx + 0x354] */
  edx = R32((uint32_t)(ebx + 0x354u));
/* 86c3f9: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c3fb: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* 86c3fe: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c400: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c405: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c40bu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c40b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c40d: je 0x86c41f */
  if (zf) goto L_86c41f;
L_86c40f: /* 86c40f: mov ecx, dword ptr [ebx + 0x358] */
  ecx = R32((uint32_t)(ebx + 0x358u));
/* 86c415: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 86c418: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 86c41a: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86c41d: jmp 0x86c421 */
  goto L_86c421;
L_86c41f: /* 86c41f: xor eax, eax */
  eax = 0;
L_86c421: /* 86c421: mov dword ptr [ebx + 0x358], eax */
  W32((uint32_t)(ebx + 0x358u), eax);
L_86c427: /* 86c427: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 86c429: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 86c42c: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 86c42f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c430: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 86c433: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c434: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 86c437: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c438: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86c43b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c43c: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
/* 86c43f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c440: mov ecx, dword ptr [ebx + 0x354] */
  ecx = R32((uint32_t)(ebx + 0x354u));
/* 86c446: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 86c449: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c44a: call 0x6c83fa */
  esp -= 4; W32(esp, 0x86c44fu); SPILL(); f_6c83fa(); if (g_unwind) return; RELOAD();
/* 86c44f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86c452: mov esi, dword ptr [edx + 0x68] */
  esi = R32((uint32_t)(edx + 0x68u));
/* 86c455: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c458: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86c45e: /* 86c45e: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86c463: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c466: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86c46c: /* 86c46c: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 86c46f: imul esi, esi, 0xa4 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0xa4u);
  esi = (uint32_t)r;
  }
/* 86c475: add esi, dword ptr [ecx + 0xf0] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xf0u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 86c47b: xor edx, edx */
  edx = 0;
L_86c47d: /* 86c47d: cmp edx, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86c480: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 86c483: jge 0x86b64c */
  if ((sf == of)) goto L_86b64c;
L_86c489: /* 86c489: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 86c48c: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 86c48f: mov eax, dword ptr [ecx + 0x38] */
  eax = R32((uint32_t)(ecx + 0x38u));
/* 86c492: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c494: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 86c497: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c49d: /* 86c49d: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86c4a2: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c4a5: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c4ab: /* 86c4ab: xor eax, eax */
  eax = 0;
/* 86c4ad: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_86c4b0: /* 86c4b0: cmp eax, dword ptr [esi + 0x9c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x9cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86c4b6: jge 0x86c4cc */
  if ((sf == of)) goto L_86c4cc;
L_86c4b8: /* 86c4b8: mov edi, dword ptr [esi + 0x98] */
  edi = R32((uint32_t)(esi + 0x98u));
/* 86c4be: mov edi, dword ptr [edi + eax*4] */
  edi = R32((uint32_t)(edi + eax*4));
/* 86c4c1: cmp edi, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c4c3: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c4c9: /* 86c4c9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 86c4ca: jmp 0x86c4b0 */
  goto L_86c4b0;
L_86c4cc: /* 86c4cc: mov eax, 1 */
  eax = 0x1u;
/* 86c4d1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c4d3: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c4d5: /* 86c4d5: mov eax, dword ptr [esi + 0x9c] */
  eax = R32((uint32_t)(esi + 0x9cu));
/* 86c4db: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c4dd: jne 0x86c4ff */
  if (!zf) goto L_86c4ff;
L_86c4df: /* 86c4df: mov edi, dword ptr [ebx + 0xc] */
  edi = R32((uint32_t)(ebx + 0xcu));
/* 86c4e2: add edi, 0xfc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 86c4e8: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86c4ea: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86c4ec: mov ecx, edi */
  ecx = edi;
/* 86c4ee: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x86c4f4u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 86c4f4: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86c4f7: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 86c4f9: mov edx, dword ptr [edx + 0x68] */
  edx = R32((uint32_t)(edx + 0x68u));
/* 86c4fc: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
L_86c4ff: /* 86c4ff: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86c501: lea edi, [esi + 0x98] */
  edi = (uint32_t)(esi + 0x98u);
/* 86c507: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86c509: mov ecx, edi */
  ecx = edi;
/* 86c50b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x86c511u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 86c511: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 86c513: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86c516: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 86c518: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 86c51b: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 86c51e: mov edx, dword ptr [esi + 0x24] */
  edx = R32((uint32_t)(esi + 0x24u));
/* 86c521: imul eax, eax, 0x6c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x6cu);
  eax = (uint32_t)r;
  }
/* 86c524: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 86c525: mov dword ptr [esi + 0x24], edx */
  W32((uint32_t)(esi + 0x24u), edx);
/* 86c528: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 86c52b: mov edx, dword ptr [ecx + 0xe4] */
  edx = R32((uint32_t)(ecx + 0xe4u));
/* 86c531: mov ecx, dword ptr [eax + edx + 0x68] */
  ecx = R32((uint32_t)(eax + edx + 0x68u));
/* 86c535: lea eax, [eax + edx + 0x68] */
  eax = (uint32_t)(eax + edx + 0x68u);
/* 86c539: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86c53c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 86c53d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_86c53f: /* 86c53f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 86c540: jmp 0x86c47d */
  goto L_86c47d;
}

void f_86be09(void) {
  LOAD_REGS();
  goto L_86be09;
L_86b64c: /* 86b64c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 86b64f: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 86b652: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86b655: je 0x86b671 */
  if (zf) goto L_86b671;
L_86b657: /* 86b657: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 86b65a: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 86b65d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86b65e: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 86b661: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86b662: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 86b665: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86b666: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86b667: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86b668: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86b669: call 0x86b3f0 */
  esp -= 4; W32(esp, 0x86b66eu); SPILL(); f_86b3f0(); if (g_unwind) return; RELOAD();
/* 86b66e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_86b671: /* 86b671: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 86b674: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 86b675: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 86b676: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 86b67d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 86b67e: mov esp, ebp */
  esp = ebp;
/* 86b680: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 86b681: ret  */
  esp += 4; SPILL(); return;
L_86be09: /* 86be09: xor esi, esi */
  esi = 0;
/* 86be0b: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86be0d: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86be0f: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86be14: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 86be18: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86be1eu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86be1e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86be20: je 0x86be2f */
  if (zf) goto L_86be2f;
L_86be22: /* 86be22: mov ecx, dword ptr [ebx + 0x32c] */
  ecx = R32((uint32_t)(ebx + 0x32cu));
/* 86be28: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 86be2a: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86be2d: jmp 0x86be31 */
  goto L_86be31;
L_86be2f: /* 86be2f: xor eax, eax */
  eax = 0;
L_86be31: /* 86be31: mov dword ptr [ebx + 0x32c], eax */
  W32((uint32_t)(ebx + 0x32cu), eax);
/* 86be37: mov ecx, dword ptr [esi + 0x1d0] */
  ecx = R32((uint32_t)(esi + 0x1d0u));
/* 86be3d: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 86be40: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86be43: mov ecx, dword ptr [edx + 0x1c] */
  ecx = R32((uint32_t)(edx + 0x1cu));
/* 86be46: mov edx, dword ptr [ebx + 0x328] */
  edx = R32((uint32_t)(ebx + 0x328u));
/* 86be4c: mov eax, ecx */
  eax = ecx;
/* 86be4e: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 86be51: lea esi, [eax + edx] */
  esi = (uint32_t)(eax + edx);
/* 86be54: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 86be57: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 86be59: shl al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint8_t r = (uint8_t)((uint32_t)a << c);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
  }
/* 86be5b: or byte ptr [esi], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(esi), r);
  }
/* 86be5d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 86be60: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 86be63: test byte ptr [edi + 4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86be67: je 0x86be74 */
  if (zf) goto L_86be74;
L_86be69: /* 86be69: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 86be6c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86be6e: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86be74: /* 86be74: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86be77: movzx ecx, byte ptr [edx + esi + 0x54] */
  ecx = (uint32_t)(R8((uint32_t)(edx + esi + 0x54u)));
/* 86be7c: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 86be7e: cmp ecx, dword ptr [eax + 0x1cc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x1ccu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86be84: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86be8a: /* 86be8a: cmp dword ptr [esi + 0x60], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x60u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86be8e: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86be94: /* 86be94: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 86be97: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 86be9a: test dword ptr [eax + 0x534], 0x2000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x534u))); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bea4: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86beaa: /* 86beaa: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86bead: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86beaf: je 0x86c2c9 */
  if (zf) goto L_86c2c9;
L_86beb5: /* 86beb5: mov ecx, dword ptr [ebx + 0x35c] */
  ecx = R32((uint32_t)(ebx + 0x35cu));
/* 86bebb: xor edi, edi */
  edi = 0;
/* 86bebd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_86bec0: /* 86bec0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bec2: je 0x86bee0 */
  if (zf) goto L_86bee0;
L_86bec4: /* 86bec4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86bec6: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86bec9: cmp dword ptr [eax + 0x14], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86becc: jne 0x86c28c */
  if (!zf) goto L_86c28c;
L_86bed2: /* 86bed2: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 86bed5: cmp edx, dword ptr [esi + 0x60] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x60u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86bed8: jne 0x86c28c */
  if (!zf) goto L_86c28c;
L_86bede: /* 86bede: mov edi, eax */
  edi = eax;
L_86bee0: /* 86bee0: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bee2: jne 0x86c2be */
  if (!zf) goto L_86c2be;
L_86bee8: /* 86bee8: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86beea: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 86beec: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86bef1: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86bef7u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86bef7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bef9: je 0x86c294 */
  if (zf) goto L_86c294;
L_86beff: /* 86beff: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86bf02: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 86bf05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86bf06: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 86bf09: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86bf0a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86bf0b: mov ecx, eax */
  ecx = eax;
/* 86bf0d: call 0x6c50b5 */
  esp -= 4; W32(esp, 0x86bf12u); SPILL(); f_6c50b5(); if (g_unwind) return; RELOAD();
/* 86bf12: mov edi, eax */
  edi = eax;
/* 86bf14: jmp 0x86c296 */
  goto L_86c296;
L_86c28c: /* 86c28c: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 86c28f: jmp 0x86bec0 */
  goto L_86bec0;
L_86c294: /* 86c294: xor edi, edi */
  edi = 0;
L_86c296: /* 86c296: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c298: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c29a: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c29f: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c2a5u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c2a5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2a7: je 0x86c2b6 */
  if (zf) goto L_86c2b6;
L_86c2a9: /* 86c2a9: mov ecx, dword ptr [ebx + 0x35c] */
  ecx = R32((uint32_t)(ebx + 0x35cu));
/* 86c2af: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 86c2b1: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86c2b4: jmp 0x86c2b8 */
  goto L_86c2b8;
L_86c2b6: /* 86c2b6: xor eax, eax */
  eax = 0;
L_86c2b8: /* 86c2b8: mov dword ptr [ebx + 0x35c], eax */
  W32((uint32_t)(ebx + 0x35cu), eax);
L_86c2be: /* 86c2be: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86c2c1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c2c2: mov ecx, edi */
  ecx = edi;
/* 86c2c4: call 0x6c7e37 */
  esp -= 4; W32(esp, 0x86c2c9u); SPILL(); f_6c7e37(); if (g_unwind) return; RELOAD();
L_86c2c9: /* 86c2c9: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 86c2cc: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 86c2cf: test eax, 0x20000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2d4: je 0x86c2de */
  if (zf) goto L_86c2de;
L_86c2d6: /* 86c2d6: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2d8: jne 0x86b64c */
  if (!zf) goto L_86b64c;
L_86c2de: /* 86c2de: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 86c2e0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2e2: je 0x86c3bb */
  if (zf) goto L_86c3bb;
L_86c2e8: /* 86c2e8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86c2ea: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0x86c2f0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86c2f0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2f2: je 0x86c3bb */
  if (zf) goto L_86c3bb;
L_86c2f8: /* 86c2f8: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 86c2fb: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2fd: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 86c300: mov edi, dword ptr [ebp + 0x1c] */
  edi = R32((uint32_t)(ebp + 0x1cu));
/* 86c303: mov dword ptr [ebp - 0x60], 1 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x1u);
/* 86c30a: mov dword ptr [ebp - 0x5c], ecx */
  W32((uint32_t)(ebp + 0xffffffa4u), ecx);
/* 86c30d: mov dword ptr [ebp - 0x54], esi */
  W32((uint32_t)(ebp + 0xffffffacu), esi);
/* 86c310: mov dword ptr [ebp - 0x4c], edi */
  W32((uint32_t)(ebp + 0xffffffb4u), edi);
/* 86c313: je 0x86c33f */
  if (zf) goto L_86c33f;
L_86c315: /* 86c315: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c317: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 86c318: push 0xcc9ad8 */
  { uint32_t v = 0xcc9ad8u; esp -= 4; W32(esp, v); }
/* 86c31d: call 0x6c3170 */
  esp -= 4; W32(esp, 0x86c322u); SPILL(); f_6c3170(); if (g_unwind) return; RELOAD();
/* 86c322: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 86c325: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c328: lea edx, [esi*4] */
  edx = (uint32_t)(esi*4);
/* 86c32f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c330: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c331: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c332: mov dword ptr [ebp - 0x58], eax */
  W32((uint32_t)(ebp + 0xffffffa8u), eax);
/* 86c335: call 0x6ca83f */
  esp -= 4; W32(esp, 0x86c33au); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 86c33a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c33d: jmp 0x86c346 */
  goto L_86c346;
L_86c33f: /* 86c33f: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
L_86c346: /* 86c346: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c348: je 0x86c374 */
  if (zf) goto L_86c374;
L_86c34a: /* 86c34a: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c34c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86c34d: push 0xcc9ad8 */
  { uint32_t v = 0xcc9ad8u; esp -= 4; W32(esp, v); }
/* 86c352: call 0x6c99e4 */
  esp -= 4; W32(esp, 0x86c357u); SPILL(); f_6c99e4(); if (g_unwind) return; RELOAD();
/* 86c357: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 86c35a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c35d: lea edx, [edi*4] */
  edx = (uint32_t)(edi*4);
/* 86c364: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c365: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c366: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c367: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 86c36a: call 0x6ca83f */
  esp -= 4; W32(esp, 0x86c36fu); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 86c36f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c372: jmp 0x86c37b */
  goto L_86c37b;
L_86c374: /* 86c374: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
L_86c37b: /* 86c37b: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c37d: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 86c37f: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c384: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c38au); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c38a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c38c: je 0x86c3ae */
  if (zf) goto L_86c3ae;
L_86c38e: /* 86c38e: mov edx, dword ptr [ebx + 0x33c] */
  edx = R32((uint32_t)(ebx + 0x33cu));
/* 86c394: mov ecx, 7 */
  ecx = 0x7u;
/* 86c399: lea esi, [ebp - 0x60] */
  esi = (uint32_t)(ebp + 0xffffffa0u);
/* 86c39c: mov edi, eax */
  edi = eax;
/* 86c39e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 86c3a0: mov dword ptr [eax + 0x1c], edx */
  W32((uint32_t)(eax + 0x1cu), edx);
/* 86c3a3: mov dword ptr [ebx + 0x33c], eax */
  W32((uint32_t)(ebx + 0x33cu), eax);
/* 86c3a9: jmp 0x86b64c */
  goto L_86b64c;
L_86c3ae: /* 86c3ae: xor eax, eax */
  eax = 0;
/* 86c3b0: mov dword ptr [ebx + 0x33c], eax */
  W32((uint32_t)(ebx + 0x33cu), eax);
/* 86c3b6: jmp 0x86b64c */
  goto L_86b64c;
L_86c3bb: /* 86c3bb: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 86c3be: mov eax, dword ptr [ebx + 0x354] */
  eax = R32((uint32_t)(ebx + 0x354u));
/* 86c3c4: cmp dword ptr [eax + edx*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + edx*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c3c8: jne 0x86c427 */
  if (!zf) goto L_86c427;
L_86c3ca: /* 86c3ca: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c3cc: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 86c3ce: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c3d3: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c3d9u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c3d9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c3db: je 0x86c3ee */
  if (zf) goto L_86c3ee;
L_86c3dd: /* 86c3dd: mov ecx, dword ptr [esi + 0x60] */
  ecx = R32((uint32_t)(esi + 0x60u));
/* 86c3e0: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 86c3e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c3e4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c3e5: mov ecx, eax */
  ecx = eax;
/* 86c3e7: call 0x6c1924 */
  esp -= 4; W32(esp, 0x86c3ecu); SPILL(); f_6c1924(); if (g_unwind) return; RELOAD();
/* 86c3ec: jmp 0x86c3f0 */
  goto L_86c3f0;
L_86c3ee: /* 86c3ee: xor eax, eax */
  eax = 0;
L_86c3f0: /* 86c3f0: mov ecx, dword ptr [esi + 0x60] */
  ecx = R32((uint32_t)(esi + 0x60u));
/* 86c3f3: mov edx, dword ptr [ebx + 0x354] */
  edx = R32((uint32_t)(ebx + 0x354u));
/* 86c3f9: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c3fb: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* 86c3fe: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c400: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c405: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c40bu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c40b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c40d: je 0x86c41f */
  if (zf) goto L_86c41f;
L_86c40f: /* 86c40f: mov ecx, dword ptr [ebx + 0x358] */
  ecx = R32((uint32_t)(ebx + 0x358u));
/* 86c415: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 86c418: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 86c41a: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86c41d: jmp 0x86c421 */
  goto L_86c421;
L_86c41f: /* 86c41f: xor eax, eax */
  eax = 0;
L_86c421: /* 86c421: mov dword ptr [ebx + 0x358], eax */
  W32((uint32_t)(ebx + 0x358u), eax);
L_86c427: /* 86c427: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 86c429: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 86c42c: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 86c42f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c430: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 86c433: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c434: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 86c437: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c438: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86c43b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c43c: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
/* 86c43f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c440: mov ecx, dword ptr [ebx + 0x354] */
  ecx = R32((uint32_t)(ebx + 0x354u));
/* 86c446: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 86c449: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c44a: call 0x6c83fa */
  esp -= 4; W32(esp, 0x86c44fu); SPILL(); f_6c83fa(); if (g_unwind) return; RELOAD();
/* 86c44f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86c452: mov esi, dword ptr [edx + 0x68] */
  esi = R32((uint32_t)(edx + 0x68u));
/* 86c455: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c458: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86c45e: /* 86c45e: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86c463: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c466: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86c46c: /* 86c46c: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 86c46f: imul esi, esi, 0xa4 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0xa4u);
  esi = (uint32_t)r;
  }
/* 86c475: add esi, dword ptr [ecx + 0xf0] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xf0u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 86c47b: xor edx, edx */
  edx = 0;
L_86c47d: /* 86c47d: cmp edx, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86c480: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 86c483: jge 0x86b64c */
  if ((sf == of)) goto L_86b64c;
L_86c489: /* 86c489: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 86c48c: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 86c48f: mov eax, dword ptr [ecx + 0x38] */
  eax = R32((uint32_t)(ecx + 0x38u));
/* 86c492: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c494: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 86c497: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c49d: /* 86c49d: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86c4a2: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c4a5: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c4ab: /* 86c4ab: xor eax, eax */
  eax = 0;
/* 86c4ad: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_86c4b0: /* 86c4b0: cmp eax, dword ptr [esi + 0x9c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x9cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86c4b6: jge 0x86c4cc */
  if ((sf == of)) goto L_86c4cc;
L_86c4b8: /* 86c4b8: mov edi, dword ptr [esi + 0x98] */
  edi = R32((uint32_t)(esi + 0x98u));
/* 86c4be: mov edi, dword ptr [edi + eax*4] */
  edi = R32((uint32_t)(edi + eax*4));
/* 86c4c1: cmp edi, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c4c3: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c4c9: /* 86c4c9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 86c4ca: jmp 0x86c4b0 */
  goto L_86c4b0;
L_86c4cc: /* 86c4cc: mov eax, 1 */
  eax = 0x1u;
/* 86c4d1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c4d3: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c4d5: /* 86c4d5: mov eax, dword ptr [esi + 0x9c] */
  eax = R32((uint32_t)(esi + 0x9cu));
/* 86c4db: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c4dd: jne 0x86c4ff */
  if (!zf) goto L_86c4ff;
L_86c4df: /* 86c4df: mov edi, dword ptr [ebx + 0xc] */
  edi = R32((uint32_t)(ebx + 0xcu));
/* 86c4e2: add edi, 0xfc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 86c4e8: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86c4ea: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86c4ec: mov ecx, edi */
  ecx = edi;
/* 86c4ee: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x86c4f4u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 86c4f4: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86c4f7: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 86c4f9: mov edx, dword ptr [edx + 0x68] */
  edx = R32((uint32_t)(edx + 0x68u));
/* 86c4fc: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
L_86c4ff: /* 86c4ff: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86c501: lea edi, [esi + 0x98] */
  edi = (uint32_t)(esi + 0x98u);
/* 86c507: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86c509: mov ecx, edi */
  ecx = edi;
/* 86c50b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x86c511u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 86c511: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 86c513: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86c516: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 86c518: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 86c51b: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 86c51e: mov edx, dword ptr [esi + 0x24] */
  edx = R32((uint32_t)(esi + 0x24u));
/* 86c521: imul eax, eax, 0x6c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x6cu);
  eax = (uint32_t)r;
  }
/* 86c524: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 86c525: mov dword ptr [esi + 0x24], edx */
  W32((uint32_t)(esi + 0x24u), edx);
/* 86c528: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 86c52b: mov edx, dword ptr [ecx + 0xe4] */
  edx = R32((uint32_t)(ecx + 0xe4u));
/* 86c531: mov ecx, dword ptr [eax + edx + 0x68] */
  ecx = R32((uint32_t)(eax + edx + 0x68u));
/* 86c535: lea eax, [eax + edx + 0x68] */
  eax = (uint32_t)(eax + edx + 0x68u);
/* 86c539: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86c53c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 86c53d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_86c53f: /* 86c53f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 86c540: jmp 0x86c47d */
  goto L_86c47d;
}

void f_86be2f(void) {
  LOAD_REGS();
  goto L_86be2f;
L_86b64c: /* 86b64c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 86b64f: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 86b652: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86b655: je 0x86b671 */
  if (zf) goto L_86b671;
L_86b657: /* 86b657: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 86b65a: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 86b65d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86b65e: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 86b661: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86b662: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 86b665: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86b666: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86b667: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86b668: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86b669: call 0x86b3f0 */
  esp -= 4; W32(esp, 0x86b66eu); SPILL(); f_86b3f0(); if (g_unwind) return; RELOAD();
/* 86b66e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_86b671: /* 86b671: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 86b674: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 86b675: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 86b676: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 86b67d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 86b67e: mov esp, ebp */
  esp = ebp;
/* 86b680: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 86b681: ret  */
  esp += 4; SPILL(); return;
L_86be2f: /* 86be2f: xor eax, eax */
  eax = 0;
/* 86be31: mov dword ptr [ebx + 0x32c], eax */
  W32((uint32_t)(ebx + 0x32cu), eax);
/* 86be37: mov ecx, dword ptr [esi + 0x1d0] */
  ecx = R32((uint32_t)(esi + 0x1d0u));
/* 86be3d: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 86be40: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86be43: mov ecx, dword ptr [edx + 0x1c] */
  ecx = R32((uint32_t)(edx + 0x1cu));
/* 86be46: mov edx, dword ptr [ebx + 0x328] */
  edx = R32((uint32_t)(ebx + 0x328u));
/* 86be4c: mov eax, ecx */
  eax = ecx;
/* 86be4e: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 86be51: lea esi, [eax + edx] */
  esi = (uint32_t)(eax + edx);
/* 86be54: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 86be57: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 86be59: shl al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint8_t r = (uint8_t)((uint32_t)a << c);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
  }
/* 86be5b: or byte ptr [esi], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(esi), r);
  }
/* 86be5d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 86be60: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 86be63: test byte ptr [edi + 4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86be67: je 0x86be74 */
  if (zf) goto L_86be74;
L_86be69: /* 86be69: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 86be6c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86be6e: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86be74: /* 86be74: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86be77: movzx ecx, byte ptr [edx + esi + 0x54] */
  ecx = (uint32_t)(R8((uint32_t)(edx + esi + 0x54u)));
/* 86be7c: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 86be7e: cmp ecx, dword ptr [eax + 0x1cc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x1ccu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86be84: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86be8a: /* 86be8a: cmp dword ptr [esi + 0x60], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x60u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86be8e: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86be94: /* 86be94: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 86be97: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 86be9a: test dword ptr [eax + 0x534], 0x2000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x534u))); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bea4: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86beaa: /* 86beaa: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86bead: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86beaf: je 0x86c2c9 */
  if (zf) goto L_86c2c9;
L_86beb5: /* 86beb5: mov ecx, dword ptr [ebx + 0x35c] */
  ecx = R32((uint32_t)(ebx + 0x35cu));
/* 86bebb: xor edi, edi */
  edi = 0;
/* 86bebd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_86bec0: /* 86bec0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bec2: je 0x86bee0 */
  if (zf) goto L_86bee0;
L_86bec4: /* 86bec4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86bec6: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86bec9: cmp dword ptr [eax + 0x14], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86becc: jne 0x86c28c */
  if (!zf) goto L_86c28c;
L_86bed2: /* 86bed2: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 86bed5: cmp edx, dword ptr [esi + 0x60] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x60u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86bed8: jne 0x86c28c */
  if (!zf) goto L_86c28c;
L_86bede: /* 86bede: mov edi, eax */
  edi = eax;
L_86bee0: /* 86bee0: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bee2: jne 0x86c2be */
  if (!zf) goto L_86c2be;
L_86bee8: /* 86bee8: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86beea: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 86beec: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86bef1: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86bef7u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86bef7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bef9: je 0x86c294 */
  if (zf) goto L_86c294;
L_86beff: /* 86beff: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86bf02: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 86bf05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86bf06: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 86bf09: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86bf0a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86bf0b: mov ecx, eax */
  ecx = eax;
/* 86bf0d: call 0x6c50b5 */
  esp -= 4; W32(esp, 0x86bf12u); SPILL(); f_6c50b5(); if (g_unwind) return; RELOAD();
/* 86bf12: mov edi, eax */
  edi = eax;
/* 86bf14: jmp 0x86c296 */
  goto L_86c296;
L_86c28c: /* 86c28c: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 86c28f: jmp 0x86bec0 */
  goto L_86bec0;
L_86c294: /* 86c294: xor edi, edi */
  edi = 0;
L_86c296: /* 86c296: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c298: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c29a: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c29f: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c2a5u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c2a5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2a7: je 0x86c2b6 */
  if (zf) goto L_86c2b6;
L_86c2a9: /* 86c2a9: mov ecx, dword ptr [ebx + 0x35c] */
  ecx = R32((uint32_t)(ebx + 0x35cu));
/* 86c2af: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 86c2b1: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86c2b4: jmp 0x86c2b8 */
  goto L_86c2b8;
L_86c2b6: /* 86c2b6: xor eax, eax */
  eax = 0;
L_86c2b8: /* 86c2b8: mov dword ptr [ebx + 0x35c], eax */
  W32((uint32_t)(ebx + 0x35cu), eax);
L_86c2be: /* 86c2be: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86c2c1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c2c2: mov ecx, edi */
  ecx = edi;
/* 86c2c4: call 0x6c7e37 */
  esp -= 4; W32(esp, 0x86c2c9u); SPILL(); f_6c7e37(); if (g_unwind) return; RELOAD();
L_86c2c9: /* 86c2c9: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 86c2cc: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 86c2cf: test eax, 0x20000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2d4: je 0x86c2de */
  if (zf) goto L_86c2de;
L_86c2d6: /* 86c2d6: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2d8: jne 0x86b64c */
  if (!zf) goto L_86b64c;
L_86c2de: /* 86c2de: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 86c2e0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2e2: je 0x86c3bb */
  if (zf) goto L_86c3bb;
L_86c2e8: /* 86c2e8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86c2ea: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0x86c2f0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86c2f0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2f2: je 0x86c3bb */
  if (zf) goto L_86c3bb;
L_86c2f8: /* 86c2f8: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 86c2fb: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2fd: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 86c300: mov edi, dword ptr [ebp + 0x1c] */
  edi = R32((uint32_t)(ebp + 0x1cu));
/* 86c303: mov dword ptr [ebp - 0x60], 1 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x1u);
/* 86c30a: mov dword ptr [ebp - 0x5c], ecx */
  W32((uint32_t)(ebp + 0xffffffa4u), ecx);
/* 86c30d: mov dword ptr [ebp - 0x54], esi */
  W32((uint32_t)(ebp + 0xffffffacu), esi);
/* 86c310: mov dword ptr [ebp - 0x4c], edi */
  W32((uint32_t)(ebp + 0xffffffb4u), edi);
/* 86c313: je 0x86c33f */
  if (zf) goto L_86c33f;
L_86c315: /* 86c315: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c317: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 86c318: push 0xcc9ad8 */
  { uint32_t v = 0xcc9ad8u; esp -= 4; W32(esp, v); }
/* 86c31d: call 0x6c3170 */
  esp -= 4; W32(esp, 0x86c322u); SPILL(); f_6c3170(); if (g_unwind) return; RELOAD();
/* 86c322: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 86c325: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c328: lea edx, [esi*4] */
  edx = (uint32_t)(esi*4);
/* 86c32f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c330: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c331: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c332: mov dword ptr [ebp - 0x58], eax */
  W32((uint32_t)(ebp + 0xffffffa8u), eax);
/* 86c335: call 0x6ca83f */
  esp -= 4; W32(esp, 0x86c33au); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 86c33a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c33d: jmp 0x86c346 */
  goto L_86c346;
L_86c33f: /* 86c33f: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
L_86c346: /* 86c346: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c348: je 0x86c374 */
  if (zf) goto L_86c374;
L_86c34a: /* 86c34a: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c34c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86c34d: push 0xcc9ad8 */
  { uint32_t v = 0xcc9ad8u; esp -= 4; W32(esp, v); }
/* 86c352: call 0x6c99e4 */
  esp -= 4; W32(esp, 0x86c357u); SPILL(); f_6c99e4(); if (g_unwind) return; RELOAD();
/* 86c357: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 86c35a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c35d: lea edx, [edi*4] */
  edx = (uint32_t)(edi*4);
/* 86c364: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c365: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c366: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c367: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 86c36a: call 0x6ca83f */
  esp -= 4; W32(esp, 0x86c36fu); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 86c36f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c372: jmp 0x86c37b */
  goto L_86c37b;
L_86c374: /* 86c374: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
L_86c37b: /* 86c37b: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c37d: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 86c37f: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c384: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c38au); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c38a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c38c: je 0x86c3ae */
  if (zf) goto L_86c3ae;
L_86c38e: /* 86c38e: mov edx, dword ptr [ebx + 0x33c] */
  edx = R32((uint32_t)(ebx + 0x33cu));
/* 86c394: mov ecx, 7 */
  ecx = 0x7u;
/* 86c399: lea esi, [ebp - 0x60] */
  esi = (uint32_t)(ebp + 0xffffffa0u);
/* 86c39c: mov edi, eax */
  edi = eax;
/* 86c39e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 86c3a0: mov dword ptr [eax + 0x1c], edx */
  W32((uint32_t)(eax + 0x1cu), edx);
/* 86c3a3: mov dword ptr [ebx + 0x33c], eax */
  W32((uint32_t)(ebx + 0x33cu), eax);
/* 86c3a9: jmp 0x86b64c */
  goto L_86b64c;
L_86c3ae: /* 86c3ae: xor eax, eax */
  eax = 0;
/* 86c3b0: mov dword ptr [ebx + 0x33c], eax */
  W32((uint32_t)(ebx + 0x33cu), eax);
/* 86c3b6: jmp 0x86b64c */
  goto L_86b64c;
L_86c3bb: /* 86c3bb: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 86c3be: mov eax, dword ptr [ebx + 0x354] */
  eax = R32((uint32_t)(ebx + 0x354u));
/* 86c3c4: cmp dword ptr [eax + edx*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + edx*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c3c8: jne 0x86c427 */
  if (!zf) goto L_86c427;
L_86c3ca: /* 86c3ca: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c3cc: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 86c3ce: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c3d3: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c3d9u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c3d9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c3db: je 0x86c3ee */
  if (zf) goto L_86c3ee;
L_86c3dd: /* 86c3dd: mov ecx, dword ptr [esi + 0x60] */
  ecx = R32((uint32_t)(esi + 0x60u));
/* 86c3e0: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 86c3e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c3e4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c3e5: mov ecx, eax */
  ecx = eax;
/* 86c3e7: call 0x6c1924 */
  esp -= 4; W32(esp, 0x86c3ecu); SPILL(); f_6c1924(); if (g_unwind) return; RELOAD();
/* 86c3ec: jmp 0x86c3f0 */
  goto L_86c3f0;
L_86c3ee: /* 86c3ee: xor eax, eax */
  eax = 0;
L_86c3f0: /* 86c3f0: mov ecx, dword ptr [esi + 0x60] */
  ecx = R32((uint32_t)(esi + 0x60u));
/* 86c3f3: mov edx, dword ptr [ebx + 0x354] */
  edx = R32((uint32_t)(ebx + 0x354u));
/* 86c3f9: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c3fb: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* 86c3fe: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c400: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c405: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c40bu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c40b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c40d: je 0x86c41f */
  if (zf) goto L_86c41f;
L_86c40f: /* 86c40f: mov ecx, dword ptr [ebx + 0x358] */
  ecx = R32((uint32_t)(ebx + 0x358u));
/* 86c415: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 86c418: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 86c41a: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86c41d: jmp 0x86c421 */
  goto L_86c421;
L_86c41f: /* 86c41f: xor eax, eax */
  eax = 0;
L_86c421: /* 86c421: mov dword ptr [ebx + 0x358], eax */
  W32((uint32_t)(ebx + 0x358u), eax);
L_86c427: /* 86c427: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 86c429: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 86c42c: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 86c42f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c430: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 86c433: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c434: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 86c437: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c438: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86c43b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c43c: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
/* 86c43f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c440: mov ecx, dword ptr [ebx + 0x354] */
  ecx = R32((uint32_t)(ebx + 0x354u));
/* 86c446: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 86c449: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c44a: call 0x6c83fa */
  esp -= 4; W32(esp, 0x86c44fu); SPILL(); f_6c83fa(); if (g_unwind) return; RELOAD();
/* 86c44f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86c452: mov esi, dword ptr [edx + 0x68] */
  esi = R32((uint32_t)(edx + 0x68u));
/* 86c455: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c458: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86c45e: /* 86c45e: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86c463: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c466: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86c46c: /* 86c46c: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 86c46f: imul esi, esi, 0xa4 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0xa4u);
  esi = (uint32_t)r;
  }
/* 86c475: add esi, dword ptr [ecx + 0xf0] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xf0u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 86c47b: xor edx, edx */
  edx = 0;
L_86c47d: /* 86c47d: cmp edx, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86c480: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 86c483: jge 0x86b64c */
  if ((sf == of)) goto L_86b64c;
L_86c489: /* 86c489: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 86c48c: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 86c48f: mov eax, dword ptr [ecx + 0x38] */
  eax = R32((uint32_t)(ecx + 0x38u));
/* 86c492: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c494: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 86c497: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c49d: /* 86c49d: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86c4a2: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c4a5: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c4ab: /* 86c4ab: xor eax, eax */
  eax = 0;
/* 86c4ad: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_86c4b0: /* 86c4b0: cmp eax, dword ptr [esi + 0x9c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x9cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86c4b6: jge 0x86c4cc */
  if ((sf == of)) goto L_86c4cc;
L_86c4b8: /* 86c4b8: mov edi, dword ptr [esi + 0x98] */
  edi = R32((uint32_t)(esi + 0x98u));
/* 86c4be: mov edi, dword ptr [edi + eax*4] */
  edi = R32((uint32_t)(edi + eax*4));
/* 86c4c1: cmp edi, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c4c3: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c4c9: /* 86c4c9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 86c4ca: jmp 0x86c4b0 */
  goto L_86c4b0;
L_86c4cc: /* 86c4cc: mov eax, 1 */
  eax = 0x1u;
/* 86c4d1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c4d3: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c4d5: /* 86c4d5: mov eax, dword ptr [esi + 0x9c] */
  eax = R32((uint32_t)(esi + 0x9cu));
/* 86c4db: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c4dd: jne 0x86c4ff */
  if (!zf) goto L_86c4ff;
L_86c4df: /* 86c4df: mov edi, dword ptr [ebx + 0xc] */
  edi = R32((uint32_t)(ebx + 0xcu));
/* 86c4e2: add edi, 0xfc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 86c4e8: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86c4ea: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86c4ec: mov ecx, edi */
  ecx = edi;
/* 86c4ee: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x86c4f4u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 86c4f4: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86c4f7: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 86c4f9: mov edx, dword ptr [edx + 0x68] */
  edx = R32((uint32_t)(edx + 0x68u));
/* 86c4fc: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
L_86c4ff: /* 86c4ff: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86c501: lea edi, [esi + 0x98] */
  edi = (uint32_t)(esi + 0x98u);
/* 86c507: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86c509: mov ecx, edi */
  ecx = edi;
/* 86c50b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x86c511u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 86c511: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 86c513: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86c516: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 86c518: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 86c51b: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 86c51e: mov edx, dword ptr [esi + 0x24] */
  edx = R32((uint32_t)(esi + 0x24u));
/* 86c521: imul eax, eax, 0x6c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x6cu);
  eax = (uint32_t)r;
  }
/* 86c524: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 86c525: mov dword ptr [esi + 0x24], edx */
  W32((uint32_t)(esi + 0x24u), edx);
/* 86c528: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 86c52b: mov edx, dword ptr [ecx + 0xe4] */
  edx = R32((uint32_t)(ecx + 0xe4u));
/* 86c531: mov ecx, dword ptr [eax + edx + 0x68] */
  ecx = R32((uint32_t)(eax + edx + 0x68u));
/* 86c535: lea eax, [eax + edx + 0x68] */
  eax = (uint32_t)(eax + edx + 0x68u);
/* 86c539: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86c53c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 86c53d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_86c53f: /* 86c53f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 86c540: jmp 0x86c47d */
  goto L_86c47d;
}

void f_86bf19(void) {
  LOAD_REGS();
  goto L_86bf19;
L_86b64c: /* 86b64c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 86b64f: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 86b652: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86b655: je 0x86b671 */
  if (zf) goto L_86b671;
L_86b657: /* 86b657: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 86b65a: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 86b65d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86b65e: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 86b661: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86b662: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 86b665: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86b666: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86b667: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86b668: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86b669: call 0x86b3f0 */
  esp -= 4; W32(esp, 0x86b66eu); SPILL(); f_86b3f0(); if (g_unwind) return; RELOAD();
/* 86b66e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_86b671: /* 86b671: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 86b674: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 86b675: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 86b676: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 86b67d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 86b67e: mov esp, ebp */
  esp = ebp;
/* 86b680: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 86b681: ret  */
  esp += 4; SPILL(); return;
L_86be60: /* 86be60: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 86be63: test byte ptr [edi + 4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86be67: je 0x86be74 */
  if (zf) goto L_86be74;
L_86be69: /* 86be69: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 86be6c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86be6e: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86be74: /* 86be74: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86be77: movzx ecx, byte ptr [edx + esi + 0x54] */
  ecx = (uint32_t)(R8((uint32_t)(edx + esi + 0x54u)));
/* 86be7c: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 86be7e: cmp ecx, dword ptr [eax + 0x1cc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x1ccu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86be84: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86be8a: /* 86be8a: cmp dword ptr [esi + 0x60], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x60u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86be8e: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86be94: /* 86be94: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 86be97: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 86be9a: test dword ptr [eax + 0x534], 0x2000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x534u))); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bea4: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86beaa: /* 86beaa: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86bead: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86beaf: je 0x86c2c9 */
  if (zf) goto L_86c2c9;
L_86beb5: /* 86beb5: mov ecx, dword ptr [ebx + 0x35c] */
  ecx = R32((uint32_t)(ebx + 0x35cu));
/* 86bebb: xor edi, edi */
  edi = 0;
/* 86bebd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_86bec0: /* 86bec0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bec2: je 0x86bee0 */
  if (zf) goto L_86bee0;
L_86bec4: /* 86bec4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86bec6: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86bec9: cmp dword ptr [eax + 0x14], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86becc: jne 0x86c28c */
  if (!zf) goto L_86c28c;
L_86bed2: /* 86bed2: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 86bed5: cmp edx, dword ptr [esi + 0x60] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x60u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86bed8: jne 0x86c28c */
  if (!zf) goto L_86c28c;
L_86bede: /* 86bede: mov edi, eax */
  edi = eax;
L_86bee0: /* 86bee0: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bee2: jne 0x86c2be */
  if (!zf) goto L_86c2be;
L_86bee8: /* 86bee8: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86beea: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 86beec: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86bef1: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86bef7u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86bef7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bef9: je 0x86c294 */
  if (zf) goto L_86c294;
L_86beff: /* 86beff: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86bf02: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 86bf05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86bf06: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 86bf09: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86bf0a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86bf0b: mov ecx, eax */
  ecx = eax;
/* 86bf0d: call 0x6c50b5 */
  esp -= 4; W32(esp, 0x86bf12u); SPILL(); f_6c50b5(); if (g_unwind) return; RELOAD();
/* 86bf12: mov edi, eax */
  edi = eax;
/* 86bf14: jmp 0x86c296 */
  goto L_86c296;
L_86bf19: /* 86bf19: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 86bf20: jmp 0x86be60 */
  goto L_86be60;
L_86c28c: /* 86c28c: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 86c28f: jmp 0x86bec0 */
  goto L_86bec0;
L_86c294: /* 86c294: xor edi, edi */
  edi = 0;
L_86c296: /* 86c296: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c298: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c29a: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c29f: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c2a5u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c2a5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2a7: je 0x86c2b6 */
  if (zf) goto L_86c2b6;
L_86c2a9: /* 86c2a9: mov ecx, dword ptr [ebx + 0x35c] */
  ecx = R32((uint32_t)(ebx + 0x35cu));
/* 86c2af: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 86c2b1: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86c2b4: jmp 0x86c2b8 */
  goto L_86c2b8;
L_86c2b6: /* 86c2b6: xor eax, eax */
  eax = 0;
L_86c2b8: /* 86c2b8: mov dword ptr [ebx + 0x35c], eax */
  W32((uint32_t)(ebx + 0x35cu), eax);
L_86c2be: /* 86c2be: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86c2c1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c2c2: mov ecx, edi */
  ecx = edi;
/* 86c2c4: call 0x6c7e37 */
  esp -= 4; W32(esp, 0x86c2c9u); SPILL(); f_6c7e37(); if (g_unwind) return; RELOAD();
L_86c2c9: /* 86c2c9: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 86c2cc: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 86c2cf: test eax, 0x20000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2d4: je 0x86c2de */
  if (zf) goto L_86c2de;
L_86c2d6: /* 86c2d6: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2d8: jne 0x86b64c */
  if (!zf) goto L_86b64c;
L_86c2de: /* 86c2de: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 86c2e0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2e2: je 0x86c3bb */
  if (zf) goto L_86c3bb;
L_86c2e8: /* 86c2e8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86c2ea: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0x86c2f0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86c2f0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2f2: je 0x86c3bb */
  if (zf) goto L_86c3bb;
L_86c2f8: /* 86c2f8: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 86c2fb: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2fd: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 86c300: mov edi, dword ptr [ebp + 0x1c] */
  edi = R32((uint32_t)(ebp + 0x1cu));
/* 86c303: mov dword ptr [ebp - 0x60], 1 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x1u);
/* 86c30a: mov dword ptr [ebp - 0x5c], ecx */
  W32((uint32_t)(ebp + 0xffffffa4u), ecx);
/* 86c30d: mov dword ptr [ebp - 0x54], esi */
  W32((uint32_t)(ebp + 0xffffffacu), esi);
/* 86c310: mov dword ptr [ebp - 0x4c], edi */
  W32((uint32_t)(ebp + 0xffffffb4u), edi);
/* 86c313: je 0x86c33f */
  if (zf) goto L_86c33f;
L_86c315: /* 86c315: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c317: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 86c318: push 0xcc9ad8 */
  { uint32_t v = 0xcc9ad8u; esp -= 4; W32(esp, v); }
/* 86c31d: call 0x6c3170 */
  esp -= 4; W32(esp, 0x86c322u); SPILL(); f_6c3170(); if (g_unwind) return; RELOAD();
/* 86c322: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 86c325: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c328: lea edx, [esi*4] */
  edx = (uint32_t)(esi*4);
/* 86c32f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c330: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c331: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c332: mov dword ptr [ebp - 0x58], eax */
  W32((uint32_t)(ebp + 0xffffffa8u), eax);
/* 86c335: call 0x6ca83f */
  esp -= 4; W32(esp, 0x86c33au); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 86c33a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c33d: jmp 0x86c346 */
  goto L_86c346;
L_86c33f: /* 86c33f: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
L_86c346: /* 86c346: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c348: je 0x86c374 */
  if (zf) goto L_86c374;
L_86c34a: /* 86c34a: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c34c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86c34d: push 0xcc9ad8 */
  { uint32_t v = 0xcc9ad8u; esp -= 4; W32(esp, v); }
/* 86c352: call 0x6c99e4 */
  esp -= 4; W32(esp, 0x86c357u); SPILL(); f_6c99e4(); if (g_unwind) return; RELOAD();
/* 86c357: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 86c35a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c35d: lea edx, [edi*4] */
  edx = (uint32_t)(edi*4);
/* 86c364: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c365: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c366: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c367: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 86c36a: call 0x6ca83f */
  esp -= 4; W32(esp, 0x86c36fu); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 86c36f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c372: jmp 0x86c37b */
  goto L_86c37b;
L_86c374: /* 86c374: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
L_86c37b: /* 86c37b: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c37d: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 86c37f: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c384: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c38au); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c38a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c38c: je 0x86c3ae */
  if (zf) goto L_86c3ae;
L_86c38e: /* 86c38e: mov edx, dword ptr [ebx + 0x33c] */
  edx = R32((uint32_t)(ebx + 0x33cu));
/* 86c394: mov ecx, 7 */
  ecx = 0x7u;
/* 86c399: lea esi, [ebp - 0x60] */
  esi = (uint32_t)(ebp + 0xffffffa0u);
/* 86c39c: mov edi, eax */
  edi = eax;
/* 86c39e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 86c3a0: mov dword ptr [eax + 0x1c], edx */
  W32((uint32_t)(eax + 0x1cu), edx);
/* 86c3a3: mov dword ptr [ebx + 0x33c], eax */
  W32((uint32_t)(ebx + 0x33cu), eax);
/* 86c3a9: jmp 0x86b64c */
  goto L_86b64c;
L_86c3ae: /* 86c3ae: xor eax, eax */
  eax = 0;
/* 86c3b0: mov dword ptr [ebx + 0x33c], eax */
  W32((uint32_t)(ebx + 0x33cu), eax);
/* 86c3b6: jmp 0x86b64c */
  goto L_86b64c;
L_86c3bb: /* 86c3bb: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 86c3be: mov eax, dword ptr [ebx + 0x354] */
  eax = R32((uint32_t)(ebx + 0x354u));
/* 86c3c4: cmp dword ptr [eax + edx*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + edx*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c3c8: jne 0x86c427 */
  if (!zf) goto L_86c427;
L_86c3ca: /* 86c3ca: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c3cc: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 86c3ce: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c3d3: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c3d9u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c3d9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c3db: je 0x86c3ee */
  if (zf) goto L_86c3ee;
L_86c3dd: /* 86c3dd: mov ecx, dword ptr [esi + 0x60] */
  ecx = R32((uint32_t)(esi + 0x60u));
/* 86c3e0: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 86c3e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c3e4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c3e5: mov ecx, eax */
  ecx = eax;
/* 86c3e7: call 0x6c1924 */
  esp -= 4; W32(esp, 0x86c3ecu); SPILL(); f_6c1924(); if (g_unwind) return; RELOAD();
/* 86c3ec: jmp 0x86c3f0 */
  goto L_86c3f0;
L_86c3ee: /* 86c3ee: xor eax, eax */
  eax = 0;
L_86c3f0: /* 86c3f0: mov ecx, dword ptr [esi + 0x60] */
  ecx = R32((uint32_t)(esi + 0x60u));
/* 86c3f3: mov edx, dword ptr [ebx + 0x354] */
  edx = R32((uint32_t)(ebx + 0x354u));
/* 86c3f9: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c3fb: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* 86c3fe: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c400: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c405: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c40bu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c40b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c40d: je 0x86c41f */
  if (zf) goto L_86c41f;
L_86c40f: /* 86c40f: mov ecx, dword ptr [ebx + 0x358] */
  ecx = R32((uint32_t)(ebx + 0x358u));
/* 86c415: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 86c418: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 86c41a: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86c41d: jmp 0x86c421 */
  goto L_86c421;
L_86c41f: /* 86c41f: xor eax, eax */
  eax = 0;
L_86c421: /* 86c421: mov dword ptr [ebx + 0x358], eax */
  W32((uint32_t)(ebx + 0x358u), eax);
L_86c427: /* 86c427: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 86c429: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 86c42c: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 86c42f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c430: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 86c433: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c434: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 86c437: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c438: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86c43b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c43c: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
/* 86c43f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c440: mov ecx, dword ptr [ebx + 0x354] */
  ecx = R32((uint32_t)(ebx + 0x354u));
/* 86c446: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 86c449: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c44a: call 0x6c83fa */
  esp -= 4; W32(esp, 0x86c44fu); SPILL(); f_6c83fa(); if (g_unwind) return; RELOAD();
/* 86c44f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86c452: mov esi, dword ptr [edx + 0x68] */
  esi = R32((uint32_t)(edx + 0x68u));
/* 86c455: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c458: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86c45e: /* 86c45e: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86c463: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c466: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86c46c: /* 86c46c: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 86c46f: imul esi, esi, 0xa4 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0xa4u);
  esi = (uint32_t)r;
  }
/* 86c475: add esi, dword ptr [ecx + 0xf0] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xf0u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 86c47b: xor edx, edx */
  edx = 0;
L_86c47d: /* 86c47d: cmp edx, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86c480: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 86c483: jge 0x86b64c */
  if ((sf == of)) goto L_86b64c;
L_86c489: /* 86c489: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 86c48c: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 86c48f: mov eax, dword ptr [ecx + 0x38] */
  eax = R32((uint32_t)(ecx + 0x38u));
/* 86c492: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c494: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 86c497: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c49d: /* 86c49d: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86c4a2: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c4a5: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c4ab: /* 86c4ab: xor eax, eax */
  eax = 0;
/* 86c4ad: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_86c4b0: /* 86c4b0: cmp eax, dword ptr [esi + 0x9c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x9cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86c4b6: jge 0x86c4cc */
  if ((sf == of)) goto L_86c4cc;
L_86c4b8: /* 86c4b8: mov edi, dword ptr [esi + 0x98] */
  edi = R32((uint32_t)(esi + 0x98u));
/* 86c4be: mov edi, dword ptr [edi + eax*4] */
  edi = R32((uint32_t)(edi + eax*4));
/* 86c4c1: cmp edi, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c4c3: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c4c9: /* 86c4c9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 86c4ca: jmp 0x86c4b0 */
  goto L_86c4b0;
L_86c4cc: /* 86c4cc: mov eax, 1 */
  eax = 0x1u;
/* 86c4d1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c4d3: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c4d5: /* 86c4d5: mov eax, dword ptr [esi + 0x9c] */
  eax = R32((uint32_t)(esi + 0x9cu));
/* 86c4db: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c4dd: jne 0x86c4ff */
  if (!zf) goto L_86c4ff;
L_86c4df: /* 86c4df: mov edi, dword ptr [ebx + 0xc] */
  edi = R32((uint32_t)(ebx + 0xcu));
/* 86c4e2: add edi, 0xfc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 86c4e8: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86c4ea: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86c4ec: mov ecx, edi */
  ecx = edi;
/* 86c4ee: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x86c4f4u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 86c4f4: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86c4f7: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 86c4f9: mov edx, dword ptr [edx + 0x68] */
  edx = R32((uint32_t)(edx + 0x68u));
/* 86c4fc: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
L_86c4ff: /* 86c4ff: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86c501: lea edi, [esi + 0x98] */
  edi = (uint32_t)(esi + 0x98u);
/* 86c507: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86c509: mov ecx, edi */
  ecx = edi;
/* 86c50b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x86c511u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 86c511: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 86c513: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86c516: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 86c518: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 86c51b: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 86c51e: mov edx, dword ptr [esi + 0x24] */
  edx = R32((uint32_t)(esi + 0x24u));
/* 86c521: imul eax, eax, 0x6c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x6cu);
  eax = (uint32_t)r;
  }
/* 86c524: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 86c525: mov dword ptr [esi + 0x24], edx */
  W32((uint32_t)(esi + 0x24u), edx);
/* 86c528: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 86c52b: mov edx, dword ptr [ecx + 0xe4] */
  edx = R32((uint32_t)(ecx + 0xe4u));
/* 86c531: mov ecx, dword ptr [eax + edx + 0x68] */
  ecx = R32((uint32_t)(eax + edx + 0x68u));
/* 86c535: lea eax, [eax + edx + 0x68] */
  eax = (uint32_t)(eax + edx + 0x68u);
/* 86c539: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86c53c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 86c53d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_86c53f: /* 86c53f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 86c540: jmp 0x86c47d */
  goto L_86c47d;
}

void f_86bf25(void) {
  LOAD_REGS();
  goto L_86bf25;
L_86b64c: /* 86b64c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 86b64f: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 86b652: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86b655: je 0x86b671 */
  if (zf) goto L_86b671;
L_86b657: /* 86b657: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 86b65a: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 86b65d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86b65e: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 86b661: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86b662: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 86b665: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86b666: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86b667: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86b668: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86b669: call 0x86b3f0 */
  esp -= 4; W32(esp, 0x86b66eu); SPILL(); f_86b3f0(); if (g_unwind) return; RELOAD();
/* 86b66e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_86b671: /* 86b671: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 86b674: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 86b675: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 86b676: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 86b67d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 86b67e: mov esp, ebp */
  esp = ebp;
/* 86b680: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 86b681: ret  */
  esp += 4; SPILL(); return;
L_86be5d: /* 86be5d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_86be60: /* 86be60: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
L_86be63: /* 86be63: test byte ptr [edi + 4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86be67: je 0x86be74 */
  if (zf) goto L_86be74;
L_86be69: /* 86be69: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 86be6c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86be6e: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86be74: /* 86be74: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86be77: movzx ecx, byte ptr [edx + esi + 0x54] */
  ecx = (uint32_t)(R8((uint32_t)(edx + esi + 0x54u)));
/* 86be7c: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 86be7e: cmp ecx, dword ptr [eax + 0x1cc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x1ccu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86be84: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86be8a: /* 86be8a: cmp dword ptr [esi + 0x60], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x60u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86be8e: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86be94: /* 86be94: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 86be97: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 86be9a: test dword ptr [eax + 0x534], 0x2000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x534u))); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bea4: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86beaa: /* 86beaa: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86bead: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86beaf: je 0x86c2c9 */
  if (zf) goto L_86c2c9;
L_86beb5: /* 86beb5: mov ecx, dword ptr [ebx + 0x35c] */
  ecx = R32((uint32_t)(ebx + 0x35cu));
/* 86bebb: xor edi, edi */
  edi = 0;
/* 86bebd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_86bec0: /* 86bec0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bec2: je 0x86bee0 */
  if (zf) goto L_86bee0;
L_86bec4: /* 86bec4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86bec6: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86bec9: cmp dword ptr [eax + 0x14], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86becc: jne 0x86c28c */
  if (!zf) goto L_86c28c;
L_86bed2: /* 86bed2: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 86bed5: cmp edx, dword ptr [esi + 0x60] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x60u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86bed8: jne 0x86c28c */
  if (!zf) goto L_86c28c;
L_86bede: /* 86bede: mov edi, eax */
  edi = eax;
L_86bee0: /* 86bee0: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bee2: jne 0x86c2be */
  if (!zf) goto L_86c2be;
L_86bee8: /* 86bee8: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86beea: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 86beec: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86bef1: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86bef7u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86bef7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bef9: je 0x86c294 */
  if (zf) goto L_86c294;
L_86beff: /* 86beff: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86bf02: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 86bf05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86bf06: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 86bf09: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86bf0a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86bf0b: mov ecx, eax */
  ecx = eax;
/* 86bf0d: call 0x6c50b5 */
  esp -= 4; W32(esp, 0x86bf12u); SPILL(); f_6c50b5(); if (g_unwind) return; RELOAD();
/* 86bf12: mov edi, eax */
  edi = eax;
/* 86bf14: jmp 0x86c296 */
  goto L_86c296;
L_86bf25: /* 86bf25: test eax, 0x8000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bf2a: je 0x86c26a */
  if (zf) goto L_86c26a;
L_86bf30: /* 86bf30: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86bf35: cmp dword ptr [eax], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86bf37: je 0x86bf4e */
  if (zf) goto L_86bf4e;
L_86bf39: /* 86bf39: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 86bf3c: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 86bf3f: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 86bf45: test ch, 8 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86bf48: je 0x86be74 */
  if (zf) goto L_86be74;
L_86bf4e: /* 86bf4e: mov eax, dword ptr [edi + 0x1c] */
  eax = R32((uint32_t)(edi + 0x1cu));
/* 86bf51: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86bf53: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 86bf56: je 0x86be63 */
  if (zf) goto L_86be63;
L_86bf5c: /* 86bf5c: mov eax, dword ptr [eax + 0x280] */
  eax = R32((uint32_t)(eax + 0x280u));
/* 86bf62: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86bf64: je 0x86be63 */
  if (zf) goto L_86be63;
L_86bf6a: /* 86bf6a: cmp dword ptr [eax + 0x54], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x54u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86bf6d: je 0x86be63 */
  if (zf) goto L_86be63;
L_86bf73: /* 86bf73: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 86bf76: mov eax, dword ptr [ebx + 0x328] */
  eax = R32((uint32_t)(ebx + 0x328u));
/* 86bf7c: mov edx, ecx */
  edx = ecx;
/* 86bf7e: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 86bf81: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 86bf84: mov ebx, 1 */
  ebx = 0x1u;
/* 86bf89: shl ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
  }
/* 86bf8b: sar edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 86bf8e: test byte ptr [edx + eax], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + eax))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86bf91: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86bf94: jne 0x86be60 */
  if (!zf) goto L_86be60;
L_86bf9a: /* 86bf9a: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86bf9d: mov ecx, dword ptr [eax + 0x280] */
  ecx = R32((uint32_t)(eax + 0x280u));
/* 86bfa3: mov edx, dword ptr [ecx + 0x54] */
  edx = R32((uint32_t)(ecx + 0x54u));
/* 86bfa6: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 86bfa9: mov ecx, dword ptr [ecx + 0x18] */
  ecx = R32((uint32_t)(ecx + 0x18u));
/* 86bfac: mov esi, dword ptr [edx + 0x28] */
  esi = R32((uint32_t)(edx + 0x28u));
/* 86bfaf: imul ecx, ecx, 0x148 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x148u);
  ecx = (uint32_t)r;
  }
/* 86bfb5: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 86bfb7: mov ecx, 0x52 */
  ecx = 0x52u;
/* 86bfbc: lea edi, [ebp - 0x1b0] */
  edi = (uint32_t)(ebp + 0xfffffe50u);
/* 86bfc2: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 86bfc4: mov ecx, eax */
  ecx = eax;
/* 86bfc6: call 0x6ca2c2 */
  esp -= 4; W32(esp, 0x86bfcbu); SPILL(); f_6ca2c2(); if (g_unwind) return; RELOAD();
/* 86bfcb: mov edx, dword ptr [ebp - 0x1a4] */
  edx = R32((uint32_t)(ebp + 0xfffffe5cu));
/* 86bfd1: mov ecx, dword ptr [ebp - 0x19c] */
  ecx = R32((uint32_t)(ebp + 0xfffffe64u));
/* 86bfd7: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86bfda: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 86bfdd: mov eax, dword ptr [ebp - 0x1a0] */
  eax = R32((uint32_t)(ebp + 0xfffffe60u));
/* 86bfe3: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 86bfe6: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 86bfe9: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 86bfec: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 86bfef: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 86bff6: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 86bff9: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86bffc: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86bfff: lea edi, [ebp - 0x54] */
  edi = (uint32_t)(ebp + 0xffffffacu);
/* 86c002: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 86c004: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 86c006: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 86c008: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 86c00b: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 86c00d: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 86c010: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 86c012: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 86c015: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 86c018: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 86c01b: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 86c01e: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 86c021: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 86c024: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 86c027: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 86c02a: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 86c02d: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 86c02f: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 86c031: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86c033: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86c035: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86c037: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 86c03a: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 86c03d: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 86c040: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 86c043: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 86c046: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 86c049: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 86c04c: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 86c04f: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 86c051: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 86c053: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86c055: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86c057: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86c059: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 86c05c: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 86c05f: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 86c062: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 86c065: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 86c068: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 86c06b: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 86c06e: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 86c071: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 86c073: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 86c075: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86c077: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86c079: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86c07b: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 86c07d: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 86c07f: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 86c081: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 86c084: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 86c087: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 86c08a: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 86c08d: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 86c090: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 86c093: mov dword ptr [ebp - 0x1a0], ecx */
  W32((uint32_t)(ebp + 0xfffffe60u), ecx);
/* 86c099: mov dword ptr [ebp - 0x1a4], eax */
  W32((uint32_t)(ebp + 0xfffffe5cu), eax);
/* 86c09f: mov dword ptr [ebp - 0x19c], edx */
  W32((uint32_t)(ebp + 0xfffffe64u), edx);
/* 86c0a5: xor ecx, ecx */
  ecx = 0;
/* 86c0a7: jmp 0x86c0b0 */
  goto L_86c0b0;
L_86c0b0: /* 86c0b0: cmp ecx, dword ptr [ebp - 0xb0] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffff50u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86c0b6: jge 0x86c195 */
  if ((sf == of)) goto L_86c195;
L_86c0bc: /* 86c0bc: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 86c0bf: fld dword ptr [ebp + eax*4 - 0x17c] */
  { double v = F32((uint32_t)(ebp + eax*4 + 0xfffffe84u)); FPUSH(v); }
/* 86c0c6: mov edx, dword ptr [ebp + eax*4 - 0x180] */
  edx = R32((uint32_t)(ebp + eax*4 + 0xfffffe80u));
/* 86c0cd: lea eax, [ebp + eax*4 - 0x180] */
  eax = (uint32_t)(ebp + eax*4 + 0xfffffe80u);
/* 86c0d4: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 86c0d7: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 86c0da: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 86c0dd: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 86c0e0: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 86c0e3: mov dword ptr [ebp - 0x30], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x3f800000u);
/* 86c0ea: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 86c0ed: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86c0f0: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86c0f3: lea edi, [ebp - 0x54] */
  edi = (uint32_t)(ebp + 0xffffffacu);
/* 86c0f6: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 86c0f8: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 86c0fa: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 86c0fc: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 86c0ff: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 86c101: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 86c104: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 86c106: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 86c109: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 86c10c: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 86c10f: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 86c112: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 86c115: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 86c118: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 86c11b: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 86c11e: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 86c121: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 86c123: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 86c125: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86c127: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86c129: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86c12b: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 86c12e: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 86c131: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 86c134: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 86c137: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 86c13a: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 86c13d: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 86c140: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 86c143: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 86c145: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 86c147: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86c149: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86c14b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86c14d: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 86c150: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 86c153: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 86c156: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 86c159: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 86c15c: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 86c15f: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 86c162: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 86c165: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 86c167: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 86c169: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86c16b: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86c16d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86c16f: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 86c171: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 86c173: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 86c175: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 86c178: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 86c17b: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 86c17e: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 86c181: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 86c183: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 86c186: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 86c189: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 86c18c: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 86c18f: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 86c190: jmp 0x86c0b0 */
  goto L_86c0b0;
L_86c195: /* 86c195: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 86c197: fld dword ptr [eax + 0x19c] */
  { double v = F32((uint32_t)(eax + 0x19cu)); FPUSH(v); }
/* 86c19d: add eax, 0x194 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x194u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86c1a2: fsub dword ptr [ebp - 0x178] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffe88u)));
/* 86c1a8: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 86c1ab: fsub dword ptr [ebp - 0x17c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffe84u)));
/* 86c1b1: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 86c1b3: fsub dword ptr [ebp - 0x180] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffe80u)));
/* 86c1b9: fld dword ptr [ebp - 0x1a0] */
  { double v = F32((uint32_t)(ebp + 0xfffffe60u)); FPUSH(v); }
/* 86c1bf: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 86c1c1: fld dword ptr [ebp - 0x19c] */
  { double v = F32((uint32_t)(ebp + 0xfffffe64u)); FPUSH(v); }
/* 86c1c7: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 86c1c9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86c1cb: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 86c1cd: fmul dword ptr [ebp - 0x1a4] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xfffffe5cu)));
/* 86c1d3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86c1d5: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 86c1db: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86c1dd: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 86c1df: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 86c1e2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 86c1e4: jp 0x86c1f1 */
  if (pf) goto L_86c1f1;
L_86c1e6: /* 86c1e6: lea ecx, [ebp - 0x1b0] */
  ecx = (uint32_t)(ebp + 0xfffffe50u);
/* 86c1ec: call 0x6cc36f */
  esp -= 4; W32(esp, 0x86c1f1u); SPILL(); f_6cc36f(); if (g_unwind) return; RELOAD();
L_86c1f1: /* 86c1f1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86c1f3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86c1f4: lea eax, [ebp - 0x1b0] */
  eax = (uint32_t)(ebp + 0xfffffe50u);
/* 86c1fa: call 0x86b060 */
  esp -= 4; W32(esp, 0x86c1ffu); SPILL(); f_86b060(); if (g_unwind) return; RELOAD();
/* 86c1ff: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c202: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c204: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c206: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c20b: mov esi, eax */
  esi = eax;
/* 86c20d: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c213u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c213: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c215: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 86c218: je 0x86c234 */
  if (zf) goto L_86c234;
L_86c21a: /* 86c21a: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86c21d: movzx edx, byte ptr [edx + ecx + 0x54] */
  edx = (uint32_t)(R8((uint32_t)(edx + ecx + 0x54u)));
/* 86c222: add edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 86c225: lea edx, [edx + edx*2] */
  edx = (uint32_t)(edx + edx*2);
/* 86c228: mov edx, dword ptr [ebx + edx*4] */
  edx = R32((uint32_t)(ebx + edx*4));
/* 86c22b: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 86c22e: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 86c230: mov edx, eax */
  edx = eax;
/* 86c232: jmp 0x86c236 */
  goto L_86c236;
L_86c234: /* 86c234: xor edx, edx */
  edx = 0;
L_86c236: /* 86c236: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86c239: movzx eax, byte ptr [eax + ecx + 0x54] */
  eax = (uint32_t)(R8((uint32_t)(eax + ecx + 0x54u)));
/* 86c23e: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86c241: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 86c244: mov dword ptr [ebx + eax*4], edx */
  W32((uint32_t)(ebx + eax*4), edx);
/* 86c247: mov ecx, dword ptr [ecx + 0x1c] */
  ecx = R32((uint32_t)(ecx + 0x1cu));
/* 86c24a: mov eax, dword ptr [ebx + 0x328] */
  eax = R32((uint32_t)(ebx + 0x328u));
/* 86c250: mov edx, ecx */
  edx = ecx;
/* 86c252: sar edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 86c255: lea esi, [edx + eax] */
  esi = (uint32_t)(edx + eax);
/* 86c258: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 86c25a: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 86c25d: mov dl, 1 */
  edx = (edx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 86c25f: shl dl, cl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint8_t r = (uint8_t)((uint32_t)a << c);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
  }
/* 86c261: or al, dl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 86c263: mov byte ptr [esi], al */
  W8((uint32_t)(esi), (eax & 0xffu));
/* 86c265: jmp 0x86be5d */
  goto L_86be5d;
L_86c26a: /* 86c26a: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86c26c: je 0x86be74 */
  if (zf) goto L_86be74;
L_86c272: /* 86c272: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 86c275: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 86c278: mov eax, dword ptr [ecx + 0x534] */
  eax = R32((uint32_t)(ecx + 0x534u));
/* 86c27e: test ah, 8 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86c281: jne 0x86b64c */
  if (!zf) goto L_86b64c;
L_86c287: /* 86c287: jmp 0x86be74 */
  goto L_86be74;
L_86c28c: /* 86c28c: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 86c28f: jmp 0x86bec0 */
  goto L_86bec0;
L_86c294: /* 86c294: xor edi, edi */
  edi = 0;
L_86c296: /* 86c296: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c298: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c29a: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c29f: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c2a5u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c2a5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2a7: je 0x86c2b6 */
  if (zf) goto L_86c2b6;
L_86c2a9: /* 86c2a9: mov ecx, dword ptr [ebx + 0x35c] */
  ecx = R32((uint32_t)(ebx + 0x35cu));
/* 86c2af: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 86c2b1: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86c2b4: jmp 0x86c2b8 */
  goto L_86c2b8;
L_86c2b6: /* 86c2b6: xor eax, eax */
  eax = 0;
L_86c2b8: /* 86c2b8: mov dword ptr [ebx + 0x35c], eax */
  W32((uint32_t)(ebx + 0x35cu), eax);
L_86c2be: /* 86c2be: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86c2c1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c2c2: mov ecx, edi */
  ecx = edi;
/* 86c2c4: call 0x6c7e37 */
  esp -= 4; W32(esp, 0x86c2c9u); SPILL(); f_6c7e37(); if (g_unwind) return; RELOAD();
L_86c2c9: /* 86c2c9: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 86c2cc: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 86c2cf: test eax, 0x20000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2d4: je 0x86c2de */
  if (zf) goto L_86c2de;
L_86c2d6: /* 86c2d6: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2d8: jne 0x86b64c */
  if (!zf) goto L_86b64c;
L_86c2de: /* 86c2de: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 86c2e0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2e2: je 0x86c3bb */
  if (zf) goto L_86c3bb;
L_86c2e8: /* 86c2e8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86c2ea: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0x86c2f0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86c2f0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2f2: je 0x86c3bb */
  if (zf) goto L_86c3bb;
L_86c2f8: /* 86c2f8: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 86c2fb: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2fd: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 86c300: mov edi, dword ptr [ebp + 0x1c] */
  edi = R32((uint32_t)(ebp + 0x1cu));
/* 86c303: mov dword ptr [ebp - 0x60], 1 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x1u);
/* 86c30a: mov dword ptr [ebp - 0x5c], ecx */
  W32((uint32_t)(ebp + 0xffffffa4u), ecx);
/* 86c30d: mov dword ptr [ebp - 0x54], esi */
  W32((uint32_t)(ebp + 0xffffffacu), esi);
/* 86c310: mov dword ptr [ebp - 0x4c], edi */
  W32((uint32_t)(ebp + 0xffffffb4u), edi);
/* 86c313: je 0x86c33f */
  if (zf) goto L_86c33f;
L_86c315: /* 86c315: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c317: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 86c318: push 0xcc9ad8 */
  { uint32_t v = 0xcc9ad8u; esp -= 4; W32(esp, v); }
/* 86c31d: call 0x6c3170 */
  esp -= 4; W32(esp, 0x86c322u); SPILL(); f_6c3170(); if (g_unwind) return; RELOAD();
/* 86c322: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 86c325: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c328: lea edx, [esi*4] */
  edx = (uint32_t)(esi*4);
/* 86c32f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c330: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c331: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c332: mov dword ptr [ebp - 0x58], eax */
  W32((uint32_t)(ebp + 0xffffffa8u), eax);
/* 86c335: call 0x6ca83f */
  esp -= 4; W32(esp, 0x86c33au); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 86c33a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c33d: jmp 0x86c346 */
  goto L_86c346;
L_86c33f: /* 86c33f: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
L_86c346: /* 86c346: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c348: je 0x86c374 */
  if (zf) goto L_86c374;
L_86c34a: /* 86c34a: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c34c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86c34d: push 0xcc9ad8 */
  { uint32_t v = 0xcc9ad8u; esp -= 4; W32(esp, v); }
/* 86c352: call 0x6c99e4 */
  esp -= 4; W32(esp, 0x86c357u); SPILL(); f_6c99e4(); if (g_unwind) return; RELOAD();
/* 86c357: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 86c35a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c35d: lea edx, [edi*4] */
  edx = (uint32_t)(edi*4);
/* 86c364: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c365: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c366: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c367: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 86c36a: call 0x6ca83f */
  esp -= 4; W32(esp, 0x86c36fu); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 86c36f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c372: jmp 0x86c37b */
  goto L_86c37b;
L_86c374: /* 86c374: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
L_86c37b: /* 86c37b: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c37d: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 86c37f: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c384: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c38au); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c38a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c38c: je 0x86c3ae */
  if (zf) goto L_86c3ae;
L_86c38e: /* 86c38e: mov edx, dword ptr [ebx + 0x33c] */
  edx = R32((uint32_t)(ebx + 0x33cu));
/* 86c394: mov ecx, 7 */
  ecx = 0x7u;
/* 86c399: lea esi, [ebp - 0x60] */
  esi = (uint32_t)(ebp + 0xffffffa0u);
/* 86c39c: mov edi, eax */
  edi = eax;
/* 86c39e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 86c3a0: mov dword ptr [eax + 0x1c], edx */
  W32((uint32_t)(eax + 0x1cu), edx);
/* 86c3a3: mov dword ptr [ebx + 0x33c], eax */
  W32((uint32_t)(ebx + 0x33cu), eax);
/* 86c3a9: jmp 0x86b64c */
  goto L_86b64c;
L_86c3ae: /* 86c3ae: xor eax, eax */
  eax = 0;
/* 86c3b0: mov dword ptr [ebx + 0x33c], eax */
  W32((uint32_t)(ebx + 0x33cu), eax);
/* 86c3b6: jmp 0x86b64c */
  goto L_86b64c;
L_86c3bb: /* 86c3bb: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 86c3be: mov eax, dword ptr [ebx + 0x354] */
  eax = R32((uint32_t)(ebx + 0x354u));
/* 86c3c4: cmp dword ptr [eax + edx*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + edx*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c3c8: jne 0x86c427 */
  if (!zf) goto L_86c427;
L_86c3ca: /* 86c3ca: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c3cc: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 86c3ce: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c3d3: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c3d9u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c3d9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c3db: je 0x86c3ee */
  if (zf) goto L_86c3ee;
L_86c3dd: /* 86c3dd: mov ecx, dword ptr [esi + 0x60] */
  ecx = R32((uint32_t)(esi + 0x60u));
/* 86c3e0: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 86c3e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c3e4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c3e5: mov ecx, eax */
  ecx = eax;
/* 86c3e7: call 0x6c1924 */
  esp -= 4; W32(esp, 0x86c3ecu); SPILL(); f_6c1924(); if (g_unwind) return; RELOAD();
/* 86c3ec: jmp 0x86c3f0 */
  goto L_86c3f0;
L_86c3ee: /* 86c3ee: xor eax, eax */
  eax = 0;
L_86c3f0: /* 86c3f0: mov ecx, dword ptr [esi + 0x60] */
  ecx = R32((uint32_t)(esi + 0x60u));
/* 86c3f3: mov edx, dword ptr [ebx + 0x354] */
  edx = R32((uint32_t)(ebx + 0x354u));
/* 86c3f9: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c3fb: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* 86c3fe: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c400: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c405: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c40bu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c40b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c40d: je 0x86c41f */
  if (zf) goto L_86c41f;
L_86c40f: /* 86c40f: mov ecx, dword ptr [ebx + 0x358] */
  ecx = R32((uint32_t)(ebx + 0x358u));
/* 86c415: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 86c418: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 86c41a: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86c41d: jmp 0x86c421 */
  goto L_86c421;
L_86c41f: /* 86c41f: xor eax, eax */
  eax = 0;
L_86c421: /* 86c421: mov dword ptr [ebx + 0x358], eax */
  W32((uint32_t)(ebx + 0x358u), eax);
L_86c427: /* 86c427: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 86c429: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 86c42c: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 86c42f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c430: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 86c433: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c434: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 86c437: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c438: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86c43b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c43c: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
/* 86c43f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c440: mov ecx, dword ptr [ebx + 0x354] */
  ecx = R32((uint32_t)(ebx + 0x354u));
/* 86c446: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 86c449: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c44a: call 0x6c83fa */
  esp -= 4; W32(esp, 0x86c44fu); SPILL(); f_6c83fa(); if (g_unwind) return; RELOAD();
/* 86c44f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86c452: mov esi, dword ptr [edx + 0x68] */
  esi = R32((uint32_t)(edx + 0x68u));
/* 86c455: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c458: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86c45e: /* 86c45e: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86c463: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c466: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86c46c: /* 86c46c: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 86c46f: imul esi, esi, 0xa4 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0xa4u);
  esi = (uint32_t)r;
  }
/* 86c475: add esi, dword ptr [ecx + 0xf0] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xf0u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 86c47b: xor edx, edx */
  edx = 0;
L_86c47d: /* 86c47d: cmp edx, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86c480: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 86c483: jge 0x86b64c */
  if ((sf == of)) goto L_86b64c;
L_86c489: /* 86c489: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 86c48c: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 86c48f: mov eax, dword ptr [ecx + 0x38] */
  eax = R32((uint32_t)(ecx + 0x38u));
/* 86c492: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c494: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 86c497: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c49d: /* 86c49d: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86c4a2: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c4a5: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c4ab: /* 86c4ab: xor eax, eax */
  eax = 0;
/* 86c4ad: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_86c4b0: /* 86c4b0: cmp eax, dword ptr [esi + 0x9c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x9cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86c4b6: jge 0x86c4cc */
  if ((sf == of)) goto L_86c4cc;
L_86c4b8: /* 86c4b8: mov edi, dword ptr [esi + 0x98] */
  edi = R32((uint32_t)(esi + 0x98u));
/* 86c4be: mov edi, dword ptr [edi + eax*4] */
  edi = R32((uint32_t)(edi + eax*4));
/* 86c4c1: cmp edi, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c4c3: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c4c9: /* 86c4c9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 86c4ca: jmp 0x86c4b0 */
  goto L_86c4b0;
L_86c4cc: /* 86c4cc: mov eax, 1 */
  eax = 0x1u;
/* 86c4d1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c4d3: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c4d5: /* 86c4d5: mov eax, dword ptr [esi + 0x9c] */
  eax = R32((uint32_t)(esi + 0x9cu));
/* 86c4db: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c4dd: jne 0x86c4ff */
  if (!zf) goto L_86c4ff;
L_86c4df: /* 86c4df: mov edi, dword ptr [ebx + 0xc] */
  edi = R32((uint32_t)(ebx + 0xcu));
/* 86c4e2: add edi, 0xfc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 86c4e8: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86c4ea: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86c4ec: mov ecx, edi */
  ecx = edi;
/* 86c4ee: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x86c4f4u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 86c4f4: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86c4f7: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 86c4f9: mov edx, dword ptr [edx + 0x68] */
  edx = R32((uint32_t)(edx + 0x68u));
/* 86c4fc: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
L_86c4ff: /* 86c4ff: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86c501: lea edi, [esi + 0x98] */
  edi = (uint32_t)(esi + 0x98u);
/* 86c507: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86c509: mov ecx, edi */
  ecx = edi;
/* 86c50b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x86c511u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 86c511: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 86c513: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86c516: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 86c518: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 86c51b: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 86c51e: mov edx, dword ptr [esi + 0x24] */
  edx = R32((uint32_t)(esi + 0x24u));
/* 86c521: imul eax, eax, 0x6c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x6cu);
  eax = (uint32_t)r;
  }
/* 86c524: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 86c525: mov dword ptr [esi + 0x24], edx */
  W32((uint32_t)(esi + 0x24u), edx);
/* 86c528: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 86c52b: mov edx, dword ptr [ecx + 0xe4] */
  edx = R32((uint32_t)(ecx + 0xe4u));
/* 86c531: mov ecx, dword ptr [eax + edx + 0x68] */
  ecx = R32((uint32_t)(eax + edx + 0x68u));
/* 86c535: lea eax, [eax + edx + 0x68] */
  eax = (uint32_t)(eax + edx + 0x68u);
/* 86c539: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86c53c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 86c53d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_86c53f: /* 86c53f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 86c540: jmp 0x86c47d */
  goto L_86c47d;
}

void f_86c0a9(void) {
  LOAD_REGS();
  goto L_86c0a9;
L_86b64c: /* 86b64c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 86b64f: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 86b652: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86b655: je 0x86b671 */
  if (zf) goto L_86b671;
L_86b657: /* 86b657: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 86b65a: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 86b65d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86b65e: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 86b661: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86b662: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 86b665: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86b666: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86b667: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86b668: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86b669: call 0x86b3f0 */
  esp -= 4; W32(esp, 0x86b66eu); SPILL(); f_86b3f0(); if (g_unwind) return; RELOAD();
/* 86b66e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_86b671: /* 86b671: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 86b674: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 86b675: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 86b676: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 86b67d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 86b67e: mov esp, ebp */
  esp = ebp;
/* 86b680: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 86b681: ret  */
  esp += 4; SPILL(); return;
L_86be5d: /* 86be5d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 86be60: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 86be63: test byte ptr [edi + 4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86be67: je 0x86be74 */
  if (zf) goto L_86be74;
L_86be69: /* 86be69: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 86be6c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86be6e: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86be74: /* 86be74: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86be77: movzx ecx, byte ptr [edx + esi + 0x54] */
  ecx = (uint32_t)(R8((uint32_t)(edx + esi + 0x54u)));
/* 86be7c: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 86be7e: cmp ecx, dword ptr [eax + 0x1cc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x1ccu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86be84: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86be8a: /* 86be8a: cmp dword ptr [esi + 0x60], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x60u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86be8e: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86be94: /* 86be94: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 86be97: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 86be9a: test dword ptr [eax + 0x534], 0x2000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x534u))); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bea4: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86beaa: /* 86beaa: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86bead: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86beaf: je 0x86c2c9 */
  if (zf) goto L_86c2c9;
L_86beb5: /* 86beb5: mov ecx, dword ptr [ebx + 0x35c] */
  ecx = R32((uint32_t)(ebx + 0x35cu));
/* 86bebb: xor edi, edi */
  edi = 0;
/* 86bebd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_86bec0: /* 86bec0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bec2: je 0x86bee0 */
  if (zf) goto L_86bee0;
L_86bec4: /* 86bec4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86bec6: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86bec9: cmp dword ptr [eax + 0x14], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86becc: jne 0x86c28c */
  if (!zf) goto L_86c28c;
L_86bed2: /* 86bed2: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 86bed5: cmp edx, dword ptr [esi + 0x60] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x60u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86bed8: jne 0x86c28c */
  if (!zf) goto L_86c28c;
L_86bede: /* 86bede: mov edi, eax */
  edi = eax;
L_86bee0: /* 86bee0: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bee2: jne 0x86c2be */
  if (!zf) goto L_86c2be;
L_86bee8: /* 86bee8: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86beea: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 86beec: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86bef1: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86bef7u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86bef7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bef9: je 0x86c294 */
  if (zf) goto L_86c294;
L_86beff: /* 86beff: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86bf02: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 86bf05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86bf06: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 86bf09: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86bf0a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86bf0b: mov ecx, eax */
  ecx = eax;
/* 86bf0d: call 0x6c50b5 */
  esp -= 4; W32(esp, 0x86bf12u); SPILL(); f_6c50b5(); if (g_unwind) return; RELOAD();
/* 86bf12: mov edi, eax */
  edi = eax;
/* 86bf14: jmp 0x86c296 */
  goto L_86c296;
L_86c0a9: /* 86c0a9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_86c0b0: /* 86c0b0: cmp ecx, dword ptr [ebp - 0xb0] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffff50u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86c0b6: jge 0x86c195 */
  if ((sf == of)) goto L_86c195;
L_86c0bc: /* 86c0bc: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 86c0bf: fld dword ptr [ebp + eax*4 - 0x17c] */
  { double v = F32((uint32_t)(ebp + eax*4 + 0xfffffe84u)); FPUSH(v); }
/* 86c0c6: mov edx, dword ptr [ebp + eax*4 - 0x180] */
  edx = R32((uint32_t)(ebp + eax*4 + 0xfffffe80u));
/* 86c0cd: lea eax, [ebp + eax*4 - 0x180] */
  eax = (uint32_t)(ebp + eax*4 + 0xfffffe80u);
/* 86c0d4: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 86c0d7: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 86c0da: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 86c0dd: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 86c0e0: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 86c0e3: mov dword ptr [ebp - 0x30], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x3f800000u);
/* 86c0ea: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 86c0ed: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86c0f0: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86c0f3: lea edi, [ebp - 0x54] */
  edi = (uint32_t)(ebp + 0xffffffacu);
/* 86c0f6: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 86c0f8: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 86c0fa: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 86c0fc: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 86c0ff: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 86c101: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 86c104: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 86c106: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 86c109: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 86c10c: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 86c10f: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 86c112: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 86c115: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 86c118: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 86c11b: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 86c11e: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 86c121: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 86c123: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 86c125: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86c127: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86c129: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86c12b: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 86c12e: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 86c131: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 86c134: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 86c137: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 86c13a: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 86c13d: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 86c140: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 86c143: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 86c145: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 86c147: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86c149: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86c14b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86c14d: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 86c150: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 86c153: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 86c156: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 86c159: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 86c15c: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 86c15f: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 86c162: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 86c165: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 86c167: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 86c169: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86c16b: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86c16d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86c16f: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 86c171: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 86c173: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 86c175: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 86c178: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 86c17b: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 86c17e: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 86c181: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 86c183: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 86c186: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 86c189: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 86c18c: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 86c18f: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 86c190: jmp 0x86c0b0 */
  goto L_86c0b0;
L_86c195: /* 86c195: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 86c197: fld dword ptr [eax + 0x19c] */
  { double v = F32((uint32_t)(eax + 0x19cu)); FPUSH(v); }
/* 86c19d: add eax, 0x194 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x194u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86c1a2: fsub dword ptr [ebp - 0x178] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffe88u)));
/* 86c1a8: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 86c1ab: fsub dword ptr [ebp - 0x17c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffe84u)));
/* 86c1b1: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 86c1b3: fsub dword ptr [ebp - 0x180] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffe80u)));
/* 86c1b9: fld dword ptr [ebp - 0x1a0] */
  { double v = F32((uint32_t)(ebp + 0xfffffe60u)); FPUSH(v); }
/* 86c1bf: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 86c1c1: fld dword ptr [ebp - 0x19c] */
  { double v = F32((uint32_t)(ebp + 0xfffffe64u)); FPUSH(v); }
/* 86c1c7: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 86c1c9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86c1cb: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 86c1cd: fmul dword ptr [ebp - 0x1a4] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xfffffe5cu)));
/* 86c1d3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86c1d5: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 86c1db: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86c1dd: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 86c1df: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 86c1e2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 86c1e4: jp 0x86c1f1 */
  if (pf) goto L_86c1f1;
L_86c1e6: /* 86c1e6: lea ecx, [ebp - 0x1b0] */
  ecx = (uint32_t)(ebp + 0xfffffe50u);
/* 86c1ec: call 0x6cc36f */
  esp -= 4; W32(esp, 0x86c1f1u); SPILL(); f_6cc36f(); if (g_unwind) return; RELOAD();
L_86c1f1: /* 86c1f1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86c1f3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86c1f4: lea eax, [ebp - 0x1b0] */
  eax = (uint32_t)(ebp + 0xfffffe50u);
/* 86c1fa: call 0x86b060 */
  esp -= 4; W32(esp, 0x86c1ffu); SPILL(); f_86b060(); if (g_unwind) return; RELOAD();
/* 86c1ff: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c202: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c204: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c206: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c20b: mov esi, eax */
  esi = eax;
/* 86c20d: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c213u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c213: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c215: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 86c218: je 0x86c234 */
  if (zf) goto L_86c234;
L_86c21a: /* 86c21a: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86c21d: movzx edx, byte ptr [edx + ecx + 0x54] */
  edx = (uint32_t)(R8((uint32_t)(edx + ecx + 0x54u)));
/* 86c222: add edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 86c225: lea edx, [edx + edx*2] */
  edx = (uint32_t)(edx + edx*2);
/* 86c228: mov edx, dword ptr [ebx + edx*4] */
  edx = R32((uint32_t)(ebx + edx*4));
/* 86c22b: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 86c22e: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 86c230: mov edx, eax */
  edx = eax;
/* 86c232: jmp 0x86c236 */
  goto L_86c236;
L_86c234: /* 86c234: xor edx, edx */
  edx = 0;
L_86c236: /* 86c236: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86c239: movzx eax, byte ptr [eax + ecx + 0x54] */
  eax = (uint32_t)(R8((uint32_t)(eax + ecx + 0x54u)));
/* 86c23e: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86c241: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 86c244: mov dword ptr [ebx + eax*4], edx */
  W32((uint32_t)(ebx + eax*4), edx);
/* 86c247: mov ecx, dword ptr [ecx + 0x1c] */
  ecx = R32((uint32_t)(ecx + 0x1cu));
/* 86c24a: mov eax, dword ptr [ebx + 0x328] */
  eax = R32((uint32_t)(ebx + 0x328u));
/* 86c250: mov edx, ecx */
  edx = ecx;
/* 86c252: sar edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 86c255: lea esi, [edx + eax] */
  esi = (uint32_t)(edx + eax);
/* 86c258: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 86c25a: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 86c25d: mov dl, 1 */
  edx = (edx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 86c25f: shl dl, cl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint8_t r = (uint8_t)((uint32_t)a << c);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
  }
/* 86c261: or al, dl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 86c263: mov byte ptr [esi], al */
  W8((uint32_t)(esi), (eax & 0xffu));
/* 86c265: jmp 0x86be5d */
  goto L_86be5d;
L_86c28c: /* 86c28c: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 86c28f: jmp 0x86bec0 */
  goto L_86bec0;
L_86c294: /* 86c294: xor edi, edi */
  edi = 0;
L_86c296: /* 86c296: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c298: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c29a: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c29f: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c2a5u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c2a5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2a7: je 0x86c2b6 */
  if (zf) goto L_86c2b6;
L_86c2a9: /* 86c2a9: mov ecx, dword ptr [ebx + 0x35c] */
  ecx = R32((uint32_t)(ebx + 0x35cu));
/* 86c2af: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 86c2b1: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86c2b4: jmp 0x86c2b8 */
  goto L_86c2b8;
L_86c2b6: /* 86c2b6: xor eax, eax */
  eax = 0;
L_86c2b8: /* 86c2b8: mov dword ptr [ebx + 0x35c], eax */
  W32((uint32_t)(ebx + 0x35cu), eax);
L_86c2be: /* 86c2be: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86c2c1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c2c2: mov ecx, edi */
  ecx = edi;
/* 86c2c4: call 0x6c7e37 */
  esp -= 4; W32(esp, 0x86c2c9u); SPILL(); f_6c7e37(); if (g_unwind) return; RELOAD();
L_86c2c9: /* 86c2c9: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 86c2cc: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 86c2cf: test eax, 0x20000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2d4: je 0x86c2de */
  if (zf) goto L_86c2de;
L_86c2d6: /* 86c2d6: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2d8: jne 0x86b64c */
  if (!zf) goto L_86b64c;
L_86c2de: /* 86c2de: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 86c2e0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2e2: je 0x86c3bb */
  if (zf) goto L_86c3bb;
L_86c2e8: /* 86c2e8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86c2ea: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0x86c2f0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86c2f0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2f2: je 0x86c3bb */
  if (zf) goto L_86c3bb;
L_86c2f8: /* 86c2f8: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 86c2fb: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2fd: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 86c300: mov edi, dword ptr [ebp + 0x1c] */
  edi = R32((uint32_t)(ebp + 0x1cu));
/* 86c303: mov dword ptr [ebp - 0x60], 1 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x1u);
/* 86c30a: mov dword ptr [ebp - 0x5c], ecx */
  W32((uint32_t)(ebp + 0xffffffa4u), ecx);
/* 86c30d: mov dword ptr [ebp - 0x54], esi */
  W32((uint32_t)(ebp + 0xffffffacu), esi);
/* 86c310: mov dword ptr [ebp - 0x4c], edi */
  W32((uint32_t)(ebp + 0xffffffb4u), edi);
/* 86c313: je 0x86c33f */
  if (zf) goto L_86c33f;
L_86c315: /* 86c315: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c317: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 86c318: push 0xcc9ad8 */
  { uint32_t v = 0xcc9ad8u; esp -= 4; W32(esp, v); }
/* 86c31d: call 0x6c3170 */
  esp -= 4; W32(esp, 0x86c322u); SPILL(); f_6c3170(); if (g_unwind) return; RELOAD();
/* 86c322: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 86c325: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c328: lea edx, [esi*4] */
  edx = (uint32_t)(esi*4);
/* 86c32f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c330: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c331: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c332: mov dword ptr [ebp - 0x58], eax */
  W32((uint32_t)(ebp + 0xffffffa8u), eax);
/* 86c335: call 0x6ca83f */
  esp -= 4; W32(esp, 0x86c33au); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 86c33a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c33d: jmp 0x86c346 */
  goto L_86c346;
L_86c33f: /* 86c33f: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
L_86c346: /* 86c346: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c348: je 0x86c374 */
  if (zf) goto L_86c374;
L_86c34a: /* 86c34a: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c34c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86c34d: push 0xcc9ad8 */
  { uint32_t v = 0xcc9ad8u; esp -= 4; W32(esp, v); }
/* 86c352: call 0x6c99e4 */
  esp -= 4; W32(esp, 0x86c357u); SPILL(); f_6c99e4(); if (g_unwind) return; RELOAD();
/* 86c357: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 86c35a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c35d: lea edx, [edi*4] */
  edx = (uint32_t)(edi*4);
/* 86c364: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c365: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c366: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c367: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 86c36a: call 0x6ca83f */
  esp -= 4; W32(esp, 0x86c36fu); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 86c36f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c372: jmp 0x86c37b */
  goto L_86c37b;
L_86c374: /* 86c374: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
L_86c37b: /* 86c37b: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c37d: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 86c37f: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c384: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c38au); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c38a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c38c: je 0x86c3ae */
  if (zf) goto L_86c3ae;
L_86c38e: /* 86c38e: mov edx, dword ptr [ebx + 0x33c] */
  edx = R32((uint32_t)(ebx + 0x33cu));
/* 86c394: mov ecx, 7 */
  ecx = 0x7u;
/* 86c399: lea esi, [ebp - 0x60] */
  esi = (uint32_t)(ebp + 0xffffffa0u);
/* 86c39c: mov edi, eax */
  edi = eax;
/* 86c39e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 86c3a0: mov dword ptr [eax + 0x1c], edx */
  W32((uint32_t)(eax + 0x1cu), edx);
/* 86c3a3: mov dword ptr [ebx + 0x33c], eax */
  W32((uint32_t)(ebx + 0x33cu), eax);
/* 86c3a9: jmp 0x86b64c */
  goto L_86b64c;
L_86c3ae: /* 86c3ae: xor eax, eax */
  eax = 0;
/* 86c3b0: mov dword ptr [ebx + 0x33c], eax */
  W32((uint32_t)(ebx + 0x33cu), eax);
/* 86c3b6: jmp 0x86b64c */
  goto L_86b64c;
L_86c3bb: /* 86c3bb: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 86c3be: mov eax, dword ptr [ebx + 0x354] */
  eax = R32((uint32_t)(ebx + 0x354u));
/* 86c3c4: cmp dword ptr [eax + edx*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + edx*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c3c8: jne 0x86c427 */
  if (!zf) goto L_86c427;
L_86c3ca: /* 86c3ca: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c3cc: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 86c3ce: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c3d3: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c3d9u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c3d9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c3db: je 0x86c3ee */
  if (zf) goto L_86c3ee;
L_86c3dd: /* 86c3dd: mov ecx, dword ptr [esi + 0x60] */
  ecx = R32((uint32_t)(esi + 0x60u));
/* 86c3e0: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 86c3e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c3e4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c3e5: mov ecx, eax */
  ecx = eax;
/* 86c3e7: call 0x6c1924 */
  esp -= 4; W32(esp, 0x86c3ecu); SPILL(); f_6c1924(); if (g_unwind) return; RELOAD();
/* 86c3ec: jmp 0x86c3f0 */
  goto L_86c3f0;
L_86c3ee: /* 86c3ee: xor eax, eax */
  eax = 0;
L_86c3f0: /* 86c3f0: mov ecx, dword ptr [esi + 0x60] */
  ecx = R32((uint32_t)(esi + 0x60u));
/* 86c3f3: mov edx, dword ptr [ebx + 0x354] */
  edx = R32((uint32_t)(ebx + 0x354u));
/* 86c3f9: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c3fb: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* 86c3fe: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c400: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c405: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c40bu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c40b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c40d: je 0x86c41f */
  if (zf) goto L_86c41f;
L_86c40f: /* 86c40f: mov ecx, dword ptr [ebx + 0x358] */
  ecx = R32((uint32_t)(ebx + 0x358u));
/* 86c415: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 86c418: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 86c41a: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86c41d: jmp 0x86c421 */
  goto L_86c421;
L_86c41f: /* 86c41f: xor eax, eax */
  eax = 0;
L_86c421: /* 86c421: mov dword ptr [ebx + 0x358], eax */
  W32((uint32_t)(ebx + 0x358u), eax);
L_86c427: /* 86c427: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 86c429: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 86c42c: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 86c42f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c430: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 86c433: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c434: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 86c437: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c438: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86c43b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c43c: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
/* 86c43f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c440: mov ecx, dword ptr [ebx + 0x354] */
  ecx = R32((uint32_t)(ebx + 0x354u));
/* 86c446: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 86c449: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c44a: call 0x6c83fa */
  esp -= 4; W32(esp, 0x86c44fu); SPILL(); f_6c83fa(); if (g_unwind) return; RELOAD();
/* 86c44f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86c452: mov esi, dword ptr [edx + 0x68] */
  esi = R32((uint32_t)(edx + 0x68u));
/* 86c455: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c458: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86c45e: /* 86c45e: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86c463: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c466: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86c46c: /* 86c46c: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 86c46f: imul esi, esi, 0xa4 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0xa4u);
  esi = (uint32_t)r;
  }
/* 86c475: add esi, dword ptr [ecx + 0xf0] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xf0u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 86c47b: xor edx, edx */
  edx = 0;
L_86c47d: /* 86c47d: cmp edx, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86c480: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 86c483: jge 0x86b64c */
  if ((sf == of)) goto L_86b64c;
L_86c489: /* 86c489: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 86c48c: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 86c48f: mov eax, dword ptr [ecx + 0x38] */
  eax = R32((uint32_t)(ecx + 0x38u));
/* 86c492: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c494: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 86c497: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c49d: /* 86c49d: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86c4a2: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c4a5: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c4ab: /* 86c4ab: xor eax, eax */
  eax = 0;
/* 86c4ad: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_86c4b0: /* 86c4b0: cmp eax, dword ptr [esi + 0x9c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x9cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86c4b6: jge 0x86c4cc */
  if ((sf == of)) goto L_86c4cc;
L_86c4b8: /* 86c4b8: mov edi, dword ptr [esi + 0x98] */
  edi = R32((uint32_t)(esi + 0x98u));
/* 86c4be: mov edi, dword ptr [edi + eax*4] */
  edi = R32((uint32_t)(edi + eax*4));
/* 86c4c1: cmp edi, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c4c3: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c4c9: /* 86c4c9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 86c4ca: jmp 0x86c4b0 */
  goto L_86c4b0;
L_86c4cc: /* 86c4cc: mov eax, 1 */
  eax = 0x1u;
/* 86c4d1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c4d3: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c4d5: /* 86c4d5: mov eax, dword ptr [esi + 0x9c] */
  eax = R32((uint32_t)(esi + 0x9cu));
/* 86c4db: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c4dd: jne 0x86c4ff */
  if (!zf) goto L_86c4ff;
L_86c4df: /* 86c4df: mov edi, dword ptr [ebx + 0xc] */
  edi = R32((uint32_t)(ebx + 0xcu));
/* 86c4e2: add edi, 0xfc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 86c4e8: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86c4ea: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86c4ec: mov ecx, edi */
  ecx = edi;
/* 86c4ee: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x86c4f4u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 86c4f4: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86c4f7: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 86c4f9: mov edx, dword ptr [edx + 0x68] */
  edx = R32((uint32_t)(edx + 0x68u));
/* 86c4fc: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
L_86c4ff: /* 86c4ff: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86c501: lea edi, [esi + 0x98] */
  edi = (uint32_t)(esi + 0x98u);
/* 86c507: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86c509: mov ecx, edi */
  ecx = edi;
/* 86c50b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x86c511u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 86c511: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 86c513: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86c516: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 86c518: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 86c51b: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 86c51e: mov edx, dword ptr [esi + 0x24] */
  edx = R32((uint32_t)(esi + 0x24u));
/* 86c521: imul eax, eax, 0x6c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x6cu);
  eax = (uint32_t)r;
  }
/* 86c524: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 86c525: mov dword ptr [esi + 0x24], edx */
  W32((uint32_t)(esi + 0x24u), edx);
/* 86c528: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 86c52b: mov edx, dword ptr [ecx + 0xe4] */
  edx = R32((uint32_t)(ecx + 0xe4u));
/* 86c531: mov ecx, dword ptr [eax + edx + 0x68] */
  ecx = R32((uint32_t)(eax + edx + 0x68u));
/* 86c535: lea eax, [eax + edx + 0x68] */
  eax = (uint32_t)(eax + edx + 0x68u);
/* 86c539: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86c53c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 86c53d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_86c53f: /* 86c53f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 86c540: jmp 0x86c47d */
  goto L_86c47d;
}

void f_86c545(void) {
  LOAD_REGS();
L_86c545: /* 86c545: mov eax, dword ptr [ebp - 0x68] */
  eax = R32((uint32_t)(ebp + 0xffffff98u));
/* 86c548: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 86c54d: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 86c550: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c551: mov dword ptr [ebp - 0x64], eax */
  W32((uint32_t)(ebp + 0xffffff9cu), eax);
/* 86c554: call 0x99caf8 */
  esp -= 4; W32(esp, 0x86c559u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_86c559(); return;
}

void f_86c559(void) {
  LOAD_REGS();
L_86c559: /* 86c559: push 0xa182dc */
  { uint32_t v = 0xa182dcu; esp -= 4; W32(esp, v); }
/* 86c55e: push 0xae5684 */
  { uint32_t v = 0xae5684u; esp -= 4; W32(esp, v); }
/* 86c563: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x86c569u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 86c569: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c56c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86c56e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86c570: call 0x99caf8 */
  esp -= 4; W32(esp, 0x86c575u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_86c575: guest_badaddr(0x86c575); return;
}

void f_86c9f0(void) {
  LOAD_REGS();
L_86c9f0: /* 86c9f0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 86c9f2: push 0x9d45d9 */
  { uint32_t v = 0x9d45d9u; esp -= 4; W32(esp, v); }
/* 86c9f7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 86c9fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c9fe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 86ca05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86ca06: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86ca07: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 86ca08: mov esi, ecx */
  esi = ecx;
/* 86ca0a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86ca0b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 86ca0f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 86ca12: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 86ca14: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 86ca1a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 86ca22: jge 0x86ca38 */
  if ((sf == of)) goto L_86ca38;
L_86ca24: /* 86ca24: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 86ca29: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 86ca2e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 86ca33: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x86ca35u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86ca35: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_86ca38: /* 86ca38: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86ca3b: jle 0x86ca51 */
  if ((zf || sf != of)) goto L_86ca51;
L_86ca3d: /* 86ca3d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 86ca42: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 86ca47: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 86ca4c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x86ca4eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86ca4e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_86ca51: /* 86ca51: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86ca53: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86ca54: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86ca56: mov ecx, esi */
  ecx = esi;
/* 86ca58: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x86ca5eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 86ca5e: mov ecx, esi */
  ecx = esi;
/* 86ca60: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 86ca68: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x86ca6eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 86ca6e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 86ca72: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 86ca73: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 86ca74: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 86ca75: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 86ca7c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86ca7f: ret  */
  esp += 4; SPILL(); return;
}

void f_86cab0(void) {
  LOAD_REGS();
L_86cab0: /* 86cab0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 86cab1: mov ebp, esp */
  ebp = esp;
/* 86cab3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 86cab5: push 0x9d4656 */
  { uint32_t v = 0x9d4656u; esp -= 4; W32(esp, v); }
/* 86caba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 86cac0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86cac1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 86cac8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86cac9: mov eax, 0x1fe4 */
  eax = 0x1fe4u;
/* 86cace: call 0x99cc00 */
  esp -= 4; W32(esp, 0x86cad3u); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 86cad3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86cad4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 86cad5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86cad6: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 86cad9: mov ebx, dword ptr [edi + 0x1bc] */
  ebx = R32((uint32_t)(edi + 0x1bcu));
/* 86cadf: mov eax, dword ptr [edi + 0x1c0] */
  eax = R32((uint32_t)(edi + 0x1c0u));
/* 86cae5: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 86cae8: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 86caef: mov dword ptr [ebp - 0x38], ebx */
  W32((uint32_t)(ebp + 0xffffffc8u), ebx);
/* 86caf2: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 86caf5: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 86caf7: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86cafc: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 86caff: call dword ptr [0xcfab44] */
  esp -= 4; W32(esp, 0x86cb05u); SPILL(); f_4e3855(); if (g_unwind) return; /* Core!?GetByteCount@FMemStack@@QAEHXZ */ RELOAD();
/* 86cb05: push 0x6c45c5 */
  { uint32_t v = 0x6c45c5u; esp -= 4; W32(esp, v); }
/* 86cb0a: push 0x6c241e */
  { uint32_t v = 0x6c241eu; esp -= 4; W32(esp, v); }
/* 86cb0f: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 86cb11: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 86cb13: lea ecx, [ebp - 0x4ac] */
  ecx = (uint32_t)(ebp + 0xfffffb54u);
/* 86cb19: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86cb1a: mov dword ptr [ebp - 0x94], eax */
  W32((uint32_t)(ebp + 0xffffff6cu), eax);
/* 86cb20: call 0x99cafe */
  esp -= 4; W32(esp, 0x86cb25u); SPILL(); f_99cafe(); if (g_unwind) return; RELOAD();
/* 86cb25: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86cb28: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 86cb2b: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 86cb2e: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 86cb32: mov dword ptr [ebp - 0x4c8], edi */
  W32((uint32_t)(ebp + 0xfffffb38u), edi);
/* 86cb38: mov dword ptr [ebp - 0x4c4], esi */
  W32((uint32_t)(ebp + 0xfffffb3cu), esi);
/* 86cb3e: mov dword ptr [ebp - 0x4c0], ebx */
  W32((uint32_t)(ebp + 0xfffffb40u), ebx);
/* 86cb44: mov dword ptr [ebp - 0x4bc], edx */
  W32((uint32_t)(ebp + 0xfffffb44u), edx);
/* 86cb4a: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x86cb50u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 86cb50: mov dword ptr [ebp - 0x4b8], eax */
  W32((uint32_t)(ebp + 0xfffffb48u), eax);
/* 86cb56: inc dword ptr [0xcd8adc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcd8adcu)));
  uint32_t r = (uint32_t)(a + 1);
  zf = (r) == 0;
  W32((uint32_t)(0xcd8adcu), r);
  }
/* 86cb5c: jne 0x86cb8f */
  if (!zf) goto L_86cb8f;
L_86cb5e: /* 86cb5e: xor edx, edx */
  edx = 0;
/* 86cb60: mov dword ptr [0xcd8adc], 1 */
  W32((uint32_t)(0xcd8adcu), 0x1u);
/* 86cb6a: xor ecx, ecx */
  ecx = 0;
/* 86cb6c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_86cb70: /* 86cb70: cmp ecx, dword ptr [ebx + 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86cb73: jge 0x86cb91 */
  if ((sf == of)) goto L_86cb91;
L_86cb75: /* 86cb75: mov eax, dword ptr [ebx + 0x2c] */
  eax = R32((uint32_t)(ebx + 0x2cu));
/* 86cb78: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 86cb7b: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86cb7d: je 0x86cb8c */
  if (zf) goto L_86cb8c;
L_86cb7f: /* 86cb7f: mov eax, dword ptr [eax + 0x60] */
  eax = R32((uint32_t)(eax + 0x60u));
/* 86cb82: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86cb84: je 0x86cb8c */
  if (zf) goto L_86cb8c;
L_86cb86: /* 86cb86: mov dword ptr [eax + 0xc0], edx */
  W32((uint32_t)(eax + 0xc0u), edx);
L_86cb8c: /* 86cb8c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 86cb8d: jmp 0x86cb70 */
  goto L_86cb70;
L_86cb8f: /* 86cb8f: xor edx, edx */
  edx = 0;
L_86cb91: /* 86cb91: cmp dword ptr [edi + 0xc], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0xcu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86cb94: jne 0x86cbb9 */
  if (!zf) goto L_86cbb9;
L_86cb96: /* 86cb96: mov dword ptr [0xcd9204], edx */
  W32((uint32_t)(0xcd9204u), edx);
/* 86cb9c: mov ecx, 0x100 */
  ecx = 0x100u;
/* 86cba1: mov edi, 0xcd90f4 */
  edi = 0xcd90f4u;
/* 86cba6: xor eax, eax */
  eax = 0;
/* 86cba8: mov ebx, ecx */
  ebx = ecx;
/* 86cbaa: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 86cbad: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 86cbb0: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 86cbb2: mov ecx, ebx */
  ecx = ebx;
/* 86cbb4: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 86cbb6: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
L_86cbb9: /* 86cbb9: push 0xcc9ad8 */
  { uint32_t v = 0xcc9ad8u; esp -= 4; W32(esp, v); }
/* 86cbbe: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 86cbc1: call dword ptr [0xcfa534] */
  esp -= 4; W32(esp, 0x86cbc7u); SPILL(); f_4e12d0(); if (g_unwind) return; /* Core!??0FMemMark@@QAE@AAVFMemStack@@@Z */ RELOAD();
/* 86cbc7: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 86cbca: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 86cbcd: test dword ptr [eax + 0x4c4], 0x800000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4c4u))); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86cbd7: je 0x86cbea */
  if (zf) goto L_86cbea;
L_86cbd9: /* 86cbd9: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 86cbdb: add eax, 0x5a0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5a0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86cbe0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86cbe1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86cbe3: mov ecx, esi */
  ecx = esi;
/* 86cbe5: call dword ptr [edx + 0x38] */
  { uint32_t t = R32((uint32_t)(edx + 0x38u)); esp -= 4; W32(esp, 0x86cbe8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86cbe8: jmp 0x86cbf7 */
  goto L_86cbf7;
L_86cbea: /* 86cbea: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 86cbec: lea ecx, [edi + 0x14] */
  ecx = (uint32_t)(edi + 0x14u);
/* 86cbef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86cbf0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86cbf2: mov ecx, esi */
  ecx = esi;
/* 86cbf4: call dword ptr [eax + 0x38] */
  { uint32_t t = R32((uint32_t)(eax + 0x38u)); esp -= 4; W32(esp, 0x86cbf7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_86cbf7: /* 86cbf7: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 86cbf9: lea eax, [edi + 0x94] */
  eax = (uint32_t)(edi + 0x94u);
/* 86cbff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86cc00: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 86cc02: mov ecx, esi */
  ecx = esi;
/* 86cc04: call dword ptr [edx + 0x38] */
  { uint32_t t = R32((uint32_t)(edx + 0x38u)); esp -= 4; W32(esp, 0x86cc07u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86cc07: fld dword ptr [edi + 0x1b8] */
  { double v = F32((uint32_t)(edi + 0x1b8u)); FPUSH(v); }
/* 86cc0d: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 86cc13: xor edi, edi */
  edi = 0;
/* 86cc15: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86cc17: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 86cc1a: jp 0x86cc23 */
  if (pf) goto L_86cc23;
L_86cc1c: /* 86cc1c: mov eax, 1 */
  eax = 0x1u;
/* 86cc21: jmp 0x86cc25 */
  goto L_86cc25;
L_86cc23: /* 86cc23: xor eax, eax */
  eax = 0;
L_86cc25: /* 86cc25: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 86cc27: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86cc28: mov ecx, esi */
  ecx = esi;
/* 86cc2a: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x86cc2du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86cc2d: mov eax, dword ptr [0xcd8ae0] */
  eax = R32((uint32_t)(0xcd8ae0u));
/* 86cc32: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86cc34: mov dword ptr [ebp - 0x48], edi */
  W32((uint32_t)(ebp + 0xffffffb8u), edi);
/* 86cc37: mov dword ptr [ebp - 0x54], edi */
  W32((uint32_t)(ebp + 0xffffffacu), edi);
/* 86cc3a: jne 0x86d060 */
  if (!zf) goto L_86d060;
L_86cc40: /* 86cc40: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86cc43: mov dword ptr [ebp - 0x4b0], edi */
  W32((uint32_t)(ebp + 0xfffffb50u), edi);
/* 86cc49: mov eax, dword ptr [eax + 0xc4] */
  eax = R32((uint32_t)(eax + 0xc4u));
/* 86cc4f: lea edi, [eax*4] */
  edi = (uint32_t)(eax*4);
/* 86cc56: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86cc58: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86cc59: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86cc5e: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86cc64u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86cc64: mov edx, eax */
  edx = eax;
/* 86cc66: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 86cc69: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 86cc6c: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86cc6f: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86cc72: xor eax, eax */
  eax = 0;
/* 86cc74: mov ebx, ecx */
  ebx = ecx;
/* 86cc76: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 86cc79: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 86cc7c: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 86cc7e: mov ecx, ebx */
  ecx = ebx;
/* 86cc80: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 86cc82: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 86cc85: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 86cc88: mov dword ptr [ebp - 0x4b4], edx */
  W32((uint32_t)(ebp + 0xfffffb4cu), edx);
/* 86cc8e: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 86cc91: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86cc93: je 0x86ccc7 */
  if (zf) goto L_86ccc7;
L_86cc95: /* 86cc95: mov edx, dword ptr [eax + 0x540] */
  edx = R32((uint32_t)(eax + 0x540u));
/* 86cc9b: cmp edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86cc9e: je 0x86ccbe */
  if (zf) goto L_86ccbe;
L_86cca0: /* 86cca0: cmp edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86cca3: je 0x86ccbe */
  if (zf) goto L_86ccbe;
L_86cca5: /* 86cca5: cmp edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86cca8: je 0x86ccbe */
  if (zf) goto L_86ccbe;
L_86ccaa: /* 86ccaa: cmp edx, 0x1e */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86ccad: je 0x86ccbe */
  if (zf) goto L_86ccbe;
L_86ccaf: /* 86ccaf: cmp edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86ccb2: jne 0x86ccc7 */
  if (!zf) goto L_86ccc7;
L_86ccb4: /* 86ccb4: mov edx, dword ptr [eax + 0x538] */
  edx = R32((uint32_t)(eax + 0x538u));
/* 86ccba: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86ccbc: je 0x86ccc7 */
  if (zf) goto L_86ccc7;
L_86ccbe: /* 86ccbe: mov dword ptr [ebp - 0x20], 1 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x1u);
/* 86ccc5: jmp 0x86ccce */
  goto L_86ccce;
L_86ccc7: /* 86ccc7: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
L_86ccce: /* 86ccce: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x86ccd4u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 86ccd4: mov esi, dword ptr [eax + 0x48] */
  esi = R32((uint32_t)(eax + 0x48u));
/* 86ccd7: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86ccdc: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 86ccde: xor edx, edx */
  edx = 0;
/* 86cce0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86cce2: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 86cce5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86cce7: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 86ccea: mov eax, 2 */
  eax = 0x2u;
/* 86ccef: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 86ccf2: jne 0x86ccfa */
  if (!zf) goto L_86ccfa;
L_86ccf4: /* 86ccf4: mov eax, dword ptr [ecx + 0x104] */
  eax = R32((uint32_t)(ecx + 0x104u));
L_86ccfa: /* 86ccfa: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 86ccfd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_86cd00: /* 86cd00: cmp eax, dword ptr [ecx + 0x30] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86cd03: jge 0x86ce74 */
  if ((sf == of)) goto L_86ce74;
L_86cd09: /* 86cd09: mov ecx, dword ptr [ecx + 0x2c] */
  ecx = R32((uint32_t)(ecx + 0x2cu));
/* 86cd0c: mov edi, dword ptr [ecx + eax*4] */
  edi = R32((uint32_t)(ecx + eax*4));
/* 86cd0f: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86cd11: je 0x86ce65 */
  if (zf) goto L_86ce65;
L_86cd17: /* 86cd17: test byte ptr [edi + 0x80], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x80u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86cd1e: je 0x86cd2f */
  if (zf) goto L_86cd2f;
L_86cd20: /* 86cd20: mov edx, dword ptr [0xcfa504] */
  edx = R32((uint32_t)(0xcfa504u));
/* 86cd26: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86cd29: je 0x86ce65 */
  if (zf) goto L_86ce65;
L_86cd2f: /* 86cd2f: mov eax, dword ptr [0xcfa198] */
  eax = R32((uint32_t)(0xcfa198u));
/* 86cd34: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86cd37: je 0x86cd3d */
  if (zf) goto L_86cd3d;
L_86cd39: /* 86cd39: prefetchnta byte ptr [edi + 0x2c] */
  guest_unsupported(0x86cd39); /* prefetchnta byte ptr [edi + 0x2c] */
L_86cd3d: /* 86cd3d: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 86cd40: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86cd42: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86cd43: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x86cd46u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86cd46: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86cd48: je 0x86cdef */
  if (zf) goto L_86cdef;
L_86cd4e: /* 86cd4e: mov ecx, edi */
  ecx = edi;
/* 86cd50: call 0x6ca2c2 */
  esp -= 4; W32(esp, 0x86cd55u); SPILL(); f_6ca2c2(); if (g_unwind) return; RELOAD();
/* 86cd55: mov esi, eax */
  esi = eax;
/* 86cd57: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 86cd5a: mov eax, dword ptr [eax + 0x1c8] */
  eax = R32((uint32_t)(eax + 0x1c8u));
/* 86cd60: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86cd62: je 0x86cdbf */
  if (zf) goto L_86cdbf;
L_86cd64: /* 86cd64: mov ecx, dword ptr [edi + 0xdc] */
  ecx = R32((uint32_t)(edi + 0xdcu));
/* 86cd6a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86cd6c: je 0x86cdbb */
  if (zf) goto L_86cdbb;
L_86cd6e: /* 86cd6e: xor ebx, ebx */
  ebx = 0;
L_86cd70: /* 86cd70: cmp ebx, dword ptr [edi + 0xdc] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0xdcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86cd76: jge 0x86cdef */
  if ((sf == of)) goto L_86cdef;
L_86cd78: /* 86cd78: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86cd7a: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86cd7c: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86cd81: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86cd87u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86cd87: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86cd89: je 0x86cda4 */
  if (zf) goto L_86cda4;
L_86cd8b: /* 86cd8b: mov ecx, dword ptr [edi + 0xd8] */
  ecx = R32((uint32_t)(edi + 0xd8u));
/* 86cd91: mov edx, dword ptr [ecx + ebx*4] */
  edx = R32((uint32_t)(ecx + ebx*4));
/* 86cd94: mov ecx, dword ptr [ebp - 0x4b4] */
  ecx = R32((uint32_t)(ebp + 0xfffffb4cu));
/* 86cd9a: mov ecx, dword ptr [ecx + edx*4] */
  ecx = R32((uint32_t)(ecx + edx*4));
/* 86cd9d: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 86cd9f: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86cda2: jmp 0x86cda6 */
  goto L_86cda6;
L_86cda4: /* 86cda4: xor eax, eax */
  eax = 0;
L_86cda6: /* 86cda6: mov edx, dword ptr [edi + 0xd8] */
  edx = R32((uint32_t)(edi + 0xd8u));
/* 86cdac: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* 86cdaf: mov edx, dword ptr [ebp - 0x4b4] */
  edx = R32((uint32_t)(ebp + 0xfffffb4cu));
/* 86cdb5: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* 86cdb8: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 86cdb9: jmp 0x86cd70 */
  goto L_86cd70;
L_86cdbb: /* 86cdbb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86cdbd: jne 0x86cdef */
  if (!zf) goto L_86cdef;
L_86cdbf: /* 86cdbf: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86cdc1: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86cdc3: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86cdc8: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86cdceu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86cdce: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86cdd0: je 0x86cde5 */
  if (zf) goto L_86cde5;
L_86cdd2: /* 86cdd2: mov ecx, dword ptr [ebp - 0x4b0] */
  ecx = R32((uint32_t)(ebp + 0xfffffb50u));
/* 86cdd8: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 86cdda: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86cddd: mov dword ptr [ebp - 0x4b0], eax */
  W32((uint32_t)(ebp + 0xfffffb50u), eax);
/* 86cde3: jmp 0x86cdef */
  goto L_86cdef;
L_86cde5: /* 86cde5: mov dword ptr [ebp - 0x4b0], 0 */
  W32((uint32_t)(ebp + 0xfffffb50u), 0x0u);
L_86cdef: /* 86cdef: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86cdf2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86cdf4: je 0x86ce65 */
  if (zf) goto L_86ce65;
L_86cdf6: /* 86cdf6: mov al, byte ptr [edi + 0x28] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x28u))) & 0xffu);
/* 86cdf9: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86cdfb: je 0x86ce65 */
  if (zf) goto L_86ce65;
L_86cdfd: /* 86cdfd: mov ecx, edi */
  ecx = edi;
/* 86cdff: call 0x6cc7bb */
  esp -= 4; W32(esp, 0x86ce04u); SPILL(); f_6cc7bb(); if (g_unwind) return; RELOAD();
/* 86ce04: mov ebx, eax */
  ebx = eax;
/* 86ce06: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 86ce09: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 86ce0c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86ce0e: jne 0x86ce39 */
  if (!zf) goto L_86ce39;
L_86ce10: /* 86ce10: mov eax, dword ptr [edi + 0x80] */
  eax = R32((uint32_t)(edi + 0x80u));
/* 86ce16: test ah, 8 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86ce19: jne 0x86ce32 */
  if (!zf) goto L_86ce32;
L_86ce1b: /* 86ce1b: mov ecx, dword ptr [ebx + 0x34] */
  ecx = R32((uint32_t)(ebx + 0x34u));
/* 86ce1e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86ce20: jne 0x86ce32 */
  if (!zf) goto L_86ce32;
L_86ce22: /* 86ce22: test al, 0x20 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86ce24: jne 0x86ce32 */
  if (!zf) goto L_86ce32;
L_86ce26: /* 86ce26: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86ce29: jne 0x86ce32 */
  if (!zf) goto L_86ce32;
L_86ce2b: /* 86ce2b: mov eax, dword ptr [ebx + 0x38] */
  eax = R32((uint32_t)(ebx + 0x38u));
/* 86ce2e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86ce30: je 0x86ce39 */
  if (zf) goto L_86ce39;
L_86ce32: /* 86ce32: mov ecx, ebx */
  ecx = ebx;
/* 86ce34: call 0x6c9214 */
  esp -= 4; W32(esp, 0x86ce39u); SPILL(); f_6c9214(); if (g_unwind) return; RELOAD();
L_86ce39: /* 86ce39: mov eax, dword ptr [ebx + 0x34] */
  eax = R32((uint32_t)(ebx + 0x34u));
/* 86ce3c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86ce3e: jne 0x86ce47 */
  if (!zf) goto L_86ce47;
L_86ce40: /* 86ce40: mov eax, dword ptr [ebx + 0x38] */
  eax = R32((uint32_t)(ebx + 0x38u));
/* 86ce43: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86ce45: je 0x86ce65 */
  if (zf) goto L_86ce65;
L_86ce47: /* 86ce47: cmp dword ptr [ebp - 0x48], 0x100 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u))); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86ce4e: jge 0x86ce65 */
  if ((sf == of)) goto L_86ce65;
L_86ce50: /* 86ce50: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86ce53: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86ce55: je 0x86ce65 */
  if (zf) goto L_86ce65;
L_86ce57: /* 86ce57: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 86ce5a: mov dword ptr [ebp + eax*4 - 0x948], ebx */
  W32((uint32_t)(ebp + eax*4 + 0xfffff6b8u), ebx);
/* 86ce61: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 86ce62: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
L_86ce65: /* 86ce65: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 86ce68: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 86ce6b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 86ce6c: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 86ce6f: jmp 0x86cd00 */
  goto L_86cd00;
L_86ce74: /* 86ce74: xor esi, esi */
  esi = 0;
/* 86ce76: jmp 0x86ce80 */
  goto L_86ce80;
L_86ce80: /* 86ce80: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 86ce83: cmp esi, dword ptr [ecx + 0x1138] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x1138u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86ce89: jge 0x86cfa4 */
  if ((sf == of)) goto L_86cfa4;
L_86ce8f: /* 86ce8f: mov eax, ecx */
  eax = ecx;
/* 86ce91: mov edx, dword ptr [eax + 0x1134] */
  edx = R32((uint32_t)(eax + 0x1134u));
/* 86ce97: mov edi, dword ptr [edx + esi*4] */
  edi = R32((uint32_t)(edx + esi*4));
/* 86ce9a: lea ebx, [eax + 0x1134] */
  ebx = (uint32_t)(eax + 0x1134u);
/* 86cea0: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 86cea3: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 86cea5: fld dword ptr [eax + 0x3ac] */
  { double v = F32((uint32_t)(eax + 0x3acu)); FPUSH(v); }
/* 86ceab: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86ceae: mov ecx, edi */
  ecx = edi;
/* 86ceb0: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 86ceb3: call 0x6ca46b */
  esp -= 4; W32(esp, 0x86ceb8u); SPILL(); f_6ca46b(); if (g_unwind) return; RELOAD();
/* 86ceb8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86ceba: jne 0x86cf5d */
  if (!zf) goto L_86cf5d;
L_86cec0: /* 86cec0: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 86cec3: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 86cec5: mov ecx, dword ptr [edx + 0x1138] */
  ecx = R32((uint32_t)(edx + 0x1138u));
/* 86cecb: mov ecx, dword ptr [eax + ecx*4 - 4] */
  ecx = R32((uint32_t)(eax + ecx*4 + 0xfffffffcu));
/* 86cecf: mov dword ptr [eax + esi*4], ecx */
  W32((uint32_t)(eax + esi*4), ecx);
/* 86ced2: mov eax, dword ptr [edx + 0x1138] */
  eax = R32((uint32_t)(edx + 0x1138u));
/* 86ced8: lea edi, [eax - 1] */
  edi = (uint32_t)(eax + 0xffffffffu);
/* 86cedb: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 86cedc: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 86cede: jge 0x86cef8 */
  if ((sf == of)) goto L_86cef8;
L_86cee0: /* 86cee0: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 86cee5: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 86ceea: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 86ceef: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x86cef5u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 86cef5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_86cef8: /* 86cef8: cmp edi, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86cefb: jle 0x86cf15 */
  if ((zf || sf != of)) goto L_86cf15;
L_86cefd: /* 86cefd: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 86cf02: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 86cf07: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 86cf0c: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x86cf12u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 86cf12: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_86cf15: /* 86cf15: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 86cf18: lea eax, [edi + 1] */
  eax = (uint32_t)(edi + 0x1u);
/* 86cf1b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86cf1d: jle 0x86cf37 */
  if ((zf || sf != of)) goto L_86cf37;
L_86cf1f: /* 86cf1f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 86cf24: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 86cf29: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 86cf2e: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x86cf34u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 86cf34: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_86cf37: /* 86cf37: mov ecx, edi */
  ecx = edi;
/* 86cf39: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_86cf40: /* 86cf40: lea eax, [edi + 1] */
  eax = (uint32_t)(edi + 0x1u);
/* 86cf43: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86cf45: jge 0x86cf4a */
  if ((sf == of)) goto L_86cf4a;
L_86cf47: /* 86cf47: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 86cf48: jmp 0x86cf40 */
  goto L_86cf40;
L_86cf4a: /* 86cf4a: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86cf4c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86cf4e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86cf4f: mov ecx, ebx */
  ecx = ebx;
/* 86cf51: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x86cf57u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 86cf57: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 86cf58: jmp 0x86ce80 */
  goto L_86ce80;
L_86cf5d: /* 86cf5d: cmp dword ptr [edi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86cf60: jne 0x86cf7a */
  if (!zf) goto L_86cf7a;
L_86cf62: /* 86cf62: push 0x622 */
  { uint32_t v = 0x622u; esp -= 4; W32(esp, v); }
/* 86cf67: push 0xae568c */
  { uint32_t v = 0xae568cu; esp -= 4; W32(esp, v); }
/* 86cf6c: push 0xae56a4 */
  { uint32_t v = 0xae56a4u; esp -= 4; W32(esp, v); }
/* 86cf71: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x86cf77u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 86cf77: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_86cf7a: /* 86cf7a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 86cf7d: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 86cf7f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86cf81: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86cf82: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x86cf85u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86cf85: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86cf87: je 0x86cf9e */
  if (zf) goto L_86cf9e;
L_86cf89: /* 86cf89: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 86cf8c: mov dword ptr [ebp + eax*4 - 0xd48], edi */
  W32((uint32_t)(ebp + eax*4 + 0xfffff2b8u), edi);
/* 86cf93: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 86cf94: cmp eax, 0x100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86cf99: mov dword ptr [ebp - 0x54], eax */
  W32((uint32_t)(ebp + 0xffffffacu), eax);
/* 86cf9c: je 0x86cfa4 */
  if (zf) goto L_86cfa4;
L_86cf9e: /* 86cf9e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 86cf9f: jmp 0x86ce80 */
  goto L_86ce80;
L_86cfa4: /* 86cfa4: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 86cfa7: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 86cfaa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86cfac: jne 0x86d027 */
  if (!zf) goto L_86d027;
L_86cfae: /* 86cfae: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86cfb1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86cfb3: je 0x86d027 */
  if (zf) goto L_86d027;
L_86cfb5: /* 86cfb5: mov esi, dword ptr [ebp - 0x28] */
  esi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86cfb8: xor ebx, ebx */
  ebx = 0;
/* 86cfba: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_86cfc0: /* 86cfc0: cmp ebx, dword ptr [esi + 0x100] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x100u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86cfc6: jge 0x86d015 */
  if ((sf == of)) goto L_86d015;
L_86cfc8: /* 86cfc8: mov edx, dword ptr [esi + 0xfc] */
  edx = R32((uint32_t)(esi + 0xfcu));
/* 86cfce: mov edi, dword ptr [edx + ebx*4] */
  edi = R32((uint32_t)(edx + ebx*4));
/* 86cfd1: mov eax, dword ptr [esi + 0xf0] */
  eax = R32((uint32_t)(esi + 0xf0u));
/* 86cfd7: imul edi, edi, 0xa4 */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0xa4u);
  edi = (uint32_t)r;
  }
/* 86cfdd: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 86cfdf: lea ecx, [edi + 0x98] */
  ecx = (uint32_t)(edi + 0x98u);
/* 86cfe5: xor eax, eax */
  eax = 0;
L_86cfe7: /* 86cfe7: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86cfea: jge 0x86cfef */
  if ((sf == of)) goto L_86cfef;
L_86cfec: /* 86cfec: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 86cfed: jmp 0x86cfe7 */
  goto L_86cfe7;
L_86cfef: /* 86cfef: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86cff1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86cff3: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x86cff9u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 86cff9: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 86cffc: mov edx, dword ptr [edi + 0x24] */
  edx = R32((uint32_t)(edi + 0x24u));
/* 86cfff: imul eax, eax, 0x6c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x6cu);
  eax = (uint32_t)r;
  }
/* 86d002: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 86d003: mov dword ptr [edi + 0x24], edx */
  W32((uint32_t)(edi + 0x24u), edx);
/* 86d006: mov ecx, dword ptr [esi + 0xe4] */
  ecx = R32((uint32_t)(esi + 0xe4u));
/* 86d00c: lea eax, [eax + ecx + 0x68] */
  eax = (uint32_t)(eax + ecx + 0x68u);
/* 86d010: inc dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax), r);
  }
/* 86d012: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 86d013: jmp 0x86cfc0 */
  goto L_86cfc0;
L_86d015: /* 86d015: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86d017: lea ecx, [esi + 0xfc] */
  ecx = (uint32_t)(esi + 0xfcu);
/* 86d01d: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86d01f: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x86d025u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 86d025: jmp 0x86d02a */
  goto L_86d02a;
L_86d027: /* 86d027: mov esi, dword ptr [ebp - 0x28] */
  esi = R32((uint32_t)(ebp + 0xffffffd8u));
L_86d02a: /* 86d02a: lea edx, [ebp - 0x4c8] */
  edx = (uint32_t)(ebp + 0xfffffb38u);
/* 86d030: lea eax, [ebp - 0x948] */
  eax = (uint32_t)(ebp + 0xfffff6b8u);
/* 86d036: mov dword ptr [0xcd8ae0], edx */
  W32((uint32_t)(0xcd8ae0u), edx);
/* 86d03c: mov edx, dword ptr [ebp - 0x48] */
  edx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 86d03f: mov dword ptr [0xcd8ae4], eax */
  W32((uint32_t)(0xcd8ae4u), eax);
/* 86d044: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 86d047: lea ecx, [ebp - 0xd48] */
  ecx = (uint32_t)(ebp + 0xfffff2b8u);
/* 86d04d: mov dword ptr [0xcd8ae8], ecx */
  W32((uint32_t)(0xcd8ae8u), ecx);
/* 86d053: mov dword ptr [0xcd8ad4], edx */
  W32((uint32_t)(0xcd8ad4u), edx);
/* 86d059: mov dword ptr [0xcd8ad0], eax */
  W32((uint32_t)(0xcd8ad0u), eax);
/* 86d05e: jmp 0x86d0cc */
  goto L_86d0cc;
L_86d060: /* 86d060: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 86d063: mov dword ptr [ebp - 0x4b4], ecx */
  W32((uint32_t)(ebp + 0xfffffb4cu), ecx);
/* 86d069: mov edx, dword ptr [eax + 0x18] */
  edx = R32((uint32_t)(eax + 0x18u));
/* 86d06c: mov eax, dword ptr [0xcd8ad4] */
  eax = R32((uint32_t)(0xcd8ad4u));
/* 86d071: lea ecx, [eax*4] */
  ecx = (uint32_t)(eax*4);
/* 86d078: mov dword ptr [ebp - 0x4b0], edx */
  W32((uint32_t)(ebp + 0xfffffb50u), edx);
/* 86d07e: mov edx, dword ptr [0xcd8ae4] */
  edx = R32((uint32_t)(0xcd8ae4u));
/* 86d084: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86d085: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86d086: lea eax, [ebp - 0x948] */
  eax = (uint32_t)(ebp + 0xfffff6b8u);
/* 86d08c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86d08d: call 0x6ca83f */
  esp -= 4; W32(esp, 0x86d092u); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 86d092: mov ecx, dword ptr [0xcd8ad0] */
  ecx = R32((uint32_t)(0xcd8ad0u));
/* 86d098: mov eax, dword ptr [0xcd8ae8] */
  eax = R32((uint32_t)(0xcd8ae8u));
/* 86d09d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86d0a0: lea edx, [ecx*4] */
  edx = (uint32_t)(ecx*4);
/* 86d0a7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86d0a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86d0a9: lea ecx, [ebp - 0xd48] */
  ecx = (uint32_t)(ebp + 0xfffff2b8u);
/* 86d0af: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86d0b0: call 0x6ca83f */
  esp -= 4; W32(esp, 0x86d0b5u); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 86d0b5: mov edx, dword ptr [0xcd8ad4] */
  edx = R32((uint32_t)(0xcd8ad4u));
/* 86d0bb: mov eax, dword ptr [0xcd8ad0] */
  eax = R32((uint32_t)(0xcd8ad0u));
/* 86d0c0: mov esi, dword ptr [ebp - 0x28] */
  esi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86d0c3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86d0c6: mov dword ptr [ebp - 0x48], edx */
  W32((uint32_t)(ebp + 0xffffffb8u), edx);
/* 86d0c9: mov dword ptr [ebp - 0x54], eax */
  W32((uint32_t)(ebp + 0xffffffacu), eax);
L_86d0cc: /* 86d0cc: mov esi, dword ptr [esi + 0xc4] */
  esi = R32((uint32_t)(esi + 0xc4u));
/* 86d0d2: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86d0d4: lea edi, [esi*4] */
  edi = (uint32_t)(esi*4);
/* 86d0db: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86d0dc: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86d0e1: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86d0e7u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86d0e7: mov edx, eax */
  edx = eax;
/* 86d0e9: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 86d0ec: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 86d0ef: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86d0f2: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86d0f5: xor eax, eax */
  eax = 0;
/* 86d0f7: mov ebx, ecx */
  ebx = ecx;
/* 86d0f9: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 86d0fc: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 86d0ff: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 86d101: mov ecx, ebx */
  ecx = ebx;
/* 86d103: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 86d105: mov esi, dword ptr [ebp - 0x28] */
  esi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86d108: mov dword ptr [ebp - 0x198], edx */
  W32((uint32_t)(ebp + 0xfffffe68u), edx);
/* 86d10e: mov eax, dword ptr [esi + 0xc4] */
  eax = R32((uint32_t)(esi + 0xc4u));
/* 86d114: lea edi, [eax*4] */
  edi = (uint32_t)(eax*4);
/* 86d11b: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86d11d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86d11e: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86d123: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86d129u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86d129: mov edx, eax */
  edx = eax;
/* 86d12b: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 86d12e: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 86d131: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86d134: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86d137: xor eax, eax */
  eax = 0;
/* 86d139: mov ebx, ecx */
  ebx = ecx;
/* 86d13b: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 86d13e: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 86d141: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 86d143: mov ecx, ebx */
  ecx = ebx;
/* 86d145: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 86d147: mov dword ptr [ebp - 0x194], edx */
  W32((uint32_t)(ebp + 0xfffffe6cu), edx);
/* 86d14d: mov eax, dword ptr [esi + 0x9c] */
  eax = R32((uint32_t)(esi + 0x9cu));
/* 86d153: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86d156: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 86d157: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 86d15a: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86d15c: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 86d15f: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86d161: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86d162: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86d167: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 86d16a: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86d170u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86d170: mov edx, eax */
  edx = eax;
/* 86d172: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 86d175: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86d178: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86d17b: xor eax, eax */
  eax = 0;
/* 86d17d: mov ebx, ecx */
  ebx = ecx;
/* 86d17f: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 86d182: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 86d185: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 86d187: mov ecx, ebx */
  ecx = ebx;
/* 86d189: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 86d18b: mov esi, dword ptr [ebp - 0x38] */
  esi = R32((uint32_t)(ebp + 0xffffffc8u));
/* 86d18e: xor eax, eax */
  eax = 0;
/* 86d190: mov dword ptr [ebp - 0x1a0], edx */
  W32((uint32_t)(ebp + 0xfffffe60u), edx);
/* 86d196: mov dword ptr [ebp - 0x190], eax */
  W32((uint32_t)(ebp + 0xfffffe70u), eax);
/* 86d19c: mov dword ptr [ebp - 0x18c], eax */
  W32((uint32_t)(ebp + 0xfffffe74u), eax);
/* 86d1a2: mov dword ptr [ebp - 0x188], esi */
  W32((uint32_t)(ebp + 0xfffffe78u), esi);
/* 86d1a8: mov eax, dword ptr [esi + 0x1114] */
  eax = R32((uint32_t)(esi + 0x1114u));
/* 86d1ae: lea ecx, [eax*4] */
  ecx = (uint32_t)(eax*4);
/* 86d1b5: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86d1b7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86d1b8: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86d1bd: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86d1c3u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86d1c3: mov dword ptr [ebp - 0x184], eax */
  W32((uint32_t)(ebp + 0xfffffe7cu), eax);
/* 86d1c9: mov eax, dword ptr [esi + 0x1114] */
  eax = R32((uint32_t)(esi + 0x1114u));
/* 86d1cf: lea edi, [eax*4] */
  edi = (uint32_t)(eax*4);
/* 86d1d6: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86d1d8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86d1d9: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86d1de: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86d1e4u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86d1e4: mov edx, eax */
  edx = eax;
/* 86d1e6: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 86d1e9: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 86d1ec: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86d1ef: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86d1f2: xor eax, eax */
  eax = 0;
/* 86d1f4: mov ebx, ecx */
  ebx = ecx;
/* 86d1f6: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 86d1f9: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 86d1fc: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 86d1fe: mov ecx, ebx */
  ecx = ebx;
/* 86d200: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 86d202: mov dword ptr [ebp - 0x180], edx */
  W32((uint32_t)(ebp + 0xfffffe80u), edx);
/* 86d208: mov esi, dword ptr [esi + 0x1114] */
  esi = R32((uint32_t)(esi + 0x1114u));
/* 86d20e: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86d210: lea edx, [esi*4] */
  edx = (uint32_t)(esi*4);
/* 86d217: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86d218: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86d21d: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86d223u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86d223: mov ecx, dword ptr [0xcd8ad8] */
  ecx = R32((uint32_t)(0xcd8ad8u));
/* 86d229: mov esi, dword ptr [ebp - 0x28] */
  esi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86d22c: mov dword ptr [ebp - 0x17c], eax */
  W32((uint32_t)(ebp + 0xfffffe84u), eax);
/* 86d232: xor eax, eax */
  eax = 0;
/* 86d234: mov dword ptr [ebp - 0x178], eax */
  W32((uint32_t)(ebp + 0xfffffe88u), eax);
/* 86d23a: mov dword ptr [0xcd8ad8], eax */
  W32((uint32_t)(0xcd8ad8u), eax);
/* 86d23f: mov eax, dword ptr [esi + 0xdc] */
  eax = R32((uint32_t)(esi + 0xdcu));
/* 86d245: lea edi, [eax*4] */
  edi = (uint32_t)(eax*4);
/* 86d24c: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86d24e: mov dword ptr [ebp - 0x64], ecx */
  W32((uint32_t)(ebp + 0xffffff9cu), ecx);
/* 86d251: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86d252: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86d257: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86d25du); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86d25d: mov edx, eax */
  edx = eax;
/* 86d25f: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 86d262: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 86d265: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86d268: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86d26b: xor eax, eax */
  eax = 0;
/* 86d26d: mov ebx, ecx */
  ebx = ecx;
/* 86d26f: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 86d272: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 86d275: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 86d277: mov ecx, ebx */
  ecx = ebx;
/* 86d279: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 86d27b: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 86d27e: xor ebx, ebx */
  ebx = 0;
/* 86d280: mov dword ptr [ebp - 0x174], edx */
  W32((uint32_t)(ebp + 0xfffffe8cu), edx);
/* 86d286: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 86d289: mov dword ptr [ebp - 0x170], ebx */
  W32((uint32_t)(ebp + 0xfffffe90u), ebx);
/* 86d28f: mov dword ptr [ebp - 0x16c], ebx */
  W32((uint32_t)(ebp + 0xfffffe94u), ebx);
/* 86d295: mov dword ptr [ebp - 0x168], ebx */
  W32((uint32_t)(ebp + 0xfffffe98u), ebx);
/* 86d29b: mov dword ptr [ebp - 0x19c], ebx */
  W32((uint32_t)(ebp + 0xfffffe64u), ebx);
/* 86d2a1: cmp dword ptr [edx + 0x154], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x154u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86d2a7: je 0x86d38b */
  if (zf) goto L_86d38b;
L_86d2ad: /* 86d2ad: mov dword ptr [ebp - 0x1ac], ebx */
  W32((uint32_t)(ebp + 0xfffffe54u), ebx);
/* 86d2b3: mov edi, 1 */
  edi = 0x1u;
L_86d2b8: /* 86d2b8: cmp edi, dword ptr [esi + 0x118] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x118u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86d2be: jge 0x86d2f0 */
  if ((sf == of)) goto L_86d2f0;
L_86d2c0: /* 86d2c0: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86d2c2: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86d2c4: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86d2c9: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86d2cfu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86d2cf: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86d2d1: je 0x86d2e7 */
  if (zf) goto L_86d2e7;
L_86d2d3: /* 86d2d3: mov ecx, dword ptr [ebp - 0x1ac] */
  ecx = R32((uint32_t)(ebp + 0xfffffe54u));
/* 86d2d9: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 86d2db: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86d2de: mov dword ptr [ebp - 0x1ac], eax */
  W32((uint32_t)(ebp + 0xfffffe54u), eax);
/* 86d2e4: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 86d2e5: jmp 0x86d2b8 */
  goto L_86d2b8;
L_86d2e7: /* 86d2e7: mov dword ptr [ebp - 0x1ac], ebx */
  W32((uint32_t)(ebp + 0xfffffe54u), ebx);
/* 86d2ed: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 86d2ee: jmp 0x86d2b8 */
  goto L_86d2b8;
L_86d2f0: /* 86d2f0: mov ecx, dword ptr [esi + 0x118] */
  ecx = R32((uint32_t)(esi + 0x118u));
/* 86d2f6: mov eax, 1 */
  eax = 0x1u;
/* 86d2fb: xor edx, edx */
  edx = 0;
/* 86d2fd: call 0x99cc70 */
  esp -= 4; W32(esp, 0x86d302u); SPILL(); f_99cc70(); if (g_unwind) return; RELOAD();
/* 86d302: add eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 86d305: adc edx, -1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 86d308: mov dword ptr [ebp - 0x1a8], eax */
  W32((uint32_t)(ebp + 0xfffffe58u), eax);
/* 86d30e: mov dword ptr [ebp - 0x1a4], edx */
  W32((uint32_t)(ebp + 0xfffffe5cu), edx);
L_86d314: /* 86d314: cmp ebx, dword ptr [esi + 0x118] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x118u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86d31a: jge 0x86d430 */
  if ((sf == of)) goto L_86d430;
L_86d320: /* 86d320: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86d322: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86d324: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86d329: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86d32fu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86d32f: mov edi, eax */
  edi = eax;
/* 86d331: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86d333: je 0x86d37c */
  if (zf) goto L_86d37c;
L_86d335: /* 86d335: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86d337: push 0x204 */
  { uint32_t v = 0x204u; esp -= 4; W32(esp, v); }
/* 86d33c: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86d341: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86d347u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86d347: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86d349: je 0x86d368 */
  if (zf) goto L_86d368;
L_86d34b: /* 86d34b: mov ecx, eax */
  ecx = eax;
/* 86d34d: call 0x6cc784 */
  esp -= 4; W32(esp, 0x86d352u); SPILL(); f_6cc784(); if (g_unwind) return; RELOAD();
/* 86d352: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 86d354: lea eax, [ebx + ebx*2] */
  eax = (uint32_t)(ebx + ebx*2);
/* 86d357: mov dword ptr [edi + 4], 0 */
  W32((uint32_t)(edi + 0x4u), 0x0u);
/* 86d35e: mov dword ptr [ebp + eax*4 - 0x4a8], edi */
  W32((uint32_t)(ebp + eax*4 + 0xfffffb58u), edi);
/* 86d365: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 86d366: jmp 0x86d314 */
  goto L_86d314;
L_86d368: /* 86d368: xor eax, eax */
  eax = 0;
/* 86d36a: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 86d36c: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* 86d36f: lea eax, [ebx + ebx*2] */
  eax = (uint32_t)(ebx + ebx*2);
/* 86d372: mov dword ptr [ebp + eax*4 - 0x4a8], edi */
  W32((uint32_t)(ebp + eax*4 + 0xfffffb58u), edi);
/* 86d379: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 86d37a: jmp 0x86d314 */
  goto L_86d314;
L_86d37c: /* 86d37c: xor edi, edi */
  edi = 0;
/* 86d37e: lea eax, [ebx + ebx*2] */
  eax = (uint32_t)(ebx + ebx*2);
/* 86d381: mov dword ptr [ebp + eax*4 - 0x4a8], edi */
  W32((uint32_t)(ebp + eax*4 + 0xfffffb58u), edi);
/* 86d388: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 86d389: jmp 0x86d314 */
  goto L_86d314;
L_86d38b: /* 86d38b: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86d38d: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86d38f: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86d394: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86d39au); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86d39a: mov esi, eax */
  esi = eax;
/* 86d39c: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86d39e: je 0x86d3d2 */
  if (zf) goto L_86d3d2;
L_86d3a0: /* 86d3a0: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86d3a2: push 0x204 */
  { uint32_t v = 0x204u; esp -= 4; W32(esp, v); }
/* 86d3a7: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86d3ac: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86d3b2u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86d3b2: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86d3b4: je 0x86d3c7 */
  if (zf) goto L_86d3c7;
L_86d3b6: /* 86d3b6: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 86d3b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86d3b9: mov ecx, edi */
  ecx = edi;
/* 86d3bb: call dword ptr [edx + 0x24] */
  { uint32_t t = R32((uint32_t)(edx + 0x24u)); esp -= 4; W32(esp, 0x86d3beu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86d3be: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 86d3c0: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 86d3c3: mov ecx, esi */
  ecx = esi;
/* 86d3c5: jmp 0x86d3d4 */
  goto L_86d3d4;
L_86d3c7: /* 86d3c7: xor eax, eax */
  eax = 0;
/* 86d3c9: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 86d3cb: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 86d3ce: mov ecx, esi */
  ecx = esi;
/* 86d3d0: jmp 0x86d3d4 */
  goto L_86d3d4;
L_86d3d2: /* 86d3d2: xor ecx, ecx */
  ecx = 0;
L_86d3d4: /* 86d3d4: mov eax, dword ptr [edi + 0x1c8] */
  eax = R32((uint32_t)(edi + 0x1c8u));
/* 86d3da: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 86d3dd: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86d3df: mov dword ptr [ebp + eax*4 - 0x4a8], ecx */
  W32((uint32_t)(ebp + eax*4 + 0xfffffb58u), ecx);
/* 86d3e6: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86d3e8: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86d3ed: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86d3f3u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86d3f3: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86d3f5: je 0x86d40a */
  if (zf) goto L_86d40a;
L_86d3f7: /* 86d3f7: mov ecx, dword ptr [edi + 0x1c8] */
  ecx = R32((uint32_t)(edi + 0x1c8u));
/* 86d3fd: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 86d3ff: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 86d402: mov dword ptr [ebp - 0x1ac], eax */
  W32((uint32_t)(ebp + 0xfffffe54u), eax);
/* 86d408: jmp 0x86d410 */
  goto L_86d410;
L_86d40a: /* 86d40a: mov dword ptr [ebp - 0x1ac], ebx */
  W32((uint32_t)(ebp + 0xfffffe54u), ebx);
L_86d410: /* 86d410: mov ecx, dword ptr [edi + 0x1c8] */
  ecx = R32((uint32_t)(edi + 0x1c8u));
/* 86d416: mov eax, 1 */
  eax = 0x1u;
/* 86d41b: xor edx, edx */
  edx = 0;
/* 86d41d: call 0x99cc70 */
  esp -= 4; W32(esp, 0x86d422u); SPILL(); f_99cc70(); if (g_unwind) return; RELOAD();
/* 86d422: mov dword ptr [ebp - 0x1a8], eax */
  W32((uint32_t)(ebp + 0xfffffe58u), eax);
/* 86d428: mov dword ptr [ebp - 0x1a4], edx */
  W32((uint32_t)(ebp + 0xfffffe5cu), edx);
/* 86d42e: jmp 0x86d432 */
  goto L_86d432;
L_86d430: /* 86d430: xor ebx, ebx */
  ebx = 0;
L_86d432: /* 86d432: mov edx, dword ptr [0xcfa504] */
  edx = R32((uint32_t)(0xcfa504u));
/* 86d438: cmp dword ptr [edx], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86d43a: jne 0x86d49e */
  if (!zf) goto L_86d49e;
L_86d43c: /* 86d43c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 86d43f: mov ecx, dword ptr [eax + 0x1c8] */
  ecx = R32((uint32_t)(eax + 0x1c8u));
/* 86d445: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86d446: lea esi, [ebp - 0x4c8] */
  esi = (uint32_t)(ebp + 0xfffffb38u);
/* 86d44c: call 0x868660 */
  esp -= 4; W32(esp, 0x86d451u); SPILL(); f_868660(); if (g_unwind) return; RELOAD();
/* 86d451: mov edx, dword ptr [0xcfa504] */
  edx = R32((uint32_t)(0xcfa504u));
/* 86d457: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 86d459: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86d45c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86d45e: jne 0x86d49c */
  if (!zf) goto L_86d49c;
L_86d460: /* 86d460: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 86d463: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 86d466: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86d468: jne 0x86d49c */
  if (!zf) goto L_86d49c;
L_86d46a: /* 86d46a: mov ecx, eax */
  ecx = eax;
/* 86d46c: mov eax, dword ptr [ecx + 0x1c8] */
  eax = R32((uint32_t)(ecx + 0x1c8u));
/* 86d472: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86d474: jne 0x86d49c */
  if (!zf) goto L_86d49c;
L_86d476: /* 86d476: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 86d479: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86d47b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86d47d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86d47f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86d481: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86d483: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 86d487: mov byte ptr [ebp - 0x13], 0 */
  W8((uint32_t)(ebp + 0xffffffedu), 0x0u);
/* 86d48b: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 86d48f: mov byte ptr [ebp - 0x11], 0 */
  W8((uint32_t)(ebp + 0xffffffefu), 0x0u);
/* 86d493: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 86d496: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86d497: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86d499: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x86d49cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_86d49c: /* 86d49c: xor ebx, ebx */
  ebx = 0;
L_86d49e: /* 86d49e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 86d4a1: mov eax, dword ptr [edi + 0x1c8] */
  eax = R32((uint32_t)(edi + 0x1c8u));
/* 86d4a7: mov ecx, dword ptr [edi + 0x1bc] */
  ecx = R32((uint32_t)(edi + 0x1bcu));
/* 86d4ad: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 86d4b0: mov eax, dword ptr [ecx + 0x8c] */
  eax = R32((uint32_t)(ecx + 0x8cu));
/* 86d4b6: mov eax, dword ptr [eax + edx*8 + 0x11c] */
  eax = R32((uint32_t)(eax + edx*8 + 0x11cu));
/* 86d4bd: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86d4bf: jne 0x86d4c6 */
  if (!zf) goto L_86d4c6;
L_86d4c1: /* 86d4c1: mov ecx, dword ptr [ecx + 0x2c] */
  ecx = R32((uint32_t)(ecx + 0x2cu));
/* 86d4c4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
L_86d4c6: /* 86d4c6: mov edx, dword ptr [0xcfa504] */
  edx = R32((uint32_t)(0xcfa504u));
/* 86d4cc: cmp dword ptr [edx], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86d4ce: jne 0x86d4fa */
  if (!zf) goto L_86d4fa;
L_86d4d0: /* 86d4d0: cmp dword ptr [edi + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86d4d3: jne 0x86d4fa */
  if (!zf) goto L_86d4fa;
L_86d4d5: /* 86d4d5: mov ecx, dword ptr [eax + 0x358] */
  ecx = R32((uint32_t)(eax + 0x358u));
/* 86d4db: test cl, 8 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86d4de: je 0x86d4fa */
  if (zf) goto L_86d4fa;
L_86d4e0: /* 86d4e0: test cl, 4 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86d4e3: je 0x86d4fa */
  if (zf) goto L_86d4fa;
L_86d4e5: /* 86d4e5: mov eax, dword ptr [eax + 0x378] */
  eax = R32((uint32_t)(eax + 0x378u));
/* 86d4eb: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 86d4ee: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86d4f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86d4f1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86d4f2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86d4f3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86d4f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86d4f5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86d4f7: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x86d4fau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_86d4fa: /* 86d4fa: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 86d500: mov edx, dword ptr [0xce8380] */
  edx = R32((uint32_t)(0xce8380u));
/* 86d506: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 86d509: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 86d50b: mov esi, dword ptr [ebp - 0x24] */
  esi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86d50e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86d510: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 86d512: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 86d514: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 86d516: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 86d518: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 86d51b: mov dword ptr [ebp - 0x58], eax */
  W32((uint32_t)(ebp + 0xffffffa8u), eax);
/* 86d51e: xor esi, esi */
  esi = 0;
/* 86d520: call 0x6c84a9 */
  esp -= 4; W32(esp, 0x86d525u); SPILL(); f_6c84a9(); if (g_unwind) return; RELOAD();
/* 86d525: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86d527: je 0x86d537 */
  if (zf) goto L_86d537;
L_86d529: /* 86d529: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86d52e: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86d531: jne 0x86d5bc */
  if (!zf) goto L_86d5bc;
L_86d537: /* 86d537: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86d53a: mov eax, dword ptr [ecx + 0x5c] */
  eax = R32((uint32_t)(ecx + 0x5cu));
/* 86d53d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86d53f: je 0x86d5bc */
  if (zf) goto L_86d5bc;
L_86d541: /* 86d541: mov ebx, dword ptr [ebp - 0x54] */
  ebx = R32((uint32_t)(ebp + 0xffffffacu));
/* 86d544: mov edi, dword ptr [ebp - 0x48] */
  edi = R32((uint32_t)(ebp + 0xffffffb8u));
/* 86d547: lea edx, [ebx + edi] */
  edx = (uint32_t)(ebx + edi);
/* 86d54a: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86d54c: lea eax, [edx*4 + 0x2c] */
  eax = (uint32_t)(edx*4 + 0x2cu);
/* 86d553: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86d554: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86d559: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86d55fu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86d55f: mov esi, eax */
  esi = eax;
/* 86d561: lea eax, [esi + 0x2c] */
  eax = (uint32_t)(esi + 0x2cu);
/* 86d564: lea ecx, [edi*4] */
  ecx = (uint32_t)(edi*4);
/* 86d56b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86d56c: lea edx, [eax + ecx] */
  edx = (uint32_t)(eax + ecx);
/* 86d56f: lea ecx, [ebp - 0x948] */
  ecx = (uint32_t)(ebp + 0xfffff6b8u);
/* 86d575: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86d576: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86d577: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 86d57a: mov dword ptr [esi + 0x24], edi */
  W32((uint32_t)(esi + 0x24u), edi);
/* 86d57d: mov dword ptr [esi + 0x1c], edx */
  W32((uint32_t)(esi + 0x1cu), edx);
/* 86d580: mov dword ptr [esi + 0x28], ebx */
  W32((uint32_t)(esi + 0x28u), ebx);
/* 86d583: call 0x6ca83f */
  esp -= 4; W32(esp, 0x86d588u); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 86d588: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 86d58b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86d58e: lea edx, [ebx*4] */
  edx = (uint32_t)(ebx*4);
/* 86d595: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86d596: lea eax, [ebp - 0xd48] */
  eax = (uint32_t)(ebp + 0xfffff2b8u);
/* 86d59c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86d59d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86d59e: call 0x6ca83f */
  esp -= 4; W32(esp, 0x86d5a3u); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 86d5a3: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86d5a6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86d5a9: xor eax, eax */
  eax = 0;
/* 86d5ab: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 86d5ae: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 86d5b1: mov ecx, dword ptr [edx + 0x108] */
  ecx = R32((uint32_t)(edx + 0x108u));
/* 86d5b7: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 86d5ba: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_86d5bc: /* 86d5bc: mov edx, dword ptr [ebp - 0x4b0] */
  edx = R32((uint32_t)(ebp + 0xfffffb50u));
L_86d5c2: /* 86d5c2: mov eax, edx */
  eax = edx;
/* 86d5c4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86d5c6: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 86d5c9: je 0x86d6b0 */
  if (zf) goto L_86d6b0;
L_86d5cf: /* 86d5cf: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 86d5d1: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 86d5d3: cmp byte ptr [eax + 0x51], 0xb */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x51u))); uint8_t b = (uint8_t)(0xbu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 86d5d7: jne 0x86d69e */
  if (!zf) goto L_86d69e;
L_86d5dd: /* 86d5dd: mov ecx, dword ptr [eax + 0x2b4] */
  ecx = R32((uint32_t)(eax + 0x2b4u));
/* 86d5e3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86d5e5: je 0x86d69e */
  if (zf) goto L_86d69e;
L_86d5eb: /* 86d5eb: mov eax, dword ptr [ebp - 0x4c8] */
  eax = R32((uint32_t)(ebp + 0xfffffb38u));
/* 86d5f1: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 86d5f4: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 86d5f7: mov eax, dword ptr [edx + 0x534] */
  eax = R32((uint32_t)(edx + 0x534u));
/* 86d5fd: test ah, 8 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86d600: je 0x86d69e */
  if (zf) goto L_86d69e;
L_86d606: /* 86d606: mov edx, dword ptr [ebp - 0x4ac] */
  edx = R32((uint32_t)(ebp + 0xfffffb54u));
/* 86d60c: lea eax, [edi + 0x8c] */
  eax = (uint32_t)(edi + 0x8cu);
/* 86d612: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86d613: lea ecx, [ebp - 0x4ac] */
  ecx = (uint32_t)(ebp + 0xfffffb54u);
/* 86d619: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x86d61cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86d61c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86d61e: je 0x86d69e */
  if (zf) goto L_86d69e;
L_86d620: /* 86d620: mov eax, dword ptr [ebp - 0x4c8] */
  eax = R32((uint32_t)(ebp + 0xfffffb38u));
/* 86d626: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 86d629: lea ebx, [eax + 0x194] */
  ebx = (uint32_t)(eax + 0x194u);
/* 86d62f: mov eax, edi */
  eax = edi;
/* 86d631: call 0x867e00 */
  esp -= 4; W32(esp, 0x86d636u); SPILL(); f_867e00(); if (g_unwind) return; RELOAD();
/* 86d636: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86d638: je 0x86d69e */
  if (zf) goto L_86d69e;
L_86d63a: /* 86d63a: mov eax, dword ptr [ebp - 0x4c8] */
  eax = R32((uint32_t)(ebp + 0xfffffb38u));
/* 86d640: add eax, 0x194 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x194u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86d645: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 86d647: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86d648: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86d64b: mov ecx, esp */
  ecx = esp;
/* 86d64d: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 86d64f: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 86d652: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 86d655: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 86d658: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 86d65b: call 0x6c8440 */
  esp -= 4; W32(esp, 0x86d660u); SPILL(); f_6c8440(); if (g_unwind) return; RELOAD();
/* 86d660: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86d663: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86d665: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86d667: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86d66c: mov edi, eax */
  edi = eax;
/* 86d66e: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86d674u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86d674: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86d676: je 0x86d694 */
  if (zf) goto L_86d694;
L_86d678: /* 86d678: mov ecx, dword ptr [ebp - 0x4a4] */
  ecx = R32((uint32_t)(ebp + 0xfffffb5cu));
/* 86d67e: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86d681: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 86d684: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 86d686: mov dword ptr [ebp - 0x4a4], eax */
  W32((uint32_t)(ebp + 0xfffffb5cu), eax);
/* 86d68c: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 86d68f: jmp 0x86d5c2 */
  goto L_86d5c2;
L_86d694: /* 86d694: mov dword ptr [ebp - 0x4a4], 0 */
  W32((uint32_t)(ebp + 0xfffffb5cu), 0x0u);
L_86d69e: /* 86d69e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 86d6a1: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 86d6a4: jmp 0x86d5c2 */
  goto L_86d5c2;
L_86d6a9: /* 86d6a9: inc dword ptr [eax + ecx*4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + ecx*4)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + ecx*4), r);
  }
L_86d6ac: /* 86d6ac: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 86d6ae: mov edi, edi */
  edi = edi;
L_86d6b0: /* 86d6b0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86d6b2: je 0x86dd42 */
  if (zf) goto L_86dd42;
L_86d6b8: /* 86d6b8: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 86d6bb: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86d6be: mov edx, dword ptr [ecx + 0x58] */
  edx = R32((uint32_t)(ecx + 0x58u));
/* 86d6c1: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 86d6c4: mov edi, eax */
  edi = eax;
/* 86d6c6: imul edi, edi, 0x78 */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x78u);
  edi = (uint32_t)r;
  }
/* 86d6c9: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 86d6cb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86d6cd: jne 0x86dc27 */
  if (!zf) goto L_86dc27;
L_86d6d3: /* 86d6d3: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 86d6d8: mov ecx, dword ptr [0xce8384] */
  ecx = R32((uint32_t)(0xce8384u));
/* 86d6de: inc dword ptr [eax + ecx*4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + ecx*4)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + ecx*4), r);
  }
/* 86d6e1: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86d6e4: mov eax, dword ptr [edx + 0x1c8] */
  eax = R32((uint32_t)(edx + 0x1c8u));
/* 86d6ea: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86d6ec: je 0x86d715 */
  if (zf) goto L_86d715;
L_86d6ee: /* 86d6ee: mov ecx, dword ptr [ebp - 0x1a8] */
  ecx = R32((uint32_t)(ebp + 0xfffffe58u));
/* 86d6f4: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 86d6f7: mov ebx, dword ptr [ebp - 0x1a4] */
  ebx = R32((uint32_t)(ebp + 0xfffffe5cu));
/* 86d6fd: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 86d6ff: mov ecx, dword ptr [edi + 0x14] */
  ecx = R32((uint32_t)(edi + 0x14u));
/* 86d702: and ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 86d704: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  eax = r;
  }
/* 86d706: jne 0x86d715 */
  if (!zf) goto L_86d715;
L_86d708: /* 86d708: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 86d70d: mov ecx, dword ptr [0xce8388] */
  ecx = R32((uint32_t)(0xce8388u));
/* 86d713: jmp 0x86d6a9 */
  goto L_86d6a9;
L_86d715: /* 86d715: mov eax, dword ptr [edi + 0x50] */
  eax = R32((uint32_t)(edi + 0x50u));
/* 86d718: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86d71b: je 0x86d7d3 */
  if (zf) goto L_86d7d3;
L_86d721: /* 86d721: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86d724: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 86d727: mov edx, dword ptr [ecx + 0xa8] */
  edx = R32((uint32_t)(ecx + 0xa8u));
/* 86d72d: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 86d733: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86d735: mov edx, dword ptr [0xce838c] */
  edx = R32((uint32_t)(0xce838cu));
/* 86d73b: inc dword ptr [ecx + edx*4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + edx*4)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ecx + edx*4), r);
  }
/* 86d73e: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86d741: mov ecx, dword ptr [edx + 0x1c8] */
  ecx = R32((uint32_t)(edx + 0x1c8u));
/* 86d747: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86d749: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 86d74c: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 86d753: je 0x86d7aa */
  if (zf) goto L_86d7aa;
L_86d755: /* 86d755: mov eax, dword ptr [ebp - 0x1ac] */
  eax = R32((uint32_t)(ebp + 0xfffffe54u));
/* 86d75b: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 86d75e: mov edi, edi */
  edi = edi;
L_86d760: /* 86d760: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 86d763: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86d765: je 0x86d7bc */
  if (zf) goto L_86d7bc;
L_86d767: /* 86d767: mov ecx, eax */
  ecx = eax;
/* 86d769: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 86d76b: mov eax, 1 */
  eax = 0x1u;
/* 86d770: xor edx, edx */
  edx = 0;
/* 86d772: mov ecx, ebx */
  ecx = ebx;
/* 86d774: call 0x99cc70 */
  esp -= 4; W32(esp, 0x86d779u); SPILL(); f_99cc70(); if (g_unwind) return; RELOAD();
/* 86d779: and eax, dword ptr [edi + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x10u)));
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 86d77c: and edx, dword ptr [edi + 0x14] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x14u)));
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 86d77f: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  eax = r;
  }
/* 86d781: je 0x86d79f */
  if (zf) goto L_86d79f;
L_86d783: /* 86d783: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86d786: lea ecx, [ebx + ebx*2] */
  ecx = (uint32_t)(ebx + ebx*2);
/* 86d789: mov edx, dword ptr [ebp + ecx*4 - 0x4ac] */
  edx = R32((uint32_t)(ebp + ecx*4 + 0xfffffb54u));
/* 86d790: lea ecx, [ebp + ecx*4 - 0x4ac] */
  ecx = (uint32_t)(ebp + ecx*4 + 0xfffffb54u);
/* 86d797: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86d798: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x86d79bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86d79b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86d79d: jne 0x86d7d3 */
  if (!zf) goto L_86d7d3;
L_86d79f: /* 86d79f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 86d7a2: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 86d7a5: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 86d7a8: jmp 0x86d760 */
  goto L_86d760;
L_86d7aa: /* 86d7aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86d7ab: mov eax, dword ptr [ebp - 0x4ac] */
  eax = R32((uint32_t)(ebp + 0xfffffb54u));
/* 86d7b1: lea ecx, [ebp - 0x4ac] */
  ecx = (uint32_t)(ebp + 0xfffffb54u);
/* 86d7b7: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x86d7bau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86d7ba: jmp 0x86d7bf */
  goto L_86d7bf;
L_86d7bc: /* 86d7bc: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
L_86d7bf: /* 86d7bf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86d7c1: jne 0x86d7d3 */
  if (!zf) goto L_86d7d3;
L_86d7c3: /* 86d7c3: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 86d7c8: mov ecx, dword ptr [0xce8390] */
  ecx = R32((uint32_t)(0xce8390u));
/* 86d7ce: jmp 0x86d6a9 */
  goto L_86d6a9;
L_86d7d3: /* 86d7d3: xor edx, edx */
  edx = 0;
/* 86d7d5: xor ebx, ebx */
  ebx = 0;
/* 86d7d7: xor eax, eax */
  eax = 0;
/* 86d7d9: mov dword ptr [ebp - 0x60], edx */
  W32((uint32_t)(ebp + 0xffffffa0u), edx);
/* 86d7dc: mov dword ptr [ebp - 0x5c], ebx */
  W32((uint32_t)(ebp + 0xffffffa4u), ebx);
/* 86d7df: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_86d7e2: /* 86d7e2: cmp eax, dword ptr [esi + 0x24] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86d7e5: jge 0x86d853 */
  if ((sf == of)) goto L_86d853;
L_86d7e7: /* 86d7e7: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 86d7ea: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 86d7ed: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86d7ef: cmp byte ptr [eax + 0x29], 0x13 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x29u))); uint8_t b = (uint8_t)(0x13u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 86d7f3: jne 0x86d802 */
  if (!zf) goto L_86d802;
L_86d7f5: /* 86d7f5: mov dword ptr [ebp + ebx*4 - 0x13f4], ecx */
  W32((uint32_t)(ebp + ebx*4 + 0xffffec0cu), ecx);
/* 86d7fc: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 86d7fd: mov dword ptr [ebp - 0x5c], ebx */
  W32((uint32_t)(ebp + 0xffffffa4u), ebx);
/* 86d800: jmp 0x86d83f */
  goto L_86d83f;
L_86d802: /* 86d802: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 86d805: fmul dword ptr [ecx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x20u)));
/* 86d808: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 86d80b: fmul dword ptr [ecx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x1cu)));
/* 86d80e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86d810: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 86d813: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 86d815: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86d817: fsub dword ptr [edi + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0xcu)));
/* 86d81a: fld dword ptr [ecx + 0x30] */
  { double v = F32((uint32_t)(ecx + 0x30u)); FPUSH(v); }
/* 86d81d: fchs  */
  ST0 = -ST0;
/* 86d81f: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 86d821: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 86d823: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86d825: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86d828: jne 0x86d835 */
  if (!zf) goto L_86d835;
L_86d82a: /* 86d82a: mov dword ptr [ebp + ebx*4 - 0x13f4], ecx */
  W32((uint32_t)(ebp + ebx*4 + 0xffffec0cu), ecx);
/* 86d831: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 86d832: mov dword ptr [ebp - 0x5c], ebx */
  W32((uint32_t)(ebp + 0xffffffa4u), ebx);
L_86d835: /* 86d835: fcomp dword ptr [ecx + 0x30] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x30u)));
  FPOP();
/* 86d838: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86d83a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 86d83d: jp 0x86d84a */
  if (pf) goto L_86d84a;
L_86d83f: /* 86d83f: mov dword ptr [ebp + edx*4 - 0x17f4], ecx */
  W32((uint32_t)(ebp + edx*4 + 0xffffe80cu), ecx);
/* 86d846: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 86d847: mov dword ptr [ebp - 0x60], edx */
  W32((uint32_t)(ebp + 0xffffffa0u), edx);
L_86d84a: /* 86d84a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 86d84d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 86d84e: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 86d851: jmp 0x86d7e2 */
  goto L_86d7e2;
L_86d853: /* 86d853: xor edx, edx */
  edx = 0;
/* 86d855: xor ebx, ebx */
  ebx = 0;
/* 86d857: mov dword ptr [ebp - 0x50], ebx */
  W32((uint32_t)(ebp + 0xffffffb0u), ebx);
/* 86d85a: mov dword ptr [ebp - 0x4c], edx */
  W32((uint32_t)(ebp + 0xffffffb4u), edx);
/* 86d85d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_86d860: /* 86d860: cmp edx, dword ptr [esi + 0x28] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x28u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86d863: jge 0x86d916 */
  if ((sf == of)) goto L_86d916;
L_86d869: /* 86d869: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 86d86c: mov ecx, dword ptr [ecx + edx*4] */
  ecx = R32((uint32_t)(ecx + edx*4));
/* 86d86f: fld dword ptr [ecx + 0xb0] */
  { double v = F32((uint32_t)(ecx + 0xb0u)); FPUSH(v); }
/* 86d875: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 86d877: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 86d87a: fld dword ptr [ecx + 0xb4] */
  { double v = F32((uint32_t)(ecx + 0xb4u)); FPUSH(v); }
/* 86d880: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86d883: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 86d886: and eax, 0x7fffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 86d88b: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 86d88e: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 86d891: fld dword ptr [ecx + 0xb8] */
  { double v = F32((uint32_t)(ecx + 0xb8u)); FPUSH(v); }
/* 86d897: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86d89a: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 86d89d: and eax, 0x7fffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 86d8a2: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 86d8a5: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 86d8a8: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 86d8ab: and eax, 0x7fffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 86d8b0: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 86d8b3: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 86d8b6: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 86d8b9: fadd dword ptr [ebp - 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 86d8bc: fld dword ptr [ecx + 0xa8] */
  { double v = F32((uint32_t)(ecx + 0xa8u)); FPUSH(v); }
/* 86d8c2: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 86d8c5: fld dword ptr [ecx + 0xac] */
  { double v = F32((uint32_t)(ecx + 0xacu)); FPUSH(v); }
/* 86d8cb: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 86d8ce: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86d8d0: fld dword ptr [ecx + 0xa4] */
  { double v = F32((uint32_t)(ecx + 0xa4u)); FPUSH(v); }
/* 86d8d6: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 86d8d8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86d8da: fsub dword ptr [edi + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0xcu)));
/* 86d8dd: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 86d8df: fchs  */
  ST0 = -ST0;
/* 86d8e1: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 86d8e3: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 86d8e5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86d8e7: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86d8ea: jne 0x86d8fa */
  if (!zf) goto L_86d8fa;
L_86d8ec: /* 86d8ec: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 86d8ef: mov dword ptr [ebp + eax*4 - 0x1bf4], ecx */
  W32((uint32_t)(ebp + eax*4 + 0xffffe40cu), ecx);
/* 86d8f6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 86d8f7: mov dword ptr [ebp - 0x4c], eax */
  W32((uint32_t)(ebp + 0xffffffb4u), eax);
L_86d8fa: /* 86d8fa: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 86d8fc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86d8fe: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 86d900: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 86d903: jp 0x86d910 */
  if (pf) goto L_86d910;
L_86d905: /* 86d905: mov dword ptr [ebp + ebx*4 - 0x1ff4], ecx */
  W32((uint32_t)(ebp + ebx*4 + 0xffffe00cu), ecx);
/* 86d90c: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 86d90d: mov dword ptr [ebp - 0x50], ebx */
  W32((uint32_t)(ebp + 0xffffffb0u), ebx);
L_86d910: /* 86d910: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 86d911: jmp 0x86d860 */
  goto L_86d860;
L_86d916: /* 86d916: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 86d919: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 86d91c: fmul dword ptr [eax + 0x19c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x19cu)));
/* 86d922: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 86d925: fmul dword ptr [eax + 0x198] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x198u)));
/* 86d92b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86d92d: fld dword ptr [eax + 0x194] */
  { double v = F32((uint32_t)(eax + 0x194u)); FPUSH(v); }
/* 86d933: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 86d935: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86d937: fsub dword ptr [edi + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0xcu)));
/* 86d93a: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 86d940: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86d942: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86d945: jne 0x86d94e */
  if (!zf) goto L_86d94e;
L_86d947: /* 86d947: mov ebx, 1 */
  ebx = 0x1u;
/* 86d94c: jmp 0x86d950 */
  goto L_86d950;
L_86d94e: /* 86d94e: xor ebx, ebx */
  ebx = 0;
L_86d950: /* 86d950: mov edx, 9 */
  edx = 0x9u;
/* 86d955: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 86d957: mov dword ptr [esi + 0x18], 1 */
  W32((uint32_t)(esi + 0x18u), 0x1u);
/* 86d95e: mov eax, dword ptr [edi + edx*4] */
  eax = R32((uint32_t)(edi + edx*4));
/* 86d961: mov ecx, 1 */
  ecx = 0x1u;
/* 86d966: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* 86d968: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 86d96b: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 86d96e: je 0x86d988 */
  if (zf) goto L_86d988;
L_86d970: /* 86d970: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86d972: jne 0x86d981 */
  if (!zf) goto L_86d981;
L_86d974: /* 86d974: mov al, byte ptr [edi + 0x56] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x56u))) & 0xffu);
/* 86d977: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 86d979: jbe 0x86d9a0 */
  if ((cf | zf)) goto L_86d9a0;
L_86d97b: /* 86d97b: test byte ptr [edi + 0x57], 0x21 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x57u))); uint8_t b = (uint8_t)(0x21u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86d97f: jne 0x86d9a0 */
  if (!zf) goto L_86d9a0;
L_86d981: /* 86d981: mov eax, 1 */
  eax = 0x1u;
/* 86d986: jmp 0x86d9a2 */
  goto L_86d9a2;
L_86d988: /* 86d988: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86d98a: je 0x86d9a0 */
  if (zf) goto L_86d9a0;
L_86d98c: /* 86d98c: mov al, byte ptr [edi + 0x56] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x56u))) & 0xffu);
/* 86d98f: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 86d991: jbe 0x86d999 */
  if ((cf | zf)) goto L_86d999;
L_86d993: /* 86d993: test byte ptr [edi + 0x57], 0x21 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x57u))); uint8_t b = (uint8_t)(0x21u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86d997: je 0x86d9a0 */
  if (zf) goto L_86d9a0;
L_86d999: /* 86d999: mov eax, 1 */
  eax = 0x1u;
/* 86d99e: jmp 0x86d9a2 */
  goto L_86d9a2;
L_86d9a0: /* 86d9a0: xor eax, eax */
  eax = 0;
L_86d9a2: /* 86d9a2: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 86d9a5: mov edx, 0x17 */
  edx = 0x17u;
/* 86d9aa: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 86d9ac: mov eax, dword ptr [edi + edx*4] */
  eax = R32((uint32_t)(edi + edx*4));
/* 86d9af: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 86d9b2: lea eax, [ebx*4] */
  eax = (uint32_t)(ebx*4);
/* 86d9b9: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 86d9bc: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 86d9be: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 86d9c0: lea edx, [ecx*4] */
  edx = (uint32_t)(ecx*4);
/* 86d9c7: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 86d9ca: mov eax, ebx */
  eax = ebx;
/* 86d9cc: shl eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 86d9cf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86d9d0: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 86d9d3: lea ecx, [ebp - 0x13f4] */
  ecx = (uint32_t)(ebp + 0xffffec0cu);
/* 86d9d9: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 86d9db: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86d9dc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86d9dd: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 86d9e0: call 0x6ca83f */
  esp -= 4; W32(esp, 0x86d9e5u); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 86d9e5: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86d9e8: mov dword ptr [esi + 0x24], eax */
  W32((uint32_t)(esi + 0x24u), eax);
/* 86d9eb: lea eax, [ebx*4] */
  eax = (uint32_t)(ebx*4);
/* 86d9f2: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 86d9f5: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 86d9f7: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86d9f9: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 86d9fc: lea edx, [eax*4] */
  edx = (uint32_t)(eax*4);
/* 86da03: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86da06: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86da07: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 86da0a: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 86da0d: lea eax, [ebp - 0x1bf4] */
  eax = (uint32_t)(ebp + 0xffffe40cu);
/* 86da13: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 86da15: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86da16: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86da17: call 0x6ca83f */
  esp -= 4; W32(esp, 0x86da1cu); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 86da1c: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86da1f: mov dword ptr [esi + 0x28], edx */
  W32((uint32_t)(esi + 0x28u), edx);
/* 86da22: mov ecx, dword ptr [edi + ebx*4 + 0x20] */
  ecx = R32((uint32_t)(edi + ebx*4 + 0x20u));
/* 86da26: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 86da29: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86da2c: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86da2e: je 0x86db2e */
  if (zf) goto L_86db2e;
L_86da34: /* 86da34: mov eax, dword ptr [ebp + ebx*4 - 0x50] */
  eax = R32((uint32_t)(ebp + ebx*4 + 0xffffffb0u));
/* 86da38: mov ecx, dword ptr [ebp + ebx*4 - 0x60] */
  ecx = R32((uint32_t)(ebp + ebx*4 + 0xffffffa0u));
/* 86da3c: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 86da3f: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 86da41: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 86da44: lea eax, [ecx*4 + 0x2c] */
  eax = (uint32_t)(ecx*4 + 0x2cu);
/* 86da4b: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86da4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86da4e: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86da53: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86da59u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86da59: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86da5c: mov ecx, eax */
  ecx = eax;
/* 86da5e: mov dword ptr [ecx + 0x24], edx */
  W32((uint32_t)(ecx + 0x24u), edx);
/* 86da61: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 86da64: lea eax, [ecx + 0x2c] */
  eax = (uint32_t)(ecx + 0x2cu);
/* 86da67: lea edx, [eax + edx*4] */
  edx = (uint32_t)(eax + edx*4);
/* 86da6a: mov dword ptr [ecx + 0x1c], edx */
  W32((uint32_t)(ecx + 0x1cu), edx);
/* 86da6d: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86da70: mov dword ptr [ecx + 0x28], edx */
  W32((uint32_t)(ecx + 0x28u), edx);
/* 86da73: mov dword ptr [ecx + 0x20], eax */
  W32((uint32_t)(ecx + 0x20u), eax);
/* 86da76: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86da79: lea edx, [ecx*4] */
  edx = (uint32_t)(ecx*4);
/* 86da80: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 86da83: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86da84: lea edx, [ebp + ecx - 0x17f4] */
  edx = (uint32_t)(ebp + ecx + 0xffffe80cu);
/* 86da8b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86da8c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86da8d: call 0x6ca83f */
  esp -= 4; W32(esp, 0x86da92u); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 86da92: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86da95: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 86da98: lea ecx, [eax*4] */
  ecx = (uint32_t)(eax*4);
/* 86da9f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86daa2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86daa3: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86daa6: lea eax, [ebp + edx - 0x1ff4] */
  eax = (uint32_t)(ebp + edx + 0xffffe00cu);
/* 86daad: mov edx, dword ptr [ecx + 0x1c] */
  edx = R32((uint32_t)(ecx + 0x1cu));
/* 86dab0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86dab1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86dab2: call 0x6ca83f */
  esp -= 4; W32(esp, 0x86dab7u); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 86dab7: mov ecx, dword ptr [edi + ebx*4 + 0x20] */
  ecx = R32((uint32_t)(edi + ebx*4 + 0x20u));
/* 86dabb: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86dabe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86dac1: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86dac3: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86dac6: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 86dac9: je 0x86daf4 */
  if (zf) goto L_86daf4;
L_86dacb: /* 86dacb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86dacd: jne 0x86dadc */
  if (!zf) goto L_86dadc;
L_86dacf: /* 86dacf: mov cl, byte ptr [edi + 0x56] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x56u))) & 0xffu);
/* 86dad2: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 86dad4: jbe 0x86db1d */
  if ((cf | zf)) goto L_86db1d;
L_86dad6: /* 86dad6: test byte ptr [edi + 0x57], 0x21 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x57u))); uint8_t b = (uint8_t)(0x21u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86dada: jne 0x86db1d */
  if (!zf) goto L_86db1d;
L_86dadc: /* 86dadc: mov ecx, 1 */
  ecx = 0x1u;
/* 86dae1: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 86dae3: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 86dae6: mov dword ptr [eax + 0x18], 0 */
  W32((uint32_t)(eax + 0x18u), 0x0u);
/* 86daed: mov esi, eax */
  esi = eax;
/* 86daef: jmp 0x86d6b0 */
  goto L_86d6b0;
L_86daf4: /* 86daf4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86daf6: je 0x86db1d */
  if (zf) goto L_86db1d;
L_86daf8: /* 86daf8: mov cl, byte ptr [edi + 0x56] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x56u))) & 0xffu);
/* 86dafb: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 86dafd: jbe 0x86db05 */
  if ((cf | zf)) goto L_86db05;
L_86daff: /* 86daff: test byte ptr [edi + 0x57], 0x21 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x57u))); uint8_t b = (uint8_t)(0x21u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86db03: je 0x86db1d */
  if (zf) goto L_86db1d;
L_86db05: /* 86db05: mov ecx, 1 */
  ecx = 0x1u;
/* 86db0a: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 86db0c: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 86db0f: mov dword ptr [eax + 0x18], 0 */
  W32((uint32_t)(eax + 0x18u), 0x0u);
/* 86db16: mov esi, eax */
  esi = eax;
/* 86db18: jmp 0x86d6b0 */
  goto L_86d6b0;
L_86db1d: /* 86db1d: xor ecx, ecx */
  ecx = 0;
/* 86db1f: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 86db21: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 86db24: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 86db27: mov esi, eax */
  esi = eax;
/* 86db29: jmp 0x86d6b0 */
  goto L_86d6b0;
L_86db2e: /* 86db2e: cmp dword ptr [edi + ebx*4 + 0x58], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + ebx*4 + 0x58u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86db32: je 0x86d6b0 */
  if (zf) goto L_86d6b0;
L_86db38: /* 86db38: mov eax, dword ptr [ebp + ebx*4 - 0x60] */
  eax = R32((uint32_t)(ebp + ebx*4 + 0xffffffa0u));
/* 86db3c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86db3e: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 86db41: je 0x86dba3 */
  if (zf) goto L_86dba3;
L_86db43: /* 86db43: mov edx, ebx */
  edx = ebx;
/* 86db45: shl edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 86db48: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 86db4a: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86db4c: lea eax, [eax*4 + 4] */
  eax = (uint32_t)(eax*4 + 0x4u);
/* 86db53: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86db54: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86db59: mov dword ptr [ebp + edx*4 - 0x17f4], 0 */
  W32((uint32_t)(ebp + edx*4 + 0xffffe80cu), 0x0u);
/* 86db64: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86db6au); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86db6a: mov ecx, dword ptr [edi + ebx*4 + 0x58] */
  ecx = R32((uint32_t)(edi + ebx*4 + 0x58u));
/* 86db6e: mov edx, dword ptr [ebp - 0x198] */
  edx = R32((uint32_t)(ebp + 0xfffffe68u));
/* 86db74: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* 86db77: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86db7a: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 86db7d: lea ecx, [eax*4 + 4] */
  ecx = (uint32_t)(eax*4 + 0x4u);
/* 86db84: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86db85: mov ecx, dword ptr [edi + ebx*4 + 0x58] */
  ecx = R32((uint32_t)(edi + ebx*4 + 0x58u));
/* 86db89: lea eax, [ebp + edx - 0x17f4] */
  eax = (uint32_t)(ebp + edx + 0xffffe80cu);
/* 86db90: mov edx, dword ptr [ebp - 0x198] */
  edx = R32((uint32_t)(ebp + 0xfffffe68u));
/* 86db96: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86db97: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 86db9a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86db9b: call 0x6ca83f */
  esp -= 4; W32(esp, 0x86dba0u); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 86dba0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_86dba3: /* 86dba3: mov eax, dword ptr [ebp + ebx*4 - 0x50] */
  eax = R32((uint32_t)(ebp + ebx*4 + 0xffffffb0u));
/* 86dba7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86dba9: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 86dbac: je 0x86dc0e */
  if (zf) goto L_86dc0e;
L_86dbae: /* 86dbae: mov ecx, ebx */
  ecx = ebx;
/* 86dbb0: shl ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 86dbb3: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 86dbb5: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86dbb7: lea edx, [eax*4 + 4] */
  edx = (uint32_t)(eax*4 + 0x4u);
/* 86dbbe: mov dword ptr [ebp + ecx*4 - 0x1ff4], 0 */
  W32((uint32_t)(ebp + ecx*4 + 0xffffe00cu), 0x0u);
/* 86dbc9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86dbca: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86dbcf: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86dbd5u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86dbd5: mov ecx, dword ptr [edi + ebx*4 + 0x58] */
  ecx = R32((uint32_t)(edi + ebx*4 + 0x58u));
/* 86dbd9: mov edx, dword ptr [ebp - 0x194] */
  edx = R32((uint32_t)(ebp + 0xfffffe6cu));
/* 86dbdf: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* 86dbe2: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86dbe5: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 86dbe8: lea ecx, [eax*4 + 4] */
  ecx = (uint32_t)(eax*4 + 0x4u);
/* 86dbef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86dbf0: mov ecx, dword ptr [edi + ebx*4 + 0x58] */
  ecx = R32((uint32_t)(edi + ebx*4 + 0x58u));
/* 86dbf4: lea eax, [ebp + edx - 0x1ff4] */
  eax = (uint32_t)(ebp + edx + 0xffffe00cu);
/* 86dbfb: mov edx, dword ptr [ebp - 0x194] */
  edx = R32((uint32_t)(ebp + 0xfffffe6cu));
/* 86dc01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86dc02: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 86dc05: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86dc06: call 0x6ca83f */
  esp -= 4; W32(esp, 0x86dc0bu); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 86dc0b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_86dc0e: /* 86dc0e: mov ecx, dword ptr [edi + ebx*4 + 0x58] */
  ecx = R32((uint32_t)(edi + ebx*4 + 0x58u));
/* 86dc12: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86dc13: lea edx, [ebp - 0x4c8] */
  edx = (uint32_t)(ebp + 0xfffffb38u);
/* 86dc19: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86dc1a: call 0x86a500 */
  esp -= 4; W32(esp, 0x86dc1fu); SPILL(); f_86a500(); if (g_unwind) return; RELOAD();
/* 86dc1f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86dc22: jmp 0x86d6b0 */
  goto L_86d6b0;
L_86dc27: /* 86dc27: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 86dc2a: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* 86dc2d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86dc2e: mov ecx, dword ptr [esi + 0x24] */
  ecx = R32((uint32_t)(esi + 0x24u));
/* 86dc31: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86dc32: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 86dc35: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86dc36: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86dc37: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86dc38: lea eax, [ebp - 0x4c8] */
  eax = (uint32_t)(ebp + 0xfffffb38u);
/* 86dc3e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86dc3f: call 0x86b3f0 */
  esp -= 4; W32(esp, 0x86dc44u); SPILL(); f_86b3f0(); if (g_unwind) return; RELOAD();
/* 86dc44: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 86dc47: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86dc4a: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86dc4d: je 0x86dc64 */
  if (zf) goto L_86dc64;
L_86dc4f: /* 86dc4f: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 86dc52: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 86dc55: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 86dc58: mov dword ptr [esi + 0x18], 0 */
  W32((uint32_t)(esi + 0x18u), 0x0u);
/* 86dc5f: jmp 0x86d6b0 */
  goto L_86d6b0;
L_86dc64: /* 86dc64: cmp dword ptr [esi + 0x14], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x14u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86dc68: je 0x86d6ac */
  if (zf) goto L_86d6ac;
L_86dc6e: /* 86dc6e: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 86dc71: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86dc73: je 0x86dccc */
  if (zf) goto L_86dccc;
L_86dc75: /* 86dc75: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86dc77: lea edx, [eax*4 + 4] */
  edx = (uint32_t)(eax*4 + 0x4u);
/* 86dc7e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86dc7f: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86dc84: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86dc8au); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86dc8a: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 86dc8d: mov edx, dword ptr [ebp - 0x198] */
  edx = R32((uint32_t)(ebp + 0xfffffe68u));
/* 86dc93: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* 86dc96: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 86dc99: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 86dc9c: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* 86dc9f: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 86dca2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86dca3: mov eax, dword ptr [ebp - 0x198] */
  eax = R32((uint32_t)(ebp + 0xfffffe68u));
/* 86dca9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86dcaa: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 86dcad: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86dcae: call 0x6ca83f */
  esp -= 4; W32(esp, 0x86dcb3u); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 86dcb3: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* 86dcb6: mov ecx, dword ptr [ebp - 0x198] */
  ecx = R32((uint32_t)(ebp + 0xfffffe68u));
/* 86dcbc: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 86dcbf: mov edx, dword ptr [ecx + edx*4] */
  edx = R32((uint32_t)(ecx + edx*4));
/* 86dcc2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86dcc5: mov dword ptr [edx + eax*4], 0 */
  W32((uint32_t)(edx + eax*4), 0x0u);
L_86dccc: /* 86dccc: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 86dccf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86dcd1: je 0x86dd2a */
  if (zf) goto L_86dd2a;
L_86dcd3: /* 86dcd3: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86dcd5: lea eax, [eax*4 + 4] */
  eax = (uint32_t)(eax*4 + 0x4u);
/* 86dcdc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86dcdd: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86dce2: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86dce8u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86dce8: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 86dceb: mov edx, dword ptr [ebp - 0x194] */
  edx = R32((uint32_t)(ebp + 0xfffffe6cu));
/* 86dcf1: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* 86dcf4: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 86dcf7: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 86dcfa: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* 86dcfd: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 86dd00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86dd01: mov eax, dword ptr [ebp - 0x194] */
  eax = R32((uint32_t)(ebp + 0xfffffe6cu));
/* 86dd07: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86dd08: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 86dd0b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86dd0c: call 0x6ca83f */
  esp -= 4; W32(esp, 0x86dd11u); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 86dd11: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* 86dd14: mov ecx, dword ptr [ebp - 0x194] */
  ecx = R32((uint32_t)(ebp + 0xfffffe6cu));
/* 86dd1a: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 86dd1d: mov edx, dword ptr [ecx + edx*4] */
  edx = R32((uint32_t)(ecx + edx*4));
/* 86dd20: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86dd23: mov dword ptr [edx + eax*4], 0 */
  W32((uint32_t)(edx + eax*4), 0x0u);
L_86dd2a: /* 86dd2a: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 86dd2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86dd2e: lea ecx, [ebp - 0x4c8] */
  ecx = (uint32_t)(ebp + 0xfffffb38u);
/* 86dd34: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86dd35: call 0x86a500 */
  esp -= 4; W32(esp, 0x86dd3au); SPILL(); f_86a500(); if (g_unwind) return; RELOAD();
/* 86dd3a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86dd3d: jmp 0x86d6ac */
  goto L_86d6ac;
L_86dd42: /* 86dd42: mov edi, dword ptr [ebp - 0x4b0] */
  edi = R32((uint32_t)(ebp + 0xfffffb50u));
L_86dd48: /* 86dd48: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86dd4a: je 0x86dded */
  if (zf) goto L_86dded;
L_86dd50: /* 86dd50: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 86dd52: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 86dd54: cmp byte ptr [eax + 0x51], 0xb */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x51u))); uint8_t b = (uint8_t)(0xbu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 86dd58: jne 0x86dd7b */
  if (!zf) goto L_86dd7b;
L_86dd5a: /* 86dd5a: mov ecx, dword ptr [eax + 0x2b4] */
  ecx = R32((uint32_t)(eax + 0x2b4u));
/* 86dd60: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86dd62: je 0x86dd7b */
  if (zf) goto L_86dd7b;
L_86dd64: /* 86dd64: mov edx, dword ptr [ebp - 0x4c8] */
  edx = R32((uint32_t)(ebp + 0xfffffb38u));
/* 86dd6a: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 86dd6d: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 86dd70: mov eax, dword ptr [ecx + 0x534] */
  eax = R32((uint32_t)(ecx + 0x534u));
/* 86dd76: test ah, 8 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86dd79: jne 0x86dde5 */
  if (!zf) goto L_86dde5;
L_86dd7b: /* 86dd7b: mov eax, dword ptr [ebp - 0x4ac] */
  eax = R32((uint32_t)(ebp + 0xfffffb54u));
/* 86dd81: lea edx, [esi + 0x8c] */
  edx = (uint32_t)(esi + 0x8cu);
/* 86dd87: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86dd88: lea ecx, [ebp - 0x4ac] */
  ecx = (uint32_t)(ebp + 0xfffffb54u);
/* 86dd8e: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x86dd91u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86dd91: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86dd93: je 0x86dde5 */
  if (zf) goto L_86dde5;
L_86dd95: /* 86dd95: mov eax, dword ptr [ebp - 0x4c8] */
  eax = R32((uint32_t)(ebp + 0xfffffb38u));
/* 86dd9b: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 86dd9e: lea ebx, [eax + 0x194] */
  ebx = (uint32_t)(eax + 0x194u);
/* 86dda4: mov eax, esi */
  eax = esi;
/* 86dda6: call 0x867e00 */
  esp -= 4; W32(esp, 0x86ddabu); SPILL(); f_867e00(); if (g_unwind) return; RELOAD();
/* 86ddab: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86ddad: je 0x86dde5 */
  if (zf) goto L_86dde5;
L_86ddaf: /* 86ddaf: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86ddb1: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86ddb3: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86ddb8: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86ddbeu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86ddbe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86ddc0: je 0x86dddb */
  if (zf) goto L_86dddb;
L_86ddc2: /* 86ddc2: mov ecx, dword ptr [ebp - 0x190] */
  ecx = R32((uint32_t)(ebp + 0xfffffe70u));
/* 86ddc8: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 86ddca: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86ddcd: mov dword ptr [ebp - 0x190], eax */
  W32((uint32_t)(ebp + 0xfffffe70u), eax);
/* 86ddd3: mov edi, dword ptr [edi + 4] */
  edi = R32((uint32_t)(edi + 0x4u));
/* 86ddd6: jmp 0x86dd48 */
  goto L_86dd48;
L_86dddb: /* 86dddb: mov dword ptr [ebp - 0x190], 0 */
  W32((uint32_t)(ebp + 0xfffffe70u), 0x0u);
L_86dde5: /* 86dde5: mov edi, dword ptr [edi + 4] */
  edi = R32((uint32_t)(edi + 0x4u));
/* 86dde8: jmp 0x86dd48 */
  goto L_86dd48;
L_86dded: /* 86dded: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 86ddf3: mov edx, dword ptr [0xce8394] */
  edx = R32((uint32_t)(0xce8394u));
/* 86ddf9: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 86ddfc: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 86ddfe: mov esi, dword ptr [ebp - 0x58] */
  esi = R32((uint32_t)(ebp + 0xffffffa8u));
/* 86de01: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86de03: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 86de05: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 86de07: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 86de09: mov eax, dword ptr [0xcfab30] */
  eax = R32((uint32_t)(0xcfab30u));
/* 86de0e: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86de11: je 0x86de23 */
  if (zf) goto L_86de23;
L_86de13: /* 86de13: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 86de16: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 86de19: mov eax, dword ptr [edx + 0x70] */
  eax = R32((uint32_t)(edx + 0x70u));
/* 86de1c: mov ecx, dword ptr [eax + 0x6c] */
  ecx = R32((uint32_t)(eax + 0x6cu));
/* 86de1f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86de21: jne 0x86de9e */
  if (!zf) goto L_86de9e;
L_86de23: /* 86de23: mov ecx, dword ptr [0xcfa504] */
  ecx = R32((uint32_t)(0xcfa504u));
/* 86de29: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86de2c: jne 0x86de9e */
  if (!zf) goto L_86de9e;
L_86de2e: /* 86de2e: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86de31: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 86de34: mov ecx, dword ptr [eax + 0x70] */
  ecx = R32((uint32_t)(eax + 0x70u));
/* 86de37: mov eax, dword ptr [ecx + 0x54] */
  eax = R32((uint32_t)(ecx + 0x54u));
/* 86de3a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86de3c: jne 0x86de9e */
  if (!zf) goto L_86de9e;
L_86de3e: /* 86de3e: mov esi, dword ptr [ebp - 0x19c] */
  esi = R32((uint32_t)(ebp + 0xfffffe64u));
/* 86de44: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 86de47: xor ebx, ebx */
  ebx = 0;
/* 86de49: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_86de50: /* 86de50: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86de52: je 0x86de71 */
  if (zf) goto L_86de71;
L_86de54: /* 86de54: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 86de56: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86de58: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86de59: mov ebx, 1 */
  ebx = 0x1u;
/* 86de5e: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x86de61u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86de61: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 86de63: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86de65: je 0x86de6c */
  if (zf) goto L_86de6c;
L_86de67: /* 86de67: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86de69: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86de6a: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x86de6cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_86de6c: /* 86de6c: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 86de6f: jmp 0x86de50 */
  goto L_86de50;
L_86de71: /* 86de71: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86de73: je 0x86de9e */
  if (zf) goto L_86de9e;
L_86de75: /* 86de75: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 86de78: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86de7a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86de7c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86de7e: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 86de83: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86de85: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 86de89: mov byte ptr [ebp - 0x13], 0 */
  W8((uint32_t)(ebp + 0xffffffedu), 0x0u);
/* 86de8d: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 86de91: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 86de95: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 86de98: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86de99: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86de9b: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x86de9eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_86de9e: /* 86de9e: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 86dea1: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 86dea4: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 86dea7: test dword ptr [edx + 0x534], 0x40000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x534u))); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86deb1: je 0x86e49a */
  if (zf) goto L_86e49a;
L_86deb7: /* 86deb7: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 86deb9: mov dword ptr [ebp - 0x4c], eax */
  W32((uint32_t)(ebp + 0xffffffb4u), eax);
/* 86debc: xor esi, esi */
  esi = 0;
L_86debe: /* 86debe: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86dec1: cmp esi, dword ptr [eax + 0x118] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x118u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86dec7: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 86deca: jge 0x86e47e */
  if ((sf == of)) goto L_86e47e;
L_86ded0: /* 86ded0: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 86ded3: mov eax, dword ptr [ecx + 0x8c] */
  eax = R32((uint32_t)(ecx + 0x8cu));
/* 86ded9: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 86dedc: mov eax, dword ptr [eax + edx*8 + 0x11c] */
  eax = R32((uint32_t)(eax + edx*8 + 0x11cu));
/* 86dee3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86dee5: je 0x86deeb */
  if (zf) goto L_86deeb;
L_86dee7: /* 86dee7: mov ebx, eax */
  ebx = eax;
/* 86dee9: jmp 0x86def0 */
  goto L_86def0;
L_86deeb: /* 86deeb: mov ecx, dword ptr [ecx + 0x2c] */
  ecx = R32((uint32_t)(ecx + 0x2cu));
/* 86deee: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
L_86def0: /* 86def0: test byte ptr [ebx + 0x358], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x358u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86def7: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 86defa: je 0x86e475 */
  if (zf) goto L_86e475;
L_86df00: /* 86df00: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 86df03: mov eax, dword ptr [edi + 0x1c8] */
  eax = R32((uint32_t)(edi + 0x1c8u));
/* 86df09: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86df0b: je 0x86df2f */
  if (zf) goto L_86df2f;
L_86df0d: /* 86df0d: mov eax, 1 */
  eax = 0x1u;
/* 86df12: xor edx, edx */
  edx = 0;
/* 86df14: mov ecx, esi */
  ecx = esi;
/* 86df16: call 0x99cc70 */
  esp -= 4; W32(esp, 0x86df1bu); SPILL(); f_99cc70(); if (g_unwind) return; RELOAD();
/* 86df1b: and eax, dword ptr [ebp - 0x1a8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffe58u)));
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 86df21: and edx, dword ptr [ebp - 0x1a4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffe5cu)));
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 86df27: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  eax = r;
  }
/* 86df29: je 0x86e475 */
  if (zf) goto L_86e475;
L_86df2f: /* 86df2f: cmp esi, dword ptr [edi + 0x1cc] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x1ccu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86df35: je 0x86e475 */
  if (zf) goto L_86e475;
L_86df3b: /* 86df3b: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 86df42: jmp 0x86df50 */
  goto L_86df50;
L_86df50: /* 86df50: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86df53: cmp edx, dword ptr [ebx + 0x360] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x360u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86df59: jge 0x86e475 */
  if ((sf == of)) goto L_86e475;
L_86df5f: /* 86df5f: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86df62: mov ecx, dword ptr [eax + 0x35c] */
  ecx = R32((uint32_t)(eax + 0x35cu));
/* 86df68: mov ebx, dword ptr [ecx + edx*4] */
  ebx = R32((uint32_t)(ecx + edx*4));
/* 86df6b: mov eax, dword ptr [ebx + 0x1370] */
  eax = R32((uint32_t)(ebx + 0x1370u));
/* 86df71: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86df73: jne 0x86e3e4 */
  if (!zf) goto L_86e3e4;
L_86df79: /* 86df79: mov eax, dword ptr [0xcfab30] */
  eax = R32((uint32_t)(0xcfab30u));
/* 86df7e: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86df81: je 0x86e3e4 */
  if (zf) goto L_86e3e4;
L_86df87: /* 86df87: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 86df8a: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 86df8d: mov edx, dword ptr [eax + 0x70] */
  edx = R32((uint32_t)(eax + 0x70u));
/* 86df90: mov ecx, dword ptr [edx + 0x68] */
  ecx = R32((uint32_t)(edx + 0x68u));
/* 86df93: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86df95: je 0x86e3e4 */
  if (zf) goto L_86e3e4;
L_86df9b: /* 86df9b: mov ecx, edx */
  ecx = edx;
/* 86df9d: mov eax, dword ptr [ecx + 0x34] */
  eax = R32((uint32_t)(ecx + 0x34u));
/* 86dfa0: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86dfa3: jae 0x86dfac */
  if (!cf) goto L_86dfac;
L_86dfa5: /* 86dfa5: mov eax, 3 */
  eax = 0x3u;
/* 86dfaa: jmp 0x86dfb6 */
  goto L_86dfb6;
L_86dfac: /* 86dfac: cmp eax, 0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86dfaf: jb 0x86dfb6 */
  if (cf) goto L_86dfb6;
L_86dfb1: /* 86dfb1: mov eax, 0xb */
  eax = 0xbu;
L_86dfb6: /* 86dfb6: mov dword ptr [ecx + 0x34], eax */
  W32((uint32_t)(ecx + 0x34u), eax);
/* 86dfb9: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 86dfbc: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 86dfbf: mov edx, dword ptr [ecx + 0x70] */
  edx = R32((uint32_t)(ecx + 0x70u));
/* 86dfc2: mov ecx, dword ptr [edx + 0x34] */
  ecx = R32((uint32_t)(edx + 0x34u));
/* 86dfc5: mov eax, 1 */
  eax = 0x1u;
/* 86dfca: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 86dfcc: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 86dfce: lea ecx, [ebp - 0x8c] */
  ecx = (uint32_t)(ebp + 0xffffff74u);
/* 86dfd4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86dfd5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86dfd6: call 0x6c9e2b */
  esp -= 4; W32(esp, 0x86dfdbu); SPILL(); f_6c9e2b(); if (g_unwind) return; RELOAD();
/* 86dfdb: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 86dfde: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 86dfe0: mov ecx, esi */
  ecx = esi;
/* 86dfe2: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 86dfe6: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x86dfe8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86dfe8: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 86dfea: lea eax, [ebp - 0x8c] */
  eax = (uint32_t)(ebp + 0xffffff74u);
/* 86dff0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86dff1: mov ecx, esi */
  ecx = esi;
/* 86dff3: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x86dff6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86dff6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86dff8: je 0x86e3b5 */
  if (zf) goto L_86e3b5;
L_86dffe: /* 86dffe: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 86e000: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e002: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86e004: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 86e009: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86e00b: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 86e00f: mov byte ptr [ebp - 0x13], 0 */
  W8((uint32_t)(ebp + 0xffffffedu), 0x0u);
/* 86e013: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 86e017: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 86e01b: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 86e01e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e01f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86e021: mov ecx, esi */
  ecx = esi;
/* 86e023: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x86e026u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e026: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86e027: mov eax, esp */
  eax = esp;
/* 86e029: mov dword ptr [ebp - 0x5c], esp */
  W32((uint32_t)(ebp + 0xffffffa4u), esp);
/* 86e02c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e02e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e030: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 86e036: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 86e038: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e03a: mov ecx, esi */
  ecx = esi;
/* 86e03c: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x86e03fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e03f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 86e041: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 86e043: mov ecx, esi */
  ecx = esi;
/* 86e045: call dword ptr [eax + 0x1c] */
  { uint32_t t = R32((uint32_t)(eax + 0x1cu)); esp -= 4; W32(esp, 0x86e048u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e048: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e04a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e04c: mov ecx, ebx */
  ecx = ebx;
/* 86e04e: call 0x6cb82f */
  esp -= 4; W32(esp, 0x86e053u); SPILL(); f_6cb82f(); if (g_unwind) return; RELOAD();
/* 86e053: mov ecx, dword ptr [ebx + 0x1290] */
  ecx = R32((uint32_t)(ebx + 0x1290u));
/* 86e059: mov edx, dword ptr [ebx + 0x128c] */
  edx = R32((uint32_t)(ebx + 0x128cu));
/* 86e05f: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 86e060: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86e061: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 86e062: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86e063: mov ecx, ebx */
  ecx = ebx;
/* 86e065: mov esi, eax */
  esi = eax;
/* 86e067: call 0x6cb82f */
  esp -= 4; W32(esp, 0x86e06cu); SPILL(); f_6cb82f(); if (g_unwind) return; RELOAD();
/* 86e06c: mov ecx, dword ptr [ebx + 0x1280] */
  ecx = R32((uint32_t)(ebx + 0x1280u));
/* 86e072: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 86e075: fld dword ptr [ecx + eax*4 + 4] */
  { double v = F32((uint32_t)(ecx + eax*4 + 0x4u)); FPUSH(v); }
/* 86e079: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 86e07c: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 86e07f: fsub dword ptr [ecx + edx*4 + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + edx*4 + 0x4u)));
/* 86e083: lea edx, [ecx + edx*4] */
  edx = (uint32_t)(ecx + edx*4);
/* 86e086: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 86e088: mov ecx, dword ptr [ebx + 0x174] */
  ecx = R32((uint32_t)(ebx + 0x174u));
/* 86e08e: fsub dword ptr [edx] */
  ST0 = ST0 - (F32((uint32_t)(edx)));
/* 86e090: mov edx, dword ptr [ebx + 0x170] */
  edx = R32((uint32_t)(ebx + 0x170u));
/* 86e096: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 86e099: mov dword ptr [ebp - 0x160], edx */
  W32((uint32_t)(ebp + 0xfffffea0u), edx);
/* 86e09f: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 86e0a5: mov dword ptr [ebp - 0x154], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffeacu), 0x3f800000u);
/* 86e0af: mov dword ptr [ebp - 0x150], 0 */
  W32((uint32_t)(ebp + 0xfffffeb0u), 0x0u);
/* 86e0b9: mov dword ptr [ebp - 0x14c], 0 */
  W32((uint32_t)(ebp + 0xfffffeb4u), 0x0u);
/* 86e0c3: fstp dword ptr [ebp - 0x70] */
  WF32((uint32_t)(ebp + 0xffffff90u), ST0); FPOP();
/* 86e0c6: mov dword ptr [ebp - 0x148], 0 */
  W32((uint32_t)(ebp + 0xfffffeb8u), 0x0u);
/* 86e0d0: mov dword ptr [ebp - 0x144], 0 */
  W32((uint32_t)(ebp + 0xfffffebcu), 0x0u);
/* 86e0da: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 86e0e0: mov dword ptr [ebp - 0x140], 0xbf800000 */
  W32((uint32_t)(ebp + 0xfffffec0u), 0xbf800000u);
/* 86e0ea: mov dword ptr [ebp - 0x13c], 0 */
  W32((uint32_t)(ebp + 0xfffffec4u), 0x0u);
/* 86e0f4: mov dword ptr [ebp - 0x138], 0 */
  W32((uint32_t)(ebp + 0xfffffec8u), 0x0u);
/* 86e0fe: fstp dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0); FPOP();
/* 86e101: mov dword ptr [ebp - 0x134], 0 */
  W32((uint32_t)(ebp + 0xfffffeccu), 0x0u);
/* 86e10b: fld dword ptr [ebx + 0x178] */
  { double v = F32((uint32_t)(ebx + 0x178u)); FPUSH(v); }
/* 86e111: mov dword ptr [ebp - 0x130], 0 */
  W32((uint32_t)(ebp + 0xfffffed0u), 0x0u);
/* 86e11b: fadd dword ptr [0xa149c8] */
  ST0 = ST0 + (F32((uint32_t)(0xa149c8u)));
/* 86e121: mov dword ptr [ebp - 0x12c], 0xbf800000 */
  W32((uint32_t)(ebp + 0xfffffed4u), 0xbf800000u);
/* 86e12b: mov dword ptr [ebp - 0x128], 0 */
  W32((uint32_t)(ebp + 0xfffffed8u), 0x0u);
/* 86e135: mov dword ptr [ebp - 0x124], 0 */
  W32((uint32_t)(ebp + 0xfffffedcu), 0x0u);
/* 86e13f: fchs  */
  ST0 = -ST0;
/* 86e141: mov dword ptr [ebp - 0x120], 0 */
  W32((uint32_t)(ebp + 0xfffffee0u), 0x0u);
/* 86e14b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 86e14d: mov dword ptr [ebp - 0x118], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffee8u), 0x3f800000u);
/* 86e157: fstp dword ptr [ebp - 0x11c] */
  WF32((uint32_t)(ebp + 0xfffffee4u), ST0); FPOP();
/* 86e15d: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 86e160: fchs  */
  ST0 = -ST0;
/* 86e162: fld dword ptr [ebp - 0x160] */
  { double v = F32((uint32_t)(ebp + 0xfffffea0u)); FPUSH(v); }
/* 86e168: mov dword ptr [ebp - 0x114], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffeecu), 0x3f800000u);
/* 86e172: fchs  */
  ST0 = -ST0;
/* 86e174: mov dword ptr [ebp - 0x110], 0 */
  W32((uint32_t)(ebp + 0xfffffef0u), 0x0u);
/* 86e17e: fstp dword ptr [ebp - 0xe4] */
  WF32((uint32_t)(ebp + 0xffffff1cu), ST0); FPOP();
/* 86e184: mov dword ptr [ebp - 0x10c], 0 */
  W32((uint32_t)(ebp + 0xfffffef4u), 0x0u);
/* 86e18e: mov dword ptr [ebp - 0x108], 0 */
  W32((uint32_t)(ebp + 0xfffffef8u), 0x0u);
/* 86e198: fstp dword ptr [ebp - 0xe0] */
  WF32((uint32_t)(ebp + 0xffffff20u), ST0); FPOP();
/* 86e19e: mov dword ptr [ebp - 0x104], 0 */
  W32((uint32_t)(ebp + 0xfffffefcu), 0x0u);
/* 86e1a8: mov dword ptr [ebp - 0x100], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff00u), 0x3f800000u);
/* 86e1b2: fstp dword ptr [ebp - 0xdc] */
  WF32((uint32_t)(ebp + 0xffffff24u), ST0); FPOP();
/* 86e1b8: mov dword ptr [ebp - 0xfc], 0 */
  W32((uint32_t)(ebp + 0xffffff04u), 0x0u);
/* 86e1c2: mov dword ptr [ebp - 0xf8], 0 */
  W32((uint32_t)(ebp + 0xffffff08u), 0x0u);
/* 86e1cc: mov dword ptr [ebp - 0xf4], 0 */
  W32((uint32_t)(ebp + 0xffffff0cu), 0x0u);
/* 86e1d6: mov dword ptr [ebp - 0xf0], 0 */
  W32((uint32_t)(ebp + 0xffffff10u), 0x0u);
/* 86e1e0: mov dword ptr [ebp - 0xec], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff14u), 0x3f800000u);
/* 86e1ea: mov dword ptr [ebp - 0xe8], 0 */
  W32((uint32_t)(ebp + 0xffffff18u), 0x0u);
/* 86e1f4: mov dword ptr [ebp - 0xd8], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff28u), 0x3f800000u);
/* 86e1fe: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86e201: mov edi, esp */
  edi = esp;
/* 86e203: mov ecx, 0x10 */
  ecx = 0x10u;
/* 86e208: lea esi, [ebp - 0x154] */
  esi = (uint32_t)(ebp + 0xfffffeacu);
/* 86e20e: lea eax, [ebp - 0x508] */
  eax = (uint32_t)(ebp + 0xfffffaf8u);
/* 86e214: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 86e216: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e217: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 86e21d: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 86e221: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x86e227u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 86e227: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 86e22d: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 86e231: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x86e237u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 86e237: lea ecx, [ebp - 0x154] */
  ecx = (uint32_t)(ebp + 0xfffffeacu);
/* 86e23d: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 86e241: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x86e247u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 86e247: fld dword ptr [ebp - 0x6c] */
  { double v = F32((uint32_t)(ebp + 0xffffff94u)); FPUSH(v); }
/* 86e24a: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 86e250: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86e252: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86e255: jne 0x86e25f */
  if (!zf) goto L_86e25f;
L_86e257: /* 86e257: mov ecx, dword ptr [ebp - 0x6c] */
  ecx = R32((uint32_t)(ebp + 0xffffff94u));
/* 86e25a: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 86e25d: jmp 0x86e267 */
  goto L_86e267;
L_86e25f: /* 86e25f: fld dword ptr [ebp - 0x6c] */
  { double v = F32((uint32_t)(ebp + 0xffffff94u)); FPUSH(v); }
/* 86e262: fchs  */
  ST0 = -ST0;
/* 86e264: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
L_86e267: /* 86e267: fld dword ptr [ebp - 0x70] */
  { double v = F32((uint32_t)(ebp + 0xffffff90u)); FPUSH(v); }
/* 86e26a: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 86e270: fld dword ptr [ebp - 0x70] */
  { double v = F32((uint32_t)(ebp + 0xffffff90u)); FPUSH(v); }
/* 86e273: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86e275: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86e278: je 0x86e27c */
  if (zf) goto L_86e27c;
L_86e27a: /* 86e27a: fchs  */
  ST0 = -ST0;
L_86e27c: /* 86e27c: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 86e282: mov ecx, 0x10 */
  ecx = 0x10u;
/* 86e287: fdiv dword ptr [ebp - 0x1c] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 86e28a: lea esi, [ebp - 0xd4] */
  esi = (uint32_t)(ebp + 0xffffff2cu);
/* 86e290: lea edi, [ebp - 0x548] */
  edi = (uint32_t)(ebp + 0xfffffab8u);
/* 86e296: mov dword ptr [ebp - 0xd0], 0 */
  W32((uint32_t)(ebp + 0xffffff30u), 0x0u);
/* 86e2a0: mov dword ptr [ebp - 0xcc], 0 */
  W32((uint32_t)(ebp + 0xffffff34u), 0x0u);
/* 86e2aa: mov dword ptr [ebp - 0xc8], 0 */
  W32((uint32_t)(ebp + 0xffffff38u), 0x0u);
/* 86e2b4: mov dword ptr [ebp - 0xc4], 0 */
  W32((uint32_t)(ebp + 0xffffff3cu), 0x0u);
/* 86e2be: mov dword ptr [ebp - 0xbc], 0 */
  W32((uint32_t)(ebp + 0xffffff44u), 0x0u);
/* 86e2c8: mov dword ptr [ebp - 0xb8], 0 */
  W32((uint32_t)(ebp + 0xffffff48u), 0x0u);
/* 86e2d2: mov dword ptr [ebp - 0xb4], 0 */
  W32((uint32_t)(ebp + 0xffffff4cu), 0x0u);
/* 86e2dc: mov dword ptr [ebp - 0xb0], 0 */
  W32((uint32_t)(ebp + 0xffffff50u), 0x0u);
/* 86e2e6: mov dword ptr [ebp - 0xac], 0x36000000 */
  W32((uint32_t)(ebp + 0xffffff54u), 0x36000000u);
/* 86e2f0: mov dword ptr [ebp - 0xa8], 0 */
  W32((uint32_t)(ebp + 0xffffff58u), 0x0u);
/* 86e2fa: mov dword ptr [ebp - 0xa4], 0 */
  W32((uint32_t)(ebp + 0xffffff5cu), 0x0u);
/* 86e304: mov dword ptr [ebp - 0xa0], 0 */
  W32((uint32_t)(ebp + 0xffffff60u), 0x0u);
/* 86e30e: mov dword ptr [ebp - 0x9c], 0x3f000000 */
  W32((uint32_t)(ebp + 0xffffff64u), 0x3f000000u);
/* 86e318: mov dword ptr [ebp - 0x98], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff68u), 0x3f800000u);
/* 86e322: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 86e328: fdiv st(2) */
  ST0 = ST0 / STI(2);
/* 86e32a: fstp dword ptr [ebp - 0xd4] */
  WF32((uint32_t)(ebp + 0xffffff2cu), ST0); FPOP();
/* 86e330: fstp dword ptr [ebp - 0xc0] */
  WF32((uint32_t)(ebp + 0xffffff40u), ST0); FPOP();
/* 86e336: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 86e338: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 86e33a: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 86e340: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 86e344: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x86e34au); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 86e34a: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 86e34d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 86e34f: lea eax, [ebp - 0x508] */
  eax = (uint32_t)(ebp + 0xfffffaf8u);
/* 86e355: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e356: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86e358: mov ecx, esi */
  ecx = esi;
/* 86e35a: call dword ptr [edx + 0x38] */
  { uint32_t t = R32((uint32_t)(edx + 0x38u)); esp -= 4; W32(esp, 0x86e35du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e35d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 86e35f: lea eax, [ebp - 0x548] */
  eax = (uint32_t)(ebp + 0xfffffab8u);
/* 86e365: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e366: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 86e368: mov ecx, esi */
  ecx = esi;
/* 86e36a: call dword ptr [edx + 0x38] */
  { uint32_t t = R32((uint32_t)(edx + 0x38u)); esp -= 4; W32(esp, 0x86e36du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e36d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 86e36f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86e371: mov ecx, esi */
  ecx = esi;
/* 86e373: call dword ptr [edx + 0x60] */
  { uint32_t t = R32((uint32_t)(edx + 0x60u)); esp -= 4; W32(esp, 0x86e376u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e376: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 86e379: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e37b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e37d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e37f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e381: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e383: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 86e384: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e385: mov ecx, ebx */
  ecx = ebx;
/* 86e387: call 0x6c4cb4 */
  esp -= 4; W32(esp, 0x86e38cu); SPILL(); f_6c4cb4(); if (g_unwind) return; RELOAD();
/* 86e38c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 86e38e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86e390: mov ecx, esi */
  ecx = esi;
/* 86e392: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x86e395u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e395: lea ecx, [ebp - 0x548] */
  ecx = (uint32_t)(ebp + 0xfffffab8u);
/* 86e39b: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 86e39f: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x86e3a5u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 86e3a5: lea ecx, [ebp - 0x508] */
  ecx = (uint32_t)(ebp + 0xfffffaf8u);
/* 86e3ab: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 86e3af: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x86e3b5u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
L_86e3b5: /* 86e3b5: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 86e3b8: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 86e3ba: mov ecx, esi */
  ecx = esi;
/* 86e3bc: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x86e3bfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e3bf: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 86e3c1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86e3c3: lea eax, [ebp - 0x8c] */
  eax = (uint32_t)(ebp + 0xffffff74u);
/* 86e3c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e3ca: mov ecx, esi */
  ecx = esi;
/* 86e3cc: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0x86e3cfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e3cf: lea ecx, [ebp - 0x8c] */
  ecx = (uint32_t)(ebp + 0xffffff74u);
/* 86e3d5: mov dword ptr [ebx + 0x1370], eax */
  W32((uint32_t)(ebx + 0x1370u), eax);
/* 86e3db: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 86e3df: call 0x6c88d2 */
  esp -= 4; W32(esp, 0x86e3e4u); SPILL(); f_6c88d2(); if (g_unwind) return; RELOAD();
L_86e3e4: /* 86e3e4: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 86e3e7: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 86e3e9: mov ecx, edi */
  ecx = edi;
/* 86e3eb: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x86e3edu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e3ed: test byte ptr [ebx + 0x1260], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x1260u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86e3f4: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 86e3f7: je 0x86e41d */
  if (zf) goto L_86e41d;
L_86e3f9: /* 86e3f9: fld dword ptr [esi + 0x1b8] */
  { double v = F32((uint32_t)(esi + 0x1b8u)); FPUSH(v); }
/* 86e3ff: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 86e405: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86e407: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 86e40a: jp 0x86e410 */
  if (pf) goto L_86e410;
L_86e40c: /* 86e40c: xor eax, eax */
  eax = 0;
/* 86e40e: jmp 0x86e415 */
  goto L_86e415;
L_86e410: /* 86e410: mov eax, 1 */
  eax = 0x1u;
L_86e415: /* 86e415: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 86e417: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e418: mov ecx, edi */
  ecx = edi;
/* 86e41a: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x86e41du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_86e41d: /* 86e41d: mov eax, dword ptr [esi + 0x1c8] */
  eax = R32((uint32_t)(esi + 0x1c8u));
/* 86e423: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e425: je 0x86e436 */
  if (zf) goto L_86e436;
L_86e427: /* 86e427: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86e42a: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 86e42d: lea eax, [ebp + eax*4 - 0x4ac] */
  eax = (uint32_t)(ebp + eax*4 + 0xfffffb54u);
/* 86e434: jmp 0x86e43c */
  goto L_86e43c;
L_86e436: /* 86e436: lea eax, [ebp - 0x4ac] */
  eax = (uint32_t)(ebp + 0xfffffb54u);
L_86e43c: /* 86e43c: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 86e43f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86e440: mov ecx, dword ptr [ebp - 0x48] */
  ecx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 86e443: lea edx, [ebp - 0xd48] */
  edx = (uint32_t)(ebp + 0xfffff2b8u);
/* 86e449: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86e44a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86e44b: lea edx, [ebp - 0x948] */
  edx = (uint32_t)(ebp + 0xfffff6b8u);
/* 86e451: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86e452: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e453: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86e454: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 86e455: mov ecx, ebx */
  ecx = ebx;
/* 86e457: call 0x6c4cb4 */
  esp -= 4; W32(esp, 0x86e45cu); SPILL(); f_6c4cb4(); if (g_unwind) return; RELOAD();
/* 86e45c: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 86e45e: mov ecx, edi */
  ecx = edi;
/* 86e460: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x86e463u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e463: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86e466: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86e469: mov esi, dword ptr [ebp - 0x24] */
  esi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86e46c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 86e46d: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 86e470: jmp 0x86df50 */
  goto L_86df50;
L_86e475: /* 86e475: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 86e478: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 86e479: jmp 0x86debe */
  goto L_86debe;
L_86e47e: /* 86e47e: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 86e484: mov edx, dword ptr [0xce83a0] */
  edx = R32((uint32_t)(0xce83a0u));
/* 86e48a: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 86e48d: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 86e48f: mov esi, dword ptr [ebp - 0x4c] */
  esi = R32((uint32_t)(ebp + 0xffffffb4u));
/* 86e492: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86e494: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 86e496: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 86e498: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
L_86e49a: /* 86e49a: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 86e49d: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 86e49f: mov ecx, edi */
  ecx = edi;
/* 86e4a1: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x86e4a3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e4a3: mov eax, dword ptr [0xcfa350] */
  eax = R32((uint32_t)(0xcfa350u));
/* 86e4a8: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 86e4aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e4ab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e4ad: mov ecx, edi */
  ecx = edi;
/* 86e4af: call dword ptr [edx + 0x38] */
  { uint32_t t = R32((uint32_t)(edx + 0x38u)); esp -= 4; W32(esp, 0x86e4b2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e4b2: mov esi, dword ptr [ebp - 0x170] */
  esi = R32((uint32_t)(ebp + 0xfffffe90u));
L_86e4b8: /* 86e4b8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e4ba: je 0x86e4d9 */
  if (zf) goto L_86e4d9;
L_86e4bc: /* 86e4bc: mov ecx, dword ptr [ebp - 0x4c8] */
  ecx = R32((uint32_t)(ebp + 0xfffffb38u));
/* 86e4c2: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 86e4c4: mov eax, dword ptr [ebp - 0x174] */
  eax = R32((uint32_t)(ebp + 0xfffffe8cu));
/* 86e4ca: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86e4cb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86e4cc: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 86e4cf: call 0x6c1a5a */
  esp -= 4; W32(esp, 0x86e4d4u); SPILL(); f_6c1a5a(); if (g_unwind) return; RELOAD();
/* 86e4d4: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 86e4d7: jmp 0x86e4b8 */
  goto L_86e4b8;
L_86e4d9: /* 86e4d9: mov esi, dword ptr [ebp - 0x190] */
  esi = R32((uint32_t)(ebp + 0xfffffe70u));
/* 86e4df: nop  */
L_86e4e0: /* 86e4e0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e4e2: je 0x86e4fb */
  if (zf) goto L_86e4fb;
L_86e4e4: /* 86e4e4: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 86e4e6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86e4e7: lea edx, [ebp - 0x4c8] */
  edx = (uint32_t)(ebp + 0xfffffb38u);
/* 86e4ed: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86e4ee: call 0x869c90 */
  esp -= 4; W32(esp, 0x86e4f3u); SPILL(); f_869c90(); if (g_unwind) return; RELOAD();
/* 86e4f3: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 86e4f6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86e4f9: jmp 0x86e4e0 */
  goto L_86e4e0;
L_86e4fb: /* 86e4fb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86e4fc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86e4fd: lea ecx, [ebp - 0x188] */
  ecx = (uint32_t)(ebp + 0xfffffe78u);
/* 86e503: call 0x6c9f52 */
  esp -= 4; W32(esp, 0x86e508u); SPILL(); f_6c9f52(); if (g_unwind) return; RELOAD();
/* 86e508: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 86e50b: mov ecx, dword ptr [eax + 0x15c] */
  ecx = R32((uint32_t)(eax + 0x15cu));
/* 86e511: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e513: jne 0x86e532 */
  if (!zf) goto L_86e532;
L_86e515: /* 86e515: mov esi, dword ptr [0xcd8ad8] */
  esi = R32((uint32_t)(0xcd8ad8u));
/* 86e51b: jmp 0x86e520 */
  goto L_86e520;
L_86e520: /* 86e520: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e522: je 0x86e532 */
  if (zf) goto L_86e532;
L_86e524: /* 86e524: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 86e526: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86e527: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86e528: call 0x6c894a */
  esp -= 4; W32(esp, 0x86e52du); SPILL(); f_6c894a(); if (g_unwind) return; RELOAD();
/* 86e52d: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 86e530: jmp 0x86e520 */
  goto L_86e520;
L_86e532: /* 86e532: mov dword ptr [0xcd8ad8], 0 */
  W32((uint32_t)(0xcd8ad8u), 0x0u);
/* 86e53c: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 86e53e: mov ecx, edi */
  ecx = edi;
/* 86e540: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x86e543u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e543: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86e548: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86e54b: jne 0x86e55e */
  if (!zf) goto L_86e55e;
L_86e54d: /* 86e54d: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 86e550: mov edx, dword ptr [ecx + 0x70] */
  edx = R32((uint32_t)(ecx + 0x70u));
/* 86e553: mov eax, dword ptr [edx + 0x54] */
  eax = R32((uint32_t)(edx + 0x54u));
/* 86e556: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e558: je 0x86e82d */
  if (zf) goto L_86e82d;
L_86e55e: /* 86e55e: mov esi, dword ptr [ebp - 0x16c] */
  esi = R32((uint32_t)(ebp + 0xfffffe94u));
L_86e564: /* 86e564: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e566: je 0x86e576 */
  if (zf) goto L_86e576;
L_86e568: /* 86e568: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 86e56a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86e56b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86e56c: call 0x6cb8f7 */
  esp -= 4; W32(esp, 0x86e571u); SPILL(); f_6cb8f7(); if (g_unwind) return; RELOAD();
/* 86e571: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 86e574: jmp 0x86e564 */
  goto L_86e564;
L_86e576: /* 86e576: mov eax, dword ptr [ebp - 0x168] */
  eax = R32((uint32_t)(ebp + 0xfffffe98u));
/* 86e57c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e57e: je 0x86e80a */
  if (zf) goto L_86e80a;
L_86e584: /* 86e584: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 86e586: mov dword ptr [ebp - 0x58], eax */
  W32((uint32_t)(ebp + 0xffffffa8u), eax);
/* 86e589: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 86e58b: mov ecx, edi */
  ecx = edi;
/* 86e58d: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x86e58fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e58f: mov eax, dword ptr [0xcd939c] */
  eax = R32((uint32_t)(0xcd939cu));
/* 86e594: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e596: jne 0x86e6ae */
  if (!zf) goto L_86e6ae;
L_86e59c: /* 86e59c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e59e: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 86e5a1: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x86e5a7u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 86e5a7: push 0xb86b60 */
  { uint32_t v = 0xb86b60u; esp -= 4; W32(esp, v); }
/* 86e5ac: mov ecx, 0xb86b60 */
  ecx = 0xb86b60u;
/* 86e5b1: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x86e5b7u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 86e5b7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e5b9: jne 0x86e5d3 */
  if (!zf) goto L_86e5d3;
L_86e5bb: /* 86e5bb: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 86e5c0: push 0xae56d8 */
  { uint32_t v = 0xae56d8u; esp -= 4; W32(esp, v); }
/* 86e5c5: push 0xae571c */
  { uint32_t v = 0xae571cu; esp -= 4; W32(esp, v); }
/* 86e5ca: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x86e5d0u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 86e5d0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_86e5d3: /* 86e5d3: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x86e5d9u); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 86e5d9: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 86e5df: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86e5e1: mov ecx, dword ptr [ebp - 0x4c] */
  ecx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 86e5e4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e5e6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86e5e7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e5e9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e5eb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86e5ec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e5ed: push 0xb86b60 */
  { uint32_t v = 0xb86b60u; esp -= 4; W32(esp, v); }
/* 86e5f2: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x86e5f8u); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 86e5f8: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 86e5fe: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86e601: push 0xcd939c */
  { uint32_t v = 0xcd939cu; esp -= 4; W32(esp, v); }
/* 86e606: mov dword ptr [0xcd939c], eax */
  W32((uint32_t)(0xcd939cu), eax);
/* 86e60b: call 0x6c1203 */
  esp -= 4; W32(esp, 0x86e610u); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
/* 86e610: test byte ptr [0xcd9398], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xcd9398u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86e617: jne 0x86e646 */
  if (!zf) goto L_86e646;
L_86e619: /* 86e619: or dword ptr [0xcd9398], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcd9398u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xcd9398u), r);
  }
/* 86e620: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 86e624: mov byte ptr [ebp - 0x13], 0 */
  W8((uint32_t)(ebp + 0xffffffedu), 0x0u);
/* 86e628: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 86e62c: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 86e630: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 86e633: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86e634: mov ecx, 0xcd9380 */
  ecx = 0xcd9380u;
/* 86e639: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 86e63d: call 0x6c7af4 */
  esp -= 4; W32(esp, 0x86e642u); SPILL(); f_6c7af4(); if (g_unwind) return; RELOAD();
/* 86e642: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
L_86e646: /* 86e646: mov esi, dword ptr [0xcd939c] */
  esi = R32((uint32_t)(0xcd939cu));
/* 86e64c: lea ebx, [esi + 0x50] */
  ebx = (uint32_t)(esi + 0x50u);
/* 86e64f: mov dword ptr [ebx], 0xcd9380 */
  W32((uint32_t)(ebx), 0xcd9380u);
/* 86e655: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 86e657: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86e659: call dword ptr [eax + 0x30] */
  { uint32_t t = R32((uint32_t)(eax + 0x30u)); esp -= 4; W32(esp, 0x86e65cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e65c: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 86e65e: mov byte ptr [esi + 0x38], al */
  W8((uint32_t)(esi + 0x38u), (eax & 0xffu));
/* 86e661: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86e663: call dword ptr [edx + 0x34] */
  { uint32_t t = R32((uint32_t)(edx + 0x34u)); esp -= 4; W32(esp, 0x86e666u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e666: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 86e668: mov byte ptr [esi + 0x39], al */
  W8((uint32_t)(esi + 0x39u), (eax & 0xffu));
/* 86e66b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86e66d: call dword ptr [eax + 0x38] */
  { uint32_t t = R32((uint32_t)(eax + 0x38u)); esp -= 4; W32(esp, 0x86e670u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e670: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 86e672: mov byte ptr [esi + 0x3a], al */
  W8((uint32_t)(esi + 0x3au), (eax & 0xffu));
/* 86e675: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86e677: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x86e67au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e67a: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 86e67c: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 86e67f: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* 86e682: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86e684: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0x86e687u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e687: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* 86e68a: mov ebx, dword ptr [0xcfa2b0] */
  ebx = R32((uint32_t)(0xcfa2b0u));
/* 86e690: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86e691: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* 86e694: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* 86e697: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x86e699u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e699: mov edx, dword ptr [esi + 0x4c] */
  edx = R32((uint32_t)(esi + 0x4cu));
/* 86e69c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86e69f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86e6a0: mov byte ptr [esi + 0x3b], al */
  W8((uint32_t)(esi + 0x3bu), (eax & 0xffu));
/* 86e6a3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x86e6a5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e6a5: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 86e6a8: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86e6ab: mov byte ptr [esi + 0x3c], al */
  W8((uint32_t)(esi + 0x3cu), (eax & 0xffu));
L_86e6ae: /* 86e6ae: mov eax, dword ptr [0xcd937c] */
  eax = R32((uint32_t)(0xcd937cu));
/* 86e6b3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e6b5: jne 0x86e759 */
  if (!zf) goto L_86e759;
L_86e6bb: /* 86e6bb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e6bd: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 86e6c0: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x86e6c6u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 86e6c6: push 0xb8d850 */
  { uint32_t v = 0xb8d850u; esp -= 4; W32(esp, v); }
/* 86e6cb: mov ecx, 0xb8d850 */
  ecx = 0xb8d850u;
/* 86e6d0: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x86e6d6u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 86e6d6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e6d8: jne 0x86e6f2 */
  if (!zf) goto L_86e6f2;
L_86e6da: /* 86e6da: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 86e6df: push 0xae5740 */
  { uint32_t v = 0xae5740u; esp -= 4; W32(esp, v); }
/* 86e6e4: push 0xae5784 */
  { uint32_t v = 0xae5784u; esp -= 4; W32(esp, v); }
/* 86e6e9: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x86e6efu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 86e6ef: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_86e6f2: /* 86e6f2: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x86e6f8u); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 86e6f8: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 86e6fe: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86e700: mov ecx, dword ptr [ebp - 0x4c] */
  ecx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 86e703: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e705: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86e706: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e708: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e70a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86e70b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e70c: push 0xb8d850 */
  { uint32_t v = 0xb8d850u; esp -= 4; W32(esp, v); }
/* 86e711: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x86e717u); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 86e717: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 86e71d: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86e720: push 0xcd937c */
  { uint32_t v = 0xcd937cu; esp -= 4; W32(esp, v); }
/* 86e725: mov dword ptr [0xcd937c], eax */
  W32((uint32_t)(0xcd937cu), eax);
/* 86e72a: call 0x6c1203 */
  esp -= 4; W32(esp, 0x86e72fu); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
/* 86e72f: mov edx, dword ptr [0xcd937c] */
  edx = R32((uint32_t)(0xcd937cu));
/* 86e735: mov eax, dword ptr [0xcd939c] */
  eax = R32((uint32_t)(0xcd939cu));
/* 86e73a: mov dword ptr [edx + 0x38], eax */
  W32((uint32_t)(edx + 0x38u), eax);
/* 86e73d: mov ecx, dword ptr [0xcd937c] */
  ecx = R32((uint32_t)(0xcd937cu));
/* 86e743: mov byte ptr [ecx + 0x3c], 7 */
  W8((uint32_t)(ecx + 0x3cu), 0x7u);
/* 86e747: mov eax, dword ptr [0xcd937c] */
  eax = R32((uint32_t)(0xcd937cu));
/* 86e74c: and dword ptr [eax + 0x40], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x40u))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x40u), r);
  }
/* 86e750: mov eax, dword ptr [0xcd937c] */
  eax = R32((uint32_t)(0xcd937cu));
/* 86e755: or dword ptr [eax + 0x40], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x40u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x40u), r);
  }
L_86e759: /* 86e759: mov eax, dword ptr [ebp - 0x168] */
  eax = R32((uint32_t)(ebp + 0xfffffe98u));
/* 86e75f: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 86e761: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e762: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 86e764: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86e766: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86e768: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 86e76a: not eax */
  eax = ~eax;
/* 86e76c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e76d: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86e76f: mov ecx, edi */
  ecx = edi;
/* 86e771: call dword ptr [edx + 0x40] */
  { uint32_t t = R32((uint32_t)(edx + 0x40u)); esp -= 4; W32(esp, 0x86e774u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e774: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 86e777: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86e778: add eax, 0xd0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xd0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86e77d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e77e: lea ecx, [ebp - 0xdf0] */
  ecx = (uint32_t)(ebp + 0xfffff210u);
/* 86e784: call 0x6cbd48 */
  esp -= 4; W32(esp, 0x86e789u); SPILL(); f_6cbd48(); if (g_unwind) return; RELOAD();
/* 86e789: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 86e78c: fild dword ptr [edx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(edx + 0x8cu)); FPUSH(v); }
/* 86e792: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 86e796: mov byte ptr [ebp - 0x13], 0 */
  W8((uint32_t)(ebp + 0xffffffedu), 0x0u);
/* 86e79a: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 86e79e: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 86e7a2: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 86e7a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86e7a6: mov ecx, dword ptr [0xcd937c] */
  ecx = R32((uint32_t)(0xcd937cu));
/* 86e7ac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86e7ad: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 86e7b2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e7b4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e7b6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e7b8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e7ba: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86e7bd: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 86e7c1: mov ecx, eax */
  ecx = eax;
/* 86e7c3: fild dword ptr [edx + 0x88] */
  { double v = (double)(int32_t)R32((uint32_t)(edx + 0x88u)); FPUSH(v); }
/* 86e7c9: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 86e7cd: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 86e7d0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e7d2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e7d4: call 0x6ca6b4 */
  esp -= 4; W32(esp, 0x86e7d9u); SPILL(); f_6ca6b4(); if (g_unwind) return; RELOAD();
/* 86e7d9: lea ecx, [ebp - 0xdf0] */
  ecx = (uint32_t)(ebp + 0xfffff210u);
/* 86e7df: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 86e7e3: call 0x6caac4 */
  esp -= 4; W32(esp, 0x86e7e8u); SPILL(); f_6caac4(); if (g_unwind) return; RELOAD();
/* 86e7e8: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 86e7ea: mov ecx, edi */
  ecx = edi;
/* 86e7ec: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x86e7efu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e7ef: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 86e7f4: mov ecx, dword ptr [0xce8374] */
  ecx = R32((uint32_t)(0xce8374u));
/* 86e7fa: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 86e7fd: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 86e7ff: mov esi, dword ptr [ebp - 0x58] */
  esi = R32((uint32_t)(ebp + 0xffffffa8u));
/* 86e802: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86e804: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 86e806: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 86e808: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
L_86e80a: /* 86e80a: mov esi, dword ptr [ebp - 0x19c] */
  esi = R32((uint32_t)(ebp + 0xfffffe64u));
L_86e810: /* 86e810: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e812: je 0x86e82d */
  if (zf) goto L_86e82d;
L_86e814: /* 86e814: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 86e816: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86e818: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86e819: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x86e81cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e81c: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 86e81e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e820: je 0x86e828 */
  if (zf) goto L_86e828;
L_86e822: /* 86e822: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86e824: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86e826: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x86e828u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_86e828: /* 86e828: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 86e82b: jmp 0x86e810 */
  goto L_86e810;
L_86e82d: /* 86e82d: mov ecx, dword ptr [0xcfab30] */
  ecx = R32((uint32_t)(0xcfab30u));
/* 86e833: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86e836: je 0x86e886 */
  if (zf) goto L_86e886;
L_86e838: /* 86e838: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 86e83b: mov eax, dword ptr [edx + 0x70] */
  eax = R32((uint32_t)(edx + 0x70u));
/* 86e83e: mov ecx, dword ptr [eax + 0x6c] */
  ecx = R32((uint32_t)(eax + 0x6cu));
/* 86e841: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e843: je 0x86e886 */
  if (zf) goto L_86e886;
L_86e845: /* 86e845: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 86e848: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e84a: jne 0x86e886 */
  if (!zf) goto L_86e886;
L_86e84c: /* 86e84c: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 86e84e: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86e850: mov ecx, edi */
  ecx = edi;
/* 86e852: call dword ptr [edx + 0x60] */
  { uint32_t t = R32((uint32_t)(edx + 0x60u)); esp -= 4; W32(esp, 0x86e855u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e855: mov esi, dword ptr [ebp - 0x19c] */
  esi = R32((uint32_t)(ebp + 0xfffffe64u));
/* 86e85b: jmp 0x86e860 */
  goto L_86e860;
L_86e860: /* 86e860: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e862: je 0x86e87d */
  if (zf) goto L_86e87d;
L_86e864: /* 86e864: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 86e866: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86e868: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86e869: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x86e86cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e86c: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 86e86e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e870: je 0x86e878 */
  if (zf) goto L_86e878;
L_86e872: /* 86e872: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86e874: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86e876: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x86e878u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_86e878: /* 86e878: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 86e87b: jmp 0x86e860 */
  goto L_86e860;
L_86e87d: /* 86e87d: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 86e87f: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86e881: mov ecx, edi */
  ecx = edi;
/* 86e883: call dword ptr [eax + 0x64] */
  { uint32_t t = R32((uint32_t)(eax + 0x64u)); esp -= 4; W32(esp, 0x86e886u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_86e886: /* 86e886: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 86e889: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x86e88fu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 86e88f: mov esi, dword ptr [ebp - 0x18c] */
  esi = R32((uint32_t)(ebp + 0xfffffe74u));
/* 86e895: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 86e899: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_86e8a0: /* 86e8a0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e8a2: je 0x86e9bd */
  if (zf) goto L_86e9bd;
L_86e8a8: /* 86e8a8: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86e8ab: je 0x86e92a */
  if (zf) goto L_86e92a;
L_86e8ad: /* 86e8ad: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 86e8af: mov ecx, edi */
  ecx = edi;
/* 86e8b1: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x86e8b3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e8b3: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 86e8b6: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86e8b9: xor eax, eax */
  eax = 0;
/* 86e8bb: mov dword ptr [ebp - 0x7c], eax */
  W32((uint32_t)(ebp + 0xffffff84u), eax);
/* 86e8be: mov dword ptr [ebp - 0x84], eax */
  W32((uint32_t)(ebp + 0xffffff7cu), eax);
/* 86e8c4: mov dword ptr [ebp - 0x80], eax */
  W32((uint32_t)(ebp + 0xffffff80u), eax);
/* 86e8c7: mov dword ptr [ebp - 0x78], eax */
  W32((uint32_t)(ebp + 0xffffff88u), eax);
/* 86e8ca: mov dword ptr [ebp - 0x74], eax */
  W32((uint32_t)(ebp + 0xffffff8cu), eax);
/* 86e8cd: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 86e8d0: mov eax, edx */
  eax = edx;
/* 86e8d2: imul eax, eax, 0x78 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x78u);
  eax = (uint32_t)r;
  }
/* 86e8d5: add eax, dword ptr [ebx + 0x58] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x58u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86e8d8: mov dword ptr [ebp - 0x8c], ebx */
  W32((uint32_t)(ebp + 0xffffff74u), ebx);
/* 86e8de: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 86e8e1: mov dword ptr [ebp - 0x88], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff78u), 0xffffffffu);
/* 86e8eb: mov eax, dword ptr [eax + 0x60] */
  eax = R32((uint32_t)(eax + 0x60u));
/* 86e8ee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86e8ef: mov dword ptr [ebp - 0x7c], ecx */
  W32((uint32_t)(ebp + 0xffffff84u), ecx);
/* 86e8f2: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 86e8f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86e8f6: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 86e8f9: mov dword ptr [ebp - 0x88], eax */
  W32((uint32_t)(ebp + 0xffffff78u), eax);
/* 86e8ff: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 86e902: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e903: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 86e906: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86e907: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e908: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86e909: lea ecx, [ebp - 0x8c] */
  ecx = (uint32_t)(ebp + 0xffffff74u);
/* 86e90f: call 0x6c83fa */
  esp -= 4; W32(esp, 0x86e914u); SPILL(); f_6c83fa(); if (g_unwind) return; RELOAD();
/* 86e914: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86e915: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86e916: lea ecx, [ebp - 0x8c] */
  ecx = (uint32_t)(ebp + 0xffffff74u);
/* 86e91c: call 0x6c1a5a */
  esp -= 4; W32(esp, 0x86e921u); SPILL(); f_6c1a5a(); if (g_unwind) return; RELOAD();
/* 86e921: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 86e923: mov ecx, edi */
  ecx = edi;
/* 86e925: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x86e928u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e928: jmp 0x86e974 */
  goto L_86e974;
L_86e92a: /* 86e92a: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 86e92d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 86e92f: cmp byte ptr [ecx + 0x51], 0xa */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x51u))); uint8_t b = (uint8_t)(0xau);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 86e933: jne 0x86e94d */
  if (!zf) goto L_86e94d;
L_86e935: /* 86e935: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86e937: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86e939: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 86e93c: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x86e942u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 86e942: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* 86e945: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 86e948: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 86e94b: jmp 0x86e974 */
  goto L_86e974;
L_86e94d: /* 86e94d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e94e: lea edx, [ebp - 0x4c8] */
  edx = (uint32_t)(ebp + 0xfffffb38u);
/* 86e954: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86e955: call 0x869c90 */
  esp -= 4; W32(esp, 0x86e95au); SPILL(); f_869c90(); if (g_unwind) return; RELOAD();
/* 86e95a: mov eax, dword ptr [ebp - 0x178] */
  eax = R32((uint32_t)(ebp + 0xfffffe88u));
/* 86e960: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86e963: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e965: je 0x86e974 */
  if (zf) goto L_86e974;
L_86e967: /* 86e967: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86e968: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86e969: lea ecx, [ebp - 0x188] */
  ecx = (uint32_t)(ebp + 0xfffffe78u);
/* 86e96f: call 0x6c9f52 */
  esp -= 4; W32(esp, 0x86e974u); SPILL(); f_6c9f52(); if (g_unwind) return; RELOAD();
L_86e974: /* 86e974: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 86e977: mov ecx, dword ptr [eax + 0x15c] */
  ecx = R32((uint32_t)(eax + 0x15cu));
/* 86e97d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e97f: jne 0x86e9a5 */
  if (!zf) goto L_86e9a5;
L_86e981: /* 86e981: mov ebx, dword ptr [0xcd8ad8] */
  ebx = R32((uint32_t)(0xcd8ad8u));
/* 86e987: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 86e98a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_86e990: /* 86e990: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e992: je 0x86e9a5 */
  if (zf) goto L_86e9a5;
L_86e994: /* 86e994: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 86e997: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86e998: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 86e99a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86e99b: call 0x6c894a */
  esp -= 4; W32(esp, 0x86e9a0u); SPILL(); f_6c894a(); if (g_unwind) return; RELOAD();
/* 86e9a0: mov ebx, dword ptr [ebx + 4] */
  ebx = R32((uint32_t)(ebx + 0x4u));
/* 86e9a3: jmp 0x86e990 */
  goto L_86e990;
L_86e9a5: /* 86e9a5: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 86e9a8: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 86e9ab: mov dword ptr [0xcd8ad8], 0 */
  W32((uint32_t)(0xcd8ad8u), 0x0u);
/* 86e9b5: mov esi, dword ptr [esi + 0x1c] */
  esi = R32((uint32_t)(esi + 0x1cu));
/* 86e9b8: jmp 0x86e8a0 */
  goto L_86e8a0;
L_86e9bd: /* 86e9bd: mov edx, dword ptr [ebp - 0x64] */
  edx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 86e9c0: mov dword ptr [0xcd8ad8], edx */
  W32((uint32_t)(0xcd8ad8u), edx);
/* 86e9c6: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 86e9c9: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x86e9cfu); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 86e9cf: mov ecx, dword ptr [eax + 0x54] */
  ecx = R32((uint32_t)(eax + 0x54u));
/* 86e9d2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e9d4: je 0x86eb72 */
  if (zf) goto L_86eb72;
L_86e9da: /* 86e9da: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 86e9dd: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 86e9e0: test dword ptr [ecx + 0x534], 0x40000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x534u))); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e9ea: je 0x86eb72 */
  if (zf) goto L_86eb72;
L_86e9f0: /* 86e9f0: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 86e9f2: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 86e9f4: mov ecx, edi */
  ecx = edi;
/* 86e9f6: mov dword ptr [ebp - 0x64], eax */
  W32((uint32_t)(ebp + 0xffffff9cu), eax);
/* 86e9f9: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x86e9fbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e9fb: xor edi, edi */
  edi = 0;
L_86e9fd: /* 86e9fd: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86ea00: cmp edi, dword ptr [eax + 0x118] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x118u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86ea06: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 86ea09: jge 0x86eb48 */
  if ((sf == of)) goto L_86eb48;
L_86ea0f: /* 86ea0f: mov eax, dword ptr [ecx + 0x8c] */
  eax = R32((uint32_t)(ecx + 0x8cu));
/* 86ea15: lea edx, [edi + edi*2] */
  edx = (uint32_t)(edi + edi*2);
/* 86ea18: mov eax, dword ptr [eax + edx*8 + 0x11c] */
  eax = R32((uint32_t)(eax + edx*8 + 0x11cu));
/* 86ea1f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86ea21: je 0x86ea27 */
  if (zf) goto L_86ea27;
L_86ea23: /* 86ea23: mov esi, eax */
  esi = eax;
/* 86ea25: jmp 0x86ea2c */
  goto L_86ea2c;
L_86ea27: /* 86ea27: mov ecx, dword ptr [ecx + 0x2c] */
  ecx = R32((uint32_t)(ecx + 0x2cu));
/* 86ea2a: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
L_86ea2c: /* 86ea2c: test byte ptr [esi + 0x358], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x358u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86ea33: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 86ea36: je 0x86eb42 */
  if (zf) goto L_86eb42;
L_86ea3c: /* 86ea3c: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86ea3f: mov eax, dword ptr [edx + 0x1c8] */
  eax = R32((uint32_t)(edx + 0x1c8u));
/* 86ea45: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86ea47: je 0x86ea6f */
  if (zf) goto L_86ea6f;
L_86ea49: /* 86ea49: mov eax, 1 */
  eax = 0x1u;
/* 86ea4e: xor edx, edx */
  edx = 0;
/* 86ea50: mov ecx, edi */
  ecx = edi;
/* 86ea52: call 0x99cc70 */
  esp -= 4; W32(esp, 0x86ea57u); SPILL(); f_99cc70(); if (g_unwind) return; RELOAD();
/* 86ea57: mov ecx, dword ptr [ebp - 0x1a8] */
  ecx = R32((uint32_t)(ebp + 0xfffffe58u));
/* 86ea5d: mov ebx, dword ptr [ebp - 0x1a4] */
  ebx = R32((uint32_t)(ebp + 0xfffffe5cu));
/* 86ea63: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 86ea65: and edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 86ea67: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  eax = r;
  }
/* 86ea69: je 0x86eb42 */
  if (zf) goto L_86eb42;
L_86ea6f: /* 86ea6f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 86ea72: cmp edi, dword ptr [eax + 0x1cc] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x1ccu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86ea78: je 0x86eb42 */
  if (zf) goto L_86eb42;
L_86ea7e: /* 86ea7e: xor ebx, ebx */
  ebx = 0;
L_86ea80: /* 86ea80: cmp ebx, dword ptr [esi + 0x360] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x360u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86ea86: jge 0x86eb42 */
  if ((sf == of)) goto L_86eb42;
L_86ea8c: /* 86ea8c: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86ea8f: mov edx, dword ptr [ecx + 0x35c] */
  edx = R32((uint32_t)(ecx + 0x35cu));
/* 86ea95: mov esi, dword ptr [edx + ebx*4] */
  esi = R32((uint32_t)(edx + ebx*4));
/* 86ea98: test byte ptr [esi + 0x1260], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x1260u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86ea9f: je 0x86eac9 */
  if (zf) goto L_86eac9;
L_86eaa1: /* 86eaa1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 86eaa4: fld dword ptr [eax + 0x1b8] */
  { double v = F32((uint32_t)(eax + 0x1b8u)); FPUSH(v); }
/* 86eaaa: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 86eab0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86eab2: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 86eab5: jp 0x86eabb */
  if (pf) goto L_86eabb;
L_86eab7: /* 86eab7: xor eax, eax */
  eax = 0;
/* 86eab9: jmp 0x86eac0 */
  goto L_86eac0;
L_86eabb: /* 86eabb: mov eax, 1 */
  eax = 0x1u;
L_86eac0: /* 86eac0: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 86eac3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86eac5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86eac6: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x86eac9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_86eac9: /* 86eac9: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 86eacc: mov ecx, dword ptr [eax + 0x1c8] */
  ecx = R32((uint32_t)(eax + 0x1c8u));
/* 86ead2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86ead4: je 0x86eae2 */
  if (zf) goto L_86eae2;
L_86ead6: /* 86ead6: lea eax, [edi + edi*2] */
  eax = (uint32_t)(edi + edi*2);
/* 86ead9: lea eax, [ebp + eax*4 - 0x4ac] */
  eax = (uint32_t)(ebp + eax*4 + 0xfffffb54u);
/* 86eae0: jmp 0x86eae8 */
  goto L_86eae8;
L_86eae2: /* 86eae2: lea eax, [ebp - 0x4ac] */
  eax = (uint32_t)(ebp + 0xfffffb54u);
L_86eae8: /* 86eae8: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 86eaeb: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86eaee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86eaef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86eaf0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86eaf1: mov ecx, esi */
  ecx = esi;
/* 86eaf3: call 0x6cbc49 */
  esp -= 4; W32(esp, 0x86eaf8u); SPILL(); f_6cbc49(); if (g_unwind) return; RELOAD();
/* 86eaf8: test byte ptr [esi + 0x1260], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x1260u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86eaff: je 0x86eb39 */
  if (zf) goto L_86eb39;
L_86eb01: /* 86eb01: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 86eb04: fld dword ptr [eax + 0x1b8] */
  { double v = F32((uint32_t)(eax + 0x1b8u)); FPUSH(v); }
/* 86eb0a: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 86eb10: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86eb12: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 86eb15: jp 0x86eb2e */
  if (pf) goto L_86eb2e;
L_86eb17: /* 86eb17: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 86eb1a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86eb1c: mov eax, 1 */
  eax = 0x1u;
/* 86eb21: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86eb22: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x86eb25u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86eb25: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86eb28: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 86eb29: jmp 0x86ea80 */
  goto L_86ea80;
L_86eb2e: /* 86eb2e: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 86eb31: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86eb33: xor eax, eax */
  eax = 0;
/* 86eb35: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86eb36: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x86eb39u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_86eb39: /* 86eb39: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86eb3c: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 86eb3d: jmp 0x86ea80 */
  goto L_86ea80;
L_86eb42: /* 86eb42: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 86eb43: jmp 0x86e9fd */
  goto L_86e9fd;
L_86eb48: /* 86eb48: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 86eb4b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86eb4d: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x86eb50u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86eb50: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 86eb56: mov edx, dword ptr [0xce83b4] */
  edx = R32((uint32_t)(0xce83b4u));
/* 86eb5c: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 86eb5f: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 86eb61: mov esi, dword ptr [ebp - 0x64] */
  esi = R32((uint32_t)(ebp + 0xffffff9cu));
/* 86eb64: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86eb66: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 86eb69: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 86eb6c: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 86eb6e: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 86eb70: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
L_86eb72: /* 86eb72: xor esi, esi */
  esi = 0;
L_86eb74: /* 86eb74: cmp esi, dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86eb77: jge 0x86eb92 */
  if ((sf == of)) goto L_86eb92;
L_86eb79: /* 86eb79: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 86eb7c: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 86eb7f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86eb80: lea edx, [ebp - 0x4c8] */
  edx = (uint32_t)(ebp + 0xfffffb38u);
/* 86eb86: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86eb87: call 0x869c90 */
  esp -= 4; W32(esp, 0x86eb8cu); SPILL(); f_869c90(); if (g_unwind) return; RELOAD();
/* 86eb8c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86eb8f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 86eb90: jmp 0x86eb74 */
  goto L_86eb74;
L_86eb92: /* 86eb92: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 86eb95: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86eb97: jne 0x86ebc4 */
  if (!zf) goto L_86ebc4;
L_86eb99: /* 86eb99: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 86eb9c: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 86eb9f: test dword ptr [ecx + 0x534], 0x400000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x534u))); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86eba9: je 0x86ebc4 */
  if (zf) goto L_86ebc4;
L_86ebab: /* 86ebab: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 86ebad: mov ecx, edi */
  ecx = edi;
/* 86ebaf: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x86ebb1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86ebb1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86ebb2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86ebb3: mov ecx, 0xcd8af0 */
  ecx = 0xcd8af0u;
/* 86ebb8: call 0x6c332d */
  esp -= 4; W32(esp, 0x86ebbdu); SPILL(); f_6c332d(); if (g_unwind) return; RELOAD();
/* 86ebbd: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 86ebbf: mov ecx, edi */
  ecx = edi;
/* 86ebc1: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x86ebc4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_86ebc4: /* 86ebc4: mov ecx, dword ptr [0xcfa504] */
  ecx = R32((uint32_t)(0xcfa504u));
/* 86ebca: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86ebcd: je 0x86ec4b */
  if (zf) goto L_86ec4b;
L_86ebcf: /* 86ebcf: mov esi, dword ptr [ebp - 0x38] */
  esi = R32((uint32_t)(ebp + 0xffffffc8u));
/* 86ebd2: mov ecx, esi */
  ecx = esi;
/* 86ebd4: call 0x6c4304 */
  esp -= 4; W32(esp, 0x86ebd9u); SPILL(); f_6c4304(); if (g_unwind) return; RELOAD();
/* 86ebd9: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 86ebdb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86ebdc: mov ecx, ebx */
  ecx = ebx;
/* 86ebde: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x86ebe1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86ebe1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86ebe3: je 0x86ec4b */
  if (zf) goto L_86ec4b;
L_86ebe5: /* 86ebe5: mov ecx, esi */
  ecx = esi;
/* 86ebe7: call 0x6c4304 */
  esp -= 4; W32(esp, 0x86ebecu); SPILL(); f_6c4304(); if (g_unwind) return; RELOAD();
/* 86ebec: mov ecx, eax */
  ecx = eax;
/* 86ebee: call 0x6ca2c2 */
  esp -= 4; W32(esp, 0x86ebf3u); SPILL(); f_6ca2c2(); if (g_unwind) return; RELOAD();
/* 86ebf3: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 86ebf6: lea edx, [ebp - 0xff4] */
  edx = (uint32_t)(ebp + 0xfffff00cu);
/* 86ebfc: mov edi, eax */
  edi = eax;
/* 86ebfe: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86ec00: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86ec01: call dword ptr [eax + 0x24] */
  { uint32_t t = R32((uint32_t)(eax + 0x24u)); esp -= 4; W32(esp, 0x86ec04u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86ec04: lea eax, [ebp - 0x160] */
  eax = (uint32_t)(ebp + 0xfffffea0u);
/* 86ec0a: lea esi, [edi + 0x8c] */
  esi = (uint32_t)(edi + 0x8cu);
/* 86ec10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86ec11: mov ecx, esi */
  ecx = esi;
/* 86ec13: call dword ptr [0xcfa348] */
  esp -= 4; W32(esp, 0x86ec19u); SPILL(); f_4e1703(); if (g_unwind) return; /* Core!?GetExtent@FBox@@QBE?AVFVector@@XZ */ RELOAD();
/* 86ec19: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 86ec1c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86ec1d: mov ecx, esi */
  ecx = esi;
/* 86ec1f: mov ebx, eax */
  ebx = eax;
/* 86ec21: call dword ptr [0xcfa34c] */
  esp -= 4; W32(esp, 0x86ec27u); SPILL(); f_4e3139(); if (g_unwind) return; /* Core!?GetCenter@FBox@@QBE?AVFVector@@XZ */ RELOAD();
/* 86ec27: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86ec28: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86ec29: lea ecx, [ebp - 0xff4] */
  ecx = (uint32_t)(ebp + 0xfffff00cu);
/* 86ec2f: call 0x6c1e42 */
  esp -= 4; W32(esp, 0x86ec34u); SPILL(); f_6c1e42(); if (g_unwind) return; RELOAD();
/* 86ec34: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86ec36: je 0x86ec4b */
  if (zf) goto L_86ec4b;
L_86ec38: /* 86ec38: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86ec3b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 86ec3e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86ec3f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86ec41: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86ec43: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86ec44: mov ecx, edi */
  ecx = edi;
/* 86ec46: call 0x6c4b24 */
  esp -= 4; W32(esp, 0x86ec4bu); SPILL(); f_6c4b24(); if (g_unwind) return; RELOAD();
L_86ec4b: /* 86ec4b: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 86ec51: mov edx, dword ptr [0xce8398] */
  edx = R32((uint32_t)(0xce8398u));
/* 86ec57: lea esi, [ecx + edx*4] */
  esi = (uint32_t)(ecx + edx*4);
/* 86ec5a: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86ec5f: call dword ptr [0xcfab44] */
  esp -= 4; W32(esp, 0x86ec65u); SPILL(); f_4e3855(); if (g_unwind) return; /* Core!?GetByteCount@FMemStack@@QAEHXZ */ RELOAD();
/* 86ec65: mov edi, dword ptr [ebp - 0x94] */
  edi = R32((uint32_t)(ebp + 0xffffff6cu));
/* 86ec6b: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 86ec6d: mov ecx, dword ptr [0xcd8ae0] */
  ecx = R32((uint32_t)(0xcd8ae0u));
/* 86ec73: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 86ec75: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 86ec77: lea eax, [ebp - 0x4c8] */
  eax = (uint32_t)(ebp + 0xfffffb38u);
/* 86ec7d: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86ec7f: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 86ec81: jne 0x86ec8d */
  if (!zf) goto L_86ec8d;
L_86ec83: /* 86ec83: mov dword ptr [0xcd8ae0], 0 */
  W32((uint32_t)(0xcd8ae0u), 0x0u);
L_86ec8d: /* 86ec8d: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 86ec90: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x86ec96u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 86ec96: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 86ec99: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 86ec9d: call 0x6c56d2 */
  esp -= 4; W32(esp, 0x86eca2u); SPILL(); f_6c56d2(); if (g_unwind) return; RELOAD();
/* 86eca2: push 0x6c45c5 */
  { uint32_t v = 0x6c45c5u; esp -= 4; W32(esp, v); }
/* 86eca7: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 86eca9: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 86ecab: lea ecx, [ebp - 0x4ac] */
  ecx = (uint32_t)(ebp + 0xfffffb54u);
/* 86ecb1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86ecb2: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 86ecb6: call 0x99ca3d */
  esp -= 4; W32(esp, 0x86ecbbu); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 86ecbb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 86ecbe: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 86ecbf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 86ecc0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 86ecc7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 86ecc8: mov esp, ebp */
  esp = ebp;
/* 86ecca: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 86eccb: ret  */
  esp += 4; SPILL(); return;
}

void f_86ce78(void) {
  LOAD_REGS();
L_86ce78: /* 86ce78: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 86ce7f: nop  */
L_86ce80: /* 86ce80: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 86ce83: cmp esi, dword ptr [ecx + 0x1138] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x1138u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86ce89: jge 0x86cfa4 */
  if ((sf == of)) goto L_86cfa4;
L_86ce8f: /* 86ce8f: mov eax, ecx */
  eax = ecx;
/* 86ce91: mov edx, dword ptr [eax + 0x1134] */
  edx = R32((uint32_t)(eax + 0x1134u));
/* 86ce97: mov edi, dword ptr [edx + esi*4] */
  edi = R32((uint32_t)(edx + esi*4));
/* 86ce9a: lea ebx, [eax + 0x1134] */
  ebx = (uint32_t)(eax + 0x1134u);
/* 86cea0: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 86cea3: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 86cea5: fld dword ptr [eax + 0x3ac] */
  { double v = F32((uint32_t)(eax + 0x3acu)); FPUSH(v); }
/* 86ceab: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86ceae: mov ecx, edi */
  ecx = edi;
/* 86ceb0: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 86ceb3: call 0x6ca46b */
  esp -= 4; W32(esp, 0x86ceb8u); SPILL(); f_6ca46b(); if (g_unwind) return; RELOAD();
/* 86ceb8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86ceba: jne 0x86cf5d */
  if (!zf) goto L_86cf5d;
L_86cec0: /* 86cec0: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 86cec3: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 86cec5: mov ecx, dword ptr [edx + 0x1138] */
  ecx = R32((uint32_t)(edx + 0x1138u));
/* 86cecb: mov ecx, dword ptr [eax + ecx*4 - 4] */
  ecx = R32((uint32_t)(eax + ecx*4 + 0xfffffffcu));
/* 86cecf: mov dword ptr [eax + esi*4], ecx */
  W32((uint32_t)(eax + esi*4), ecx);
/* 86ced2: mov eax, dword ptr [edx + 0x1138] */
  eax = R32((uint32_t)(edx + 0x1138u));
/* 86ced8: lea edi, [eax - 1] */
  edi = (uint32_t)(eax + 0xffffffffu);
/* 86cedb: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 86cedc: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 86cede: jge 0x86cef8 */
  if ((sf == of)) goto L_86cef8;
L_86cee0: /* 86cee0: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 86cee5: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 86ceea: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 86ceef: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x86cef5u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 86cef5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_86cef8: /* 86cef8: cmp edi, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86cefb: jle 0x86cf15 */
  if ((zf || sf != of)) goto L_86cf15;
L_86cefd: /* 86cefd: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 86cf02: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 86cf07: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 86cf0c: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x86cf12u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 86cf12: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_86cf15: /* 86cf15: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 86cf18: lea eax, [edi + 1] */
  eax = (uint32_t)(edi + 0x1u);
/* 86cf1b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86cf1d: jle 0x86cf37 */
  if ((zf || sf != of)) goto L_86cf37;
L_86cf1f: /* 86cf1f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 86cf24: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 86cf29: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 86cf2e: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x86cf34u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 86cf34: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_86cf37: /* 86cf37: mov ecx, edi */
  ecx = edi;
/* 86cf39: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_86cf40: /* 86cf40: lea eax, [edi + 1] */
  eax = (uint32_t)(edi + 0x1u);
/* 86cf43: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86cf45: jge 0x86cf4a */
  if ((sf == of)) goto L_86cf4a;
L_86cf47: /* 86cf47: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 86cf48: jmp 0x86cf40 */
  goto L_86cf40;
L_86cf4a: /* 86cf4a: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86cf4c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86cf4e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86cf4f: mov ecx, ebx */
  ecx = ebx;
/* 86cf51: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x86cf57u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 86cf57: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 86cf58: jmp 0x86ce80 */
  goto L_86ce80;
L_86cf5d: /* 86cf5d: cmp dword ptr [edi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86cf60: jne 0x86cf7a */
  if (!zf) goto L_86cf7a;
L_86cf62: /* 86cf62: push 0x622 */
  { uint32_t v = 0x622u; esp -= 4; W32(esp, v); }
/* 86cf67: push 0xae568c */
  { uint32_t v = 0xae568cu; esp -= 4; W32(esp, v); }
/* 86cf6c: push 0xae56a4 */
  { uint32_t v = 0xae56a4u; esp -= 4; W32(esp, v); }
/* 86cf71: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x86cf77u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 86cf77: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_86cf7a: /* 86cf7a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 86cf7d: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 86cf7f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86cf81: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86cf82: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x86cf85u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86cf85: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86cf87: je 0x86cf9e */
  if (zf) goto L_86cf9e;
L_86cf89: /* 86cf89: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 86cf8c: mov dword ptr [ebp + eax*4 - 0xd48], edi */
  W32((uint32_t)(ebp + eax*4 + 0xfffff2b8u), edi);
/* 86cf93: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 86cf94: cmp eax, 0x100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86cf99: mov dword ptr [ebp - 0x54], eax */
  W32((uint32_t)(ebp + 0xffffffacu), eax);
/* 86cf9c: je 0x86cfa4 */
  if (zf) goto L_86cfa4;
L_86cf9e: /* 86cf9e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 86cf9f: jmp 0x86ce80 */
  goto L_86ce80;
L_86cfa4: /* 86cfa4: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 86cfa7: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 86cfaa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86cfac: jne 0x86d027 */
  if (!zf) goto L_86d027;
L_86cfae: /* 86cfae: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86cfb1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86cfb3: je 0x86d027 */
  if (zf) goto L_86d027;
L_86cfb5: /* 86cfb5: mov esi, dword ptr [ebp - 0x28] */
  esi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86cfb8: xor ebx, ebx */
  ebx = 0;
/* 86cfba: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_86cfc0: /* 86cfc0: cmp ebx, dword ptr [esi + 0x100] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x100u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86cfc6: jge 0x86d015 */
  if ((sf == of)) goto L_86d015;
L_86cfc8: /* 86cfc8: mov edx, dword ptr [esi + 0xfc] */
  edx = R32((uint32_t)(esi + 0xfcu));
/* 86cfce: mov edi, dword ptr [edx + ebx*4] */
  edi = R32((uint32_t)(edx + ebx*4));
/* 86cfd1: mov eax, dword ptr [esi + 0xf0] */
  eax = R32((uint32_t)(esi + 0xf0u));
/* 86cfd7: imul edi, edi, 0xa4 */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0xa4u);
  edi = (uint32_t)r;
  }
/* 86cfdd: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 86cfdf: lea ecx, [edi + 0x98] */
  ecx = (uint32_t)(edi + 0x98u);
/* 86cfe5: xor eax, eax */
  eax = 0;
L_86cfe7: /* 86cfe7: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86cfea: jge 0x86cfef */
  if ((sf == of)) goto L_86cfef;
L_86cfec: /* 86cfec: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 86cfed: jmp 0x86cfe7 */
  goto L_86cfe7;
L_86cfef: /* 86cfef: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86cff1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86cff3: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x86cff9u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 86cff9: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 86cffc: mov edx, dword ptr [edi + 0x24] */
  edx = R32((uint32_t)(edi + 0x24u));
/* 86cfff: imul eax, eax, 0x6c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x6cu);
  eax = (uint32_t)r;
  }
/* 86d002: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 86d003: mov dword ptr [edi + 0x24], edx */
  W32((uint32_t)(edi + 0x24u), edx);
/* 86d006: mov ecx, dword ptr [esi + 0xe4] */
  ecx = R32((uint32_t)(esi + 0xe4u));
/* 86d00c: lea eax, [eax + ecx + 0x68] */
  eax = (uint32_t)(eax + ecx + 0x68u);
/* 86d010: inc dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax), r);
  }
/* 86d012: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 86d013: jmp 0x86cfc0 */
  goto L_86cfc0;
L_86d015: /* 86d015: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86d017: lea ecx, [esi + 0xfc] */
  ecx = (uint32_t)(esi + 0xfcu);
/* 86d01d: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86d01f: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x86d025u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 86d025: jmp 0x86d02a */
  goto L_86d02a;
L_86d027: /* 86d027: mov esi, dword ptr [ebp - 0x28] */
  esi = R32((uint32_t)(ebp + 0xffffffd8u));
L_86d02a: /* 86d02a: lea edx, [ebp - 0x4c8] */
  edx = (uint32_t)(ebp + 0xfffffb38u);
/* 86d030: lea eax, [ebp - 0x948] */
  eax = (uint32_t)(ebp + 0xfffff6b8u);
/* 86d036: mov dword ptr [0xcd8ae0], edx */
  W32((uint32_t)(0xcd8ae0u), edx);
/* 86d03c: mov edx, dword ptr [ebp - 0x48] */
  edx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 86d03f: mov dword ptr [0xcd8ae4], eax */
  W32((uint32_t)(0xcd8ae4u), eax);
/* 86d044: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 86d047: lea ecx, [ebp - 0xd48] */
  ecx = (uint32_t)(ebp + 0xfffff2b8u);
/* 86d04d: mov dword ptr [0xcd8ae8], ecx */
  W32((uint32_t)(0xcd8ae8u), ecx);
/* 86d053: mov dword ptr [0xcd8ad4], edx */
  W32((uint32_t)(0xcd8ad4u), edx);
/* 86d059: mov dword ptr [0xcd8ad0], eax */
  W32((uint32_t)(0xcd8ad0u), eax);
/* 86d05e: jmp 0x86d0cc */
  goto L_86d0cc;
L_86d0cc: /* 86d0cc: mov esi, dword ptr [esi + 0xc4] */
  esi = R32((uint32_t)(esi + 0xc4u));
/* 86d0d2: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86d0d4: lea edi, [esi*4] */
  edi = (uint32_t)(esi*4);
/* 86d0db: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86d0dc: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86d0e1: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86d0e7u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86d0e7: mov edx, eax */
  edx = eax;
/* 86d0e9: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 86d0ec: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 86d0ef: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86d0f2: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86d0f5: xor eax, eax */
  eax = 0;
/* 86d0f7: mov ebx, ecx */
  ebx = ecx;
/* 86d0f9: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 86d0fc: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 86d0ff: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 86d101: mov ecx, ebx */
  ecx = ebx;
/* 86d103: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 86d105: mov esi, dword ptr [ebp - 0x28] */
  esi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86d108: mov dword ptr [ebp - 0x198], edx */
  W32((uint32_t)(ebp + 0xfffffe68u), edx);
/* 86d10e: mov eax, dword ptr [esi + 0xc4] */
  eax = R32((uint32_t)(esi + 0xc4u));
/* 86d114: lea edi, [eax*4] */
  edi = (uint32_t)(eax*4);
/* 86d11b: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86d11d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86d11e: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86d123: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86d129u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86d129: mov edx, eax */
  edx = eax;
/* 86d12b: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 86d12e: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 86d131: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86d134: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86d137: xor eax, eax */
  eax = 0;
/* 86d139: mov ebx, ecx */
  ebx = ecx;
/* 86d13b: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 86d13e: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 86d141: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 86d143: mov ecx, ebx */
  ecx = ebx;
/* 86d145: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 86d147: mov dword ptr [ebp - 0x194], edx */
  W32((uint32_t)(ebp + 0xfffffe6cu), edx);
/* 86d14d: mov eax, dword ptr [esi + 0x9c] */
  eax = R32((uint32_t)(esi + 0x9cu));
/* 86d153: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86d156: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 86d157: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 86d15a: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86d15c: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 86d15f: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86d161: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86d162: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86d167: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 86d16a: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86d170u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86d170: mov edx, eax */
  edx = eax;
/* 86d172: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 86d175: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86d178: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86d17b: xor eax, eax */
  eax = 0;
/* 86d17d: mov ebx, ecx */
  ebx = ecx;
/* 86d17f: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 86d182: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 86d185: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 86d187: mov ecx, ebx */
  ecx = ebx;
/* 86d189: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 86d18b: mov esi, dword ptr [ebp - 0x38] */
  esi = R32((uint32_t)(ebp + 0xffffffc8u));
/* 86d18e: xor eax, eax */
  eax = 0;
/* 86d190: mov dword ptr [ebp - 0x1a0], edx */
  W32((uint32_t)(ebp + 0xfffffe60u), edx);
/* 86d196: mov dword ptr [ebp - 0x190], eax */
  W32((uint32_t)(ebp + 0xfffffe70u), eax);
/* 86d19c: mov dword ptr [ebp - 0x18c], eax */
  W32((uint32_t)(ebp + 0xfffffe74u), eax);
/* 86d1a2: mov dword ptr [ebp - 0x188], esi */
  W32((uint32_t)(ebp + 0xfffffe78u), esi);
/* 86d1a8: mov eax, dword ptr [esi + 0x1114] */
  eax = R32((uint32_t)(esi + 0x1114u));
/* 86d1ae: lea ecx, [eax*4] */
  ecx = (uint32_t)(eax*4);
/* 86d1b5: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86d1b7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86d1b8: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86d1bd: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86d1c3u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86d1c3: mov dword ptr [ebp - 0x184], eax */
  W32((uint32_t)(ebp + 0xfffffe7cu), eax);
/* 86d1c9: mov eax, dword ptr [esi + 0x1114] */
  eax = R32((uint32_t)(esi + 0x1114u));
/* 86d1cf: lea edi, [eax*4] */
  edi = (uint32_t)(eax*4);
/* 86d1d6: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86d1d8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86d1d9: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86d1de: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86d1e4u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86d1e4: mov edx, eax */
  edx = eax;
/* 86d1e6: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 86d1e9: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 86d1ec: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86d1ef: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86d1f2: xor eax, eax */
  eax = 0;
/* 86d1f4: mov ebx, ecx */
  ebx = ecx;
/* 86d1f6: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 86d1f9: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 86d1fc: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 86d1fe: mov ecx, ebx */
  ecx = ebx;
/* 86d200: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 86d202: mov dword ptr [ebp - 0x180], edx */
  W32((uint32_t)(ebp + 0xfffffe80u), edx);
/* 86d208: mov esi, dword ptr [esi + 0x1114] */
  esi = R32((uint32_t)(esi + 0x1114u));
/* 86d20e: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86d210: lea edx, [esi*4] */
  edx = (uint32_t)(esi*4);
/* 86d217: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86d218: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86d21d: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86d223u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86d223: mov ecx, dword ptr [0xcd8ad8] */
  ecx = R32((uint32_t)(0xcd8ad8u));
/* 86d229: mov esi, dword ptr [ebp - 0x28] */
  esi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86d22c: mov dword ptr [ebp - 0x17c], eax */
  W32((uint32_t)(ebp + 0xfffffe84u), eax);
/* 86d232: xor eax, eax */
  eax = 0;
/* 86d234: mov dword ptr [ebp - 0x178], eax */
  W32((uint32_t)(ebp + 0xfffffe88u), eax);
/* 86d23a: mov dword ptr [0xcd8ad8], eax */
  W32((uint32_t)(0xcd8ad8u), eax);
/* 86d23f: mov eax, dword ptr [esi + 0xdc] */
  eax = R32((uint32_t)(esi + 0xdcu));
/* 86d245: lea edi, [eax*4] */
  edi = (uint32_t)(eax*4);
/* 86d24c: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86d24e: mov dword ptr [ebp - 0x64], ecx */
  W32((uint32_t)(ebp + 0xffffff9cu), ecx);
/* 86d251: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86d252: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86d257: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86d25du); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86d25d: mov edx, eax */
  edx = eax;
/* 86d25f: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 86d262: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 86d265: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86d268: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86d26b: xor eax, eax */
  eax = 0;
/* 86d26d: mov ebx, ecx */
  ebx = ecx;
/* 86d26f: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 86d272: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 86d275: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 86d277: mov ecx, ebx */
  ecx = ebx;
/* 86d279: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 86d27b: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 86d27e: xor ebx, ebx */
  ebx = 0;
/* 86d280: mov dword ptr [ebp - 0x174], edx */
  W32((uint32_t)(ebp + 0xfffffe8cu), edx);
/* 86d286: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 86d289: mov dword ptr [ebp - 0x170], ebx */
  W32((uint32_t)(ebp + 0xfffffe90u), ebx);
/* 86d28f: mov dword ptr [ebp - 0x16c], ebx */
  W32((uint32_t)(ebp + 0xfffffe94u), ebx);
/* 86d295: mov dword ptr [ebp - 0x168], ebx */
  W32((uint32_t)(ebp + 0xfffffe98u), ebx);
/* 86d29b: mov dword ptr [ebp - 0x19c], ebx */
  W32((uint32_t)(ebp + 0xfffffe64u), ebx);
/* 86d2a1: cmp dword ptr [edx + 0x154], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x154u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86d2a7: je 0x86d38b */
  if (zf) goto L_86d38b;
L_86d2ad: /* 86d2ad: mov dword ptr [ebp - 0x1ac], ebx */
  W32((uint32_t)(ebp + 0xfffffe54u), ebx);
/* 86d2b3: mov edi, 1 */
  edi = 0x1u;
L_86d2b8: /* 86d2b8: cmp edi, dword ptr [esi + 0x118] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x118u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86d2be: jge 0x86d2f0 */
  if ((sf == of)) goto L_86d2f0;
L_86d2c0: /* 86d2c0: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86d2c2: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86d2c4: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86d2c9: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86d2cfu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86d2cf: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86d2d1: je 0x86d2e7 */
  if (zf) goto L_86d2e7;
L_86d2d3: /* 86d2d3: mov ecx, dword ptr [ebp - 0x1ac] */
  ecx = R32((uint32_t)(ebp + 0xfffffe54u));
/* 86d2d9: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 86d2db: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86d2de: mov dword ptr [ebp - 0x1ac], eax */
  W32((uint32_t)(ebp + 0xfffffe54u), eax);
/* 86d2e4: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 86d2e5: jmp 0x86d2b8 */
  goto L_86d2b8;
L_86d2e7: /* 86d2e7: mov dword ptr [ebp - 0x1ac], ebx */
  W32((uint32_t)(ebp + 0xfffffe54u), ebx);
/* 86d2ed: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 86d2ee: jmp 0x86d2b8 */
  goto L_86d2b8;
L_86d2f0: /* 86d2f0: mov ecx, dword ptr [esi + 0x118] */
  ecx = R32((uint32_t)(esi + 0x118u));
/* 86d2f6: mov eax, 1 */
  eax = 0x1u;
/* 86d2fb: xor edx, edx */
  edx = 0;
/* 86d2fd: call 0x99cc70 */
  esp -= 4; W32(esp, 0x86d302u); SPILL(); f_99cc70(); if (g_unwind) return; RELOAD();
/* 86d302: add eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 86d305: adc edx, -1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 86d308: mov dword ptr [ebp - 0x1a8], eax */
  W32((uint32_t)(ebp + 0xfffffe58u), eax);
/* 86d30e: mov dword ptr [ebp - 0x1a4], edx */
  W32((uint32_t)(ebp + 0xfffffe5cu), edx);
L_86d314: /* 86d314: cmp ebx, dword ptr [esi + 0x118] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x118u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86d31a: jge 0x86d430 */
  if ((sf == of)) goto L_86d430;
L_86d320: /* 86d320: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86d322: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86d324: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86d329: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86d32fu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86d32f: mov edi, eax */
  edi = eax;
/* 86d331: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86d333: je 0x86d37c */
  if (zf) goto L_86d37c;
L_86d335: /* 86d335: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86d337: push 0x204 */
  { uint32_t v = 0x204u; esp -= 4; W32(esp, v); }
/* 86d33c: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86d341: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86d347u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86d347: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86d349: je 0x86d368 */
  if (zf) goto L_86d368;
L_86d34b: /* 86d34b: mov ecx, eax */
  ecx = eax;
/* 86d34d: call 0x6cc784 */
  esp -= 4; W32(esp, 0x86d352u); SPILL(); f_6cc784(); if (g_unwind) return; RELOAD();
/* 86d352: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 86d354: lea eax, [ebx + ebx*2] */
  eax = (uint32_t)(ebx + ebx*2);
/* 86d357: mov dword ptr [edi + 4], 0 */
  W32((uint32_t)(edi + 0x4u), 0x0u);
/* 86d35e: mov dword ptr [ebp + eax*4 - 0x4a8], edi */
  W32((uint32_t)(ebp + eax*4 + 0xfffffb58u), edi);
/* 86d365: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 86d366: jmp 0x86d314 */
  goto L_86d314;
L_86d368: /* 86d368: xor eax, eax */
  eax = 0;
/* 86d36a: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 86d36c: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* 86d36f: lea eax, [ebx + ebx*2] */
  eax = (uint32_t)(ebx + ebx*2);
/* 86d372: mov dword ptr [ebp + eax*4 - 0x4a8], edi */
  W32((uint32_t)(ebp + eax*4 + 0xfffffb58u), edi);
/* 86d379: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 86d37a: jmp 0x86d314 */
  goto L_86d314;
L_86d37c: /* 86d37c: xor edi, edi */
  edi = 0;
/* 86d37e: lea eax, [ebx + ebx*2] */
  eax = (uint32_t)(ebx + ebx*2);
/* 86d381: mov dword ptr [ebp + eax*4 - 0x4a8], edi */
  W32((uint32_t)(ebp + eax*4 + 0xfffffb58u), edi);
/* 86d388: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 86d389: jmp 0x86d314 */
  goto L_86d314;
L_86d38b: /* 86d38b: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86d38d: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86d38f: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86d394: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86d39au); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86d39a: mov esi, eax */
  esi = eax;
/* 86d39c: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86d39e: je 0x86d3d2 */
  if (zf) goto L_86d3d2;
L_86d3a0: /* 86d3a0: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86d3a2: push 0x204 */
  { uint32_t v = 0x204u; esp -= 4; W32(esp, v); }
/* 86d3a7: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86d3ac: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86d3b2u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86d3b2: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86d3b4: je 0x86d3c7 */
  if (zf) goto L_86d3c7;
L_86d3b6: /* 86d3b6: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 86d3b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86d3b9: mov ecx, edi */
  ecx = edi;
/* 86d3bb: call dword ptr [edx + 0x24] */
  { uint32_t t = R32((uint32_t)(edx + 0x24u)); esp -= 4; W32(esp, 0x86d3beu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86d3be: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 86d3c0: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 86d3c3: mov ecx, esi */
  ecx = esi;
/* 86d3c5: jmp 0x86d3d4 */
  goto L_86d3d4;
L_86d3c7: /* 86d3c7: xor eax, eax */
  eax = 0;
/* 86d3c9: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 86d3cb: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 86d3ce: mov ecx, esi */
  ecx = esi;
/* 86d3d0: jmp 0x86d3d4 */
  goto L_86d3d4;
L_86d3d2: /* 86d3d2: xor ecx, ecx */
  ecx = 0;
L_86d3d4: /* 86d3d4: mov eax, dword ptr [edi + 0x1c8] */
  eax = R32((uint32_t)(edi + 0x1c8u));
/* 86d3da: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 86d3dd: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86d3df: mov dword ptr [ebp + eax*4 - 0x4a8], ecx */
  W32((uint32_t)(ebp + eax*4 + 0xfffffb58u), ecx);
/* 86d3e6: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86d3e8: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86d3ed: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86d3f3u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86d3f3: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86d3f5: je 0x86d40a */
  if (zf) goto L_86d40a;
L_86d3f7: /* 86d3f7: mov ecx, dword ptr [edi + 0x1c8] */
  ecx = R32((uint32_t)(edi + 0x1c8u));
/* 86d3fd: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 86d3ff: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 86d402: mov dword ptr [ebp - 0x1ac], eax */
  W32((uint32_t)(ebp + 0xfffffe54u), eax);
/* 86d408: jmp 0x86d410 */
  goto L_86d410;
L_86d40a: /* 86d40a: mov dword ptr [ebp - 0x1ac], ebx */
  W32((uint32_t)(ebp + 0xfffffe54u), ebx);
L_86d410: /* 86d410: mov ecx, dword ptr [edi + 0x1c8] */
  ecx = R32((uint32_t)(edi + 0x1c8u));
/* 86d416: mov eax, 1 */
  eax = 0x1u;
/* 86d41b: xor edx, edx */
  edx = 0;
/* 86d41d: call 0x99cc70 */
  esp -= 4; W32(esp, 0x86d422u); SPILL(); f_99cc70(); if (g_unwind) return; RELOAD();
/* 86d422: mov dword ptr [ebp - 0x1a8], eax */
  W32((uint32_t)(ebp + 0xfffffe58u), eax);
/* 86d428: mov dword ptr [ebp - 0x1a4], edx */
  W32((uint32_t)(ebp + 0xfffffe5cu), edx);
/* 86d42e: jmp 0x86d432 */
  goto L_86d432;
L_86d430: /* 86d430: xor ebx, ebx */
  ebx = 0;
L_86d432: /* 86d432: mov edx, dword ptr [0xcfa504] */
  edx = R32((uint32_t)(0xcfa504u));
/* 86d438: cmp dword ptr [edx], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86d43a: jne 0x86d49e */
  if (!zf) goto L_86d49e;
L_86d43c: /* 86d43c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 86d43f: mov ecx, dword ptr [eax + 0x1c8] */
  ecx = R32((uint32_t)(eax + 0x1c8u));
/* 86d445: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86d446: lea esi, [ebp - 0x4c8] */
  esi = (uint32_t)(ebp + 0xfffffb38u);
/* 86d44c: call 0x868660 */
  esp -= 4; W32(esp, 0x86d451u); SPILL(); f_868660(); if (g_unwind) return; RELOAD();
/* 86d451: mov edx, dword ptr [0xcfa504] */
  edx = R32((uint32_t)(0xcfa504u));
/* 86d457: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 86d459: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86d45c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86d45e: jne 0x86d49c */
  if (!zf) goto L_86d49c;
L_86d460: /* 86d460: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 86d463: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 86d466: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86d468: jne 0x86d49c */
  if (!zf) goto L_86d49c;
L_86d46a: /* 86d46a: mov ecx, eax */
  ecx = eax;
/* 86d46c: mov eax, dword ptr [ecx + 0x1c8] */
  eax = R32((uint32_t)(ecx + 0x1c8u));
/* 86d472: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86d474: jne 0x86d49c */
  if (!zf) goto L_86d49c;
L_86d476: /* 86d476: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 86d479: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86d47b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86d47d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86d47f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86d481: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86d483: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 86d487: mov byte ptr [ebp - 0x13], 0 */
  W8((uint32_t)(ebp + 0xffffffedu), 0x0u);
/* 86d48b: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 86d48f: mov byte ptr [ebp - 0x11], 0 */
  W8((uint32_t)(ebp + 0xffffffefu), 0x0u);
/* 86d493: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 86d496: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86d497: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86d499: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x86d49cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_86d49c: /* 86d49c: xor ebx, ebx */
  ebx = 0;
L_86d49e: /* 86d49e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 86d4a1: mov eax, dword ptr [edi + 0x1c8] */
  eax = R32((uint32_t)(edi + 0x1c8u));
/* 86d4a7: mov ecx, dword ptr [edi + 0x1bc] */
  ecx = R32((uint32_t)(edi + 0x1bcu));
/* 86d4ad: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 86d4b0: mov eax, dword ptr [ecx + 0x8c] */
  eax = R32((uint32_t)(ecx + 0x8cu));
/* 86d4b6: mov eax, dword ptr [eax + edx*8 + 0x11c] */
  eax = R32((uint32_t)(eax + edx*8 + 0x11cu));
/* 86d4bd: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86d4bf: jne 0x86d4c6 */
  if (!zf) goto L_86d4c6;
L_86d4c1: /* 86d4c1: mov ecx, dword ptr [ecx + 0x2c] */
  ecx = R32((uint32_t)(ecx + 0x2cu));
/* 86d4c4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
L_86d4c6: /* 86d4c6: mov edx, dword ptr [0xcfa504] */
  edx = R32((uint32_t)(0xcfa504u));
/* 86d4cc: cmp dword ptr [edx], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86d4ce: jne 0x86d4fa */
  if (!zf) goto L_86d4fa;
L_86d4d0: /* 86d4d0: cmp dword ptr [edi + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86d4d3: jne 0x86d4fa */
  if (!zf) goto L_86d4fa;
L_86d4d5: /* 86d4d5: mov ecx, dword ptr [eax + 0x358] */
  ecx = R32((uint32_t)(eax + 0x358u));
/* 86d4db: test cl, 8 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86d4de: je 0x86d4fa */
  if (zf) goto L_86d4fa;
L_86d4e0: /* 86d4e0: test cl, 4 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86d4e3: je 0x86d4fa */
  if (zf) goto L_86d4fa;
L_86d4e5: /* 86d4e5: mov eax, dword ptr [eax + 0x378] */
  eax = R32((uint32_t)(eax + 0x378u));
/* 86d4eb: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 86d4ee: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86d4f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86d4f1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86d4f2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86d4f3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86d4f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86d4f5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86d4f7: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x86d4fau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_86d4fa: /* 86d4fa: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 86d500: mov edx, dword ptr [0xce8380] */
  edx = R32((uint32_t)(0xce8380u));
/* 86d506: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 86d509: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 86d50b: mov esi, dword ptr [ebp - 0x24] */
  esi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86d50e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86d510: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 86d512: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 86d514: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 86d516: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 86d518: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 86d51b: mov dword ptr [ebp - 0x58], eax */
  W32((uint32_t)(ebp + 0xffffffa8u), eax);
/* 86d51e: xor esi, esi */
  esi = 0;
/* 86d520: call 0x6c84a9 */
  esp -= 4; W32(esp, 0x86d525u); SPILL(); f_6c84a9(); if (g_unwind) return; RELOAD();
/* 86d525: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86d527: je 0x86d537 */
  if (zf) goto L_86d537;
L_86d529: /* 86d529: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86d52e: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86d531: jne 0x86d5bc */
  if (!zf) goto L_86d5bc;
L_86d537: /* 86d537: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86d53a: mov eax, dword ptr [ecx + 0x5c] */
  eax = R32((uint32_t)(ecx + 0x5cu));
/* 86d53d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86d53f: je 0x86d5bc */
  if (zf) goto L_86d5bc;
L_86d541: /* 86d541: mov ebx, dword ptr [ebp - 0x54] */
  ebx = R32((uint32_t)(ebp + 0xffffffacu));
/* 86d544: mov edi, dword ptr [ebp - 0x48] */
  edi = R32((uint32_t)(ebp + 0xffffffb8u));
/* 86d547: lea edx, [ebx + edi] */
  edx = (uint32_t)(ebx + edi);
/* 86d54a: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86d54c: lea eax, [edx*4 + 0x2c] */
  eax = (uint32_t)(edx*4 + 0x2cu);
/* 86d553: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86d554: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86d559: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86d55fu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86d55f: mov esi, eax */
  esi = eax;
/* 86d561: lea eax, [esi + 0x2c] */
  eax = (uint32_t)(esi + 0x2cu);
/* 86d564: lea ecx, [edi*4] */
  ecx = (uint32_t)(edi*4);
/* 86d56b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86d56c: lea edx, [eax + ecx] */
  edx = (uint32_t)(eax + ecx);
/* 86d56f: lea ecx, [ebp - 0x948] */
  ecx = (uint32_t)(ebp + 0xfffff6b8u);
/* 86d575: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86d576: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86d577: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 86d57a: mov dword ptr [esi + 0x24], edi */
  W32((uint32_t)(esi + 0x24u), edi);
/* 86d57d: mov dword ptr [esi + 0x1c], edx */
  W32((uint32_t)(esi + 0x1cu), edx);
/* 86d580: mov dword ptr [esi + 0x28], ebx */
  W32((uint32_t)(esi + 0x28u), ebx);
/* 86d583: call 0x6ca83f */
  esp -= 4; W32(esp, 0x86d588u); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 86d588: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 86d58b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86d58e: lea edx, [ebx*4] */
  edx = (uint32_t)(ebx*4);
/* 86d595: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86d596: lea eax, [ebp - 0xd48] */
  eax = (uint32_t)(ebp + 0xfffff2b8u);
/* 86d59c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86d59d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86d59e: call 0x6ca83f */
  esp -= 4; W32(esp, 0x86d5a3u); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 86d5a3: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86d5a6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86d5a9: xor eax, eax */
  eax = 0;
/* 86d5ab: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 86d5ae: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 86d5b1: mov ecx, dword ptr [edx + 0x108] */
  ecx = R32((uint32_t)(edx + 0x108u));
/* 86d5b7: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 86d5ba: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_86d5bc: /* 86d5bc: mov edx, dword ptr [ebp - 0x4b0] */
  edx = R32((uint32_t)(ebp + 0xfffffb50u));
L_86d5c2: /* 86d5c2: mov eax, edx */
  eax = edx;
/* 86d5c4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86d5c6: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 86d5c9: je 0x86d6b0 */
  if (zf) goto L_86d6b0;
L_86d5cf: /* 86d5cf: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 86d5d1: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 86d5d3: cmp byte ptr [eax + 0x51], 0xb */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x51u))); uint8_t b = (uint8_t)(0xbu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 86d5d7: jne 0x86d69e */
  if (!zf) goto L_86d69e;
L_86d5dd: /* 86d5dd: mov ecx, dword ptr [eax + 0x2b4] */
  ecx = R32((uint32_t)(eax + 0x2b4u));
/* 86d5e3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86d5e5: je 0x86d69e */
  if (zf) goto L_86d69e;
L_86d5eb: /* 86d5eb: mov eax, dword ptr [ebp - 0x4c8] */
  eax = R32((uint32_t)(ebp + 0xfffffb38u));
/* 86d5f1: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 86d5f4: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 86d5f7: mov eax, dword ptr [edx + 0x534] */
  eax = R32((uint32_t)(edx + 0x534u));
/* 86d5fd: test ah, 8 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86d600: je 0x86d69e */
  if (zf) goto L_86d69e;
L_86d606: /* 86d606: mov edx, dword ptr [ebp - 0x4ac] */
  edx = R32((uint32_t)(ebp + 0xfffffb54u));
/* 86d60c: lea eax, [edi + 0x8c] */
  eax = (uint32_t)(edi + 0x8cu);
/* 86d612: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86d613: lea ecx, [ebp - 0x4ac] */
  ecx = (uint32_t)(ebp + 0xfffffb54u);
/* 86d619: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x86d61cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86d61c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86d61e: je 0x86d69e */
  if (zf) goto L_86d69e;
L_86d620: /* 86d620: mov eax, dword ptr [ebp - 0x4c8] */
  eax = R32((uint32_t)(ebp + 0xfffffb38u));
/* 86d626: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 86d629: lea ebx, [eax + 0x194] */
  ebx = (uint32_t)(eax + 0x194u);
/* 86d62f: mov eax, edi */
  eax = edi;
/* 86d631: call 0x867e00 */
  esp -= 4; W32(esp, 0x86d636u); SPILL(); f_867e00(); if (g_unwind) return; RELOAD();
/* 86d636: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86d638: je 0x86d69e */
  if (zf) goto L_86d69e;
L_86d63a: /* 86d63a: mov eax, dword ptr [ebp - 0x4c8] */
  eax = R32((uint32_t)(ebp + 0xfffffb38u));
/* 86d640: add eax, 0x194 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x194u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86d645: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 86d647: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86d648: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86d64b: mov ecx, esp */
  ecx = esp;
/* 86d64d: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 86d64f: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 86d652: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 86d655: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 86d658: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 86d65b: call 0x6c8440 */
  esp -= 4; W32(esp, 0x86d660u); SPILL(); f_6c8440(); if (g_unwind) return; RELOAD();
/* 86d660: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86d663: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86d665: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86d667: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86d66c: mov edi, eax */
  edi = eax;
/* 86d66e: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86d674u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86d674: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86d676: je 0x86d694 */
  if (zf) goto L_86d694;
L_86d678: /* 86d678: mov ecx, dword ptr [ebp - 0x4a4] */
  ecx = R32((uint32_t)(ebp + 0xfffffb5cu));
/* 86d67e: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86d681: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 86d684: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 86d686: mov dword ptr [ebp - 0x4a4], eax */
  W32((uint32_t)(ebp + 0xfffffb5cu), eax);
/* 86d68c: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 86d68f: jmp 0x86d5c2 */
  goto L_86d5c2;
L_86d694: /* 86d694: mov dword ptr [ebp - 0x4a4], 0 */
  W32((uint32_t)(ebp + 0xfffffb5cu), 0x0u);
L_86d69e: /* 86d69e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 86d6a1: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 86d6a4: jmp 0x86d5c2 */
  goto L_86d5c2;
L_86d6a9: /* 86d6a9: inc dword ptr [eax + ecx*4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + ecx*4)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + ecx*4), r);
  }
L_86d6ac: /* 86d6ac: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 86d6ae: mov edi, edi */
  edi = edi;
L_86d6b0: /* 86d6b0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86d6b2: je 0x86dd42 */
  if (zf) goto L_86dd42;
L_86d6b8: /* 86d6b8: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 86d6bb: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86d6be: mov edx, dword ptr [ecx + 0x58] */
  edx = R32((uint32_t)(ecx + 0x58u));
/* 86d6c1: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 86d6c4: mov edi, eax */
  edi = eax;
/* 86d6c6: imul edi, edi, 0x78 */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x78u);
  edi = (uint32_t)r;
  }
/* 86d6c9: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 86d6cb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86d6cd: jne 0x86dc27 */
  if (!zf) goto L_86dc27;
L_86d6d3: /* 86d6d3: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 86d6d8: mov ecx, dword ptr [0xce8384] */
  ecx = R32((uint32_t)(0xce8384u));
/* 86d6de: inc dword ptr [eax + ecx*4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + ecx*4)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + ecx*4), r);
  }
/* 86d6e1: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86d6e4: mov eax, dword ptr [edx + 0x1c8] */
  eax = R32((uint32_t)(edx + 0x1c8u));
/* 86d6ea: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86d6ec: je 0x86d715 */
  if (zf) goto L_86d715;
L_86d6ee: /* 86d6ee: mov ecx, dword ptr [ebp - 0x1a8] */
  ecx = R32((uint32_t)(ebp + 0xfffffe58u));
/* 86d6f4: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 86d6f7: mov ebx, dword ptr [ebp - 0x1a4] */
  ebx = R32((uint32_t)(ebp + 0xfffffe5cu));
/* 86d6fd: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 86d6ff: mov ecx, dword ptr [edi + 0x14] */
  ecx = R32((uint32_t)(edi + 0x14u));
/* 86d702: and ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 86d704: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  eax = r;
  }
/* 86d706: jne 0x86d715 */
  if (!zf) goto L_86d715;
L_86d708: /* 86d708: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 86d70d: mov ecx, dword ptr [0xce8388] */
  ecx = R32((uint32_t)(0xce8388u));
/* 86d713: jmp 0x86d6a9 */
  goto L_86d6a9;
L_86d715: /* 86d715: mov eax, dword ptr [edi + 0x50] */
  eax = R32((uint32_t)(edi + 0x50u));
/* 86d718: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86d71b: je 0x86d7d3 */
  if (zf) goto L_86d7d3;
L_86d721: /* 86d721: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86d724: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 86d727: mov edx, dword ptr [ecx + 0xa8] */
  edx = R32((uint32_t)(ecx + 0xa8u));
/* 86d72d: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 86d733: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86d735: mov edx, dword ptr [0xce838c] */
  edx = R32((uint32_t)(0xce838cu));
/* 86d73b: inc dword ptr [ecx + edx*4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + edx*4)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ecx + edx*4), r);
  }
/* 86d73e: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86d741: mov ecx, dword ptr [edx + 0x1c8] */
  ecx = R32((uint32_t)(edx + 0x1c8u));
/* 86d747: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86d749: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 86d74c: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 86d753: je 0x86d7aa */
  if (zf) goto L_86d7aa;
L_86d755: /* 86d755: mov eax, dword ptr [ebp - 0x1ac] */
  eax = R32((uint32_t)(ebp + 0xfffffe54u));
/* 86d75b: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 86d75e: mov edi, edi */
  edi = edi;
L_86d760: /* 86d760: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 86d763: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86d765: je 0x86d7bc */
  if (zf) goto L_86d7bc;
L_86d767: /* 86d767: mov ecx, eax */
  ecx = eax;
/* 86d769: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 86d76b: mov eax, 1 */
  eax = 0x1u;
/* 86d770: xor edx, edx */
  edx = 0;
/* 86d772: mov ecx, ebx */
  ecx = ebx;
/* 86d774: call 0x99cc70 */
  esp -= 4; W32(esp, 0x86d779u); SPILL(); f_99cc70(); if (g_unwind) return; RELOAD();
/* 86d779: and eax, dword ptr [edi + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x10u)));
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 86d77c: and edx, dword ptr [edi + 0x14] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x14u)));
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 86d77f: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  eax = r;
  }
/* 86d781: je 0x86d79f */
  if (zf) goto L_86d79f;
L_86d783: /* 86d783: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86d786: lea ecx, [ebx + ebx*2] */
  ecx = (uint32_t)(ebx + ebx*2);
/* 86d789: mov edx, dword ptr [ebp + ecx*4 - 0x4ac] */
  edx = R32((uint32_t)(ebp + ecx*4 + 0xfffffb54u));
/* 86d790: lea ecx, [ebp + ecx*4 - 0x4ac] */
  ecx = (uint32_t)(ebp + ecx*4 + 0xfffffb54u);
/* 86d797: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86d798: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x86d79bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86d79b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86d79d: jne 0x86d7d3 */
  if (!zf) goto L_86d7d3;
L_86d79f: /* 86d79f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 86d7a2: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 86d7a5: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 86d7a8: jmp 0x86d760 */
  goto L_86d760;
L_86d7aa: /* 86d7aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86d7ab: mov eax, dword ptr [ebp - 0x4ac] */
  eax = R32((uint32_t)(ebp + 0xfffffb54u));
/* 86d7b1: lea ecx, [ebp - 0x4ac] */
  ecx = (uint32_t)(ebp + 0xfffffb54u);
/* 86d7b7: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x86d7bau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86d7ba: jmp 0x86d7bf */
  goto L_86d7bf;
L_86d7bc: /* 86d7bc: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
L_86d7bf: /* 86d7bf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86d7c1: jne 0x86d7d3 */
  if (!zf) goto L_86d7d3;
L_86d7c3: /* 86d7c3: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 86d7c8: mov ecx, dword ptr [0xce8390] */
  ecx = R32((uint32_t)(0xce8390u));
/* 86d7ce: jmp 0x86d6a9 */
  goto L_86d6a9;
L_86d7d3: /* 86d7d3: xor edx, edx */
  edx = 0;
/* 86d7d5: xor ebx, ebx */
  ebx = 0;
/* 86d7d7: xor eax, eax */
  eax = 0;
/* 86d7d9: mov dword ptr [ebp - 0x60], edx */
  W32((uint32_t)(ebp + 0xffffffa0u), edx);
/* 86d7dc: mov dword ptr [ebp - 0x5c], ebx */
  W32((uint32_t)(ebp + 0xffffffa4u), ebx);
/* 86d7df: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_86d7e2: /* 86d7e2: cmp eax, dword ptr [esi + 0x24] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86d7e5: jge 0x86d853 */
  if ((sf == of)) goto L_86d853;
L_86d7e7: /* 86d7e7: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 86d7ea: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 86d7ed: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86d7ef: cmp byte ptr [eax + 0x29], 0x13 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x29u))); uint8_t b = (uint8_t)(0x13u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 86d7f3: jne 0x86d802 */
  if (!zf) goto L_86d802;
L_86d7f5: /* 86d7f5: mov dword ptr [ebp + ebx*4 - 0x13f4], ecx */
  W32((uint32_t)(ebp + ebx*4 + 0xffffec0cu), ecx);
/* 86d7fc: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 86d7fd: mov dword ptr [ebp - 0x5c], ebx */
  W32((uint32_t)(ebp + 0xffffffa4u), ebx);
/* 86d800: jmp 0x86d83f */
  goto L_86d83f;
L_86d802: /* 86d802: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 86d805: fmul dword ptr [ecx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x20u)));
/* 86d808: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 86d80b: fmul dword ptr [ecx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x1cu)));
/* 86d80e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86d810: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 86d813: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 86d815: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86d817: fsub dword ptr [edi + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0xcu)));
/* 86d81a: fld dword ptr [ecx + 0x30] */
  { double v = F32((uint32_t)(ecx + 0x30u)); FPUSH(v); }
/* 86d81d: fchs  */
  ST0 = -ST0;
/* 86d81f: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 86d821: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 86d823: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86d825: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86d828: jne 0x86d835 */
  if (!zf) goto L_86d835;
L_86d82a: /* 86d82a: mov dword ptr [ebp + ebx*4 - 0x13f4], ecx */
  W32((uint32_t)(ebp + ebx*4 + 0xffffec0cu), ecx);
/* 86d831: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 86d832: mov dword ptr [ebp - 0x5c], ebx */
  W32((uint32_t)(ebp + 0xffffffa4u), ebx);
L_86d835: /* 86d835: fcomp dword ptr [ecx + 0x30] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x30u)));
  FPOP();
/* 86d838: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86d83a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 86d83d: jp 0x86d84a */
  if (pf) goto L_86d84a;
L_86d83f: /* 86d83f: mov dword ptr [ebp + edx*4 - 0x17f4], ecx */
  W32((uint32_t)(ebp + edx*4 + 0xffffe80cu), ecx);
/* 86d846: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 86d847: mov dword ptr [ebp - 0x60], edx */
  W32((uint32_t)(ebp + 0xffffffa0u), edx);
L_86d84a: /* 86d84a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 86d84d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 86d84e: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 86d851: jmp 0x86d7e2 */
  goto L_86d7e2;
L_86d853: /* 86d853: xor edx, edx */
  edx = 0;
/* 86d855: xor ebx, ebx */
  ebx = 0;
/* 86d857: mov dword ptr [ebp - 0x50], ebx */
  W32((uint32_t)(ebp + 0xffffffb0u), ebx);
/* 86d85a: mov dword ptr [ebp - 0x4c], edx */
  W32((uint32_t)(ebp + 0xffffffb4u), edx);
/* 86d85d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_86d860: /* 86d860: cmp edx, dword ptr [esi + 0x28] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x28u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86d863: jge 0x86d916 */
  if ((sf == of)) goto L_86d916;
L_86d869: /* 86d869: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 86d86c: mov ecx, dword ptr [ecx + edx*4] */
  ecx = R32((uint32_t)(ecx + edx*4));
/* 86d86f: fld dword ptr [ecx + 0xb0] */
  { double v = F32((uint32_t)(ecx + 0xb0u)); FPUSH(v); }
/* 86d875: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 86d877: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 86d87a: fld dword ptr [ecx + 0xb4] */
  { double v = F32((uint32_t)(ecx + 0xb4u)); FPUSH(v); }
/* 86d880: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86d883: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 86d886: and eax, 0x7fffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 86d88b: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 86d88e: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 86d891: fld dword ptr [ecx + 0xb8] */
  { double v = F32((uint32_t)(ecx + 0xb8u)); FPUSH(v); }
/* 86d897: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86d89a: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 86d89d: and eax, 0x7fffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 86d8a2: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 86d8a5: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 86d8a8: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 86d8ab: and eax, 0x7fffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 86d8b0: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 86d8b3: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 86d8b6: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 86d8b9: fadd dword ptr [ebp - 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 86d8bc: fld dword ptr [ecx + 0xa8] */
  { double v = F32((uint32_t)(ecx + 0xa8u)); FPUSH(v); }
/* 86d8c2: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 86d8c5: fld dword ptr [ecx + 0xac] */
  { double v = F32((uint32_t)(ecx + 0xacu)); FPUSH(v); }
/* 86d8cb: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 86d8ce: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86d8d0: fld dword ptr [ecx + 0xa4] */
  { double v = F32((uint32_t)(ecx + 0xa4u)); FPUSH(v); }
/* 86d8d6: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 86d8d8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86d8da: fsub dword ptr [edi + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0xcu)));
/* 86d8dd: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 86d8df: fchs  */
  ST0 = -ST0;
/* 86d8e1: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 86d8e3: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 86d8e5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86d8e7: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86d8ea: jne 0x86d8fa */
  if (!zf) goto L_86d8fa;
L_86d8ec: /* 86d8ec: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 86d8ef: mov dword ptr [ebp + eax*4 - 0x1bf4], ecx */
  W32((uint32_t)(ebp + eax*4 + 0xffffe40cu), ecx);
/* 86d8f6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 86d8f7: mov dword ptr [ebp - 0x4c], eax */
  W32((uint32_t)(ebp + 0xffffffb4u), eax);
L_86d8fa: /* 86d8fa: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 86d8fc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86d8fe: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 86d900: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 86d903: jp 0x86d910 */
  if (pf) goto L_86d910;
L_86d905: /* 86d905: mov dword ptr [ebp + ebx*4 - 0x1ff4], ecx */
  W32((uint32_t)(ebp + ebx*4 + 0xffffe00cu), ecx);
/* 86d90c: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 86d90d: mov dword ptr [ebp - 0x50], ebx */
  W32((uint32_t)(ebp + 0xffffffb0u), ebx);
L_86d910: /* 86d910: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 86d911: jmp 0x86d860 */
  goto L_86d860;
L_86d916: /* 86d916: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 86d919: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 86d91c: fmul dword ptr [eax + 0x19c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x19cu)));
/* 86d922: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 86d925: fmul dword ptr [eax + 0x198] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x198u)));
/* 86d92b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86d92d: fld dword ptr [eax + 0x194] */
  { double v = F32((uint32_t)(eax + 0x194u)); FPUSH(v); }
/* 86d933: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 86d935: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86d937: fsub dword ptr [edi + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0xcu)));
/* 86d93a: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 86d940: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86d942: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86d945: jne 0x86d94e */
  if (!zf) goto L_86d94e;
L_86d947: /* 86d947: mov ebx, 1 */
  ebx = 0x1u;
/* 86d94c: jmp 0x86d950 */
  goto L_86d950;
L_86d94e: /* 86d94e: xor ebx, ebx */
  ebx = 0;
L_86d950: /* 86d950: mov edx, 9 */
  edx = 0x9u;
/* 86d955: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 86d957: mov dword ptr [esi + 0x18], 1 */
  W32((uint32_t)(esi + 0x18u), 0x1u);
/* 86d95e: mov eax, dword ptr [edi + edx*4] */
  eax = R32((uint32_t)(edi + edx*4));
/* 86d961: mov ecx, 1 */
  ecx = 0x1u;
/* 86d966: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* 86d968: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 86d96b: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 86d96e: je 0x86d988 */
  if (zf) goto L_86d988;
L_86d970: /* 86d970: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86d972: jne 0x86d981 */
  if (!zf) goto L_86d981;
L_86d974: /* 86d974: mov al, byte ptr [edi + 0x56] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x56u))) & 0xffu);
/* 86d977: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 86d979: jbe 0x86d9a0 */
  if ((cf | zf)) goto L_86d9a0;
L_86d97b: /* 86d97b: test byte ptr [edi + 0x57], 0x21 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x57u))); uint8_t b = (uint8_t)(0x21u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86d97f: jne 0x86d9a0 */
  if (!zf) goto L_86d9a0;
L_86d981: /* 86d981: mov eax, 1 */
  eax = 0x1u;
/* 86d986: jmp 0x86d9a2 */
  goto L_86d9a2;
L_86d988: /* 86d988: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86d98a: je 0x86d9a0 */
  if (zf) goto L_86d9a0;
L_86d98c: /* 86d98c: mov al, byte ptr [edi + 0x56] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x56u))) & 0xffu);
/* 86d98f: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 86d991: jbe 0x86d999 */
  if ((cf | zf)) goto L_86d999;
L_86d993: /* 86d993: test byte ptr [edi + 0x57], 0x21 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x57u))); uint8_t b = (uint8_t)(0x21u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86d997: je 0x86d9a0 */
  if (zf) goto L_86d9a0;
L_86d999: /* 86d999: mov eax, 1 */
  eax = 0x1u;
/* 86d99e: jmp 0x86d9a2 */
  goto L_86d9a2;
L_86d9a0: /* 86d9a0: xor eax, eax */
  eax = 0;
L_86d9a2: /* 86d9a2: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 86d9a5: mov edx, 0x17 */
  edx = 0x17u;
/* 86d9aa: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 86d9ac: mov eax, dword ptr [edi + edx*4] */
  eax = R32((uint32_t)(edi + edx*4));
/* 86d9af: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 86d9b2: lea eax, [ebx*4] */
  eax = (uint32_t)(ebx*4);
/* 86d9b9: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 86d9bc: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 86d9be: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 86d9c0: lea edx, [ecx*4] */
  edx = (uint32_t)(ecx*4);
/* 86d9c7: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 86d9ca: mov eax, ebx */
  eax = ebx;
/* 86d9cc: shl eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 86d9cf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86d9d0: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 86d9d3: lea ecx, [ebp - 0x13f4] */
  ecx = (uint32_t)(ebp + 0xffffec0cu);
/* 86d9d9: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 86d9db: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86d9dc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86d9dd: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 86d9e0: call 0x6ca83f */
  esp -= 4; W32(esp, 0x86d9e5u); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 86d9e5: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86d9e8: mov dword ptr [esi + 0x24], eax */
  W32((uint32_t)(esi + 0x24u), eax);
/* 86d9eb: lea eax, [ebx*4] */
  eax = (uint32_t)(ebx*4);
/* 86d9f2: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 86d9f5: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 86d9f7: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86d9f9: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 86d9fc: lea edx, [eax*4] */
  edx = (uint32_t)(eax*4);
/* 86da03: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86da06: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86da07: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 86da0a: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 86da0d: lea eax, [ebp - 0x1bf4] */
  eax = (uint32_t)(ebp + 0xffffe40cu);
/* 86da13: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 86da15: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86da16: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86da17: call 0x6ca83f */
  esp -= 4; W32(esp, 0x86da1cu); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 86da1c: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86da1f: mov dword ptr [esi + 0x28], edx */
  W32((uint32_t)(esi + 0x28u), edx);
/* 86da22: mov ecx, dword ptr [edi + ebx*4 + 0x20] */
  ecx = R32((uint32_t)(edi + ebx*4 + 0x20u));
/* 86da26: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 86da29: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86da2c: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86da2e: je 0x86db2e */
  if (zf) goto L_86db2e;
L_86da34: /* 86da34: mov eax, dword ptr [ebp + ebx*4 - 0x50] */
  eax = R32((uint32_t)(ebp + ebx*4 + 0xffffffb0u));
/* 86da38: mov ecx, dword ptr [ebp + ebx*4 - 0x60] */
  ecx = R32((uint32_t)(ebp + ebx*4 + 0xffffffa0u));
/* 86da3c: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 86da3f: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 86da41: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 86da44: lea eax, [ecx*4 + 0x2c] */
  eax = (uint32_t)(ecx*4 + 0x2cu);
/* 86da4b: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86da4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86da4e: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86da53: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86da59u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86da59: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86da5c: mov ecx, eax */
  ecx = eax;
/* 86da5e: mov dword ptr [ecx + 0x24], edx */
  W32((uint32_t)(ecx + 0x24u), edx);
/* 86da61: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 86da64: lea eax, [ecx + 0x2c] */
  eax = (uint32_t)(ecx + 0x2cu);
/* 86da67: lea edx, [eax + edx*4] */
  edx = (uint32_t)(eax + edx*4);
/* 86da6a: mov dword ptr [ecx + 0x1c], edx */
  W32((uint32_t)(ecx + 0x1cu), edx);
/* 86da6d: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86da70: mov dword ptr [ecx + 0x28], edx */
  W32((uint32_t)(ecx + 0x28u), edx);
/* 86da73: mov dword ptr [ecx + 0x20], eax */
  W32((uint32_t)(ecx + 0x20u), eax);
/* 86da76: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86da79: lea edx, [ecx*4] */
  edx = (uint32_t)(ecx*4);
/* 86da80: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 86da83: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86da84: lea edx, [ebp + ecx - 0x17f4] */
  edx = (uint32_t)(ebp + ecx + 0xffffe80cu);
/* 86da8b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86da8c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86da8d: call 0x6ca83f */
  esp -= 4; W32(esp, 0x86da92u); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 86da92: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86da95: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 86da98: lea ecx, [eax*4] */
  ecx = (uint32_t)(eax*4);
/* 86da9f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86daa2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86daa3: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86daa6: lea eax, [ebp + edx - 0x1ff4] */
  eax = (uint32_t)(ebp + edx + 0xffffe00cu);
/* 86daad: mov edx, dword ptr [ecx + 0x1c] */
  edx = R32((uint32_t)(ecx + 0x1cu));
/* 86dab0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86dab1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86dab2: call 0x6ca83f */
  esp -= 4; W32(esp, 0x86dab7u); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 86dab7: mov ecx, dword ptr [edi + ebx*4 + 0x20] */
  ecx = R32((uint32_t)(edi + ebx*4 + 0x20u));
/* 86dabb: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86dabe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86dac1: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86dac3: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86dac6: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 86dac9: je 0x86daf4 */
  if (zf) goto L_86daf4;
L_86dacb: /* 86dacb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86dacd: jne 0x86dadc */
  if (!zf) goto L_86dadc;
L_86dacf: /* 86dacf: mov cl, byte ptr [edi + 0x56] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x56u))) & 0xffu);
/* 86dad2: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 86dad4: jbe 0x86db1d */
  if ((cf | zf)) goto L_86db1d;
L_86dad6: /* 86dad6: test byte ptr [edi + 0x57], 0x21 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x57u))); uint8_t b = (uint8_t)(0x21u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86dada: jne 0x86db1d */
  if (!zf) goto L_86db1d;
L_86dadc: /* 86dadc: mov ecx, 1 */
  ecx = 0x1u;
/* 86dae1: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 86dae3: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 86dae6: mov dword ptr [eax + 0x18], 0 */
  W32((uint32_t)(eax + 0x18u), 0x0u);
/* 86daed: mov esi, eax */
  esi = eax;
/* 86daef: jmp 0x86d6b0 */
  goto L_86d6b0;
L_86daf4: /* 86daf4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86daf6: je 0x86db1d */
  if (zf) goto L_86db1d;
L_86daf8: /* 86daf8: mov cl, byte ptr [edi + 0x56] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x56u))) & 0xffu);
/* 86dafb: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 86dafd: jbe 0x86db05 */
  if ((cf | zf)) goto L_86db05;
L_86daff: /* 86daff: test byte ptr [edi + 0x57], 0x21 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x57u))); uint8_t b = (uint8_t)(0x21u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86db03: je 0x86db1d */
  if (zf) goto L_86db1d;
L_86db05: /* 86db05: mov ecx, 1 */
  ecx = 0x1u;
/* 86db0a: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 86db0c: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 86db0f: mov dword ptr [eax + 0x18], 0 */
  W32((uint32_t)(eax + 0x18u), 0x0u);
/* 86db16: mov esi, eax */
  esi = eax;
/* 86db18: jmp 0x86d6b0 */
  goto L_86d6b0;
L_86db1d: /* 86db1d: xor ecx, ecx */
  ecx = 0;
/* 86db1f: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 86db21: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 86db24: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 86db27: mov esi, eax */
  esi = eax;
/* 86db29: jmp 0x86d6b0 */
  goto L_86d6b0;
L_86db2e: /* 86db2e: cmp dword ptr [edi + ebx*4 + 0x58], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + ebx*4 + 0x58u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86db32: je 0x86d6b0 */
  if (zf) goto L_86d6b0;
L_86db38: /* 86db38: mov eax, dword ptr [ebp + ebx*4 - 0x60] */
  eax = R32((uint32_t)(ebp + ebx*4 + 0xffffffa0u));
/* 86db3c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86db3e: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 86db41: je 0x86dba3 */
  if (zf) goto L_86dba3;
L_86db43: /* 86db43: mov edx, ebx */
  edx = ebx;
/* 86db45: shl edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 86db48: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 86db4a: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86db4c: lea eax, [eax*4 + 4] */
  eax = (uint32_t)(eax*4 + 0x4u);
/* 86db53: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86db54: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86db59: mov dword ptr [ebp + edx*4 - 0x17f4], 0 */
  W32((uint32_t)(ebp + edx*4 + 0xffffe80cu), 0x0u);
/* 86db64: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86db6au); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86db6a: mov ecx, dword ptr [edi + ebx*4 + 0x58] */
  ecx = R32((uint32_t)(edi + ebx*4 + 0x58u));
/* 86db6e: mov edx, dword ptr [ebp - 0x198] */
  edx = R32((uint32_t)(ebp + 0xfffffe68u));
/* 86db74: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* 86db77: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86db7a: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 86db7d: lea ecx, [eax*4 + 4] */
  ecx = (uint32_t)(eax*4 + 0x4u);
/* 86db84: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86db85: mov ecx, dword ptr [edi + ebx*4 + 0x58] */
  ecx = R32((uint32_t)(edi + ebx*4 + 0x58u));
/* 86db89: lea eax, [ebp + edx - 0x17f4] */
  eax = (uint32_t)(ebp + edx + 0xffffe80cu);
/* 86db90: mov edx, dword ptr [ebp - 0x198] */
  edx = R32((uint32_t)(ebp + 0xfffffe68u));
/* 86db96: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86db97: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 86db9a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86db9b: call 0x6ca83f */
  esp -= 4; W32(esp, 0x86dba0u); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 86dba0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_86dba3: /* 86dba3: mov eax, dword ptr [ebp + ebx*4 - 0x50] */
  eax = R32((uint32_t)(ebp + ebx*4 + 0xffffffb0u));
/* 86dba7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86dba9: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 86dbac: je 0x86dc0e */
  if (zf) goto L_86dc0e;
L_86dbae: /* 86dbae: mov ecx, ebx */
  ecx = ebx;
/* 86dbb0: shl ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 86dbb3: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 86dbb5: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86dbb7: lea edx, [eax*4 + 4] */
  edx = (uint32_t)(eax*4 + 0x4u);
/* 86dbbe: mov dword ptr [ebp + ecx*4 - 0x1ff4], 0 */
  W32((uint32_t)(ebp + ecx*4 + 0xffffe00cu), 0x0u);
/* 86dbc9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86dbca: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86dbcf: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86dbd5u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86dbd5: mov ecx, dword ptr [edi + ebx*4 + 0x58] */
  ecx = R32((uint32_t)(edi + ebx*4 + 0x58u));
/* 86dbd9: mov edx, dword ptr [ebp - 0x194] */
  edx = R32((uint32_t)(ebp + 0xfffffe6cu));
/* 86dbdf: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* 86dbe2: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86dbe5: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 86dbe8: lea ecx, [eax*4 + 4] */
  ecx = (uint32_t)(eax*4 + 0x4u);
/* 86dbef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86dbf0: mov ecx, dword ptr [edi + ebx*4 + 0x58] */
  ecx = R32((uint32_t)(edi + ebx*4 + 0x58u));
/* 86dbf4: lea eax, [ebp + edx - 0x1ff4] */
  eax = (uint32_t)(ebp + edx + 0xffffe00cu);
/* 86dbfb: mov edx, dword ptr [ebp - 0x194] */
  edx = R32((uint32_t)(ebp + 0xfffffe6cu));
/* 86dc01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86dc02: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 86dc05: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86dc06: call 0x6ca83f */
  esp -= 4; W32(esp, 0x86dc0bu); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 86dc0b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_86dc0e: /* 86dc0e: mov ecx, dword ptr [edi + ebx*4 + 0x58] */
  ecx = R32((uint32_t)(edi + ebx*4 + 0x58u));
/* 86dc12: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86dc13: lea edx, [ebp - 0x4c8] */
  edx = (uint32_t)(ebp + 0xfffffb38u);
/* 86dc19: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86dc1a: call 0x86a500 */
  esp -= 4; W32(esp, 0x86dc1fu); SPILL(); f_86a500(); if (g_unwind) return; RELOAD();
/* 86dc1f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86dc22: jmp 0x86d6b0 */
  goto L_86d6b0;
L_86dc27: /* 86dc27: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 86dc2a: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* 86dc2d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86dc2e: mov ecx, dword ptr [esi + 0x24] */
  ecx = R32((uint32_t)(esi + 0x24u));
/* 86dc31: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86dc32: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 86dc35: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86dc36: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86dc37: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86dc38: lea eax, [ebp - 0x4c8] */
  eax = (uint32_t)(ebp + 0xfffffb38u);
/* 86dc3e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86dc3f: call 0x86b3f0 */
  esp -= 4; W32(esp, 0x86dc44u); SPILL(); f_86b3f0(); if (g_unwind) return; RELOAD();
/* 86dc44: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 86dc47: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86dc4a: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86dc4d: je 0x86dc64 */
  if (zf) goto L_86dc64;
L_86dc4f: /* 86dc4f: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 86dc52: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 86dc55: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 86dc58: mov dword ptr [esi + 0x18], 0 */
  W32((uint32_t)(esi + 0x18u), 0x0u);
/* 86dc5f: jmp 0x86d6b0 */
  goto L_86d6b0;
L_86dc64: /* 86dc64: cmp dword ptr [esi + 0x14], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x14u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86dc68: je 0x86d6ac */
  if (zf) goto L_86d6ac;
L_86dc6e: /* 86dc6e: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 86dc71: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86dc73: je 0x86dccc */
  if (zf) goto L_86dccc;
L_86dc75: /* 86dc75: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86dc77: lea edx, [eax*4 + 4] */
  edx = (uint32_t)(eax*4 + 0x4u);
/* 86dc7e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86dc7f: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86dc84: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86dc8au); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86dc8a: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 86dc8d: mov edx, dword ptr [ebp - 0x198] */
  edx = R32((uint32_t)(ebp + 0xfffffe68u));
/* 86dc93: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* 86dc96: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 86dc99: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 86dc9c: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* 86dc9f: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 86dca2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86dca3: mov eax, dword ptr [ebp - 0x198] */
  eax = R32((uint32_t)(ebp + 0xfffffe68u));
/* 86dca9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86dcaa: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 86dcad: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86dcae: call 0x6ca83f */
  esp -= 4; W32(esp, 0x86dcb3u); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 86dcb3: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* 86dcb6: mov ecx, dword ptr [ebp - 0x198] */
  ecx = R32((uint32_t)(ebp + 0xfffffe68u));
/* 86dcbc: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 86dcbf: mov edx, dword ptr [ecx + edx*4] */
  edx = R32((uint32_t)(ecx + edx*4));
/* 86dcc2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86dcc5: mov dword ptr [edx + eax*4], 0 */
  W32((uint32_t)(edx + eax*4), 0x0u);
L_86dccc: /* 86dccc: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 86dccf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86dcd1: je 0x86dd2a */
  if (zf) goto L_86dd2a;
L_86dcd3: /* 86dcd3: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86dcd5: lea eax, [eax*4 + 4] */
  eax = (uint32_t)(eax*4 + 0x4u);
/* 86dcdc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86dcdd: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86dce2: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86dce8u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86dce8: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 86dceb: mov edx, dword ptr [ebp - 0x194] */
  edx = R32((uint32_t)(ebp + 0xfffffe6cu));
/* 86dcf1: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* 86dcf4: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 86dcf7: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 86dcfa: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* 86dcfd: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 86dd00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86dd01: mov eax, dword ptr [ebp - 0x194] */
  eax = R32((uint32_t)(ebp + 0xfffffe6cu));
/* 86dd07: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86dd08: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 86dd0b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86dd0c: call 0x6ca83f */
  esp -= 4; W32(esp, 0x86dd11u); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 86dd11: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* 86dd14: mov ecx, dword ptr [ebp - 0x194] */
  ecx = R32((uint32_t)(ebp + 0xfffffe6cu));
/* 86dd1a: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 86dd1d: mov edx, dword ptr [ecx + edx*4] */
  edx = R32((uint32_t)(ecx + edx*4));
/* 86dd20: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86dd23: mov dword ptr [edx + eax*4], 0 */
  W32((uint32_t)(edx + eax*4), 0x0u);
L_86dd2a: /* 86dd2a: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 86dd2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86dd2e: lea ecx, [ebp - 0x4c8] */
  ecx = (uint32_t)(ebp + 0xfffffb38u);
/* 86dd34: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86dd35: call 0x86a500 */
  esp -= 4; W32(esp, 0x86dd3au); SPILL(); f_86a500(); if (g_unwind) return; RELOAD();
/* 86dd3a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86dd3d: jmp 0x86d6ac */
  goto L_86d6ac;
L_86dd42: /* 86dd42: mov edi, dword ptr [ebp - 0x4b0] */
  edi = R32((uint32_t)(ebp + 0xfffffb50u));
L_86dd48: /* 86dd48: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86dd4a: je 0x86dded */
  if (zf) goto L_86dded;
L_86dd50: /* 86dd50: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 86dd52: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 86dd54: cmp byte ptr [eax + 0x51], 0xb */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x51u))); uint8_t b = (uint8_t)(0xbu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 86dd58: jne 0x86dd7b */
  if (!zf) goto L_86dd7b;
L_86dd5a: /* 86dd5a: mov ecx, dword ptr [eax + 0x2b4] */
  ecx = R32((uint32_t)(eax + 0x2b4u));
/* 86dd60: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86dd62: je 0x86dd7b */
  if (zf) goto L_86dd7b;
L_86dd64: /* 86dd64: mov edx, dword ptr [ebp - 0x4c8] */
  edx = R32((uint32_t)(ebp + 0xfffffb38u));
/* 86dd6a: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 86dd6d: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 86dd70: mov eax, dword ptr [ecx + 0x534] */
  eax = R32((uint32_t)(ecx + 0x534u));
/* 86dd76: test ah, 8 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86dd79: jne 0x86dde5 */
  if (!zf) goto L_86dde5;
L_86dd7b: /* 86dd7b: mov eax, dword ptr [ebp - 0x4ac] */
  eax = R32((uint32_t)(ebp + 0xfffffb54u));
/* 86dd81: lea edx, [esi + 0x8c] */
  edx = (uint32_t)(esi + 0x8cu);
/* 86dd87: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86dd88: lea ecx, [ebp - 0x4ac] */
  ecx = (uint32_t)(ebp + 0xfffffb54u);
/* 86dd8e: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x86dd91u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86dd91: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86dd93: je 0x86dde5 */
  if (zf) goto L_86dde5;
L_86dd95: /* 86dd95: mov eax, dword ptr [ebp - 0x4c8] */
  eax = R32((uint32_t)(ebp + 0xfffffb38u));
/* 86dd9b: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 86dd9e: lea ebx, [eax + 0x194] */
  ebx = (uint32_t)(eax + 0x194u);
/* 86dda4: mov eax, esi */
  eax = esi;
/* 86dda6: call 0x867e00 */
  esp -= 4; W32(esp, 0x86ddabu); SPILL(); f_867e00(); if (g_unwind) return; RELOAD();
/* 86ddab: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86ddad: je 0x86dde5 */
  if (zf) goto L_86dde5;
L_86ddaf: /* 86ddaf: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86ddb1: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86ddb3: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86ddb8: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86ddbeu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86ddbe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86ddc0: je 0x86dddb */
  if (zf) goto L_86dddb;
L_86ddc2: /* 86ddc2: mov ecx, dword ptr [ebp - 0x190] */
  ecx = R32((uint32_t)(ebp + 0xfffffe70u));
/* 86ddc8: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 86ddca: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86ddcd: mov dword ptr [ebp - 0x190], eax */
  W32((uint32_t)(ebp + 0xfffffe70u), eax);
/* 86ddd3: mov edi, dword ptr [edi + 4] */
  edi = R32((uint32_t)(edi + 0x4u));
/* 86ddd6: jmp 0x86dd48 */
  goto L_86dd48;
L_86dddb: /* 86dddb: mov dword ptr [ebp - 0x190], 0 */
  W32((uint32_t)(ebp + 0xfffffe70u), 0x0u);
L_86dde5: /* 86dde5: mov edi, dword ptr [edi + 4] */
  edi = R32((uint32_t)(edi + 0x4u));
/* 86dde8: jmp 0x86dd48 */
  goto L_86dd48;
L_86dded: /* 86dded: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 86ddf3: mov edx, dword ptr [0xce8394] */
  edx = R32((uint32_t)(0xce8394u));
/* 86ddf9: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 86ddfc: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 86ddfe: mov esi, dword ptr [ebp - 0x58] */
  esi = R32((uint32_t)(ebp + 0xffffffa8u));
/* 86de01: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86de03: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 86de05: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 86de07: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 86de09: mov eax, dword ptr [0xcfab30] */
  eax = R32((uint32_t)(0xcfab30u));
/* 86de0e: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86de11: je 0x86de23 */
  if (zf) goto L_86de23;
L_86de13: /* 86de13: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 86de16: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 86de19: mov eax, dword ptr [edx + 0x70] */
  eax = R32((uint32_t)(edx + 0x70u));
/* 86de1c: mov ecx, dword ptr [eax + 0x6c] */
  ecx = R32((uint32_t)(eax + 0x6cu));
/* 86de1f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86de21: jne 0x86de9e */
  if (!zf) goto L_86de9e;
L_86de23: /* 86de23: mov ecx, dword ptr [0xcfa504] */
  ecx = R32((uint32_t)(0xcfa504u));
/* 86de29: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86de2c: jne 0x86de9e */
  if (!zf) goto L_86de9e;
L_86de2e: /* 86de2e: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86de31: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 86de34: mov ecx, dword ptr [eax + 0x70] */
  ecx = R32((uint32_t)(eax + 0x70u));
/* 86de37: mov eax, dword ptr [ecx + 0x54] */
  eax = R32((uint32_t)(ecx + 0x54u));
/* 86de3a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86de3c: jne 0x86de9e */
  if (!zf) goto L_86de9e;
L_86de3e: /* 86de3e: mov esi, dword ptr [ebp - 0x19c] */
  esi = R32((uint32_t)(ebp + 0xfffffe64u));
/* 86de44: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 86de47: xor ebx, ebx */
  ebx = 0;
/* 86de49: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_86de50: /* 86de50: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86de52: je 0x86de71 */
  if (zf) goto L_86de71;
L_86de54: /* 86de54: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 86de56: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86de58: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86de59: mov ebx, 1 */
  ebx = 0x1u;
/* 86de5e: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x86de61u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86de61: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 86de63: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86de65: je 0x86de6c */
  if (zf) goto L_86de6c;
L_86de67: /* 86de67: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86de69: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86de6a: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x86de6cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_86de6c: /* 86de6c: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 86de6f: jmp 0x86de50 */
  goto L_86de50;
L_86de71: /* 86de71: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86de73: je 0x86de9e */
  if (zf) goto L_86de9e;
L_86de75: /* 86de75: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 86de78: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86de7a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86de7c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86de7e: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 86de83: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86de85: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 86de89: mov byte ptr [ebp - 0x13], 0 */
  W8((uint32_t)(ebp + 0xffffffedu), 0x0u);
/* 86de8d: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 86de91: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 86de95: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 86de98: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86de99: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86de9b: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x86de9eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_86de9e: /* 86de9e: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 86dea1: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 86dea4: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 86dea7: test dword ptr [edx + 0x534], 0x40000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x534u))); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86deb1: je 0x86e49a */
  if (zf) goto L_86e49a;
L_86deb7: /* 86deb7: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 86deb9: mov dword ptr [ebp - 0x4c], eax */
  W32((uint32_t)(ebp + 0xffffffb4u), eax);
/* 86debc: xor esi, esi */
  esi = 0;
L_86debe: /* 86debe: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86dec1: cmp esi, dword ptr [eax + 0x118] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x118u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86dec7: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 86deca: jge 0x86e47e */
  if ((sf == of)) goto L_86e47e;
L_86ded0: /* 86ded0: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 86ded3: mov eax, dword ptr [ecx + 0x8c] */
  eax = R32((uint32_t)(ecx + 0x8cu));
/* 86ded9: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 86dedc: mov eax, dword ptr [eax + edx*8 + 0x11c] */
  eax = R32((uint32_t)(eax + edx*8 + 0x11cu));
/* 86dee3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86dee5: je 0x86deeb */
  if (zf) goto L_86deeb;
L_86dee7: /* 86dee7: mov ebx, eax */
  ebx = eax;
/* 86dee9: jmp 0x86def0 */
  goto L_86def0;
L_86deeb: /* 86deeb: mov ecx, dword ptr [ecx + 0x2c] */
  ecx = R32((uint32_t)(ecx + 0x2cu));
/* 86deee: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
L_86def0: /* 86def0: test byte ptr [ebx + 0x358], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x358u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86def7: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 86defa: je 0x86e475 */
  if (zf) goto L_86e475;
L_86df00: /* 86df00: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 86df03: mov eax, dword ptr [edi + 0x1c8] */
  eax = R32((uint32_t)(edi + 0x1c8u));
/* 86df09: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86df0b: je 0x86df2f */
  if (zf) goto L_86df2f;
L_86df0d: /* 86df0d: mov eax, 1 */
  eax = 0x1u;
/* 86df12: xor edx, edx */
  edx = 0;
/* 86df14: mov ecx, esi */
  ecx = esi;
/* 86df16: call 0x99cc70 */
  esp -= 4; W32(esp, 0x86df1bu); SPILL(); f_99cc70(); if (g_unwind) return; RELOAD();
/* 86df1b: and eax, dword ptr [ebp - 0x1a8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffe58u)));
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 86df21: and edx, dword ptr [ebp - 0x1a4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffe5cu)));
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 86df27: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  eax = r;
  }
/* 86df29: je 0x86e475 */
  if (zf) goto L_86e475;
L_86df2f: /* 86df2f: cmp esi, dword ptr [edi + 0x1cc] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x1ccu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86df35: je 0x86e475 */
  if (zf) goto L_86e475;
L_86df3b: /* 86df3b: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 86df42: jmp 0x86df50 */
  goto L_86df50;
L_86df50: /* 86df50: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86df53: cmp edx, dword ptr [ebx + 0x360] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x360u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86df59: jge 0x86e475 */
  if ((sf == of)) goto L_86e475;
L_86df5f: /* 86df5f: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86df62: mov ecx, dword ptr [eax + 0x35c] */
  ecx = R32((uint32_t)(eax + 0x35cu));
/* 86df68: mov ebx, dword ptr [ecx + edx*4] */
  ebx = R32((uint32_t)(ecx + edx*4));
/* 86df6b: mov eax, dword ptr [ebx + 0x1370] */
  eax = R32((uint32_t)(ebx + 0x1370u));
/* 86df71: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86df73: jne 0x86e3e4 */
  if (!zf) goto L_86e3e4;
L_86df79: /* 86df79: mov eax, dword ptr [0xcfab30] */
  eax = R32((uint32_t)(0xcfab30u));
/* 86df7e: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86df81: je 0x86e3e4 */
  if (zf) goto L_86e3e4;
L_86df87: /* 86df87: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 86df8a: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 86df8d: mov edx, dword ptr [eax + 0x70] */
  edx = R32((uint32_t)(eax + 0x70u));
/* 86df90: mov ecx, dword ptr [edx + 0x68] */
  ecx = R32((uint32_t)(edx + 0x68u));
/* 86df93: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86df95: je 0x86e3e4 */
  if (zf) goto L_86e3e4;
L_86df9b: /* 86df9b: mov ecx, edx */
  ecx = edx;
/* 86df9d: mov eax, dword ptr [ecx + 0x34] */
  eax = R32((uint32_t)(ecx + 0x34u));
/* 86dfa0: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86dfa3: jae 0x86dfac */
  if (!cf) goto L_86dfac;
L_86dfa5: /* 86dfa5: mov eax, 3 */
  eax = 0x3u;
/* 86dfaa: jmp 0x86dfb6 */
  goto L_86dfb6;
L_86dfac: /* 86dfac: cmp eax, 0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86dfaf: jb 0x86dfb6 */
  if (cf) goto L_86dfb6;
L_86dfb1: /* 86dfb1: mov eax, 0xb */
  eax = 0xbu;
L_86dfb6: /* 86dfb6: mov dword ptr [ecx + 0x34], eax */
  W32((uint32_t)(ecx + 0x34u), eax);
/* 86dfb9: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 86dfbc: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 86dfbf: mov edx, dword ptr [ecx + 0x70] */
  edx = R32((uint32_t)(ecx + 0x70u));
/* 86dfc2: mov ecx, dword ptr [edx + 0x34] */
  ecx = R32((uint32_t)(edx + 0x34u));
/* 86dfc5: mov eax, 1 */
  eax = 0x1u;
/* 86dfca: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 86dfcc: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 86dfce: lea ecx, [ebp - 0x8c] */
  ecx = (uint32_t)(ebp + 0xffffff74u);
/* 86dfd4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86dfd5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86dfd6: call 0x6c9e2b */
  esp -= 4; W32(esp, 0x86dfdbu); SPILL(); f_6c9e2b(); if (g_unwind) return; RELOAD();
/* 86dfdb: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 86dfde: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 86dfe0: mov ecx, esi */
  ecx = esi;
/* 86dfe2: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 86dfe6: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x86dfe8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86dfe8: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 86dfea: lea eax, [ebp - 0x8c] */
  eax = (uint32_t)(ebp + 0xffffff74u);
/* 86dff0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86dff1: mov ecx, esi */
  ecx = esi;
/* 86dff3: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x86dff6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86dff6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86dff8: je 0x86e3b5 */
  if (zf) goto L_86e3b5;
L_86dffe: /* 86dffe: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 86e000: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e002: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86e004: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 86e009: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86e00b: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 86e00f: mov byte ptr [ebp - 0x13], 0 */
  W8((uint32_t)(ebp + 0xffffffedu), 0x0u);
/* 86e013: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 86e017: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 86e01b: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 86e01e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e01f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86e021: mov ecx, esi */
  ecx = esi;
/* 86e023: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x86e026u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e026: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86e027: mov eax, esp */
  eax = esp;
/* 86e029: mov dword ptr [ebp - 0x5c], esp */
  W32((uint32_t)(ebp + 0xffffffa4u), esp);
/* 86e02c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e02e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e030: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 86e036: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 86e038: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e03a: mov ecx, esi */
  ecx = esi;
/* 86e03c: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x86e03fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e03f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 86e041: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 86e043: mov ecx, esi */
  ecx = esi;
/* 86e045: call dword ptr [eax + 0x1c] */
  { uint32_t t = R32((uint32_t)(eax + 0x1cu)); esp -= 4; W32(esp, 0x86e048u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e048: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e04a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e04c: mov ecx, ebx */
  ecx = ebx;
/* 86e04e: call 0x6cb82f */
  esp -= 4; W32(esp, 0x86e053u); SPILL(); f_6cb82f(); if (g_unwind) return; RELOAD();
/* 86e053: mov ecx, dword ptr [ebx + 0x1290] */
  ecx = R32((uint32_t)(ebx + 0x1290u));
/* 86e059: mov edx, dword ptr [ebx + 0x128c] */
  edx = R32((uint32_t)(ebx + 0x128cu));
/* 86e05f: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 86e060: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86e061: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 86e062: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86e063: mov ecx, ebx */
  ecx = ebx;
/* 86e065: mov esi, eax */
  esi = eax;
/* 86e067: call 0x6cb82f */
  esp -= 4; W32(esp, 0x86e06cu); SPILL(); f_6cb82f(); if (g_unwind) return; RELOAD();
/* 86e06c: mov ecx, dword ptr [ebx + 0x1280] */
  ecx = R32((uint32_t)(ebx + 0x1280u));
/* 86e072: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 86e075: fld dword ptr [ecx + eax*4 + 4] */
  { double v = F32((uint32_t)(ecx + eax*4 + 0x4u)); FPUSH(v); }
/* 86e079: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 86e07c: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 86e07f: fsub dword ptr [ecx + edx*4 + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + edx*4 + 0x4u)));
/* 86e083: lea edx, [ecx + edx*4] */
  edx = (uint32_t)(ecx + edx*4);
/* 86e086: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 86e088: mov ecx, dword ptr [ebx + 0x174] */
  ecx = R32((uint32_t)(ebx + 0x174u));
/* 86e08e: fsub dword ptr [edx] */
  ST0 = ST0 - (F32((uint32_t)(edx)));
/* 86e090: mov edx, dword ptr [ebx + 0x170] */
  edx = R32((uint32_t)(ebx + 0x170u));
/* 86e096: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 86e099: mov dword ptr [ebp - 0x160], edx */
  W32((uint32_t)(ebp + 0xfffffea0u), edx);
/* 86e09f: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 86e0a5: mov dword ptr [ebp - 0x154], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffeacu), 0x3f800000u);
/* 86e0af: mov dword ptr [ebp - 0x150], 0 */
  W32((uint32_t)(ebp + 0xfffffeb0u), 0x0u);
/* 86e0b9: mov dword ptr [ebp - 0x14c], 0 */
  W32((uint32_t)(ebp + 0xfffffeb4u), 0x0u);
/* 86e0c3: fstp dword ptr [ebp - 0x70] */
  WF32((uint32_t)(ebp + 0xffffff90u), ST0); FPOP();
/* 86e0c6: mov dword ptr [ebp - 0x148], 0 */
  W32((uint32_t)(ebp + 0xfffffeb8u), 0x0u);
/* 86e0d0: mov dword ptr [ebp - 0x144], 0 */
  W32((uint32_t)(ebp + 0xfffffebcu), 0x0u);
/* 86e0da: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 86e0e0: mov dword ptr [ebp - 0x140], 0xbf800000 */
  W32((uint32_t)(ebp + 0xfffffec0u), 0xbf800000u);
/* 86e0ea: mov dword ptr [ebp - 0x13c], 0 */
  W32((uint32_t)(ebp + 0xfffffec4u), 0x0u);
/* 86e0f4: mov dword ptr [ebp - 0x138], 0 */
  W32((uint32_t)(ebp + 0xfffffec8u), 0x0u);
/* 86e0fe: fstp dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0); FPOP();
/* 86e101: mov dword ptr [ebp - 0x134], 0 */
  W32((uint32_t)(ebp + 0xfffffeccu), 0x0u);
/* 86e10b: fld dword ptr [ebx + 0x178] */
  { double v = F32((uint32_t)(ebx + 0x178u)); FPUSH(v); }
/* 86e111: mov dword ptr [ebp - 0x130], 0 */
  W32((uint32_t)(ebp + 0xfffffed0u), 0x0u);
/* 86e11b: fadd dword ptr [0xa149c8] */
  ST0 = ST0 + (F32((uint32_t)(0xa149c8u)));
/* 86e121: mov dword ptr [ebp - 0x12c], 0xbf800000 */
  W32((uint32_t)(ebp + 0xfffffed4u), 0xbf800000u);
/* 86e12b: mov dword ptr [ebp - 0x128], 0 */
  W32((uint32_t)(ebp + 0xfffffed8u), 0x0u);
/* 86e135: mov dword ptr [ebp - 0x124], 0 */
  W32((uint32_t)(ebp + 0xfffffedcu), 0x0u);
/* 86e13f: fchs  */
  ST0 = -ST0;
/* 86e141: mov dword ptr [ebp - 0x120], 0 */
  W32((uint32_t)(ebp + 0xfffffee0u), 0x0u);
/* 86e14b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 86e14d: mov dword ptr [ebp - 0x118], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffee8u), 0x3f800000u);
/* 86e157: fstp dword ptr [ebp - 0x11c] */
  WF32((uint32_t)(ebp + 0xfffffee4u), ST0); FPOP();
/* 86e15d: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 86e160: fchs  */
  ST0 = -ST0;
/* 86e162: fld dword ptr [ebp - 0x160] */
  { double v = F32((uint32_t)(ebp + 0xfffffea0u)); FPUSH(v); }
/* 86e168: mov dword ptr [ebp - 0x114], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffeecu), 0x3f800000u);
/* 86e172: fchs  */
  ST0 = -ST0;
/* 86e174: mov dword ptr [ebp - 0x110], 0 */
  W32((uint32_t)(ebp + 0xfffffef0u), 0x0u);
/* 86e17e: fstp dword ptr [ebp - 0xe4] */
  WF32((uint32_t)(ebp + 0xffffff1cu), ST0); FPOP();
/* 86e184: mov dword ptr [ebp - 0x10c], 0 */
  W32((uint32_t)(ebp + 0xfffffef4u), 0x0u);
/* 86e18e: mov dword ptr [ebp - 0x108], 0 */
  W32((uint32_t)(ebp + 0xfffffef8u), 0x0u);
/* 86e198: fstp dword ptr [ebp - 0xe0] */
  WF32((uint32_t)(ebp + 0xffffff20u), ST0); FPOP();
/* 86e19e: mov dword ptr [ebp - 0x104], 0 */
  W32((uint32_t)(ebp + 0xfffffefcu), 0x0u);
/* 86e1a8: mov dword ptr [ebp - 0x100], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff00u), 0x3f800000u);
/* 86e1b2: fstp dword ptr [ebp - 0xdc] */
  WF32((uint32_t)(ebp + 0xffffff24u), ST0); FPOP();
/* 86e1b8: mov dword ptr [ebp - 0xfc], 0 */
  W32((uint32_t)(ebp + 0xffffff04u), 0x0u);
/* 86e1c2: mov dword ptr [ebp - 0xf8], 0 */
  W32((uint32_t)(ebp + 0xffffff08u), 0x0u);
/* 86e1cc: mov dword ptr [ebp - 0xf4], 0 */
  W32((uint32_t)(ebp + 0xffffff0cu), 0x0u);
/* 86e1d6: mov dword ptr [ebp - 0xf0], 0 */
  W32((uint32_t)(ebp + 0xffffff10u), 0x0u);
/* 86e1e0: mov dword ptr [ebp - 0xec], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff14u), 0x3f800000u);
/* 86e1ea: mov dword ptr [ebp - 0xe8], 0 */
  W32((uint32_t)(ebp + 0xffffff18u), 0x0u);
/* 86e1f4: mov dword ptr [ebp - 0xd8], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff28u), 0x3f800000u);
/* 86e1fe: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86e201: mov edi, esp */
  edi = esp;
/* 86e203: mov ecx, 0x10 */
  ecx = 0x10u;
/* 86e208: lea esi, [ebp - 0x154] */
  esi = (uint32_t)(ebp + 0xfffffeacu);
/* 86e20e: lea eax, [ebp - 0x508] */
  eax = (uint32_t)(ebp + 0xfffffaf8u);
/* 86e214: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 86e216: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e217: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 86e21d: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 86e221: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x86e227u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 86e227: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 86e22d: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 86e231: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x86e237u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 86e237: lea ecx, [ebp - 0x154] */
  ecx = (uint32_t)(ebp + 0xfffffeacu);
/* 86e23d: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 86e241: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x86e247u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 86e247: fld dword ptr [ebp - 0x6c] */
  { double v = F32((uint32_t)(ebp + 0xffffff94u)); FPUSH(v); }
/* 86e24a: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 86e250: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86e252: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86e255: jne 0x86e25f */
  if (!zf) goto L_86e25f;
L_86e257: /* 86e257: mov ecx, dword ptr [ebp - 0x6c] */
  ecx = R32((uint32_t)(ebp + 0xffffff94u));
/* 86e25a: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 86e25d: jmp 0x86e267 */
  goto L_86e267;
L_86e25f: /* 86e25f: fld dword ptr [ebp - 0x6c] */
  { double v = F32((uint32_t)(ebp + 0xffffff94u)); FPUSH(v); }
/* 86e262: fchs  */
  ST0 = -ST0;
/* 86e264: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
L_86e267: /* 86e267: fld dword ptr [ebp - 0x70] */
  { double v = F32((uint32_t)(ebp + 0xffffff90u)); FPUSH(v); }
/* 86e26a: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 86e270: fld dword ptr [ebp - 0x70] */
  { double v = F32((uint32_t)(ebp + 0xffffff90u)); FPUSH(v); }
/* 86e273: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86e275: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86e278: je 0x86e27c */
  if (zf) goto L_86e27c;
L_86e27a: /* 86e27a: fchs  */
  ST0 = -ST0;
L_86e27c: /* 86e27c: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 86e282: mov ecx, 0x10 */
  ecx = 0x10u;
/* 86e287: fdiv dword ptr [ebp - 0x1c] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 86e28a: lea esi, [ebp - 0xd4] */
  esi = (uint32_t)(ebp + 0xffffff2cu);
/* 86e290: lea edi, [ebp - 0x548] */
  edi = (uint32_t)(ebp + 0xfffffab8u);
/* 86e296: mov dword ptr [ebp - 0xd0], 0 */
  W32((uint32_t)(ebp + 0xffffff30u), 0x0u);
/* 86e2a0: mov dword ptr [ebp - 0xcc], 0 */
  W32((uint32_t)(ebp + 0xffffff34u), 0x0u);
/* 86e2aa: mov dword ptr [ebp - 0xc8], 0 */
  W32((uint32_t)(ebp + 0xffffff38u), 0x0u);
/* 86e2b4: mov dword ptr [ebp - 0xc4], 0 */
  W32((uint32_t)(ebp + 0xffffff3cu), 0x0u);
/* 86e2be: mov dword ptr [ebp - 0xbc], 0 */
  W32((uint32_t)(ebp + 0xffffff44u), 0x0u);
/* 86e2c8: mov dword ptr [ebp - 0xb8], 0 */
  W32((uint32_t)(ebp + 0xffffff48u), 0x0u);
/* 86e2d2: mov dword ptr [ebp - 0xb4], 0 */
  W32((uint32_t)(ebp + 0xffffff4cu), 0x0u);
/* 86e2dc: mov dword ptr [ebp - 0xb0], 0 */
  W32((uint32_t)(ebp + 0xffffff50u), 0x0u);
/* 86e2e6: mov dword ptr [ebp - 0xac], 0x36000000 */
  W32((uint32_t)(ebp + 0xffffff54u), 0x36000000u);
/* 86e2f0: mov dword ptr [ebp - 0xa8], 0 */
  W32((uint32_t)(ebp + 0xffffff58u), 0x0u);
/* 86e2fa: mov dword ptr [ebp - 0xa4], 0 */
  W32((uint32_t)(ebp + 0xffffff5cu), 0x0u);
/* 86e304: mov dword ptr [ebp - 0xa0], 0 */
  W32((uint32_t)(ebp + 0xffffff60u), 0x0u);
/* 86e30e: mov dword ptr [ebp - 0x9c], 0x3f000000 */
  W32((uint32_t)(ebp + 0xffffff64u), 0x3f000000u);
/* 86e318: mov dword ptr [ebp - 0x98], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff68u), 0x3f800000u);
/* 86e322: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 86e328: fdiv st(2) */
  ST0 = ST0 / STI(2);
/* 86e32a: fstp dword ptr [ebp - 0xd4] */
  WF32((uint32_t)(ebp + 0xffffff2cu), ST0); FPOP();
/* 86e330: fstp dword ptr [ebp - 0xc0] */
  WF32((uint32_t)(ebp + 0xffffff40u), ST0); FPOP();
/* 86e336: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 86e338: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 86e33a: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 86e340: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 86e344: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x86e34au); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 86e34a: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 86e34d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 86e34f: lea eax, [ebp - 0x508] */
  eax = (uint32_t)(ebp + 0xfffffaf8u);
/* 86e355: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e356: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86e358: mov ecx, esi */
  ecx = esi;
/* 86e35a: call dword ptr [edx + 0x38] */
  { uint32_t t = R32((uint32_t)(edx + 0x38u)); esp -= 4; W32(esp, 0x86e35du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e35d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 86e35f: lea eax, [ebp - 0x548] */
  eax = (uint32_t)(ebp + 0xfffffab8u);
/* 86e365: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e366: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 86e368: mov ecx, esi */
  ecx = esi;
/* 86e36a: call dword ptr [edx + 0x38] */
  { uint32_t t = R32((uint32_t)(edx + 0x38u)); esp -= 4; W32(esp, 0x86e36du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e36d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 86e36f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86e371: mov ecx, esi */
  ecx = esi;
/* 86e373: call dword ptr [edx + 0x60] */
  { uint32_t t = R32((uint32_t)(edx + 0x60u)); esp -= 4; W32(esp, 0x86e376u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e376: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 86e379: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e37b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e37d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e37f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e381: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e383: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 86e384: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e385: mov ecx, ebx */
  ecx = ebx;
/* 86e387: call 0x6c4cb4 */
  esp -= 4; W32(esp, 0x86e38cu); SPILL(); f_6c4cb4(); if (g_unwind) return; RELOAD();
/* 86e38c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 86e38e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86e390: mov ecx, esi */
  ecx = esi;
/* 86e392: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x86e395u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e395: lea ecx, [ebp - 0x548] */
  ecx = (uint32_t)(ebp + 0xfffffab8u);
/* 86e39b: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 86e39f: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x86e3a5u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 86e3a5: lea ecx, [ebp - 0x508] */
  ecx = (uint32_t)(ebp + 0xfffffaf8u);
/* 86e3ab: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 86e3af: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x86e3b5u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
L_86e3b5: /* 86e3b5: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 86e3b8: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 86e3ba: mov ecx, esi */
  ecx = esi;
/* 86e3bc: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x86e3bfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e3bf: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 86e3c1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86e3c3: lea eax, [ebp - 0x8c] */
  eax = (uint32_t)(ebp + 0xffffff74u);
/* 86e3c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e3ca: mov ecx, esi */
  ecx = esi;
/* 86e3cc: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0x86e3cfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e3cf: lea ecx, [ebp - 0x8c] */
  ecx = (uint32_t)(ebp + 0xffffff74u);
/* 86e3d5: mov dword ptr [ebx + 0x1370], eax */
  W32((uint32_t)(ebx + 0x1370u), eax);
/* 86e3db: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 86e3df: call 0x6c88d2 */
  esp -= 4; W32(esp, 0x86e3e4u); SPILL(); f_6c88d2(); if (g_unwind) return; RELOAD();
L_86e3e4: /* 86e3e4: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 86e3e7: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 86e3e9: mov ecx, edi */
  ecx = edi;
/* 86e3eb: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x86e3edu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e3ed: test byte ptr [ebx + 0x1260], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x1260u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86e3f4: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 86e3f7: je 0x86e41d */
  if (zf) goto L_86e41d;
L_86e3f9: /* 86e3f9: fld dword ptr [esi + 0x1b8] */
  { double v = F32((uint32_t)(esi + 0x1b8u)); FPUSH(v); }
/* 86e3ff: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 86e405: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86e407: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 86e40a: jp 0x86e410 */
  if (pf) goto L_86e410;
L_86e40c: /* 86e40c: xor eax, eax */
  eax = 0;
/* 86e40e: jmp 0x86e415 */
  goto L_86e415;
L_86e410: /* 86e410: mov eax, 1 */
  eax = 0x1u;
L_86e415: /* 86e415: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 86e417: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e418: mov ecx, edi */
  ecx = edi;
/* 86e41a: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x86e41du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_86e41d: /* 86e41d: mov eax, dword ptr [esi + 0x1c8] */
  eax = R32((uint32_t)(esi + 0x1c8u));
/* 86e423: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e425: je 0x86e436 */
  if (zf) goto L_86e436;
L_86e427: /* 86e427: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86e42a: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 86e42d: lea eax, [ebp + eax*4 - 0x4ac] */
  eax = (uint32_t)(ebp + eax*4 + 0xfffffb54u);
/* 86e434: jmp 0x86e43c */
  goto L_86e43c;
L_86e436: /* 86e436: lea eax, [ebp - 0x4ac] */
  eax = (uint32_t)(ebp + 0xfffffb54u);
L_86e43c: /* 86e43c: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 86e43f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86e440: mov ecx, dword ptr [ebp - 0x48] */
  ecx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 86e443: lea edx, [ebp - 0xd48] */
  edx = (uint32_t)(ebp + 0xfffff2b8u);
/* 86e449: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86e44a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86e44b: lea edx, [ebp - 0x948] */
  edx = (uint32_t)(ebp + 0xfffff6b8u);
/* 86e451: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86e452: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e453: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86e454: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 86e455: mov ecx, ebx */
  ecx = ebx;
/* 86e457: call 0x6c4cb4 */
  esp -= 4; W32(esp, 0x86e45cu); SPILL(); f_6c4cb4(); if (g_unwind) return; RELOAD();
/* 86e45c: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 86e45e: mov ecx, edi */
  ecx = edi;
/* 86e460: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x86e463u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e463: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86e466: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86e469: mov esi, dword ptr [ebp - 0x24] */
  esi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86e46c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 86e46d: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 86e470: jmp 0x86df50 */
  goto L_86df50;
L_86e475: /* 86e475: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 86e478: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 86e479: jmp 0x86debe */
  goto L_86debe;
L_86e47e: /* 86e47e: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 86e484: mov edx, dword ptr [0xce83a0] */
  edx = R32((uint32_t)(0xce83a0u));
/* 86e48a: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 86e48d: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 86e48f: mov esi, dword ptr [ebp - 0x4c] */
  esi = R32((uint32_t)(ebp + 0xffffffb4u));
/* 86e492: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86e494: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 86e496: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 86e498: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
L_86e49a: /* 86e49a: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 86e49d: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 86e49f: mov ecx, edi */
  ecx = edi;
/* 86e4a1: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x86e4a3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e4a3: mov eax, dword ptr [0xcfa350] */
  eax = R32((uint32_t)(0xcfa350u));
/* 86e4a8: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 86e4aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e4ab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e4ad: mov ecx, edi */
  ecx = edi;
/* 86e4af: call dword ptr [edx + 0x38] */
  { uint32_t t = R32((uint32_t)(edx + 0x38u)); esp -= 4; W32(esp, 0x86e4b2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e4b2: mov esi, dword ptr [ebp - 0x170] */
  esi = R32((uint32_t)(ebp + 0xfffffe90u));
L_86e4b8: /* 86e4b8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e4ba: je 0x86e4d9 */
  if (zf) goto L_86e4d9;
L_86e4bc: /* 86e4bc: mov ecx, dword ptr [ebp - 0x4c8] */
  ecx = R32((uint32_t)(ebp + 0xfffffb38u));
/* 86e4c2: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 86e4c4: mov eax, dword ptr [ebp - 0x174] */
  eax = R32((uint32_t)(ebp + 0xfffffe8cu));
/* 86e4ca: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86e4cb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86e4cc: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 86e4cf: call 0x6c1a5a */
  esp -= 4; W32(esp, 0x86e4d4u); SPILL(); f_6c1a5a(); if (g_unwind) return; RELOAD();
/* 86e4d4: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 86e4d7: jmp 0x86e4b8 */
  goto L_86e4b8;
L_86e4d9: /* 86e4d9: mov esi, dword ptr [ebp - 0x190] */
  esi = R32((uint32_t)(ebp + 0xfffffe70u));
/* 86e4df: nop  */
L_86e4e0: /* 86e4e0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e4e2: je 0x86e4fb */
  if (zf) goto L_86e4fb;
L_86e4e4: /* 86e4e4: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 86e4e6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86e4e7: lea edx, [ebp - 0x4c8] */
  edx = (uint32_t)(ebp + 0xfffffb38u);
/* 86e4ed: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86e4ee: call 0x869c90 */
  esp -= 4; W32(esp, 0x86e4f3u); SPILL(); f_869c90(); if (g_unwind) return; RELOAD();
/* 86e4f3: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 86e4f6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86e4f9: jmp 0x86e4e0 */
  goto L_86e4e0;
L_86e4fb: /* 86e4fb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86e4fc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86e4fd: lea ecx, [ebp - 0x188] */
  ecx = (uint32_t)(ebp + 0xfffffe78u);
/* 86e503: call 0x6c9f52 */
  esp -= 4; W32(esp, 0x86e508u); SPILL(); f_6c9f52(); if (g_unwind) return; RELOAD();
/* 86e508: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 86e50b: mov ecx, dword ptr [eax + 0x15c] */
  ecx = R32((uint32_t)(eax + 0x15cu));
/* 86e511: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e513: jne 0x86e532 */
  if (!zf) goto L_86e532;
L_86e515: /* 86e515: mov esi, dword ptr [0xcd8ad8] */
  esi = R32((uint32_t)(0xcd8ad8u));
/* 86e51b: jmp 0x86e520 */
  goto L_86e520;
L_86e520: /* 86e520: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e522: je 0x86e532 */
  if (zf) goto L_86e532;
L_86e524: /* 86e524: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 86e526: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86e527: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86e528: call 0x6c894a */
  esp -= 4; W32(esp, 0x86e52du); SPILL(); f_6c894a(); if (g_unwind) return; RELOAD();
/* 86e52d: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 86e530: jmp 0x86e520 */
  goto L_86e520;
L_86e532: /* 86e532: mov dword ptr [0xcd8ad8], 0 */
  W32((uint32_t)(0xcd8ad8u), 0x0u);
/* 86e53c: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 86e53e: mov ecx, edi */
  ecx = edi;
/* 86e540: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x86e543u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e543: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86e548: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86e54b: jne 0x86e55e */
  if (!zf) goto L_86e55e;
L_86e54d: /* 86e54d: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 86e550: mov edx, dword ptr [ecx + 0x70] */
  edx = R32((uint32_t)(ecx + 0x70u));
/* 86e553: mov eax, dword ptr [edx + 0x54] */
  eax = R32((uint32_t)(edx + 0x54u));
/* 86e556: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e558: je 0x86e82d */
  if (zf) goto L_86e82d;
L_86e55e: /* 86e55e: mov esi, dword ptr [ebp - 0x16c] */
  esi = R32((uint32_t)(ebp + 0xfffffe94u));
L_86e564: /* 86e564: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e566: je 0x86e576 */
  if (zf) goto L_86e576;
L_86e568: /* 86e568: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 86e56a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86e56b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86e56c: call 0x6cb8f7 */
  esp -= 4; W32(esp, 0x86e571u); SPILL(); f_6cb8f7(); if (g_unwind) return; RELOAD();
/* 86e571: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 86e574: jmp 0x86e564 */
  goto L_86e564;
L_86e576: /* 86e576: mov eax, dword ptr [ebp - 0x168] */
  eax = R32((uint32_t)(ebp + 0xfffffe98u));
/* 86e57c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e57e: je 0x86e80a */
  if (zf) goto L_86e80a;
L_86e584: /* 86e584: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 86e586: mov dword ptr [ebp - 0x58], eax */
  W32((uint32_t)(ebp + 0xffffffa8u), eax);
/* 86e589: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 86e58b: mov ecx, edi */
  ecx = edi;
/* 86e58d: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x86e58fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e58f: mov eax, dword ptr [0xcd939c] */
  eax = R32((uint32_t)(0xcd939cu));
/* 86e594: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e596: jne 0x86e6ae */
  if (!zf) goto L_86e6ae;
L_86e59c: /* 86e59c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e59e: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 86e5a1: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x86e5a7u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 86e5a7: push 0xb86b60 */
  { uint32_t v = 0xb86b60u; esp -= 4; W32(esp, v); }
/* 86e5ac: mov ecx, 0xb86b60 */
  ecx = 0xb86b60u;
/* 86e5b1: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x86e5b7u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 86e5b7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e5b9: jne 0x86e5d3 */
  if (!zf) goto L_86e5d3;
L_86e5bb: /* 86e5bb: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 86e5c0: push 0xae56d8 */
  { uint32_t v = 0xae56d8u; esp -= 4; W32(esp, v); }
/* 86e5c5: push 0xae571c */
  { uint32_t v = 0xae571cu; esp -= 4; W32(esp, v); }
/* 86e5ca: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x86e5d0u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 86e5d0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_86e5d3: /* 86e5d3: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x86e5d9u); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 86e5d9: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 86e5df: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86e5e1: mov ecx, dword ptr [ebp - 0x4c] */
  ecx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 86e5e4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e5e6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86e5e7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e5e9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e5eb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86e5ec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e5ed: push 0xb86b60 */
  { uint32_t v = 0xb86b60u; esp -= 4; W32(esp, v); }
/* 86e5f2: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x86e5f8u); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 86e5f8: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 86e5fe: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86e601: push 0xcd939c */
  { uint32_t v = 0xcd939cu; esp -= 4; W32(esp, v); }
/* 86e606: mov dword ptr [0xcd939c], eax */
  W32((uint32_t)(0xcd939cu), eax);
/* 86e60b: call 0x6c1203 */
  esp -= 4; W32(esp, 0x86e610u); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
/* 86e610: test byte ptr [0xcd9398], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xcd9398u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86e617: jne 0x86e646 */
  if (!zf) goto L_86e646;
L_86e619: /* 86e619: or dword ptr [0xcd9398], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcd9398u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xcd9398u), r);
  }
/* 86e620: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 86e624: mov byte ptr [ebp - 0x13], 0 */
  W8((uint32_t)(ebp + 0xffffffedu), 0x0u);
/* 86e628: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 86e62c: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 86e630: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 86e633: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86e634: mov ecx, 0xcd9380 */
  ecx = 0xcd9380u;
/* 86e639: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 86e63d: call 0x6c7af4 */
  esp -= 4; W32(esp, 0x86e642u); SPILL(); f_6c7af4(); if (g_unwind) return; RELOAD();
/* 86e642: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
L_86e646: /* 86e646: mov esi, dword ptr [0xcd939c] */
  esi = R32((uint32_t)(0xcd939cu));
/* 86e64c: lea ebx, [esi + 0x50] */
  ebx = (uint32_t)(esi + 0x50u);
/* 86e64f: mov dword ptr [ebx], 0xcd9380 */
  W32((uint32_t)(ebx), 0xcd9380u);
/* 86e655: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 86e657: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86e659: call dword ptr [eax + 0x30] */
  { uint32_t t = R32((uint32_t)(eax + 0x30u)); esp -= 4; W32(esp, 0x86e65cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e65c: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 86e65e: mov byte ptr [esi + 0x38], al */
  W8((uint32_t)(esi + 0x38u), (eax & 0xffu));
/* 86e661: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86e663: call dword ptr [edx + 0x34] */
  { uint32_t t = R32((uint32_t)(edx + 0x34u)); esp -= 4; W32(esp, 0x86e666u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e666: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 86e668: mov byte ptr [esi + 0x39], al */
  W8((uint32_t)(esi + 0x39u), (eax & 0xffu));
/* 86e66b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86e66d: call dword ptr [eax + 0x38] */
  { uint32_t t = R32((uint32_t)(eax + 0x38u)); esp -= 4; W32(esp, 0x86e670u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e670: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 86e672: mov byte ptr [esi + 0x3a], al */
  W8((uint32_t)(esi + 0x3au), (eax & 0xffu));
/* 86e675: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86e677: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x86e67au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e67a: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 86e67c: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 86e67f: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* 86e682: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86e684: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0x86e687u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e687: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* 86e68a: mov ebx, dword ptr [0xcfa2b0] */
  ebx = R32((uint32_t)(0xcfa2b0u));
/* 86e690: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86e691: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* 86e694: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* 86e697: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x86e699u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e699: mov edx, dword ptr [esi + 0x4c] */
  edx = R32((uint32_t)(esi + 0x4cu));
/* 86e69c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86e69f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86e6a0: mov byte ptr [esi + 0x3b], al */
  W8((uint32_t)(esi + 0x3bu), (eax & 0xffu));
/* 86e6a3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x86e6a5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e6a5: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 86e6a8: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86e6ab: mov byte ptr [esi + 0x3c], al */
  W8((uint32_t)(esi + 0x3cu), (eax & 0xffu));
L_86e6ae: /* 86e6ae: mov eax, dword ptr [0xcd937c] */
  eax = R32((uint32_t)(0xcd937cu));
/* 86e6b3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e6b5: jne 0x86e759 */
  if (!zf) goto L_86e759;
L_86e6bb: /* 86e6bb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e6bd: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 86e6c0: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x86e6c6u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 86e6c6: push 0xb8d850 */
  { uint32_t v = 0xb8d850u; esp -= 4; W32(esp, v); }
/* 86e6cb: mov ecx, 0xb8d850 */
  ecx = 0xb8d850u;
/* 86e6d0: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x86e6d6u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 86e6d6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e6d8: jne 0x86e6f2 */
  if (!zf) goto L_86e6f2;
L_86e6da: /* 86e6da: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 86e6df: push 0xae5740 */
  { uint32_t v = 0xae5740u; esp -= 4; W32(esp, v); }
/* 86e6e4: push 0xae5784 */
  { uint32_t v = 0xae5784u; esp -= 4; W32(esp, v); }
/* 86e6e9: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x86e6efu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 86e6ef: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_86e6f2: /* 86e6f2: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x86e6f8u); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 86e6f8: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 86e6fe: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86e700: mov ecx, dword ptr [ebp - 0x4c] */
  ecx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 86e703: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e705: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86e706: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e708: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e70a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86e70b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e70c: push 0xb8d850 */
  { uint32_t v = 0xb8d850u; esp -= 4; W32(esp, v); }
/* 86e711: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x86e717u); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 86e717: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 86e71d: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86e720: push 0xcd937c */
  { uint32_t v = 0xcd937cu; esp -= 4; W32(esp, v); }
/* 86e725: mov dword ptr [0xcd937c], eax */
  W32((uint32_t)(0xcd937cu), eax);
/* 86e72a: call 0x6c1203 */
  esp -= 4; W32(esp, 0x86e72fu); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
/* 86e72f: mov edx, dword ptr [0xcd937c] */
  edx = R32((uint32_t)(0xcd937cu));
/* 86e735: mov eax, dword ptr [0xcd939c] */
  eax = R32((uint32_t)(0xcd939cu));
/* 86e73a: mov dword ptr [edx + 0x38], eax */
  W32((uint32_t)(edx + 0x38u), eax);
/* 86e73d: mov ecx, dword ptr [0xcd937c] */
  ecx = R32((uint32_t)(0xcd937cu));
/* 86e743: mov byte ptr [ecx + 0x3c], 7 */
  W8((uint32_t)(ecx + 0x3cu), 0x7u);
/* 86e747: mov eax, dword ptr [0xcd937c] */
  eax = R32((uint32_t)(0xcd937cu));
/* 86e74c: and dword ptr [eax + 0x40], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x40u))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x40u), r);
  }
/* 86e750: mov eax, dword ptr [0xcd937c] */
  eax = R32((uint32_t)(0xcd937cu));
/* 86e755: or dword ptr [eax + 0x40], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x40u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x40u), r);
  }
L_86e759: /* 86e759: mov eax, dword ptr [ebp - 0x168] */
  eax = R32((uint32_t)(ebp + 0xfffffe98u));
/* 86e75f: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 86e761: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e762: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 86e764: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86e766: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86e768: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 86e76a: not eax */
  eax = ~eax;
/* 86e76c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e76d: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86e76f: mov ecx, edi */
  ecx = edi;
/* 86e771: call dword ptr [edx + 0x40] */
  { uint32_t t = R32((uint32_t)(edx + 0x40u)); esp -= 4; W32(esp, 0x86e774u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e774: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 86e777: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86e778: add eax, 0xd0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xd0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86e77d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e77e: lea ecx, [ebp - 0xdf0] */
  ecx = (uint32_t)(ebp + 0xfffff210u);
/* 86e784: call 0x6cbd48 */
  esp -= 4; W32(esp, 0x86e789u); SPILL(); f_6cbd48(); if (g_unwind) return; RELOAD();
/* 86e789: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 86e78c: fild dword ptr [edx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(edx + 0x8cu)); FPUSH(v); }
/* 86e792: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 86e796: mov byte ptr [ebp - 0x13], 0 */
  W8((uint32_t)(ebp + 0xffffffedu), 0x0u);
/* 86e79a: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 86e79e: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 86e7a2: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 86e7a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86e7a6: mov ecx, dword ptr [0xcd937c] */
  ecx = R32((uint32_t)(0xcd937cu));
/* 86e7ac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86e7ad: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 86e7b2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e7b4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e7b6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e7b8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e7ba: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86e7bd: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 86e7c1: mov ecx, eax */
  ecx = eax;
/* 86e7c3: fild dword ptr [edx + 0x88] */
  { double v = (double)(int32_t)R32((uint32_t)(edx + 0x88u)); FPUSH(v); }
/* 86e7c9: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 86e7cd: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 86e7d0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e7d2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86e7d4: call 0x6ca6b4 */
  esp -= 4; W32(esp, 0x86e7d9u); SPILL(); f_6ca6b4(); if (g_unwind) return; RELOAD();
/* 86e7d9: lea ecx, [ebp - 0xdf0] */
  ecx = (uint32_t)(ebp + 0xfffff210u);
/* 86e7df: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 86e7e3: call 0x6caac4 */
  esp -= 4; W32(esp, 0x86e7e8u); SPILL(); f_6caac4(); if (g_unwind) return; RELOAD();
/* 86e7e8: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 86e7ea: mov ecx, edi */
  ecx = edi;
/* 86e7ec: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x86e7efu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e7ef: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 86e7f4: mov ecx, dword ptr [0xce8374] */
  ecx = R32((uint32_t)(0xce8374u));
/* 86e7fa: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 86e7fd: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 86e7ff: mov esi, dword ptr [ebp - 0x58] */
  esi = R32((uint32_t)(ebp + 0xffffffa8u));
/* 86e802: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86e804: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 86e806: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 86e808: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
L_86e80a: /* 86e80a: mov esi, dword ptr [ebp - 0x19c] */
  esi = R32((uint32_t)(ebp + 0xfffffe64u));
L_86e810: /* 86e810: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e812: je 0x86e82d */
  if (zf) goto L_86e82d;
L_86e814: /* 86e814: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 86e816: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86e818: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86e819: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x86e81cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e81c: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 86e81e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e820: je 0x86e828 */
  if (zf) goto L_86e828;
L_86e822: /* 86e822: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86e824: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86e826: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x86e828u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_86e828: /* 86e828: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 86e82b: jmp 0x86e810 */
  goto L_86e810;
L_86e82d: /* 86e82d: mov ecx, dword ptr [0xcfab30] */
  ecx = R32((uint32_t)(0xcfab30u));
/* 86e833: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86e836: je 0x86e886 */
  if (zf) goto L_86e886;
L_86e838: /* 86e838: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 86e83b: mov eax, dword ptr [edx + 0x70] */
  eax = R32((uint32_t)(edx + 0x70u));
/* 86e83e: mov ecx, dword ptr [eax + 0x6c] */
  ecx = R32((uint32_t)(eax + 0x6cu));
/* 86e841: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e843: je 0x86e886 */
  if (zf) goto L_86e886;
L_86e845: /* 86e845: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 86e848: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e84a: jne 0x86e886 */
  if (!zf) goto L_86e886;
L_86e84c: /* 86e84c: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 86e84e: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86e850: mov ecx, edi */
  ecx = edi;
/* 86e852: call dword ptr [edx + 0x60] */
  { uint32_t t = R32((uint32_t)(edx + 0x60u)); esp -= 4; W32(esp, 0x86e855u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e855: mov esi, dword ptr [ebp - 0x19c] */
  esi = R32((uint32_t)(ebp + 0xfffffe64u));
/* 86e85b: jmp 0x86e860 */
  goto L_86e860;
L_86e860: /* 86e860: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e862: je 0x86e87d */
  if (zf) goto L_86e87d;
L_86e864: /* 86e864: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 86e866: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86e868: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86e869: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x86e86cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e86c: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 86e86e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e870: je 0x86e878 */
  if (zf) goto L_86e878;
L_86e872: /* 86e872: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86e874: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86e876: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x86e878u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_86e878: /* 86e878: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 86e87b: jmp 0x86e860 */
  goto L_86e860;
L_86e87d: /* 86e87d: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 86e87f: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86e881: mov ecx, edi */
  ecx = edi;
/* 86e883: call dword ptr [eax + 0x64] */
  { uint32_t t = R32((uint32_t)(eax + 0x64u)); esp -= 4; W32(esp, 0x86e886u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_86e886: /* 86e886: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 86e889: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x86e88fu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 86e88f: mov esi, dword ptr [ebp - 0x18c] */
  esi = R32((uint32_t)(ebp + 0xfffffe74u));
/* 86e895: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 86e899: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_86e8a0: /* 86e8a0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e8a2: je 0x86e9bd */
  if (zf) goto L_86e9bd;
L_86e8a8: /* 86e8a8: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86e8ab: je 0x86e92a */
  if (zf) goto L_86e92a;
L_86e8ad: /* 86e8ad: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 86e8af: mov ecx, edi */
  ecx = edi;
/* 86e8b1: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x86e8b3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e8b3: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 86e8b6: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86e8b9: xor eax, eax */
  eax = 0;
/* 86e8bb: mov dword ptr [ebp - 0x7c], eax */
  W32((uint32_t)(ebp + 0xffffff84u), eax);
/* 86e8be: mov dword ptr [ebp - 0x84], eax */
  W32((uint32_t)(ebp + 0xffffff7cu), eax);
/* 86e8c4: mov dword ptr [ebp - 0x80], eax */
  W32((uint32_t)(ebp + 0xffffff80u), eax);
/* 86e8c7: mov dword ptr [ebp - 0x78], eax */
  W32((uint32_t)(ebp + 0xffffff88u), eax);
/* 86e8ca: mov dword ptr [ebp - 0x74], eax */
  W32((uint32_t)(ebp + 0xffffff8cu), eax);
/* 86e8cd: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 86e8d0: mov eax, edx */
  eax = edx;
/* 86e8d2: imul eax, eax, 0x78 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x78u);
  eax = (uint32_t)r;
  }
/* 86e8d5: add eax, dword ptr [ebx + 0x58] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x58u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86e8d8: mov dword ptr [ebp - 0x8c], ebx */
  W32((uint32_t)(ebp + 0xffffff74u), ebx);
/* 86e8de: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 86e8e1: mov dword ptr [ebp - 0x88], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff78u), 0xffffffffu);
/* 86e8eb: mov eax, dword ptr [eax + 0x60] */
  eax = R32((uint32_t)(eax + 0x60u));
/* 86e8ee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86e8ef: mov dword ptr [ebp - 0x7c], ecx */
  W32((uint32_t)(ebp + 0xffffff84u), ecx);
/* 86e8f2: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 86e8f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86e8f6: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 86e8f9: mov dword ptr [ebp - 0x88], eax */
  W32((uint32_t)(ebp + 0xffffff78u), eax);
/* 86e8ff: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 86e902: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e903: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 86e906: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86e907: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e908: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86e909: lea ecx, [ebp - 0x8c] */
  ecx = (uint32_t)(ebp + 0xffffff74u);
/* 86e90f: call 0x6c83fa */
  esp -= 4; W32(esp, 0x86e914u); SPILL(); f_6c83fa(); if (g_unwind) return; RELOAD();
/* 86e914: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86e915: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86e916: lea ecx, [ebp - 0x8c] */
  ecx = (uint32_t)(ebp + 0xffffff74u);
/* 86e91c: call 0x6c1a5a */
  esp -= 4; W32(esp, 0x86e921u); SPILL(); f_6c1a5a(); if (g_unwind) return; RELOAD();
/* 86e921: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 86e923: mov ecx, edi */
  ecx = edi;
/* 86e925: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x86e928u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e928: jmp 0x86e974 */
  goto L_86e974;
L_86e92a: /* 86e92a: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 86e92d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 86e92f: cmp byte ptr [ecx + 0x51], 0xa */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x51u))); uint8_t b = (uint8_t)(0xau);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 86e933: jne 0x86e94d */
  if (!zf) goto L_86e94d;
L_86e935: /* 86e935: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86e937: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86e939: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 86e93c: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x86e942u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 86e942: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* 86e945: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 86e948: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 86e94b: jmp 0x86e974 */
  goto L_86e974;
L_86e94d: /* 86e94d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86e94e: lea edx, [ebp - 0x4c8] */
  edx = (uint32_t)(ebp + 0xfffffb38u);
/* 86e954: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86e955: call 0x869c90 */
  esp -= 4; W32(esp, 0x86e95au); SPILL(); f_869c90(); if (g_unwind) return; RELOAD();
/* 86e95a: mov eax, dword ptr [ebp - 0x178] */
  eax = R32((uint32_t)(ebp + 0xfffffe88u));
/* 86e960: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86e963: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e965: je 0x86e974 */
  if (zf) goto L_86e974;
L_86e967: /* 86e967: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86e968: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86e969: lea ecx, [ebp - 0x188] */
  ecx = (uint32_t)(ebp + 0xfffffe78u);
/* 86e96f: call 0x6c9f52 */
  esp -= 4; W32(esp, 0x86e974u); SPILL(); f_6c9f52(); if (g_unwind) return; RELOAD();
L_86e974: /* 86e974: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 86e977: mov ecx, dword ptr [eax + 0x15c] */
  ecx = R32((uint32_t)(eax + 0x15cu));
/* 86e97d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e97f: jne 0x86e9a5 */
  if (!zf) goto L_86e9a5;
L_86e981: /* 86e981: mov ebx, dword ptr [0xcd8ad8] */
  ebx = R32((uint32_t)(0xcd8ad8u));
/* 86e987: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 86e98a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_86e990: /* 86e990: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e992: je 0x86e9a5 */
  if (zf) goto L_86e9a5;
L_86e994: /* 86e994: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 86e997: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86e998: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 86e99a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86e99b: call 0x6c894a */
  esp -= 4; W32(esp, 0x86e9a0u); SPILL(); f_6c894a(); if (g_unwind) return; RELOAD();
/* 86e9a0: mov ebx, dword ptr [ebx + 4] */
  ebx = R32((uint32_t)(ebx + 0x4u));
/* 86e9a3: jmp 0x86e990 */
  goto L_86e990;
L_86e9a5: /* 86e9a5: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 86e9a8: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 86e9ab: mov dword ptr [0xcd8ad8], 0 */
  W32((uint32_t)(0xcd8ad8u), 0x0u);
/* 86e9b5: mov esi, dword ptr [esi + 0x1c] */
  esi = R32((uint32_t)(esi + 0x1cu));
/* 86e9b8: jmp 0x86e8a0 */
  goto L_86e8a0;
L_86e9bd: /* 86e9bd: mov edx, dword ptr [ebp - 0x64] */
  edx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 86e9c0: mov dword ptr [0xcd8ad8], edx */
  W32((uint32_t)(0xcd8ad8u), edx);
/* 86e9c6: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 86e9c9: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x86e9cfu); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 86e9cf: mov ecx, dword ptr [eax + 0x54] */
  ecx = R32((uint32_t)(eax + 0x54u));
/* 86e9d2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e9d4: je 0x86eb72 */
  if (zf) goto L_86eb72;
L_86e9da: /* 86e9da: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 86e9dd: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 86e9e0: test dword ptr [ecx + 0x534], 0x40000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x534u))); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86e9ea: je 0x86eb72 */
  if (zf) goto L_86eb72;
L_86e9f0: /* 86e9f0: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 86e9f2: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 86e9f4: mov ecx, edi */
  ecx = edi;
/* 86e9f6: mov dword ptr [ebp - 0x64], eax */
  W32((uint32_t)(ebp + 0xffffff9cu), eax);
/* 86e9f9: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x86e9fbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86e9fb: xor edi, edi */
  edi = 0;
L_86e9fd: /* 86e9fd: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86ea00: cmp edi, dword ptr [eax + 0x118] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x118u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86ea06: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 86ea09: jge 0x86eb48 */
  if ((sf == of)) goto L_86eb48;
L_86ea0f: /* 86ea0f: mov eax, dword ptr [ecx + 0x8c] */
  eax = R32((uint32_t)(ecx + 0x8cu));
/* 86ea15: lea edx, [edi + edi*2] */
  edx = (uint32_t)(edi + edi*2);
/* 86ea18: mov eax, dword ptr [eax + edx*8 + 0x11c] */
  eax = R32((uint32_t)(eax + edx*8 + 0x11cu));
/* 86ea1f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86ea21: je 0x86ea27 */
  if (zf) goto L_86ea27;
L_86ea23: /* 86ea23: mov esi, eax */
  esi = eax;
/* 86ea25: jmp 0x86ea2c */
  goto L_86ea2c;
L_86ea27: /* 86ea27: mov ecx, dword ptr [ecx + 0x2c] */
  ecx = R32((uint32_t)(ecx + 0x2cu));
/* 86ea2a: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
L_86ea2c: /* 86ea2c: test byte ptr [esi + 0x358], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x358u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86ea33: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 86ea36: je 0x86eb42 */
  if (zf) goto L_86eb42;
L_86ea3c: /* 86ea3c: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86ea3f: mov eax, dword ptr [edx + 0x1c8] */
  eax = R32((uint32_t)(edx + 0x1c8u));
/* 86ea45: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86ea47: je 0x86ea6f */
  if (zf) goto L_86ea6f;
L_86ea49: /* 86ea49: mov eax, 1 */
  eax = 0x1u;
/* 86ea4e: xor edx, edx */
  edx = 0;
/* 86ea50: mov ecx, edi */
  ecx = edi;
/* 86ea52: call 0x99cc70 */
  esp -= 4; W32(esp, 0x86ea57u); SPILL(); f_99cc70(); if (g_unwind) return; RELOAD();
/* 86ea57: mov ecx, dword ptr [ebp - 0x1a8] */
  ecx = R32((uint32_t)(ebp + 0xfffffe58u));
/* 86ea5d: mov ebx, dword ptr [ebp - 0x1a4] */
  ebx = R32((uint32_t)(ebp + 0xfffffe5cu));
/* 86ea63: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 86ea65: and edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 86ea67: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  eax = r;
  }
/* 86ea69: je 0x86eb42 */
  if (zf) goto L_86eb42;
L_86ea6f: /* 86ea6f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 86ea72: cmp edi, dword ptr [eax + 0x1cc] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x1ccu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86ea78: je 0x86eb42 */
  if (zf) goto L_86eb42;
L_86ea7e: /* 86ea7e: xor ebx, ebx */
  ebx = 0;
L_86ea80: /* 86ea80: cmp ebx, dword ptr [esi + 0x360] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x360u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86ea86: jge 0x86eb42 */
  if ((sf == of)) goto L_86eb42;
L_86ea8c: /* 86ea8c: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86ea8f: mov edx, dword ptr [ecx + 0x35c] */
  edx = R32((uint32_t)(ecx + 0x35cu));
/* 86ea95: mov esi, dword ptr [edx + ebx*4] */
  esi = R32((uint32_t)(edx + ebx*4));
/* 86ea98: test byte ptr [esi + 0x1260], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x1260u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86ea9f: je 0x86eac9 */
  if (zf) goto L_86eac9;
L_86eaa1: /* 86eaa1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 86eaa4: fld dword ptr [eax + 0x1b8] */
  { double v = F32((uint32_t)(eax + 0x1b8u)); FPUSH(v); }
/* 86eaaa: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 86eab0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86eab2: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 86eab5: jp 0x86eabb */
  if (pf) goto L_86eabb;
L_86eab7: /* 86eab7: xor eax, eax */
  eax = 0;
/* 86eab9: jmp 0x86eac0 */
  goto L_86eac0;
L_86eabb: /* 86eabb: mov eax, 1 */
  eax = 0x1u;
L_86eac0: /* 86eac0: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 86eac3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86eac5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86eac6: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x86eac9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_86eac9: /* 86eac9: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 86eacc: mov ecx, dword ptr [eax + 0x1c8] */
  ecx = R32((uint32_t)(eax + 0x1c8u));
/* 86ead2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86ead4: je 0x86eae2 */
  if (zf) goto L_86eae2;
L_86ead6: /* 86ead6: lea eax, [edi + edi*2] */
  eax = (uint32_t)(edi + edi*2);
/* 86ead9: lea eax, [ebp + eax*4 - 0x4ac] */
  eax = (uint32_t)(ebp + eax*4 + 0xfffffb54u);
/* 86eae0: jmp 0x86eae8 */
  goto L_86eae8;
L_86eae2: /* 86eae2: lea eax, [ebp - 0x4ac] */
  eax = (uint32_t)(ebp + 0xfffffb54u);
L_86eae8: /* 86eae8: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 86eaeb: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86eaee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86eaef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86eaf0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86eaf1: mov ecx, esi */
  ecx = esi;
/* 86eaf3: call 0x6cbc49 */
  esp -= 4; W32(esp, 0x86eaf8u); SPILL(); f_6cbc49(); if (g_unwind) return; RELOAD();
/* 86eaf8: test byte ptr [esi + 0x1260], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x1260u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86eaff: je 0x86eb39 */
  if (zf) goto L_86eb39;
L_86eb01: /* 86eb01: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 86eb04: fld dword ptr [eax + 0x1b8] */
  { double v = F32((uint32_t)(eax + 0x1b8u)); FPUSH(v); }
/* 86eb0a: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 86eb10: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86eb12: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 86eb15: jp 0x86eb2e */
  if (pf) goto L_86eb2e;
L_86eb17: /* 86eb17: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 86eb1a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86eb1c: mov eax, 1 */
  eax = 0x1u;
/* 86eb21: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86eb22: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x86eb25u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86eb25: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86eb28: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 86eb29: jmp 0x86ea80 */
  goto L_86ea80;
L_86eb2e: /* 86eb2e: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 86eb31: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86eb33: xor eax, eax */
  eax = 0;
/* 86eb35: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86eb36: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x86eb39u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_86eb39: /* 86eb39: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86eb3c: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 86eb3d: jmp 0x86ea80 */
  goto L_86ea80;
L_86eb42: /* 86eb42: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 86eb43: jmp 0x86e9fd */
  goto L_86e9fd;
L_86eb48: /* 86eb48: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 86eb4b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86eb4d: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x86eb50u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86eb50: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 86eb56: mov edx, dword ptr [0xce83b4] */
  edx = R32((uint32_t)(0xce83b4u));
/* 86eb5c: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 86eb5f: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 86eb61: mov esi, dword ptr [ebp - 0x64] */
  esi = R32((uint32_t)(ebp + 0xffffff9cu));
/* 86eb64: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86eb66: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 86eb69: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 86eb6c: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 86eb6e: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 86eb70: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
L_86eb72: /* 86eb72: xor esi, esi */
  esi = 0;
L_86eb74: /* 86eb74: cmp esi, dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86eb77: jge 0x86eb92 */
  if ((sf == of)) goto L_86eb92;
L_86eb79: /* 86eb79: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 86eb7c: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 86eb7f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86eb80: lea edx, [ebp - 0x4c8] */
  edx = (uint32_t)(ebp + 0xfffffb38u);
/* 86eb86: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86eb87: call 0x869c90 */
  esp -= 4; W32(esp, 0x86eb8cu); SPILL(); f_869c90(); if (g_unwind) return; RELOAD();
/* 86eb8c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86eb8f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 86eb90: jmp 0x86eb74 */
  goto L_86eb74;
L_86eb92: /* 86eb92: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 86eb95: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86eb97: jne 0x86ebc4 */
  if (!zf) goto L_86ebc4;
L_86eb99: /* 86eb99: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 86eb9c: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 86eb9f: test dword ptr [ecx + 0x534], 0x400000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x534u))); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86eba9: je 0x86ebc4 */
  if (zf) goto L_86ebc4;
L_86ebab: /* 86ebab: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 86ebad: mov ecx, edi */
  ecx = edi;
/* 86ebaf: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x86ebb1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86ebb1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86ebb2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86ebb3: mov ecx, 0xcd8af0 */
  ecx = 0xcd8af0u;
/* 86ebb8: call 0x6c332d */
  esp -= 4; W32(esp, 0x86ebbdu); SPILL(); f_6c332d(); if (g_unwind) return; RELOAD();
/* 86ebbd: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 86ebbf: mov ecx, edi */
  ecx = edi;
/* 86ebc1: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x86ebc4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_86ebc4: /* 86ebc4: mov ecx, dword ptr [0xcfa504] */
  ecx = R32((uint32_t)(0xcfa504u));
/* 86ebca: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86ebcd: je 0x86ec4b */
  if (zf) goto L_86ec4b;
L_86ebcf: /* 86ebcf: mov esi, dword ptr [ebp - 0x38] */
  esi = R32((uint32_t)(ebp + 0xffffffc8u));
/* 86ebd2: mov ecx, esi */
  ecx = esi;
/* 86ebd4: call 0x6c4304 */
  esp -= 4; W32(esp, 0x86ebd9u); SPILL(); f_6c4304(); if (g_unwind) return; RELOAD();
/* 86ebd9: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 86ebdb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86ebdc: mov ecx, ebx */
  ecx = ebx;
/* 86ebde: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x86ebe1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86ebe1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86ebe3: je 0x86ec4b */
  if (zf) goto L_86ec4b;
L_86ebe5: /* 86ebe5: mov ecx, esi */
  ecx = esi;
/* 86ebe7: call 0x6c4304 */
  esp -= 4; W32(esp, 0x86ebecu); SPILL(); f_6c4304(); if (g_unwind) return; RELOAD();
/* 86ebec: mov ecx, eax */
  ecx = eax;
/* 86ebee: call 0x6ca2c2 */
  esp -= 4; W32(esp, 0x86ebf3u); SPILL(); f_6ca2c2(); if (g_unwind) return; RELOAD();
/* 86ebf3: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 86ebf6: lea edx, [ebp - 0xff4] */
  edx = (uint32_t)(ebp + 0xfffff00cu);
/* 86ebfc: mov edi, eax */
  edi = eax;
/* 86ebfe: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86ec00: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86ec01: call dword ptr [eax + 0x24] */
  { uint32_t t = R32((uint32_t)(eax + 0x24u)); esp -= 4; W32(esp, 0x86ec04u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86ec04: lea eax, [ebp - 0x160] */
  eax = (uint32_t)(ebp + 0xfffffea0u);
/* 86ec0a: lea esi, [edi + 0x8c] */
  esi = (uint32_t)(edi + 0x8cu);
/* 86ec10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86ec11: mov ecx, esi */
  ecx = esi;
/* 86ec13: call dword ptr [0xcfa348] */
  esp -= 4; W32(esp, 0x86ec19u); SPILL(); f_4e1703(); if (g_unwind) return; /* Core!?GetExtent@FBox@@QBE?AVFVector@@XZ */ RELOAD();
/* 86ec19: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 86ec1c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86ec1d: mov ecx, esi */
  ecx = esi;
/* 86ec1f: mov ebx, eax */
  ebx = eax;
/* 86ec21: call dword ptr [0xcfa34c] */
  esp -= 4; W32(esp, 0x86ec27u); SPILL(); f_4e3139(); if (g_unwind) return; /* Core!?GetCenter@FBox@@QBE?AVFVector@@XZ */ RELOAD();
/* 86ec27: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86ec28: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86ec29: lea ecx, [ebp - 0xff4] */
  ecx = (uint32_t)(ebp + 0xfffff00cu);
/* 86ec2f: call 0x6c1e42 */
  esp -= 4; W32(esp, 0x86ec34u); SPILL(); f_6c1e42(); if (g_unwind) return; RELOAD();
/* 86ec34: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86ec36: je 0x86ec4b */
  if (zf) goto L_86ec4b;
L_86ec38: /* 86ec38: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86ec3b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 86ec3e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86ec3f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86ec41: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86ec43: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86ec44: mov ecx, edi */
  ecx = edi;
/* 86ec46: call 0x6c4b24 */
  esp -= 4; W32(esp, 0x86ec4bu); SPILL(); f_6c4b24(); if (g_unwind) return; RELOAD();
L_86ec4b: /* 86ec4b: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 86ec51: mov edx, dword ptr [0xce8398] */
  edx = R32((uint32_t)(0xce8398u));
/* 86ec57: lea esi, [ecx + edx*4] */
  esi = (uint32_t)(ecx + edx*4);
/* 86ec5a: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86ec5f: call dword ptr [0xcfab44] */
  esp -= 4; W32(esp, 0x86ec65u); SPILL(); f_4e3855(); if (g_unwind) return; /* Core!?GetByteCount@FMemStack@@QAEHXZ */ RELOAD();
/* 86ec65: mov edi, dword ptr [ebp - 0x94] */
  edi = R32((uint32_t)(ebp + 0xffffff6cu));
/* 86ec6b: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 86ec6d: mov ecx, dword ptr [0xcd8ae0] */
  ecx = R32((uint32_t)(0xcd8ae0u));
/* 86ec73: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 86ec75: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 86ec77: lea eax, [ebp - 0x4c8] */
  eax = (uint32_t)(ebp + 0xfffffb38u);
/* 86ec7d: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86ec7f: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 86ec81: jne 0x86ec8d */
  if (!zf) goto L_86ec8d;
L_86ec83: /* 86ec83: mov dword ptr [0xcd8ae0], 0 */
  W32((uint32_t)(0xcd8ae0u), 0x0u);
L_86ec8d: /* 86ec8d: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 86ec90: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x86ec96u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 86ec96: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 86ec99: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 86ec9d: call 0x6c56d2 */
  esp -= 4; W32(esp, 0x86eca2u); SPILL(); f_6c56d2(); if (g_unwind) return; RELOAD();
/* 86eca2: push 0x6c45c5 */
  { uint32_t v = 0x6c45c5u; esp -= 4; W32(esp, v); }
/* 86eca7: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 86eca9: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 86ecab: lea ecx, [ebp - 0x4ac] */
  ecx = (uint32_t)(ebp + 0xfffffb54u);
/* 86ecb1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86ecb2: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 86ecb6: call 0x99ca3d */
  esp -= 4; W32(esp, 0x86ecbbu); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 86ecbb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 86ecbe: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 86ecbf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 86ecc0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 86ecc7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 86ecc8: mov esp, ebp */
  esp = ebp;
/* 86ecca: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 86eccb: ret  */
  esp += 4; SPILL(); return;
}
