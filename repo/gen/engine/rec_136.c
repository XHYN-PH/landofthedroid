#include "recomp.h"
#include "rec_mod.h"

void f_95d600(void) {
  LOAD_REGS();
L_95d600: /* 95d600: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95d601: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 95d606: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95d607: xor esi, esi */
  esi = 0;
/* 95d609: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95d60c: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 95d610: jl 0x95d625 */
  if ((sf != of)) goto L_95d625;
L_95d612: /* 95d612: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 95d617: push 0xafa470 */
  { uint32_t v = 0xafa470u; esp -= 4; W32(esp, v); }
/* 95d61c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95d61d: call 0x953470 */
  esp -= 4; W32(esp, 0x95d622u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95d622: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95d625: /* 95d625: mov eax, dword ptr [0xcf89f0] */
  eax = R32((uint32_t)(0xcf89f0u));
/* 95d62a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95d62c: jne 0x95d633 */
  if (!zf) goto L_95d633;
L_95d62e: /* 95d62e: call 0x958540 */
  esp -= 4; W32(esp, 0x95d633u); SPILL(); f_958540(); if (g_unwind) return; RELOAD();
L_95d633: /* 95d633: mov eax, dword ptr [0xcf8b58] */
  eax = R32((uint32_t)(0xcf8b58u));
/* 95d638: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95d63a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95d63b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95d63c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95d63d: je 0x95d654 */
  if (zf) goto L_95d654;
L_95d63f: /* 95d63f: mov edx, 0xffffdfff */
  edx = 0xffffdfffu;
L_95d644: /* 95d644: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 95d647: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95d649: je 0x95d654 */
  if (zf) goto L_95d654;
L_95d64b: /* 95d64b: and dword ptr [eax + 0x3c], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x3cu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x3cu), r);
  }
/* 95d64e: mov eax, ecx */
  eax = ecx;
/* 95d650: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95d652: jne 0x95d644 */
  if (!zf) goto L_95d644;
L_95d654: /* 95d654: mov edi, dword ptr [0xcf8b58] */
  edi = R32((uint32_t)(0xcf8b58u));
/* 95d65a: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95d65c: je 0x95d712 */
  if (zf) goto L_95d712;
L_95d662: /* 95d662: mov ebp, 0x2000 */
  ebp = 0x2000u;
L_95d667: /* 95d667: mov eax, dword ptr [edi + 0x1c] */
  eax = R32((uint32_t)(edi + 0x1cu));
/* 95d66a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95d66c: je 0x95d712 */
  if (zf) goto L_95d712;
L_95d672: /* 95d672: or dword ptr [edi + 0x3c], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x3cu))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(edi + 0x3cu), r);
  }
/* 95d675: mov ecx, dword ptr [0xcf8bf8] */
  ecx = R32((uint32_t)(0xcf8bf8u));
/* 95d67b: mov dword ptr [edi + 0x34], ecx */
  W32((uint32_t)(edi + 0x34u), ecx);
/* 95d67e: inc dword ptr [0xcf8bf8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8bf8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0xcf8bf8u), r);
  }
/* 95d684: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 95d687: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95d689: je 0x95d6a6 */
  if (zf) goto L_95d6a6;
L_95d68b: /* 95d68b: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 95d68e: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 95d691: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95d693: je 0x95d6a6 */
  if (zf) goto L_95d6a6;
L_95d695: /* 95d695: mov edx, dword ptr [0xcf8bf8] */
  edx = R32((uint32_t)(0xcf8bf8u));
/* 95d69b: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 95d69e: mov dword ptr [edi + 0x34], edx */
  W32((uint32_t)(edi + 0x34u), edx);
/* 95d6a1: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95d6a4: jne 0x95d695 */
  if (!zf) goto L_95d695;
L_95d6a6: /* 95d6a6: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 95d6a9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95d6ab: je 0x95d707 */
  if (zf) goto L_95d707;
L_95d6ad: /* 95d6ad: lea ebx, [eax + 4] */
  ebx = (uint32_t)(eax + 0x4u);
/* 95d6b0: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 95d6b2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95d6b4: je 0x95d707 */
  if (zf) goto L_95d707;
L_95d6b6: /* 95d6b6: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 95d6b9: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 95d6bc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95d6be: je 0x95d6fd */
  if (zf) goto L_95d6fd;
L_95d6c0: /* 95d6c0: lea esi, [eax + 4] */
  esi = (uint32_t)(eax + 0x4u);
/* 95d6c3: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 95d6c5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95d6c7: je 0x95d6fd */
  if (zf) goto L_95d6fd;
L_95d6c9: /* 95d6c9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_95d6d0: /* 95d6d0: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 95d6d3: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 95d6d6: test ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95d6d8: jne 0x95d6f7 */
  if (!zf) goto L_95d6f7;
L_95d6da: /* 95d6da: mov ecx, dword ptr [0xcf8bf8] */
  ecx = R32((uint32_t)(0xcf8bf8u));
/* 95d6e0: cmp dword ptr [eax + 0x34], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x34u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95d6e3: je 0x95d6f7 */
  if (zf) goto L_95d6f7;
L_95d6e5: /* 95d6e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95d6e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95d6e7: call 0x95d300 */
  esp -= 4; W32(esp, 0x95d6ecu); SPILL(); f_95d300(); if (g_unwind) return; RELOAD();
/* 95d6ec: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95d6ef: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95d6f1: je 0x95d6f7 */
  if (zf) goto L_95d6f7;
L_95d6f3: /* 95d6f3: inc dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x10u), r);
  }
L_95d6f7: /* 95d6f7: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 95d6f9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95d6fb: jne 0x95d6d0 */
  if (!zf) goto L_95d6d0;
L_95d6fd: /* 95d6fd: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 95d6ff: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95d701: jne 0x95d6b6 */
  if (!zf) goto L_95d6b6;
L_95d703: /* 95d703: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
L_95d707: /* 95d707: mov edi, dword ptr [edi + 0x1c] */
  edi = R32((uint32_t)(edi + 0x1cu));
/* 95d70a: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95d70c: jne 0x95d667 */
  if (!zf) goto L_95d667;
L_95d712: /* 95d712: mov ecx, dword ptr [0xcf7a74] */
  ecx = R32((uint32_t)(0xcf7a74u));
/* 95d718: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 95d71d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95d71e: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 95d720: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95d723: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 95d724: mov dword ptr [0xcf7a74], ecx */
  W32((uint32_t)(0xcf7a74u), ecx);
/* 95d72a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95d72b: jl 0x95d742 */
  if ((sf != of)) goto L_95d742;
L_95d72d: /* 95d72d: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 95d733: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95d734: push 0xafa434 */
  { uint32_t v = 0xafa434u; esp -= 4; W32(esp, v); }
/* 95d739: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95d73a: call 0x953470 */
  esp -= 4; W32(esp, 0x95d73fu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95d73f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95d742: /* 95d742: xor eax, eax */
  eax = 0;
/* 95d744: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 95d746: setg al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(((!zf && sf == of)) ? 1 : 0) & 0xffu);
/* 95d749: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95d74a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 95d74b: ret  */
  esp += 4; SPILL(); return;
}

void f_95d750(void) {
  LOAD_REGS();
L_95d750: /* 95d750: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95d751: cmp dword ptr [0xcf8438], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95d758: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95d759: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 95d75d: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 95d765: jl 0x95d77b */
  if ((sf != of)) goto L_95d77b;
L_95d767: /* 95d767: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95d769: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95d76b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95d76d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95d76e: push 0xafa538 */
  { uint32_t v = 0xafa538u; esp -= 4; W32(esp, v); }
/* 95d773: call 0x953700 */
  esp -= 4; W32(esp, 0x95d778u); SPILL(); f_953700(); if (g_unwind) return; RELOAD();
/* 95d778: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95d77b: /* 95d77b: cmp esi, dword ptr [0xcf8b68] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0xcf8b68u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95d781: je 0x95d799 */
  if (zf) goto L_95d799;
L_95d783: /* 95d783: mov eax, dword ptr [0xcf8b70] */
  eax = R32((uint32_t)(0xcf8b70u));
/* 95d788: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95d78a: je 0x95d82a */
  if (zf) goto L_95d82a;
L_95d790: /* 95d790: test dword ptr [eax + 0x14], 0x10000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(0x10000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95d797: je 0x95d7f8 */
  if (zf) goto L_95d7f8;
L_95d799: /* 95d799: mov eax, dword ptr [0xcf8bac] */
  eax = R32((uint32_t)(0xcf8bacu));
/* 95d79e: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 95d7a1: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 95d7a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95d7a6: mov eax, dword ptr [edx + 0x38] */
  eax = R32((uint32_t)(edx + 0x38u));
/* 95d7a9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95d7aa: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 95d7b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95d7b1: push 0xafa4e8 */
  { uint32_t v = 0xafa4e8u; esp -= 4; W32(esp, v); }
/* 95d7b6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95d7b7: call 0x953470 */
  esp -= 4; W32(esp, 0x95d7bcu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95d7bc: mov edx, dword ptr [0xcf8b68] */
  edx = R32((uint32_t)(0xcf8b68u));
/* 95d7c2: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95d7c5: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95d7c7: je 0x95d7f3 */
  if (zf) goto L_95d7f3;
L_95d7c9: /* 95d7c9: mov ecx, dword ptr [0xcf8b70] */
  ecx = R32((uint32_t)(0xcf8b70u));
/* 95d7cf: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95d7d1: je 0x95d7df */
  if (zf) goto L_95d7df;
L_95d7d3: /* 95d7d3: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 95d7d6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95d7d8: je 0x95d7df */
  if (zf) goto L_95d7df;
L_95d7da: /* 95d7da: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 95d7dd: jmp 0x95d7e1 */
  goto L_95d7e1;
L_95d7df: /* 95d7df: xor eax, eax */
  eax = 0;
L_95d7e1: /* 95d7e1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95d7e2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95d7e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95d7e5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95d7e6: push 0xaf9ed8 */
  { uint32_t v = 0xaf9ed8u; esp -= 4; W32(esp, v); }
/* 95d7eb: call 0x953700 */
  esp -= 4; W32(esp, 0x95d7f0u); SPILL(); f_953700(); if (g_unwind) return; RELOAD();
/* 95d7f0: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95d7f3: /* 95d7f3: mov eax, dword ptr [0xcf8b70] */
  eax = R32((uint32_t)(0xcf8b70u));
L_95d7f8: /* 95d7f8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95d7fa: je 0x95d82a */
  if (zf) goto L_95d82a;
L_95d7fc: /* 95d7fc: test dword ptr [eax + 0x14], 0x8000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(0x8000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95d803: je 0x95d821 */
  if (zf) goto L_95d821;
L_95d805: /* 95d805: mov edx, dword ptr [0xcf8bac] */
  edx = R32((uint32_t)(0xcf8bacu));
/* 95d80b: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 95d810: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95d811: push 0xafa4ac */
  { uint32_t v = 0xafa4acu; esp -= 4; W32(esp, v); }
/* 95d816: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95d817: call 0x953470 */
  esp -= 4; W32(esp, 0x95d81cu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95d81c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95d81f: jmp 0x95d82a */
  goto L_95d82a;
L_95d821: /* 95d821: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95d822: call 0x955cb0 */
  esp -= 4; W32(esp, 0x95d827u); SPILL(); f_955cb0(); if (g_unwind) return; RELOAD();
/* 95d827: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95d82a: /* 95d82a: mov eax, dword ptr [0xcf8b68] */
  eax = R32((uint32_t)(0xcf8b68u));
/* 95d82f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95d831: je 0x95d85e */
  if (zf) goto L_95d85e;
L_95d833: /* 95d833: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* 95d837: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95d838: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 95d83a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95d83b: call 0x954ef0 */
  esp -= 4; W32(esp, 0x95d840u); SPILL(); f_954ef0(); if (g_unwind) return; RELOAD();
/* 95d840: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 95d844: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95d847: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95d849: je 0x95d85e */
  if (zf) goto L_95d85e;
L_95d84b: /* 95d84b: mov edx, dword ptr [0xcf8b68] */
  edx = R32((uint32_t)(0xcf8b68u));
/* 95d851: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95d853: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95d854: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 95d856: call 0x9535b0 */
  esp -= 4; W32(esp, 0x95d85bu); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 95d85b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95d85e: /* 95d85e: mov eax, dword ptr [0xcf8404] */
  eax = R32((uint32_t)(0xcf8404u));
/* 95d863: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95d865: jne 0x95d870 */
  if (!zf) goto L_95d870;
L_95d867: /* 95d867: cmp dword ptr [0xcf8438], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95d86e: jl 0x95d896 */
  if ((sf != of)) goto L_95d896;
L_95d870: /* 95d870: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 95d874: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95d875: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 95d877: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95d878: call 0x954ef0 */
  esp -= 4; W32(esp, 0x95d87du); SPILL(); f_954ef0(); if (g_unwind) return; RELOAD();
/* 95d87d: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 95d881: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95d884: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95d886: je 0x95d896 */
  if (zf) goto L_95d896;
L_95d888: /* 95d888: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95d88a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95d88c: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 95d88e: call 0x9535b0 */
  esp -= 4; W32(esp, 0x95d893u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 95d893: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95d896: /* 95d896: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95d897: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 95d898: ret  */
  esp += 4; SPILL(); return;
}

void f_95d8a0(void) {
  LOAD_REGS();
L_95d8a0: /* 95d8a0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 95d8a3: mov eax, dword ptr [0xcf7a80] */
  eax = R32((uint32_t)(0xcf7a80u));
/* 95d8a8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95d8a9: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* 95d8ad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95d8ae: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95d8af: mov dword ptr [0xcf8c4c], eax */
  W32((uint32_t)(0xcf8c4cu), eax);
/* 95d8b4: call dword ptr [0xcfb0b8] */
  esp -= 4; W32(esp, 0x95d8bau); SPILL(); f_43166a(); if (g_unwind) return; /* MSVCR70!time */ RELOAD();
/* 95d8ba: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 95d8be: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95d8bf: call dword ptr [0xcfb0d0] */
  esp -= 4; W32(esp, 0x95d8c5u); SPILL(); f_403745(); if (g_unwind) return; /* MSVCR70!localtime */ RELOAD();
/* 95d8c5: mov edi, eax */
  edi = eax;
/* 95d8c7: call 0x94f6c0 */
  esp -= 4; W32(esp, 0x95d8ccu); SPILL(); f_94f6c0(); if (g_unwind) return; RELOAD();
/* 95d8cc: mov esi, dword ptr [0xcf7850] */
  esi = R32((uint32_t)(0xcf7850u));
/* 95d8d2: mov ecx, dword ptr [0xcf7854] */
  ecx = R32((uint32_t)(0xcf7854u));
/* 95d8d8: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 95d8dc: mov eax, dword ptr [0xcf7a80] */
  eax = R32((uint32_t)(0xcf7a80u));
/* 95d8e1: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 95d8e9: fild qword ptr [esp + 0x14] */
  { double v = (double)(int64_t)R64((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 95d8ed: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 95d8ef: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 95d8f1: mov eax, dword ptr [0xcf8c18] */
  eax = R32((uint32_t)(0xcf8c18u));
/* 95d8f6: fmul dword ptr [0x9f7c0c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c0cu)));
/* 95d8fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95d8fd: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 95d901: call 0x94f340 */
  esp -= 4; W32(esp, 0x95d906u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 95d906: mov ecx, dword ptr [0xcf8b84] */
  ecx = R32((uint32_t)(0xcf8b84u));
/* 95d90c: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 95d910: mov edx, dword ptr [0xcf8b80] */
  edx = R32((uint32_t)(0xcf8b80u));
/* 95d916: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95d919: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 95d91b: mov eax, dword ptr [0xcf8b60] */
  eax = R32((uint32_t)(0xcf8b60u));
/* 95d920: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95d921: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 95d924: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 95d926: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 95d928: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95d929: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 95d92c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95d92d: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 95d930: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 95d933: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95d934: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 95d939: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95d93a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95d93b: push 0xafa540 */
  { uint32_t v = 0xafa540u; esp -= 4; W32(esp, v); }
/* 95d940: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95d941: call 0x953470 */
  esp -= 4; W32(esp, 0x95d946u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95d946: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95d949: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95d94a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95d94b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95d94e: ret  */
  esp += 4; SPILL(); return;
}

void f_95d950(void) {
  LOAD_REGS();
L_95d950: /* 95d950: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 95d954: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95d955: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95d956: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 95d95a: and dword ptr [esi + 0x3c], 0xfbffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(0xfbffffffu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x3cu), r);
  }
/* 95d961: mov eax, dword ptr [eax + 0x24] */
  eax = R32((uint32_t)(eax + 0x24u));
/* 95d964: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95d966: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95d967: mov edi, 0xfdffffff */
  edi = 0xfdffffffu;
/* 95d96c: je 0x95d988 */
  if (zf) goto L_95d988;
L_95d96e: /* 95d96e: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 95d971: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 95d973: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95d975: je 0x95d988 */
  if (zf) goto L_95d988;
L_95d977: /* 95d977: mov ebx, dword ptr [eax + 0xc] */
  ebx = R32((uint32_t)(eax + 0xcu));
/* 95d97a: and ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 95d97c: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 95d97f: mov dword ptr [eax + 0xc], ebx */
  W32((uint32_t)(eax + 0xcu), ebx);
/* 95d982: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 95d984: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95d986: jne 0x95d977 */
  if (!zf) goto L_95d977;
L_95d988: /* 95d988: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 95d98b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95d98d: je 0x95da29 */
  if (zf) goto L_95da29;
L_95d993: /* 95d993: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 95d996: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95d997: call 0x94f340 */
  esp -= 4; W32(esp, 0x95d99cu); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 95d99c: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 95d99f: mov edx, dword ptr [0xcf85cc] */
  edx = R32((uint32_t)(0xcf85ccu));
/* 95d9a5: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95d9a8: test ecx, 0x8000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95d9ae: jne 0x95d9c8 */
  if (!zf) goto L_95d9c8;
L_95d9b0: /* 95d9b0: add edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 95d9b3: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95d9b5: jle 0x95d9e5 */
  if ((zf || sf != of)) goto L_95d9e5;
L_95d9b7: /* 95d9b7: or ecx, 0x8000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8000000u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 95d9bd: mov dword ptr [esi + 0x3c], ecx */
  W32((uint32_t)(esi + 0x3cu), ecx);
/* 95d9c0: inc dword ptr [0xcf7ac4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf7ac4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0xcf7ac4u), r);
  }
/* 95d9c6: jmp 0x95d9e5 */
  goto L_95d9e5;
L_95d9c8: /* 95d9c8: lea ebx, [edx + 5] */
  ebx = (uint32_t)(edx + 0x5u);
/* 95d9cb: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95d9cd: jg 0x95d9e5 */
  if ((!zf && sf == of)) goto L_95d9e5;
L_95d9cf: /* 95d9cf: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95d9d1: je 0x95d9dc */
  if (zf) goto L_95d9dc;
L_95d9d3: /* 95d9d3: mov eax, dword ptr [0xcf8be0] */
  eax = R32((uint32_t)(0xcf8be0u));
/* 95d9d8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95d9da: je 0x95d9e5 */
  if (zf) goto L_95d9e5;
L_95d9dc: /* 95d9dc: and ecx, 0xf7ffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xf7ffffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 95d9e2: mov dword ptr [esi + 0x3c], ecx */
  W32((uint32_t)(esi + 0x3cu), ecx);
L_95d9e5: /* 95d9e5: test dword ptr [esi + 0x3c], 0x8000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(0x8000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95d9ec: jne 0x95da29 */
  if (!zf) goto L_95da29;
L_95d9ee: /* 95d9ee: mov eax, dword ptr [0xcf8b40] */
  eax = R32((uint32_t)(0xcf8b40u));
/* 95d9f3: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 95d9f6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95d9f7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95d9f8: call 0x953a60 */
  esp -= 4; W32(esp, 0x95d9fdu); SPILL(); f_953a60(); if (g_unwind) return; RELOAD();
/* 95d9fd: mov dword ptr [esi + 0x14], 0 */
  W32((uint32_t)(esi + 0x14u), 0x0u);
/* 95da04: mov esi, dword ptr [esi + 0x24] */
  esi = R32((uint32_t)(esi + 0x24u));
/* 95da07: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95da0a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95da0c: je 0x95da29 */
  if (zf) goto L_95da29;
L_95da0e: /* 95da0e: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 95da11: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95da13: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 95da16: je 0x95da29 */
  if (zf) goto L_95da29;
L_95da18: /* 95da18: mov esi, dword ptr [eax + 0xc] */
  esi = R32((uint32_t)(eax + 0xcu));
/* 95da1b: and esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 95da1d: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 95da20: mov dword ptr [eax + 0xc], esi */
  W32((uint32_t)(eax + 0xcu), esi);
/* 95da23: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 95da25: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95da27: jne 0x95da18 */
  if (!zf) goto L_95da18;
L_95da29: /* 95da29: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95da2a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95da2b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95da2c: ret  */
  esp += 4; SPILL(); return;
}

void f_95da30(void) {
  LOAD_REGS();
L_95da30: /* 95da30: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95da31: mov eax, dword ptr [0xcf8b48] */
  eax = R32((uint32_t)(0xcf8b48u));
/* 95da36: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95da37: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95da38: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95da39: call 0x94f3a0 */
  esp -= 4; W32(esp, 0x95da3eu); SPILL(); f_94f3a0(); if (g_unwind) return; RELOAD();
/* 95da3e: mov edx, dword ptr [0xcf8bf8] */
  edx = R32((uint32_t)(0xcf8bf8u));
/* 95da44: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 95da48: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95da4b: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 95da4c: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 95da50: mov dword ptr [0xcf8bf8], edx */
  W32((uint32_t)(0xcf8bf8u), edx);
/* 95da56: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 95da59: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95da5b: je 0x95da78 */
  if (zf) goto L_95da78;
L_95da5d: /* 95da5d: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 95da60: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 95da62: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95da64: je 0x95da78 */
  if (zf) goto L_95da78;
L_95da66: /* 95da66: mov edx, dword ptr [0xcf8bf8] */
  edx = R32((uint32_t)(0xcf8bf8u));
/* 95da6c: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 95da6f: mov dword ptr [eax + 0x34], edx */
  W32((uint32_t)(eax + 0x34u), edx);
/* 95da72: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 95da74: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95da76: jne 0x95da66 */
  if (!zf) goto L_95da66;
L_95da78: /* 95da78: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 95da7b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95da7d: je 0x95daa7 */
  if (zf) goto L_95daa7;
L_95da7f: /* 95da7f: lea esi, [eax + 4] */
  esi = (uint32_t)(eax + 0x4u);
/* 95da82: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 95da84: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95da86: je 0x95daa7 */
  if (zf) goto L_95daa7;
L_95da88: /* 95da88: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 95da8b: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 95da8e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95da90: je 0x95daa1 */
  if (zf) goto L_95daa1;
L_95da92: /* 95da92: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 95da96: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95da97: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95da98: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95da99: call 0x95db20 */
  esp -= 4; W32(esp, 0x95da9eu); SPILL(); f_95db20(); if (g_unwind) return; RELOAD();
/* 95da9e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95daa1: /* 95daa1: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 95daa3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95daa5: jne 0x95da88 */
  if (!zf) goto L_95da88;
L_95daa7: /* 95daa7: mov eax, dword ptr [0xcf8530] */
  eax = R32((uint32_t)(0xcf8530u));
/* 95daac: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95daae: jne 0x95dab9 */
  if (!zf) goto L_95dab9;
L_95dab0: /* 95dab0: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 95dab5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95dab7: je 0x95db18 */
  if (zf) goto L_95db18;
L_95dab9: /* 95dab9: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 95dabd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95dabe: call 0x94f340 */
  esp -= 4; W32(esp, 0x95dac3u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 95dac3: mov esi, dword ptr [0xcf7aa0] */
  esi = R32((uint32_t)(0xcf7aa0u));
/* 95dac9: mov edx, dword ptr [0xcf7aa4] */
  edx = R32((uint32_t)(0xcf7aa4u));
/* 95dacf: mov ecx, dword ptr [0xcf7aa8] */
  ecx = R32((uint32_t)(0xcf7aa8u));
/* 95dad5: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95dad8: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 95dad9: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 95dadb: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95dadd: mov dword ptr [0xcf7aa0], esi */
  W32((uint32_t)(0xcf7aa0u), esi);
/* 95dae3: mov dword ptr [0xcf7aa4], edx */
  W32((uint32_t)(0xcf7aa4u), edx);
/* 95dae9: jge 0x95daf0 */
  if ((sf == of)) goto L_95daf0;
L_95daeb: /* 95daeb: mov dword ptr [0xcf7aa8], eax */
  W32((uint32_t)(0xcf7aa8u), eax);
L_95daf0: /* 95daf0: cmp dword ptr [0xcf8438], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95daf7: jl 0x95db18 */
  if ((sf != of)) goto L_95db18;
L_95daf9: /* 95daf9: mov ecx, dword ptr [edi + 0x14] */
  ecx = R32((uint32_t)(edi + 0x14u));
/* 95dafc: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 95db02: and ecx, 0xffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 95db08: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95db09: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95db0a: push 0xafa5ac */
  { uint32_t v = 0xafa5acu; esp -= 4; W32(esp, v); }
/* 95db0f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95db10: call 0x953470 */
  esp -= 4; W32(esp, 0x95db15u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95db15: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95db18: /* 95db18: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 95db1c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95db1d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95db1e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 95db1f: ret  */
  esp += 4; SPILL(); return;
}

void f_95db20(void) {
  LOAD_REGS();
L_95db20: /* 95db20: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95db21: mov ebx, dword ptr [esp + 0xc] */
  ebx = R32((uint32_t)(esp + 0xcu));
/* 95db25: mov eax, dword ptr [ebx + 0x24] */
  eax = R32((uint32_t)(ebx + 0x24u));
/* 95db28: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95db2a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95db2b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95db2c: je 0x95db99 */
  if (zf) goto L_95db99;
L_95db2e: /* 95db2e: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 95db31: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95db33: lea edi, [eax + 4] */
  edi = (uint32_t)(eax + 0x4u);
/* 95db36: je 0x95db8b */
  if (zf) goto L_95db8b;
L_95db38: /* 95db38: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95db39: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 95db3d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_95db40: /* 95db40: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 95db43: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 95db46: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95db48: jne 0x95db4d */
  if (!zf) goto L_95db4d;
L_95db4a: /* 95db4a: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
L_95db4d: /* 95db4d: mov ecx, dword ptr [0xcf8bf8] */
  ecx = R32((uint32_t)(0xcf8bf8u));
/* 95db53: cmp dword ptr [eax + 0x34], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x34u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95db56: jne 0x95db76 */
  if (!zf) goto L_95db76;
L_95db58: /* 95db58: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 95db5c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 95db5e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95db5f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95db60: call 0x94eed0 */
  esp -= 4; W32(esp, 0x95db65u); SPILL(); f_94eed0(); if (g_unwind) return; RELOAD();
/* 95db65: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95db68: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95db6a: je 0x95db76 */
  if (zf) goto L_95db76;
L_95db6c: /* 95db6c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95db6d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95db6e: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x95db73u); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 95db73: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95db76: /* 95db76: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 95db78: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95db7a: jne 0x95db40 */
  if (!zf) goto L_95db40;
L_95db7c: /* 95db7c: mov ecx, dword ptr [0xcf8bf8] */
  ecx = R32((uint32_t)(0xcf8bf8u));
/* 95db82: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 95db83: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95db84: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 95db85: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95db86: mov dword ptr [ebx + 0x34], ecx */
  W32((uint32_t)(ebx + 0x34u), ecx);
/* 95db89: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95db8a: ret  */
  esp += 4; SPILL(); return;
L_95db8b: /* 95db8b: mov edx, dword ptr [0xcf8bf8] */
  edx = R32((uint32_t)(0xcf8bf8u));
/* 95db91: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95db92: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 95db93: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95db94: mov dword ptr [ebx + 0x34], edx */
  W32((uint32_t)(ebx + 0x34u), edx);
/* 95db97: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95db98: ret  */
  esp += 4; SPILL(); return;
L_95db99: /* 95db99: mov eax, dword ptr [0xcf8bf8] */
  eax = R32((uint32_t)(0xcf8bf8u));
/* 95db9e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95db9f: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 95dba0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95dba1: mov dword ptr [ebx + 0x34], eax */
  W32((uint32_t)(ebx + 0x34u), eax);
/* 95dba4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95dba5: ret  */
  esp += 4; SPILL(); return;
}

void f_95dbb0(void) {
  LOAD_REGS();
L_95dbb0: /* 95dbb0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95dbb1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 95dbb5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95dbb6: call 0x95f280 */
  esp -= 4; W32(esp, 0x95dbbbu); SPILL(); f_95f280(); if (g_unwind) return; RELOAD();
/* 95dbbb: push 0xcf8b5c */
  { uint32_t v = 0xcf8b5cu; esp -= 4; W32(esp, v); }
/* 95dbc0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95dbc1: call 0x958040 */
  esp -= 4; W32(esp, 0x95dbc6u); SPILL(); f_958040(); if (g_unwind) return; RELOAD();
/* 95dbc6: mov ecx, dword ptr [0xcf8b60] */
  ecx = R32((uint32_t)(0xcf8b60u));
/* 95dbcc: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95dbcf: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 95dbd0: mov dword ptr [0xcf8b60], ecx */
  W32((uint32_t)(0xcf8b60u), ecx);
/* 95dbd6: or dword ptr [esi + 0x3c], 0x400 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x3cu), r);
  }
/* 95dbdd: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 95dbe1: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 95dbe4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95dbe5: ret  */
  esp += 4; SPILL(); return;
}

void f_95dbf0(void) {
  LOAD_REGS();
L_95dbf0: /* 95dbf0: mov ecx, dword ptr [0xcf8b58] */
  ecx = R32((uint32_t)(0xcf8b58u));
/* 95dbf6: mov eax, dword ptr [0xcf8b50] */
  eax = R32((uint32_t)(0xcf8b50u));
/* 95dbfb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95dbfd: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 95dc01: jne 0x95dc09 */
  if (!zf) goto L_95dc09;
L_95dc03: /* 95dc03: mov dword ptr [0xcf8b58], ecx */
  W32((uint32_t)(0xcf8b58u), ecx);
L_95dc09: /* 95dc09: cmp eax, dword ptr [0xcf8b54] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0xcf8b54u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95dc0f: jne 0x95dc17 */
  if (!zf) goto L_95dc17;
L_95dc11: /* 95dc11: mov dword ptr [0xcf8b54], ecx */
  W32((uint32_t)(0xcf8b54u), ecx);
L_95dc17: /* 95dc17: mov edx, dword ptr [eax + 0x18] */
  edx = R32((uint32_t)(eax + 0x18u));
/* 95dc1a: mov dword ptr [ecx + 0x18], edx */
  W32((uint32_t)(ecx + 0x18u), edx);
/* 95dc1d: mov dword ptr [ecx + 0x1c], eax */
  W32((uint32_t)(ecx + 0x1cu), eax);
/* 95dc20: mov edx, dword ptr [eax + 0x18] */
  edx = R32((uint32_t)(eax + 0x18u));
/* 95dc23: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95dc25: je 0x95dc2c */
  if (zf) goto L_95dc2c;
L_95dc27: /* 95dc27: mov dword ptr [edx + 0x1c], ecx */
  W32((uint32_t)(edx + 0x1cu), ecx);
/* 95dc2a: jmp 0x95dc32 */
  goto L_95dc32;
L_95dc2c: /* 95dc2c: mov dword ptr [0xcf8b4c], ecx */
  W32((uint32_t)(0xcf8b4cu), ecx);
L_95dc32: /* 95dc32: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 95dc35: mov edx, dword ptr [0xcf8b80] */
  edx = R32((uint32_t)(0xcf8b80u));
/* 95dc3b: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 95dc40: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 95dc41: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95dc44: mov dword ptr [0xcf8b80], edx */
  W32((uint32_t)(0xcf8b80u), edx);
/* 95dc4a: jl 0x95dc64 */
  if ((sf != of)) goto L_95dc64;
L_95dc4c: /* 95dc4c: mov eax, dword ptr [ecx + 0x38] */
  eax = R32((uint32_t)(ecx + 0x38u));
/* 95dc4f: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 95dc55: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95dc56: push 0xafa5d8 */
  { uint32_t v = 0xafa5d8u; esp -= 4; W32(esp, v); }
/* 95dc5b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95dc5c: call 0x953470 */
  esp -= 4; W32(esp, 0x95dc61u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95dc61: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95dc64: /* 95dc64: ret  */
  esp += 4; SPILL(); return;
}

void f_95dc70(void) {
  LOAD_REGS();
L_95dc70: /* 95dc70: mov eax, dword ptr [0xcf8b7c] */
  eax = R32((uint32_t)(0xcf8b7cu));
/* 95dc75: mov ecx, dword ptr [0xcf8b78] */
  ecx = R32((uint32_t)(0xcf8b78u));
/* 95dc7b: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95dc7d: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 95dc81: jne 0x95dc88 */
  if (!zf) goto L_95dc88;
L_95dc83: /* 95dc83: mov dword ptr [0xcf8b7c], eax */
  W32((uint32_t)(0xcf8b7cu), eax);
L_95dc88: /* 95dc88: or dword ptr [eax + 0x14], 0x10000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(0x10000000u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x14u), r);
  }
/* 95dc8f: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 95dc92: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 95dc95: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 95dc97: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 95dc9a: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95dc9c: je 0x95dca2 */
  if (zf) goto L_95dca2;
L_95dc9e: /* 95dc9e: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 95dca0: jmp 0x95dca7 */
  goto L_95dca7;
L_95dca2: /* 95dca2: mov dword ptr [0xcf8b74], eax */
  W32((uint32_t)(0xcf8b74u), eax);
L_95dca7: /* 95dca7: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 95dcaa: mov edx, dword ptr [0xcf8b84] */
  edx = R32((uint32_t)(0xcf8b84u));
/* 95dcb0: mov ecx, dword ptr [0xcf8438] */
  ecx = R32((uint32_t)(0xcf8438u));
/* 95dcb6: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 95dcb7: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95dcba: mov dword ptr [0xcf8b84], edx */
  W32((uint32_t)(0xcf8b84u), edx);
/* 95dcc0: jl 0x95dcdf */
  if ((sf != of)) goto L_95dcdf;
L_95dcc2: /* 95dcc2: mov eax, dword ptr [eax + 0x14] */
  eax = R32((uint32_t)(eax + 0x14u));
/* 95dcc5: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 95dccb: and eax, 0xffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 95dcd0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95dcd1: push 0xafa604 */
  { uint32_t v = 0xafa604u; esp -= 4; W32(esp, v); }
/* 95dcd6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95dcd7: call 0x953470 */
  esp -= 4; W32(esp, 0x95dcdcu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95dcdc: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95dcdf: /* 95dcdf: ret  */
  esp += 4; SPILL(); return;
}

void f_95dce0(void) {
  LOAD_REGS();
L_95dce0: /* 95dce0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95dce1: cmp dword ptr [0xcf8438], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95dce8: mov dword ptr [0xcf8bc8], 1 */
  W32((uint32_t)(0xcf8bc8u), 0x1u);
/* 95dcf2: jl 0x95dd07 */
  if ((sf != of)) goto L_95dd07;
L_95dcf4: /* 95dcf4: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 95dcf9: push 0xafa6d4 */
  { uint32_t v = 0xafa6d4u; esp -= 4; W32(esp, v); }
/* 95dcfe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95dcff: call 0x953470 */
  esp -= 4; W32(esp, 0x95dd04u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95dd04: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95dd07: /* 95dd07: mov ecx, dword ptr [0xcf8bf8] */
  ecx = R32((uint32_t)(0xcf8bf8u));
/* 95dd0d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95dd0e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95dd0f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95dd10: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95dd11: mov edi, dword ptr [0xcf8b5c] */
  edi = R32((uint32_t)(0xcf8b5cu));
/* 95dd17: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 95dd18: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95dd1a: mov dword ptr [0xcf8bf8], ecx */
  W32((uint32_t)(0xcf8bf8u), ecx);
/* 95dd20: je 0x95ddbc */
  if (zf) goto L_95ddbc;
L_95dd26: /* 95dd26: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* 95dd29: mov ebp, 0x400 */
  ebp = 0x400u;
/* 95dd2e: test ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95dd30: je 0x95ddc1 */
  if (zf) goto L_95ddc1;
L_95dd36: /* 95dd36: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* 95dd39: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95dd3b: mov ecx, dword ptr [0xcf8bf8] */
  ecx = R32((uint32_t)(0xcf8bf8u));
/* 95dd41: mov dword ptr [edi + 0x34], ecx */
  W32((uint32_t)(edi + 0x34u), ecx);
/* 95dd44: je 0x95dda7 */
  if (zf) goto L_95dda7;
L_95dd46: /* 95dd46: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 95dd49: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95dd4b: lea ebx, [eax + 4] */
  ebx = (uint32_t)(eax + 0x4u);
/* 95dd4e: je 0x95dd9d */
  if (zf) goto L_95dd9d;
L_95dd50: /* 95dd50: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 95dd53: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 95dd56: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95dd58: jne 0x95dd5d */
  if (!zf) goto L_95dd5d;
L_95dd5a: /* 95dd5a: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
L_95dd5d: /* 95dd5d: mov edx, dword ptr [eax + 0x34] */
  edx = R32((uint32_t)(eax + 0x34u));
/* 95dd60: cmp edx, dword ptr [0xcf8bf8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(0xcf8bf8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95dd66: je 0x95dd74 */
  if (zf) goto L_95dd74;
L_95dd68: /* 95dd68: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 95dd6b: test ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95dd6d: jne 0x95dd97 */
  if (!zf) goto L_95dd97;
L_95dd6f: /* 95dd6f: test ch, 0x10 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 95dd72: je 0x95dd97 */
  if (zf) goto L_95dd97;
L_95dd74: /* 95dd74: test dword ptr [eax + 0x3c], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x3cu))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95dd77: jne 0x95dd86 */
  if (!zf) goto L_95dd86;
L_95dd79: /* 95dd79: mov eax, dword ptr [eax + 0x24] */
  eax = R32((uint32_t)(eax + 0x24u));
/* 95dd7c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95dd7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95dd7e: call 0x94ea40 */
  esp -= 4; W32(esp, 0x95dd83u); SPILL(); f_94ea40(); if (g_unwind) return; RELOAD();
/* 95dd83: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95dd86: /* 95dd86: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95dd87: call 0x94ee00 */
  esp -= 4; W32(esp, 0x95dd8cu); SPILL(); f_94ee00(); if (g_unwind) return; RELOAD();
/* 95dd8c: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 95dd8e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95dd8f: call 0x953a60 */
  esp -= 4; W32(esp, 0x95dd94u); SPILL(); f_953a60(); if (g_unwind) return; RELOAD();
/* 95dd94: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95dd97: /* 95dd97: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* 95dd99: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95dd9b: jne 0x95dd50 */
  if (!zf) goto L_95dd50;
L_95dd9d: /* 95dd9d: mov ecx, dword ptr [edi + 0x24] */
  ecx = R32((uint32_t)(edi + 0x24u));
/* 95dda0: mov dword ptr [ecx + 4], 0 */
  W32((uint32_t)(ecx + 0x4u), 0x0u);
L_95dda7: /* 95dda7: mov edx, dword ptr [edi + 0x28] */
  edx = R32((uint32_t)(edi + 0x28u));
/* 95ddaa: mov dword ptr [edx + 4], 0 */
  W32((uint32_t)(edx + 0x4u), 0x0u);
/* 95ddb1: mov edi, dword ptr [edi + 0x1c] */
  edi = R32((uint32_t)(edi + 0x1cu));
/* 95ddb4: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95ddb6: jne 0x95dd26 */
  if (!zf) goto L_95dd26;
L_95ddbc: /* 95ddbc: mov ebp, 0x400 */
  ebp = 0x400u;
L_95ddc1: /* 95ddc1: cmp dword ptr [0xcf8438], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95ddc8: jl 0x95dddd */
  if ((sf != of)) goto L_95dddd;
L_95ddca: /* 95ddca: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 95ddcf: push 0xafa698 */
  { uint32_t v = 0xafa698u; esp -= 4; W32(esp, v); }
/* 95ddd4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95ddd5: call 0x953470 */
  esp -= 4; W32(esp, 0x95dddau); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95ddda: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95dddd: /* 95dddd: mov edi, dword ptr [0xcf8b58] */
  edi = R32((uint32_t)(0xcf8b58u));
/* 95dde3: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95dde5: je 0x95df22 */
  if (zf) goto L_95df22;
L_95ddeb: /* 95ddeb: nop  */
/* 95ddec: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_95ddf0: /* 95ddf0: mov eax, dword ptr [edi + 0x1c] */
  eax = R32((uint32_t)(edi + 0x1cu));
/* 95ddf3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95ddf5: je 0x95df22 */
  if (zf) goto L_95df22;
L_95ddfb: /* 95ddfb: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* 95ddfe: mov ebp, dword ptr [ecx + 4] */
  ebp = R32((uint32_t)(ecx + 0x4u));
/* 95de01: mov eax, dword ptr [ebp + 0x3c] */
  eax = R32((uint32_t)(ebp + 0x3cu));
/* 95de04: test ah, 0x10 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 95de07: je 0x95deb2 */
  if (zf) goto L_95deb2;
L_95de0d: /* 95de0d: mov esi, dword ptr [ebp + 0x28] */
  esi = R32((uint32_t)(ebp + 0x28u));
/* 95de10: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95de12: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 95de1a: je 0x95de8b */
  if (zf) goto L_95de8b;
L_95de1c: /* 95de1c: mov ebx, dword ptr [esi + 4] */
  ebx = R32((uint32_t)(esi + 0x4u));
/* 95de1f: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 95de22: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95de24: je 0x95de8b */
  if (zf) goto L_95de8b;
L_95de26: /* 95de26: mov eax, dword ptr [ebx + 0x3c] */
  eax = R32((uint32_t)(ebx + 0x3cu));
/* 95de29: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 95de2c: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 95de2f: je 0x95de83 */
  if (zf) goto L_95de83;
L_95de31: /* 95de31: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 95de35: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95de37: je 0x95de7f */
  if (zf) goto L_95de7f;
L_95de39: /* 95de39: mov ecx, dword ptr [ebp + 0x28] */
  ecx = R32((uint32_t)(ebp + 0x28u));
/* 95de3c: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 95de3f: mov edx, esi */
  edx = esi;
/* 95de41: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 95de43: mov ecx, dword ptr [edi + 0x20] */
  ecx = R32((uint32_t)(edi + 0x20u));
/* 95de46: sub edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 95de49: sar edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 95de4c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95de4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95de4e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95de50: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95de51: call 0x94eda0 */
  esp -= 4; W32(esp, 0x95de56u); SPILL(); f_94eda0(); if (g_unwind) return; RELOAD();
/* 95de56: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95de59: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95de5b: je 0x95de83 */
  if (zf) goto L_95de83;
L_95de5d: /* 95de5d: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
L_95de61: /* 95de61: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 95de65: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95de67: je 0x95de8b */
  if (zf) goto L_95de8b;
L_95de69: /* 95de69: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95de6a: mov dword ptr [eax + 0x10], edi */
  W32((uint32_t)(eax + 0x10u), edi);
/* 95de6d: mov edx, dword ptr [ebp + 0x28] */
  edx = R32((uint32_t)(ebp + 0x28u));
/* 95de70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95de71: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95de72: call 0x94f2c0 */
  esp -= 4; W32(esp, 0x95de77u); SPILL(); f_94f2c0(); if (g_unwind) return; RELOAD();
/* 95de77: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95de7a: jmp 0x95df12 */
  goto L_95df12;
L_95de7f: /* 95de7f: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
L_95de83: /* 95de83: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 95de85: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95de87: jne 0x95de26 */
  if (!zf) goto L_95de26;
L_95de89: /* 95de89: jmp 0x95de61 */
  goto L_95de61;
L_95de8b: /* 95de8b: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 95de8e: mov ecx, dword ptr [ebp + 0x38] */
  ecx = R32((uint32_t)(ebp + 0x38u));
/* 95de91: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 95de97: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95de98: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95de99: push 0xafa630 */
  { uint32_t v = 0xafa630u; esp -= 4; W32(esp, v); }
/* 95de9e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95de9f: call 0x953470 */
  esp -= 4; W32(esp, 0x95dea4u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95dea4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95dea5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95dea6: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 95dea8: call 0x96e130 */
  esp -= 4; W32(esp, 0x95deadu); SPILL(); f_96e130(); if (g_unwind) return; RELOAD();
/* 95dead: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95deb0: jmp 0x95df12 */
  goto L_95df12;
L_95deb2: /* 95deb2: mov esi, dword ptr [ebp + 0x28] */
  esi = R32((uint32_t)(ebp + 0x28u));
/* 95deb5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95deb7: lea ebx, [ebp + 0x28] */
  ebx = (uint32_t)(ebp + 0x28u);
/* 95deba: je 0x95def3 */
  if (zf) goto L_95def3;
L_95debc: /* 95debc: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 95debf: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 95dec2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95dec4: je 0x95def3 */
  if (zf) goto L_95def3;
L_95dec6: /* 95dec6: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 95dec9: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 95decc: test ch, 4 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 95decf: je 0x95deed */
  if (zf) goto L_95deed;
L_95ded1: /* 95ded1: mov dword ptr [eax + 0x10], edi */
  W32((uint32_t)(eax + 0x10u), edi);
/* 95ded4: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 95ded6: mov ecx, esi */
  ecx = esi;
/* 95ded8: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 95deda: sub ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 95dedd: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 95dee0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95dee1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95dee2: call 0x94eae0 */
  esp -= 4; W32(esp, 0x95dee7u); SPILL(); f_94eae0(); if (g_unwind) return; RELOAD();
/* 95dee7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95deea: sub esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
L_95deed: /* 95deed: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 95deef: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95def1: jne 0x95dec6 */
  if (!zf) goto L_95dec6;
L_95def3: /* 95def3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95def4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95def5: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x95defau); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 95defa: mov edx, dword ptr [edi + 0x24] */
  edx = R32((uint32_t)(edi + 0x24u));
/* 95defd: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 95df00: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 95df03: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95df06: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95df08: jne 0x95df0f */
  if (!zf) goto L_95df0f;
L_95df0a: /* 95df0a: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 95df0d: jmp 0x95df12 */
  goto L_95df12;
L_95df0f: /* 95df0f: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
L_95df12: /* 95df12: mov edi, dword ptr [edi + 0x1c] */
  edi = R32((uint32_t)(edi + 0x1cu));
/* 95df15: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95df17: mov ebp, 0x400 */
  ebp = 0x400u;
/* 95df1c: jne 0x95ddf0 */
  if (!zf) goto L_95ddf0;
L_95df22: /* 95df22: mov eax, dword ptr [0xcf8530] */
  eax = R32((uint32_t)(0xcf8530u));
/* 95df27: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95df29: je 0x95df4d */
  if (zf) goto L_95df4d;
L_95df2b: /* 95df2b: mov eax, dword ptr [0xcf8b5c] */
  eax = R32((uint32_t)(0xcf8b5cu));
/* 95df30: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95df32: je 0x95df4d */
  if (zf) goto L_95df4d;
L_95df34: /* 95df34: test dword ptr [eax + 0x3c], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x3cu))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95df37: je 0x95df4d */
  if (zf) goto L_95df4d;
L_95df39: /* 95df39: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 95df3c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95df3e: jne 0x95df46 */
  if (!zf) goto L_95df46;
L_95df40: /* 95df40: inc dword ptr [0xcf7918] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf7918u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0xcf7918u), r);
  }
L_95df46: /* 95df46: mov eax, dword ptr [eax + 0x1c] */
  eax = R32((uint32_t)(eax + 0x1cu));
/* 95df49: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95df4b: jne 0x95df34 */
  if (!zf) goto L_95df34;
L_95df4d: /* 95df4d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95df4e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95df4f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 95df50: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95df51: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 95df52: ret  */
  esp += 4; SPILL(); return;
}

void f_95df60(void) {
  LOAD_REGS();
L_95df60: /* 95df60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95df61: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 95df65: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 95df68: test ah, ah */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(((eax >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 95df6a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95df6b: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 95df6f: jns 0x95df7a */
  if (!sf) goto L_95df7a;
L_95df71: /* 95df71: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95df73: jne 0x95df7a */
  if (!zf) goto L_95df7a;
L_95df75: /* 95df75: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95df76: xor eax, eax */
  eax = 0;
/* 95df78: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95df79: ret  */
  esp += 4; SPILL(); return;
L_95df7a: /* 95df7a: mov edx, dword ptr [0xcf7880] */
  edx = R32((uint32_t)(0xcf7880u));
/* 95df80: mov ecx, dword ptr [0xcf8b3c] */
  ecx = R32((uint32_t)(0xcf8b3cu));
/* 95df86: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 95df8a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95df8b: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 95df8c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95df8d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95df8e: mov dword ptr [0xcf7880], edx */
  W32((uint32_t)(0xcf7880u), edx);
/* 95df94: call 0x96fa90 */
  esp -= 4; W32(esp, 0x95df99u); SPILL(); f_96fa90(); if (g_unwind) return; RELOAD();
/* 95df99: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95df9c: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95df9e: je 0x95dfa6 */
  if (zf) goto L_95dfa6;
L_95dfa0: /* 95dfa0: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 95dfa4: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
L_95dfa6: /* 95dfa6: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 95dfaa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95dfac: je 0x95dfc9 */
  if (zf) goto L_95dfc9;
L_95dfae: /* 95dfae: fld dword ptr [0xcf8a14] */
  { double v = F32((uint32_t)(0xcf8a14u)); FPUSH(v); }
/* 95dfb4: fchs  */
  ST0 = -ST0;
/* 95dfb6: fcomp dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
  FPOP();
/* 95dfba: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 95dfbc: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 95dfbf: jnp 0x95dfda */
  if (!pf) goto L_95dfda;
L_95dfc1: /* 95dfc1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95dfc2: mov eax, 1 */
  eax = 0x1u;
/* 95dfc7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95dfc8: ret  */
  esp += 4; SPILL(); return;
L_95dfc9: /* 95dfc9: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 95dfcd: fcomp qword ptr [0x9f7668] */
  fpu_com(ST0, F64((uint32_t)(0x9f7668u)));
  FPOP();
/* 95dfd3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 95dfd5: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 95dfd8: jne 0x95dfc1 */
  if (!zf) goto L_95dfc1;
L_95dfda: /* 95dfda: or dword ptr [esi + 0x3c], 0x8000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x3cu), r);
  }
/* 95dfe1: mov ecx, dword ptr [0xcf78fc] */
  ecx = R32((uint32_t)(0xcf78fcu));
/* 95dfe7: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 95dfec: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 95dfed: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95dfef: mov dword ptr [0xcf78fc], ecx */
  W32((uint32_t)(0xcf78fcu), ecx);
/* 95dff5: je 0x95e01f */
  if (zf) goto L_95e01f;
L_95dff7: /* 95dff7: mov eax, dword ptr [0xcf8bac] */
  eax = R32((uint32_t)(0xcf8bacu));
/* 95dffc: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 95e000: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 95e003: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 95e009: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95e00a: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 95e00d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 95e010: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95e011: push 0xafa700 */
  { uint32_t v = 0xafa700u; esp -= 4; W32(esp, v); }
/* 95e016: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95e017: call 0x953470 */
  esp -= 4; W32(esp, 0x95e01cu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95e01c: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95e01f: /* 95e01f: push 0xaf7044 */
  { uint32_t v = 0xaf7044u; esp -= 4; W32(esp, v); }
/* 95e024: call 0x96f160 */
  esp -= 4; W32(esp, 0x95e029u); SPILL(); f_96f160(); if (g_unwind) return; RELOAD();
/* 95e029: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95e02c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95e02d: xor eax, eax */
  eax = 0;
/* 95e02f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95e030: ret  */
  esp += 4; SPILL(); return;
}

void f_95e040(void) {
  LOAD_REGS();
L_95e040: /* 95e040: cmp dword ptr [0xcf8438], 5 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95e047: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95e048: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 95e04c: jl 0x95e066 */
  if ((sf != of)) goto L_95e066;
L_95e04e: /* 95e04e: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 95e051: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 95e057: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95e058: push 0xafa744 */
  { uint32_t v = 0xafa744u; esp -= 4; W32(esp, v); }
/* 95e05d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95e05e: call 0x953470 */
  esp -= 4; W32(esp, 0x95e063u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95e063: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95e066: /* 95e066: cmp esi, dword ptr [0xcf8b68] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0xcf8b68u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95e06c: jne 0x95e078 */
  if (!zf) goto L_95e078;
L_95e06e: /* 95e06e: mov dword ptr [0xcf8b68], 0 */
  W32((uint32_t)(0xcf8b68u), 0x0u);
L_95e078: /* 95e078: cmp esi, dword ptr [0xcf8bb0] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0xcf8bb0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95e07e: jne 0x95e08a */
  if (!zf) goto L_95e08a;
L_95e080: /* 95e080: mov dword ptr [0xcf8bb0], 0 */
  W32((uint32_t)(0xcf8bb0u), 0x0u);
L_95e08a: /* 95e08a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95e08b: call 0x95f280 */
  esp -= 4; W32(esp, 0x95e090u); SPILL(); f_95f280(); if (g_unwind) return; RELOAD();
/* 95e090: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 95e093: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95e096: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95e098: je 0x95e0c8 */
  if (zf) goto L_95e0c8;
L_95e09a: /* 95e09a: mov eax, dword ptr [0xcf2f64] */
  eax = R32((uint32_t)(0xcf2f64u));
/* 95e09f: mov edx, dword ptr [0xcf8b40] */
  edx = R32((uint32_t)(0xcf8b40u));
/* 95e0a5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 95e0a6: mov dword ptr [0xcf2f64], eax */
  W32((uint32_t)(0xcf2f64u), eax);
/* 95e0ab: mov eax, dword ptr [0xcf2f38] */
  eax = R32((uint32_t)(0xcf2f38u));
/* 95e0b0: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 95e0b3: mov edx, dword ptr [0xcf2f30] */
  edx = R32((uint32_t)(0xcf2f30u));
/* 95e0b9: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 95e0bc: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 95e0bf: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 95e0c1: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 95e0c3: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 95e0c6: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_95e0c8: /* 95e0c8: cmp dword ptr [0xcf8ba8], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8ba8u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95e0cf: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 95e0d2: jne 0x95e0e0 */
  if (!zf) goto L_95e0e0;
L_95e0d4: /* 95e0d4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95e0d6: je 0x95e10d */
  if (zf) goto L_95e10d;
L_95e0d8: /* 95e0d8: mov edx, dword ptr [0xcf8b44] */
  edx = R32((uint32_t)(0xcf8b44u));
/* 95e0de: jmp 0x95e0ea */
  goto L_95e0ea;
L_95e0e0: /* 95e0e0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95e0e2: je 0x95e10d */
  if (zf) goto L_95e10d;
L_95e0e4: /* 95e0e4: mov edx, dword ptr [0xcf8b40] */
  edx = R32((uint32_t)(0xcf8b40u));
L_95e0ea: /* 95e0ea: inc dword ptr [0xcf2f64] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf2f64u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0xcf2f64u), r);
  }
/* 95e0f0: mov eax, dword ptr [0xcf2f38] */
  eax = R32((uint32_t)(0xcf2f38u));
/* 95e0f5: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 95e0f8: mov edx, dword ptr [0xcf2f30] */
  edx = R32((uint32_t)(0xcf2f30u));
/* 95e0fe: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 95e101: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 95e104: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 95e106: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 95e108: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 95e10b: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_95e10d: /* 95e10d: lea edx, [esi + 0x28] */
  edx = (uint32_t)(esi + 0x28u);
/* 95e110: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95e111: call 0x94ee00 */
  esp -= 4; W32(esp, 0x95e116u); SPILL(); f_94ee00(); if (g_unwind) return; RELOAD();
/* 95e116: mov ecx, dword ptr [esi + 0x24] */
  ecx = R32((uint32_t)(esi + 0x24u));
/* 95e119: lea eax, [esi + 0x24] */
  eax = (uint32_t)(esi + 0x24u);
/* 95e11c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95e11f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95e121: je 0x95e12c */
  if (zf) goto L_95e12c;
L_95e123: /* 95e123: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95e124: call 0x94ee00 */
  esp -= 4; W32(esp, 0x95e129u); SPILL(); f_94ee00(); if (g_unwind) return; RELOAD();
/* 95e129: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95e12c: /* 95e12c: lea eax, [esi + 0x20] */
  eax = (uint32_t)(esi + 0x20u);
/* 95e12f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95e130: call 0x94ee00 */
  esp -= 4; W32(esp, 0x95e135u); SPILL(); f_94ee00(); if (g_unwind) return; RELOAD();
/* 95e135: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 95e138: lea eax, [esi + 0x2c] */
  eax = (uint32_t)(esi + 0x2cu);
/* 95e13b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95e13e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95e140: je 0x95e14b */
  if (zf) goto L_95e14b;
L_95e142: /* 95e142: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95e143: call 0x94ee00 */
  esp -= 4; W32(esp, 0x95e148u); SPILL(); f_94ee00(); if (g_unwind) return; RELOAD();
/* 95e148: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95e14b: /* 95e14b: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 95e14e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95e150: lea eax, [esi + 0x30] */
  eax = (uint32_t)(esi + 0x30u);
/* 95e153: je 0x95e15e */
  if (zf) goto L_95e15e;
L_95e155: /* 95e155: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95e156: call 0x94ee00 */
  esp -= 4; W32(esp, 0x95e15bu); SPILL(); f_94ee00(); if (g_unwind) return; RELOAD();
/* 95e15b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95e15e: /* 95e15e: mov eax, dword ptr [0xcf2f64] */
  eax = R32((uint32_t)(0xcf2f64u));
/* 95e163: mov ecx, dword ptr [0xcf2f38] */
  ecx = R32((uint32_t)(0xcf2f38u));
/* 95e169: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 95e16a: mov dword ptr [0xcf2f64], eax */
  W32((uint32_t)(0xcf2f64u), eax);
/* 95e16f: mov edx, dword ptr [ecx + 0x100] */
  edx = R32((uint32_t)(ecx + 0x100u));
/* 95e175: mov eax, dword ptr [0xcf2f30] */
  eax = R32((uint32_t)(0xcf2f30u));
/* 95e17a: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 95e17d: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 95e180: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 95e182: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 95e184: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95e185: ret  */
  esp += 4; SPILL(); return;
}

void f_95e190(void) {
  LOAD_REGS();
L_95e190: /* 95e190: mov eax, dword ptr [0xcf8c18] */
  eax = R32((uint32_t)(0xcf8c18u));
/* 95e195: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95e196: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95e197: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95e198: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95e199: xor edi, edi */
  edi = 0;
/* 95e19b: call 0x94f340 */
  esp -= 4; W32(esp, 0x95e1a0u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 95e1a0: mov ebp, eax */
  ebp = eax;
/* 95e1a2: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 95e1a7: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95e1aa: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95e1ad: jl 0x95e1cb */
  if ((sf != of)) goto L_95e1cb;
L_95e1af: /* 95e1af: mov ecx, dword ptr [0xcf8b60] */
  ecx = R32((uint32_t)(0xcf8b60u));
/* 95e1b5: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 95e1bb: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95e1bc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95e1bd: push 0xafa7c0 */
  { uint32_t v = 0xafa7c0u; esp -= 4; W32(esp, v); }
/* 95e1c2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95e1c3: call 0x953470 */
  esp -= 4; W32(esp, 0x95e1c8u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95e1c8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95e1cb: /* 95e1cb: mov eax, dword ptr [0xcf8b5c] */
  eax = R32((uint32_t)(0xcf8b5cu));
/* 95e1d0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95e1d2: je 0x95e1ef */
  if (zf) goto L_95e1ef;
L_95e1d4: /* 95e1d4: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 95e1d7: test ch, 4 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 95e1da: je 0x95e1ef */
  if (zf) goto L_95e1ef;
L_95e1dc: /* 95e1dc: mov esi, dword ptr [eax + 0x1c] */
  esi = R32((uint32_t)(eax + 0x1cu));
/* 95e1df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95e1e0: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 95e1e1: call 0x95e040 */
  esp -= 4; W32(esp, 0x95e1e6u); SPILL(); f_95e040(); if (g_unwind) return; RELOAD();
/* 95e1e6: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95e1e9: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95e1eb: mov eax, esi */
  eax = esi;
/* 95e1ed: jne 0x95e1d4 */
  if (!zf) goto L_95e1d4;
L_95e1ef: /* 95e1ef: mov eax, dword ptr [0xcf8b60] */
  eax = R32((uint32_t)(0xcf8b60u));
/* 95e1f4: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95e1f6: je 0x95e218 */
  if (zf) goto L_95e218;
L_95e1f8: /* 95e1f8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95e1f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95e1fa: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 95e1ff: push 0xafa760 */
  { uint32_t v = 0xafa760u; esp -= 4; W32(esp, v); }
/* 95e204: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95e205: call 0x953470 */
  esp -= 4; W32(esp, 0x95e20au); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95e20a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95e20c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95e20e: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 95e210: call 0x9535b0 */
  esp -= 4; W32(esp, 0x95e215u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 95e215: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95e218: /* 95e218: mov ecx, dword ptr [0xcf7ab0] */
  ecx = R32((uint32_t)(0xcf7ab0u));
/* 95e21e: mov eax, dword ptr [0xcf7ab4] */
  eax = R32((uint32_t)(0xcf7ab4u));
/* 95e223: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 95e225: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95e227: mov dword ptr [0xcf8b60], 0 */
  W32((uint32_t)(0xcf8b60u), 0x0u);
/* 95e231: mov dword ptr [0xcf7ab0], ecx */
  W32((uint32_t)(0xcf7ab0u), ecx);
/* 95e237: jge 0x95e23f */
  if ((sf == of)) goto L_95e23f;
L_95e239: /* 95e239: mov dword ptr [0xcf7ab4], edi */
  W32((uint32_t)(0xcf7ab4u), edi);
L_95e23f: /* 95e23f: mov ecx, dword ptr [0xcf7874] */
  ecx = R32((uint32_t)(0xcf7874u));
/* 95e245: mov eax, dword ptr [0xcf7878] */
  eax = R32((uint32_t)(0xcf7878u));
/* 95e24a: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 95e24c: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95e24e: mov dword ptr [0xcf7874], ecx */
  W32((uint32_t)(0xcf7874u), ecx);
/* 95e254: jge 0x95e25c */
  if ((sf == of)) goto L_95e25c;
L_95e256: /* 95e256: mov dword ptr [0xcf7878], ebp */
  W32((uint32_t)(0xcf7878u), ebp);
L_95e25c: /* 95e25c: mov ecx, dword ptr [0xcf8c18] */
  ecx = R32((uint32_t)(0xcf8c18u));
/* 95e262: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95e264: je 0x95e288 */
  if (zf) goto L_95e288;
L_95e266: /* 95e266: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 95e269: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95e26b: lea esi, [ecx + 4] */
  esi = (uint32_t)(ecx + 0x4u);
/* 95e26e: je 0x95e288 */
  if (zf) goto L_95e288;
L_95e270: /* 95e270: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95e271: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 95e274: call 0x956020 */
  esp -= 4; W32(esp, 0x95e279u); SPILL(); f_956020(); if (g_unwind) return; RELOAD();
/* 95e279: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 95e27b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95e27e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95e280: jne 0x95e270 */
  if (!zf) goto L_95e270;
L_95e282: /* 95e282: mov ecx, dword ptr [0xcf8c18] */
  ecx = R32((uint32_t)(0xcf8c18u));
L_95e288: /* 95e288: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95e28a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95e28b: call 0x94f570 */
  esp -= 4; W32(esp, 0x95e290u); SPILL(); f_94f570(); if (g_unwind) return; RELOAD();
/* 95e290: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95e293: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95e294: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95e295: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 95e296: ret  */
  esp += 4; SPILL(); return;
}

void f_95e2a0(void) {
  LOAD_REGS();
L_95e2a0: /* 95e2a0: mov edx, dword ptr [0xcf85cc] */
  edx = R32((uint32_t)(0xcf85ccu));
/* 95e2a6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95e2a7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95e2a8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95e2a9: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 95e2ad: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 95e2b0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95e2b1: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 95e2b5: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 95e2b8: mov ebp, dword ptr [eax + 4] */
  ebp = R32((uint32_t)(eax + 0x4u));
/* 95e2bb: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 95e2be: xor ebx, ebx */
  ebx = 0;
/* 95e2c0: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 95e2c3: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 95e2c6: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95e2c8: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 95e2cc: jne 0x95e2d6 */
  if (!zf) goto L_95e2d6;
L_95e2ce: /* 95e2ce: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 95e2d2: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 95e2d4: jmp 0x95e326 */
  goto L_95e326;
L_95e2d6: /* 95e2d6: mov ebp, dword ptr [eax] */
  ebp = R32((uint32_t)(eax));
/* 95e2d8: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 95e2db: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95e2dd: jne 0x95e2eb */
  if (!zf) goto L_95e2eb;
L_95e2df: /* 95e2df: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 95e2e3: mov dword ptr [eax], 1 */
  W32((uint32_t)(eax), 0x1u);
/* 95e2e9: jmp 0x95e326 */
  goto L_95e326;
L_95e2eb: /* 95e2eb: mov ebp, dword ptr [eax] */
  ebp = R32((uint32_t)(eax));
/* 95e2ed: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 95e2f0: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95e2f2: jne 0x95e300 */
  if (!zf) goto L_95e300;
L_95e2f4: /* 95e2f4: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 95e2f8: mov dword ptr [eax], 2 */
  W32((uint32_t)(eax), 0x2u);
/* 95e2fe: jmp 0x95e326 */
  goto L_95e326;
L_95e300: /* 95e300: mov ebx, 3 */
  ebx = 0x3u;
/* 95e305: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95e307: jle 0x95e326 */
  if ((zf || sf != of)) goto L_95e326;
L_95e309: /* 95e309: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_95e310: /* 95e310: mov ebp, dword ptr [eax] */
  ebp = R32((uint32_t)(eax));
/* 95e312: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 95e315: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95e317: je 0x95e320 */
  if (zf) goto L_95e320;
L_95e319: /* 95e319: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 95e31a: cmp ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95e31c: jl 0x95e310 */
  if ((sf != of)) goto L_95e310;
L_95e31e: /* 95e31e: jmp 0x95e326 */
  goto L_95e326;
L_95e320: /* 95e320: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 95e324: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
L_95e326: /* 95e326: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 95e328: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 95e32c: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 95e32f: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95e331: jne 0x95e340 */
  if (!zf) goto L_95e340;
L_95e333: /* 95e333: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 95e337: mov dword ptr [ebp], 0 */
  W32((uint32_t)(ebp), 0x0u);
/* 95e33e: jmp 0x95e390 */
  goto L_95e390;
L_95e340: /* 95e340: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 95e342: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 95e345: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95e347: jne 0x95e356 */
  if (!zf) goto L_95e356;
L_95e349: /* 95e349: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 95e34d: mov dword ptr [ebp], 1 */
  W32((uint32_t)(ebp), 0x1u);
/* 95e354: jmp 0x95e390 */
  goto L_95e390;
L_95e356: /* 95e356: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 95e358: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 95e35b: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95e35d: jne 0x95e36c */
  if (!zf) goto L_95e36c;
L_95e35f: /* 95e35f: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 95e363: mov dword ptr [ebp], 2 */
  W32((uint32_t)(ebp), 0x2u);
/* 95e36a: jmp 0x95e390 */
  goto L_95e390;
L_95e36c: /* 95e36c: mov eax, 3 */
  eax = 0x3u;
/* 95e371: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95e373: jle 0x95e390 */
  if ((zf || sf != of)) goto L_95e390;
L_95e375: /* 95e375: mov ebp, dword ptr [ecx] */
  ebp = R32((uint32_t)(ecx));
/* 95e377: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 95e37a: cmp edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95e37c: je 0x95e389 */
  if (zf) goto L_95e389;
L_95e37e: /* 95e37e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 95e37f: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95e381: jl 0x95e375 */
  if ((sf != of)) goto L_95e375;
L_95e383: /* 95e383: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 95e387: jmp 0x95e390 */
  goto L_95e390;
L_95e389: /* 95e389: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 95e38d: mov dword ptr [ebp], eax */
  W32((uint32_t)(ebp), eax);
L_95e390: /* 95e390: cmp ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95e392: jge 0x95e398 */
  if ((sf == of)) goto L_95e398;
L_95e394: /* 95e394: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95e396: jl 0x95e3bc */
  if ((sf != of)) goto L_95e3bc;
L_95e398: /* 95e398: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 95e39b: mov edx, dword ptr [edi + 0x38] */
  edx = R32((uint32_t)(edi + 0x38u));
/* 95e39e: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 95e3a3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95e3a4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95e3a5: push 0xafa830 */
  { uint32_t v = 0xafa830u; esp -= 4; W32(esp, v); }
/* 95e3aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95e3ab: call 0x953470 */
  esp -= 4; W32(esp, 0x95e3b0u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95e3b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95e3b1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95e3b2: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 95e3b4: call 0x96e130 */
  esp -= 4; W32(esp, 0x95e3b9u); SPILL(); f_96e130(); if (g_unwind) return; RELOAD();
/* 95e3b9: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95e3bc: /* 95e3bc: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 95e3c0: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 95e3c4: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 95e3c6: mov edx, dword ptr [edi + 0x20] */
  edx = R32((uint32_t)(edi + 0x20u));
/* 95e3c9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95e3ca: mov ecx, dword ptr [0xcf85cc] */
  ecx = R32((uint32_t)(0xcf85ccu));
/* 95e3d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95e3d1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95e3d2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95e3d3: call 0x94f0c0 */
  esp -= 4; W32(esp, 0x95e3d8u); SPILL(); f_94f0c0(); if (g_unwind) return; RELOAD();
/* 95e3d8: mov ebx, eax */
  ebx = eax;
/* 95e3da: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 95e3df: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95e3e2: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95e3e5: jl 0x95e40e */
  if ((sf != of)) goto L_95e40e;
L_95e3e7: /* 95e3e7: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 95e3ea: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 95e3ed: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 95e3f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95e3f2: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 95e3f4: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 95e3fa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95e3fb: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 95e3fe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95e3ff: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95e400: push 0xafa7fc */
  { uint32_t v = 0xafa7fcu; esp -= 4; W32(esp, v); }
/* 95e405: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95e406: call 0x953470 */
  esp -= 4; W32(esp, 0x95e40bu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95e40b: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95e40e: /* 95e40e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95e40f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95e410: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 95e411: mov eax, ebx */
  eax = ebx;
/* 95e413: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95e414: ret  */
  esp += 4; SPILL(); return;
}

void f_95e420(void) {
  LOAD_REGS();
L_95e420: /* 95e420: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 95e424: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 95e428: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 95e42c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95e42d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95e42e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95e42f: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 95e431: lea esi, [ecx + eax*4 + 4] */
  esi = (uint32_t)(ecx + eax*4 + 0x4u);
/* 95e435: lea eax, [edx - 1] */
  eax = (uint32_t)(edx + 0xffffffffu);
/* 95e438: cmp eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 95e43b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95e43c: ja 0x95e4c9 */
  if ((!cf && !zf)) goto L_95e4c9;
L_95e442: /* 95e442: jmp dword ptr [eax*4 + 0x95e510] */
  switch (R32((uint32_t)(eax*4 + 0x95e510u))) {
    case 0x95e449u: goto L_95e449;
    case 0x95e45cu: goto L_95e45c;
    case 0x95e476u: goto L_95e476;
    case 0x95e495u: goto L_95e495;
    case 0x95e49au: goto L_95e49a;
    case 0x95e49fu: goto L_95e49f;
    default: guest_badjump(0x95e442, R32((uint32_t)(eax*4 + 0x95e510u))); return;
  }
L_95e449: /* 95e449: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 95e44b: sub eax, dword ptr [esp + 0x24] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 95e44f: xor edx, edx */
  edx = 0;
/* 95e451: div dword ptr [esp + 0x14] */
  { uint32_t d = R32((uint32_t)(esp + 0x14u)); if (!d) d = guest_divzero(0x95e451);
  uint64_t n = ((uint64_t)edx << 32) | eax; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
/* 95e455: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95e456: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95e457: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 95e458: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95e459: mov eax, edx */
  eax = edx;
/* 95e45b: ret  */
  esp += 4; SPILL(); return;
L_95e45c: /* 95e45c: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 95e45f: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 95e463: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 95e465: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 95e467: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 95e469: xor edx, edx */
  edx = 0;
/* 95e46b: div dword ptr [esp + 0x14] */
  { uint32_t d = R32((uint32_t)(esp + 0x14u)); if (!d) d = guest_divzero(0x95e46b);
  uint64_t n = ((uint64_t)edx << 32) | eax; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
/* 95e46f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95e470: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95e471: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 95e472: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95e473: mov eax, edx */
  eax = edx;
/* 95e475: ret  */
  esp += 4; SPILL(); return;
L_95e476: /* 95e476: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 95e479: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 95e47c: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 95e480: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 95e482: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 95e484: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 95e486: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 95e488: xor edx, edx */
  edx = 0;
/* 95e48a: div dword ptr [esp + 0x14] */
  { uint32_t d = R32((uint32_t)(esp + 0x14u)); if (!d) d = guest_divzero(0x95e48a);
  uint64_t n = ((uint64_t)edx << 32) | eax; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
/* 95e48e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95e48f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95e490: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 95e491: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95e492: mov eax, edx */
  eax = edx;
/* 95e494: ret  */
  esp += 4; SPILL(); return;
L_95e495: /* 95e495: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 95e498: jmp 0x95e4a8 */
  goto L_95e4a8;
L_95e49a: /* 95e49a: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 95e49d: jmp 0x95e4a5 */
  goto L_95e4a5;
L_95e49f: /* 95e49f: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 95e4a2: add eax, dword ptr [esi + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x10u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_95e4a5: /* 95e4a5: add eax, dword ptr [esi + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xcu)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_95e4a8: /* 95e4a8: mov ebx, dword ptr [esi + 8] */
  ebx = R32((uint32_t)(esi + 0x8u));
/* 95e4ab: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 95e4ae: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 95e4b2: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 95e4b4: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 95e4b6: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 95e4b8: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 95e4ba: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 95e4bc: xor edx, edx */
  edx = 0;
/* 95e4be: div dword ptr [esp + 0x14] */
  { uint32_t d = R32((uint32_t)(esp + 0x14u)); if (!d) d = guest_divzero(0x95e4be);
  uint64_t n = ((uint64_t)edx << 32) | eax; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
/* 95e4c2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95e4c3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95e4c4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 95e4c5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95e4c6: mov eax, edx */
  eax = edx;
/* 95e4c8: ret  */
  esp += 4; SPILL(); return;
L_95e4c9: /* 95e4c9: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
/* 95e4cd: xor eax, eax */
  eax = 0;
/* 95e4cf: mov edi, 3 */
  edi = 0x3u;
L_95e4d4: /* 95e4d4: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 95e4d6: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 95e4d9: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95e4db: je 0x95e4fb */
  if (zf) goto L_95e4fb;
L_95e4dd: /* 95e4dd: mov ecx, 0x20 */
  ecx = 0x20u;
/* 95e4e2: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  ecx = r;
  }
/* 95e4e4: mov ebp, edx */
  ebp = edx;
/* 95e4e6: shr ebp, cl */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  cf = ((uint32_t)a >> (c - 1)) & 1;
  of = (a >> 31) & 1;
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  ebp = r;
  }
  }
/* 95e4e8: mov ecx, edi */
  ecx = edi;
/* 95e4ea: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 95e4ec: add edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 95e4ef: add ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 95e4f1: xor eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 95e4f3: cmp edi, 0x20 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95e4f6: jl 0x95e4fb */
  if ((sf != of)) goto L_95e4fb;
L_95e4f8: /* 95e4f8: sub edi, 0x20 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
L_95e4fb: /* 95e4fb: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95e4fe: jne 0x95e4d4 */
  if (!zf) goto L_95e4d4;
L_95e500: /* 95e500: xor edx, edx */
  edx = 0;
/* 95e502: div dword ptr [esp + 0x14] */
  { uint32_t d = R32((uint32_t)(esp + 0x14u)); if (!d) d = guest_divzero(0x95e502);
  uint64_t n = ((uint64_t)edx << 32) | eax; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
/* 95e506: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95e507: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95e508: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 95e509: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95e50a: mov eax, edx */
  eax = edx;
/* 95e50c: ret  */
  esp += 4; SPILL(); return;
}

void f_95e530(void) {
  LOAD_REGS();
L_95e530: /* 95e530: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95e531: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 95e535: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95e537: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95e538: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95e539: je 0x95e567 */
  if (zf) goto L_95e567;
L_95e53b: /* 95e53b: mov esi, dword ptr [ebx + 4] */
  esi = R32((uint32_t)(ebx + 0x4u));
/* 95e53e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95e540: lea edi, [ebx + 4] */
  edi = (uint32_t)(ebx + 0x4u);
/* 95e543: je 0x95e567 */
  if (zf) goto L_95e567;
L_95e545: /* 95e545: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 95e548: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 95e54b: test eax, 0x10000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95e550: jne 0x95e561 */
  if (!zf) goto L_95e561;
L_95e552: /* 95e552: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95e553: call 0x95f300 */
  esp -= 4; W32(esp, 0x95e558u); SPILL(); f_95f300(); if (g_unwind) return; RELOAD();
/* 95e558: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95e559: call 0x95dc70 */
  esp -= 4; W32(esp, 0x95e55eu); SPILL(); f_95dc70(); if (g_unwind) return; RELOAD();
/* 95e55e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95e561: /* 95e561: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 95e563: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95e565: jne 0x95e545 */
  if (!zf) goto L_95e545;
L_95e567: /* 95e567: call 0x95f070 */
  esp -= 4; W32(esp, 0x95e56cu); SPILL(); f_95f070(); if (g_unwind) return; RELOAD();
/* 95e56c: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 95e570: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 95e574: mov esi, eax */
  esi = eax;
/* 95e576: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 95e579: shl ecx, 0xb */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 11;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 95e57c: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 95e57e: and ecx, 0x800 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x800u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 95e584: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 95e586: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95e587: lea eax, [esi + 0x28] */
  eax = (uint32_t)(esi + 0x28u);
/* 95e58a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95e58b: mov dword ptr [esi + 0x20], ebx */
  W32((uint32_t)(esi + 0x20u), ebx);
/* 95e58e: mov dword ptr [esi + 0x3c], ecx */
  W32((uint32_t)(esi + 0x3cu), ecx);
/* 95e591: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x95e596u); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 95e596: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95e597: call 0x95dbf0 */
  esp -= 4; W32(esp, 0x95e59cu); SPILL(); f_95dbf0(); if (g_unwind) return; RELOAD();
/* 95e59c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95e59f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95e5a0: mov eax, esi */
  eax = esi;
/* 95e5a2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95e5a3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95e5a4: ret  */
  esp += 4; SPILL(); return;
}

void f_95e5b0(void) {
  LOAD_REGS();
L_95e5b0: /* 95e5b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95e5b1: mov esi, dword ptr [0xcf8b58] */
  esi = R32((uint32_t)(0xcf8b58u));
/* 95e5b7: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95e5b9: je 0x95e5dd */
  if (zf) goto L_95e5dd;
L_95e5bb: /* 95e5bb: nop  */
/* 95e5bc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_95e5c0: /* 95e5c0: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 95e5c3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95e5c5: je 0x95e5dd */
  if (zf) goto L_95e5dd;
L_95e5c7: /* 95e5c7: test byte ptr [esi + 0x3f], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x3fu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 95e5cb: jne 0x95e5d6 */
  if (!zf) goto L_95e5d6;
L_95e5cd: /* 95e5cd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95e5ce: call 0x970e90 */
  esp -= 4; W32(esp, 0x95e5d3u); SPILL(); f_970e90(); if (g_unwind) return; RELOAD();
/* 95e5d3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95e5d6: /* 95e5d6: mov esi, dword ptr [esi + 0x1c] */
  esi = R32((uint32_t)(esi + 0x1cu));
/* 95e5d9: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95e5db: jne 0x95e5c0 */
  if (!zf) goto L_95e5c0;
L_95e5dd: /* 95e5dd: fld dword ptr [0xcf8bb4] */
  { double v = F32((uint32_t)(0xcf8bb4u)); FPUSH(v); }
/* 95e5e3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95e5e4: fcomp dword ptr [0xa216c0] */
  fpu_com(ST0, F32((uint32_t)(0xa216c0u)));
  FPOP();
/* 95e5ea: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 95e5ec: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 95e5ef: jp 0x95e611 */
  if (pf) goto L_95e611;
L_95e5f1: /* 95e5f1: fld dword ptr [0xcf79bc] */
  { double v = F32((uint32_t)(0xcf79bcu)); FPUSH(v); }
/* 95e5f7: fchs  */
  ST0 = -ST0;
/* 95e5f9: fld dword ptr [0xcf8bc4] */
  { double v = F32((uint32_t)(0xcf8bc4u)); FPUSH(v); }
/* 95e5ff: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 95e601: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 95e603: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 95e606: jne 0x95e60f */
  if (!zf) goto L_95e60f;
L_95e608: /* 95e608: fstp dword ptr [0xcf8bc4] */
  WF32((uint32_t)(0xcf8bc4u), ST0); FPOP();
/* 95e60e: ret  */
  esp += 4; SPILL(); return;
L_95e60f: /* 95e60f: fstp st(0) */
  STI(0) = ST0; FPOP();
L_95e611: /* 95e611: ret  */
  esp += 4; SPILL(); return;
}

void f_95e620(void) {
  LOAD_REGS();
L_95e620: /* 95e620: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 95e624: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* 95e627: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 95e62a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95e62b: xor ebx, ebx */
  ebx = 0;
/* 95e62d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95e62f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95e630: je 0x95e848 */
  if (zf) goto L_95e848;
L_95e636: /* 95e636: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 95e639: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 95e63c: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95e63e: je 0x95e848 */
  if (zf) goto L_95e848;
L_95e644: /* 95e644: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95e645: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
L_95e646: /* 95e646: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 95e649: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 95e64d: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 95e650: and eax, 0xffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 95e655: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 95e659: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 95e65c: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95e65e: jne 0x95e665 */
  if (!zf) goto L_95e665;
L_95e660: /* 95e660: mov esi, dword ptr [edi + 8] */
  esi = R32((uint32_t)(edi + 0x8u));
/* 95e663: jmp 0x95e667 */
  goto L_95e667;
L_95e665: /* 95e665: mov esi, eax */
  esi = eax;
L_95e667: /* 95e667: mov edx, dword ptr [esi + 0x3c] */
  edx = R32((uint32_t)(esi + 0x3cu));
/* 95e66a: test dh, 4 */
  { uint8_t a = (uint8_t)(((edx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 95e66d: je 0x95e6bc */
  if (zf) goto L_95e6bc;
L_95e66f: /* 95e66f: mov eax, dword ptr [0xcf8478] */
  eax = R32((uint32_t)(0xcf8478u));
/* 95e674: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95e676: jne 0x95e828 */
  if (!zf) goto L_95e828;
L_95e67c: /* 95e67c: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* 95e67f: cmp eax, dword ptr [0xcf8bf8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0xcf8bf8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95e685: jne 0x95e828 */
  if (!zf) goto L_95e828;
L_95e68b: /* 95e68b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95e68c: call 0x94ee00 */
  esp -= 4; W32(esp, 0x95e691u); SPILL(); f_94ee00(); if (g_unwind) return; RELOAD();
/* 95e691: mov eax, dword ptr [0xcf2f64] */
  eax = R32((uint32_t)(0xcf2f64u));
/* 95e696: mov ecx, dword ptr [0xcf2f38] */
  ecx = R32((uint32_t)(0xcf2f38u));
/* 95e69c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95e69f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 95e6a0: mov dword ptr [0xcf2f64], eax */
  W32((uint32_t)(0xcf2f64u), eax);
/* 95e6a5: mov edx, dword ptr [ecx + 0x40] */
  edx = R32((uint32_t)(ecx + 0x40u));
/* 95e6a8: mov eax, dword ptr [0xcf2f30] */
  eax = R32((uint32_t)(0xcf2f30u));
/* 95e6ad: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 95e6b0: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 95e6b3: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 95e6b5: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 95e6b7: jmp 0x95e828 */
  goto L_95e828;
L_95e6bc: /* 95e6bc: xor edx, edx */
  edx = 0;
/* 95e6be: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95e6c0: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 95e6c5: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 95e6c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95e6c9: mov ebp, edx */
  ebp = edx;
/* 95e6cb: call 0x94f020 */
  esp -= 4; W32(esp, 0x95e6d0u); SPILL(); f_94f020(); if (g_unwind) return; RELOAD();
/* 95e6d0: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 95e6d4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95e6d5: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* 95e6d9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95e6da: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 95e6de: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x95e6e3u); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 95e6e3: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 95e6e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95e6e6: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 95e6ea: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95e6eb: call 0x94e820 */
  esp -= 4; W32(esp, 0x95e6f0u); SPILL(); f_94e820(); if (g_unwind) return; RELOAD();
/* 95e6f0: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 95e6f4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95e6f5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95e6f6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95e6f7: call 0x95e530 */
  esp -= 4; W32(esp, 0x95e6fcu); SPILL(); f_95e530(); if (g_unwind) return; RELOAD();
/* 95e6fc: mov ebx, eax */
  ebx = eax;
/* 95e6fe: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 95e702: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 95e704: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95e707: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 95e708: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 95e70a: test dword ptr [esi + 0x3c], 0x800000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95e711: je 0x95e736 */
  if (zf) goto L_95e736;
L_95e713: /* 95e713: or dword ptr [ebx + 0x3c], 0x1000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x3cu))); uint32_t b = (uint32_t)(0x1000000u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebx + 0x3cu), r);
  }
/* 95e71a: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 95e71d: test ah, 0x20 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 95e720: jne 0x95e72a */
  if (!zf) goto L_95e72a;
L_95e722: /* 95e722: mov dword ptr [ebx + 0x10], ebx */
  W32((uint32_t)(ebx + 0x10u), ebx);
/* 95e725: mov dword ptr [esi + 0x10], ebx */
  W32((uint32_t)(esi + 0x10u), ebx);
/* 95e728: jmp 0x95e736 */
  goto L_95e736;
L_95e72a: /* 95e72a: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 95e72d: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 95e730: mov dword ptr [ebx + 0x10], ecx */
  W32((uint32_t)(ebx + 0x10u), ecx);
/* 95e733: mov dword ptr [eax + 0x10], ebx */
  W32((uint32_t)(eax + 0x10u), ebx);
L_95e736: /* 95e736: mov eax, dword ptr [0xcf8478] */
  eax = R32((uint32_t)(0xcf8478u));
/* 95e73b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95e73d: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 95e740: je 0x95e75d */
  if (zf) goto L_95e75d;
L_95e742: /* 95e742: test ah, 0x10 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 95e745: jne 0x95e828 */
  if (!zf) goto L_95e828;
L_95e74b: /* 95e74b: lea edx, [ebx + 0x24] */
  edx = (uint32_t)(ebx + 0x24u);
/* 95e74e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95e74f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95e750: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x95e755u); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 95e755: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95e758: jmp 0x95e828 */
  goto L_95e828;
L_95e75d: /* 95e75d: test ah, 0x20 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 95e760: je 0x95e7a2 */
  if (zf) goto L_95e7a2;
L_95e762: /* 95e762: test ah, 0x10 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 95e765: je 0x95e793 */
  if (zf) goto L_95e793;
L_95e767: /* 95e767: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 95e76b: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* 95e76e: mov edx, dword ptr [esi + 0x38] */
  edx = R32((uint32_t)(esi + 0x38u));
/* 95e771: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 95e776: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95e777: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95e778: push 0xafa8d0 */
  { uint32_t v = 0xafa8d0u; esp -= 4; W32(esp, v); }
/* 95e77d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95e77e: call 0x953470 */
  esp -= 4; W32(esp, 0x95e783u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95e783: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 95e787: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95e788: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95e789: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 95e78b: call 0x96e130 */
  esp -= 4; W32(esp, 0x95e790u); SPILL(); f_96e130(); if (g_unwind) return; RELOAD();
/* 95e790: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95e793: /* 95e793: lea edx, [esi + 0x28] */
  edx = (uint32_t)(esi + 0x28u);
/* 95e796: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95e797: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95e798: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x95e79du); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 95e79d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95e7a0: jmp 0x95e7b4 */
  goto L_95e7b4;
L_95e7a2: /* 95e7a2: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 95e7a6: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 95e7a9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95e7aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95e7ab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95e7ac: call 0x94f2c0 */
  esp -= 4; W32(esp, 0x95e7b1u); SPILL(); f_94f2c0(); if (g_unwind) return; RELOAD();
/* 95e7b1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95e7b4: /* 95e7b4: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 95e7b7: test ah, 0x10 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 95e7ba: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95e7bb: je 0x95e7d9 */
  if (zf) goto L_95e7d9;
L_95e7bd: /* 95e7bd: mov edx, dword ptr [esi + 0x24] */
  edx = R32((uint32_t)(esi + 0x24u));
/* 95e7c0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95e7c1: call 0x94ea40 */
  esp -= 4; W32(esp, 0x95e7c6u); SPILL(); f_94ea40(); if (g_unwind) return; RELOAD();
/* 95e7c6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95e7c7: call 0x94ee00 */
  esp -= 4; W32(esp, 0x95e7ccu); SPILL(); f_94ee00(); if (g_unwind) return; RELOAD();
/* 95e7cc: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 95e7ce: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95e7cf: call 0x953a60 */
  esp -= 4; W32(esp, 0x95e7d4u); SPILL(); f_953a60(); if (g_unwind) return; RELOAD();
/* 95e7d4: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95e7d7: jmp 0x95e7f1 */
  goto L_95e7f1;
L_95e7d9: /* 95e7d9: lea eax, [ebx + 0x24] */
  eax = (uint32_t)(ebx + 0x24u);
/* 95e7dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95e7dd: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x95e7e2u); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 95e7e2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95e7e5: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95e7e7: je 0x95e7ee */
  if (zf) goto L_95e7ee;
L_95e7e9: /* 95e7e9: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 95e7ec: jmp 0x95e7f1 */
  goto L_95e7f1;
L_95e7ee: /* 95e7ee: mov dword ptr [edi + 8], ebx */
  W32((uint32_t)(edi + 0x8u), ebx);
L_95e7f1: /* 95e7f1: cmp dword ptr [0xcf8438], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95e7f8: jl 0x95e828 */
  if ((sf != of)) goto L_95e828;
L_95e7fa: /* 95e7fa: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 95e7fd: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 95e801: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 95e805: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95e806: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 95e809: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 95e80e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95e80f: mov edx, dword ptr [ebx + 0x38] */
  edx = R32((uint32_t)(ebx + 0x38u));
/* 95e812: and ecx, 0xffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 95e818: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95e819: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95e81a: push 0xafa880 */
  { uint32_t v = 0xafa880u; esp -= 4; W32(esp, v); }
/* 95e81f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95e820: call 0x953470 */
  esp -= 4; W32(esp, 0x95e825u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95e825: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95e828: /* 95e828: mov edx, dword ptr [esi + 0x3c] */
  edx = R32((uint32_t)(esi + 0x3cu));
/* 95e82b: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 95e82f: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 95e833: or edx, 0x2000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2000u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 95e839: mov dword ptr [esi + 0x3c], edx */
  W32((uint32_t)(esi + 0x3cu), edx);
/* 95e83c: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 95e83e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95e840: jne 0x95e646 */
  if (!zf) goto L_95e646;
L_95e846: /* 95e846: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95e847: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_95e848: /* 95e848: mov eax, dword ptr [0xcf8478] */
  eax = R32((uint32_t)(0xcf8478u));
/* 95e84d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95e84f: mov eax, ebx */
  eax = ebx;
/* 95e851: jne 0x95e85d */
  if (!zf) goto L_95e85d;
L_95e853: /* 95e853: mov ecx, dword ptr [ecx + 0x24] */
  ecx = R32((uint32_t)(ecx + 0x24u));
/* 95e856: mov dword ptr [ecx + 4], 0 */
  W32((uint32_t)(ecx + 0x4u), 0x0u);
L_95e85d: /* 95e85d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95e85e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95e85f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95e862: ret  */
  esp += 4; SPILL(); return;
}

void f_95e870(void) {
  LOAD_REGS();
L_95e870: /* 95e870: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 95e873: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 95e877: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 95e87a: xor ecx, ecx */
  ecx = 0;
/* 95e87c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95e87e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95e87f: mov dword ptr [esp + 4], ecx */
  W32((uint32_t)(esp + 0x4u), ecx);
/* 95e883: je 0x95e9b0 */
  if (zf) goto L_95e9b0;
L_95e889: /* 95e889: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 95e88c: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 95e88f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95e891: je 0x95e9b0 */
  if (zf) goto L_95e9b0;
L_95e897: /* 95e897: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95e898: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95e899: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95e89a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_95e8a0: /* 95e8a0: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 95e8a3: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 95e8a7: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 95e8aa: test ah, 0x24 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x24u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 95e8ad: jne 0x95e996 */
  if (!zf) goto L_95e996;
L_95e8b3: /* 95e8b3: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 95e8b7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 95e8b9: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 95e8bd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95e8be: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* 95e8c2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95e8c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95e8c4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95e8c5: call 0x95e2a0 */
  esp -= 4; W32(esp, 0x95e8cau); SPILL(); f_95e2a0(); if (g_unwind) return; RELOAD();
/* 95e8ca: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 95e8ce: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 95e8d2: mov ebx, dword ptr [esp + 0x28] */
  ebx = R32((uint32_t)(esp + 0x28u));
/* 95e8d6: mov edi, ebp */
  edi = ebp;
/* 95e8d8: xor edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 95e8da: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 95e8dd: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 95e8e0: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95e8e3: and edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 95e8e6: test ch, 8 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 95e8e9: mov ebx, ebp */
  ebx = ebp;
/* 95e8eb: jne 0x95e8ef */
  if (!zf) goto L_95e8ef;
L_95e8ed: /* 95e8ed: not ebx */
  ebx = ~ebx;
L_95e8ef: /* 95e8ef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95e8f0: and ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 95e8f3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95e8f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95e8f5: call 0x95e530 */
  esp -= 4; W32(esp, 0x95e8fau); SPILL(); f_95e530(); if (g_unwind) return; RELOAD();
/* 95e8fa: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 95e8fe: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 95e900: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95e903: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 95e904: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 95e906: test dword ptr [esi + 0x3c], 0x800000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95e90d: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 95e911: je 0x95e936 */
  if (zf) goto L_95e936;
L_95e913: /* 95e913: mov ecx, dword ptr [0xcf8488] */
  ecx = R32((uint32_t)(0xcf8488u));
/* 95e919: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95e91b: jne 0x95e927 */
  if (!zf) goto L_95e927;
L_95e91d: /* 95e91d: mov ecx, dword ptr [0xcf8454] */
  ecx = R32((uint32_t)(0xcf8454u));
/* 95e923: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95e925: je 0x95e936 */
  if (zf) goto L_95e936;
L_95e927: /* 95e927: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 95e92a: or ecx, 0x1000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1000000u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 95e930: mov dword ptr [eax + 0x10], eax */
  W32((uint32_t)(eax + 0x10u), eax);
/* 95e933: mov dword ptr [eax + 0x3c], ecx */
  W32((uint32_t)(eax + 0x3cu), ecx);
L_95e936: /* 95e936: mov ecx, dword ptr [0xcf8478] */
  ecx = R32((uint32_t)(0xcf8478u));
/* 95e93c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95e93e: jne 0x95e947 */
  if (!zf) goto L_95e947;
L_95e940: /* 95e940: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 95e943: mov dword ptr [edx + ebp*4 + 4], eax */
  W32((uint32_t)(edx + ebp*4 + 0x4u), eax);
L_95e947: /* 95e947: cmp dword ptr [0xcf8438], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95e94e: jl 0x95e996 */
  if ((sf != of)) goto L_95e996;
L_95e950: /* 95e950: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 95e954: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 95e958: mov edx, dword ptr [ecx + 0x38] */
  edx = R32((uint32_t)(ecx + 0x38u));
/* 95e95b: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 95e95e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95e95f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95e960: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 95e963: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95e964: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 95e968: shr eax, 0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 11;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 95e96b: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 95e96e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95e96f: mov eax, dword ptr [edx + 0x14] */
  eax = R32((uint32_t)(edx + 0x14u));
/* 95e972: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95e973: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95e974: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 95e978: mov edx, dword ptr [ecx + 0x38] */
  edx = R32((uint32_t)(ecx + 0x38u));
/* 95e97b: and eax, 0xffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 95e980: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95e981: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 95e986: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95e987: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95e988: push 0xafa930 */
  { uint32_t v = 0xafa930u; esp -= 4; W32(esp, v); }
/* 95e98d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95e98e: call 0x953470 */
  esp -= 4; W32(esp, 0x95e993u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95e993: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95e996: /* 95e996: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 95e99a: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 95e99c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95e99e: jne 0x95e8a0 */
  if (!zf) goto L_95e8a0;
L_95e9a4: /* 95e9a4: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 95e9a8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95e9a9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 95e9aa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95e9ab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95e9ac: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95e9af: ret  */
  esp += 4; SPILL(); return;
L_95e9b0: /* 95e9b0: mov eax, ecx */
  eax = ecx;
/* 95e9b2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95e9b3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95e9b6: ret  */
  esp += 4; SPILL(); return;
}

void f_95e9c0(void) {
  LOAD_REGS();
L_95e9c0: /* 95e9c0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 95e9c3: mov edx, dword ptr [0xcf85cc] */
  edx = R32((uint32_t)(0xcf85ccu));
/* 95e9c9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95e9ca: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95e9cb: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 95e9cf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95e9d0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95e9d1: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 95e9d5: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 95e9d8: mov ecx, dword ptr [eax + ebp*4 + 4] */
  ecx = R32((uint32_t)(eax + ebp*4 + 0x4u));
/* 95e9dc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95e9dd: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 95e9df: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95e9e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95e9e1: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 95e9e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95e9e6: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 95e9ee: call 0x95e420 */
  esp -= 4; W32(esp, 0x95e9f3u); SPILL(); f_95e420(); if (g_unwind) return; RELOAD();
/* 95e9f3: mov ebx, eax */
  ebx = eax;
/* 95e9f5: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 95e9fa: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95e9fd: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95ea00: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 95ea04: jl 0x95ea27 */
  if ((sf != of)) goto L_95ea27;
L_95ea06: /* 95ea06: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 95ea0a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 95ea0c: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 95ea0f: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 95ea15: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95ea16: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95ea17: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95ea18: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95ea19: push 0xafaba8 */
  { uint32_t v = 0xafaba8u; esp -= 4; W32(esp, v); }
/* 95ea1e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95ea1f: call 0x953470 */
  esp -= 4; W32(esp, 0x95ea24u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95ea24: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95ea27: /* 95ea27: mov esi, dword ptr [0xcf7908] */
  esi = R32((uint32_t)(0xcf7908u));
/* 95ea2d: mov ecx, dword ptr [0xcf8c10] */
  ecx = R32((uint32_t)(0xcf8c10u));
/* 95ea33: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 95ea34: mov eax, ebx */
  eax = ebx;
/* 95ea36: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 95ea37: mov dword ptr [0xcf7908], esi */
  W32((uint32_t)(0xcf7908u), esi);
/* 95ea3d: mov esi, dword ptr [ecx + ebx*4] */
  esi = R32((uint32_t)(ecx + ebx*4));
/* 95ea40: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95ea42: je 0x95eaa7 */
  if (zf) goto L_95eaa7;
L_95ea44: /* 95ea44: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95ea46: jne 0x95ea52 */
  if (!zf) goto L_95ea52;
L_95ea48: /* 95ea48: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 95ea50: jmp 0x95ea86 */
  goto L_95ea86;
L_95ea52: /* 95ea52: mov ecx, dword ptr [0xcf7914] */
  ecx = R32((uint32_t)(0xcf7914u));
/* 95ea58: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 95ea59: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 95ea5d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95ea5e: mov dword ptr [0xcf7914], ecx */
  W32((uint32_t)(0xcf7914u), ecx);
/* 95ea64: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 95ea67: mov edx, dword ptr [edi + 0x20] */
  edx = R32((uint32_t)(edi + 0x20u));
/* 95ea6a: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 95ea6e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95ea6f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95ea70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95ea71: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95ea72: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 95ea74: call 0x95efb0 */
  esp -= 4; W32(esp, 0x95ea79u); SPILL(); f_95efb0(); if (g_unwind) return; RELOAD();
/* 95ea79: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95ea7c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95ea7e: jne 0x95eae0 */
  if (!zf) goto L_95eae0;
L_95ea80: /* 95ea80: mov ecx, dword ptr [0xcf8c10] */
  ecx = R32((uint32_t)(0xcf8c10u));
L_95ea86: /* 95ea86: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 95ea8a: xor eax, eax */
  eax = 0;
/* 95ea8c: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95ea8e: setge al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(((sf == of)) ? 1 : 0) & 0xffu);
/* 95ea91: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 95ea92: and eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 95ea94: mov esi, dword ptr [ecx + eax*4 + 4] */
  esi = R32((uint32_t)(ecx + eax*4 + 0x4u));
/* 95ea98: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95ea9a: lea ebx, [eax + 1] */
  ebx = (uint32_t)(eax + 0x1u);
/* 95ea9d: jne 0x95ea44 */
  if (!zf) goto L_95ea44;
L_95ea9f: /* 95ea9f: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 95eaa3: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95eaa5: jne 0x95eaab */
  if (!zf) goto L_95eaab;
L_95eaa7: /* 95eaa7: mov dword ptr [ecx + eax*4 + 4], edi */
  W32((uint32_t)(ecx + eax*4 + 0x4u), edi);
L_95eaab: /* 95eaab: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 95eaaf: inc dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax), r);
  }
/* 95eab1: cmp dword ptr [0xcf8438], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95eab8: jl 0x95ead8 */
  if ((sf != of)) goto L_95ead8;
L_95eaba: /* 95eaba: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 95eabe: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 95eac1: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 95eac7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95eac8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95eac9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95eaca: push 0xafab70 */
  { uint32_t v = 0xafab70u; esp -= 4; W32(esp, v); }
/* 95eacf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95ead0: call 0x953470 */
  esp -= 4; W32(esp, 0x95ead5u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95ead5: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95ead8: /* 95ead8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95ead9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95eada: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 95eadb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95eadc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95eadf: ret  */
  esp += 4; SPILL(); return;
L_95eae0: /* 95eae0: mov ecx, dword ptr [edi + 0x20] */
  ecx = R32((uint32_t)(edi + 0x20u));
/* 95eae3: mov edx, dword ptr [ecx + ebp*4 + 4] */
  edx = R32((uint32_t)(ecx + ebp*4 + 0x4u));
/* 95eae7: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 95eaea: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 95eaee: cmp edx, dword ptr [eax + ecx*4 + 4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + ecx*4 + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95eaf2: jne 0x95eb23 */
  if (!zf) goto L_95eb23;
L_95eaf4: /* 95eaf4: push 0xafab4c */
  { uint32_t v = 0xafab4cu; esp -= 4; W32(esp, v); }
/* 95eaf9: call 0x96f160 */
  esp -= 4; W32(esp, 0x95eafeu); SPILL(); f_96f160(); if (g_unwind) return; RELOAD();
/* 95eafe: mov edx, dword ptr [edi + 0x38] */
  edx = R32((uint32_t)(edi + 0x38u));
/* 95eb01: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 95eb04: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 95eb0a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95eb0b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95eb0c: push 0xafaaf0 */
  { uint32_t v = 0xafaaf0u; esp -= 4; W32(esp, v); }
/* 95eb11: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95eb12: call 0x953470 */
  esp -= 4; W32(esp, 0x95eb17u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95eb17: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95eb18: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95eb19: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 95eb1b: call 0x96e130 */
  esp -= 4; W32(esp, 0x95eb20u); SPILL(); f_96e130(); if (g_unwind) return; RELOAD();
/* 95eb20: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95eb23: /* 95eb23: mov ebx, dword ptr [esi + 0x3c] */
  ebx = R32((uint32_t)(esi + 0x3cu));
/* 95eb26: mov edx, dword ptr [edi + 0x3c] */
  edx = R32((uint32_t)(edi + 0x3cu));
/* 95eb29: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 95eb2c: xor edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 95eb2e: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 95eb32: shr edx, 0xb */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 11;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 95eb35: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 95eb38: xor ecx, ecx */
  ecx = 0;
/* 95eb3a: cmp ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95eb3c: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 95eb40: mov ebx, dword ptr [eax + edx*4 + 4] */
  ebx = R32((uint32_t)(eax + edx*4 + 0x4u));
/* 95eb44: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 95eb47: lea eax, [eax + edx*4 + 4] */
  eax = (uint32_t)(eax + edx*4 + 0x4u);
/* 95eb4b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95eb4d: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 95eb51: je 0x95eb9d */
  if (zf) goto L_95eb9d;
L_95eb53: /* 95eb53: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95eb55: jne 0x95eb9d */
  if (!zf) goto L_95eb9d;
L_95eb57: /* 95eb57: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 95eb59: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 95eb5c: mov dword ptr [eax + ebp*4 + 4], esi */
  W32((uint32_t)(eax + ebp*4 + 0x4u), esi);
/* 95eb60: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 95eb64: dec dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(eax), r);
  }
/* 95eb66: cmp dword ptr [0xcf8438], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95eb6d: jl 0x95ead8 */
  if ((sf != of)) goto L_95ead8;
L_95eb73: /* 95eb73: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 95eb76: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 95eb7a: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 95eb7d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95eb7e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95eb7f: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 95eb85: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95eb86: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95eb87: push 0xafaab0 */
  { uint32_t v = 0xafaab0u; esp -= 4; W32(esp, v); }
/* 95eb8c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95eb8d: call 0x953470 */
  esp -= 4; W32(esp, 0x95eb92u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95eb92: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95eb95: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95eb96: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95eb97: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 95eb98: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95eb99: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95eb9c: ret  */
  esp += 4; SPILL(); return;
L_95eb9d: /* 95eb9d: mov eax, dword ptr [0xcf8488] */
  eax = R32((uint32_t)(0xcf8488u));
/* 95eba2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95eba4: jne 0x95ebee */
  if (!zf) goto L_95ebee;
L_95eba6: /* 95eba6: mov eax, dword ptr [0xcf8454] */
  eax = R32((uint32_t)(0xcf8454u));
/* 95ebab: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95ebad: jne 0x95ebee */
  if (!zf) goto L_95ebee;
L_95ebaf: /* 95ebaf: push 0xafaa88 */
  { uint32_t v = 0xafaa88u; esp -= 4; W32(esp, v); }
/* 95ebb4: call 0x96f160 */
  esp -= 4; W32(esp, 0x95ebb9u); SPILL(); f_96f160(); if (g_unwind) return; RELOAD();
/* 95ebb9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95ebbc: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95ebbe: je 0x95ebc5 */
  if (zf) goto L_95ebc5;
L_95ebc0: /* 95ebc0: mov eax, dword ptr [ebx + 0x38] */
  eax = R32((uint32_t)(ebx + 0x38u));
/* 95ebc3: jmp 0x95ebc8 */
  goto L_95ebc8;
L_95ebc5: /* 95ebc5: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_95ebc8: /* 95ebc8: mov edx, dword ptr [edi + 0x38] */
  edx = R32((uint32_t)(edi + 0x38u));
/* 95ebcb: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 95ebd1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95ebd2: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 95ebd5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95ebd6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95ebd7: push 0xafaa18 */
  { uint32_t v = 0xafaa18u; esp -= 4; W32(esp, v); }
/* 95ebdc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95ebdd: call 0x953470 */
  esp -= 4; W32(esp, 0x95ebe2u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95ebe2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95ebe3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95ebe4: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 95ebe6: call 0x96e130 */
  esp -= 4; W32(esp, 0x95ebebu); SPILL(); f_96e130(); if (g_unwind) return; RELOAD();
/* 95ebeb: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95ebee: /* 95ebee: mov edx, dword ptr [edi + 0x28] */
  edx = R32((uint32_t)(edi + 0x28u));
/* 95ebf1: mov dword ptr [edx + ebp*4 + 4], 1 */
  W32((uint32_t)(edx + ebp*4 + 0x4u), 0x1u);
/* 95ebf9: mov ecx, dword ptr [edi + 0x3c] */
  ecx = R32((uint32_t)(edi + 0x3cu));
/* 95ebfc: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 95ebff: or ecx, 0x100000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100000u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 95ec05: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95ec07: mov dword ptr [edi + 0x3c], ecx */
  W32((uint32_t)(edi + 0x3cu), ecx);
/* 95ec0a: jne 0x95ec15 */
  if (!zf) goto L_95ec15;
L_95ec0c: /* 95ec0c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95ec0d: call 0x970e90 */
  esp -= 4; W32(esp, 0x95ec12u); SPILL(); f_970e90(); if (g_unwind) return; RELOAD();
/* 95ec12: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95ec15: /* 95ec15: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 95ec19: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 95ec1d: mov edx, dword ptr [0xcf8c10] */
  edx = R32((uint32_t)(0xcf8c10u));
/* 95ec23: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95ec24: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95ec25: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95ec26: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95ec27: call 0x953f40 */
  esp -= 4; W32(esp, 0x95ec2cu); SPILL(); f_953f40(); if (g_unwind) return; RELOAD();
/* 95ec2c: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 95ec30: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 95ec32: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95ec35: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 95ec36: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 95ec38: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 95ec3b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95ec3d: jne 0x95ec48 */
  if (!zf) goto L_95ec48;
L_95ec3f: /* 95ec3f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95ec40: call 0x970e90 */
  esp -= 4; W32(esp, 0x95ec45u); SPILL(); f_970e90(); if (g_unwind) return; RELOAD();
/* 95ec45: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95ec48: /* 95ec48: cmp ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95ec4b: je 0x95ecd9 */
  if (zf) goto L_95ecd9;
L_95ec51: /* 95ec51: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 95ec55: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 95ec58: mov dword ptr [eax + ecx*4 + 4], 1 */
  W32((uint32_t)(eax + ecx*4 + 0x4u), 0x1u);
/* 95ec60: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 95ec63: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 95ec66: or ecx, 0x100000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100000u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 95ec6c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95ec6e: mov dword ptr [esi + 0x3c], ecx */
  W32((uint32_t)(esi + 0x3cu), ecx);
/* 95ec71: jne 0x95ec7c */
  if (!zf) goto L_95ec7c;
L_95ec73: /* 95ec73: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95ec74: call 0x970e90 */
  esp -= 4; W32(esp, 0x95ec79u); SPILL(); f_970e90(); if (g_unwind) return; RELOAD();
/* 95ec79: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95ec7c: /* 95ec7c: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95ec7e: je 0x95ecd9 */
  if (zf) goto L_95ecd9;
L_95ec80: /* 95ec80: mov edx, dword ptr [ebx + 0x28] */
  edx = R32((uint32_t)(ebx + 0x28u));
/* 95ec83: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95ec84: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95ec85: call 0x94ef00 */
  esp -= 4; W32(esp, 0x95ec8au); SPILL(); f_94ef00(); if (g_unwind) return; RELOAD();
/* 95ec8a: mov ecx, dword ptr [ebx + 0x28] */
  ecx = R32((uint32_t)(ebx + 0x28u));
/* 95ec8d: mov dword ptr [ecx + eax*4 + 4], 1 */
  W32((uint32_t)(ecx + eax*4 + 0x4u), 0x1u);
/* 95ec95: mov ecx, dword ptr [ebx + 0x3c] */
  ecx = R32((uint32_t)(ebx + 0x3cu));
/* 95ec98: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 95ec9b: or ecx, 0x100000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100000u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 95eca1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95eca4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95eca6: mov dword ptr [ebx + 0x3c], ecx */
  W32((uint32_t)(ebx + 0x3cu), ecx);
/* 95eca9: jne 0x95ecb4 */
  if (!zf) goto L_95ecb4;
L_95ecab: /* 95ecab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95ecac: call 0x970e90 */
  esp -= 4; W32(esp, 0x95ecb1u); SPILL(); f_970e90(); if (g_unwind) return; RELOAD();
/* 95ecb1: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95ecb4: /* 95ecb4: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 95ecb8: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 95ecbc: mov ecx, dword ptr [0xcf8c10] */
  ecx = R32((uint32_t)(0xcf8c10u));
/* 95ecc2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95ecc3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95ecc4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95ecc5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95ecc6: call 0x953f40 */
  esp -= 4; W32(esp, 0x95eccbu); SPILL(); f_953f40(); if (g_unwind) return; RELOAD();
/* 95eccb: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 95eccf: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 95ecd1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95ecd4: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 95ecd7: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_95ecd9: /* 95ecd9: cmp dword ptr [0xcf8438], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95ece0: jl 0x95ead8 */
  if ((sf != of)) goto L_95ead8;
L_95ece6: /* 95ece6: cmp ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95ece9: jne 0x95ecf2 */
  if (!zf) goto L_95ecf2;
L_95eceb: /* 95eceb: mov ebx, 0xfffffffe */
  ebx = 0xfffffffeu;
/* 95ecf0: jmp 0x95ecfe */
  goto L_95ecfe;
L_95ecf2: /* 95ecf2: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95ecf4: je 0x95ecfb */
  if (zf) goto L_95ecfb;
L_95ecf6: /* 95ecf6: mov ebx, dword ptr [ebx + 0x38] */
  ebx = R32((uint32_t)(ebx + 0x38u));
/* 95ecf9: jmp 0x95ecfe */
  goto L_95ecfe;
L_95ecfb: /* 95ecfb: or ebx, 0xffffffff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
L_95ecfe: /* 95ecfe: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 95ed02: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 95ed06: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 95ed0a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95ed0b: mov edx, dword ptr [esi + 0x38] */
  edx = R32((uint32_t)(esi + 0x38u));
/* 95ed0e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95ed0f: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 95ed12: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95ed13: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95ed14: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 95ed1a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95ed1b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95ed1c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95ed1d: push 0xafa9b0 */
  { uint32_t v = 0xafa9b0u; esp -= 4; W32(esp, v); }
/* 95ed22: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95ed23: call 0x953470 */
  esp -= 4; W32(esp, 0x95ed28u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95ed28: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95ed2b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95ed2c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95ed2d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 95ed2e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95ed2f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95ed32: ret  */
  esp += 4; SPILL(); return;
}

void f_95ed40(void) {
  LOAD_REGS();
L_95ed40: /* 95ed40: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 95ed43: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 95ed48: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95ed49: mov ebx, dword ptr [0xcf85cc] */
  ebx = R32((uint32_t)(0xcf85ccu));
/* 95ed4f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95ed50: xor ebp, ebp */
  ebp = 0;
/* 95ed52: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95ed55: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95ed56: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95ed57: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 95ed5b: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 95ed5f: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 95ed63: jl 0x95ed78 */
  if ((sf != of)) goto L_95ed78;
L_95ed65: /* 95ed65: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 95ed6a: push 0xafac84 */
  { uint32_t v = 0xafac84u; esp -= 4; W32(esp, v); }
/* 95ed6f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95ed70: call 0x953470 */
  esp -= 4; W32(esp, 0x95ed75u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95ed75: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95ed78: /* 95ed78: mov edx, dword ptr [0xcf8b58] */
  edx = R32((uint32_t)(0xcf8b58u));
/* 95ed7e: cmp edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95ed80: je 0x95edae */
  if (zf) goto L_95edae;
L_95ed82: /* 95ed82: mov eax, dword ptr [edx + 0x1c] */
  eax = R32((uint32_t)(edx + 0x1cu));
/* 95ed85: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95ed87: je 0x95edae */
  if (zf) goto L_95edae;
L_95ed89: /* 95ed89: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 95ed8d: mov esi, dword ptr [edx + 0x28] */
  esi = R32((uint32_t)(edx + 0x28u));
/* 95ed90: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 95ed92: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 95ed93: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 95ed97: lea ecx, [ebx + 1] */
  ecx = (uint32_t)(ebx + 0x1u);
/* 95ed9a: mov dword ptr [esi + eax*4 + 4], ecx */
  W32((uint32_t)(esi + eax*4 + 0x4u), ecx);
/* 95ed9e: xor eax, eax */
  eax = 0;
/* 95eda0: mov ecx, ebx */
  ecx = ebx;
/* 95eda2: lea edi, [esi + 8] */
  edi = (uint32_t)(esi + 0x8u);
/* 95eda5: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 95eda7: mov edx, dword ptr [edx + 0x1c] */
  edx = R32((uint32_t)(edx + 0x1cu));
/* 95edaa: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95edac: jne 0x95ed82 */
  if (!zf) goto L_95ed82;
L_95edae: /* 95edae: mov ecx, dword ptr [0xcf85cc] */
  ecx = R32((uint32_t)(0xcf85ccu));
/* 95edb4: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 95edb5: imul ecx, dword ptr [esp + 0x14] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x14u)));
  ecx = (uint32_t)r;
  }
/* 95edba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95edbb: call 0x957bd0 */
  esp -= 4; W32(esp, 0x95edc0u); SPILL(); f_957bd0(); if (g_unwind) return; RELOAD();
/* 95edc0: mov edx, dword ptr [0xcf8c10] */
  edx = R32((uint32_t)(0xcf8c10u));
/* 95edc6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95edc7: call 0x94f340 */
  esp -= 4; W32(esp, 0x95edccu); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 95edcc: mov edi, dword ptr [0xcf8b58] */
  edi = R32((uint32_t)(0xcf8b58u));
/* 95edd2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95edd5: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95edd7: mov ebx, eax */
  ebx = eax;
/* 95edd9: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 95eddd: je 0x95ee15 */
  if (zf) goto L_95ee15;
L_95eddf: /* 95eddf: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
L_95ede4: /* 95ede4: mov ecx, dword ptr [edi + 0x1c] */
  ecx = R32((uint32_t)(edi + 0x1cu));
/* 95ede7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95ede9: je 0x95ee15 */
  if (zf) goto L_95ee15;
L_95edeb: /* 95edeb: mov esi, 1 */
  esi = 0x1u;
/* 95edf0: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95edf2: jle 0x95ee0e */
  if ((zf || sf != of)) goto L_95ee0e;
L_95edf4: /* 95edf4: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 95edf8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95edf9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95edfa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95edfb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95edfc: call 0x95e9c0 */
  esp -= 4; W32(esp, 0x95ee01u); SPILL(); f_95e9c0(); if (g_unwind) return; RELOAD();
/* 95ee01: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 95ee06: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95ee09: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 95ee0a: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95ee0c: jl 0x95edf4 */
  if ((sf != of)) goto L_95edf4;
L_95ee0e: /* 95ee0e: mov edi, dword ptr [edi + 0x1c] */
  edi = R32((uint32_t)(edi + 0x1cu));
/* 95ee11: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95ee13: jne 0x95ede4 */
  if (!zf) goto L_95ede4;
L_95ee15: /* 95ee15: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 95ee19: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95ee1b: je 0x95eec4 */
  if (zf) goto L_95eec4;
L_95ee21: /* 95ee21: mov edi, dword ptr [0xcf8b58] */
  edi = R32((uint32_t)(0xcf8b58u));
/* 95ee27: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95ee29: je 0x95ee8c */
  if (zf) goto L_95ee8c;
L_95ee2b: /* 95ee2b: nop  */
/* 95ee2c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_95ee30: /* 95ee30: mov eax, dword ptr [edi + 0x1c] */
  eax = R32((uint32_t)(edi + 0x1cu));
/* 95ee33: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95ee35: je 0x95ee8c */
  if (zf) goto L_95ee8c;
L_95ee37: /* 95ee37: test dword ptr [edi + 0x3c], 0x100000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x3cu))); uint32_t b = (uint32_t)(0x100000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95ee3e: je 0x95ee85 */
  if (zf) goto L_95ee85;
L_95ee40: /* 95ee40: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 95ee43: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95ee45: je 0x95ee85 */
  if (zf) goto L_95ee85;
L_95ee47: /* 95ee47: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 95ee4a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95ee4b: xor esi, esi */
  esi = 0;
/* 95ee4d: call 0x94f340 */
  esp -= 4; W32(esp, 0x95ee52u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 95ee52: mov ebp, eax */
  ebp = eax;
/* 95ee54: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95ee57: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 95ee59: jle 0x95ee85 */
  if ((zf || sf != of)) goto L_95ee85;
L_95ee5b: /* 95ee5b: nop  */
/* 95ee5c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_95ee60: /* 95ee60: cmp ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95ee63: jne 0x95ee79 */
  if (!zf) goto L_95ee79;
L_95ee65: /* 95ee65: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 95ee69: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 95ee6d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95ee6e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95ee6f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95ee70: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95ee71: call 0x957660 */
  esp -= 4; W32(esp, 0x95ee76u); SPILL(); f_957660(); if (g_unwind) return; RELOAD();
/* 95ee76: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95ee79: /* 95ee79: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 95ee7c: mov ebx, dword ptr [eax + esi*4 + 8] */
  ebx = R32((uint32_t)(eax + esi*4 + 0x8u));
/* 95ee80: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 95ee81: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95ee83: jl 0x95ee60 */
  if ((sf != of)) goto L_95ee60;
L_95ee85: /* 95ee85: mov edi, dword ptr [edi + 0x1c] */
  edi = R32((uint32_t)(edi + 0x1cu));
/* 95ee88: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95ee8a: jne 0x95ee30 */
  if (!zf) goto L_95ee30;
L_95ee8c: /* 95ee8c: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 95ee90: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95ee92: je 0x95eec0 */
  if (zf) goto L_95eec0;
L_95ee94: /* 95ee94: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 95ee9a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95ee9b: push 0xafac38 */
  { uint32_t v = 0xafac38u; esp -= 4; W32(esp, v); }
/* 95eea0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95eea1: call 0x953470 */
  esp -= 4; W32(esp, 0x95eea6u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95eea6: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 95eeac: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95eead: call 0x9580c0 */
  esp -= 4; W32(esp, 0x95eeb2u); SPILL(); f_9580c0(); if (g_unwind) return; RELOAD();
/* 95eeb2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95eeb4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95eeb6: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 95eeb8: call 0x9535b0 */
  esp -= 4; W32(esp, 0x95eebdu); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 95eebd: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95eec0: /* 95eec0: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
L_95eec4: /* 95eec4: cmp dword ptr [0xcf8438], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95eecb: jl 0x95ef1f */
  if ((sf != of)) goto L_95ef1f;
L_95eecd: /* 95eecd: mov edx, dword ptr [0xcf8c10] */
  edx = R32((uint32_t)(0xcf8c10u));
/* 95eed3: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95eed5: je 0x95eefe */
  if (zf) goto L_95eefe;
L_95eed7: /* 95eed7: mov esi, dword ptr [edx + 4] */
  esi = R32((uint32_t)(edx + 0x4u));
/* 95eeda: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95eedb: call 0x94f340 */
  esp -= 4; W32(esp, 0x95eee0u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 95eee0: mov edx, dword ptr [0xcf8c10] */
  edx = R32((uint32_t)(0xcf8c10u));
/* 95eee6: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95eee9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 95eeeb: jle 0x95eefe */
  if ((zf || sf != of)) goto L_95eefe;
L_95eeed: /* 95eeed: lea ecx, [edx + 4] */
  ecx = (uint32_t)(edx + 0x4u);
L_95eef0: /* 95eef0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95eef2: jne 0x95eef5 */
  if (!zf) goto L_95eef5;
L_95eef4: /* 95eef4: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
L_95eef5: /* 95eef5: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 95eef8: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 95eefb: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 95eefc: jne 0x95eef0 */
  if (!zf) goto L_95eef0;
L_95eefe: /* 95eefe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95eeff: call 0x94f340 */
  esp -= 4; W32(esp, 0x95ef04u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 95ef04: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 95ef0a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95ef0b: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 95ef0f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95ef10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95ef11: push 0xafabe8 */
  { uint32_t v = 0xafabe8u; esp -= 4; W32(esp, v); }
/* 95ef16: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95ef17: call 0x953470 */
  esp -= 4; W32(esp, 0x95ef1cu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95ef1c: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95ef1f: /* 95ef1f: push 0xcf8c10 */
  { uint32_t v = 0xcf8c10u; esp -= 4; W32(esp, v); }
/* 95ef24: call 0x94ee00 */
  esp -= 4; W32(esp, 0x95ef29u); SPILL(); f_94ee00(); if (g_unwind) return; RELOAD();
/* 95ef29: mov eax, dword ptr [0xcf8488] */
  eax = R32((uint32_t)(0xcf8488u));
/* 95ef2e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95ef31: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95ef33: jne 0x95ef5e */
  if (!zf) goto L_95ef5e;
L_95ef35: /* 95ef35: mov eax, dword ptr [0xcf8454] */
  eax = R32((uint32_t)(0xcf8454u));
/* 95ef3a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95ef3c: jne 0x95ef5e */
  if (!zf) goto L_95ef5e;
L_95ef3e: /* 95ef3e: mov eax, dword ptr [0xcf841c] */
  eax = R32((uint32_t)(0xcf841cu));
/* 95ef43: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95ef45: je 0x95efa5 */
  if (zf) goto L_95efa5;
L_95ef47: /* 95ef47: mov edx, dword ptr [0xcf8b58] */
  edx = R32((uint32_t)(0xcf8b58u));
/* 95ef4d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95ef4e: call 0x955790 */
  esp -= 4; W32(esp, 0x95ef53u); SPILL(); f_955790(); if (g_unwind) return; RELOAD();
/* 95ef53: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95ef56: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95ef57: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95ef58: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 95ef59: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95ef5a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95ef5d: ret  */
  esp += 4; SPILL(); return;
L_95ef5e: /* 95ef5e: cmp dword ptr [0xcf8438], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95ef65: jl 0x95ef79 */
  if ((sf != of)) goto L_95ef79;
L_95ef67: /* 95ef67: mov eax, dword ptr [0xcf8b58] */
  eax = R32((uint32_t)(0xcf8b58u));
/* 95ef6c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 95ef6e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95ef70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95ef71: call 0x953810 */
  esp -= 4; W32(esp, 0x95ef76u); SPILL(); f_953810(); if (g_unwind) return; RELOAD();
/* 95ef76: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95ef79: /* 95ef79: mov esi, dword ptr [0xcf8b58] */
  esi = R32((uint32_t)(0xcf8b58u));
/* 95ef7f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95ef81: je 0x95efa5 */
  if (zf) goto L_95efa5;
L_95ef83: /* 95ef83: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 95ef86: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95ef88: je 0x95efa5 */
  if (zf) goto L_95efa5;
L_95ef8a: /* 95ef8a: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 95ef8d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95ef8f: je 0x95ef9e */
  if (zf) goto L_95ef9e;
L_95ef91: /* 95ef91: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 95ef93: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 95ef95: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95ef96: call 0x95df60 */
  esp -= 4; W32(esp, 0x95ef9bu); SPILL(); f_95df60(); if (g_unwind) return; RELOAD();
/* 95ef9b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95ef9e: /* 95ef9e: mov esi, dword ptr [esi + 0x1c] */
  esi = R32((uint32_t)(esi + 0x1cu));
/* 95efa1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95efa3: jne 0x95ef83 */
  if (!zf) goto L_95ef83;
L_95efa5: /* 95efa5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95efa6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95efa7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 95efa8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95efa9: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95efac: ret  */
  esp += 4; SPILL(); return;
}

void f_95efb0(void) {
  LOAD_REGS();
L_95efb0: /* 95efb0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 95efb4: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 95efb8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95efb9: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 95efbd: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95efbe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95efbf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95efc0: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 95efc4: lea esi, [edx + eax*4 + 4] */
  esi = (uint32_t)(edx + eax*4 + 0x4u);
/* 95efc8: xor ecx, ecx */
  ecx = 0;
/* 95efca: lea eax, [ebx + eax*4 + 4] */
  eax = (uint32_t)(ebx + eax*4 + 0x4u);
/* 95efce: lea ebp, [edx + edi*4 + 4] */
  ebp = (uint32_t)(edx + edi*4 + 0x4u);
L_95efd2: /* 95efd2: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95efd4: je 0x95eff0 */
  if (zf) goto L_95eff0;
L_95efd6: /* 95efd6: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 95efd8: cmp edx, dword ptr [eax] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95efda: je 0x95efed */
  if (zf) goto L_95efed;
L_95efdc: /* 95efdc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_95efe0: /* 95efe0: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 95efe3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95efe5: jne 0x95f064 */
  if (!zf) goto L_95f064;
L_95efe7: /* 95efe7: cmp edx, dword ptr [eax] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95efe9: mov ecx, eax */
  ecx = eax;
/* 95efeb: jne 0x95efe0 */
  if (!zf) goto L_95efe0;
L_95efed: /* 95efed: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_95eff0: /* 95eff0: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 95eff3: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 95eff6: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95eff8: jne 0x95efd2 */
  if (!zf) goto L_95efd2;
L_95effa: /* 95effa: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95effc: jne 0x95f001 */
  if (!zf) goto L_95f001;
L_95effe: /* 95effe: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
L_95f001: /* 95f001: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 95f005: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 95f009: mov eax, ecx */
  eax = ecx;
/* 95f00b: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 95f00d: sub eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 95f010: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 95f013: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 95f015: not eax */
  eax = ~eax;
/* 95f017: xor eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 95f019: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 95f01c: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 95f01e: cmp dword ptr [0xcf8438], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95f025: jl 0x95f05a */
  if ((sf != of)) goto L_95f05a;
L_95f027: /* 95f027: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 95f029: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95f02a: mov eax, dword ptr [ecx - 4] */
  eax = R32((uint32_t)(ecx + 0xfffffffcu));
/* 95f02d: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 95f030: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 95f033: and ecx, 0xffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 95f039: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95f03a: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 95f03d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95f03e: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 95f044: and ecx, 0xffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 95f04a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95f04b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95f04c: push 0xafacb8 */
  { uint32_t v = 0xafacb8u; esp -= 4; W32(esp, v); }
/* 95f051: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95f052: call 0x953470 */
  esp -= 4; W32(esp, 0x95f057u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95f057: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95f05a: /* 95f05a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95f05b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95f05c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 95f05d: mov eax, 1 */
  eax = 0x1u;
/* 95f062: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95f063: ret  */
  esp += 4; SPILL(); return;
L_95f064: /* 95f064: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95f065: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95f066: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 95f067: xor eax, eax */
  eax = 0;
/* 95f069: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95f06a: ret  */
  esp += 4; SPILL(); return;
}

void f_95f070(void) {
  LOAD_REGS();
L_95f070: /* 95f070: mov eax, dword ptr [0xcf2f38] */
  eax = R32((uint32_t)(0xcf2f38u));
/* 95f075: mov ecx, dword ptr [eax + 0x100] */
  ecx = R32((uint32_t)(eax + 0x100u));
/* 95f07b: mov edx, dword ptr [0xcf2f30] */
  edx = R32((uint32_t)(0xcf2f30u));
/* 95f081: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 95f084: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95f085: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 95f087: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95f089: je 0x95f099 */
  if (zf) goto L_95f099;
L_95f08b: /* 95f08b: inc dword ptr [0xcf2f54] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf2f54u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0xcf2f54u), r);
  }
/* 95f091: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 95f093: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 95f095: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 95f097: jmp 0x95f0a5 */
  goto L_95f0a5;
L_95f099: /* 95f099: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 95f09b: call 0x9538c0 */
  esp -= 4; W32(esp, 0x95f0a0u); SPILL(); f_9538c0(); if (g_unwind) return; RELOAD();
/* 95f0a0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95f0a3: mov esi, eax */
  esi = eax;
L_95f0a5: /* 95f0a5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95f0a6: xor eax, eax */
  eax = 0;
/* 95f0a8: mov ecx, 0x10 */
  ecx = 0x10u;
/* 95f0ad: mov edi, esi */
  edi = esi;
/* 95f0af: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 95f0b1: mov eax, dword ptr [0xcf8b90] */
  eax = R32((uint32_t)(0xcf8b90u));
/* 95f0b6: cmp eax, dword ptr [0xcf8b64] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0xcf8b64u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95f0bc: jne 0x95f0c4 */
  if (!zf) goto L_95f0c4;
L_95f0be: /* 95f0be: mov dword ptr [0xcf8b68], esi */
  W32((uint32_t)(0xcf8b68u), esi);
L_95f0c4: /* 95f0c4: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* 95f0c7: mov edi, dword ptr [0xcf8b90] */
  edi = R32((uint32_t)(0xcf8b90u));
/* 95f0cd: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 95f0d2: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 95f0d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95f0d4: mov dword ptr [0xcf8b90], edi */
  W32((uint32_t)(0xcf8b90u), edi);
/* 95f0da: call 0x94f020 */
  esp -= 4; W32(esp, 0x95f0dfu); SPILL(); f_94f020(); if (g_unwind) return; RELOAD();
/* 95f0df: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 95f0e2: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 95f0e8: mov eax, dword ptr [0xcf841c] */
  eax = R32((uint32_t)(0xcf841cu));
/* 95f0ed: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95f0f0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95f0f2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95f0f3: je 0x95f109 */
  if (zf) goto L_95f109;
L_95f0f5: /* 95f0f5: mov eax, dword ptr [0xcf83e8] */
  eax = R32((uint32_t)(0xcf83e8u));
/* 95f0fa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95f0fc: je 0x95f109 */
  if (zf) goto L_95f109;
L_95f0fe: /* 95f0fe: mov ecx, dword ptr [0xcf83ec] */
  ecx = R32((uint32_t)(0xcf83ecu));
/* 95f104: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 95f107: jmp 0x95f112 */
  goto L_95f112;
L_95f109: /* 95f109: mov edx, dword ptr [0xcf8a14] */
  edx = R32((uint32_t)(0xcf8a14u));
/* 95f10f: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
L_95f112: /* 95f112: or dword ptr [esi + 0x3c], 0x41200 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(0x41200u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x3cu), r);
  }
/* 95f119: cmp dword ptr [0xcf8438], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95f120: jl 0x95f13a */
  if ((sf != of)) goto L_95f13a;
L_95f122: /* 95f122: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 95f125: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 95f12b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95f12c: push 0xafad00 */
  { uint32_t v = 0xafad00u; esp -= 4; W32(esp, v); }
/* 95f131: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95f132: call 0x953470 */
  esp -= 4; W32(esp, 0x95f137u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95f137: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95f13a: /* 95f13a: mov eax, esi */
  eax = esi;
/* 95f13c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95f13d: ret  */
  esp += 4; SPILL(); return;
}

void f_95f140(void) {
  LOAD_REGS();
L_95f140: /* 95f140: mov eax, dword ptr [0xcf2f38] */
  eax = R32((uint32_t)(0xcf2f38u));
/* 95f145: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* 95f148: mov edx, dword ptr [0xcf2f30] */
  edx = R32((uint32_t)(0xcf2f30u));
/* 95f14e: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 95f151: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95f152: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 95f154: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95f156: je 0x95f166 */
  if (zf) goto L_95f166;
L_95f158: /* 95f158: inc dword ptr [0xcf2f54] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf2f54u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0xcf2f54u), r);
  }
/* 95f15e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 95f160: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 95f162: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 95f164: jmp 0x95f172 */
  goto L_95f172;
L_95f166: /* 95f166: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 95f168: call 0x9538c0 */
  esp -= 4; W32(esp, 0x95f16du); SPILL(); f_9538c0(); if (g_unwind) return; RELOAD();
/* 95f16d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95f170: mov esi, eax */
  esi = eax;
L_95f172: /* 95f172: xor eax, eax */
  eax = 0;
/* 95f174: mov ecx, esi */
  ecx = esi;
/* 95f176: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 95f178: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 95f17b: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 95f17e: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 95f181: mov ecx, dword ptr [0xcf7a8c] */
  ecx = R32((uint32_t)(0xcf7a8cu));
/* 95f187: mov eax, dword ptr [0xcf8b94] */
  eax = R32((uint32_t)(0xcf8b94u));
/* 95f18c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 95f18d: cmp eax, 0xffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95f192: mov dword ptr [0xcf7a8c], ecx */
  W32((uint32_t)(0xcf7a8cu), ecx);
/* 95f198: jne 0x95f1b3 */
  if (!zf) goto L_95f1b3;
L_95f19a: /* 95f19a: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 95f1a0: push 0xffffff */
  { uint32_t v = 0xffffffu; esp -= 4; W32(esp, v); }
/* 95f1a5: push 0xafad40 */
  { uint32_t v = 0xafad40u; esp -= 4; W32(esp, v); }
/* 95f1aa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95f1ab: call 0x953470 */
  esp -= 4; W32(esp, 0x95f1b0u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95f1b0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95f1b3: /* 95f1b3: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 95f1b6: mov edx, dword ptr [0xcf8b94] */
  edx = R32((uint32_t)(0xcf8b94u));
/* 95f1bc: mov ecx, eax */
  ecx = eax;
/* 95f1be: xor ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 95f1c0: and ecx, 0xffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 95f1c6: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 95f1c8: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* 95f1cb: mov ecx, dword ptr [0xcf8b94] */
  ecx = R32((uint32_t)(0xcf8b94u));
/* 95f1d1: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 95f1d6: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 95f1d7: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95f1da: mov dword ptr [0xcf8b94], ecx */
  W32((uint32_t)(0xcf8b94u), ecx);
/* 95f1e0: jl 0x95f1ff */
  if ((sf != of)) goto L_95f1ff;
L_95f1e2: /* 95f1e2: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 95f1e5: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 95f1ea: and edx, 0xffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 95f1f0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95f1f1: push 0xafad20 */
  { uint32_t v = 0xafad20u; esp -= 4; W32(esp, v); }
/* 95f1f6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95f1f7: call 0x953470 */
  esp -= 4; W32(esp, 0x95f1fcu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95f1fc: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95f1ff: /* 95f1ff: mov eax, esi */
  eax = esi;
/* 95f201: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95f202: ret  */
  esp += 4; SPILL(); return;
}

void f_95f210(void) {
  LOAD_REGS();
L_95f210: /* 95f210: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 95f214: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95f216: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95f217: jne 0x95f220 */
  if (!zf) goto L_95f220;
L_95f219: /* 95f219: mov eax, 0xfffffffd */
  eax = 0xfffffffdu;
/* 95f21e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95f21f: ret  */
  esp += 4; SPILL(); return;
L_95f220: /* 95f220: cmp eax, dword ptr [0xcf8b3c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0xcf8b3cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95f226: jne 0x95f22f */
  if (!zf) goto L_95f22f;
L_95f228: /* 95f228: mov eax, 0xfffffffe */
  eax = 0xfffffffeu;
/* 95f22d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95f22e: ret  */
  esp += 4; SPILL(); return;
L_95f22f: /* 95f22f: mov ecx, dword ptr [0xcf85d8] */
  ecx = R32((uint32_t)(0xcf85d8u));
/* 95f235: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 95f237: jb 0x95f259 */
  if (cf) goto L_95f259;
L_95f239: /* 95f239: mov esi, dword ptr [0xcf85cc] */
  esi = R32((uint32_t)(0xcf85ccu));
/* 95f23f: mov edx, esi */
  edx = esi;
/* 95f241: imul edx, dword ptr [0xcf85d4] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(0xcf85d4u)));
  edx = (uint32_t)r;
  }
/* 95f248: lea edx, [ecx + edx*4] */
  edx = (uint32_t)(ecx + edx*4);
/* 95f24b: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 95f24d: jae 0x95f259 */
  if (!cf) goto L_95f259;
L_95f24f: /* 95f24f: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 95f251: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 95f254: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 95f255: idiv esi */
  { int32_t d = (int32_t)esi; if (!d) d = (int32_t)guest_divzero(0x95f255);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 95f257: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95f258: ret  */
  esp += 4; SPILL(); return;
L_95f259: /* 95f259: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95f25a: mov eax, dword ptr [0xcf8c14] */
  eax = R32((uint32_t)(0xcf8c14u));
/* 95f25f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95f260: call 0x94ef00 */
  esp -= 4; W32(esp, 0x95f265u); SPILL(); f_94ef00(); if (g_unwind) return; RELOAD();
/* 95f265: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95f268: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95f26b: je 0x95f275 */
  if (zf) goto L_95f275;
L_95f26d: /* 95f26d: add eax, dword ptr [0xcf85d4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0xcf85d4u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 95f273: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95f274: ret  */
  esp += 4; SPILL(); return;
L_95f275: /* 95f275: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 95f278: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95f279: ret  */
  esp += 4; SPILL(); return;
}

void f_95f280(void) {
  LOAD_REGS();
L_95f280: /* 95f280: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 95f284: mov eax, dword ptr [ecx + 0x1c] */
  eax = R32((uint32_t)(ecx + 0x1cu));
/* 95f287: mov edx, dword ptr [ecx + 0x18] */
  edx = R32((uint32_t)(ecx + 0x18u));
/* 95f28a: cmp ecx, dword ptr [0xcf8b58] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(0xcf8b58u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95f290: jne 0x95f297 */
  if (!zf) goto L_95f297;
L_95f292: /* 95f292: mov dword ptr [0xcf8b58], eax */
  W32((uint32_t)(0xcf8b58u), eax);
L_95f297: /* 95f297: cmp ecx, dword ptr [0xcf8b54] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(0xcf8b54u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95f29d: jne 0x95f2a4 */
  if (!zf) goto L_95f2a4;
L_95f29f: /* 95f29f: mov dword ptr [0xcf8b54], eax */
  W32((uint32_t)(0xcf8b54u), eax);
L_95f2a4: /* 95f2a4: cmp ecx, dword ptr [0xcf8b5c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(0xcf8b5cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95f2aa: jne 0x95f2b1 */
  if (!zf) goto L_95f2b1;
L_95f2ac: /* 95f2ac: mov dword ptr [0xcf8b5c], eax */
  W32((uint32_t)(0xcf8b5cu), eax);
L_95f2b1: /* 95f2b1: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95f2b3: je 0x95f2bd */
  if (zf) goto L_95f2bd;
L_95f2b5: /* 95f2b5: mov dword ptr [edx + 0x1c], eax */
  W32((uint32_t)(edx + 0x1cu), eax);
/* 95f2b8: mov dword ptr [eax + 0x18], edx */
  W32((uint32_t)(eax + 0x18u), edx);
/* 95f2bb: jmp 0x95f2c9 */
  goto L_95f2c9;
L_95f2bd: /* 95f2bd: mov dword ptr [0xcf8b4c], eax */
  W32((uint32_t)(0xcf8b4cu), eax);
/* 95f2c2: mov dword ptr [eax + 0x18], 0 */
  W32((uint32_t)(eax + 0x18u), 0x0u);
L_95f2c9: /* 95f2c9: mov edx, dword ptr [0xcf8b80] */
  edx = R32((uint32_t)(0xcf8b80u));
/* 95f2cf: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 95f2d4: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 95f2d5: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95f2d8: mov dword ptr [0xcf8b80], edx */
  W32((uint32_t)(0xcf8b80u), edx);
/* 95f2de: jl 0x95f2f8 */
  if ((sf != of)) goto L_95f2f8;
L_95f2e0: /* 95f2e0: mov eax, dword ptr [ecx + 0x38] */
  eax = R32((uint32_t)(ecx + 0x38u));
/* 95f2e3: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 95f2e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95f2ea: push 0xafadbc */
  { uint32_t v = 0xafadbcu; esp -= 4; W32(esp, v); }
/* 95f2ef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95f2f0: call 0x953470 */
  esp -= 4; W32(esp, 0x95f2f5u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95f2f5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95f2f8: /* 95f2f8: ret  */
  esp += 4; SPILL(); return;
}

void f_95f300(void) {
  LOAD_REGS();
L_95f300: /* 95f300: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 95f304: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 95f306: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 95f309: cmp eax, dword ptr [0xcf8b7c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0xcf8b7cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95f30f: jne 0x95f317 */
  if (!zf) goto L_95f317;
L_95f311: /* 95f311: mov dword ptr [0xcf8b7c], edx */
  W32((uint32_t)(0xcf8b7cu), edx);
L_95f317: /* 95f317: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95f319: je 0x95f322 */
  if (zf) goto L_95f322;
L_95f31b: /* 95f31b: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 95f31d: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 95f320: jmp 0x95f331 */
  goto L_95f331;
L_95f322: /* 95f322: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 95f324: mov dword ptr [0xcf8b74], ecx */
  W32((uint32_t)(0xcf8b74u), ecx);
/* 95f32a: mov dword ptr [ecx + 4], 0 */
  W32((uint32_t)(ecx + 0x4u), 0x0u);
L_95f331: /* 95f331: mov edx, dword ptr [0xcf8b84] */
  edx = R32((uint32_t)(0xcf8b84u));
/* 95f337: mov ecx, dword ptr [0xcf8438] */
  ecx = R32((uint32_t)(0xcf8438u));
/* 95f33d: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 95f33e: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95f341: mov dword ptr [0xcf8b84], edx */
  W32((uint32_t)(0xcf8b84u), edx);
/* 95f347: jl 0x95f366 */
  if ((sf != of)) goto L_95f366;
L_95f349: /* 95f349: mov eax, dword ptr [eax + 0x14] */
  eax = R32((uint32_t)(eax + 0x14u));
/* 95f34c: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 95f352: and eax, 0xffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 95f357: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95f358: push 0xafade8 */
  { uint32_t v = 0xafade8u; esp -= 4; W32(esp, v); }
/* 95f35d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95f35e: call 0x953470 */
  esp -= 4; W32(esp, 0x95f363u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95f363: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95f366: /* 95f366: ret  */
  esp += 4; SPILL(); return;
}

void f_95f370(void) {
  LOAD_REGS();
L_95f370: /* 95f370: cmp dword ptr [0xcf8438], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95f377: jl 0x95f38c */
  if ((sf != of)) goto L_95f38c;
L_95f379: /* 95f379: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 95f37e: push 0xafae50 */
  { uint32_t v = 0xafae50u; esp -= 4; W32(esp, v); }
/* 95f383: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95f384: call 0x953470 */
  esp -= 4; W32(esp, 0x95f389u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95f389: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95f38c: /* 95f38c: mov eax, dword ptr [0xcf89f0] */
  eax = R32((uint32_t)(0xcf89f0u));
/* 95f391: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95f393: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95f394: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95f395: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95f396: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95f397: je 0x95f508 */
  if (zf) goto L_95f508;
L_95f39d: /* 95f39d: mov esi, dword ptr [0xcf8b7c] */
  esi = R32((uint32_t)(0xcf8b7cu));
/* 95f3a3: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95f3a5: je 0x95f3e9 */
  if (zf) goto L_95f3e9;
L_95f3a7: /* 95f3a7: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 95f3a9: xor edx, edx */
  edx = 0;
/* 95f3ab: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95f3ad: je 0x95f3e9 */
  if (zf) goto L_95f3e9;
L_95f3af: /* 95f3af: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 95f3b2: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95f3b4: je 0x95f3d7 */
  if (zf) goto L_95f3d7;
L_95f3b6: /* 95f3b6: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 95f3b9: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 95f3bb: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95f3bd: je 0x95f3d7 */
  if (zf) goto L_95f3d7;
L_95f3bf: /* 95f3bf: nop  */
L_95f3c0: /* 95f3c0: mov edi, dword ptr [eax + 0x3c] */
  edi = R32((uint32_t)(eax + 0x3cu));
/* 95f3c3: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 95f3c6: test edi, 0x400 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95f3cc: je 0x95f3d1 */
  if (zf) goto L_95f3d1;
L_95f3ce: /* 95f3ce: mov dword ptr [ecx - 4], edx */
  W32((uint32_t)(ecx + 0xfffffffcu), edx);
L_95f3d1: /* 95f3d1: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 95f3d3: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 95f3d5: jne 0x95f3c0 */
  if (!zf) goto L_95f3c0;
L_95f3d7: /* 95f3d7: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 95f3da: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95f3db: call 0x94e9b0 */
  esp -= 4; W32(esp, 0x95f3e0u); SPILL(); f_94e9b0(); if (g_unwind) return; RELOAD();
/* 95f3e0: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 95f3e2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95f3e5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95f3e7: jne 0x95f3a7 */
  if (!zf) goto L_95f3a7;
L_95f3e9: /* 95f3e9: mov edi, dword ptr [0xcf8b58] */
  edi = R32((uint32_t)(0xcf8b58u));
/* 95f3ef: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95f3f1: je 0x95f42d */
  if (zf) goto L_95f42d;
L_95f3f3: /* 95f3f3: mov eax, dword ptr [edi + 0x1c] */
  eax = R32((uint32_t)(edi + 0x1cu));
/* 95f3f6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95f3f8: je 0x95f42d */
  if (zf) goto L_95f42d;
L_95f3fa: /* 95f3fa: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 95f3fd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95f3ff: je 0x95f426 */
  if (zf) goto L_95f426;
L_95f401: /* 95f401: lea esi, [eax + 4] */
  esi = (uint32_t)(eax + 0x4u);
/* 95f404: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 95f406: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95f408: je 0x95f426 */
  if (zf) goto L_95f426;
L_95f40a: /* 95f40a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_95f410: /* 95f410: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 95f413: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95f414: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95f415: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 95f418: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x95f41du); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 95f41d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 95f41f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95f422: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95f424: jne 0x95f410 */
  if (!zf) goto L_95f410;
L_95f426: /* 95f426: mov edi, dword ptr [edi + 0x1c] */
  edi = R32((uint32_t)(edi + 0x1cu));
/* 95f429: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95f42b: jne 0x95f3f3 */
  if (!zf) goto L_95f3f3;
L_95f42d: /* 95f42d: mov ebp, dword ptr [0xcf8b5c] */
  ebp = R32((uint32_t)(0xcf8b5cu));
/* 95f433: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95f435: je 0x95f59c */
  if (zf) goto L_95f59c;
L_95f43b: /* 95f43b: nop  */
/* 95f43c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_95f440: /* 95f440: mov eax, dword ptr [ebp + 0x3c] */
  eax = R32((uint32_t)(ebp + 0x3cu));
/* 95f443: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 95f446: je 0x95f59c */
  if (zf) goto L_95f59c;
L_95f44c: /* 95f44c: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 95f44f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95f451: je 0x95f4ec */
  if (zf) goto L_95f4ec;
L_95f457: /* 95f457: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 95f45a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95f45c: lea ebx, [eax + 4] */
  ebx = (uint32_t)(eax + 0x4u);
/* 95f45f: je 0x95f4ec */
  if (zf) goto L_95f4ec;
L_95f465: /* 95f465: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* 95f468: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 95f46b: test edx, 0x18000000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x18000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95f471: jne 0x95f4e2 */
  if (!zf) goto L_95f4e2;
L_95f473: /* 95f473: mov edi, dword ptr [esi + 0xc] */
  edi = R32((uint32_t)(esi + 0xcu));
/* 95f476: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95f478: je 0x95f493 */
  if (zf) goto L_95f493;
L_95f47a: /* 95f47a: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 95f47d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95f47f: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 95f482: je 0x95f493 */
  if (zf) goto L_95f493;
L_95f484: /* 95f484: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 95f487: test byte ptr [eax + 0x3d], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x3du))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 95f48b: je 0x95f4fc */
  if (zf) goto L_95f4fc;
L_95f48d: /* 95f48d: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 95f48f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95f491: jne 0x95f484 */
  if (!zf) goto L_95f484;
L_95f493: /* 95f493: or edx, 0x8000000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8000000u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 95f499: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95f49a: push 0xcf8c18 */
  { uint32_t v = 0xcf8c18u; esp -= 4; W32(esp, v); }
/* 95f49f: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 95f4a2: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x95f4a7u); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 95f4a7: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 95f4ac: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95f4af: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95f4b2: jl 0x95f4e2 */
  if ((sf != of)) goto L_95f4e2;
L_95f4b4: /* 95f4b4: mov edx, dword ptr [ebp + 0x38] */
  edx = R32((uint32_t)(ebp + 0x38u));
/* 95f4b7: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 95f4ba: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 95f4bd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95f4be: and eax, 0xffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 95f4c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95f4c4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95f4c5: call 0x95f210 */
  esp -= 4; W32(esp, 0x95f4cau); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 95f4ca: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 95f4d0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95f4d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95f4d4: push 0xafae18 */
  { uint32_t v = 0xafae18u; esp -= 4; W32(esp, v); }
/* 95f4d9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95f4da: call 0x953470 */
  esp -= 4; W32(esp, 0x95f4dfu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95f4df: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95f4e2: /* 95f4e2: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* 95f4e4: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95f4e6: jne 0x95f465 */
  if (!zf) goto L_95f465;
L_95f4ec: /* 95f4ec: mov ebp, dword ptr [ebp + 0x1c] */
  ebp = R32((uint32_t)(ebp + 0x1cu));
/* 95f4ef: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95f4f1: jne 0x95f440 */
  if (!zf) goto L_95f440;
L_95f4f7: /* 95f4f7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95f4f8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95f4f9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 95f4fa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95f4fb: ret  */
  esp += 4; SPILL(); return;
L_95f4fc: /* 95f4fc: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 95f4fd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95f4fe: call 0x94ea40 */
  esp -= 4; W32(esp, 0x95f503u); SPILL(); f_94ea40(); if (g_unwind) return; RELOAD();
/* 95f503: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95f506: jmp 0x95f4e2 */
  goto L_95f4e2;
L_95f508: /* 95f508: mov ebx, dword ptr [0xcf8b5c] */
  ebx = R32((uint32_t)(0xcf8b5cu));
/* 95f50e: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95f510: je 0x95f59c */
  if (zf) goto L_95f59c;
L_95f516: /* 95f516: mov eax, dword ptr [ebx + 0x3c] */
  eax = R32((uint32_t)(ebx + 0x3cu));
/* 95f519: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 95f51c: je 0x95f59c */
  if (zf) goto L_95f59c;
L_95f51e: /* 95f51e: mov eax, dword ptr [ebx + 0x20] */
  eax = R32((uint32_t)(ebx + 0x20u));
/* 95f521: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95f523: je 0x95f591 */
  if (zf) goto L_95f591;
L_95f525: /* 95f525: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 95f528: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95f52a: lea edi, [eax + 4] */
  edi = (uint32_t)(eax + 0x4u);
/* 95f52d: je 0x95f591 */
  if (zf) goto L_95f591;
L_95f52f: /* 95f52f: nop  */
L_95f530: /* 95f530: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 95f533: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 95f536: test eax, 0x18000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x18000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95f53b: jne 0x95f58b */
  if (!zf) goto L_95f58b;
L_95f53d: /* 95f53d: or eax, 0x8000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 95f542: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95f543: push 0xcf8c18 */
  { uint32_t v = 0xcf8c18u; esp -= 4; W32(esp, v); }
/* 95f548: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 95f54b: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x95f550u); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 95f550: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 95f555: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95f558: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 95f55b: jl 0x95f58b */
  if ((sf != of)) goto L_95f58b;
L_95f55d: /* 95f55d: mov eax, dword ptr [ebx + 0x38] */
  eax = R32((uint32_t)(ebx + 0x38u));
/* 95f560: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 95f563: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 95f566: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95f567: and ecx, 0xffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 95f56d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 95f56e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 95f56f: call 0x95f210 */
  esp -= 4; W32(esp, 0x95f574u); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 95f574: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 95f577: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95f578: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 95f57d: push 0xafae18 */
  { uint32_t v = 0xafae18u; esp -= 4; W32(esp, v); }
/* 95f582: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 95f583: call 0x953470 */
  esp -= 4; W32(esp, 0x95f588u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 95f588: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_95f58b: /* 95f58b: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 95f58d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95f58f: jne 0x95f530 */
  if (!zf) goto L_95f530;
L_95f591: /* 95f591: mov ebx, dword ptr [ebx + 0x1c] */
  ebx = R32((uint32_t)(ebx + 0x1cu));
/* 95f594: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 95f596: jne 0x95f516 */
  if (!zf) goto L_95f516;
L_95f59c: /* 95f59c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95f59d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95f59e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 95f59f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95f5a0: ret  */
  esp += 4; SPILL(); return;
}

void f_95f5b0(void) {
  LOAD_REGS();
L_95f5b0: /* 95f5b0: mov eax, dword ptr [0xcf81c0] */
  eax = R32((uint32_t)(0xcf81c0u));
/* 95f5b5: mov byte ptr [eax + 0xcf7ac8], 0x39 */
  W8((uint32_t)(eax + 0xcf7ac8u), 0x39u);
/* 95f5bc: mov ecx, dword ptr [0xcf81c0] */
  ecx = R32((uint32_t)(0xcf81c0u));
/* 95f5c2: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 95f5c5: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 95f5c6: mov dword ptr [0xcf81c0], ecx */
  W32((uint32_t)(0xcf81c0u), ecx);
/* 95f5cc: mov dword ptr [0xcf7c70], 0xafb11c */
  W32((uint32_t)(0xcf7c70u), 0xafb11cu);
/* 95f5d6: mov word ptr [0xcf7f06], ax */
  W16((uint32_t)(0xcf7f06u), (eax & 0xffffu));
/* 95f5dc: mov byte ptr [0xcf8051], 0 */
  W8((uint32_t)(0xcf8051u), 0x0u);
/* 95f5e3: mov byte ptr [ecx + 0xcf7ac8], 0x7d */
  W8((uint32_t)(ecx + 0xcf7ac8u), 0x7du);
/* 95f5ea: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 95f5f0: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 95f5f1: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 95f5f7: mov dword ptr [0xcf7d80], 0 */
  W32((uint32_t)(0xcf7d80u), 0x0u);
/* 95f601: mov word ptr [0xcf7f8e], ax */
  W16((uint32_t)(0xcf7f8eu), (eax & 0xffffu));
/* 95f607: mov cl, 1 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 95f609: mov byte ptr [0xcf8095], cl */
  W8((uint32_t)(0xcf8095u), (ecx & 0xffu));
/* 95f60f: mov byte ptr [edx + 0xcf7ac8], 0x7e */
  W8((uint32_t)(edx + 0xcf7ac8u), 0x7eu);
/* 95f616: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 95f61c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 95f61d: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 95f623: mov dword ptr [0xcf7d84], 0xafb0e8 */
  W32((uint32_t)(0xcf7d84u), 0xafb0e8u);
/* 95f62d: mov word ptr [0xcf7f90], 0x7d */
  W16((uint32_t)(0xcf7f90u), 0x7du);
/* 95f636: mov byte ptr [0xcf8096], 6 */
  W8((uint32_t)(0xcf8096u), 0x6u);
/* 95f63d: mov byte ptr [edx + 0xcf7ac8], 0x7f */
  W8((uint32_t)(edx + 0xcf7ac8u), 0x7fu);
/* 95f644: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 95f64a: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 95f64b: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 95f651: mov dword ptr [0xcf7d88], 0xafb0bc */
  W32((uint32_t)(0xcf7d88u), 0xafb0bcu);
/* 95f65b: mov word ptr [0xcf7f92], ax */
  W16((uint32_t)(0xcf7f92u), (eax & 0xffffu));
/* 95f661: mov byte ptr [0xcf8097], 7 */
  W8((uint32_t)(0xcf8097u), 0x7u);
/* 95f668: mov byte ptr [edx + 0xcf7ac8], 0xb6 */
  W8((uint32_t)(edx + 0xcf7ac8u), 0xb6u);
/* 95f66f: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 95f675: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 95f676: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 95f67c: mov dword ptr [0xcf7e64], 0xafb08c */
  W32((uint32_t)(0xcf7e64u), 0xafb08cu);
/* 95f686: mov word ptr [0xcf8000], ax */
  W16((uint32_t)(0xcf8000u), (eax & 0xffffu));
/* 95f68c: mov byte ptr [0xcf80ce], 7 */
  W8((uint32_t)(0xcf80ceu), 0x7u);
/* 95f693: mov byte ptr [edx + 0xcf7ac8], 0xb7 */
  W8((uint32_t)(edx + 0xcf7ac8u), 0xb7u);
/* 95f69a: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 95f6a0: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 95f6a1: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 95f6a7: mov dword ptr [0xcf7e68], 0xafb05c */
  W32((uint32_t)(0xcf7e68u), 0xafb05cu);
/* 95f6b1: mov word ptr [0xcf8002], ax */
  W16((uint32_t)(0xcf8002u), (eax & 0xffffu));
/* 95f6b7: mov byte ptr [0xcf80cf], 8 */
  W8((uint32_t)(0xcf80cfu), 0x8u);
/* 95f6be: mov byte ptr [edx + 0xcf7ac8], 0x73 */
  W8((uint32_t)(edx + 0xcf7ac8u), 0x73u);
/* 95f6c5: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 95f6cb: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 95f6cc: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 95f6d2: mov dword ptr [0xcf81c4], edx */
  W32((uint32_t)(0xcf81c4u), edx);
/* 95f6d8: mov dword ptr [0xcf7d58], 0xafb030 */
  W32((uint32_t)(0xcf7d58u), 0xafb030u);
/* 95f6e2: mov word ptr [0xcf7f7a], ax */
  W16((uint32_t)(0xcf7f7au), (eax & 0xffffu));
/* 95f6e8: mov byte ptr [0xcf808b], 8 */
  W8((uint32_t)(0xcf808bu), 0x8u);
/* 95f6ef: mov byte ptr [edx + 0xcf7ac8], 0x3a */
  W8((uint32_t)(edx + 0xcf7ac8u), 0x3au);
/* 95f6f6: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 95f6fc: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 95f6fd: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 95f703: mov dword ptr [0xcf7c74], 0xafb01c */
  W32((uint32_t)(0xcf7c74u), 0xafb01cu);
/* 95f70d: mov word ptr [0xcf7f08], ax */
  W16((uint32_t)(0xcf7f08u), (eax & 0xffffu));
/* 95f713: mov byte ptr [0xcf8052], 0 */
  W8((uint32_t)(0xcf8052u), 0x0u);
/* 95f71a: mov byte ptr [edx + 0xcf7ac8], 0x21 */
  W8((uint32_t)(edx + 0xcf7ac8u), 0x21u);
/* 95f721: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 95f727: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 95f728: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 95f72e: mov dword ptr [0xcf7c10], 0xafaffc */
  W32((uint32_t)(0xcf7c10u), 0xafaffcu);
/* 95f738: mov word ptr [0xcf7ed6], ax */
  W16((uint32_t)(0xcf7ed6u), (eax & 0xffffu));
/* 95f73e: mov byte ptr [0xcf8039], cl */
  W8((uint32_t)(0xcf8039u), (ecx & 0xffu));
/* 95f744: mov byte ptr [edx + 0xcf7ac8], 0x17 */
  W8((uint32_t)(edx + 0xcf7ac8u), 0x17u);
/* 95f74b: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 95f751: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 95f752: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 95f758: mov dword ptr [0xcf7be8], 0xafafdc */
  W32((uint32_t)(0xcf7be8u), 0xafafdcu);
/* 95f762: mov word ptr [0xcf7ec2], ax */
  W16((uint32_t)(0xcf7ec2u), (eax & 0xffffu));
/* 95f768: mov byte ptr [0xcf802f], cl */
  W8((uint32_t)(0xcf802fu), (ecx & 0xffu));
/* 95f76e: mov byte ptr [edx + 0xcf7ac8], 0x4f */
  W8((uint32_t)(edx + 0xcf7ac8u), 0x4fu);
/* 95f775: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 95f77b: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 95f77c: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 95f782: mov dword ptr [0xcf7cc8], 0xafafcc */
  W32((uint32_t)(0xcf7cc8u), 0xafafccu);
/* 95f78c: mov word ptr [0xcf7f32], ax */
  W16((uint32_t)(0xcf7f32u), (eax & 0xffffu));
/* 95f792: mov byte ptr [0xcf8067], cl */
  W8((uint32_t)(0xcf8067u), (ecx & 0xffu));
/* 95f798: mov byte ptr [edx + 0xcf7ac8], 0x1e */
  W8((uint32_t)(edx + 0xcf7ac8u), 0x1eu);
/* 95f79f: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 95f7a5: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 95f7a6: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 95f7ac: mov dword ptr [0xcf7c04], 0xafafa0 */
  W32((uint32_t)(0xcf7c04u), 0xafafa0u);
/* 95f7b6: mov word ptr [0xcf7ed0], ax */
  W16((uint32_t)(0xcf7ed0u), (eax & 0xffffu));
/* 95f7bc: mov byte ptr [0xcf8036], cl */
  W8((uint32_t)(0xcf8036u), (ecx & 0xffu));
/* 95f7c2: mov byte ptr [edx + 0xcf7ac8], 0x20 */
  W8((uint32_t)(edx + 0xcf7ac8u), 0x20u);
/* 95f7c9: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 95f7cf: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 95f7d0: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 95f7d6: mov dword ptr [0xcf7c0c], 0xafaf7c */
  W32((uint32_t)(0xcf7c0cu), 0xafaf7cu);
/* 95f7e0: mov word ptr [0xcf7ed4], ax */
  W16((uint32_t)(0xcf7ed4u), (eax & 0xffffu));
/* 95f7e6: mov byte ptr [0xcf8038], cl */
  W8((uint32_t)(0xcf8038u), (ecx & 0xffu));
/* 95f7ec: mov byte ptr [edx + 0xcf7ac8], 0x75 */
  W8((uint32_t)(edx + 0xcf7ac8u), 0x75u);
/* 95f7f3: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 95f7f9: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 95f7fa: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 95f800: mov dword ptr [0xcf7d60], 0xafaf40 */
  W32((uint32_t)(0xcf7d60u), 0xafaf40u);
/* 95f80a: mov word ptr [0xcf7f7e], ax */
  W16((uint32_t)(0xcf7f7eu), (eax & 0xffffu));
/* 95f810: mov byte ptr [0xcf808d], cl */
  W8((uint32_t)(0xcf808du), (ecx & 0xffu));
/* 95f816: mov byte ptr [edx + 0xcf7ac8], 0x77 */
  W8((uint32_t)(edx + 0xcf7ac8u), 0x77u);
/* 95f81d: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 95f823: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 95f824: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 95f82a: mov dword ptr [0xcf7d68], 0xafaf10 */
  W32((uint32_t)(0xcf7d68u), 0xafaf10u);
/* 95f834: mov word ptr [0xcf7f82], ax */
  W16((uint32_t)(0xcf7f82u), (eax & 0xffffu));
/* 95f83a: mov byte ptr [0xcf808f], cl */
  W8((uint32_t)(0xcf808fu), (ecx & 0xffu));
/* 95f840: mov byte ptr [edx + 0xcf7ac8], 0xe */
  W8((uint32_t)(edx + 0xcf7ac8u), 0xeu);
/* 95f847: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 95f84d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 95f84e: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 95f854: mov dword ptr [0xcf7bc4], 0xafaee8 */
  W32((uint32_t)(0xcf7bc4u), 0xafaee8u);
/* 95f85e: mov word ptr [0xcf7eb0], ax */
  W16((uint32_t)(0xcf7eb0u), (eax & 0xffffu));
/* 95f864: mov byte ptr [0xcf8026], cl */
  W8((uint32_t)(0xcf8026u), (ecx & 0xffu));
/* 95f86a: mov byte ptr [edx + 0xcf7ac8], 0x50 */
  W8((uint32_t)(edx + 0xcf7ac8u), 0x50u);
/* 95f871: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 95f877: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 95f878: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 95f87e: mov dword ptr [0xcf7ccc], 0xafaebc */
  W32((uint32_t)(0xcf7cccu), 0xafaebcu);
/* 95f888: mov word ptr [0xcf7f34], ax */
  W16((uint32_t)(0xcf7f34u), (eax & 0xffffu));
/* 95f88e: mov byte ptr [0xcf8068], cl */
  W8((uint32_t)(0xcf8068u), (ecx & 0xffu));
/* 95f894: mov byte ptr [edx + 0xcf7ac8], 0x76 */
  W8((uint32_t)(edx + 0xcf7ac8u), 0x76u);
/* 95f89b: inc dword ptr [0xcf81c0] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf81c0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0xcf81c0u), r);
  }
/* 95f8a1: mov dword ptr [0xcf7d64], 0xafae9c */
  W32((uint32_t)(0xcf7d64u), 0xafae9cu);
/* 95f8ab: mov word ptr [0xcf7f80], ax */
  W16((uint32_t)(0xcf7f80u), (eax & 0xffffu));
/* 95f8b1: mov byte ptr [0xcf808e], cl */
  W8((uint32_t)(0xcf808eu), (ecx & 0xffu));
/* 95f8b7: ret  */
  esp += 4; SPILL(); return;
}

void f_95f8c0(void) {
  LOAD_REGS();
L_95f8c0: /* 95f8c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95f8c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95f8c2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 95f8c3: mov eax, dword ptr [0xcf81c0] */
  eax = R32((uint32_t)(0xcf81c0u));
/* 95f8c8: mov byte ptr [eax + 0xcf7ac8], 0x38 */
  W8((uint32_t)(eax + 0xcf7ac8u), 0x38u);
/* 95f8cf: mov ecx, dword ptr [0xcf81c0] */
  ecx = R32((uint32_t)(0xcf81c0u));
/* 95f8d5: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 95f8d6: mov dword ptr [0xcf81c0], ecx */
  W32((uint32_t)(0xcf81c0u), ecx);
/* 95f8dc: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 95f8df: mov dword ptr [0xcf7c6c], 0xafb400 */
  W32((uint32_t)(0xcf7c6cu), 0xafb400u);
/* 95f8e9: mov word ptr [0xcf7f04], ax */
  W16((uint32_t)(0xcf7f04u), (eax & 0xffffu));
/* 95f8ef: mov byte ptr [0xcf8050], 0 */
  W8((uint32_t)(0xcf8050u), 0x0u);
/* 95f8f6: mov byte ptr [ecx + 0xcf7ac8], 0xbb */
  W8((uint32_t)(ecx + 0xcf7ac8u), 0xbbu);
/* 95f8fd: mov ecx, dword ptr [0xcf81c0] */
  ecx = R32((uint32_t)(0xcf81c0u));
/* 95f903: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 95f904: mov dword ptr [0xcf81c0], ecx */
  W32((uint32_t)(0xcf81c0u), ecx);
/* 95f90a: mov dword ptr [0xcf7e78], 0xafb3e0 */
  W32((uint32_t)(0xcf7e78u), 0xafb3e0u);
/* 95f914: mov word ptr [0xcf800a], ax */
  W16((uint32_t)(0xcf800au), (eax & 0xffffu));
/* 95f91a: mov dl, 1 */
  edx = (edx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 95f91c: mov byte ptr [0xcf80d3], dl */
  W8((uint32_t)(0xcf80d3u), (edx & 0xffu));
/* 95f922: mov byte ptr [ecx + 0xcf7ac8], 0x84 */
  W8((uint32_t)(ecx + 0xcf7ac8u), 0x84u);
/* 95f929: mov ecx, dword ptr [0xcf81c0] */
  ecx = R32((uint32_t)(0xcf81c0u));
/* 95f92f: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 95f930: mov dword ptr [0xcf81c0], ecx */
  W32((uint32_t)(0xcf81c0u), ecx);
/* 95f936: mov dword ptr [0xcf7d9c], 0xafb3c4 */
  W32((uint32_t)(0xcf7d9cu), 0xafb3c4u);
/* 95f940: mov word ptr [0xcf7f9c], ax */
  W16((uint32_t)(0xcf7f9cu), (eax & 0xffffu));
/* 95f946: mov byte ptr [0xcf809c], dl */
  W8((uint32_t)(0xcf809cu), (edx & 0xffu));
/* 95f94c: mov bl, 0x88 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x88u) & 0xffu);
/* 95f94e: mov byte ptr [ecx + 0xcf7ac8], bl */
  W8((uint32_t)(ecx + 0xcf7ac8u), (ebx & 0xffu));
/* 95f954: mov ecx, dword ptr [0xcf81c0] */
  ecx = R32((uint32_t)(0xcf81c0u));
/* 95f95a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 95f95b: mov dword ptr [0xcf81c0], ecx */
  W32((uint32_t)(0xcf81c0u), ecx);
/* 95f961: mov byte ptr [ecx + 0xcf7ac8], bl */
  W8((uint32_t)(ecx + 0xcf7ac8u), (ebx & 0xffu));
/* 95f967: mov ecx, dword ptr [0xcf81c0] */
  ecx = R32((uint32_t)(0xcf81c0u));
/* 95f96d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 95f96e: mov dword ptr [0xcf81c0], ecx */
  W32((uint32_t)(0xcf81c0u), ecx);
/* 95f974: mov dword ptr [0xcf7dac], 0xafb3a0 */
  W32((uint32_t)(0xcf7dacu), 0xafb3a0u);
/* 95f97e: mov bl, 2 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x2u) & 0xffu);
/* 95f980: mov byte ptr [0xcf80a0], bl */
  W8((uint32_t)(0xcf80a0u), (ebx & 0xffu));
/* 95f986: mov edi, 0x84 */
  edi = 0x84u;
/* 95f98b: mov word ptr [0xcf7fa4], di */
  W16((uint32_t)(0xcf7fa4u), (edi & 0xffffu));
/* 95f992: mov byte ptr [ecx + 0xcf7ac8], 0x5f */
  W8((uint32_t)(ecx + 0xcf7ac8u), 0x5fu);
/* 95f999: mov esi, dword ptr [0xcf81c0] */
  esi = R32((uint32_t)(0xcf81c0u));
/* 95f99f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 95f9a0: mov dword ptr [0xcf81c0], esi */
  W32((uint32_t)(0xcf81c0u), esi);
/* 95f9a6: mov dword ptr [0xcf7d08], 0xafb384 */
  W32((uint32_t)(0xcf7d08u), 0xafb384u);
/* 95f9b0: mov word ptr [0xcf7f52], ax */
  W16((uint32_t)(0xcf7f52u), (eax & 0xffffu));
/* 95f9b6: mov ecx, 3 */
  ecx = 0x3u;
/* 95f9bb: mov byte ptr [0xcf8077], cl */
  W8((uint32_t)(0xcf8077u), (ecx & 0xffu));
/* 95f9c1: mov byte ptr [esi + 0xcf7ac8], 0x87 */
  W8((uint32_t)(esi + 0xcf7ac8u), 0x87u);
/* 95f9c8: mov esi, dword ptr [0xcf81c0] */
  esi = R32((uint32_t)(0xcf81c0u));
/* 95f9ce: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 95f9cf: mov dword ptr [0xcf81c0], esi */
  W32((uint32_t)(0xcf81c0u), esi);
/* 95f9d5: mov dword ptr [0xcf7da8], 0xafb35c */
  W32((uint32_t)(0xcf7da8u), 0xafb35cu);
/* 95f9df: mov word ptr [0xcf7fa2], di */
  W16((uint32_t)(0xcf7fa2u), (edi & 0xffffu));
/* 95f9e6: mov byte ptr [0xcf809f], bl */
  W8((uint32_t)(0xcf809fu), (ebx & 0xffu));
/* 95f9ec: mov byte ptr [esi + 0xcf7ac8], 0x5c */
  W8((uint32_t)(esi + 0xcf7ac8u), 0x5cu);
/* 95f9f3: mov esi, dword ptr [0xcf81c0] */
  esi = R32((uint32_t)(0xcf81c0u));
/* 95f9f9: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 95f9fa: mov dword ptr [0xcf81c0], esi */
  W32((uint32_t)(0xcf81c0u), esi);
/* 95fa00: mov dword ptr [0xcf7cfc], 0xafb340 */
  W32((uint32_t)(0xcf7cfcu), 0xafb340u);
/* 95fa0a: mov word ptr [0xcf7f4c], ax */
  W16((uint32_t)(0xcf7f4cu), (eax & 0xffffu));
/* 95fa10: mov byte ptr [0xcf8074], cl */
  W8((uint32_t)(0xcf8074u), (ecx & 0xffu));
/* 95fa16: mov byte ptr [esi + 0xcf7ac8], 0x89 */
  W8((uint32_t)(esi + 0xcf7ac8u), 0x89u);
/* 95fa1d: mov esi, dword ptr [0xcf81c0] */
  esi = R32((uint32_t)(0xcf81c0u));
/* 95fa23: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 95fa24: mov dword ptr [0xcf81c0], esi */
  W32((uint32_t)(0xcf81c0u), esi);
/* 95fa2a: mov dword ptr [0xcf7db0], 0xafb318 */
  W32((uint32_t)(0xcf7db0u), 0xafb318u);
/* 95fa34: mov word ptr [0xcf7fa6], di */
  W16((uint32_t)(0xcf7fa6u), (edi & 0xffffu));
/* 95fa3b: mov byte ptr [0xcf80a1], bl */
  W8((uint32_t)(0xcf80a1u), (ebx & 0xffu));
/* 95fa41: mov byte ptr [esi + 0xcf7ac8], 0x61 */
  W8((uint32_t)(esi + 0xcf7ac8u), 0x61u);
/* 95fa48: mov esi, dword ptr [0xcf81c0] */
  esi = R32((uint32_t)(0xcf81c0u));
/* 95fa4e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 95fa4f: mov dword ptr [0xcf81c0], esi */
  W32((uint32_t)(0xcf81c0u), esi);
/* 95fa55: mov dword ptr [0xcf7d10], 0xafb2fc */
  W32((uint32_t)(0xcf7d10u), 0xafb2fcu);
/* 95fa5f: mov word ptr [0xcf7f56], ax */
  W16((uint32_t)(0xcf7f56u), (eax & 0xffffu));
/* 95fa65: mov byte ptr [0xcf8079], cl */
  W8((uint32_t)(0xcf8079u), (ecx & 0xffu));
/* 95fa6b: mov byte ptr [esi + 0xcf7ac8], 0x8b */
  W8((uint32_t)(esi + 0xcf7ac8u), 0x8bu);
/* 95fa72: mov esi, dword ptr [0xcf81c0] */
  esi = R32((uint32_t)(0xcf81c0u));
/* 95fa78: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 95fa79: mov dword ptr [0xcf81c0], esi */
  W32((uint32_t)(0xcf81c0u), esi);
/* 95fa7f: mov byte ptr [0xcf80a3], bl */
  W8((uint32_t)(0xcf80a3u), (ebx & 0xffu));
/* 95fa85: mov dword ptr [0xcf7db8], 0xafb2d4 */
  W32((uint32_t)(0xcf7db8u), 0xafb2d4u);
/* 95fa8f: mov word ptr [0xcf7faa], 0xbb */
  W16((uint32_t)(0xcf7faau), 0xbbu);
/* 95fa98: mov byte ptr [esi + 0xcf7ac8], 0x62 */
  W8((uint32_t)(esi + 0xcf7ac8u), 0x62u);
/* 95fa9f: mov esi, dword ptr [0xcf81c0] */
  esi = R32((uint32_t)(0xcf81c0u));
/* 95faa5: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 95faa6: mov dword ptr [0xcf81c0], esi */
  W32((uint32_t)(0xcf81c0u), esi);
/* 95faac: mov byte ptr [0xcf807a], cl */
  W8((uint32_t)(0xcf807au), (ecx & 0xffu));
/* 95fab2: mov dword ptr [0xcf7d14], 0xafb340 */
  W32((uint32_t)(0xcf7d14u), 0xafb340u);
/* 95fabc: mov word ptr [0xcf7f58], ax */
  W16((uint32_t)(0xcf7f58u), (eax & 0xffffu));
/* 95fac2: mov byte ptr [esi + 0xcf7ac8], 0x22 */
  W8((uint32_t)(esi + 0xcf7ac8u), 0x22u);
/* 95fac9: mov esi, dword ptr [0xcf81c0] */
  esi = R32((uint32_t)(0xcf81c0u));
/* 95facf: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 95fad0: mov dword ptr [0xcf81c0], esi */
  W32((uint32_t)(0xcf81c0u), esi);
/* 95fad6: mov dword ptr [0xcf7c14], 0xafb2b0 */
  W32((uint32_t)(0xcf7c14u), 0xafb2b0u);
/* 95fae0: mov word ptr [0xcf7ed8], ax */
  W16((uint32_t)(0xcf7ed8u), (eax & 0xffffu));
/* 95fae6: mov byte ptr [0xcf803a], 6 */
  W8((uint32_t)(0xcf803au), 0x6u);
/* 95faed: mov byte ptr [esi + 0xcf7ac8], 0xb4 */
  W8((uint32_t)(esi + 0xcf7ac8u), 0xb4u);
/* 95faf4: mov esi, dword ptr [0xcf81c0] */
  esi = R32((uint32_t)(0xcf81c0u));
/* 95fafa: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 95fafb: mov dword ptr [0xcf81c0], esi */
  W32((uint32_t)(0xcf81c0u), esi);
/* 95fb01: mov byte ptr [0xcf80cc], dl */
  W8((uint32_t)(0xcf80ccu), (edx & 0xffu));
/* 95fb07: mov dword ptr [0xcf7e5c], 0xafb294 */
  W32((uint32_t)(0xcf7e5cu), 0xafb294u);
/* 95fb11: mov word ptr [0xcf7ffc], ax */
  W16((uint32_t)(0xcf7ffcu), (eax & 0xffffu));
/* 95fb17: mov byte ptr [esi + 0xcf7ac8], 0xac */
  W8((uint32_t)(esi + 0xcf7ac8u), 0xacu);
/* 95fb1e: mov esi, dword ptr [0xcf81c0] */
  esi = R32((uint32_t)(0xcf81c0u));
/* 95fb24: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 95fb25: mov dword ptr [0xcf81c0], esi */
  W32((uint32_t)(0xcf81c0u), esi);
/* 95fb2b: mov byte ptr [0xcf80c4], dl */
  W8((uint32_t)(0xcf80c4u), (edx & 0xffu));
/* 95fb31: mov dword ptr [0xcf7e3c], 0xafb278 */
  W32((uint32_t)(0xcf7e3cu), 0xafb278u);
/* 95fb3b: mov word ptr [0xcf7fec], ax */
  W16((uint32_t)(0xcf7fecu), (eax & 0xffffu));
/* 95fb41: mov byte ptr [esi + 0xcf7ac8], 0xb3 */
  W8((uint32_t)(esi + 0xcf7ac8u), 0xb3u);
/* 95fb48: mov esi, dword ptr [0xcf81c0] */
  esi = R32((uint32_t)(0xcf81c0u));
/* 95fb4e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 95fb4f: mov dword ptr [0xcf81c0], esi */
  W32((uint32_t)(0xcf81c0u), esi);
/* 95fb55: mov byte ptr [0xcf80cb], dl */
  W8((uint32_t)(0xcf80cbu), (edx & 0xffu));
/* 95fb5b: mov dword ptr [0xcf7e58], 0xafb25c */
  W32((uint32_t)(0xcf7e58u), 0xafb25cu);
/* 95fb65: mov word ptr [0xcf7ffa], ax */
  W16((uint32_t)(0xcf7ffau), (eax & 0xffffu));
/* 95fb6b: mov byte ptr [esi + 0xcf7ac8], 0x95 */
  W8((uint32_t)(esi + 0xcf7ac8u), 0x95u);
/* 95fb72: mov esi, dword ptr [0xcf81c0] */
  esi = R32((uint32_t)(0xcf81c0u));
/* 95fb78: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 95fb79: mov dword ptr [0xcf81c0], esi */
  W32((uint32_t)(0xcf81c0u), esi);
/* 95fb7f: mov byte ptr [0xcf80ad], dl */
  W8((uint32_t)(0xcf80adu), (edx & 0xffu));
/* 95fb85: mov dword ptr [0xcf7de0], 0xafb240 */
  W32((uint32_t)(0xcf7de0u), 0xafb240u);
/* 95fb8f: mov word ptr [0xcf7fbe], ax */
  W16((uint32_t)(0xcf7fbeu), (eax & 0xffffu));
/* 95fb95: mov byte ptr [esi + 0xcf7ac8], 0x86 */
  W8((uint32_t)(esi + 0xcf7ac8u), 0x86u);
/* 95fb9c: mov esi, dword ptr [0xcf81c0] */
  esi = R32((uint32_t)(0xcf81c0u));
/* 95fba2: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 95fba3: mov dword ptr [0xcf81c0], esi */
  W32((uint32_t)(0xcf81c0u), esi);
/* 95fba9: mov byte ptr [0xcf809e], bl */
  W8((uint32_t)(0xcf809eu), (ebx & 0xffu));
/* 95fbaf: mov dword ptr [0xcf7da4], 0xafb218 */
  W32((uint32_t)(0xcf7da4u), 0xafb218u);
/* 95fbb9: mov word ptr [0xcf7fa0], di */
  W16((uint32_t)(0xcf7fa0u), (edi & 0xffffu));
/* 95fbc0: mov byte ptr [esi + 0xcf7ac8], 0x85 */
  W8((uint32_t)(esi + 0xcf7ac8u), 0x85u);
/* 95fbc7: mov esi, dword ptr [0xcf81c0] */
  esi = R32((uint32_t)(0xcf81c0u));
/* 95fbcd: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 95fbce: mov dword ptr [0xcf81c0], esi */
  W32((uint32_t)(0xcf81c0u), esi);
/* 95fbd4: mov byte ptr [0xcf809d], cl */
  W8((uint32_t)(0xcf809du), (ecx & 0xffu));
/* 95fbda: mov dword ptr [0xcf7da0], 0xafb1ec */
  W32((uint32_t)(0xcf7da0u), 0xafb1ecu);
/* 95fbe4: mov word ptr [0xcf7f9e], ax */
  W16((uint32_t)(0xcf7f9eu), (eax & 0xffffu));
/* 95fbea: mov byte ptr [esi + 0xcf7ac8], cl */
  W8((uint32_t)(esi + 0xcf7ac8u), (ecx & 0xffu));
/* 95fbf0: mov esi, dword ptr [0xcf81c0] */
  esi = R32((uint32_t)(0xcf81c0u));
/* 95fbf6: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 95fbf7: mov dword ptr [0xcf81c0], esi */
  W32((uint32_t)(0xcf81c0u), esi);
/* 95fbfd: mov byte ptr [0xcf801b], dl */
  W8((uint32_t)(0xcf801bu), (edx & 0xffu));
/* 95fc03: mov dword ptr [0xcf7b98], 0 */
  W32((uint32_t)(0xcf7b98u), 0x0u);
/* 95fc0d: mov word ptr [0xcf7e9a], ax */
  W16((uint32_t)(0xcf7e9au), (eax & 0xffffu));
/* 95fc13: mov byte ptr [esi + 0xcf7ac8], 4 */
  W8((uint32_t)(esi + 0xcf7ac8u), 0x4u);
/* 95fc1a: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 95fc20: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 95fc21: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 95fc27: mov word ptr [0xcf7e9c], cx */
  W16((uint32_t)(0xcf7e9cu), (ecx & 0xffffu));
/* 95fc2e: mov dword ptr [0xcf7b9c], 0xafb1c4 */
  W32((uint32_t)(0xcf7b9cu), 0xafb1c4u);
/* 95fc38: mov byte ptr [0xcf801c], 6 */
  W8((uint32_t)(0xcf801cu), 0x6u);
/* 95fc3f: mov byte ptr [edx + 0xcf7ac8], 5 */
  W8((uint32_t)(edx + 0xcf7ac8u), 0x5u);
/* 95fc46: mov ecx, dword ptr [0xcf81c0] */
  ecx = R32((uint32_t)(0xcf81c0u));
/* 95fc4c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 95fc4d: mov bl, 7 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x7u) & 0xffu);
/* 95fc4f: mov dword ptr [0xcf81c0], ecx */
  W32((uint32_t)(0xcf81c0u), ecx);
/* 95fc55: mov dword ptr [0xcf7ba0], 0xafb1a0 */
  W32((uint32_t)(0xcf7ba0u), 0xafb1a0u);
/* 95fc5f: mov word ptr [0xcf7e9e], ax */
  W16((uint32_t)(0xcf7e9eu), (eax & 0xffffu));
/* 95fc65: mov byte ptr [0xcf801d], bl */
  W8((uint32_t)(0xcf801du), (ebx & 0xffu));
/* 95fc6b: mov byte ptr [ecx + 0xcf7ac8], 6 */
  W8((uint32_t)(ecx + 0xcf7ac8u), 0x6u);
/* 95fc72: mov ecx, dword ptr [0xcf81c0] */
  ecx = R32((uint32_t)(0xcf81c0u));
/* 95fc78: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 95fc79: mov dword ptr [0xcf81c0], ecx */
  W32((uint32_t)(0xcf81c0u), ecx);
/* 95fc7f: mov dl, 8 */
  edx = (edx & 0xffffff00u) | ((uint32_t)(0x8u) & 0xffu);
/* 95fc81: mov dword ptr [0xcf7ba4], 0xafb17c */
  W32((uint32_t)(0xcf7ba4u), 0xafb17cu);
/* 95fc8b: mov word ptr [0xcf7ea0], ax */
  W16((uint32_t)(0xcf7ea0u), (eax & 0xffffu));
/* 95fc91: mov byte ptr [0xcf801e], dl */
  W8((uint32_t)(0xcf801eu), (edx & 0xffu));
/* 95fc97: mov byte ptr [ecx + 0xcf7ac8], dl */
  W8((uint32_t)(ecx + 0xcf7ac8u), (edx & 0xffu));
/* 95fc9d: mov ecx, dword ptr [0xcf81c0] */
  ecx = R32((uint32_t)(0xcf81c0u));
/* 95fca3: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 95fca4: mov dword ptr [0xcf81c0], ecx */
  W32((uint32_t)(0xcf81c0u), ecx);
/* 95fcaa: mov dword ptr [0xcf7bac], 0xafb164 */
  W32((uint32_t)(0xcf7bacu), 0xafb164u);
/* 95fcb4: mov word ptr [0xcf7ea4], ax */
  W16((uint32_t)(0xcf7ea4u), (eax & 0xffffu));
/* 95fcba: mov byte ptr [0xcf8020], 6 */
  W8((uint32_t)(0xcf8020u), 0x6u);
/* 95fcc1: mov byte ptr [ecx + 0xcf7ac8], 9 */
  W8((uint32_t)(ecx + 0xcf7ac8u), 0x9u);
/* 95fcc8: mov ecx, dword ptr [0xcf81c0] */
  ecx = R32((uint32_t)(0xcf81c0u));
/* 95fcce: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 95fccf: mov dword ptr [0xcf81c0], ecx */
  W32((uint32_t)(0xcf81c0u), ecx);
/* 95fcd5: mov byte ptr [0xcf8021], bl */
  W8((uint32_t)(0xcf8021u), (ebx & 0xffu));
/* 95fcdb: mov dword ptr [0xcf7bb0], 0xafb14c */
  W32((uint32_t)(0xcf7bb0u), 0xafb14cu);
/* 95fce5: mov word ptr [0xcf7ea6], ax */
  W16((uint32_t)(0xcf7ea6u), (eax & 0xffffu));
/* 95fceb: mov byte ptr [ecx + 0xcf7ac8], 0xa */
  W8((uint32_t)(ecx + 0xcf7ac8u), 0xau);
/* 95fcf2: mov ecx, dword ptr [0xcf81c0] */
  ecx = R32((uint32_t)(0xcf81c0u));
/* 95fcf8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 95fcf9: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 95fcfa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 95fcfb: mov dword ptr [0xcf81c0], ecx */
  W32((uint32_t)(0xcf81c0u), ecx);
/* 95fd01: mov dword ptr [0xcf7bb4], 0xafb134 */
  W32((uint32_t)(0xcf7bb4u), 0xafb134u);
/* 95fd0b: mov word ptr [0xcf7ea8], ax */
  W16((uint32_t)(0xcf7ea8u), (eax & 0xffffu));
/* 95fd11: mov byte ptr [0xcf8022], dl */
  W8((uint32_t)(0xcf8022u), (edx & 0xffu));
/* 95fd17: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 95fd18: ret  */
  esp += 4; SPILL(); return;
}

void f_95fd20(void) {
  LOAD_REGS();
L_95fd20: /* 95fd20: mov eax, dword ptr [0xcf81c0] */
  eax = R32((uint32_t)(0xcf81c0u));
/* 95fd25: mov byte ptr [eax + 0xcf7ac8], 0x40 */
  W8((uint32_t)(eax + 0xcf7ac8u), 0x40u);
/* 95fd2c: mov ecx, dword ptr [0xcf81c0] */
  ecx = R32((uint32_t)(0xcf81c0u));
/* 95fd32: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 95fd35: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 95fd36: mov dword ptr [0xcf81c0], ecx */
  W32((uint32_t)(0xcf81c0u), ecx);
/* 95fd3c: mov dword ptr [0xcf7c8c], 0xafb804 */
  W32((uint32_t)(0xcf7c8cu), 0xafb804u);
/* 95fd46: mov word ptr [0xcf7f14], ax */
  W16((uint32_t)(0xcf7f14u), (eax & 0xffffu));
/* 95fd4c: mov byte ptr [0xcf8058], 0 */
  W8((uint32_t)(0xcf8058u), 0x0u);
/* 95fd53: mov edx, 0x97 */
  edx = 0x97u;
/* 95fd58: mov byte ptr [ecx + 0xcf7ac8], dl */
  W8((uint32_t)(ecx + 0xcf7ac8u), (edx & 0xffu));
/* 95fd5e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 95fd5f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 95fd60: mov esi, dword ptr [0xcf81c0] */
  esi = R32((uint32_t)(0xcf81c0u));
/* 95fd66: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 95fd67: mov dword ptr [0xcf81c0], esi */
  W32((uint32_t)(0xcf81c0u), esi);
/* 95fd6d: mov dword ptr [0xcf7de8], 0xafb7f0 */
  W32((uint32_t)(0xcf7de8u), 0xafb7f0u);
/* 95fd77: mov word ptr [0xcf7fc2], ax */
  W16((uint32_t)(0xcf7fc2u), (eax & 0xffffu));
/* 95fd7d: mov cl, 1 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 95fd7f: mov byte ptr [0xcf80af], cl */
  W8((uint32_t)(0xcf80afu), (ecx & 0xffu));
/* 95fd85: mov byte ptr [esi + 0xcf7ac8], 0x9d */
  W8((uint32_t)(esi + 0xcf7ac8u), 0x9du);
/* 95fd8c: mov esi, dword ptr [0xcf81c0] */
  esi = R32((uint32_t)(0xcf81c0u));
/* 95fd92: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 95fd93: mov dword ptr [0xcf81c0], esi */
  W32((uint32_t)(0xcf81c0u), esi);
/* 95fd99: mov dword ptr [0xcf7e00], 0xafb7cc */
  W32((uint32_t)(0xcf7e00u), 0xafb7ccu);
/* 95fda3: mov word ptr [0xcf7fce], ax */
  W16((uint32_t)(0xcf7fceu), (eax & 0xffffu));
/* 95fda9: mov byte ptr [0xcf80b5], cl */
  W8((uint32_t)(0xcf80b5u), (ecx & 0xffu));
/* 95fdaf: mov byte ptr [esi + 0xcf7ac8], 0x9e */
  W8((uint32_t)(esi + 0xcf7ac8u), 0x9eu);
/* 95fdb6: mov esi, dword ptr [0xcf81c0] */
  esi = R32((uint32_t)(0xcf81c0u));
/* 95fdbc: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 95fdbd: mov dword ptr [0xcf81c0], esi */
  W32((uint32_t)(0xcf81c0u), esi);
/* 95fdc3: mov dword ptr [0xcf7e04], 0xafb7b4 */
  W32((uint32_t)(0xcf7e04u), 0xafb7b4u);
/* 95fdcd: mov word ptr [0xcf7fd0], ax */
  W16((uint32_t)(0xcf7fd0u), (eax & 0xffffu));
/* 95fdd3: mov byte ptr [0xcf80b6], 7 */
  W8((uint32_t)(0xcf80b6u), 0x7u);
/* 95fdda: mov byte ptr [esi + 0xcf7ac8], 0x60 */
  W8((uint32_t)(esi + 0xcf7ac8u), 0x60u);
/* 95fde1: mov esi, dword ptr [0xcf81c0] */
  esi = R32((uint32_t)(0xcf81c0u));
/* 95fde7: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 95fde8: mov dword ptr [0xcf81c0], esi */
  W32((uint32_t)(0xcf81c0u), esi);
/* 95fdee: mov dword ptr [0xcf7d0c], 0xafb794 */
  W32((uint32_t)(0xcf7d0cu), 0xafb794u);
/* 95fdf8: mov word ptr [0xcf7f54], ax */
  W16((uint32_t)(0xcf7f54u), (eax & 0xffffu));
/* 95fdfe: mov bl, 3 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x3u) & 0xffu);
/* 95fe00: mov byte ptr [0xcf8078], bl */
  W8((uint32_t)(0xcf8078u), (ebx & 0xffu));
/* 95fe06: mov byte ptr [esi + 0xcf7ac8], 0xb5 */
  W8((uint32_t)(esi + 0xcf7ac8u), 0xb5u);
/* 95fe0d: mov esi, dword ptr [0xcf81c0] */
  esi = R32((uint32_t)(0xcf81c0u));
/* 95fe13: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 95fe14: mov dword ptr [0xcf81c0], esi */
  W32((uint32_t)(0xcf81c0u), esi);
/* 95fe1a: mov dword ptr [0xcf7e60], 0xafb770 */
  W32((uint32_t)(0xcf7e60u), 0xafb770u);
/* 95fe24: mov word ptr [0xcf7ffe], dx */
  W16((uint32_t)(0xcf7ffeu), (edx & 0xffffu));
/* 95fe2b: mov byte ptr [0xcf80cd], cl */
  W8((uint32_t)(0xcf80cdu), (ecx & 0xffu));
/* 95fe31: mov byte ptr [esi + 0xcf7ac8], 0x56 */
  W8((uint32_t)(esi + 0xcf7ac8u), 0x56u);
/* 95fe38: mov esi, dword ptr [0xcf81c0] */
  esi = R32((uint32_t)(0xcf81c0u));
/* 95fe3e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 95fe3f: mov dword ptr [0xcf81c0], esi */
  W32((uint32_t)(0xcf81c0u), esi);
/* 95fe45: mov dword ptr [0xcf7ce4], 0xafb73c */
  W32((uint32_t)(0xcf7ce4u), 0xafb73cu);
/* 95fe4f: mov word ptr [0xcf7f40], dx */
  W16((uint32_t)(0xcf7f40u), (edx & 0xffffu));
/* 95fe56: mov byte ptr [0xcf806e], cl */
  W8((uint32_t)(0xcf806eu), (ecx & 0xffu));
/* 95fe5c: mov byte ptr [esi + 0xcf7ac8], 0xbc */
  W8((uint32_t)(esi + 0xcf7ac8u), 0xbcu);
/* 95fe63: mov esi, dword ptr [0xcf81c0] */
  esi = R32((uint32_t)(0xcf81c0u));
/* 95fe69: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 95fe6a: mov dword ptr [0xcf81c0], esi */
  W32((uint32_t)(0xcf81c0u), esi);
/* 95fe70: mov dword ptr [0xcf7e7c], 0xafb718 */
  W32((uint32_t)(0xcf7e7cu), 0xafb718u);
/* 95fe7a: mov word ptr [0xcf800c], dx */
  W16((uint32_t)(0xcf800cu), (edx & 0xffffu));
/* 95fe81: mov byte ptr [0xcf80d4], 2 */
  W8((uint32_t)(0xcf80d4u), 0x2u);
/* 95fe88: mov byte ptr [esi + 0xcf7ac8], 0xbd */
  W8((uint32_t)(esi + 0xcf7ac8u), 0xbdu);
/* 95fe8f: mov esi, dword ptr [0xcf81c0] */
  esi = R32((uint32_t)(0xcf81c0u));
/* 95fe95: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 95fe96: mov dword ptr [0xcf81c0], esi */
  W32((uint32_t)(0xcf81c0u), esi);
/* 95fe9c: mov dword ptr [0xcf7e80], 0xafb70c */
  W32((uint32_t)(0xcf7e80u), 0xafb70cu);
/* 95fea6: mov word ptr [0xcf800e], ax */
  W16((uint32_t)(0xcf800eu), (eax & 0xffffu));
/* 95feac: mov byte ptr [0xcf80d5], bl */
  W8((uint32_t)(0xcf80d5u), (ebx & 0xffu));
/* 95feb2: mov byte ptr [esi + 0xcf7ac8], 0xbe */
  W8((uint32_t)(esi + 0xcf7ac8u), 0xbeu);
/* 95feb9: mov esi, dword ptr [0xcf81c0] */
  esi = R32((uint32_t)(0xcf81c0u));
/* 95febf: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 95fec0: mov dword ptr [0xcf81c0], esi */
  W32((uint32_t)(0xcf81c0u), esi);
/* 95fec6: mov dword ptr [0xcf7e84], 0xafb6e8 */
  W32((uint32_t)(0xcf7e84u), 0xafb6e8u);
/* 95fed0: mov word ptr [0xcf8010], dx */
  W16((uint32_t)(0xcf8010u), (edx & 0xffffu));
/* 95fed7: mov byte ptr [0xcf80d6], 2 */
  W8((uint32_t)(0xcf80d6u), 0x2u);
/* 95fede: mov byte ptr [esi + 0xcf7ac8], 0xbf */
  W8((uint32_t)(esi + 0xcf7ac8u), 0xbfu);
/* 95fee5: mov esi, dword ptr [0xcf81c0] */
  esi = R32((uint32_t)(0xcf81c0u));
/* 95feeb: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 95feec: mov dword ptr [0xcf81c0], esi */
  W32((uint32_t)(0xcf81c0u), esi);
/* 95fef2: mov byte ptr [0xcf80d7], bl */
  W8((uint32_t)(0xcf80d7u), (ebx & 0xffu));
/* 95fef8: mov dword ptr [0xcf7e88], 0xafb70c */
  W32((uint32_t)(0xcf7e88u), 0xafb70cu);
/* 95ff02: mov word ptr [0xcf8012], ax */
  W16((uint32_t)(0xcf8012u), (eax & 0xffffu));
/* 95ff08: mov byte ptr [esi + 0xcf7ac8], 0x2d */
  W8((uint32_t)(esi + 0xcf7ac8u), 0x2du);
/* 95ff0f: mov esi, dword ptr [0xcf81c0] */
  esi = R32((uint32_t)(0xcf81c0u));
/* 95ff15: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 95ff16: mov dword ptr [0xcf81c0], esi */
  W32((uint32_t)(0xcf81c0u), esi);
/* 95ff1c: mov word ptr [0xcf7eee], dx */
  W16((uint32_t)(0xcf7eeeu), (edx & 0xffffu));
/* 95ff23: mov dword ptr [0xcf7c40], 0xafb6c0 */
  W32((uint32_t)(0xcf7c40u), 0xafb6c0u);
/* 95ff2d: mov byte ptr [0xcf8045], 2 */
  W8((uint32_t)(0xcf8045u), 0x2u);
/* 95ff34: mov byte ptr [esi + 0xcf7ac8], 0x2e */
  W8((uint32_t)(esi + 0xcf7ac8u), 0x2eu);
/* 95ff3b: mov esi, dword ptr [0xcf81c0] */
  esi = R32((uint32_t)(0xcf81c0u));
/* 95ff41: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 95ff42: mov dword ptr [0xcf81c0], esi */
  W32((uint32_t)(0xcf81c0u), esi);
/* 95ff48: mov byte ptr [0xcf8046], bl */
  W8((uint32_t)(0xcf8046u), (ebx & 0xffu));
/* 95ff4e: mov dword ptr [0xcf7c44], 0xafb6a0 */
  W32((uint32_t)(0xcf7c44u), 0xafb6a0u);
/* 95ff58: mov word ptr [0xcf7ef0], ax */
  W16((uint32_t)(0xcf7ef0u), (eax & 0xffffu));
/* 95ff5e: mov byte ptr [esi + 0xcf7ac8], 0xaf */
  W8((uint32_t)(esi + 0xcf7ac8u), 0xafu);
/* 95ff65: mov esi, dword ptr [0xcf81c0] */
  esi = R32((uint32_t)(0xcf81c0u));
/* 95ff6b: mov word ptr [0xcf7ff2], dx */
  W16((uint32_t)(0xcf7ff2u), (edx & 0xffffu));
/* 95ff72: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 95ff73: mov dword ptr [0xcf81c0], esi */
  W32((uint32_t)(0xcf81c0u), esi);
/* 95ff79: mov dword ptr [0xcf7e48], 0xafb67c */
  W32((uint32_t)(0xcf7e48u), 0xafb67cu);
/* 95ff83: mov byte ptr [0xcf80c7], cl */
  W8((uint32_t)(0xcf80c7u), (ecx & 0xffu));
/* 95ff89: mov byte ptr [esi + 0xcf7ac8], 0x7b */
  W8((uint32_t)(esi + 0xcf7ac8u), 0x7bu);
/* 95ff90: mov esi, dword ptr [0xcf81c0] */
  esi = R32((uint32_t)(0xcf81c0u));
/* 95ff96: mov word ptr [0xcf7f8a], dx */
  W16((uint32_t)(0xcf7f8au), (edx & 0xffffu));
/* 95ff9d: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 95ff9e: mov dword ptr [0xcf81c0], esi */
  W32((uint32_t)(0xcf81c0u), esi);
/* 95ffa4: mov dword ptr [0xcf7d78], 0xafb654 */
  W32((uint32_t)(0xcf7d78u), 0xafb654u);
/* 95ffae: mov byte ptr [0xcf8093], 2 */
  W8((uint32_t)(0xcf8093u), 0x2u);
/* 95ffb5: mov byte ptr [esi + 0xcf7ac8], 0x7c */
  W8((uint32_t)(esi + 0xcf7ac8u), 0x7cu);
/* 95ffbc: mov esi, dword ptr [0xcf81c0] */
  esi = R32((uint32_t)(0xcf81c0u));
/* 95ffc2: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 95ffc3: mov dword ptr [0xcf81c0], esi */
  W32((uint32_t)(0xcf81c0u), esi);
/* 95ffc9: mov byte ptr [0xcf8094], bl */
  W8((uint32_t)(0xcf8094u), (ebx & 0xffu));
/* 95ffcf: mov dword ptr [0xcf7d7c], 0xafb62c */
  W32((uint32_t)(0xcf7d7cu), 0xafb62cu);
/* 95ffd9: mov word ptr [0xcf7f8c], ax */
  W16((uint32_t)(0xcf7f8cu), (eax & 0xffffu));
/* 95ffdf: mov byte ptr [esi + 0xcf7ac8], 0x79 */
  W8((uint32_t)(esi + 0xcf7ac8u), 0x79u);
/* 95ffe6: mov esi, dword ptr [0xcf81c0] */
  esi = R32((uint32_t)(0xcf81c0u));
/* 95ffec: mov word ptr [0xcf7f86], dx */
  W16((uint32_t)(0xcf7f86u), (edx & 0xffffu));
/* 95fff3: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 95fff4: mov dword ptr [0xcf81c0], esi */
  W32((uint32_t)(0xcf81c0u), esi);
/* 95fffa: mov bl, 6 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x6u) & 0xffu);
/* 95fffc: mov dword ptr [0xcf7d70], 0xafb610 */
  W32((uint32_t)(0xcf7d70u), 0xafb610u);
/* 960006: mov byte ptr [0xcf8091], bl */
  W8((uint32_t)(0xcf8091u), (ebx & 0xffu));
/* 96000c: mov byte ptr [esi + 0xcf7ac8], 0x7a */
  W8((uint32_t)(esi + 0xcf7ac8u), 0x7au);
/* 960013: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 960019: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 96001a: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 960020: mov esi, 0xafb5f8 */
  esi = 0xafb5f8u;
/* 960025: mov dword ptr [0xcf7d74], esi */
  W32((uint32_t)(0xcf7d74u), esi);
/* 96002b: mov word ptr [0xcf7f88], ax */
  W16((uint32_t)(0xcf7f88u), (eax & 0xffffu));
/* 960031: mov byte ptr [0xcf8092], bl */
  W8((uint32_t)(0xcf8092u), (ebx & 0xffu));
/* 960037: mov byte ptr [edx + 0xcf7ac8], 0x93 */
  W8((uint32_t)(edx + 0xcf7ac8u), 0x93u);
/* 96003e: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 960044: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 960045: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 96004b: mov dword ptr [0xcf7dd8], 0xafb5dc */
  W32((uint32_t)(0xcf7dd8u), 0xafb5dcu);
/* 960055: mov word ptr [0xcf7fba], 0x92 */
  W16((uint32_t)(0xcf7fbau), 0x92u);
/* 96005e: mov byte ptr [0xcf80ab], bl */
  W8((uint32_t)(0xcf80abu), (ebx & 0xffu));
/* 960064: mov byte ptr [edx + 0xcf7ac8], 0x94 */
  W8((uint32_t)(edx + 0xcf7ac8u), 0x94u);
/* 96006b: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 960071: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 960072: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 960078: mov dword ptr [0xcf7ddc], esi */
  W32((uint32_t)(0xcf7ddcu), esi);
/* 96007e: mov word ptr [0xcf7fbc], ax */
  W16((uint32_t)(0xcf7fbcu), (eax & 0xffffu));
/* 960084: mov byte ptr [0xcf80ac], bl */
  W8((uint32_t)(0xcf80acu), (ebx & 0xffu));
/* 96008a: mov byte ptr [edx + 0xcf7ac8], 0x92 */
  W8((uint32_t)(edx + 0xcf7ac8u), 0x92u);
/* 960091: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 960097: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 960098: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 96009e: mov dword ptr [0xcf7dd4], 0xafb5c8 */
  W32((uint32_t)(0xcf7dd4u), 0xafb5c8u);
/* 9600a8: mov word ptr [0xcf7fb8], ax */
  W16((uint32_t)(0xcf7fb8u), (eax & 0xffffu));
/* 9600ae: mov byte ptr [0xcf80aa], cl */
  W8((uint32_t)(0xcf80aau), (ecx & 0xffu));
/* 9600b4: mov byte ptr [edx + 0xcf7ac8], 0xab */
  W8((uint32_t)(edx + 0xcf7ac8u), 0xabu);
/* 9600bb: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 9600c1: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 9600c2: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 9600c8: mov dword ptr [0xcf7e38], 0xafb59c */
  W32((uint32_t)(0xcf7e38u), 0xafb59cu);
/* 9600d2: mov word ptr [0xcf7fea], ax */
  W16((uint32_t)(0xcf7feau), (eax & 0xffffu));
/* 9600d8: mov byte ptr [0xcf80c3], cl */
  W8((uint32_t)(0xcf80c3u), (ecx & 0xffu));
/* 9600de: mov byte ptr [edx + 0xcf7ac8], 0x2f */
  W8((uint32_t)(edx + 0xcf7ac8u), 0x2fu);
/* 9600e5: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 9600eb: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 9600ec: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 9600f2: mov word ptr [0xcf7ef2], ax */
  W16((uint32_t)(0xcf7ef2u), (eax & 0xffffu));
/* 9600f8: mov dword ptr [0xcf7c48], 0xafb570 */
  W32((uint32_t)(0xcf7c48u), 0xafb570u);
/* 960102: mov byte ptr [0xcf8047], cl */
  W8((uint32_t)(0xcf8047u), (ecx & 0xffu));
/* 960108: mov byte ptr [edx + 0xcf7ac8], 0x80 */
  W8((uint32_t)(edx + 0xcf7ac8u), 0x80u);
/* 96010f: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 960115: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 960116: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 96011c: mov word ptr [0xcf7f94], ax */
  W16((uint32_t)(0xcf7f94u), (eax & 0xffffu));
/* 960122: mov dword ptr [0xcf7d8c], 0xafb53c */
  W32((uint32_t)(0xcf7d8cu), 0xafb53cu);
/* 96012c: mov byte ptr [0xcf8098], cl */
  W8((uint32_t)(0xcf8098u), (ecx & 0xffu));
/* 960132: mov byte ptr [edx + 0xcf7ac8], 0x83 */
  W8((uint32_t)(edx + 0xcf7ac8u), 0x83u);
/* 960139: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 96013f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 960140: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 960146: mov word ptr [0xcf7f9a], ax */
  W16((uint32_t)(0xcf7f9au), (eax & 0xffffu));
/* 96014c: mov dword ptr [0xcf7d98], 0xafb514 */
  W32((uint32_t)(0xcf7d98u), 0xafb514u);
/* 960156: mov byte ptr [0xcf809b], cl */
  W8((uint32_t)(0xcf809bu), (ecx & 0xffu));
/* 96015c: mov byte ptr [edx + 0xcf7ac8], 0x81 */
  W8((uint32_t)(edx + 0xcf7ac8u), 0x81u);
/* 960163: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 960169: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 96016a: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 960170: mov word ptr [0xcf7f96], ax */
  W16((uint32_t)(0xcf7f96u), (eax & 0xffffu));
/* 960176: mov dword ptr [0xcf7d90], 0xafb4ec */
  W32((uint32_t)(0xcf7d90u), 0xafb4ecu);
/* 960180: mov byte ptr [0xcf8099], cl */
  W8((uint32_t)(0xcf8099u), (ecx & 0xffu));
/* 960186: mov byte ptr [edx + 0xcf7ac8], 0x82 */
  W8((uint32_t)(edx + 0xcf7ac8u), 0x82u);
/* 96018d: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 960193: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 960194: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 96019a: mov word ptr [0xcf7f98], ax */
  W16((uint32_t)(0xcf7f98u), (eax & 0xffffu));
/* 9601a0: mov dword ptr [0xcf7d94], 0xafb4bc */
  W32((uint32_t)(0xcf7d94u), 0xafb4bcu);
/* 9601aa: mov byte ptr [0xcf809a], cl */
  W8((uint32_t)(0xcf809au), (ecx & 0xffu));
/* 9601b0: mov byte ptr [edx + 0xcf7ac8], 0x51 */
  W8((uint32_t)(edx + 0xcf7ac8u), 0x51u);
/* 9601b7: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 9601bd: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 9601be: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 9601c4: mov word ptr [0xcf7f36], ax */
  W16((uint32_t)(0xcf7f36u), (eax & 0xffffu));
/* 9601ca: mov dword ptr [0xcf7cd0], 0xafb4a8 */
  W32((uint32_t)(0xcf7cd0u), 0xafb4a8u);
/* 9601d4: mov byte ptr [0xcf8069], cl */
  W8((uint32_t)(0xcf8069u), (ecx & 0xffu));
/* 9601da: mov byte ptr [edx + 0xcf7ac8], 0x8a */
  W8((uint32_t)(edx + 0xcf7ac8u), 0x8au);
/* 9601e1: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 9601e7: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 9601e8: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 9601ee: mov word ptr [0xcf7fa8], ax */
  W16((uint32_t)(0xcf7fa8u), (eax & 0xffffu));
/* 9601f4: mov dword ptr [0xcf7db4], 0xafb484 */
  W32((uint32_t)(0xcf7db4u), 0xafb484u);
/* 9601fe: mov byte ptr [0xcf80a2], cl */
  W8((uint32_t)(0xcf80a2u), (ecx & 0xffu));
/* 960204: mov byte ptr [edx + 0xcf7ac8], 0x36 */
  W8((uint32_t)(edx + 0xcf7ac8u), 0x36u);
/* 96020b: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 960211: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 960212: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 960218: mov word ptr [0xcf7f00], ax */
  W16((uint32_t)(0xcf7f00u), (eax & 0xffffu));
/* 96021e: mov ebx, 0xae */
  ebx = 0xaeu;
/* 960223: mov dword ptr [0xcf7c64], 0xafb45c */
  W32((uint32_t)(0xcf7c64u), 0xafb45cu);
/* 96022d: mov byte ptr [0xcf804e], cl */
  W8((uint32_t)(0xcf804eu), (ecx & 0xffu));
/* 960233: mov byte ptr [edx + 0xcf7ac8], bl */
  W8((uint32_t)(edx + 0xcf7ac8u), (ebx & 0xffu));
/* 960239: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 96023f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 960240: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 960246: mov word ptr [0xcf7ff0], ax */
  W16((uint32_t)(0xcf7ff0u), (eax & 0xffffu));
/* 96024c: mov dword ptr [0xcf7e44], 0xafb434 */
  W32((uint32_t)(0xcf7e44u), 0xafb434u);
/* 960256: mov byte ptr [0xcf80c6], cl */
  W8((uint32_t)(0xcf80c6u), (ecx & 0xffu));
/* 96025c: mov byte ptr [edx + 0xcf7ac8], 0x12 */
  W8((uint32_t)(edx + 0xcf7ac8u), 0x12u);
/* 960263: mov eax, dword ptr [0xcf81c0] */
  eax = R32((uint32_t)(0xcf81c0u));
/* 960268: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 960269: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96026a: mov word ptr [0xcf7eb8], bx */
  W16((uint32_t)(0xcf7eb8u), (ebx & 0xffffu));
/* 960271: mov dword ptr [0xcf81c0], eax */
  W32((uint32_t)(0xcf81c0u), eax);
/* 960276: mov dword ptr [0xcf7bd4], 0xafb414 */
  W32((uint32_t)(0xcf7bd4u), 0xafb414u);
/* 960280: mov byte ptr [0xcf802a], cl */
  W8((uint32_t)(0xcf802au), (ecx & 0xffu));
/* 960286: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 960287: ret  */
  esp += 4; SPILL(); return;
}

void f_960290(void) {
  LOAD_REGS();
L_960290: /* 960290: mov eax, dword ptr [0xcf81c0] */
  eax = R32((uint32_t)(0xcf81c0u));
/* 960295: mov byte ptr [eax + 0xcf7ac8], 0x3b */
  W8((uint32_t)(eax + 0xcf7ac8u), 0x3bu);
/* 96029c: mov ecx, dword ptr [0xcf81c0] */
  ecx = R32((uint32_t)(0xcf81c0u));
/* 9602a2: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 9602a5: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9602a6: mov dword ptr [0xcf81c0], ecx */
  W32((uint32_t)(0xcf81c0u), ecx);
/* 9602ac: mov dword ptr [0xcf7c78], 0xafba68 */
  W32((uint32_t)(0xcf7c78u), 0xafba68u);
/* 9602b6: mov word ptr [0xcf7f0a], ax */
  W16((uint32_t)(0xcf7f0au), (eax & 0xffffu));
/* 9602bc: mov byte ptr [0xcf8053], 0 */
  W8((uint32_t)(0xcf8053u), 0x0u);
/* 9602c3: mov byte ptr [ecx + 0xcf7ac8], 0x8e */
  W8((uint32_t)(ecx + 0xcf7ac8u), 0x8eu);
/* 9602ca: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 9602d0: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 9602d1: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 9602d7: mov cl, 1 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 9602d9: mov dword ptr [0xcf7dc4], 0xafba58 */
  W32((uint32_t)(0xcf7dc4u), 0xafba58u);
/* 9602e3: mov word ptr [0xcf7fb0], ax */
  W16((uint32_t)(0xcf7fb0u), (eax & 0xffffu));
/* 9602e9: mov byte ptr [0xcf80a6], cl */
  W8((uint32_t)(0xcf80a6u), (ecx & 0xffu));
/* 9602ef: mov byte ptr [edx + 0xcf7ac8], 0x91 */
  W8((uint32_t)(edx + 0xcf7ac8u), 0x91u);
/* 9602f6: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 9602fc: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 9602fd: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 960303: mov dword ptr [0xcf7dd0], 0xafba34 */
  W32((uint32_t)(0xcf7dd0u), 0xafba34u);
/* 96030d: mov word ptr [0xcf7fb6], ax */
  W16((uint32_t)(0xcf7fb6u), (eax & 0xffffu));
/* 960313: mov byte ptr [0xcf80a9], cl */
  W8((uint32_t)(0xcf80a9u), (ecx & 0xffu));
/* 960319: mov byte ptr [edx + 0xcf7ac8], 0x1f */
  W8((uint32_t)(edx + 0xcf7ac8u), 0x1fu);
/* 960320: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 960326: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 960327: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 96032d: mov dword ptr [0xcf7c08], 0xafba04 */
  W32((uint32_t)(0xcf7c08u), 0xafba04u);
/* 960337: mov word ptr [0xcf7ed2], ax */
  W16((uint32_t)(0xcf7ed2u), (eax & 0xffffu));
/* 96033d: mov byte ptr [0xcf8037], cl */
  W8((uint32_t)(0xcf8037u), (ecx & 0xffu));
/* 960343: mov byte ptr [edx + 0xcf7ac8], 0x5d */
  W8((uint32_t)(edx + 0xcf7ac8u), 0x5du);
/* 96034a: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 960350: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 960351: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 960357: mov dword ptr [0xcf7d00], 0xafb9d8 */
  W32((uint32_t)(0xcf7d00u), 0xafb9d8u);
/* 960361: mov word ptr [0xcf7f4e], ax */
  W16((uint32_t)(0xcf7f4eu), (eax & 0xffffu));
/* 960367: mov byte ptr [0xcf8075], 6 */
  W8((uint32_t)(0xcf8075u), 0x6u);
/* 96036e: mov byte ptr [edx + 0xcf7ac8], 0x90 */
  W8((uint32_t)(edx + 0xcf7ac8u), 0x90u);
/* 960375: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 96037b: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 96037c: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 960382: mov dword ptr [0xcf7dcc], 0xafb9b0 */
  W32((uint32_t)(0xcf7dccu), 0xafb9b0u);
/* 96038c: mov word ptr [0xcf7fb4], ax */
  W16((uint32_t)(0xcf7fb4u), (eax & 0xffffu));
/* 960392: mov byte ptr [0xcf80a8], cl */
  W8((uint32_t)(0xcf80a8u), (ecx & 0xffu));
/* 960398: mov byte ptr [edx + 0xcf7ac8], 0xb2 */
  W8((uint32_t)(edx + 0xcf7ac8u), 0xb2u);
/* 96039f: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 9603a5: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 9603a6: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 9603ac: mov dword ptr [0xcf7e54], 0xafb998 */
  W32((uint32_t)(0xcf7e54u), 0xafb998u);
/* 9603b6: mov word ptr [0xcf7ff8], ax */
  W16((uint32_t)(0xcf7ff8u), (eax & 0xffffu));
/* 9603bc: mov byte ptr [0xcf80ca], cl */
  W8((uint32_t)(0xcf80cau), (ecx & 0xffu));
/* 9603c2: mov byte ptr [edx + 0xcf7ac8], 0x8f */
  W8((uint32_t)(edx + 0xcf7ac8u), 0x8fu);
/* 9603c9: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 9603cf: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 9603d0: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 9603d6: mov dword ptr [0xcf7dc8], 0xafb978 */
  W32((uint32_t)(0xcf7dc8u), 0xafb978u);
/* 9603e0: mov word ptr [0xcf7fb2], ax */
  W16((uint32_t)(0xcf7fb2u), (eax & 0xffffu));
/* 9603e6: mov byte ptr [0xcf80a7], cl */
  W8((uint32_t)(0xcf80a7u), (ecx & 0xffu));
/* 9603ec: mov byte ptr [edx + 0xcf7ac8], 0x30 */
  W8((uint32_t)(edx + 0xcf7ac8u), 0x30u);
/* 9603f3: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 9603f9: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 9603fa: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 960400: mov dword ptr [0xcf7c4c], 0xafb94c */
  W32((uint32_t)(0xcf7c4cu), 0xafb94cu);
/* 96040a: mov word ptr [0xcf7ef4], ax */
  W16((uint32_t)(0xcf7ef4u), (eax & 0xffffu));
/* 960410: mov byte ptr [0xcf8048], cl */
  W8((uint32_t)(0xcf8048u), (ecx & 0xffu));
/* 960416: mov byte ptr [edx + 0xcf7ac8], 0x31 */
  W8((uint32_t)(edx + 0xcf7ac8u), 0x31u);
/* 96041d: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 960423: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 960424: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 96042a: mov dword ptr [0xcf7c50], 0xafb924 */
  W32((uint32_t)(0xcf7c50u), 0xafb924u);
/* 960434: mov word ptr [0xcf7ef6], ax */
  W16((uint32_t)(0xcf7ef6u), (eax & 0xffffu));
/* 96043a: mov byte ptr [0xcf8049], cl */
  W8((uint32_t)(0xcf8049u), (ecx & 0xffu));
/* 960440: mov byte ptr [edx + 0xcf7ac8], 0x32 */
  W8((uint32_t)(edx + 0xcf7ac8u), 0x32u);
/* 960447: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 96044d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 96044e: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 960454: mov dword ptr [0xcf7c54], 0xafb8fc */
  W32((uint32_t)(0xcf7c54u), 0xafb8fcu);
/* 96045e: mov word ptr [0xcf7ef8], ax */
  W16((uint32_t)(0xcf7ef8u), (eax & 0xffffu));
/* 960464: mov byte ptr [0xcf804a], cl */
  W8((uint32_t)(0xcf804au), (ecx & 0xffu));
/* 96046a: mov byte ptr [edx + 0xcf7ac8], 0x33 */
  W8((uint32_t)(edx + 0xcf7ac8u), 0x33u);
/* 960471: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 960477: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 960478: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 96047e: mov dword ptr [0xcf7c58], 0xafb8e0 */
  W32((uint32_t)(0xcf7c58u), 0xafb8e0u);
/* 960488: mov word ptr [0xcf7efa], ax */
  W16((uint32_t)(0xcf7efau), (eax & 0xffffu));
/* 96048e: mov byte ptr [0xcf804b], cl */
  W8((uint32_t)(0xcf804bu), (ecx & 0xffu));
/* 960494: mov byte ptr [edx + 0xcf7ac8], 0x35 */
  W8((uint32_t)(edx + 0xcf7ac8u), 0x35u);
/* 96049b: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 9604a1: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 9604a2: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 9604a8: mov dword ptr [0xcf7c60], 0xafb8c0 */
  W32((uint32_t)(0xcf7c60u), 0xafb8c0u);
/* 9604b2: mov word ptr [0xcf7efe], ax */
  W16((uint32_t)(0xcf7efeu), (eax & 0xffffu));
/* 9604b8: mov byte ptr [0xcf804d], cl */
  W8((uint32_t)(0xcf804du), (ecx & 0xffu));
/* 9604be: mov byte ptr [edx + 0xcf7ac8], 0x34 */
  W8((uint32_t)(edx + 0xcf7ac8u), 0x34u);
/* 9604c5: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 9604cb: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 9604cc: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 9604d2: mov dword ptr [0xcf7c5c], 0xafb8a0 */
  W32((uint32_t)(0xcf7c5cu), 0xafb8a0u);
/* 9604dc: mov word ptr [0xcf7efc], ax */
  W16((uint32_t)(0xcf7efcu), (eax & 0xffffu));
/* 9604e2: mov byte ptr [0xcf804c], cl */
  W8((uint32_t)(0xcf804cu), (ecx & 0xffu));
/* 9604e8: mov byte ptr [edx + 0xcf7ac8], 0xb1 */
  W8((uint32_t)(edx + 0xcf7ac8u), 0xb1u);
/* 9604ef: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 9604f5: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 9604f6: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 9604fc: mov dword ptr [0xcf7e50], 0xafb86c */
  W32((uint32_t)(0xcf7e50u), 0xafb86cu);
/* 960506: mov word ptr [0xcf7ff6], ax */
  W16((uint32_t)(0xcf7ff6u), (eax & 0xffffu));
/* 96050c: mov byte ptr [0xcf80c9], cl */
  W8((uint32_t)(0xcf80c9u), (ecx & 0xffu));
/* 960512: mov byte ptr [edx + 0xcf7ac8], 0x8d */
  W8((uint32_t)(edx + 0xcf7ac8u), 0x8du);
/* 960519: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 96051f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 960520: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 960526: mov dword ptr [0xcf7dc0], 0xafb844 */
  W32((uint32_t)(0xcf7dc0u), 0xafb844u);
/* 960530: mov word ptr [0xcf7fae], ax */
  W16((uint32_t)(0xcf7faeu), (eax & 0xffffu));
/* 960536: mov byte ptr [0xcf80a5], cl */
  W8((uint32_t)(0xcf80a5u), (ecx & 0xffu));
/* 96053c: mov byte ptr [edx + 0xcf7ac8], 0x13 */
  W8((uint32_t)(edx + 0xcf7ac8u), 0x13u);
/* 960543: inc dword ptr [0xcf81c0] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf81c0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0xcf81c0u), r);
  }
/* 960549: mov dword ptr [0xcf7bd8], 0xafb81c */
  W32((uint32_t)(0xcf7bd8u), 0xafb81cu);
/* 960553: mov word ptr [0xcf7eba], ax */
  W16((uint32_t)(0xcf7ebau), (eax & 0xffffu));
/* 960559: mov byte ptr [0xcf802b], cl */
  W8((uint32_t)(0xcf802bu), (ecx & 0xffu));
/* 96055f: ret  */
  esp += 4; SPILL(); return;
}

void f_960560(void) {
  LOAD_REGS();
L_960560: /* 960560: mov eax, dword ptr [0xcf81c0] */
  eax = R32((uint32_t)(0xcf81c0u));
/* 960565: mov byte ptr [eax + 0xcf7ac8], 0x3c */
  W8((uint32_t)(eax + 0xcf7ac8u), 0x3cu);
/* 96056c: mov eax, dword ptr [0xcf81c0] */
  eax = R32((uint32_t)(0xcf81c0u));
/* 960571: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 960574: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 960575: mov dword ptr [0xcf81c0], eax */
  W32((uint32_t)(0xcf81c0u), eax);
/* 96057a: mov dword ptr [0xcf7c7c], 0xafbce4 */
  W32((uint32_t)(0xcf7c7cu), 0xafbce4u);
/* 960584: mov word ptr [0xcf7f0c], cx */
  W16((uint32_t)(0xcf7f0cu), (ecx & 0xffffu));
/* 96058b: mov byte ptr [0xcf8054], 0 */
  W8((uint32_t)(0xcf8054u), 0x0u);
/* 960592: mov byte ptr [eax + 0xcf7ac8], 0x52 */
  W8((uint32_t)(eax + 0xcf7ac8u), 0x52u);
/* 960599: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 96059f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 9605a0: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 9605a6: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 9605a8: mov dword ptr [0xcf7cd4], 0xafbcb4 */
  W32((uint32_t)(0xcf7cd4u), 0xafbcb4u);
/* 9605b2: mov word ptr [0xcf7f38], cx */
  W16((uint32_t)(0xcf7f38u), (ecx & 0xffffu));
/* 9605b9: mov byte ptr [0xcf806a], al */
  W8((uint32_t)(0xcf806au), (eax & 0xffu));
/* 9605be: mov byte ptr [edx + 0xcf7ac8], 0x55 */
  W8((uint32_t)(edx + 0xcf7ac8u), 0x55u);
/* 9605c5: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 9605cb: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 9605cc: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 9605d2: mov dword ptr [0xcf7ce0], 0xafbc88 */
  W32((uint32_t)(0xcf7ce0u), 0xafbc88u);
/* 9605dc: mov word ptr [0xcf7f3e], 0x52 */
  W16((uint32_t)(0xcf7f3eu), 0x52u);
/* 9605e5: mov byte ptr [0xcf806d], al */
  W8((uint32_t)(0xcf806du), (eax & 0xffu));
/* 9605ea: mov byte ptr [edx + 0xcf7ac8], 0x53 */
  W8((uint32_t)(edx + 0xcf7ac8u), 0x53u);
/* 9605f1: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 9605f7: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 9605f8: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 9605fe: mov dword ptr [0xcf7cd8], 0xafbc50 */
  W32((uint32_t)(0xcf7cd8u), 0xafbc50u);
/* 960608: mov word ptr [0xcf7f3a], cx */
  W16((uint32_t)(0xcf7f3au), (ecx & 0xffffu));
/* 96060f: mov byte ptr [0xcf806b], al */
  W8((uint32_t)(0xcf806bu), (eax & 0xffu));
/* 960614: mov byte ptr [edx + 0xcf7ac8], 0x54 */
  W8((uint32_t)(edx + 0xcf7ac8u), 0x54u);
/* 96061b: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 960621: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 960622: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 960628: mov dword ptr [0xcf7cdc], 0xafbc28 */
  W32((uint32_t)(0xcf7cdcu), 0xafbc28u);
/* 960632: mov word ptr [0xcf7f3c], 0x53 */
  W16((uint32_t)(0xcf7f3cu), 0x53u);
/* 96063b: mov byte ptr [0xcf806c], al */
  W8((uint32_t)(0xcf806cu), (eax & 0xffu));
/* 960640: mov byte ptr [edx + 0xcf7ac8], 0x4a */
  W8((uint32_t)(edx + 0xcf7ac8u), 0x4au);
/* 960647: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 96064d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 96064e: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 960654: mov dword ptr [0xcf7cb4], 0xafbc00 */
  W32((uint32_t)(0xcf7cb4u), 0xafbc00u);
/* 96065e: mov word ptr [0xcf7f28], cx */
  W16((uint32_t)(0xcf7f28u), (ecx & 0xffffu));
/* 960665: mov byte ptr [0xcf8062], al */
  W8((uint32_t)(0xcf8062u), (eax & 0xffu));
/* 96066a: mov byte ptr [edx + 0xcf7ac8], 0x45 */
  W8((uint32_t)(edx + 0xcf7ac8u), 0x45u);
/* 960671: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 960677: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 960678: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 96067e: mov dword ptr [0xcf7ca0], 0xafbbd8 */
  W32((uint32_t)(0xcf7ca0u), 0xafbbd8u);
/* 960688: mov word ptr [0xcf7f1e], cx */
  W16((uint32_t)(0xcf7f1eu), (ecx & 0xffffu));
/* 96068f: mov byte ptr [0xcf805d], al */
  W8((uint32_t)(0xcf805du), (eax & 0xffu));
/* 960694: mov byte ptr [edx + 0xcf7ac8], 0x3d */
  W8((uint32_t)(edx + 0xcf7ac8u), 0x3du);
/* 96069b: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 9606a1: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 9606a2: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 9606a8: mov dword ptr [0xcf7c80], 0xafbbb4 */
  W32((uint32_t)(0xcf7c80u), 0xafbbb4u);
/* 9606b2: mov word ptr [0xcf7f0e], cx */
  W16((uint32_t)(0xcf7f0eu), (ecx & 0xffffu));
/* 9606b9: mov byte ptr [0xcf8055], 0 */
  W8((uint32_t)(0xcf8055u), 0x0u);
/* 9606c0: mov byte ptr [edx + 0xcf7ac8], 7 */
  W8((uint32_t)(edx + 0xcf7ac8u), 0x7u);
/* 9606c7: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 9606cd: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 9606ce: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 9606d4: mov dword ptr [0xcf7ba8], 0xafbb90 */
  W32((uint32_t)(0xcf7ba8u), 0xafbb90u);
/* 9606de: mov word ptr [0xcf7ea2], cx */
  W16((uint32_t)(0xcf7ea2u), (ecx & 0xffffu));
/* 9606e5: mov byte ptr [0xcf801f], al */
  W8((uint32_t)(0xcf801fu), (eax & 0xffu));
/* 9606ea: mov byte ptr [edx + 0xcf7ac8], 0xf */
  W8((uint32_t)(edx + 0xcf7ac8u), 0xfu);
/* 9606f1: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 9606f7: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 9606f8: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 9606fe: mov dword ptr [0xcf7bc8], 0xafbb60 */
  W32((uint32_t)(0xcf7bc8u), 0xafbb60u);
/* 960708: mov word ptr [0xcf7eb2], cx */
  W16((uint32_t)(0xcf7eb2u), (ecx & 0xffffu));
/* 96070f: mov byte ptr [0xcf8027], al */
  W8((uint32_t)(0xcf8027u), (eax & 0xffu));
/* 960714: mov byte ptr [edx + 0xcf7ac8], 0x10 */
  W8((uint32_t)(edx + 0xcf7ac8u), 0x10u);
/* 96071b: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 960721: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 960722: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 960728: mov dword ptr [0xcf7bcc], 0xafbb40 */
  W32((uint32_t)(0xcf7bccu), 0xafbb40u);
/* 960732: mov word ptr [0xcf7eb4], cx */
  W16((uint32_t)(0xcf7eb4u), (ecx & 0xffffu));
/* 960739: mov byte ptr [0xcf8028], al */
  W8((uint32_t)(0xcf8028u), (eax & 0xffu));
/* 96073e: mov byte ptr [edx + 0xcf7ac8], 0x11 */
  W8((uint32_t)(edx + 0xcf7ac8u), 0x11u);
/* 960745: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 96074b: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 96074c: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 960752: mov dword ptr [0xcf7bd0], 0xafbb18 */
  W32((uint32_t)(0xcf7bd0u), 0xafbb18u);
/* 96075c: mov word ptr [0xcf7eb6], cx */
  W16((uint32_t)(0xcf7eb6u), (ecx & 0xffffu));
/* 960763: mov byte ptr [0xcf8029], al */
  W8((uint32_t)(0xcf8029u), (eax & 0xffu));
/* 960768: mov byte ptr [edx + 0xcf7ac8], 0x37 */
  W8((uint32_t)(edx + 0xcf7ac8u), 0x37u);
/* 96076f: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 960775: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 960776: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 96077c: mov dword ptr [0xcf7c68], 0xafbae4 */
  W32((uint32_t)(0xcf7c68u), 0xafbae4u);
/* 960786: mov word ptr [0xcf7f02], cx */
  W16((uint32_t)(0xcf7f02u), (ecx & 0xffffu));
/* 96078d: mov byte ptr [0xcf804f], al */
  W8((uint32_t)(0xcf804fu), (eax & 0xffu));
/* 960792: mov byte ptr [edx + 0xcf7ac8], 0x1c */
  W8((uint32_t)(edx + 0xcf7ac8u), 0x1cu);
/* 960799: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 96079f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 9607a0: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 9607a6: mov dword ptr [0xcf7bfc], 0xafbac4 */
  W32((uint32_t)(0xcf7bfcu), 0xafbac4u);
/* 9607b0: mov word ptr [0xcf7ecc], cx */
  W16((uint32_t)(0xcf7eccu), (ecx & 0xffffu));
/* 9607b7: mov byte ptr [0xcf8034], al */
  W8((uint32_t)(0xcf8034u), (eax & 0xffu));
/* 9607bc: mov byte ptr [edx + 0xcf7ac8], 0x1d */
  W8((uint32_t)(edx + 0xcf7ac8u), 0x1du);
/* 9607c3: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 9607c9: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 9607ca: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 9607d0: mov dword ptr [0xcf7c00], 0xafbaa0 */
  W32((uint32_t)(0xcf7c00u), 0xafbaa0u);
/* 9607da: mov word ptr [0xcf7ece], cx */
  W16((uint32_t)(0xcf7eceu), (ecx & 0xffffu));
/* 9607e1: mov byte ptr [0xcf8035], al */
  W8((uint32_t)(0xcf8035u), (eax & 0xffu));
/* 9607e6: mov byte ptr [edx + 0xcf7ac8], 0x18 */
  W8((uint32_t)(edx + 0xcf7ac8u), 0x18u);
/* 9607ed: inc dword ptr [0xcf81c0] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf81c0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0xcf81c0u), r);
  }
/* 9607f3: mov dword ptr [0xcf7bec], 0xafba80 */
  W32((uint32_t)(0xcf7becu), 0xafba80u);
/* 9607fd: mov word ptr [0xcf7ec4], cx */
  W16((uint32_t)(0xcf7ec4u), (ecx & 0xffffu));
/* 960804: mov byte ptr [0xcf8030], al */
  W8((uint32_t)(0xcf8030u), (eax & 0xffu));
/* 960809: ret  */
  esp += 4; SPILL(); return;
}

void f_960810(void) {
  LOAD_REGS();
L_960810: /* 960810: mov eax, dword ptr [0xcf81c0] */
  eax = R32((uint32_t)(0xcf81c0u));
/* 960815: mov byte ptr [eax + 0xcf7ac8], 0x3e */
  W8((uint32_t)(eax + 0xcf7ac8u), 0x3eu);
/* 96081c: mov ecx, dword ptr [0xcf81c0] */
  ecx = R32((uint32_t)(0xcf81c0u));
/* 960822: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 960825: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 960826: mov dword ptr [0xcf81c0], ecx */
  W32((uint32_t)(0xcf81c0u), ecx);
/* 96082c: mov dword ptr [0xcf7c84], 0xafc0d0 */
  W32((uint32_t)(0xcf7c84u), 0xafc0d0u);
/* 960836: mov word ptr [0xcf7f10], ax */
  W16((uint32_t)(0xcf7f10u), (eax & 0xffffu));
/* 96083c: mov byte ptr [0xcf8056], 0 */
  W8((uint32_t)(0xcf8056u), 0x0u);
/* 960843: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 960844: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 960845: mov ebx, 0x96 */
  ebx = 0x96u;
/* 96084a: mov byte ptr [ecx + 0xcf7ac8], bl */
  W8((uint32_t)(ecx + 0xcf7ac8u), (ebx & 0xffu));
/* 960850: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 960856: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 960857: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 96085d: mov dword ptr [0xcf7de4], 0xafc0bc */
  W32((uint32_t)(0xcf7de4u), 0xafc0bcu);
/* 960867: mov word ptr [0xcf7fc0], ax */
  W16((uint32_t)(0xcf7fc0u), (eax & 0xffffu));
/* 96086d: mov cl, 1 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 96086f: mov byte ptr [0xcf80ae], cl */
  W8((uint32_t)(0xcf80aeu), (ecx & 0xffu));
/* 960875: mov byte ptr [edx + 0xcf7ac8], 0x69 */
  W8((uint32_t)(edx + 0xcf7ac8u), 0x69u);
/* 96087c: mov esi, dword ptr [0xcf81c0] */
  esi = R32((uint32_t)(0xcf81c0u));
/* 960882: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 960883: mov dword ptr [0xcf81c0], esi */
  W32((uint32_t)(0xcf81c0u), esi);
/* 960889: mov dword ptr [0xcf7d30], 0xafc08c */
  W32((uint32_t)(0xcf7d30u), 0xafc08cu);
/* 960893: mov word ptr [0xcf7f66], bx */
  W16((uint32_t)(0xcf7f66u), (ebx & 0xffffu));
/* 96089a: mov dl, 2 */
  edx = (edx & 0xffffff00u) | ((uint32_t)(0x2u) & 0xffu);
/* 96089c: mov byte ptr [0xcf8081], dl */
  W8((uint32_t)(0xcf8081u), (edx & 0xffu));
/* 9608a2: mov byte ptr [esi + 0xcf7ac8], 0x6a */
  W8((uint32_t)(esi + 0xcf7ac8u), 0x6au);
/* 9608a9: mov esi, dword ptr [0xcf81c0] */
  esi = R32((uint32_t)(0xcf81c0u));
/* 9608af: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 9608b0: mov dword ptr [0xcf81c0], esi */
  W32((uint32_t)(0xcf81c0u), esi);
/* 9608b6: mov dword ptr [0xcf7d34], 0xafc080 */
  W32((uint32_t)(0xcf7d34u), 0xafc080u);
/* 9608c0: mov word ptr [0xcf7f68], ax */
  W16((uint32_t)(0xcf7f68u), (eax & 0xffffu));
/* 9608c6: mov byte ptr [0xcf8082], dl */
  W8((uint32_t)(0xcf8082u), (edx & 0xffu));
/* 9608cc: mov byte ptr [esi + 0xcf7ac8], 0x6e */
  W8((uint32_t)(esi + 0xcf7ac8u), 0x6eu);
/* 9608d3: mov esi, dword ptr [0xcf81c0] */
  esi = R32((uint32_t)(0xcf81c0u));
/* 9608d9: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 9608da: mov dword ptr [0xcf81c0], esi */
  W32((uint32_t)(0xcf81c0u), esi);
/* 9608e0: mov dword ptr [0xcf7d44], 0xafc04c */
  W32((uint32_t)(0xcf7d44u), 0xafc04cu);
/* 9608ea: mov word ptr [0xcf7f70], bx */
  W16((uint32_t)(0xcf7f70u), (ebx & 0xffffu));
/* 9608f1: mov byte ptr [0xcf8086], dl */
  W8((uint32_t)(0xcf8086u), (edx & 0xffu));
/* 9608f7: mov byte ptr [esi + 0xcf7ac8], 0x6f */
  W8((uint32_t)(esi + 0xcf7ac8u), 0x6fu);
/* 9608fe: mov esi, dword ptr [0xcf81c0] */
  esi = R32((uint32_t)(0xcf81c0u));
/* 960904: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 960905: mov dword ptr [0xcf81c0], esi */
  W32((uint32_t)(0xcf81c0u), esi);
/* 96090b: mov dword ptr [0xcf7d48], 0xafc028 */
  W32((uint32_t)(0xcf7d48u), 0xafc028u);
/* 960915: mov word ptr [0xcf7f72], ax */
  W16((uint32_t)(0xcf7f72u), (eax & 0xffffu));
/* 96091b: mov byte ptr [0xcf8087], dl */
  W8((uint32_t)(0xcf8087u), (edx & 0xffu));
/* 960921: mov byte ptr [esi + 0xcf7ac8], 0x6b */
  W8((uint32_t)(esi + 0xcf7ac8u), 0x6bu);
/* 960928: mov esi, dword ptr [0xcf81c0] */
  esi = R32((uint32_t)(0xcf81c0u));
/* 96092e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 96092f: mov dword ptr [0xcf81c0], esi */
  W32((uint32_t)(0xcf81c0u), esi);
/* 960935: mov dword ptr [0xcf7d38], 0xafbffc */
  W32((uint32_t)(0xcf7d38u), 0xafbffcu);
/* 96093f: mov word ptr [0xcf7f6a], ax */
  W16((uint32_t)(0xcf7f6au), (eax & 0xffffu));
/* 960945: mov byte ptr [0xcf8083], dl */
  W8((uint32_t)(0xcf8083u), (edx & 0xffu));
/* 96094b: mov byte ptr [esi + 0xcf7ac8], 0x70 */
  W8((uint32_t)(esi + 0xcf7ac8u), 0x70u);
/* 960952: mov esi, dword ptr [0xcf81c0] */
  esi = R32((uint32_t)(0xcf81c0u));
/* 960958: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 960959: mov dword ptr [0xcf81c0], esi */
  W32((uint32_t)(0xcf81c0u), esi);
/* 96095f: mov dword ptr [0xcf7d4c], 0xafbfdc */
  W32((uint32_t)(0xcf7d4cu), 0xafbfdcu);
/* 960969: mov word ptr [0xcf7f74], ax */
  W16((uint32_t)(0xcf7f74u), (eax & 0xffffu));
/* 96096f: mov byte ptr [0xcf8088], dl */
  W8((uint32_t)(0xcf8088u), (edx & 0xffu));
/* 960975: mov byte ptr [esi + 0xcf7ac8], 0x5e */
  W8((uint32_t)(esi + 0xcf7ac8u), 0x5eu);
/* 96097c: mov esi, dword ptr [0xcf81c0] */
  esi = R32((uint32_t)(0xcf81c0u));
/* 960982: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 960983: mov dword ptr [0xcf81c0], esi */
  W32((uint32_t)(0xcf81c0u), esi);
/* 960989: mov dword ptr [0xcf7d04], 0xafbf98 */
  W32((uint32_t)(0xcf7d04u), 0xafbf98u);
/* 960993: mov word ptr [0xcf7f50], ax */
  W16((uint32_t)(0xcf7f50u), (eax & 0xffffu));
/* 960999: mov byte ptr [0xcf8076], 7 */
  W8((uint32_t)(0xcf8076u), 0x7u);
/* 9609a0: mov byte ptr [esi + 0xcf7ac8], 0x74 */
  W8((uint32_t)(esi + 0xcf7ac8u), 0x74u);
/* 9609a7: mov esi, dword ptr [0xcf81c0] */
  esi = R32((uint32_t)(0xcf81c0u));
/* 9609ad: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 9609ae: mov dword ptr [0xcf81c0], esi */
  W32((uint32_t)(0xcf81c0u), esi);
/* 9609b4: mov dword ptr [0xcf7d5c], 0xafbf60 */
  W32((uint32_t)(0xcf7d5cu), 0xafbf60u);
/* 9609be: mov word ptr [0xcf7f7c], ax */
  W16((uint32_t)(0xcf7f7cu), (eax & 0xffffu));
/* 9609c4: mov byte ptr [0xcf808c], 8 */
  W8((uint32_t)(0xcf808cu), 0x8u);
/* 9609cb: mov byte ptr [esi + 0xcf7ac8], 0xc0 */
  W8((uint32_t)(esi + 0xcf7ac8u), 0xc0u);
/* 9609d2: mov esi, dword ptr [0xcf81c0] */
  esi = R32((uint32_t)(0xcf81c0u));
/* 9609d8: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 9609d9: mov dword ptr [0xcf81c0], esi */
  W32((uint32_t)(0xcf81c0u), esi);
/* 9609df: mov dword ptr [0xcf7e8c], 0xafbf3c */
  W32((uint32_t)(0xcf7e8cu), 0xafbf3cu);
/* 9609e9: mov word ptr [0xcf8014], ax */
  W16((uint32_t)(0xcf8014u), (eax & 0xffffu));
/* 9609ef: mov byte ptr [0xcf80d8], cl */
  W8((uint32_t)(0xcf80d8u), (ecx & 0xffu));
/* 9609f5: mov byte ptr [esi + 0xcf7ac8], 0xc1 */
  W8((uint32_t)(esi + 0xcf7ac8u), 0xc1u);
/* 9609fc: mov esi, dword ptr [0xcf81c0] */
  esi = R32((uint32_t)(0xcf81c0u));
/* 960a02: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 960a03: mov dword ptr [0xcf81c0], esi */
  W32((uint32_t)(0xcf81c0u), esi);
/* 960a09: mov dword ptr [0xcf7e90], 0xafbf14 */
  W32((uint32_t)(0xcf7e90u), 0xafbf14u);
/* 960a13: mov word ptr [0xcf8016], ax */
  W16((uint32_t)(0xcf8016u), (eax & 0xffffu));
/* 960a19: mov byte ptr [0xcf80d9], cl */
  W8((uint32_t)(0xcf80d9u), (ecx & 0xffu));
/* 960a1f: mov byte ptr [esi + 0xcf7ac8], 0xb0 */
  W8((uint32_t)(esi + 0xcf7ac8u), 0xb0u);
/* 960a26: mov esi, dword ptr [0xcf81c0] */
  esi = R32((uint32_t)(0xcf81c0u));
/* 960a2c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 960a2d: mov dword ptr [0xcf81c0], esi */
  W32((uint32_t)(0xcf81c0u), esi);
/* 960a33: mov dword ptr [0xcf7e4c], 0xafbee0 */
  W32((uint32_t)(0xcf7e4cu), 0xafbee0u);
/* 960a3d: mov word ptr [0xcf7ff4], ax */
  W16((uint32_t)(0xcf7ff4u), (eax & 0xffffu));
/* 960a43: mov byte ptr [0xcf80c8], cl */
  W8((uint32_t)(0xcf80c8u), (ecx & 0xffu));
/* 960a49: mov byte ptr [esi + 0xcf7ac8], 0x71 */
  W8((uint32_t)(esi + 0xcf7ac8u), 0x71u);
/* 960a50: mov esi, dword ptr [0xcf81c0] */
  esi = R32((uint32_t)(0xcf81c0u));
/* 960a56: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 960a57: mov dword ptr [0xcf81c0], esi */
  W32((uint32_t)(0xcf81c0u), esi);
/* 960a5d: mov dword ptr [0xcf7d50], 0xafbecc */
  W32((uint32_t)(0xcf7d50u), 0xafbeccu);
/* 960a67: mov word ptr [0xcf7f76], ax */
  W16((uint32_t)(0xcf7f76u), (eax & 0xffffu));
/* 960a6d: mov byte ptr [0xcf8089], cl */
  W8((uint32_t)(0xcf8089u), (ecx & 0xffu));
/* 960a73: mov byte ptr [esi + 0xcf7ac8], 0x8c */
  W8((uint32_t)(esi + 0xcf7ac8u), 0x8cu);
/* 960a7a: mov esi, dword ptr [0xcf81c0] */
  esi = R32((uint32_t)(0xcf81c0u));
/* 960a80: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 960a81: mov dword ptr [0xcf81c0], esi */
  W32((uint32_t)(0xcf81c0u), esi);
/* 960a87: mov dword ptr [0xcf7dbc], 0xafbea4 */
  W32((uint32_t)(0xcf7dbcu), 0xafbea4u);
/* 960a91: mov word ptr [0xcf7fac], ax */
  W16((uint32_t)(0xcf7facu), (eax & 0xffffu));
/* 960a97: mov byte ptr [0xcf80a4], cl */
  W8((uint32_t)(0xcf80a4u), (ecx & 0xffu));
/* 960a9d: mov ebx, 0x25 */
  ebx = 0x25u;
/* 960aa2: mov byte ptr [esi + 0xcf7ac8], bl */
  W8((uint32_t)(esi + 0xcf7ac8u), (ebx & 0xffu));
/* 960aa8: mov esi, dword ptr [0xcf81c0] */
  esi = R32((uint32_t)(0xcf81c0u));
/* 960aae: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 960aaf: mov dword ptr [0xcf81c0], esi */
  W32((uint32_t)(0xcf81c0u), esi);
/* 960ab5: mov dword ptr [0xcf7c20], 0xafbe74 */
  W32((uint32_t)(0xcf7c20u), 0xafbe74u);
/* 960abf: mov word ptr [0xcf7ede], ax */
  W16((uint32_t)(0xcf7edeu), (eax & 0xffffu));
/* 960ac5: mov byte ptr [0xcf803d], cl */
  W8((uint32_t)(0xcf803du), (ecx & 0xffu));
/* 960acb: mov byte ptr [esi + 0xcf7ac8], 0x24 */
  W8((uint32_t)(esi + 0xcf7ac8u), 0x24u);
/* 960ad2: mov esi, dword ptr [0xcf81c0] */
  esi = R32((uint32_t)(0xcf81c0u));
/* 960ad8: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 960ad9: mov dword ptr [0xcf81c0], esi */
  W32((uint32_t)(0xcf81c0u), esi);
/* 960adf: mov dword ptr [0xcf7c1c], 0xafbe5c */
  W32((uint32_t)(0xcf7c1cu), 0xafbe5cu);
/* 960ae9: mov word ptr [0xcf7edc], bx */
  W16((uint32_t)(0xcf7edcu), (ebx & 0xffffu));
/* 960af0: mov byte ptr [0xcf803c], dl */
  W8((uint32_t)(0xcf803cu), (edx & 0xffu));
/* 960af6: mov byte ptr [esi + 0xcf7ac8], 0x23 */
  W8((uint32_t)(esi + 0xcf7ac8u), 0x23u);
/* 960afd: mov esi, dword ptr [0xcf81c0] */
  esi = R32((uint32_t)(0xcf81c0u));
/* 960b03: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 960b04: mov dword ptr [0xcf81c0], esi */
  W32((uint32_t)(0xcf81c0u), esi);
/* 960b0a: mov dword ptr [0xcf7c18], 0xafbe4c */
  W32((uint32_t)(0xcf7c18u), 0xafbe4cu);
/* 960b14: mov word ptr [0xcf7eda], ax */
  W16((uint32_t)(0xcf7edau), (eax & 0xffffu));
/* 960b1a: mov byte ptr [0xcf803b], 3 */
  W8((uint32_t)(0xcf803bu), 0x3u);
/* 960b21: mov byte ptr [esi + 0xcf7ac8], 0x6c */
  W8((uint32_t)(esi + 0xcf7ac8u), 0x6cu);
/* 960b28: mov esi, dword ptr [0xcf81c0] */
  esi = R32((uint32_t)(0xcf81c0u));
/* 960b2e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 960b2f: mov dword ptr [0xcf81c0], esi */
  W32((uint32_t)(0xcf81c0u), esi);
/* 960b35: mov dword ptr [0xcf7d3c], 0xafbe2c */
  W32((uint32_t)(0xcf7d3cu), 0xafbe2cu);
/* 960b3f: mov word ptr [0xcf7f6c], ax */
  W16((uint32_t)(0xcf7f6cu), (eax & 0xffffu));
/* 960b45: mov byte ptr [0xcf8084], cl */
  W8((uint32_t)(0xcf8084u), (ecx & 0xffu));
/* 960b4b: mov byte ptr [esi + 0xcf7ac8], 0x6d */
  W8((uint32_t)(esi + 0xcf7ac8u), 0x6du);
/* 960b52: mov esi, dword ptr [0xcf81c0] */
  esi = R32((uint32_t)(0xcf81c0u));
/* 960b58: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 960b59: mov dword ptr [0xcf81c0], esi */
  W32((uint32_t)(0xcf81c0u), esi);
/* 960b5f: mov dword ptr [0xcf7d40], 0xafbe18 */
  W32((uint32_t)(0xcf7d40u), 0xafbe18u);
/* 960b69: mov word ptr [0xcf7f6e], ax */
  W16((uint32_t)(0xcf7f6eu), (eax & 0xffffu));
/* 960b6f: mov byte ptr [0xcf8085], cl */
  W8((uint32_t)(0xcf8085u), (ecx & 0xffu));
/* 960b75: mov byte ptr [esi + 0xcf7ac8], 0x68 */
  W8((uint32_t)(esi + 0xcf7ac8u), 0x68u);
/* 960b7c: mov esi, dword ptr [0xcf81c0] */
  esi = R32((uint32_t)(0xcf81c0u));
/* 960b82: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 960b83: mov dword ptr [0xcf81c0], esi */
  W32((uint32_t)(0xcf81c0u), esi);
/* 960b89: mov dword ptr [0xcf7d2c], 0xafbdf0 */
  W32((uint32_t)(0xcf7d2cu), 0xafbdf0u);
/* 960b93: mov word ptr [0xcf7f64], ax */
  W16((uint32_t)(0xcf7f64u), (eax & 0xffffu));
/* 960b99: mov byte ptr [0xcf8080], cl */
  W8((uint32_t)(0xcf8080u), (ecx & 0xffu));
/* 960b9f: mov byte ptr [esi + 0xcf7ac8], 0x72 */
  W8((uint32_t)(esi + 0xcf7ac8u), 0x72u);
/* 960ba6: mov esi, dword ptr [0xcf81c0] */
  esi = R32((uint32_t)(0xcf81c0u));
/* 960bac: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 960bad: mov dword ptr [0xcf81c0], esi */
  W32((uint32_t)(0xcf81c0u), esi);
/* 960bb3: mov dword ptr [0xcf7d54], 0xafbdd4 */
  W32((uint32_t)(0xcf7d54u), 0xafbdd4u);
/* 960bbd: mov word ptr [0xcf7f78], ax */
  W16((uint32_t)(0xcf7f78u), (eax & 0xffffu));
/* 960bc3: mov byte ptr [0xcf808a], cl */
  W8((uint32_t)(0xcf808au), (ecx & 0xffu));
/* 960bc9: mov byte ptr [esi + 0xcf7ac8], 0x26 */
  W8((uint32_t)(esi + 0xcf7ac8u), 0x26u);
/* 960bd0: mov esi, dword ptr [0xcf81c0] */
  esi = R32((uint32_t)(0xcf81c0u));
/* 960bd6: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 960bd7: mov dword ptr [0xcf81c0], esi */
  W32((uint32_t)(0xcf81c0u), esi);
/* 960bdd: mov byte ptr [0xcf803e], cl */
  W8((uint32_t)(0xcf803eu), (ecx & 0xffu));
/* 960be3: mov dword ptr [0xcf7c24], 0xafbda0 */
  W32((uint32_t)(0xcf7c24u), 0xafbda0u);
/* 960bed: mov word ptr [0xcf7ee0], ax */
  W16((uint32_t)(0xcf7ee0u), (eax & 0xffffu));
/* 960bf3: mov byte ptr [esi + 0xcf7ac8], 0x2a */
  W8((uint32_t)(esi + 0xcf7ac8u), 0x2au);
/* 960bfa: mov esi, dword ptr [0xcf81c0] */
  esi = R32((uint32_t)(0xcf81c0u));
/* 960c00: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 960c01: mov dword ptr [0xcf81c0], esi */
  W32((uint32_t)(0xcf81c0u), esi);
/* 960c07: mov byte ptr [0xcf8042], cl */
  W8((uint32_t)(0xcf8042u), (ecx & 0xffu));
/* 960c0d: mov dword ptr [0xcf7c34], 0xafbd78 */
  W32((uint32_t)(0xcf7c34u), 0xafbd78u);
/* 960c17: mov word ptr [0xcf7ee8], ax */
  W16((uint32_t)(0xcf7ee8u), (eax & 0xffffu));
/* 960c1d: mov byte ptr [esi + 0xcf7ac8], 0x67 */
  W8((uint32_t)(esi + 0xcf7ac8u), 0x67u);
/* 960c24: mov esi, dword ptr [0xcf81c0] */
  esi = R32((uint32_t)(0xcf81c0u));
/* 960c2a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 960c2b: mov dword ptr [0xcf81c0], esi */
  W32((uint32_t)(0xcf81c0u), esi);
/* 960c31: mov byte ptr [0xcf807f], cl */
  W8((uint32_t)(0xcf807fu), (ecx & 0xffu));
/* 960c37: mov dword ptr [0xcf7d28], 0xafbd44 */
  W32((uint32_t)(0xcf7d28u), 0xafbd44u);
/* 960c41: mov word ptr [0xcf7f62], ax */
  W16((uint32_t)(0xcf7f62u), (eax & 0xffffu));
/* 960c47: mov byte ptr [esi + 0xcf7ac8], 0x78 */
  W8((uint32_t)(esi + 0xcf7ac8u), 0x78u);
/* 960c4e: mov esi, dword ptr [0xcf81c0] */
  esi = R32((uint32_t)(0xcf81c0u));
/* 960c54: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 960c55: mov dword ptr [0xcf81c0], esi */
  W32((uint32_t)(0xcf81c0u), esi);
/* 960c5b: mov byte ptr [0xcf8090], cl */
  W8((uint32_t)(0xcf8090u), (ecx & 0xffu));
/* 960c61: mov dword ptr [0xcf7d6c], 0xafbd20 */
  W32((uint32_t)(0xcf7d6cu), 0xafbd20u);
/* 960c6b: mov word ptr [0xcf7f84], ax */
  W16((uint32_t)(0xcf7f84u), (eax & 0xffffu));
/* 960c71: mov byte ptr [esi + 0xcf7ac8], 0xad */
  W8((uint32_t)(esi + 0xcf7ac8u), 0xadu);
/* 960c78: mov ecx, dword ptr [0xcf81c0] */
  ecx = R32((uint32_t)(0xcf81c0u));
/* 960c7e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 960c7f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 960c80: mov dword ptr [0xcf81c0], ecx */
  W32((uint32_t)(0xcf81c0u), ecx);
/* 960c86: mov dword ptr [0xcf7e40], 0xafbd04 */
  W32((uint32_t)(0xcf7e40u), 0xafbd04u);
/* 960c90: mov word ptr [0xcf7fee], ax */
  W16((uint32_t)(0xcf7feeu), (eax & 0xffffu));
/* 960c96: mov byte ptr [0xcf80c5], dl */
  W8((uint32_t)(0xcf80c5u), (edx & 0xffu));
/* 960c9c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 960c9d: ret  */
  esp += 4; SPILL(); return;
}

void f_960ca0(void) {
  LOAD_REGS();
L_960ca0: /* 960ca0: mov eax, dword ptr [0xcf81c0] */
  eax = R32((uint32_t)(0xcf81c0u));
/* 960ca5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 960ca6: xor ebx, ebx */
  ebx = 0;
/* 960ca8: mov byte ptr [eax + 0xcf7ac8], bl */
  W8((uint32_t)(eax + 0xcf7ac8u), (ebx & 0xffu));
/* 960cae: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 960cb4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 960cb5: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 960cb8: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 960cb9: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 960cbf: mov dword ptr [0xcf7b8c], 0xafc1fc */
  W32((uint32_t)(0xcf7b8cu), 0xafc1fcu);
/* 960cc9: mov word ptr [0xcf7e94], ax */
  W16((uint32_t)(0xcf7e94u), (eax & 0xffffu));
/* 960ccf: mov cl, 1 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 960cd1: mov byte ptr [0xcf8018], cl */
  W8((uint32_t)(0xcf8018u), (ecx & 0xffu));
/* 960cd7: mov byte ptr [edx + 0xcf7ac8], 2 */
  W8((uint32_t)(edx + 0xcf7ac8u), 0x2u);
/* 960cde: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 960ce4: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 960ce5: mov word ptr [0xcf7e98], bx */
  W16((uint32_t)(0xcf7e98u), (ebx & 0xffffu));
/* 960cec: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 960cf2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 960cf3: mov bl, 6 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x6u) & 0xffu);
/* 960cf5: mov byte ptr [0xcf801a], bl */
  W8((uint32_t)(0xcf801au), (ebx & 0xffu));
/* 960cfb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 960cfc: mov edi, 0xafc1e0 */
  edi = 0xafc1e0u;
/* 960d01: mov dword ptr [0xcf7b94], edi */
  W32((uint32_t)(0xcf7b94u), edi);
/* 960d07: mov byte ptr [edx + 0xcf7ac8], cl */
  W8((uint32_t)(edx + 0xcf7ac8u), (ecx & 0xffu));
/* 960d0d: mov ebp, dword ptr [0xcf81c0] */
  ebp = R32((uint32_t)(0xcf81c0u));
/* 960d13: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 960d14: mov dword ptr [0xcf81c0], ebp */
  W32((uint32_t)(0xcf81c0u), ebp);
/* 960d1a: mov word ptr [0xcf7e96], ax */
  W16((uint32_t)(0xcf7e96u), (eax & 0xffffu));
/* 960d20: mov esi, 0xafc1c4 */
  esi = 0xafc1c4u;
/* 960d25: mov dword ptr [0xcf7b90], esi */
  W32((uint32_t)(0xcf7b90u), esi);
/* 960d2b: mov dl, 7 */
  edx = (edx & 0xffffff00u) | ((uint32_t)(0x7u) & 0xffu);
/* 960d2d: mov byte ptr [0xcf8019], dl */
  W8((uint32_t)(0xcf8019u), (edx & 0xffu));
/* 960d33: mov byte ptr [ebp + 0xcf7ac8], 0x19 */
  W8((uint32_t)(ebp + 0xcf7ac8u), 0x19u);
/* 960d3a: mov ebp, dword ptr [0xcf81c0] */
  ebp = R32((uint32_t)(0xcf81c0u));
/* 960d40: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 960d41: mov dword ptr [0xcf81c0], ebp */
  W32((uint32_t)(0xcf81c0u), ebp);
/* 960d47: mov dword ptr [0xcf7bf0], 0xafc1a4 */
  W32((uint32_t)(0xcf7bf0u), 0xafc1a4u);
/* 960d51: mov word ptr [0xcf7ec6], ax */
  W16((uint32_t)(0xcf7ec6u), (eax & 0xffffu));
/* 960d57: mov byte ptr [0xcf8031], cl */
  W8((uint32_t)(0xcf8031u), (ecx & 0xffu));
/* 960d5d: mov byte ptr [ebp + 0xcf7ac8], 0x1b */
  W8((uint32_t)(ebp + 0xcf7ac8u), 0x1bu);
/* 960d64: mov ebp, dword ptr [0xcf81c0] */
  ebp = R32((uint32_t)(0xcf81c0u));
/* 960d6a: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 960d6b: mov dword ptr [0xcf81c0], ebp */
  W32((uint32_t)(0xcf81c0u), ebp);
/* 960d71: mov dword ptr [0xcf7bf8], edi */
  W32((uint32_t)(0xcf7bf8u), edi);
/* 960d77: mov word ptr [0xcf7eca], 0x19 */
  W16((uint32_t)(0xcf7ecau), 0x19u);
/* 960d80: mov byte ptr [0xcf8033], bl */
  W8((uint32_t)(0xcf8033u), (ebx & 0xffu));
/* 960d86: mov byte ptr [ebp + 0xcf7ac8], 0x1a */
  W8((uint32_t)(ebp + 0xcf7ac8u), 0x1au);
/* 960d8d: mov ebp, dword ptr [0xcf81c0] */
  ebp = R32((uint32_t)(0xcf81c0u));
/* 960d93: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 960d94: mov dword ptr [0xcf81c0], ebp */
  W32((uint32_t)(0xcf81c0u), ebp);
/* 960d9a: mov dword ptr [0xcf7bf4], esi */
  W32((uint32_t)(0xcf7bf4u), esi);
/* 960da0: mov word ptr [0xcf7ec8], ax */
  W16((uint32_t)(0xcf7ec8u), (eax & 0xffffu));
/* 960da6: mov byte ptr [0xcf8032], dl */
  W8((uint32_t)(0xcf8032u), (edx & 0xffu));
/* 960dac: mov byte ptr [ebp + 0xcf7ac8], 0x14 */
  W8((uint32_t)(ebp + 0xcf7ac8u), 0x14u);
/* 960db3: mov ebp, dword ptr [0xcf81c0] */
  ebp = R32((uint32_t)(0xcf81c0u));
/* 960db9: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 960dba: mov dword ptr [0xcf81c0], ebp */
  W32((uint32_t)(0xcf81c0u), ebp);
/* 960dc0: mov dword ptr [0xcf7bdc], 0xafc184 */
  W32((uint32_t)(0xcf7bdcu), 0xafc184u);
/* 960dca: mov word ptr [0xcf7ebc], ax */
  W16((uint32_t)(0xcf7ebcu), (eax & 0xffffu));
/* 960dd0: mov byte ptr [0xcf802c], cl */
  W8((uint32_t)(0xcf802cu), (ecx & 0xffu));
/* 960dd6: mov byte ptr [ebp + 0xcf7ac8], 0x16 */
  W8((uint32_t)(ebp + 0xcf7ac8u), 0x16u);
/* 960ddd: mov ebp, dword ptr [0xcf81c0] */
  ebp = R32((uint32_t)(0xcf81c0u));
/* 960de3: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 960de4: mov dword ptr [0xcf81c0], ebp */
  W32((uint32_t)(0xcf81c0u), ebp);
/* 960dea: mov dword ptr [0xcf7be4], edi */
  W32((uint32_t)(0xcf7be4u), edi);
/* 960df0: mov word ptr [0xcf7ec0], 0x14 */
  W16((uint32_t)(0xcf7ec0u), 0x14u);
/* 960df9: mov byte ptr [0xcf802e], bl */
  W8((uint32_t)(0xcf802eu), (ebx & 0xffu));
/* 960dff: mov byte ptr [ebp + 0xcf7ac8], 0x15 */
  W8((uint32_t)(ebp + 0xcf7ac8u), 0x15u);
/* 960e06: mov ebp, dword ptr [0xcf81c0] */
  ebp = R32((uint32_t)(0xcf81c0u));
/* 960e0c: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 960e0d: mov dword ptr [0xcf81c0], ebp */
  W32((uint32_t)(0xcf81c0u), ebp);
/* 960e13: mov dword ptr [0xcf7be0], esi */
  W32((uint32_t)(0xcf7be0u), esi);
/* 960e19: mov word ptr [0xcf7ebe], ax */
  W16((uint32_t)(0xcf7ebeu), (eax & 0xffffu));
/* 960e1f: mov byte ptr [0xcf802d], dl */
  W8((uint32_t)(0xcf802du), (edx & 0xffu));
/* 960e25: mov byte ptr [ebp + 0xcf7ac8], 0xb */
  W8((uint32_t)(ebp + 0xcf7ac8u), 0xbu);
/* 960e2c: mov ebp, dword ptr [0xcf81c0] */
  ebp = R32((uint32_t)(0xcf81c0u));
/* 960e32: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 960e33: mov dword ptr [0xcf81c0], ebp */
  W32((uint32_t)(0xcf81c0u), ebp);
/* 960e39: mov dword ptr [0xcf7bb8], 0xafc150 */
  W32((uint32_t)(0xcf7bb8u), 0xafc150u);
/* 960e43: mov word ptr [0xcf7eaa], ax */
  W16((uint32_t)(0xcf7eaau), (eax & 0xffffu));
/* 960e49: mov byte ptr [0xcf8023], cl */
  W8((uint32_t)(0xcf8023u), (ecx & 0xffu));
/* 960e4f: mov byte ptr [ebp + 0xcf7ac8], 0xd */
  W8((uint32_t)(ebp + 0xcf7ac8u), 0xdu);
/* 960e56: mov ebp, dword ptr [0xcf81c0] */
  ebp = R32((uint32_t)(0xcf81c0u));
/* 960e5c: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 960e5d: mov dword ptr [0xcf81c0], ebp */
  W32((uint32_t)(0xcf81c0u), ebp);
/* 960e63: mov dword ptr [0xcf7bc0], edi */
  W32((uint32_t)(0xcf7bc0u), edi);
/* 960e69: mov word ptr [0xcf7eae], 0xb */
  W16((uint32_t)(0xcf7eaeu), 0xbu);
/* 960e72: mov byte ptr [0xcf8025], bl */
  W8((uint32_t)(0xcf8025u), (ebx & 0xffu));
/* 960e78: mov byte ptr [ebp + 0xcf7ac8], 0xc */
  W8((uint32_t)(ebp + 0xcf7ac8u), 0xcu);
/* 960e7f: mov ebp, dword ptr [0xcf81c0] */
  ebp = R32((uint32_t)(0xcf81c0u));
/* 960e85: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 960e86: mov dword ptr [0xcf81c0], ebp */
  W32((uint32_t)(0xcf81c0u), ebp);
/* 960e8c: mov dword ptr [0xcf7bbc], esi */
  W32((uint32_t)(0xcf7bbcu), esi);
/* 960e92: mov word ptr [0xcf7eac], ax */
  W16((uint32_t)(0xcf7eacu), (eax & 0xffffu));
/* 960e98: mov byte ptr [0xcf8024], dl */
  W8((uint32_t)(0xcf8024u), (edx & 0xffu));
/* 960e9e: mov byte ptr [ebp + 0xcf7ac8], 0x27 */
  W8((uint32_t)(ebp + 0xcf7ac8u), 0x27u);
/* 960ea5: mov ebp, dword ptr [0xcf81c0] */
  ebp = R32((uint32_t)(0xcf81c0u));
/* 960eab: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 960eac: mov dword ptr [0xcf81c0], ebp */
  W32((uint32_t)(0xcf81c0u), ebp);
/* 960eb2: mov byte ptr [0xcf803f], cl */
  W8((uint32_t)(0xcf803fu), (ecx & 0xffu));
/* 960eb8: mov dword ptr [0xcf7c28], 0xafc130 */
  W32((uint32_t)(0xcf7c28u), 0xafc130u);
/* 960ec2: mov word ptr [0xcf7ee2], ax */
  W16((uint32_t)(0xcf7ee2u), (eax & 0xffffu));
/* 960ec8: mov byte ptr [ebp + 0xcf7ac8], 0x29 */
  W8((uint32_t)(ebp + 0xcf7ac8u), 0x29u);
/* 960ecf: mov ebp, dword ptr [0xcf81c0] */
  ebp = R32((uint32_t)(0xcf81c0u));
/* 960ed5: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 960ed6: mov dword ptr [0xcf81c0], ebp */
  W32((uint32_t)(0xcf81c0u), ebp);
/* 960edc: mov dword ptr [0xcf7c30], edi */
  W32((uint32_t)(0xcf7c30u), edi);
/* 960ee2: mov word ptr [0xcf7ee6], 0x27 */
  W16((uint32_t)(0xcf7ee6u), 0x27u);
/* 960eeb: mov byte ptr [0xcf8041], bl */
  W8((uint32_t)(0xcf8041u), (ebx & 0xffu));
/* 960ef1: mov byte ptr [ebp + 0xcf7ac8], 0x28 */
  W8((uint32_t)(ebp + 0xcf7ac8u), 0x28u);
/* 960ef8: mov ebp, dword ptr [0xcf81c0] */
  ebp = R32((uint32_t)(0xcf81c0u));
/* 960efe: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 960eff: mov dword ptr [0xcf81c0], ebp */
  W32((uint32_t)(0xcf81c0u), ebp);
/* 960f05: mov dword ptr [0xcf7c2c], esi */
  W32((uint32_t)(0xcf7c2cu), esi);
/* 960f0b: mov word ptr [0xcf7ee4], ax */
  W16((uint32_t)(0xcf7ee4u), (eax & 0xffffu));
/* 960f11: mov byte ptr [0xcf8040], dl */
  W8((uint32_t)(0xcf8040u), (edx & 0xffu));
/* 960f17: mov byte ptr [ebp + 0xcf7ac8], 0x4c */
  W8((uint32_t)(ebp + 0xcf7ac8u), 0x4cu);
/* 960f1e: mov ebp, dword ptr [0xcf81c0] */
  ebp = R32((uint32_t)(0xcf81c0u));
/* 960f24: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 960f25: mov dword ptr [0xcf81c0], ebp */
  W32((uint32_t)(0xcf81c0u), ebp);
/* 960f2b: mov byte ptr [0xcf8064], cl */
  W8((uint32_t)(0xcf8064u), (ecx & 0xffu));
/* 960f31: mov dword ptr [0xcf7cbc], 0xafc108 */
  W32((uint32_t)(0xcf7cbcu), 0xafc108u);
/* 960f3b: mov word ptr [0xcf7f2c], ax */
  W16((uint32_t)(0xcf7f2cu), (eax & 0xffffu));
/* 960f41: mov byte ptr [ebp + 0xcf7ac8], 0x4e */
  W8((uint32_t)(ebp + 0xcf7ac8u), 0x4eu);
/* 960f48: mov ebp, dword ptr [0xcf81c0] */
  ebp = R32((uint32_t)(0xcf81c0u));
/* 960f4e: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 960f4f: mov dword ptr [0xcf81c0], ebp */
  W32((uint32_t)(0xcf81c0u), ebp);
/* 960f55: mov dword ptr [0xcf7cc4], edi */
  W32((uint32_t)(0xcf7cc4u), edi);
/* 960f5b: mov word ptr [0xcf7f30], 0x4c */
  W16((uint32_t)(0xcf7f30u), 0x4cu);
/* 960f64: mov byte ptr [0xcf8066], bl */
  W8((uint32_t)(0xcf8066u), (ebx & 0xffu));
/* 960f6a: mov byte ptr [ebp + 0xcf7ac8], 0x4d */
  W8((uint32_t)(ebp + 0xcf7ac8u), 0x4du);
/* 960f71: mov ebp, dword ptr [0xcf81c0] */
  ebp = R32((uint32_t)(0xcf81c0u));
/* 960f77: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 960f78: mov dword ptr [0xcf81c0], ebp */
  W32((uint32_t)(0xcf81c0u), ebp);
/* 960f7e: mov dword ptr [0xcf7cc0], esi */
  W32((uint32_t)(0xcf7cc0u), esi);
/* 960f84: mov word ptr [0xcf7f2e], ax */
  W16((uint32_t)(0xcf7f2eu), (eax & 0xffffu));
/* 960f8a: mov byte ptr [0xcf8065], dl */
  W8((uint32_t)(0xcf8065u), (edx & 0xffu));
/* 960f90: mov byte ptr [ebp + 0xcf7ac8], 0x46 */
  W8((uint32_t)(ebp + 0xcf7ac8u), 0x46u);
/* 960f97: mov ebp, dword ptr [0xcf81c0] */
  ebp = R32((uint32_t)(0xcf81c0u));
/* 960f9d: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 960f9e: mov byte ptr [0xcf805e], cl */
  W8((uint32_t)(0xcf805eu), (ecx & 0xffu));
/* 960fa4: mov dword ptr [0xcf81c0], ebp */
  W32((uint32_t)(0xcf81c0u), ebp);
/* 960faa: mov dword ptr [0xcf7ca4], 0xafc0e8 */
  W32((uint32_t)(0xcf7ca4u), 0xafc0e8u);
/* 960fb4: mov word ptr [0xcf7f20], ax */
  W16((uint32_t)(0xcf7f20u), (eax & 0xffffu));
/* 960fba: mov byte ptr [ebp + 0xcf7ac8], 0x48 */
  W8((uint32_t)(ebp + 0xcf7ac8u), 0x48u);
/* 960fc1: mov ecx, dword ptr [0xcf81c0] */
  ecx = R32((uint32_t)(0xcf81c0u));
/* 960fc7: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 960fc8: mov dword ptr [0xcf81c0], ecx */
  W32((uint32_t)(0xcf81c0u), ecx);
/* 960fce: mov dword ptr [0xcf7cac], edi */
  W32((uint32_t)(0xcf7cacu), edi);
/* 960fd4: mov word ptr [0xcf7f24], 0x46 */
  W16((uint32_t)(0xcf7f24u), 0x46u);
/* 960fdd: mov byte ptr [0xcf8060], bl */
  W8((uint32_t)(0xcf8060u), (ebx & 0xffu));
/* 960fe3: mov byte ptr [ecx + 0xcf7ac8], 0x47 */
  W8((uint32_t)(ecx + 0xcf7ac8u), 0x47u);
/* 960fea: mov ecx, dword ptr [0xcf81c0] */
  ecx = R32((uint32_t)(0xcf81c0u));
/* 960ff0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 960ff1: mov dword ptr [0xcf7ca8], esi */
  W32((uint32_t)(0xcf7ca8u), esi);
/* 960ff7: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 960ff8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 960ff9: mov dword ptr [0xcf81c0], ecx */
  W32((uint32_t)(0xcf81c0u), ecx);
/* 960fff: mov word ptr [0xcf7f22], ax */
  W16((uint32_t)(0xcf7f22u), (eax & 0xffffu));
/* 961005: mov byte ptr [0xcf805f], dl */
  W8((uint32_t)(0xcf805fu), (edx & 0xffu));
/* 96100b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 96100c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96100d: ret  */
  esp += 4; SPILL(); return;
}

void f_961010(void) {
  LOAD_REGS();
L_961010: /* 961010: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 961011: mov eax, dword ptr [0xcf81c0] */
  eax = R32((uint32_t)(0xcf81c0u));
/* 961016: mov byte ptr [eax + 0xcf7ac8], 0x3f */
  W8((uint32_t)(eax + 0xcf7ac8u), 0x3fu);
/* 96101d: mov ecx, dword ptr [0xcf81c0] */
  ecx = R32((uint32_t)(0xcf81c0u));
/* 961023: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 961026: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 961027: mov dword ptr [0xcf81c0], ecx */
  W32((uint32_t)(0xcf81c0u), ecx);
/* 96102d: mov dword ptr [0xcf7c88], 0xafc5c4 */
  W32((uint32_t)(0xcf7c88u), 0xafc5c4u);
/* 961037: mov word ptr [0xcf7f12], ax */
  W16((uint32_t)(0xcf7f12u), (eax & 0xffffu));
/* 96103d: mov byte ptr [0xcf8057], 0 */
  W8((uint32_t)(0xcf8057u), 0x0u);
/* 961044: mov byte ptr [ecx + 0xcf7ac8], 0x9c */
  W8((uint32_t)(ecx + 0xcf7ac8u), 0x9cu);
/* 96104b: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 961051: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 961052: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 961058: mov cl, 1 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 96105a: mov dword ptr [0xcf7dfc], 0xafc59c */
  W32((uint32_t)(0xcf7dfcu), 0xafc59cu);
/* 961064: mov word ptr [0xcf7fcc], ax */
  W16((uint32_t)(0xcf7fccu), (eax & 0xffffu));
/* 96106a: mov byte ptr [0xcf80b4], cl */
  W8((uint32_t)(0xcf80b4u), (ecx & 0xffu));
/* 961070: mov byte ptr [edx + 0xcf7ac8], 0x9b */
  W8((uint32_t)(edx + 0xcf7ac8u), 0x9bu);
/* 961077: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 96107d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 96107e: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 961084: mov dword ptr [0xcf7df8], 0xafc578 */
  W32((uint32_t)(0xcf7df8u), 0xafc578u);
/* 96108e: mov word ptr [0xcf7fca], ax */
  W16((uint32_t)(0xcf7fcau), (eax & 0xffffu));
/* 961094: mov byte ptr [0xcf80b3], cl */
  W8((uint32_t)(0xcf80b3u), (ecx & 0xffu));
/* 96109a: mov byte ptr [edx + 0xcf7ac8], 0x9a */
  W8((uint32_t)(edx + 0xcf7ac8u), 0x9au);
/* 9610a1: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 9610a7: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 9610a8: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 9610ae: mov dword ptr [0xcf7df4], 0xafc54c */
  W32((uint32_t)(0xcf7df4u), 0xafc54cu);
/* 9610b8: mov word ptr [0xcf7fc8], ax */
  W16((uint32_t)(0xcf7fc8u), (eax & 0xffffu));
/* 9610be: mov byte ptr [0xcf80b2], cl */
  W8((uint32_t)(0xcf80b2u), (ecx & 0xffu));
/* 9610c4: mov byte ptr [edx + 0xcf7ac8], 0x4b */
  W8((uint32_t)(edx + 0xcf7ac8u), 0x4bu);
/* 9610cb: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 9610d1: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 9610d2: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 9610d8: mov dword ptr [0xcf7cb8], 0xafc520 */
  W32((uint32_t)(0xcf7cb8u), 0xafc520u);
/* 9610e2: mov word ptr [0xcf7f2a], ax */
  W16((uint32_t)(0xcf7f2au), (eax & 0xffffu));
/* 9610e8: mov byte ptr [0xcf8063], cl */
  W8((uint32_t)(0xcf8063u), (ecx & 0xffu));
/* 9610ee: mov byte ptr [edx + 0xcf7ac8], 0x49 */
  W8((uint32_t)(edx + 0xcf7ac8u), 0x49u);
/* 9610f5: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 9610fb: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 9610fc: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 961102: mov dword ptr [0xcf7cb0], 0xafc504 */
  W32((uint32_t)(0xcf7cb0u), 0xafc504u);
/* 96110c: mov word ptr [0xcf7f26], ax */
  W16((uint32_t)(0xcf7f26u), (eax & 0xffffu));
/* 961112: mov byte ptr [0xcf8061], cl */
  W8((uint32_t)(0xcf8061u), (ecx & 0xffu));
/* 961118: mov byte ptr [edx + 0xcf7ac8], 0x2c */
  W8((uint32_t)(edx + 0xcf7ac8u), 0x2cu);
/* 96111f: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 961125: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 961126: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 96112c: mov dword ptr [0xcf7c3c], 0xafc4dc */
  W32((uint32_t)(0xcf7c3cu), 0xafc4dcu);
/* 961136: mov word ptr [0xcf7eec], ax */
  W16((uint32_t)(0xcf7eecu), (eax & 0xffffu));
/* 96113c: mov byte ptr [0xcf8044], cl */
  W8((uint32_t)(0xcf8044u), (ecx & 0xffu));
/* 961142: mov byte ptr [edx + 0xcf7ac8], 0x44 */
  W8((uint32_t)(edx + 0xcf7ac8u), 0x44u);
/* 961149: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 96114f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 961150: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 961156: mov dword ptr [0xcf7c9c], 0xafc4b0 */
  W32((uint32_t)(0xcf7c9cu), 0xafc4b0u);
/* 961160: mov word ptr [0xcf7f1c], ax */
  W16((uint32_t)(0xcf7f1cu), (eax & 0xffffu));
/* 961166: mov byte ptr [0xcf805c], cl */
  W8((uint32_t)(0xcf805cu), (ecx & 0xffu));
/* 96116c: mov byte ptr [edx + 0xcf7ac8], 0x43 */
  W8((uint32_t)(edx + 0xcf7ac8u), 0x43u);
/* 961173: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 961179: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 96117a: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 961180: mov dword ptr [0xcf7c98], 0xafc484 */
  W32((uint32_t)(0xcf7c98u), 0xafc484u);
/* 96118a: mov word ptr [0xcf7f1a], ax */
  W16((uint32_t)(0xcf7f1au), (eax & 0xffffu));
/* 961190: mov byte ptr [0xcf805b], cl */
  W8((uint32_t)(0xcf805bu), (ecx & 0xffu));
/* 961196: mov byte ptr [edx + 0xcf7ac8], 0x2b */
  W8((uint32_t)(edx + 0xcf7ac8u), 0x2bu);
/* 96119d: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 9611a3: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 9611a4: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 9611aa: mov dword ptr [0xcf7c38], 0xafc458 */
  W32((uint32_t)(0xcf7c38u), 0xafc458u);
/* 9611b4: mov word ptr [0xcf7eea], ax */
  W16((uint32_t)(0xcf7eeau), (eax & 0xffffu));
/* 9611ba: mov byte ptr [0xcf8043], cl */
  W8((uint32_t)(0xcf8043u), (ecx & 0xffu));
/* 9611c0: mov byte ptr [edx + 0xcf7ac8], 0x98 */
  W8((uint32_t)(edx + 0xcf7ac8u), 0x98u);
/* 9611c7: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 9611cd: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 9611ce: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 9611d4: mov dword ptr [0xcf7dec], 0xafc428 */
  W32((uint32_t)(0xcf7decu), 0xafc428u);
/* 9611de: mov word ptr [0xcf7fc4], ax */
  W16((uint32_t)(0xcf7fc4u), (eax & 0xffffu));
/* 9611e4: mov byte ptr [0xcf80b0], cl */
  W8((uint32_t)(0xcf80b0u), (ecx & 0xffu));
/* 9611ea: mov byte ptr [edx + 0xcf7ac8], 0x99 */
  W8((uint32_t)(edx + 0xcf7ac8u), 0x99u);
/* 9611f1: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 9611f7: mov byte ptr [0xcf80b1], cl */
  W8((uint32_t)(0xcf80b1u), (ecx & 0xffu));
/* 9611fd: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 9611fe: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 961204: mov dword ptr [0xcf7df0], 0xafc41c */
  W32((uint32_t)(0xcf7df0u), 0xafc41cu);
/* 96120e: mov word ptr [0xcf7fc6], ax */
  W16((uint32_t)(0xcf7fc6u), (eax & 0xffffu));
/* 961214: mov byte ptr [edx + 0xcf7ac8], 0x5a */
  W8((uint32_t)(edx + 0xcf7ac8u), 0x5au);
/* 96121b: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 961221: mov byte ptr [0xcf8072], cl */
  W8((uint32_t)(0xcf8072u), (ecx & 0xffu));
/* 961227: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 961228: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 96122e: mov dword ptr [0xcf7cf4], 0xafc3e4 */
  W32((uint32_t)(0xcf7cf4u), 0xafc3e4u);
/* 961238: mov word ptr [0xcf7f48], ax */
  W16((uint32_t)(0xcf7f48u), (eax & 0xffffu));
/* 96123e: mov byte ptr [edx + 0xcf7ac8], 0x58 */
  W8((uint32_t)(edx + 0xcf7ac8u), 0x58u);
/* 961245: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 96124b: mov byte ptr [0xcf8070], cl */
  W8((uint32_t)(0xcf8070u), (ecx & 0xffu));
/* 961251: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 961252: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 961258: mov dword ptr [0xcf7cec], 0xafc3b4 */
  W32((uint32_t)(0xcf7cecu), 0xafc3b4u);
/* 961262: mov word ptr [0xcf7f44], ax */
  W16((uint32_t)(0xcf7f44u), (eax & 0xffffu));
/* 961268: mov byte ptr [edx + 0xcf7ac8], 0x57 */
  W8((uint32_t)(edx + 0xcf7ac8u), 0x57u);
/* 96126f: mov edx, dword ptr [0xcf81c0] */
  edx = R32((uint32_t)(0xcf81c0u));
/* 961275: mov byte ptr [0xcf806f], cl */
  W8((uint32_t)(0xcf806fu), (ecx & 0xffu));
/* 96127b: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 96127c: mov dword ptr [0xcf81c0], edx */
  W32((uint32_t)(0xcf81c0u), edx);
/* 961282: mov dword ptr [0xcf7ce8], 0xafc38c */
  W32((uint32_t)(0xcf7ce8u), 0xafc38cu);
/* 96128c: mov word ptr [0xcf7f42], ax */
  W16((uint32_t)(0xcf7f42u), (eax & 0xffffu));
/* 961292: mov byte ptr [edx + 0xcf7ac8], 0x5b */
  W8((uint32_t)(edx + 0xcf7ac8u), 0x5bu);
/* 961299: mov esi, dword ptr [0xcf81c0] */
  esi = R32((uint32_t)(0xcf81c0u));
/* 96129f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 9612a0: mov dword ptr [0xcf81c0], esi */
  W32((uint32_t)(0xcf81c0u), esi);
/* 9612a6: mov dword ptr [0xcf7cf8], 0xafc36c */
  W32((uint32_t)(0xcf7cf8u), 0xafc36cu);
/* 9612b0: mov word ptr [0xcf7f4a], 0x57 */
  W16((uint32_t)(0xcf7f4au), 0x57u);
/* 9612b9: mov dl, 2 */
  edx = (edx & 0xffffff00u) | ((uint32_t)(0x2u) & 0xffu);
/* 9612bb: mov byte ptr [0xcf8073], dl */
  W8((uint32_t)(0xcf8073u), (edx & 0xffu));
/* 9612c1: mov byte ptr [esi + 0xcf7ac8], 0x59 */
  W8((uint32_t)(esi + 0xcf7ac8u), 0x59u);
/* 9612c8: mov esi, dword ptr [0xcf81c0] */
  esi = R32((uint32_t)(0xcf81c0u));
/* 9612ce: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 9612cf: mov dword ptr [0xcf81c0], esi */
  W32((uint32_t)(0xcf81c0u), esi);
/* 9612d5: mov dword ptr [0xcf7cf0], 0xafc350 */
  W32((uint32_t)(0xcf7cf0u), 0xafc350u);
/* 9612df: mov word ptr [0xcf7f46], ax */
  W16((uint32_t)(0xcf7f46u), (eax & 0xffffu));
/* 9612e5: mov byte ptr [0xcf8071], 3 */
  W8((uint32_t)(0xcf8071u), 0x3u);
/* 9612ec: mov byte ptr [esi + 0xcf7ac8], 0xb8 */
  W8((uint32_t)(esi + 0xcf7ac8u), 0xb8u);
/* 9612f3: mov esi, dword ptr [0xcf81c0] */
  esi = R32((uint32_t)(0xcf81c0u));
/* 9612f9: mov byte ptr [0xcf80d0], cl */
  W8((uint32_t)(0xcf80d0u), (ecx & 0xffu));
/* 9612ff: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 961300: mov dword ptr [0xcf81c0], esi */
  W32((uint32_t)(0xcf81c0u), esi);
/* 961306: mov dword ptr [0xcf7e6c], 0 */
  W32((uint32_t)(0xcf7e6cu), 0x0u);
/* 961310: mov word ptr [0xcf8004], ax */
  W16((uint32_t)(0xcf8004u), (eax & 0xffffu));
/* 961316: mov byte ptr [esi + 0xcf7ac8], 0xb9 */
  W8((uint32_t)(esi + 0xcf7ac8u), 0xb9u);
/* 96131d: mov ecx, dword ptr [0xcf81c0] */
  ecx = R32((uint32_t)(0xcf81c0u));
/* 961323: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 961324: mov dword ptr [0xcf81c0], ecx */
  W32((uint32_t)(0xcf81c0u), ecx);
/* 96132a: mov dword ptr [0xcf7e70], 0xafc324 */
  W32((uint32_t)(0xcf7e70u), 0xafc324u);
/* 961334: mov word ptr [0xcf8006], 0xb8 */
  W16((uint32_t)(0xcf8006u), 0xb8u);
/* 96133d: mov byte ptr [0xcf80d1], dl */
  W8((uint32_t)(0xcf80d1u), (edx & 0xffu));
/* 961343: mov byte ptr [ecx + 0xcf7ac8], 0xba */
  W8((uint32_t)(ecx + 0xcf7ac8u), 0xbau);
/* 96134a: mov ecx, dword ptr [0xcf81c0] */
  ecx = R32((uint32_t)(0xcf81c0u));
/* 961350: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 961351: mov dword ptr [0xcf81c0], ecx */
  W32((uint32_t)(0xcf81c0u), ecx);
/* 961357: mov dword ptr [0xcf7e74], 0xafc2f8 */
  W32((uint32_t)(0xcf7e74u), 0xafc2f8u);
/* 961361: mov word ptr [0xcf8008], ax */
  W16((uint32_t)(0xcf8008u), (eax & 0xffffu));
/* 961367: mov byte ptr [0xcf80d2], 3 */
  W8((uint32_t)(0xcf80d2u), 0x3u);
/* 96136e: mov byte ptr [ecx + 0xcf7ac8], 0x41 */
  W8((uint32_t)(ecx + 0xcf7ac8u), 0x41u);
/* 961375: mov ecx, dword ptr [0xcf81c0] */
  ecx = R32((uint32_t)(0xcf81c0u));
/* 96137b: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 96137c: mov dword ptr [0xcf81c0], ecx */
  W32((uint32_t)(0xcf81c0u), ecx);
/* 961382: mov dword ptr [0xcf7c90], 0xafc2d4 */
  W32((uint32_t)(0xcf7c90u), 0xafc2d4u);
/* 96138c: mov word ptr [0xcf7f16], ax */
  W16((uint32_t)(0xcf7f16u), (eax & 0xffffu));
/* 961392: mov byte ptr [0xcf8059], 0 */
  W8((uint32_t)(0xcf8059u), 0x0u);
/* 961399: mov byte ptr [ecx + 0xcf7ac8], 0x63 */
  W8((uint32_t)(ecx + 0xcf7ac8u), 0x63u);
/* 9613a0: mov ecx, dword ptr [0xcf81c0] */
  ecx = R32((uint32_t)(0xcf81c0u));
/* 9613a6: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9613a7: mov dword ptr [0xcf81c0], ecx */
  W32((uint32_t)(0xcf81c0u), ecx);
/* 9613ad: mov dword ptr [0xcf7d18], 0xafc29c */
  W32((uint32_t)(0xcf7d18u), 0xafc29cu);
/* 9613b7: mov word ptr [0xcf7f5a], ax */
  W16((uint32_t)(0xcf7f5au), (eax & 0xffffu));
/* 9613bd: mov byte ptr [0xcf807b], dl */
  W8((uint32_t)(0xcf807bu), (edx & 0xffu));
/* 9613c3: mov byte ptr [ecx + 0xcf7ac8], 0x66 */
  W8((uint32_t)(ecx + 0xcf7ac8u), 0x66u);
/* 9613ca: mov ecx, dword ptr [0xcf81c0] */
  ecx = R32((uint32_t)(0xcf81c0u));
/* 9613d0: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9613d1: mov dword ptr [0xcf81c0], ecx */
  W32((uint32_t)(0xcf81c0u), ecx);
/* 9613d7: mov dword ptr [0xcf7d24], 0xafc274 */
  W32((uint32_t)(0xcf7d24u), 0xafc274u);
/* 9613e1: mov word ptr [0xcf7f60], ax */
  W16((uint32_t)(0xcf7f60u), (eax & 0xffffu));
/* 9613e7: mov byte ptr [0xcf807e], dl */
  W8((uint32_t)(0xcf807eu), (edx & 0xffu));
/* 9613ed: mov byte ptr [ecx + 0xcf7ac8], 0x64 */
  W8((uint32_t)(ecx + 0xcf7ac8u), 0x64u);
/* 9613f4: mov ecx, dword ptr [0xcf81c0] */
  ecx = R32((uint32_t)(0xcf81c0u));
/* 9613fa: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9613fb: mov dword ptr [0xcf81c0], ecx */
  W32((uint32_t)(0xcf81c0u), ecx);
/* 961401: mov dword ptr [0xcf7d1c], 0xafc244 */
  W32((uint32_t)(0xcf7d1cu), 0xafc244u);
/* 96140b: mov word ptr [0xcf7f5c], ax */
  W16((uint32_t)(0xcf7f5cu), (eax & 0xffffu));
/* 961411: mov byte ptr [0xcf807c], dl */
  W8((uint32_t)(0xcf807cu), (edx & 0xffu));
/* 961417: mov byte ptr [ecx + 0xcf7ac8], 0x65 */
  W8((uint32_t)(ecx + 0xcf7ac8u), 0x65u);
/* 96141e: inc dword ptr [0xcf81c0] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf81c0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0xcf81c0u), r);
  }
/* 961424: mov dword ptr [0xcf7d20], 0xafc220 */
  W32((uint32_t)(0xcf7d20u), 0xafc220u);
/* 96142e: mov word ptr [0xcf7f5e], ax */
  W16((uint32_t)(0xcf7f5eu), (eax & 0xffffu));
/* 961434: mov byte ptr [0xcf807d], dl */
  W8((uint32_t)(0xcf807du), (edx & 0xffu));
/* 96143a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96143b: ret  */
  esp += 4; SPILL(); return;
}

void f_961440(void) {
  LOAD_REGS();
L_961440: /* 961440: mov eax, dword ptr [0xcf81c0] */
  eax = R32((uint32_t)(0xcf81c0u));
/* 961445: mov dword ptr [0xcf81c8], eax */
  W32((uint32_t)(0xcf81c8u), eax);
/* 96144a: mov byte ptr [eax + 0xcf7ac8], 0x42 */
  W8((uint32_t)(eax + 0xcf7ac8u), 0x42u);
/* 961451: mov ecx, dword ptr [0xcf81c0] */
  ecx = R32((uint32_t)(0xcf81c0u));
/* 961457: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 961458: mov dword ptr [0xcf81c0], ecx */
  W32((uint32_t)(0xcf81c0u), ecx);
/* 96145e: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 961461: mov dword ptr [0xcf7c94], 0xafc720 */
  W32((uint32_t)(0xcf7c94u), 0xafc720u);
/* 96146b: mov word ptr [0xcf7f18], ax */
  W16((uint32_t)(0xcf7f18u), (eax & 0xffffu));
/* 961471: mov byte ptr [0xcf805a], 0 */
  W8((uint32_t)(0xcf805au), 0x0u);
/* 961478: mov edx, 0x9f */
  edx = 0x9fu;
/* 96147d: mov byte ptr [ecx + 0xcf7ac8], dl */
  W8((uint32_t)(ecx + 0xcf7ac8u), (edx & 0xffu));
/* 961483: mov ecx, dword ptr [0xcf81c0] */
  ecx = R32((uint32_t)(0xcf81c0u));
/* 961489: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 96148a: mov dword ptr [0xcf81c0], ecx */
  W32((uint32_t)(0xcf81c0u), ecx);
/* 961490: mov dword ptr [0xcf7e08], 0xafc6f0 */
  W32((uint32_t)(0xcf7e08u), 0xafc6f0u);
/* 96149a: mov word ptr [0xcf7fd2], ax */
  W16((uint32_t)(0xcf7fd2u), (eax & 0xffffu));
/* 9614a0: mov byte ptr [0xcf80b7], 1 */
  W8((uint32_t)(0xcf80b7u), 0x1u);
/* 9614a7: mov byte ptr [ecx + 0xcf7ac8], 0xa0 */
  W8((uint32_t)(ecx + 0xcf7ac8u), 0xa0u);
/* 9614ae: mov ecx, dword ptr [0xcf81c0] */
  ecx = R32((uint32_t)(0xcf81c0u));
/* 9614b4: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9614b5: mov dword ptr [0xcf81c0], ecx */
  W32((uint32_t)(0xcf81c0u), ecx);
/* 9614bb: mov word ptr [0xcf7fd4], dx */
  W16((uint32_t)(0xcf7fd4u), (edx & 0xffffu));
/* 9614c2: mov dword ptr [0xcf7e0c], 0xafc6d4 */
  W32((uint32_t)(0xcf7e0cu), 0xafc6d4u);
/* 9614cc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9614cd: mov bl, 6 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x6u) & 0xffu);
/* 9614cf: mov byte ptr [0xcf80b8], bl */
  W8((uint32_t)(0xcf80b8u), (ebx & 0xffu));
/* 9614d5: mov byte ptr [ecx + 0xcf7ac8], 0xa1 */
  W8((uint32_t)(ecx + 0xcf7ac8u), 0xa1u);
/* 9614dc: mov ecx, dword ptr [0xcf81c0] */
  ecx = R32((uint32_t)(0xcf81c0u));
/* 9614e2: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9614e3: mov dword ptr [0xcf81c0], ecx */
  W32((uint32_t)(0xcf81c0u), ecx);
/* 9614e9: mov dword ptr [0xcf7e10], 0xafc6b8 */
  W32((uint32_t)(0xcf7e10u), 0xafc6b8u);
/* 9614f3: mov word ptr [0xcf7fd6], ax */
  W16((uint32_t)(0xcf7fd6u), (eax & 0xffffu));
/* 9614f9: mov dl, 7 */
  edx = (edx & 0xffffff00u) | ((uint32_t)(0x7u) & 0xffu);
/* 9614fb: mov byte ptr [0xcf80b9], dl */
  W8((uint32_t)(0xcf80b9u), (edx & 0xffu));
/* 961501: mov byte ptr [ecx + 0xcf7ac8], 0xa5 */
  W8((uint32_t)(ecx + 0xcf7ac8u), 0xa5u);
/* 961508: mov ecx, dword ptr [0xcf81c0] */
  ecx = R32((uint32_t)(0xcf81c0u));
/* 96150e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 96150f: mov dword ptr [0xcf81c0], ecx */
  W32((uint32_t)(0xcf81c0u), ecx);
/* 961515: mov dword ptr [0xcf7e20], 0xafc6a8 */
  W32((uint32_t)(0xcf7e20u), 0xafc6a8u);
/* 96151f: mov word ptr [0xcf7fde], ax */
  W16((uint32_t)(0xcf7fdeu), (eax & 0xffffu));
/* 961525: mov byte ptr [0xcf80bd], 1 */
  W8((uint32_t)(0xcf80bdu), 0x1u);
/* 96152c: mov byte ptr [ecx + 0xcf7ac8], 0xa6 */
  W8((uint32_t)(ecx + 0xcf7ac8u), 0xa6u);
/* 961533: mov ecx, dword ptr [0xcf81c0] */
  ecx = R32((uint32_t)(0xcf81c0u));
/* 961539: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 96153a: mov dword ptr [0xcf81c0], ecx */
  W32((uint32_t)(0xcf81c0u), ecx);
/* 961540: mov dword ptr [0xcf7e24], 0xafc680 */
  W32((uint32_t)(0xcf7e24u), 0xafc680u);
/* 96154a: mov word ptr [0xcf7fe0], 0xa5 */
  W16((uint32_t)(0xcf7fe0u), 0xa5u);
/* 961553: mov byte ptr [0xcf80be], bl */
  W8((uint32_t)(0xcf80beu), (ebx & 0xffu));
/* 961559: mov byte ptr [ecx + 0xcf7ac8], 0xa7 */
  W8((uint32_t)(ecx + 0xcf7ac8u), 0xa7u);
/* 961560: mov ecx, dword ptr [0xcf81c0] */
  ecx = R32((uint32_t)(0xcf81c0u));
/* 961566: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 961567: mov dword ptr [0xcf81c0], ecx */
  W32((uint32_t)(0xcf81c0u), ecx);
/* 96156d: mov dword ptr [0xcf7e28], 0xafc658 */
  W32((uint32_t)(0xcf7e28u), 0xafc658u);
/* 961577: mov word ptr [0xcf7fe2], ax */
  W16((uint32_t)(0xcf7fe2u), (eax & 0xffffu));
/* 96157d: mov byte ptr [0xcf80bf], dl */
  W8((uint32_t)(0xcf80bfu), (edx & 0xffu));
/* 961583: mov byte ptr [ecx + 0xcf7ac8], 0xa8 */
  W8((uint32_t)(ecx + 0xcf7ac8u), 0xa8u);
/* 96158a: mov ecx, dword ptr [0xcf81c0] */
  ecx = R32((uint32_t)(0xcf81c0u));
/* 961590: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 961591: mov dword ptr [0xcf81c0], ecx */
  W32((uint32_t)(0xcf81c0u), ecx);
/* 961597: mov dword ptr [0xcf7e2c], 0xafc638 */
  W32((uint32_t)(0xcf7e2cu), 0xafc638u);
/* 9615a1: mov word ptr [0xcf7fe4], ax */
  W16((uint32_t)(0xcf7fe4u), (eax & 0xffffu));
/* 9615a7: mov byte ptr [0xcf80c0], 1 */
  W8((uint32_t)(0xcf80c0u), 0x1u);
/* 9615ae: mov byte ptr [ecx + 0xcf7ac8], 0xa9 */
  W8((uint32_t)(ecx + 0xcf7ac8u), 0xa9u);
/* 9615b5: mov ecx, dword ptr [0xcf81c0] */
  ecx = R32((uint32_t)(0xcf81c0u));
/* 9615bb: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9615bc: mov dword ptr [0xcf81c0], ecx */
  W32((uint32_t)(0xcf81c0u), ecx);
/* 9615c2: mov dword ptr [0xcf7e30], 0xafc620 */
  W32((uint32_t)(0xcf7e30u), 0xafc620u);
/* 9615cc: mov word ptr [0xcf7fe6], 0xa8 */
  W16((uint32_t)(0xcf7fe6u), 0xa8u);
/* 9615d5: mov byte ptr [0xcf80c1], bl */
  W8((uint32_t)(0xcf80c1u), (ebx & 0xffu));
/* 9615db: mov byte ptr [ecx + 0xcf7ac8], 0xaa */
  W8((uint32_t)(ecx + 0xcf7ac8u), 0xaau);
/* 9615e2: mov ecx, dword ptr [0xcf81c0] */
  ecx = R32((uint32_t)(0xcf81c0u));
/* 9615e8: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9615e9: mov dword ptr [0xcf81c0], ecx */
  W32((uint32_t)(0xcf81c0u), ecx);
/* 9615ef: mov dword ptr [0xcf7e34], 0xafc608 */
  W32((uint32_t)(0xcf7e34u), 0xafc608u);
/* 9615f9: mov word ptr [0xcf7fe8], ax */
  W16((uint32_t)(0xcf7fe8u), (eax & 0xffffu));
/* 9615ff: mov byte ptr [0xcf80c2], dl */
  W8((uint32_t)(0xcf80c2u), (edx & 0xffu));
/* 961605: mov byte ptr [ecx + 0xcf7ac8], 0xa2 */
  W8((uint32_t)(ecx + 0xcf7ac8u), 0xa2u);
/* 96160c: mov ecx, dword ptr [0xcf81c0] */
  ecx = R32((uint32_t)(0xcf81c0u));
/* 961612: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 961613: mov dword ptr [0xcf81c0], ecx */
  W32((uint32_t)(0xcf81c0u), ecx);
/* 961619: mov dword ptr [0xcf7e14], 0xafc5e0 */
  W32((uint32_t)(0xcf7e14u), 0xafc5e0u);
/* 961623: mov word ptr [0xcf7fd8], ax */
  W16((uint32_t)(0xcf7fd8u), (eax & 0xffffu));
/* 961629: mov byte ptr [0xcf80ba], 1 */
  W8((uint32_t)(0xcf80bau), 0x1u);
/* 961630: mov byte ptr [ecx + 0xcf7ac8], 0xa3 */
  W8((uint32_t)(ecx + 0xcf7ac8u), 0xa3u);
/* 961637: mov ecx, dword ptr [0xcf81c0] */
  ecx = R32((uint32_t)(0xcf81c0u));
/* 96163d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 96163e: mov dword ptr [0xcf81c0], ecx */
  W32((uint32_t)(0xcf81c0u), ecx);
/* 961644: mov byte ptr [0xcf80bb], bl */
  W8((uint32_t)(0xcf80bbu), (ebx & 0xffu));
/* 96164a: mov dword ptr [0xcf7e18], 0xafc620 */
  W32((uint32_t)(0xcf7e18u), 0xafc620u);
/* 961654: mov word ptr [0xcf7fda], 0xa2 */
  W16((uint32_t)(0xcf7fdau), 0xa2u);
/* 96165d: mov byte ptr [ecx + 0xcf7ac8], 0xa4 */
  W8((uint32_t)(ecx + 0xcf7ac8u), 0xa4u);
/* 961664: inc dword ptr [0xcf81c0] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf81c0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0xcf81c0u), r);
  }
/* 96166a: mov dword ptr [0xcf7e1c], 0xafc608 */
  W32((uint32_t)(0xcf7e1cu), 0xafc608u);
/* 961674: mov word ptr [0xcf7fdc], ax */
  W16((uint32_t)(0xcf7fdcu), (eax & 0xffffu));
/* 96167a: mov byte ptr [0xcf80bc], dl */
  W8((uint32_t)(0xcf80bcu), (edx & 0xffu));
/* 961680: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 961681: ret  */
  esp += 4; SPILL(); return;
}

void f_961690(void) {
  LOAD_REGS();
L_961690: /* 961690: mov eax, 0xc2 */
  eax = 0xc2u;
/* 961695: xor cl, cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
L_961697: /* 961697: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 961698: mov byte ptr [eax + 0xcf80da], cl */
  W8((uint32_t)(eax + 0xcf80dau), (ecx & 0xffu));
/* 96169e: jne 0x961697 */
  if (!zf) goto L_961697;
L_9616a0: /* 9616a0: ret  */
  esp += 4; SPILL(); return;
}

void f_9616b0(void) {
  LOAD_REGS();
L_9616b0: /* 9616b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9616b1: mov ecx, dword ptr [0xcf8b40] */
  ecx = R32((uint32_t)(0xcf8b40u));
/* 9616b7: imul ecx, dword ptr [0xcf85d4] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(0xcf85d4u)));
  ecx = (uint32_t)r;
  }
/* 9616be: mov eax, dword ptr [0xcf8548] */
  eax = R32((uint32_t)(0xcf8548u));
/* 9616c3: mov edx, dword ptr [0xcf8c18] */
  edx = R32((uint32_t)(0xcf8c18u));
/* 9616c9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9616ca: xor ebp, ebp */
  ebp = 0;
/* 9616cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9616cd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9616ce: add ecx, 0x1298 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1298u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9616d4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9616d5: mov dword ptr [0xcf8c50], eax */
  W32((uint32_t)(0xcf8c50u), eax);
/* 9616da: mov dword ptr [0xcf8548], ebp */
  W32((uint32_t)(0xcf8548u), ebp);
/* 9616e0: mov dword ptr [0xcf7950], ecx */
  W32((uint32_t)(0xcf7950u), ecx);
/* 9616e6: mov dword ptr [0xcf794c], ebp */
  W32((uint32_t)(0xcf794cu), ebp);
/* 9616ec: mov dword ptr [0xcf7954], ebp */
  W32((uint32_t)(0xcf7954u), ebp);
/* 9616f2: mov dword ptr [0xcf7958], ebp */
  W32((uint32_t)(0xcf7958u), ebp);
/* 9616f8: mov dword ptr [0xcf77cc], ebp */
  W32((uint32_t)(0xcf77ccu), ebp);
/* 9616fe: mov dword ptr [0xcf77d0], ebp */
  W32((uint32_t)(0xcf77d0u), ebp);
/* 961704: mov dword ptr [0xcf79e0], ebp */
  W32((uint32_t)(0xcf79e0u), ebp);
/* 96170a: mov dword ptr [0xcf79d0], ebp */
  W32((uint32_t)(0xcf79d0u), ebp);
/* 961710: mov dword ptr [0xcf79dc], ebp */
  W32((uint32_t)(0xcf79dcu), ebp);
/* 961716: mov dword ptr [0xcf79e4], ebp */
  W32((uint32_t)(0xcf79e4u), ebp);
/* 96171c: mov dword ptr [0xcf79ec], ebp */
  W32((uint32_t)(0xcf79ecu), ebp);
/* 961722: mov dword ptr [0xcf79d8], ebp */
  W32((uint32_t)(0xcf79d8u), ebp);
/* 961728: mov dword ptr [0xcf79d4], ebp */
  W32((uint32_t)(0xcf79d4u), ebp);
/* 96172e: call 0x94f340 */
  esp -= 4; W32(esp, 0x961733u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 961733: mov ecx, dword ptr [0xcf8b84] */
  ecx = R32((uint32_t)(0xcf8b84u));
/* 961739: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 96173b: mov dword ptr [0xcf7aac], ecx */
  W32((uint32_t)(0xcf7aacu), ecx);
/* 961741: mov ecx, dword ptr [0xcf845c] */
  ecx = R32((uint32_t)(0xcf845cu));
/* 961747: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96174a: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96174c: jne 0x961769 */
  if (!zf) goto L_961769;
L_96174e: /* 96174e: cmp dword ptr [0xcf83e8], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf83e8u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 961754: jne 0x961769 */
  if (!zf) goto L_961769;
L_961756: /* 961756: fld dword ptr [0xcf8bb4] */
  { double v = F32((uint32_t)(0xcf8bb4u)); FPUSH(v); }
/* 96175c: fcomp dword ptr [0xa216c0] */
  fpu_com(ST0, F32((uint32_t)(0xa216c0u)));
  FPOP();
/* 961762: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 961764: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 961767: jp 0x9617a9 */
  if (pf) goto L_9617a9;
L_961769: /* 961769: fld dword ptr [0xcf7938] */
  { double v = F32((uint32_t)(0xcf7938u)); FPUSH(v); }
/* 96176f: fcomp dword ptr [0xcf8bbc] */
  fpu_com(ST0, F32((uint32_t)(0xcf8bbcu)));
  FPOP();
/* 961775: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 961777: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 96177a: jp 0x961788 */
  if (pf) goto L_961788;
L_96177c: /* 96177c: mov edx, dword ptr [0xcf8bbc] */
  edx = R32((uint32_t)(0xcf8bbcu));
/* 961782: mov dword ptr [0xcf7938], edx */
  W32((uint32_t)(0xcf7938u), edx);
L_961788: /* 961788: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96178a: je 0x9617a9 */
  if (zf) goto L_9617a9;
L_96178c: /* 96178c: fld dword ptr [0xcf7990] */
  { double v = F32((uint32_t)(0xcf7990u)); FPUSH(v); }
/* 961792: fcomp dword ptr [0xcf8bc4] */
  fpu_com(ST0, F32((uint32_t)(0xcf8bc4u)));
  FPOP();
/* 961798: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 96179a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 96179d: jne 0x9617a9 */
  if (!zf) goto L_9617a9;
L_96179f: /* 96179f: mov eax, dword ptr [0xcf8bc4] */
  eax = R32((uint32_t)(0xcf8bc4u));
/* 9617a4: mov dword ptr [0xcf7990], eax */
  W32((uint32_t)(0xcf7990u), eax);
L_9617a9: /* 9617a9: mov eax, dword ptr [0xcf8b4c] */
  eax = R32((uint32_t)(0xcf8b4cu));
/* 9617ae: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9617b0: je 0x9617c7 */
  if (zf) goto L_9617c7;
L_9617b2: /* 9617b2: mov edx, 0xffffdfff */
  edx = 0xffffdfffu;
L_9617b7: /* 9617b7: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 9617ba: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9617bc: je 0x9617c7 */
  if (zf) goto L_9617c7;
L_9617be: /* 9617be: and dword ptr [eax + 0x3c], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x3cu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x3cu), r);
  }
/* 9617c1: mov eax, ecx */
  eax = ecx;
/* 9617c3: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9617c5: jne 0x9617b7 */
  if (!zf) goto L_9617b7;
L_9617c7: /* 9617c7: cmp dword ptr [0xcf8410], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8410u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9617cd: je 0x9617fe */
  if (zf) goto L_9617fe;
L_9617cf: /* 9617cf: mov eax, dword ptr [0xcf8b4c] */
  eax = R32((uint32_t)(0xcf8b4cu));
/* 9617d4: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9617d6: je 0x9617fe */
  if (zf) goto L_9617fe;
L_9617d8: /* 9617d8: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 9617db: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9617dd: je 0x9617fe */
  if (zf) goto L_9617fe;
L_9617df: /* 9617df: mov esi, dword ptr [0xcf85a4] */
  esi = R32((uint32_t)(0xcf85a4u));
/* 9617e5: xor edx, edx */
  edx = 0;
/* 9617e7: mov dl, byte ptr [eax + 0x3e] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x3eu))) & 0xffu);
/* 9617ea: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 9617ed: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9617ef: je 0x9617f8 */
  if (zf) goto L_9617f8;
L_9617f1: /* 9617f1: or dword ptr [eax + 0x3c], 0x2000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x3cu))); uint32_t b = (uint32_t)(0x2000u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x3cu), r);
  }
L_9617f8: /* 9617f8: mov eax, ecx */
  eax = ecx;
/* 9617fa: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9617fc: jne 0x9617d8 */
  if (!zf) goto L_9617d8;
L_9617fe: /* 9617fe: mov esi, dword ptr [0xcf8b4c] */
  esi = R32((uint32_t)(0xcf8b4cu));
/* 961804: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 961806: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 961807: je 0x961a88 */
  if (zf) goto L_961a88;
L_96180d: /* 96180d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_961810: /* 961810: cmp dword ptr [esi + 0x1c], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x1cu))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 961813: je 0x961a88 */
  if (zf) goto L_961a88;
L_961819: /* 961819: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 96181c: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 96181f: je 0x96182d */
  if (zf) goto L_96182d;
L_961821: /* 961821: cmp dword ptr [0xcf8bc8], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8bc8u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 961827: jne 0x961a7d */
  if (!zf) goto L_961a7d;
L_96182d: /* 96182d: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 961830: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 961831: call 0x94f340 */
  esp -= 4; W32(esp, 0x961836u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 961836: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 961839: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96183a: mov edi, eax */
  edi = eax;
/* 96183c: call 0x94f340 */
  esp -= 4; W32(esp, 0x961841u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 961841: mov edx, dword ptr [esi + 0x24] */
  edx = R32((uint32_t)(esi + 0x24u));
/* 961844: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 961845: mov ebx, eax */
  ebx = eax;
/* 961847: call 0x94f340 */
  esp -= 4; W32(esp, 0x96184cu); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 96184c: mov ecx, dword ptr [0xcf79d0] */
  ecx = R32((uint32_t)(0xcf79d0u));
/* 961852: mov edx, dword ptr [0xcf79e4] */
  edx = R32((uint32_t)(0xcf79e4u));
/* 961858: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96185b: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 96185c: mov dword ptr [0xcf79d0], ecx */
  W32((uint32_t)(0xcf79d0u), ecx);
/* 961862: mov ecx, dword ptr [0xcf7944] */
  ecx = R32((uint32_t)(0xcf7944u));
/* 961868: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 96186a: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96186c: mov dword ptr [0xcf79e4], edx */
  W32((uint32_t)(0xcf79e4u), edx);
/* 961872: jge 0x96187a */
  if ((sf == of)) goto L_96187a;
L_961874: /* 961874: mov dword ptr [0xcf7944], edi */
  W32((uint32_t)(0xcf7944u), edi);
L_96187a: /* 96187a: mov edx, dword ptr [0xcf79dc] */
  edx = R32((uint32_t)(0xcf79dcu));
/* 961880: mov ecx, dword ptr [0xcf7930] */
  ecx = R32((uint32_t)(0xcf7930u));
/* 961886: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 961888: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96188a: mov dword ptr [0xcf79dc], edx */
  W32((uint32_t)(0xcf79dcu), edx);
/* 961890: jge 0x961898 */
  if ((sf == of)) goto L_961898;
L_961892: /* 961892: mov dword ptr [0xcf7930], ebx */
  W32((uint32_t)(0xcf7930u), ebx);
L_961898: /* 961898: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 96189b: mov edx, dword ptr [0xcf79d8] */
  edx = R32((uint32_t)(0xcf79d8u));
/* 9618a1: and ecx, 0x1ff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 9618a7: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9618a9: mov dword ptr [0xcf79d8], edx */
  W32((uint32_t)(0xcf79d8u), edx);
/* 9618af: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 9618b2: mov edx, dword ptr [0xcf79d4] */
  edx = R32((uint32_t)(0xcf79d4u));
/* 9618b8: and ecx, 0x1ff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 9618be: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9618c0: jge 0x9618c8 */
  if ((sf == of)) goto L_9618c8;
L_9618c2: /* 9618c2: mov dword ptr [0xcf79d4], ecx */
  W32((uint32_t)(0xcf79d4u), ecx);
L_9618c8: /* 9618c8: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9618ca: je 0x9618e9 */
  if (zf) goto L_9618e9;
L_9618cc: /* 9618cc: mov edx, dword ptr [0xcf79e0] */
  edx = R32((uint32_t)(0xcf79e0u));
/* 9618d2: mov ecx, dword ptr [0xcf793c] */
  ecx = R32((uint32_t)(0xcf793cu));
/* 9618d8: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9618da: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9618dc: mov dword ptr [0xcf79e0], edx */
  W32((uint32_t)(0xcf79e0u), edx);
/* 9618e2: jge 0x9618e9 */
  if ((sf == of)) goto L_9618e9;
L_9618e4: /* 9618e4: mov dword ptr [0xcf793c], eax */
  W32((uint32_t)(0xcf793cu), eax);
L_9618e9: /* 9618e9: mov edx, dword ptr [0xcf8b40] */
  edx = R32((uint32_t)(0xcf8b40u));
/* 9618ef: add ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 9618f1: lea ecx, [edx + ebx*4 + 0x50] */
  ecx = (uint32_t)(edx + ebx*4 + 0x50u);
/* 9618f5: add dword ptr [0xcf794c], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf794cu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(0xcf794cu), r);
  }
/* 9618fb: cmp dword ptr [esi + 0x24], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x24u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9618fe: je 0x961922 */
  if (zf) goto L_961922;
L_961900: /* 961900: mov edx, dword ptr [0xcf85cc] */
  edx = R32((uint32_t)(0xcf85ccu));
/* 961906: mov ecx, dword ptr [0xcf7954] */
  ecx = R32((uint32_t)(0xcf7954u));
/* 96190c: add edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 96190f: imul edx, eax */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(eax);
  edx = (uint32_t)r;
  }
/* 961912: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 961915: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 961917: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 961919: lea eax, [edx + eax*4 + 8] */
  eax = (uint32_t)(edx + eax*4 + 0x8u);
/* 96191d: mov dword ptr [0xcf7954], eax */
  W32((uint32_t)(0xcf7954u), eax);
L_961922: /* 961922: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 961925: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 961927: je 0x961942 */
  if (zf) goto L_961942;
L_961929: /* 961929: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96192a: call 0x94f340 */
  esp -= 4; W32(esp, 0x96192fu); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 96192f: mov ecx, dword ptr [0xcf7950] */
  ecx = R32((uint32_t)(0xcf7950u));
/* 961935: lea edx, [ecx + eax*4 + 8] */
  edx = (uint32_t)(ecx + eax*4 + 0x8u);
/* 961939: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96193c: mov dword ptr [0xcf7950], edx */
  W32((uint32_t)(0xcf7950u), edx);
L_961942: /* 961942: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 961945: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 961947: je 0x961962 */
  if (zf) goto L_961962;
L_961949: /* 961949: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96194a: call 0x94f340 */
  esp -= 4; W32(esp, 0x96194fu); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 96194f: mov ecx, dword ptr [0xcf7950] */
  ecx = R32((uint32_t)(0xcf7950u));
/* 961955: lea edx, [ecx + eax*4 + 8] */
  edx = (uint32_t)(ecx + eax*4 + 0x8u);
/* 961959: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96195c: mov dword ptr [0xcf7950], edx */
  W32((uint32_t)(0xcf7950u), edx);
L_961962: /* 961962: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 961965: mov ebx, 0x2000 */
  ebx = 0x2000u;
/* 96196a: test ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96196c: jne 0x961a7d */
  if (!zf) goto L_961a7d;
L_961972: /* 961972: or eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 961974: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* 961977: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 96197a: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96197c: je 0x961a07 */
  if (zf) goto L_961a07;
L_961982: /* 961982: lea edi, [eax + 4] */
  edi = (uint32_t)(eax + 0x4u);
/* 961985: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 961987: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 961989: je 0x961a07 */
  if (zf) goto L_961a07;
L_96198f: /* 96198f: nop  */
L_961990: /* 961990: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 961993: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 961996: je 0x961a01 */
  if (zf) goto L_961a01;
L_961998: /* 961998: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96199b: je 0x961a01 */
  if (zf) goto L_961a01;
L_96199d: /* 96199d: test dword ptr [eax + 0x3c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x3cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9619a0: jne 0x961a01 */
  if (!zf) goto L_961a01;
L_9619a2: /* 9619a2: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 9619a5: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9619a7: je 0x961a01 */
  if (zf) goto L_961a01;
L_9619a9: /* 9619a9: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 9619ac: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9619ae: je 0x961a01 */
  if (zf) goto L_961a01;
L_9619b0: /* 9619b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9619b1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9619b2: call 0x970820 */
  esp -= 4; W32(esp, 0x9619b7u); SPILL(); f_970820(); if (g_unwind) return; RELOAD();
/* 9619b7: fld dword ptr [0xcf77d0] */
  { double v = F32((uint32_t)(0xcf77d0u)); FPUSH(v); }
/* 9619bd: mov eax, dword ptr [0xcf77cc] */
  eax = R32((uint32_t)(0xcf77ccu));
/* 9619c2: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 9619c4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9619c7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9619c8: fstp dword ptr [0xcf77d0] */
  WF32((uint32_t)(0xcf77d0u), ST0); FPOP();
/* 9619ce: mov dword ptr [0xcf77cc], eax */
  W32((uint32_t)(0xcf77ccu), eax);
/* 9619d3: fld dword ptr [0xcf77d4] */
  { double v = F32((uint32_t)(0xcf77d4u)); FPUSH(v); }
/* 9619d9: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 9619db: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9619dd: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9619e0: jp 0x9619e8 */
  if (pf) goto L_9619e8;
L_9619e2: /* 9619e2: fst dword ptr [0xcf77d4] */
  WF32((uint32_t)(0xcf77d4u), ST0);
L_9619e8: /* 9619e8: fld dword ptr [0xcf77d8] */
  { double v = F32((uint32_t)(0xcf77d8u)); FPUSH(v); }
/* 9619ee: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 9619f0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9619f2: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9619f5: jne 0x9619ff */
  if (!zf) goto L_9619ff;
L_9619f7: /* 9619f7: fstp dword ptr [0xcf77d8] */
  WF32((uint32_t)(0xcf77d8u), ST0); FPOP();
/* 9619fd: jmp 0x961a01 */
  goto L_961a01;
L_9619ff: /* 9619ff: fstp st(0) */
  STI(0) = ST0; FPOP();
L_961a01: /* 961a01: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 961a03: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 961a05: jne 0x961990 */
  if (!zf) goto L_961990;
L_961a07: /* 961a07: cmp dword ptr [esi + 0xc], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xcu))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 961a0a: je 0x961a7d */
  if (zf) goto L_961a7d;
L_961a0c: /* 961a0c: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 961a0f: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 961a11: je 0x961a7d */
  if (zf) goto L_961a7d;
L_961a13: /* 961a13: lea edi, [eax + 4] */
  edi = (uint32_t)(eax + 0x4u);
/* 961a16: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 961a18: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 961a1a: je 0x961a7d */
  if (zf) goto L_961a7d;
L_961a1c: /* 961a1c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_961a20: /* 961a20: mov ecx, dword ptr [0xcf7894] */
  ecx = R32((uint32_t)(0xcf7894u));
/* 961a26: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 961a29: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 961a2a: mov dword ptr [0xcf7894], ecx */
  W32((uint32_t)(0xcf7894u), ecx);
/* 961a30: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 961a33: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 961a37: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 961a38: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 961a39: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 961a3a: call 0x96fa90 */
  esp -= 4; W32(esp, 0x961a3fu); SPILL(); f_96fa90(); if (g_unwind) return; RELOAD();
/* 961a3f: fld dword ptr [0xcf7a98] */
  { double v = F32((uint32_t)(0xcf7a98u)); FPUSH(v); }
/* 961a45: fcomp dword ptr [esp + 0x1c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x1cu)));
  FPOP();
/* 961a49: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 961a4c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 961a4e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 961a51: jp 0x961a5c */
  if (pf) goto L_961a5c;
L_961a53: /* 961a53: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 961a57: mov dword ptr [0xcf7a98], eax */
  W32((uint32_t)(0xcf7a98u), eax);
L_961a5c: /* 961a5c: fld dword ptr [0xcf7a9c] */
  { double v = F32((uint32_t)(0xcf7a9cu)); FPUSH(v); }
/* 961a62: fcomp dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
  FPOP();
/* 961a66: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 961a68: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 961a6b: jne 0x961a77 */
  if (!zf) goto L_961a77;
L_961a6d: /* 961a6d: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 961a71: mov dword ptr [0xcf7a9c], ecx */
  W32((uint32_t)(0xcf7a9cu), ecx);
L_961a77: /* 961a77: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 961a79: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 961a7b: jne 0x961a20 */
  if (!zf) goto L_961a20;
L_961a7d: /* 961a7d: mov esi, dword ptr [esi + 0x1c] */
  esi = R32((uint32_t)(esi + 0x1cu));
/* 961a80: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 961a82: jne 0x961810 */
  if (!zf) goto L_961810;
L_961a88: /* 961a88: mov esi, dword ptr [0xcf8b74] */
  esi = R32((uint32_t)(0xcf8b74u));
/* 961a8e: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 961a90: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 961a91: je 0x961afb */
  if (zf) goto L_961afb;
L_961a93: /* 961a93: mov edi, 0x8000000 */
  edi = 0x8000000u;
L_961a98: /* 961a98: cmp dword ptr [esi], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 961a9a: je 0x961b0c */
  if (zf) goto L_961b0c;
L_961a9c: /* 961a9c: test dword ptr [esi + 0x14], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x14u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 961a9f: jne 0x961ae4 */
  if (!zf) goto L_961ae4;
L_961aa1: /* 961aa1: add dword ptr [0xcf7958], 0x18 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf7958u))); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(0xcf7958u), r);
  }
/* 961aa8: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 961aab: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 961aad: je 0x961ae4 */
  if (zf) goto L_961ae4;
L_961aaf: /* 961aaf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 961ab0: call 0x94f340 */
  esp -= 4; W32(esp, 0x961ab5u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 961ab5: mov edx, dword ptr [0xcf79ec] */
  edx = R32((uint32_t)(0xcf79ecu));
/* 961abb: mov ecx, dword ptr [0xcf7948] */
  ecx = R32((uint32_t)(0xcf7948u));
/* 961ac1: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 961ac3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 961ac6: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 961ac8: mov dword ptr [0xcf79ec], edx */
  W32((uint32_t)(0xcf79ecu), edx);
/* 961ace: jge 0x961ad5 */
  if ((sf == of)) goto L_961ad5;
L_961ad0: /* 961ad0: mov dword ptr [0xcf7948], eax */
  W32((uint32_t)(0xcf7948u), eax);
L_961ad5: /* 961ad5: mov edx, dword ptr [0xcf7958] */
  edx = R32((uint32_t)(0xcf7958u));
/* 961adb: lea eax, [edx + eax*4 + 0x18] */
  eax = (uint32_t)(edx + eax*4 + 0x18u);
/* 961adf: mov dword ptr [0xcf7958], eax */
  W32((uint32_t)(0xcf7958u), eax);
L_961ae4: /* 961ae4: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 961ae6: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 961ae8: jne 0x961a98 */
  if (!zf) goto L_961a98;
L_961aea: /* 961aea: mov ecx, dword ptr [0xcf8c50] */
  ecx = R32((uint32_t)(0xcf8c50u));
/* 961af0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 961af1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 961af2: mov dword ptr [0xcf8548], ecx */
  W32((uint32_t)(0xcf8548u), ecx);
/* 961af8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 961af9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 961afa: ret  */
  esp += 4; SPILL(); return;
L_961afb: /* 961afb: mov edx, dword ptr [0xcf8c50] */
  edx = R32((uint32_t)(0xcf8c50u));
/* 961b01: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 961b02: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 961b03: mov dword ptr [0xcf8548], edx */
  W32((uint32_t)(0xcf8548u), edx);
/* 961b09: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 961b0a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 961b0b: ret  */
  esp += 4; SPILL(); return;
L_961b0c: /* 961b0c: mov eax, dword ptr [0xcf8c50] */
  eax = R32((uint32_t)(0xcf8c50u));
/* 961b11: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 961b12: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 961b13: mov dword ptr [0xcf8548], eax */
  W32((uint32_t)(0xcf8548u), eax);
/* 961b18: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 961b19: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 961b1a: ret  */
  esp += 4; SPILL(); return;
}

void f_961b20(void) {
  LOAD_REGS();
L_961b20: /* 961b20: ret  */
  esp += 4; SPILL(); return;
}

void f_961b30(void) {
  LOAD_REGS();
L_961b30: /* 961b30: mov dword ptr [0xcf81c0], 0 */
  W32((uint32_t)(0xcf81c0u), 0x0u);
/* 961b3a: call 0x95f5b0 */
  esp -= 4; W32(esp, 0x961b3fu); SPILL(); f_95f5b0(); if (g_unwind) return; RELOAD();
/* 961b3f: call 0x95f8c0 */
  esp -= 4; W32(esp, 0x961b44u); SPILL(); f_95f8c0(); if (g_unwind) return; RELOAD();
/* 961b44: call 0x95fd20 */
  esp -= 4; W32(esp, 0x961b49u); SPILL(); f_95fd20(); if (g_unwind) return; RELOAD();
/* 961b49: call 0x960290 */
  esp -= 4; W32(esp, 0x961b4eu); SPILL(); f_960290(); if (g_unwind) return; RELOAD();
/* 961b4e: call 0x960560 */
  esp -= 4; W32(esp, 0x961b53u); SPILL(); f_960560(); if (g_unwind) return; RELOAD();
/* 961b53: call 0x960810 */
  esp -= 4; W32(esp, 0x961b58u); SPILL(); f_960810(); if (g_unwind) return; RELOAD();
/* 961b58: call 0x960ca0 */
  esp -= 4; W32(esp, 0x961b5du); SPILL(); f_960ca0(); if (g_unwind) return; RELOAD();
/* 961b5d: call 0x961010 */
  esp -= 4; W32(esp, 0x961b62u); SPILL(); f_961010(); if (g_unwind) return; RELOAD();
/* 961b62: call 0x961440 */
  esp -= 4; W32(esp, 0x961b67u); SPILL(); f_961440(); if (g_unwind) return; RELOAD();
/* 961b67: mov dword ptr [0xcf81a0], 0 */
  W32((uint32_t)(0xcf81a0u), 0x0u);
/* 961b71: mov dword ptr [0xcf81a4], 0 */
  W32((uint32_t)(0xcf81a4u), 0x0u);
/* 961b7b: mov dword ptr [0xcf81ac], 0x7fffffff */
  W32((uint32_t)(0xcf81acu), 0x7fffffffu);
/* 961b85: mov dword ptr [0xcf81a8], 0x80000000 */
  W32((uint32_t)(0xcf81a8u), 0x80000000u);
/* 961b8f: mov dword ptr [0xcf81b4], 0 */
  W32((uint32_t)(0xcf81b4u), 0x0u);
/* 961b99: mov dword ptr [0xcf81bc], 0x7f7fffff */
  W32((uint32_t)(0xcf81bcu), 0x7f7fffffu);
/* 961ba3: mov dword ptr [0xcf81b8], 0xff7fffff */
  W32((uint32_t)(0xcf81b8u), 0xff7fffffu);
/* 961bad: xor ecx, ecx */
  ecx = 0;
/* 961baf: nop  */
L_961bb0: /* 961bb0: mov al, byte ptr [ecx + 0xcf8018] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0xcf8018u))) & 0xffu);
/* 961bb6: cmp al, 5 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 961bb8: jle 0x961bcd */
  if ((zf || sf != of)) goto L_961bcd;
L_961bba: /* 961bba: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 961bbd: fld dword ptr [eax*4 + 0xcf819c] */
  { double v = F32((uint32_t)(eax*4 + 0xcf819cu)); FPUSH(v); }
/* 961bc4: fstp dword ptr [ecx*4 + 0xcf77c0] */
  WF32((uint32_t)(ecx*4 + 0xcf77c0u), ST0); FPOP();
/* 961bcb: jmp 0x961be3 */
  goto L_961be3;
L_961bcd: /* 961bcd: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 961bcf: je 0x961be3 */
  if (zf) goto L_961be3;
L_961bd1: /* 961bd1: xor edx, edx */
  edx = 0;
/* 961bd3: mov dl, al */
  edx = (edx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* 961bd5: mov eax, dword ptr [edx*4 + 0xcf819c] */
  eax = R32((uint32_t)(edx*4 + 0xcf819cu));
/* 961bdc: mov dword ptr [ecx*4 + 0xcf77c0], eax */
  W32((uint32_t)(ecx*4 + 0xcf77c0u), eax);
L_961be3: /* 961be3: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 961be4: cmp ecx, 0xc2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xc2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 961bea: jl 0x961bb0 */
  if ((sf != of)) goto L_961bb0;
L_961bec: /* 961bec: ret  */
  esp += 4; SPILL(); return;
}

void f_961bf0(void) {
  LOAD_REGS();
L_961bf0: /* 961bf0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 961bf1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 961bf5: movzx eax, byte ptr [esi + 0xcf7ac8] */
  eax = (uint32_t)(R8((uint32_t)(esi + 0xcf7ac8u)));
/* 961bfc: mov cl, byte ptr [eax + 0xcf8018] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0xcf8018u))) & 0xffu);
/* 961c02: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 961c03: xor edi, edi */
  edi = 0;
/* 961c05: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 961c07: jne 0x961c0a */
  if (!zf) goto L_961c0a;
L_961c09: /* 961c09: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_961c0a: /* 961c0a: cmp esi, dword ptr [0xcf81c0] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0xcf81c0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 961c10: jge 0x961c5b */
  if ((sf == of)) goto L_961c5b;
L_961c12: /* 961c12: movzx eax, byte ptr [esi + 0xcf7ac8] */
  eax = (uint32_t)(R8((uint32_t)(esi + 0xcf7ac8u)));
/* 961c19: mov cl, byte ptr [eax + 0xcf8018] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0xcf8018u))) & 0xffu);
/* 961c1f: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 961c21: je 0x961c66 */
  if (zf) goto L_961c66;
L_961c23: /* 961c23: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 961c24: call 0x961c80 */
  esp -= 4; W32(esp, 0x961c29u); SPILL(); f_961c80(); if (g_unwind) return; RELOAD();
/* 961c29: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 961c2c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 961c2e: jne 0x961c46 */
  if (!zf) goto L_961c46;
L_961c30: /* 961c30: movzx ecx, byte ptr [esi + 0xcf7ac8] */
  ecx = (uint32_t)(R8((uint32_t)(esi + 0xcf7ac8u)));
/* 961c37: mov al, byte ptr [ecx + 0xcf80da] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0xcf80dau))) & 0xffu);
/* 961c3d: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 961c3f: jne 0x961c46 */
  if (!zf) goto L_961c46;
L_961c41: /* 961c41: mov edi, 1 */
  edi = 0x1u;
L_961c46: /* 961c46: mov eax, dword ptr [0xcf81c0] */
  eax = R32((uint32_t)(0xcf81c0u));
/* 961c4b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 961c4c: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 961c4e: jl 0x961c12 */
  if ((sf != of)) goto L_961c12;
L_961c50: /* 961c50: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 961c54: mov eax, edi */
  eax = edi;
/* 961c56: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 961c57: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 961c59: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 961c5a: ret  */
  esp += 4; SPILL(); return;
L_961c5b: /* 961c5b: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 961c5f: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 961c61: mov eax, edi */
  eax = edi;
/* 961c63: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 961c64: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 961c65: ret  */
  esp += 4; SPILL(); return;
L_961c66: /* 961c66: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 961c6a: mov eax, edi */
  eax = edi;
/* 961c6c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 961c6d: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 961c6f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 961c70: ret  */
  esp += 4; SPILL(); return;
}

void f_961c80(void) {
  LOAD_REGS();
L_961c80: /* 961c80: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 961c84: mov cl, byte ptr [edx + 0xcf8018] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0xcf8018u))) & 0xffu);
/* 961c8a: cmp cl, 5 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 961c8d: jle 0x961cab */
  if ((zf || sf != of)) goto L_961cab;
L_961c8f: /* 961c8f: fld dword ptr [edx*4 + 0xcf77c0] */
  { double v = F32((uint32_t)(edx*4 + 0xcf77c0u)); FPUSH(v); }
/* 961c96: xor eax, eax */
  eax = 0;
/* 961c98: mov al, cl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* 961c9a: fcomp dword ptr [eax*4 + 0xcf819c] */
  fpu_com(ST0, F32((uint32_t)(eax*4 + 0xcf819cu)));
  FPOP();
/* 961ca1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 961ca3: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 961ca6: jnp 0x961cc0 */
  if (!pf) goto L_961cc0;
L_961ca8: /* 961ca8: cmp cl, 5 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
L_961cab: /* 961cab: jge 0x961cc6 */
  if ((sf == of)) goto L_961cc6;
L_961cad: /* 961cad: mov edx, dword ptr [edx*4 + 0xcf77c0] */
  edx = R32((uint32_t)(edx*4 + 0xcf77c0u));
/* 961cb4: movzx ecx, cl */
  ecx = (uint32_t)((ecx & 0xffu));
/* 961cb7: cmp edx, dword ptr [ecx*4 + 0xcf819c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx*4 + 0xcf819cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 961cbe: jne 0x961cc6 */
  if (!zf) goto L_961cc6;
L_961cc0: /* 961cc0: mov eax, 1 */
  eax = 0x1u;
/* 961cc5: ret  */
  esp += 4; SPILL(); return;
L_961cc6: /* 961cc6: xor eax, eax */
  eax = 0;
/* 961cc8: ret  */
  esp += 4; SPILL(); return;
}

void f_961cd0(void) {
  LOAD_REGS();
L_961cd0: /* 961cd0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 961cd1: call 0x961690 */
  esp -= 4; W32(esp, 0x961cd6u); SPILL(); f_961690(); if (g_unwind) return; RELOAD();
/* 961cd6: call 0x9616b0 */
  esp -= 4; W32(esp, 0x961cdbu); SPILL(); f_9616b0(); if (g_unwind) return; RELOAD();
/* 961cdb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 961cdf: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 961ce3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 961ce4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 961ce5: call 0x961d00 */
  esp -= 4; W32(esp, 0x961ceau); SPILL(); f_961d00(); if (g_unwind) return; RELOAD();
/* 961cea: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 961ceb: call 0x953e00 */
  esp -= 4; W32(esp, 0x961cf0u); SPILL(); f_953e00(); if (g_unwind) return; RELOAD();
/* 961cf0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 961cf3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 961cf4: ret  */
  esp += 4; SPILL(); return;
}

void f_961d00(void) {
  LOAD_REGS();
L_961d00: /* 961d00: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 961d01: mov ebp, esp */
  ebp = esp;
/* 961d03: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 961d06: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 961d09: mov eax, dword ptr [0xcf85d4] */
  eax = R32((uint32_t)(0xcf85d4u));
/* 961d0e: cmp eax, dword ptr [0xcf8b84] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0xcf8b84u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 961d14: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 961d15: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 961d16: je 0x961d2e */
  if (zf) goto L_961d2e;
L_961d18: /* 961d18: mov dword ptr [0xcf7a0c], 0 */
  W32((uint32_t)(0xcf7a0cu), 0x0u);
/* 961d22: mov dword ptr [0xcf7a10], 0 */
  W32((uint32_t)(0xcf7a10u), 0x0u);
/* 961d2c: jmp 0x961d55 */
  goto L_961d55;
L_961d2e: /* 961d2e: mov edx, dword ptr [0xcf7a10] */
  edx = R32((uint32_t)(0xcf7a10u));
/* 961d34: mov eax, dword ptr [0xcf7a0c] */
  eax = R32((uint32_t)(0xcf7a0cu));
/* 961d39: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 961d3d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 961d3e: mov ecx, dword ptr [0xcf7a08] */
  ecx = R32((uint32_t)(0xcf7a08u));
/* 961d44: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 961d45: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 961d46: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 961d47: call 0x962130 */
  esp -= 4; W32(esp, 0x961d4cu); SPILL(); f_962130(); if (g_unwind) return; RELOAD();
/* 961d4c: fstp dword ptr [0xcf7a10] */
  WF32((uint32_t)(0xcf7a10u), ST0); FPOP();
/* 961d52: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_961d55: /* 961d55: mov eax, dword ptr [0xcf79a8] */
  eax = R32((uint32_t)(0xcf79a8u));
/* 961d5a: mov ecx, dword ptr [0xcf79a4] */
  ecx = R32((uint32_t)(0xcf79a4u));
/* 961d60: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 961d64: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 961d65: mov edx, dword ptr [0xcf7a1c] */
  edx = R32((uint32_t)(0xcf7a1cu));
/* 961d6b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 961d6c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 961d6d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 961d6e: call 0x962130 */
  esp -= 4; W32(esp, 0x961d73u); SPILL(); f_962130(); if (g_unwind) return; RELOAD();
/* 961d73: fstp dword ptr [0xcf79a8] */
  WF32((uint32_t)(0xcf79a8u), ST0); FPOP();
/* 961d79: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 961d7c: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 961d7f: push 0xcf87e8 */
  { uint32_t v = 0xcf87e8u; esp -= 4; W32(esp, v); }
/* 961d84: push 0xaf40b8 */
  { uint32_t v = 0xaf40b8u; esp -= 4; W32(esp, v); }
/* 961d89: push 0xcf85e8 */
  { uint32_t v = 0xcf85e8u; esp -= 4; W32(esp, v); }
/* 961d8e: push 0xcf86e8 */
  { uint32_t v = 0xcf86e8u; esp -= 4; W32(esp, v); }
/* 961d93: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 961d94: push 0xafca54 */
  { uint32_t v = 0xafca54u; esp -= 4; W32(esp, v); }
/* 961d99: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 961d9a: call 0x953470 */
  esp -= 4; W32(esp, 0x961d9fu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 961d9f: fld dword ptr [0xcf8a50] */
  { double v = F32((uint32_t)(0xcf8a50u)); FPUSH(v); }
/* 961da5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 961da8: fstp qword ptr [esp + 0x30] */
  WF64((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 961dac: fld dword ptr [0xcf8450] */
  { double v = F32((uint32_t)(0xcf8450u)); FPUSH(v); }
/* 961db2: fstp qword ptr [esp + 0x28] */
  WF64((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 961db6: fld dword ptr [0xcf846c] */
  { double v = F32((uint32_t)(0xcf846cu)); FPUSH(v); }
/* 961dbc: fstp qword ptr [esp + 0x20] */
  WF64((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 961dc0: fld dword ptr [0xcf83ec] */
  { double v = F32((uint32_t)(0xcf83ecu)); FPUSH(v); }
/* 961dc6: fstp qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 961dca: fld dword ptr [0xcf8a08] */
  { double v = F32((uint32_t)(0xcf8a08u)); FPUSH(v); }
/* 961dd0: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 961dd4: fld dword ptr [0xcf8a14] */
  { double v = F32((uint32_t)(0xcf8a14u)); FPUSH(v); }
/* 961dda: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 961dde: fld dword ptr [0xcf8a18] */
  { double v = F32((uint32_t)(0xcf8a18u)); FPUSH(v); }
/* 961de4: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 961de7: push 0xafc8c8 */
  { uint32_t v = 0xafc8c8u; esp -= 4; W32(esp, v); }
/* 961dec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 961ded: call 0x953470 */
  esp -= 4; W32(esp, 0x961df2u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 961df2: mov eax, dword ptr [0xcf85c8] */
  eax = R32((uint32_t)(0xcf85c8u));
/* 961df7: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 961dfa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 961dfc: je 0x961e18 */
  if (zf) goto L_961e18;
L_961dfe: /* 961dfe: fld dword ptr [0xcf8a44] */
  { double v = F32((uint32_t)(0xcf8a44u)); FPUSH(v); }
/* 961e04: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 961e07: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 961e0a: push 0xafc898 */
  { uint32_t v = 0xafc898u; esp -= 4; W32(esp, v); }
/* 961e0f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 961e10: call 0x953470 */
  esp -= 4; W32(esp, 0x961e15u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 961e15: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_961e18: /* 961e18: fld dword ptr [0xcf8408] */
  { double v = F32((uint32_t)(0xcf8408u)); FPUSH(v); }
/* 961e1e: fcomp dword ptr [0xa216c0] */
  fpu_com(ST0, F32((uint32_t)(0xa216c0u)));
  FPOP();
/* 961e24: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 961e26: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 961e29: jp 0x961e45 */
  if (pf) goto L_961e45;
L_961e2b: /* 961e2b: fld dword ptr [0xcf8408] */
  { double v = F32((uint32_t)(0xcf8408u)); FPUSH(v); }
/* 961e31: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 961e34: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 961e37: push 0xafc870 */
  { uint32_t v = 0xafc870u; esp -= 4; W32(esp, v); }
/* 961e3c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 961e3d: call 0x953470 */
  esp -= 4; W32(esp, 0x961e42u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 961e42: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_961e45: /* 961e45: mov eax, dword ptr [0xcf8488] */
  eax = R32((uint32_t)(0xcf8488u));
/* 961e4a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 961e4c: je 0x961e68 */
  if (zf) goto L_961e68;
L_961e4e: /* 961e4e: fld dword ptr [0xcf8460] */
  { double v = F32((uint32_t)(0xcf8460u)); FPUSH(v); }
/* 961e54: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 961e57: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 961e5a: push 0xafc84c */
  { uint32_t v = 0xafc84cu; esp -= 4; W32(esp, v); }
/* 961e5f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 961e60: call 0x953470 */
  esp -= 4; W32(esp, 0x961e65u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 961e65: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_961e68: /* 961e68: fld dword ptr [0xcf840c] */
  { double v = F32((uint32_t)(0xcf840cu)); FPUSH(v); }
/* 961e6e: fcomp dword ptr [0xa216c0] */
  fpu_com(ST0, F32((uint32_t)(0xa216c0u)));
  FPOP();
/* 961e74: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 961e76: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 961e79: jp 0x961e95 */
  if (pf) goto L_961e95;
L_961e7b: /* 961e7b: fld dword ptr [0xcf840c] */
  { double v = F32((uint32_t)(0xcf840cu)); FPUSH(v); }
/* 961e81: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 961e84: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 961e87: push 0xafc820 */
  { uint32_t v = 0xafc820u; esp -= 4; W32(esp, v); }
/* 961e8c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 961e8d: call 0x953470 */
  esp -= 4; W32(esp, 0x961e92u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 961e92: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_961e95: /* 961e95: mov eax, dword ptr [0xcf8484] */
  eax = R32((uint32_t)(0xcf8484u));
/* 961e9a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 961e9c: je 0x961eb8 */
  if (zf) goto L_961eb8;
L_961e9e: /* 961e9e: fld dword ptr [0xcf8464] */
  { double v = F32((uint32_t)(0xcf8464u)); FPUSH(v); }
/* 961ea4: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 961ea7: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 961eaa: push 0xafc7f8 */
  { uint32_t v = 0xafc7f8u; esp -= 4; W32(esp, v); }
/* 961eaf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 961eb0: call 0x953470 */
  esp -= 4; W32(esp, 0x961eb5u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 961eb5: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_961eb8: /* 961eb8: fld dword ptr [0xcf8a2c] */
  { double v = F32((uint32_t)(0xcf8a2cu)); FPUSH(v); }
/* 961ebe: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 961ec1: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 961ec4: push 0x3e800000 */
  { uint32_t v = 0x3e800000u; esp -= 4; W32(esp, v); }
/* 961ec9: fld dword ptr [0xcf8a48] */
  { double v = F32((uint32_t)(0xcf8a48u)); FPUSH(v); }
/* 961ecf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 961ed1: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 961ed4: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 961ed7: push 0xafc748 */
  { uint32_t v = 0xafc748u; esp -= 4; W32(esp, v); }
/* 961edc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 961edd: call 0x953470 */
  esp -= 4; W32(esp, 0x961ee2u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 961ee2: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 961ee7: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 961eea: xor edi, edi */
  edi = 0;
/* 961eec: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 961eee: jle 0x961f17 */
  if ((zf || sf != of)) goto L_961f17;
L_961ef0: /* 961ef0: mov ecx, dword ptr [0xcf8a40] */
  ecx = R32((uint32_t)(0xcf8a40u));
/* 961ef6: fld dword ptr [ecx + edi*4] */
  { double v = F32((uint32_t)(ecx + edi*4)); FPUSH(v); }
/* 961ef9: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 961efc: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 961eff: push 0xafc73c */
  { uint32_t v = 0xafc73cu; esp -= 4; W32(esp, v); }
/* 961f04: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 961f05: call 0x953470 */
  esp -= 4; W32(esp, 0x961f0au); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 961f0a: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 961f0f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 961f12: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 961f13: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 961f15: jl 0x961ef0 */
  if ((sf != of)) goto L_961ef0;
L_961f17: /* 961f17: push 0xaf64e4 */
  { uint32_t v = 0xaf64e4u; esp -= 4; W32(esp, v); }
/* 961f1c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 961f1d: call 0x953470 */
  esp -= 4; W32(esp, 0x961f22u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 961f22: mov ecx, dword ptr [0xcf81c0] */
  ecx = R32((uint32_t)(0xcf81c0u));
/* 961f28: xor eax, eax */
  eax = 0;
/* 961f2a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 961f2d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 961f2f: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 961f33: jle 0x961f52 */
  if ((zf || sf != of)) goto L_961f52;
L_961f35: /* 961f35: lea edx, [esp + 8] */
  edx = (uint32_t)(esp + 0x8u);
/* 961f39: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 961f3a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 961f3b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 961f3c: call 0x9620d0 */
  esp -= 4; W32(esp, 0x961f41u); SPILL(); f_9620d0(); if (g_unwind) return; RELOAD();
/* 961f41: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 961f45: mov ecx, dword ptr [0xcf81c0] */
  ecx = R32((uint32_t)(0xcf81c0u));
/* 961f4b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 961f4e: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 961f50: jl 0x961f35 */
  if ((sf != of)) goto L_961f35;
L_961f52: /* 961f52: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 961f53: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 961f54: mov esp, ebp */
  esp = ebp;
/* 961f56: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 961f57: ret  */
  esp += 4; SPILL(); return;
}

void f_961f60(void) {
  LOAD_REGS();
L_961f60: /* 961f60: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 961f61: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 961f62: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 961f66: cmp esi, 0xc2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xc2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 961f6c: jge 0x9620c3 */
  if ((sf == of)) goto L_9620c3;
L_961f72: /* 961f72: mov al, byte ptr [esi + 0xcf80da] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xcf80dau))) & 0xffu);
/* 961f78: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 961f7a: jne 0x9620c3 */
  if (!zf) goto L_9620c3;
L_961f80: /* 961f80: mov al, byte ptr [esi + 0xcf8018] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xcf8018u))) & 0xffu);
/* 961f86: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 961f88: jne 0x961fa4 */
  if (!zf) goto L_961fa4;
L_961f8a: /* 961f8a: mov eax, dword ptr [esi*4 + 0xcf7b8c] */
  eax = R32((uint32_t)(esi*4 + 0xcf7b8cu));
/* 961f91: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 961f92: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 961f93: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 961f97: mov dword ptr [esp + 8], 0xaf2ab8 */
  W32((uint32_t)(esp + 0x8u), 0xaf2ab8u);
/* 961f9f: jmp 0x953470 */
  SPILL(); f_953470(); return;
L_961fa4: /* 961fa4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 961fa5: call 0x961c80 */
  esp -= 4; W32(esp, 0x961faau); SPILL(); f_961c80(); if (g_unwind) return; RELOAD();
/* 961faa: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 961fad: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 961faf: jne 0x9620c3 */
  if (!zf) goto L_9620c3;
L_961fb5: /* 961fb5: mov eax, dword ptr [esi*4 + 0xcf7b8c] */
  eax = R32((uint32_t)(esi*4 + 0xcf7b8cu));
/* 961fbc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 961fbe: lea ebx, [esi*4 + 0xcf7b8c] */
  ebx = (uint32_t)(esi*4 + 0xcf7b8cu);
/* 961fc5: je 0x9620c3 */
  if (zf) goto L_9620c3;
L_961fcb: /* 961fcb: mov byte ptr [esi + 0xcf80da], 1 */
  W8((uint32_t)(esi + 0xcf80dau), 0x1u);
/* 961fd2: mov ax, word ptr [esi*2 + 0xcf7e94] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi*2 + 0xcf7e94u))) & 0xffffu);
/* 961fda: cmp ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 961fde: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 961fdf: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 961fe3: je 0x962006 */
  if (zf) goto L_962006;
L_961fe5: /* 961fe5: movzx edx, al */
  edx = (uint32_t)((eax & 0xffu));
/* 961fe8: mov ecx, dword ptr [edx*4 + 0xcf77c0] */
  ecx = R32((uint32_t)(edx*4 + 0xcf77c0u));
/* 961fef: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 961ff1: jne 0x962006 */
  if (!zf) goto L_962006;
L_961ff3: /* 961ff3: push 0xafcaa4 */
  { uint32_t v = 0xafcaa4u; esp -= 4; W32(esp, v); }
/* 961ff8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 961ff9: call 0x953470 */
  esp -= 4; W32(esp, 0x961ffeu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 961ffe: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 962001: jmp 0x9620b1 */
  goto L_9620b1;
L_962006: /* 962006: mov cl, byte ptr [esi + 0xcf8018] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xcf8018u))) & 0xffu);
/* 96200c: cmp cl, 5 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 96200f: jl 0x96205e */
  if ((sf != of)) goto L_96205e;
L_962011: /* 962011: cmp ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 962015: jne 0x96202b */
  if (!zf) goto L_96202b;
L_962017: /* 962017: fld dword ptr [esi*4 + 0xcf77c0] */
  { double v = F32((uint32_t)(esi*4 + 0xcf77c0u)); FPUSH(v); }
/* 96201e: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 962021: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 962024: push 0xafca9c */
  { uint32_t v = 0xafca9cu; esp -= 4; W32(esp, v); }
/* 962029: jmp 0x9620a8 */
  goto L_9620a8;
L_96202b: /* 96202b: cmp cl, 5 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 96202e: jl 0x96205e */
  if ((sf != of)) goto L_96205e;
L_962030: /* 962030: cmp ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 962034: je 0x962059 */
  if (zf) goto L_962059;
L_962036: /* 962036: movzx eax, byte ptr [esi*2 + 0xcf7e94] */
  eax = (uint32_t)(R8((uint32_t)(esi*2 + 0xcf7e94u)));
/* 96203e: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 962041: fild dword ptr [eax*4 + 0xcf77c0] */
  { double v = (double)(int32_t)R32((uint32_t)(eax*4 + 0xcf77c0u)); FPUSH(v); }
/* 962048: fdivr dword ptr [esi*4 + 0xcf77c0] */
  ST0 = (F32((uint32_t)(esi*4 + 0xcf77c0u))) / ST0;
/* 96204f: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 962052: push 0xafca9c */
  { uint32_t v = 0xafca9cu; esp -= 4; W32(esp, v); }
/* 962057: jmp 0x9620a8 */
  goto L_9620a8;
L_962059: /* 962059: cmp cl, 5 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 96205c: jge 0x9620b1 */
  if ((sf == of)) goto L_9620b1;
L_96205e: /* 96205e: cmp ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 962062: jne 0x96207c */
  if (!zf) goto L_96207c;
L_962064: /* 962064: mov ecx, dword ptr [esi*4 + 0xcf77c0] */
  ecx = R32((uint32_t)(esi*4 + 0xcf77c0u));
/* 96206b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96206c: push 0xafca98 */
  { uint32_t v = 0xafca98u; esp -= 4; W32(esp, v); }
/* 962071: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 962072: call 0x953470 */
  esp -= 4; W32(esp, 0x962077u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 962077: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96207a: jmp 0x9620b1 */
  goto L_9620b1;
L_96207c: /* 96207c: cmp cl, 5 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 96207f: jge 0x9620b1 */
  if ((sf == of)) goto L_9620b1;
L_962081: /* 962081: cmp ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 962085: je 0x9620b1 */
  if (zf) goto L_9620b1;
L_962087: /* 962087: fild dword ptr [esi*4 + 0xcf77c0] */
  { double v = (double)(int32_t)R32((uint32_t)(esi*4 + 0xcf77c0u)); FPUSH(v); }
/* 96208e: movzx edx, byte ptr [esi*2 + 0xcf7e94] */
  edx = (uint32_t)(R8((uint32_t)(esi*2 + 0xcf7e94u)));
/* 962096: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 962099: fidiv dword ptr [edx*4 + 0xcf77c0] */
  ST0 = ST0 / ((double)(int32_t)R32((uint32_t)(edx*4 + 0xcf77c0u)));
/* 9620a0: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 9620a3: push 0xafca90 */
  { uint32_t v = 0xafca90u; esp -= 4; W32(esp, v); }
L_9620a8: /* 9620a8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9620a9: call 0x953470 */
  esp -= 4; W32(esp, 0x9620aeu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9620ae: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9620b1: /* 9620b1: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 9620b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9620b4: push 0xafca88 */
  { uint32_t v = 0xafca88u; esp -= 4; W32(esp, v); }
/* 9620b9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9620ba: call 0x953470 */
  esp -= 4; W32(esp, 0x9620bfu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9620bf: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9620c2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_9620c3: /* 9620c3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9620c4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9620c5: ret  */
  esp += 4; SPILL(); return;
}

void f_9620d0(void) {
  LOAD_REGS();
L_9620d0: /* 9620d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9620d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9620d2: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 9620d6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9620d7: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 9620db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9620dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9620dd: call 0x961bf0 */
  esp -= 4; W32(esp, 0x9620e2u); SPILL(); f_961bf0(); if (g_unwind) return; RELOAD();
/* 9620e2: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 9620e6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9620e9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9620eb: je 0x96211b */
  if (zf) goto L_96211b;
L_9620ed: /* 9620ed: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 9620f1: push 0xaf2b88 */
  { uint32_t v = 0xaf2b88u; esp -= 4; W32(esp, v); }
/* 9620f6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9620f7: call 0x953470 */
  esp -= 4; W32(esp, 0x9620fcu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9620fc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9620ff: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 962101: jge 0x96211b */
  if ((sf == of)) goto L_96211b;
L_962103: /* 962103: movzx ecx, byte ptr [esi + 0xcf7ac8] */
  ecx = (uint32_t)(R8((uint32_t)(esi + 0xcf7ac8u)));
/* 96210a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96210c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96210d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96210e: call 0x961f60 */
  esp -= 4; W32(esp, 0x962113u); SPILL(); f_961f60(); if (g_unwind) return; RELOAD();
/* 962113: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 962116: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 962117: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 962119: jl 0x962103 */
  if ((sf != of)) goto L_962103;
L_96211b: /* 96211b: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 96211f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 962121: je 0x962125 */
  if (zf) goto L_962125;
L_962123: /* 962123: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
L_962125: /* 962125: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 962126: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 962127: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 962128: ret  */
  esp += 4; SPILL(); return;
}

void f_962130(void) {
  LOAD_REGS();
L_962130: /* 962130: fild dword ptr [esp + 4] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 962134: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 962138: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 96213e: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 962142: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 962144: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 962146: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 962148: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 96214a: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 96214e: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 962150: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 962152: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 962154: fsqrt  */
  ST0 = sqrt(ST0);
/* 962156: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 962158: ret  */
  esp += 4; SPILL(); return;
}

void f_962160(void) {
  LOAD_REGS();
L_962160: /* 962160: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 962161: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 962162: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 962163: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 962167: mov esi, edi */
  esi = edi;
/* 962169: imul esi, dword ptr [esp + 0x18] */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x18u)));
  esi = (uint32_t)r;
  }
/* 96216e: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 962171: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 962172: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x962178u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 962178: mov ebx, eax */
  ebx = eax;
/* 96217a: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96217c: jne 0x96219b */
  if (!zf) goto L_96219b;
L_96217e: /* 96217e: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 962183: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 962184: push 0xafcab4 */
  { uint32_t v = 0xafcab4u; esp -= 4; W32(esp, v); }
/* 962189: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96218a: call 0x953470 */
  esp -= 4; W32(esp, 0x96218fu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96218f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 962190: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 962191: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 962193: call 0x9535b0 */
  esp -= 4; W32(esp, 0x962198u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 962198: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96219b: /* 96219b: mov ecx, esi */
  ecx = esi;
/* 96219d: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 9621a1: mov edx, ecx */
  edx = ecx;
/* 9621a3: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 9621a6: mov edi, ebx */
  edi = ebx;
/* 9621a8: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 9621aa: mov ecx, edx */
  ecx = edx;
/* 9621ac: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 9621af: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 9621b1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9621b2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9621b3: mov eax, ebx */
  eax = ebx;
/* 9621b5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9621b6: ret  */
  esp += 4; SPILL(); return;
}

void f_9621c0(void) {
  LOAD_REGS();
L_9621c0: /* 9621c0: cmp dword ptr [esp + 4], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x4u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9621c5: jne 0x962203 */
  if (!zf) goto L_962203;
L_9621c7: /* 9621c7: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 9621cb: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 9621ce: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 9621d2: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 9621d6: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 9621d9: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 9621dc: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 9621df: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9621e1: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 9621e3: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 9621e6: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 9621e8: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 9621eb: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 9621ed: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9621ef: fchs  */
  ST0 = -ST0;
/* 9621f1: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* 9621f4: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 9621f7: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 9621f9: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 9621fc: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 9621fe: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 962200: fstp dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0); FPOP();
L_962203: /* 962203: ret  */
  esp += 4; SPILL(); return;
}

void f_962210(void) {
  LOAD_REGS();
L_962210: /* 962210: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 962213: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 962214: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 962218: cmp esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96221b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96221c: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 962220: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 962228: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* 962230: mov dword ptr [edi], 0 */
  W32((uint32_t)(edi), 0x0u);
/* 962236: jge 0x962260 */
  if ((sf == of)) goto L_962260;
L_962238: /* 962238: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 96223d: push 0xafcae8 */
  { uint32_t v = 0xafcae8u; esp -= 4; W32(esp, v); }
/* 962242: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 962243: call 0x953470 */
  esp -= 4; W32(esp, 0x962248u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 962248: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96224a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96224c: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 96224e: call 0x9535b0 */
  esp -= 4; W32(esp, 0x962253u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 962253: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 962257: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96225a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96225b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96225c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96225f: ret  */
  esp += 4; SPILL(); return;
L_962260: /* 962260: jne 0x9622a8 */
  if (!zf) goto L_9622a8;
L_962262: /* 962262: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 962266: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 962269: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 96226c: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 96226e: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 962270: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 962273: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 962275: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 962277: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 96227d: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 96227f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 962281: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 962284: jp 0x962288 */
  if (pf) goto L_962288;
L_962286: /* 962286: fchs  */
  ST0 = -ST0;
L_962288: /* 962288: mov ecx, dword ptr [0xcf8a40] */
  ecx = R32((uint32_t)(0xcf8a40u));
/* 96228e: fcomp dword ptr [ecx + 4] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x4u)));
  FPOP();
L_962291: /* 962291: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 962293: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 962296: jp 0x962345 */
  if (pf) goto L_962345;
L_96229c: /* 96229c: mov dword ptr [edi], 1 */
  W32((uint32_t)(edi), 0x1u);
/* 9622a2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9622a3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9622a4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9622a7: ret  */
  esp += 4; SPILL(); return;
L_9622a8: /* 9622a8: cmp esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9622ab: jne 0x962309 */
  if (!zf) goto L_962309;
L_9622ad: /* 9622ad: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 9622b1: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 9622b4: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 9622b7: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
/* 9622ba: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 9622bc: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 9622bf: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 9622c2: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 9622c5: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9622c7: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 9622c9: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 9622cc: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 9622cf: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 9622d2: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 9622d5: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9622d7: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 9622d9: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9622db: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 9622de: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 9622e1: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 9622e4: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 9622e7: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9622e9: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 9622eb: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9622ed: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 9622f3: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9622f5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9622f7: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9622fa: jp 0x9622fe */
  if (pf) goto L_9622fe;
L_9622fc: /* 9622fc: fchs  */
  ST0 = -ST0;
L_9622fe: /* 9622fe: mov edx, dword ptr [0xcf8a40] */
  edx = R32((uint32_t)(0xcf8a40u));
/* 962304: fcomp dword ptr [edx + 8] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x8u)));
  FPOP();
/* 962307: jmp 0x962291 */
  goto L_962291;
L_962309: /* 962309: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96230a: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 96230e: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 962312: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 962313: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 962314: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 962315: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 962316: call 0x970600 */
  esp -= 4; W32(esp, 0x96231bu); SPILL(); f_970600(); if (g_unwind) return; RELOAD();
/* 96231b: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 962321: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 962324: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 962326: mov eax, esi */
  eax = esi;
/* 962328: je 0x96233b */
  if (zf) goto L_96233b;
L_96232a: /* 96232a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_962330: /* 962330: mov ecx, dword ptr [edi + eax*4 - 4] */
  ecx = R32((uint32_t)(edi + eax*4 + 0xfffffffcu));
/* 962334: fmul dword ptr [ecx + eax*4 - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + eax*4 + 0xfffffffcu)));
/* 962338: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 962339: jne 0x962330 */
  if (!zf) goto L_962330;
L_96233b: /* 96233b: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 96233f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 962341: je 0x962345 */
  if (zf) goto L_962345;
L_962343: /* 962343: fchs  */
  ST0 = -ST0;
L_962345: /* 962345: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 962346: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 962347: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96234a: ret  */
  esp += 4; SPILL(); return;
}

void f_962350(void) {
  LOAD_REGS();
L_962350: /* 962350: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 962353: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 962359: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96235a: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 96235e: fst dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0);
/* 962362: xor edx, edx */
  edx = 0;
/* 962364: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 962366: mov dword ptr [esp + 4], 0xff7fffff */
  W32((uint32_t)(esp + 0x4u), 0xff7fffffu);
/* 96236e: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* 962376: jle 0x96246e */
  if ((zf || sf != of)) goto L_96246e;
L_96237c: /* 96237c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96237d: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 962381: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 962382: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_962383: /* 962383: mov eax, dword ptr [0xcf8570] */
  eax = R32((uint32_t)(0xcf8570u));
/* 962388: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96238a: je 0x96239c */
  if (zf) goto L_96239c;
L_96238c: /* 96238c: lea eax, [ebp - 1] */
  eax = (uint32_t)(ebp + 0xffffffffu);
/* 96238f: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 962391: jne 0x96239c */
  if (!zf) goto L_96239c;
L_962393: /* 962393: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 962397: jmp 0x962443 */
  goto L_962443;
L_96239c: /* 96239c: mov eax, dword ptr [0xcf8410] */
  eax = R32((uint32_t)(0xcf8410u));
/* 9623a1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9623a3: je 0x9623bb */
  if (zf) goto L_9623bb;
L_9623a5: /* 9623a5: lea ecx, [ebp - 1] */
  ecx = (uint32_t)(ebp + 0xffffffffu);
/* 9623a8: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9623aa: jne 0x9623bb */
  if (!zf) goto L_9623bb;
L_9623ac: /* 9623ac: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 9623b0: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 9623b4: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 9623b6: jmp 0x962443 */
  goto L_962443;
L_9623bb: /* 9623bb: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 9623c0: fld dword ptr [0xa13bbc] */
  { double v = F32((uint32_t)(0xa13bbcu)); FPUSH(v); }
/* 9623c6: mov esi, eax */
  esi = eax;
/* 9623c8: imul esi, dword ptr [esp + 0x24] */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x24u)));
  esi = (uint32_t)r;
  }
/* 9623cd: lea esi, [ebx + esi*4] */
  esi = (uint32_t)(ebx + esi*4);
/* 9623d0: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 9623d2: mov dword ptr [esp + 0x28], 0xff7fffff */
  W32((uint32_t)(esp + 0x28u), 0xff7fffffu);
/* 9623da: mov ecx, ebx */
  ecx = ebx;
/* 9623dc: jae 0x962413 */
  if (!cf) goto L_962413;
L_9623de: /* 9623de: lea edi, [eax*4] */
  edi = (uint32_t)(eax*4);
L_9623e5: /* 9623e5: fld dword ptr [ecx + edx*4] */
  { double v = F32((uint32_t)(ecx + edx*4)); FPUSH(v); }
/* 9623e8: fcomp dword ptr [esp + 0x28] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x28u)));
  FPOP();
/* 9623ec: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9623ee: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9623f1: jne 0x9623fa */
  if (!zf) goto L_9623fa;
L_9623f3: /* 9623f3: fld dword ptr [ecx + edx*4] */
  { double v = F32((uint32_t)(ecx + edx*4)); FPUSH(v); }
/* 9623f6: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
L_9623fa: /* 9623fa: fld dword ptr [ecx + edx*4] */
  { double v = F32((uint32_t)(ecx + edx*4)); FPUSH(v); }
/* 9623fd: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9623ff: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 962401: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 962403: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 962406: jne 0x96240d */
  if (!zf) goto L_96240d;
L_962408: /* 962408: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 96240a: fld dword ptr [ecx + edx*4] */
  { double v = F32((uint32_t)(ecx + edx*4)); FPUSH(v); }
L_96240d: /* 96240d: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 96240f: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 962411: jb 0x9623e5 */
  if (cf) goto L_9623e5;
L_962413: /* 962413: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 962417: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 962419: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 96241d: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 96241f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 962421: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 962424: jp 0x96242c */
  if (pf) goto L_96242c;
L_962426: /* 962426: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 96242a: jmp 0x96242e */
  goto L_96242e;
L_96242c: /* 96242c: fstp st(0) */
  STI(0) = ST0; FPOP();
L_96242e: /* 96242e: fchs  */
  ST0 = -ST0;
/* 962430: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 962434: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 962436: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 962438: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 96243b: jnp 0x962443 */
  if (!pf) goto L_962443;
L_96243d: /* 96243d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 96243f: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
L_962443: /* 962443: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 962445: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 962447: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 96244b: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 96244d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 96244f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 962452: jp 0x96245a */
  if (pf) goto L_96245a;
L_962454: /* 962454: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 962458: jmp 0x96245c */
  goto L_96245c;
L_96245a: /* 96245a: fstp st(0) */
  STI(0) = ST0; FPOP();
L_96245c: /* 96245c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 96245d: cmp edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96245f: jl 0x962383 */
  if ((sf != of)) goto L_962383;
L_962465: /* 962465: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 962466: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 96246a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96246b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96246c: jmp 0x962470 */
  goto L_962470;
L_96246e: /* 96246e: fstp st(0) */
  STI(0) = ST0; FPOP();
L_962470: /* 962470: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 962474: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 962478: mov ecx, dword ptr [0xcf85cc] */
  ecx = R32((uint32_t)(0xcf85ccu));
/* 96247e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96247f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 962480: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 962481: call 0x962b90 */
  esp -= 4; W32(esp, 0x962486u); SPILL(); f_962b90(); if (g_unwind) return; RELOAD();
/* 962486: fmul qword ptr [0xa216f0] */
  ST0 = ST0 * (F64((uint32_t)(0xa216f0u)));
/* 96248c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96248f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 962490: fst dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0);
/* 962494: fcomp qword ptr [0xa216e8] */
  fpu_com(ST0, F64((uint32_t)(0xa216e8u)));
  FPOP();
/* 96249a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 96249c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 96249f: jp 0x9624a9 */
  if (pf) goto L_9624a9;
L_9624a1: /* 9624a1: mov dword ptr [esp + 0x18], 0x3b6a6000 */
  W32((uint32_t)(esp + 0x18u), 0x3b6a6000u);
L_9624a9: /* 9624a9: cmp dword ptr [0xcf8438], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9624b0: jl 0x9624d8 */
  if ((sf != of)) goto L_9624d8;
L_9624b2: /* 9624b2: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 9624b6: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 9624bc: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9624bf: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 9624c3: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 9624c7: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 9624ca: push 0xafcb34 */
  { uint32_t v = 0xafcb34u; esp -= 4; W32(esp, v); }
/* 9624cf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9624d0: call 0x953470 */
  esp -= 4; W32(esp, 0x9624d5u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9624d5: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9624d8: /* 9624d8: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 9624dc: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9624df: ret  */
  esp += 4; SPILL(); return;
}

void f_9624e0(void) {
  LOAD_REGS();
L_9624e0: /* 9624e0: push 0xcf8a24 */
  { uint32_t v = 0xcf8a24u; esp -= 4; W32(esp, v); }
/* 9624e5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9624e7: push 0xafcd08 */
  { uint32_t v = 0xafcd08u; esp -= 4; W32(esp, v); }
/* 9624ec: call 0x953320 */
  esp -= 4; W32(esp, 0x9624f1u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 9624f1: mov eax, dword ptr [0xcf8574] */
  eax = R32((uint32_t)(0xcf8574u));
/* 9624f6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9624f9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9624fb: jne 0x962554 */
  if (!zf) goto L_962554;
L_9624fd: /* 9624fd: mov eax, dword ptr [0xcf8a20] */
  eax = R32((uint32_t)(0xcf8a20u));
/* 962502: mov ecx, dword ptr [0xcf8a18] */
  ecx = R32((uint32_t)(0xcf8a18u));
/* 962508: mov edx, dword ptr [0xcf85cc] */
  edx = R32((uint32_t)(0xcf85ccu));
/* 96250e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96250f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 962510: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 962511: call 0x962b90 */
  esp -= 4; W32(esp, 0x962516u); SPILL(); f_962b90(); if (g_unwind) return; RELOAD();
/* 962516: fstp dword ptr [0xcf8a14] */
  WF32((uint32_t)(0xcf8a14u), ST0); FPOP();
/* 96251c: mov eax, dword ptr [0xcf8548] */
  eax = R32((uint32_t)(0xcf8548u));
/* 962521: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 962524: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 962526: je 0x962540 */
  if (zf) goto L_962540;
L_962528: /* 962528: fld dword ptr [0xcf854c] */
  { double v = F32((uint32_t)(0xcf854cu)); FPUSH(v); }
/* 96252e: fmul dword ptr [0xcf8a18] */
  ST0 = ST0 * (F32((uint32_t)(0xcf8a18u)));
/* 962534: fadd dword ptr [0xcf8a14] */
  ST0 = ST0 + (F32((uint32_t)(0xcf8a14u)));
/* 96253a: fstp dword ptr [0xcf8a14] */
  WF32((uint32_t)(0xcf8a14u), ST0); FPOP();
L_962540: /* 962540: push 0xcf8a14 */
  { uint32_t v = 0xcf8a14u; esp -= 4; W32(esp, v); }
/* 962545: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 962547: push 0xaf55ec */
  { uint32_t v = 0xaf55ecu; esp -= 4; W32(esp, v); }
/* 96254c: call 0x953320 */
  esp -= 4; W32(esp, 0x962551u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 962551: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_962554: /* 962554: fld dword ptr [0xcf8a18] */
  { double v = F32((uint32_t)(0xcf8a18u)); FPUSH(v); }
/* 96255a: mov ecx, dword ptr [0xcf8548] */
  ecx = R32((uint32_t)(0xcf8548u));
/* 962560: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 962562: fmul dword ptr [0xa21708] */
  ST0 = ST0 * (F32((uint32_t)(0xa21708u)));
/* 962568: mov dword ptr [0xcf8a28], 0x800000 */
  W32((uint32_t)(0xcf8a28u), 0x800000u);
/* 962572: fstp dword ptr [0xcf8a2c] */
  WF32((uint32_t)(0xcf8a2cu), ST0); FPOP();
/* 962578: fild dword ptr [0xcf85cc] */
  { double v = (double)(int32_t)R32((uint32_t)(0xcf85ccu)); FPUSH(v); }
/* 96257e: fmul dword ptr [0xa21708] */
  ST0 = ST0 * (F32((uint32_t)(0xa21708u)));
/* 962584: fsqrt  */
  ST0 = sqrt(ST0);
/* 962586: fst dword ptr [0xcf8a30] */
  WF32((uint32_t)(0xcf8a30u), ST0);
/* 96258c: fmul dword ptr [0xcf8a18] */
  ST0 = ST0 * (F32((uint32_t)(0xcf8a18u)));
/* 962592: fstp dword ptr [0xcf8a34] */
  WF32((uint32_t)(0xcf8a34u), ST0); FPOP();
/* 962598: fild dword ptr [0xcf85cc] */
  { double v = (double)(int32_t)R32((uint32_t)(0xcf85ccu)); FPUSH(v); }
/* 96259e: fmul qword ptr [0xa21700] */
  ST0 = ST0 * (F64((uint32_t)(0xa21700u)));
/* 9625a4: fstp dword ptr [0xcf8a08] */
  WF32((uint32_t)(0xcf8a08u), ST0); FPOP();
/* 9625aa: je 0x9625be */
  if (zf) goto L_9625be;
L_9625ac: /* 9625ac: fld dword ptr [0xcf8a08] */
  { double v = F32((uint32_t)(0xcf8a08u)); FPUSH(v); }
/* 9625b2: fadd dword ptr [0xcf854c] */
  ST0 = ST0 + (F32((uint32_t)(0xcf854cu)));
/* 9625b8: fstp dword ptr [0xcf8a08] */
  WF32((uint32_t)(0xcf8a08u), ST0); FPOP();
L_9625be: /* 9625be: fld dword ptr [0xcf8408] */
  { double v = F32((uint32_t)(0xcf8408u)); FPUSH(v); }
/* 9625c4: fcomp dword ptr [0xa216c0] */
  fpu_com(ST0, F32((uint32_t)(0xa216c0u)));
  FPOP();
/* 9625ca: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9625cc: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9625cf: jp 0x962601 */
  if (pf) goto L_962601;
L_9625d1: /* 9625d1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9625d3: fld dword ptr [0xcf8408] */
  { double v = F32((uint32_t)(0xcf8408u)); FPUSH(v); }
/* 9625d9: fsub dword ptr [0xcf8a08] */
  ST0 = ST0 - (F32((uint32_t)(0xcf8a08u)));
/* 9625df: fstp dword ptr [0xcf8408] */
  WF32((uint32_t)(0xcf8408u), ST0); FPOP();
/* 9625e5: je 0x962601 */
  if (zf) goto L_962601;
L_9625e7: /* 9625e7: push 0xcf8408 */
  { uint32_t v = 0xcf8408u; esp -= 4; W32(esp, v); }
/* 9625ec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9625ee: push 0xafccec */
  { uint32_t v = 0xafccecu; esp -= 4; W32(esp, v); }
/* 9625f3: call 0x953320 */
  esp -= 4; W32(esp, 0x9625f8u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 9625f8: mov ecx, dword ptr [0xcf8548] */
  ecx = R32((uint32_t)(0xcf8548u));
/* 9625fe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_962601: /* 962601: fld dword ptr [0xcf840c] */
  { double v = F32((uint32_t)(0xcf840cu)); FPUSH(v); }
/* 962607: fcomp dword ptr [0xa216c0] */
  fpu_com(ST0, F32((uint32_t)(0xa216c0u)));
  FPOP();
/* 96260d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 96260f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 962612: jp 0x962644 */
  if (pf) goto L_962644;
L_962614: /* 962614: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 962616: fld dword ptr [0xcf840c] */
  { double v = F32((uint32_t)(0xcf840cu)); FPUSH(v); }
/* 96261c: fsub dword ptr [0xcf8a08] */
  ST0 = ST0 - (F32((uint32_t)(0xcf8a08u)));
/* 962622: fstp dword ptr [0xcf840c] */
  WF32((uint32_t)(0xcf840cu), ST0); FPOP();
/* 962628: je 0x962644 */
  if (zf) goto L_962644;
L_96262a: /* 96262a: push 0xcf840c */
  { uint32_t v = 0xcf840cu; esp -= 4; W32(esp, v); }
/* 96262f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 962631: push 0xafccd0 */
  { uint32_t v = 0xafccd0u; esp -= 4; W32(esp, v); }
/* 962636: call 0x953320 */
  esp -= 4; W32(esp, 0x96263bu); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 96263b: mov ecx, dword ptr [0xcf8548] */
  ecx = R32((uint32_t)(0xcf8548u));
/* 962641: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_962644: /* 962644: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 962646: fld dword ptr [0xcf8a14] */
  { double v = F32((uint32_t)(0xcf8a14u)); FPUSH(v); }
/* 96264c: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 96264e: fld dword ptr [0xcf8460] */
  { double v = F32((uint32_t)(0xcf8460u)); FPUSH(v); }
/* 962654: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 962656: fstp dword ptr [0xcf8460] */
  WF32((uint32_t)(0xcf8460u), ST0); FPOP();
/* 96265c: fadd dword ptr [0xcf8464] */
  ST0 = ST0 + (F32((uint32_t)(0xcf8464u)));
/* 962662: fstp dword ptr [0xcf8464] */
  WF32((uint32_t)(0xcf8464u), ST0); FPOP();
/* 962668: je 0x9626b7 */
  if (zf) goto L_9626b7;
L_96266a: /* 96266a: mov eax, dword ptr [0xcf8454] */
  eax = R32((uint32_t)(0xcf8454u));
/* 96266f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 962671: jne 0x96267c */
  if (!zf) goto L_96267c;
L_962673: /* 962673: mov eax, dword ptr [0xcf8488] */
  eax = R32((uint32_t)(0xcf8488u));
/* 962678: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96267a: je 0x962696 */
  if (zf) goto L_962696;
L_96267c: /* 96267c: push 0xcf8460 */
  { uint32_t v = 0xcf8460u; esp -= 4; W32(esp, v); }
/* 962681: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 962683: push 0xafccb0 */
  { uint32_t v = 0xafccb0u; esp -= 4; W32(esp, v); }
/* 962688: call 0x953320 */
  esp -= 4; W32(esp, 0x96268du); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 96268d: mov ecx, dword ptr [0xcf8548] */
  ecx = R32((uint32_t)(0xcf8548u));
/* 962693: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_962696: /* 962696: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 962698: je 0x9626b7 */
  if (zf) goto L_9626b7;
L_96269a: /* 96269a: mov eax, dword ptr [0xcf8484] */
  eax = R32((uint32_t)(0xcf8484u));
/* 96269f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9626a1: je 0x9626b7 */
  if (zf) goto L_9626b7;
L_9626a3: /* 9626a3: push 0xcf8464 */
  { uint32_t v = 0xcf8464u; esp -= 4; W32(esp, v); }
/* 9626a8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9626aa: push 0xafcc90 */
  { uint32_t v = 0xafcc90u; esp -= 4; W32(esp, v); }
/* 9626af: call 0x953320 */
  esp -= 4; W32(esp, 0x9626b4u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 9626b4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9626b7: /* 9626b7: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 9626bd: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 9626c3: fcomp dword ptr [0xcf8408] */
  fpu_com(ST0, F32((uint32_t)(0xcf8408u)));
  FPOP();
/* 9626c9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9626cb: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9626ce: jne 0x9626d8 */
  if (!zf) goto L_9626d8;
L_9626d0: /* 9626d0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9626d2: fld dword ptr [0xcf8408] */
  { double v = F32((uint32_t)(0xcf8408u)); FPUSH(v); }
L_9626d8: /* 9626d8: fcom dword ptr [0xcf840c] */
  fpu_com(ST0, F32((uint32_t)(0xcf840cu)));
/* 9626de: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9626e0: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9626e3: jne 0x9626ed */
  if (!zf) goto L_9626ed;
L_9626e5: /* 9626e5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9626e7: fld dword ptr [0xcf840c] */
  { double v = F32((uint32_t)(0xcf840cu)); FPUSH(v); }
L_9626ed: /* 9626ed: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9626ef: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9626f1: fsubr qword ptr [0xa0da58] */
  ST0 = (F64((uint32_t)(0xa0da58u))) - ST0;
/* 9626f7: fsqrt  */
  ST0 = sqrt(ST0);
/* 9626f9: fild dword ptr [0xcf85cc] */
  { double v = (double)(int32_t)R32((uint32_t)(0xcf85ccu)); FPUSH(v); }
/* 9626ff: fsqrt  */
  ST0 = sqrt(ST0);
/* 962701: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 962703: fmul dword ptr [0xcf8a24] */
  ST0 = ST0 * (F32((uint32_t)(0xcf8a24u)));
/* 962709: fadd dword ptr [0xcf8a14] */
  ST0 = ST0 + (F32((uint32_t)(0xcf8a14u)));
/* 96270f: fstp dword ptr [0xcf8a48] */
  WF32((uint32_t)(0xcf8a48u), ST0); FPOP();
/* 962715: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 962717: fild dword ptr [0xcf85cc] */
  { double v = (double)(int32_t)R32((uint32_t)(0xcf85ccu)); FPUSH(v); }
/* 96271d: fld dword ptr [0xcf8460] */
  { double v = F32((uint32_t)(0xcf8460u)); FPUSH(v); }
/* 962723: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 962725: fadd dword ptr [0xcf8a14] */
  ST0 = ST0 + (F32((uint32_t)(0xcf8a14u)));
/* 96272b: fld dword ptr [0xcf8a48] */
  { double v = F32((uint32_t)(0xcf8a48u)); FPUSH(v); }
/* 962731: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 962733: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 962735: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 962738: jp 0x962742 */
  if (pf) goto L_962742;
L_96273a: /* 96273a: fstp dword ptr [0xcf8a48] */
  WF32((uint32_t)(0xcf8a48u), ST0); FPOP();
/* 962740: jmp 0x962744 */
  goto L_962744;
L_962742: /* 962742: fstp st(0) */
  STI(0) = ST0; FPOP();
L_962744: /* 962744: fmul dword ptr [0xcf8464] */
  ST0 = ST0 * (F32((uint32_t)(0xcf8464u)));
/* 96274a: fadd dword ptr [0xcf8a14] */
  ST0 = ST0 + (F32((uint32_t)(0xcf8a14u)));
/* 962750: fld dword ptr [0xcf8a48] */
  { double v = F32((uint32_t)(0xcf8a48u)); FPUSH(v); }
/* 962756: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 962758: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 96275a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 96275d: jp 0x962767 */
  if (pf) goto L_962767;
L_96275f: /* 96275f: fstp dword ptr [0xcf8a48] */
  WF32((uint32_t)(0xcf8a48u), ST0); FPOP();
/* 962765: jmp 0x962769 */
  goto L_962769;
L_962767: /* 962767: fstp st(0) */
  STI(0) = ST0; FPOP();
L_962769: /* 962769: mov eax, dword ptr [0xcf845c] */
  eax = R32((uint32_t)(0xcf845cu));
/* 96276e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 962770: je 0x962786 */
  if (zf) goto L_962786;
L_962772: /* 962772: push 0xcf8a48 */
  { uint32_t v = 0xcf8a48u; esp -= 4; W32(esp, v); }
/* 962777: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 962779: push 0xafcc84 */
  { uint32_t v = 0xafcc84u; esp -= 4; W32(esp, v); }
/* 96277e: call 0x953320 */
  esp -= 4; W32(esp, 0x962783u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 962783: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_962786: /* 962786: fld dword ptr [0xcf8a48] */
  { double v = F32((uint32_t)(0xcf8a48u)); FPUSH(v); }
/* 96278c: fmul dword ptr [0xa07fe4] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fe4u)));
/* 962792: fstp dword ptr [0xcf8a44] */
  WF32((uint32_t)(0xcf8a44u), ST0); FPOP();
/* 962798: fld dword ptr [0xcf8bb4] */
  { double v = F32((uint32_t)(0xcf8bb4u)); FPUSH(v); }
/* 96279e: fcomp dword ptr [0xa216c0] */
  fpu_com(ST0, F32((uint32_t)(0xa216c0u)));
  FPOP();
/* 9627a4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9627a6: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9627a9: jp 0x9627f4 */
  if (pf) goto L_9627f4;
L_9627ab: /* 9627ab: mov eax, dword ptr [0xcf8440] */
  eax = R32((uint32_t)(0xcf8440u));
/* 9627b0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9627b2: jne 0x9627bd */
  if (!zf) goto L_9627bd;
L_9627b4: /* 9627b4: mov eax, dword ptr [0xcf8444] */
  eax = R32((uint32_t)(0xcf8444u));
/* 9627b9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9627bb: je 0x9627f4 */
  if (zf) goto L_9627f4;
L_9627bd: /* 9627bd: fild dword ptr [0xcf85cc] */
  { double v = (double)(int32_t)R32((uint32_t)(0xcf85ccu)); FPUSH(v); }
/* 9627c3: mov dword ptr [0xcf85c8], 1 */
  W32((uint32_t)(0xcf85c8u), 0x1u);
/* 9627cd: fsqrt  */
  ST0 = sqrt(ST0);
/* 9627cf: fmul dword ptr [0xcf8bb4] */
  ST0 = ST0 * (F32((uint32_t)(0xcf8bb4u)));
/* 9627d5: fadd dword ptr [0xcf8a14] */
  ST0 = ST0 + (F32((uint32_t)(0xcf8a14u)));
/* 9627db: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 9627dd: fld dword ptr [0xcf8a44] */
  { double v = F32((uint32_t)(0xcf8a44u)); FPUSH(v); }
/* 9627e3: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 9627e5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9627e7: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9627ea: jp 0x9627ff */
  if (pf) goto L_9627ff;
L_9627ec: /* 9627ec: fstp dword ptr [0xcf8a44] */
  WF32((uint32_t)(0xcf8a44u), ST0); FPOP();
/* 9627f2: jmp 0x962801 */
  goto L_962801;
L_9627f4: /* 9627f4: mov eax, dword ptr [0xcf85c8] */
  eax = R32((uint32_t)(0xcf85c8u));
/* 9627f9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9627fb: je 0x962815 */
  if (zf) goto L_962815;
L_9627fd: /* 9627fd: jmp 0x962801 */
  goto L_962801;
L_9627ff: /* 9627ff: fstp st(0) */
  STI(0) = ST0; FPOP();
L_962801: /* 962801: push 0xcf8a44 */
  { uint32_t v = 0xcf8a44u; esp -= 4; W32(esp, v); }
/* 962806: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 962808: push 0xafcc74 */
  { uint32_t v = 0xafcc74u; esp -= 4; W32(esp, v); }
/* 96280d: call 0x953320 */
  esp -= 4; W32(esp, 0x962812u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 962812: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_962815: /* 962815: fld dword ptr [0xcf8bb4] */
  { double v = F32((uint32_t)(0xcf8bb4u)); FPUSH(v); }
/* 96281b: fcomp dword ptr [0xcf8a14] */
  fpu_com(ST0, F32((uint32_t)(0xcf8a14u)));
  FPOP();
/* 962821: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 962823: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 962826: jp 0x96285c */
  if (pf) goto L_96285c;
L_962828: /* 962828: fld dword ptr [0xcf8a14] */
  { double v = F32((uint32_t)(0xcf8a14u)); FPUSH(v); }
/* 96282e: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 962833: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 962836: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 96283a: fld dword ptr [0xcf8bb4] */
  { double v = F32((uint32_t)(0xcf8bb4u)); FPUSH(v); }
/* 962840: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 962843: push 0xafcc18 */
  { uint32_t v = 0xafcc18u; esp -= 4; W32(esp, v); }
/* 962848: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 962849: call 0x953470 */
  esp -= 4; W32(esp, 0x96284eu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96284e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 962850: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 962852: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 962854: call 0x9535b0 */
  esp -= 4; W32(esp, 0x962859u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 962859: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96285c: /* 96285c: fld dword ptr [0xcf846c] */
  { double v = F32((uint32_t)(0xcf846cu)); FPUSH(v); }
/* 962862: fcomp dword ptr [0xa216c0] */
  fpu_com(ST0, F32((uint32_t)(0xa216c0u)));
  FPOP();
/* 962868: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 96286a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 96286d: jne 0x9628e9 */
  if (!zf) goto L_9628e9;
L_96286f: /* 96286f: mov eax, dword ptr [0xcf845c] */
  eax = R32((uint32_t)(0xcf845cu));
/* 962874: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 962876: jne 0x962886 */
  if (!zf) goto L_962886;
L_962878: /* 962878: mov ecx, dword ptr [0xcf8a14] */
  ecx = R32((uint32_t)(0xcf8a14u));
/* 96287e: mov dword ptr [0xcf846c], ecx */
  W32((uint32_t)(0xcf846cu), ecx);
/* 962884: jmp 0x9628af */
  goto L_9628af;
L_962886: /* 962886: cmp dword ptr [0xcf85cc], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf85ccu))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96288d: jg 0x96289d */
  if ((!zf && sf == of)) goto L_96289d;
L_96288f: /* 96288f: mov edx, dword ptr [0xcf8460] */
  edx = R32((uint32_t)(0xcf8460u));
/* 962895: mov dword ptr [0xcf846c], edx */
  W32((uint32_t)(0xcf846cu), edx);
/* 96289b: jmp 0x9628af */
  goto L_9628af;
L_96289d: /* 96289d: fld dword ptr [0xcf8460] */
  { double v = F32((uint32_t)(0xcf8460u)); FPUSH(v); }
/* 9628a3: fmul dword ptr [0x9f40f4] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f4u)));
/* 9628a9: fstp dword ptr [0xcf846c] */
  WF32((uint32_t)(0xcf846cu), ST0); FPOP();
L_9628af: /* 9628af: mov eax, dword ptr [0xcf83e8] */
  eax = R32((uint32_t)(0xcf83e8u));
/* 9628b4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9628b6: je 0x9628d5 */
  if (zf) goto L_9628d5;
L_9628b8: /* 9628b8: fld dword ptr [0xcf846c] */
  { double v = F32((uint32_t)(0xcf846cu)); FPUSH(v); }
/* 9628be: fcomp dword ptr [0xcf83ec] */
  fpu_com(ST0, F32((uint32_t)(0xcf83ecu)));
  FPOP();
/* 9628c4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9628c6: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9628c9: jne 0x9628d5 */
  if (!zf) goto L_9628d5;
L_9628cb: /* 9628cb: mov eax, dword ptr [0xcf83ec] */
  eax = R32((uint32_t)(0xcf83ecu));
/* 9628d0: mov dword ptr [0xcf846c], eax */
  W32((uint32_t)(0xcf846cu), eax);
L_9628d5: /* 9628d5: push 0xcf846c */
  { uint32_t v = 0xcf846cu; esp -= 4; W32(esp, v); }
/* 9628da: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9628dc: push 0xafcc04 */
  { uint32_t v = 0xafcc04u; esp -= 4; W32(esp, v); }
/* 9628e1: call 0x953320 */
  esp -= 4; W32(esp, 0x9628e6u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 9628e6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9628e9: /* 9628e9: fld dword ptr [0xcf8450] */
  { double v = F32((uint32_t)(0xcf8450u)); FPUSH(v); }
/* 9628ef: fcomp dword ptr [0xa216c0] */
  fpu_com(ST0, F32((uint32_t)(0xa216c0u)));
  FPOP();
/* 9628f5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9628f7: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9628fa: jne 0x96291c */
  if (!zf) goto L_96291c;
L_9628fc: /* 9628fc: mov ecx, dword ptr [0xcf846c] */
  ecx = R32((uint32_t)(0xcf846cu));
/* 962902: push 0xcf8450 */
  { uint32_t v = 0xcf8450u; esp -= 4; W32(esp, v); }
/* 962907: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 962909: push 0xafcbf0 */
  { uint32_t v = 0xafcbf0u; esp -= 4; W32(esp, v); }
/* 96290e: mov dword ptr [0xcf8450], ecx */
  W32((uint32_t)(0xcf8450u), ecx);
/* 962914: call 0x953320 */
  esp -= 4; W32(esp, 0x962919u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 962919: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96291c: /* 96291c: mov eax, dword ptr [0xcf83e8] */
  eax = R32((uint32_t)(0xcf83e8u));
/* 962921: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 962923: jne 0x962985 */
  if (!zf) goto L_962985;
L_962925: /* 962925: fld dword ptr [0xcf846c] */
  { double v = F32((uint32_t)(0xcf846cu)); FPUSH(v); }
/* 96292b: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 96292d: fstp dword ptr [0xcf83ec] */
  WF32((uint32_t)(0xcf83ecu), ST0); FPOP();
/* 962933: fld dword ptr [0xcf8408] */
  { double v = F32((uint32_t)(0xcf8408u)); FPUSH(v); }
/* 962939: fcomp dword ptr [0xa216c0] */
  fpu_com(ST0, F32((uint32_t)(0xa216c0u)));
  FPOP();
/* 96293f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 962941: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 962944: jp 0x962971 */
  if (pf) goto L_962971;
L_962946: /* 962946: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 96294c: fsub dword ptr [0xcf8408] */
  ST0 = ST0 - (F32((uint32_t)(0xcf8408u)));
/* 962952: fmul dword ptr [0xcf8a18] */
  ST0 = ST0 * (F32((uint32_t)(0xcf8a18u)));
/* 962958: fld dword ptr [0xcf83ec] */
  { double v = F32((uint32_t)(0xcf83ecu)); FPUSH(v); }
/* 96295e: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 962960: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 962962: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 962965: jp 0x96296f */
  if (pf) goto L_96296f;
L_962967: /* 962967: fstp dword ptr [0xcf83ec] */
  WF32((uint32_t)(0xcf83ecu), ST0); FPOP();
/* 96296d: jmp 0x962971 */
  goto L_962971;
L_96296f: /* 96296f: fstp st(0) */
  STI(0) = ST0; FPOP();
L_962971: /* 962971: push 0xcf83ec */
  { uint32_t v = 0xcf83ecu; esp -= 4; W32(esp, v); }
/* 962976: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 962978: push 0xafcbe0 */
  { uint32_t v = 0xafcbe0u; esp -= 4; W32(esp, v); }
/* 96297d: call 0x953320 */
  esp -= 4; W32(esp, 0x962982u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 962982: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_962985: /* 962985: fld dword ptr [0xcf8450] */
  { double v = F32((uint32_t)(0xcf8450u)); FPUSH(v); }
/* 96298b: mov edx, dword ptr [0xcf83ec] */
  edx = R32((uint32_t)(0xcf83ecu));
/* 962991: fmul dword ptr [0x9f7fc4] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7fc4u)));
/* 962997: mov dword ptr [0xcf8a50], edx */
  W32((uint32_t)(0xcf8a50u), edx);
/* 96299d: fld dword ptr [0xcf83ec] */
  { double v = F32((uint32_t)(0xcf83ecu)); FPUSH(v); }
/* 9629a3: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 9629a5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9629a7: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9629aa: jp 0x9629b4 */
  if (pf) goto L_9629b4;
L_9629ac: /* 9629ac: fstp dword ptr [0xcf8a50] */
  WF32((uint32_t)(0xcf8a50u), ST0); FPOP();
/* 9629b2: jmp 0x9629b6 */
  goto L_9629b6;
L_9629b4: /* 9629b4: fstp st(0) */
  STI(0) = ST0; FPOP();
L_9629b6: /* 9629b6: fld dword ptr [0xcf846c] */
  { double v = F32((uint32_t)(0xcf846cu)); FPUSH(v); }
/* 9629bc: fmul dword ptr [0x9f7fc4] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7fc4u)));
/* 9629c2: fld dword ptr [0xcf8a50] */
  { double v = F32((uint32_t)(0xcf8a50u)); FPUSH(v); }
/* 9629c8: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 9629ca: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9629cc: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9629cf: jp 0x9629d9 */
  if (pf) goto L_9629d9;
L_9629d1: /* 9629d1: fstp dword ptr [0xcf8a50] */
  WF32((uint32_t)(0xcf8a50u), ST0); FPOP();
/* 9629d7: jmp 0x9629db */
  goto L_9629db;
L_9629d9: /* 9629d9: fstp st(0) */
  STI(0) = ST0; FPOP();
L_9629db: /* 9629db: push 0xcf8a50 */
  { uint32_t v = 0xcf8a50u; esp -= 4; W32(esp, v); }
/* 9629e0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9629e2: push 0xafcbd4 */
  { uint32_t v = 0xafcbd4u; esp -= 4; W32(esp, v); }
/* 9629e7: call 0x953320 */
  esp -= 4; W32(esp, 0x9629ecu); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 9629ec: fld dword ptr [0xcf83ec] */
  { double v = F32((uint32_t)(0xcf83ecu)); FPUSH(v); }
/* 9629f2: fadd dword ptr [0xa216f8] */
  ST0 = ST0 + (F32((uint32_t)(0xa216f8u)));
/* 9629f8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9629fb: fcomp dword ptr [0xcf846c] */
  fpu_com(ST0, F32((uint32_t)(0xcf846cu)));
  FPOP();
/* 962a01: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 962a03: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 962a06: jp 0x962a43 */
  if (pf) goto L_962a43;
L_962a08: /* 962a08: mov eax, dword ptr [0xcf83f8] */
  eax = R32((uint32_t)(0xcf83f8u));
/* 962a0d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 962a0f: jne 0x962a43 */
  if (!zf) goto L_962a43;
L_962a11: /* 962a11: mov eax, dword ptr [0xcf841c] */
  eax = R32((uint32_t)(0xcf841cu));
/* 962a16: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 962a18: jne 0x962a43 */
  if (!zf) goto L_962a43;
L_962a1a: /* 962a1a: fld dword ptr [0xcf83ec] */
  { double v = F32((uint32_t)(0xcf83ecu)); FPUSH(v); }
/* 962a20: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 962a25: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 962a28: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 962a2c: fld dword ptr [0xcf846c] */
  { double v = F32((uint32_t)(0xcf846cu)); FPUSH(v); }
/* 962a32: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 962a35: push 0xafcb60 */
  { uint32_t v = 0xafcb60u; esp -= 4; W32(esp, v); }
/* 962a3a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 962a3b: call 0x953470 */
  esp -= 4; W32(esp, 0x962a40u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 962a40: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_962a43: /* 962a43: fld dword ptr [0xcf8a14] */
  { double v = F32((uint32_t)(0xcf8a14u)); FPUSH(v); }
/* 962a49: mov ecx, dword ptr [0xcf8a14] */
  ecx = R32((uint32_t)(0xcf8a14u));
/* 962a4f: fchs  */
  ST0 = -ST0;
/* 962a51: mov dword ptr [0xcf8bc0], ecx */
  W32((uint32_t)(0xcf8bc0u), ecx);
/* 962a57: fstp dword ptr [0xcf8bc4] */
  WF32((uint32_t)(0xcf8bc4u), ST0); FPOP();
/* 962a5d: ret  */
  esp += 4; SPILL(); return;
}

void f_962a60(void) {
  LOAD_REGS();
L_962a60: /* 962a60: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 962a61: mov eax, dword ptr [0xcf8c20] */
  eax = R32((uint32_t)(0xcf8c20u));
/* 962a66: mov ecx, dword ptr [0xcf8c1c] */
  ecx = R32((uint32_t)(0xcf8c1cu));
/* 962a6c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 962a6d: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 962a71: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 962a72: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 962a73: mov esi, dword ptr [0xcf787c] */
  esi = R32((uint32_t)(0xcf787cu));
/* 962a79: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 962a7a: xor edi, edi */
  edi = 0;
/* 962a7c: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 962a80: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 962a84: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 962a85: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 962a87: mov dword ptr [0xcf787c], esi */
  W32((uint32_t)(0xcf787cu), esi);
/* 962a8d: je 0x962ad8 */
  if (zf) goto L_962ad8;
L_962a8f: /* 962a8f: lea ebp, [eax + 4] */
  ebp = (uint32_t)(eax + 0x4u);
/* 962a92: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 962a95: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 962a97: je 0x962ad8 */
  if (zf) goto L_962ad8;
L_962a99: /* 962a99: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_962aa0: /* 962aa0: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 962aa3: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 962aa5: je 0x962afc */
  if (zf) goto L_962afc;
L_962aa7: /* 962aa7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 962aab: mov dword ptr [edx + edi*4], ecx */
  W32((uint32_t)(edx + edi*4), ecx);
/* 962aae: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 962aaf: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 962ab1: je 0x962ad1 */
  if (zf) goto L_962ad1;
L_962ab3: /* 962ab3: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 962ab7: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 962ab9: mov esi, ebx */
  esi = ebx;
/* 962abb: nop  */
/* 962abc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_962ac0: /* 962ac0: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 962ac2: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 962ac5: fsub dword ptr [edx + eax] */
  ST0 = ST0 - (F32((uint32_t)(edx + eax)));
/* 962ac8: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 962acb: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 962acc: fstp dword ptr [ecx - 4] */
  WF32((uint32_t)(ecx + 0xfffffffcu), ST0); FPOP();
/* 962acf: jne 0x962ac0 */
  if (!zf) goto L_962ac0;
L_962ad1: /* 962ad1: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 962ad4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 962ad6: jne 0x962aa0 */
  if (!zf) goto L_962aa0;
L_962ad8: /* 962ad8: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 962ada: jge 0x962afc */
  if ((sf == of)) goto L_962afc;
L_962adc: /* 962adc: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 962ae1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 962ae2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 962ae3: push 0xafcd58 */
  { uint32_t v = 0xafcd58u; esp -= 4; W32(esp, v); }
/* 962ae8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 962ae9: call 0x953470 */
  esp -= 4; W32(esp, 0x962aeeu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 962aee: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 962af0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 962af2: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 962af4: call 0x9535b0 */
  esp -= 4; W32(esp, 0x962af9u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 962af9: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_962afc: /* 962afc: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 962b00: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 962b04: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 962b05: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 962b06: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 962b07: call 0x962210 */
  esp -= 4; W32(esp, 0x962b0cu); SPILL(); f_962210(); if (g_unwind) return; RELOAD();
/* 962b0c: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 962b10: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 962b15: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 962b18: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 962b1b: jl 0x962b4d */
  if ((sf != of)) goto L_962b4d;
L_962b1d: /* 962b1d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 962b1f: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 962b23: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 962b24: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 962b25: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 962b26: call 0x95f210 */
  esp -= 4; W32(esp, 0x962b2bu); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 962b2b: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 962b2f: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 962b35: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 962b38: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 962b39: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 962b3c: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 962b3f: push 0xafcd14 */
  { uint32_t v = 0xafcd14u; esp -= 4; W32(esp, v); }
/* 962b44: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 962b45: call 0x953470 */
  esp -= 4; W32(esp, 0x962b4au); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 962b4a: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_962b4d: /* 962b4d: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 962b51: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 962b52: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 962b53: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 962b54: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 962b55: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 962b56: ret  */
  esp += 4; SPILL(); return;
}

void f_962b60(void) {
  LOAD_REGS();
L_962b60: /* 962b60: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 962b64: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 962b66: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 962b6a: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 962b6e: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 962b70: je 0x962b86 */
  if (zf) goto L_962b86;
L_962b72: /* 962b72: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 962b76: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
L_962b78: /* 962b78: fld dword ptr [ecx + eax] */
  { double v = F32((uint32_t)(ecx + eax)); FPUSH(v); }
/* 962b7b: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 962b7e: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 962b7f: fmul dword ptr [eax - 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffffcu)));
/* 962b82: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 962b84: jne 0x962b78 */
  if (!zf) goto L_962b78;
L_962b86: /* 962b86: ret  */
  esp += 4; SPILL(); return;
}

void f_962b90(void) {
  LOAD_REGS();
L_962b90: /* 962b90: fild dword ptr [esp + 4] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 962b94: fsqrt  */
  ST0 = sqrt(ST0);
/* 962b96: fmul dword ptr [esp + 8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x8u)));
/* 962b9a: fcom dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
/* 962b9e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 962ba0: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 962ba3: jne 0x962bab */
  if (!zf) goto L_962bab;
L_962ba5: /* 962ba5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 962ba7: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
L_962bab: /* 962bab: fild dword ptr [esp + 4] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 962baf: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 962bb4: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 962bb7: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 962bb9: fmul qword ptr [0xa21718] */
  ST0 = ST0 * (F64((uint32_t)(0xa21718u)));
/* 962bbf: fadd dword ptr [esp + 8] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x8u)));
/* 962bc3: fmul qword ptr [0xa21710] */
  ST0 = ST0 * (F64((uint32_t)(0xa21710u)));
/* 962bc9: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 962bcd: jl 0x962c05 */
  if ((sf != of)) goto L_962c05;
L_962bcf: /* 962bcf: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 962bd4: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 962bd7: fstp qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 962bdb: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 962bdf: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 962be3: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 962be7: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 962beb: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 962bef: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 962bf2: push 0xafcda0 */
  { uint32_t v = 0xafcda0u; esp -= 4; W32(esp, v); }
/* 962bf7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 962bf8: call 0x953470 */
  esp -= 4; W32(esp, 0x962bfdu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 962bfd: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 962c01: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 962c04: ret  */
  esp += 4; SPILL(); return;
L_962c05: /* 962c05: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 962c07: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 962c0b: ret  */
  esp += 4; SPILL(); return;
}

void f_962c10(void) {
  LOAD_REGS();
L_962c10: /* 962c10: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 962c14: fcomp dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
  FPOP();
/* 962c18: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 962c1a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 962c1d: jp 0x962c7c */
  if (pf) goto L_962c7c;
L_962c1f: /* 962c1f: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 962c23: fchs  */
  ST0 = -ST0;
/* 962c25: fcomp dword ptr [esp + 4] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x4u)));
  FPOP();
/* 962c29: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 962c2b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 962c2e: jp 0x962c7c */
  if (pf) goto L_962c7c;
L_962c30: /* 962c30: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 962c34: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 962c3a: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 962c3e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 962c40: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 962c43: jp 0x962c47 */
  if (pf) goto L_962c47;
L_962c45: /* 962c45: fchs  */
  ST0 = -ST0;
L_962c47: /* 962c47: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 962c4b: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 962c51: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 962c55: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 962c57: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 962c5a: jp 0x962c5e */
  if (pf) goto L_962c5e;
L_962c5c: /* 962c5c: fchs  */
  ST0 = -ST0;
L_962c5e: /* 962c5e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 962c60: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 962c62: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 962c64: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 962c66: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 962c69: jnp 0x962cb3 */
  if (!pf) goto L_962cb3;
L_962c6b: /* 962c6b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 962c6f: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 962c75: mov dword ptr [ecx], 1 */
  W32((uint32_t)(ecx), 0x1u);
/* 962c7b: ret  */
  esp += 4; SPILL(); return;
L_962c7c: /* 962c7c: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 962c80: fdiv dword ptr [esp + 4] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x4u)));
/* 962c84: fcom dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
/* 962c88: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 962c8a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 962c8d: je 0x962cb1 */
  if (zf) goto L_962cb1;
L_962c8f: /* 962c8f: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 962c93: fchs  */
  ST0 = -ST0;
/* 962c95: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 962c97: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 962c99: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 962c9b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 962c9e: jnp 0x962cb3 */
  if (!pf) goto L_962cb3;
L_962ca0: /* 962ca0: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 962ca4: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 962caa: mov dword ptr [edx], 1 */
  W32((uint32_t)(edx), 0x1u);
/* 962cb0: ret  */
  esp += 4; SPILL(); return;
L_962cb1: /* 962cb1: fstp st(0) */
  STI(0) = ST0; FPOP();
L_962cb3: /* 962cb3: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 962cb7: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 962cbb: fdiv dword ptr [esp + 8] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x8u)));
/* 962cbf: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 962cc5: ret  */
  esp += 4; SPILL(); return;
}

void f_962cd0(void) {
  LOAD_REGS();
L_962cd0: /* 962cd0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 962cd1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 962cd2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 962cd3: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 962cd7: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 962cda: test ah, 0x10 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 962cdd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 962cde: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 962ce6: je 0x962d18 */
  if (zf) goto L_962d18;
L_962ce8: /* 962ce8: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 962ceb: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 962cee: lea edi, [esi + 8] */
  edi = (uint32_t)(esi + 0x8u);
/* 962cf1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 962cf2: mov edi, dword ptr [esi + 0xc] */
  edi = R32((uint32_t)(esi + 0xcu));
/* 962cf5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 962cf6: shr eax, 0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 11;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 962cf9: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 962cfc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 962cfd: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
/* 962d00: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 962d01: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 962d02: mov ecx, dword ptr [0xcf85cc] */
  ecx = R32((uint32_t)(0xcf85ccu));
/* 962d08: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 962d09: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 962d0a: call 0x962df0 */
  esp -= 4; W32(esp, 0x962d0fu); SPILL(); f_962df0(); if (g_unwind) return; RELOAD();
/* 962d0f: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 962d13: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 962d16: jmp 0x962d95 */
  goto L_962d95;
L_962d18: /* 962d18: cmp dword ptr [0xcf8ba8], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8ba8u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 962d1f: jne 0x962d26 */
  if (!zf) goto L_962d26;
L_962d21: /* 962d21: mov ebp, dword ptr [esi + 0x14] */
  ebp = R32((uint32_t)(esi + 0x14u));
/* 962d24: jmp 0x962d31 */
  goto L_962d31;
L_962d26: /* 962d26: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 962d27: call 0x970960 */
  esp -= 4; W32(esp, 0x962d2cu); SPILL(); f_970960(); if (g_unwind) return; RELOAD();
/* 962d2c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 962d2f: mov ebp, eax */
  ebp = eax;
L_962d31: /* 962d31: mov edi, dword ptr [esi + 0x24] */
  edi = R32((uint32_t)(esi + 0x24u));
/* 962d34: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 962d36: je 0x962d7c */
  if (zf) goto L_962d7c;
L_962d38: /* 962d38: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 962d3b: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 962d3e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 962d40: je 0x962d7c */
  if (zf) goto L_962d7c;
L_962d42: /* 962d42: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 962d43: lea ebx, [esi + 8] */
  ebx = (uint32_t)(esi + 0x8u);
L_962d46: /* 962d46: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 962d49: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 962d4a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 962d4b: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 962d4e: xor ecx, ecx */
  ecx = 0;
/* 962d50: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 962d53: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 962d55: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 962d57: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 962d5c: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 962d5f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 962d60: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 962d62: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 962d63: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 962d64: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 962d65: call 0x962df0 */
  esp -= 4; W32(esp, 0x962d6au); SPILL(); f_962df0(); if (g_unwind) return; RELOAD();
/* 962d6a: fadd dword ptr [esp + 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x2cu)));
/* 962d6e: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 962d70: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 962d73: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 962d75: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 962d79: jne 0x962d46 */
  if (!zf) goto L_962d46;
L_962d7b: /* 962d7b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_962d7c: /* 962d7c: cmp dword ptr [0xcf8ba8], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8ba8u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 962d83: je 0x962d95 */
  if (zf) goto L_962d95;
L_962d85: /* 962d85: mov ecx, dword ptr [0xcf8b40] */
  ecx = R32((uint32_t)(0xcf8b40u));
/* 962d8b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 962d8c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 962d8d: call 0x953a60 */
  esp -= 4; W32(esp, 0x962d92u); SPILL(); f_953a60(); if (g_unwind) return; RELOAD();
/* 962d92: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_962d95: /* 962d95: test byte ptr [esi + 0x3e], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x3eu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 962d99: je 0x962dae */
  if (zf) goto L_962dae;
L_962d9b: /* 962d9b: mov eax, dword ptr [0xcf8410] */
  eax = R32((uint32_t)(0xcf8410u));
/* 962da0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 962da2: je 0x962dae */
  if (zf) goto L_962dae;
L_962da4: /* 962da4: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 962da8: fchs  */
  ST0 = -ST0;
/* 962daa: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
L_962dae: /* 962dae: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 962db3: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 962db7: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 962dba: jl 0x962ddd */
  if ((sf != of)) goto L_962ddd;
L_962dbc: /* 962dbc: mov edx, dword ptr [esi + 0x38] */
  edx = R32((uint32_t)(esi + 0x38u));
/* 962dbf: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 962dc4: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 962dc7: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 962dca: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 962dcb: push 0xafcde4 */
  { uint32_t v = 0xafcde4u; esp -= 4; W32(esp, v); }
/* 962dd0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 962dd1: call 0x953470 */
  esp -= 4; W32(esp, 0x962dd6u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 962dd6: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 962dda: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_962ddd: /* 962ddd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 962dde: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 962ddf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 962de0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 962de1: ret  */
  esp += 4; SPILL(); return;
}

void f_962df0(void) {
  LOAD_REGS();
L_962df0: /* 962df0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 962df3: mov eax, dword ptr [0xcf8c20] */
  eax = R32((uint32_t)(0xcf8c20u));
/* 962df8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 962df9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 962dfa: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 962dfe: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 962e02: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 962e06: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 962e07: xor ebx, ebx */
  ebx = 0;
/* 962e09: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 962e0b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 962e0c: mov edi, dword ptr [0xcf8c1c] */
  edi = R32((uint32_t)(0xcf8c1cu));
/* 962e12: je 0x962eec */
  if (zf) goto L_962eec;
L_962e18: /* 962e18: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 962e1b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 962e1d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 962e1f: je 0x962eec */
  if (zf) goto L_962eec;
L_962e25: /* 962e25: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 962e29: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 962e2c: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 962e2e: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 962e32: je 0x962ede */
  if (zf) goto L_962ede;
L_962e38: /* 962e38: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 962e3c: mov dword ptr [ecx + ebx*4], edi */
  W32((uint32_t)(ecx + ebx*4), edi);
/* 962e3f: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 962e42: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 962e46: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 962e47: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 962e49: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* 962e4d: mov eax, edx */
  eax = edx;
/* 962e4f: je 0x962e75 */
  if (zf) goto L_962e75;
L_962e51: /* 962e51: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 962e53: je 0x962ede */
  if (zf) goto L_962ede;
L_962e59: /* 962e59: mov edx, ebp */
  edx = ebp;
/* 962e5b: nop  */
/* 962e5c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_962e60: /* 962e60: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 962e62: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 962e65: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 962e67: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 962e6a: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 962e6d: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 962e6e: fstp dword ptr [edi - 4] */
  WF32((uint32_t)(edi + 0xfffffffcu), ST0); FPOP();
/* 962e71: jne 0x962e60 */
  if (!zf) goto L_962e60;
L_962e73: /* 962e73: jmp 0x962ede */
  goto L_962ede;
L_962e75: /* 962e75: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 962e77: mov esi, dword ptr [esp + 0x34] */
  esi = R32((uint32_t)(esp + 0x34u));
/* 962e7b: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 962e7d: je 0x962e99 */
  if (zf) goto L_962e99;
L_962e7f: /* 962e7f: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 962e83: sub esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 962e85: mov ebx, ebp */
  ebx = ebp;
L_962e87: /* 962e87: fld dword ptr [esi + eax] */
  { double v = F32((uint32_t)(esi + eax)); FPUSH(v); }
/* 962e8a: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 962e8d: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* 962e8e: fmul dword ptr [eax - 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffffcu)));
/* 962e91: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 962e93: jne 0x962e87 */
  if (!zf) goto L_962e87;
L_962e95: /* 962e95: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
L_962e99: /* 962e99: fld dword ptr [0xcf8a50] */
  { double v = F32((uint32_t)(0xcf8a50u)); FPUSH(v); }
/* 962e9f: fchs  */
  ST0 = -ST0;
/* 962ea1: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 962ea3: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 962ea5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 962ea7: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 962eaa: jnp 0x962f54 */
  if (!pf) goto L_962f54;
L_962eb0: /* 962eb0: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 962eb2: mov eax, edx */
  eax = edx;
/* 962eb4: je 0x962edc */
  if (zf) goto L_962edc;
L_962eb6: /* 962eb6: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 962eba: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 962ebe: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 962ec0: mov esi, ebp */
  esi = ebp;
L_962ec2: /* 962ec2: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 962ec4: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 962ec7: fmul dword ptr [edx + ecx] */
  ST0 = ST0 * (F32((uint32_t)(edx + ecx)));
/* 962eca: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 962ecd: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 962ed0: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 962ed1: fsubr dword ptr [eax - 4] */
  ST0 = (F32((uint32_t)(eax + 0xfffffffcu))) - ST0;
/* 962ed4: fsub dword ptr [ecx - 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 962ed7: fstp dword ptr [edi - 4] */
  WF32((uint32_t)(edi + 0xfffffffcu), ST0); FPOP();
/* 962eda: jne 0x962ec2 */
  if (!zf) goto L_962ec2;
L_962edc: /* 962edc: fstp st(0) */
  STI(0) = ST0; FPOP();
L_962ede: /* 962ede: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 962ee2: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 962ee4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 962ee6: jne 0x962e25 */
  if (!zf) goto L_962e25;
L_962eec: /* 962eec: lea esi, [ebp - 1] */
  esi = (uint32_t)(ebp + 0xffffffffu);
/* 962eef: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 962ef1: je 0x962f14 */
  if (zf) goto L_962f14;
L_962ef3: /* 962ef3: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 962ef9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 962efa: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 962efb: push 0xafce58 */
  { uint32_t v = 0xafce58u; esp -= 4; W32(esp, v); }
/* 962f00: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 962f01: call 0x953470 */
  esp -= 4; W32(esp, 0x962f06u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 962f06: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 962f08: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 962f0a: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 962f0c: call 0x9535b0 */
  esp -= 4; W32(esp, 0x962f11u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 962f11: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_962f14: /* 962f14: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 962f18: mov dword ptr [edx + ebx*4], edi */
  W32((uint32_t)(edx + ebx*4), edi);
/* 962f1b: mov eax, dword ptr [0xcf8410] */
  eax = R32((uint32_t)(0xcf8410u));
/* 962f20: xor ecx, ecx */
  ecx = 0;
/* 962f22: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 962f24: je 0x962f6f */
  if (zf) goto L_962f6f;
L_962f26: /* 962f26: xor eax, eax */
  eax = 0;
/* 962f28: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 962f2a: jle 0x962f3c */
  if ((zf || sf != of)) goto L_962f3c;
L_962f2c: /* 962f2c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_962f30: /* 962f30: mov ebx, dword ptr [edx + eax*4] */
  ebx = R32((uint32_t)(edx + eax*4));
/* 962f33: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 962f34: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 962f36: mov dword ptr [ebx + ebp*4 - 4], ecx */
  W32((uint32_t)(ebx + ebp*4 + 0xfffffffcu), ecx);
/* 962f3a: jl 0x962f30 */
  if ((sf != of)) goto L_962f30;
L_962f3c: /* 962f3c: cmp ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 962f3e: je 0x962f46 */
  if (zf) goto L_962f46;
L_962f40: /* 962f40: mov ecx, ebp */
  ecx = ebp;
/* 962f42: xor eax, eax */
  eax = 0;
/* 962f44: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
L_962f46: /* 962f46: mov eax, dword ptr [edx + ebp*4 - 4] */
  eax = R32((uint32_t)(edx + ebp*4 + 0xfffffffcu));
/* 962f4a: mov dword ptr [eax + ebp*4 - 4], 0xbf800000 */
  W32((uint32_t)(eax + ebp*4 + 0xfffffffcu), 0xbf800000u);
/* 962f52: jmp 0x962f8d */
  goto L_962f8d;
L_962f54: /* 962f54: mov eax, dword ptr [0xcf79c0] */
  eax = R32((uint32_t)(0xcf79c0u));
/* 962f59: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 962f5b: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 962f61: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 962f62: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 962f63: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 962f64: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 962f65: mov dword ptr [0xcf79c0], eax */
  W32((uint32_t)(0xcf79c0u), eax);
/* 962f6a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 962f6b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 962f6e: ret  */
  esp += 4; SPILL(); return;
L_962f6f: /* 962f6f: cmp ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 962f71: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 962f75: je 0x962f8d */
  if (zf) goto L_962f8d;
L_962f77: /* 962f77: mov ecx, ebp */
  ecx = ebp;
/* 962f79: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_962f80: /* 962f80: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 962f82: mov dword ptr [edi], esi */
  W32((uint32_t)(edi), esi);
/* 962f84: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 962f87: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 962f8a: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 962f8b: jne 0x962f80 */
  if (!zf) goto L_962f80;
L_962f8d: /* 962f8d: mov eax, dword ptr [0xcf787c] */
  eax = R32((uint32_t)(0xcf787cu));
/* 962f92: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 962f96: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 962f97: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 962f98: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 962f99: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 962f9a: mov dword ptr [0xcf787c], eax */
  W32((uint32_t)(0xcf787cu), eax);
/* 962f9f: call 0x962210 */
  esp -= 4; W32(esp, 0x962fa4u); SPILL(); f_962210(); if (g_unwind) return; RELOAD();
/* 962fa4: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 962fa8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 962fab: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 962fad: je 0x962fb1 */
  if (zf) goto L_962fb1;
L_962faf: /* 962faf: fchs  */
  ST0 = -ST0;
L_962fb1: /* 962fb1: fld dword ptr [0xcf85b4] */
  { double v = F32((uint32_t)(0xcf85b4u)); FPUSH(v); }
/* 962fb7: mov ecx, dword ptr [0xcf8438] */
  ecx = R32((uint32_t)(0xcf8438u));
/* 962fbd: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 962fc0: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 962fc2: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 962fc6: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 962fc8: jl 0x962ffc */
  if ((sf != of)) goto L_962ffc;
L_962fca: /* 962fca: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 962fce: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 962fcf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 962fd0: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 962fd4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 962fd5: call 0x95f210 */
  esp -= 4; W32(esp, 0x962fdau); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 962fda: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 962fde: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 962fe4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 962fe7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 962fe8: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 962feb: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 962fee: push 0xafce08 */
  { uint32_t v = 0xafce08u; esp -= 4; W32(esp, v); }
/* 962ff3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 962ff4: call 0x953470 */
  esp -= 4; W32(esp, 0x962ff9u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 962ff9: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_962ffc: /* 962ffc: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 963000: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 963001: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 963002: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 963003: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 963004: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 963007: ret  */
  esp += 4; SPILL(); return;
}
