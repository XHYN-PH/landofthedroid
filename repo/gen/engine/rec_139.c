#include "recomp.h"
#include "rec_mod.h"

void f_96c5c0(void) {
  LOAD_REGS();
L_96c5c0: /* 96c5c0: sub esp, 0x124 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x124u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 96c5c6: mov ecx, dword ptr [0xcf8410] */
  ecx = R32((uint32_t)(0xcf8410u));
/* 96c5cc: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96c5cd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96c5ce: xor esi, esi */
  esi = 0;
/* 96c5d0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96c5d1: xor edi, edi */
  edi = 0;
/* 96c5d3: xor ebp, ebp */
  ebp = 0;
/* 96c5d5: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96c5d7: mov eax, 1 */
  eax = 0x1u;
/* 96c5dc: mov dword ptr [esp + 0x24], esi */
  W32((uint32_t)(esp + 0x24u), esi);
/* 96c5e0: mov dword ptr [esp + 0x4c], 0xff7fffff */
  W32((uint32_t)(esp + 0x4cu), 0xff7fffffu);
/* 96c5e8: mov dword ptr [esp + 0x30], esi */
  W32((uint32_t)(esp + 0x30u), esi);
/* 96c5ec: mov dword ptr [esp + 0x58], esi */
  W32((uint32_t)(esp + 0x58u), esi);
/* 96c5f0: mov dword ptr [esp + 0x54], esi */
  W32((uint32_t)(esp + 0x54u), esi);
/* 96c5f4: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 96c5f8: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
/* 96c5fc: mov dword ptr [esp + 0x40], esi */
  W32((uint32_t)(esp + 0x40u), esi);
/* 96c600: mov dword ptr [esp + 0x34], esi */
  W32((uint32_t)(esp + 0x34u), esi);
/* 96c604: mov dword ptr [esp + 0x44], esi */
  W32((uint32_t)(esp + 0x44u), esi);
/* 96c608: mov dword ptr [esp + 0x48], esi */
  W32((uint32_t)(esp + 0x48u), esi);
/* 96c60c: mov dword ptr [esp + 0x3c], esi */
  W32((uint32_t)(esp + 0x3cu), esi);
/* 96c610: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 96c614: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 96c618: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 96c61c: mov dword ptr [esp + 0x50], esi */
  W32((uint32_t)(esp + 0x50u), esi);
/* 96c620: je 0x96c62e */
  if (zf) goto L_96c62e;
L_96c622: /* 96c622: cmp dword ptr [0xcf8540], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8540u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96c628: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 96c62c: je 0x96c632 */
  if (zf) goto L_96c632;
L_96c62e: /* 96c62e: mov dword ptr [esp + 0x28], esi */
  W32((uint32_t)(esp + 0x28u), esi);
L_96c632: /* 96c632: cmp dword ptr [0xcf83fc], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf83fcu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96c638: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96c639: mov ebx, dword ptr [0xcfb0b0] */
  ebx = R32((uint32_t)(0xcfb0b0u));
/* 96c63f: je 0x96c7d0 */
  if (zf) goto L_96c7d0;
L_96c645: /* 96c645: mov eax, dword ptr [0xcf8b30] */
  eax = R32((uint32_t)(0xcf8b30u));
/* 96c64a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96c64b: lea ecx, [esp + 0x6c] */
  ecx = (uint32_t)(esp + 0x6cu);
/* 96c64f: push 0xc8 */
  { uint32_t v = 0xc8u; esp -= 4; W32(esp, v); }
/* 96c654: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96c655: call dword ptr [0xcfb0d8] */
  esp -= 4; W32(esp, 0x96c65bu); SPILL(); f_42c5d6(); if (g_unwind) return; /* MSVCR70!fgets */ RELOAD();
/* 96c65b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96c65e: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96c660: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 96c664: je 0x96c7b2 */
  if (zf) goto L_96c7b2;
L_96c66a: /* 96c66a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_96c670: /* 96c670: mov ecx, dword ptr [0xcf8434] */
  ecx = R32((uint32_t)(0xcf8434u));
/* 96c676: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 96c677: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96c679: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 96c67d: je 0x96c739 */
  if (zf) goto L_96c739;
L_96c683: /* 96c683: cmp edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96c686: jne 0x96c739 */
  if (!zf) goto L_96c739;
L_96c68c: /* 96c68c: mov edx, dword ptr [0xcfb0ac] */
  edx = R32((uint32_t)(0xcfb0acu));
/* 96c692: cmp dword ptr [edx], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96c694: jle 0x96c6a9 */
  if ((zf || sf != of)) goto L_96c6a9;
L_96c696: /* 96c696: movsx eax, byte ptr [eax] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(eax)));
/* 96c699: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 96c69b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96c69c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x96c69eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 96c69e: mov ecx, eax */
  ecx = eax;
/* 96c6a0: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 96c6a4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96c6a7: jmp 0x96c6bb */
  goto L_96c6bb;
L_96c6a9: /* 96c6a9: movsx ecx, byte ptr [eax] */
  ecx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(eax)));
/* 96c6ac: mov edx, dword ptr [0xcfb0a8] */
  edx = R32((uint32_t)(0xcfb0a8u));
/* 96c6b2: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 96c6b4: movzx ecx, byte ptr [edx + ecx*2] */
  ecx = (uint32_t)(R8((uint32_t)(edx + ecx*2)));
/* 96c6b8: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
L_96c6bb: /* 96c6bb: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96c6bd: je 0x96c739 */
  if (zf) goto L_96c739;
L_96c6bf: /* 96c6bf: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 96c6c3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96c6c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96c6c5: call 0x953440 */
  esp -= 4; W32(esp, 0x96c6cau); SPILL(); f_953440(); if (g_unwind) return; RELOAD();
/* 96c6ca: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 96c6ce: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96c6d1: mov ebp, eax */
  ebp = eax;
L_96c6d3: /* 96c6d3: mov edx, dword ptr [0xcfb0ac] */
  edx = R32((uint32_t)(0xcfb0acu));
/* 96c6d9: cmp dword ptr [edx], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96c6dc: jle 0x96c6ef */
  if ((zf || sf != of)) goto L_96c6ef;
L_96c6de: /* 96c6de: movsx eax, byte ptr [ecx] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx)));
/* 96c6e1: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 96c6e3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96c6e4: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x96c6e6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 96c6e6: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 96c6ea: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96c6ed: jmp 0x96c700 */
  goto L_96c700;
L_96c6ef: /* 96c6ef: movsx edx, byte ptr [ecx] */
  edx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx)));
/* 96c6f2: mov eax, dword ptr [0xcfb0a8] */
  eax = R32((uint32_t)(0xcfb0a8u));
/* 96c6f7: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 96c6f9: movzx eax, byte ptr [eax + edx*2] */
  eax = (uint32_t)(R8((uint32_t)(eax + edx*2)));
/* 96c6fd: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_96c700: /* 96c700: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96c702: je 0x96c70b */
  if (zf) goto L_96c70b;
L_96c704: /* 96c704: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 96c705: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 96c709: jmp 0x96c6d3 */
  goto L_96c6d3;
L_96c70b: /* 96c70b: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 96c70f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96c710: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96c711: call 0x953440 */
  esp -= 4; W32(esp, 0x96c716u); SPILL(); f_953440(); if (g_unwind) return; RELOAD();
/* 96c716: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96c719: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96c71c: jne 0x96c735 */
  if (!zf) goto L_96c735;
L_96c71e: /* 96c71e: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 96c722: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96c723: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96c724: call 0x96c3b0 */
  esp -= 4; W32(esp, 0x96c729u); SPILL(); f_96c3b0(); if (g_unwind) return; RELOAD();
/* 96c729: mov edi, eax */
  edi = eax;
/* 96c72b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96c72e: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 96c72f: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 96c733: jmp 0x96c785 */
  goto L_96c785;
L_96c735: /* 96c735: xor ebp, ebp */
  ebp = 0;
/* 96c737: jmp 0x96c785 */
  goto L_96c785;
L_96c739: /* 96c739: mov ecx, 5 */
  ecx = 0x5u;
/* 96c73e: mov edi, 0xb00888 */
  edi = 0xb00888u;
/* 96c743: lea esi, [esp + 0x68] */
  esi = (uint32_t)(esp + 0x68u);
/* 96c747: xor edx, edx */
  edx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 96c749: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* 96c74b: je 0x96c7ac */
  if (zf) goto L_96c7ac;
L_96c74d: /* 96c74d: mov ecx, 5 */
  ecx = 0x5u;
/* 96c752: mov edi, 0xb00880 */
  edi = 0xb00880u;
/* 96c757: lea esi, [esp + 0x68] */
  esi = (uint32_t)(esp + 0x68u);
/* 96c75b: xor edx, edx */
  edx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 96c75d: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* 96c75f: je 0x96c7ac */
  if (zf) goto L_96c7ac;
L_96c761: /* 96c761: mov cl, byte ptr [0xcf86e8] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xcf86e8u))) & 0xffu);
/* 96c767: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 96c769: jne 0x96c77f */
  if (!zf) goto L_96c77f;
L_96c76b: /* 96c76b: push 0xff */
  { uint32_t v = 0xffu; esp -= 4; W32(esp, v); }
/* 96c770: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96c771: push 0xcf86e8 */
  { uint32_t v = 0xcf86e8u; esp -= 4; W32(esp, v); }
/* 96c776: call dword ptr [0xcfb0b4] */
  esp -= 4; W32(esp, 0x96c77cu); SPILL(); f_40750d(); if (g_unwind) return; /* MSVCR70!strncat */ RELOAD();
/* 96c77c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96c77f: /* 96c77f: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 96c783: xor esi, esi */
  esi = 0;
L_96c785: /* 96c785: mov eax, dword ptr [0xcf8b30] */
  eax = R32((uint32_t)(0xcf8b30u));
/* 96c78a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96c78b: lea ecx, [esp + 0x6c] */
  ecx = (uint32_t)(esp + 0x6cu);
/* 96c78f: push 0xc8 */
  { uint32_t v = 0xc8u; esp -= 4; W32(esp, v); }
/* 96c794: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96c795: call dword ptr [0xcfb0d8] */
  esp -= 4; W32(esp, 0x96c79bu); SPILL(); f_42c5d6(); if (g_unwind) return; /* MSVCR70!fgets */ RELOAD();
/* 96c79b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96c79e: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96c7a0: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 96c7a4: jne 0x96c670 */
  if (!zf) goto L_96c670;
L_96c7aa: /* 96c7aa: jmp 0x96c7b2 */
  goto L_96c7b2;
L_96c7ac: /* 96c7ac: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96c7ae: jne 0x96c7d0 */
  if (!zf) goto L_96c7d0;
L_96c7b0: /* 96c7b0: xor esi, esi */
  esi = 0;
L_96c7b2: /* 96c7b2: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 96c7b8: push 0xb00844 */
  { uint32_t v = 0xb00844u; esp -= 4; W32(esp, v); }
/* 96c7bd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96c7be: call 0x953470 */
  esp -= 4; W32(esp, 0x96c7c3u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96c7c3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96c7c4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96c7c5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 96c7c7: call 0x9535b0 */
  esp -= 4; W32(esp, 0x96c7ccu); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 96c7cc: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96c7cf: nop  */
L_96c7d0: /* 96c7d0: mov eax, dword ptr [0xcf8b30] */
  eax = R32((uint32_t)(0xcf8b30u));
/* 96c7d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96c7d6: lea ecx, [esp + 0x6c] */
  ecx = (uint32_t)(esp + 0x6cu);
/* 96c7da: push 0xc8 */
  { uint32_t v = 0xc8u; esp -= 4; W32(esp, v); }
/* 96c7df: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96c7e0: call dword ptr [0xcfb0d8] */
  esp -= 4; W32(esp, 0x96c7e6u); SPILL(); f_42c5d6(); if (g_unwind) return; /* MSVCR70!fgets */ RELOAD();
/* 96c7e6: mov edx, eax */
  edx = eax;
/* 96c7e8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96c7eb: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96c7ed: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 96c7f1: je 0x96c965 */
  if (zf) goto L_96c965;
L_96c7f7: /* 96c7f7: inc dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x18u), r);
  }
/* 96c7fb: mov ecx, 5 */
  ecx = 0x5u;
/* 96c800: mov edi, 0xb00888 */
  edi = 0xb00888u;
/* 96c805: mov esi, edx */
  esi = edx;
/* 96c807: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 96c809: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* 96c80b: je 0x96c81f */
  if (zf) goto L_96c81f;
L_96c80d: /* 96c80d: mov ecx, 5 */
  ecx = 0x5u;
/* 96c812: mov edi, 0xb00880 */
  edi = 0xb00880u;
/* 96c817: mov esi, edx */
  esi = edx;
/* 96c819: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 96c81b: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* 96c81d: jne 0x96c827 */
  if (!zf) goto L_96c827;
L_96c81f: /* 96c81f: mov dword ptr [esp + 0x54], 1 */
  W32((uint32_t)(esp + 0x54u), 0x1u);
L_96c827: /* 96c827: cmp byte ptr [edx], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 96c82a: je 0x96c955 */
  if (zf) goto L_96c955;
L_96c830: /* 96c830: mov ecx, dword ptr [0xcfb0ac] */
  ecx = R32((uint32_t)(0xcfb0acu));
/* 96c836: cmp dword ptr [ecx], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96c839: jle 0x96c84c */
  if ((zf || sf != of)) goto L_96c84c;
L_96c83b: /* 96c83b: movsx edx, byte ptr [edx] */
  edx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(edx)));
/* 96c83e: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 96c840: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96c841: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x96c843u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 96c843: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 96c847: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96c84a: jmp 0x96c85e */
  goto L_96c85e;
L_96c84c: /* 96c84c: movsx eax, byte ptr [edx] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(edx)));
/* 96c84f: mov ecx, dword ptr [0xcfb0a8] */
  ecx = R32((uint32_t)(0xcfb0a8u));
/* 96c855: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 96c857: movzx eax, byte ptr [ecx + eax*2] */
  eax = (uint32_t)(R8((uint32_t)(ecx + eax*2)));
/* 96c85b: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_96c85e: /* 96c85e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96c860: je 0x96c869 */
  if (zf) goto L_96c869;
L_96c862: /* 96c862: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 96c863: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 96c867: jmp 0x96c830 */
  goto L_96c830;
L_96c869: /* 96c869: mov al, byte ptr [edx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* 96c86b: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 96c86d: je 0x96c955 */
  if (zf) goto L_96c955;
L_96c873: /* 96c873: mov ecx, dword ptr [0xcfb0ac] */
  ecx = R32((uint32_t)(0xcfb0acu));
/* 96c879: cmp dword ptr [ecx], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96c87c: jle 0x96c88f */
  if ((zf || sf != of)) goto L_96c88f;
L_96c87e: /* 96c87e: movsx edx, al */
  edx = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 96c881: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 96c883: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96c884: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x96c886u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 96c886: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 96c88a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96c88d: jmp 0x96c8a1 */
  goto L_96c8a1;
L_96c88f: /* 96c88f: mov ecx, dword ptr [0xcfb0a8] */
  ecx = R32((uint32_t)(0xcfb0a8u));
/* 96c895: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 96c897: movsx eax, al */
  eax = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 96c89a: movzx eax, byte ptr [ecx + eax*2] */
  eax = (uint32_t)(R8((uint32_t)(ecx + eax*2)));
/* 96c89e: and eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_96c8a1: /* 96c8a1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96c8a3: je 0x96c92c */
  if (zf) goto L_96c92c;
L_96c8a9: /* 96c8a9: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 96c8ad: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96c8af: jne 0x96c8c5 */
  if (!zf) goto L_96c8c5;
L_96c8b1: /* 96c8b1: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 96c8b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96c8b6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96c8b7: call 0x953440 */
  esp -= 4; W32(esp, 0x96c8bcu); SPILL(); f_953440(); if (g_unwind) return; RELOAD();
/* 96c8bc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96c8bf: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 96c8c3: jmp 0x96c91d */
  goto L_96c91d;
L_96c8c5: /* 96c8c5: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 96c8c9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96c8ca: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96c8cb: call 0x953440 */
  esp -= 4; W32(esp, 0x96c8d0u); SPILL(); f_953440(); if (g_unwind) return; RELOAD();
/* 96c8d0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96c8d3: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96c8d6: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 96c8da: jne 0x96c951 */
  if (!zf) goto L_96c951;
L_96c8dc: /* 96c8dc: cmp esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96c8df: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 96c8e3: jl 0x96c961 */
  if ((sf != of)) goto L_96c961;
L_96c8e5: /* 96c8e5: mov eax, dword ptr [0xcf8434] */
  eax = R32((uint32_t)(0xcf8434u));
/* 96c8ea: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96c8ec: je 0x96c961 */
  if (zf) goto L_96c961;
L_96c8ee: /* 96c8ee: mov eax, dword ptr [0xcf83fc] */
  eax = R32((uint32_t)(0xcf83fcu));
/* 96c8f3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96c8f5: jne 0x96c961 */
  if (!zf) goto L_96c961;
L_96c8f7: /* 96c8f7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96c8f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96c8f9: call 0x96c3b0 */
  esp -= 4; W32(esp, 0x96c8feu); SPILL(); f_96c3b0(); if (g_unwind) return; RELOAD();
/* 96c8fe: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 96c902: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96c905: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 96c907: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 96c90b: mov ebp, esi */
  ebp = esi;
/* 96c90d: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 96c915: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
L_96c91d: /* 96c91d: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 96c921: cmp byte ptr [edx], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 96c924: jne 0x96c830 */
  if (!zf) goto L_96c830;
L_96c92a: /* 96c92a: jmp 0x96c955 */
  goto L_96c955;
L_96c92c: /* 96c92c: mov al, byte ptr [0xcf86e8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xcf86e8u))) & 0xffu);
/* 96c931: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 96c933: jne 0x96c955 */
  if (!zf) goto L_96c955;
L_96c935: /* 96c935: push 0xff */
  { uint32_t v = 0xffu; esp -= 4; W32(esp, v); }
/* 96c93a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96c93b: push 0xcf86e8 */
  { uint32_t v = 0xcf86e8u; esp -= 4; W32(esp, v); }
/* 96c940: call dword ptr [0xcfb0b4] */
  esp -= 4; W32(esp, 0x96c946u); SPILL(); f_40750d(); if (g_unwind) return; /* MSVCR70!strncat */ RELOAD();
/* 96c946: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 96c94a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96c94d: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
L_96c951: /* 96c951: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
L_96c955: /* 96c955: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 96c959: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96c95b: je 0x96c7d0 */
  if (zf) goto L_96c7d0;
L_96c961: /* 96c961: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96c963: jne 0x96c984 */
  if (!zf) goto L_96c984;
L_96c965: /* 96c965: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 96c96b: push 0xb007f0 */
  { uint32_t v = 0xb007f0u; esp -= 4; W32(esp, v); }
/* 96c970: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96c971: call 0x953470 */
  esp -= 4; W32(esp, 0x96c976u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96c976: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96c978: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96c97a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 96c97c: call 0x9535b0 */
  esp -= 4; W32(esp, 0x96c981u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 96c981: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96c984: /* 96c984: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 96c988: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 96c98c: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96c98e: jle 0x96c99c */
  if ((zf || sf != of)) goto L_96c99c;
L_96c990: /* 96c990: mov eax, esi */
  eax = esi;
/* 96c992: mov esi, ecx */
  esi = ecx;
/* 96c994: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 96c998: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
L_96c99c: /* 96c99c: cmp esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96c99f: jge 0x96c9c1 */
  if ((sf == of)) goto L_96c9c1;
L_96c9a1: /* 96c9a1: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 96c9a7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96c9a8: push 0xb007a8 */
  { uint32_t v = 0xb007a8u; esp -= 4; W32(esp, v); }
/* 96c9ad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96c9ae: call 0x953470 */
  esp -= 4; W32(esp, 0x96c9b3u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96c9b3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96c9b5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96c9b7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 96c9b9: call 0x9535b0 */
  esp -= 4; W32(esp, 0x96c9beu); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 96c9be: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96c9c1: /* 96c9c1: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 96c9c5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96c9c7: mov edi, dword ptr [esp + 0x13c] */
  edi = R32((uint32_t)(esp + 0x13cu));
/* 96c9ce: je 0x96ca0e */
  if (zf) goto L_96ca0e;
L_96c9d0: /* 96c9d0: mov eax, dword ptr [0xcf83fc] */
  eax = R32((uint32_t)(0xcf83fcu));
/* 96c9d5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96c9d7: mov dword ptr [0xcf853c], 0 */
  W32((uint32_t)(0xcf853cu), 0x0u);
/* 96c9e1: je 0x96c9e7 */
  if (zf) goto L_96c9e7;
L_96c9e3: /* 96c9e3: mov dword ptr [edi], esi */
  W32((uint32_t)(edi), esi);
/* 96c9e5: jmp 0x96c9ec */
  goto L_96c9ec;
L_96c9e7: /* 96c9e7: lea eax, [esi + 1] */
  eax = (uint32_t)(esi + 0x1u);
/* 96c9ea: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
L_96c9ec: /* 96c9ec: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 96c9f0: mov edx, dword ptr [esp + 0x138] */
  edx = R32((uint32_t)(esp + 0x138u));
/* 96c9f7: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 96c9f9: mov eax, dword ptr [0xcf83f0] */
  eax = R32((uint32_t)(0xcf83f0u));
/* 96c9fe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96ca00: je 0x96caa4 */
  if (zf) goto L_96caa4;
L_96ca06: /* 96ca06: mov eax, ecx */
  eax = ecx;
/* 96ca08: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 96ca09: jmp 0x96ca9b */
  goto L_96ca9b;
L_96ca0e: /* 96ca0e: mov eax, dword ptr [0xcf8434] */
  eax = R32((uint32_t)(0xcf8434u));
/* 96ca13: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96ca15: je 0x96ca85 */
  if (zf) goto L_96ca85;
L_96ca17: /* 96ca17: cmp esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96ca1a: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 96ca1e: mov ecx, dword ptr [esp + 0x138] */
  ecx = R32((uint32_t)(esp + 0x138u));
/* 96ca25: lea edx, [esi - 1] */
  edx = (uint32_t)(esi + 0xffffffffu);
/* 96ca28: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 96ca2a: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 96ca2c: jge 0x96ca4e */
  if ((sf == of)) goto L_96ca4e;
L_96ca2e: /* 96ca2e: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 96ca34: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96ca35: push 0xb00740 */
  { uint32_t v = 0xb00740u; esp -= 4; W32(esp, v); }
/* 96ca3a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96ca3b: call 0x953470 */
  esp -= 4; W32(esp, 0x96ca40u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96ca40: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96ca42: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96ca44: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 96ca46: call 0x9535b0 */
  esp -= 4; W32(esp, 0x96ca4bu); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 96ca4b: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96ca4e: /* 96ca4e: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96ca50: je 0x96ca78 */
  if (zf) goto L_96ca78;
L_96ca52: /* 96ca52: cmp ebp, dword ptr [edi] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96ca54: je 0x96caa4 */
  if (zf) goto L_96caa4;
L_96ca56: /* 96ca56: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 96ca5b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96ca5c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96ca5d: push 0xb006d8 */
  { uint32_t v = 0xb006d8u; esp -= 4; W32(esp, v); }
/* 96ca62: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96ca63: call 0x953470 */
  esp -= 4; W32(esp, 0x96ca68u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96ca68: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96ca6a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96ca6c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 96ca6e: call 0x9535b0 */
  esp -= 4; W32(esp, 0x96ca73u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 96ca73: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96ca76: jmp 0x96caa4 */
  goto L_96caa4;
L_96ca78: /* 96ca78: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 96ca7a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96ca7b: call 0x96d1c0 */
  esp -= 4; W32(esp, 0x96ca80u); SPILL(); f_96d1c0(); if (g_unwind) return; RELOAD();
/* 96ca80: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96ca83: jmp 0x96caa4 */
  goto L_96caa4;
L_96ca85: /* 96ca85: mov eax, dword ptr [0xcf83fc] */
  eax = R32((uint32_t)(0xcf83fcu));
/* 96ca8a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96ca8c: je 0x96ca95 */
  if (zf) goto L_96ca95;
L_96ca8e: /* 96ca8e: lea edx, [esi - 1] */
  edx = (uint32_t)(esi + 0xffffffffu);
/* 96ca91: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 96ca93: jmp 0x96ca97 */
  goto L_96ca97;
L_96ca95: /* 96ca95: mov dword ptr [edi], esi */
  W32((uint32_t)(edi), esi);
L_96ca97: /* 96ca97: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
L_96ca9b: /* 96ca9b: mov ecx, dword ptr [esp + 0x138] */
  ecx = R32((uint32_t)(esp + 0x138u));
/* 96caa2: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
L_96caa4: /* 96caa4: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 96caa6: mov ecx, dword ptr [0xcf8434] */
  ecx = R32((uint32_t)(0xcf8434u));
/* 96caac: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 96caaf: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96cab1: mov dword ptr [0xcf8b40], eax */
  W32((uint32_t)(0xcf8b40u), eax);
/* 96cab6: je 0x96caef */
  if (zf) goto L_96caef;
L_96cab8: /* 96cab8: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 96cabb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96cabc: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x96cac2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 96cac2: mov ecx, dword ptr [0xcf83fc] */
  ecx = R32((uint32_t)(0xcf83fcu));
/* 96cac8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96caca: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 96cace: mov dword ptr [0xcf8c2c], eax */
  W32((uint32_t)(0xcf8c2cu), eax);
/* 96cad3: je 0x96cae2 */
  if (zf) goto L_96cae2;
L_96cad5: /* 96cad5: mov dword ptr [esp + 0x5c], eax */
  W32((uint32_t)(esp + 0x5cu), eax);
/* 96cad9: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 96cadc: mov dword ptr [esp + 0x58], eax */
  W32((uint32_t)(esp + 0x58u), eax);
/* 96cae0: jmp 0x96caef */
  goto L_96caef;
L_96cae2: /* 96cae2: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 96cae4: mov dword ptr [esp + 0x58], eax */
  W32((uint32_t)(esp + 0x58u), eax);
/* 96cae8: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 96caeb: mov dword ptr [esp + 0x5c], eax */
  W32((uint32_t)(esp + 0x5cu), eax);
L_96caef: /* 96caef: mov eax, esi */
  eax = esi;
/* 96caf1: imul eax, eax, 0xb */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0xbu);
  eax = (uint32_t)r;
  }
/* 96caf4: cmp eax, 0x1f4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1f4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96caf9: mov dword ptr [0xcf8c28], eax */
  W32((uint32_t)(0xcf8c28u), eax);
/* 96cafe: jge 0x96cb0a */
  if ((sf == of)) goto L_96cb0a;
L_96cb00: /* 96cb00: mov eax, 0x1f4 */
  eax = 0x1f4u;
/* 96cb05: mov dword ptr [0xcf8c28], eax */
  W32((uint32_t)(0xcf8c28u), eax);
L_96cb0a: /* 96cb0a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 96cb0b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96cb0c: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x96cb12u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 96cb12: mov ecx, dword ptr [esp + 0x140] */
  ecx = R32((uint32_t)(esp + 0x140u));
/* 96cb19: mov edx, dword ptr [esp + 0x138] */
  edx = R32((uint32_t)(esp + 0x138u));
/* 96cb20: mov dword ptr [0xcf8c24], eax */
  W32((uint32_t)(0xcf8c24u), eax);
/* 96cb25: mov dword ptr [ecx], 1 */
  W32((uint32_t)(ecx), 0x1u);
/* 96cb2b: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 96cb2d: imul eax, dword ptr [edi] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi)));
  eax = (uint32_t)r;
  }
/* 96cb30: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 96cb33: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96cb34: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x96cb3au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 96cb3a: mov esi, eax */
  esi = eax;
/* 96cb3c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96cb3e: mov dword ptr [0xcf8c30], eax */
  W32((uint32_t)(0xcf8c30u), eax);
/* 96cb43: mov dword ptr [esp + 0x60], esi */
  W32((uint32_t)(esp + 0x60u), esi);
/* 96cb47: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 96cb4b: je 0x96cb68 */
  if (zf) goto L_96cb68;
L_96cb4d: /* 96cb4d: mov eax, dword ptr [0xcf8c24] */
  eax = R32((uint32_t)(0xcf8c24u));
/* 96cb52: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96cb54: je 0x96cb68 */
  if (zf) goto L_96cb68;
L_96cb56: /* 96cb56: mov eax, dword ptr [0xcf8434] */
  eax = R32((uint32_t)(0xcf8434u));
/* 96cb5b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96cb5d: je 0x96cb8c */
  if (zf) goto L_96cb8c;
L_96cb5f: /* 96cb5f: mov eax, dword ptr [0xcf8c2c] */
  eax = R32((uint32_t)(0xcf8c2cu));
/* 96cb64: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96cb66: jne 0x96cb8c */
  if (!zf) goto L_96cb8c;
L_96cb68: /* 96cb68: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 96cb6c: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 96cb72: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96cb73: push 0xb006a0 */
  { uint32_t v = 0xb006a0u; esp -= 4; W32(esp, v); }
/* 96cb78: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96cb79: call 0x953470 */
  esp -= 4; W32(esp, 0x96cb7eu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96cb7e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96cb80: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96cb82: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 96cb84: call 0x9535b0 */
  esp -= 4; W32(esp, 0x96cb89u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 96cb89: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96cb8c: /* 96cb8c: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 96cb90: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96cb92: je 0x96cbbc */
  if (zf) goto L_96cbbc;
L_96cb94: /* 96cb94: mov eax, dword ptr [0xcf83f0] */
  eax = R32((uint32_t)(0xcf83f0u));
/* 96cb99: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96cb9b: je 0x96cbbc */
  if (zf) goto L_96cbbc;
L_96cb9d: /* 96cb9d: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 96cb9f: mov ecx, eax */
  ecx = eax;
/* 96cba1: imul ecx, dword ptr [esp + 0x1c] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x1cu)));
  ecx = (uint32_t)r;
  }
/* 96cba6: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 96cba7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96cba9: lea esi, [esi + ecx*4] */
  esi = (uint32_t)(esi + ecx*4);
/* 96cbac: mov dword ptr [esp + 0x28], esi */
  W32((uint32_t)(esp + 0x28u), esi);
/* 96cbb0: je 0x96cbbc */
  if (zf) goto L_96cbbc;
L_96cbb2: /* 96cbb2: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 96cbb3: mov dword ptr [esi + eax*4], 0 */
  W32((uint32_t)(esi + eax*4), 0x0u);
/* 96cbba: jne 0x96cbb2 */
  if (!zf) goto L_96cbb2;
L_96cbbc: /* 96cbbc: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 96cbc0: imul ebp, dword ptr [esp + 0x20] */
  { int64_t r = (int64_t)(int32_t)(ebp) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x20u)));
  ebp = (uint32_t)r;
  }
/* 96cbc5: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 96cbc9: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
L_96cbd1: /* 96cbd1: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 96cbd5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96cbd7: jne 0x96cbfc */
  if (!zf) goto L_96cbfc;
L_96cbd9: /* 96cbd9: mov edx, dword ptr [0xcf8b30] */
  edx = R32((uint32_t)(0xcf8b30u));
/* 96cbdf: mov eax, dword ptr [0xcf8c28] */
  eax = R32((uint32_t)(0xcf8c28u));
/* 96cbe4: mov ecx, dword ptr [0xcf8c24] */
  ecx = R32((uint32_t)(0xcf8c24u));
/* 96cbea: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96cbeb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96cbec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96cbed: call dword ptr [0xcfb0d8] */
  esp -= 4; W32(esp, 0x96cbf3u); SPILL(); f_42c5d6(); if (g_unwind) return; /* MSVCR70!fgets */ RELOAD();
/* 96cbf3: mov edx, eax */
  edx = eax;
/* 96cbf5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96cbf8: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
L_96cbfc: /* 96cbfc: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96cbfe: je 0x96cfd9 */
  if (zf) goto L_96cfd9;
L_96cc04: /* 96cc04: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 96cc08: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96cc0a: jne 0x96cc70 */
  if (!zf) goto L_96cc70;
L_96cc0c: /* 96cc0c: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 96cc10: mov al, byte ptr [edx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* 96cc12: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 96cc13: cmp al, 0x65 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x65u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 96cc15: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
/* 96cc19: je 0x96cc1f */
  if (zf) goto L_96cc1f;
L_96cc1b: /* 96cc1b: cmp al, 0x45 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x45u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 96cc1d: jne 0x96cc70 */
  if (!zf) goto L_96cc70;
L_96cc1f: /* 96cc1f: mov ecx, 3 */
  ecx = 0x3u;
/* 96cc24: mov edi, 0xb0069c */
  edi = 0xb0069cu;
/* 96cc29: mov esi, edx */
  esi = edx;
/* 96cc2b: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 96cc2d: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* 96cc2f: je 0x96cc43 */
  if (zf) goto L_96cc43;
L_96cc31: /* 96cc31: mov ecx, 3 */
  ecx = 0x3u;
/* 96cc36: mov edi, 0xb00698 */
  edi = 0xb00698u;
/* 96cc3b: mov esi, edx */
  esi = edx;
/* 96cc3d: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 96cc3f: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* 96cc41: jne 0x96cc70 */
  if (!zf) goto L_96cc70;
L_96cc43: /* 96cc43: mov eax, dword ptr [0xcf83fc] */
  eax = R32((uint32_t)(0xcf83fcu));
/* 96cc48: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96cc4a: jne 0x96cfd9 */
  if (!zf) goto L_96cfd9;
L_96cc50: /* 96cc50: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* 96cc54: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96cc56: je 0x96cc70 */
  if (zf) goto L_96cc70;
L_96cc58: /* 96cc58: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 96cc5e: push 0xb00648 */
  { uint32_t v = 0xb00648u; esp -= 4; W32(esp, v); }
/* 96cc63: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96cc64: call 0x953470 */
  esp -= 4; W32(esp, 0x96cc69u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96cc69: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 96cc6d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96cc70: /* 96cc70: mov al, byte ptr [edx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* 96cc72: xor esi, esi */
  esi = 0;
/* 96cc74: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 96cc76: je 0x96cf0b */
  if (zf) goto L_96cf0b;
L_96cc7c: /* 96cc7c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_96cc80: /* 96cc80: mov eax, dword ptr [0xcfb0ac] */
  eax = R32((uint32_t)(0xcfb0acu));
/* 96cc85: cmp dword ptr [eax], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96cc88: jle 0x96cc9b */
  if ((zf || sf != of)) goto L_96cc9b;
L_96cc8a: /* 96cc8a: movsx ecx, byte ptr [edx] */
  ecx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(edx)));
/* 96cc8d: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 96cc8f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96cc90: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x96cc92u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 96cc92: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 96cc96: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96cc99: jmp 0x96ccad */
  goto L_96ccad;
L_96cc9b: /* 96cc9b: movsx eax, byte ptr [edx] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(edx)));
/* 96cc9e: mov ecx, dword ptr [0xcfb0a8] */
  ecx = R32((uint32_t)(0xcfb0a8u));
/* 96cca4: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 96cca6: movzx eax, byte ptr [ecx + eax*2] */
  eax = (uint32_t)(R8((uint32_t)(ecx + eax*2)));
/* 96ccaa: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_96ccad: /* 96ccad: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96ccaf: je 0x96ccb8 */
  if (zf) goto L_96ccb8;
L_96ccb1: /* 96ccb1: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 96ccb2: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 96ccb6: jmp 0x96cc80 */
  goto L_96cc80;
L_96ccb8: /* 96ccb8: lea eax, [esp + 0x64] */
  eax = (uint32_t)(esp + 0x64u);
/* 96ccbc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96ccbd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96ccbe: call 0x953410 */
  esp -= 4; W32(esp, 0x96ccc3u); SPILL(); f_953410(); if (g_unwind) return; RELOAD();
/* 96ccc3: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 96ccc7: mov eax, dword ptr [esp + 0x6c] */
  eax = R32((uint32_t)(esp + 0x6cu));
/* 96cccb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96ccce: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96ccd0: je 0x96cf74 */
  if (zf) goto L_96cf74;
L_96ccd6: /* 96ccd6: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* 96ccda: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96ccdc: jne 0x96cce6 */
  if (!zf) goto L_96cce6;
L_96ccde: /* 96ccde: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 96cce2: mov dword ptr [esp + 0x4c], ecx */
  W32((uint32_t)(esp + 0x4cu), ecx);
L_96cce6: /* 96cce6: mov edx, eax */
  edx = eax;
/* 96cce8: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 96ccec: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 96cced: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96ccef: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 96ccf3: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* 96ccf7: jg 0x96cefc */
  if ((!zf && sf == of)) goto L_96cefc;
L_96ccfd: /* 96ccfd: mov eax, dword ptr [0xcf8434] */
  eax = R32((uint32_t)(0xcf8434u));
/* 96cd02: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96cd04: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 96cd08: je 0x96cd2b */
  if (zf) goto L_96cd2b;
L_96cd0a: /* 96cd0a: mov eax, dword ptr [0xcf83fc] */
  eax = R32((uint32_t)(0xcf83fcu));
/* 96cd0f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96cd11: je 0x96cd19 */
  if (zf) goto L_96cd19;
L_96cd13: /* 96cd13: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96cd15: jne 0x96cd19 */
  if (!zf) goto L_96cd19;
L_96cd17: /* 96cd17: fchs  */
  ST0 = -ST0;
L_96cd19: /* 96cd19: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 96cd1d: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 96cd1f: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 96cd22: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 96cd26: jmp 0x96cdbb */
  goto L_96cdbb;
L_96cd2b: /* 96cd2b: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 96cd2f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 96cd31: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 96cd33: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 96cd37: mov eax, dword ptr [0xcf83fc] */
  eax = R32((uint32_t)(0xcf83fcu));
/* 96cd3c: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 96cd3f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96cd41: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 96cd45: je 0x96cd81 */
  if (zf) goto L_96cd81;
L_96cd47: /* 96cd47: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96cd49: jne 0x96cd81 */
  if (!zf) goto L_96cd81;
L_96cd4b: /* 96cd4b: fcomp qword ptr [0xa0da58] */
  fpu_com(ST0, F64((uint32_t)(0xa0da58u)));
  FPOP();
/* 96cd51: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 96cd53: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 96cd56: jnp 0x96cd7a */
  if (!pf) goto L_96cd7a;
L_96cd58: /* 96cd58: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 96cd5c: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 96cd62: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96cd63: push 0xb005f8 */
  { uint32_t v = 0xb005f8u; esp -= 4; W32(esp, v); }
/* 96cd68: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96cd69: call 0x953470 */
  esp -= 4; W32(esp, 0x96cd6eu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96cd6e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96cd6f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96cd70: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 96cd72: call 0x9535b0 */
  esp -= 4; W32(esp, 0x96cd77u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 96cd77: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96cd7a: /* 96cd7a: sub dword ptr [esp + 0x14], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(esp + 0x14u), r);
  }
/* 96cd7f: jmp 0x96cdbb */
  goto L_96cdbb;
L_96cd81: /* 96cd81: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 96cd85: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96cd87: je 0x96cdb9 */
  if (zf) goto L_96cdb9;
L_96cd89: /* 96cd89: mov ecx, dword ptr [0xcf83f0] */
  ecx = R32((uint32_t)(0xcf83f0u));
/* 96cd8f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 96cd91: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96cd93: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 96cd95: fadd dword ptr [esp + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x30u)));
/* 96cd99: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 96cd9d: je 0x96cdb9 */
  if (zf) goto L_96cdb9;
L_96cd9f: /* 96cd9f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96cda1: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 96cda5: je 0x96cdb1 */
  if (zf) goto L_96cdb1;
L_96cda7: /* 96cda7: fadd dword ptr [eax + edi*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + edi*4 + 0xfffffffcu)));
/* 96cdab: fstp dword ptr [eax + edi*4 - 4] */
  WF32((uint32_t)(eax + edi*4 + 0xfffffffcu), ST0); FPOP();
/* 96cdaf: jmp 0x96cdbb */
  goto L_96cdbb;
L_96cdb1: /* 96cdb1: fadd dword ptr [eax + edi*4] */
  ST0 = ST0 + (F32((uint32_t)(eax + edi*4)));
/* 96cdb4: fstp dword ptr [eax + edi*4] */
  WF32((uint32_t)(eax + edi*4), ST0); FPOP();
/* 96cdb7: jmp 0x96cdbb */
  goto L_96cdbb;
L_96cdb9: /* 96cdb9: fstp st(0) */
  STI(0) = ST0; FPOP();
L_96cdbb: /* 96cdbb: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 96cdbf: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 96cdc0: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96cdc2: mov dword ptr [esp + 0x24], edi */
  W32((uint32_t)(esp + 0x24u), edi);
/* 96cdc6: jne 0x96cef6 */
  if (!zf) goto L_96cef6;
L_96cdcc: /* 96cdcc: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 96cdd0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96cdd2: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 96cdda: je 0x96ce13 */
  if (zf) goto L_96ce13;
L_96cddc: /* 96cddc: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 96cde0: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 96cde4: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 96cde8: fcomp dword ptr [esp + 0x30] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x30u)));
  FPOP();
/* 96cdec: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 96cdee: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 96cdf2: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 96cdf5: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 96cdf9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 96cdfb: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 96cdfe: jp 0x96ce06 */
  if (pf) goto L_96ce06;
L_96ce00: /* 96ce00: mov ecx, edx */
  ecx = edx;
/* 96ce02: mov dword ptr [esp + 0x50], ecx */
  W32((uint32_t)(esp + 0x50u), ecx);
L_96ce06: /* 96ce06: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 96ce0e: jmp 0x96ce9d */
  goto L_96ce9d;
L_96ce13: /* 96ce13: mov eax, dword ptr [0xcf8434] */
  eax = R32((uint32_t)(0xcf8434u));
/* 96ce18: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96ce1a: je 0x96ce9d */
  if (zf) goto L_96ce9d;
L_96ce20: /* 96ce20: mov edx, dword ptr [0xcf85c0] */
  edx = R32((uint32_t)(0xcf85c0u));
/* 96ce26: mov eax, dword ptr [esp + 0x5c] */
  eax = R32((uint32_t)(esp + 0x5cu));
/* 96ce2a: mov ecx, dword ptr [esp + 0x58] */
  ecx = R32((uint32_t)(esp + 0x58u));
/* 96ce2e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96ce2f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96ce30: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 96ce34: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96ce35: mov ecx, dword ptr [esp + 0x148] */
  ecx = R32((uint32_t)(esp + 0x148u));
/* 96ce3c: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* 96ce40: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96ce41: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 96ce43: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96ce44: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96ce45: call 0x964e50 */
  esp -= 4; W32(esp, 0x96ce4au); SPILL(); f_964e50(); if (g_unwind) return; RELOAD();
/* 96ce4a: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96ce4d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96ce4f: jne 0x96ce94 */
  if (!zf) goto L_96ce94;
L_96ce51: /* 96ce51: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 96ce55: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 96ce5b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96ce5c: push 0xb005d4 */
  { uint32_t v = 0xb005d4u; esp -= 4; W32(esp, v); }
/* 96ce61: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96ce62: call 0x953470 */
  esp -= 4; W32(esp, 0x96ce67u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96ce67: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
/* 96ce6b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96ce6e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96ce70: je 0x96ce86 */
  if (zf) goto L_96ce86;
L_96ce72: /* 96ce72: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 96ce78: push 0xb00588 */
  { uint32_t v = 0xb00588u; esp -= 4; W32(esp, v); }
/* 96ce7d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96ce7e: call 0x953470 */
  esp -= 4; W32(esp, 0x96ce83u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96ce83: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96ce86: /* 96ce86: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96ce88: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96ce8a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 96ce8c: call 0x9535b0 */
  esp -= 4; W32(esp, 0x96ce91u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 96ce91: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96ce94: /* 96ce94: mov eax, dword ptr [0xcf8c2c] */
  eax = R32((uint32_t)(0xcf8c2cu));
/* 96ce99: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
L_96ce9d: /* 96ce9d: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
L_96cea1: /* 96cea1: mov ecx, dword ptr [0xcfb0ac] */
  ecx = R32((uint32_t)(0xcfb0acu));
/* 96cea7: cmp dword ptr [ecx], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96ceaa: jle 0x96cebd */
  if ((zf || sf != of)) goto L_96cebd;
L_96ceac: /* 96ceac: movsx edx, byte ptr [edx] */
  edx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(edx)));
/* 96ceaf: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 96ceb1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96ceb2: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x96ceb4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 96ceb4: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 96ceb8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96cebb: jmp 0x96cecf */
  goto L_96cecf;
L_96cebd: /* 96cebd: movsx eax, byte ptr [edx] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(edx)));
/* 96cec0: mov ecx, dword ptr [0xcfb0a8] */
  ecx = R32((uint32_t)(0xcfb0a8u));
/* 96cec6: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 96cec8: movzx eax, byte ptr [ecx + eax*2] */
  eax = (uint32_t)(R8((uint32_t)(ecx + eax*2)));
/* 96cecc: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_96cecf: /* 96cecf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96ced1: je 0x96ceda */
  if (zf) goto L_96ceda;
L_96ced3: /* 96ced3: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 96ced4: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 96ced8: jmp 0x96cea1 */
  goto L_96cea1;
L_96ceda: /* 96ceda: cmp byte ptr [edx], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 96cedd: je 0x96cf07 */
  if (zf) goto L_96cf07;
L_96cedf: /* 96cedf: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 96cee3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96cee5: mov esi, 1 */
  esi = 0x1u;
/* 96ceea: jne 0x96cefe */
  if (!zf) goto L_96cefe;
L_96ceec: /* 96ceec: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 96cef0: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 96cef4: jmp 0x96cefe */
  goto L_96cefe;
L_96cef6: /* 96cef6: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 96cefa: jmp 0x96cefe */
  goto L_96cefe;
L_96cefc: /* 96cefc: fstp st(0) */
  STI(0) = ST0; FPOP();
L_96cefe: /* 96cefe: cmp byte ptr [edx], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 96cf01: jne 0x96cc80 */
  if (!zf) goto L_96cc80;
L_96cf07: /* 96cf07: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96cf09: jne 0x96cf23 */
  if (!zf) goto L_96cf23;
L_96cf0b: /* 96cf0b: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 96cf0f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96cf11: jne 0x96cf23 */
  if (!zf) goto L_96cf23;
L_96cf13: /* 96cf13: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 96cf17: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96cf19: je 0x96cf23 */
  if (zf) goto L_96cf23;
L_96cf1b: /* 96cf1b: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 96cf1f: mov dword ptr [esp + 0x38], ecx */
  W32((uint32_t)(esp + 0x38u), ecx);
L_96cf23: /* 96cf23: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 96cf27: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96cf29: jne 0x96cf67 */
  if (!zf) goto L_96cf67;
L_96cf2b: /* 96cf2b: mov esi, dword ptr [0xcf8c24] */
  esi = R32((uint32_t)(0xcf8c24u));
/* 96cf31: mov ecx, dword ptr [0xcf8c28] */
  ecx = R32((uint32_t)(0xcf8c28u));
/* 96cf37: mov eax, edx */
  eax = edx;
/* 96cf39: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 96cf3b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96cf3d: jl 0x96cf67 */
  if ((sf != of)) goto L_96cf67;
L_96cf3f: /* 96cf3f: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 96cf43: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96cf44: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 96cf49: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96cf4a: push 0xb00544 */
  { uint32_t v = 0xb00544u; esp -= 4; W32(esp, v); }
/* 96cf4f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96cf50: call 0x953470 */
  esp -= 4; W32(esp, 0x96cf55u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96cf55: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96cf57: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96cf59: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 96cf5b: call 0x9535b0 */
  esp -= 4; W32(esp, 0x96cf60u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 96cf60: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 96cf64: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96cf67: /* 96cf67: mov dword ptr [esp + 0x3c], 0 */
  W32((uint32_t)(esp + 0x3cu), 0x0u);
/* 96cf6f: jmp 0x96cbd1 */
  goto L_96cbd1;
L_96cf74: /* 96cf74: mov al, byte ptr [0xcf86e8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xcf86e8u))) & 0xffu);
/* 96cf79: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 96cf7b: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 96cf7d: jne 0x96cf97 */
  if (!zf) goto L_96cf97;
L_96cf7f: /* 96cf7f: push 0xff */
  { uint32_t v = 0xffu; esp -= 4; W32(esp, v); }
/* 96cf84: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96cf85: push 0xcf86e8 */
  { uint32_t v = 0xcf86e8u; esp -= 4; W32(esp, v); }
/* 96cf8a: call dword ptr [0xcfb0b4] */
  esp -= 4; W32(esp, 0x96cf90u); SPILL(); f_40750d(); if (g_unwind) return; /* MSVCR70!strncat */ RELOAD();
/* 96cf90: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 96cf94: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96cf97: /* 96cf97: cmp byte ptr [edx], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 96cf9a: je 0x96cfac */
  if (zf) goto L_96cfac;
L_96cf9c: /* 96cf9c: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 96cfa0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96cfa2: jne 0x96cfac */
  if (!zf) goto L_96cfac;
L_96cfa4: /* 96cfa4: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 96cfa8: mov dword ptr [esp + 0x44], ecx */
  W32((uint32_t)(esp + 0x44u), ecx);
L_96cfac: /* 96cfac: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96cfae: jne 0x96cf23 */
  if (!zf) goto L_96cf23;
L_96cfb4: /* 96cfb4: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 96cfb8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96cfba: jne 0x96cf23 */
  if (!zf) goto L_96cf23;
L_96cfc0: /* 96cfc0: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 96cfc4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96cfc6: je 0x96cf23 */
  if (zf) goto L_96cf23;
L_96cfcc: /* 96cfcc: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 96cfd0: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 96cfd4: jmp 0x96cf0b */
  goto L_96cf0b;
L_96cfd9: /* 96cfd9: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 96cfdd: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96cfdf: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 96cfe3: je 0x96d082 */
  if (zf) goto L_96d082;
L_96cfe9: /* 96cfe9: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 96cfea: idiv ebp */
  { int32_t d = (int32_t)ebp; if (!d) d = (int32_t)guest_divzero(0x96cfea);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 96cfec: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 96cff0: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96cff2: mov esi, edx */
  esi = edx;
/* 96cff4: mov edi, eax */
  edi = eax;
/* 96cff6: jg 0x96cffa */
  if ((!zf && sf == of)) goto L_96cffa;
L_96cff8: /* 96cff8: mov edi, ecx */
  edi = ecx;
L_96cffa: /* 96cffa: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 96cffe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96cfff: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96d000: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 96d004: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96d005: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 96d009: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96d00a: mov edx, dword ptr [esp + 0x5c] */
  edx = R32((uint32_t)(esp + 0x5cu));
/* 96d00e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96d00f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96d010: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96d011: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 96d016: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96d017: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96d018: push 0xb00438 */
  { uint32_t v = 0xb00438u; esp -= 4; W32(esp, v); }
/* 96d01d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96d01e: call 0x953470 */
  esp -= 4; W32(esp, 0x96d023u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96d023: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* 96d027: xor ebx, ebx */
  ebx = 0;
/* 96d029: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96d02c: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96d02e: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 96d032: je 0x96d06a */
  if (zf) goto L_96d06a;
L_96d034: /* 96d034: cmp dword ptr [0xcf83f0], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf83f0u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96d03a: je 0x96d06a */
  if (zf) goto L_96d06a;
L_96d03c: /* 96d03c: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 96d040: mov eax, esi */
  eax = esi;
/* 96d042: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96d044: je 0x96d05e */
  if (zf) goto L_96d05e;
L_96d046: /* 96d046: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 96d04a: sub ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 96d04d: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 96d04e: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96d050: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 96d054: fld dword ptr [edx + eax*4] */
  { double v = F32((uint32_t)(edx + eax*4)); FPUSH(v); }
/* 96d057: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 96d059: fstp dword ptr [edx + eax*4] */
  WF32((uint32_t)(edx + eax*4), ST0); FPOP();
/* 96d05c: jne 0x96d046 */
  if (!zf) goto L_96d046;
L_96d05e: /* 96d05e: mov ecx, dword ptr [esp + 0x138] */
  ecx = R32((uint32_t)(esp + 0x138u));
/* 96d065: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 96d066: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 96d068: jmp 0x96d088 */
  goto L_96d088;
L_96d06a: /* 96d06a: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 96d06e: mov ecx, dword ptr [esp + 0x138] */
  ecx = R32((uint32_t)(esp + 0x138u));
/* 96d075: neg esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(0 - a);
  esi = r;
  }
/* 96d077: lea eax, [edx + esi*4] */
  eax = (uint32_t)(edx + esi*4);
/* 96d07a: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 96d07e: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 96d080: jmp 0x96d084 */
  goto L_96d084;
L_96d082: /* 96d082: xor ebx, ebx */
  ebx = 0;
L_96d084: /* 96d084: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
L_96d088: /* 96d088: cmp dword ptr [esp + 0x2c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x2cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96d08c: je 0x96d10f */
  if (zf) goto L_96d10f;
L_96d092: /* 96d092: cmp dword ptr [0xcf83f0], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf83f0u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96d098: je 0x96d10f */
  if (zf) goto L_96d10f;
L_96d09e: /* 96d09e: mov ecx, dword ptr [esp + 0x13c] */
  ecx = R32((uint32_t)(esp + 0x13cu));
/* 96d0a5: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 96d0a7: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 96d0a8: je 0x96d0c1 */
  if (zf) goto L_96d0c1;
L_96d0aa: /* 96d0aa: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 96d0ae: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
L_96d0b4: /* 96d0b4: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 96d0b5: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 96d0b7: fmul dword ptr [edx + eax*4] */
  ST0 = ST0 * (F32((uint32_t)(edx + eax*4)));
/* 96d0ba: fstp dword ptr [edx + eax*4] */
  WF32((uint32_t)(edx + eax*4), ST0); FPOP();
/* 96d0bd: jne 0x96d0b4 */
  if (!zf) goto L_96d0b4;
L_96d0bf: /* 96d0bf: fstp st(0) */
  STI(0) = ST0; FPOP();
L_96d0c1: /* 96d0c1: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 96d0c5: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96d0c7: jne 0x96d0d5 */
  if (!zf) goto L_96d0d5;
L_96d0c9: /* 96d0c9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 96d0cb: lea esi, [esi + edx*4 - 4] */
  esi = (uint32_t)(esi + edx*4 + 0xfffffffcu);
/* 96d0cf: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 96d0d3: jmp 0x96d0f8 */
  goto L_96d0f8;
L_96d0d5: /* 96d0d5: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 96d0d7: xor eax, eax */
  eax = 0;
/* 96d0d9: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 96d0da: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 96d0dc: jle 0x96d0f8 */
  if ((zf || sf != of)) goto L_96d0f8;
L_96d0de: /* 96d0de: mov edi, edi */
  edi = edi;
L_96d0e0: /* 96d0e0: mov edi, dword ptr [edx + eax*4] */
  edi = R32((uint32_t)(edx + eax*4));
/* 96d0e3: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 96d0e5: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 96d0e9: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 96d0eb: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 96d0ee: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 96d0ef: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 96d0f0: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96d0f2: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 96d0f6: jl 0x96d0e0 */
  if ((sf != of)) goto L_96d0e0;
L_96d0f8: /* 96d0f8: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 96d0fc: fmul qword ptr [0xa21728] */
  ST0 = ST0 * (F64((uint32_t)(0xa21728u)));
/* 96d102: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 96d104: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 96d108: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 96d10b: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
L_96d10f: /* 96d10f: mov al, byte ptr [0xcf86e8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xcf86e8u))) & 0xffu);
/* 96d114: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 96d116: je 0x96d155 */
  if (zf) goto L_96d155;
L_96d118: /* 96d118: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 96d11b: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 96d11d: mov edi, 0xcf86e8 */
  edi = 0xcf86e8u;
/* 96d122: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 96d124: not ecx */
  ecx = ~ecx;
/* 96d126: mov byte ptr [ecx + 0xcf86e6], al */
  W8((uint32_t)(ecx + 0xcf86e6u), (eax & 0xffu));
/* 96d12c: mov edi, 0xb00428 */
  edi = 0xb00428u;
/* 96d131: mov esi, 0xcf86e8 */
  esi = 0xcf86e8u;
/* 96d136: mov ecx, 0xa */
  ecx = 0xau;
/* 96d13b: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 96d13d: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* 96d13f: jne 0x96d155 */
  if (!zf) goto L_96d155;
L_96d141: /* 96d141: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 96d147: push 0xb002b8 */
  { uint32_t v = 0xb002b8u; esp -= 4; W32(esp, v); }
/* 96d14c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96d14d: call 0x953470 */
  esp -= 4; W32(esp, 0x96d152u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96d152: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96d155: /* 96d155: mov edx, dword ptr [0xcf8c24] */
  edx = R32((uint32_t)(0xcf8c24u));
/* 96d15b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96d15c: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x96d162u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 96d162: mov eax, dword ptr [0xcf8c2c] */
  eax = R32((uint32_t)(0xcf8c2cu));
/* 96d167: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96d169: mov dword ptr [0xcf8c24], ebx */
  W32((uint32_t)(0xcf8c24u), ebx);
/* 96d16f: je 0x96d17e */
  if (zf) goto L_96d17e;
L_96d171: /* 96d171: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96d172: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x96d178u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 96d178: mov dword ptr [0xcf8c2c], ebx */
  W32((uint32_t)(0xcf8c2cu), ebx);
L_96d17e: /* 96d17e: cmp dword ptr [0xcf8438], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96d185: mov dword ptr [0xcf8c30], ebx */
  W32((uint32_t)(0xcf8c30u), ebx);
/* 96d18b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96d18c: jl 0x96d1a8 */
  if ((sf != of)) goto L_96d1a8;
L_96d18e: /* 96d18e: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 96d192: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 96d198: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96d199: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96d19a: push 0xb00284 */
  { uint32_t v = 0xb00284u; esp -= 4; W32(esp, v); }
/* 96d19f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96d1a0: call 0x953470 */
  esp -= 4; W32(esp, 0x96d1a5u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96d1a5: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96d1a8: /* 96d1a8: mov eax, dword ptr [esp + 0x5c] */
  eax = R32((uint32_t)(esp + 0x5cu));
/* 96d1ac: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96d1ad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96d1ae: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 96d1af: add esp, 0x124 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x124u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96d1b5: ret  */
  esp += 4; SPILL(); return;
}

void f_96d1c0(void) {
  LOAD_REGS();
L_96d1c0: /* 96d1c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96d1c1: mov eax, dword ptr [0xcf85bc] */
  eax = R32((uint32_t)(0xcf85bcu));
/* 96d1c6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96d1c7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96d1c8: xor esi, esi */
  esi = 0;
/* 96d1ca: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96d1cc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96d1cd: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 96d1d1: jne 0x96d1ef */
  if (!zf) goto L_96d1ef;
L_96d1d3: /* 96d1d3: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 96d1d8: push 0xb008d8 */
  { uint32_t v = 0xb008d8u; esp -= 4; W32(esp, v); }
/* 96d1dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96d1de: call 0x953470 */
  esp -= 4; W32(esp, 0x96d1e3u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96d1e3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96d1e4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96d1e5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 96d1e7: call 0x9535b0 */
  esp -= 4; W32(esp, 0x96d1ecu); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 96d1ec: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96d1ef: /* 96d1ef: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 96d1f3: lea ecx, [ebx*4] */
  ecx = (uint32_t)(ebx*4);
/* 96d1fa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96d1fb: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x96d201u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 96d201: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96d203: mov dword ptr [0xcf85c0], eax */
  W32((uint32_t)(0xcf85c0u), eax);
/* 96d208: jne 0x96d22e */
  if (!zf) goto L_96d22e;
L_96d20a: /* 96d20a: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 96d210: push 0xaf556c */
  { uint32_t v = 0xaf556cu; esp -= 4; W32(esp, v); }
/* 96d215: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96d216: call 0x953470 */
  esp -= 4; W32(esp, 0x96d21bu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96d21b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96d21d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96d21f: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 96d221: call 0x9535b0 */
  esp -= 4; W32(esp, 0x96d226u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 96d226: mov eax, dword ptr [0xcf85c0] */
  eax = R32((uint32_t)(0xcf85c0u));
/* 96d22b: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96d22e: /* 96d22e: mov edi, eax */
  edi = eax;
/* 96d230: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 96d234: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 96d237: je 0x96d28b */
  if (zf) goto L_96d28b;
L_96d239: /* 96d239: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_96d240: /* 96d240: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 96d244: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96d245: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96d246: call 0x953410 */
  esp -= 4; W32(esp, 0x96d24bu); SPILL(); f_953410(); if (g_unwind) return; RELOAD();
/* 96d24b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96d24e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 96d24f: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96d251: jg 0x96d26e */
  if ((!zf && sf == of)) goto L_96d26e;
L_96d253: /* 96d253: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 96d255: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 96d259: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 96d25b: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 96d25e: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 96d260: je 0x96d28b */
  if (zf) goto L_96d28b;
L_96d262: /* 96d262: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 96d263: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 96d267: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 96d26a: jne 0x96d240 */
  if (!zf) goto L_96d240;
L_96d26c: /* 96d26c: jmp 0x96d28b */
  goto L_96d28b;
L_96d26e: /* 96d26e: mov edx, dword ptr [0xcf85bc] */
  edx = R32((uint32_t)(0xcf85bcu));
/* 96d274: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 96d276: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 96d27b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96d27c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96d27d: push 0xb00890 */
  { uint32_t v = 0xb00890u; esp -= 4; W32(esp, v); }
/* 96d282: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96d283: call 0x953470 */
  esp -= 4; W32(esp, 0x96d288u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96d288: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96d28b: /* 96d28b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 96d28c: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96d28e: jg 0x96d2a0 */
  if ((!zf && sf == of)) goto L_96d2a0;
L_96d290: /* 96d290: mov ecx, ebx */
  ecx = ebx;
/* 96d292: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 96d294: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 96d295: xor eax, eax */
  eax = 0;
/* 96d297: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 96d299: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_96d2a0: /* 96d2a0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96d2a1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96d2a2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96d2a3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 96d2a4: ret  */
  esp += 4; SPILL(); return;
}

void f_96d2b0(void) {
  LOAD_REGS();
L_96d2b0: /* 96d2b0: mov eax, dword ptr [0xcf84a4] */
  eax = R32((uint32_t)(0xcf84a4u));
/* 96d2b5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96d2b7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96d2b8: je 0x96d30b */
  if (zf) goto L_96d30b;
L_96d2ba: /* 96d2ba: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 96d2be: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 96d2c1: mov edx, 0x40000 */
  edx = 0x40000u;
/* 96d2c6: test edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96d2c8: je 0x96d2d9 */
  if (zf) goto L_96d2d9;
L_96d2ca: /* 96d2ca: mov ecx, dword ptr [0xcf849c] */
  ecx = R32((uint32_t)(0xcf849cu));
/* 96d2d0: xor eax, eax */
  eax = 0;
/* 96d2d2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96d2d4: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 96d2d7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96d2d8: ret  */
  esp += 4; SPILL(); return;
L_96d2d9: /* 96d2d9: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 96d2dc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96d2de: je 0x96d330 */
  if (zf) goto L_96d330;
L_96d2e0: /* 96d2e0: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 96d2e3: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 96d2e5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96d2e7: je 0x96d330 */
  if (zf) goto L_96d330;
L_96d2e9: /* 96d2e9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_96d2f0: /* 96d2f0: mov esi, dword ptr [eax + 0x3c] */
  esi = R32((uint32_t)(eax + 0x3cu));
/* 96d2f3: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 96d2f6: test edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96d2f8: jne 0x96d307 */
  if (!zf) goto L_96d307;
L_96d2fa: /* 96d2fa: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 96d2fc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96d2fe: jne 0x96d2f0 */
  if (!zf) goto L_96d2f0;
L_96d300: /* 96d300: mov eax, 1 */
  eax = 0x1u;
/* 96d305: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96d306: ret  */
  esp += 4; SPILL(); return;
L_96d307: /* 96d307: xor eax, eax */
  eax = 0;
/* 96d309: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96d30a: ret  */
  esp += 4; SPILL(); return;
L_96d30b: /* 96d30b: mov eax, dword ptr [0xcf849c] */
  eax = R32((uint32_t)(0xcf849cu));
/* 96d310: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96d312: je 0x96d325 */
  if (zf) goto L_96d325;
L_96d314: /* 96d314: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 96d318: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* 96d31b: not eax */
  eax = ~eax;
/* 96d31d: shr eax, 0x12 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 18;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 96d320: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 96d323: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96d324: ret  */
  esp += 4; SPILL(); return;
L_96d325: /* 96d325: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 96d329: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 96d32c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96d32e: jne 0x96d337 */
  if (!zf) goto L_96d337;
L_96d330: /* 96d330: mov eax, 1 */
  eax = 0x1u;
/* 96d335: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96d336: ret  */
  esp += 4; SPILL(); return;
L_96d337: /* 96d337: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96d339: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96d33a: call 0x963630 */
  esp -= 4; W32(esp, 0x96d33fu); SPILL(); f_963630(); if (g_unwind) return; RELOAD();
/* 96d33f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96d342: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 96d344: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 96d346: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 96d347: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96d348: ret  */
  esp += 4; SPILL(); return;
}

void f_96d350(void) {
  LOAD_REGS();
L_96d350: /* 96d350: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96d351: call 0x94f6c0 */
  esp -= 4; W32(esp, 0x96d356u); SPILL(); f_94f6c0(); if (g_unwind) return; RELOAD();
/* 96d356: mov dword ptr [0xcf8b9c], eax */
  W32((uint32_t)(0xcf8b9cu), eax);
/* 96d35b: mov eax, dword ptr [0xcf8564] */
  eax = R32((uint32_t)(0xcf8564u));
/* 96d360: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96d362: jne 0x96d383 */
  if (!zf) goto L_96d383;
L_96d364: /* 96d364: fld dword ptr [0xcf8bb4] */
  { double v = F32((uint32_t)(0xcf8bb4u)); FPUSH(v); }
/* 96d36a: fcomp dword ptr [0xa216c0] */
  fpu_com(ST0, F32((uint32_t)(0xa216c0u)));
  FPOP();
/* 96d370: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 96d372: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 96d375: jnp 0x96d383 */
  if (!pf) goto L_96d383;
L_96d377: /* 96d377: call 0x956990 */
  esp -= 4; W32(esp, 0x96d37cu); SPILL(); f_956990(); if (g_unwind) return; RELOAD();
/* 96d37c: call 0x96dc20 */
  esp -= 4; W32(esp, 0x96d381u); SPILL(); f_96dc20(); if (g_unwind) return; RELOAD();
/* 96d381: jmp 0x96d388 */
  goto L_96d388;
L_96d383: /* 96d383: call 0x96da30 */
  esp -= 4; W32(esp, 0x96d388u); SPILL(); f_96da30(); if (g_unwind) return; RELOAD();
L_96d388: /* 96d388: mov eax, dword ptr [0xcf8588] */
  eax = R32((uint32_t)(0xcf8588u));
/* 96d38d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96d38f: jne 0x96d511 */
  if (!zf) goto L_96d511;
L_96d395: /* 96d395: mov eax, dword ptr [0xcf8584] */
  eax = R32((uint32_t)(0xcf8584u));
/* 96d39a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96d39c: jne 0x96d511 */
  if (!zf) goto L_96d511;
L_96d3a2: /* 96d3a2: mov eax, dword ptr [0xcf8c00] */
  eax = R32((uint32_t)(0xcf8c00u));
/* 96d3a7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96d3a9: mov eax, dword ptr [0xcf858c] */
  eax = R32((uint32_t)(0xcf858cu));
/* 96d3ae: je 0x96d40a */
  if (zf) goto L_96d40a;
L_96d3b0: /* 96d3b0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96d3b2: jne 0x96d3cd */
  if (!zf) goto L_96d3cd;
L_96d3b4: /* 96d3b4: mov ecx, dword ptr [0xcf8454] */
  ecx = R32((uint32_t)(0xcf8454u));
/* 96d3ba: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96d3bc: je 0x96d3cd */
  if (zf) goto L_96d3cd;
L_96d3be: /* 96d3be: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 96d3c0: call 0x958f30 */
  esp -= 4; W32(esp, 0x96d3c5u); SPILL(); f_958f30(); if (g_unwind) return; RELOAD();
/* 96d3c5: mov eax, dword ptr [0xcf858c] */
  eax = R32((uint32_t)(0xcf858cu));
/* 96d3ca: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96d3cd: /* 96d3cd: mov ecx, dword ptr [0xcf8c00] */
  ecx = R32((uint32_t)(0xcf8c00u));
/* 96d3d3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96d3d5: je 0x96d40a */
  if (zf) goto L_96d40a;
L_96d3d7: /* 96d3d7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96d3d9: jne 0x96d40a */
  if (!zf) goto L_96d40a;
L_96d3db: /* 96d3db: mov ecx, dword ptr [0xcf8c04] */
  ecx = R32((uint32_t)(0xcf8c04u));
/* 96d3e1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96d3e3: jne 0x96d40a */
  if (!zf) goto L_96d40a;
L_96d3e5: /* 96d3e5: cmp dword ptr [0xcf8438], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96d3ec: jl 0x96d511 */
  if ((sf != of)) goto L_96d511;
L_96d3f2: /* 96d3f2: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 96d3f7: push 0xb00a28 */
  { uint32_t v = 0xb00a28u; esp -= 4; W32(esp, v); }
/* 96d3fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96d3fd: call 0x953470 */
  esp -= 4; W32(esp, 0x96d402u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96d402: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96d405: jmp 0x96d511 */
  goto L_96d511;
L_96d40a: /* 96d40a: mov ecx, dword ptr [0xcf8454] */
  ecx = R32((uint32_t)(0xcf8454u));
/* 96d410: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96d412: jne 0x96d44c */
  if (!zf) goto L_96d44c;
L_96d414: /* 96d414: cmp dword ptr [0xcf85cc], 5 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf85ccu))); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96d41b: jle 0x96d427 */
  if ((zf || sf != of)) goto L_96d427;
L_96d41d: /* 96d41d: mov ecx, dword ptr [0xcf8488] */
  ecx = R32((uint32_t)(0xcf8488u));
/* 96d423: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96d425: jne 0x96d44c */
  if (!zf) goto L_96d44c;
L_96d427: /* 96d427: mov ecx, dword ptr [0xcf8484] */
  ecx = R32((uint32_t)(0xcf8484u));
/* 96d42d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96d42f: jne 0x96d485 */
  if (!zf) goto L_96d485;
L_96d431: /* 96d431: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96d433: je 0x96d4a1 */
  if (zf) goto L_96d4a1;
L_96d435: /* 96d435: mov ecx, dword ptr [0xcf8408] */
  ecx = R32((uint32_t)(0xcf8408u));
/* 96d43b: mov edx, dword ptr [0xcf8460] */
  edx = R32((uint32_t)(0xcf8460u));
/* 96d441: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 96d443: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96d444: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96d445: push 0xb00a08 */
  { uint32_t v = 0xb00a08u; esp -= 4; W32(esp, v); }
/* 96d44a: jmp 0x96d46f */
  goto L_96d46f;
L_96d44c: /* 96d44c: mov edx, dword ptr [0xcf8484] */
  edx = R32((uint32_t)(0xcf8484u));
/* 96d452: xor ecx, ecx */
  ecx = 0;
/* 96d454: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96d456: mov edx, dword ptr [0xcf8408] */
  edx = R32((uint32_t)(0xcf8408u));
/* 96d45c: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 96d45f: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 96d460: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 96d462: mov eax, dword ptr [0xcf8460] */
  eax = R32((uint32_t)(0xcf8460u));
/* 96d467: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96d468: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96d469: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96d46a: push 0xb009f4 */
  { uint32_t v = 0xb009f4u; esp -= 4; W32(esp, v); }
L_96d46f: /* 96d46f: call 0x958800 */
  esp -= 4; W32(esp, 0x96d474u); SPILL(); f_958800(); if (g_unwind) return; RELOAD();
/* 96d474: mov eax, dword ptr [0xcf8484] */
  eax = R32((uint32_t)(0xcf8484u));
/* 96d479: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96d47c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96d47e: je 0x96d4a1 */
  if (zf) goto L_96d4a1;
L_96d480: /* 96d480: mov eax, dword ptr [0xcf858c] */
  eax = R32((uint32_t)(0xcf858cu));
L_96d485: /* 96d485: mov ecx, dword ptr [0xcf840c] */
  ecx = R32((uint32_t)(0xcf840cu));
/* 96d48b: mov edx, dword ptr [0xcf8464] */
  edx = R32((uint32_t)(0xcf8464u));
/* 96d491: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96d492: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96d493: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96d494: push 0xb009e0 */
  { uint32_t v = 0xb009e0u; esp -= 4; W32(esp, v); }
/* 96d499: call 0x958800 */
  esp -= 4; W32(esp, 0x96d49eu); SPILL(); f_958800(); if (g_unwind) return; RELOAD();
/* 96d49e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96d4a1: /* 96d4a1: mov eax, dword ptr [0xcf8b5c] */
  eax = R32((uint32_t)(0xcf8b5cu));
/* 96d4a6: cmp eax, dword ptr [0xcf8b4c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0xcf8b4cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96d4ac: jne 0x96d4dd */
  if (!zf) goto L_96d4dd;
L_96d4ae: /* 96d4ae: lea ecx, [esp] */
  ecx = (uint32_t)(esp);
/* 96d4b2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96d4b3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96d4b5: mov dword ptr [0xcf8bcc], 1 */
  W32((uint32_t)(0xcf8bccu), 0x1u);
/* 96d4bf: call 0x96ef80 */
  esp -= 4; W32(esp, 0x96d4c4u); SPILL(); f_96ef80(); if (g_unwind) return; RELOAD();
/* 96d4c4: mov dword ptr [0xcf8bcc], 0 */
  W32((uint32_t)(0xcf8bccu), 0x0u);
/* 96d4ce: call 0x95e190 */
  esp -= 4; W32(esp, 0x96d4d3u); SPILL(); f_95e190(); if (g_unwind) return; RELOAD();
/* 96d4d3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96d4d5: call 0x958330 */
  esp -= 4; W32(esp, 0x96d4dau); SPILL(); f_958330(); if (g_unwind) return; RELOAD();
/* 96d4da: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96d4dd: /* 96d4dd: mov eax, dword ptr [0xcf85b8] */
  eax = R32((uint32_t)(0xcf85b8u));
/* 96d4e2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96d4e4: je 0x96d511 */
  if (zf) goto L_96d511;
L_96d4e6: /* 96d4e6: mov eax, dword ptr [0xcf855c] */
  eax = R32((uint32_t)(0xcf855cu));
/* 96d4eb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96d4ed: je 0x96d50c */
  if (zf) goto L_96d50c;
L_96d4ef: /* 96d4ef: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96d4f1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96d4f3: call 0x96de10 */
  esp -= 4; W32(esp, 0x96d4f8u); SPILL(); f_96de10(); if (g_unwind) return; RELOAD();
/* 96d4f8: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 96d4fe: push 0xb009c0 */
  { uint32_t v = 0xb009c0u; esp -= 4; W32(esp, v); }
/* 96d503: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96d504: call 0x953470 */
  esp -= 4; W32(esp, 0x96d509u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96d509: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96d50c: /* 96d50c: call 0x954290 */
  esp -= 4; W32(esp, 0x96d511u); SPILL(); f_954290(); if (g_unwind) return; RELOAD();
L_96d511: /* 96d511: mov eax, dword ptr [0xcf85c8] */
  eax = R32((uint32_t)(0xcf85c8u));
/* 96d516: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96d518: je 0x96d528 */
  if (zf) goto L_96d528;
L_96d51a: /* 96d51a: mov eax, dword ptr [0xcf8bb8] */
  eax = R32((uint32_t)(0xcf8bb8u));
/* 96d51f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96d521: jne 0x96d528 */
  if (!zf) goto L_96d528;
L_96d523: /* 96d523: call 0x957a20 */
  esp -= 4; W32(esp, 0x96d528u); SPILL(); f_957a20(); if (g_unwind) return; RELOAD();
L_96d528: /* 96d528: mov eax, dword ptr [0xcf2f48] */
  eax = R32((uint32_t)(0xcf2f48u));
/* 96d52d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96d52e: call 0x94f340 */
  esp -= 4; W32(esp, 0x96d533u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 96d533: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96d536: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96d538: je 0x96d566 */
  if (zf) goto L_96d566;
L_96d53a: /* 96d53a: mov ecx, dword ptr [0xcf2f48] */
  ecx = R32((uint32_t)(0xcf2f48u));
/* 96d540: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96d541: call 0x94f340 */
  esp -= 4; W32(esp, 0x96d546u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 96d546: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 96d54c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96d54d: push 0xb00980 */
  { uint32_t v = 0xb00980u; esp -= 4; W32(esp, v); }
/* 96d552: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96d553: call 0x953470 */
  esp -= 4; W32(esp, 0x96d558u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96d558: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96d55a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96d55c: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 96d55e: call 0x9535b0 */
  esp -= 4; W32(esp, 0x96d563u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 96d563: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96d566: /* 96d566: call 0x94f6c0 */
  esp -= 4; W32(esp, 0x96d56bu); SPILL(); f_94f6c0(); if (g_unwind) return; RELOAD();
/* 96d56b: sub eax, dword ptr [0xcf8b9c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0xcf8b9cu)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 96d571: mov dword ptr [0xcf8b9c], eax */
  W32((uint32_t)(0xcf8b9cu), eax);
/* 96d576: cmp dword ptr [0xcf8438], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96d57d: mov dword ptr [0xcf8bec], 1 */
  W32((uint32_t)(0xcf8becu), 0x1u);
/* 96d587: jl 0x96d59c */
  if ((sf != of)) goto L_96d59c;
L_96d589: /* 96d589: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 96d58e: push 0xb00960 */
  { uint32_t v = 0xb00960u; esp -= 4; W32(esp, v); }
/* 96d593: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96d594: call 0x953470 */
  esp -= 4; W32(esp, 0x96d599u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96d599: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96d59c: /* 96d59c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 96d59d: ret  */
  esp += 4; SPILL(); return;
}

void f_96d5a0(void) {
  LOAD_REGS();
L_96d5a0: /* 96d5a0: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 96d5a3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96d5a4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96d5a5: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
/* 96d5a9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96d5aa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96d5ab: xor edi, edi */
  edi = 0;
/* 96d5ad: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96d5ae: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 96d5b2: mov dword ptr [0xcf8bb8], edi */
  W32((uint32_t)(0xcf8bb8u), edi);
/* 96d5b8: call 0x95f210 */
  esp -= 4; W32(esp, 0x96d5bdu); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 96d5bd: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96d5c0: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96d5c3: jne 0x96d5d3 */
  if (!zf) goto L_96d5d3;
L_96d5c5: /* 96d5c5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96d5c6: push 0xcf8c14 */
  { uint32_t v = 0xcf8c14u; esp -= 4; W32(esp, v); }
/* 96d5cb: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x96d5d0u); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 96d5d0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96d5d3: /* 96d5d3: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 96d5d7: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96d5d9: jne 0x96d5f7 */
  if (!zf) goto L_96d5f7;
L_96d5db: /* 96d5db: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 96d5e0: push 0xb00ae4 */
  { uint32_t v = 0xb00ae4u; esp -= 4; W32(esp, v); }
/* 96d5e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96d5e6: call 0x953470 */
  esp -= 4; W32(esp, 0x96d5ebu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96d5eb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96d5ec: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96d5ed: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 96d5ef: call 0x9535b0 */
  esp -= 4; W32(esp, 0x96d5f4u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 96d5f4: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96d5f7: /* 96d5f7: cmp dword ptr [esp + 0x34], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x34u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96d5fb: je 0x96d668 */
  if (zf) goto L_96d668;
L_96d5fd: /* 96d5fd: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 96d601: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96d602: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 96d606: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96d607: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 96d60b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96d60c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96d60d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96d60e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96d60f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96d610: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96d611: call 0x96fc50 */
  esp -= 4; W32(esp, 0x96d616u); SPILL(); f_96fc50(); if (g_unwind) return; RELOAD();
/* 96d616: mov edx, dword ptr [0xcf79fc] */
  edx = R32((uint32_t)(0xcf79fcu));
/* 96d61c: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 96d620: mov esi, eax */
  esi = eax;
/* 96d622: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 96d626: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 96d628: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96d62b: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96d62d: mov dword ptr [0xcf79fc], edx */
  W32((uint32_t)(0xcf79fcu), edx);
/* 96d633: jne 0x96d668 */
  if (!zf) goto L_96d668;
L_96d635: /* 96d635: mov eax, dword ptr [0xcf79cc] */
  eax = R32((uint32_t)(0xcf79ccu));
/* 96d63a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 96d63b: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 96d63f: mov dword ptr [0xcf79cc], eax */
  W32((uint32_t)(0xcf79ccu), eax);
/* 96d644: mov ebx, dword ptr [esi + 0x3c] */
  ebx = R32((uint32_t)(esi + 0x3cu));
/* 96d647: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96d648: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96d649: or ebx, 0x20000 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 96d64f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96d650: mov dword ptr [esi + 0x3c], ebx */
  W32((uint32_t)(esi + 0x3cu), ebx);
/* 96d653: call 0x96ead0 */
  esp -= 4; W32(esp, 0x96d658u); SPILL(); f_96ead0(); if (g_unwind) return; RELOAD();
/* 96d658: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96d65b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96d65c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96d65d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 96d65e: mov eax, 1 */
  eax = 0x1u;
/* 96d663: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96d664: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96d667: ret  */
  esp += 4; SPILL(); return;
L_96d668: /* 96d668: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96d669: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96d66a: call 0x96de10 */
  esp -= 4; W32(esp, 0x96d66fu); SPILL(); f_96de10(); if (g_unwind) return; RELOAD();
/* 96d66f: mov eax, dword ptr [0xcf8588] */
  eax = R32((uint32_t)(0xcf8588u));
/* 96d674: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96d677: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96d679: jge 0x96d69d */
  if ((sf == of)) goto L_96d69d;
L_96d67b: /* 96d67b: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 96d67e: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 96d680: cmp dword ptr [0xcf8bac], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8bacu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96d686: jne 0x96d69d */
  if (!zf) goto L_96d69d;
L_96d688: /* 96d688: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 96d68b: or eax, 0x20000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 96d690: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96d691: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* 96d694: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96d695: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 96d696: xor eax, eax */
  eax = 0;
/* 96d698: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96d699: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96d69c: ret  */
  esp += 4; SPILL(); return;
L_96d69d: /* 96d69d: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 96d6a1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96d6a2: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 96d6a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96d6a7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96d6a8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96d6a9: call 0x96e160 */
  esp -= 4; W32(esp, 0x96d6aeu); SPILL(); f_96e160(); if (g_unwind) return; RELOAD();
/* 96d6ae: mov eax, dword ptr [0xcf8478] */
  eax = R32((uint32_t)(0xcf8478u));
/* 96d6b3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96d6b6: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96d6b8: je 0x96d6f8 */
  if (zf) goto L_96d6f8;
L_96d6ba: /* 96d6ba: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 96d6be: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 96d6c2: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 96d6c4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96d6c6: jne 0x96d6f8 */
  if (!zf) goto L_96d6f8;
L_96d6c8: /* 96d6c8: cmp dword ptr [0xcf8bb0], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8bb0u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96d6ce: jne 0x96d6f8 */
  if (!zf) goto L_96d6f8;
L_96d6d0: /* 96d6d0: inc dword ptr [0xcf79c4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf79c4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0xcf79c4u), r);
  }
/* 96d6d6: mov edx, dword ptr [esi + 0x3c] */
  edx = R32((uint32_t)(esi + 0x3cu));
/* 96d6d9: or edx, 0x20000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 96d6df: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96d6e0: mov dword ptr [esi + 0x3c], edx */
  W32((uint32_t)(esi + 0x3cu), edx);
/* 96d6e3: call 0x958330 */
  esp -= 4; W32(esp, 0x96d6e8u); SPILL(); f_958330(); if (g_unwind) return; RELOAD();
/* 96d6e8: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96d6eb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96d6ec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96d6ed: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 96d6ee: mov eax, 1 */
  eax = 0x1u;
/* 96d6f3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96d6f4: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96d6f7: ret  */
  esp += 4; SPILL(); return;
L_96d6f8: /* 96d6f8: mov ecx, dword ptr [0xcf7a1c] */
  ecx = R32((uint32_t)(0xcf7a1cu));
/* 96d6fe: mov edi, dword ptr [0xcf8b90] */
  edi = R32((uint32_t)(0xcf8b90u));
/* 96d704: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 96d705: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96d706: mov dword ptr [0xcf7a1c], ecx */
  W32((uint32_t)(0xcf7a1cu), ecx);
/* 96d70c: call 0x9574f0 */
  esp -= 4; W32(esp, 0x96d711u); SPILL(); f_9574f0(); if (g_unwind) return; RELOAD();
/* 96d711: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96d714: mov ebx, eax */
  ebx = eax;
/* 96d716: call 0x95e5b0 */
  esp -= 4; W32(esp, 0x96d71bu); SPILL(); f_95e5b0(); if (g_unwind) return; RELOAD();
/* 96d71b: mov eax, dword ptr [0xcf8b90] */
  eax = R32((uint32_t)(0xcf8b90u));
/* 96d720: mov ecx, dword ptr [0xcf8b60] */
  ecx = R32((uint32_t)(0xcf8b60u));
/* 96d726: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 96d728: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 96d72c: mov eax, dword ptr [0xcf8b80] */
  eax = R32((uint32_t)(0xcf8b80u));
/* 96d731: fild dword ptr [esp + 0x34] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 96d735: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 96d737: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 96d73b: fild dword ptr [esp + 0x2c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 96d73f: mov eax, dword ptr [0xcf8478] */
  eax = R32((uint32_t)(0xcf8478u));
/* 96d744: xor edi, edi */
  edi = 0;
/* 96d746: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96d748: fimul dword ptr [0xcf85cc] */
  ST0 = ST0 * ((double)(int32_t)R32((uint32_t)(0xcf85ccu)));
/* 96d74e: fidiv dword ptr [0xcf8b84] */
  ST0 = ST0 / ((double)(int32_t)R32((uint32_t)(0xcf8b84u)));
/* 96d754: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 96d756: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 96d75a: fld dword ptr [0xcf79a4] */
  { double v = F32((uint32_t)(0xcf79a4u)); FPUSH(v); }
/* 96d760: fadd dword ptr [esp + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x30u)));
/* 96d764: fstp dword ptr [0xcf79a4] */
  WF32((uint32_t)(0xcf79a4u), ST0); FPOP();
/* 96d76a: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 96d76e: fmul dword ptr [esp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x30u)));
/* 96d772: fadd dword ptr [0xcf79a8] */
  ST0 = ST0 + (F32((uint32_t)(0xcf79a8u)));
/* 96d778: fstp dword ptr [0xcf79a8] */
  WF32((uint32_t)(0xcf79a8u), ST0); FPOP();
/* 96d77e: je 0x96d809 */
  if (zf) goto L_96d809;
L_96d784: /* 96d784: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 96d788: mov edx, dword ptr [0xcf8b58] */
  edx = R32((uint32_t)(0xcf8b58u));
/* 96d78e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96d78f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96d790: call 0x956380 */
  esp -= 4; W32(esp, 0x96d795u); SPILL(); f_956380(); if (g_unwind) return; RELOAD();
/* 96d795: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96d798: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96d79a: jne 0x96d7fc */
  if (!zf) goto L_96d7fc;
L_96d79c: /* 96d79c: cmp dword ptr [0xcf8bb0], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8bb0u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96d7a2: jne 0x96d7fc */
  if (!zf) goto L_96d7fc;
L_96d7a4: /* 96d7a4: mov edi, dword ptr [0xcf8b58] */
  edi = R32((uint32_t)(0xcf8b58u));
/* 96d7aa: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96d7ac: je 0x96d7c7 */
  if (zf) goto L_96d7c7;
L_96d7ae: /* 96d7ae: mov edi, edi */
  edi = edi;
L_96d7b0: /* 96d7b0: mov eax, dword ptr [edi + 0x1c] */
  eax = R32((uint32_t)(edi + 0x1cu));
/* 96d7b3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96d7b5: je 0x96d7c7 */
  if (zf) goto L_96d7c7;
L_96d7b7: /* 96d7b7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96d7b8: call 0x95e040 */
  esp -= 4; W32(esp, 0x96d7bdu); SPILL(); f_95e040(); if (g_unwind) return; RELOAD();
/* 96d7bd: mov edi, dword ptr [edi + 0x1c] */
  edi = R32((uint32_t)(edi + 0x1cu));
/* 96d7c0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96d7c3: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96d7c5: jne 0x96d7b0 */
  if (!zf) goto L_96d7b0;
L_96d7c7: /* 96d7c7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96d7c8: call 0x956020 */
  esp -= 4; W32(esp, 0x96d7cdu); SPILL(); f_956020(); if (g_unwind) return; RELOAD();
/* 96d7cd: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 96d7cf: call 0x958330 */
  esp -= 4; W32(esp, 0x96d7d4u); SPILL(); f_958330(); if (g_unwind) return; RELOAD();
/* 96d7d4: mov ecx, dword ptr [0xcf79c8] */
  ecx = R32((uint32_t)(0xcf79c8u));
/* 96d7da: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96d7dd: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 96d7de: mov dword ptr [0xcf79c8], ecx */
  W32((uint32_t)(0xcf79c8u), ecx);
/* 96d7e4: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 96d7e7: or eax, 0x20000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 96d7ec: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96d7ed: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* 96d7f0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96d7f1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 96d7f2: mov eax, 1 */
  eax = 0x1u;
/* 96d7f7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96d7f8: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96d7fb: ret  */
  esp += 4; SPILL(); return;
L_96d7fc: /* 96d7fc: cmp dword ptr [0xcf8478], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8478u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96d802: je 0x96d809 */
  if (zf) goto L_96d809;
L_96d804: /* 96d804: call 0x95dce0 */
  esp -= 4; W32(esp, 0x96d809u); SPILL(); f_95dce0(); if (g_unwind) return; RELOAD();
L_96d809: /* 96d809: call 0x95ed40 */
  esp -= 4; W32(esp, 0x96d80eu); SPILL(); f_95ed40(); if (g_unwind) return; RELOAD();
/* 96d80e: call 0x95f370 */
  esp -= 4; W32(esp, 0x96d813u); SPILL(); f_95f370(); if (g_unwind) return; RELOAD();
/* 96d813: mov eax, dword ptr [0xcf8584] */
  eax = R32((uint32_t)(0xcf8584u));
/* 96d818: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96d81a: je 0x96d83c */
  if (zf) goto L_96d83c;
L_96d81c: /* 96d81c: mov ecx, dword ptr [0xcf8bac] */
  ecx = R32((uint32_t)(0xcf8bacu));
/* 96d822: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 96d823: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96d825: jne 0x96d83c */
  if (!zf) goto L_96d83c;
L_96d827: /* 96d827: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 96d82a: or eax, 0x20000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 96d82f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96d830: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* 96d833: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96d834: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 96d835: xor eax, eax */
  eax = 0;
/* 96d837: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96d838: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96d83b: ret  */
  esp += 4; SPILL(); return;
L_96d83c: /* 96d83c: cmp dword ptr [0xcf8488], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8488u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96d842: mov esi, 0x32 */
  esi = 0x32u;
/* 96d847: jne 0x96d930 */
  if (!zf) goto L_96d930;
L_96d84d: /* 96d84d: cmp dword ptr [0xcf8454], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8454u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96d853: jne 0x96d930 */
  if (!zf) goto L_96d930;
L_96d859: /* 96d859: cmp dword ptr [0xcf83f8], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf83f8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96d85f: je 0x96d86b */
  if (zf) goto L_96d86b;
L_96d861: /* 96d861: mov dword ptr [0xcf8bcc], 1 */
  W32((uint32_t)(0xcf8bccu), 0x1u);
L_96d86b: /* 96d86b: lea edx, [esp + 0x24] */
  edx = (uint32_t)(esp + 0x24u);
/* 96d86f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96d870: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96d871: call 0x96ef80 */
  esp -= 4; W32(esp, 0x96d876u); SPILL(); f_96ef80(); if (g_unwind) return; RELOAD();
/* 96d876: fild dword ptr [esp + 0x2c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 96d87a: mov eax, dword ptr [0xcf85d4] */
  eax = R32((uint32_t)(0xcf85d4u));
/* 96d87f: sub eax, dword ptr [0xcf8b84] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0xcf8b84u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 96d885: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 96d889: fild dword ptr [esp + 0x34] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 96d88d: mov ebx, dword ptr [0xcf7a08] */
  ebx = R32((uint32_t)(0xcf7a08u));
/* 96d893: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96d896: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 96d897: fimul dword ptr [0xcf85cc] */
  ST0 = ST0 * ((double)(int32_t)R32((uint32_t)(0xcf85ccu)));
/* 96d89d: mov dword ptr [0xcf8bcc], edi */
  W32((uint32_t)(0xcf8bccu), edi);
/* 96d8a3: mov dword ptr [0xcf8bd0], edi */
  W32((uint32_t)(0xcf8bd0u), edi);
/* 96d8a9: mov dword ptr [0xcf7a08], ebx */
  W32((uint32_t)(0xcf7a08u), ebx);
/* 96d8af: fidiv dword ptr [0xcf8b84] */
  ST0 = ST0 / ((double)(int32_t)R32((uint32_t)(0xcf8b84u)));
/* 96d8b5: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 96d8b7: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 96d8bb: fld dword ptr [0xcf7a0c] */
  { double v = F32((uint32_t)(0xcf7a0cu)); FPUSH(v); }
/* 96d8c1: fadd dword ptr [esp + 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x2cu)));
/* 96d8c5: fstp dword ptr [0xcf7a0c] */
  WF32((uint32_t)(0xcf7a0cu), ST0); FPOP();
/* 96d8cb: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 96d8cf: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 96d8d3: fadd dword ptr [0xcf7a10] */
  ST0 = ST0 + (F32((uint32_t)(0xcf7a10u)));
/* 96d8d9: fstp dword ptr [0xcf7a10] */
  WF32((uint32_t)(0xcf7a10u), ST0); FPOP();
/* 96d8df: call 0x95e190 */
  esp -= 4; W32(esp, 0x96d8e4u); SPILL(); f_95e190(); if (g_unwind) return; RELOAD();
/* 96d8e4: mov eax, dword ptr [0xcf8b84] */
  eax = R32((uint32_t)(0xcf8b84u));
/* 96d8e9: cmp dword ptr [0xcf7940], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf7940u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96d8ef: jge 0x96d8f6 */
  if ((sf == of)) goto L_96d8f6;
L_96d8f1: /* 96d8f1: mov dword ptr [0xcf7940], eax */
  W32((uint32_t)(0xcf7940u), eax);
L_96d8f6: /* 96d8f6: cmp dword ptr [0xcf8438], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96d8fd: mov dword ptr [0xcf8bc8], edi */
  W32((uint32_t)(0xcf8bc8u), edi);
/* 96d903: jl 0x96d917 */
  if ((sf != of)) goto L_96d917;
L_96d905: /* 96d905: mov ecx, dword ptr [0xcf8b58] */
  ecx = R32((uint32_t)(0xcf8b58u));
/* 96d90b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 96d90d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96d90e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96d90f: call 0x953810 */
  esp -= 4; W32(esp, 0x96d914u); SPILL(); f_953810(); if (g_unwind) return; RELOAD();
/* 96d914: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96d917: /* 96d917: cmp dword ptr [0xcf8404], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8404u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96d91d: je 0x96d992 */
  if (zf) goto L_96d992;
L_96d91f: /* 96d91f: cmp dword ptr [0xcf8b80], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8b80u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96d925: jge 0x96d984 */
  if ((sf == of)) goto L_96d984;
L_96d927: /* 96d927: mov edx, dword ptr [0xcf8b4c] */
  edx = R32((uint32_t)(0xcf8b4cu));
/* 96d92d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96d92e: jmp 0x96d98a */
  goto L_96d98a;
L_96d930: /* 96d930: mov eax, dword ptr [0xcf8408] */
  eax = R32((uint32_t)(0xcf8408u));
/* 96d935: mov ecx, dword ptr [0xcf8460] */
  ecx = R32((uint32_t)(0xcf8460u));
/* 96d93b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96d93c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96d93d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96d93e: call 0x958640 */
  esp -= 4; W32(esp, 0x96d943u); SPILL(); f_958640(); if (g_unwind) return; RELOAD();
/* 96d943: mov eax, dword ptr [0xcf7a80] */
  eax = R32((uint32_t)(0xcf7a80u));
/* 96d948: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96d94b: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96d94d: jg 0x96d861 */
  if ((!zf && sf == of)) goto L_96d861;
L_96d953: /* 96d953: mov eax, dword ptr [0xcf8b58] */
  eax = R32((uint32_t)(0xcf8b58u));
/* 96d958: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96d95a: je 0x96d86b */
  if (zf) goto L_96d86b;
L_96d960: /* 96d960: mov edx, 0x1000 */
  edx = 0x1000u;
L_96d965: /* 96d965: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 96d968: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96d96a: je 0x96d86b */
  if (zf) goto L_96d86b;
L_96d970: /* 96d970: test dword ptr [eax + 0x3c], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x3cu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96d973: je 0x96d861 */
  if (zf) goto L_96d861;
L_96d979: /* 96d979: mov eax, ecx */
  eax = ecx;
/* 96d97b: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96d97d: jne 0x96d965 */
  if (!zf) goto L_96d965;
L_96d97f: /* 96d97f: jmp 0x96d86b */
  goto L_96d86b;
L_96d984: /* 96d984: mov eax, dword ptr [0xcf8b58] */
  eax = R32((uint32_t)(0xcf8b58u));
/* 96d989: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_96d98a: /* 96d98a: call 0x955860 */
  esp -= 4; W32(esp, 0x96d98fu); SPILL(); f_955860(); if (g_unwind) return; RELOAD();
/* 96d98f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96d992: /* 96d992: mov eax, dword ptr [0xcf8588] */
  eax = R32((uint32_t)(0xcf8588u));
/* 96d997: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96d999: jle 0x96d9b0 */
  if ((zf || sf != of)) goto L_96d9b0;
L_96d99b: /* 96d99b: mov ecx, dword ptr [0xcf8bac] */
  ecx = R32((uint32_t)(0xcf8bacu));
/* 96d9a1: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 96d9a2: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96d9a4: jne 0x96d9b0 */
  if (!zf) goto L_96d9b0;
L_96d9a6: /* 96d9a6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96d9a7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96d9a8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 96d9a9: xor eax, eax */
  eax = 0;
/* 96d9ab: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96d9ac: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96d9af: ret  */
  esp += 4; SPILL(); return;
L_96d9b0: /* 96d9b0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 96d9b2: call 0x958330 */
  esp -= 4; W32(esp, 0x96d9b7u); SPILL(); f_958330(); if (g_unwind) return; RELOAD();
/* 96d9b7: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 96d9bc: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96d9bf: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96d9c2: jl 0x96d9f9 */
  if ((sf != of)) goto L_96d9f9;
L_96d9c4: /* 96d9c4: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 96d9c8: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 96d9cc: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 96d9cf: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 96d9d3: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 96d9d7: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 96d9da: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96d9db: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96d9dc: call 0x95f210 */
  esp -= 4; W32(esp, 0x96d9e1u); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 96d9e1: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 96d9e7: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96d9ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96d9eb: push 0xb00a98 */
  { uint32_t v = 0xb00a98u; esp -= 4; W32(esp, v); }
/* 96d9f0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96d9f1: call 0x953470 */
  esp -= 4; W32(esp, 0x96d9f6u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96d9f6: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96d9f9: /* 96d9f9: cmp dword ptr [0xcf85cc], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf85ccu))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96da00: jle 0x96da21 */
  if ((zf || sf != of)) goto L_96da21;
L_96da02: /* 96da02: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96da03: call 0x95f210 */
  esp -= 4; W32(esp, 0x96da08u); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 96da08: mov ecx, dword ptr [0xcf8598] */
  ecx = R32((uint32_t)(0xcf8598u));
/* 96da0e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96da11: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96da13: jne 0x96da21 */
  if (!zf) goto L_96da21;
L_96da15: /* 96da15: mov dword ptr [0xcf8438], edi */
  W32((uint32_t)(0xcf8438u), edi);
/* 96da1b: mov dword ptr [0xcf2f50], edi */
  W32((uint32_t)(0xcf2f50u), edi);
L_96da21: /* 96da21: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96da22: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96da23: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 96da24: mov eax, 1 */
  eax = 0x1u;
/* 96da29: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96da2a: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96da2d: ret  */
  esp += 4; SPILL(); return;
}

void f_96da30(void) {
  LOAD_REGS();
L_96da30: /* 96da30: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96da31: mov ebp, esp */
  ebp = esp;
/* 96da33: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96da34: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96da35: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96da36: mov dword ptr [0xcf8ba0], 1 */
  W32((uint32_t)(0xcf8ba0u), 0x1u);
/* 96da40: xor ebx, ebx */
  ebx = 0;
L_96da42: /* 96da42: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96da43: push 0xcf8ac8 */
  { uint32_t v = 0xcf8ac8u; esp -= 4; W32(esp, v); }
/* 96da48: call 0x99cf12 */
  esp -= 4; W32(esp, 0x96da4du); SPILL(); { GJmp *j = hle_setjmp3_slot(); if (setjmp(j->env)) R = j->r; else { R.esp += 4; R.eax = 0; j->r = R; } } RELOAD();
/* 96da4d: mov esi, eax */
  esi = eax;
/* 96da4f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96da52: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96da54: je 0x96da8e */
  if (zf) goto L_96da8e;
L_96da56: /* 96da56: fld dword ptr [0xcf7a38] */
  { double v = F32((uint32_t)(0xcf7a38u)); FPUSH(v); }
/* 96da5c: mov eax, dword ptr [0xcf7a34] */
  eax = R32((uint32_t)(0xcf7a34u));
/* 96da61: fcomp dword ptr [0xcf8bb4] */
  fpu_com(ST0, F32((uint32_t)(0xcf8bb4u)));
  FPOP();
/* 96da67: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 96da68: mov dword ptr [0xcf7a34], eax */
  W32((uint32_t)(0xcf7a34u), eax);
/* 96da6d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 96da6f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 96da72: jp 0x96da7e */
  if (pf) goto L_96da7e;
L_96da74: /* 96da74: mov eax, dword ptr [0xcf8bb4] */
  eax = R32((uint32_t)(0xcf8bb4u));
/* 96da79: mov dword ptr [0xcf7a38], eax */
  W32((uint32_t)(0xcf7a38u), eax);
L_96da7e: /* 96da7e: mov dword ptr [0xcf8c34], ebx */
  W32((uint32_t)(0xcf8c34u), ebx);
/* 96da84: mov dword ptr [0xcf8584], 1 */
  W32((uint32_t)(0xcf8584u), 0x1u);
L_96da8e: /* 96da8e: mov ecx, dword ptr [0xcf8564] */
  ecx = R32((uint32_t)(0xcf8564u));
/* 96da94: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96da96: jne 0x96daf7 */
  if (!zf) goto L_96daf7;
L_96da98: /* 96da98: fld dword ptr [0xcf8bb4] */
  { double v = F32((uint32_t)(0xcf8bb4u)); FPUSH(v); }
/* 96da9e: fcomp dword ptr [0xa216c0] */
  fpu_com(ST0, F32((uint32_t)(0xa216c0u)));
  FPOP();
/* 96daa4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 96daa6: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 96daa9: jp 0x96daf7 */
  if (pf) goto L_96daf7;
L_96daab: /* 96daab: mov eax, dword ptr [0xcf8ba4] */
  eax = R32((uint32_t)(0xcf8ba4u));
/* 96dab0: cmp eax, 0x64 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96dab3: jle 0x96dae4 */
  if ((zf || sf != of)) goto L_96dae4;
L_96dab5: /* 96dab5: fld dword ptr [0xcf8bb4] */
  { double v = F32((uint32_t)(0xcf8bb4u)); FPUSH(v); }
/* 96dabb: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 96dac1: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 96dac4: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 96dac7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96dac8: push 0xb00b20 */
  { uint32_t v = 0xb00b20u; esp -= 4; W32(esp, v); }
/* 96dacd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96dace: call 0x953470 */
  esp -= 4; W32(esp, 0x96dad3u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96dad3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96dad4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96dad5: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 96dad7: call 0x9535b0 */
  esp -= 4; W32(esp, 0x96dadcu); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 96dadc: mov eax, dword ptr [0xcf8ba4] */
  eax = R32((uint32_t)(0xcf8ba4u));
/* 96dae1: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96dae4: /* 96dae4: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96dae6: je 0x96db04 */
  if (zf) goto L_96db04;
L_96dae8: /* 96dae8: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96daea: jne 0x96db04 */
  if (!zf) goto L_96db04;
L_96daec: /* 96daec: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96daed: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96daee: mov dword ptr [0xcf8ba0], ebx */
  W32((uint32_t)(0xcf8ba0u), ebx);
/* 96daf4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96daf5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 96daf6: ret  */
  esp += 4; SPILL(); return;
L_96daf7: /* 96daf7: mov eax, dword ptr [0xcf8ba4] */
  eax = R32((uint32_t)(0xcf8ba4u));
/* 96dafc: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96dafe: je 0x96db04 */
  if (zf) goto L_96db04;
L_96db00: /* 96db00: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96db02: jge 0x96daec */
  if ((sf == of)) goto L_96daec;
L_96db04: /* 96db04: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 96db06: mov dword ptr [0xcf8584], ebx */
  W32((uint32_t)(0xcf8584u), ebx);
/* 96db0c: call 0x94f8c0 */
  esp -= 4; W32(esp, 0x96db11u); SPILL(); f_94f8c0(); if (g_unwind) return; RELOAD();
/* 96db11: mov edx, dword ptr [0xcf8ba4] */
  edx = R32((uint32_t)(0xcf8ba4u));
/* 96db17: mov eax, dword ptr [0xcf89ec] */
  eax = R32((uint32_t)(0xcf89ecu));
/* 96db1c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96db1f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 96db20: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96db22: mov dword ptr [0xcf8ba4], edx */
  W32((uint32_t)(0xcf8ba4u), edx);
/* 96db28: jne 0x96db41 */
  if (!zf) goto L_96db41;
L_96db2a: /* 96db2a: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 96db2d: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 96db2f: mov edi, 0xcf87e8 */
  edi = 0xcf87e8u;
/* 96db34: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 96db36: not ecx */
  ecx = ~ecx;
/* 96db38: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 96db39: mov dword ptr [0xcf89ec], ecx */
  W32((uint32_t)(0xcf89ecu), ecx);
/* 96db3f: jmp 0x96db51 */
  goto L_96db51;
L_96db41: /* 96db41: mov byte ptr [eax + 0xcf87e8], bl */
  W8((uint32_t)(eax + 0xcf87e8u), (ebx & 0xffu));
/* 96db47: mov dword ptr [0xcf89e8], 0x50 */
  W32((uint32_t)(0xcf89e8u), 0x50u);
L_96db51: /* 96db51: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96db52: push 0xcf8ba4 */
  { uint32_t v = 0xcf8ba4u; esp -= 4; W32(esp, v); }
/* 96db57: push 0xb00b14 */
  { uint32_t v = 0xb00b14u; esp -= 4; W32(esp, v); }
/* 96db5c: call 0x953320 */
  esp -= 4; W32(esp, 0x96db61u); SPILL(); f_953320(); if (g_unwind) return; RELOAD();
/* 96db61: mov edx, dword ptr [0xcf8ba4] */
  edx = R32((uint32_t)(0xcf8ba4u));
/* 96db67: mov eax, dword ptr [0xcf8564] */
  eax = R32((uint32_t)(0xcf8564u));
/* 96db6c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96db6f: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96db71: jne 0x96dbc5 */
  if (!zf) goto L_96dbc5;
L_96db73: /* 96db73: cmp dword ptr [0xcf8598], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8598u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96db7a: mov ecx, dword ptr [0xcf8594] */
  ecx = R32((uint32_t)(0xcf8594u));
/* 96db80: mov dword ptr [0xcf8438], ecx */
  W32((uint32_t)(0xcf8438u), ecx);
/* 96db86: jne 0x96dba3 */
  if (!zf) goto L_96dba3;
L_96db88: /* 96db88: fld dword ptr [0xcf859c] */
  { double v = F32((uint32_t)(0xcf859cu)); FPUSH(v); }
/* 96db8e: fcomp dword ptr [0xa216c0] */
  fpu_com(ST0, F32((uint32_t)(0xa216c0u)));
  FPOP();
/* 96db94: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 96db96: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 96db99: jnp 0x96dba3 */
  if (!pf) goto L_96dba3;
L_96db9b: /* 96db9b: cmp dword ptr [0xcf85a0], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf85a0u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96dba1: je 0x96dbbf */
  if (zf) goto L_96dbbf;
L_96dba3: /* 96dba3: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96dba5: mov dword ptr [0xcf8590], ecx */
  W32((uint32_t)(0xcf8590u), ecx);
/* 96dbab: jne 0x96dbb7 */
  if (!zf) goto L_96dbb7;
L_96dbad: /* 96dbad: mov dword ptr [0xcf8590], 3 */
  W32((uint32_t)(0xcf8590u), 0x3u);
L_96dbb7: /* 96dbb7: xor ecx, ecx */
  ecx = 0;
/* 96dbb9: mov dword ptr [0xcf8438], ecx */
  W32((uint32_t)(0xcf8438u), ecx);
L_96dbbf: /* 96dbbf: mov dword ptr [0xcf2f50], ecx */
  W32((uint32_t)(0xcf2f50u), ecx);
L_96dbc5: /* 96dbc5: fld dword ptr [0xcf8bb4] */
  { double v = F32((uint32_t)(0xcf8bb4u)); FPUSH(v); }
/* 96dbcb: fcomp dword ptr [0xa216c0] */
  fpu_com(ST0, F32((uint32_t)(0xa216c0u)));
  FPOP();
/* 96dbd1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 96dbd3: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 96dbd6: jp 0x96dbdd */
  if (pf) goto L_96dbdd;
L_96dbd8: /* 96dbd8: call 0x963700 */
  esp -= 4; W32(esp, 0x96dbddu); SPILL(); f_963700(); if (g_unwind) return; RELOAD();
L_96dbdd: /* 96dbdd: call 0x956990 */
  esp -= 4; W32(esp, 0x96dbe2u); SPILL(); f_956990(); if (g_unwind) return; RELOAD();
/* 96dbe2: call 0x96dc20 */
  esp -= 4; W32(esp, 0x96dbe7u); SPILL(); f_96dc20(); if (g_unwind) return; RELOAD();
/* 96dbe7: fld dword ptr [0xcf8bb4] */
  { double v = F32((uint32_t)(0xcf8bb4u)); FPUSH(v); }
/* 96dbed: fcomp dword ptr [0xa216c0] */
  fpu_com(ST0, F32((uint32_t)(0xa216c0u)));
  FPOP();
/* 96dbf3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 96dbf5: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 96dbf8: jp 0x96da42 */
  if (pf) goto L_96da42;
L_96dbfe: /* 96dbfe: cmp dword ptr [0xcf845c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf845cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96dc04: jne 0x96da42 */
  if (!zf) goto L_96da42;
L_96dc0a: /* 96dc0a: mov eax, dword ptr [0xcf8b4c] */
  eax = R32((uint32_t)(0xcf8b4cu));
/* 96dc0f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96dc10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96dc11: call 0x954a80 */
  esp -= 4; W32(esp, 0x96dc16u); SPILL(); f_954a80(); if (g_unwind) return; RELOAD();
/* 96dc16: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96dc19: jmp 0x96da42 */
  goto L_96da42;
}

void f_96dc20(void) {
  LOAD_REGS();
L_96dc20: /* 96dc20: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96dc21: cmp dword ptr [0xcf8438], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96dc28: jl 0x96dc3d */
  if ((sf != of)) goto L_96dc3d;
L_96dc2a: /* 96dc2a: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 96dc2f: push 0xb00d20 */
  { uint32_t v = 0xb00d20u; esp -= 4; W32(esp, v); }
/* 96dc34: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96dc35: call 0x953470 */
  esp -= 4; W32(esp, 0x96dc3au); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96dc3a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96dc3d: /* 96dc3d: mov eax, dword ptr [0xcf8b4c] */
  eax = R32((uint32_t)(0xcf8b4cu));
/* 96dc42: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96dc44: mov dword ptr [esp], eax */
  W32((uint32_t)(esp), eax);
/* 96dc48: je 0x96dc94 */
  if (zf) goto L_96dc94;
L_96dc4a: /* 96dc4a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_96dc50: /* 96dc50: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 96dc53: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96dc55: je 0x96dc94 */
  if (zf) goto L_96dc94;
L_96dc57: /* 96dc57: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 96dc5a: test ch, 6 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x6u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 96dc5d: je 0x96dc89 */
  if (zf) goto L_96dc89;
L_96dc5f: /* 96dc5f: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* 96dc62: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 96dc68: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96dc69: push 0xb00cd0 */
  { uint32_t v = 0xb00cd0u; esp -= 4; W32(esp, v); }
/* 96dc6e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96dc6f: call 0x953470 */
  esp -= 4; W32(esp, 0x96dc74u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96dc74: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 96dc78: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96dc7a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96dc7b: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 96dc7d: call 0x9535b0 */
  esp -= 4; W32(esp, 0x96dc82u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 96dc82: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 96dc86: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96dc89: /* 96dc89: mov eax, dword ptr [eax + 0x1c] */
  eax = R32((uint32_t)(eax + 0x1cu));
/* 96dc8c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96dc8e: mov dword ptr [esp], eax */
  W32((uint32_t)(esp), eax);
/* 96dc92: jne 0x96dc50 */
  if (!zf) goto L_96dc50;
L_96dc94: /* 96dc94: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96dc95: mov esi, dword ptr [0xcf8b74] */
  esi = R32((uint32_t)(0xcf8b74u));
/* 96dc9b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96dc9d: je 0x96dd3b */
  if (zf) goto L_96dd3b;
L_96dca3: /* 96dca3: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96dca6: je 0x96dd3b */
  if (zf) goto L_96dd3b;
L_96dcac: /* 96dcac: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 96dcaf: test eax, 0x10000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96dcb4: je 0x96dcec */
  if (zf) goto L_96dcec;
L_96dcb6: /* 96dcb6: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 96dcbc: and eax, 0xffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 96dcc1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96dcc2: push 0xb00c88 */
  { uint32_t v = 0xb00c88u; esp -= 4; W32(esp, v); }
/* 96dcc7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96dcc8: call 0x953470 */
  esp -= 4; W32(esp, 0x96dccdu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96dccd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96dcce: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96dcd0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96dcd2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96dcd4: push 0xaf4120 */
  { uint32_t v = 0xaf4120u; esp -= 4; W32(esp, v); }
/* 96dcd9: call 0x953700 */
  esp -= 4; W32(esp, 0x96dcdeu); SPILL(); f_953700(); if (g_unwind) return; RELOAD();
/* 96dcde: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96dce0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96dce2: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 96dce4: call 0x9535b0 */
  esp -= 4; W32(esp, 0x96dce9u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 96dce9: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96dcec: /* 96dcec: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 96dcef: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96dcf0: call 0x95f210 */
  esp -= 4; W32(esp, 0x96dcf5u); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 96dcf5: mov ecx, dword ptr [0xcf8588] */
  ecx = R32((uint32_t)(0xcf8588u));
/* 96dcfb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96dcfe: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 96dd00: jle 0x96dd0f */
  if ((zf || sf != of)) goto L_96dd0f;
L_96dd02: /* 96dd02: lea edx, [ecx - 1] */
  edx = (uint32_t)(ecx + 0xffffffffu);
/* 96dd05: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96dd07: je 0x96ddf0 */
  if (zf) goto L_96ddf0;
L_96dd0d: /* 96dd0d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
L_96dd0f: /* 96dd0f: jge 0x96dd1e */
  if ((sf == of)) goto L_96dd1e;
L_96dd11: /* 96dd11: or edx, 0xffffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 96dd14: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 96dd16: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96dd18: je 0x96ddf0 */
  if (zf) goto L_96ddf0;
L_96dd1e: /* 96dd1e: mov ecx, dword ptr [0xcf8584] */
  ecx = R32((uint32_t)(0xcf8584u));
/* 96dd24: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 96dd26: jle 0x96dd31 */
  if ((zf || sf != of)) goto L_96dd31;
L_96dd28: /* 96dd28: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 96dd29: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96dd2b: je 0x96ddf0 */
  if (zf) goto L_96ddf0;
L_96dd31: /* 96dd31: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 96dd33: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96dd35: jne 0x96dca3 */
  if (!zf) goto L_96dca3;
L_96dd3b: /* 96dd3b: mov ecx, dword ptr [0xcf8b4c] */
  ecx = R32((uint32_t)(0xcf8b4cu));
/* 96dd41: lea edx, [esp + 4] */
  edx = (uint32_t)(esp + 0x4u);
/* 96dd45: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96dd46: mov dword ptr [0xcf8b54], ecx */
  W32((uint32_t)(0xcf8b54u), ecx);
/* 96dd4c: call 0x96e510 */
  esp -= 4; W32(esp, 0x96dd51u); SPILL(); f_96e510(); if (g_unwind) return; RELOAD();
/* 96dd51: mov esi, eax */
  esi = eax;
/* 96dd53: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96dd56: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96dd58: je 0x96dd98 */
  if (zf) goto L_96dd98;
L_96dd5a: /* 96dd5a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_96dd60: /* 96dd60: mov eax, dword ptr [0xcf847c] */
  eax = R32((uint32_t)(0xcf847cu));
/* 96dd65: mov edx, dword ptr [0xcf8b88] */
  edx = R32((uint32_t)(0xcf8b88u));
/* 96dd6b: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 96dd6f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96dd70: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96dd71: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 96dd72: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96dd73: mov dword ptr [0xcf8b88], edx */
  W32((uint32_t)(0xcf8b88u), edx);
/* 96dd79: call 0x96d5a0 */
  esp -= 4; W32(esp, 0x96dd7eu); SPILL(); f_96d5a0(); if (g_unwind) return; RELOAD();
/* 96dd7e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96dd81: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96dd83: je 0x96dd98 */
  if (zf) goto L_96dd98;
L_96dd85: /* 96dd85: lea edx, [esp + 4] */
  edx = (uint32_t)(esp + 0x4u);
/* 96dd89: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96dd8a: call 0x96e510 */
  esp -= 4; W32(esp, 0x96dd8fu); SPILL(); f_96e510(); if (g_unwind) return; RELOAD();
/* 96dd8f: mov esi, eax */
  esi = eax;
/* 96dd91: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96dd94: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96dd96: jne 0x96dd60 */
  if (!zf) goto L_96dd60;
L_96dd98: /* 96dd98: mov eax, dword ptr [0xcf8a3c] */
  eax = R32((uint32_t)(0xcf8a3cu));
/* 96dd9d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96dd9f: je 0x96dda6 */
  if (zf) goto L_96dda6;
L_96dda1: /* 96dda1: call 0x957d50 */
  esp -= 4; W32(esp, 0x96dda6u); SPILL(); f_957d50(); if (g_unwind) return; RELOAD();
L_96dda6: /* 96dda6: mov eax, dword ptr [0xcf8b88] */
  eax = R32((uint32_t)(0xcf8b88u));
/* 96ddab: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96ddad: je 0x96ddd0 */
  if (zf) goto L_96ddd0;
L_96ddaf: /* 96ddaf: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96ddb1: jne 0x96ddd0 */
  if (!zf) goto L_96ddd0;
L_96ddb3: /* 96ddb3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96ddb4: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 96ddb9: push 0xb00c38 */
  { uint32_t v = 0xb00c38u; esp -= 4; W32(esp, v); }
/* 96ddbe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96ddbf: call 0x953470 */
  esp -= 4; W32(esp, 0x96ddc4u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96ddc4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96ddc5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96ddc6: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 96ddc8: call 0x9535b0 */
  esp -= 4; W32(esp, 0x96ddcdu); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 96ddcd: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96ddd0: /* 96ddd0: cmp dword ptr [0xcf8438], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96ddd7: jl 0x96dded */
  if ((sf != of)) goto L_96dded;
L_96ddd9: /* 96ddd9: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 96dddf: push 0xb00c04 */
  { uint32_t v = 0xb00c04u; esp -= 4; W32(esp, v); }
/* 96dde4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96dde5: call 0x953470 */
  esp -= 4; W32(esp, 0x96ddeau); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96ddea: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96dded: /* 96dded: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96ddee: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 96ddef: ret  */
  esp += 4; SPILL(); return;
L_96ddf0: /* 96ddf0: cmp dword ptr [0xcf8438], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96ddf7: jl 0x96dded */
  if ((sf != of)) goto L_96dded;
L_96ddf9: /* 96ddf9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96ddfa: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 96ddff: push 0xb00bcc */
  { uint32_t v = 0xb00bccu; esp -= 4; W32(esp, v); }
/* 96de04: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96de05: call 0x953470 */
  esp -= 4; W32(esp, 0x96de0au); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96de0a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96de0d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96de0e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 96de0f: ret  */
  esp += 4; SPILL(); return;
}

void f_96de10(void) {
  LOAD_REGS();
L_96de10: /* 96de10: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96de11: mov ebp, esp */
  ebp = esp;
/* 96de13: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 96de16: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 96de19: mov eax, dword ptr [0xcf8548] */
  eax = R32((uint32_t)(0xcf8548u));
/* 96de1e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96de1f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96de20: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96de21: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 96de24: xor ebx, ebx */
  ebx = 0;
/* 96de26: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96de28: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 96de30: mov dword ptr [0xcf8c50], eax */
  W32((uint32_t)(0xcf8c50u), eax);
/* 96de35: mov dword ptr [0xcf8548], ebx */
  W32((uint32_t)(0xcf8548u), ebx);
/* 96de3b: jne 0x96ded9 */
  if (!zf) goto L_96ded9;
L_96de41: /* 96de41: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 96de45: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96de46: call dword ptr [0xcfb0b8] */
  esp -= 4; W32(esp, 0x96de4cu); SPILL(); f_43166a(); if (g_unwind) return; /* MSVCR70!time */ RELOAD();
/* 96de4c: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* 96de50: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96de51: call dword ptr [0xcfb0d0] */
  esp -= 4; W32(esp, 0x96de57u); SPILL(); f_403745(); if (g_unwind) return; /* MSVCR70!localtime */ RELOAD();
/* 96de57: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96de5a: mov esi, eax */
  esi = eax;
/* 96de5c: call 0x94f6c0 */
  esp -= 4; W32(esp, 0x96de61u); SPILL(); f_94f6c0(); if (g_unwind) return; RELOAD();
/* 96de61: mov edx, dword ptr [0xcf8b9c] */
  edx = R32((uint32_t)(0xcf8b9cu));
/* 96de67: mov ecx, dword ptr [0xcf8b84] */
  ecx = R32((uint32_t)(0xcf8b84u));
/* 96de6d: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 96de6f: mov edx, dword ptr [0xcf8b80] */
  edx = R32((uint32_t)(0xcf8b80u));
/* 96de75: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 96de79: mov eax, dword ptr [0xcf8bac] */
  eax = R32((uint32_t)(0xcf8bacu));
/* 96de7e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96de7f: mov eax, dword ptr [0xcf7850] */
  eax = R32((uint32_t)(0xcf7850u));
/* 96de84: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96de85: mov ecx, dword ptr [0xcf7854] */
  ecx = R32((uint32_t)(0xcf7854u));
/* 96de8b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96de8c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 96de8e: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 96de90: mov ecx, dword ptr [0xcf8b90] */
  ecx = R32((uint32_t)(0xcf8b90u));
/* 96de96: mov dword ptr [esp + 0x30], ebx */
  W32((uint32_t)(esp + 0x30u), ebx);
/* 96de9a: mov ebx, dword ptr [0xcf7a80] */
  ebx = R32((uint32_t)(0xcf7a80u));
/* 96dea0: fild qword ptr [esp + 0x2c] */
  { double v = (double)(int64_t)R64((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 96dea4: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 96dea6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96dea7: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 96deaa: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 96deab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96deac: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 96deaf: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 96deb2: fmul dword ptr [0x9f7c0c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c0cu)));
/* 96deb8: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 96debb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96debc: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 96dec2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96dec3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96dec4: push 0xb00e90 */
  { uint32_t v = 0xb00e90u; esp -= 4; W32(esp, v); }
/* 96dec9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96deca: call 0x953470 */
  esp -= 4; W32(esp, 0x96decfu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96decf: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96ded2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96ded3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96ded4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96ded5: mov esp, ebp */
  esp = ebp;
/* 96ded7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 96ded8: ret  */
  esp += 4; SPILL(); return;
L_96ded9: /* 96ded9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96deda: call 0x95f210 */
  esp -= 4; W32(esp, 0x96dedfu); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 96dedf: mov ecx, dword ptr [0xcf8598] */
  ecx = R32((uint32_t)(0xcf8598u));
/* 96dee5: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96dee8: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96deea: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 96deee: jne 0x96deff */
  if (!zf) goto L_96deff;
L_96def0: /* 96def0: mov eax, dword ptr [0xcf8590] */
  eax = R32((uint32_t)(0xcf8590u));
/* 96def5: mov dword ptr [0xcf8438], eax */
  W32((uint32_t)(0xcf8438u), eax);
/* 96defa: mov dword ptr [0xcf2f50], eax */
  W32((uint32_t)(0xcf2f50u), eax);
L_96deff: /* 96deff: mov ecx, dword ptr [0xcf855c] */
  ecx = R32((uint32_t)(0xcf855cu));
/* 96df05: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96df07: je 0x96e00a */
  if (zf) goto L_96e00a;
L_96df0d: /* 96df0d: mov eax, dword ptr [0xcf8b90] */
  eax = R32((uint32_t)(0xcf8b90u));
/* 96df12: mov edx, dword ptr [0xcf8c48] */
  edx = R32((uint32_t)(0xcf8c48u));
/* 96df18: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 96df19: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 96df1b: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 96df1d: jbe 0x96e00a */
  if ((cf | zf)) goto L_96e00a;
L_96df23: /* 96df23: mov dword ptr [0xcf8c48], eax */
  W32((uint32_t)(0xcf8c48u), eax);
/* 96df28: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 96df2c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96df2d: call dword ptr [0xcfb0b8] */
  esp -= 4; W32(esp, 0x96df33u); SPILL(); f_43166a(); if (g_unwind) return; /* MSVCR70!time */ RELOAD();
/* 96df33: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 96df37: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96df38: call dword ptr [0xcfb0d0] */
  esp -= 4; W32(esp, 0x96df3eu); SPILL(); f_403745(); if (g_unwind) return; /* MSVCR70!localtime */ RELOAD();
/* 96df3e: mov edi, eax */
  edi = eax;
/* 96df40: call 0x94f6c0 */
  esp -= 4; W32(esp, 0x96df45u); SPILL(); f_94f6c0(); if (g_unwind) return; RELOAD();
/* 96df45: mov ecx, dword ptr [0xcf8b9c] */
  ecx = R32((uint32_t)(0xcf8b9cu));
/* 96df4b: mov esi, dword ptr [0xcf7850] */
  esi = R32((uint32_t)(0xcf7850u));
/* 96df51: mov edx, dword ptr [0xcf788c] */
  edx = R32((uint32_t)(0xcf788cu));
/* 96df57: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 96df59: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 96df5d: mov eax, dword ptr [0xcf7854] */
  eax = R32((uint32_t)(0xcf7854u));
/* 96df62: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* 96df66: mov ebx, dword ptr [0xcf7a80] */
  ebx = R32((uint32_t)(0xcf7a80u));
/* 96df6c: fild qword ptr [esp + 0x20] */
  { double v = (double)(int64_t)R64((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 96df70: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 96df72: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 96df75: add esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 96df77: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 96df7a: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 96df7b: mov dword ptr [0xcf788c], edx */
  W32((uint32_t)(0xcf788cu), edx);
/* 96df81: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* 96df85: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96df86: fmul dword ptr [0x9f7c0c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c0cu)));
/* 96df8c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96df8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96df8e: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 96df92: call 0x96fa90 */
  esp -= 4; W32(esp, 0x96df97u); SPILL(); f_96fa90(); if (g_unwind) return; RELOAD();
/* 96df97: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96df9a: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96df9c: je 0x96dfa3 */
  if (zf) goto L_96dfa3;
L_96df9e: /* 96df9e: mov ebx, dword ptr [ebx + 0x38] */
  ebx = R32((uint32_t)(ebx + 0x38u));
/* 96dfa1: jmp 0x96dfa6 */
  goto L_96dfa6;
L_96dfa3: /* 96dfa3: or ebx, 0xffffffff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
L_96dfa6: /* 96dfa6: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 96dfaa: mov ecx, dword ptr [0xcf8b98] */
  ecx = R32((uint32_t)(0xcf8b98u));
/* 96dfb0: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 96dfb4: mov eax, dword ptr [0xcf8b88] */
  eax = R32((uint32_t)(0xcf8b88u));
/* 96dfb9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96dfba: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 96dfbd: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 96dfc0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96dfc1: mov ecx, dword ptr [0xcf8b84] */
  ecx = R32((uint32_t)(0xcf8b84u));
/* 96dfc7: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 96dfcb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96dfcc: mov edx, dword ptr [0xcf8b80] */
  edx = R32((uint32_t)(0xcf8b80u));
/* 96dfd2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 96dfd3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96dfd4: mov eax, dword ptr [0xcf8b90] */
  eax = R32((uint32_t)(0xcf8b90u));
/* 96dfd9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96dfda: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 96dfdc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96dfdd: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 96dfe0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96dfe1: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 96dfe2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96dfe3: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 96dfe6: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 96dfe9: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 96dfec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96dfed: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 96dff3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96dff4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96dff5: push 0xb00db8 */
  { uint32_t v = 0xb00db8u; esp -= 4; W32(esp, v); }
/* 96dffa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96dffb: call 0x953470 */
  esp -= 4; W32(esp, 0x96e000u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96e000: add esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96e003: xor ebx, ebx */
  ebx = 0;
/* 96e005: jmp 0x96e0a1 */
  goto L_96e0a1;
L_96e00a: /* 96e00a: cmp dword ptr [0xcf8438], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96e011: jl 0x96e0a1 */
  if ((sf != of)) goto L_96e0a1;
L_96e017: /* 96e017: call 0x94f6c0 */
  esp -= 4; W32(esp, 0x96e01cu); SPILL(); f_94f6c0(); if (g_unwind) return; RELOAD();
/* 96e01c: mov edx, dword ptr [0xcf8b9c] */
  edx = R32((uint32_t)(0xcf8b9cu));
/* 96e022: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 96e025: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 96e027: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 96e02b: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 96e02f: fild qword ptr [esp + 0x18] */
  { double v = (double)(int64_t)R64((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 96e033: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 96e037: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96e038: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96e039: fmul dword ptr [0x9f7c0c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c0cu)));
/* 96e03f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96e040: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 96e044: call 0x96fa90 */
  esp -= 4; W32(esp, 0x96e049u); SPILL(); f_96fa90(); if (g_unwind) return; RELOAD();
/* 96e049: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96e04c: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96e04e: je 0x96e055 */
  if (zf) goto L_96e055;
L_96e050: /* 96e050: mov esi, dword ptr [esi + 0x38] */
  esi = R32((uint32_t)(esi + 0x38u));
/* 96e053: jmp 0x96e058 */
  goto L_96e058;
L_96e055: /* 96e055: or esi, 0xffffffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
L_96e058: /* 96e058: mov eax, dword ptr [0xcf8bac] */
  eax = R32((uint32_t)(0xcf8bacu));
/* 96e05d: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 96e061: mov ecx, dword ptr [0xcf8b88] */
  ecx = R32((uint32_t)(0xcf8b88u));
/* 96e067: mov edx, dword ptr [0xcf8b80] */
  edx = R32((uint32_t)(0xcf8b80u));
/* 96e06d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96e06e: mov eax, dword ptr [0xcf8b98] */
  eax = R32((uint32_t)(0xcf8b98u));
/* 96e073: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 96e076: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 96e079: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 96e07a: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 96e07e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96e07f: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 96e083: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96e084: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 96e087: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 96e08a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96e08b: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 96e091: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96e092: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96e093: push 0xb00d40 */
  { uint32_t v = 0xb00d40u; esp -= 4; W32(esp, v); }
/* 96e098: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96e099: call 0x953470 */
  esp -= 4; W32(esp, 0x96e09eu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96e09e: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96e0a1: /* 96e0a1: mov eax, dword ptr [0xcf8bf8] */
  eax = R32((uint32_t)(0xcf8bf8u));
/* 96e0a6: mov edx, 0x7fffffff */
  edx = 0x7fffffffu;
/* 96e0ab: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 96e0ad: jbe 0x96e0d6 */
  if ((cf | zf)) goto L_96e0d6;
L_96e0af: /* 96e0af: mov eax, dword ptr [0xcf8b4c] */
  eax = R32((uint32_t)(0xcf8b4cu));
/* 96e0b4: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96e0b6: mov dword ptr [0xcf8bf8], ebx */
  W32((uint32_t)(0xcf8bf8u), ebx);
/* 96e0bc: je 0x96e0d6 */
  if (zf) goto L_96e0d6;
L_96e0be: /* 96e0be: mov edi, edi */
  edi = edi;
L_96e0c0: /* 96e0c0: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 96e0c3: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96e0c5: je 0x96e0d6 */
  if (zf) goto L_96e0d6;
L_96e0c7: /* 96e0c7: mov esi, dword ptr [0xcf8bf8] */
  esi = R32((uint32_t)(0xcf8bf8u));
/* 96e0cd: mov dword ptr [eax + 0x34], esi */
  W32((uint32_t)(eax + 0x34u), esi);
/* 96e0d0: mov eax, ecx */
  eax = ecx;
/* 96e0d2: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96e0d4: jne 0x96e0c0 */
  if (!zf) goto L_96e0c0;
L_96e0d6: /* 96e0d6: cmp dword ptr [0xcf8bfc], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8bfcu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 96e0dc: jbe 0x96e105 */
  if ((cf | zf)) goto L_96e105;
L_96e0de: /* 96e0de: mov eax, dword ptr [0xcf8b74] */
  eax = R32((uint32_t)(0xcf8b74u));
/* 96e0e3: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96e0e5: mov dword ptr [0xcf8bfc], ebx */
  W32((uint32_t)(0xcf8bfcu), ebx);
/* 96e0eb: je 0x96e105 */
  if (zf) goto L_96e105;
L_96e0ed: /* 96e0ed: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_96e0f0: /* 96e0f0: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 96e0f2: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96e0f4: je 0x96e105 */
  if (zf) goto L_96e105;
L_96e0f6: /* 96e0f6: mov edx, dword ptr [0xcf8bfc] */
  edx = R32((uint32_t)(0xcf8bfcu));
/* 96e0fc: mov dword ptr [eax + 0x10], edx */
  W32((uint32_t)(eax + 0x10u), edx);
/* 96e0ff: mov eax, ecx */
  eax = ecx;
/* 96e101: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96e103: jne 0x96e0f0 */
  if (!zf) goto L_96e0f0;
L_96e105: /* 96e105: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 96e109: mov ecx, dword ptr [0xcf8c50] */
  ecx = R32((uint32_t)(0xcf8c50u));
/* 96e10f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96e110: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96e111: mov dword ptr [0xcf8bac], eax */
  W32((uint32_t)(0xcf8bacu), eax);
/* 96e116: mov dword ptr [0xcf8548], ecx */
  W32((uint32_t)(0xcf8548u), ecx);
/* 96e11c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96e11d: mov esp, ebp */
  esp = ebp;
/* 96e11f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 96e120: ret  */
  esp += 4; SPILL(); return;
}

void f_96e130(void) {
  LOAD_REGS();
L_96e130: /* 96e130: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 96e134: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 96e138: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96e13a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96e13c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96e13d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96e13e: push 0xaf4120 */
  { uint32_t v = 0xaf4120u; esp -= 4; W32(esp, v); }
/* 96e143: call 0x953700 */
  esp -= 4; W32(esp, 0x96e148u); SPILL(); f_953700(); if (g_unwind) return; RELOAD();
/* 96e148: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96e14b: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 96e153: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* 96e15b: jmp 0x9535b0 */
  SPILL(); f_9535b0(); return;
}

void f_96e160(void) {
  LOAD_REGS();
L_96e160: /* 96e160: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96e161: mov ebp, esp */
  ebp = esp;
/* 96e163: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 96e166: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 96e169: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 96e16e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96e16f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96e170: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 96e173: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96e174: xor edi, edi */
  edi = 0;
/* 96e176: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96e179: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 96e17d: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 96e181: jl 0x96e1a8 */
  if ((sf != of)) goto L_96e1a8;
L_96e183: /* 96e183: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 96e186: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 96e189: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96e18a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96e18b: call 0x95f210 */
  esp -= 4; W32(esp, 0x96e190u); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 96e190: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 96e196: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96e199: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96e19a: push 0xb01068 */
  { uint32_t v = 0xb01068u; esp -= 4; W32(esp, v); }
/* 96e19f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96e1a0: call 0x953470 */
  esp -= 4; W32(esp, 0x96e1a5u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96e1a5: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96e1a8: /* 96e1a8: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 96e1ab: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 96e1ae: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 96e1b0: mov dword ptr [ebx], edi */
  W32((uint32_t)(ebx), edi);
/* 96e1b2: mov edx, dword ptr [0xcf7a94] */
  edx = R32((uint32_t)(0xcf7a94u));
/* 96e1b8: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 96e1b9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96e1ba: mov dword ptr [0xcf7a94], edx */
  W32((uint32_t)(0xcf7a94u), edx);
/* 96e1c0: call 0x95f280 */
  esp -= 4; W32(esp, 0x96e1c5u); SPILL(); f_95f280(); if (g_unwind) return; RELOAD();
/* 96e1c5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96e1c6: call 0x95dbf0 */
  esp -= 4; W32(esp, 0x96e1cbu); SPILL(); f_95dbf0(); if (g_unwind) return; RELOAD();
/* 96e1cb: mov dword ptr [0xcf8b60], 1 */
  W32((uint32_t)(0xcf8b60u), 0x1u);
/* 96e1d5: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 96e1d8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96e1db: test eax, 0x40000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96e1e0: je 0x96e1e4 */
  if (zf) goto L_96e1e4;
L_96e1e2: /* 96e1e2: inc dword ptr [ebx] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebx), r);
  }
L_96e1e4: /* 96e1e4: mov dword ptr [0xcf8b5c], esi */
  W32((uint32_t)(0xcf8b5cu), esi);
/* 96e1ea: or dword ptr [esi + 0x3c], 0x400 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x3cu), r);
  }
/* 96e1f1: mov dword ptr [esi + 0x10], edi */
  W32((uint32_t)(esi + 0x10u), edi);
/* 96e1f4: cmp dword ptr [0xcf8438], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96e1fb: jl 0x96e20e */
  if ((sf != of)) goto L_96e20e;
L_96e1fd: /* 96e1fd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96e1fe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96e1ff: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96e200: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96e201: push 0xb01060 */
  { uint32_t v = 0xb01060u; esp -= 4; W32(esp, v); }
/* 96e206: call 0x953700 */
  esp -= 4; W32(esp, 0x96e20bu); SPILL(); f_953700(); if (g_unwind) return; RELOAD();
/* 96e20b: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96e20e: /* 96e20e: mov edx, dword ptr [0xcf8bf8] */
  edx = R32((uint32_t)(0xcf8bf8u));
/* 96e214: mov eax, dword ptr [0xcf8b5c] */
  eax = R32((uint32_t)(0xcf8b5cu));
/* 96e219: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 96e21a: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96e21c: mov dword ptr [0xcf8bf8], edx */
  W32((uint32_t)(0xcf8bf8u), edx);
/* 96e222: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 96e226: je 0x96e476 */
  if (zf) goto L_96e476;
L_96e22c: /* 96e22c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_96e230: /* 96e230: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 96e234: mov eax, dword ptr [ecx + 0x3c] */
  eax = R32((uint32_t)(ecx + 0x3cu));
/* 96e237: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 96e23a: je 0x96e46d */
  if (zf) goto L_96e46d;
L_96e240: /* 96e240: mov eax, dword ptr [ecx + 0x28] */
  eax = R32((uint32_t)(ecx + 0x28u));
/* 96e243: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96e245: mov edx, dword ptr [0xcf8bf8] */
  edx = R32((uint32_t)(0xcf8bf8u));
/* 96e24b: mov dword ptr [ecx + 0x34], edx */
  W32((uint32_t)(ecx + 0x34u), edx);
/* 96e24e: je 0x96e45e */
  if (zf) goto L_96e45e;
L_96e254: /* 96e254: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 96e257: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96e259: lea ebx, [eax + 4] */
  ebx = (uint32_t)(eax + 0x4u);
/* 96e25c: je 0x96e45e */
  if (zf) goto L_96e45e;
L_96e262: /* 96e262: mov eax, dword ptr [0xcf8bf8] */
  eax = R32((uint32_t)(0xcf8bf8u));
/* 96e267: mov ecx, dword ptr [esi + 0x34] */
  ecx = R32((uint32_t)(esi + 0x34u));
/* 96e26a: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 96e26d: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96e26f: je 0x96e450 */
  if (zf) goto L_96e450;
L_96e275: /* 96e275: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 96e278: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* 96e27b: mov edx, dword ptr [0xcf79e8] */
  edx = R32((uint32_t)(0xcf79e8u));
/* 96e281: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 96e285: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96e286: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 96e287: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96e288: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96e289: mov dword ptr [0xcf79e8], edx */
  W32((uint32_t)(0xcf79e8u), edx);
/* 96e28f: call 0x96fa90 */
  esp -= 4; W32(esp, 0x96e294u); SPILL(); f_96fa90(); if (g_unwind) return; RELOAD();
/* 96e294: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 96e298: fcomp dword ptr [0xcf846c] */
  fpu_com(ST0, F32((uint32_t)(0xcf846cu)));
  FPOP();
/* 96e29e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96e2a1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 96e2a3: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 96e2a6: jne 0x96e304 */
  if (!zf) goto L_96e304;
L_96e2a8: /* 96e2a8: mov ecx, dword ptr [0xcf7a94] */
  ecx = R32((uint32_t)(0xcf7a94u));
/* 96e2ae: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 96e2af: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96e2b0: mov dword ptr [0xcf7a94], ecx */
  W32((uint32_t)(0xcf7a94u), ecx);
/* 96e2b6: call 0x95f280 */
  esp -= 4; W32(esp, 0x96e2bbu); SPILL(); f_95f280(); if (g_unwind) return; RELOAD();
/* 96e2bb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96e2bc: call 0x95dbf0 */
  esp -= 4; W32(esp, 0x96e2c1u); SPILL(); f_95dbf0(); if (g_unwind) return; RELOAD();
/* 96e2c1: or dword ptr [esi + 0x3c], 0x400 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x3cu), r);
  }
/* 96e2c8: mov dword ptr [esi + 0x10], edi */
  W32((uint32_t)(esi + 0x10u), edi);
/* 96e2cb: mov ecx, dword ptr [0xcf8b60] */
  ecx = R32((uint32_t)(0xcf8b60u));
/* 96e2d1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96e2d4: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 96e2d5: mov dword ptr [0xcf8b60], ecx */
  W32((uint32_t)(0xcf8b60u), ecx);
/* 96e2db: test dword ptr [esi + 0x3c], 0x40000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96e2e2: je 0x96e2e9 */
  if (zf) goto L_96e2e9;
L_96e2e4: /* 96e2e4: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 96e2e7: inc dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax), r);
  }
L_96e2e9: /* 96e2e9: cmp dword ptr [0xcf8438], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96e2f0: jl 0x96e450 */
  if ((sf != of)) goto L_96e450;
L_96e2f6: /* 96e2f6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96e2f7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96e2f8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96e2f9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96e2fa: push 0xb01060 */
  { uint32_t v = 0xb01060u; esp -= 4; W32(esp, v); }
/* 96e2ff: jmp 0x96e448 */
  goto L_96e448;
L_96e304: /* 96e304: fld dword ptr [0xcf8450] */
  { double v = F32((uint32_t)(0xcf8450u)); FPUSH(v); }
/* 96e30a: fchs  */
  ST0 = -ST0;
/* 96e30c: fcomp dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
  FPOP();
/* 96e310: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 96e312: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 96e315: jp 0x96e40a */
  if (pf) goto L_96e40a;
L_96e31b: /* 96e31b: or dword ptr [esi + 0x3c], 0x800000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x3cu), r);
  }
/* 96e322: mov ecx, dword ptr [0xcf7838] */
  ecx = R32((uint32_t)(0xcf7838u));
/* 96e328: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 96e329: push 0xb0104c */
  { uint32_t v = 0xb0104cu; esp -= 4; W32(esp, v); }
/* 96e32e: mov dword ptr [0xcf7838], ecx */
  W32((uint32_t)(0xcf7838u), ecx);
/* 96e334: call 0x96f160 */
  esp -= 4; W32(esp, 0x96e339u); SPILL(); f_96f160(); if (g_unwind) return; RELOAD();
/* 96e339: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 96e33d: mov eax, dword ptr [0xcf845c] */
  eax = R32((uint32_t)(0xcf845cu));
/* 96e342: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96e345: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 96e346: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96e348: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 96e34c: je 0x96e3c6 */
  if (zf) goto L_96e3c6;
L_96e34e: /* 96e34e: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 96e352: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 96e358: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 96e35a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 96e35d: jne 0x96e3ab */
  if (!zf) goto L_96e3ab;
L_96e35f: /* 96e35f: fld dword ptr [0xcf8bbc] */
  { double v = F32((uint32_t)(0xcf8bbcu)); FPUSH(v); }
/* 96e365: fcomp dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
  FPOP();
/* 96e369: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 96e36b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 96e36e: jp 0x96e37a */
  if (pf) goto L_96e37a;
L_96e370: /* 96e370: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 96e374: mov dword ptr [0xcf8bbc], edx */
  W32((uint32_t)(0xcf8bbcu), edx);
L_96e37a: /* 96e37a: fld dword ptr [0xcf8bc0] */
  { double v = F32((uint32_t)(0xcf8bc0u)); FPUSH(v); }
/* 96e380: fcomp dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
  FPOP();
/* 96e384: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 96e386: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 96e389: jp 0x96e394 */
  if (pf) goto L_96e394;
L_96e38b: /* 96e38b: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 96e38f: mov dword ptr [0xcf8bc0], eax */
  W32((uint32_t)(0xcf8bc0u), eax);
L_96e394: /* 96e394: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 96e397: fcomp dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
  FPOP();
/* 96e39b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 96e39d: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 96e3a0: jp 0x96e3c6 */
  if (pf) goto L_96e3c6;
L_96e3a2: /* 96e3a2: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 96e3a6: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 96e3a9: jmp 0x96e3c6 */
  goto L_96e3c6;
L_96e3ab: /* 96e3ab: fld dword ptr [0xcf8bc4] */
  { double v = F32((uint32_t)(0xcf8bc4u)); FPUSH(v); }
/* 96e3b1: fcomp dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
  FPOP();
/* 96e3b5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 96e3b7: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 96e3ba: jne 0x96e3c6 */
  if (!zf) goto L_96e3c6;
L_96e3bc: /* 96e3bc: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 96e3c0: mov dword ptr [0xcf8bc4], edx */
  W32((uint32_t)(0xcf8bc4u), edx);
L_96e3c6: /* 96e3c6: cmp dword ptr [0xcf8438], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96e3cd: jl 0x96e411 */
  if ((sf != of)) goto L_96e411;
L_96e3cf: /* 96e3cf: fld dword ptr [0xcf846c] */
  { double v = F32((uint32_t)(0xcf846cu)); FPUSH(v); }
/* 96e3d5: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 96e3d8: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 96e3db: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 96e3de: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 96e3e2: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 96e3e6: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 96e3e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96e3ea: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96e3eb: call 0x95f210 */
  esp -= 4; W32(esp, 0x96e3f0u); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 96e3f0: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 96e3f6: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96e3f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96e3fa: push 0xb00ff0 */
  { uint32_t v = 0xb00ff0u; esp -= 4; W32(esp, v); }
/* 96e3ff: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96e400: call 0x953470 */
  esp -= 4; W32(esp, 0x96e405u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96e405: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96e408: jmp 0x96e411 */
  goto L_96e411;
L_96e40a: /* 96e40a: and dword ptr [esi + 0x3c], 0xff7fffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(0xff7fffffu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x3cu), r);
  }
L_96e411: /* 96e411: mov edx, dword ptr [0xcf7a7c] */
  edx = R32((uint32_t)(0xcf7a7cu));
/* 96e417: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 96e41b: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 96e41c: mov dword ptr [0xcf7a7c], edx */
  W32((uint32_t)(0xcf7a7cu), edx);
/* 96e422: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 96e425: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 96e426: test eax, 0x40000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96e42b: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 96e42f: je 0x96e436 */
  if (zf) goto L_96e436;
L_96e431: /* 96e431: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 96e434: inc dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax), r);
  }
L_96e436: /* 96e436: cmp dword ptr [0xcf8438], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96e43d: jl 0x96e450 */
  if ((sf != of)) goto L_96e450;
L_96e43f: /* 96e43f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96e440: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96e441: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96e442: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96e443: push 0xb00fe8 */
  { uint32_t v = 0xb00fe8u; esp -= 4; W32(esp, v); }
L_96e448: /* 96e448: call 0x953700 */
  esp -= 4; W32(esp, 0x96e44du); SPILL(); f_953700(); if (g_unwind) return; RELOAD();
/* 96e44d: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96e450: /* 96e450: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* 96e452: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96e454: jne 0x96e262 */
  if (!zf) goto L_96e262;
L_96e45a: /* 96e45a: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
L_96e45e: /* 96e45e: mov eax, dword ptr [ecx + 0x1c] */
  eax = R32((uint32_t)(ecx + 0x1cu));
/* 96e461: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96e463: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 96e467: jne 0x96e230 */
  if (!zf) goto L_96e230;
L_96e46d: /* 96e46d: cmp dword ptr [esp + 0x14], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96e471: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 96e474: jne 0x96e4b6 */
  if (!zf) goto L_96e4b6;
L_96e476: /* 96e476: push 0xb00fd8 */
  { uint32_t v = 0xb00fd8u; esp -= 4; W32(esp, v); }
/* 96e47b: call 0x96f160 */
  esp -= 4; W32(esp, 0x96e480u); SPILL(); f_96f160(); if (g_unwind) return; RELOAD();
/* 96e480: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 96e483: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96e484: call 0x95f210 */
  esp -= 4; W32(esp, 0x96e489u); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 96e489: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 96e48f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96e490: push 0xb00f80 */
  { uint32_t v = 0xb00f80u; esp -= 4; W32(esp, v); }
/* 96e495: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96e496: call 0x953470 */
  esp -= 4; W32(esp, 0x96e49bu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96e49b: mov edx, dword ptr [0xcf8b4c] */
  edx = R32((uint32_t)(0xcf8b4cu));
/* 96e4a1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 96e4a3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96e4a4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96e4a5: call 0x953810 */
  esp -= 4; W32(esp, 0x96e4aau); SPILL(); f_953810(); if (g_unwind) return; RELOAD();
/* 96e4aa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96e4ab: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96e4ac: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 96e4ae: call 0x9535b0 */
  esp -= 4; W32(esp, 0x96e4b3u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 96e4b3: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96e4b6: /* 96e4b6: cmp dword ptr [0xcf8438], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96e4bd: jl 0x96e4ec */
  if ((sf != of)) goto L_96e4ec;
L_96e4bf: /* 96e4bf: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 96e4c3: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 96e4c5: mov edx, dword ptr [0xcf8b60] */
  edx = R32((uint32_t)(0xcf8b60u));
/* 96e4cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96e4cc: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 96e4cf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96e4d0: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 96e4d2: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 96e4d7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96e4d8: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 96e4dc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96e4dd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96e4de: push 0xb00f30 */
  { uint32_t v = 0xb00f30u; esp -= 4; W32(esp, v); }
/* 96e4e3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96e4e4: call 0x953470 */
  esp -= 4; W32(esp, 0x96e4e9u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96e4e9: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96e4ec: /* 96e4ec: cmp dword ptr [0xcf8438], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96e4f3: jl 0x96e503 */
  if ((sf != of)) goto L_96e503;
L_96e4f5: /* 96e4f5: cmp dword ptr [0xcf8b80], 0x32 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8b80u))); uint32_t b = (uint32_t)(0x32u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96e4fc: jge 0x96e503 */
  if ((sf == of)) goto L_96e503;
L_96e4fe: /* 96e4fe: call 0x958240 */
  esp -= 4; W32(esp, 0x96e503u); SPILL(); f_958240(); if (g_unwind) return; RELOAD();
L_96e503: /* 96e503: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96e504: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96e505: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96e506: mov esp, ebp */
  esp = ebp;
/* 96e508: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 96e509: ret  */
  esp += 4; SPILL(); return;
}

void f_96e510(void) {
  LOAD_REGS();
L_96e510: /* 96e510: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96e511: mov ebp, esp */
  ebp = esp;
/* 96e513: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 96e516: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 96e519: mov eax, dword ptr [0xcf8b50] */
  eax = R32((uint32_t)(0xcf8b50u));
/* 96e51e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96e51f: mov esi, dword ptr [0xcf8b54] */
  esi = R32((uint32_t)(0xcf8b54u));
/* 96e525: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96e527: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96e528: je 0x96e721 */
  if (zf) goto L_96e721;
L_96e52e: /* 96e52e: mov edi, edi */
  edi = edi;
L_96e530: /* 96e530: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 96e533: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96e535: lea edi, [esi + 0x2c] */
  edi = (uint32_t)(esi + 0x2cu);
/* 96e538: jne 0x96e547 */
  if (!zf) goto L_96e547;
L_96e53a: /* 96e53a: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 96e53d: mov dword ptr [0xcf8b54], eax */
  W32((uint32_t)(0xcf8b54u), eax);
/* 96e542: jmp 0x96e607 */
  goto L_96e607;
L_96e547: /* 96e547: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 96e549: mov eax, dword ptr [eax + ecx*4 + 4] */
  eax = R32((uint32_t)(eax + ecx*4 + 0x4u));
/* 96e54d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96e54f: je 0x96e554 */
  if (zf) goto L_96e554;
L_96e551: /* 96e551: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 96e552: jmp 0x96e556 */
  goto L_96e556;
L_96e554: /* 96e554: mov eax, ecx */
  eax = ecx;
L_96e556: /* 96e556: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96e558: jne 0x96e571 */
  if (!zf) goto L_96e571;
L_96e55a: /* 96e55a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96e55b: call 0x94ee00 */
  esp -= 4; W32(esp, 0x96e560u); SPILL(); f_94ee00(); if (g_unwind) return; RELOAD();
/* 96e560: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 96e563: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96e566: mov dword ptr [0xcf8b54], ecx */
  W32((uint32_t)(0xcf8b54u), ecx);
/* 96e56c: jmp 0x96e607 */
  goto L_96e607;
L_96e571: /* 96e571: mov eax, dword ptr [0xcf8a3c] */
  eax = R32((uint32_t)(0xcf8a3cu));
/* 96e576: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96e578: je 0x96e5b0 */
  if (zf) goto L_96e5b0;
L_96e57a: /* 96e57a: test dword ptr [esi + 0x3c], 0x20000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96e581: je 0x96e58c */
  if (zf) goto L_96e58c;
L_96e583: /* 96e583: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96e584: call 0x956890 */
  esp -= 4; W32(esp, 0x96e589u); SPILL(); f_956890(); if (g_unwind) return; RELOAD();
/* 96e589: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96e58c: /* 96e58c: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 96e58e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96e58f: call 0x94eff0 */
  esp -= 4; W32(esp, 0x96e594u); SPILL(); f_94eff0(); if (g_unwind) return; RELOAD();
/* 96e594: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 96e596: fcomp dword ptr [0xcf83ec] */
  fpu_com(ST0, F32((uint32_t)(0xcf83ecu)));
  FPOP();
/* 96e59c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96e59f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 96e5a1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 96e5a4: jp 0x96e5b0 */
  if (pf) goto L_96e5b0;
L_96e5a6: /* 96e5a6: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 96e5a9: mov dword ptr [0xcf8b54], eax */
  W32((uint32_t)(0xcf8b54u), eax);
/* 96e5ae: jmp 0x96e607 */
  goto L_96e607;
L_96e5b0: /* 96e5b0: mov eax, dword ptr [0xcf8558] */
  eax = R32((uint32_t)(0xcf8558u));
/* 96e5b5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96e5b7: jne 0x96e621 */
  if (!zf) goto L_96e621;
L_96e5b9: /* 96e5b9: mov eax, dword ptr [0xcf85ac] */
  eax = R32((uint32_t)(0xcf85acu));
/* 96e5be: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96e5c0: je 0x96e6d3 */
  if (zf) goto L_96e6d3;
L_96e5c6: /* 96e5c6: mov eax, dword ptr [0xcf8b50] */
  eax = R32((uint32_t)(0xcf8b50u));
/* 96e5cb: mov esi, dword ptr [eax + 0x18] */
  esi = R32((uint32_t)(eax + 0x18u));
/* 96e5ce: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 96e5d1: lea edi, [esi + 0x2c] */
  edi = (uint32_t)(esi + 0x2cu);
/* 96e5d4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96e5d5: call 0x94eaa0 */
  esp -= 4; W32(esp, 0x96e5dau); SPILL(); f_94eaa0(); if (g_unwind) return; RELOAD();
/* 96e5da: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96e5dd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96e5df: jne 0x96e716 */
  if (!zf) goto L_96e716;
L_96e5e5: /* 96e5e5: cmp dword ptr [edi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96e5e8: je 0x96e5f3 */
  if (zf) goto L_96e5f3;
L_96e5ea: /* 96e5ea: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96e5eb: call 0x94ee00 */
  esp -= 4; W32(esp, 0x96e5f0u); SPILL(); f_94ee00(); if (g_unwind) return; RELOAD();
/* 96e5f0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96e5f3: /* 96e5f3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96e5f4: call 0x95f280 */
  esp -= 4; W32(esp, 0x96e5f9u); SPILL(); f_95f280(); if (g_unwind) return; RELOAD();
/* 96e5f9: push 0xcf8b4c */
  { uint32_t v = 0xcf8b4cu; esp -= 4; W32(esp, v); }
/* 96e5fe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96e5ff: call 0x958040 */
  esp -= 4; W32(esp, 0x96e604u); SPILL(); f_958040(); if (g_unwind) return; RELOAD();
/* 96e604: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96e607: /* 96e607: mov esi, dword ptr [0xcf8b54] */
  esi = R32((uint32_t)(0xcf8b54u));
/* 96e60d: cmp esi, dword ptr [0xcf8b50] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0xcf8b50u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96e613: jne 0x96e530 */
  if (!zf) goto L_96e530;
L_96e619: /* 96e619: xor eax, eax */
  eax = 0;
/* 96e61b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96e61c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96e61d: mov esp, ebp */
  esp = ebp;
/* 96e61f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 96e620: ret  */
  esp += 4; SPILL(); return;
L_96e621: /* 96e621: call 0x964770 */
  esp -= 4; W32(esp, 0x96e626u); SPILL(); f_964770(); if (g_unwind) return; RELOAD();
/* 96e626: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 96e62a: fild dword ptr [esp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 96e62e: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 96e631: fmul dword ptr [0xa216e0] */
  ST0 = ST0 * (F32((uint32_t)(0xa216e0u)));
/* 96e637: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 96e63b: fild dword ptr [0xcf8b88] */
  { double v = (double)(int32_t)R32((uint32_t)(0xcf8b88u)); FPUSH(v); }
/* 96e641: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 96e645: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 96e648: call dword ptr [0xcfb0cc] */
  esp -= 4; W32(esp, 0x96e64eu); SPILL(); hle_floor(); if (g_unwind) return; /* MSVCR70!floor */ RELOAD();
/* 96e64e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96e651: call 0x99ceac */
  esp -= 4; W32(esp, 0x96e656u); SPILL(); hle_ftol(); RELOAD();
/* 96e656: mov esi, dword ptr [0xcf8b54] */
  esi = R32((uint32_t)(0xcf8b54u));
/* 96e65c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96e65e: mov edi, eax */
  edi = eax;
/* 96e660: je 0x96e69e */
  if (zf) goto L_96e69e;
L_96e662: /* 96e662: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 96e665: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96e667: je 0x96e69e */
  if (zf) goto L_96e69e;
L_96e669: /* 96e669: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 96e66c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96e66e: lea edx, [esi + 0x2c] */
  edx = (uint32_t)(esi + 0x2cu);
/* 96e671: je 0x96e697 */
  if (zf) goto L_96e697;
L_96e673: /* 96e673: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 96e675: mov eax, dword ptr [eax + ecx*4 + 4] */
  eax = R32((uint32_t)(eax + ecx*4 + 0x4u));
/* 96e679: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96e67b: je 0x96e680 */
  if (zf) goto L_96e680;
L_96e67d: /* 96e67d: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 96e67e: jmp 0x96e682 */
  goto L_96e682;
L_96e680: /* 96e680: mov eax, ecx */
  eax = ecx;
L_96e682: /* 96e682: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96e684: jne 0x96e691 */
  if (!zf) goto L_96e691;
L_96e686: /* 96e686: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96e687: call 0x94ee00 */
  esp -= 4; W32(esp, 0x96e68cu); SPILL(); f_94ee00(); if (g_unwind) return; RELOAD();
/* 96e68c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96e68f: jmp 0x96e697 */
  goto L_96e697;
L_96e691: /* 96e691: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96e693: jg 0x96e6fe */
  if ((!zf && sf == of)) goto L_96e6fe;
L_96e695: /* 96e695: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
L_96e697: /* 96e697: mov esi, dword ptr [esi + 0x1c] */
  esi = R32((uint32_t)(esi + 0x1cu));
/* 96e69a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96e69c: jne 0x96e662 */
  if (!zf) goto L_96e662;
L_96e69e: /* 96e69e: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 96e6a2: mov ecx, dword ptr [0xcf8b88] */
  ecx = R32((uint32_t)(0xcf8b88u));
/* 96e6a8: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 96e6ae: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 96e6b1: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 96e6b4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96e6b5: push 0xb010a0 */
  { uint32_t v = 0xb010a0u; esp -= 4; W32(esp, v); }
/* 96e6ba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96e6bb: call 0x953470 */
  esp -= 4; W32(esp, 0x96e6c0u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96e6c0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96e6c2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96e6c4: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 96e6c6: call 0x9535b0 */
  esp -= 4; W32(esp, 0x96e6cbu); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 96e6cb: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96e6ce: jmp 0x96e607 */
  goto L_96e607;
L_96e6d3: /* 96e6d3: mov eax, dword ptr [0xcf8480] */
  eax = R32((uint32_t)(0xcf8480u));
/* 96e6d8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96e6da: je 0x96e6e7 */
  if (zf) goto L_96e6e7;
L_96e6dc: /* 96e6dc: call 0x956800 */
  esp -= 4; W32(esp, 0x96e6e1u); SPILL(); f_956800(); if (g_unwind) return; RELOAD();
/* 96e6e1: mov esi, dword ptr [0xcf8b54] */
  esi = R32((uint32_t)(0xcf8b54u));
L_96e6e7: /* 96e6e7: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 96e6ea: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 96e6ec: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 96e6ef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96e6f0: call 0x94eaa0 */
  esp -= 4; W32(esp, 0x96e6f5u); SPILL(); f_94eaa0(); if (g_unwind) return; RELOAD();
/* 96e6f5: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96e6f8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96e6f9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96e6fa: mov esp, ebp */
  esp = ebp;
/* 96e6fc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 96e6fd: ret  */
  esp += 4; SPILL(); return;
L_96e6fe: /* 96e6fe: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 96e701: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 96e703: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 96e706: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96e707: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96e708: call 0x94eae0 */
  esp -= 4; W32(esp, 0x96e70du); SPILL(); f_94eae0(); if (g_unwind) return; RELOAD();
/* 96e70d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96e710: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96e711: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96e712: mov esp, ebp */
  esp = ebp;
/* 96e714: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 96e715: ret  */
  esp += 4; SPILL(); return;
L_96e716: /* 96e716: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 96e719: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 96e71b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96e71c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96e71d: mov esp, ebp */
  esp = ebp;
/* 96e71f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 96e720: ret  */
  esp += 4; SPILL(); return;
L_96e721: /* 96e721: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96e722: xor eax, eax */
  eax = 0;
/* 96e724: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96e725: mov esp, ebp */
  esp = ebp;
/* 96e727: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 96e728: ret  */
  esp += 4; SPILL(); return;
}

void f_96e730(void) {
  LOAD_REGS();
L_96e730: /* 96e730: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 96e733: cmp dword ptr [0xcf8438], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96e73a: mov dword ptr [esp + 8], 0xff7fffff */
  W32((uint32_t)(esp + 0x8u), 0xff7fffffu);
/* 96e742: jl 0x96e757 */
  if ((sf != of)) goto L_96e757;
L_96e744: /* 96e744: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 96e749: push 0xb010fc */
  { uint32_t v = 0xb010fcu; esp -= 4; W32(esp, v); }
/* 96e74e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96e74f: call 0x953470 */
  esp -= 4; W32(esp, 0x96e754u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96e754: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96e757: /* 96e757: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96e758: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96e759: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96e75a: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
/* 96e75e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96e75f: call 0x94f3a0 */
  esp -= 4; W32(esp, 0x96e764u); SPILL(); f_94f3a0(); if (g_unwind) return; RELOAD();
/* 96e764: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 96e768: xor ebp, ebp */
  ebp = 0;
/* 96e76a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96e76d: cmp edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96e76f: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 96e773: mov dword ptr [0xcf8b88], ebp */
  W32((uint32_t)(0xcf8b88u), ebp);
/* 96e779: lea edx, [eax + 4] */
  edx = (uint32_t)(eax + 0x4u);
/* 96e77c: je 0x96e795 */
  if (zf) goto L_96e795;
L_96e77e: /* 96e77e: mov eax, edi */
  eax = edi;
L_96e780: /* 96e780: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 96e782: mov esi, dword ptr [0xcf85cc] */
  esi = R32((uint32_t)(0xcf85ccu));
/* 96e788: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 96e78b: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 96e78c: lea ecx, [ecx + esi*4] */
  ecx = (uint32_t)(ecx + esi*4);
/* 96e78f: jne 0x96e780 */
  if (!zf) goto L_96e780;
L_96e791: /* 96e791: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
L_96e795: /* 96e795: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96e796: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96e797: call 0x94f570 */
  esp -= 4; W32(esp, 0x96e79cu); SPILL(); f_94f570(); if (g_unwind) return; RELOAD();
/* 96e79c: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 96e7a0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96e7a3: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96e7a5: je 0x96e7d2 */
  if (zf) goto L_96e7d2;
L_96e7a7: /* 96e7a7: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 96e7aa: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 96e7ad: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96e7af: je 0x96e7d2 */
  if (zf) goto L_96e7d2;
L_96e7b1: /* 96e7b1: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 96e7b4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96e7b5: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 96e7b8: call 0x95f210 */
  esp -= 4; W32(esp, 0x96e7bdu); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 96e7bd: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96e7c0: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96e7c2: jl 0x96e7cc */
  if ((sf != of)) goto L_96e7cc;
L_96e7c4: /* 96e7c4: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 96e7c8: mov dword ptr [edx + eax*4 + 4], ebp */
  W32((uint32_t)(edx + eax*4 + 0x4u), ebp);
L_96e7cc: /* 96e7cc: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 96e7ce: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96e7d0: jne 0x96e7b1 */
  if (!zf) goto L_96e7b1;
L_96e7d2: /* 96e7d2: mov eax, dword ptr [0xcf8424] */
  eax = R32((uint32_t)(0xcf8424u));
/* 96e7d7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96e7d8: call 0x95f210 */
  esp -= 4; W32(esp, 0x96e7ddu); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 96e7dd: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96e7e0: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96e7e2: jl 0x96e806 */
  if ((sf != of)) goto L_96e806;
L_96e7e4: /* 96e7e4: mov ecx, dword ptr [0xcf8584] */
  ecx = R32((uint32_t)(0xcf8584u));
/* 96e7ea: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 96e7eb: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96e7ed: je 0x96e806 */
  if (zf) goto L_96e806;
L_96e7ef: /* 96e7ef: mov esi, dword ptr [0xcf8588] */
  esi = R32((uint32_t)(0xcf8588u));
/* 96e7f5: or edx, 0xffffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 96e7f8: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 96e7fa: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96e7fc: je 0x96e806 */
  if (zf) goto L_96e806;
L_96e7fe: /* 96e7fe: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 96e802: mov dword ptr [ecx + eax*4 + 4], ebp */
  W32((uint32_t)(ecx + eax*4 + 0x4u), ebp);
L_96e806: /* 96e806: mov eax, dword ptr [0xcf8430] */
  eax = R32((uint32_t)(0xcf8430u));
/* 96e80b: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96e80d: je 0x96e834 */
  if (zf) goto L_96e834;
L_96e80f: /* 96e80f: cmp dword ptr [0xcf8478], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8478u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96e815: je 0x96e834 */
  if (zf) goto L_96e834;
L_96e817: /* 96e817: cmp dword ptr [0xcf845c], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf845cu))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96e81d: jne 0x96e834 */
  if (!zf) goto L_96e834;
L_96e81f: /* 96e81f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96e820: call 0x95f210 */
  esp -= 4; W32(esp, 0x96e825u); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 96e825: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96e828: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96e82a: jl 0x96e834 */
  if ((sf != of)) goto L_96e834;
L_96e82c: /* 96e82c: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 96e830: mov dword ptr [edx + eax*4 + 4], ebp */
  W32((uint32_t)(edx + eax*4 + 0x4u), ebp);
L_96e834: /* 96e834: cmp dword ptr [0xcf83f8], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf83f8u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96e83a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96e83b: jne 0x96ea27 */
  if (!zf) goto L_96ea27;
L_96e841: /* 96e841: cmp dword ptr [0xcf845c], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf845cu))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96e847: je 0x96e87e */
  if (zf) goto L_96e87e;
L_96e849: /* 96e849: fld dword ptr [0xcf83ec] */
  { double v = F32((uint32_t)(0xcf83ecu)); FPUSH(v); }
/* 96e84f: fmul dword ptr [0xa0a848] */
  ST0 = ST0 * (F32((uint32_t)(0xa0a848u)));
/* 96e855: fld dword ptr [0xcf8bbc] */
  { double v = F32((uint32_t)(0xcf8bbcu)); FPUSH(v); }
/* 96e85b: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 96e85d: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 96e861: fcom dword ptr [esp + 0x30] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x30u)));
/* 96e865: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 96e867: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 96e86a: jp 0x96e878 */
  if (pf) goto L_96e878;
L_96e86c: /* 96e86c: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 96e870: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 96e872: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 96e876: jmp 0x96e888 */
  goto L_96e888;
L_96e878: /* 96e878: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 96e87c: jmp 0x96e888 */
  goto L_96e888;
L_96e87e: /* 96e87e: mov ecx, dword ptr [0xcf83ec] */
  ecx = R32((uint32_t)(0xcf83ecu));
/* 96e884: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
L_96e888: /* 96e888: mov edx, dword ptr [0xcf85d4] */
  edx = R32((uint32_t)(0xcf85d4u));
/* 96e88e: mov ebx, dword ptr [0xcf85cc] */
  ebx = R32((uint32_t)(0xcf85ccu));
/* 96e894: mov esi, dword ptr [0xcf8b4c] */
  esi = R32((uint32_t)(0xcf8b4cu));
/* 96e89a: mov ecx, dword ptr [0xcf8b80] */
  ecx = R32((uint32_t)(0xcf8b80u));
/* 96e8a0: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 96e8a2: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 96e8a3: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96e8a5: mov dword ptr [0xcf7a88], edx */
  W32((uint32_t)(0xcf7a88u), edx);
/* 96e8ab: mov eax, edi */
  eax = edi;
/* 96e8ad: mov dword ptr [esp + 0x30], esi */
  W32((uint32_t)(esp + 0x30u), esi);
/* 96e8b1: je 0x96ea0f */
  if (zf) goto L_96ea0f;
L_96e8b7: /* 96e8b7: jmp 0x96e8c5 */
  goto L_96e8c5;
L_96e8b9: /* 96e8b9: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 96e8bd: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 96e8c1: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
L_96e8c5: /* 96e8c5: cmp dword ptr [esi + 0x1c], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x1cu))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96e8c8: je 0x96ea07 */
  if (zf) goto L_96ea07;
L_96e8ce: /* 96e8ce: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 96e8cf: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x96e8cf);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 96e8d1: lea ebx, [esi + 0x2c] */
  ebx = (uint32_t)(esi + 0x2cu);
/* 96e8d4: add eax, 0x64 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 96e8d7: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 96e8d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96e8d9: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 96e8dd: call 0x94f020 */
  esp -= 4; W32(esp, 0x96e8e2u); SPILL(); f_94f020(); if (g_unwind) return; RELOAD();
/* 96e8e2: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 96e8e4: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 96e8e8: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96e8eb: xor edi, edi */
  edi = 0;
/* 96e8ed: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96e8ef: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* 96e8f3: je 0x96e9dd */
  if (zf) goto L_96e9dd;
L_96e8f9: /* 96e8f9: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 96e8fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96e8fd: call 0x94f340 */
  esp -= 4; W32(esp, 0x96e902u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 96e902: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96e905: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 96e907: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 96e90b: jle 0x96e9d7 */
  if ((zf || sf != of)) goto L_96e9d7;
L_96e911: /* 96e911: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96e913: je 0x96e9a4 */
  if (zf) goto L_96e9a4;
L_96e919: /* 96e919: mov edx, dword ptr [0xcf7a00] */
  edx = R32((uint32_t)(0xcf7a00u));
/* 96e91f: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 96e923: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 96e927: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96e928: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96e929: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 96e92a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96e92b: mov dword ptr [0xcf7a00], edx */
  W32((uint32_t)(0xcf7a00u), edx);
/* 96e931: call 0x96fa90 */
  esp -= 4; W32(esp, 0x96e936u); SPILL(); f_96fa90(); if (g_unwind) return; RELOAD();
/* 96e936: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 96e93a: fcomp dword ptr [esp + 0x34] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x34u)));
  FPOP();
/* 96e93e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96e941: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 96e943: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 96e946: jp 0x96e95b */
  if (pf) goto L_96e95b;
L_96e948: /* 96e948: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 96e94c: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 96e950: mov dword ptr [edx + eax*4 + 4], esi */
  W32((uint32_t)(edx + eax*4 + 0x4u), esi);
/* 96e954: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 96e955: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 96e959: jmp 0x96e9a4 */
  goto L_96e9a4;
L_96e95b: /* 96e95b: mov ecx, dword ptr [0xcf8b88] */
  ecx = R32((uint32_t)(0xcf8b88u));
/* 96e961: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 96e962: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96e964: mov dword ptr [0xcf8b88], ecx */
  W32((uint32_t)(0xcf8b88u), ecx);
/* 96e96a: jne 0x96e978 */
  if (!zf) goto L_96e978;
L_96e96c: /* 96e96c: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 96e970: mov edi, esi */
  edi = esi;
/* 96e972: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 96e976: jmp 0x96e9a4 */
  goto L_96e9a4;
L_96e978: /* 96e978: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 96e97c: fcomp dword ptr [esp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x18u)));
  FPOP();
/* 96e980: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 96e982: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 96e985: jne 0x96e99a */
  if (!zf) goto L_96e99a;
L_96e987: /* 96e987: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96e988: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96e989: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x96e98eu); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 96e98e: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 96e992: mov edi, esi */
  edi = esi;
/* 96e994: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 96e998: jmp 0x96e9a1 */
  goto L_96e9a1;
L_96e99a: /* 96e99a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96e99b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96e99c: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x96e9a1u); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
L_96e9a1: /* 96e9a1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96e9a4: /* 96e9a4: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 96e9a8: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 96e9ac: mov esi, dword ptr [edx + ebp*4 + 8] */
  esi = R32((uint32_t)(edx + ebp*4 + 0x8u));
/* 96e9b0: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 96e9b1: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96e9b3: jl 0x96e911 */
  if ((sf != of)) goto L_96e911;
L_96e9b9: /* 96e9b9: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96e9bb: je 0x96e9d7 */
  if (zf) goto L_96e9d7;
L_96e9bd: /* 96e9bd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96e9be: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96e9bf: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x96e9c4u); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 96e9c4: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 96e9c8: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 96e9cc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96e9cf: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 96e9d1: xor ebp, ebp */
  ebp = 0;
/* 96e9d3: mov esi, ecx */
  esi = ecx;
/* 96e9d5: jmp 0x96e9e6 */
  goto L_96e9e6;
L_96e9d7: /* 96e9d7: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 96e9db: xor ebp, ebp */
  ebp = 0;
L_96e9dd: /* 96e9dd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96e9de: call 0x94ee00 */
  esp -= 4; W32(esp, 0x96e9e3u); SPILL(); f_94ee00(); if (g_unwind) return; RELOAD();
/* 96e9e3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96e9e6: /* 96e9e6: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 96e9ea: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 96e9ee: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96e9ef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96e9f0: call 0x94f570 */
  esp -= 4; W32(esp, 0x96e9f5u); SPILL(); f_94f570(); if (g_unwind) return; RELOAD();
/* 96e9f5: mov esi, dword ptr [esi + 0x1c] */
  esi = R32((uint32_t)(esi + 0x1cu));
/* 96e9f8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96e9fb: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96e9fd: mov dword ptr [esp + 0x30], esi */
  W32((uint32_t)(esp + 0x30u), esi);
/* 96ea01: jne 0x96e8b9 */
  if (!zf) goto L_96e8b9;
L_96ea07: /* 96ea07: cmp dword ptr [0xcf83f8], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf83f8u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96ea0d: jne 0x96ea27 */
  if (!zf) goto L_96ea27;
L_96ea0f: /* 96ea0f: cmp dword ptr [0xcf845c], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf845cu))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96ea15: jne 0x96ea27 */
  if (!zf) goto L_96ea27;
L_96ea17: /* 96ea17: cmp dword ptr [0xcf8440], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8440u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96ea1d: jne 0x96ea27 */
  if (!zf) goto L_96ea27;
L_96ea1f: /* 96ea1f: cmp dword ptr [0xcf8444], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8444u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96ea25: je 0x96ea77 */
  if (zf) goto L_96ea77;
L_96ea27: /* 96ea27: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 96ea2b: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96ea2d: mov dword ptr [0xcf8bcc], 1 */
  W32((uint32_t)(0xcf8bccu), 0x1u);
/* 96ea37: je 0x96ea71 */
  if (zf) goto L_96ea71;
L_96ea39: /* 96ea39: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 96ea3c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96ea3d: xor esi, esi */
  esi = 0;
/* 96ea3f: call 0x94f340 */
  esp -= 4; W32(esp, 0x96ea44u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 96ea44: mov ebx, eax */
  ebx = eax;
/* 96ea46: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96ea49: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96ea4b: jle 0x96ea71 */
  if ((zf || sf != of)) goto L_96ea71;
L_96ea4d: /* 96ea4d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_96ea50: /* 96ea50: cmp edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96ea52: je 0x96ea64 */
  if (zf) goto L_96ea64;
L_96ea54: /* 96ea54: mov ecx, dword ptr [0xcf8b4c] */
  ecx = R32((uint32_t)(0xcf8b4cu));
/* 96ea5a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96ea5b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96ea5c: call 0x96ecd0 */
  esp -= 4; W32(esp, 0x96ea61u); SPILL(); f_96ecd0(); if (g_unwind) return; RELOAD();
/* 96ea61: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96ea64: /* 96ea64: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 96ea68: mov edi, dword ptr [edx + esi*4 + 8] */
  edi = R32((uint32_t)(edx + esi*4 + 0x8u));
/* 96ea6c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 96ea6d: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96ea6f: jl 0x96ea50 */
  if ((sf != of)) goto L_96ea50;
L_96ea71: /* 96ea71: mov dword ptr [0xcf8bcc], ebp */
  W32((uint32_t)(0xcf8bccu), ebp);
L_96ea77: /* 96ea77: mov eax, dword ptr [0xcf79fc] */
  eax = R32((uint32_t)(0xcf79fcu));
/* 96ea7c: mov esi, dword ptr [0xcf7a00] */
  esi = R32((uint32_t)(0xcf7a00u));
/* 96ea82: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 96ea86: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 96ea88: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96ea89: mov dword ptr [0xcf7a00], esi */
  W32((uint32_t)(0xcf7a00u), esi);
/* 96ea8f: mov dword ptr [0xcf79fc], ebp */
  W32((uint32_t)(0xcf79fcu), ebp);
/* 96ea95: call 0x94f3f0 */
  esp -= 4; W32(esp, 0x96ea9au); SPILL(); f_94f3f0(); if (g_unwind) return; RELOAD();
/* 96ea9a: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 96ea9f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96eaa2: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96eaa5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96eaa6: jl 0x96eaba */
  if ((sf != of)) goto L_96eaba;
L_96eaa8: /* 96eaa8: mov edx, dword ptr [0xcf8b4c] */
  edx = R32((uint32_t)(0xcf8b4cu));
/* 96eaae: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 96eab0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96eab1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96eab2: call 0x953810 */
  esp -= 4; W32(esp, 0x96eab7u); SPILL(); f_953810(); if (g_unwind) return; RELOAD();
/* 96eab7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96eaba: /* 96eaba: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96eabb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96eabc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 96eabd: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96eac0: ret  */
  esp += 4; SPILL(); return;
}

void f_96ead0(void) {
  LOAD_REGS();
L_96ead0: /* 96ead0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96ead1: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 96ead5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96ead7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96ead8: mov ebx, dword ptr [esp + 0xc] */
  ebx = R32((uint32_t)(esp + 0xcu));
/* 96eadc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96eadd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96eade: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 96eae6: mov dword ptr [0xcf8c04], 1 */
  W32((uint32_t)(0xcf8c04u), 0x1u);
/* 96eaf0: jne 0x96eb97 */
  if (!zf) goto L_96eb97;
L_96eaf6: /* 96eaf6: mov eax, dword ptr [0xcf8bcc] */
  eax = R32((uint32_t)(0xcf8bccu));
/* 96eafb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96eafd: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 96eb01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96eb02: je 0x96eb1b */
  if (zf) goto L_96eb1b;
L_96eb04: /* 96eb04: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 96eb08: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96eb0a: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 96eb0e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96eb0f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96eb10: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96eb11: call 0x9702f0 */
  esp -= 4; W32(esp, 0x96eb16u); SPILL(); f_9702f0(); if (g_unwind) return; RELOAD();
/* 96eb16: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96eb19: jmp 0x96eb39 */
  goto L_96eb39;
L_96eb1b: /* 96eb1b: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 96eb1f: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 96eb23: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96eb24: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* 96eb28: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96eb29: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96eb2b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96eb2d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 96eb2f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96eb30: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96eb31: call 0x96fc50 */
  esp -= 4; W32(esp, 0x96eb36u); SPILL(); f_96fc50(); if (g_unwind) return; RELOAD();
/* 96eb36: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96eb39: /* 96eb39: mov edi, dword ptr [0xcf7a84] */
  edi = R32((uint32_t)(0xcf7a84u));
/* 96eb3f: mov edx, dword ptr [0xcf79f4] */
  edx = R32((uint32_t)(0xcf79f4u));
/* 96eb45: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 96eb49: mov esi, eax */
  esi = eax;
/* 96eb4b: mov eax, dword ptr [0xcf8444] */
  eax = R32((uint32_t)(0xcf8444u));
/* 96eb50: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 96eb51: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 96eb53: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96eb55: mov dword ptr [0xcf7a84], edi */
  W32((uint32_t)(0xcf7a84u), edi);
/* 96eb5b: mov dword ptr [0xcf79f4], edx */
  W32((uint32_t)(0xcf79f4u), edx);
/* 96eb61: jne 0x96eba1 */
  if (!zf) goto L_96eba1;
L_96eb63: /* 96eb63: mov eax, dword ptr [0xcf85c8] */
  eax = R32((uint32_t)(0xcf85c8u));
/* 96eb68: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96eb6a: je 0x96eb8f */
  if (zf) goto L_96eb8f;
L_96eb6c: /* 96eb6c: fld dword ptr [0xcf8a44] */
  { double v = F32((uint32_t)(0xcf8a44u)); FPUSH(v); }
L_96eb72: /* 96eb72: fchs  */
  ST0 = -ST0;
/* 96eb74: fcomp dword ptr [esp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x18u)));
  FPOP();
/* 96eb78: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 96eb7a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 96eb7d: jne 0x96eba1 */
  if (!zf) goto L_96eba1;
L_96eb7f: /* 96eb7f: mov eax, dword ptr [0xcf783c] */
  eax = R32((uint32_t)(0xcf783cu));
/* 96eb84: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96eb85: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 96eb86: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96eb87: mov dword ptr [0xcf783c], eax */
  W32((uint32_t)(0xcf783cu), eax);
/* 96eb8c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96eb8d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 96eb8e: ret  */
  esp += 4; SPILL(); return;
L_96eb8f: /* 96eb8f: fld dword ptr [0xcf8450] */
  { double v = F32((uint32_t)(0xcf8450u)); FPUSH(v); }
/* 96eb95: jmp 0x96eb72 */
  goto L_96eb72;
L_96eb97: /* 96eb97: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 96eb99: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 96eb9d: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
L_96eba1: /* 96eba1: mov ecx, dword ptr [0xcf85c8] */
  ecx = R32((uint32_t)(0xcf85c8u));
/* 96eba7: mov eax, dword ptr [0xcf8440] */
  eax = R32((uint32_t)(0xcf8440u));
/* 96ebac: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 96ebae: add eax, dword ptr [0xcf8444] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0xcf8444u)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 96ebb4: je 0x96ec23 */
  if (zf) goto L_96ec23;
L_96ebb6: /* 96ebb6: mov edx, dword ptr [esi + 0x30] */
  edx = R32((uint32_t)(esi + 0x30u));
/* 96ebb9: lea edi, [esi + 0x30] */
  edi = (uint32_t)(esi + 0x30u);
/* 96ebbc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96ebbd: call 0x94eff0 */
  esp -= 4; W32(esp, 0x96ebc2u); SPILL(); f_94eff0(); if (g_unwind) return; RELOAD();
/* 96ebc2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96ebc5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96ebc7: je 0x96ebfc */
  if (zf) goto L_96ebfc;
L_96ebc9: /* 96ebc9: inc dword ptr [0xcf780c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf780cu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0xcf780cu), r);
  }
/* 96ebcf: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 96ebd3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96ebd4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96ebd5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96ebd6: call 0x96fa90 */
  esp -= 4; W32(esp, 0x96ebdbu); SPILL(); f_96fa90(); if (g_unwind) return; RELOAD();
/* 96ebdb: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 96ebdf: fcomp dword ptr [esp + 0x24] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x24u)));
  FPOP();
/* 96ebe3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96ebe6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 96ebe8: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 96ebeb: jnp 0x96ebfc */
  if (!pf) goto L_96ebfc;
L_96ebed: /* 96ebed: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96ebee: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96ebef: call 0x94e8c0 */
  esp -= 4; W32(esp, 0x96ebf4u); SPILL(); f_94e8c0(); if (g_unwind) return; RELOAD();
/* 96ebf4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96ebf7: jmp 0x96ec91 */
  goto L_96ec91;
L_96ebfc: /* 96ebfc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96ebfd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96ebfe: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x96ec03u); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 96ec03: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 96ec07: fcomp dword ptr [0xcf8bbc] */
  fpu_com(ST0, F32((uint32_t)(0xcf8bbcu)));
  FPOP();
/* 96ec0d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96ec10: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 96ec12: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 96ec15: jne 0x96ec91 */
  if (!zf) goto L_96ec91;
L_96ec17: /* 96ec17: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 96ec1b: mov dword ptr [0xcf8bbc], edx */
  W32((uint32_t)(0xcf8bbcu), edx);
/* 96ec21: jmp 0x96ec3d */
  goto L_96ec3d;
L_96ec23: /* 96ec23: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 96ec27: fcomp dword ptr [0xcf8bbc] */
  fpu_com(ST0, F32((uint32_t)(0xcf8bbcu)));
  FPOP();
/* 96ec2d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 96ec2f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 96ec32: jne 0x96ec91 */
  if (!zf) goto L_96ec91;
L_96ec34: /* 96ec34: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 96ec38: mov dword ptr [0xcf8bbc], eax */
  W32((uint32_t)(0xcf8bbcu), eax);
L_96ec3d: /* 96ec3d: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 96ec41: fcomp dword ptr [0xcf859c] */
  fpu_com(ST0, F32((uint32_t)(0xcf859cu)));
  FPOP();
/* 96ec47: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 96ec49: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 96ec4c: jne 0x96ec91 */
  if (!zf) goto L_96ec91;
L_96ec4e: /* 96ec4e: mov ecx, dword ptr [0xcf8bac] */
  ecx = R32((uint32_t)(0xcf8bacu));
/* 96ec54: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 96ec58: mov edx, dword ptr [esi + 0x38] */
  edx = R32((uint32_t)(esi + 0x38u));
/* 96ec5b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96ec5c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96ec5d: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 96ec60: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 96ec63: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96ec64: call 0x95f210 */
  esp -= 4; W32(esp, 0x96ec69u); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 96ec69: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96ec6c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96ec6d: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 96ec72: push 0xb01198 */
  { uint32_t v = 0xb01198u; esp -= 4; W32(esp, v); }
/* 96ec77: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96ec78: call 0x953470 */
  esp -= 4; W32(esp, 0x96ec7du); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96ec7d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96ec7f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96ec81: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96ec83: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96ec84: push 0xb0118c */
  { uint32_t v = 0xb0118cu; esp -= 4; W32(esp, v); }
/* 96ec89: call 0x953700 */
  esp -= 4; W32(esp, 0x96ec8eu); SPILL(); f_953700(); if (g_unwind) return; RELOAD();
/* 96ec8e: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96ec91: /* 96ec91: cmp dword ptr [0xcf8438], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96ec98: jl 0x96ecc6 */
  if ((sf != of)) goto L_96ecc6;
L_96ec9a: /* 96ec9a: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 96ec9e: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 96eca1: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 96eca4: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 96eca7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96eca8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96eca9: call 0x95f210 */
  esp -= 4; W32(esp, 0x96ecaeu); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 96ecae: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 96ecb4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96ecb7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96ecb8: push 0xb01138 */
  { uint32_t v = 0xb01138u; esp -= 4; W32(esp, v); }
/* 96ecbd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96ecbe: call 0x953470 */
  esp -= 4; W32(esp, 0x96ecc3u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96ecc3: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96ecc6: /* 96ecc6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96ecc7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96ecc8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96ecc9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 96ecca: ret  */
  esp += 4; SPILL(); return;
}

void f_96ecd0(void) {
  LOAD_REGS();
L_96ecd0: /* 96ecd0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96ecd1: mov eax, dword ptr [0xcf8bcc] */
  eax = R32((uint32_t)(0xcf8bccu));
/* 96ecd6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96ecd8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96ecd9: mov ebx, dword ptr [esp + 0xc] */
  ebx = R32((uint32_t)(esp + 0xcu));
/* 96ecdd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96ecde: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96ecdf: mov esi, 1 */
  esi = 0x1u;
/* 96ece4: je 0x96ed05 */
  if (zf) goto L_96ed05;
L_96ece6: /* 96ece6: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 96ecea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96eceb: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 96ecef: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 96ecf3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96ecf4: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* 96ecf8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96ecf9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96ecfa: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96ecfb: call 0x9702f0 */
  esp -= 4; W32(esp, 0x96ed00u); SPILL(); f_9702f0(); if (g_unwind) return; RELOAD();
/* 96ed00: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96ed03: jmp 0x96ed2c */
  goto L_96ed2c;
L_96ed05: /* 96ed05: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 96ed09: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96ed0a: mov ecx, dword ptr [0xcf83f8] */
  ecx = R32((uint32_t)(0xcf83f8u));
/* 96ed10: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* 96ed14: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96ed15: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 96ed19: lea eax, [esp + 0x20] */
  eax = (uint32_t)(esp + 0x20u);
/* 96ed1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96ed1e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96ed20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96ed21: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96ed22: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96ed23: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96ed24: call 0x96fc50 */
  esp -= 4; W32(esp, 0x96ed29u); SPILL(); f_96fc50(); if (g_unwind) return; RELOAD();
/* 96ed29: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96ed2c: /* 96ed2c: mov ecx, dword ptr [0xcf79fc] */
  ecx = R32((uint32_t)(0xcf79fcu));
/* 96ed32: mov edx, dword ptr [0xcf7a88] */
  edx = R32((uint32_t)(0xcf7a88u));
/* 96ed38: mov edi, eax */
  edi = eax;
/* 96ed3a: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 96ed3e: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 96ed40: mov eax, dword ptr [0xcf8a3c] */
  eax = R32((uint32_t)(0xcf8a3cu));
/* 96ed45: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 96ed46: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96ed48: mov dword ptr [0xcf7a88], edx */
  W32((uint32_t)(0xcf7a88u), edx);
/* 96ed4e: mov dword ptr [0xcf79fc], ecx */
  W32((uint32_t)(0xcf79fcu), ecx);
/* 96ed54: je 0x96edb1 */
  if (zf) goto L_96edb1;
L_96ed56: /* 96ed56: mov eax, dword ptr [0xcf8410] */
  eax = R32((uint32_t)(0xcf8410u));
/* 96ed5b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96ed5d: je 0x96ed87 */
  if (zf) goto L_96ed87;
L_96ed5f: /* 96ed5f: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 96ed63: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96ed65: jne 0x96ed87 */
  if (!zf) goto L_96ed87;
L_96ed67: /* 96ed67: fld dword ptr [0xcf8450] */
  { double v = F32((uint32_t)(0xcf8450u)); FPUSH(v); }
/* 96ed6d: fchs  */
  ST0 = -ST0;
/* 96ed6f: fcomp dword ptr [esp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x18u)));
  FPOP();
/* 96ed73: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 96ed75: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 96ed78: jp 0x96ed87 */
  if (pf) goto L_96ed87;
L_96ed7a: /* 96ed7a: push 0xb0128c */
  { uint32_t v = 0xb0128cu; esp -= 4; W32(esp, v); }
/* 96ed7f: call 0x96f160 */
  esp -= 4; W32(esp, 0x96ed84u); SPILL(); f_96f160(); if (g_unwind) return; RELOAD();
/* 96ed84: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96ed87: /* 96ed87: mov eax, dword ptr [0xcf85c8] */
  eax = R32((uint32_t)(0xcf85c8u));
/* 96ed8c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96ed8e: je 0x96ed98 */
  if (zf) goto L_96ed98;
L_96ed90: /* 96ed90: fld dword ptr [0xcf8a44] */
  { double v = F32((uint32_t)(0xcf8a44u)); FPUSH(v); }
/* 96ed96: jmp 0x96ed9e */
  goto L_96ed9e;
L_96ed98: /* 96ed98: fld dword ptr [0xcf8450] */
  { double v = F32((uint32_t)(0xcf8450u)); FPUSH(v); }
L_96ed9e: /* 96ed9e: fchs  */
  ST0 = -ST0;
/* 96eda0: fcomp dword ptr [esp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x18u)));
  FPOP();
/* 96eda4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 96eda6: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 96eda9: jp 0x96edb1 */
  if (pf) goto L_96edb1;
L_96edab: /* 96edab: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 96edaf: jmp 0x96edbd */
  goto L_96edbd;
L_96edb1: /* 96edb1: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 96edb5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96edb7: je 0x96ee66 */
  if (zf) goto L_96ee66;
L_96edbd: /* 96edbd: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* 96edc0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96edc2: lea esi, [edi + 0x2c] */
  esi = (uint32_t)(edi + 0x2cu);
/* 96edc5: je 0x96edfd */
  if (zf) goto L_96edfd;
L_96edc7: /* 96edc7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96edc8: call 0x94eff0 */
  esp -= 4; W32(esp, 0x96edcdu); SPILL(); f_94eff0(); if (g_unwind) return; RELOAD();
/* 96edcd: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96edd0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96edd2: je 0x96edfd */
  if (zf) goto L_96edfd;
L_96edd4: /* 96edd4: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 96edd6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96edd7: fcomp dword ptr [esp + 0x1c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x1cu)));
  FPOP();
/* 96eddb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96eddc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 96edde: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 96ede1: jp 0x96edf3 */
  if (pf) goto L_96edf3;
L_96ede3: /* 96ede3: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x96ede8u); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 96ede8: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 96edec: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96edef: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 96edf1: jmp 0x96ee24 */
  goto L_96ee24;
L_96edf3: /* 96edf3: call 0x94e8c0 */
  esp -= 4; W32(esp, 0x96edf8u); SPILL(); f_94e8c0(); if (g_unwind) return; RELOAD();
/* 96edf8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96edfb: jmp 0x96ee24 */
  goto L_96ee24;
L_96edfd: /* 96edfd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96edfe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96edff: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x96ee04u); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 96ee04: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* 96ee07: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96ee0a: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 96ee0d: jne 0x96ee1e */
  if (!zf) goto L_96ee1e;
L_96ee0f: /* 96ee0f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96ee10: call 0x95f280 */
  esp -= 4; W32(esp, 0x96ee15u); SPILL(); f_95f280(); if (g_unwind) return; RELOAD();
/* 96ee15: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96ee16: call 0x95dbf0 */
  esp -= 4; W32(esp, 0x96ee1bu); SPILL(); f_95dbf0(); if (g_unwind) return; RELOAD();
/* 96ee1b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96ee1e: /* 96ee1e: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 96ee22: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
L_96ee24: /* 96ee24: mov ecx, dword ptr [0xcf8b88] */
  ecx = R32((uint32_t)(0xcf8b88u));
/* 96ee2a: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 96ee2f: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 96ee30: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96ee33: mov dword ptr [0xcf8b88], ecx */
  W32((uint32_t)(0xcf8b88u), ecx);
/* 96ee39: jl 0x96ef6c */
  if ((sf != of)) goto L_96ef6c;
L_96ee3f: /* 96ee3f: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 96ee42: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96ee43: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96ee44: call 0x95f210 */
  esp -= 4; W32(esp, 0x96ee49u); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 96ee49: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 96ee4f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96ee52: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96ee53: push 0xb01258 */
  { uint32_t v = 0xb01258u; esp -= 4; W32(esp, v); }
/* 96ee58: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96ee59: call 0x953470 */
  esp -= 4; W32(esp, 0x96ee5eu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96ee5e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96ee61: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96ee62: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96ee63: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96ee64: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 96ee65: ret  */
  esp += 4; SPILL(); return;
L_96ee66: /* 96ee66: fld dword ptr [0xcf8450] */
  { double v = F32((uint32_t)(0xcf8450u)); FPUSH(v); }
/* 96ee6c: fchs  */
  ST0 = -ST0;
/* 96ee6e: fcomp dword ptr [esp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x18u)));
  FPOP();
/* 96ee72: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 96ee74: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 96ee77: jp 0x96eed6 */
  if (pf) goto L_96eed6;
L_96ee79: /* 96ee79: mov ecx, dword ptr [0xcf7840] */
  ecx = R32((uint32_t)(0xcf7840u));
/* 96ee7f: mov eax, dword ptr [0xcf8410] */
  eax = R32((uint32_t)(0xcf8410u));
/* 96ee84: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 96ee85: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96ee87: mov dword ptr [0xcf7840], ecx */
  W32((uint32_t)(0xcf7840u), ecx);
/* 96ee8d: je 0x96ee9c */
  if (zf) goto L_96ee9c;
L_96ee8f: /* 96ee8f: push 0xb01240 */
  { uint32_t v = 0xb01240u; esp -= 4; W32(esp, v); }
/* 96ee94: call 0x96f160 */
  esp -= 4; W32(esp, 0x96ee99u); SPILL(); f_96f160(); if (g_unwind) return; RELOAD();
/* 96ee99: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96ee9c: /* 96ee9c: mov edx, dword ptr [0xcf8440] */
  edx = R32((uint32_t)(0xcf8440u));
/* 96eea2: mov eax, dword ptr [0xcf85c8] */
  eax = R32((uint32_t)(0xcf85c8u));
/* 96eea7: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 96eea9: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96eeab: jne 0x96eec2 */
  if (!zf) goto L_96eec2;
L_96eead: /* 96eead: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 96eeb1: fcomp dword ptr [0xcf8bbc] */
  fpu_com(ST0, F32((uint32_t)(0xcf8bbcu)));
  FPOP();
/* 96eeb7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 96eeb9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 96eebc: jne 0x96ef6c */
  if (!zf) goto L_96ef6c;
L_96eec2: /* 96eec2: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 96eec6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96eec7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96eec8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96eec9: call 0x96ead0 */
  esp -= 4; W32(esp, 0x96eeceu); SPILL(); f_96ead0(); if (g_unwind) return; RELOAD();
/* 96eece: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96eed1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96eed2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96eed3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96eed4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 96eed5: ret  */
  esp += 4; SPILL(); return;
L_96eed6: /* 96eed6: mov eax, dword ptr [0xcf85c8] */
  eax = R32((uint32_t)(0xcf85c8u));
/* 96eedb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96eedd: je 0x96ef11 */
  if (zf) goto L_96ef11;
L_96eedf: /* 96eedf: fld dword ptr [0xcf8a44] */
  { double v = F32((uint32_t)(0xcf8a44u)); FPUSH(v); }
/* 96eee5: fchs  */
  ST0 = -ST0;
/* 96eee7: fcomp dword ptr [esp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x18u)));
  FPOP();
/* 96eeeb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 96eeed: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 96eef0: jp 0x96ef11 */
  if (pf) goto L_96ef11;
L_96eef2: /* 96eef2: mov eax, dword ptr [0xcf7a04] */
  eax = R32((uint32_t)(0xcf7a04u));
/* 96eef7: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* 96eefb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96eefc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 96eefd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96eefe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96eeff: mov dword ptr [0xcf7a04], eax */
  W32((uint32_t)(0xcf7a04u), eax);
/* 96ef04: call 0x96ead0 */
  esp -= 4; W32(esp, 0x96ef09u); SPILL(); f_96ead0(); if (g_unwind) return; RELOAD();
/* 96ef09: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96ef0c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96ef0d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96ef0e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96ef0f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 96ef10: ret  */
  esp += 4; SPILL(); return;
L_96ef11: /* 96ef11: mov ecx, dword ptr [0xcf79f8] */
  ecx = R32((uint32_t)(0xcf79f8u));
/* 96ef17: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 96ef1c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 96ef1d: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96ef20: mov dword ptr [0xcf79f8], ecx */
  W32((uint32_t)(0xcf79f8u), ecx);
/* 96ef26: jl 0x96ef54 */
  if ((sf != of)) goto L_96ef54;
L_96ef28: /* 96ef28: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 96ef2c: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 96ef2f: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 96ef32: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 96ef35: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96ef36: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96ef37: call 0x95f210 */
  esp -= 4; W32(esp, 0x96ef3cu); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 96ef3c: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 96ef42: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96ef45: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96ef46: push 0xb011f0 */
  { uint32_t v = 0xb011f0u; esp -= 4; W32(esp, v); }
/* 96ef4b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96ef4c: call 0x953470 */
  esp -= 4; W32(esp, 0x96ef51u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96ef51: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96ef54: /* 96ef54: mov eax, dword ptr [0xcf8444] */
  eax = R32((uint32_t)(0xcf8444u));
/* 96ef59: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96ef5b: je 0x96ef6c */
  if (zf) goto L_96ef6c;
L_96ef5d: /* 96ef5d: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* 96ef61: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96ef62: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96ef63: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96ef64: call 0x96ead0 */
  esp -= 4; W32(esp, 0x96ef69u); SPILL(); f_96ead0(); if (g_unwind) return; RELOAD();
/* 96ef69: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96ef6c: /* 96ef6c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96ef6d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96ef6e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96ef6f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 96ef70: ret  */
  esp += 4; SPILL(); return;
}

void f_96ef80(void) {
  LOAD_REGS();
L_96ef80: /* 96ef80: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96ef81: mov eax, dword ptr [0xcf847c] */
  eax = R32((uint32_t)(0xcf847cu));
/* 96ef86: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96ef88: mov dword ptr [esp], 0 */
  W32((uint32_t)(esp), 0x0u);
/* 96ef90: je 0x96efaf */
  if (zf) goto L_96efaf;
L_96ef92: /* 96ef92: fld dword ptr [0xcf83ec] */
  { double v = F32((uint32_t)(0xcf83ecu)); FPUSH(v); }
/* 96ef98: fcomp dword ptr [0xcf8bc0] */
  fpu_com(ST0, F32((uint32_t)(0xcf8bc0u)));
  FPOP();
/* 96ef9e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 96efa0: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 96efa3: jp 0x96efaf */
  if (pf) goto L_96efaf;
L_96efa5: /* 96efa5: mov eax, dword ptr [0xcf8bc0] */
  eax = R32((uint32_t)(0xcf8bc0u));
/* 96efaa: mov dword ptr [0xcf83ec], eax */
  W32((uint32_t)(0xcf83ecu), eax);
L_96efaf: /* 96efaf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96efb0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96efb1: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 96efb5: mov dword ptr [ebp], 0 */
  W32((uint32_t)(ebp), 0x0u);
/* 96efbc: mov ebx, dword ptr [0xcf8b5c] */
  ebx = R32((uint32_t)(0xcf8b5cu));
/* 96efc2: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96efc4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96efc5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96efc6: je 0x96f0d7 */
  if (zf) goto L_96f0d7;
L_96efcc: /* 96efcc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_96efd0: /* 96efd0: mov eax, dword ptr [ebx + 0x3c] */
  eax = R32((uint32_t)(ebx + 0x3cu));
/* 96efd3: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 96efd6: je 0x96f0d7 */
  if (zf) goto L_96f0d7;
L_96efdc: /* 96efdc: mov eax, dword ptr [ebx + 0x2c] */
  eax = R32((uint32_t)(ebx + 0x2cu));
/* 96efdf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96efe1: jne 0x96efee */
  if (!zf) goto L_96efee;
L_96efe3: /* 96efe3: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* 96efe6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96efe8: je 0x96f0cc */
  if (zf) goto L_96f0cc;
L_96efee: /* 96efee: mov edi, dword ptr [ebx + 0x10] */
  edi = R32((uint32_t)(ebx + 0x10u));
/* 96eff1: xor esi, esi */
  esi = 0;
/* 96eff3: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96eff5: je 0x96f01b */
  if (zf) goto L_96f01b;
L_96eff7: /* 96eff7: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* 96effa: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 96effd: je 0x96f021 */
  if (zf) goto L_96f021;
L_96efff: /* 96efff: mov eax, dword ptr [0xcf8b90] */
  eax = R32((uint32_t)(0xcf8b90u));
/* 96f004: mov edi, dword ptr [edi + 0x10] */
  edi = R32((uint32_t)(edi + 0x10u));
/* 96f007: mov ecx, esi */
  ecx = esi;
/* 96f009: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 96f00a: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 96f00c: jbe 0x96f017 */
  if ((cf | zf)) goto L_96f017;
L_96f00e: /* 96f00e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96f00f: call 0x956960 */
  esp -= 4; W32(esp, 0x96f014u); SPILL(); f_956960(); if (g_unwind) return; RELOAD();
/* 96f014: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96f017: /* 96f017: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96f019: jne 0x96eff7 */
  if (!zf) goto L_96eff7;
L_96f01b: /* 96f01b: mov edi, dword ptr [0xcf8b58] */
  edi = R32((uint32_t)(0xcf8b58u));
L_96f021: /* 96f021: mov eax, dword ptr [ebx + 0x2c] */
  eax = R32((uint32_t)(ebx + 0x2cu));
/* 96f024: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96f026: je 0x96f063 */
  if (zf) goto L_96f063;
L_96f028: /* 96f028: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96f029: call 0x94f340 */
  esp -= 4; W32(esp, 0x96f02eu); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 96f02e: add dword ptr [ebp], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp), r);
  }
/* 96f031: sub dword ptr [0xcf8b88], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8b88u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(0xcf8b88u), r);
  }
/* 96f037: mov eax, dword ptr [ebx + 0x2c] */
  eax = R32((uint32_t)(ebx + 0x2cu));
/* 96f03a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96f03d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96f03f: je 0x96f063 */
  if (zf) goto L_96f063;
L_96f041: /* 96f041: lea esi, [eax + 4] */
  esi = (uint32_t)(eax + 0x4u);
/* 96f044: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 96f046: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96f048: je 0x96f063 */
  if (zf) goto L_96f063;
L_96f04a: /* 96f04a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_96f050: /* 96f050: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96f051: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96f052: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 96f055: call 0x96ecd0 */
  esp -= 4; W32(esp, 0x96f05au); SPILL(); f_96ecd0(); if (g_unwind) return; RELOAD();
/* 96f05a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 96f05c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96f05f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96f061: jne 0x96f050 */
  if (!zf) goto L_96f050;
L_96f063: /* 96f063: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* 96f066: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96f068: je 0x96f0cc */
  if (zf) goto L_96f0cc;
L_96f06a: /* 96f06a: mov edx, dword ptr [0xcf8444] */
  edx = R32((uint32_t)(0xcf8444u));
/* 96f070: mov ecx, dword ptr [0xcf85c8] */
  ecx = R32((uint32_t)(0xcf85c8u));
/* 96f076: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 96f078: add ecx, dword ptr [0xcf8440] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(0xcf8440u)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  ecx = r;
  }
/* 96f07e: je 0x96f0cc */
  if (zf) goto L_96f0cc;
L_96f080: /* 96f080: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96f081: call 0x94f340 */
  esp -= 4; W32(esp, 0x96f086u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 96f086: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 96f08a: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 96f08c: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* 96f08f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96f092: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96f094: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 96f098: je 0x96f0cc */
  if (zf) goto L_96f0cc;
L_96f09a: /* 96f09a: lea esi, [eax + 4] */
  esi = (uint32_t)(eax + 0x4u);
/* 96f09d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 96f09f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96f0a1: je 0x96f0cc */
  if (zf) goto L_96f0cc;
L_96f0a3: /* 96f0a3: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 96f0a7: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 96f0aa: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96f0ac: je 0x96f0ba */
  if (zf) goto L_96f0ba;
L_96f0ae: /* 96f0ae: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96f0af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96f0b0: call 0x96ecd0 */
  esp -= 4; W32(esp, 0x96f0b5u); SPILL(); f_96ecd0(); if (g_unwind) return; RELOAD();
/* 96f0b5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96f0b8: jmp 0x96f0c6 */
  goto L_96f0c6;
L_96f0ba: /* 96f0ba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96f0bc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96f0bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96f0be: call 0x96ead0 */
  esp -= 4; W32(esp, 0x96f0c3u); SPILL(); f_96ead0(); if (g_unwind) return; RELOAD();
/* 96f0c3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96f0c6: /* 96f0c6: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 96f0c8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96f0ca: jne 0x96f0a3 */
  if (!zf) goto L_96f0a3;
L_96f0cc: /* 96f0cc: mov ebx, dword ptr [ebx + 0x1c] */
  ebx = R32((uint32_t)(ebx + 0x1cu));
/* 96f0cf: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96f0d1: jne 0x96efd0 */
  if (!zf) goto L_96efd0;
L_96f0d7: /* 96f0d7: mov eax, dword ptr [0xcf8c18] */
  eax = R32((uint32_t)(0xcf8c18u));
/* 96f0dc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96f0de: je 0x96f12c */
  if (zf) goto L_96f12c;
L_96f0e0: /* 96f0e0: lea esi, [eax + 4] */
  esi = (uint32_t)(eax + 0x4u);
/* 96f0e3: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 96f0e5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96f0e7: je 0x96f12c */
  if (zf) goto L_96f12c;
L_96f0e9: /* 96f0e9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_96f0f0: /* 96f0f0: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 96f0f3: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 96f0f6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96f0f8: je 0x96f126 */
  if (zf) goto L_96f126;
L_96f0fa: /* 96f0fa: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 96f0fe: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96f100: je 0x96f114 */
  if (zf) goto L_96f114;
L_96f102: /* 96f102: mov edx, dword ptr [0xcf8b58] */
  edx = R32((uint32_t)(0xcf8b58u));
/* 96f108: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96f109: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96f10a: call 0x96ecd0 */
  esp -= 4; W32(esp, 0x96f10fu); SPILL(); f_96ecd0(); if (g_unwind) return; RELOAD();
/* 96f10f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96f112: jmp 0x96f126 */
  goto L_96f126;
L_96f114: /* 96f114: mov ecx, dword ptr [0xcf8b58] */
  ecx = R32((uint32_t)(0xcf8b58u));
/* 96f11a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96f11c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96f11d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96f11e: call 0x96ead0 */
  esp -= 4; W32(esp, 0x96f123u); SPILL(); f_96ead0(); if (g_unwind) return; RELOAD();
/* 96f123: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96f126: /* 96f126: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 96f128: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96f12a: jne 0x96f0f0 */
  if (!zf) goto L_96f0f0;
L_96f12c: /* 96f12c: cmp dword ptr [0xcf8438], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96f133: jl 0x96f152 */
  if ((sf != of)) goto L_96f152;
L_96f135: /* 96f135: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 96f139: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 96f13c: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 96f142: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96f143: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96f144: push 0xb012b0 */
  { uint32_t v = 0xb012b0u; esp -= 4; W32(esp, v); }
/* 96f149: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96f14a: call 0x953470 */
  esp -= 4; W32(esp, 0x96f14fu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96f14f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96f152: /* 96f152: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96f153: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96f154: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 96f155: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96f156: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 96f157: ret  */
  esp += 4; SPILL(); return;
}

void f_96f160(void) {
  LOAD_REGS();
L_96f160: /* 96f160: mov eax, dword ptr [0xcf8ba0] */
  eax = R32((uint32_t)(0xcf8ba0u));
/* 96f165: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96f167: je 0x96f1bd */
  if (zf) goto L_96f1bd;
L_96f169: /* 96f169: mov eax, dword ptr [0xcf8488] */
  eax = R32((uint32_t)(0xcf8488u));
/* 96f16e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96f170: jne 0x96f1bd */
  if (!zf) goto L_96f1bd;
L_96f172: /* 96f172: mov eax, dword ptr [0xcf8454] */
  eax = R32((uint32_t)(0xcf8454u));
/* 96f177: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96f179: jne 0x96f1bd */
  if (!zf) goto L_96f1bd;
L_96f17b: /* 96f17b: fld dword ptr [0xcf8bb4] */
  { double v = F32((uint32_t)(0xcf8bb4u)); FPUSH(v); }
/* 96f181: fcomp dword ptr [0xa216c0] */
  fpu_com(ST0, F32((uint32_t)(0xa216c0u)));
  FPOP();
/* 96f187: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 96f189: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 96f18c: jp 0x96f1bd */
  if (pf) goto L_96f1bd;
L_96f18e: /* 96f18e: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 96f193: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96f195: je 0x96f1b0 */
  if (zf) goto L_96f1b0;
L_96f197: /* 96f197: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 96f19b: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 96f1a1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96f1a2: push 0xb01310 */
  { uint32_t v = 0xb01310u; esp -= 4; W32(esp, v); }
/* 96f1a7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96f1a8: call 0x953470 */
  esp -= 4; W32(esp, 0x96f1adu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96f1ad: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96f1b0: /* 96f1b0: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 96f1b2: push 0xcf8ac8 */
  { uint32_t v = 0xcf8ac8u; esp -= 4; W32(esp, v); }
/* 96f1b7: call dword ptr [0xcfb0c8] */
  esp -= 4; W32(esp, 0x96f1bdu); SPILL(); hle_longjmp(); if (g_unwind) return; /* MSVCR70!longjmp */ RELOAD();
L_96f1bd: /* 96f1bd: ret  */
  esp += 4; SPILL(); return;
}

void f_96f1c0(void) {
  LOAD_REGS();
L_96f1c0: /* 96f1c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96f1c1: mov ebp, esp */
  ebp = esp;
/* 96f1c3: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 96f1c6: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 96f1c9: mov eax, dword ptr [0xcf8c14] */
  eax = R32((uint32_t)(0xcf8c14u));
/* 96f1ce: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96f1cf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96f1d0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96f1d1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96f1d2: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 96f1da: call 0x94f340 */
  esp -= 4; W32(esp, 0x96f1dfu); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 96f1df: mov ecx, dword ptr [0xcf8c18] */
  ecx = R32((uint32_t)(0xcf8c18u));
/* 96f1e5: mov ebx, dword ptr [0xcf85d4] */
  ebx = R32((uint32_t)(0xcf85d4u));
/* 96f1eb: mov edi, eax */
  edi = eax;
/* 96f1ed: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96f1ee: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 96f1f0: call 0x94f340 */
  esp -= 4; W32(esp, 0x96f1f5u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 96f1f5: mov edx, dword ptr [0xcf8424] */
  edx = R32((uint32_t)(0xcf8424u));
/* 96f1fb: mov ebx, dword ptr [0xcf8b84] */
  ebx = R32((uint32_t)(0xcf8b84u));
/* 96f201: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96f202: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 96f204: call 0x95f210 */
  esp -= 4; W32(esp, 0x96f209u); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 96f209: mov esi, dword ptr [0xcf8b4c] */
  esi = R32((uint32_t)(0xcf8b4cu));
/* 96f20f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96f212: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96f214: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 96f218: je 0x96f248 */
  if (zf) goto L_96f248;
L_96f21a: /* 96f21a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_96f220: /* 96f220: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 96f223: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96f225: je 0x96f248 */
  if (zf) goto L_96f248;
L_96f227: /* 96f227: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 96f22a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96f22c: je 0x96f241 */
  if (zf) goto L_96f241;
L_96f22e: /* 96f22e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96f22f: call 0x94f340 */
  esp -= 4; W32(esp, 0x96f234u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 96f234: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 96f238: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96f23b: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 96f23d: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
L_96f241: /* 96f241: mov esi, dword ptr [esi + 0x1c] */
  esi = R32((uint32_t)(esi + 0x1cu));
/* 96f244: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96f246: jne 0x96f220 */
  if (!zf) goto L_96f220;
L_96f248: /* 96f248: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 96f24c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 96f24e: mov edx, dword ptr [0xcf8588] */
  edx = R32((uint32_t)(0xcf8588u));
/* 96f254: mov ecx, dword ptr [0xcf8584] */
  ecx = R32((uint32_t)(0xcf8584u));
/* 96f25a: jl 0x96f26d */
  if ((sf != of)) goto L_96f26d;
L_96f25c: /* 96f25c: lea esi, [ecx - 1] */
  esi = (uint32_t)(ecx + 0xffffffffu);
/* 96f25f: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96f261: je 0x96f26d */
  if (zf) goto L_96f26d;
L_96f263: /* 96f263: or esi, 0xffffffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 96f266: sub esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 96f268: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96f26a: je 0x96f26d */
  if (zf) goto L_96f26d;
L_96f26c: /* 96f26c: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
L_96f26d: /* 96f26d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96f26f: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 96f272: jne 0x96f278 */
  if (!zf) goto L_96f278;
L_96f274: /* 96f274: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96f276: je 0x96f286 */
  if (zf) goto L_96f286;
L_96f278: /* 96f278: push 0xb019b4 */
  { uint32_t v = 0xb019b4u; esp -= 4; W32(esp, v); }
/* 96f27d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96f27e: call 0x953470 */
  esp -= 4; W32(esp, 0x96f283u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96f283: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96f286: /* 96f286: mov eax, dword ptr [0xcf85b0] */
  eax = R32((uint32_t)(0xcf85b0u));
/* 96f28b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96f28d: je 0x96f33b */
  if (zf) goto L_96f33b;
L_96f293: /* 96f293: mov eax, dword ptr [0xcf85a4] */
  eax = R32((uint32_t)(0xcf85a4u));
/* 96f298: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96f29a: je 0x96f2aa */
  if (zf) goto L_96f2aa;
L_96f29c: /* 96f29c: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 96f2a1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96f2a2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96f2a3: push 0xb01968 */
  { uint32_t v = 0xb01968u; esp -= 4; W32(esp, v); }
/* 96f2a8: jmp 0x96f2b7 */
  goto L_96f2b7;
L_96f2aa: /* 96f2aa: mov ecx, dword ptr [0xcf85cc] */
  ecx = R32((uint32_t)(0xcf85ccu));
/* 96f2b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96f2b1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96f2b2: push 0xb01928 */
  { uint32_t v = 0xb01928u; esp -= 4; W32(esp, v); }
L_96f2b7: /* 96f2b7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96f2b8: call 0x953470 */
  esp -= 4; W32(esp, 0x96f2bdu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96f2bd: mov eax, dword ptr [0xcf83f0] */
  eax = R32((uint32_t)(0xcf83f0u));
/* 96f2c2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96f2c5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96f2c7: mov eax, 0xb01914 */
  eax = 0xb01914u;
/* 96f2cc: jne 0x96f2d3 */
  if (!zf) goto L_96f2d3;
L_96f2ce: /* 96f2ce: mov eax, 0xcf2eb4 */
  eax = 0xcf2eb4u;
L_96f2d3: /* 96f2d3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96f2d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96f2d5: push 0xb018f0 */
  { uint32_t v = 0xb018f0u; esp -= 4; W32(esp, v); }
/* 96f2da: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96f2db: call 0x953470 */
  esp -= 4; W32(esp, 0x96f2e0u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96f2e0: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 96f2e4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96f2e7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96f2e9: je 0x96f2f5 */
  if (zf) goto L_96f2f5;
L_96f2eb: /* 96f2eb: mov edx, eax */
  edx = eax;
/* 96f2ed: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96f2ee: push 0xb018c8 */
  { uint32_t v = 0xb018c8u; esp -= 4; W32(esp, v); }
/* 96f2f3: jmp 0x96f301 */
  goto L_96f301;
L_96f2f5: /* 96f2f5: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96f2f7: jle 0x96f30a */
  if ((zf || sf != of)) goto L_96f30a;
L_96f2f9: /* 96f2f9: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 96f2fb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96f2fc: push 0xb01898 */
  { uint32_t v = 0xb01898u; esp -= 4; W32(esp, v); }
L_96f301: /* 96f301: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96f302: call 0x953470 */
  esp -= 4; W32(esp, 0x96f307u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96f307: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96f30a: /* 96f30a: mov eax, dword ptr [0xcf8b8c] */
  eax = R32((uint32_t)(0xcf8b8cu));
/* 96f30f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96f310: push 0xb01874 */
  { uint32_t v = 0xb01874u; esp -= 4; W32(esp, v); }
/* 96f315: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96f316: call 0x953470 */
  esp -= 4; W32(esp, 0x96f31bu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96f31b: mov ecx, dword ptr [0xcf8b80] */
  ecx = R32((uint32_t)(0xcf8b80u));
/* 96f321: sub ecx, dword ptr [0xcf8b60] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(0xcf8b60u)));
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 96f327: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96f328: push 0xb01854 */
  { uint32_t v = 0xb01854u; esp -= 4; W32(esp, v); }
/* 96f32d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96f32e: call 0x953470 */
  esp -= 4; W32(esp, 0x96f333u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96f333: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96f336: jmp 0x96f51f */
  goto L_96f51f;
L_96f33b: /* 96f33b: mov eax, dword ptr [0xcf8410] */
  eax = R32((uint32_t)(0xcf8410u));
/* 96f340: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96f342: je 0x96f3f0 */
  if (zf) goto L_96f3f0;
L_96f348: /* 96f348: mov eax, dword ptr [0xcf85a4] */
  eax = R32((uint32_t)(0xcf85a4u));
/* 96f34d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96f34f: je 0x96f360 */
  if (zf) goto L_96f360;
L_96f351: /* 96f351: mov edx, dword ptr [0xcf85cc] */
  edx = R32((uint32_t)(0xcf85ccu));
/* 96f357: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96f358: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96f359: push 0xb01800 */
  { uint32_t v = 0xb01800u; esp -= 4; W32(esp, v); }
/* 96f35e: jmp 0x96f36c */
  goto L_96f36c;
L_96f360: /* 96f360: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 96f365: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96f366: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96f367: push 0xb017b8 */
  { uint32_t v = 0xb017b8u; esp -= 4; W32(esp, v); }
L_96f36c: /* 96f36c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96f36d: call 0x953470 */
  esp -= 4; W32(esp, 0x96f372u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96f372: mov eax, dword ptr [0xcf83f0] */
  eax = R32((uint32_t)(0xcf83f0u));
/* 96f377: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96f37a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96f37c: mov eax, 0xb01914 */
  eax = 0xb01914u;
/* 96f381: jne 0x96f388 */
  if (!zf) goto L_96f388;
L_96f383: /* 96f383: mov eax, 0xcf2eb4 */
  eax = 0xcf2eb4u;
L_96f388: /* 96f388: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96f389: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96f38a: push 0xb01798 */
  { uint32_t v = 0xb01798u; esp -= 4; W32(esp, v); }
/* 96f38f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96f390: call 0x953470 */
  esp -= 4; W32(esp, 0x96f395u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96f395: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 96f399: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96f39c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96f39e: je 0x96f3aa */
  if (zf) goto L_96f3aa;
L_96f3a0: /* 96f3a0: mov ecx, eax */
  ecx = eax;
/* 96f3a2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96f3a3: push 0xb018c8 */
  { uint32_t v = 0xb018c8u; esp -= 4; W32(esp, v); }
/* 96f3a8: jmp 0x96f3b6 */
  goto L_96f3b6;
L_96f3aa: /* 96f3aa: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96f3ac: jle 0x96f3bf */
  if ((zf || sf != of)) goto L_96f3bf;
L_96f3ae: /* 96f3ae: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 96f3b0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96f3b1: push 0xb01898 */
  { uint32_t v = 0xb01898u; esp -= 4; W32(esp, v); }
L_96f3b6: /* 96f3b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96f3b7: call 0x953470 */
  esp -= 4; W32(esp, 0x96f3bcu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96f3bc: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96f3bf: /* 96f3bf: mov edx, dword ptr [0xcf8b8c] */
  edx = R32((uint32_t)(0xcf8b8cu));
/* 96f3c5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96f3c6: push 0xb01774 */
  { uint32_t v = 0xb01774u; esp -= 4; W32(esp, v); }
/* 96f3cb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96f3cc: call 0x953470 */
  esp -= 4; W32(esp, 0x96f3d1u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96f3d1: mov eax, dword ptr [0xcf8b80] */
  eax = R32((uint32_t)(0xcf8b80u));
/* 96f3d6: sub eax, dword ptr [0xcf8b60] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0xcf8b60u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 96f3dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96f3dd: push 0xb01854 */
  { uint32_t v = 0xb01854u; esp -= 4; W32(esp, v); }
/* 96f3e2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96f3e3: call 0x953470 */
  esp -= 4; W32(esp, 0x96f3e8u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96f3e8: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96f3eb: jmp 0x96f51f */
  goto L_96f51f;
L_96f3f0: /* 96f3f0: mov ecx, dword ptr [0xcf85cc] */
  ecx = R32((uint32_t)(0xcf85ccu));
/* 96f3f6: mov eax, dword ptr [0xcf8434] */
  eax = R32((uint32_t)(0xcf8434u));
/* 96f3fb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96f3fd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96f3fe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96f3ff: je 0x96f492 */
  if (zf) goto L_96f492;
L_96f405: /* 96f405: push 0xb01730 */
  { uint32_t v = 0xb01730u; esp -= 4; W32(esp, v); }
/* 96f40a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96f40b: call 0x953470 */
  esp -= 4; W32(esp, 0x96f410u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96f410: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96f411: push 0xb01704 */
  { uint32_t v = 0xb01704u; esp -= 4; W32(esp, v); }
/* 96f416: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96f417: call 0x953470 */
  esp -= 4; W32(esp, 0x96f41cu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96f41c: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 96f420: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96f423: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96f425: je 0x96f460 */
  if (zf) goto L_96f460;
L_96f427: /* 96f427: mov eax, dword ptr [0xcf8444] */
  eax = R32((uint32_t)(0xcf8444u));
/* 96f42c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96f42e: je 0x96f447 */
  if (zf) goto L_96f447;
L_96f430: /* 96f430: mov eax, dword ptr [0xcf8440] */
  eax = R32((uint32_t)(0xcf8440u));
/* 96f435: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96f437: je 0x96f440 */
  if (zf) goto L_96f440;
L_96f439: /* 96f439: mov eax, 0xb016ec */
  eax = 0xb016ecu;
/* 96f43e: jmp 0x96f44c */
  goto L_96f44c;
L_96f440: /* 96f440: mov eax, 0xb016e0 */
  eax = 0xb016e0u;
/* 96f445: jmp 0x96f44c */
  goto L_96f44c;
L_96f447: /* 96f447: mov eax, 0xb016d8 */
  eax = 0xb016d8u;
L_96f44c: /* 96f44c: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 96f450: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96f451: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96f452: push 0xb016b8 */
  { uint32_t v = 0xb016b8u; esp -= 4; W32(esp, v); }
/* 96f457: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96f458: call 0x953470 */
  esp -= 4; W32(esp, 0x96f45du); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96f45d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96f460: /* 96f460: mov eax, dword ptr [0xcf8b80] */
  eax = R32((uint32_t)(0xcf8b80u));
/* 96f465: sub eax, dword ptr [0xcf8b60] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0xcf8b60u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 96f46b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96f46c: push 0xb01690 */
  { uint32_t v = 0xb01690u; esp -= 4; W32(esp, v); }
/* 96f471: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96f472: call 0x953470 */
  esp -= 4; W32(esp, 0x96f477u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96f477: mov eax, dword ptr [0xcf8b8c] */
  eax = R32((uint32_t)(0xcf8b8cu));
/* 96f47c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96f47f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96f481: je 0x96f51f */
  if (zf) goto L_96f51f;
L_96f487: /* 96f487: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96f488: push 0xb01668 */
  { uint32_t v = 0xb01668u; esp -= 4; W32(esp, v); }
/* 96f48d: jmp 0x96f516 */
  goto L_96f516;
L_96f492: /* 96f492: push 0xb01640 */
  { uint32_t v = 0xb01640u; esp -= 4; W32(esp, v); }
/* 96f497: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96f498: call 0x953470 */
  esp -= 4; W32(esp, 0x96f49du); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96f49d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96f49e: push 0xb01624 */
  { uint32_t v = 0xb01624u; esp -= 4; W32(esp, v); }
/* 96f4a3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96f4a4: call 0x953470 */
  esp -= 4; W32(esp, 0x96f4a9u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96f4a9: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 96f4ad: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96f4b0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96f4b2: je 0x96f4ed */
  if (zf) goto L_96f4ed;
L_96f4b4: /* 96f4b4: mov eax, dword ptr [0xcf8444] */
  eax = R32((uint32_t)(0xcf8444u));
/* 96f4b9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96f4bb: je 0x96f4d4 */
  if (zf) goto L_96f4d4;
L_96f4bd: /* 96f4bd: mov eax, dword ptr [0xcf8440] */
  eax = R32((uint32_t)(0xcf8440u));
/* 96f4c2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96f4c4: je 0x96f4cd */
  if (zf) goto L_96f4cd;
L_96f4c6: /* 96f4c6: mov eax, 0xb0160c */
  eax = 0xb0160cu;
/* 96f4cb: jmp 0x96f4d9 */
  goto L_96f4d9;
L_96f4cd: /* 96f4cd: mov eax, 0xb01600 */
  eax = 0xb01600u;
/* 96f4d2: jmp 0x96f4d9 */
  goto L_96f4d9;
L_96f4d4: /* 96f4d4: mov eax, 0xb015f4 */
  eax = 0xb015f4u;
L_96f4d9: /* 96f4d9: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 96f4dd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96f4de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96f4df: push 0xb015d8 */
  { uint32_t v = 0xb015d8u; esp -= 4; W32(esp, v); }
/* 96f4e4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96f4e5: call 0x953470 */
  esp -= 4; W32(esp, 0x96f4eau); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96f4ea: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96f4ed: /* 96f4ed: mov eax, dword ptr [0xcf8b80] */
  eax = R32((uint32_t)(0xcf8b80u));
/* 96f4f2: sub eax, dword ptr [0xcf8b60] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0xcf8b60u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 96f4f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96f4f9: push 0xb015c0 */
  { uint32_t v = 0xb015c0u; esp -= 4; W32(esp, v); }
/* 96f4fe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96f4ff: call 0x953470 */
  esp -= 4; W32(esp, 0x96f504u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96f504: mov eax, dword ptr [0xcf8b8c] */
  eax = R32((uint32_t)(0xcf8b8cu));
/* 96f509: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96f50c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96f50e: je 0x96f51f */
  if (zf) goto L_96f51f;
L_96f510: /* 96f510: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96f511: push 0xb015a0 */
  { uint32_t v = 0xb015a0u; esp -= 4; W32(esp, v); }
L_96f516: /* 96f516: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96f517: call 0x953470 */
  esp -= 4; W32(esp, 0x96f51cu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96f51c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96f51f: /* 96f51f: push 0xcf85e8 */
  { uint32_t v = 0xcf85e8u; esp -= 4; W32(esp, v); }
/* 96f524: push 0xcf86e8 */
  { uint32_t v = 0xcf86e8u; esp -= 4; W32(esp, v); }
/* 96f529: push 0xb01584 */
  { uint32_t v = 0xb01584u; esp -= 4; W32(esp, v); }
/* 96f52e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96f52f: call 0x953470 */
  esp -= 4; W32(esp, 0x96f534u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96f534: mov eax, dword ptr [0xcf8568] */
  eax = R32((uint32_t)(0xcf8568u));
/* 96f539: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96f53c: cmp eax, 0x80000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96f541: je 0x96f554 */
  if (zf) goto L_96f554;
L_96f543: /* 96f543: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96f544: push 0xb0157c */
  { uint32_t v = 0xb0157cu; esp -= 4; W32(esp, v); }
/* 96f549: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96f54a: call 0x953470 */
  esp -= 4; W32(esp, 0x96f54fu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96f54f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96f552: jmp 0x96f562 */
  goto L_96f562;
L_96f554: /* 96f554: push 0xaf64e4 */
  { uint32_t v = 0xaf64e4u; esp -= 4; W32(esp, v); }
/* 96f559: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96f55a: call 0x953470 */
  esp -= 4; W32(esp, 0x96f55fu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96f55f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96f562: /* 96f562: mov ecx, dword ptr [0xcf7a1c] */
  ecx = R32((uint32_t)(0xcf7a1cu));
/* 96f568: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96f569: push 0xb01558 */
  { uint32_t v = 0xb01558u; esp -= 4; W32(esp, v); }
/* 96f56e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96f56f: call 0x953470 */
  esp -= 4; W32(esp, 0x96f574u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96f574: mov edx, dword ptr [0xcf7a70] */
  edx = R32((uint32_t)(0xcf7a70u));
/* 96f57a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96f57b: push 0xb01530 */
  { uint32_t v = 0xb01530u; esp -= 4; W32(esp, v); }
/* 96f580: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96f581: call 0x953470 */
  esp -= 4; W32(esp, 0x96f586u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96f586: mov eax, dword ptr [0xcf79f4] */
  eax = R32((uint32_t)(0xcf79f4u));
/* 96f58b: mov ecx, dword ptr [0xcf79e8] */
  ecx = R32((uint32_t)(0xcf79e8u));
/* 96f591: mov edi, dword ptr [0xcf7a00] */
  edi = R32((uint32_t)(0xcf7a00u));
/* 96f597: mov edx, dword ptr [0xcf79fc] */
  edx = R32((uint32_t)(0xcf79fcu));
/* 96f59d: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 96f59f: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 96f5a1: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 96f5a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96f5a4: push 0xb01504 */
  { uint32_t v = 0xb01504u; esp -= 4; W32(esp, v); }
/* 96f5a9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96f5aa: call 0x953470 */
  esp -= 4; W32(esp, 0x96f5afu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96f5af: mov eax, dword ptr [0xcf7850] */
  eax = R32((uint32_t)(0xcf7850u));
/* 96f5b4: mov edx, dword ptr [0xcf7854] */
  edx = R32((uint32_t)(0xcf7854u));
/* 96f5ba: mov ecx, dword ptr [0xcf7a80] */
  ecx = R32((uint32_t)(0xcf7a80u));
/* 96f5c0: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 96f5c2: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96f5c5: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 96f5c7: je 0x96f608 */
  if (zf) goto L_96f608;
L_96f5c9: /* 96f5c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96f5ca: push 0xb014e4 */
  { uint32_t v = 0xb014e4u; esp -= 4; W32(esp, v); }
/* 96f5cf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96f5d0: call 0x953470 */
  esp -= 4; W32(esp, 0x96f5d5u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96f5d5: mov eax, dword ptr [0xcf7880] */
  eax = R32((uint32_t)(0xcf7880u));
/* 96f5da: mov edx, dword ptr [0xcf789c] */
  edx = R32((uint32_t)(0xcf789cu));
/* 96f5e0: mov ecx, dword ptr [0xcf7884] */
  ecx = R32((uint32_t)(0xcf7884u));
/* 96f5e6: mov ebx, dword ptr [0xcf7800] */
  ebx = R32((uint32_t)(0xcf7800u));
/* 96f5ec: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 96f5ee: mov eax, dword ptr [0xcf7804] */
  eax = R32((uint32_t)(0xcf7804u));
/* 96f5f3: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 96f5f5: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 96f5f7: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 96f5f9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96f5fa: push 0xb014b8 */
  { uint32_t v = 0xb014b8u; esp -= 4; W32(esp, v); }
/* 96f5ff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96f600: call 0x953470 */
  esp -= 4; W32(esp, 0x96f605u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96f605: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96f608: /* 96f608: mov eax, dword ptr [0xcf8558] */
  eax = R32((uint32_t)(0xcf8558u));
/* 96f60d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96f60f: jne 0x96f650 */
  if (!zf) goto L_96f650;
L_96f611: /* 96f611: mov eax, dword ptr [0xcf8bec] */
  eax = R32((uint32_t)(0xcf8becu));
/* 96f616: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96f618: je 0x96f650 */
  if (zf) goto L_96f650;
L_96f61a: /* 96f61a: mov ecx, dword ptr [0xcf8b9c] */
  ecx = R32((uint32_t)(0xcf8b9cu));
/* 96f620: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 96f624: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 96f62c: fild qword ptr [esp + 0x18] */
  { double v = (double)(int64_t)R64((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 96f630: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 96f633: fmul dword ptr [0x9f7c0c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c0cu)));
/* 96f639: fst dword ptr [0xcf7848] */
  WF32((uint32_t)(0xcf7848u), ST0);
/* 96f63f: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 96f642: push 0xb01484 */
  { uint32_t v = 0xb01484u; esp -= 4; W32(esp, v); }
/* 96f647: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96f648: call 0x953470 */
  esp -= 4; W32(esp, 0x96f64du); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96f64d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96f650: /* 96f650: mov eax, dword ptr [0xcf8564] */
  eax = R32((uint32_t)(0xcf8564u));
/* 96f655: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96f657: je 0x96f68a */
  if (zf) goto L_96f68a;
L_96f659: /* 96f659: mov eax, dword ptr [0xcf8488] */
  eax = R32((uint32_t)(0xcf8488u));
/* 96f65e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96f660: jne 0x96f6d1 */
  if (!zf) goto L_96f6d1;
L_96f662: /* 96f662: mov eax, dword ptr [0xcf8454] */
  eax = R32((uint32_t)(0xcf8454u));
/* 96f667: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96f669: jne 0x96f6d1 */
  if (!zf) goto L_96f6d1;
L_96f66b: /* 96f66b: fild dword ptr [0xcf7a34] */
  { double v = (double)(int32_t)R32((uint32_t)(0xcf7a34u)); FPUSH(v); }
/* 96f671: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 96f674: fmul qword ptr [0xa21750] */
  ST0 = ST0 * (F64((uint32_t)(0xa21750u)));
/* 96f67a: fidiv dword ptr [0xcf8ba4] */
  ST0 = ST0 / ((double)(int32_t)R32((uint32_t)(0xcf8ba4u)));
/* 96f680: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 96f683: push 0xb01450 */
  { uint32_t v = 0xb01450u; esp -= 4; W32(esp, v); }
/* 96f688: jmp 0x96f6c8 */
  goto L_96f6c8;
L_96f68a: /* 96f68a: fld dword ptr [0xcf8bb4] */
  { double v = F32((uint32_t)(0xcf8bb4u)); FPUSH(v); }
/* 96f690: fcomp dword ptr [0xa216c0] */
  fpu_com(ST0, F32((uint32_t)(0xa216c0u)));
  FPOP();
/* 96f696: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 96f698: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 96f69b: jp 0x96f6d1 */
  if (pf) goto L_96f6d1;
L_96f69d: /* 96f69d: mov eax, dword ptr [0xcf7a34] */
  eax = R32((uint32_t)(0xcf7a34u));
/* 96f6a2: fld dword ptr [0xcf8bb4] */
  { double v = F32((uint32_t)(0xcf8bb4u)); FPUSH(v); }
/* 96f6a8: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 96f6ab: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96f6ad: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 96f6b0: je 0x96f6c3 */
  if (zf) goto L_96f6c3;
L_96f6b2: /* 96f6b2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96f6b3: push 0xb01420 */
  { uint32_t v = 0xb01420u; esp -= 4; W32(esp, v); }
/* 96f6b8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96f6b9: call 0x953470 */
  esp -= 4; W32(esp, 0x96f6beu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96f6be: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96f6c1: jmp 0x96f6d1 */
  goto L_96f6d1;
L_96f6c3: /* 96f6c3: push 0xb01404 */
  { uint32_t v = 0xb01404u; esp -= 4; W32(esp, v); }
L_96f6c8: /* 96f6c8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96f6c9: call 0x953470 */
  esp -= 4; W32(esp, 0x96f6ceu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96f6ce: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96f6d1: /* 96f6d1: fld dword ptr [0xcf8bf0] */
  { double v = F32((uint32_t)(0xcf8bf0u)); FPUSH(v); }
/* 96f6d7: fcomp qword ptr [0x9f7668] */
  fpu_com(ST0, F64((uint32_t)(0x9f7668u)));
  FPOP();
/* 96f6dd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 96f6df: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 96f6e2: jnp 0x96f712 */
  if (!pf) goto L_96f712;
L_96f6e4: /* 96f6e4: mov eax, dword ptr [0xcf7a80] */
  eax = R32((uint32_t)(0xcf7a80u));
/* 96f6e9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96f6eb: mov eax, 0xb013f8 */
  eax = 0xb013f8u;
/* 96f6f0: jne 0x96f6f7 */
  if (!zf) goto L_96f6f7;
L_96f6f2: /* 96f6f2: mov eax, 0xb013f0 */
  eax = 0xb013f0u;
L_96f6f7: /* 96f6f7: fld dword ptr [0xcf8bf0] */
  { double v = F32((uint32_t)(0xcf8bf0u)); FPUSH(v); }
/* 96f6fd: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 96f700: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 96f703: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96f704: push 0xb013d4 */
  { uint32_t v = 0xb013d4u; esp -= 4; W32(esp, v); }
/* 96f709: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96f70a: call 0x953470 */
  esp -= 4; W32(esp, 0x96f70fu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96f70f: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96f712: /* 96f712: fld dword ptr [0xcf8bf4] */
  { double v = F32((uint32_t)(0xcf8bf4u)); FPUSH(v); }
/* 96f718: fcomp qword ptr [0x9f7668] */
  fpu_com(ST0, F64((uint32_t)(0x9f7668u)));
  FPOP();
/* 96f71e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 96f720: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 96f723: jnp 0x96f753 */
  if (!pf) goto L_96f753;
L_96f725: /* 96f725: mov eax, dword ptr [0xcf7a80] */
  eax = R32((uint32_t)(0xcf7a80u));
/* 96f72a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96f72c: mov eax, 0xb013f8 */
  eax = 0xb013f8u;
/* 96f731: jne 0x96f738 */
  if (!zf) goto L_96f738;
L_96f733: /* 96f733: mov eax, 0xb013f0 */
  eax = 0xb013f0u;
L_96f738: /* 96f738: fld dword ptr [0xcf8bf4] */
  { double v = F32((uint32_t)(0xcf8bf4u)); FPUSH(v); }
/* 96f73e: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 96f741: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 96f744: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96f745: push 0xb013b8 */
  { uint32_t v = 0xb013b8u; esp -= 4; W32(esp, v); }
/* 96f74a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96f74b: call 0x953470 */
  esp -= 4; W32(esp, 0x96f750u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96f750: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96f753: /* 96f753: mov eax, dword ptr [0xcf845c] */
  eax = R32((uint32_t)(0xcf845cu));
/* 96f758: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96f75a: je 0x96f8cb */
  if (zf) goto L_96f8cb;
L_96f760: /* 96f760: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 96f764: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96f765: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 96f769: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96f76a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 96f76c: call 0x964120 */
  esp -= 4; W32(esp, 0x96f771u); SPILL(); f_964120(); if (g_unwind) return; RELOAD();
/* 96f771: fld dword ptr [0xcf8a14] */
  { double v = F32((uint32_t)(0xcf8a14u)); FPUSH(v); }
/* 96f777: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 96f779: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96f77c: fcomp dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
  FPOP();
/* 96f780: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 96f782: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 96f785: jp 0x96f826 */
  if (pf) goto L_96f826;
L_96f78b: /* 96f78b: mov eax, dword ptr [0xcf8bec] */
  eax = R32((uint32_t)(0xcf8becu));
/* 96f790: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96f792: mov eax, 0xcf2eb4 */
  eax = 0xcf2eb4u;
/* 96f797: jne 0x96f79e */
  if (!zf) goto L_96f79e;
L_96f799: /* 96f799: mov eax, 0xb013b0 */
  eax = 0xb013b0u;
L_96f79e: /* 96f79e: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 96f7a2: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 96f7a5: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 96f7a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96f7a9: push 0xb0137c */
  { uint32_t v = 0xb0137cu; esp -= 4; W32(esp, v); }
/* 96f7ae: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96f7af: call 0x953470 */
  esp -= 4; W32(esp, 0x96f7b4u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96f7b4: fld dword ptr [0xcf8a48] */
  { double v = F32((uint32_t)(0xcf8a48u)); FPUSH(v); }
/* 96f7ba: fadd dword ptr [0xcf8a14] */
  ST0 = ST0 + (F32((uint32_t)(0xcf8a14u)));
/* 96f7c0: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96f7c3: fdivr dword ptr [esp + 0x10] */
  ST0 = (F32((uint32_t)(esp + 0x10u))) / ST0;
/* 96f7c7: fst dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0);
/* 96f7cb: fcomp qword ptr [0xa21548] */
  fpu_com(ST0, F64((uint32_t)(0xa21548u)));
  FPOP();
/* 96f7d1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 96f7d3: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 96f7d6: jne 0x96f818 */
  if (!zf) goto L_96f818;
L_96f7d8: /* 96f7d8: fld dword ptr [0xcf8a48] */
  { double v = F32((uint32_t)(0xcf8a48u)); FPUSH(v); }
/* 96f7de: fcomp dword ptr [0xcf83ec] */
  fpu_com(ST0, F32((uint32_t)(0xcf83ecu)));
  FPOP();
/* 96f7e4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 96f7e6: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 96f7e9: jne 0x96f818 */
  if (!zf) goto L_96f818;
L_96f7eb: /* 96f7eb: fld dword ptr [0xcf8bb4] */
  { double v = F32((uint32_t)(0xcf8bb4u)); FPUSH(v); }
/* 96f7f1: fcomp dword ptr [0xa216c0] */
  fpu_com(ST0, F32((uint32_t)(0xa216c0u)));
  FPOP();
/* 96f7f7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 96f7f9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 96f7fc: jne 0x96f818 */
  if (!zf) goto L_96f818;
L_96f7fe: /* 96f7fe: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 96f802: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 96f805: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 96f808: push 0xb01370 */
  { uint32_t v = 0xb01370u; esp -= 4; W32(esp, v); }
/* 96f80d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96f80e: call 0x953470 */
  esp -= 4; W32(esp, 0x96f813u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96f813: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96f816: jmp 0x96f826 */
  goto L_96f826;
L_96f818: /* 96f818: push 0xaf2b88 */
  { uint32_t v = 0xaf2b88u; esp -= 4; W32(esp, v); }
/* 96f81d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96f81e: call 0x953470 */
  esp -= 4; W32(esp, 0x96f823u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96f823: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96f826: /* 96f826: fld dword ptr [0xcf8a14] */
  { double v = F32((uint32_t)(0xcf8a14u)); FPUSH(v); }
/* 96f82c: fmul dword ptr [0xa0c9b4] */
  ST0 = ST0 * (F32((uint32_t)(0xa0c9b4u)));
/* 96f832: fcomp dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
  FPOP();
/* 96f836: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 96f838: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 96f83b: jne 0x96f8cb */
  if (!zf) goto L_96f8cb;
L_96f841: /* 96f841: mov eax, dword ptr [0xcf8bec] */
  eax = R32((uint32_t)(0xcf8becu));
/* 96f846: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96f848: mov eax, 0xcf2eb4 */
  eax = 0xcf2eb4u;
/* 96f84d: jne 0x96f854 */
  if (!zf) goto L_96f854;
L_96f84f: /* 96f84f: mov eax, 0xb013b0 */
  eax = 0xb013b0u;
L_96f854: /* 96f854: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 96f858: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 96f85b: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 96f85e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96f85f: push 0xb0133c */
  { uint32_t v = 0xb0133cu; esp -= 4; W32(esp, v); }
/* 96f864: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96f865: call 0x953470 */
  esp -= 4; W32(esp, 0x96f86au); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96f86a: fld dword ptr [0xcf8a48] */
  { double v = F32((uint32_t)(0xcf8a48u)); FPUSH(v); }
/* 96f870: fadd dword ptr [0xcf8a14] */
  ST0 = ST0 + (F32((uint32_t)(0xcf8a14u)));
/* 96f876: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96f879: fdivr dword ptr [esp + 0x14] */
  ST0 = (F32((uint32_t)(esp + 0x14u))) / ST0;
/* 96f87d: fchs  */
  ST0 = -ST0;
/* 96f87f: fst dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0);
/* 96f883: fcomp qword ptr [0xa21548] */
  fpu_com(ST0, F64((uint32_t)(0xa21548u)));
  FPOP();
/* 96f889: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 96f88b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 96f88e: jne 0x96f8bd */
  if (!zf) goto L_96f8bd;
L_96f890: /* 96f890: fld dword ptr [0xcf8bb4] */
  { double v = F32((uint32_t)(0xcf8bb4u)); FPUSH(v); }
/* 96f896: fcomp dword ptr [0xa216c0] */
  fpu_com(ST0, F32((uint32_t)(0xa216c0u)));
  FPOP();
/* 96f89c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 96f89e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 96f8a1: jne 0x96f8bd */
  if (!zf) goto L_96f8bd;
L_96f8a3: /* 96f8a3: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 96f8a7: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 96f8aa: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 96f8ad: push 0xb01370 */
  { uint32_t v = 0xb01370u; esp -= 4; W32(esp, v); }
/* 96f8b2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96f8b3: call 0x953470 */
  esp -= 4; W32(esp, 0x96f8b8u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96f8b8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96f8bb: jmp 0x96f8cb */
  goto L_96f8cb;
L_96f8bd: /* 96f8bd: push 0xaf2b88 */
  { uint32_t v = 0xaf2b88u; esp -= 4; W32(esp, v); }
/* 96f8c2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96f8c3: call 0x953470 */
  esp -= 4; W32(esp, 0x96f8c8u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96f8c8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96f8cb: /* 96f8cb: push 0xaf2b88 */
  { uint32_t v = 0xaf2b88u; esp -= 4; W32(esp, v); }
/* 96f8d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96f8d1: call 0x953470 */
  esp -= 4; W32(esp, 0x96f8d6u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96f8d6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96f8d9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96f8da: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96f8db: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96f8dc: mov esp, ebp */
  esp = ebp;
/* 96f8de: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 96f8df: ret  */
  esp += 4; SPILL(); return;
}

void f_96f8e0(void) {
  LOAD_REGS();
L_96f8e0: /* 96f8e0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 96f8e3: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 96f8e7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96f8e8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96f8e9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96f8ea: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 96f8ee: lea esi, [eax + edi*4] */
  esi = (uint32_t)(eax + edi*4);
/* 96f8f1: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 96f8f5: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 96f8f9: add esi, -4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 96f8fc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96f8fe: mov dword ptr [esp + 0xc], 0xffffffff */
  W32((uint32_t)(esp + 0xcu), 0xffffffffu);
/* 96f906: je 0x96f910 */
  if (zf) goto L_96f910;
L_96f908: /* 96f908: fld qword ptr [0xa14ed8] */
  { double v = F64((uint32_t)(0xa14ed8u)); FPUSH(v); }
/* 96f90e: jmp 0x96f916 */
  goto L_96f916;
L_96f910: /* 96f910: fld qword ptr [0xa0da58] */
  { double v = F64((uint32_t)(0xa0da58u)); FPUSH(v); }
L_96f916: /* 96f916: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 96f91a: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 96f91c: sub esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 96f91f: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96f921: je 0x96fa0c */
  if (zf) goto L_96fa0c;
L_96f927: /* 96f927: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 96f92b: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 96f92e: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* 96f932: mov ecx, 4 */
  ecx = 0x4u;
/* 96f937: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 96f939: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96f93a: lea ebx, [eax + ebp*4] */
  ebx = (uint32_t)(eax + ebp*4);
/* 96f93d: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 96f941: jmp 0x96f950 */
  goto L_96f950;
L_96f943: /* 96f943: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 96f947: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
/* 96f94b: nop  */
/* 96f94c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_96f950: /* 96f950: sub ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 96f953: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 96f959: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 96f95b: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  ebp = r;
  }
/* 96f95c: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 96f95e: lea edx, [ebp + 1] */
  edx = (uint32_t)(ebp + 0x1u);
/* 96f961: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 96f963: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96f965: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 96f968: jge 0x96f981 */
  if ((sf == of)) goto L_96f981;
L_96f96a: /* 96f96a: sub edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 96f96c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_96f970: /* 96f970: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 96f972: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 96f975: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 96f977: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 96f97a: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 96f97b: fsubr dword ptr [esi] */
  ST0 = (F32((uint32_t)(esi))) - ST0;
/* 96f97d: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 96f97f: jne 0x96f970 */
  if (!zf) goto L_96f970;
L_96f981: /* 96f981: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 96f983: fld dword ptr [edx + ebp*4] */
  { double v = F32((uint32_t)(edx + ebp*4)); FPUSH(v); }
/* 96f986: fst dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0);
/* 96f98a: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 96f990: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 96f994: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 96f996: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 96f999: jp 0x96f99d */
  if (pf) goto L_96f99d;
L_96f99b: /* 96f99b: fchs  */
  ST0 = -ST0;
L_96f99d: /* 96f99d: fcomp dword ptr [0xcf8a34] */
  fpu_com(ST0, F32((uint32_t)(0xcf8a34u)));
  FPOP();
/* 96f9a3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 96f9a5: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 96f9a8: jne 0x96fa13 */
  if (!zf) goto L_96fa13;
L_96f9aa: /* 96f9aa: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 96f9ac: fdiv dword ptr [esp + 0x24] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x24u)));
/* 96f9b0: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
L_96f9b2: /* 96f9b2: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 96f9b6: sub esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 96f9b9: sub eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 96f9bc: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
L_96f9c0: /* 96f9c0: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96f9c2: jne 0x96f943 */
  if (!zf) goto L_96f943;
L_96f9c8: /* 96f9c8: cmp dword ptr [esp + 0x10], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96f9cd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96f9ce: je 0x96fa0c */
  if (zf) goto L_96fa0c;
L_96f9d0: /* 96f9d0: inc dword ptr [0xcf77f8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf77f8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0xcf77f8u), r);
  }
/* 96f9d6: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 96f9da: mov dword ptr [ecx], 1 */
  W32((uint32_t)(ecx), 0x1u);
/* 96f9e0: cmp dword ptr [0xcf8438], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96f9e7: jl 0x96f9ff */
  if ((sf != of)) goto L_96f9ff;
L_96f9e9: /* 96f9e9: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 96f9ef: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 96f9f1: push 0xb01a18 */
  { uint32_t v = 0xb01a18u; esp -= 4; W32(esp, v); }
/* 96f9f6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96f9f7: call 0x953470 */
  esp -= 4; W32(esp, 0x96f9fcu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96f9fc: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96f9ff: /* 96f9ff: push 0xb019f4 */
  { uint32_t v = 0xb019f4u; esp -= 4; W32(esp, v); }
/* 96fa04: call 0x96f160 */
  esp -= 4; W32(esp, 0x96fa09u); SPILL(); f_96f160(); if (g_unwind) return; RELOAD();
/* 96fa09: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96fa0c: /* 96fa0c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96fa0d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96fa0e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 96fa0f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96fa12: ret  */
  esp += 4; SPILL(); return;
L_96fa13: /* 96fa13: mov ecx, dword ptr [0xcf8a30] */
  ecx = R32((uint32_t)(0xcf8a30u));
/* 96fa19: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 96fa1d: lea eax, [esp + 0x20] */
  eax = (uint32_t)(esp + 0x20u);
/* 96fa21: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96fa22: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 96fa24: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96fa25: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96fa26: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96fa27: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 96fa2f: call 0x962c10 */
  esp -= 4; W32(esp, 0x96fa34u); SPILL(); f_962c10(); if (g_unwind) return; RELOAD();
/* 96fa34: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 96fa36: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 96fa3a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96fa3d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96fa3f: je 0x96f9b2 */
  if (zf) goto L_96f9b2;
L_96fa45: /* 96fa45: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 96fa49: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96fa4b: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 96fa4f: je 0x96fa59 */
  if (zf) goto L_96fa59;
L_96fa51: /* 96fa51: fld qword ptr [0xa14ed8] */
  { double v = F64((uint32_t)(0xa14ed8u)); FPUSH(v); }
/* 96fa57: jmp 0x96fa5f */
  goto L_96fa5f;
L_96fa59: /* 96fa59: fld qword ptr [0xa0da58] */
  { double v = F64((uint32_t)(0xa0da58u)); FPUSH(v); }
L_96fa5f: /* 96fa5f: mov edi, dword ptr [esp + 0x30] */
  edi = R32((uint32_t)(esp + 0x30u));
/* 96fa63: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 96fa65: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 96fa69: sub edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 96fa6c: sub esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 96fa6f: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 96fa71: mov dword ptr [esp + 0x30], edi */
  W32((uint32_t)(esp + 0x30u), edi);
/* 96fa75: jae 0x96f9c0 */
  if (!cf) goto L_96f9c0;
L_96fa7b: /* 96fa7b: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 96fa7d: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 96fa7e: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 96fa81: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 96fa82: xor eax, eax */
  eax = 0;
/* 96fa84: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 96fa86: jmp 0x96f9c0 */
  goto L_96f9c0;
}

void f_96fa90(void) {
  LOAD_REGS();
L_96fa90: /* 96fa90: mov ecx, dword ptr [0xcf85cc] */
  ecx = R32((uint32_t)(0xcf85ccu));
/* 96fa96: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96fa97: mov ebx, dword ptr [esp + 0xc] */
  ebx = R32((uint32_t)(esp + 0xcu));
/* 96fa9b: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 96fa9e: add ecx, -2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 96faa1: cmp ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 96faa4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96faa5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96faa6: ja 0x96fb66 */
  if ((!cf && !zf)) goto L_96fb66;
L_96faac: /* 96faac: jmp dword ptr [ecx*4 + 0x96fc28] */
  switch (R32((uint32_t)(ecx*4 + 0x96fc28u))) {
    case 0x96fab3u: goto L_96fab3;
    case 0x96fad1u: goto L_96fad1;
    case 0x96faf7u: goto L_96faf7;
    case 0x96fb0bu: goto L_96fb0b;
    case 0x96fb17u: goto L_96fb17;
    case 0x96fb23u: goto L_96fb23;
    case 0x96fb2fu: goto L_96fb2f;
    default: guest_badjump(0x96faac, R32((uint32_t)(ecx*4 + 0x96fc28u))); return;
  }
L_96fab3: /* 96fab3: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 96fab6: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 96faba: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 96fabd: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 96fac1: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 96fac3: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 96fac5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 96fac7: fadd dword ptr [ebx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x8u)));
/* 96faca: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 96facc: jmp 0x96fb92 */
  goto L_96fb92;
L_96fad1: /* 96fad1: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 96fad4: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 96fad8: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
L_96fadb: /* 96fadb: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 96fade: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 96fae2: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 96fae5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 96fae7: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 96fae9: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 96faeb: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 96faed: fadd dword ptr [ebx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x8u)));
/* 96faf0: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 96faf2: jmp 0x96fb92 */
  goto L_96fb92;
L_96faf7: /* 96faf7: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 96fafb: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 96fafe: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 96fb01: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 96fb04: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 96fb07: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 96fb09: jmp 0x96fadb */
  goto L_96fadb;
L_96fb0b: /* 96fb0b: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 96fb0e: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 96fb12: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 96fb15: jmp 0x96fb51 */
  goto L_96fb51;
L_96fb17: /* 96fb17: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* 96fb1a: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 96fb1e: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 96fb21: jmp 0x96fb49 */
  goto L_96fb49;
L_96fb23: /* 96fb23: fld dword ptr [eax + 0x18] */
  { double v = F32((uint32_t)(eax + 0x18u)); FPUSH(v); }
/* 96fb26: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 96fb2a: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 96fb2d: jmp 0x96fb41 */
  goto L_96fb41;
L_96fb2f: /* 96fb2f: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 96fb33: fld dword ptr [eax + 0x1c] */
  { double v = F32((uint32_t)(eax + 0x1cu)); FPUSH(v); }
/* 96fb36: fmul dword ptr [esi + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x1cu)));
/* 96fb39: fld dword ptr [eax + 0x18] */
  { double v = F32((uint32_t)(eax + 0x18u)); FPUSH(v); }
/* 96fb3c: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 96fb3f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
L_96fb41: /* 96fb41: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* 96fb44: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 96fb47: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
L_96fb49: /* 96fb49: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 96fb4c: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 96fb4f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
L_96fb51: /* 96fb51: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 96fb54: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 96fb57: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 96fb59: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 96fb5c: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 96fb5f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 96fb61: jmp 0x96fadb */
  goto L_96fadb;
L_96fb66: /* 96fb66: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* 96fb69: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 96fb6d: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 96fb71: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 96fb73: mov edx, dword ptr [0xcf85cc] */
  edx = R32((uint32_t)(0xcf85ccu));
/* 96fb79: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96fb7b: mov ecx, esi */
  ecx = esi;
/* 96fb7d: je 0x96fb92 */
  if (zf) goto L_96fb92;
L_96fb7f: /* 96fb7f: nop  */
L_96fb80: /* 96fb80: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 96fb82: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 96fb85: fmul dword ptr [eax - 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffffcu)));
/* 96fb88: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 96fb8b: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 96fb8c: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 96fb8e: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 96fb90: jne 0x96fb80 */
  if (!zf) goto L_96fb80;
L_96fb92: /* 96fb92: mov ecx, dword ptr [0xcf7890] */
  ecx = R32((uint32_t)(0xcf7890u));
/* 96fb98: mov eax, dword ptr [0xcf8548] */
  eax = R32((uint32_t)(0xcf8548u));
/* 96fb9d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 96fb9e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96fba0: mov dword ptr [0xcf7890], ecx */
  W32((uint32_t)(0xcf7890u), ecx);
/* 96fba6: je 0x96fbd1 */
  if (zf) goto L_96fbd1;
L_96fba8: /* 96fba8: call 0x964770 */
  esp -= 4; W32(esp, 0x96fbadu); SPILL(); f_964770(); if (g_unwind) return; RELOAD();
/* 96fbad: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 96fbb1: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 96fbb5: fmul qword ptr [0xa216b0] */
  ST0 = ST0 * (F64((uint32_t)(0xa216b0u)));
/* 96fbbb: fsub qword ptr [0xa0da58] */
  ST0 = ST0 - (F64((uint32_t)(0xa0da58u)));
/* 96fbc1: fmul dword ptr [0xcf8a18] */
  ST0 = ST0 * (F32((uint32_t)(0xcf8a18u)));
/* 96fbc7: fmul dword ptr [0xcf854c] */
  ST0 = ST0 * (F32((uint32_t)(0xcf854cu)));
/* 96fbcd: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 96fbcf: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
L_96fbd1: /* 96fbd1: cmp dword ptr [0xcf8438], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96fbd8: jl 0x96fc24 */
  if ((sf != of)) goto L_96fc24;
L_96fbda: /* 96fbda: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 96fbdf: push 0xb01a58 */
  { uint32_t v = 0xb01a58u; esp -= 4; W32(esp, v); }
/* 96fbe4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96fbe5: call 0x953470 */
  esp -= 4; W32(esp, 0x96fbeau); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96fbea: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 96fbec: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 96fbf2: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 96fbf5: push 0xafd794 */
  { uint32_t v = 0xafd794u; esp -= 4; W32(esp, v); }
/* 96fbfa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96fbfb: call 0x953470 */
  esp -= 4; W32(esp, 0x96fc00u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96fc00: mov edx, dword ptr [ebx + 0x38] */
  edx = R32((uint32_t)(ebx + 0x38u));
/* 96fc03: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96fc06: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96fc07: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96fc08: call 0x95f210 */
  esp -= 4; W32(esp, 0x96fc0du); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 96fc0d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96fc10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96fc11: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 96fc16: push 0xb01a44 */
  { uint32_t v = 0xb01a44u; esp -= 4; W32(esp, v); }
/* 96fc1b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96fc1c: call 0x953470 */
  esp -= 4; W32(esp, 0x96fc21u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96fc21: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96fc24: /* 96fc24: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 96fc25: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 96fc26: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 96fc27: ret  */
  esp += 4; SPILL(); return;
}

void f_96fc50(void) {
  LOAD_REGS();
L_96fc50: /* 96fc50: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 96fc51: mov ebp, esp */
  ebp = esp;
/* 96fc53: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 96fc56: sub esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 96fc59: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 96fc5e: mov ecx, dword ptr [ebp + 0x20] */
  ecx = R32((uint32_t)(ebp + 0x20u));
/* 96fc61: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96fc62: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96fc63: xor ebx, ebx */
  ebx = 0;
/* 96fc65: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96fc66: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 96fc69: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96fc6b: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 96fc6f: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 96fc72: mov dword ptr [esp + 0x10], 0xfeffffff */
  W32((uint32_t)(esp + 0x10u), 0xfeffffffu);
/* 96fc7a: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 96fc7e: mov dword ptr [esp + 0x30], ebx */
  W32((uint32_t)(esp + 0x30u), ebx);
/* 96fc82: je 0x96fca9 */
  if (zf) goto L_96fca9;
L_96fc84: /* 96fc84: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96fc86: jne 0x96fca9 */
  if (!zf) goto L_96fca9;
L_96fc88: /* 96fc88: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96fc8a: jne 0x96fca9 */
  if (!zf) goto L_96fca9;
L_96fc8c: /* 96fc8c: mov dword ptr [esp + 0x20], 1 */
  W32((uint32_t)(esp + 0x20u), 0x1u);
L_96fc94: /* 96fc94: xor edx, edx */
  edx = 0;
L_96fc96: /* 96fc96: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96fc98: mov dword ptr [esp + 0x2c], edx */
  W32((uint32_t)(esp + 0x2cu), edx);
/* 96fc9c: jne 0x96fcbc */
  if (!zf) goto L_96fcbc;
L_96fc9e: /* 96fc9e: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96fca0: je 0x96fcbc */
  if (zf) goto L_96fcbc;
L_96fca2: /* 96fca2: mov esi, 1 */
  esi = 0x1u;
/* 96fca7: jmp 0x96fcbe */
  goto L_96fcbe;
L_96fca9: /* 96fca9: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96fcab: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 96fcaf: je 0x96fc94 */
  if (zf) goto L_96fc94;
L_96fcb1: /* 96fcb1: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96fcb3: je 0x96fc94 */
  if (zf) goto L_96fc94;
L_96fcb5: /* 96fcb5: mov edx, 1 */
  edx = 0x1u;
/* 96fcba: jmp 0x96fc96 */
  goto L_96fc96;
L_96fcbc: /* 96fcbc: xor esi, esi */
  esi = 0;
L_96fcbe: /* 96fcbe: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96fcc0: je 0x96fcdd */
  if (zf) goto L_96fcdd;
L_96fcc2: /* 96fcc2: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96fcc4: jne 0x96fcd6 */
  if (!zf) goto L_96fcd6;
L_96fcc6: /* 96fcc6: cmp dword ptr [0xcf83e8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf83e8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96fccc: jne 0x96fcd6 */
  if (!zf) goto L_96fcd6;
L_96fcce: /* 96fcce: cmp dword ptr [0xcf845c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf845cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96fcd4: je 0x96fcdd */
  if (zf) goto L_96fcdd;
L_96fcd6: /* 96fcd6: mov edi, 1 */
  edi = 0x1u;
/* 96fcdb: jmp 0x96fcdf */
  goto L_96fcdf;
L_96fcdd: /* 96fcdd: xor edi, edi */
  edi = 0;
L_96fcdf: /* 96fcdf: cmp dword ptr [esp + 0x20], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x20u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96fce3: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 96fce6: mov dword ptr [esp + 0x38], edi */
  W32((uint32_t)(esp + 0x38u), edi);
/* 96fcea: jne 0x96fd11 */
  if (!zf) goto L_96fd11;
L_96fcec: /* 96fcec: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96fcee: jne 0x96fd11 */
  if (!zf) goto L_96fd11;
L_96fcf0: /* 96fcf0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96fcf2: jne 0x96fd11 */
  if (!zf) goto L_96fd11;
L_96fcf4: /* 96fcf4: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 96fcfa: push 0xb01c48 */
  { uint32_t v = 0xb01c48u; esp -= 4; W32(esp, v); }
/* 96fcff: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96fd00: call 0x953470 */
  esp -= 4; W32(esp, 0x96fd05u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96fd05: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96fd06: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96fd07: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 96fd09: call 0x9535b0 */
  esp -= 4; W32(esp, 0x96fd0eu); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 96fd0e: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96fd11: /* 96fd11: mov eax, dword ptr [0xcf8590] */
  eax = R32((uint32_t)(0xcf8590u));
/* 96fd16: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96fd18: je 0x96fdb6 */
  if (zf) goto L_96fdb6;
L_96fd1e: /* 96fd1e: mov eax, dword ptr [0xcf8598] */
  eax = R32((uint32_t)(0xcf8598u));
/* 96fd23: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 96fd25: jl 0x96fdb6 */
  if ((sf != of)) goto L_96fdb6;
L_96fd2b: /* 96fd2b: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 96fd2e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96fd2f: call 0x95f210 */
  esp -= 4; W32(esp, 0x96fd34u); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 96fd34: mov ecx, dword ptr [0xcf8598] */
  ecx = R32((uint32_t)(0xcf8598u));
/* 96fd3a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96fd3d: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96fd3f: jne 0x96fdb6 */
  if (!zf) goto L_96fdb6;
L_96fd41: /* 96fd41: mov eax, dword ptr [0xcf8590] */
  eax = R32((uint32_t)(0xcf8590u));
/* 96fd46: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 96fd49: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96fd4a: mov dword ptr [0xcf8438], eax */
  W32((uint32_t)(0xcf8438u), eax);
/* 96fd4f: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 96fd52: mov edx, dword ptr [ebx + 0x38] */
  edx = R32((uint32_t)(ebx + 0x38u));
/* 96fd55: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96fd56: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 96fd5b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96fd5c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96fd5d: push 0xb01c00 */
  { uint32_t v = 0xb01c00u; esp -= 4; W32(esp, v); }
/* 96fd62: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96fd63: call 0x953470 */
  esp -= 4; W32(esp, 0x96fd68u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96fd68: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 96fd6c: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 96fd70: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 96fd75: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96fd76: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96fd77: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96fd78: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96fd79: push 0xb01bbc */
  { uint32_t v = 0xb01bbcu; esp -= 4; W32(esp, v); }
/* 96fd7e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96fd7f: call 0x953470 */
  esp -= 4; W32(esp, 0x96fd84u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96fd84: mov ecx, dword ptr [0xcf8bac] */
  ecx = R32((uint32_t)(0xcf8bacu));
/* 96fd8a: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 96fd90: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96fd91: push 0xb01b98 */
  { uint32_t v = 0xb01b98u; esp -= 4; W32(esp, v); }
/* 96fd96: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96fd97: call 0x953470 */
  esp -= 4; W32(esp, 0x96fd9cu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96fd9c: mov eax, dword ptr [0xcf7a80] */
  eax = R32((uint32_t)(0xcf7a80u));
/* 96fda1: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 96fda7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96fda8: push 0xb01b80 */
  { uint32_t v = 0xb01b80u; esp -= 4; W32(esp, v); }
/* 96fdad: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 96fdae: call 0x953470 */
  esp -= 4; W32(esp, 0x96fdb3u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96fdb3: add esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96fdb6: /* 96fdb6: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 96fdb9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96fdbb: je 0x96fdc3 */
  if (zf) goto L_96fdc3;
L_96fdbd: /* 96fdbd: mov dword ptr [eax], 1 */
  W32((uint32_t)(eax), 0x1u);
L_96fdc3: /* 96fdc3: mov eax, dword ptr [ebx + 0x3c] */
  eax = R32((uint32_t)(ebx + 0x3cu));
/* 96fdc6: test ah, ah */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(((eax >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 96fdc8: mov edi, dword ptr [ebp + 0x1c] */
  edi = R32((uint32_t)(ebp + 0x1cu));
/* 96fdcb: js 0x96fe57 */
  if (sf) goto L_96fe57;
L_96fdd1: /* 96fdd1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 96fdd4: mov edx, dword ptr [ebp + 0x24] */
  edx = R32((uint32_t)(ebp + 0x24u));
/* 96fdd7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96fdd8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 96fdd9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96fdda: mov dword ptr [edx], 1 */
  W32((uint32_t)(edx), 0x1u);
/* 96fde0: call 0x96fa90 */
  esp -= 4; W32(esp, 0x96fde5u); SPILL(); f_96fa90(); if (g_unwind) return; RELOAD();
/* 96fde5: mov al, byte ptr [ebx + 0x3e] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + 0x3eu))) & 0xffu);
/* 96fde8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96fdeb: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 96fded: je 0x96fe05 */
  if (zf) goto L_96fe05;
L_96fdef: /* 96fdef: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 96fdf2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96fdf4: jne 0x96fe2c */
  if (!zf) goto L_96fe2c;
L_96fdf6: /* 96fdf6: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 96fdf8: fcomp dword ptr [0xcf83ec] */
  fpu_com(ST0, F32((uint32_t)(0xcf83ecu)));
  FPOP();
/* 96fdfe: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 96fe00: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 96fe03: jne 0x96fe2c */
  if (!zf) goto L_96fe2c;
L_96fe05: /* 96fe05: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 96fe08: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96fe0a: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 96fe0c: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 96fe10: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 96fe14: jne 0x96fe2c */
  if (!zf) goto L_96fe2c;
L_96fe16: /* 96fe16: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 96fe18: fcomp dword ptr [0xcf83ec] */
  fpu_com(ST0, F32((uint32_t)(0xcf83ecu)));
  FPOP();
/* 96fe1e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 96fe20: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 96fe23: je 0x9702da */
  if (zf) goto L_9702da;
L_96fe29: /* 96fe29: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
L_96fe2c: /* 96fe2c: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 96fe30: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96fe32: je 0x96fe57 */
  if (zf) goto L_96fe57;
L_96fe34: /* 96fe34: mov eax, dword ptr [0xcf8478] */
  eax = R32((uint32_t)(0xcf8478u));
/* 96fe39: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96fe3b: je 0x96fe46 */
  if (zf) goto L_96fe46;
L_96fe3d: /* 96fe3d: test dword ptr [ebx + 0x3c], 0x40000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x3cu))); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96fe44: je 0x96fe57 */
  if (zf) goto L_96fe57;
L_96fe46: /* 96fe46: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 96fe48: fcomp dword ptr [ebx + 4] */
  fpu_com(ST0, F32((uint32_t)(ebx + 0x4u)));
  FPOP();
/* 96fe4b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 96fe4d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 96fe50: jne 0x96fe57 */
  if (!zf) goto L_96fe57;
L_96fe52: /* 96fe52: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 96fe54: mov dword ptr [ebx + 4], edx */
  W32((uint32_t)(ebx + 0x4u), edx);
L_96fe57: /* 96fe57: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 96fe5b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96fe5d: je 0x96fe6d */
  if (zf) goto L_96fe6d;
L_96fe5f: /* 96fe5f: fld dword ptr [0xcf8a14] */
  { double v = F32((uint32_t)(0xcf8a14u)); FPUSH(v); }
/* 96fe65: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 96fe67: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 96fe6b: jmp 0x96fea4 */
  goto L_96fea4;
L_96fe6d: /* 96fe6d: fld dword ptr [0xcf846c] */
  { double v = F32((uint32_t)(0xcf846cu)); FPUSH(v); }
/* 96fe73: fcomp dword ptr [0xcf8450] */
  fpu_com(ST0, F32((uint32_t)(0xcf8450u)));
  FPOP();
/* 96fe79: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 96fe7b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 96fe7e: jp 0x96fe88 */
  if (pf) goto L_96fe88;
L_96fe80: /* 96fe80: fld dword ptr [0xcf8450] */
  { double v = F32((uint32_t)(0xcf8450u)); FPUSH(v); }
/* 96fe86: jmp 0x96fe8e */
  goto L_96fe8e;
L_96fe88: /* 96fe88: fld dword ptr [0xcf846c] */
  { double v = F32((uint32_t)(0xcf846cu)); FPUSH(v); }
L_96fe8e: /* 96fe8e: fld dword ptr [0xcf8a14] */
  { double v = F32((uint32_t)(0xcf8a14u)); FPUSH(v); }
/* 96fe94: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 96fe96: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 96fe98: fadd dword ptr [0xcf8bbc] */
  ST0 = ST0 + (F32((uint32_t)(0xcf8bbcu)));
/* 96fe9e: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 96fea2: fstp st(0) */
  STI(0) = ST0; FPOP();
L_96fea4: /* 96fea4: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 96fea8: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 96feac: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96feae: fsub dword ptr [esp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x1cu)));
/* 96feb2: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 96feba: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 96febe: je 0x96ff08 */
  if (zf) goto L_96ff08;
L_96fec0: /* 96fec0: fld dword ptr [0xcf846c] */
  { double v = F32((uint32_t)(0xcf846cu)); FPUSH(v); }
/* 96fec6: fcomp dword ptr [0xcf8450] */
  fpu_com(ST0, F32((uint32_t)(0xcf8450u)));
  FPOP();
/* 96fecc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 96fece: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 96fed1: jp 0x96fedb */
  if (pf) goto L_96fedb;
L_96fed3: /* 96fed3: fld dword ptr [0xcf8450] */
  { double v = F32((uint32_t)(0xcf8450u)); FPUSH(v); }
/* 96fed9: jmp 0x96fee1 */
  goto L_96fee1;
L_96fedb: /* 96fedb: fld dword ptr [0xcf846c] */
  { double v = F32((uint32_t)(0xcf846cu)); FPUSH(v); }
L_96fee1: /* 96fee1: fld dword ptr [0xcf8a14] */
  { double v = F32((uint32_t)(0xcf8a14u)); FPUSH(v); }
/* 96fee7: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 96fee9: fchs  */
  ST0 = -ST0;
/* 96feeb: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 96feef: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 96fef1: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 96fef5: fcomp dword ptr [esp + 0x24] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x24u)));
  FPOP();
/* 96fef9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 96fefb: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 96fefe: jne 0x96ff08 */
  if (!zf) goto L_96ff08;
L_96ff00: /* 96ff00: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 96ff04: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
L_96ff08: /* 96ff08: mov eax, dword ptr [0xcf8bf8] */
  eax = R32((uint32_t)(0xcf8bf8u));
/* 96ff0d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 96ff0e: mov dword ptr [0xcf8bf8], eax */
  W32((uint32_t)(0xcf8bf8u), eax);
/* 96ff13: mov dword ptr [ebx + 0x34], eax */
  W32((uint32_t)(ebx + 0x34u), eax);
/* 96ff16: mov dword ptr [esp + 0x28], ebx */
  W32((uint32_t)(esp + 0x28u), ebx);
/* 96ff1a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_96ff20: /* 96ff20: cmp dword ptr [0xcf8438], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 96ff27: mov dword ptr [esp + 0x34], 0 */
  W32((uint32_t)(esp + 0x34u), 0x0u);
/* 96ff2f: jl 0x96ff66 */
  if ((sf != of)) goto L_96ff66;
L_96ff31: /* 96ff31: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 96ff35: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 96ff39: mov edx, dword ptr [ecx + 0x38] */
  edx = R32((uint32_t)(ecx + 0x38u));
/* 96ff3c: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 96ff41: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 96ff44: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 96ff48: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 96ff4c: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 96ff50: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 96ff54: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 96ff57: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96ff58: push 0xb01b30 */
  { uint32_t v = 0xb01b30u; esp -= 4; W32(esp, v); }
/* 96ff5d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 96ff5e: call 0x953470 */
  esp -= 4; W32(esp, 0x96ff63u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 96ff63: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_96ff66: /* 96ff66: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 96ff6a: mov eax, dword ptr [ecx + 0x28] */
  eax = R32((uint32_t)(ecx + 0x28u));
/* 96ff6d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96ff6f: je 0x97013f */
  if (zf) goto L_97013f;
L_96ff75: /* 96ff75: lea ebx, [eax + 4] */
  ebx = (uint32_t)(eax + 0x4u);
L_96ff78: /* 96ff78: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* 96ff7a: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 96ff7d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96ff7f: je 0x97013f */
  if (zf) goto L_97013f;
L_96ff85: /* 96ff85: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 96ff89: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96ff8b: je 0x96ff95 */
  if (zf) goto L_96ff95;
L_96ff8d: /* 96ff8d: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 96ff90: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 96ff93: je 0x96ff78 */
  if (zf) goto L_96ff78;
L_96ff95: /* 96ff95: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 96ff98: test ah, ah */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(((eax >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 96ff9a: js 0x9700c2 */
  if (sf) goto L_9700c2;
L_96ffa0: /* 96ffa0: mov eax, dword ptr [0xcf8bf8] */
  eax = R32((uint32_t)(0xcf8bf8u));
/* 96ffa5: cmp dword ptr [esi + 0x34], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x34u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 96ffa8: je 0x96ff78 */
  if (zf) goto L_96ff78;
L_96ffaa: /* 96ffaa: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 96ffad: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* 96ffb0: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 96ffb3: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 96ffb5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 96ffb6: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 96ffb7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 96ffb8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 96ffb9: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 96ffbb: call 0x96fa90 */
  esp -= 4; W32(esp, 0x96ffc0u); SPILL(); f_96fa90(); if (g_unwind) return; RELOAD();
/* 96ffc0: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 96ffc3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 96ffc6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96ffc8: jne 0x96fff2 */
  if (!zf) goto L_96fff2;
L_96ffca: /* 96ffca: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 96ffcc: fcomp dword ptr [0xcf83ec] */
  fpu_com(ST0, F32((uint32_t)(0xcf83ecu)));
  FPOP();
/* 96ffd2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 96ffd4: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 96ffd7: jne 0x96fff2 */
  if (!zf) goto L_96fff2;
L_96ffd9: /* 96ffd9: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 96ffdc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96ffde: je 0x970215 */
  if (zf) goto L_970215;
L_96ffe4: /* 96ffe4: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 96ffe8: test byte ptr [eax + 0x3e], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x3eu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 96ffec: je 0x970215 */
  if (zf) goto L_970215;
L_96fff2: /* 96fff2: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 96fff6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 96fff8: je 0x97001f */
  if (zf) goto L_97001f;
L_96fffa: /* 96fffa: mov eax, dword ptr [0xcf8478] */
  eax = R32((uint32_t)(0xcf8478u));
/* 96ffff: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 970001: je 0x97000c */
  if (zf) goto L_97000c;
L_970003: /* 970003: test dword ptr [esi + 0x3c], 0x40000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97000a: je 0x97001f */
  if (zf) goto L_97001f;
L_97000c: /* 97000c: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 97000e: fcomp dword ptr [esi + 4] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x4u)));
  FPOP();
/* 970011: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 970013: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 970016: jne 0x97001f */
  if (!zf) goto L_97001f;
L_970018: /* 970018: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 97001a: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 97001d: jmp 0x970038 */
  goto L_970038;
L_97001f: /* 97001f: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 970023: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 970025: je 0x970038 */
  if (zf) goto L_970038;
L_970027: /* 970027: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 970029: fcomp dword ptr [esp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x18u)));
  FPOP();
/* 97002d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 97002f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 970032: jnp 0x96ff78 */
  if (!pf) goto L_96ff78;
L_970038: /* 970038: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 97003a: fcomp dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
  FPOP();
/* 97003e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 970040: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 970043: jne 0x9700c2 */
  if (!zf) goto L_9700c2;
L_970045: /* 970045: test byte ptr [esi + 0x3e], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x3eu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 970049: je 0x970068 */
  if (zf) goto L_970068;
L_97004b: /* 97004b: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 97004e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 970050: je 0x9700c2 */
  if (zf) goto L_9700c2;
L_970052: /* 970052: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 970055: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 970057: jne 0x9700c2 */
  if (!zf) goto L_9700c2;
L_970059: /* 970059: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 97005b: fcomp dword ptr [0xcf83ec] */
  fpu_com(ST0, F32((uint32_t)(0xcf83ecu)));
  FPOP();
/* 970061: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 970063: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 970066: jne 0x9700c2 */
  if (!zf) goto L_9700c2;
L_970068: /* 970068: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97006a: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 97006e: je 0x970097 */
  if (zf) goto L_970097;
L_970070: /* 970070: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 970072: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 970076: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 97007a: fsub dword ptr [esp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x1cu)));
/* 97007e: fst dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0);
/* 970082: fcomp dword ptr [esp + 0x24] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x24u)));
  FPOP();
/* 970086: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 970088: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 97008b: jne 0x9700ba */
  if (!zf) goto L_9700ba;
L_97008d: /* 97008d: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 970091: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 970095: jmp 0x9700ba */
  goto L_9700ba;
L_970097: /* 970097: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 97009b: fadd dword ptr [esp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x10u)));
/* 97009f: fcomp dword ptr [edi] */
  fpu_com(ST0, F32((uint32_t)(edi)));
  FPOP();
/* 9700a1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9700a3: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9700a6: jnp 0x970102 */
  if (!pf) goto L_970102;
L_9700a8: /* 9700a8: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 9700aa: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 9700ae: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 9700b2: fsub dword ptr [esp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x1cu)));
/* 9700b6: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
L_9700ba: /* 9700ba: mov dword ptr [esp + 0x34], 1 */
  W32((uint32_t)(esp + 0x34u), 0x1u);
L_9700c2: /* 9700c2: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 9700c6: mov ecx, eax */
  ecx = eax;
/* 9700c8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9700c9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9700cb: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 9700cf: jne 0x9700ef */
  if (!zf) goto L_9700ef;
L_9700d1: /* 9700d1: mov edx, dword ptr [0xcf8c60] */
  edx = R32((uint32_t)(0xcf8c60u));
/* 9700d7: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 9700da: mov eax, dword ptr [0xcf8c60] */
  eax = R32((uint32_t)(0xcf8c60u));
/* 9700df: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 9700e1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9700e2: call 0x94f570 */
  esp -= 4; W32(esp, 0x9700e7u); SPILL(); f_94f570(); if (g_unwind) return; RELOAD();
/* 9700e7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9700ea: jmp 0x96ff78 */
  goto L_96ff78;
L_9700ef: /* 9700ef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9700f0: push 0xcf8c60 */
  { uint32_t v = 0xcf8c60u; esp -= 4; W32(esp, v); }
/* 9700f5: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x9700fau); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 9700fa: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9700fd: jmp 0x96ff78 */
  goto L_96ff78;
L_970102: /* 970102: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 970104: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 970108: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97010a: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 97010e: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 970112: fsub dword ptr [esp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x1cu)));
/* 970116: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 97011e: mov dword ptr [esp + 0x28], esi */
  W32((uint32_t)(esp + 0x28u), esi);
/* 970122: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 970126: je 0x96ff20 */
  if (zf) goto L_96ff20;
L_97012c: /* 97012c: mov eax, dword ptr [0xcf8bf8] */
  eax = R32((uint32_t)(0xcf8bf8u));
/* 970131: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 970132: mov dword ptr [0xcf8bf8], eax */
  W32((uint32_t)(0xcf8bf8u), eax);
/* 970137: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* 97013a: jmp 0x96ff20 */
  goto L_96ff20;
L_97013f: /* 97013f: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 970143: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 970145: je 0x970162 */
  if (zf) goto L_970162;
L_970147: /* 970147: mov edx, dword ptr [0xcf8c60] */
  edx = R32((uint32_t)(0xcf8c60u));
/* 97014d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97014e: call 0x94eaa0 */
  esp -= 4; W32(esp, 0x970153u); SPILL(); f_94eaa0(); if (g_unwind) return; RELOAD();
/* 970153: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 970156: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 970158: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 97015c: jne 0x96ff20 */
  if (!zf) goto L_96ff20;
L_970162: /* 970162: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 970166: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 970168: jne 0x9702b3 */
  if (!zf) goto L_9702b3;
L_97016e: /* 97016e: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 970172: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 970174: jne 0x9701c7 */
  if (!zf) goto L_9701c7;
L_970176: /* 970176: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 970179: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 97017c: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 97017f: mov edx, dword ptr [esi + 0x38] */
  edx = R32((uint32_t)(esi + 0x38u));
/* 970182: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 970183: mov eax, dword ptr [0xcf8598] */
  eax = R32((uint32_t)(0xcf8598u));
/* 970188: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 970189: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 97018f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 970190: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 970191: push 0xb01c00 */
  { uint32_t v = 0xb01c00u; esp -= 4; W32(esp, v); }
/* 970196: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 970197: call 0x953470 */
  esp -= 4; W32(esp, 0x97019cu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 97019c: mov edx, dword ptr [esi + 0x38] */
  edx = R32((uint32_t)(esi + 0x38u));
/* 97019f: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 9701a4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9701a5: push 0xb01a88 */
  { uint32_t v = 0xb01a88u; esp -= 4; W32(esp, v); }
/* 9701aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9701ab: call 0x953470 */
  esp -= 4; W32(esp, 0x9701b0u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9701b0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9701b2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9701b3: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 9701b5: mov dword ptr [0xcf841c], 1 */
  W32((uint32_t)(0xcf841cu), 0x1u);
/* 9701bf: call 0x9535b0 */
  esp -= 4; W32(esp, 0x9701c4u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 9701c4: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9701c7: /* 9701c7: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 9701cb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9701cd: je 0x970237 */
  if (zf) goto L_970237;
L_9701cf: /* 9701cf: mov eax, dword ptr [0xcf8bd0] */
  eax = R32((uint32_t)(0xcf8bd0u));
/* 9701d4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9701d6: jne 0x970237 */
  if (!zf) goto L_970237;
L_9701d8: /* 9701d8: fld dword ptr [0xcf8a14] */
  { double v = F32((uint32_t)(0xcf8a14u)); FPUSH(v); }
/* 9701de: fchs  */
  ST0 = -ST0;
/* 9701e0: fcomp dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
  FPOP();
/* 9701e4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9701e6: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9701e9: jne 0x970237 */
  if (!zf) goto L_970237;
L_9701eb: /* 9701eb: mov ebx, dword ptr [ebp + 0x24] */
  ebx = R32((uint32_t)(ebp + 0x24u));
/* 9701ee: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 9701f1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9701f2: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 9701f6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9701f7: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 9701fb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9701fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9701fd: call 0x963080 */
  esp -= 4; W32(esp, 0x970202u); SPILL(); f_963080(); if (g_unwind) return; RELOAD();
/* 970202: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 970205: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 970207: je 0x97022b */
  if (zf) goto L_97022b;
L_970209: /* 970209: mov dword ptr [0xcf8bcc], 1 */
  W32((uint32_t)(0xcf8bccu), 0x1u);
/* 970213: jmp 0x97023a */
  goto L_97023a;
L_970215: /* 970215: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 970219: mov dword ptr [0xcf8438], eax */
  W32((uint32_t)(0xcf8438u), eax);
/* 97021e: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 970222: mov eax, esi */
  eax = esi;
/* 970224: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 970225: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 970226: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 970227: mov esp, ebp */
  esp = ebp;
/* 970229: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 97022a: ret  */
  esp += 4; SPILL(); return;
L_97022b: /* 97022b: mov dword ptr [0xcf8bd0], 1 */
  W32((uint32_t)(0xcf8bd0u), 0x1u);
/* 970235: jmp 0x97023a */
  goto L_97023a;
L_970237: /* 970237: mov ebx, dword ptr [ebp + 0x24] */
  ebx = R32((uint32_t)(ebp + 0x24u));
L_97023a: /* 97023a: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 97023e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 970240: je 0x9702b3 */
  if (zf) goto L_9702b3;
L_970242: /* 970242: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 970246: cmp dword ptr [0xcf8438], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 97024d: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* 970250: mov esi, dword ptr [edx + 4] */
  esi = R32((uint32_t)(edx + 0x4u));
/* 970253: jl 0x97026d */
  if ((sf != of)) goto L_97026d;
L_970255: /* 970255: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 970258: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 97025e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97025f: push 0xb01a68 */
  { uint32_t v = 0xb01a68u; esp -= 4; W32(esp, v); }
/* 970264: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 970265: call 0x953470 */
  esp -= 4; W32(esp, 0x97026au); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 97026a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97026d: /* 97026d: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 97026f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 970272: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 970273: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 970274: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 970275: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 970276: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 970278: call 0x96fa90 */
  esp -= 4; W32(esp, 0x97027du); SPILL(); f_96fa90(); if (g_unwind) return; RELOAD();
/* 97027d: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 97027f: fcomp dword ptr [esp + 0x1c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x1cu)));
  FPOP();
/* 970283: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 970286: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 970288: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 97028b: jne 0x9702b3 */
  if (!zf) goto L_9702b3;
L_97028d: /* 97028d: test byte ptr [esi + 0x3e], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x3eu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 970291: je 0x9702a9 */
  if (zf) goto L_9702a9;
L_970293: /* 970293: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 970296: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 970298: jne 0x9702b3 */
  if (!zf) goto L_9702b3;
L_97029a: /* 97029a: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 97029c: fcomp dword ptr [0xcf83ec] */
  fpu_com(ST0, F32((uint32_t)(0xcf83ecu)));
  FPOP();
/* 9702a2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9702a4: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9702a7: jne 0x9702b3 */
  if (!zf) goto L_9702b3;
L_9702a9: /* 9702a9: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 9702ab: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 9702af: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
L_9702b3: /* 9702b3: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 9702b6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9702b8: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 9702bc: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 9702be: je 0x9702da */
  if (zf) goto L_9702da;
L_9702c0: /* 9702c0: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 9702c4: fcomp dword ptr [0xcf83ec] */
  fpu_com(ST0, F32((uint32_t)(0xcf83ecu)));
  FPOP();
/* 9702ca: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9702cc: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9702cf: jp 0x9702da */
  if (pf) goto L_9702da;
L_9702d1: /* 9702d1: mov edx, dword ptr [ebp + 0x20] */
  edx = R32((uint32_t)(ebp + 0x20u));
/* 9702d4: mov dword ptr [edx], 0 */
  W32((uint32_t)(edx), 0x0u);
L_9702da: /* 9702da: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 9702de: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9702df: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9702e0: mov dword ptr [0xcf8438], eax */
  W32((uint32_t)(0xcf8438u), eax);
/* 9702e5: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 9702e9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9702ea: mov esp, ebp */
  esp = ebp;
/* 9702ec: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9702ed: ret  */
  esp += 4; SPILL(); return;
}

void f_9702f0(void) {
  LOAD_REGS();
L_9702f0: /* 9702f0: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9702f3: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 9702f8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9702f9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9702fa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9702fb: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 9702ff: xor ebp, ebp */
  ebp = 0;
/* 970301: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 970303: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 970304: mov dword ptr [esp + 0x1c], 0xff7fffff */
  W32((uint32_t)(esp + 0x1cu), 0xff7fffffu);
/* 97030c: mov dword ptr [esp + 0x10], 0xff7fffff */
  W32((uint32_t)(esp + 0x10u), 0xff7fffffu);
/* 970314: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 970318: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* 97031c: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 970320: jne 0x970366 */
  if (!zf) goto L_970366;
L_970322: /* 970322: cmp dword ptr [0xcf845c], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf845cu))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 970328: je 0x970340 */
  if (zf) goto L_970340;
L_97032a: /* 97032a: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 970330: push 0xb01d18 */
  { uint32_t v = 0xb01d18u; esp -= 4; W32(esp, v); }
/* 970335: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 970336: call 0x953470 */
  esp -= 4; W32(esp, 0x97033bu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 97033b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97033e: jmp 0x97035a */
  goto L_97035a;
L_970340: /* 970340: mov edx, dword ptr [0xcf8bac] */
  edx = R32((uint32_t)(0xcf8bacu));
/* 970346: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 97034b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97034c: push 0xb01cd0 */
  { uint32_t v = 0xb01cd0u; esp -= 4; W32(esp, v); }
/* 970351: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 970352: call 0x953470 */
  esp -= 4; W32(esp, 0x970357u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 970357: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97035a: /* 97035a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 97035b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 97035c: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 97035e: call 0x9535b0 */
  esp -= 4; W32(esp, 0x970363u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 970363: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_970366: /* 970366: cmp dword ptr [0xcf83f8], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf83f8u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97036c: mov edi, dword ptr [esp + 0x38] */
  edi = R32((uint32_t)(esp + 0x38u));
/* 970370: jne 0x9703bf */
  if (!zf) goto L_9703bf;
L_970372: /* 970372: cmp edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 970374: je 0x9703bf */
  if (zf) goto L_9703bf;
L_970376: /* 970376: cmp dword ptr [0xcf845c], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf845cu))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97037c: je 0x9703b3 */
  if (zf) goto L_9703b3;
L_97037e: /* 97037e: fld dword ptr [0xcf83ec] */
  { double v = F32((uint32_t)(0xcf83ecu)); FPUSH(v); }
/* 970384: fmul dword ptr [0xa0a848] */
  ST0 = ST0 * (F32((uint32_t)(0xa0a848u)));
/* 97038a: fld dword ptr [0xcf8bbc] */
  { double v = F32((uint32_t)(0xcf8bbcu)); FPUSH(v); }
/* 970390: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 970392: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 970396: fcom dword ptr [esp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x18u)));
/* 97039a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 97039c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 97039f: jp 0x9703ad */
  if (pf) goto L_9703ad;
L_9703a1: /* 9703a1: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 9703a5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9703a7: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 9703ab: jmp 0x9703c7 */
  goto L_9703c7;
L_9703ad: /* 9703ad: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 9703b1: jmp 0x9703c7 */
  goto L_9703c7;
L_9703b3: /* 9703b3: mov edx, dword ptr [0xcf83ec] */
  edx = R32((uint32_t)(0xcf83ecu));
/* 9703b9: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 9703bd: jmp 0x9703c7 */
  goto L_9703c7;
L_9703bf: /* 9703bf: mov dword ptr [esp + 0x18], 0x7f7fffff */
  W32((uint32_t)(esp + 0x18u), 0x7f7fffffu);
L_9703c7: /* 9703c7: cmp dword ptr [0xcf8590], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8590u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9703cd: je 0x97044c */
  if (zf) goto L_97044c;
L_9703cf: /* 9703cf: cmp dword ptr [0xcf8598], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8598u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9703d5: jl 0x97044c */
  if ((sf != of)) goto L_97044c;
L_9703d7: /* 9703d7: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 9703db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9703dc: call 0x95f210 */
  esp -= 4; W32(esp, 0x9703e1u); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 9703e1: mov ecx, dword ptr [0xcf8598] */
  ecx = R32((uint32_t)(0xcf8598u));
/* 9703e7: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9703ea: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9703ec: jne 0x97044c */
  if (!zf) goto L_97044c;
L_9703ee: /* 9703ee: mov edx, dword ptr [0xcf8590] */
  edx = R32((uint32_t)(0xcf8590u));
/* 9703f4: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 9703f8: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9703fb: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 9703fe: mov dword ptr [0xcf8438], edx */
  W32((uint32_t)(0xcf8438u), edx);
/* 970404: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 970407: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 970408: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 970409: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 97040f: push 0xb01c90 */
  { uint32_t v = 0xb01c90u; esp -= 4; W32(esp, v); }
/* 970414: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 970415: call 0x953470 */
  esp -= 4; W32(esp, 0x97041au); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 97041a: mov edx, dword ptr [0xcf8bac] */
  edx = R32((uint32_t)(0xcf8bacu));
/* 970420: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 970425: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 970426: push 0xb01b98 */
  { uint32_t v = 0xb01b98u; esp -= 4; W32(esp, v); }
/* 97042b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97042c: call 0x953470 */
  esp -= 4; W32(esp, 0x970431u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 970431: mov ecx, dword ptr [0xcf7a80] */
  ecx = R32((uint32_t)(0xcf7a80u));
/* 970437: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 97043d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97043e: push 0xb01b80 */
  { uint32_t v = 0xb01b80u; esp -= 4; W32(esp, v); }
/* 970443: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 970444: call 0x953470 */
  esp -= 4; W32(esp, 0x970449u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 970449: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97044c: /* 97044c: cmp edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97044e: je 0x970456 */
  if (zf) goto L_970456;
L_970450: /* 970450: mov dword ptr [edi], 1 */
  W32((uint32_t)(edi), 0x1u);
L_970456: /* 970456: mov ebx, dword ptr [esp + 0x3c] */
  ebx = R32((uint32_t)(esp + 0x3cu));
/* 97045a: mov edi, dword ptr [esp + 0x34] */
  edi = R32((uint32_t)(esp + 0x34u));
/* 97045e: mov dword ptr [ebx], ebp */
  W32((uint32_t)(ebx), ebp);
L_970460: /* 970460: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 970462: je 0x9704f5 */
  if (zf) goto L_9704f5;
L_970468: /* 970468: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 97046b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97046d: je 0x9704f5 */
  if (zf) goto L_9704f5;
L_970473: /* 970473: cmp esi, dword ptr [esp + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 970477: jne 0x97047d */
  if (!zf) goto L_97047d;
L_970479: /* 970479: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97047b: jne 0x9704f5 */
  if (!zf) goto L_9704f5;
L_97047d: /* 97047d: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 970481: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 970482: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 970483: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 970484: call 0x96fa90 */
  esp -= 4; W32(esp, 0x970489u); SPILL(); f_96fa90(); if (g_unwind) return; RELOAD();
/* 970489: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 97048b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97048e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 97048f: mov dword ptr [ebx], ecx */
  W32((uint32_t)(ebx), ecx);
/* 970491: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 970493: test byte ptr [esi + 0x3e], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x3eu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 970497: je 0x9704c4 */
  if (zf) goto L_9704c4;
L_970499: /* 970499: fcomp dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
  FPOP();
/* 97049d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 97049f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9704a2: jne 0x9704ea */
  if (!zf) goto L_9704ea;
L_9704a4: /* 9704a4: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 9704a6: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 9704a8: fcomp dword ptr [esp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x18u)));
  FPOP();
/* 9704ac: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 9704b0: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 9704b4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9704b6: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9704b9: jne 0x9704ea */
  if (!zf) goto L_9704ea;
L_9704bb: /* 9704bb: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 9704bf: jmp 0x9705db */
  goto L_9705db;
L_9704c4: /* 9704c4: fcomp dword ptr [esp + 0x1c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x1cu)));
  FPOP();
/* 9704c8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9704ca: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9704cd: jne 0x9704ea */
  if (!zf) goto L_9704ea;
L_9704cf: /* 9704cf: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 9704d1: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 9704d3: fcomp dword ptr [esp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x18u)));
  FPOP();
/* 9704d7: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 9704db: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 9704df: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9704e1: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9704e4: je 0x9705db */
  if (zf) goto L_9705db;
L_9704ea: /* 9704ea: mov esi, dword ptr [esi + 0x1c] */
  esi = R32((uint32_t)(esi + 0x1cu));
/* 9704ed: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9704ef: jne 0x970468 */
  if (!zf) goto L_970468;
L_9704f5: /* 9704f5: mov esi, dword ptr [0xcf8b58] */
  esi = R32((uint32_t)(0xcf8b58u));
/* 9704fb: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 9704fc: cmp ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9704ff: jl 0x970460 */
  if ((sf != of)) goto L_970460;
L_970505: /* 970505: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 970509: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97050b: jne 0x970511 */
  if (!zf) goto L_970511;
L_97050d: /* 97050d: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
L_970511: /* 970511: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 970514: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 970516: je 0x97057c */
  if (zf) goto L_97057c;
L_970518: /* 970518: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 97051b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97051d: lea ebp, [eax + 4] */
  ebp = (uint32_t)(eax + 0x4u);
/* 970520: je 0x97057c */
  if (zf) goto L_97057c;
L_970522: /* 970522: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 970525: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 970528: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 97052b: jne 0x970575 */
  if (!zf) goto L_970575;
L_97052d: /* 97052d: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 970531: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 970532: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 970533: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 970534: call 0x96fa90 */
  esp -= 4; W32(esp, 0x970539u); SPILL(); f_96fa90(); if (g_unwind) return; RELOAD();
/* 970539: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 97053b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97053e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 97053f: mov dword ptr [ebx], ecx */
  W32((uint32_t)(ebx), ecx);
/* 970541: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 970543: test byte ptr [esi + 0x3e], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x3eu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 970547: je 0x970560 */
  if (zf) goto L_970560;
L_970549: /* 970549: fcomp dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
  FPOP();
/* 97054d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 97054f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 970552: jne 0x970575 */
  if (!zf) goto L_970575;
L_970554: /* 970554: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 970556: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 97055a: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 97055e: jmp 0x970575 */
  goto L_970575;
L_970560: /* 970560: fcomp dword ptr [esp + 0x1c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x1cu)));
  FPOP();
/* 970564: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 970566: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 970569: jne 0x970575 */
  if (!zf) goto L_970575;
L_97056b: /* 97056b: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 97056d: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 970571: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
L_970575: /* 970575: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 970578: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97057a: jne 0x970522 */
  if (!zf) goto L_970522;
L_97057c: /* 97057c: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 970580: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 970582: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 970586: je 0x9705b4 */
  if (zf) goto L_9705b4;
L_970588: /* 970588: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97058a: je 0x9705ac */
  if (zf) goto L_9705ac;
L_97058c: /* 97058c: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 970590: fcomp dword ptr [0xcf83ec] */
  fpu_com(ST0, F32((uint32_t)(0xcf83ecu)));
  FPOP();
/* 970596: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 970598: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 97059b: jne 0x9705ac */
  if (!zf) goto L_9705ac;
L_97059d: /* 97059d: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 9705a1: fcomp dword ptr [esp + 0x1c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x1cu)));
  FPOP();
/* 9705a5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9705a7: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9705aa: je 0x9705b4 */
  if (zf) goto L_9705b4;
L_9705ac: /* 9705ac: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 9705b0: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 9705b2: jmp 0x9705c2 */
  goto L_9705c2;
L_9705b4: /* 9705b4: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 9705b8: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 9705bc: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 9705be: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
L_9705c2: /* 9705c2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9705c4: je 0x9705db */
  if (zf) goto L_9705db;
L_9705c6: /* 9705c6: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 9705c8: fcomp dword ptr [0xcf83ec] */
  fpu_com(ST0, F32((uint32_t)(0xcf83ecu)));
  FPOP();
/* 9705ce: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9705d0: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9705d3: jp 0x9705db */
  if (pf) goto L_9705db;
L_9705d5: /* 9705d5: mov dword ptr [ecx], 0 */
  W32((uint32_t)(ecx), 0x0u);
L_9705db: /* 9705db: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 9705df: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 9705e3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9705e4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9705e5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9705e6: mov dword ptr [0xcf8438], ecx */
  W32((uint32_t)(0xcf8438u), ecx);
/* 9705ec: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9705ed: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9705f0: ret  */
  esp += 4; SPILL(); return;
}

void f_970600(void) {
  LOAD_REGS();
L_970600: /* 970600: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 970603: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 970607: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 970608: xor esi, esi */
  esi = 0;
/* 97060a: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 97060c: cmp dword ptr [esp + 0x18], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 970610: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 970611: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 970615: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* 97061d: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 970621: jle 0x9707d3 */
  if ((zf || sf != of)) goto L_9707d3;
L_970627: /* 970627: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 97062b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97062c: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 97062d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 97062e: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
L_970632: /* 970632: mov ecx, dword ptr [esi + edi] */
  ecx = R32((uint32_t)(esi + edi));
/* 970635: fld dword ptr [ecx + esi] */
  { double v = F32((uint32_t)(ecx + esi)); FPUSH(v); }
/* 970638: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 97063e: fld dword ptr [ecx + esi] */
  { double v = F32((uint32_t)(ecx + esi)); FPUSH(v); }
/* 970641: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 970643: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 970646: jp 0x97064a */
  if (pf) goto L_97064a;
L_970648: /* 970648: fchs  */
  ST0 = -ST0;
L_97064a: /* 97064a: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 97064e: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 970652: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 970656: lea ebp, [ebx + 1] */
  ebp = (uint32_t)(ebx + 0x1u);
/* 970659: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 97065b: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 97065f: mov ecx, ebp */
  ecx = ebp;
/* 970661: jge 0x9706b5 */
  if ((sf == of)) goto L_9706b5;
L_970663: /* 970663: mov edx, dword ptr [edi + ecx*4] */
  edx = R32((uint32_t)(edi + ecx*4));
/* 970666: fld dword ptr [edx + esi] */
  { double v = F32((uint32_t)(edx + esi)); FPUSH(v); }
/* 970669: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 97066b: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 970671: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 970673: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 970675: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 970678: jp 0x97067c */
  if (pf) goto L_97067c;
L_97067a: /* 97067a: fchs  */
  ST0 = -ST0;
L_97067c: /* 97067c: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 97067e: fcomp dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
  FPOP();
/* 970682: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 970684: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 970687: jne 0x970691 */
  if (!zf) goto L_970691;
L_970689: /* 970689: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 97068d: mov ebx, ecx */
  ebx = ecx;
/* 97068f: jmp 0x970693 */
  goto L_970693;
L_970691: /* 970691: fstp st(0) */
  STI(0) = ST0; FPOP();
L_970693: /* 970693: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 970697: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 970698: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 97069a: jl 0x970663 */
  if ((sf != of)) goto L_970663;
L_97069c: /* 97069c: cmp ebx, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9706a0: je 0x9706b5 */
  if (zf) goto L_9706b5;
L_9706a2: /* 9706a2: mov ecx, dword ptr [esi + edi] */
  ecx = R32((uint32_t)(esi + edi));
/* 9706a5: mov eax, dword ptr [edi + ebx*4] */
  eax = R32((uint32_t)(edi + ebx*4));
/* 9706a8: mov dword ptr [edi + ebx*4], ecx */
  W32((uint32_t)(edi + ebx*4), ecx);
/* 9706ab: mov dword ptr [esi + edi], eax */
  W32((uint32_t)(esi + edi), eax);
/* 9706ae: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 9706b2: xor dword ptr [eax], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a ^ b);
  W32((uint32_t)(eax), r);
  }
L_9706b5: /* 9706b5: mov eax, dword ptr [0xcf8a40] */
  eax = R32((uint32_t)(0xcf8a40u));
/* 9706ba: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 9706be: fcomp dword ptr [esi + eax] */
  fpu_com(ST0, F32((uint32_t)(esi + eax)));
  FPOP();
/* 9706c1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9706c3: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9706c6: jp 0x970753 */
  if (pf) goto L_970753;
L_9706cc: /* 9706cc: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 9706d0: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 9706d4: fcomp qword ptr [0x9f7668] */
  fpu_com(ST0, F64((uint32_t)(0x9f7668u)));
  FPOP();
/* 9706da: mov dword ptr [ecx], 1 */
  W32((uint32_t)(ecx), 0x1u);
/* 9706e0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9706e2: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9706e5: jp 0x970753 */
  if (pf) goto L_970753;
L_9706e7: /* 9706e7: cmp dword ptr [0xcf8438], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9706ee: jl 0x970737 */
  if ((sf != of)) goto L_970737;
L_9706f0: /* 9706f0: fld dword ptr [0xcf8a14] */
  { double v = F32((uint32_t)(0xcf8a14u)); FPUSH(v); }
/* 9706f6: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 9706fa: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 9706ff: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 970702: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 970706: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 97070a: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97070d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97070e: push 0xb01dd8 */
  { uint32_t v = 0xb01dd8u; esp -= 4; W32(esp, v); }
/* 970713: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 970714: call 0x953470 */
  esp -= 4; W32(esp, 0x970719u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 970719: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 97071d: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 970721: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 970726: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 970727: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 970728: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 970729: push 0xb01dd0 */
  { uint32_t v = 0xb01dd0u; esp -= 4; W32(esp, v); }
/* 97072e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97072f: call 0x964260 */
  esp -= 4; W32(esp, 0x970734u); SPILL(); f_964260(); if (g_unwind) return; RELOAD();
/* 970734: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_970737: /* 970737: mov edx, dword ptr [0xcf7900] */
  edx = R32((uint32_t)(0xcf7900u));
/* 97073d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 97073e: push 0xb01dac */
  { uint32_t v = 0xb01dacu; esp -= 4; W32(esp, v); }
/* 970743: mov dword ptr [0xcf7900], edx */
  W32((uint32_t)(0xcf7900u), edx);
/* 970749: call 0x96f160 */
  esp -= 4; W32(esp, 0x97074eu); SPILL(); f_96f160(); if (g_unwind) return; RELOAD();
/* 97074e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 970751: jmp 0x9707b5 */
  goto L_9707b5;
L_970753: /* 970753: mov edx, dword ptr [esi + edi] */
  edx = R32((uint32_t)(esi + edi));
/* 970756: fld dword ptr [edx + esi] */
  { double v = F32((uint32_t)(edx + esi)); FPUSH(v); }
/* 970759: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 97075d: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 97075f: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 970762: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 970764: mov ebx, ebp */
  ebx = ebp;
/* 970766: jge 0x9707b3 */
  if ((sf == of)) goto L_9707b3;
L_970768: /* 970768: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 97076e: mov edi, edi */
  edi = edi;
L_970770: /* 970770: mov eax, dword ptr [edi + ebx*4] */
  eax = R32((uint32_t)(edi + ebx*4));
/* 970773: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 970775: fmul dword ptr [eax + esi] */
  ST0 = ST0 * (F32((uint32_t)(eax + esi)));
/* 970778: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 97077c: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 97077e: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 970781: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 970783: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 970787: mov ecx, edx */
  ecx = edx;
/* 970789: je 0x9707a6 */
  if (zf) goto L_9707a6;
L_97078b: /* 97078b: nop  */
/* 97078c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_970790: /* 970790: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 970794: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 970797: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 97079a: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 97079d: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 97079e: fsubr dword ptr [eax - 4] */
  ST0 = (F32((uint32_t)(eax + 0xfffffffcu))) - ST0;
/* 9707a1: fstp dword ptr [eax - 4] */
  WF32((uint32_t)(eax + 0xfffffffcu), ST0); FPOP();
/* 9707a4: jne 0x970790 */
  if (!zf) goto L_970790;
L_9707a6: /* 9707a6: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 9707aa: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 9707ab: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9707ad: jl 0x970770 */
  if ((sf != of)) goto L_970770;
L_9707af: /* 9707af: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
L_9707b3: /* 9707b3: fstp st(0) */
  STI(0) = ST0; FPOP();
L_9707b5: /* 9707b5: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 9707b9: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 9707bd: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9707c0: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 9707c1: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9707c3: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 9707c7: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 9707cb: jl 0x970632 */
  if ((sf != of)) goto L_970632;
L_9707d1: /* 9707d1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9707d2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_9707d3: /* 9707d3: fld dword ptr [0xcf798c] */
  { double v = F32((uint32_t)(0xcf798cu)); FPUSH(v); }
/* 9707d9: fcomp dword ptr [esp + 8] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x8u)));
  FPOP();
/* 9707dd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9707df: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9707e2: jne 0x9707ee */
  if (!zf) goto L_9707ee;
L_9707e4: /* 9707e4: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 9707e8: mov dword ptr [0xcf798c], ecx */
  W32((uint32_t)(0xcf798cu), ecx);
L_9707ee: /* 9707ee: cmp dword ptr [0xcf8438], 5 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9707f5: jl 0x970816 */
  if ((sf != of)) goto L_970816;
L_9707f7: /* 9707f7: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 9707fb: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 9707ff: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 970805: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 970806: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 970807: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 970808: push 0xb01d94 */
  { uint32_t v = 0xb01d94u; esp -= 4; W32(esp, v); }
/* 97080d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97080e: call 0x964260 */
  esp -= 4; W32(esp, 0x970813u); SPILL(); f_964260(); if (g_unwind) return; RELOAD();
/* 970813: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_970816: /* 970816: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 970817: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 970818: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97081b: ret  */
  esp += 4; SPILL(); return;
}

void f_970820(void) {
  LOAD_REGS();
L_970820: /* 970820: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 970821: mov edx, dword ptr [0xcf85cc] */
  edx = R32((uint32_t)(0xcf85ccu));
/* 970827: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 97082d: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97082f: fst dword ptr [esp] */
  WF32((uint32_t)(esp), ST0);
/* 970833: je 0x970854 */
  if (zf) goto L_970854;
L_970835: /* 970835: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 970839: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 97083d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_970840: /* 970840: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 970842: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 970845: fmul dword ptr [eax - 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffffcu)));
/* 970848: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 97084b: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 97084c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 97084e: jne 0x970840 */
  if (!zf) goto L_970840;
L_970850: /* 970850: fst dword ptr [esp] */
  WF32((uint32_t)(esp), ST0);
L_970854: /* 970854: mov eax, dword ptr [0xcf8548] */
  eax = R32((uint32_t)(0xcf8548u));
/* 970859: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97085b: je 0x970886 */
  if (zf) goto L_970886;
L_97085d: /* 97085d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 97085f: call 0x964770 */
  esp -= 4; W32(esp, 0x970864u); SPILL(); f_964770(); if (g_unwind) return; RELOAD();
/* 970864: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 970868: fild dword ptr [esp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 97086c: fmul qword ptr [0xa216b0] */
  ST0 = ST0 * (F64((uint32_t)(0xa216b0u)));
/* 970872: fsub qword ptr [0xa0da58] */
  ST0 = ST0 - (F64((uint32_t)(0xa0da58u)));
/* 970878: fmul dword ptr [0xcf854c] */
  ST0 = ST0 * (F32((uint32_t)(0xcf854cu)));
/* 97087e: fadd dword ptr [esp] */
  ST0 = ST0 + (F32((uint32_t)(esp)));
/* 970882: fst dword ptr [esp] */
  WF32((uint32_t)(esp), ST0);
L_970886: /* 970886: cmp dword ptr [0xcf8438], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 97088d: jl 0x9708ac */
  if ((sf != of)) goto L_9708ac;
L_97088f: /* 97088f: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 970894: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 970897: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97089a: push 0xb01e10 */
  { uint32_t v = 0xb01e10u; esp -= 4; W32(esp, v); }
/* 97089f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9708a0: call 0x953470 */
  esp -= 4; W32(esp, 0x9708a5u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9708a5: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 9708a9: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9708ac: /* 9708ac: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 9708ad: ret  */
  esp += 4; SPILL(); return;
}

void f_9708b0(void) {
  LOAD_REGS();
L_9708b0: /* 9708b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9708b1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 9708b5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9708b6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9708b7: call 0x94f340 */
  esp -= 4; W32(esp, 0x9708bcu); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 9708bc: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9708bf: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9708c2: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 9708c6: jge 0x9708e7 */
  if ((sf == of)) goto L_9708e7;
L_9708c8: /* 9708c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9708c9: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 9708ce: push 0xb01e28 */
  { uint32_t v = 0xb01e28u; esp -= 4; W32(esp, v); }
/* 9708d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9708d4: call 0x953470 */
  esp -= 4; W32(esp, 0x9708d9u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9708d9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9708db: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9708dd: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 9708df: call 0x9535b0 */
  esp -= 4; W32(esp, 0x9708e4u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 9708e4: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9708e7: /* 9708e7: mov ecx, dword ptr [0xcf8b40] */
  ecx = R32((uint32_t)(0xcf8b40u));
/* 9708ed: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9708ee: call 0x9538c0 */
  esp -= 4; W32(esp, 0x9708f3u); SPILL(); f_9538c0(); if (g_unwind) return; RELOAD();
/* 9708f3: mov ecx, dword ptr [0xcf85cc] */
  ecx = R32((uint32_t)(0xcf85ccu));
/* 9708f9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9708fc: xor edi, edi */
  edi = 0;
/* 9708fe: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 970900: jle 0x97094f */
  if ((zf || sf != of)) goto L_97094f;
L_970902: /* 970902: fild dword ptr [esp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 970906: mov edx, eax */
  edx = eax;
/* 970908: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 970909: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 97090f: nop  */
L_970910: /* 970910: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 970912: mov dword ptr [edx], 0 */
  W32((uint32_t)(edx), 0x0u);
/* 970918: je 0x970937 */
  if (zf) goto L_970937;
L_97091a: /* 97091a: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 97091d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97091f: lea esi, [ebx + 4] */
  esi = (uint32_t)(ebx + 0x4u);
/* 970922: je 0x970937 */
  if (zf) goto L_970937;
L_970924: /* 970924: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 970927: fld dword ptr [ecx + edi*4] */
  { double v = F32((uint32_t)(ecx + edi*4)); FPUSH(v); }
/* 97092a: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 97092d: fadd dword ptr [edx] */
  ST0 = ST0 + (F32((uint32_t)(edx)));
/* 97092f: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 970931: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 970933: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 970935: jne 0x970924 */
  if (!zf) goto L_970924;
L_970937: /* 970937: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 970939: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 97093a: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 97093c: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 97093f: fstp dword ptr [edx - 4] */
  WF32((uint32_t)(edx + 0xfffffffcu), ST0); FPOP();
/* 970942: mov ecx, dword ptr [0xcf85cc] */
  ecx = R32((uint32_t)(0xcf85ccu));
/* 970948: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 97094a: jl 0x970910 */
  if ((sf != of)) goto L_970910;
L_97094c: /* 97094c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 97094e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_97094f: /* 97094f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 970950: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 970951: ret  */
  esp += 4; SPILL(); return;
}

void f_970960(void) {
  LOAD_REGS();
L_970960: /* 970960: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 970961: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 970962: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 970966: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 970969: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97096a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97096b: call 0x9708b0 */
  esp -= 4; W32(esp, 0x970970u); SPILL(); f_9708b0(); if (g_unwind) return; RELOAD();
/* 970970: mov ebx, dword ptr [0xcf7804] */
  ebx = R32((uint32_t)(0xcf7804u));
/* 970976: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 97097a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97097b: mov edi, eax */
  edi = eax;
/* 97097d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97097e: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 97097f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 970980: mov dword ptr [0xcf7804], ebx */
  W32((uint32_t)(0xcf7804u), ebx);
/* 970986: call 0x96fa90 */
  esp -= 4; W32(esp, 0x97098bu); SPILL(); f_96fa90(); if (g_unwind) return; RELOAD();
/* 97098b: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 97098f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 970990: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 970991: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 970992: call 0x970e20 */
  esp -= 4; W32(esp, 0x970997u); SPILL(); f_970e20(); if (g_unwind) return; RELOAD();
/* 970997: mov ebx, eax */
  ebx = eax;
/* 970999: mov eax, dword ptr [0xcf8b40] */
  eax = R32((uint32_t)(0xcf8b40u));
/* 97099e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97099f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9709a0: call 0x953a60 */
  esp -= 4; W32(esp, 0x9709a5u); SPILL(); f_953a60(); if (g_unwind) return; RELOAD();
/* 9709a5: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 9709aa: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9709ad: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9709b0: jl 0x9709e0 */
  if ((sf != of)) goto L_9709e0;
L_9709b2: /* 9709b2: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 9709b6: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 9709b9: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9709bc: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 9709bf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9709c0: call 0x94f340 */
  esp -= 4; W32(esp, 0x9709c5u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 9709c5: mov edx, dword ptr [esi + 0x38] */
  edx = R32((uint32_t)(esi + 0x38u));
/* 9709c8: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9709cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9709cc: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 9709d1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9709d2: push 0xb01e68 */
  { uint32_t v = 0xb01e68u; esp -= 4; W32(esp, v); }
/* 9709d7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9709d8: call 0x953470 */
  esp -= 4; W32(esp, 0x9709ddu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9709dd: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9709e0: /* 9709e0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9709e1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9709e2: mov eax, ebx */
  eax = ebx;
/* 9709e4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9709e5: ret  */
  esp += 4; SPILL(); return;
}

void f_9709f0(void) {
  LOAD_REGS();
L_9709f0: /* 9709f0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9709f1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9709f2: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 9709f6: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 9709f9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9709fb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9709fc: je 0x970a21 */
  if (zf) goto L_970a21;
L_9709fe: /* 9709fe: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 970a01: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 970a03: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 970a05: je 0x970a21 */
  if (zf) goto L_970a21;
L_970a07: /* 970a07: mov edx, 0xfeffffff */
  edx = 0xfeffffffu;
/* 970a0c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_970a10: /* 970a10: mov edi, dword ptr [eax + 0x14] */
  edi = R32((uint32_t)(eax + 0x14u));
/* 970a13: and edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 970a15: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 970a18: mov dword ptr [eax + 0x14], edi */
  W32((uint32_t)(eax + 0x14u), edi);
/* 970a1b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 970a1d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 970a1f: jne 0x970a10 */
  if (!zf) goto L_970a10;
L_970a21: /* 970a21: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 970a25: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 970a28: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 970a2a: je 0x970a52 */
  if (zf) goto L_970a52;
L_970a2c: /* 970a2c: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 970a2f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 970a31: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 970a33: je 0x970a52 */
  if (zf) goto L_970a52;
L_970a35: /* 970a35: mov edx, 0x1000000 */
  edx = 0x1000000u;
/* 970a3a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 970a3b: nop  */
/* 970a3c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_970a40: /* 970a40: mov ebx, dword ptr [eax + 0x14] */
  ebx = R32((uint32_t)(eax + 0x14u));
/* 970a43: or ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 970a45: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 970a48: mov dword ptr [eax + 0x14], ebx */
  W32((uint32_t)(eax + 0x14u), ebx);
/* 970a4b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 970a4d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 970a4f: jne 0x970a40 */
  if (!zf) goto L_970a40;
L_970a51: /* 970a51: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_970a52: /* 970a52: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 970a55: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 970a57: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* 970a5f: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 970a67: je 0x970acb */
  if (zf) goto L_970acb;
L_970a69: /* 970a69: lea esi, [eax + 4] */
  esi = (uint32_t)(eax + 0x4u);
/* 970a6c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 970a6e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 970a70: je 0x970acb */
  if (zf) goto L_970acb;
L_970a72: /* 970a72: mov cl, byte ptr [eax + 0x17] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x17u))) & 0xffu);
/* 970a75: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 970a78: test cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 970a7b: jne 0x970ac5 */
  if (!zf) goto L_970ac5;
L_970a7d: /* 970a7d: inc dword ptr [0xcf7800] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf7800u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0xcf7800u), r);
  }
/* 970a83: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 970a86: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 970a8a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 970a8b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 970a8c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 970a8d: call 0x96fa90 */
  esp -= 4; W32(esp, 0x970a92u); SPILL(); f_96fa90(); if (g_unwind) return; RELOAD();
/* 970a92: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 970a96: fcomp dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
  FPOP();
/* 970a9a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 970a9d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 970a9f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 970aa2: jp 0x970aae */
  if (pf) goto L_970aae;
L_970aa4: /* 970aa4: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 970aa8: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 970aac: jmp 0x970ac5 */
  goto L_970ac5;
L_970aae: /* 970aae: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 970ab2: fcomp dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
  FPOP();
/* 970ab6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 970ab8: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 970abb: jne 0x970ac5 */
  if (!zf) goto L_970ac5;
L_970abd: /* 970abd: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 970ac1: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
L_970ac5: /* 970ac5: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 970ac7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 970ac9: jne 0x970a72 */
  if (!zf) goto L_970a72;
L_970acb: /* 970acb: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 970acf: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 970ad3: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 970ad7: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 970ad9: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 970add: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 970ade: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 970ae0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 970ae1: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 970ae5: fchs  */
  ST0 = -ST0;
/* 970ae7: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 970aeb: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 970aed: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 970aef: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 970af2: jne 0x970afa */
  if (!zf) goto L_970afa;
L_970af4: /* 970af4: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 970af6: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
L_970afa: /* 970afa: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 970afb: ret  */
  esp += 4; SPILL(); return;
}

void f_970b00(void) {
  LOAD_REGS();
L_970b00: /* 970b00: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 970b04: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 970b08: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 970b0c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 970b0e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 970b10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 970b11: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 970b12: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 970b13: call 0x970b20 */
  esp -= 4; W32(esp, 0x970b18u); SPILL(); f_970b20(); if (g_unwind) return; RELOAD();
/* 970b18: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 970b1b: ret  */
  esp += 4; SPILL(); return;
}

void f_970b20(void) {
  LOAD_REGS();
L_970b20: /* 970b20: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 970b21: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 970b22: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 970b23: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 970b24: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 970b28: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 970b29: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 970b2d: cmp edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 970b30: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 970b38: jne 0x970b58 */
  if (!zf) goto L_970b58;
L_970b3a: /* 970b3a: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 970b3c: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 970b3f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 970b41: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 970b43: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 970b45: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 970b47: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 970b49: fsqrt  */
  ST0 = sqrt(ST0);
/* 970b4b: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 970b4f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 970b51: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 970b53: jmp 0x970c07 */
  goto L_970c07;
L_970b58: /* 970b58: cmp edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 970b5b: jne 0x970b86 */
  if (!zf) goto L_970b86;
L_970b5d: /* 970b5d: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 970b5f: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 970b62: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 970b65: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 970b67: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 970b69: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 970b6b: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 970b6d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 970b6f: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 970b71: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 970b73: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 970b75: fsqrt  */
  ST0 = sqrt(ST0);
/* 970b77: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 970b7b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 970b7d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 970b7f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 970b81: jmp 0x970c07 */
  goto L_970c07;
L_970b86: /* 970b86: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 970b89: jne 0x970bbc */
  if (!zf) goto L_970bbc;
L_970b8b: /* 970b8b: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 970b8d: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 970b90: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 970b93: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 970b96: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 970b98: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 970b9a: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 970b9c: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 970b9e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 970ba0: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 970ba2: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 970ba4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 970ba6: fld st(4) */
  { double v = STI(4); FPUSH(v); }
/* 970ba8: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 970baa: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 970bac: fsqrt  */
  ST0 = sqrt(ST0);
/* 970bae: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 970bb2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 970bb4: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 970bb6: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 970bb8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 970bba: jmp 0x970c07 */
  goto L_970c07;
L_970bbc: /* 970bbc: jle 0x970c07 */
  if ((zf || sf != of)) goto L_970c07;
L_970bbe: /* 970bbe: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 970bc0: lea ecx, [edi - 4] */
  ecx = (uint32_t)(edi + 0xfffffffcu);
/* 970bc3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 970bc5: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 970bc8: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 970bcb: lea eax, [esi + 0x10] */
  eax = (uint32_t)(esi + 0x10u);
/* 970bce: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 970bd1: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 970bd3: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 970bd5: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 970bd7: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 970bd9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 970bdb: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 970bdd: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 970bdf: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 970be1: fld st(4) */
  { double v = STI(4); FPUSH(v); }
/* 970be3: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 970be5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 970be7: fstp st(4) */
  STI(4) = ST0; FPOP();
/* 970be9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 970beb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 970bed: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 970bef: je 0x970c01 */
  if (zf) goto L_970c01;
L_970bf1: /* 970bf1: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 970bf3: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 970bf6: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 970bf7: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 970bf9: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 970bfb: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 970bfd: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 970bff: jne 0x970bf1 */
  if (!zf) goto L_970bf1;
L_970c01: /* 970c01: fsqrt  */
  ST0 = sqrt(ST0);
/* 970c03: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
L_970c07: /* 970c07: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 970c0b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 970c0d: je 0x970c32 */
  if (zf) goto L_970c32;
L_970c0f: /* 970c0f: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 970c13: fcomp dword ptr [eax] */
  fpu_com(ST0, F32((uint32_t)(eax)));
  FPOP();
/* 970c15: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 970c17: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 970c1a: jp 0x970c28 */
  if (pf) goto L_970c28;
L_970c1c: /* 970c1c: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 970c20: mov dword ptr [eax], 1 */
  W32((uint32_t)(eax), 0x1u);
/* 970c26: jmp 0x970c32 */
  goto L_970c32;
L_970c28: /* 970c28: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 970c2c: mov dword ptr [ecx], 0 */
  W32((uint32_t)(ecx), 0x0u);
L_970c32: /* 970c32: fld dword ptr [0xcf798c] */
  { double v = F32((uint32_t)(0xcf798cu)); FPUSH(v); }
/* 970c38: fcomp dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
  FPOP();
/* 970c3c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 970c3e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 970c41: jne 0x970c4d */
  if (!zf) goto L_970c4d;
L_970c43: /* 970c43: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 970c47: mov dword ptr [0xcf798c], edx */
  W32((uint32_t)(0xcf798cu), edx);
L_970c4d: /* 970c4d: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 970c51: fcomp dword ptr [0xcf8a2c] */
  fpu_com(ST0, F32((uint32_t)(0xcf8a2cu)));
  FPOP();
/* 970c57: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 970c59: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 970c5c: jne 0x970d0b */
  if (!zf) goto L_970d0b;
L_970c62: /* 970c62: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 970c66: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 970c68: jne 0x970c74 */
  if (!zf) goto L_970c74;
L_970c6a: /* 970c6a: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 970c6e: fchs  */
  ST0 = -ST0;
/* 970c70: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
L_970c74: /* 970c74: cmp edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 970c77: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 970c7d: fdiv dword ptr [esp + 0x10] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x10u)));
/* 970c81: fst dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0);
/* 970c85: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 970c87: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 970c89: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 970c8d: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 970c90: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 970c93: je 0x970e15 */
  if (zf) goto L_970e15;
L_970c99: /* 970c99: cmp edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 970c9c: jne 0x970cae */
  if (!zf) goto L_970cae;
L_970c9e: /* 970c9e: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 970ca2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 970ca3: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 970ca6: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 970ca9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 970caa: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 970cab: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 970cac: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 970cad: ret  */
  esp += 4; SPILL(); return;
L_970cae: /* 970cae: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 970cb1: jne 0x970ccd */
  if (!zf) goto L_970ccd;
L_970cb3: /* 970cb3: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 970cb7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 970cb8: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 970cbb: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 970cbe: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 970cc2: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 970cc5: fstp dword ptr [esi + 0xc] */
  WF32((uint32_t)(esi + 0xcu), ST0); FPOP();
/* 970cc8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 970cc9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 970cca: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 970ccb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 970ccc: ret  */
  esp += 4; SPILL(); return;
L_970ccd: /* 970ccd: jle 0x970e15 */
  if ((zf || sf != of)) goto L_970e15;
L_970cd3: /* 970cd3: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 970cd7: add edi, -4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 970cda: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 970cdc: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 970cdf: lea eax, [esi + 0x10] */
  eax = (uint32_t)(esi + 0x10u);
/* 970ce2: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 970ce5: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 970ce9: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 970cec: fstp dword ptr [esi + 0xc] */
  WF32((uint32_t)(esi + 0xcu), ST0); FPOP();
/* 970cef: je 0x970e15 */
  if (zf) goto L_970e15;
L_970cf5: /* 970cf5: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 970cf9: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 970cfc: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 970cfd: fmul dword ptr [eax - 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffffcu)));
/* 970d00: fstp dword ptr [eax - 4] */
  WF32((uint32_t)(eax + 0xfffffffcu), ST0); FPOP();
/* 970d03: jne 0x970cf5 */
  if (!zf) goto L_970cf5;
L_970d05: /* 970d05: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 970d06: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 970d07: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 970d08: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 970d09: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 970d0a: ret  */
  esp += 4; SPILL(); return;
L_970d0b: /* 970d0b: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 970d0f: fcomp qword ptr [0x9f7668] */
  fpu_com(ST0, F64((uint32_t)(0x9f7668u)));
  FPOP();
/* 970d15: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 970d17: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 970d1a: jp 0x970d47 */
  if (pf) goto L_970d47;
L_970d1c: /* 970d1c: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 970d1e: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 970d22: fdivr qword ptr [0xa0da58] */
  ST0 = (F64((uint32_t)(0xa0da58u))) / ST0;
/* 970d28: fsqrt  */
  ST0 = sqrt(ST0);
/* 970d2a: je 0x970e13 */
  if (zf) goto L_970e13;
L_970d30: /* 970d30: lea ecx, [edi*4 - 1] */
  ecx = (uint32_t)(edi*4 + 0xffffffffu);
/* 970d37: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 970d39: lea edi, [esi + 4] */
  edi = (uint32_t)(esi + 0x4u);
/* 970d3c: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 970d3f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 970d41: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 970d42: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 970d43: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 970d44: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 970d45: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 970d46: ret  */
  esp += 4; SPILL(); return;
L_970d47: /* 970d47: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 970d4b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 970d4d: jne 0x970d59 */
  if (!zf) goto L_970d59;
L_970d4f: /* 970d4f: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 970d53: fchs  */
  ST0 = -ST0;
/* 970d55: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
L_970d59: /* 970d59: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 970d5b: mov ebp, edi */
  ebp = edi;
/* 970d5d: mov ebx, esi */
  ebx = esi;
/* 970d5f: je 0x970e15 */
  if (zf) goto L_970e15;
L_970d65: /* 970d65: mov ecx, dword ptr [0xcf8a28] */
  ecx = R32((uint32_t)(0xcf8a28u));
/* 970d6b: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 970d6f: lea eax, [esp + 0x28] */
  eax = (uint32_t)(esp + 0x28u);
/* 970d73: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 970d74: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 970d76: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 970d77: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 970d78: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 970d79: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  ebp = r;
  }
/* 970d7a: call 0x962c10 */
  esp -= 4; W32(esp, 0x970d7fu); SPILL(); f_962c10(); if (g_unwind) return; RELOAD();
/* 970d7f: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 970d83: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 970d86: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 970d88: jne 0x970d99 */
  if (!zf) goto L_970d99;
L_970d8a: /* 970d8a: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 970d8c: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 970d8f: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 970d91: jne 0x970d65 */
  if (!zf) goto L_970d65;
L_970d93: /* 970d93: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 970d94: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 970d95: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 970d96: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 970d97: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 970d98: ret  */
  esp += 4; SPILL(); return;
L_970d99: /* 970d99: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 970d9a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 970d9c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 970d9d: call 0x963990 */
  esp -= 4; W32(esp, 0x970da2u); SPILL(); f_963990(); if (g_unwind) return; RELOAD();
/* 970da2: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 970da6: mov edx, eax */
  edx = eax;
/* 970da8: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 970daa: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 970dad: fcomp qword ptr [0x9f7668] */
  fpu_com(ST0, F64((uint32_t)(0x9f7668u)));
  FPOP();
/* 970db3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 970db5: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 970db8: jne 0x970dc2 */
  if (!zf) goto L_970dc2;
L_970dba: /* 970dba: fld qword ptr [0xa0da58] */
  { double v = F64((uint32_t)(0xa0da58u)); FPUSH(v); }
/* 970dc0: jmp 0x970dc8 */
  goto L_970dc8;
L_970dc2: /* 970dc2: fld qword ptr [0xa14ed8] */
  { double v = F64((uint32_t)(0xa14ed8u)); FPUSH(v); }
L_970dc8: /* 970dc8: xor eax, eax */
  eax = 0;
/* 970dca: mov ecx, edi */
  ecx = edi;
/* 970dcc: mov edi, esi */
  edi = esi;
/* 970dce: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 970dd0: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 970dd2: mov ecx, dword ptr [0xcf799c] */
  ecx = R32((uint32_t)(0xcf799cu));
/* 970dd8: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 970ddd: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 970dde: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 970de0: mov dword ptr [0xcf799c], ecx */
  W32((uint32_t)(0xcf799cu), ecx);
/* 970de6: je 0x970e15 */
  if (zf) goto L_970e15;
L_970de8: /* 970de8: mov ecx, dword ptr [0xcf8bac] */
  ecx = R32((uint32_t)(0xcf8bacu));
/* 970dee: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 970df2: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 970df8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 970df9: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 970dfc: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 970dff: push 0xb01e9c */
  { uint32_t v = 0xb01e9cu; esp -= 4; W32(esp, v); }
/* 970e04: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 970e05: call 0x953470 */
  esp -= 4; W32(esp, 0x970e0au); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 970e0a: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 970e0d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 970e0e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 970e0f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 970e10: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 970e11: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 970e12: ret  */
  esp += 4; SPILL(); return;
L_970e13: /* 970e13: fstp st(0) */
  STI(0) = ST0; FPOP();
L_970e15: /* 970e15: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 970e16: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 970e17: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 970e18: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 970e19: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 970e1a: ret  */
  esp += 4; SPILL(); return;
}

void f_970e20(void) {
  LOAD_REGS();
L_970e20: /* 970e20: mov eax, dword ptr [0xcf2f38] */
  eax = R32((uint32_t)(0xcf2f38u));
/* 970e25: mov edx, dword ptr [0xcf8b40] */
  edx = R32((uint32_t)(0xcf8b40u));
/* 970e2b: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 970e2e: mov eax, dword ptr [0xcf2f30] */
  eax = R32((uint32_t)(0xcf2f30u));
/* 970e33: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 970e36: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 970e38: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 970e3a: je 0x970e4a */
  if (zf) goto L_970e4a;
L_970e3c: /* 970e3c: inc dword ptr [0xcf2f54] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf2f54u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0xcf2f54u), r);
  }
/* 970e42: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 970e44: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 970e46: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 970e48: jmp 0x970e53 */
  goto L_970e53;
L_970e4a: /* 970e4a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 970e4b: call 0x9538c0 */
  esp -= 4; W32(esp, 0x970e50u); SPILL(); f_9538c0(); if (g_unwind) return; RELOAD();
/* 970e50: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_970e53: /* 970e53: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 970e57: mov edx, dword ptr [edx + 0xc] */
  edx = R32((uint32_t)(edx + 0xcu));
/* 970e5a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 970e5b: mov esi, dword ptr [0xcf85cc] */
  esi = R32((uint32_t)(0xcf85ccu));
/* 970e61: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 970e63: mov ecx, eax */
  ecx = eax;
/* 970e65: je 0x970e89 */
  if (zf) goto L_970e89;
L_970e67: /* 970e67: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 970e68: mov edi, esi */
  edi = esi;
/* 970e6a: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 970e6e: mov edi, edi */
  edi = edi;
L_970e70: /* 970e70: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 970e74: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 970e77: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 970e79: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 970e7c: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 970e7f: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 970e80: fsubr dword ptr [esi - 4] */
  ST0 = (F32((uint32_t)(esi + 0xfffffffcu))) - ST0;
/* 970e83: fstp dword ptr [ecx - 4] */
  WF32((uint32_t)(ecx + 0xfffffffcu), ST0); FPOP();
/* 970e86: jne 0x970e70 */
  if (!zf) goto L_970e70;
L_970e88: /* 970e88: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_970e89: /* 970e89: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 970e8a: ret  */
  esp += 4; SPILL(); return;
}

void f_970e90(void) {
  LOAD_REGS();
L_970e90: /* 970e90: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 970e93: mov edx, dword ptr [0xcf8b40] */
  edx = R32((uint32_t)(0xcf8b40u));
/* 970e99: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 970e9a: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 970e9e: mov eax, dword ptr [ebx + 0x20] */
  eax = R32((uint32_t)(ebx + 0x20u));
/* 970ea1: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 970ea4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 970ea5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 970ea6: mov esi, dword ptr [ecx + 8] */
  esi = R32((uint32_t)(ecx + 0x8u));
/* 970ea9: mov ecx, dword ptr [0xcf7a70] */
  ecx = R32((uint32_t)(0xcf7a70u));
/* 970eaf: xor ebp, ebp */
  ebp = 0;
/* 970eb1: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 970eb2: mov dword ptr [0xcf7a70], ecx */
  W32((uint32_t)(0xcf7a70u), ecx);
/* 970eb8: cmp dword ptr [ebx + 0xc], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0xcu))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 970ebb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 970ebc: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 970ec0: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 970ec4: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 970ec8: jne 0x970efd */
  if (!zf) goto L_970efd;
L_970eca: /* 970eca: mov eax, dword ptr [0xcf2f38] */
  eax = R32((uint32_t)(0xcf2f38u));
/* 970ecf: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 970ed2: mov eax, dword ptr [0xcf2f30] */
  eax = R32((uint32_t)(0xcf2f30u));
/* 970ed7: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 970eda: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 970edc: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 970ede: mov dword ptr [ebx + 0xc], eax */
  W32((uint32_t)(ebx + 0xcu), eax);
/* 970ee1: je 0x970ef1 */
  if (zf) goto L_970ef1;
L_970ee3: /* 970ee3: inc dword ptr [0xcf2f54] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf2f54u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0xcf2f54u), r);
  }
/* 970ee9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 970eeb: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 970eed: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 970eef: jmp 0x970efd */
  goto L_970efd;
L_970ef1: /* 970ef1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 970ef2: call 0x9538c0 */
  esp -= 4; W32(esp, 0x970ef7u); SPILL(); f_9538c0(); if (g_unwind) return; RELOAD();
/* 970ef7: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 970efa: mov dword ptr [ebx + 0xc], eax */
  W32((uint32_t)(ebx + 0xcu), eax);
L_970efd: /* 970efd: cmp ebx, dword ptr [0xcf8b68] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(0xcf8b68u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 970f03: jne 0x970f89 */
  if (!zf) goto L_970f89;
L_970f09: /* 970f09: mov ecx, dword ptr [0xcf8438] */
  ecx = R32((uint32_t)(0xcf8438u));
/* 970f0f: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 970f14: mov dword ptr [0xcf8438], 5 */
  W32((uint32_t)(0xcf8438u), 0x5u);
/* 970f1e: mov edx, dword ptr [ebx + 0x38] */
  edx = R32((uint32_t)(ebx + 0x38u));
/* 970f21: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 970f22: push 0xb01fe8 */
  { uint32_t v = 0xb01fe8u; esp -= 4; W32(esp, v); }
/* 970f27: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 970f28: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 970f2c: call 0x953470 */
  esp -= 4; W32(esp, 0x970f31u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 970f31: mov ecx, dword ptr [0xcf8bac] */
  ecx = R32((uint32_t)(0xcf8bacu));
/* 970f37: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 970f3d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 970f3e: push 0xb01b98 */
  { uint32_t v = 0xb01b98u; esp -= 4; W32(esp, v); }
/* 970f43: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 970f44: call 0x953470 */
  esp -= 4; W32(esp, 0x970f49u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 970f49: mov eax, dword ptr [0xcf7a80] */
  eax = R32((uint32_t)(0xcf7a80u));
/* 970f4e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 970f51: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 970f53: je 0x970f69 */
  if (zf) goto L_970f69;
L_970f55: /* 970f55: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 970f56: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 970f5b: push 0xb01fd0 */
  { uint32_t v = 0xb01fd0u; esp -= 4; W32(esp, v); }
/* 970f60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 970f61: call 0x953470 */
  esp -= 4; W32(esp, 0x970f66u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 970f66: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_970f69: /* 970f69: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 970f6f: push 0xb01fb8 */
  { uint32_t v = 0xb01fb8u; esp -= 4; W32(esp, v); }
/* 970f74: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 970f75: call 0x953470 */
  esp -= 4; W32(esp, 0x970f7au); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 970f7a: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 970f80: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 970f81: call 0x96f1c0 */
  esp -= 4; W32(esp, 0x970f86u); SPILL(); f_96f1c0(); if (g_unwind) return; RELOAD();
/* 970f86: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_970f89: /* 970f89: cmp dword ptr [0xcf85cc], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf85ccu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 970f90: jg 0x971080 */
  if ((!zf && sf == of)) goto L_971080;
L_970f96: /* 970f96: cmp dword ptr [0xcf8548], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8548u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 970f9c: je 0x971007 */
  if (zf) goto L_971007;
L_970f9e: /* 970f9e: mov eax, dword ptr [ebx + 0x20] */
  eax = R32((uint32_t)(ebx + 0x20u));
/* 970fa1: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 970fa3: mov edi, dword ptr [0xcf8c1c] */
  edi = R32((uint32_t)(0xcf8c1cu));
/* 970fa9: je 0x971038 */
  if (zf) goto L_971038;
L_970faf: /* 970faf: lea edx, [eax + 4] */
  edx = (uint32_t)(eax + 0x4u);
/* 970fb2: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 970fb4: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 970fb6: je 0x971038 */
  if (zf) goto L_971038;
L_970fbc: /* 970fbc: xor ecx, ecx */
  ecx = 0;
/* 970fbe: mov edi, edi */
  edi = edi;
L_970fc0: /* 970fc0: mov esi, dword ptr [0xcf8c20] */
  esi = R32((uint32_t)(0xcf8c20u));
/* 970fc6: mov dword ptr [ecx + esi], edi */
  W32((uint32_t)(ecx + esi), edi);
/* 970fc9: mov ebp, dword ptr [0xcf85cc] */
  ebp = R32((uint32_t)(0xcf85ccu));
/* 970fcf: mov esi, dword ptr [eax + 8] */
  esi = R32((uint32_t)(eax + 0x8u));
/* 970fd2: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 970fd5: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 970fd8: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 970fda: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 970fde: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 970fe2: je 0x970fff */
  if (zf) goto L_970fff;
L_970fe4: /* 970fe4: call 0x9647d0 */
  esp -= 4; W32(esp, 0x970fe9u); SPILL(); f_9647d0(); if (g_unwind) return; RELOAD();
/* 970fe9: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 970feb: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 970fee: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 970ff1: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 970ff2: fstp dword ptr [edi - 4] */
  WF32((uint32_t)(edi + 0xfffffffcu), ST0); FPOP();
/* 970ff5: jne 0x970fe4 */
  if (!zf) goto L_970fe4;
L_970ff7: /* 970ff7: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 970ffb: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
L_970fff: /* 970fff: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 971001: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 971003: jne 0x970fc0 */
  if (!zf) goto L_970fc0;
L_971005: /* 971005: jmp 0x971038 */
  goto L_971038;
L_971007: /* 971007: mov ecx, dword ptr [ebx + 0x20] */
  ecx = R32((uint32_t)(ebx + 0x20u));
/* 97100a: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97100c: je 0x971038 */
  if (zf) goto L_971038;
L_97100e: /* 97100e: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 971011: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 971014: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 971016: je 0x971038 */
  if (zf) goto L_971038;
L_971018: /* 971018: xor edx, edx */
  edx = 0;
/* 97101a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_971020: /* 971020: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 971023: mov esi, dword ptr [0xcf8c20] */
  esi = R32((uint32_t)(0xcf8c20u));
/* 971029: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 97102c: mov dword ptr [edx + esi], eax */
  W32((uint32_t)(edx + esi), eax);
/* 97102f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 971031: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 971034: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 971036: jne 0x971020 */
  if (!zf) goto L_971020;
L_971038: /* 971038: mov eax, dword ptr [ebx + 0x3c] */
  eax = R32((uint32_t)(ebx + 0x3cu));
/* 97103b: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 97103e: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 971042: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 971046: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 971047: mov ecx, dword ptr [0xcf8c20] */
  ecx = R32((uint32_t)(0xcf8c20u));
/* 97104d: lea ebp, [ebx + 8] */
  ebp = (uint32_t)(ebx + 0x8u);
/* 971050: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 971051: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 971052: mov edx, dword ptr [0xcf85cc] */
  edx = R32((uint32_t)(0xcf85ccu));
/* 971058: shr eax, 0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 11;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 97105b: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 97105e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97105f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 971060: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 971061: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 971062: call 0x9713e0 */
  esp -= 4; W32(esp, 0x971067u); SPILL(); f_9713e0(); if (g_unwind) return; RELOAD();
/* 971067: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 97106c: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97106f: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 971072: jg 0x971080 */
  if ((!zf && sf == of)) goto L_971080;
L_971074: /* 971074: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 971078: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97107a: je 0x971184 */
  if (zf) goto L_971184;
L_971080: /* 971080: mov eax, dword ptr [ebx + 0x20] */
  eax = R32((uint32_t)(ebx + 0x20u));
/* 971083: mov edx, dword ptr [0xcf8c1c] */
  edx = R32((uint32_t)(0xcf8c1cu));
/* 971089: xor edi, edi */
  edi = 0;
/* 97108b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97108d: je 0x9710dd */
  if (zf) goto L_9710dd;
L_97108f: /* 97108f: lea ebp, [eax + 4] */
  ebp = (uint32_t)(eax + 0x4u);
/* 971092: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 971095: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 971097: je 0x9710dd */
  if (zf) goto L_9710dd;
L_971099: /* 971099: jmp 0x9710a0 */
  goto L_9710a0;
L_97109b: /* 97109b: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 97109f: nop  */
L_9710a0: /* 9710a0: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 9710a3: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 9710a6: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9710a8: je 0x9710d6 */
  if (zf) goto L_9710d6;
L_9710aa: /* 9710aa: mov ecx, dword ptr [0xcf8c20] */
  ecx = R32((uint32_t)(0xcf8c20u));
/* 9710b0: mov dword ptr [ecx + edi*4], edx */
  W32((uint32_t)(ecx + edi*4), edx);
/* 9710b3: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 9710b6: mov eax, esi */
  eax = esi;
/* 9710b8: mov esi, dword ptr [0xcf85cc] */
  esi = R32((uint32_t)(0xcf85ccu));
/* 9710be: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 9710bf: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9710c1: je 0x9710d6 */
  if (zf) goto L_9710d6;
L_9710c3: /* 9710c3: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 9710c5: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9710c8: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 9710ca: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9710cd: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9710d0: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 9710d1: fstp dword ptr [edx - 4] */
  WF32((uint32_t)(edx + 0xfffffffcu), ST0); FPOP();
/* 9710d4: jne 0x9710c3 */
  if (!zf) goto L_9710c3;
L_9710d6: /* 9710d6: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 9710d9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9710db: jne 0x97109b */
  if (!zf) goto L_97109b;
L_9710dd: /* 9710dd: mov eax, dword ptr [0xcf8c20] */
  eax = R32((uint32_t)(0xcf8c20u));
/* 9710e2: mov dword ptr [eax + edi*4], edx */
  W32((uint32_t)(eax + edi*4), edx);
/* 9710e5: mov eax, dword ptr [0xcf8548] */
  eax = R32((uint32_t)(0xcf8548u));
/* 9710ea: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9710ec: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 9710f1: je 0x971120 */
  if (zf) goto L_971120;
L_9710f3: /* 9710f3: mov esi, dword ptr [0xcf8c1c] */
  esi = R32((uint32_t)(0xcf8c1cu));
/* 9710f9: lea ecx, [eax - 1] */
  ecx = (uint32_t)(eax + 0xffffffffu);
/* 9710fc: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9710fe: je 0x971120 */
  if (zf) goto L_971120;
L_971100: /* 971100: mov ebp, ecx */
  ebp = ecx;
L_971102: /* 971102: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 971104: je 0x97111d */
  if (zf) goto L_97111d;
L_971106: /* 971106: mov edi, eax */
  edi = eax;
L_971108: /* 971108: call 0x9647d0 */
  esp -= 4; W32(esp, 0x97110du); SPILL(); f_9647d0(); if (g_unwind) return; RELOAD();
/* 97110d: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 97110f: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 971112: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 971113: fstp dword ptr [esi - 4] */
  WF32((uint32_t)(esi + 0xfffffffcu), ST0); FPOP();
/* 971116: jne 0x971108 */
  if (!zf) goto L_971108;
L_971118: /* 971118: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
L_97111d: /* 97111d: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 97111e: jne 0x971102 */
  if (!zf) goto L_971102;
L_971120: /* 971120: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 971123: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 971127: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 971128: mov ecx, dword ptr [ebx + 0x3c] */
  ecx = R32((uint32_t)(ebx + 0x3cu));
/* 97112b: lea ebp, [ebx + 8] */
  ebp = (uint32_t)(ebx + 0x8u);
/* 97112e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 97112f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 971130: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 971134: shr ecx, 0xb */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 11;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 971137: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 97113a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97113b: mov ecx, dword ptr [0xcf8c20] */
  ecx = R32((uint32_t)(0xcf8c20u));
/* 971141: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 971142: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 971143: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 971144: call 0x971840 */
  esp -= 4; W32(esp, 0x971149u); SPILL(); f_971840(); if (g_unwind) return; RELOAD();
/* 971149: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 97114d: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 971150: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 971152: je 0x971184 */
  if (zf) goto L_971184;
L_971154: /* 971154: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 971155: call 0x9640c0 */
  esp -= 4; W32(esp, 0x97115au); SPILL(); f_9640c0(); if (g_unwind) return; RELOAD();
/* 97115a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97115d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97115f: je 0x971184 */
  if (zf) goto L_971184;
L_971161: /* 971161: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 971166: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 971168: je 0x971184 */
  if (zf) goto L_971184;
L_97116a: /* 97116a: mov edx, dword ptr [0xcf8bac] */
  edx = R32((uint32_t)(0xcf8bacu));
/* 971170: mov eax, dword ptr [0xcf8b38] */
  eax = R32((uint32_t)(0xcf8b38u));
/* 971175: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 971176: push 0xb01f68 */
  { uint32_t v = 0xb01f68u; esp -= 4; W32(esp, v); }
/* 97117b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97117c: call 0x953470 */
  esp -= 4; W32(esp, 0x971181u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 971181: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_971184: /* 971184: mov ecx, dword ptr [ebx + 0x3c] */
  ecx = R32((uint32_t)(ebx + 0x3cu));
/* 971187: and ecx, 0xfffeffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffeffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 97118d: mov dword ptr [ebx + 0x3c], ecx */
  W32((uint32_t)(ebx + 0x3cu), ecx);
/* 971190: mov eax, dword ptr [0xcf8410] */
  eax = R32((uint32_t)(0xcf8410u));
/* 971195: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 971197: je 0x9711d7 */
  if (zf) goto L_9711d7;
L_971199: /* 971199: mov eax, dword ptr [0xcf85a4] */
  eax = R32((uint32_t)(0xcf85a4u));
/* 97119e: fld dword ptr [0xcf8a08] */
  { double v = F32((uint32_t)(0xcf8a08u)); FPUSH(v); }
/* 9711a4: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 9711a7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9711a9: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 9711ae: je 0x9711bd */
  if (zf) goto L_9711bd;
L_9711b0: /* 9711b0: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 9711b2: fcomp dword ptr [edx + eax*4 - 4] */
  fpu_com(ST0, F32((uint32_t)(edx + eax*4 + 0xfffffffcu)));
  FPOP();
/* 9711b6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9711b8: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9711bb: jmp 0x9711cc */
  goto L_9711cc;
L_9711bd: /* 9711bd: fmul dword ptr [0xa0c9b4] */
  ST0 = ST0 * (F32((uint32_t)(0xa0c9b4u)));
/* 9711c3: fcomp dword ptr [edx + eax*4 - 4] */
  fpu_com(ST0, F32((uint32_t)(edx + eax*4 + 0xfffffffcu)));
  FPOP();
/* 9711c7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9711c9: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
L_9711cc: /* 9711cc: jp 0x9711d7 */
  if (pf) goto L_9711d7;
L_9711ce: /* 9711ce: or ecx, 0x10000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 9711d4: mov dword ptr [ebx + 0x3c], ecx */
  W32((uint32_t)(ebx + 0x3cu), ecx);
L_9711d7: /* 9711d7: mov eax, dword ptr [0xcf8530] */
  eax = R32((uint32_t)(0xcf8530u));
/* 9711dc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9711de: jne 0x971209 */
  if (!zf) goto L_971209;
L_9711e0: /* 9711e0: mov eax, dword ptr [0xcf8438] */
  eax = R32((uint32_t)(0xcf8438u));
/* 9711e5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9711e7: jne 0x971209 */
  if (!zf) goto L_971209;
L_9711e9: /* 9711e9: mov eax, dword ptr [0xcf8590] */
  eax = R32((uint32_t)(0xcf8590u));
/* 9711ee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9711f0: jne 0x971209 */
  if (!zf) goto L_971209;
L_9711f2: /* 9711f2: fld dword ptr [0xcf8bb4] */
  { double v = F32((uint32_t)(0xcf8bb4u)); FPUSH(v); }
/* 9711f8: fcomp dword ptr [0xa13bbc] */
  fpu_com(ST0, F32((uint32_t)(0xa13bbcu)));
  FPOP();
/* 9711fe: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 971200: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 971203: jp 0x9713be */
  if (pf) goto L_9713be;
L_971209: /* 971209: mov ecx, dword ptr [0xcf8548] */
  ecx = R32((uint32_t)(0xcf8548u));
/* 97120f: mov dword ptr [0xcf8c50], ecx */
  W32((uint32_t)(0xcf8c50u), ecx);
/* 971215: mov dword ptr [0xcf8548], 0 */
  W32((uint32_t)(0xcf8548u), 0x0u);
/* 97121f: mov eax, dword ptr [ebx + 0x20] */
  eax = R32((uint32_t)(ebx + 0x20u));
/* 971222: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 971224: je 0x971341 */
  if (zf) goto L_971341;
L_97122a: /* 97122a: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 97122d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97122f: lea edi, [eax + 4] */
  edi = (uint32_t)(eax + 0x4u);
/* 971232: je 0x971341 */
  if (zf) goto L_971341;
L_971238: /* 971238: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 97123c: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 97123f: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 971242: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 971244: je 0x971337 */
  if (zf) goto L_971337;
L_97124a: /* 97124a: mov edx, dword ptr [0xcf7894] */
  edx = R32((uint32_t)(0xcf7894u));
/* 971250: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 971254: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 971255: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 971256: mov dword ptr [0xcf7894], edx */
  W32((uint32_t)(0xcf7894u), edx);
/* 97125c: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 97125f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 971260: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 971261: call 0x96fa90 */
  esp -= 4; W32(esp, 0x971266u); SPILL(); f_96fa90(); if (g_unwind) return; RELOAD();
/* 971266: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 97126a: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 971270: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 971273: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 971275: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 971278: jp 0x971284 */
  if (pf) goto L_971284;
L_97127a: /* 97127a: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 97127e: fchs  */
  ST0 = -ST0;
/* 971280: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
L_971284: /* 971284: fld dword ptr [0xcf79b8] */
  { double v = F32((uint32_t)(0xcf79b8u)); FPUSH(v); }
/* 97128a: mov eax, dword ptr [0xcf79b4] */
  eax = R32((uint32_t)(0xcf79b4u));
/* 97128f: fadd dword ptr [esp + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x24u)));
/* 971293: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 971294: mov dword ptr [0xcf79b4], eax */
  W32((uint32_t)(0xcf79b4u), eax);
/* 971299: fstp dword ptr [0xcf79b8] */
  WF32((uint32_t)(0xcf79b8u), ST0); FPOP();
/* 97129f: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 9712a3: fcomp dword ptr [0xcf79bc] */
  fpu_com(ST0, F32((uint32_t)(0xcf79bcu)));
  FPOP();
/* 9712a9: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 9712ad: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9712af: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9712b2: jne 0x9712d8 */
  if (!zf) goto L_9712d8;
L_9712b4: /* 9712b4: fcomp dword ptr [0xcf8bbc] */
  fpu_com(ST0, F32((uint32_t)(0xcf8bbcu)));
  FPOP();
/* 9712ba: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 9712be: mov dword ptr [0xcf79bc], edx */
  W32((uint32_t)(0xcf79bcu), edx);
/* 9712c4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9712c6: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9712c9: jne 0x971337 */
  if (!zf) goto L_971337;
L_9712cb: /* 9712cb: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 9712cf: mov eax, edx */
  eax = edx;
/* 9712d1: mov dword ptr [0xcf8bbc], eax */
  W32((uint32_t)(0xcf8bbcu), eax);
/* 9712d6: jmp 0x9712da */
  goto L_9712da;
L_9712d8: /* 9712d8: fchs  */
  ST0 = -ST0;
L_9712da: /* 9712da: fcomp dword ptr [0xcf859c] */
  fpu_com(ST0, F32((uint32_t)(0xcf859cu)));
  FPOP();
/* 9712e0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9712e2: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9712e5: jne 0x971337 */
  if (!zf) goto L_971337;
L_9712e7: /* 9712e7: mov ecx, dword ptr [0xcf8bac] */
  ecx = R32((uint32_t)(0xcf8bacu));
/* 9712ed: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 9712f1: mov edx, dword ptr [ebx + 0x38] */
  edx = R32((uint32_t)(ebx + 0x38u));
/* 9712f4: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 9712f7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9712f8: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 9712fb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9712fc: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9712ff: and eax, 0xffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 971304: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 971307: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 971308: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 971309: call 0x95f210 */
  esp -= 4; W32(esp, 0x97130eu); SPILL(); f_95f210(); if (g_unwind) return; RELOAD();
/* 97130e: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 971314: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 971317: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 971318: push 0xb01f00 */
  { uint32_t v = 0xb01f00u; esp -= 4; W32(esp, v); }
/* 97131d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97131e: call 0x953470 */
  esp -= 4; W32(esp, 0x971323u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 971323: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 971325: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 971327: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 971329: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97132a: push 0xb0118c */
  { uint32_t v = 0xb0118cu; esp -= 4; W32(esp, v); }
/* 97132f: call 0x953700 */
  esp -= 4; W32(esp, 0x971334u); SPILL(); f_953700(); if (g_unwind) return; RELOAD();
/* 971334: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_971337: /* 971337: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 971339: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97133b: jne 0x971238 */
  if (!zf) goto L_971238;
L_971341: /* 971341: mov eax, dword ptr [0xcf8c50] */
  eax = R32((uint32_t)(0xcf8c50u));
/* 971346: mov dword ptr [0xcf8548], eax */
  W32((uint32_t)(0xcf8548u), eax);
/* 97134b: cmp dword ptr [0xcf8438], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf8438u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 971352: jl 0x9713be */
  if ((sf != of)) goto L_9713be;
L_971354: /* 971354: fld dword ptr [ebp] */
  { double v = F32((uint32_t)(ebp)); FPUSH(v); }
/* 971357: mov ecx, dword ptr [ebx + 0x38] */
  ecx = R32((uint32_t)(ebx + 0x38u));
/* 97135a: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 971360: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 971363: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 971366: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 971367: push 0xb01ed4 */
  { uint32_t v = 0xb01ed4u; esp -= 4; W32(esp, v); }
/* 97136c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97136d: call 0x953470 */
  esp -= 4; W32(esp, 0x971372u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 971372: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 971377: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97137a: xor esi, esi */
  esi = 0;
/* 97137c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 97137e: jle 0x9713aa */
  if ((zf || sf != of)) goto L_9713aa;
L_971380: /* 971380: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 971383: fld dword ptr [eax + esi*4] */
  { double v = F32((uint32_t)(eax + esi*4)); FPUSH(v); }
/* 971386: mov ecx, dword ptr [0xcf8b38] */
  ecx = R32((uint32_t)(0xcf8b38u));
/* 97138c: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 97138f: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 971392: push 0xb01ecc */
  { uint32_t v = 0xb01eccu; esp -= 4; W32(esp, v); }
/* 971397: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 971398: call 0x953470 */
  esp -= 4; W32(esp, 0x97139du); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 97139d: mov eax, dword ptr [0xcf85cc] */
  eax = R32((uint32_t)(0xcf85ccu));
/* 9713a2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9713a5: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 9713a6: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9713a8: jl 0x971380 */
  if ((sf != of)) goto L_971380;
L_9713aa: /* 9713aa: mov edx, dword ptr [0xcf8b38] */
  edx = R32((uint32_t)(0xcf8b38u));
/* 9713b0: push 0xaf2b88 */
  { uint32_t v = 0xaf2b88u; esp -= 4; W32(esp, v); }
/* 9713b5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9713b6: call 0x953470 */
  esp -= 4; W32(esp, 0x9713bbu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 9713bb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_9713be: /* 9713be: mov eax, dword ptr [0xcf8b68] */
  eax = R32((uint32_t)(0xcf8b68u));
/* 9713c3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9713c4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9713c5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9713c6: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9713c8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9713c9: jne 0x9713d4 */
  if (!zf) goto L_9713d4;
L_9713cb: /* 9713cb: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 9713cf: mov dword ptr [0xcf8438], eax */
  W32((uint32_t)(0xcf8438u), eax);
L_9713d4: /* 9713d4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9713d7: ret  */
  esp += 4; SPILL(); return;
}
