#include "recomp.h"
#include "rec_mod.h"

void f_4197bd(void) {
  LOAD_REGS();
L_4197bd: /* 4197bd: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4197be: mov ebp, esp */
  ebp = esp;
/* 4197c0: sub esp, 0x268 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x268u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4197c6: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 4197cb: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 4197ce: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4197cf: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 4197d2: push 0x43fc78 */
  { uint32_t v = 0x43fc78u; esp -= 4; W32(esp, v); }
/* 4197d7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4197d8: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 4197db: call 0x412004 */
  esp -= 4; W32(esp, 0x4197e0u); SPILL(); f_412004(); if (g_unwind) return; RELOAD();
/* 4197e0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4197e2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4197e3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4197e4: je 0x4197ff */
  if (zf) goto L_4197ff;
L_4197e6: /* 4197e6: call 0x4102a5 */
  esp -= 4; W32(esp, 0x4197ebu); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 4197eb: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4197ed: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4197ee: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 4197f0: call 0x4102ae */
  esp -= 4; W32(esp, 0x4197f5u); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 4197f5: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 4197f7: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4197fa: jmp 0x419aaf */
  goto L_419aaf;
L_4197ff: /* 4197ff: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 419800: xor ebx, ebx */
  ebx = 0;
/* 419802: cmp byte ptr [esi + 1], 0x3a */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x1u))); uint8_t b = (uint8_t)(0x3au);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 419806: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 419807: jne 0x41983c */
  if (!zf) goto L_41983c;
L_419809: /* 419809: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 41980b: cmp al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41980d: je 0x41982d */
  if (zf) goto L_41982d;
L_41980f: /* 41980f: cmp byte ptr [esi + 2], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x2u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 419812: jne 0x41982d */
  if (!zf) goto L_41982d;
L_419814: /* 419814: call 0x4102a5 */
  esp -= 4; W32(esp, 0x419819u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 419819: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 41981b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41981c: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 41981e: call 0x4102ae */
  esp -= 4; W32(esp, 0x419823u); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 419823: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 419825: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 419828: jmp 0x419aad */
  goto L_419aad;
L_41982d: /* 41982d: movsx eax, al */
  eax = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 419830: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 419831: call 0x42636d */
  esp -= 4; W32(esp, 0x419836u); SPILL(); f_42636d(); if (g_unwind) return; RELOAD();
/* 419836: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 419837: sub eax, 0x60 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 41983a: jmp 0x419841 */
  goto L_419841;
L_41983c: /* 41983c: call 0x418ca4 */
  esp -= 4; W32(esp, 0x419841u); SPILL(); f_418ca4(); if (g_unwind) return; RELOAD();
L_419841: /* 419841: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 419844: lea eax, [ebp - 0x164] */
  eax = (uint32_t)(ebp + 0xfffffe9cu);
/* 41984a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41984b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41984c: call dword ptr [0x43906c] */
  esp -= 4; W32(esp, 0x419852u); SPILL(); call_ind(R32(0x43906cu)); if (g_unwind) return; /* KERNEL32!FindFirstFileA */ RELOAD();
/* 419852: or edi, 0xffffffff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 419855: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 419857: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 41985a: jne 0x419905 */
  if (!zf) goto L_419905;
L_419860: /* 419860: push 0x43fc74 */
  { uint32_t v = 0x43fc74u; esp -= 4; W32(esp, v); }
/* 419865: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 419866: call 0x412004 */
  esp -= 4; W32(esp, 0x41986bu); SPILL(); f_412004(); if (g_unwind) return; RELOAD();
/* 41986b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41986d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41986e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41986f: je 0x4198ef */
  if (zf) goto L_4198ef;
L_419871: /* 419871: push 0x104 */
  { uint32_t v = 0x104u; esp -= 4; W32(esp, v); }
/* 419876: lea eax, [ebp - 0x268] */
  eax = (uint32_t)(ebp + 0xfffffd98u);
/* 41987c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41987d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41987e: call 0x418dcc */
  esp -= 4; W32(esp, 0x419883u); SPILL(); f_418dcc(); if (g_unwind) return; RELOAD();
/* 419883: mov esi, eax */
  esi = eax;
/* 419885: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 419888: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41988a: je 0x4198ef */
  if (zf) goto L_4198ef;
L_41988c: /* 41988c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41988d: call 0x402493 */
  esp -= 4; W32(esp, 0x419892u); SPILL(); hle_strlen(); RELOAD();
/* 419892: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 419895: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 419896: je 0x4198a1 */
  if (zf) goto L_4198a1;
L_419898: /* 419898: call 0x419141 */
  esp -= 4; W32(esp, 0x41989du); SPILL(); f_419141(); if (g_unwind) return; RELOAD();
/* 41989d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41989f: je 0x4198ef */
  if (zf) goto L_4198ef;
L_4198a1: /* 4198a1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4198a2: call dword ptr [0x439188] */
  esp -= 4; W32(esp, 0x4198a8u); SPILL(); call_ind(R32(0x439188u)); if (g_unwind) return; /* KERNEL32!GetDriveTypeA */ RELOAD();
/* 4198a8: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4198ab: jbe 0x4198ef */
  if ((cf | zf)) goto L_4198ef;
L_4198ad: /* 4198ad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4198ae: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4198af: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4198b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4198b1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4198b3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4198b5: push 0x7bc */
  { uint32_t v = 0x7bcu; esp -= 4; W32(esp, v); }
/* 4198ba: mov dword ptr [ebp - 0x164], 0x10 */
  W32((uint32_t)(ebp + 0xfffffe9cu), 0x10u);
/* 4198c4: mov dword ptr [ebp - 0x148], ebx */
  W32((uint32_t)(ebp + 0xfffffeb8u), ebx);
/* 4198ca: mov dword ptr [ebp - 0x144], ebx */
  W32((uint32_t)(ebp + 0xfffffebcu), ebx);
/* 4198d0: mov byte ptr [ebp - 0x138], bl */
  W8((uint32_t)(ebp + 0xfffffec8u), (ebx & 0xffu));
/* 4198d6: call 0x431816 */
  esp -= 4; W32(esp, 0x4198dbu); SPILL(); f_431816(); if (g_unwind) return; RELOAD();
/* 4198db: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 4198de: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4198e1: mov dword ptr [esi + 0x24], eax */
  W32((uint32_t)(esi + 0x24u), eax);
/* 4198e4: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 4198e7: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 4198ea: jmp 0x419a41 */
  goto L_419a41;
L_4198ef: /* 4198ef: call 0x4102a5 */
  esp -= 4; W32(esp, 0x4198f4u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 4198f4: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4198f6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4198f7: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 4198f9: call 0x4102ae */
  esp -= 4; W32(esp, 0x4198feu); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 4198fe: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 419900: jmp 0x419aab */
  goto L_419aab;
L_419905: /* 419905: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 419908: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 419909: lea eax, [ebp - 0x150] */
  eax = (uint32_t)(ebp + 0xfffffeb0u);
/* 41990f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 419910: call dword ptr [0x439164] */
  esp -= 4; W32(esp, 0x419916u); SPILL(); call_ind(R32(0x439164u)); if (g_unwind) return; /* KERNEL32!FileTimeToLocalFileTime */ RELOAD();
/* 419916: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 419918: je 0x419a95 */
  if (zf) goto L_419a95;
L_41991e: /* 41991e: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 419921: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 419922: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 419925: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 419926: call dword ptr [0x439160] */
  esp -= 4; W32(esp, 0x41992cu); SPILL(); call_ind(R32(0x439160u)); if (g_unwind) return; /* KERNEL32!FileTimeToSystemTime */ RELOAD();
/* 41992c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41992e: je 0x419a95 */
  if (zf) goto L_419a95;
L_419934: /* 419934: movzx eax, word ptr [ebp - 8] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff8u)));
/* 419938: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 419939: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41993a: movzx eax, word ptr [ebp - 0xa] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff6u)));
/* 41993e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41993f: movzx eax, word ptr [ebp - 0xc] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff4u)));
/* 419943: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 419944: movzx eax, word ptr [ebp - 0xe] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff2u)));
/* 419948: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 419949: movzx eax, word ptr [ebp - 0x12] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffffeeu)));
/* 41994d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41994e: movzx eax, word ptr [ebp - 0x14] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffffecu)));
/* 419952: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 419953: call 0x431816 */
  esp -= 4; W32(esp, 0x419958u); SPILL(); f_431816(); if (g_unwind) return; RELOAD();
/* 419958: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 41995b: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41995e: cmp dword ptr [ebp - 0x158], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffea8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 419964: mov dword ptr [esi + 0x24], eax */
  W32((uint32_t)(esi + 0x24u), eax);
/* 419967: jne 0x419971 */
  if (!zf) goto L_419971;
L_419969: /* 419969: cmp dword ptr [ebp - 0x154], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffeacu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41996f: je 0x4199c7 */
  if (zf) goto L_4199c7;
L_419971: /* 419971: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 419974: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 419975: lea eax, [ebp - 0x158] */
  eax = (uint32_t)(ebp + 0xfffffea8u);
/* 41997b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41997c: call dword ptr [0x439164] */
  esp -= 4; W32(esp, 0x419982u); SPILL(); call_ind(R32(0x439164u)); if (g_unwind) return; /* KERNEL32!FileTimeToLocalFileTime */ RELOAD();
/* 419982: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 419984: je 0x419a95 */
  if (zf) goto L_419a95;
L_41998a: /* 41998a: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 41998d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41998e: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 419991: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 419992: call dword ptr [0x439160] */
  esp -= 4; W32(esp, 0x419998u); SPILL(); call_ind(R32(0x439160u)); if (g_unwind) return; /* KERNEL32!FileTimeToSystemTime */ RELOAD();
/* 419998: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41999a: je 0x419a95 */
  if (zf) goto L_419a95;
L_4199a0: /* 4199a0: movzx eax, word ptr [ebp - 8] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff8u)));
/* 4199a4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4199a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4199a6: movzx eax, word ptr [ebp - 0xa] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff6u)));
/* 4199aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4199ab: movzx eax, word ptr [ebp - 0xc] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff4u)));
/* 4199af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4199b0: movzx eax, word ptr [ebp - 0xe] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff2u)));
/* 4199b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4199b5: movzx eax, word ptr [ebp - 0x12] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffffeeu)));
/* 4199b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4199ba: movzx eax, word ptr [ebp - 0x14] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffffecu)));
/* 4199be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4199bf: call 0x431816 */
  esp -= 4; W32(esp, 0x4199c4u); SPILL(); f_431816(); if (g_unwind) return; RELOAD();
/* 4199c4: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4199c7: /* 4199c7: cmp dword ptr [ebp - 0x160], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffea0u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4199cd: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 4199d0: jne 0x4199df */
  if (!zf) goto L_4199df;
L_4199d2: /* 4199d2: cmp dword ptr [ebp - 0x15c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffea4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4199d8: jne 0x4199df */
  if (!zf) goto L_4199df;
L_4199da: /* 4199da: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 4199dd: jmp 0x419a35 */
  goto L_419a35;
L_4199df: /* 4199df: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 4199e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4199e3: lea eax, [ebp - 0x160] */
  eax = (uint32_t)(ebp + 0xfffffea0u);
/* 4199e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4199ea: call dword ptr [0x439164] */
  esp -= 4; W32(esp, 0x4199f0u); SPILL(); call_ind(R32(0x439164u)); if (g_unwind) return; /* KERNEL32!FileTimeToLocalFileTime */ RELOAD();
/* 4199f0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4199f2: je 0x419a95 */
  if (zf) goto L_419a95;
L_4199f8: /* 4199f8: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 4199fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4199fc: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 4199ff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 419a00: call dword ptr [0x439160] */
  esp -= 4; W32(esp, 0x419a06u); SPILL(); call_ind(R32(0x439160u)); if (g_unwind) return; /* KERNEL32!FileTimeToSystemTime */ RELOAD();
/* 419a06: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 419a08: je 0x419a95 */
  if (zf) goto L_419a95;
L_419a0e: /* 419a0e: movzx eax, word ptr [ebp - 8] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff8u)));
/* 419a12: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 419a13: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 419a14: movzx eax, word ptr [ebp - 0xa] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff6u)));
/* 419a18: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 419a19: movzx eax, word ptr [ebp - 0xc] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff4u)));
/* 419a1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 419a1e: movzx eax, word ptr [ebp - 0xe] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff2u)));
/* 419a22: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 419a23: movzx eax, word ptr [ebp - 0x12] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffffeeu)));
/* 419a27: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 419a28: movzx eax, word ptr [ebp - 0x14] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffffecu)));
/* 419a2c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 419a2d: call 0x431816 */
  esp -= 4; W32(esp, 0x419a32u); SPILL(); f_431816(); if (g_unwind) return; RELOAD();
/* 419a32: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_419a35: /* 419a35: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 419a38: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 419a3b: call dword ptr [0x439070] */
  esp -= 4; W32(esp, 0x419a41u); SPILL(); call_ind(R32(0x439070u)); if (g_unwind) return; /* KERNEL32!FindClose */ RELOAD();
L_419a41: /* 419a41: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 419a44: push dword ptr [ebp - 0x164] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffe9cu)); esp -= 4; W32(esp, v); }
/* 419a4a: call 0x419084 */
  esp -= 4; W32(esp, 0x419a4fu); SPILL(); f_419084(); if (g_unwind) return; RELOAD();
/* 419a4f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 419a50: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 419a51: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 419a53: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 419a54: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 419a55: push dword ptr [ebp - 0x148] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffeb8u)); esp -= 4; W32(esp, v); }
/* 419a5b: mov word ptr [esi + 6], ax */
  W16((uint32_t)(esi + 0x6u), (eax & 0xffffu));
/* 419a5f: mov word ptr [esi + 8], 1 */
  W16((uint32_t)(esi + 0x8u), 0x1u);
/* 419a65: call 0x40518c */
  esp -= 4; W32(esp, 0x419a6au); SPILL(); f_40518c(); if (g_unwind) return; RELOAD();
/* 419a6a: mov ecx, dword ptr [ebp - 0x144] */
  ecx = R32((uint32_t)(ebp + 0xfffffebcu));
/* 419a70: xor edi, edi */
  edi = 0;
/* 419a72: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 419a74: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 419a77: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 419a7a: adc edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 419a7c: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 419a7d: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 419a7f: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 419a82: mov dword ptr [esi + 0x1c], edx */
  W32((uint32_t)(esi + 0x1cu), edx);
/* 419a85: mov word ptr [esi + 4], bx */
  W16((uint32_t)(esi + 0x4u), (ebx & 0xffffu));
/* 419a89: mov word ptr [esi + 0xc], bx */
  W16((uint32_t)(esi + 0xcu), (ebx & 0xffffu));
/* 419a8d: mov word ptr [esi + 0xa], bx */
  W16((uint32_t)(esi + 0xau), (ebx & 0xffffu));
/* 419a91: xor eax, eax */
  eax = 0;
/* 419a93: jmp 0x419aad */
  goto L_419aad;
L_419a95: /* 419a95: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x419a9bu); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 419a9b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 419a9c: call 0x4102b7 */
  esp -= 4; W32(esp, 0x419aa1u); SPILL(); f_4102b7(); if (g_unwind) return; RELOAD();
/* 419aa1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 419aa2: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 419aa5: call dword ptr [0x439070] */
  esp -= 4; W32(esp, 0x419aabu); SPILL(); call_ind(R32(0x439070u)); if (g_unwind) return; /* KERNEL32!FindClose */ RELOAD();
L_419aab: /* 419aab: mov eax, edi */
  eax = edi;
L_419aad: /* 419aad: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 419aae: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_419aaf: /* 419aaf: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 419ab2: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 419ab5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 419ab6: call 0x4013ab */
  esp -= 4; W32(esp, 0x419abbu); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 419abb: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 419abc: ret  */
  esp += 4; SPILL(); return;
}

void f_419abd(void) {
  LOAD_REGS();
L_419abd: /* 419abd: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* 419ac1: call dword ptr [0x439194] */
  esp -= 4; W32(esp, 0x419ac7u); SPILL(); call_ind(R32(0x439194u)); if (g_unwind) return; /* KERNEL32!DeleteFileA */ RELOAD();
/* 419ac7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 419ac9: jne 0x419ad3 */
  if (!zf) goto L_419ad3;
L_419acb: /* 419acb: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x419ad1u); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 419ad1: jmp 0x419ad5 */
  goto L_419ad5;
L_419ad3: /* 419ad3: xor eax, eax */
  eax = 0;
L_419ad5: /* 419ad5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 419ad7: je 0x419ae4 */
  if (zf) goto L_419ae4;
L_419ad9: /* 419ad9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 419ada: call 0x4102b7 */
  esp -= 4; W32(esp, 0x419adfu); SPILL(); f_4102b7(); if (g_unwind) return; RELOAD();
/* 419adf: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 419ae0: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 419ae3: ret  */
  esp += 4; SPILL(); return;
L_419ae4: /* 419ae4: xor eax, eax */
  eax = 0;
/* 419ae6: ret  */
  esp += 4; SPILL(); return;
}

void f_419ae7(void) {
  LOAD_REGS();
L_419ae7: /* 419ae7: jmp 0x419abd */
  SPILL(); f_419abd(); return;
}

void f_419ae9(void) {
  LOAD_REGS();
L_419ae9: /* 419ae9: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* 419aed: call dword ptr [0x439198] */
  esp -= 4; W32(esp, 0x419af3u); SPILL(); call_ind(R32(0x439198u)); if (g_unwind) return; /* KERNEL32!GetFileAttributesW */ RELOAD();
/* 419af3: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 419af6: jne 0x419b09 */
  if (!zf) goto L_419b09;
L_419af8: /* 419af8: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x419afeu); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 419afe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 419aff: call 0x4102b7 */
  esp -= 4; W32(esp, 0x419b04u); SPILL(); f_4102b7(); if (g_unwind) return; RELOAD();
/* 419b04: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_419b05: /* 419b05: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 419b08: ret  */
  esp += 4; SPILL(); return;
L_419b09: /* 419b09: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 419b0b: je 0x419b2c */
  if (zf) goto L_419b2c;
L_419b0d: /* 419b0d: test byte ptr [esp + 8], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 419b12: je 0x419b2c */
  if (zf) goto L_419b2c;
L_419b14: /* 419b14: call 0x4102a5 */
  esp -= 4; W32(esp, 0x419b19u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 419b19: mov dword ptr [eax], 0xd */
  W32((uint32_t)(eax), 0xdu);
/* 419b1f: call 0x4102ae */
  esp -= 4; W32(esp, 0x419b24u); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 419b24: mov dword ptr [eax], 5 */
  W32((uint32_t)(eax), 0x5u);
/* 419b2a: jmp 0x419b05 */
  goto L_419b05;
L_419b2c: /* 419b2c: xor eax, eax */
  eax = 0;
/* 419b2e: ret  */
  esp += 4; SPILL(); return;
}

void f_419b2f(void) {
  LOAD_REGS();
L_419b2f: /* 419b2f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 419b30: mov ebp, esp */
  ebp = esp;
/* 419b32: sub esp, 0x218 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x218u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 419b38: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 419b3d: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 419b40: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 419b43: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 419b46: call dword ptr [0x4391a0] */
  esp -= 4; W32(esp, 0x419b4cu); SPILL(); call_ind(R32(0x4391a0u)); if (g_unwind) return; /* KERNEL32!SetCurrentDirectoryW */ RELOAD();
/* 419b4c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 419b4e: je 0x419bb6 */
  if (zf) goto L_419bb6;
L_419b50: /* 419b50: lea eax, [ebp - 0x218] */
  eax = (uint32_t)(ebp + 0xfffffde8u);
/* 419b56: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 419b57: push 0x105 */
  { uint32_t v = 0x105u; esp -= 4; W32(esp, v); }
/* 419b5c: call dword ptr [0x43919c] */
  esp -= 4; W32(esp, 0x419b62u); SPILL(); call_ind(R32(0x43919cu)); if (g_unwind) return; /* KERNEL32!GetCurrentDirectoryW */ RELOAD();
/* 419b62: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 419b64: je 0x419bb6 */
  if (zf) goto L_419bb6;
L_419b66: /* 419b66: mov eax, dword ptr [ebp - 0x218] */
  eax = R32((uint32_t)(ebp + 0xfffffde8u));
/* 419b6c: cmp ax, 0x5c */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x5cu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 419b70: je 0x419b78 */
  if (zf) goto L_419b78;
L_419b72: /* 419b72: cmp ax, 0x2f */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x2fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 419b76: jne 0x419b81 */
  if (!zf) goto L_419b81;
L_419b78: /* 419b78: cmp ax, word ptr [ebp - 0x216] */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(ebp + 0xfffffdeau)));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 419b7f: je 0x419bb2 */
  if (zf) goto L_419bb2;
L_419b81: /* 419b81: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 419b82: mov word ptr [ebp - 0xc], 0x3d */
  W16((uint32_t)(ebp + 0xfffffff4u), 0x3du);
/* 419b88: call 0x4179fa */
  esp -= 4; W32(esp, 0x419b8du); SPILL(); f_4179fa(); if (g_unwind) return; RELOAD();
/* 419b8d: and word ptr [ebp - 6], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xfffffffau))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(ebp + 0xfffffffau), r);
  }
/* 419b92: mov word ptr [ebp - 0xa], ax */
  W16((uint32_t)(ebp + 0xfffffff6u), (eax & 0xffffu));
/* 419b96: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 419b97: lea eax, [ebp - 0x218] */
  eax = (uint32_t)(ebp + 0xfffffde8u);
/* 419b9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 419b9e: lea eax, [ebp - 0xc] */
  eax = (uint32_t)(ebp + 0xfffffff4u);
/* 419ba1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 419ba2: mov word ptr [ebp - 8], 0x3a */
  W16((uint32_t)(ebp + 0xfffffff8u), 0x3au);
/* 419ba8: call dword ptr [0x439108] */
  esp -= 4; W32(esp, 0x419baeu); SPILL(); call_ind(R32(0x439108u)); if (g_unwind) return; /* KERNEL32!SetEnvironmentVariableW */ RELOAD();
/* 419bae: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 419bb0: je 0x419bb6 */
  if (zf) goto L_419bb6;
L_419bb2: /* 419bb2: xor eax, eax */
  eax = 0;
/* 419bb4: jmp 0x419bc6 */
  goto L_419bc6;
L_419bb6: /* 419bb6: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x419bbcu); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 419bbc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 419bbd: call 0x4102b7 */
  esp -= 4; W32(esp, 0x419bc2u); SPILL(); f_4102b7(); if (g_unwind) return; RELOAD();
/* 419bc2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 419bc3: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_419bc6: /* 419bc6: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 419bc9: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 419bcc: call 0x4013ab */
  esp -= 4; W32(esp, 0x419bd1u); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 419bd1: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 419bd2: ret  */
  esp += 4; SPILL(); return;
}

void f_419bd3(void) {
  LOAD_REGS();
L_419bd3: /* 419bd3: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* 419bd7: call dword ptr [0x439198] */
  esp -= 4; W32(esp, 0x419bddu); SPILL(); call_ind(R32(0x439198u)); if (g_unwind) return; /* KERNEL32!GetFileAttributesW */ RELOAD();
/* 419bdd: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 419be0: je 0x419c00 */
  if (zf) goto L_419c00;
L_419be2: /* 419be2: test byte ptr [esp + 8], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 419be7: je 0x419bee */
  if (zf) goto L_419bee;
L_419be9: /* 419be9: and eax, 0xfffffffe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 419bec: jmp 0x419bf1 */
  goto L_419bf1;
L_419bee: /* 419bee: or eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_419bf1: /* 419bf1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 419bf2: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 419bf6: call dword ptr [0x4391a4] */
  esp -= 4; W32(esp, 0x419bfcu); SPILL(); call_ind(R32(0x4391a4u)); if (g_unwind) return; /* KERNEL32!SetFileAttributesW */ RELOAD();
/* 419bfc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 419bfe: jne 0x419c11 */
  if (!zf) goto L_419c11;
L_419c00: /* 419c00: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x419c06u); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 419c06: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 419c07: call 0x4102b7 */
  esp -= 4; W32(esp, 0x419c0cu); SPILL(); f_4102b7(); if (g_unwind) return; RELOAD();
/* 419c0c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 419c0d: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 419c10: ret  */
  esp += 4; SPILL(); return;
L_419c11: /* 419c11: xor eax, eax */
  eax = 0;
/* 419c13: ret  */
  esp += 4; SPILL(); return;
}

void f_419c14(void) {
  LOAD_REGS();
L_419c14: /* 419c14: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 419c15: mov ebp, esp */
  ebp = esp;
/* 419c17: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 419c18: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 419c19: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 419c1a: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 419c1d: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 419c1f: je 0x419cb0 */
  if (zf) goto L_419cb0;
L_419c25: /* 419c25: cmp word ptr [edi], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edi))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 419c29: je 0x419cb0 */
  if (zf) goto L_419cb0;
L_419c2f: /* 419c2f: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 419c32: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 419c34: jne 0x419c5d */
  if (!zf) goto L_419c5d;
L_419c36: /* 419c36: push 0x208 */
  { uint32_t v = 0x208u; esp -= 4; W32(esp, v); }
/* 419c3b: call 0x4010eb */
  esp -= 4; W32(esp, 0x419c40u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 419c40: mov esi, eax */
  esi = eax;
/* 419c42: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 419c44: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 419c45: jne 0x419c54 */
  if (!zf) goto L_419c54;
L_419c47: /* 419c47: call 0x4102a5 */
  esp -= 4; W32(esp, 0x419c4cu); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 419c4c: mov dword ptr [eax], 0xc */
  W32((uint32_t)(eax), 0xcu);
/* 419c52: jmp 0x419c89 */
  goto L_419c89;
L_419c54: /* 419c54: mov dword ptr [ebp + 0x10], 0x104 */
  W32((uint32_t)(ebp + 0x10u), 0x104u);
/* 419c5b: jmp 0x419c5f */
  goto L_419c5f;
L_419c5d: /* 419c5d: mov esi, ebx */
  esi = ebx;
L_419c5f: /* 419c5f: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 419c62: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 419c63: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 419c64: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 419c67: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 419c68: call dword ptr [0x4391a8] */
  esp -= 4; W32(esp, 0x419c6eu); SPILL(); call_ind(R32(0x4391a8u)); if (g_unwind) return; /* KERNEL32!GetFullPathNameW */ RELOAD();
/* 419c6e: cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 419c71: jb 0x419c8d */
  if (cf) goto L_419c8d;
L_419c73: /* 419c73: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 419c75: jne 0x419c7e */
  if (!zf) goto L_419c7e;
L_419c77: /* 419c77: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 419c78: call 0x401156 */
  esp -= 4; W32(esp, 0x419c7du); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 419c7d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_419c7e: /* 419c7e: call 0x4102a5 */
  esp -= 4; W32(esp, 0x419c83u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 419c83: mov dword ptr [eax], 0x22 */
  W32((uint32_t)(eax), 0x22u);
L_419c89: /* 419c89: xor eax, eax */
  eax = 0;
/* 419c8b: jmp 0x419cbd */
  goto L_419cbd;
L_419c8d: /* 419c8d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 419c8f: jne 0x419cac */
  if (!zf) goto L_419cac;
L_419c91: /* 419c91: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 419c93: jne 0x419c9c */
  if (!zf) goto L_419c9c;
L_419c95: /* 419c95: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 419c96: call 0x401156 */
  esp -= 4; W32(esp, 0x419c9bu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 419c9b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_419c9c: /* 419c9c: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x419ca2u); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 419ca2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 419ca3: call 0x4102b7 */
  esp -= 4; W32(esp, 0x419ca8u); SPILL(); f_4102b7(); if (g_unwind) return; RELOAD();
/* 419ca8: xor eax, eax */
  eax = 0;
/* 419caa: jmp 0x419cbc */
  goto L_419cbc;
L_419cac: /* 419cac: mov eax, esi */
  eax = esi;
/* 419cae: jmp 0x419cbd */
  goto L_419cbd;
L_419cb0: /* 419cb0: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 419cb3: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 419cb6: call 0x419db7 */
  esp -= 4; W32(esp, 0x419cbbu); SPILL(); f_419db7(); if (g_unwind) return; RELOAD();
/* 419cbb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_419cbc: /* 419cbc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_419cbd: /* 419cbd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 419cbe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 419cbf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 419cc0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 419cc1: ret  */
  esp += 4; SPILL(); return;
}

void f_419cc2(void) {
  LOAD_REGS();
L_419cc2: /* 419cc2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 419cc3: mov ebp, esp */
  ebp = esp;
/* 419cc5: sub esp, 0x214 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x214u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 419ccb: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 419cd0: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 419cd3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 419cd4: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 419cd7: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 419cd9: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 419cdc: je 0x419d44 */
  if (zf) goto L_419d44;
L_419cde: /* 419cde: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 419cdf: call 0x418e76 */
  esp -= 4; W32(esp, 0x419ce4u); SPILL(); f_418e76(); if (g_unwind) return; RELOAD();
/* 419ce4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 419ce6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 419ce7: jne 0x419d0f */
  if (!zf) goto L_419d0f;
L_419ce9: /* 419ce9: call 0x4102ae */
  esp -= 4; W32(esp, 0x419ceeu); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 419cee: mov dword ptr [eax], 0xf */
  W32((uint32_t)(eax), 0xfu);
/* 419cf4: call 0x4102a5 */
  esp -= 4; W32(esp, 0x419cf9u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 419cf9: mov dword ptr [eax], 0xd */
  W32((uint32_t)(eax), 0xdu);
L_419cff: /* 419cff: xor eax, eax */
  eax = 0;
L_419d01: /* 419d01: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 419d04: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 419d07: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 419d08: call 0x4013ab */
  esp -= 4; W32(esp, 0x419d0du); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 419d0d: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 419d0e: ret  */
  esp += 4; SPILL(); return;
L_419d0f: /* 419d0f: and word ptr [ebp - 6], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xfffffffau))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(ebp + 0xfffffffau), r);
  }
/* 419d14: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 419d17: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 419d18: add esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 419d1b: lea eax, [ebp - 0x214] */
  eax = (uint32_t)(ebp + 0xfffffdecu);
/* 419d21: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 419d22: mov word ptr [ebp - 0xc], si */
  W16((uint32_t)(ebp + 0xfffffff4u), (esi & 0xffffu));
/* 419d26: mov esi, 0x104 */
  esi = 0x104u;
/* 419d2b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 419d2c: lea eax, [ebp - 0xc] */
  eax = (uint32_t)(ebp + 0xfffffff4u);
/* 419d2f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 419d30: mov word ptr [ebp - 0xa], 0x3a */
  W16((uint32_t)(ebp + 0xfffffff6u), 0x3au);
/* 419d36: mov word ptr [ebp - 8], 0x2e */
  W16((uint32_t)(ebp + 0xfffffff8u), 0x2eu);
/* 419d3c: call dword ptr [0x4391a8] */
  esp -= 4; W32(esp, 0x419d42u); SPILL(); call_ind(R32(0x4391a8u)); if (g_unwind) return; /* KERNEL32!GetFullPathNameW */ RELOAD();
/* 419d42: jmp 0x419d57 */
  goto L_419d57;
L_419d44: /* 419d44: lea eax, [ebp - 0x214] */
  eax = (uint32_t)(ebp + 0xfffffdecu);
/* 419d4a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 419d4b: mov esi, 0x104 */
  esi = 0x104u;
/* 419d50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 419d51: call dword ptr [0x43919c] */
  esp -= 4; W32(esp, 0x419d57u); SPILL(); call_ind(R32(0x43919cu)); if (g_unwind) return; /* KERNEL32!GetCurrentDirectoryW */ RELOAD();
L_419d57: /* 419d57: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 419d59: je 0x419cff */
  if (zf) goto L_419cff;
L_419d5b: /* 419d5b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 419d5c: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 419d5e: ja 0x419cff */
  if ((!cf && !zf)) goto L_419cff;
L_419d60: /* 419d60: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 419d63: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 419d65: jne 0x419d8e */
  if (!zf) goto L_419d8e;
L_419d67: /* 419d67: cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 419d6a: jg 0x419d6f */
  if ((!zf && sf == of)) goto L_419d6f;
L_419d6c: /* 419d6c: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
L_419d6f: /* 419d6f: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 419d71: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 419d72: call 0x4010eb */
  esp -= 4; W32(esp, 0x419d77u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 419d77: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 419d78: mov ecx, eax */
  ecx = eax;
/* 419d7a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 419d7c: jne 0x419da3 */
  if (!zf) goto L_419da3;
L_419d7e: /* 419d7e: call 0x4102a5 */
  esp -= 4; W32(esp, 0x419d83u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 419d83: mov dword ptr [eax], 0xc */
  W32((uint32_t)(eax), 0xcu);
/* 419d89: jmp 0x419cff */
  goto L_419cff;
L_419d8e: /* 419d8e: cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 419d91: jle 0x419da3 */
  if ((zf || sf != of)) goto L_419da3;
L_419d93: /* 419d93: call 0x4102a5 */
  esp -= 4; W32(esp, 0x419d98u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 419d98: mov dword ptr [eax], 0x22 */
  W32((uint32_t)(eax), 0x22u);
/* 419d9e: jmp 0x419cff */
  goto L_419cff;
L_419da3: /* 419da3: lea eax, [ebp - 0x214] */
  eax = (uint32_t)(ebp + 0xfffffdecu);
/* 419da9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 419daa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 419dab: call 0x4013ce */
  esp -= 4; W32(esp, 0x419db0u); SPILL(); f_4013ce(); if (g_unwind) return; RELOAD();
/* 419db0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 419db1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 419db2: jmp 0x419d01 */
  goto L_419d01;
}

void f_419db7(void) {
  LOAD_REGS();
L_419db7: /* 419db7: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 419db9: push 0x43fc80 */
  { uint32_t v = 0x43fc80u; esp -= 4; W32(esp, v); }
/* 419dbe: call 0x40101f */
  esp -= 4; W32(esp, 0x419dc3u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 419dc3: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 419dc5: call 0x4011b7 */
  esp -= 4; W32(esp, 0x419dcau); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 419dca: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 419dcb: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 419dcf: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 419dd2: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 419dd5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 419dd7: call 0x419cc2 */
  esp -= 4; W32(esp, 0x419ddcu); SPILL(); f_419cc2(); if (g_unwind) return; RELOAD();
/* 419ddc: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 419ddf: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 419de2: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 419de6: call 0x419df4 */
  esp -= 4; W32(esp, 0x419debu); SPILL(); f_419df4(); if (g_unwind) return; RELOAD();
/* 419deb: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 419dee: call 0x40105a */
  esp -= 4; W32(esp, 0x419df3u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 419df3: ret  */
  esp += 4; SPILL(); return;
}

void f_419df4(void) {
  LOAD_REGS();
L_419df4: /* 419df4: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 419df6: call 0x4011d9 */
  esp -= 4; W32(esp, 0x419dfbu); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 419dfb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 419dfc: ret  */
  esp += 4; SPILL(); return;
}

void f_419dfd(void) {
  LOAD_REGS();
L_419dfd: /* 419dfd: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 419dff: push 0x43fc90 */
  { uint32_t v = 0x43fc90u; esp -= 4; W32(esp, v); }
/* 419e04: call 0x40101f */
  esp -= 4; W32(esp, 0x419e09u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 419e09: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 419e0b: call 0x4011b7 */
  esp -= 4; W32(esp, 0x419e10u); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 419e10: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 419e11: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 419e15: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 419e18: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 419e1b: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 419e1e: call 0x419cc2 */
  esp -= 4; W32(esp, 0x419e23u); SPILL(); f_419cc2(); if (g_unwind) return; RELOAD();
/* 419e23: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 419e26: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 419e29: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 419e2d: call 0x419e3b */
  esp -= 4; W32(esp, 0x419e32u); SPILL(); f_419e3b(); if (g_unwind) return; RELOAD();
/* 419e32: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 419e35: call 0x40105a */
  esp -= 4; W32(esp, 0x419e3au); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 419e3a: ret  */
  esp += 4; SPILL(); return;
}

void f_419e3b(void) {
  LOAD_REGS();
L_419e3b: /* 419e3b: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 419e3d: call 0x4011d9 */
  esp -= 4; W32(esp, 0x419e42u); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 419e42: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 419e43: ret  */
  esp += 4; SPILL(); return;
}

void f_419e44(void) {
  LOAD_REGS();
L_419e44: /* 419e44: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 419e46: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 419e4a: call dword ptr [0x4391ac] */
  esp -= 4; W32(esp, 0x419e50u); SPILL(); call_ind(R32(0x4391acu)); if (g_unwind) return; /* KERNEL32!CreateDirectoryW */ RELOAD();
/* 419e50: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 419e52: jne 0x419e5c */
  if (!zf) goto L_419e5c;
L_419e54: /* 419e54: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x419e5au); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 419e5a: jmp 0x419e5e */
  goto L_419e5e;
L_419e5c: /* 419e5c: xor eax, eax */
  eax = 0;
L_419e5e: /* 419e5e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 419e60: je 0x419e6d */
  if (zf) goto L_419e6d;
L_419e62: /* 419e62: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 419e63: call 0x4102b7 */
  esp -= 4; W32(esp, 0x419e68u); SPILL(); f_4102b7(); if (g_unwind) return; RELOAD();
/* 419e68: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 419e69: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 419e6c: ret  */
  esp += 4; SPILL(); return;
L_419e6d: /* 419e6d: xor eax, eax */
  eax = 0;
/* 419e6f: ret  */
  esp += 4; SPILL(); return;
}

void f_419e70(void) {
  LOAD_REGS();
L_419e70: /* 419e70: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* 419e74: call dword ptr [0x4391b0] */
  esp -= 4; W32(esp, 0x419e7au); SPILL(); call_ind(R32(0x4391b0u)); if (g_unwind) return; /* KERNEL32!DeleteFileW */ RELOAD();
/* 419e7a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 419e7c: jne 0x419e86 */
  if (!zf) goto L_419e86;
L_419e7e: /* 419e7e: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x419e84u); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 419e84: jmp 0x419e88 */
  goto L_419e88;
L_419e86: /* 419e86: xor eax, eax */
  eax = 0;
L_419e88: /* 419e88: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 419e8a: je 0x419e97 */
  if (zf) goto L_419e97;
L_419e8c: /* 419e8c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 419e8d: call 0x4102b7 */
  esp -= 4; W32(esp, 0x419e92u); SPILL(); f_4102b7(); if (g_unwind) return; RELOAD();
/* 419e92: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 419e93: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 419e96: ret  */
  esp += 4; SPILL(); return;
L_419e97: /* 419e97: xor eax, eax */
  eax = 0;
/* 419e99: ret  */
  esp += 4; SPILL(); return;
}

void f_419e9a(void) {
  LOAD_REGS();
L_419e9a: /* 419e9a: jmp 0x419e70 */
  SPILL(); f_419e70(); return;
}

void f_419e9c(void) {
  LOAD_REGS();
L_419e9c: /* 419e9c: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 419ea0: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 419ea4: call dword ptr [0x4391b4] */
  esp -= 4; W32(esp, 0x419eaau); SPILL(); call_ind(R32(0x4391b4u)); if (g_unwind) return; /* KERNEL32!MoveFileW */ RELOAD();
/* 419eaa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 419eac: jne 0x419eb6 */
  if (!zf) goto L_419eb6;
L_419eae: /* 419eae: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x419eb4u); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 419eb4: jmp 0x419eb8 */
  goto L_419eb8;
L_419eb6: /* 419eb6: xor eax, eax */
  eax = 0;
L_419eb8: /* 419eb8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 419eba: je 0x419ec7 */
  if (zf) goto L_419ec7;
L_419ebc: /* 419ebc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 419ebd: call 0x4102b7 */
  esp -= 4; W32(esp, 0x419ec2u); SPILL(); f_4102b7(); if (g_unwind) return; RELOAD();
/* 419ec2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 419ec3: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 419ec6: ret  */
  esp += 4; SPILL(); return;
L_419ec7: /* 419ec7: xor eax, eax */
  eax = 0;
/* 419ec9: ret  */
  esp += 4; SPILL(); return;
}

void f_419eca(void) {
  LOAD_REGS();
L_419eca: /* 419eca: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* 419ece: call dword ptr [0x4391b8] */
  esp -= 4; W32(esp, 0x419ed4u); SPILL(); call_ind(R32(0x4391b8u)); if (g_unwind) return; /* KERNEL32!RemoveDirectoryW */ RELOAD();
/* 419ed4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 419ed6: jne 0x419ee0 */
  if (!zf) goto L_419ee0;
L_419ed8: /* 419ed8: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x419edeu); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 419ede: jmp 0x419ee2 */
  goto L_419ee2;
L_419ee0: /* 419ee0: xor eax, eax */
  eax = 0;
L_419ee2: /* 419ee2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 419ee4: je 0x419ef1 */
  if (zf) goto L_419ef1;
L_419ee6: /* 419ee6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 419ee7: call 0x4102b7 */
  esp -= 4; W32(esp, 0x419eecu); SPILL(); f_4102b7(); if (g_unwind) return; RELOAD();
/* 419eec: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 419eed: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 419ef0: ret  */
  esp += 4; SPILL(); return;
L_419ef1: /* 419ef1: xor eax, eax */
  eax = 0;
/* 419ef3: ret  */
  esp += 4; SPILL(); return;
}

void f_419ef4(void) {
  LOAD_REGS();
L_419ef4: /* 419ef4: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 419ef8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 419ef9: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 419efd: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 419f02: cmp word ptr [esi + 2], 0x3a */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0x2u))); uint16_t b = (uint16_t)(0x3au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 419f07: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 419f08: mov ecx, esi */
  ecx = esi;
/* 419f0a: jne 0x419f0f */
  if (!zf) goto L_419f0f;
L_419f0c: /* 419f0c: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
L_419f0f: /* 419f0f: mov dx, word ptr [ecx] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* 419f12: cmp dx, 0x5c */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(0x5cu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 419f16: je 0x419f1e */
  if (zf) goto L_419f1e;
L_419f18: /* 419f18: cmp dx, 0x2f */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(0x2fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 419f1c: jne 0x419f25 */
  if (!zf) goto L_419f25;
L_419f1e: /* 419f1e: cmp word ptr [ecx + 2], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx + 0x2u))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 419f23: je 0x419f33 */
  if (zf) goto L_419f33;
L_419f25: /* 419f25: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 419f27: jne 0x419f33 */
  if (!zf) goto L_419f33;
L_419f29: /* 419f29: test dx, dx */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 419f2c: mov edi, 0x8000 */
  edi = 0x8000u;
/* 419f31: jne 0x419f38 */
  if (!zf) goto L_419f38;
L_419f33: /* 419f33: mov edi, 0x4040 */
  edi = 0x4040u;
L_419f38: /* 419f38: shl eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 7;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 419f3b: not al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(~(eax & 0xffu)) & 0xffu);
/* 419f3d: push 0x2e */
  { uint32_t v = 0x2eu; esp -= 4; W32(esp, v); }
/* 419f3f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 419f40: and eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 419f45: or eax, 0x100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 419f4a: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 419f4c: call 0x401a22 */
  esp -= 4; W32(esp, 0x419f51u); SPILL(); f_401a22(); if (g_unwind) return; RELOAD();
/* 419f51: mov esi, eax */
  esi = eax;
/* 419f53: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 419f55: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 419f56: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 419f57: je 0x419fa0 */
  if (zf) goto L_419fa0;
L_419f59: /* 419f59: push 0x43fcc0 */
  { uint32_t v = 0x43fcc0u; esp -= 4; W32(esp, v); }
/* 419f5e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 419f5f: call 0x4019b9 */
  esp -= 4; W32(esp, 0x419f64u); SPILL(); f_4019b9(); if (g_unwind) return; RELOAD();
/* 419f64: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 419f66: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 419f67: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 419f68: je 0x419f9d */
  if (zf) goto L_419f9d;
L_419f6a: /* 419f6a: push 0x43fcb4 */
  { uint32_t v = 0x43fcb4u; esp -= 4; W32(esp, v); }
/* 419f6f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 419f70: call 0x4019b9 */
  esp -= 4; W32(esp, 0x419f75u); SPILL(); f_4019b9(); if (g_unwind) return; RELOAD();
/* 419f75: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 419f77: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 419f78: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 419f79: je 0x419f9d */
  if (zf) goto L_419f9d;
L_419f7b: /* 419f7b: push 0x43fca8 */
  { uint32_t v = 0x43fca8u; esp -= 4; W32(esp, v); }
/* 419f80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 419f81: call 0x4019b9 */
  esp -= 4; W32(esp, 0x419f86u); SPILL(); f_4019b9(); if (g_unwind) return; RELOAD();
/* 419f86: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 419f88: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 419f89: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 419f8a: je 0x419f9d */
  if (zf) goto L_419f9d;
L_419f8c: /* 419f8c: push 0x43fc9c */
  { uint32_t v = 0x43fc9cu; esp -= 4; W32(esp, v); }
/* 419f91: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 419f92: call 0x4019b9 */
  esp -= 4; W32(esp, 0x419f97u); SPILL(); f_4019b9(); if (g_unwind) return; RELOAD();
/* 419f97: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 419f99: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 419f9a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 419f9b: jne 0x419fa0 */
  if (!zf) goto L_419fa0;
L_419f9d: /* 419f9d: or edi, 0x40 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
L_419fa0: /* 419fa0: mov eax, edi */
  eax = edi;
/* 419fa2: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 419fa5: and eax, 0x38 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 419fa8: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 419faa: mov eax, edi */
  eax = edi;
/* 419fac: shr eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 419faf: and eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 419fb2: or eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 419fb4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 419fb5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 419fb6: ret  */
  esp += 4; SPILL(); return;
}

void f_419fb7(void) {
  LOAD_REGS();
L_419fb7: /* 419fb7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 419fb8: mov ebp, esp */
  ebp = esp;
/* 419fba: sub esp, 0x47c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x47cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 419fc0: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 419fc5: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 419fc8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 419fc9: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 419fcc: push 0x43fcd4 */
  { uint32_t v = 0x43fcd4u; esp -= 4; W32(esp, v); }
/* 419fd1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 419fd2: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 419fd5: call 0x402730 */
  esp -= 4; W32(esp, 0x419fdau); SPILL(); f_402730(); if (g_unwind) return; RELOAD();
/* 419fda: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 419fdc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 419fdd: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 419fde: je 0x419ff9 */
  if (zf) goto L_419ff9;
L_419fe0: /* 419fe0: call 0x4102a5 */
  esp -= 4; W32(esp, 0x419fe5u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 419fe5: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 419fe7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 419fe8: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 419fea: call 0x4102ae */
  esp -= 4; W32(esp, 0x419fefu); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 419fef: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 419ff1: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 419ff4: jmp 0x41a292 */
  goto L_41a292;
L_419ff9: /* 419ff9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 419ffa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 419ffb: xor edi, edi */
  edi = 0;
/* 419ffd: cmp word ptr [esi + 2], 0x3a */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0x2u))); uint16_t b = (uint16_t)(0x3au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 41a002: jne 0x41a03a */
  if (!zf) goto L_41a03a;
L_41a004: /* 41a004: mov ax, word ptr [esi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 41a007: cmp ax, di */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 41a00a: je 0x41a02b */
  if (zf) goto L_41a02b;
L_41a00c: /* 41a00c: cmp word ptr [esi + 4], di */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0x4u))); uint16_t b = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 41a010: jne 0x41a02b */
  if (!zf) goto L_41a02b;
L_41a012: /* 41a012: call 0x4102a5 */
  esp -= 4; W32(esp, 0x41a017u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 41a017: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 41a019: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41a01a: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 41a01c: call 0x4102ae */
  esp -= 4; W32(esp, 0x41a021u); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 41a021: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 41a023: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 41a026: jmp 0x41a290 */
  goto L_41a290;
L_41a02b: /* 41a02b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a02c: call 0x4026f7 */
  esp -= 4; W32(esp, 0x41a031u); SPILL(); f_4026f7(); if (g_unwind) return; RELOAD();
/* 41a031: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* 41a034: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41a035: sub eax, 0x60 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 41a038: jmp 0x41a03f */
  goto L_41a03f;
L_41a03a: /* 41a03a: call 0x418ca4 */
  esp -= 4; W32(esp, 0x41a03fu); SPILL(); f_418ca4(); if (g_unwind) return; RELOAD();
L_41a03f: /* 41a03f: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 41a042: lea eax, [ebp - 0x274] */
  eax = (uint32_t)(ebp + 0xfffffd8cu);
/* 41a048: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a049: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41a04a: call dword ptr [0x439078] */
  esp -= 4; W32(esp, 0x41a050u); SPILL(); call_ind(R32(0x439078u)); if (g_unwind) return; /* KERNEL32!FindFirstFileW */ RELOAD();
/* 41a050: or ebx, 0xffffffff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 41a053: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41a055: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 41a058: jne 0x41a104 */
  if (!zf) goto L_41a104;
L_41a05e: /* 41a05e: push 0x43fccc */
  { uint32_t v = 0x43fcccu; esp -= 4; W32(esp, v); }
/* 41a063: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41a064: call 0x402730 */
  esp -= 4; W32(esp, 0x41a069u); SPILL(); f_402730(); if (g_unwind) return; RELOAD();
/* 41a069: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41a06b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41a06c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41a06d: je 0x41a0ee */
  if (zf) goto L_41a0ee;
L_41a06f: /* 41a06f: push 0x104 */
  { uint32_t v = 0x104u; esp -= 4; W32(esp, v); }
/* 41a074: lea eax, [ebp - 0x47c] */
  eax = (uint32_t)(ebp + 0xfffffb84u);
/* 41a07a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41a07b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a07c: call 0x419c14 */
  esp -= 4; W32(esp, 0x41a081u); SPILL(); f_419c14(); if (g_unwind) return; RELOAD();
/* 41a081: mov esi, eax */
  esi = eax;
/* 41a083: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41a086: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41a088: je 0x41a0ee */
  if (zf) goto L_41a0ee;
L_41a08a: /* 41a08a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41a08b: call 0x4013b8 */
  esp -= 4; W32(esp, 0x41a090u); SPILL(); f_4013b8(); if (g_unwind) return; RELOAD();
/* 41a090: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41a093: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41a094: je 0x41a09f */
  if (zf) goto L_41a09f;
L_41a096: /* 41a096: call 0x41a2a0 */
  esp -= 4; W32(esp, 0x41a09bu); SPILL(); f_41a2a0(); if (g_unwind) return; RELOAD();
/* 41a09b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41a09d: je 0x41a0ee */
  if (zf) goto L_41a0ee;
L_41a09f: /* 41a09f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41a0a0: call dword ptr [0x4391bc] */
  esp -= 4; W32(esp, 0x41a0a6u); SPILL(); call_ind(R32(0x4391bcu)); if (g_unwind) return; /* KERNEL32!GetDriveTypeW */ RELOAD();
/* 41a0a6: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 41a0a9: jbe 0x41a0ee */
  if ((cf | zf)) goto L_41a0ee;
L_41a0ab: /* 41a0ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41a0ac: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41a0ad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41a0ae: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41a0af: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 41a0b1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 41a0b3: push 0x7bc */
  { uint32_t v = 0x7bcu; esp -= 4; W32(esp, v); }
/* 41a0b8: mov dword ptr [ebp - 0x274], 0x10 */
  W32((uint32_t)(ebp + 0xfffffd8cu), 0x10u);
/* 41a0c2: mov dword ptr [ebp - 0x258], edi */
  W32((uint32_t)(ebp + 0xfffffda8u), edi);
/* 41a0c8: mov dword ptr [ebp - 0x254], edi */
  W32((uint32_t)(ebp + 0xfffffdacu), edi);
/* 41a0ce: mov word ptr [ebp - 0x248], di */
  W16((uint32_t)(ebp + 0xfffffdb8u), (edi & 0xffffu));
/* 41a0d5: call 0x431816 */
  esp -= 4; W32(esp, 0x41a0dau); SPILL(); f_431816(); if (g_unwind) return; RELOAD();
/* 41a0da: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 41a0dd: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41a0e0: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 41a0e3: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 41a0e6: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 41a0e9: jmp 0x41a23c */
  goto L_41a23c;
L_41a0ee: /* 41a0ee: call 0x4102a5 */
  esp -= 4; W32(esp, 0x41a0f3u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 41a0f3: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 41a0f5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41a0f6: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 41a0f8: call 0x4102ae */
  esp -= 4; W32(esp, 0x41a0fdu); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 41a0fd: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 41a0ff: jmp 0x41a28e */
  goto L_41a28e;
L_41a104: /* 41a104: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 41a107: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a108: lea eax, [ebp - 0x260] */
  eax = (uint32_t)(ebp + 0xfffffda0u);
/* 41a10e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a10f: call dword ptr [0x439164] */
  esp -= 4; W32(esp, 0x41a115u); SPILL(); call_ind(R32(0x439164u)); if (g_unwind) return; /* KERNEL32!FileTimeToLocalFileTime */ RELOAD();
/* 41a115: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41a117: je 0x41a278 */
  if (zf) goto L_41a278;
L_41a11d: /* 41a11d: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 41a120: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a121: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 41a124: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a125: call dword ptr [0x439160] */
  esp -= 4; W32(esp, 0x41a12bu); SPILL(); call_ind(R32(0x439160u)); if (g_unwind) return; /* KERNEL32!FileTimeToSystemTime */ RELOAD();
/* 41a12b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41a12d: je 0x41a278 */
  if (zf) goto L_41a278;
L_41a133: /* 41a133: movzx eax, word ptr [ebp - 8] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff8u)));
/* 41a137: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41a138: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a139: movzx eax, word ptr [ebp - 0xa] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff6u)));
/* 41a13d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a13e: movzx eax, word ptr [ebp - 0xc] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff4u)));
/* 41a142: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a143: movzx eax, word ptr [ebp - 0xe] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff2u)));
/* 41a147: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a148: movzx eax, word ptr [ebp - 0x12] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffffeeu)));
/* 41a14c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a14d: movzx eax, word ptr [ebp - 0x14] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffffecu)));
/* 41a151: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a152: call 0x431816 */
  esp -= 4; W32(esp, 0x41a157u); SPILL(); f_431816(); if (g_unwind) return; RELOAD();
/* 41a157: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 41a15a: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41a15d: cmp dword ptr [ebp - 0x268], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffd98u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41a163: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 41a166: jne 0x41a170 */
  if (!zf) goto L_41a170;
L_41a168: /* 41a168: cmp dword ptr [ebp - 0x264], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffd9cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41a16e: je 0x41a1c6 */
  if (zf) goto L_41a1c6;
L_41a170: /* 41a170: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 41a173: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a174: lea eax, [ebp - 0x268] */
  eax = (uint32_t)(ebp + 0xfffffd98u);
/* 41a17a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a17b: call dword ptr [0x439164] */
  esp -= 4; W32(esp, 0x41a181u); SPILL(); call_ind(R32(0x439164u)); if (g_unwind) return; /* KERNEL32!FileTimeToLocalFileTime */ RELOAD();
/* 41a181: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41a183: je 0x41a278 */
  if (zf) goto L_41a278;
L_41a189: /* 41a189: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 41a18c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a18d: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 41a190: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a191: call dword ptr [0x439160] */
  esp -= 4; W32(esp, 0x41a197u); SPILL(); call_ind(R32(0x439160u)); if (g_unwind) return; /* KERNEL32!FileTimeToSystemTime */ RELOAD();
/* 41a197: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41a199: je 0x41a278 */
  if (zf) goto L_41a278;
L_41a19f: /* 41a19f: movzx eax, word ptr [ebp - 8] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff8u)));
/* 41a1a3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41a1a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a1a5: movzx eax, word ptr [ebp - 0xa] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff6u)));
/* 41a1a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a1aa: movzx eax, word ptr [ebp - 0xc] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff4u)));
/* 41a1ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a1af: movzx eax, word ptr [ebp - 0xe] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff2u)));
/* 41a1b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a1b4: movzx eax, word ptr [ebp - 0x12] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffffeeu)));
/* 41a1b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a1b9: movzx eax, word ptr [ebp - 0x14] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffffecu)));
/* 41a1bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a1be: call 0x431816 */
  esp -= 4; W32(esp, 0x41a1c3u); SPILL(); f_431816(); if (g_unwind) return; RELOAD();
/* 41a1c3: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_41a1c6: /* 41a1c6: cmp dword ptr [ebp - 0x270], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffd90u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41a1cc: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 41a1cf: jne 0x41a1de */
  if (!zf) goto L_41a1de;
L_41a1d1: /* 41a1d1: cmp dword ptr [ebp - 0x26c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffd94u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41a1d7: jne 0x41a1de */
  if (!zf) goto L_41a1de;
L_41a1d9: /* 41a1d9: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 41a1dc: jmp 0x41a230 */
  goto L_41a230;
L_41a1de: /* 41a1de: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 41a1e1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a1e2: lea eax, [ebp - 0x270] */
  eax = (uint32_t)(ebp + 0xfffffd90u);
/* 41a1e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a1e9: call dword ptr [0x439164] */
  esp -= 4; W32(esp, 0x41a1efu); SPILL(); call_ind(R32(0x439164u)); if (g_unwind) return; /* KERNEL32!FileTimeToLocalFileTime */ RELOAD();
/* 41a1ef: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41a1f1: je 0x41a278 */
  if (zf) goto L_41a278;
L_41a1f7: /* 41a1f7: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 41a1fa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a1fb: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 41a1fe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a1ff: call dword ptr [0x439160] */
  esp -= 4; W32(esp, 0x41a205u); SPILL(); call_ind(R32(0x439160u)); if (g_unwind) return; /* KERNEL32!FileTimeToSystemTime */ RELOAD();
/* 41a205: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41a207: je 0x41a278 */
  if (zf) goto L_41a278;
L_41a209: /* 41a209: movzx eax, word ptr [ebp - 8] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff8u)));
/* 41a20d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41a20e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a20f: movzx eax, word ptr [ebp - 0xa] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff6u)));
/* 41a213: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a214: movzx eax, word ptr [ebp - 0xc] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff4u)));
/* 41a218: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a219: movzx eax, word ptr [ebp - 0xe] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff2u)));
/* 41a21d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a21e: movzx eax, word ptr [ebp - 0x12] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffffeeu)));
/* 41a222: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a223: movzx eax, word ptr [ebp - 0x14] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffffecu)));
/* 41a227: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a228: call 0x431816 */
  esp -= 4; W32(esp, 0x41a22du); SPILL(); f_431816(); if (g_unwind) return; RELOAD();
/* 41a22d: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_41a230: /* 41a230: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 41a233: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 41a236: call dword ptr [0x439070] */
  esp -= 4; W32(esp, 0x41a23cu); SPILL(); call_ind(R32(0x439070u)); if (g_unwind) return; /* KERNEL32!FindClose */ RELOAD();
L_41a23c: /* 41a23c: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 41a23f: push dword ptr [ebp - 0x274] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffd8cu)); esp -= 4; W32(esp, v); }
/* 41a245: call 0x419ef4 */
  esp -= 4; W32(esp, 0x41a24au); SPILL(); f_419ef4(); if (g_unwind) return; RELOAD();
/* 41a24a: mov word ptr [esi + 6], ax */
  W16((uint32_t)(esi + 0x6u), (eax & 0xffffu));
/* 41a24e: mov eax, dword ptr [ebp - 0x254] */
  eax = R32((uint32_t)(ebp + 0xfffffdacu));
/* 41a254: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 41a257: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 41a25a: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 41a25b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41a25c: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 41a25e: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 41a261: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41a262: mov word ptr [esi + 8], 1 */
  W16((uint32_t)(esi + 0x8u), 0x1u);
/* 41a268: mov word ptr [esi + 4], di */
  W16((uint32_t)(esi + 0x4u), (edi & 0xffffu));
/* 41a26c: mov word ptr [esi + 0xc], di */
  W16((uint32_t)(esi + 0xcu), (edi & 0xffffu));
/* 41a270: mov word ptr [esi + 0xa], di */
  W16((uint32_t)(esi + 0xau), (edi & 0xffffu));
/* 41a274: xor eax, eax */
  eax = 0;
/* 41a276: jmp 0x41a290 */
  goto L_41a290;
L_41a278: /* 41a278: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x41a27eu); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 41a27e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a27f: call 0x4102b7 */
  esp -= 4; W32(esp, 0x41a284u); SPILL(); f_4102b7(); if (g_unwind) return; RELOAD();
/* 41a284: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41a285: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 41a288: call dword ptr [0x439070] */
  esp -= 4; W32(esp, 0x41a28eu); SPILL(); call_ind(R32(0x439070u)); if (g_unwind) return; /* KERNEL32!FindClose */ RELOAD();
L_41a28e: /* 41a28e: mov eax, ebx */
  eax = ebx;
L_41a290: /* 41a290: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 41a291: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_41a292: /* 41a292: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 41a295: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 41a298: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41a299: call 0x4013ab */
  esp -= 4; W32(esp, 0x41a29eu); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 41a29e: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 41a29f: ret  */
  esp += 4; SPILL(); return;
}

void f_41a2a0(void) {
  LOAD_REGS();
L_41a2a0: /* 41a2a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41a2a1: call 0x4013b8 */
  esp -= 4; W32(esp, 0x41a2a6u); SPILL(); f_4013b8(); if (g_unwind) return; RELOAD();
/* 41a2a6: cmp eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 41a2a9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41a2aa: jb 0x41a328 */
  if (cf) goto L_41a328;
L_41a2ac: /* 41a2ac: mov ax, word ptr [esi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 41a2af: cmp ax, 0x5c */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x5cu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 41a2b3: je 0x41a2bb */
  if (zf) goto L_41a2bb;
L_41a2b5: /* 41a2b5: cmp ax, 0x2f */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x2fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 41a2b9: jne 0x41a328 */
  if (!zf) goto L_41a328;
L_41a2bb: /* 41a2bb: mov ax, word ptr [esi + 2] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0x2u))) & 0xffffu);
/* 41a2bf: cmp ax, 0x5c */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x5cu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 41a2c3: je 0x41a2cb */
  if (zf) goto L_41a2cb;
L_41a2c5: /* 41a2c5: cmp ax, 0x2f */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x2fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 41a2c9: jne 0x41a328 */
  if (!zf) goto L_41a328;
L_41a2cb: /* 41a2cb: lea eax, [esi + 6] */
  eax = (uint32_t)(esi + 0x6u);
/* 41a2ce: mov cx, word ptr [eax] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 41a2d1: xor edx, edx */
  edx = 0;
/* 41a2d3: cmp cx, dx */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 41a2d6: je 0x41a328 */
  if (zf) goto L_41a328;
L_41a2d8: /* 41a2d8: cmp cx, 0x5c */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x5cu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 41a2dc: je 0x41a2ee */
  if (zf) goto L_41a2ee;
L_41a2de: /* 41a2de: cmp cx, 0x2f */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x2fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 41a2e2: je 0x41a2ee */
  if (zf) goto L_41a2ee;
L_41a2e4: /* 41a2e4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 41a2e5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 41a2e6: mov cx, word ptr [eax] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 41a2e9: cmp cx, dx */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 41a2ec: jne 0x41a2d8 */
  if (!zf) goto L_41a2d8;
L_41a2ee: /* 41a2ee: cmp word ptr [eax], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 41a2f1: je 0x41a328 */
  if (zf) goto L_41a328;
L_41a2f3: /* 41a2f3: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 41a2f6: cmp word ptr [eax], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 41a2f9: je 0x41a328 */
  if (zf) goto L_41a328;
L_41a2fb: /* 41a2fb: mov cx, word ptr [eax] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 41a2fe: cmp cx, dx */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 41a301: je 0x41a324 */
  if (zf) goto L_41a324;
L_41a303: /* 41a303: cmp cx, 0x5c */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x5cu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 41a307: je 0x41a319 */
  if (zf) goto L_41a319;
L_41a309: /* 41a309: cmp cx, 0x2f */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x2fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 41a30d: je 0x41a319 */
  if (zf) goto L_41a319;
L_41a30f: /* 41a30f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 41a310: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 41a311: mov cx, word ptr [eax] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 41a314: cmp cx, dx */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 41a317: jne 0x41a303 */
  if (!zf) goto L_41a303;
L_41a319: /* 41a319: cmp word ptr [eax], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 41a31c: je 0x41a324 */
  if (zf) goto L_41a324;
L_41a31e: /* 41a31e: cmp word ptr [eax + 2], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x2u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 41a322: jne 0x41a328 */
  if (!zf) goto L_41a328;
L_41a324: /* 41a324: xor eax, eax */
  eax = 0;
/* 41a326: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 41a327: ret  */
  esp += 4; SPILL(); return;
L_41a328: /* 41a328: xor eax, eax */
  eax = 0;
/* 41a32a: ret  */
  esp += 4; SPILL(); return;
}

void f_41a32b(void) {
  LOAD_REGS();
L_41a32b: /* 41a32b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41a32c: mov ebp, esp */
  ebp = esp;
/* 41a32e: sub esp, 0x47c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x47cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 41a334: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 41a339: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 41a33c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41a33d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 41a340: push 0x43fcd4 */
  { uint32_t v = 0x43fcd4u; esp -= 4; W32(esp, v); }
/* 41a345: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41a346: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 41a349: call 0x402730 */
  esp -= 4; W32(esp, 0x41a34eu); SPILL(); f_402730(); if (g_unwind) return; RELOAD();
/* 41a34e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41a350: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41a351: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41a352: je 0x41a36d */
  if (zf) goto L_41a36d;
L_41a354: /* 41a354: call 0x4102a5 */
  esp -= 4; W32(esp, 0x41a359u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 41a359: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 41a35b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41a35c: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 41a35e: call 0x4102ae */
  esp -= 4; W32(esp, 0x41a363u); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 41a363: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 41a365: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 41a368: jmp 0x41a64d */
  goto L_41a64d;
L_41a36d: /* 41a36d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41a36e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41a36f: xor edi, edi */
  edi = 0;
/* 41a371: cmp word ptr [esi + 2], 0x3a */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0x2u))); uint16_t b = (uint16_t)(0x3au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 41a376: jne 0x41a3ae */
  if (!zf) goto L_41a3ae;
L_41a378: /* 41a378: mov ax, word ptr [esi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 41a37b: cmp ax, di */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 41a37e: je 0x41a39f */
  if (zf) goto L_41a39f;
L_41a380: /* 41a380: cmp word ptr [esi + 4], di */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0x4u))); uint16_t b = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 41a384: jne 0x41a39f */
  if (!zf) goto L_41a39f;
L_41a386: /* 41a386: call 0x4102a5 */
  esp -= 4; W32(esp, 0x41a38bu); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 41a38b: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 41a38d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41a38e: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 41a390: call 0x4102ae */
  esp -= 4; W32(esp, 0x41a395u); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 41a395: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 41a397: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 41a39a: jmp 0x41a64b */
  goto L_41a64b;
L_41a39f: /* 41a39f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a3a0: call 0x4026f7 */
  esp -= 4; W32(esp, 0x41a3a5u); SPILL(); f_4026f7(); if (g_unwind) return; RELOAD();
/* 41a3a5: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* 41a3a8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41a3a9: sub eax, 0x60 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 41a3ac: jmp 0x41a3b3 */
  goto L_41a3b3;
L_41a3ae: /* 41a3ae: call 0x418ca4 */
  esp -= 4; W32(esp, 0x41a3b3u); SPILL(); f_418ca4(); if (g_unwind) return; RELOAD();
L_41a3b3: /* 41a3b3: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 41a3b6: lea eax, [ebp - 0x274] */
  eax = (uint32_t)(ebp + 0xfffffd8cu);
/* 41a3bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a3bd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41a3be: call dword ptr [0x439078] */
  esp -= 4; W32(esp, 0x41a3c4u); SPILL(); call_ind(R32(0x439078u)); if (g_unwind) return; /* KERNEL32!FindFirstFileW */ RELOAD();
/* 41a3c4: or ebx, 0xffffffff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 41a3c7: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41a3c9: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 41a3cc: jne 0x41a487 */
  if (!zf) goto L_41a487;
L_41a3d2: /* 41a3d2: push 0x43fccc */
  { uint32_t v = 0x43fcccu; esp -= 4; W32(esp, v); }
/* 41a3d7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41a3d8: call 0x402730 */
  esp -= 4; W32(esp, 0x41a3ddu); SPILL(); f_402730(); if (g_unwind) return; RELOAD();
/* 41a3dd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41a3df: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41a3e0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41a3e1: je 0x41a471 */
  if (zf) goto L_41a471;
L_41a3e7: /* 41a3e7: push 0x104 */
  { uint32_t v = 0x104u; esp -= 4; W32(esp, v); }
/* 41a3ec: lea eax, [ebp - 0x47c] */
  eax = (uint32_t)(ebp + 0xfffffb84u);
/* 41a3f2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41a3f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a3f4: call 0x419c14 */
  esp -= 4; W32(esp, 0x41a3f9u); SPILL(); f_419c14(); if (g_unwind) return; RELOAD();
/* 41a3f9: mov esi, eax */
  esi = eax;
/* 41a3fb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41a3fe: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41a400: je 0x41a471 */
  if (zf) goto L_41a471;
L_41a402: /* 41a402: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41a403: call 0x4013b8 */
  esp -= 4; W32(esp, 0x41a408u); SPILL(); f_4013b8(); if (g_unwind) return; RELOAD();
/* 41a408: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41a40b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41a40c: je 0x41a417 */
  if (zf) goto L_41a417;
L_41a40e: /* 41a40e: call 0x41a2a0 */
  esp -= 4; W32(esp, 0x41a413u); SPILL(); f_41a2a0(); if (g_unwind) return; RELOAD();
/* 41a413: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41a415: je 0x41a471 */
  if (zf) goto L_41a471;
L_41a417: /* 41a417: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41a418: call dword ptr [0x4391bc] */
  esp -= 4; W32(esp, 0x41a41eu); SPILL(); call_ind(R32(0x4391bcu)); if (g_unwind) return; /* KERNEL32!GetDriveTypeW */ RELOAD();
/* 41a41e: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 41a421: jbe 0x41a471 */
  if ((cf | zf)) goto L_41a471;
L_41a423: /* 41a423: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 41a426: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41a427: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41a428: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41a429: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41a42a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 41a42c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 41a42e: push 0x7bc */
  { uint32_t v = 0x7bcu; esp -= 4; W32(esp, v); }
/* 41a433: mov dword ptr [ebp - 0x274], 0x10 */
  W32((uint32_t)(ebp + 0xfffffd8cu), 0x10u);
/* 41a43d: mov dword ptr [ebp - 0x258], edi */
  W32((uint32_t)(ebp + 0xfffffda8u), edi);
/* 41a443: mov dword ptr [ebp - 0x254], edi */
  W32((uint32_t)(ebp + 0xfffffdacu), edi);
/* 41a449: mov word ptr [ebp - 0x248], di */
  W16((uint32_t)(ebp + 0xfffffdb8u), (edi & 0xffffu));
/* 41a450: call 0x431924 */
  esp -= 4; W32(esp, 0x41a455u); SPILL(); f_431924(); if (g_unwind) return; RELOAD();
/* 41a455: mov ecx, edx */
  ecx = edx;
/* 41a457: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41a45a: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 41a45d: mov dword ptr [esi + 0x2c], edx */
  W32((uint32_t)(esi + 0x2cu), edx);
/* 41a460: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 41a463: mov dword ptr [esi + 0x24], ecx */
  W32((uint32_t)(esi + 0x24u), ecx);
/* 41a466: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 41a469: mov dword ptr [esi + 0x34], ecx */
  W32((uint32_t)(esi + 0x34u), ecx);
/* 41a46c: jmp 0x41a5df */
  goto L_41a5df;
L_41a471: /* 41a471: call 0x4102a5 */
  esp -= 4; W32(esp, 0x41a476u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 41a476: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 41a478: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41a479: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 41a47b: call 0x4102ae */
  esp -= 4; W32(esp, 0x41a480u); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 41a480: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 41a482: jmp 0x41a649 */
  goto L_41a649;
L_41a487: /* 41a487: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 41a48a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a48b: lea eax, [ebp - 0x260] */
  eax = (uint32_t)(ebp + 0xfffffda0u);
/* 41a491: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a492: call dword ptr [0x439164] */
  esp -= 4; W32(esp, 0x41a498u); SPILL(); call_ind(R32(0x439164u)); if (g_unwind) return; /* KERNEL32!FileTimeToLocalFileTime */ RELOAD();
/* 41a498: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41a49a: je 0x41a633 */
  if (zf) goto L_41a633;
L_41a4a0: /* 41a4a0: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 41a4a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a4a4: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 41a4a7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a4a8: call dword ptr [0x439160] */
  esp -= 4; W32(esp, 0x41a4aeu); SPILL(); call_ind(R32(0x439160u)); if (g_unwind) return; /* KERNEL32!FileTimeToSystemTime */ RELOAD();
/* 41a4ae: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41a4b0: je 0x41a633 */
  if (zf) goto L_41a633;
L_41a4b6: /* 41a4b6: movzx eax, word ptr [ebp - 8] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff8u)));
/* 41a4ba: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41a4bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a4bc: movzx eax, word ptr [ebp - 0xa] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff6u)));
/* 41a4c0: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 41a4c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a4c4: movzx eax, word ptr [ebp - 0xc] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff4u)));
/* 41a4c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a4c9: movzx eax, word ptr [ebp - 0xe] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff2u)));
/* 41a4cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a4ce: movzx eax, word ptr [ebp - 0x12] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffffeeu)));
/* 41a4d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a4d3: movzx eax, word ptr [ebp - 0x14] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffffecu)));
/* 41a4d7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a4d8: call 0x431924 */
  esp -= 4; W32(esp, 0x41a4ddu); SPILL(); f_431924(); if (g_unwind) return; RELOAD();
/* 41a4dd: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41a4e0: cmp dword ptr [ebp - 0x268], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffd98u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41a4e6: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 41a4e9: mov dword ptr [esi + 0x2c], edx */
  W32((uint32_t)(esi + 0x2cu), edx);
/* 41a4ec: jne 0x41a500 */
  if (!zf) goto L_41a500;
L_41a4ee: /* 41a4ee: cmp dword ptr [ebp - 0x264], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffd9cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41a4f4: jne 0x41a500 */
  if (!zf) goto L_41a500;
L_41a4f6: /* 41a4f6: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 41a4f9: mov eax, edx */
  eax = edx;
/* 41a4fb: mov dword ptr [esi + 0x24], eax */
  W32((uint32_t)(esi + 0x24u), eax);
/* 41a4fe: jmp 0x41a55c */
  goto L_41a55c;
L_41a500: /* 41a500: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 41a503: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a504: lea eax, [ebp - 0x268] */
  eax = (uint32_t)(ebp + 0xfffffd98u);
/* 41a50a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a50b: call dword ptr [0x439164] */
  esp -= 4; W32(esp, 0x41a511u); SPILL(); call_ind(R32(0x439164u)); if (g_unwind) return; /* KERNEL32!FileTimeToLocalFileTime */ RELOAD();
/* 41a511: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41a513: je 0x41a633 */
  if (zf) goto L_41a633;
L_41a519: /* 41a519: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 41a51c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a51d: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 41a520: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a521: call dword ptr [0x439160] */
  esp -= 4; W32(esp, 0x41a527u); SPILL(); call_ind(R32(0x439160u)); if (g_unwind) return; /* KERNEL32!FileTimeToSystemTime */ RELOAD();
/* 41a527: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41a529: je 0x41a633 */
  if (zf) goto L_41a633;
L_41a52f: /* 41a52f: movzx eax, word ptr [ebp - 8] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff8u)));
/* 41a533: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41a534: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a535: movzx eax, word ptr [ebp - 0xa] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff6u)));
/* 41a539: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a53a: movzx eax, word ptr [ebp - 0xc] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff4u)));
/* 41a53e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a53f: movzx eax, word ptr [ebp - 0xe] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff2u)));
/* 41a543: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a544: movzx eax, word ptr [ebp - 0x12] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffffeeu)));
/* 41a548: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a549: movzx eax, word ptr [ebp - 0x14] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffffecu)));
/* 41a54d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a54e: call 0x431924 */
  esp -= 4; W32(esp, 0x41a553u); SPILL(); f_431924(); if (g_unwind) return; RELOAD();
/* 41a553: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41a556: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 41a559: mov dword ptr [esi + 0x24], edx */
  W32((uint32_t)(esi + 0x24u), edx);
L_41a55c: /* 41a55c: cmp dword ptr [ebp - 0x270], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffd90u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41a562: jne 0x41a57a */
  if (!zf) goto L_41a57a;
L_41a564: /* 41a564: cmp dword ptr [ebp - 0x26c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffd94u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41a56a: jne 0x41a57a */
  if (!zf) goto L_41a57a;
L_41a56c: /* 41a56c: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 41a56f: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 41a572: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 41a575: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* 41a578: jmp 0x41a5d6 */
  goto L_41a5d6;
L_41a57a: /* 41a57a: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 41a57d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a57e: lea eax, [ebp - 0x270] */
  eax = (uint32_t)(ebp + 0xfffffd90u);
/* 41a584: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a585: call dword ptr [0x439164] */
  esp -= 4; W32(esp, 0x41a58bu); SPILL(); call_ind(R32(0x439164u)); if (g_unwind) return; /* KERNEL32!FileTimeToLocalFileTime */ RELOAD();
/* 41a58b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41a58d: je 0x41a633 */
  if (zf) goto L_41a633;
L_41a593: /* 41a593: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 41a596: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a597: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 41a59a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a59b: call dword ptr [0x439160] */
  esp -= 4; W32(esp, 0x41a5a1u); SPILL(); call_ind(R32(0x439160u)); if (g_unwind) return; /* KERNEL32!FileTimeToSystemTime */ RELOAD();
/* 41a5a1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41a5a3: je 0x41a633 */
  if (zf) goto L_41a633;
L_41a5a9: /* 41a5a9: movzx eax, word ptr [ebp - 8] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff8u)));
/* 41a5ad: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41a5ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a5af: movzx eax, word ptr [ebp - 0xa] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff6u)));
/* 41a5b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a5b4: movzx eax, word ptr [ebp - 0xc] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff4u)));
/* 41a5b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a5b9: movzx eax, word ptr [ebp - 0xe] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff2u)));
/* 41a5bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a5be: movzx eax, word ptr [ebp - 0x12] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffffeeu)));
/* 41a5c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a5c3: movzx eax, word ptr [ebp - 0x14] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffffecu)));
/* 41a5c7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a5c8: call 0x431924 */
  esp -= 4; W32(esp, 0x41a5cdu); SPILL(); f_431924(); if (g_unwind) return; RELOAD();
/* 41a5cd: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41a5d0: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 41a5d3: mov dword ptr [esi + 0x34], edx */
  W32((uint32_t)(esi + 0x34u), edx);
L_41a5d6: /* 41a5d6: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 41a5d9: call dword ptr [0x439070] */
  esp -= 4; W32(esp, 0x41a5dfu); SPILL(); call_ind(R32(0x439070u)); if (g_unwind) return; /* KERNEL32!FindClose */ RELOAD();
L_41a5df: /* 41a5df: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 41a5e2: push dword ptr [ebp - 0x274] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffd8cu)); esp -= 4; W32(esp, v); }
/* 41a5e8: call 0x419ef4 */
  esp -= 4; W32(esp, 0x41a5edu); SPILL(); f_419ef4(); if (g_unwind) return; RELOAD();
/* 41a5ed: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41a5ee: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41a5ef: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 41a5f1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41a5f2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41a5f3: push dword ptr [ebp - 0x258] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffda8u)); esp -= 4; W32(esp, v); }
/* 41a5f9: mov word ptr [esi + 6], ax */
  W16((uint32_t)(esi + 0x6u), (eax & 0xffffu));
/* 41a5fd: mov word ptr [esi + 8], 1 */
  W16((uint32_t)(esi + 0x8u), 0x1u);
/* 41a603: call 0x40518c */
  esp -= 4; W32(esp, 0x41a608u); SPILL(); f_40518c(); if (g_unwind) return; RELOAD();
/* 41a608: mov ecx, dword ptr [ebp - 0x254] */
  ecx = R32((uint32_t)(ebp + 0xfffffdacu));
/* 41a60e: xor ebx, ebx */
  ebx = 0;
/* 41a610: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 41a612: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 41a615: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 41a618: adc edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 41a61a: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 41a61b: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 41a61d: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 41a620: mov dword ptr [esi + 0x1c], edx */
  W32((uint32_t)(esi + 0x1cu), edx);
/* 41a623: mov word ptr [esi + 4], di */
  W16((uint32_t)(esi + 0x4u), (edi & 0xffffu));
/* 41a627: mov word ptr [esi + 0xc], di */
  W16((uint32_t)(esi + 0xcu), (edi & 0xffffu));
/* 41a62b: mov word ptr [esi + 0xa], di */
  W16((uint32_t)(esi + 0xau), (edi & 0xffffu));
/* 41a62f: xor eax, eax */
  eax = 0;
/* 41a631: jmp 0x41a64b */
  goto L_41a64b;
L_41a633: /* 41a633: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x41a639u); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 41a639: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a63a: call 0x4102b7 */
  esp -= 4; W32(esp, 0x41a63fu); SPILL(); f_4102b7(); if (g_unwind) return; RELOAD();
/* 41a63f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41a640: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 41a643: call dword ptr [0x439070] */
  esp -= 4; W32(esp, 0x41a649u); SPILL(); call_ind(R32(0x439070u)); if (g_unwind) return; /* KERNEL32!FindClose */ RELOAD();
L_41a649: /* 41a649: mov eax, ebx */
  eax = ebx;
L_41a64b: /* 41a64b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 41a64c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_41a64d: /* 41a64d: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 41a650: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 41a653: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41a654: call 0x4013ab */
  esp -= 4; W32(esp, 0x41a659u); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 41a659: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 41a65a: ret  */
  esp += 4; SPILL(); return;
}

void f_41a65b(void) {
  LOAD_REGS();
L_41a65b: /* 41a65b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41a65c: mov ebp, esp */
  ebp = esp;
/* 41a65e: sub esp, 0x47c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x47cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 41a664: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 41a669: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 41a66c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41a66d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 41a670: push 0x43fcd4 */
  { uint32_t v = 0x43fcd4u; esp -= 4; W32(esp, v); }
/* 41a675: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41a676: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 41a679: call 0x402730 */
  esp -= 4; W32(esp, 0x41a67eu); SPILL(); f_402730(); if (g_unwind) return; RELOAD();
/* 41a67e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41a680: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41a681: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41a682: je 0x41a69d */
  if (zf) goto L_41a69d;
L_41a684: /* 41a684: call 0x4102a5 */
  esp -= 4; W32(esp, 0x41a689u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 41a689: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 41a68b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41a68c: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 41a68e: call 0x4102ae */
  esp -= 4; W32(esp, 0x41a693u); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 41a693: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 41a695: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 41a698: jmp 0x41a952 */
  goto L_41a952;
L_41a69d: /* 41a69d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41a69e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41a69f: xor edi, edi */
  edi = 0;
/* 41a6a1: cmp word ptr [esi + 2], 0x3a */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0x2u))); uint16_t b = (uint16_t)(0x3au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 41a6a6: jne 0x41a6de */
  if (!zf) goto L_41a6de;
L_41a6a8: /* 41a6a8: mov ax, word ptr [esi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 41a6ab: cmp ax, di */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 41a6ae: je 0x41a6cf */
  if (zf) goto L_41a6cf;
L_41a6b0: /* 41a6b0: cmp word ptr [esi + 4], di */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0x4u))); uint16_t b = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 41a6b4: jne 0x41a6cf */
  if (!zf) goto L_41a6cf;
L_41a6b6: /* 41a6b6: call 0x4102a5 */
  esp -= 4; W32(esp, 0x41a6bbu); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 41a6bb: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 41a6bd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41a6be: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 41a6c0: call 0x4102ae */
  esp -= 4; W32(esp, 0x41a6c5u); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 41a6c5: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 41a6c7: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 41a6ca: jmp 0x41a950 */
  goto L_41a950;
L_41a6cf: /* 41a6cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a6d0: call 0x4026f7 */
  esp -= 4; W32(esp, 0x41a6d5u); SPILL(); f_4026f7(); if (g_unwind) return; RELOAD();
/* 41a6d5: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* 41a6d8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41a6d9: sub eax, 0x60 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 41a6dc: jmp 0x41a6e3 */
  goto L_41a6e3;
L_41a6de: /* 41a6de: call 0x418ca4 */
  esp -= 4; W32(esp, 0x41a6e3u); SPILL(); f_418ca4(); if (g_unwind) return; RELOAD();
L_41a6e3: /* 41a6e3: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 41a6e6: lea eax, [ebp - 0x274] */
  eax = (uint32_t)(ebp + 0xfffffd8cu);
/* 41a6ec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a6ed: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41a6ee: call dword ptr [0x439078] */
  esp -= 4; W32(esp, 0x41a6f4u); SPILL(); call_ind(R32(0x439078u)); if (g_unwind) return; /* KERNEL32!FindFirstFileW */ RELOAD();
/* 41a6f4: or ebx, 0xffffffff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 41a6f7: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41a6f9: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 41a6fc: jne 0x41a7a8 */
  if (!zf) goto L_41a7a8;
L_41a702: /* 41a702: push 0x43fccc */
  { uint32_t v = 0x43fcccu; esp -= 4; W32(esp, v); }
/* 41a707: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41a708: call 0x402730 */
  esp -= 4; W32(esp, 0x41a70du); SPILL(); f_402730(); if (g_unwind) return; RELOAD();
/* 41a70d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41a70f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41a710: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41a711: je 0x41a792 */
  if (zf) goto L_41a792;
L_41a713: /* 41a713: push 0x104 */
  { uint32_t v = 0x104u; esp -= 4; W32(esp, v); }
/* 41a718: lea eax, [ebp - 0x47c] */
  eax = (uint32_t)(ebp + 0xfffffb84u);
/* 41a71e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41a71f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a720: call 0x419c14 */
  esp -= 4; W32(esp, 0x41a725u); SPILL(); f_419c14(); if (g_unwind) return; RELOAD();
/* 41a725: mov esi, eax */
  esi = eax;
/* 41a727: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41a72a: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41a72c: je 0x41a792 */
  if (zf) goto L_41a792;
L_41a72e: /* 41a72e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41a72f: call 0x4013b8 */
  esp -= 4; W32(esp, 0x41a734u); SPILL(); f_4013b8(); if (g_unwind) return; RELOAD();
/* 41a734: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41a737: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41a738: je 0x41a743 */
  if (zf) goto L_41a743;
L_41a73a: /* 41a73a: call 0x41a2a0 */
  esp -= 4; W32(esp, 0x41a73fu); SPILL(); f_41a2a0(); if (g_unwind) return; RELOAD();
/* 41a73f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41a741: je 0x41a792 */
  if (zf) goto L_41a792;
L_41a743: /* 41a743: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41a744: call dword ptr [0x4391bc] */
  esp -= 4; W32(esp, 0x41a74au); SPILL(); call_ind(R32(0x4391bcu)); if (g_unwind) return; /* KERNEL32!GetDriveTypeW */ RELOAD();
/* 41a74a: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 41a74d: jbe 0x41a792 */
  if ((cf | zf)) goto L_41a792;
L_41a74f: /* 41a74f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41a750: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41a751: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41a752: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41a753: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 41a755: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 41a757: push 0x7bc */
  { uint32_t v = 0x7bcu; esp -= 4; W32(esp, v); }
/* 41a75c: mov dword ptr [ebp - 0x274], 0x10 */
  W32((uint32_t)(ebp + 0xfffffd8cu), 0x10u);
/* 41a766: mov dword ptr [ebp - 0x258], edi */
  W32((uint32_t)(ebp + 0xfffffda8u), edi);
/* 41a76c: mov dword ptr [ebp - 0x254], edi */
  W32((uint32_t)(ebp + 0xfffffdacu), edi);
/* 41a772: mov word ptr [ebp - 0x248], di */
  W16((uint32_t)(ebp + 0xfffffdb8u), (edi & 0xffffu));
/* 41a779: call 0x431816 */
  esp -= 4; W32(esp, 0x41a77eu); SPILL(); f_431816(); if (g_unwind) return; RELOAD();
/* 41a77e: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 41a781: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41a784: mov dword ptr [esi + 0x24], eax */
  W32((uint32_t)(esi + 0x24u), eax);
/* 41a787: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 41a78a: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 41a78d: jmp 0x41a8e4 */
  goto L_41a8e4;
L_41a792: /* 41a792: call 0x4102a5 */
  esp -= 4; W32(esp, 0x41a797u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 41a797: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 41a799: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41a79a: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 41a79c: call 0x4102ae */
  esp -= 4; W32(esp, 0x41a7a1u); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 41a7a1: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 41a7a3: jmp 0x41a94e */
  goto L_41a94e;
L_41a7a8: /* 41a7a8: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 41a7ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a7ac: lea eax, [ebp - 0x260] */
  eax = (uint32_t)(ebp + 0xfffffda0u);
/* 41a7b2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a7b3: call dword ptr [0x439164] */
  esp -= 4; W32(esp, 0x41a7b9u); SPILL(); call_ind(R32(0x439164u)); if (g_unwind) return; /* KERNEL32!FileTimeToLocalFileTime */ RELOAD();
/* 41a7b9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41a7bb: je 0x41a938 */
  if (zf) goto L_41a938;
L_41a7c1: /* 41a7c1: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 41a7c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a7c5: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 41a7c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a7c9: call dword ptr [0x439160] */
  esp -= 4; W32(esp, 0x41a7cfu); SPILL(); call_ind(R32(0x439160u)); if (g_unwind) return; /* KERNEL32!FileTimeToSystemTime */ RELOAD();
/* 41a7cf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41a7d1: je 0x41a938 */
  if (zf) goto L_41a938;
L_41a7d7: /* 41a7d7: movzx eax, word ptr [ebp - 8] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff8u)));
/* 41a7db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41a7dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a7dd: movzx eax, word ptr [ebp - 0xa] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff6u)));
/* 41a7e1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a7e2: movzx eax, word ptr [ebp - 0xc] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff4u)));
/* 41a7e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a7e7: movzx eax, word ptr [ebp - 0xe] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff2u)));
/* 41a7eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a7ec: movzx eax, word ptr [ebp - 0x12] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffffeeu)));
/* 41a7f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a7f1: movzx eax, word ptr [ebp - 0x14] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffffecu)));
/* 41a7f5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a7f6: call 0x431816 */
  esp -= 4; W32(esp, 0x41a7fbu); SPILL(); f_431816(); if (g_unwind) return; RELOAD();
/* 41a7fb: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 41a7fe: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41a801: cmp dword ptr [ebp - 0x268], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffd98u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41a807: mov dword ptr [esi + 0x24], eax */
  W32((uint32_t)(esi + 0x24u), eax);
/* 41a80a: jne 0x41a814 */
  if (!zf) goto L_41a814;
L_41a80c: /* 41a80c: cmp dword ptr [ebp - 0x264], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffd9cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41a812: je 0x41a86a */
  if (zf) goto L_41a86a;
L_41a814: /* 41a814: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 41a817: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a818: lea eax, [ebp - 0x268] */
  eax = (uint32_t)(ebp + 0xfffffd98u);
/* 41a81e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a81f: call dword ptr [0x439164] */
  esp -= 4; W32(esp, 0x41a825u); SPILL(); call_ind(R32(0x439164u)); if (g_unwind) return; /* KERNEL32!FileTimeToLocalFileTime */ RELOAD();
/* 41a825: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41a827: je 0x41a938 */
  if (zf) goto L_41a938;
L_41a82d: /* 41a82d: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 41a830: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a831: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 41a834: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a835: call dword ptr [0x439160] */
  esp -= 4; W32(esp, 0x41a83bu); SPILL(); call_ind(R32(0x439160u)); if (g_unwind) return; /* KERNEL32!FileTimeToSystemTime */ RELOAD();
/* 41a83b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41a83d: je 0x41a938 */
  if (zf) goto L_41a938;
L_41a843: /* 41a843: movzx eax, word ptr [ebp - 8] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff8u)));
/* 41a847: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41a848: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a849: movzx eax, word ptr [ebp - 0xa] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff6u)));
/* 41a84d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a84e: movzx eax, word ptr [ebp - 0xc] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff4u)));
/* 41a852: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a853: movzx eax, word ptr [ebp - 0xe] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff2u)));
/* 41a857: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a858: movzx eax, word ptr [ebp - 0x12] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffffeeu)));
/* 41a85c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a85d: movzx eax, word ptr [ebp - 0x14] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffffecu)));
/* 41a861: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a862: call 0x431816 */
  esp -= 4; W32(esp, 0x41a867u); SPILL(); f_431816(); if (g_unwind) return; RELOAD();
/* 41a867: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_41a86a: /* 41a86a: cmp dword ptr [ebp - 0x270], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffd90u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41a870: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 41a873: jne 0x41a882 */
  if (!zf) goto L_41a882;
L_41a875: /* 41a875: cmp dword ptr [ebp - 0x26c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffd94u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41a87b: jne 0x41a882 */
  if (!zf) goto L_41a882;
L_41a87d: /* 41a87d: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 41a880: jmp 0x41a8d8 */
  goto L_41a8d8;
L_41a882: /* 41a882: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 41a885: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a886: lea eax, [ebp - 0x270] */
  eax = (uint32_t)(ebp + 0xfffffd90u);
/* 41a88c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a88d: call dword ptr [0x439164] */
  esp -= 4; W32(esp, 0x41a893u); SPILL(); call_ind(R32(0x439164u)); if (g_unwind) return; /* KERNEL32!FileTimeToLocalFileTime */ RELOAD();
/* 41a893: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41a895: je 0x41a938 */
  if (zf) goto L_41a938;
L_41a89b: /* 41a89b: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 41a89e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a89f: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 41a8a2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a8a3: call dword ptr [0x439160] */
  esp -= 4; W32(esp, 0x41a8a9u); SPILL(); call_ind(R32(0x439160u)); if (g_unwind) return; /* KERNEL32!FileTimeToSystemTime */ RELOAD();
/* 41a8a9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41a8ab: je 0x41a938 */
  if (zf) goto L_41a938;
L_41a8b1: /* 41a8b1: movzx eax, word ptr [ebp - 8] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff8u)));
/* 41a8b5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41a8b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a8b7: movzx eax, word ptr [ebp - 0xa] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff6u)));
/* 41a8bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a8bc: movzx eax, word ptr [ebp - 0xc] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff4u)));
/* 41a8c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a8c1: movzx eax, word ptr [ebp - 0xe] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff2u)));
/* 41a8c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a8c6: movzx eax, word ptr [ebp - 0x12] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffffeeu)));
/* 41a8ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a8cb: movzx eax, word ptr [ebp - 0x14] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffffecu)));
/* 41a8cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a8d0: call 0x431816 */
  esp -= 4; W32(esp, 0x41a8d5u); SPILL(); f_431816(); if (g_unwind) return; RELOAD();
/* 41a8d5: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_41a8d8: /* 41a8d8: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 41a8db: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 41a8de: call dword ptr [0x439070] */
  esp -= 4; W32(esp, 0x41a8e4u); SPILL(); call_ind(R32(0x439070u)); if (g_unwind) return; /* KERNEL32!FindClose */ RELOAD();
L_41a8e4: /* 41a8e4: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 41a8e7: push dword ptr [ebp - 0x274] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffd8cu)); esp -= 4; W32(esp, v); }
/* 41a8ed: call 0x419ef4 */
  esp -= 4; W32(esp, 0x41a8f2u); SPILL(); f_419ef4(); if (g_unwind) return; RELOAD();
/* 41a8f2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41a8f3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41a8f4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 41a8f6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41a8f7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41a8f8: push dword ptr [ebp - 0x258] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffda8u)); esp -= 4; W32(esp, v); }
/* 41a8fe: mov word ptr [esi + 6], ax */
  W16((uint32_t)(esi + 0x6u), (eax & 0xffffu));
/* 41a902: mov word ptr [esi + 8], 1 */
  W16((uint32_t)(esi + 0x8u), 0x1u);
/* 41a908: call 0x40518c */
  esp -= 4; W32(esp, 0x41a90du); SPILL(); f_40518c(); if (g_unwind) return; RELOAD();
/* 41a90d: mov ecx, dword ptr [ebp - 0x254] */
  ecx = R32((uint32_t)(ebp + 0xfffffdacu));
/* 41a913: xor ebx, ebx */
  ebx = 0;
/* 41a915: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 41a917: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 41a91a: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 41a91d: adc edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 41a91f: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 41a920: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 41a922: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 41a925: mov dword ptr [esi + 0x1c], edx */
  W32((uint32_t)(esi + 0x1cu), edx);
/* 41a928: mov word ptr [esi + 4], di */
  W16((uint32_t)(esi + 0x4u), (edi & 0xffffu));
/* 41a92c: mov word ptr [esi + 0xc], di */
  W16((uint32_t)(esi + 0xcu), (edi & 0xffffu));
/* 41a930: mov word ptr [esi + 0xa], di */
  W16((uint32_t)(esi + 0xau), (edi & 0xffffu));
/* 41a934: xor eax, eax */
  eax = 0;
/* 41a936: jmp 0x41a950 */
  goto L_41a950;
L_41a938: /* 41a938: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x41a93eu); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 41a93e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a93f: call 0x4102b7 */
  esp -= 4; W32(esp, 0x41a944u); SPILL(); f_4102b7(); if (g_unwind) return; RELOAD();
/* 41a944: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41a945: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 41a948: call dword ptr [0x439070] */
  esp -= 4; W32(esp, 0x41a94eu); SPILL(); call_ind(R32(0x439070u)); if (g_unwind) return; /* KERNEL32!FindClose */ RELOAD();
L_41a94e: /* 41a94e: mov eax, ebx */
  eax = ebx;
L_41a950: /* 41a950: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 41a951: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_41a952: /* 41a952: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 41a955: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 41a958: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41a959: call 0x4013ab */
  esp -= 4; W32(esp, 0x41a95eu); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 41a95e: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 41a95f: ret  */
  esp += 4; SPILL(); return;
}

void f_41a960(void) {
  LOAD_REGS();
L_41a960: /* 41a960: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 41a964: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 41a968: call dword ptr [0x4391c0] */
  esp -= 4; W32(esp, 0x41a96eu); SPILL(); call_ind(R32(0x4391c0u)); if (g_unwind) return; /* KERNEL32!MoveFileA */ RELOAD();
/* 41a96e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41a970: jne 0x41a97a */
  if (!zf) goto L_41a97a;
L_41a972: /* 41a972: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x41a978u); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 41a978: jmp 0x41a97c */
  goto L_41a97c;
L_41a97a: /* 41a97a: xor eax, eax */
  eax = 0;
L_41a97c: /* 41a97c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41a97e: je 0x41a98b */
  if (zf) goto L_41a98b;
L_41a980: /* 41a980: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a981: call 0x4102b7 */
  esp -= 4; W32(esp, 0x41a986u); SPILL(); f_4102b7(); if (g_unwind) return; RELOAD();
/* 41a986: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41a987: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 41a98a: ret  */
  esp += 4; SPILL(); return;
L_41a98b: /* 41a98b: xor eax, eax */
  eax = 0;
/* 41a98d: ret  */
  esp += 4; SPILL(); return;
}

void f_41a98e(void) {
  LOAD_REGS();
L_41a98e: /* 41a98e: mov eax, ecx */
  eax = ecx;
/* 41a990: and dword ptr [eax + 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x4u), r);
  }
/* 41a994: and dword ptr [eax + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x8u), r);
  }
/* 41a998: mov dword ptr [eax], 0x4399b0 */
  W32((uint32_t)(eax), 0x4399b0u);
/* 41a99e: ret  */
  esp += 4; SPILL(); return;
}

void f_41a99f(void) {
  LOAD_REGS();
L_41a99f: /* 41a99f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41a9a0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41a9a1: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 41a9a5: mov esi, ecx */
  esi = ecx;
/* 41a9a7: mov dword ptr [esi], 0x4399b0 */
  W32((uint32_t)(esi), 0x4399b0u);
/* 41a9ad: push dword ptr [edi] */
  { uint32_t v = R32((uint32_t)(edi)); esp -= 4; W32(esp, v); }
/* 41a9af: call 0x402493 */
  esp -= 4; W32(esp, 0x41a9b4u); SPILL(); hle_strlen(); RELOAD();
/* 41a9b4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 41a9b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a9b6: call 0x4010eb */
  esp -= 4; W32(esp, 0x41a9bbu); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 41a9bb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41a9bd: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41a9be: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41a9bf: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 41a9c2: je 0x41a9ce */
  if (zf) goto L_41a9ce;
L_41a9c4: /* 41a9c4: push dword ptr [edi] */
  { uint32_t v = R32((uint32_t)(edi)); esp -= 4; W32(esp, v); }
/* 41a9c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a9c7: call 0x404b3a */
  esp -= 4; W32(esp, 0x41a9ccu); SPILL(); f_404b3a(); if (g_unwind) return; RELOAD();
/* 41a9cc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41a9cd: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_41a9ce: /* 41a9ce: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 41a9cf: mov dword ptr [esi + 8], 1 */
  W32((uint32_t)(esi + 0x8u), 0x1u);
/* 41a9d6: mov eax, esi */
  eax = esi;
/* 41a9d8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41a9d9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_41a9dc(void) {
  LOAD_REGS();
L_41a9dc: /* 41a9dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41a9dd: mov esi, ecx */
  esi = ecx;
/* 41a9df: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41a9e0: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 41a9e4: mov dword ptr [esi], 0x4399b0 */
  W32((uint32_t)(esi), 0x4399b0u);
/* 41a9ea: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 41a9ed: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41a9ef: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 41a9f2: je 0x41aa19 */
  if (zf) goto L_41aa19;
L_41a9f4: /* 41a9f4: push dword ptr [edi + 4] */
  { uint32_t v = R32((uint32_t)(edi + 0x4u)); esp -= 4; W32(esp, v); }
/* 41a9f7: call 0x402493 */
  esp -= 4; W32(esp, 0x41a9fcu); SPILL(); hle_strlen(); RELOAD();
/* 41a9fc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 41a9fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41a9fe: call 0x4010eb */
  esp -= 4; W32(esp, 0x41aa03u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 41aa03: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41aa05: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41aa06: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41aa07: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 41aa0a: je 0x41aa1f */
  if (zf) goto L_41aa1f;
L_41aa0c: /* 41aa0c: push dword ptr [edi + 4] */
  { uint32_t v = R32((uint32_t)(edi + 0x4u)); esp -= 4; W32(esp, v); }
/* 41aa0f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41aa10: call 0x404b3a */
  esp -= 4; W32(esp, 0x41aa15u); SPILL(); f_404b3a(); if (g_unwind) return; RELOAD();
/* 41aa15: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41aa16: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41aa17: jmp 0x41aa1f */
  goto L_41aa1f;
L_41aa19: /* 41aa19: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 41aa1c: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
L_41aa1f: /* 41aa1f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 41aa20: mov eax, esi */
  eax = esi;
/* 41aa22: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41aa23: ret 4 */
  esp += 8; SPILL(); return;
}

void f_41aa26(void) {
  LOAD_REGS();
L_41aa26: /* 41aa26: cmp dword ptr [ecx + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41aa2a: mov dword ptr [ecx], 0x4399b0 */
  W32((uint32_t)(ecx), 0x4399b0u);
/* 41aa30: je 0x41aa3b */
  if (zf) goto L_41aa3b;
L_41aa32: /* 41aa32: push dword ptr [ecx + 4] */
  { uint32_t v = R32((uint32_t)(ecx + 0x4u)); esp -= 4; W32(esp, v); }
/* 41aa35: call 0x401156 */
  esp -= 4; W32(esp, 0x41aa3au); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 41aa3a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_41aa3b: /* 41aa3b: ret  */
  esp += 4; SPILL(); return;
}

void f_41aa3c(void) {
  LOAD_REGS();
L_41aa3c: /* 41aa3c: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 41aa3f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41aa41: jne 0x41aa48 */
  if (!zf) goto L_41aa48;
L_41aa43: /* 41aa43: mov eax, 0x43fcdc */
  eax = 0x43fcdcu;
L_41aa48: /* 41aa48: ret  */
  esp += 4; SPILL(); return;
}

void f_41aa49(void) {
  LOAD_REGS();
L_41aa49: /* 41aa49: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41aa4a: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 41aa4e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41aa4f: mov esi, ecx */
  esi = ecx;
/* 41aa51: call 0x41a99f */
  esp -= 4; W32(esp, 0x41aa56u); SPILL(); f_41a99f(); if (g_unwind) return; RELOAD();
/* 41aa56: mov dword ptr [esi], 0x439a00 */
  W32((uint32_t)(esi), 0x439a00u);
/* 41aa5c: mov eax, esi */
  eax = esi;
/* 41aa5e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41aa5f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_41aa62(void) {
  LOAD_REGS();
L_41aa62: /* 41aa62: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41aa63: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 41aa67: mov esi, ecx */
  esi = ecx;
/* 41aa69: call 0x41a9dc */
  esp -= 4; W32(esp, 0x41aa6eu); SPILL(); f_41a9dc(); if (g_unwind) return; RELOAD();
/* 41aa6e: mov dword ptr [esi], 0x439a00 */
  W32((uint32_t)(esi), 0x439a00u);
/* 41aa74: mov eax, esi */
  eax = esi;
/* 41aa76: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41aa77: ret 4 */
  esp += 8; SPILL(); return;
}

void f_41aa7a(void) {
  LOAD_REGS();
L_41aa7a: /* 41aa7a: mov dword ptr [ecx], 0x439a00 */
  W32((uint32_t)(ecx), 0x439a00u);
/* 41aa80: jmp 0x41aa26 */
  SPILL(); f_41aa26(); return;
}

void f_41aa82(void) {
  LOAD_REGS();
L_41aa82: /* 41aa82: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41aa83: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 41aa87: mov esi, ecx */
  esi = ecx;
/* 41aa89: call 0x41a99f */
  esp -= 4; W32(esp, 0x41aa8eu); SPILL(); f_41a99f(); if (g_unwind) return; RELOAD();
/* 41aa8e: mov dword ptr [esi], 0x439a00 */
  W32((uint32_t)(esi), 0x439a00u);
/* 41aa94: mov eax, esi */
  eax = esi;
/* 41aa96: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41aa97: ret 4 */
  esp += 8; SPILL(); return;
}

void f_41aa9a(void) {
  LOAD_REGS();
L_41aa9a: /* 41aa9a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41aa9b: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 41aa9f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41aaa0: mov esi, ecx */
  esi = ecx;
/* 41aaa2: call 0x41a99f */
  esp -= 4; W32(esp, 0x41aaa7u); SPILL(); f_41a99f(); if (g_unwind) return; RELOAD();
/* 41aaa7: mov dword ptr [esi], 0x439a54 */
  W32((uint32_t)(esi), 0x439a54u);
/* 41aaad: mov eax, esi */
  eax = esi;
/* 41aaaf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41aab0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_41aab3(void) {
  LOAD_REGS();
L_41aab3: /* 41aab3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41aab4: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 41aab8: mov esi, ecx */
  esi = ecx;
/* 41aaba: call 0x41a9dc */
  esp -= 4; W32(esp, 0x41aabfu); SPILL(); f_41a9dc(); if (g_unwind) return; RELOAD();
/* 41aabf: mov dword ptr [esi], 0x439a54 */
  W32((uint32_t)(esi), 0x439a54u);
/* 41aac5: mov eax, esi */
  eax = esi;
/* 41aac7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41aac8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_41aacb(void) {
  LOAD_REGS();
L_41aacb: /* 41aacb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41aacc: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 41aad0: mov esi, ecx */
  esi = ecx;
/* 41aad2: call 0x41aa9a */
  esp -= 4; W32(esp, 0x41aad7u); SPILL(); f_41aa9a(); if (g_unwind) return; RELOAD();
/* 41aad7: mov dword ptr [esi], 0x43def4 */
  W32((uint32_t)(esi), 0x43def4u);
/* 41aadd: mov eax, esi */
  eax = esi;
/* 41aadf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41aae0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_41aae3(void) {
  LOAD_REGS();
L_41aae3: /* 41aae3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41aae4: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 41aae8: mov esi, ecx */
  esi = ecx;
/* 41aaea: call 0x41aab3 */
  esp -= 4; W32(esp, 0x41aaefu); SPILL(); f_41aab3(); if (g_unwind) return; RELOAD();
/* 41aaef: mov dword ptr [esi], 0x43def4 */
  W32((uint32_t)(esi), 0x43def4u);
/* 41aaf5: mov eax, esi */
  eax = esi;
/* 41aaf7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41aaf8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_41aafb(void) {
  LOAD_REGS();
L_41aafb: /* 41aafb: mov dword ptr [ecx], 0x439a54 */
  W32((uint32_t)(ecx), 0x439a54u);
/* 41ab01: jmp 0x41aa26 */
  SPILL(); f_41aa26(); return;
}

void f_41ab06(void) {
  LOAD_REGS();
L_41ab06: /* 41ab06: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41ab07: mov esi, ecx */
  esi = ecx;
/* 41ab09: call 0x41aa26 */
  esp -= 4; W32(esp, 0x41ab0eu); SPILL(); f_41aa26(); if (g_unwind) return; RELOAD();
/* 41ab0e: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41ab13: je 0x41ab1c */
  if (zf) goto L_41ab1c;
L_41ab15: /* 41ab15: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41ab16: call 0x401156 */
  esp -= 4; W32(esp, 0x41ab1bu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 41ab1b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_41ab1c: /* 41ab1c: mov eax, esi */
  eax = esi;
/* 41ab1e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41ab1f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_41ab22(void) {
  LOAD_REGS();
L_41ab22: /* 41ab22: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41ab23: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 41ab27: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41ab2a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41ab2b: mov esi, ecx */
  esi = ecx;
/* 41ab2d: je 0x41ab53 */
  if (zf) goto L_41ab53;
L_41ab2f: /* 41ab2f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41ab30: push 0x41aa26 */
  { uint32_t v = 0x41aa26u; esp -= 4; W32(esp, v); }
/* 41ab35: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 41ab38: push dword ptr [edi] */
  { uint32_t v = R32((uint32_t)(edi)); esp -= 4; W32(esp, v); }
/* 41ab3a: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 41ab3c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41ab3d: call 0x420d4d */
  esp -= 4; W32(esp, 0x41ab42u); SPILL(); f_420d4d(); if (g_unwind) return; RELOAD();
/* 41ab42: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41ab45: je 0x41ab4e */
  if (zf) goto L_41ab4e;
L_41ab47: /* 41ab47: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41ab48: call 0x401156 */
  esp -= 4; W32(esp, 0x41ab4du); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 41ab4d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_41ab4e: /* 41ab4e: mov eax, edi */
  eax = edi;
/* 41ab50: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 41ab51: jmp 0x41ab68 */
  goto L_41ab68;
L_41ab53: /* 41ab53: mov ecx, esi */
  ecx = esi;
/* 41ab55: call 0x41aa26 */
  esp -= 4; W32(esp, 0x41ab5au); SPILL(); f_41aa26(); if (g_unwind) return; RELOAD();
/* 41ab5a: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41ab5d: je 0x41ab66 */
  if (zf) goto L_41ab66;
L_41ab5f: /* 41ab5f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41ab60: call 0x401156 */
  esp -= 4; W32(esp, 0x41ab65u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 41ab65: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_41ab66: /* 41ab66: mov eax, esi */
  eax = esi;
L_41ab68: /* 41ab68: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41ab69: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 41ab6a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_41ab6d(void) {
  LOAD_REGS();
L_41ab6d: /* 41ab6d: push 0x43fcf0 */
  { uint32_t v = 0x43fcf0u; esp -= 4; W32(esp, v); }
/* 41ab72: call 0x41aa49 */
  esp -= 4; W32(esp, 0x41ab77u); SPILL(); f_41aa49(); if (g_unwind) return; RELOAD();
/* 41ab77: ret  */
  esp += 4; SPILL(); return;
}

void f_41ab78(void) {
  LOAD_REGS();
L_41ab78: /* 41ab78: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41ab79: mov esi, ecx */
  esi = ecx;
/* 41ab7b: call 0x41aa7a */
  esp -= 4; W32(esp, 0x41ab80u); SPILL(); f_41aa7a(); if (g_unwind) return; RELOAD();
/* 41ab80: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41ab85: je 0x41ab8e */
  if (zf) goto L_41ab8e;
L_41ab87: /* 41ab87: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41ab88: call 0x401156 */
  esp -= 4; W32(esp, 0x41ab8du); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 41ab8d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_41ab8e: /* 41ab8e: mov eax, esi */
  eax = esi;
/* 41ab90: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41ab91: ret 4 */
  esp += 8; SPILL(); return;
}

void f_41ab94(void) {
  LOAD_REGS();
L_41ab94: /* 41ab94: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41ab95: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 41ab99: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41ab9c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41ab9d: mov esi, ecx */
  esi = ecx;
/* 41ab9f: je 0x41abc5 */
  if (zf) goto L_41abc5;
L_41aba1: /* 41aba1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41aba2: push 0x41aa7a */
  { uint32_t v = 0x41aa7au; esp -= 4; W32(esp, v); }
/* 41aba7: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 41abaa: push dword ptr [edi] */
  { uint32_t v = R32((uint32_t)(edi)); esp -= 4; W32(esp, v); }
/* 41abac: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 41abae: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41abaf: call 0x420d4d */
  esp -= 4; W32(esp, 0x41abb4u); SPILL(); f_420d4d(); if (g_unwind) return; RELOAD();
/* 41abb4: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41abb7: je 0x41abc0 */
  if (zf) goto L_41abc0;
L_41abb9: /* 41abb9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41abba: call 0x401156 */
  esp -= 4; W32(esp, 0x41abbfu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 41abbf: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_41abc0: /* 41abc0: mov eax, edi */
  eax = edi;
/* 41abc2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 41abc3: jmp 0x41abda */
  goto L_41abda;
L_41abc5: /* 41abc5: mov ecx, esi */
  ecx = esi;
/* 41abc7: call 0x41aa7a */
  esp -= 4; W32(esp, 0x41abccu); SPILL(); f_41aa7a(); if (g_unwind) return; RELOAD();
/* 41abcc: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41abcf: je 0x41abd8 */
  if (zf) goto L_41abd8;
L_41abd1: /* 41abd1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41abd2: call 0x401156 */
  esp -= 4; W32(esp, 0x41abd7u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 41abd7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_41abd8: /* 41abd8: mov eax, esi */
  eax = esi;
L_41abda: /* 41abda: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41abdb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 41abdc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_41abdf(void) {
  LOAD_REGS();
L_41abdf: /* 41abdf: push 0x43fcfc */
  { uint32_t v = 0x43fcfcu; esp -= 4; W32(esp, v); }
/* 41abe4: call 0x41aa9a */
  esp -= 4; W32(esp, 0x41abe9u); SPILL(); f_41aa9a(); if (g_unwind) return; RELOAD();
/* 41abe9: ret  */
  esp += 4; SPILL(); return;
}

void f_41abea(void) {
  LOAD_REGS();
L_41abea: /* 41abea: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41abeb: mov esi, ecx */
  esi = ecx;
/* 41abed: call 0x41aafb */
  esp -= 4; W32(esp, 0x41abf2u); SPILL(); f_41aafb(); if (g_unwind) return; RELOAD();
/* 41abf2: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41abf7: je 0x41ac00 */
  if (zf) goto L_41ac00;
L_41abf9: /* 41abf9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41abfa: call 0x401156 */
  esp -= 4; W32(esp, 0x41abffu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 41abff: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_41ac00: /* 41ac00: mov eax, esi */
  eax = esi;
/* 41ac02: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41ac03: ret 4 */
  esp += 8; SPILL(); return;
}

void f_41ac06(void) {
  LOAD_REGS();
L_41ac06: /* 41ac06: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41ac07: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 41ac0b: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41ac0e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41ac0f: mov esi, ecx */
  esi = ecx;
/* 41ac11: je 0x41ac37 */
  if (zf) goto L_41ac37;
L_41ac13: /* 41ac13: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41ac14: push 0x41aafb */
  { uint32_t v = 0x41aafbu; esp -= 4; W32(esp, v); }
/* 41ac19: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 41ac1c: push dword ptr [edi] */
  { uint32_t v = R32((uint32_t)(edi)); esp -= 4; W32(esp, v); }
/* 41ac1e: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 41ac20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41ac21: call 0x420d4d */
  esp -= 4; W32(esp, 0x41ac26u); SPILL(); f_420d4d(); if (g_unwind) return; RELOAD();
/* 41ac26: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41ac29: je 0x41ac32 */
  if (zf) goto L_41ac32;
L_41ac2b: /* 41ac2b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41ac2c: call 0x401156 */
  esp -= 4; W32(esp, 0x41ac31u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 41ac31: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_41ac32: /* 41ac32: mov eax, edi */
  eax = edi;
/* 41ac34: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 41ac35: jmp 0x41ac4c */
  goto L_41ac4c;
L_41ac37: /* 41ac37: mov ecx, esi */
  ecx = esi;
/* 41ac39: call 0x41aafb */
  esp -= 4; W32(esp, 0x41ac3eu); SPILL(); f_41aafb(); if (g_unwind) return; RELOAD();
/* 41ac3e: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41ac41: je 0x41ac4a */
  if (zf) goto L_41ac4a;
L_41ac43: /* 41ac43: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41ac44: call 0x401156 */
  esp -= 4; W32(esp, 0x41ac49u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 41ac49: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_41ac4a: /* 41ac4a: mov eax, esi */
  eax = esi;
L_41ac4c: /* 41ac4c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41ac4d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 41ac4e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_41ac51(void) {
  LOAD_REGS();
L_41ac51: /* 41ac51: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41ac52: mov esi, ecx */
  esi = ecx;
/* 41ac54: cmp esi, dword ptr [esp + 8] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41ac58: je 0x41ac6a */
  if (zf) goto L_41ac6a;
L_41ac5a: /* 41ac5a: call 0x41aa26 */
  esp -= 4; W32(esp, 0x41ac5fu); SPILL(); f_41aa26(); if (g_unwind) return; RELOAD();
/* 41ac5f: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 41ac63: mov ecx, esi */
  ecx = esi;
/* 41ac65: call 0x41a9dc */
  esp -= 4; W32(esp, 0x41ac6au); SPILL(); f_41a9dc(); if (g_unwind) return; RELOAD();
L_41ac6a: /* 41ac6a: mov eax, esi */
  eax = esi;
/* 41ac6c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41ac6d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_41ac70(void) {
  LOAD_REGS();
L_41ac70: /* 41ac70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41ac71: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 41ac75: mov esi, ecx */
  esi = ecx;
/* 41ac77: call 0x41ac51 */
  esp -= 4; W32(esp, 0x41ac7cu); SPILL(); f_41ac51(); if (g_unwind) return; RELOAD();
/* 41ac7c: mov eax, esi */
  eax = esi;
/* 41ac7e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41ac7f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_41ac82(void) {
  LOAD_REGS();
L_41ac82: /* 41ac82: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41ac83: mov esi, ecx */
  esi = ecx;
/* 41ac85: push 0xe */
  { uint32_t v = 0xeu; esp -= 4; W32(esp, v); }
/* 41ac87: mov dword ptr [esi], 0x43df4c */
  W32((uint32_t)(esi), 0x43df4cu);
/* 41ac8d: call 0x4011b7 */
  esp -= 4; W32(esp, 0x41ac92u); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 41ac92: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 41ac95: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41ac97: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41ac98: je 0x41aca1 */
  if (zf) goto L_41aca1;
L_41ac9a: /* 41ac9a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41ac9b: call 0x401156 */
  esp -= 4; W32(esp, 0x41aca0u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 41aca0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_41aca1: /* 41aca1: push 0xe */
  { uint32_t v = 0xeu; esp -= 4; W32(esp, v); }
/* 41aca3: call 0x4011d9 */
  esp -= 4; W32(esp, 0x41aca8u); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 41aca8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41aca9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41acaa: ret  */
  esp += 4; SPILL(); return;
}

void f_41acab(void) {
  LOAD_REGS();
L_41acab: /* 41acab: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 41acaf: add ecx, 9 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x9u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 41acb2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41acb3: add eax, 9 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x9u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 41acb6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41acb7: call 0x406182 */
  esp -= 4; W32(esp, 0x41acbcu); SPILL(); f_406182(); if (g_unwind) return; RELOAD();
/* 41acbc: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 41acbe: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41acbf: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 41acc1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41acc2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 41acc3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_41acc6(void) {
  LOAD_REGS();
L_41acc6: /* 41acc6: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 41acca: add ecx, 9 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x9u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 41accd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41acce: add eax, 9 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x9u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 41acd1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41acd2: call 0x406182 */
  esp -= 4; W32(esp, 0x41acd7u); SPILL(); f_406182(); if (g_unwind) return; RELOAD();
/* 41acd7: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 41acd9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41acda: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 41acdc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41acdd: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 41acdf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_41ace2(void) {
  LOAD_REGS();
L_41ace2: /* 41ace2: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 41ace6: add ecx, 9 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x9u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 41ace9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41acea: add eax, 9 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x9u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 41aced: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41acee: call 0x406182 */
  esp -= 4; W32(esp, 0x41acf3u); SPILL(); f_406182(); if (g_unwind) return; RELOAD();
/* 41acf3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41acf4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41acf5: xor ecx, ecx */
  ecx = 0;
/* 41acf7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 41acf9: setg cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((!zf && sf == of)) ? 1 : 0) & 0xffu);
/* 41acfc: mov eax, ecx */
  eax = ecx;
/* 41acfe: ret 4 */
  esp += 8; SPILL(); return;
}

void f_41ad01(void) {
  LOAD_REGS();
L_41ad01: /* 41ad01: lea eax, [ecx + 8] */
  eax = (uint32_t)(ecx + 0x8u);
/* 41ad04: ret  */
  esp += 4; SPILL(); return;
}

void f_41ad05(void) {
  LOAD_REGS();
L_41ad05: /* 41ad05: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41ad06: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 41ad0a: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41ad0d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41ad0e: mov esi, ecx */
  esi = ecx;
/* 41ad10: je 0x41ad36 */
  if (zf) goto L_41ad36;
L_41ad12: /* 41ad12: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41ad13: push 0x41ac82 */
  { uint32_t v = 0x41ac82u; esp -= 4; W32(esp, v); }
/* 41ad18: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 41ad1b: push dword ptr [edi] */
  { uint32_t v = R32((uint32_t)(edi)); esp -= 4; W32(esp, v); }
/* 41ad1d: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 41ad1f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41ad20: call 0x420d4d */
  esp -= 4; W32(esp, 0x41ad25u); SPILL(); f_420d4d(); if (g_unwind) return; RELOAD();
/* 41ad25: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41ad28: je 0x41ad31 */
  if (zf) goto L_41ad31;
L_41ad2a: /* 41ad2a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41ad2b: call 0x401156 */
  esp -= 4; W32(esp, 0x41ad30u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 41ad30: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_41ad31: /* 41ad31: mov eax, edi */
  eax = edi;
/* 41ad33: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 41ad34: jmp 0x41ad4b */
  goto L_41ad4b;
L_41ad36: /* 41ad36: mov ecx, esi */
  ecx = esi;
/* 41ad38: call 0x41ac82 */
  esp -= 4; W32(esp, 0x41ad3du); SPILL(); f_41ac82(); if (g_unwind) return; RELOAD();
/* 41ad3d: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41ad40: je 0x41ad49 */
  if (zf) goto L_41ad49;
L_41ad42: /* 41ad42: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41ad43: call 0x401156 */
  esp -= 4; W32(esp, 0x41ad48u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 41ad48: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_41ad49: /* 41ad49: mov eax, esi */
  eax = esi;
L_41ad4b: /* 41ad4b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41ad4c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 41ad4d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_41ad50(void) {
  LOAD_REGS();
L_41ad50: /* 41ad50: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 41ad53: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41ad55: je 0x41ad9b */
  if (zf) goto L_41ad9b;
L_41ad57: /* 41ad57: lea edx, [eax + 8] */
  edx = (uint32_t)(eax + 0x8u);
/* 41ad5a: cmp byte ptr [edx], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41ad5d: je 0x41ad9b */
  if (zf) goto L_41ad9b;
L_41ad5f: /* 41ad5f: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 41ad62: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41ad64: je 0x41ad76 */
  if (zf) goto L_41ad76;
L_41ad66: /* 41ad66: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 41ad69: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41ad6a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 41ad6b: call 0x406182 */
  esp -= 4; W32(esp, 0x41ad70u); SPILL(); f_406182(); if (g_unwind) return; RELOAD();
/* 41ad70: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41ad72: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41ad73: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41ad74: jne 0x41ad98 */
  if (!zf) goto L_41ad98;
L_41ad76: /* 41ad76: test byte ptr [edi], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41ad79: je 0x41ad80 */
  if (zf) goto L_41ad80;
L_41ad7b: /* 41ad7b: test byte ptr [esi], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41ad7e: je 0x41ad98 */
  if (zf) goto L_41ad98;
L_41ad80: /* 41ad80: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 41ad84: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 41ad86: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41ad88: je 0x41ad8f */
  if (zf) goto L_41ad8f;
L_41ad8a: /* 41ad8a: test byte ptr [esi], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41ad8d: je 0x41ad98 */
  if (zf) goto L_41ad98;
L_41ad8f: /* 41ad8f: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41ad91: je 0x41ad9b */
  if (zf) goto L_41ad9b;
L_41ad93: /* 41ad93: test byte ptr [esi], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41ad96: jne 0x41ad9b */
  if (!zf) goto L_41ad9b;
L_41ad98: /* 41ad98: xor eax, eax */
  eax = 0;
/* 41ad9a: ret  */
  esp += 4; SPILL(); return;
L_41ad9b: /* 41ad9b: xor eax, eax */
  eax = 0;
/* 41ad9d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 41ad9e: ret  */
  esp += 4; SPILL(); return;
}

void f_41ad9f(void) {
  LOAD_REGS();
L_41ad9f: /* 41ad9f: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 41ada1: cmp dword ptr [eax], 0xe06d7363 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0xe06d7363u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41ada7: je 0x41adac */
  if (zf) goto L_41adac;
L_41ada9: /* 41ada9: xor eax, eax */
  eax = 0;
/* 41adab: ret  */
  esp += 4; SPILL(); return;
L_41adac: /* 41adac: call 0x40137f */
  esp -= 4; W32(esp, 0x41adb1u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 41adb1: and dword ptr [eax + 0x80], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x80u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x80u), r);
  }
/* 41adb8: jmp 0x41b959 */
  SPILL(); f_41b959(); return;
}

void f_41adbd(void) {
  LOAD_REGS();
L_41adbd: /* 41adbd: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 41adbf: push 0x43fd08 */
  { uint32_t v = 0x43fd08u; esp -= 4; W32(esp, v); }
/* 41adc4: call 0x40101f */
  esp -= 4; W32(esp, 0x41adc9u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 41adc9: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 41adcc: mov esi, dword ptr [ebx + 8] */
  esi = R32((uint32_t)(ebx + 0x8u));
/* 41adcf: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 41add2: call 0x40137f */
  esp -= 4; W32(esp, 0x41add7u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 41add7: add eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 41addc: inc dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax), r);
  }
/* 41adde: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 41ade2: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
L_41ade5: /* 41ade5: cmp esi, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41ade8: je 0x41ae4e */
  if (zf) goto L_41ae4e;
L_41adea: /* 41adea: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41aded: jle 0x41adf4 */
  if ((zf || sf != of)) goto L_41adf4;
L_41adef: /* 41adef: cmp esi, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41adf2: jl 0x41adf9 */
  if ((sf != of)) goto L_41adf9;
L_41adf4: /* 41adf4: call 0x41b9a7 */
  esp -= 4; W32(esp, 0x41adf9u); SPILL(); f_41b9a7(); if (g_unwind) return; RELOAD();
L_41adf9: /* 41adf9: mov eax, esi */
  eax = esi;
/* 41adfb: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 41adfe: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 41ae01: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 41ae03: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 41ae05: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 41ae08: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 41ae0f: cmp dword ptr [ecx + 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41ae13: je 0x41ae2a */
  if (zf) goto L_41ae2a;
L_41ae15: /* 41ae15: mov dword ptr [ebx + 8], esi */
  W32((uint32_t)(ebx + 0x8u), esi);
/* 41ae18: push 0x103 */
  { uint32_t v = 0x103u; esp -= 4; W32(esp, v); }
/* 41ae1d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41ae1e: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 41ae21: push dword ptr [ecx + eax + 4] */
  { uint32_t v = R32((uint32_t)(ecx + eax + 0x4u)); esp -= 4; W32(esp, v); }
/* 41ae25: call 0x407a0a */
  esp -= 4; W32(esp, 0x41ae2au); SPILL(); f_407a0a(); if (g_unwind) return; RELOAD();
L_41ae2a: /* 41ae2a: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 41ae2e: jmp 0x41ae49 */
  goto L_41ae49;
L_41ae49: /* 41ae49: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 41ae4c: jmp 0x41ade5 */
  goto L_41ade5;
L_41ae4e: /* 41ae4e: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 41ae52: call 0x41ae70 */
  esp -= 4; W32(esp, 0x41ae57u); SPILL(); f_41ae70(); if (g_unwind) return; RELOAD();
/* 41ae57: cmp esi, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41ae5a: je 0x41ae61 */
  if (zf) goto L_41ae61;
L_41ae5c: /* 41ae5c: call 0x41b9a7 */
  esp -= 4; W32(esp, 0x41ae61u); SPILL(); f_41b9a7(); if (g_unwind) return; RELOAD();
L_41ae61: /* 41ae61: mov dword ptr [ebx + 8], esi */
  W32((uint32_t)(ebx + 0x8u), esi);
/* 41ae64: call 0x40105a */
  esp -= 4; W32(esp, 0x41ae69u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 41ae69: ret  */
  esp += 4; SPILL(); return;
}

void f_41ae30(void) {
  LOAD_REGS();
L_41ae30: /* 41ae30: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 41ae33: call 0x41ad9f */
  esp -= 4; W32(esp, 0x41ae38u); SPILL(); f_41ad9f(); if (g_unwind) return; RELOAD();
/* 41ae38: ret  */
  esp += 4; SPILL(); return;
}

void f_41ae39(void) {
  LOAD_REGS();
  goto L_41ae39;
L_41ade5: /* 41ade5: cmp esi, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41ade8: je 0x41ae4e */
  if (zf) goto L_41ae4e;
L_41adea: /* 41adea: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41aded: jle 0x41adf4 */
  if ((zf || sf != of)) goto L_41adf4;
L_41adef: /* 41adef: cmp esi, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41adf2: jl 0x41adf9 */
  if ((sf != of)) goto L_41adf9;
L_41adf4: /* 41adf4: call 0x41b9a7 */
  esp -= 4; W32(esp, 0x41adf9u); SPILL(); f_41b9a7(); if (g_unwind) return; RELOAD();
L_41adf9: /* 41adf9: mov eax, esi */
  eax = esi;
/* 41adfb: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 41adfe: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 41ae01: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 41ae03: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 41ae05: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 41ae08: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 41ae0f: cmp dword ptr [ecx + 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41ae13: je 0x41ae2a */
  if (zf) goto L_41ae2a;
L_41ae15: /* 41ae15: mov dword ptr [ebx + 8], esi */
  W32((uint32_t)(ebx + 0x8u), esi);
/* 41ae18: push 0x103 */
  { uint32_t v = 0x103u; esp -= 4; W32(esp, v); }
/* 41ae1d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41ae1e: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 41ae21: push dword ptr [ecx + eax + 4] */
  { uint32_t v = R32((uint32_t)(ecx + eax + 0x4u)); esp -= 4; W32(esp, v); }
/* 41ae25: call 0x407a0a */
  esp -= 4; W32(esp, 0x41ae2au); SPILL(); f_407a0a(); if (g_unwind) return; RELOAD();
L_41ae2a: /* 41ae2a: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 41ae2e: jmp 0x41ae49 */
  goto L_41ae49;
L_41ae39: /* 41ae39: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
/* 41ae3c: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 41ae40: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 41ae43: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 41ae46: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
L_41ae49: /* 41ae49: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 41ae4c: jmp 0x41ade5 */
  goto L_41ade5;
L_41ae4e: /* 41ae4e: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 41ae52: call 0x41ae70 */
  esp -= 4; W32(esp, 0x41ae57u); SPILL(); f_41ae70(); if (g_unwind) return; RELOAD();
/* 41ae57: cmp esi, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41ae5a: je 0x41ae61 */
  if (zf) goto L_41ae61;
L_41ae5c: /* 41ae5c: call 0x41b9a7 */
  esp -= 4; W32(esp, 0x41ae61u); SPILL(); f_41b9a7(); if (g_unwind) return; RELOAD();
L_41ae61: /* 41ae61: mov dword ptr [ebx + 8], esi */
  W32((uint32_t)(ebx + 0x8u), esi);
/* 41ae64: call 0x40105a */
  esp -= 4; W32(esp, 0x41ae69u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 41ae69: ret  */
  esp += 4; SPILL(); return;
}

void f_41ae6a(void) {
  LOAD_REGS();
L_41ae6a: /* 41ae6a: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 41ae6d: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
  SPILL(); f_41ae70(); return;
}

void f_41ae70(void) {
  LOAD_REGS();
L_41ae70: /* 41ae70: call 0x40137f */
  esp -= 4; W32(esp, 0x41ae75u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 41ae75: cmp dword ptr [eax + 0x80], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x80u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41ae7c: jle 0x41ae8a */
  if ((zf || sf != of)) goto L_41ae8a;
L_41ae7e: /* 41ae7e: call 0x40137f */
  esp -= 4; W32(esp, 0x41ae83u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 41ae83: add eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 41ae88: dec dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(eax), r);
  }
L_41ae8a: /* 41ae8a: ret  */
  esp += 4; SPILL(); return;
}

void f_41ae8b(void) {
  LOAD_REGS();
L_41ae8b: /* 41ae8b: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 41ae8d: push 0x43fd20 */
  { uint32_t v = 0x43fd20u; esp -= 4; W32(esp, v); }
/* 41ae92: call 0x40101f */
  esp -= 4; W32(esp, 0x41ae97u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 41ae97: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 41ae9a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41ae9c: je 0x41aeb9 */
  if (zf) goto L_41aeb9;
L_41ae9e: /* 41ae9e: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 41aea1: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 41aea4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41aea6: je 0x41aeb9 */
  if (zf) goto L_41aeb9;
L_41aea8: /* 41aea8: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 41aeac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41aead: push dword ptr [eax + 0x18] */
  { uint32_t v = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, v); }
/* 41aeb0: call 0x41ba36 */
  esp -= 4; W32(esp, 0x41aeb5u); SPILL(); f_41ba36(); if (g_unwind) return; RELOAD();
/* 41aeb5: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
L_41aeb9: /* 41aeb9: call 0x40105a */
  esp -= 4; W32(esp, 0x41aebeu); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 41aebe: ret  */
  esp += 4; SPILL(); return;
}

void f_41aebf(void) {
  LOAD_REGS();
L_41aebf: /* 41aebf: xor eax, eax */
  eax = 0;
/* 41aec1: cmp byte ptr [ebp + 0xc], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xcu))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41aec4: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 41aec7: ret  */
  esp += 4; SPILL(); return;
}

void f_41aec8(void) {
  LOAD_REGS();
L_41aec8: /* 41aec8: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
/* 41aecb: jmp 0x41b959 */
  SPILL(); f_41b959(); return;
}

void f_41aed0(void) {
  LOAD_REGS();
L_41aed0: /* 41aed0: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 41aed3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41aed4: mov esi, eax */
  esi = eax;
/* 41aed6: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 41aed8: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 41aeda: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 41aedc: jl 0x41aeeb */
  if ((sf != of)) goto L_41aeeb;
L_41aede: /* 41aede: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 41aee1: mov esi, dword ptr [edx + esi] */
  esi = R32((uint32_t)(edx + esi));
/* 41aee4: mov ecx, dword ptr [esi + ecx] */
  ecx = R32((uint32_t)(esi + ecx));
/* 41aee7: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 41aee9: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_41aeeb: /* 41aeeb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41aeec: ret  */
  esp += 4; SPILL(); return;
}

void f_41aeed(void) {
  LOAD_REGS();
L_41aeed: /* 41aeed: call 0x40137f */
  esp -= 4; W32(esp, 0x41aef2u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 41aef2: xor ecx, ecx */
  ecx = 0;
/* 41aef4: cmp dword ptr [eax + 0x80], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x80u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41aefa: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 41aefd: mov al, cl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* 41aeff: ret  */
  esp += 4; SPILL(); return;
}

void f_41af00(void) {
  LOAD_REGS();
L_41af00: /* 41af00: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 41af04: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41af06: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41af07: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41af08: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 41af0c: je 0x41af64 */
  if (zf) goto L_41af64;
L_41af0e: /* 41af0e: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 41af10: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41af12: je 0x41af64 */
  if (zf) goto L_41af64;
L_41af14: /* 41af14: cmp dword ptr [esi], 0xe06d7363 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0xe06d7363u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41af1a: jne 0x41af39 */
  if (!zf) goto L_41af39;
L_41af1c: /* 41af1c: cmp dword ptr [esi + 0x10], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x10u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41af20: jne 0x41af39 */
  if (!zf) goto L_41af39;
L_41af22: /* 41af22: cmp dword ptr [esi + 0x14], 0x19930520 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x14u))); uint32_t b = (uint32_t)(0x19930520u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41af29: jne 0x41af39 */
  if (!zf) goto L_41af39;
L_41af2b: /* 41af2b: cmp dword ptr [esi + 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x1cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41af2f: jne 0x41af39 */
  if (!zf) goto L_41af39;
L_41af31: /* 41af31: call 0x40137f */
  esp -= 4; W32(esp, 0x41af36u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 41af36: mov esi, dword ptr [eax + 0x78] */
  esi = R32((uint32_t)(eax + 0x78u));
L_41af39: /* 41af39: push dword ptr [esi + 0x18] */
  { uint32_t v = R32((uint32_t)(esi + 0x18u)); esp -= 4; W32(esp, v); }
/* 41af3c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41af3d: call 0x41bbeb */
  esp -= 4; W32(esp, 0x41af42u); SPILL(); f_41bbeb(); if (g_unwind) return; RELOAD();
/* 41af42: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41af43: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41af44: call 0x40137f */
  esp -= 4; W32(esp, 0x41af49u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 41af49: mov eax, dword ptr [eax + 0x78] */
  eax = R32((uint32_t)(eax + 0x78u));
/* 41af4c: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 41af4f: call 0x40137f */
  esp -= 4; W32(esp, 0x41af54u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 41af54: mov eax, dword ptr [eax + 0x7c] */
  eax = R32((uint32_t)(eax + 0x7cu));
/* 41af57: mov dword ptr [edi + 0xc], eax */
  W32((uint32_t)(edi + 0xcu), eax);
/* 41af5a: call 0x40137f */
  esp -= 4; W32(esp, 0x41af5fu); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 41af5f: mov dword ptr [eax + 0x78], esi */
  W32((uint32_t)(eax + 0x78u), esi);
/* 41af62: jmp 0x41af6c */
  goto L_41af6c;
L_41af64: /* 41af64: or dword ptr [edi + 8], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x8u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(edi + 0x8u), r);
  }
/* 41af68: or dword ptr [edi + 0xc], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0xcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(edi + 0xcu), r);
  }
L_41af6c: /* 41af6c: call 0x40137f */
  esp -= 4; W32(esp, 0x41af71u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 41af71: add eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 41af76: dec dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(eax), r);
  }
/* 41af78: call 0x40137f */
  esp -= 4; W32(esp, 0x41af7du); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 41af7d: cmp dword ptr [eax + 0x80], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x80u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41af84: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 41af85: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41af86: jge 0x41af94 */
  if ((sf == of)) goto L_41af94;
L_41af88: /* 41af88: call 0x40137f */
  esp -= 4; W32(esp, 0x41af8du); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 41af8d: and dword ptr [eax + 0x80], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x80u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x80u), r);
  }
L_41af94: /* 41af94: xor eax, eax */
  eax = 0;
/* 41af96: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 41af97: ret  */
  esp += 4; SPILL(); return;
}

void f_41af98(void) {
  LOAD_REGS();
L_41af98: /* 41af98: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 41af9c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41af9e: je 0x41afc3 */
  if (zf) goto L_41afc3;
L_41afa0: /* 41afa0: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 41afa2: cmp dword ptr [eax], 0xe06d7363 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0xe06d7363u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41afa8: jne 0x41afc3 */
  if (!zf) goto L_41afc3;
L_41afaa: /* 41afaa: cmp dword ptr [eax + 0x10], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x10u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41afae: jne 0x41afc3 */
  if (!zf) goto L_41afc3;
L_41afb0: /* 41afb0: cmp dword ptr [eax + 0x14], 0x19930520 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(0x19930520u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41afb7: jne 0x41afc3 */
  if (!zf) goto L_41afc3;
L_41afb9: /* 41afb9: cmp dword ptr [eax + 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x1cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41afbd: jne 0x41afc3 */
  if (!zf) goto L_41afc3;
L_41afbf: /* 41afbf: xor eax, eax */
  eax = 0;
/* 41afc1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 41afc2: ret  */
  esp += 4; SPILL(); return;
L_41afc3: /* 41afc3: xor eax, eax */
  eax = 0;
/* 41afc5: ret  */
  esp += 4; SPILL(); return;
}

void f_41afc6(void) {
  LOAD_REGS();
L_41afc6: /* 41afc6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41afc7: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 41afcb: cmp dword ptr [esi + 8], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x8u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41afcf: je 0x41b04a */
  if (zf) goto L_41b04a;
L_41afd1: /* 41afd1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41afd2: call 0x41bc34 */
  esp -= 4; W32(esp, 0x41afd7u); SPILL(); f_41bc34(); if (g_unwind) return; RELOAD();
/* 41afd7: cmp dword ptr [esp + 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41afdc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41afdd: jne 0x41b034 */
  if (!zf) goto L_41b034;
L_41afdf: /* 41afdf: call 0x40137f */
  esp -= 4; W32(esp, 0x41afe4u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 41afe4: mov eax, dword ptr [eax + 0x78] */
  eax = R32((uint32_t)(eax + 0x78u));
/* 41afe7: cmp dword ptr [eax], 0xe06d7363 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0xe06d7363u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41afed: jne 0x41b034 */
  if (!zf) goto L_41b034;
L_41afef: /* 41afef: call 0x40137f */
  esp -= 4; W32(esp, 0x41aff4u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 41aff4: mov eax, dword ptr [eax + 0x78] */
  eax = R32((uint32_t)(eax + 0x78u));
/* 41aff7: cmp dword ptr [eax + 0x10], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x10u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41affb: jne 0x41b034 */
  if (!zf) goto L_41b034;
L_41affd: /* 41affd: call 0x40137f */
  esp -= 4; W32(esp, 0x41b002u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 41b002: mov eax, dword ptr [eax + 0x78] */
  eax = R32((uint32_t)(eax + 0x78u));
/* 41b005: cmp dword ptr [eax + 0x14], 0x19930520 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(0x19930520u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41b00c: jne 0x41b034 */
  if (!zf) goto L_41b034;
L_41b00e: /* 41b00e: call 0x40137f */
  esp -= 4; W32(esp, 0x41b013u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 41b013: mov eax, dword ptr [eax + 0x78] */
  eax = R32((uint32_t)(eax + 0x78u));
/* 41b016: push dword ptr [eax + 0x18] */
  { uint32_t v = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, v); }
/* 41b019: call 0x41bc13 */
  esp -= 4; W32(esp, 0x41b01eu); SPILL(); f_41bc13(); if (g_unwind) return; RELOAD();
/* 41b01e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41b020: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41b021: je 0x41b034 */
  if (zf) goto L_41b034;
L_41b023: /* 41b023: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 41b025: call 0x40137f */
  esp -= 4; W32(esp, 0x41b02au); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 41b02a: push dword ptr [eax + 0x78] */
  { uint32_t v = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, v); }
/* 41b02d: call 0x41ae8b */
  esp -= 4; W32(esp, 0x41b032u); SPILL(); f_41ae8b(); if (g_unwind) return; RELOAD();
/* 41b032: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41b033: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_41b034: /* 41b034: call 0x40137f */
  esp -= 4; W32(esp, 0x41b039u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 41b039: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 41b03c: mov dword ptr [eax + 0x78], ecx */
  W32((uint32_t)(eax + 0x78u), ecx);
/* 41b03f: call 0x40137f */
  esp -= 4; W32(esp, 0x41b044u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 41b044: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 41b047: mov dword ptr [eax + 0x7c], ecx */
  W32((uint32_t)(eax + 0x7cu), ecx);
L_41b04a: /* 41b04a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41b04b: ret  */
  esp += 4; SPILL(); return;
}

void f_41b04c(void) {
  LOAD_REGS();
L_41b04c: /* 41b04c: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 41b04e: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 41b04f: ret  */
  esp += 4; SPILL(); return;
}

void f_41b050(void) {
  LOAD_REGS();
L_41b050: /* 41b050: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 41b052: push 0x43fd30 */
  { uint32_t v = 0x43fd30u; esp -= 4; W32(esp, v); }
/* 41b057: call 0x40101f */
  esp -= 4; W32(esp, 0x41b05cu); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 41b05c: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 41b060: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 41b063: call dword ptr [ebp + 8] */
  { uint32_t t = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, 0x41b066u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 41b066: jmp 0x41b074 */
  goto L_41b074;
L_41b074: /* 41b074: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 41b078: call 0x40105a */
  esp -= 4; W32(esp, 0x41b07du); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 41b07d: ret  */
  esp += 4; SPILL(); return;
}

void f_41b068(void) {
  LOAD_REGS();
L_41b068: /* 41b068: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 41b06b: call 0x41ad9f */
  esp -= 4; W32(esp, 0x41b070u); SPILL(); f_41ad9f(); if (g_unwind) return; RELOAD();
/* 41b070: ret  */
  esp += 4; SPILL(); return;
}

void f_41b071(void) {
  LOAD_REGS();
L_41b071: /* 41b071: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
/* 41b074: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 41b078: call 0x40105a */
  esp -= 4; W32(esp, 0x41b07du); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 41b07d: ret  */
  esp += 4; SPILL(); return;
}

void f_41b07e(void) {
  LOAD_REGS();
L_41b07e: /* 41b07e: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 41b080: push 0x43fd40 */
  { uint32_t v = 0x43fd40u; esp -= 4; W32(esp, v); }
/* 41b085: call 0x40101f */
  esp -= 4; W32(esp, 0x41b08au); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 41b08a: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 41b08e: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 41b091: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 41b094: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 41b097: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 41b09a: call dword ptr [ebp + 8] */
  { uint32_t t = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, 0x41b09du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 41b09d: jmp 0x41b0ab */
  goto L_41b0ab;
L_41b0ab: /* 41b0ab: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 41b0af: call 0x40105a */
  esp -= 4; W32(esp, 0x41b0b4u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 41b0b4: ret  */
  esp += 4; SPILL(); return;
}

void f_41b09f(void) {
  LOAD_REGS();
L_41b09f: /* 41b09f: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 41b0a2: call 0x41ad9f */
  esp -= 4; W32(esp, 0x41b0a7u); SPILL(); f_41ad9f(); if (g_unwind) return; RELOAD();
/* 41b0a7: ret  */
  esp += 4; SPILL(); return;
}

void f_41b0a8(void) {
  LOAD_REGS();
L_41b0a8: /* 41b0a8: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
/* 41b0ab: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 41b0af: call 0x40105a */
  esp -= 4; W32(esp, 0x41b0b4u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 41b0b4: ret  */
  esp += 4; SPILL(); return;
}

void f_41b0b5(void) {
  LOAD_REGS();
L_41b0b5: /* 41b0b5: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 41b0b7: push 0x43fd50 */
  { uint32_t v = 0x43fd50u; esp -= 4; W32(esp, v); }
/* 41b0bc: call 0x40101f */
  esp -= 4; W32(esp, 0x41b0c1u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 41b0c1: mov ebx, ecx */
  ebx = ecx;
/* 41b0c3: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 41b0c6: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 41b0c9: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 41b0cc: and dword ptr [ebp - 0x20], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffe0u), r);
  }
/* 41b0d0: mov eax, dword ptr [edi - 4] */
  eax = R32((uint32_t)(edi + 0xfffffffcu));
/* 41b0d3: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 41b0d6: push dword ptr [esi + 0x18] */
  { uint32_t v = R32((uint32_t)(esi + 0x18u)); esp -= 4; W32(esp, v); }
/* 41b0d9: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 41b0dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41b0dd: call 0x41bbeb */
  esp -= 4; W32(esp, 0x41b0e2u); SPILL(); f_41bbeb(); if (g_unwind) return; RELOAD();
/* 41b0e2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41b0e3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41b0e4: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 41b0e7: call 0x40137f */
  esp -= 4; W32(esp, 0x41b0ecu); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 41b0ec: mov eax, dword ptr [eax + 0x78] */
  eax = R32((uint32_t)(eax + 0x78u));
/* 41b0ef: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 41b0f2: call 0x40137f */
  esp -= 4; W32(esp, 0x41b0f7u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 41b0f7: mov eax, dword ptr [eax + 0x7c] */
  eax = R32((uint32_t)(eax + 0x7cu));
/* 41b0fa: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 41b0fd: call 0x40137f */
  esp -= 4; W32(esp, 0x41b102u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 41b102: mov dword ptr [eax + 0x78], esi */
  W32((uint32_t)(eax + 0x78u), esi);
/* 41b105: call 0x40137f */
  esp -= 4; W32(esp, 0x41b10au); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 41b10a: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 41b10d: mov dword ptr [eax + 0x7c], ecx */
  W32((uint32_t)(eax + 0x7cu), ecx);
/* 41b110: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 41b114: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 41b11b: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 41b11e: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 41b121: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41b122: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 41b125: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41b126: call 0x41bc80 */
  esp -= 4; W32(esp, 0x41b12bu); SPILL(); f_41bc80(); if (g_unwind) return; RELOAD();
/* 41b12b: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41b12e: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 41b131: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 41b135: jmp 0x41b1dd */
  goto L_41b1dd;
L_41b1dd: /* 41b1dd: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 41b1e1: call 0x41b1f8 */
  esp -= 4; W32(esp, 0x41b1e6u); SPILL(); f_41b1f8(); if (g_unwind) return; RELOAD();
/* 41b1e6: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 41b1e9: call 0x40105a */
  esp -= 4; W32(esp, 0x41b1eeu); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 41b1ee: ret  */
  esp += 4; SPILL(); return;
}

void f_41b13a(void) {
  LOAD_REGS();
L_41b13a: /* 41b13a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 41b13d: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 41b13f: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 41b142: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 41b145: cmp dword ptr [eax], 0xe06d7363 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0xe06d7363u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41b14b: jne 0x41b172 */
  if (!zf) goto L_41b172;
L_41b14d: /* 41b14d: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 41b150: cmp dword ptr [eax + 0x10], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x10u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41b154: jne 0x41b172 */
  if (!zf) goto L_41b172;
L_41b156: /* 41b156: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 41b159: cmp dword ptr [eax + 0x14], 0x19930520 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(0x19930520u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41b160: jne 0x41b172 */
  if (!zf) goto L_41b172;
L_41b162: /* 41b162: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 41b165: cmp dword ptr [eax + 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x1cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41b169: mov dword ptr [ebp - 0x40], 1 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x1u);
/* 41b170: je 0x41b179 */
  if (zf) goto L_41b179;
L_41b172: /* 41b172: mov dword ptr [ebp - 0x40], 0 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x0u);
L_41b179: /* 41b179: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 41b17c: ret  */
  esp += 4; SPILL(); return;
}

void f_41b17d(void) {
  LOAD_REGS();
L_41b17d: /* 41b17d: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
/* 41b180: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 41b183: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 41b186: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 41b189: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 41b18c: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 41b18f: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 41b192: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 41b195: mov dword ptr [ebp - 0x4c], edx */
  W32((uint32_t)(ebp + 0xffffffb4u), edx);
/* 41b198: xor edx, edx */
  edx = 0;
L_41b19a: /* 41b19a: mov dword ptr [ebp - 0x50], edx */
  W32((uint32_t)(ebp + 0xffffffb0u), edx);
/* 41b19d: cmp edx, dword ptr [ecx + 0xc] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 41b1a0: jae 0x41b1c6 */
  if (!cf) goto L_41b1c6;
L_41b1a2: /* 41b1a2: lea esi, [edx + edx*4] */
  esi = (uint32_t)(edx + edx*4);
/* 41b1a5: mov ebx, dword ptr [ebp - 0x4c] */
  ebx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 41b1a8: lea esi, [ebx + esi*4] */
  esi = (uint32_t)(ebx + esi*4);
/* 41b1ab: mov ebx, dword ptr [esi + 4] */
  ebx = R32((uint32_t)(esi + 0x4u));
/* 41b1ae: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41b1b0: jle 0x41b1ef */
  if ((zf || sf != of)) goto L_41b1ef;
L_41b1b2: /* 41b1b2: cmp eax, dword ptr [esi + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41b1b5: jg 0x41b1ef */
  if ((!zf && sf == of)) goto L_41b1ef;
L_41b1b7: /* 41b1b7: lea eax, [ebx + 1] */
  eax = (uint32_t)(ebx + 0x1u);
/* 41b1ba: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 41b1bd: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 41b1c0: mov eax, dword ptr [edx + eax*8] */
  eax = R32((uint32_t)(edx + eax*8));
/* 41b1c3: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
L_41b1c6: /* 41b1c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41b1c7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41b1c8: xor esi, esi */
  esi = 0;
/* 41b1ca: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41b1cb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41b1cc: call 0x41adbd */
  esp -= 4; W32(esp, 0x41b1d1u); SPILL(); f_41adbd(); if (g_unwind) return; RELOAD();
/* 41b1d1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41b1d4: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 41b1d7: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 41b1da: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 41b1dd: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 41b1e1: call 0x41b1f8 */
  esp -= 4; W32(esp, 0x41b1e6u); SPILL(); f_41b1f8(); if (g_unwind) return; RELOAD();
/* 41b1e6: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 41b1e9: call 0x40105a */
  esp -= 4; W32(esp, 0x41b1eeu); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 41b1ee: ret  */
  esp += 4; SPILL(); return;
L_41b1ef: /* 41b1ef: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 41b1f0: jmp 0x41b19a */
  goto L_41b19a;
}

void f_41b1ef(void) {
  LOAD_REGS();
  goto L_41b1ef;
L_41b19a: /* 41b19a: mov dword ptr [ebp - 0x50], edx */
  W32((uint32_t)(ebp + 0xffffffb0u), edx);
/* 41b19d: cmp edx, dword ptr [ecx + 0xc] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 41b1a0: jae 0x41b1c6 */
  if (!cf) goto L_41b1c6;
L_41b1a2: /* 41b1a2: lea esi, [edx + edx*4] */
  esi = (uint32_t)(edx + edx*4);
/* 41b1a5: mov ebx, dword ptr [ebp - 0x4c] */
  ebx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 41b1a8: lea esi, [ebx + esi*4] */
  esi = (uint32_t)(ebx + esi*4);
/* 41b1ab: mov ebx, dword ptr [esi + 4] */
  ebx = R32((uint32_t)(esi + 0x4u));
/* 41b1ae: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41b1b0: jle 0x41b1ef */
  if ((zf || sf != of)) goto L_41b1ef;
L_41b1b2: /* 41b1b2: cmp eax, dword ptr [esi + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41b1b5: jg 0x41b1ef */
  if ((!zf && sf == of)) goto L_41b1ef;
L_41b1b7: /* 41b1b7: lea eax, [ebx + 1] */
  eax = (uint32_t)(ebx + 0x1u);
/* 41b1ba: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 41b1bd: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 41b1c0: mov eax, dword ptr [edx + eax*8] */
  eax = R32((uint32_t)(edx + eax*8));
/* 41b1c3: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
L_41b1c6: /* 41b1c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41b1c7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41b1c8: xor esi, esi */
  esi = 0;
/* 41b1ca: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41b1cb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41b1cc: call 0x41adbd */
  esp -= 4; W32(esp, 0x41b1d1u); SPILL(); f_41adbd(); if (g_unwind) return; RELOAD();
/* 41b1d1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41b1d4: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 41b1d7: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 41b1da: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 41b1dd: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 41b1e1: call 0x41b1f8 */
  esp -= 4; W32(esp, 0x41b1e6u); SPILL(); f_41b1f8(); if (g_unwind) return; RELOAD();
/* 41b1e6: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 41b1e9: call 0x40105a */
  esp -= 4; W32(esp, 0x41b1eeu); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 41b1ee: ret  */
  esp += 4; SPILL(); return;
L_41b1ef: /* 41b1ef: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 41b1f0: jmp 0x41b19a */
  goto L_41b19a;
}

void f_41b1f2(void) {
  LOAD_REGS();
L_41b1f2: /* 41b1f2: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 41b1f5: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
  SPILL(); f_41b1f8(); return;
}

void f_41b1f8(void) {
  LOAD_REGS();
L_41b1f8: /* 41b1f8: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 41b1fb: mov dword ptr [edi - 4], eax */
  W32((uint32_t)(edi + 0xfffffffcu), eax);
/* 41b1fe: push dword ptr [ebp - 0x30] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd0u)); esp -= 4; W32(esp, v); }
/* 41b201: call 0x41bc34 */
  esp -= 4; W32(esp, 0x41b206u); SPILL(); f_41bc34(); if (g_unwind) return; RELOAD();
/* 41b206: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41b207: call 0x40137f */
  esp -= 4; W32(esp, 0x41b20cu); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 41b20c: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 41b20f: mov dword ptr [eax + 0x78], ecx */
  W32((uint32_t)(eax + 0x78u), ecx);
/* 41b212: call 0x40137f */
  esp -= 4; W32(esp, 0x41b217u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 41b217: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 41b21a: mov dword ptr [eax + 0x7c], ecx */
  W32((uint32_t)(eax + 0x7cu), ecx);
/* 41b21d: cmp dword ptr [esi], 0xe06d7363 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0xe06d7363u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41b223: jne 0x41b25b */
  if (!zf) goto L_41b25b;
L_41b225: /* 41b225: cmp dword ptr [esi + 0x10], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x10u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41b229: jne 0x41b25b */
  if (!zf) goto L_41b25b;
L_41b22b: /* 41b22b: cmp dword ptr [esi + 0x14], 0x19930520 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x14u))); uint32_t b = (uint32_t)(0x19930520u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41b232: jne 0x41b25b */
  if (!zf) goto L_41b25b;
L_41b234: /* 41b234: cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41b238: jne 0x41b25b */
  if (!zf) goto L_41b25b;
L_41b23a: /* 41b23a: cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41b23e: je 0x41b25b */
  if (zf) goto L_41b25b;
L_41b240: /* 41b240: push dword ptr [esi + 0x18] */
  { uint32_t v = R32((uint32_t)(esi + 0x18u)); esp -= 4; W32(esp, v); }
/* 41b243: call 0x41bc13 */
  esp -= 4; W32(esp, 0x41b248u); SPILL(); f_41bc13(); if (g_unwind) return; RELOAD();
/* 41b248: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41b249: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41b24b: je 0x41b25b */
  if (zf) goto L_41b25b;
L_41b24d: /* 41b24d: call 0x401bbd */
  esp -= 4; W32(esp, 0x41b252u); SPILL(); f_401bbd(); if (g_unwind) return; RELOAD();
/* 41b252: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41b253: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41b254: call 0x41ae8b */
  esp -= 4; W32(esp, 0x41b259u); SPILL(); f_41ae8b(); if (g_unwind) return; RELOAD();
/* 41b259: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41b25a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_41b25b: /* 41b25b: ret  */
  esp += 4; SPILL(); return;
}

void f_41b25c(void) {
  LOAD_REGS();
L_41b25c: /* 41b25c: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 41b25e: push 0x43fd68 */
  { uint32_t v = 0x43fd68u; esp -= 4; W32(esp, v); }
/* 41b263: call 0x40101f */
  esp -= 4; W32(esp, 0x41b268u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 41b268: mov esi, ecx */
  esi = ecx;
/* 41b26a: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 41b26d: mov edi, edx */
  edi = edx;
/* 41b26f: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 41b272: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 41b275: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41b277: je 0x41b3c6 */
  if (zf) goto L_41b3c6;
L_41b27d: /* 41b27d: cmp byte ptr [ecx + 8], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x8u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41b281: je 0x41b3c6 */
  if (zf) goto L_41b3c6;
L_41b287: /* 41b287: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 41b28a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41b28c: jne 0x41b298 */
  if (!zf) goto L_41b298;
L_41b28e: /* 41b28e: test byte ptr [eax + 3], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x3u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41b292: je 0x41b3c6 */
  if (zf) goto L_41b3c6;
L_41b298: /* 41b298: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 41b29a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  }
/* 41b29c: js 0x41b2a2 */
  if (sf) goto L_41b2a2;
L_41b29e: /* 41b29e: lea edi, [ecx + edi + 0xc] */
  edi = (uint32_t)(ecx + edi + 0xcu);
L_41b2a2: /* 41b2a2: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 41b2a6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 41b2a8: push dword ptr [ebx + 0x18] */
  { uint32_t v = R32((uint32_t)(ebx + 0x18u)); esp -= 4; W32(esp, v); }
/* 41b2ab: test al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41b2ad: je 0x41b2e4 */
  if (zf) goto L_41b2e4;
L_41b2af: /* 41b2af: call 0x420df3 */
  esp -= 4; W32(esp, 0x41b2b4u); SPILL(); f_420df3(); if (g_unwind) return; RELOAD();
/* 41b2b4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41b2b5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41b2b6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41b2b8: je 0x41b3bd */
  if (zf) goto L_41b3bd;
L_41b2be: /* 41b2be: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 41b2c0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41b2c1: call 0x420e0f */
  esp -= 4; W32(esp, 0x41b2c6u); SPILL(); f_420e0f(); if (g_unwind) return; RELOAD();
/* 41b2c6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41b2c7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41b2c8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41b2ca: je 0x41b3bd */
  if (zf) goto L_41b3bd;
L_41b2d0: /* 41b2d0: mov eax, dword ptr [ebx + 0x18] */
  eax = R32((uint32_t)(ebx + 0x18u));
/* 41b2d3: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
L_41b2d5: /* 41b2d5: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 41b2d8: call 0x41aed0 */
  esp -= 4; W32(esp, 0x41b2ddu); SPILL(); f_41aed0(); if (g_unwind) return; RELOAD();
/* 41b2dd: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 41b2df: jmp 0x41b3c2 */
  goto L_41b3c2;
L_41b2e4: /* 41b2e4: test byte ptr [esi], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41b2e7: je 0x41b32f */
  if (zf) goto L_41b32f;
L_41b2e9: /* 41b2e9: call 0x420df3 */
  esp -= 4; W32(esp, 0x41b2eeu); SPILL(); f_420df3(); if (g_unwind) return; RELOAD();
/* 41b2ee: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41b2ef: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41b2f0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41b2f2: je 0x41b3bd */
  if (zf) goto L_41b3bd;
L_41b2f8: /* 41b2f8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 41b2fa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41b2fb: call 0x420e0f */
  esp -= 4; W32(esp, 0x41b300u); SPILL(); f_420e0f(); if (g_unwind) return; RELOAD();
/* 41b300: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41b301: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41b302: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41b304: je 0x41b3bd */
  if (zf) goto L_41b3bd;
L_41b30a: /* 41b30a: push dword ptr [esi + 0x14] */
  { uint32_t v = R32((uint32_t)(esi + 0x14u)); esp -= 4; W32(esp, v); }
/* 41b30d: push dword ptr [ebx + 0x18] */
  { uint32_t v = R32((uint32_t)(ebx + 0x18u)); esp -= 4; W32(esp, v); }
/* 41b310: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41b311: call 0x403f12 */
  esp -= 4; W32(esp, 0x41b316u); SPILL(); hle_memcpy(); RELOAD();
/* 41b316: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41b319: cmp dword ptr [esi + 0x14], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x14u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41b31d: jne 0x41b3c2 */
  if (!zf) goto L_41b3c2;
L_41b323: /* 41b323: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 41b325: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41b327: je 0x41b3c2 */
  if (zf) goto L_41b3c2;
L_41b32d: /* 41b32d: jmp 0x41b2d5 */
  goto L_41b2d5;
L_41b32f: /* 41b32f: cmp dword ptr [esi + 0x18], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41b333: jne 0x41b368 */
  if (!zf) goto L_41b368;
L_41b335: /* 41b335: call 0x420df3 */
  esp -= 4; W32(esp, 0x41b33au); SPILL(); f_420df3(); if (g_unwind) return; RELOAD();
/* 41b33a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41b33b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41b33c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41b33e: je 0x41b3bd */
  if (zf) goto L_41b3bd;
L_41b340: /* 41b340: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 41b342: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41b343: call 0x420e0f */
  esp -= 4; W32(esp, 0x41b348u); SPILL(); f_420e0f(); if (g_unwind) return; RELOAD();
/* 41b348: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41b349: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41b34a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41b34c: je 0x41b3bd */
  if (zf) goto L_41b3bd;
L_41b34e: /* 41b34e: push dword ptr [esi + 0x14] */
  { uint32_t v = R32((uint32_t)(esi + 0x14u)); esp -= 4; W32(esp, v); }
/* 41b351: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 41b354: mov eax, dword ptr [ebx + 0x18] */
  eax = R32((uint32_t)(ebx + 0x18u));
/* 41b357: call 0x41aed0 */
  esp -= 4; W32(esp, 0x41b35cu); SPILL(); f_41aed0(); if (g_unwind) return; RELOAD();
/* 41b35c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41b35d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41b35e: call 0x403f12 */
  esp -= 4; W32(esp, 0x41b363u); SPILL(); hle_memcpy(); RELOAD();
/* 41b363: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41b366: jmp 0x41b3c2 */
  goto L_41b3c2;
L_41b368: /* 41b368: call 0x420df3 */
  esp -= 4; W32(esp, 0x41b36du); SPILL(); f_420df3(); if (g_unwind) return; RELOAD();
/* 41b36d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41b36e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41b36f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41b371: je 0x41b3bd */
  if (zf) goto L_41b3bd;
L_41b373: /* 41b373: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 41b375: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41b376: call 0x420e0f */
  esp -= 4; W32(esp, 0x41b37bu); SPILL(); f_420e0f(); if (g_unwind) return; RELOAD();
/* 41b37b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41b37c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41b37d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41b37f: je 0x41b3bd */
  if (zf) goto L_41b3bd;
L_41b381: /* 41b381: push dword ptr [esi + 0x18] */
  { uint32_t v = R32((uint32_t)(esi + 0x18u)); esp -= 4; W32(esp, v); }
/* 41b384: call 0x420e2b */
  esp -= 4; W32(esp, 0x41b389u); SPILL(); f_420e2b(); if (g_unwind) return; RELOAD();
/* 41b389: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41b38a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41b38c: je 0x41b3bd */
  if (zf) goto L_41b3bd;
L_41b38e: /* 41b38e: mov eax, dword ptr [ebx + 0x18] */
  eax = R32((uint32_t)(ebx + 0x18u));
/* 41b391: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 41b394: test byte ptr [esi], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41b397: je 0x41b3ac */
  if (zf) goto L_41b3ac;
L_41b399: /* 41b399: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 41b39b: call 0x41aed0 */
  esp -= 4; W32(esp, 0x41b3a0u); SPILL(); f_41aed0(); if (g_unwind) return; RELOAD();
/* 41b3a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41b3a1: push dword ptr [esi + 0x18] */
  { uint32_t v = R32((uint32_t)(esi + 0x18u)); esp -= 4; W32(esp, v); }
/* 41b3a4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41b3a5: call 0x41ba36 */
  esp -= 4; W32(esp, 0x41b3aau); SPILL(); f_41ba36(); if (g_unwind) return; RELOAD();
/* 41b3aa: jmp 0x41b3c2 */
  goto L_41b3c2;
L_41b3ac: /* 41b3ac: call 0x41aed0 */
  esp -= 4; W32(esp, 0x41b3b1u); SPILL(); f_41aed0(); if (g_unwind) return; RELOAD();
/* 41b3b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41b3b2: push dword ptr [esi + 0x18] */
  { uint32_t v = R32((uint32_t)(esi + 0x18u)); esp -= 4; W32(esp, v); }
/* 41b3b5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41b3b6: call 0x41ba36 */
  esp -= 4; W32(esp, 0x41b3bbu); SPILL(); f_41ba36(); if (g_unwind) return; RELOAD();
/* 41b3bb: jmp 0x41b3c2 */
  goto L_41b3c2;
L_41b3bd: /* 41b3bd: call 0x41b9a7 */
  esp -= 4; W32(esp, 0x41b3c2u); SPILL(); f_41b9a7(); if (g_unwind) return; RELOAD();
L_41b3c2: /* 41b3c2: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
L_41b3c6: /* 41b3c6: call 0x40105a */
  esp -= 4; W32(esp, 0x41b3cbu); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 41b3cb: ret  */
  esp += 4; SPILL(); return;
}

void f_41b3cc(void) {
  LOAD_REGS();
L_41b3cc: /* 41b3cc: xor eax, eax */
  eax = 0;
/* 41b3ce: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 41b3cf: ret  */
  esp += 4; SPILL(); return;
}

void f_41b3d0(void) {
  LOAD_REGS();
L_41b3d0: /* 41b3d0: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
/* 41b3d3: jmp 0x41b959 */
  SPILL(); f_41b959(); return;
}

void f_41b3d8(void) {
  LOAD_REGS();
L_41b3d8: /* 41b3d8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41b3d9: mov ebp, esp */
  ebp = esp;
/* 41b3db: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 41b3de: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 41b3e1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41b3e2: xor edi, edi */
  edi = 0;
/* 41b3e4: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41b3e6: jne 0x41b3ef */
  if (!zf) goto L_41b3ef;
L_41b3e8: /* 41b3e8: xor eax, eax */
  eax = 0;
/* 41b3ea: jmp 0x41b4e1 */
  goto L_41b4e1;
L_41b3ef: /* 41b3ef: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41b3f0: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 41b3f2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41b3f3: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 41b3f6: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41b3f8: je 0x41b4a6 */
  if (zf) goto L_41b4a6;
L_41b3fe: /* 41b3fe: cmp byte ptr [esi + 8], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x8u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41b402: je 0x41b4a6 */
  if (zf) goto L_41b4a6;
L_41b408: /* 41b408: cmp dword ptr [ebx], 0xe06d7363 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx))); uint32_t b = (uint32_t)(0xe06d7363u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41b40e: jne 0x41b42e */
  if (!zf) goto L_41b42e;
L_41b410: /* 41b410: cmp dword ptr [ebx + 0x10], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x10u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41b414: jne 0x41b42e */
  if (!zf) goto L_41b42e;
L_41b416: /* 41b416: cmp dword ptr [ebx + 0x14], 0x19930520 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x14u))); uint32_t b = (uint32_t)(0x19930520u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41b41d: jne 0x41b42e */
  if (!zf) goto L_41b42e;
L_41b41f: /* 41b41f: cmp dword ptr [ebx + 0x1c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x1cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41b422: jne 0x41b43d */
  if (!zf) goto L_41b43d;
L_41b424: /* 41b424: call 0x40137f */
  esp -= 4; W32(esp, 0x41b429u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 41b429: cmp dword ptr [eax + 0x78], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x78u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41b42c: jne 0x41b435 */
  if (!zf) goto L_41b435;
L_41b42e: /* 41b42e: xor eax, eax */
  eax = 0;
/* 41b430: jmp 0x41b4df */
  goto L_41b4df;
L_41b435: /* 41b435: call 0x40137f */
  esp -= 4; W32(esp, 0x41b43au); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 41b43a: mov ebx, dword ptr [eax + 0x78] */
  ebx = R32((uint32_t)(eax + 0x78u));
L_41b43d: /* 41b43d: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 41b440: or eax, 0x80000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 41b445: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 41b448: mov eax, dword ptr [ebx + 0x1c] */
  eax = R32((uint32_t)(ebx + 0x1cu));
/* 41b44b: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 41b44e: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 41b451: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 41b453: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41b455: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 41b458: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 41b45b: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 41b45e: jle 0x41b42e */
  if ((zf || sf != of)) goto L_41b42e;
L_41b460: /* 41b460: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 41b463: push dword ptr [ebx + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebx + 0x1cu)); esp -= 4; W32(esp, v); }
/* 41b466: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 41b468: lea esi, [ebp - 0x14] */
  esi = (uint32_t)(ebp + 0xffffffecu);
/* 41b46b: call 0x41ad50 */
  esp -= 4; W32(esp, 0x41b470u); SPILL(); f_41ad50(); if (g_unwind) return; RELOAD();
/* 41b470: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41b472: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41b473: jne 0x41b483 */
  if (!zf) goto L_41b483;
L_41b475: /* 41b475: dec dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 41b478: add dword ptr [ebp + 8], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 41b47c: cmp dword ptr [ebp - 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41b47f: jg 0x41b460 */
  if ((!zf && sf == of)) goto L_41b460;
L_41b481: /* 41b481: jmp 0x41b42e */
  goto L_41b42e;
L_41b483: /* 41b483: call 0x40137f */
  esp -= 4; W32(esp, 0x41b488u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 41b488: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 41b48b: add eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 41b490: inc dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax), r);
  }
/* 41b492: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41b494: je 0x41b4dc */
  if (zf) goto L_41b4dc;
L_41b496: /* 41b496: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 41b499: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41b49a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41b49b: mov ecx, edi */
  ecx = edi;
/* 41b49d: call 0x41b25c */
  esp -= 4; W32(esp, 0x41b4a2u); SPILL(); f_41b25c(); if (g_unwind) return; RELOAD();
/* 41b4a2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41b4a3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41b4a4: jmp 0x41b4dc */
  goto L_41b4dc;
L_41b4a6: /* 41b4a6: cmp dword ptr [ebx], 0xe06d7363 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx))); uint32_t b = (uint32_t)(0xe06d7363u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41b4ac: jne 0x41b4d0 */
  if (!zf) goto L_41b4d0;
L_41b4ae: /* 41b4ae: cmp dword ptr [ebx + 0x10], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x10u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41b4b2: jne 0x41b4d0 */
  if (!zf) goto L_41b4d0;
L_41b4b4: /* 41b4b4: cmp dword ptr [ebx + 0x14], 0x19930520 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x14u))); uint32_t b = (uint32_t)(0x19930520u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41b4bb: jne 0x41b4d0 */
  if (!zf) goto L_41b4d0;
L_41b4bd: /* 41b4bd: cmp dword ptr [ebx + 0x1c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x1cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41b4c0: jne 0x41b4d0 */
  if (!zf) goto L_41b4d0;
L_41b4c2: /* 41b4c2: call 0x40137f */
  esp -= 4; W32(esp, 0x41b4c7u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 41b4c7: cmp dword ptr [eax + 0x78], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x78u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41b4ca: je 0x41b42e */
  if (zf) goto L_41b42e;
L_41b4d0: /* 41b4d0: call 0x40137f */
  esp -= 4; W32(esp, 0x41b4d5u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 41b4d5: add eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 41b4da: inc dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax), r);
  }
L_41b4dc: /* 41b4dc: xor eax, eax */
  eax = 0;
/* 41b4de: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_41b4df: /* 41b4df: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41b4e0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_41b4e1: /* 41b4e1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 41b4e2: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 41b4e3: ret  */
  esp += 4; SPILL(); return;
}

void f_41b4e4(void) {
  LOAD_REGS();
L_41b4e4: /* 41b4e4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41b4e5: mov ebp, esp */
  ebp = esp;
/* 41b4e7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41b4e9: je 0x41b4f8 */
  if (zf) goto L_41b4f8;
L_41b4eb: /* 41b4eb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41b4ec: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 41b4ef: mov edx, esi */
  edx = esi;
/* 41b4f1: call 0x41b25c */
  esp -= 4; W32(esp, 0x41b4f6u); SPILL(); f_41b25c(); if (g_unwind) return; RELOAD();
/* 41b4f6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41b4f7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_41b4f8: /* 41b4f8: cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x1cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41b4fc: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 41b4ff: jne 0x41b504 */
  if (!zf) goto L_41b504;
L_41b501: /* 41b501: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41b502: jmp 0x41b507 */
  goto L_41b507;
L_41b504: /* 41b504: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
L_41b507: /* 41b507: call 0x41ba3d */
  esp -= 4; W32(esp, 0x41b50cu); SPILL(); f_41ba3d(); if (g_unwind) return; RELOAD();
/* 41b50c: push dword ptr [edi] */
  { uint32_t v = R32((uint32_t)(edi)); esp -= 4; W32(esp, v); }
/* 41b50e: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 41b511: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 41b514: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41b515: call 0x41adbd */
  esp -= 4; W32(esp, 0x41b51au); SPILL(); f_41adbd(); if (g_unwind) return; RELOAD();
/* 41b51a: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 41b51d: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 41b522: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 41b525: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 41b526: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 41b529: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 41b52c: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 41b52f: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 41b532: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41b533: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 41b536: call 0x41b0b5 */
  esp -= 4; W32(esp, 0x41b53bu); SPILL(); f_41b0b5(); if (g_unwind) return; RELOAD();
/* 41b53b: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41b53e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41b540: je 0x41b549 */
  if (zf) goto L_41b549;
L_41b542: /* 41b542: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41b543: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41b544: call 0x41ba0b */
  esp -= 4; W32(esp, 0x41b549u); SPILL(); f_41ba0b(); if (g_unwind) return; RELOAD();
L_41b549: /* 41b549: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 41b54a: ret  */
  esp += 4; SPILL(); return;
}

void f_41b54b(void) {
  LOAD_REGS();
L_41b54b: /* 41b54b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41b54c: mov ebp, esp */
  ebp = esp;
/* 41b54e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41b54f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41b550: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41b551: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 41b554: cmp dword ptr [esi], 0x80000003 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41b55a: je 0x41b608 */
  if (zf) goto L_41b608;
L_41b560: /* 41b560: call 0x40137f */
  esp -= 4; W32(esp, 0x41b565u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 41b565: cmp dword ptr [eax + 0x74], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x74u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41b569: je 0x41b58a */
  if (zf) goto L_41b58a;
L_41b56b: /* 41b56b: push dword ptr [ebp + 0x24] */
  { uint32_t v = R32((uint32_t)(ebp + 0x24u)); esp -= 4; W32(esp, v); }
/* 41b56e: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 41b571: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 41b574: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 41b577: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 41b57a: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 41b57d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41b57e: call 0x41bcd1 */
  esp -= 4; W32(esp, 0x41b583u); SPILL(); f_41bcd1(); if (g_unwind) return; RELOAD();
/* 41b583: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41b586: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41b588: jne 0x41b608 */
  if (!zf) goto L_41b608;
L_41b58a: /* 41b58a: mov esi, dword ptr [ebp + 0x1c] */
  esi = R32((uint32_t)(ebp + 0x1cu));
/* 41b58d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41b58e: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 41b591: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41b592: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* 41b595: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41b596: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41b597: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 41b59a: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 41b59d: call 0x41bb71 */
  esp -= 4; W32(esp, 0x41b5a2u); SPILL(); f_41bb71(); if (g_unwind) return; RELOAD();
/* 41b5a2: mov edi, eax */
  edi = eax;
/* 41b5a4: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 41b5a7: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41b5aa: cmp eax, dword ptr [ebp - 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 41b5ad: jae 0x41b607 */
  if (!cf) goto L_41b607;
L_41b5af: /* 41b5af: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
L_41b5b0: /* 41b5b0: cmp esi, dword ptr [edi] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41b5b2: jl 0x41b5f8 */
  if ((sf != of)) goto L_41b5f8;
L_41b5b4: /* 41b5b4: cmp esi, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41b5b7: jg 0x41b5f8 */
  if ((!zf && sf == of)) goto L_41b5f8;
L_41b5b9: /* 41b5b9: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 41b5bc: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* 41b5bf: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 41b5c2: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 41b5c4: mov ecx, dword ptr [eax - 0xc] */
  ecx = R32((uint32_t)(eax + 0xfffffff4u));
/* 41b5c7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41b5c9: je 0x41b5d1 */
  if (zf) goto L_41b5d1;
L_41b5cb: /* 41b5cb: cmp byte ptr [ecx + 8], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x8u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41b5cf: jne 0x41b5f8 */
  if (!zf) goto L_41b5f8;
L_41b5d1: /* 41b5d1: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 41b5d4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 41b5d6: push dword ptr [ebp + 0x24] */
  { uint32_t v = R32((uint32_t)(ebp + 0x24u)); esp -= 4; W32(esp, v); }
/* 41b5d9: lea ebx, [eax - 0x10] */
  ebx = (uint32_t)(eax + 0xfffffff0u);
/* 41b5dc: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 41b5df: xor ecx, ecx */
  ecx = 0;
/* 41b5e1: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 41b5e4: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 41b5e7: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 41b5ea: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 41b5ed: call 0x41b4e4 */
  esp -= 4; W32(esp, 0x41b5f2u); SPILL(); f_41b4e4(); if (g_unwind) return; RELOAD();
/* 41b5f2: mov esi, dword ptr [ebp + 0x1c] */
  esi = R32((uint32_t)(ebp + 0x1cu));
/* 41b5f5: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_41b5f8: /* 41b5f8: inc dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 41b5fb: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 41b5fe: add edi, 0x14 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 41b601: cmp eax, dword ptr [ebp - 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 41b604: jb 0x41b5b0 */
  if (cf) goto L_41b5b0;
L_41b606: /* 41b606: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_41b607: /* 41b607: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_41b608: /* 41b608: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41b609: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 41b60a: ret  */
  esp += 4; SPILL(); return;
}

void f_41b60b(void) {
  LOAD_REGS();
L_41b60b: /* 41b60b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41b60c: mov ebp, esp */
  ebp = esp;
/* 41b60e: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 41b611: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 41b614: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 41b617: and byte ptr [ebp - 0x1c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 41b61b: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41b61e: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 41b621: jl 0x41b62b */
  if ((sf != of)) goto L_41b62b;
L_41b623: /* 41b623: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 41b626: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41b629: jl 0x41b630 */
  if ((sf != of)) goto L_41b630;
L_41b62b: /* 41b62b: call 0x41b9a7 */
  esp -= 4; W32(esp, 0x41b630u); SPILL(); f_41b9a7(); if (g_unwind) return; RELOAD();
L_41b630: /* 41b630: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41b631: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 41b634: cmp dword ptr [ebx], 0xe06d7363 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx))); uint32_t b = (uint32_t)(0xe06d7363u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41b63a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41b63b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41b63c: jne 0x41b7c2 */
  if (!zf) goto L_41b7c2;
L_41b642: /* 41b642: cmp dword ptr [ebx + 0x10], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x10u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41b646: mov edi, 0x19930520 */
  edi = 0x19930520u;
/* 41b64b: jne 0x41b6bc */
  if (!zf) goto L_41b6bc;
L_41b64d: /* 41b64d: cmp dword ptr [ebx + 0x14], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x14u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41b650: jne 0x41b6bc */
  if (!zf) goto L_41b6bc;
L_41b652: /* 41b652: cmp dword ptr [ebx + 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x1cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41b656: jne 0x41b6bc */
  if (!zf) goto L_41b6bc;
L_41b658: /* 41b658: call 0x40137f */
  esp -= 4; W32(esp, 0x41b65du); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 41b65d: cmp dword ptr [eax + 0x78], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x78u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41b661: je 0x41b7ba */
  if (zf) goto L_41b7ba;
L_41b667: /* 41b667: call 0x40137f */
  esp -= 4; W32(esp, 0x41b66cu); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 41b66c: mov esi, dword ptr [eax + 0x78] */
  esi = R32((uint32_t)(eax + 0x78u));
/* 41b66f: mov dword ptr [ebp + 8], esi */
  W32((uint32_t)(ebp + 0x8u), esi);
/* 41b672: call 0x40137f */
  esp -= 4; W32(esp, 0x41b677u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 41b677: mov eax, dword ptr [eax + 0x7c] */
  eax = R32((uint32_t)(eax + 0x7cu));
/* 41b67a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 41b67c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41b67d: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 41b680: mov byte ptr [ebp - 0x1c], 1 */
  W8((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* 41b684: call 0x420df3 */
  esp -= 4; W32(esp, 0x41b689u); SPILL(); f_420df3(); if (g_unwind) return; RELOAD();
/* 41b689: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41b68b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41b68c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41b68d: jne 0x41b694 */
  if (!zf) goto L_41b694;
L_41b68f: /* 41b68f: call 0x41b9a7 */
  esp -= 4; W32(esp, 0x41b694u); SPILL(); f_41b9a7(); if (g_unwind) return; RELOAD();
L_41b694: /* 41b694: cmp dword ptr [esi], 0xe06d7363 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0xe06d7363u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41b69a: jne 0x41b7bf */
  if (!zf) goto L_41b7bf;
L_41b6a0: /* 41b6a0: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 41b6a3: cmp dword ptr [eax + 0x10], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x10u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41b6a7: jne 0x41b6b9 */
  if (!zf) goto L_41b6b9;
L_41b6a9: /* 41b6a9: cmp dword ptr [eax + 0x14], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41b6ac: jne 0x41b6b9 */
  if (!zf) goto L_41b6b9;
L_41b6ae: /* 41b6ae: cmp dword ptr [eax + 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x1cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41b6b2: jne 0x41b6b9 */
  if (!zf) goto L_41b6b9;
L_41b6b4: /* 41b6b4: call 0x41b9a7 */
  esp -= 4; W32(esp, 0x41b6b9u); SPILL(); f_41b9a7(); if (g_unwind) return; RELOAD();
L_41b6b9: /* 41b6b9: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
L_41b6bc: /* 41b6bc: cmp dword ptr [ebx], 0xe06d7363 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx))); uint32_t b = (uint32_t)(0xe06d7363u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41b6c2: jne 0x41b7c2 */
  if (!zf) goto L_41b7c2;
L_41b6c8: /* 41b6c8: cmp dword ptr [ebx + 0x10], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x10u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41b6cc: jne 0x41b7c2 */
  if (!zf) goto L_41b7c2;
L_41b6d2: /* 41b6d2: cmp dword ptr [ebx + 0x14], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x14u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41b6d5: jne 0x41b7c2 */
  if (!zf) goto L_41b7c2;
L_41b6db: /* 41b6db: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 41b6de: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 41b6e1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41b6e2: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 41b6e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41b6e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41b6e7: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 41b6ea: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 41b6ed: call 0x41bb71 */
  esp -= 4; W32(esp, 0x41b6f2u); SPILL(); f_41bb71(); if (g_unwind) return; RELOAD();
/* 41b6f2: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 41b6f5: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41b6f8: cmp ecx, dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 41b6fb: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 41b6fe: jae 0x41b7aa */
  if (!cf) goto L_41b7aa;
L_41b704: /* 41b704: jmp 0x41b709 */
  goto L_41b709;
L_41b706: /* 41b706: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
L_41b709: /* 41b709: cmp dword ptr [eax], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41b70b: jg 0x41b795 */
  if ((!zf && sf == of)) goto L_41b795;
L_41b711: /* 41b711: cmp esi, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41b714: jg 0x41b795 */
  if ((!zf && sf == of)) goto L_41b795;
L_41b716: /* 41b716: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 41b719: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 41b71b: mov esi, dword ptr [eax + 0x10] */
  esi = R32((uint32_t)(eax + 0x10u));
/* 41b71e: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 41b721: jle 0x41b795 */
  if ((zf || sf != of)) goto L_41b795;
L_41b723: /* 41b723: mov ecx, dword ptr [ebx + 0x1c] */
  ecx = R32((uint32_t)(ebx + 0x1cu));
/* 41b726: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 41b729: lea edx, [ecx + 4] */
  edx = (uint32_t)(ecx + 0x4u);
/* 41b72c: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 41b72e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 41b730: mov dword ptr [ebp - 0xc], edx */
  W32((uint32_t)(ebp + 0xfffffff4u), edx);
/* 41b733: mov dword ptr [ebp - 0x10], ecx */
  W32((uint32_t)(ebp + 0xfffffff0u), ecx);
/* 41b736: jle 0x41b75c */
  if ((zf || sf != of)) goto L_41b75c;
L_41b738: /* 41b738: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
/* 41b73b: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 41b73d: push dword ptr [ebx + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebx + 0x1cu)); esp -= 4; W32(esp, v); }
/* 41b740: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 41b743: call 0x41ad50 */
  esp -= 4; W32(esp, 0x41b748u); SPILL(); f_41ad50(); if (g_unwind) return; RELOAD();
/* 41b748: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41b74a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41b74b: jne 0x41b76a */
  if (!zf) goto L_41b76a;
L_41b74d: /* 41b74d: dec dword ptr [ebp - 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xfffffff0u), r);
  }
/* 41b750: add dword ptr [ebp - 0xc], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
/* 41b754: cmp dword ptr [ebp - 0x10], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41b757: jg 0x41b738 */
  if ((!zf && sf == of)) goto L_41b738;
L_41b759: /* 41b759: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
L_41b75c: /* 41b75c: dec dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 41b75f: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 41b762: cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41b766: jg 0x41b723 */
  if ((!zf && sf == of)) goto L_41b723;
L_41b768: /* 41b768: jmp 0x41b795 */
  goto L_41b795;
L_41b76a: /* 41b76a: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 41b76d: mov edi, dword ptr [ebp - 4] */
  edi = R32((uint32_t)(ebp + 0xfffffffcu));
/* 41b770: push dword ptr [ebp + 0x24] */
  { uint32_t v = R32((uint32_t)(ebp + 0x24u)); esp -= 4; W32(esp, v); }
/* 41b773: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 41b776: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 41b779: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 41b77c: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 41b77f: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 41b782: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41b783: mov ebx, esi */
  ebx = esi;
/* 41b785: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 41b788: call 0x41b4e4 */
  esp -= 4; W32(esp, 0x41b78du); SPILL(); f_41b4e4(); if (g_unwind) return; RELOAD();
/* 41b78d: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 41b790: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41b793: mov eax, edi */
  eax = edi;
L_41b795: /* 41b795: inc dword ptr [ebp - 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 41b798: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 41b79b: add eax, 0x14 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 41b79e: cmp ecx, dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 41b7a1: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 41b7a4: jb 0x41b706 */
  if (cf) goto L_41b706;
L_41b7aa: /* 41b7aa: cmp byte ptr [ebp + 0x1c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x1cu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41b7ae: je 0x41b7ba */
  if (zf) goto L_41b7ba;
L_41b7b0: /* 41b7b0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 41b7b2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41b7b3: call 0x41ae8b */
  esp -= 4; W32(esp, 0x41b7b8u); SPILL(); f_41ae8b(); if (g_unwind) return; RELOAD();
/* 41b7b8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41b7b9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_41b7ba: /* 41b7ba: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 41b7bb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41b7bc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 41b7bd: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 41b7be: ret  */
  esp += 4; SPILL(); return;
L_41b7bf: /* 41b7bf: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
L_41b7c2: /* 41b7c2: cmp byte ptr [ebp + 0x1c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x1cu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41b7c6: jne 0x41b959 */
  if (!zf) { SPILL(); f_41b959(); return; }
L_41b7cc: /* 41b7cc: push dword ptr [ebp + 0x24] */
  { uint32_t v = R32((uint32_t)(ebp + 0x24u)); esp -= 4; W32(esp, v); }
/* 41b7cf: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 41b7d2: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 41b7d5: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 41b7d8: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 41b7db: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 41b7de: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 41b7e1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41b7e2: call 0x41b54b */
  esp -= 4; W32(esp, 0x41b7e7u); SPILL(); f_41b54b(); if (g_unwind) return; RELOAD();
/* 41b7e7: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41b7ea: jmp 0x41b7ba */
  goto L_41b7ba;
}

void f_41b7ec(void) {
  LOAD_REGS();
L_41b7ec: /* 41b7ec: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41b7ed: mov ebp, esp */
  ebp = esp;
/* 41b7ef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41b7f0: mov esi, dword ptr [ebp + 0x18] */
  esi = R32((uint32_t)(ebp + 0x18u));
/* 41b7f3: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 41b7f5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41b7f6: and eax, 0x1fffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41b7fb: mov edi, 0x19930520 */
  edi = 0x19930520u;
/* 41b800: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41b802: je 0x41b809 */
  if (zf) goto L_41b809;
L_41b804: /* 41b804: call 0x41b9a7 */
  esp -= 4; W32(esp, 0x41b809u); SPILL(); f_41b9a7(); if (g_unwind) return; RELOAD();
L_41b809: /* 41b809: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 41b80c: test byte ptr [eax + 4], 0x66 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x4u))); uint8_t b = (uint8_t)(0x66u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41b810: je 0x41b831 */
  if (zf) goto L_41b831;
L_41b812: /* 41b812: cmp dword ptr [esi + 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41b816: je 0x41b887 */
  if (zf) goto L_41b887;
L_41b818: /* 41b818: cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x1cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41b81c: jne 0x41b887 */
  if (!zf) goto L_41b887;
L_41b81e: /* 41b81e: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 41b820: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41b821: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 41b824: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 41b827: call 0x41adbd */
  esp -= 4; W32(esp, 0x41b82cu); SPILL(); f_41adbd(); if (g_unwind) return; RELOAD();
/* 41b82c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41b82f: jmp 0x41b887 */
  goto L_41b887;
L_41b831: /* 41b831: cmp dword ptr [esi + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41b835: je 0x41b887 */
  if (zf) goto L_41b887;
L_41b837: /* 41b837: cmp dword ptr [eax], 0xe06d7363 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0xe06d7363u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41b83d: jne 0x41b86b */
  if (!zf) goto L_41b86b;
L_41b83f: /* 41b83f: cmp dword ptr [eax + 0x14], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 41b842: jbe 0x41b86b */
  if ((cf | zf)) goto L_41b86b;
L_41b844: /* 41b844: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 41b847: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 41b84a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41b84c: je 0x41b86b */
  if (zf) goto L_41b86b;
L_41b84e: /* 41b84e: movzx edx, byte ptr [ebp + 0x24] */
  edx = (uint32_t)(R8((uint32_t)(ebp + 0x24u)));
/* 41b852: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 41b853: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 41b856: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 41b859: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41b85a: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 41b85d: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 41b860: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 41b863: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41b864: call ecx */
  { uint32_t t = ecx; esp -= 4; W32(esp, 0x41b866u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 41b866: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41b869: jmp 0x41b88a */
  goto L_41b88a;
L_41b86b: /* 41b86b: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 41b86e: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 41b871: push dword ptr [ebp + 0x24] */
  { uint32_t v = R32((uint32_t)(ebp + 0x24u)); esp -= 4; W32(esp, v); }
/* 41b874: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41b875: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 41b878: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 41b87b: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 41b87e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41b87f: call 0x41b60b */
  esp -= 4; W32(esp, 0x41b884u); SPILL(); f_41b60b(); if (g_unwind) return; RELOAD();
/* 41b884: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_41b887: /* 41b887: xor eax, eax */
  eax = 0;
/* 41b889: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_41b88a: /* 41b88a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 41b88b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41b88c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 41b88d: ret  */
  esp += 4; SPILL(); return;
}

void f_41b88e(void) {
  LOAD_REGS();
L_41b88e: /* 41b88e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41b88f: call 0x40137f */
  esp -= 4; W32(esp, 0x41b894u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 41b894: mov esi, dword ptr [eax + 0x6c] */
  esi = R32((uint32_t)(eax + 0x6cu));
/* 41b897: call 0x40137f */
  esp -= 4; W32(esp, 0x41b89cu); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 41b89c: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 41b8a0: mov dword ptr [eax + 0x6c], ecx */
  W32((uint32_t)(eax + 0x6cu), ecx);
/* 41b8a3: mov eax, esi */
  eax = esi;
/* 41b8a5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41b8a6: ret  */
  esp += 4; SPILL(); return;
}

void f_41b8a7(void) {
  LOAD_REGS();
L_41b8a7: /* 41b8a7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41b8a8: call 0x40137f */
  esp -= 4; W32(esp, 0x41b8adu); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 41b8ad: mov esi, dword ptr [eax + 0x70] */
  esi = R32((uint32_t)(eax + 0x70u));
/* 41b8b0: call 0x40137f */
  esp -= 4; W32(esp, 0x41b8b5u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 41b8b5: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 41b8b9: mov dword ptr [eax + 0x70], ecx */
  W32((uint32_t)(eax + 0x70u), ecx);
/* 41b8bc: mov eax, esi */
  eax = esi;
/* 41b8be: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41b8bf: ret  */
  esp += 4; SPILL(); return;
}

void f_41b8c0(void) {
  LOAD_REGS();
L_41b8c0: /* 41b8c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41b8c1: call 0x40137f */
  esp -= 4; W32(esp, 0x41b8c6u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 41b8c6: mov esi, dword ptr [eax + 0x74] */
  esi = R32((uint32_t)(eax + 0x74u));
/* 41b8c9: call 0x40137f */
  esp -= 4; W32(esp, 0x41b8ceu); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 41b8ce: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 41b8d2: mov dword ptr [eax + 0x74], ecx */
  W32((uint32_t)(eax + 0x74u), ecx);
/* 41b8d5: mov eax, esi */
  eax = esi;
/* 41b8d7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41b8d8: ret  */
  esp += 4; SPILL(); return;
}

void f_41b8d9(void) {
  LOAD_REGS();
L_41b8d9: /* 41b8d9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41b8da: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41b8db: mov edi, ecx */
  edi = ecx;
/* 41b8dd: cmp dword ptr [edi + 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41b8e1: jne 0x41b953 */
  if (!zf) goto L_41b953;
L_41b8e3: /* 41b8e3: push 0x2800 */
  { uint32_t v = 0x2800u; esp -= 4; W32(esp, v); }
/* 41b8e8: push 0x401156 */
  { uint32_t v = 0x401156u; esp -= 4; W32(esp, v); }
/* 41b8ed: push 0x4010eb */
  { uint32_t v = 0x4010ebu; esp -= 4; W32(esp, v); }
/* 41b8f2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 41b8f4: lea eax, [edi + 9] */
  eax = (uint32_t)(edi + 0x9u);
/* 41b8f7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41b8f8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 41b8fa: call 0x4205e3 */
  esp -= 4; W32(esp, 0x41b8ffu); SPILL(); f_4205e3(); if (g_unwind) return; RELOAD();
/* 41b8ff: mov esi, eax */
  esi = eax;
/* 41b901: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41b904: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41b906: je 0x41b956 */
  if (zf) goto L_41b956;
L_41b908: /* 41b908: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41b909: call 0x402493 */
  esp -= 4; W32(esp, 0x41b90eu); SPILL(); hle_strlen(); RELOAD();
/* 41b90e: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 41b90f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41b910: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 41b912: jmp 0x41b918 */
  goto L_41b918;
L_41b914: /* 41b914: and byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(eax), r);
  }
/* 41b917: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
L_41b918: /* 41b918: cmp byte ptr [eax], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41b91b: je 0x41b914 */
  if (zf) goto L_41b914;
L_41b91d: /* 41b91d: push 0xe */
  { uint32_t v = 0xeu; esp -= 4; W32(esp, v); }
/* 41b91f: call 0x4011b7 */
  esp -= 4; W32(esp, 0x41b924u); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 41b924: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41b925: call 0x402493 */
  esp -= 4; W32(esp, 0x41b92au); SPILL(); hle_strlen(); RELOAD();
/* 41b92a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 41b92b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41b92c: call 0x4010eb */
  esp -= 4; W32(esp, 0x41b931u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 41b931: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41b934: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41b936: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* 41b939: je 0x41b944 */
  if (zf) goto L_41b944;
L_41b93b: /* 41b93b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41b93c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41b93d: call 0x404b3a */
  esp -= 4; W32(esp, 0x41b942u); SPILL(); f_404b3a(); if (g_unwind) return; RELOAD();
/* 41b942: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41b943: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_41b944: /* 41b944: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41b945: call 0x401156 */
  esp -= 4; W32(esp, 0x41b94au); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 41b94a: push 0xe */
  { uint32_t v = 0xeu; esp -= 4; W32(esp, v); }
/* 41b94c: call 0x4011d9 */
  esp -= 4; W32(esp, 0x41b951u); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 41b951: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41b952: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_41b953: /* 41b953: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
L_41b956: /* 41b956: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 41b957: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41b958: ret  */
  esp += 4; SPILL(); return;
}

void f_41b959(void) {
  LOAD_REGS();
L_41b959: /* 41b959: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 41b95b: push 0x43fd78 */
  { uint32_t v = 0x43fd78u; esp -= 4; W32(esp, v); }
/* 41b960: call 0x40101f */
  esp -= 4; W32(esp, 0x41b965u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 41b965: call 0x40137f */
  esp -= 4; W32(esp, 0x41b96au); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 41b96a: cmp dword ptr [eax + 0x6c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x6cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41b96e: je 0x41278b */
  if (zf) { SPILL(); f_41278b(); return; }
L_41b974: /* 41b974: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 41b978: call 0x40137f */
  esp -= 4; W32(esp, 0x41b97du); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 41b97d: call dword ptr [eax + 0x6c] */
  { uint32_t t = R32((uint32_t)(eax + 0x6cu)); esp -= 4; W32(esp, 0x41b980u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 41b980: jmp 0x41b989 */
  goto L_41b989;
L_41b989: /* 41b989: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 41b98d: jmp 0x41278b */
  SPILL(); f_41278b(); return;
}

void f_41b982(void) {
  LOAD_REGS();
L_41b982: /* 41b982: xor eax, eax */
  eax = 0;
/* 41b984: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 41b985: ret  */
  esp += 4; SPILL(); return;
}

void f_41b986(void) {
  LOAD_REGS();
L_41b986: /* 41b986: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
/* 41b989: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 41b98d: jmp 0x41278b */
  SPILL(); f_41278b(); return;
}

void f_41b992(void) {
  LOAD_REGS();
L_41b992: /* 41b992: call 0x40137f */
  esp -= 4; W32(esp, 0x41b997u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 41b997: cmp dword ptr [eax + 0x70], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x70u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41b99b: je 0x41b959 */
  if (zf) { SPILL(); f_41b959(); return; }
L_41b99d: /* 41b99d: call 0x40137f */
  esp -= 4; W32(esp, 0x41b9a2u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 41b9a2: call dword ptr [eax + 0x70] */
  { uint32_t t = R32((uint32_t)(eax + 0x70u)); esp -= 4; W32(esp, 0x41b9a5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 41b9a5: jmp 0x41b959 */
  SPILL(); f_41b959(); return;
}

void f_41b9a7(void) {
  LOAD_REGS();
L_41b9a7: /* 41b9a7: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 41b9a9: push 0x43fd88 */
  { uint32_t v = 0x43fd88u; esp -= 4; W32(esp, v); }
/* 41b9ae: call 0x40101f */
  esp -= 4; W32(esp, 0x41b9b3u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 41b9b3: mov eax, dword ptr [0x44dd10] */
  eax = R32((uint32_t)(0x44dd10u));
/* 41b9b8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41b9ba: je 0x41b959 */
  if (zf) { SPILL(); f_41b959(); return; }
L_41b9bc: /* 41b9bc: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 41b9c0: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x41b9c2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 41b9c2: jmp 0x41b9cb */
  goto L_41b9cb;
L_41b9cb: /* 41b9cb: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 41b9cf: jmp 0x41b959 */
  SPILL(); f_41b959(); return;
}

void f_41b9c4(void) {
  LOAD_REGS();
L_41b9c4: /* 41b9c4: xor eax, eax */
  eax = 0;
/* 41b9c6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 41b9c7: ret  */
  esp += 4; SPILL(); return;
}

void f_41b9c8(void) {
  LOAD_REGS();
L_41b9c8: /* 41b9c8: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
/* 41b9cb: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 41b9cf: jmp 0x41b959 */
  SPILL(); f_41b959(); return;
}

void f_41b9d1(void) {
  LOAD_REGS();
L_41b9d1: /* 41b9d1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41b9d2: mov ebp, esp */
  ebp = esp;
/* 41b9d4: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 41b9d7: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 41b9da: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41b9db: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41b9dc: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 41b9de: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41b9df: mov esi, 0x43fd94 */
  esi = 0x43fd94u;
/* 41b9e4: lea edi, [ebp - 0x20] */
  edi = (uint32_t)(ebp + 0xffffffe0u);
/* 41b9e7: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 41b9e9: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 41b9ec: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 41b9ef: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 41b9f2: lea eax, [ebp - 0xc] */
  eax = (uint32_t)(ebp + 0xfffffff4u);
/* 41b9f5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41b9f6: push dword ptr [ebp - 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff0u)); esp -= 4; W32(esp, v); }
/* 41b9f9: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 41b9fc: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* 41b9ff: call dword ptr [0x4391c4] */
  esp -= 4; W32(esp, 0x41ba05u); SPILL(); call_ind(R32(0x4391c4u)); if (g_unwind) return; /* KERNEL32!RaiseException */ RELOAD();
/* 41ba05: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 41ba06: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41ba07: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 41ba08: ret 8 */
  esp += 12; SPILL(); return;
}

void f_41ba0b(void) {
  LOAD_REGS();
L_41ba0b: /* 41ba0b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41ba0c: mov ebp, esp */
  ebp = esp;
/* 41ba0e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41ba0f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41ba10: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 41ba13: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 41ba16: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 41ba19: mov ebx, dword ptr fs:[0] */
  ebx = R32((uint32_t)(FS_BASE + 0x0u));
/* 41ba20: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 41ba22: mov dword ptr fs:[0], eax */
  W32((uint32_t)(FS_BASE + 0x0u), eax);
/* 41ba28: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 41ba2b: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 41ba2e: mov esp, dword ptr [ebx - 4] */
  esp = R32((uint32_t)(ebx + 0xfffffffcu));
/* 41ba31: mov ebp, dword ptr [ebp - 4] */
  ebp = R32((uint32_t)(ebp + 0xfffffffcu));
/* 41ba34: jmp eax */
  { uint32_t t = eax; SPILL(); guest_unwind_jump(t); return; }
}

void f_41ba36(void) {
  LOAD_REGS();
L_41ba36: /* 41ba36: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 41ba37: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41ba38: xchg dword ptr [esp], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp))); uint32_t b = (uint32_t)(eax);
  W32((uint32_t)(esp), b);
  eax = a;
  }
/* 41ba3b: jmp eax */
  { uint32_t t = eax; SPILL(); call_ind(t); return; }
}

void f_41ba3d(void) {
  LOAD_REGS();
L_41ba3d: /* 41ba3d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41ba3e: mov ebp, esp */
  ebp = esp;
/* 41ba40: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41ba41: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41ba42: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41ba43: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41ba44: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41ba45: mov esi, dword ptr fs:[0] */
  esi = R32((uint32_t)(FS_BASE + 0x0u));
/* 41ba4c: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 41ba4f: mov dword ptr [ebp - 8], 0x41ba66 */
  W32((uint32_t)(ebp + 0xfffffff8u), 0x41ba66u);
/* 41ba56: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 41ba58: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 41ba5b: push dword ptr [ebp - 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff8u)); esp -= 4; W32(esp, v); }
/* 41ba5e: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 41ba61: call 0x415204 */
  esp -= 4; W32(esp, 0x41ba66u); SPILL(); f_415204(); if (g_unwind) return; RELOAD();
/* 41ba66: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 41ba69: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 41ba6c: and eax, 0xfffffffd */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41ba6f: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 41ba72: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 41ba75: mov edi, dword ptr fs:[0] */
  edi = R32((uint32_t)(FS_BASE + 0x0u));
/* 41ba7c: mov ebx, dword ptr [ebp - 4] */
  ebx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 41ba7f: mov dword ptr [ebx], edi */
  W32((uint32_t)(ebx), edi);
/* 41ba81: mov dword ptr fs:[0], ebx */
  W32((uint32_t)(FS_BASE + 0x0u), ebx);
/* 41ba88: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 41ba89: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41ba8a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 41ba8b: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 41ba8c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_41ba8f(void) {
  LOAD_REGS();
L_41ba8f: /* 41ba8f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41ba90: mov ebp, esp */
  ebp = esp;
/* 41ba92: sub esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 41ba95: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41ba96: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41ba97: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41ba98: cld  */
  DF = 0;
/* 41ba99: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 41ba9c: xor eax, eax */
  eax = 0;
/* 41ba9e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41ba9f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41baa0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41baa1: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 41baa4: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 41baa7: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 41baaa: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 41baad: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 41bab0: call 0x41b7ec */
  esp -= 4; W32(esp, 0x41bab5u); SPILL(); f_41b7ec(); if (g_unwind) return; RELOAD();
/* 41bab5: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41bab8: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 41babb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 41babc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41babd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 41babe: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 41bac1: mov esp, ebp */
  esp = ebp;
/* 41bac3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 41bac4: ret  */
  esp += 4; SPILL(); return;
}

void f_41bac5(void) {
  LOAD_REGS();
L_41bac5: /* 41bac5: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 41bac9: push dword ptr [eax + 0x1c] */
  { uint32_t v = R32((uint32_t)(eax + 0x1cu)); esp -= 4; W32(esp, v); }
/* 41bacc: push dword ptr [eax + 0x28] */
  { uint32_t v = R32((uint32_t)(eax + 0x28u)); esp -= 4; W32(esp, v); }
/* 41bacf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 41bad1: push dword ptr [eax + 0x18] */
  { uint32_t v = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, v); }
/* 41bad4: call 0x41adbd */
  esp -= 4; W32(esp, 0x41bad9u); SPILL(); f_41adbd(); if (g_unwind) return; RELOAD();
/* 41bad9: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41badc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_41badf(void) {
  LOAD_REGS();
L_41badf: /* 41badf: cld  */
  DF = 0;
/* 41bae0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 41bae4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 41bae6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41bae7: push dword ptr [eax + 0x10] */
  { uint32_t v = R32((uint32_t)(eax + 0x10u)); esp -= 4; W32(esp, v); }
/* 41baea: push dword ptr [eax + 8] */
  { uint32_t v = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, v); }
/* 41baed: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 41baef: push dword ptr [esp + 0x20] */
  { uint32_t v = R32((uint32_t)(esp + 0x20u)); esp -= 4; W32(esp, v); }
/* 41baf3: push dword ptr [eax + 0xc] */
  { uint32_t v = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, v); }
/* 41baf6: push dword ptr [esp + 0x20] */
  { uint32_t v = R32((uint32_t)(esp + 0x20u)); esp -= 4; W32(esp, v); }
/* 41bafa: call 0x41b7ec */
  esp -= 4; W32(esp, 0x41baffu); SPILL(); f_41b7ec(); if (g_unwind) return; RELOAD();
/* 41baff: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41bb02: ret  */
  esp += 4; SPILL(); return;
}

void f_41bb03(void) {
  LOAD_REGS();
L_41bb03: /* 41bb03: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41bb04: mov ebp, esp */
  ebp = esp;
/* 41bb06: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41bb07: cld  */
  DF = 0;
/* 41bb08: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 41bb0b: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 41bb0e: and eax, 0x66 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x66u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41bb11: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41bb13: je 0x41bb24 */
  if (zf) goto L_41bb24;
L_41bb15: /* 41bb15: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 41bb18: mov dword ptr [eax + 0x24], 1 */
  W32((uint32_t)(eax + 0x24u), 0x1u);
/* 41bb1f: xor eax, eax */
  eax = 0;
/* 41bb21: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 41bb22: jmp 0x41bb6e */
  goto L_41bb6e;
L_41bb24: /* 41bb24: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 41bb26: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 41bb29: push dword ptr [eax + 0x14] */
  { uint32_t v = R32((uint32_t)(eax + 0x14u)); esp -= 4; W32(esp, v); }
/* 41bb2c: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 41bb2f: push dword ptr [eax + 0x10] */
  { uint32_t v = R32((uint32_t)(eax + 0x10u)); esp -= 4; W32(esp, v); }
/* 41bb32: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 41bb35: push dword ptr [eax + 8] */
  { uint32_t v = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, v); }
/* 41bb38: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 41bb3a: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 41bb3d: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 41bb40: push dword ptr [eax + 0xc] */
  { uint32_t v = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, v); }
/* 41bb43: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 41bb46: call 0x41b7ec */
  esp -= 4; W32(esp, 0x41bb4bu); SPILL(); f_41b7ec(); if (g_unwind) return; RELOAD();
/* 41bb4b: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41bb4e: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 41bb51: cmp dword ptr [eax + 0x24], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x24u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41bb55: jne 0x41bb62 */
  if (!zf) goto L_41bb62;
L_41bb57: /* 41bb57: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 41bb5a: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 41bb5d: call 0x41ba3d */
  esp -= 4; W32(esp, 0x41bb62u); SPILL(); f_41ba3d(); if (g_unwind) return; RELOAD();
L_41bb62: /* 41bb62: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 41bb65: mov esp, dword ptr [ebx + 0x1c] */
  esp = R32((uint32_t)(ebx + 0x1cu));
/* 41bb68: mov ebp, dword ptr [ebx + 0x20] */
  ebp = R32((uint32_t)(ebx + 0x20u));
/* 41bb6b: jmp dword ptr [ebx + 0x18] */
  { uint32_t t = R32((uint32_t)(ebx + 0x18u)); SPILL(); call_ind(t); return; }
L_41bb6e: /* 41bb6e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 41bb6f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 41bb70: ret  */
  esp += 4; SPILL(); return;
}

void f_41bb71(void) {
  LOAD_REGS();
L_41bb71: /* 41bb71: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41bb72: mov ebp, esp */
  ebp = esp;
/* 41bb74: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41bb75: cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41bb79: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41bb7a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41bb7b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41bb7c: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 41bb7f: mov esi, dword ptr [edi + 0xc] */
  esi = R32((uint32_t)(edi + 0xcu));
/* 41bb82: mov ebx, dword ptr [edi + 0x10] */
  ebx = R32((uint32_t)(edi + 0x10u));
/* 41bb85: mov eax, esi */
  eax = esi;
/* 41bb87: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 41bb8a: mov dword ptr [ebp + 8], esi */
  W32((uint32_t)(ebp + 0x8u), esi);
/* 41bb8d: jl 0x41bbc7 */
  if ((sf != of)) goto L_41bbc7;
L_41bb8f: /* 41bb8f: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41bb92: jne 0x41bb99 */
  if (!zf) goto L_41bb99;
L_41bb94: /* 41bb94: call 0x41b9a7 */
  esp -= 4; W32(esp, 0x41bb99u); SPILL(); f_41b9a7(); if (g_unwind) return; RELOAD();
L_41bb99: /* 41bb99: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 41bb9c: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 41bb9d: lea eax, [esi + esi*4] */
  eax = (uint32_t)(esi + esi*4);
/* 41bba0: lea eax, [ebx + eax*4] */
  eax = (uint32_t)(ebx + eax*4);
/* 41bba3: cmp dword ptr [eax + 4], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41bba6: jge 0x41bbad */
  if ((sf == of)) goto L_41bbad;
L_41bba8: /* 41bba8: cmp ecx, dword ptr [eax + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41bbab: jle 0x41bbb2 */
  if ((zf || sf != of)) goto L_41bbb2;
L_41bbad: /* 41bbad: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41bbb0: jne 0x41bbbe */
  if (!zf) goto L_41bbbe;
L_41bbb2: /* 41bbb2: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 41bbb5: dec dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 41bbb8: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 41bbbb: mov dword ptr [ebp + 8], esi */
  W32((uint32_t)(ebp + 0x8u), esi);
L_41bbbe: /* 41bbbe: cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41bbc2: jge 0x41bb8f */
  if ((sf == of)) goto L_41bb8f;
L_41bbc4: /* 41bbc4: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
L_41bbc7: /* 41bbc7: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 41bbca: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 41bbcb: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 41bbcd: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 41bbd0: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 41bbd2: cmp eax, dword ptr [edi + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 41bbd5: ja 0x41bbdb */
  if ((!cf && !zf)) goto L_41bbdb;
L_41bbd7: /* 41bbd7: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 41bbd9: jbe 0x41bbe0 */
  if ((cf | zf)) goto L_41bbe0;
L_41bbdb: /* 41bbdb: call 0x41b9a7 */
  esp -= 4; W32(esp, 0x41bbe0u); SPILL(); f_41b9a7(); if (g_unwind) return; RELOAD();
L_41bbe0: /* 41bbe0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 41bbe1: lea eax, [esi + esi*4] */
  eax = (uint32_t)(esi + esi*4);
/* 41bbe4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41bbe5: lea eax, [ebx + eax*4] */
  eax = (uint32_t)(ebx + eax*4);
/* 41bbe8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 41bbe9: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 41bbea: ret  */
  esp += 4; SPILL(); return;
}

void f_41bbeb(void) {
  LOAD_REGS();
L_41bbeb: /* 41bbeb: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 41bbef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41bbf0: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 41bbf4: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 41bbf6: call 0x40137f */
  esp -= 4; W32(esp, 0x41bbfbu); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 41bbfb: mov eax, dword ptr [eax + 0x84] */
  eax = R32((uint32_t)(eax + 0x84u));
/* 41bc01: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 41bc04: call 0x40137f */
  esp -= 4; W32(esp, 0x41bc09u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 41bc09: mov dword ptr [eax + 0x84], esi */
  W32((uint32_t)(eax + 0x84u), esi);
/* 41bc0f: mov eax, esi */
  eax = esi;
/* 41bc11: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41bc12: ret  */
  esp += 4; SPILL(); return;
}

void f_41bc13(void) {
  LOAD_REGS();
L_41bc13: /* 41bc13: call 0x40137f */
  esp -= 4; W32(esp, 0x41bc18u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 41bc18: mov eax, dword ptr [eax + 0x84] */
  eax = R32((uint32_t)(eax + 0x84u));
/* 41bc1e: jmp 0x41bc2b */
  goto L_41bc2b;
L_41bc20: /* 41bc20: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 41bc22: cmp ecx, dword ptr [esp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41bc26: je 0x41bc31 */
  if (zf) goto L_41bc31;
L_41bc28: /* 41bc28: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
L_41bc2b: /* 41bc2b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41bc2d: jne 0x41bc20 */
  if (!zf) goto L_41bc20;
L_41bc2f: /* 41bc2f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 41bc30: ret  */
  esp += 4; SPILL(); return;
L_41bc31: /* 41bc31: xor eax, eax */
  eax = 0;
/* 41bc33: ret  */
  esp += 4; SPILL(); return;
}

void f_41bc34(void) {
  LOAD_REGS();
L_41bc34: /* 41bc34: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41bc35: call 0x40137f */
  esp -= 4; W32(esp, 0x41bc3au); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 41bc3a: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 41bc3e: cmp esi, dword ptr [eax + 0x84] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x84u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41bc44: jne 0x41bc56 */
  if (!zf) goto L_41bc56;
L_41bc46: /* 41bc46: call 0x40137f */
  esp -= 4; W32(esp, 0x41bc4bu); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 41bc4b: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 41bc4e: mov dword ptr [eax + 0x84], ecx */
  W32((uint32_t)(eax + 0x84u), ecx);
/* 41bc54: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41bc55: ret  */
  esp += 4; SPILL(); return;
L_41bc56: /* 41bc56: call 0x40137f */
  esp -= 4; W32(esp, 0x41bc5bu); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 41bc5b: mov eax, dword ptr [eax + 0x84] */
  eax = R32((uint32_t)(eax + 0x84u));
/* 41bc61: jmp 0x41bc6c */
  goto L_41bc6c;
L_41bc63: /* 41bc63: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 41bc66: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41bc68: je 0x41bc78 */
  if (zf) goto L_41bc78;
L_41bc6a: /* 41bc6a: mov eax, ecx */
  eax = ecx;
L_41bc6c: /* 41bc6c: cmp dword ptr [eax + 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41bc70: jne 0x41bc63 */
  if (!zf) goto L_41bc63;
L_41bc72: /* 41bc72: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41bc73: jmp 0x41b9a7 */
  SPILL(); f_41b9a7(); return;
L_41bc78: /* 41bc78: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 41bc7b: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 41bc7e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41bc7f: ret  */
  esp += 4; SPILL(); return;
}

void f_41bc80(void) {
  LOAD_REGS();
L_41bc80: /* 41bc80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41bc81: mov ebp, esp */
  ebp = esp;
/* 41bc83: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 41bc86: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 41bc89: and dword ptr [ebp - 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 41bc8d: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 41bc90: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
/* 41bc93: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 41bc96: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 41bc97: mov dword ptr [ebp - 0x10], 0x41badf */
  W32((uint32_t)(ebp + 0xfffffff0u), 0x41badfu);
/* 41bc9e: mov dword ptr [ebp - 8], ecx */
  W32((uint32_t)(ebp + 0xfffffff8u), ecx);
/* 41bca1: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 41bca4: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 41bcaa: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 41bcad: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 41bcb0: mov dword ptr fs:[0], eax */
  W32((uint32_t)(FS_BASE + 0x0u), eax);
/* 41bcb6: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 41bcb9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41bcba: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 41bcbd: call 0x407a0a */
  esp -= 4; W32(esp, 0x41bcc2u); SPILL(); f_407a0a(); if (g_unwind) return; RELOAD();
/* 41bcc2: mov ecx, eax */
  ecx = eax;
/* 41bcc4: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 41bcc7: mov dword ptr fs:[0], eax */
  W32((uint32_t)(FS_BASE + 0x0u), eax);
/* 41bccd: mov eax, ecx */
  eax = ecx;
/* 41bccf: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 41bcd0: ret  */
  esp += 4; SPILL(); return;
}

void f_41bcd1(void) {
  LOAD_REGS();
L_41bcd1: /* 41bcd1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41bcd2: mov ebp, esp */
  ebp = esp;
/* 41bcd4: sub esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 41bcd7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41bcd8: and dword ptr [ebp - 0x28], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffd8u), r);
  }
/* 41bcdc: mov dword ptr [ebp - 0x24], 0x41bb03 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x41bb03u);
/* 41bce3: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 41bce6: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 41bce9: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 41bcec: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 41bcef: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 41bcf2: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 41bcf5: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 41bcf8: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 41bcfb: and dword ptr [ebp - 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff0u), r);
  }
/* 41bcff: and dword ptr [ebp - 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
/* 41bd03: and dword ptr [ebp - 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 41bd07: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 41bd0b: mov dword ptr [ebp - 0x10], 0x41bd54 */
  W32((uint32_t)(ebp + 0xfffffff0u), 0x41bd54u);
/* 41bd12: mov dword ptr [ebp - 0xc], esp */
  W32((uint32_t)(ebp + 0xfffffff4u), esp);
/* 41bd15: mov dword ptr [ebp - 8], ebp */
  W32((uint32_t)(ebp + 0xfffffff8u), ebp);
/* 41bd18: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 41bd1e: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 41bd21: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 41bd24: mov dword ptr fs:[0], eax */
  W32((uint32_t)(FS_BASE + 0x0u), eax);
/* 41bd2a: mov dword ptr [ebp - 0x34], 1 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x1u);
/* 41bd31: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 41bd34: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 41bd37: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 41bd3a: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 41bd3d: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 41bd40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41bd41: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 41bd44: push dword ptr [eax] */
  { uint32_t v = R32((uint32_t)(eax)); esp -= 4; W32(esp, v); }
/* 41bd46: call 0x40137f */
  esp -= 4; W32(esp, 0x41bd4bu); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 41bd4b: call dword ptr [eax + 0x74] */
  { uint32_t t = R32((uint32_t)(eax + 0x74u)); esp -= 4; W32(esp, 0x41bd4eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 41bd4e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41bd4f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41bd50: and dword ptr [ebp - 0x34], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffccu), r);
  }
/* 41bd54: cmp dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41bd58: je 0x41bd71 */
  if (zf) goto L_41bd71;
L_41bd5a: /* 41bd5a: mov ebx, dword ptr fs:[0] */
  ebx = R32((uint32_t)(FS_BASE + 0x0u));
/* 41bd61: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 41bd63: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 41bd66: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 41bd68: mov dword ptr fs:[0], ebx */
  W32((uint32_t)(FS_BASE + 0x0u), ebx);
/* 41bd6f: jmp 0x41bd7a */
  goto L_41bd7a;
L_41bd71: /* 41bd71: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 41bd74: mov dword ptr fs:[0], eax */
  W32((uint32_t)(FS_BASE + 0x0u), eax);
L_41bd7a: /* 41bd7a: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 41bd7d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 41bd7e: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 41bd7f: ret  */
  esp += 4; SPILL(); return;
}

void f_41bd80(void) {
  LOAD_REGS();
L_41bd80: /* 41bd80: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 41bd82: push 0x43fe20 */
  { uint32_t v = 0x43fe20u; esp -= 4; W32(esp, v); }
/* 41bd87: call 0x40101f */
  esp -= 4; W32(esp, 0x41bd8cu); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 41bd8c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 41bd8f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41bd91: jne 0x41bdaa */
  if (!zf) goto L_41bdaa;
L_41bd93: /* 41bd93: push 0x43fdfc */
  { uint32_t v = 0x43fdfcu; esp -= 4; W32(esp, v); }
/* 41bd98: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 41bd9b: call 0x41aa9a */
  esp -= 4; W32(esp, 0x41bda0u); SPILL(); f_41aa9a(); if (g_unwind) return; RELOAD();
/* 41bda0: push 0x447f1c */
  { uint32_t v = 0x447f1cu; esp -= 4; W32(esp, v); }
/* 41bda5: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 41bda8: jmp 0x41be15 */
  goto L_41be15;
L_41bdaa: /* 41bdaa: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 41bdae: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 41bdb0: mov esi, dword ptr [eax - 4] */
  esi = R32((uint32_t)(eax + 0xfffffffcu));
/* 41bdb3: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
/* 41bdb6: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 41bdb8: push dword ptr [esi + 0xc] */
  { uint32_t v = R32((uint32_t)(esi + 0xcu)); esp -= 4; W32(esp, v); }
/* 41bdbb: call dword ptr [0x4391c8] */
  esp -= 4; W32(esp, 0x41bdc1u); SPILL(); call_ind(R32(0x4391c8u)); if (g_unwind) return; /* KERNEL32!IsBadReadPtr */ RELOAD();
/* 41bdc1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41bdc3: jne 0x41bdd2 */
  if (!zf) goto L_41bdd2;
L_41bdc5: /* 41bdc5: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 41bdc8: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 41bdcc: call 0x40105a */
  esp -= 4; W32(esp, 0x41bdd1u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 41bdd1: ret  */
  esp += 4; SPILL(); return;
L_41bdd2: /* 41bdd2: push 0x43fdd8 */
  { uint32_t v = 0x43fdd8u; esp -= 4; W32(esp, v); }
/* 41bdd7: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 41bdda: call 0x41aacb */
  esp -= 4; W32(esp, 0x41bddfu); SPILL(); f_41aacb(); if (g_unwind) return; RELOAD();
/* 41bddf: push 0x447f0c */
  { uint32_t v = 0x447f0cu; esp -= 4; W32(esp, v); }
/* 41bde4: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* 41bde7: jmp 0x41be15 */
  goto L_41be15;
L_41be15: /* 41be15: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41be16: call 0x41b9d1 */
  esp -= 4; W32(esp, 0x41be1bu); SPILL(); f_41b9d1(); if (g_unwind) return; RELOAD();
  SPILL(); f_41be1b(); return;
}

void f_41bde9(void) {
  LOAD_REGS();
L_41bde9: /* 41bde9: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 41bdec: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 41bdee: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 41bdf0: xor ecx, ecx */
  ecx = 0;
/* 41bdf2: cmp eax, 0xc0000005 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xc0000005u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41bdf7: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 41bdfa: mov eax, ecx */
  eax = ecx;
/* 41bdfc: ret  */
  esp += 4; SPILL(); return;
}

void f_41bdfd(void) {
  LOAD_REGS();
L_41bdfd: /* 41bdfd: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
/* 41be00: push 0x43fdb4 */
  { uint32_t v = 0x43fdb4u; esp -= 4; W32(esp, v); }
/* 41be05: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 41be08: call 0x41aacb */
  esp -= 4; W32(esp, 0x41be0du); SPILL(); f_41aacb(); if (g_unwind) return; RELOAD();
/* 41be0d: push 0x447f0c */
  { uint32_t v = 0x447f0cu; esp -= 4; W32(esp, v); }
/* 41be12: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 41be15: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41be16: call 0x41b9d1 */
  esp -= 4; W32(esp, 0x41be1bu); SPILL(); f_41b9d1(); if (g_unwind) return; RELOAD();
  SPILL(); f_41be1b(); return;
}

void f_41be1b(void) {
  LOAD_REGS();
L_41be1b: /* 41be1b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 41be1d: mov edx, dword ptr [eax - 4] */
  edx = R32((uint32_t)(eax + 0xfffffffcu));
/* 41be20: mov eax, ecx */
  eax = ecx;
/* 41be22: sub eax, dword ptr [edx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 41be25: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 41be28: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41be2a: je 0x41be30 */
  if (zf) goto L_41be30;
L_41be2c: /* 41be2c: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 41be2e: add eax, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_41be30: /* 41be30: ret  */
  esp += 4; SPILL(); return;
}

void f_41be31(void) {
  LOAD_REGS();
L_41be31: /* 41be31: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41be32: mov ebp, esp */
  ebp = esp;
/* 41be34: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41be35: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* 41be38: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 41be3c: cmp dword ptr [eax + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 41be40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41be41: mov esi, dword ptr [eax + 0xc] */
  esi = R32((uint32_t)(eax + 0xcu));
/* 41be44: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41be45: jbe 0x41be7c */
  if ((cf | zf)) goto L_41be7c;
L_41be47: /* 41be47: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 41be49: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 41be4b: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 41be4e: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41be50: je 0x41be65 */
  if (zf) goto L_41be65;
L_41be52: /* 41be52: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 41be55: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41be56: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 41be59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41be5a: call 0x406182 */
  esp -= 4; W32(esp, 0x41be5fu); SPILL(); f_406182(); if (g_unwind) return; RELOAD();
/* 41be5f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41be61: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41be62: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41be63: jne 0x41be6b */
  if (!zf) goto L_41be6b;
L_41be65: /* 41be65: test byte ptr [edi + 0x14], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x14u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41be69: je 0x41be82 */
  if (zf) goto L_41be82;
L_41be6b: /* 41be6b: inc dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 41be6e: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* 41be71: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 41be74: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 41be77: cmp ecx, dword ptr [eax + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 41be7a: jb 0x41be47 */
  if (cf) goto L_41be47;
L_41be7c: /* 41be7c: xor eax, eax */
  eax = 0;
L_41be7e: /* 41be7e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 41be7f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41be80: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 41be81: ret  */
  esp += 4; SPILL(); return;
L_41be82: /* 41be82: mov eax, edi */
  eax = edi;
/* 41be84: jmp 0x41be7e */
  goto L_41be7e;
}

void f_41be86(void) {
  LOAD_REGS();
L_41be86: /* 41be86: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 41be89: xor ecx, ecx */
  ecx = 0;
/* 41be8b: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 41be8d: jl 0x41bea0 */
  if ((sf != of)) goto L_41bea0;
L_41be8f: /* 41be8f: mov ecx, edx */
  ecx = edx;
/* 41be91: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 41be95: mov edx, dword ptr [ecx + edx] */
  edx = R32((uint32_t)(ecx + edx));
/* 41be98: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41be99: mov esi, dword ptr [eax + 8] */
  esi = R32((uint32_t)(eax + 0x8u));
/* 41be9c: add ecx, dword ptr [edx + esi] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + esi)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 41be9f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_41bea0: /* 41bea0: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 41bea2: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 41bea4: ret  */
  esp += 4; SPILL(); return;
}

void f_41bea5(void) {
  LOAD_REGS();
L_41bea5: /* 41bea5: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 41bea7: push 0x43fe30 */
  { uint32_t v = 0x43fe30u; esp -= 4; W32(esp, v); }
/* 41beac: call 0x40101f */
  esp -= 4; W32(esp, 0x41beb1u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 41beb1: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 41beb4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41beb6: jne 0x41bec0 */
  if (!zf) goto L_41bec0;
L_41beb8: /* 41beb8: xor eax, eax */
  eax = 0;
L_41beba: /* 41beba: call 0x40105a */
  esp -= 4; W32(esp, 0x41bebfu); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 41bebf: ret  */
  esp += 4; SPILL(); return;
L_41bec0: /* 41bec0: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 41bec4: call 0x41be1b */
  esp -= 4; W32(esp, 0x41bec9u); SPILL(); f_41be1b(); if (g_unwind) return; RELOAD();
/* 41bec9: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 41becd: jmp 0x41beba */
  goto L_41beba;
}

void f_41becf(void) {
  LOAD_REGS();
L_41becf: /* 41becf: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 41bed2: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 41bed4: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 41bed6: xor ecx, ecx */
  ecx = 0;
/* 41bed8: cmp eax, 0xc0000005 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xc0000005u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41bedd: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 41bee0: mov eax, ecx */
  eax = ecx;
/* 41bee2: ret  */
  esp += 4; SPILL(); return;
}

void f_41bee3(void) {
  LOAD_REGS();
L_41bee3: /* 41bee3: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
/* 41bee6: push 0x43fdb4 */
  { uint32_t v = 0x43fdb4u; esp -= 4; W32(esp, v); }
/* 41beeb: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 41beee: call 0x41aacb */
  esp -= 4; W32(esp, 0x41bef3u); SPILL(); f_41aacb(); if (g_unwind) return; RELOAD();
/* 41bef3: push 0x447f0c */
  { uint32_t v = 0x447f0cu; esp -= 4; W32(esp, v); }
/* 41bef8: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 41befb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41befc: call 0x41b9d1 */
  esp -= 4; W32(esp, 0x41bf01u); SPILL(); f_41b9d1(); if (g_unwind) return; RELOAD();
  SPILL(); f_41bf01(); return;
}

void f_41bf01(void) {
  LOAD_REGS();
L_41bf01: /* 41bf01: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41bf02: mov ebp, esp */
  ebp = esp;
/* 41bf04: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 41bf07: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* 41bf0a: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 41bf0e: cmp dword ptr [eax + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 41bf12: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41bf13: mov esi, dword ptr [eax + 0xc] */
  esi = R32((uint32_t)(eax + 0xcu));
/* 41bf16: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41bf17: jbe 0x41bfa7 */
  if ((cf | zf)) goto L_41bfa7;
L_41bf1d: /* 41bf1d: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 41bf1f: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 41bf21: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 41bf24: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41bf26: je 0x41bf3b */
  if (zf) goto L_41bf3b;
L_41bf28: /* 41bf28: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 41bf2b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41bf2c: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 41bf2f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41bf30: call 0x406182 */
  esp -= 4; W32(esp, 0x41bf35u); SPILL(); f_406182(); if (g_unwind) return; RELOAD();
/* 41bf35: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41bf37: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41bf38: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41bf39: jne 0x41bf92 */
  if (!zf) goto L_41bf92;
L_41bf3b: /* 41bf3b: and dword ptr [ebp - 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
/* 41bf3f: cmp dword ptr [edi + 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 41bf43: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 41bf46: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 41bf49: jbe 0x41bf92 */
  if ((cf | zf)) goto L_41bf92;
L_41bf4b: /* 41bf4b: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 41bf4e: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 41bf50: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 41bf52: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 41bf55: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41bf57: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 41bf5a: je 0x41bf72 */
  if (zf) goto L_41bf72;
L_41bf5c: /* 41bf5c: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 41bf5f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 41bf60: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 41bf63: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41bf64: call 0x406182 */
  esp -= 4; W32(esp, 0x41bf69u); SPILL(); f_406182(); if (g_unwind) return; RELOAD();
/* 41bf69: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41bf6b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41bf6c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41bf6d: jne 0x41bf83 */
  if (!zf) goto L_41bf83;
L_41bf6f: /* 41bf6f: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
L_41bf72: /* 41bf72: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 41bf75: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 41bf78: call 0x41be86 */
  esp -= 4; W32(esp, 0x41bf7du); SPILL(); f_41be86(); if (g_unwind) return; RELOAD();
/* 41bf7d: cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41bf80: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41bf81: je 0x41bff2 */
  if (zf) goto L_41bff2;
L_41bf83: /* 41bf83: inc dword ptr [ebp - 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
/* 41bf86: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
/* 41bf89: add dword ptr [ebp - 8], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 41bf8d: cmp eax, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 41bf90: jb 0x41bf4b */
  if (cf) goto L_41bf4b;
L_41bf92: /* 41bf92: inc dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 41bf95: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* 41bf98: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 41bf9b: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 41bf9e: cmp ecx, dword ptr [eax + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 41bfa1: jb 0x41bf1d */
  if (cf) goto L_41bf1d;
L_41bfa7: /* 41bfa7: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* 41bfaa: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 41bfae: cmp dword ptr [eax + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 41bfb2: mov edi, dword ptr [eax + 0xc] */
  edi = R32((uint32_t)(eax + 0xcu));
/* 41bfb5: jbe 0x41bfec */
  if ((cf | zf)) goto L_41bfec;
L_41bfb7: /* 41bfb7: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 41bfb9: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 41bfbb: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 41bfbe: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41bfc0: je 0x41bfd5 */
  if (zf) goto L_41bfd5;
L_41bfc2: /* 41bfc2: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 41bfc5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41bfc6: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 41bfc9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41bfca: call 0x406182 */
  esp -= 4; W32(esp, 0x41bfcfu); SPILL(); f_406182(); if (g_unwind) return; RELOAD();
/* 41bfcf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41bfd1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41bfd2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41bfd3: jne 0x41bfdb */
  if (!zf) goto L_41bfdb;
L_41bfd5: /* 41bfd5: test byte ptr [esi + 0x14], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x14u))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41bfd9: je 0x41bff6 */
  if (zf) goto L_41bff6;
L_41bfdb: /* 41bfdb: inc dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 41bfde: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* 41bfe1: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 41bfe4: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 41bfe7: cmp ecx, dword ptr [eax + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 41bfea: jb 0x41bfb7 */
  if (cf) goto L_41bfb7;
L_41bfec: /* 41bfec: xor eax, eax */
  eax = 0;
L_41bfee: /* 41bfee: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 41bfef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41bff0: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 41bff1: ret  */
  esp += 4; SPILL(); return;
L_41bff2: /* 41bff2: mov eax, edi */
  eax = edi;
/* 41bff4: jmp 0x41bfee */
  goto L_41bfee;
L_41bff6: /* 41bff6: mov eax, esi */
  eax = esi;
/* 41bff8: jmp 0x41bfee */
  goto L_41bfee;
}

void f_41bffa(void) {
  LOAD_REGS();
L_41bffa: /* 41bffa: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41bffb: mov ebp, esp */
  ebp = esp;
/* 41bffd: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 41c000: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41c001: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 41c004: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* 41c007: xor edx, edx */
  edx = 0;
/* 41c009: cmp dword ptr [eax + 8], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x8u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 41c00c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41c00d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41c00e: mov edi, dword ptr [eax + 0xc] */
  edi = R32((uint32_t)(eax + 0xcu));
/* 41c011: mov dword ptr [ebp - 8], edx */
  W32((uint32_t)(ebp + 0xfffffff8u), edx);
/* 41c014: mov dword ptr [ebp - 4], edx */
  W32((uint32_t)(ebp + 0xfffffffcu), edx);
/* 41c017: jbe 0x41c0e1 */
  if ((cf | zf)) goto L_41c0e1;
L_41c01d: /* 41c01d: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 41c01f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 41c021: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 41c024: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41c026: je 0x41c041 */
  if (zf) goto L_41c041;
L_41c028: /* 41c028: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 41c02b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41c02c: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 41c02f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41c030: call 0x406182 */
  esp -= 4; W32(esp, 0x41c035u); SPILL(); f_406182(); if (g_unwind) return; RELOAD();
/* 41c035: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41c037: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41c038: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41c039: jne 0x41c0c3 */
  if (!zf) goto L_41c0c3;
L_41c03f: /* 41c03f: xor edx, edx */
  edx = 0;
L_41c041: /* 41c041: cmp dword ptr [esi + 4], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 41c044: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
/* 41c047: mov dword ptr [ebp - 0x10], edx */
  W32((uint32_t)(ebp + 0xfffffff0u), edx);
/* 41c04a: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
/* 41c04d: jbe 0x41c0c5 */
  if ((cf | zf)) goto L_41c0c5;
L_41c04f: /* 41c04f: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
/* 41c052: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 41c054: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 41c056: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 41c059: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41c05b: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 41c05e: je 0x41c076 */
  if (zf) goto L_41c076;
L_41c060: /* 41c060: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 41c063: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 41c064: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 41c067: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41c068: call 0x406182 */
  esp -= 4; W32(esp, 0x41c06du); SPILL(); f_406182(); if (g_unwind) return; RELOAD();
/* 41c06d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41c06f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41c070: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41c071: jne 0x41c0b4 */
  if (!zf) goto L_41c0b4;
L_41c073: /* 41c073: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
L_41c076: /* 41c076: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 41c079: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 41c07c: call 0x41be86 */
  esp -= 4; W32(esp, 0x41c081u); SPILL(); f_41be86(); if (g_unwind) return; RELOAD();
/* 41c081: cmp eax, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41c084: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41c085: jne 0x41c0b4 */
  if (!zf) goto L_41c0b4;
L_41c087: /* 41c087: cmp dword ptr [ebp - 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41c08b: je 0x41c0b1 */
  if (zf) goto L_41c0b1;
L_41c08d: /* 41c08d: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 41c090: lea eax, [esi + 8] */
  eax = (uint32_t)(esi + 0x8u);
/* 41c093: call 0x41be86 */
  esp -= 4; W32(esp, 0x41c098u); SPILL(); f_41be86(); if (g_unwind) return; RELOAD();
/* 41c098: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 41c09b: mov ebx, eax */
  ebx = eax;
/* 41c09d: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 41c0a0: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 41c0a3: call 0x41be86 */
  esp -= 4; W32(esp, 0x41c0a8u); SPILL(); f_41be86(); if (g_unwind) return; RELOAD();
/* 41c0a8: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41c0aa: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41c0ab: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41c0ac: jne 0x41c124 */
  if (!zf) goto L_41c124;
L_41c0ae: /* 41c0ae: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
L_41c0b1: /* 41c0b1: mov dword ptr [ebp - 8], esi */
  W32((uint32_t)(ebp + 0xfffffff8u), esi);
L_41c0b4: /* 41c0b4: inc dword ptr [ebp - 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xfffffff0u), r);
  }
/* 41c0b7: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 41c0ba: add dword ptr [ebp - 0xc], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
/* 41c0be: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 41c0c1: jb 0x41c04f */
  if (cf) goto L_41c04f;
L_41c0c3: /* 41c0c3: xor edx, edx */
  edx = 0;
L_41c0c5: /* 41c0c5: inc dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 41c0c8: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* 41c0cb: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 41c0ce: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 41c0d1: cmp ecx, dword ptr [eax + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 41c0d4: jb 0x41c01d */
  if (cf) goto L_41c01d;
L_41c0da: /* 41c0da: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 41c0dd: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41c0df: jne 0x41c126 */
  if (!zf) goto L_41c126;
L_41c0e1: /* 41c0e1: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* 41c0e4: cmp dword ptr [eax + 8], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x8u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 41c0e7: mov edi, dword ptr [eax + 0xc] */
  edi = R32((uint32_t)(eax + 0xcu));
/* 41c0ea: mov dword ptr [ebp - 4], edx */
  W32((uint32_t)(ebp + 0xfffffffcu), edx);
/* 41c0ed: jbe 0x41c124 */
  if ((cf | zf)) goto L_41c124;
L_41c0ef: /* 41c0ef: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 41c0f1: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 41c0f3: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 41c0f6: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41c0f8: je 0x41c10d */
  if (zf) goto L_41c10d;
L_41c0fa: /* 41c0fa: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 41c0fd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41c0fe: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 41c101: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41c102: call 0x406182 */
  esp -= 4; W32(esp, 0x41c107u); SPILL(); f_406182(); if (g_unwind) return; RELOAD();
/* 41c107: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41c109: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41c10a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41c10b: jne 0x41c113 */
  if (!zf) goto L_41c113;
L_41c10d: /* 41c10d: test byte ptr [esi + 0x14], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x14u))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41c111: je 0x41c12b */
  if (zf) goto L_41c12b;
L_41c113: /* 41c113: inc dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 41c116: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* 41c119: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 41c11c: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 41c11f: cmp ecx, dword ptr [eax + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 41c122: jb 0x41c0ef */
  if (cf) goto L_41c0ef;
L_41c124: /* 41c124: xor eax, eax */
  eax = 0;
L_41c126: /* 41c126: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 41c127: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41c128: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 41c129: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 41c12a: ret  */
  esp += 4; SPILL(); return;
L_41c12b: /* 41c12b: mov eax, esi */
  eax = esi;
/* 41c12d: jmp 0x41c126 */
  goto L_41c126;
}

void f_41c12f(void) {
  LOAD_REGS();
L_41c12f: /* 41c12f: push 0x34 */
  { uint32_t v = 0x34u; esp -= 4; W32(esp, v); }
/* 41c131: push 0x43fe50 */
  { uint32_t v = 0x43fe50u; esp -= 4; W32(esp, v); }
/* 41c136: call 0x40101f */
  esp -= 4; W32(esp, 0x41c13bu); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 41c13b: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 41c13e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41c140: jne 0x41c14a */
  if (!zf) goto L_41c14a;
L_41c142: /* 41c142: xor eax, eax */
  eax = 0;
L_41c144: /* 41c144: call 0x40105a */
  esp -= 4; W32(esp, 0x41c149u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 41c149: ret  */
  esp += 4; SPILL(); return;
L_41c14a: /* 41c14a: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 41c14e: mov ecx, esi */
  ecx = esi;
/* 41c150: call 0x41be1b */
  esp -= 4; W32(esp, 0x41c155u); SPILL(); f_41be1b(); if (g_unwind) return; RELOAD();
/* 41c155: mov edi, eax */
  edi = eax;
/* 41c157: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* 41c15a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 41c15c: mov ebx, dword ptr [eax - 4] */
  ebx = R32((uint32_t)(eax + 0xfffffffcu));
/* 41c15f: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 41c162: sub esi, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 41c165: mov dword ptr [ebp + 8], esi */
  W32((uint32_t)(ebp + 0x8u), esi);
/* 41c168: sub esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 41c16a: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 41c16d: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* 41c170: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 41c173: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 41c176: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41c177: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 41c17a: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41c17c: jne 0x41c186 */
  if (!zf) goto L_41c186;
L_41c17e: /* 41c17e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41c17f: call 0x41be31 */
  esp -= 4; W32(esp, 0x41c184u); SPILL(); f_41be31(); if (g_unwind) return; RELOAD();
/* 41c184: jmp 0x41c190 */
  goto L_41c190;
L_41c186: /* 41c186: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41c188: jne 0x41c195 */
  if (!zf) goto L_41c195;
L_41c18a: /* 41c18a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41c18b: call 0x41bf01 */
  esp -= 4; W32(esp, 0x41c190u); SPILL(); f_41bf01(); if (g_unwind) return; RELOAD();
L_41c190: /* 41c190: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41c193: jmp 0x41c19f */
  goto L_41c19f;
L_41c195: /* 41c195: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41c196: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41c197: call 0x41bffa */
  esp -= 4; W32(esp, 0x41c19cu); SPILL(); f_41bffa(); if (g_unwind) return; RELOAD();
/* 41c19c: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_41c19f: /* 41c19f: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 41c1a2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41c1a4: je 0x41c1bb */
  if (zf) goto L_41c1bb;
L_41c1a6: /* 41c1a6: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 41c1a9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41c1aa: call 0x41be86 */
  esp -= 4; W32(esp, 0x41c1afu); SPILL(); f_41be86(); if (g_unwind) return; RELOAD();
/* 41c1af: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41c1b0: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 41c1b2: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
L_41c1b5: /* 41c1b5: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 41c1b9: jmp 0x41c144 */
  goto L_41c144;
L_41c1bb: /* 41c1bb: xor eax, eax */
  eax = 0;
/* 41c1bd: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 41c1c0: cmp dword ptr [ebp + 0x18], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x18u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41c1c3: je 0x41c1b5 */
  if (zf) goto L_41c1b5;
L_41c1c5: /* 41c1c5: push 0x43fe3c */
  { uint32_t v = 0x43fe3cu; esp -= 4; W32(esp, v); }
/* 41c1ca: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 41c1cd: call 0x41aa49 */
  esp -= 4; W32(esp, 0x41c1d2u); SPILL(); f_41aa49(); if (g_unwind) return; RELOAD();
/* 41c1d2: push 0x447f54 */
  { uint32_t v = 0x447f54u; esp -= 4; W32(esp, v); }
/* 41c1d7: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 41c1da: jmp 0x41c208 */
  goto L_41c208;
L_41c208: /* 41c208: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41c209: call 0x41b9d1 */
  esp -= 4; W32(esp, 0x41c20eu); SPILL(); f_41b9d1(); if (g_unwind) return; RELOAD();
  SPILL(); f_41c20e(); return;
}

void f_41c1dc(void) {
  LOAD_REGS();
L_41c1dc: /* 41c1dc: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 41c1df: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 41c1e1: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 41c1e3: xor ecx, ecx */
  ecx = 0;
/* 41c1e5: cmp eax, 0xc0000005 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xc0000005u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41c1ea: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 41c1ed: mov eax, ecx */
  eax = ecx;
/* 41c1ef: ret  */
  esp += 4; SPILL(); return;
}

void f_41c1f0(void) {
  LOAD_REGS();
L_41c1f0: /* 41c1f0: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
/* 41c1f3: push 0x43fdb4 */
  { uint32_t v = 0x43fdb4u; esp -= 4; W32(esp, v); }
/* 41c1f8: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 41c1fb: call 0x41aacb */
  esp -= 4; W32(esp, 0x41c200u); SPILL(); f_41aacb(); if (g_unwind) return; RELOAD();
/* 41c200: push 0x447f0c */
  { uint32_t v = 0x447f0cu; esp -= 4; W32(esp, v); }
/* 41c205: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* 41c208: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41c209: call 0x41b9d1 */
  esp -= 4; W32(esp, 0x41c20eu); SPILL(); f_41b9d1(); if (g_unwind) return; RELOAD();
  SPILL(); f_41c20e(); return;
}

void f_41c20e(void) {
  LOAD_REGS();
L_41c20e: /* 41c20e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41c20f: mov esi, ecx */
  esi = ecx;
/* 41c211: cmp dword ptr [esi + 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41c215: je 0x41c232 */
  if (zf) goto L_41c232;
L_41c217: /* 41c217: jmp 0x41c228 */
  goto L_41c228;
L_41c219: /* 41c219: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 41c21c: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 41c21e: push dword ptr [esi + 0xc] */
  { uint32_t v = R32((uint32_t)(esi + 0xcu)); esp -= 4; W32(esp, v); }
/* 41c221: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 41c224: call dword ptr [esi + 4] */
  { uint32_t t = R32((uint32_t)(esi + 0x4u)); esp -= 4; W32(esp, 0x41c227u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 41c227: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_41c228: /* 41c228: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 41c22b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41c22d: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 41c230: jne 0x41c219 */
  if (!zf) goto L_41c219;
L_41c232: /* 41c232: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41c233: ret  */
  esp += 4; SPILL(); return;
}

void f_41c234(void) {
  LOAD_REGS();
L_41c234: /* 41c234: mov ecx, dword ptr [0x44f478] */
  ecx = R32((uint32_t)(0x44f478u));
/* 41c23a: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 41c23c: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41c23e: jne 0x41c243 */
  if (!zf) goto L_41c243;
L_41c240: /* 41c240: xor eax, eax */
  eax = 0;
/* 41c242: ret  */
  esp += 4; SPILL(); return;
L_41c243: /* 41c243: cmp dl, 0x30 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 41c246: jl 0x41c25b */
  if ((sf != of)) goto L_41c25b;
L_41c248: /* 41c248: cmp dl, 0x39 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x39u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 41c24b: jg 0x41c25b */
  if ((!zf && sf == of)) goto L_41c25b;
L_41c24d: /* 41c24d: movsx eax, dl */
  eax = (uint32_t)(int32_t)(int8_t)((edx & 0xffu));
/* 41c250: sub eax, 0x2f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2fu);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 41c253: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 41c254: mov dword ptr [0x44f478], ecx */
  W32((uint32_t)(0x44f478u), ecx);
/* 41c25a: ret  */
  esp += 4; SPILL(); return;
L_41c25b: /* 41c25b: xor eax, eax */
  eax = 0;
/* 41c25d: jmp 0x41c280 */
  goto L_41c280;
L_41c25f: /* 41c25f: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41c261: je 0x41c240 */
  if (zf) goto L_41c240;
L_41c263: /* 41c263: cmp dl, 0x41 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a - b);
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 41c266: jl 0x41c293 */
  if ((sf != of)) goto L_41c293;
L_41c268: /* 41c268: cmp dl, 0x50 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x50u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 41c26b: jg 0x41c293 */
  if ((!zf && sf == of)) goto L_41c293;
L_41c26d: /* 41c26d: movsx edx, dl */
  edx = (uint32_t)(int32_t)(int8_t)((edx & 0xffu));
/* 41c270: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 41c273: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 41c274: lea eax, [eax + edx - 0x41] */
  eax = (uint32_t)(eax + edx + 0xffffffbfu);
/* 41c278: mov dword ptr [0x44f478], ecx */
  W32((uint32_t)(0x44f478u), ecx);
/* 41c27e: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
L_41c280: /* 41c280: cmp dl, 0x40 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41c283: jne 0x41c25f */
  if (!zf) goto L_41c25f;
L_41c285: /* 41c285: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 41c287: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 41c288: cmp dl, 0x40 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41c28b: mov dword ptr [0x44f478], ecx */
  W32((uint32_t)(0x44f478u), ecx);
/* 41c291: je 0x41c296 */
  if (zf) goto L_41c296;
L_41c293: /* 41c293: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_41c296: /* 41c296: ret  */
  esp += 4; SPILL(); return;
}

void f_41c297(void) {
  LOAD_REGS();
L_41c297: /* 41c297: mov ecx, dword ptr [0x44f478] */
  ecx = R32((uint32_t)(0x44f478u));
/* 41c29d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41c29e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41c29f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41c2a0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41c2a1: mov esi, 0x4000 */
  esi = 0x4000u;
L_41c2a6: /* 41c2a6: xor eax, eax */
  eax = 0;
/* 41c2a8: cmp byte ptr [ecx], 0x5f */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x5fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41c2ab: jne 0x41c2b6 */
  if (!zf) goto L_41c2b6;
L_41c2ad: /* 41c2ad: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 41c2ae: mov eax, esi */
  eax = esi;
/* 41c2b0: mov dword ptr [0x44f478], ecx */
  W32((uint32_t)(0x44f478u), ecx);
L_41c2b6: /* 41c2b6: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 41c2b8: cmp dl, 0x41 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a - b);
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 41c2bb: jl 0x41c2c6 */
  if ((sf != of)) goto L_41c2c6;
L_41c2bd: /* 41c2bd: cmp dl, 0x5a */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x5au);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 41c2c0: jle 0x41c355 */
  if ((zf || sf != of)) goto L_41c355;
L_41c2c6: /* 41c2c6: cmp dl, 0x24 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x24u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41c2c9: jne 0x41c54d */
  if (!zf) goto L_41c54d;
L_41c2cf: /* 41c2cf: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 41c2d0: mov dword ptr [0x44f478], ecx */
  W32((uint32_t)(0x44f478u), ecx);
/* 41c2d6: movsx edx, byte ptr [ecx] */
  edx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx)));
/* 41c2d9: cmp edx, 0x42 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x42u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41c2dc: jg 0x41c515 */
  if ((!zf && sf == of)) goto L_41c515;
L_41c2e2: /* 41c2e2: je 0x41c50e */
  if (zf) goto L_41c50e;
L_41c2e8: /* 41c2e8: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41c2ea: je 0x41c507 */
  if (zf) goto L_41c507;
L_41c2f0: /* 41c2f0: cmp edx, 0x24 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41c2f3: jne 0x41c445 */
  if (!zf) goto L_41c445;
L_41c2f9: /* 41c2f9: lea edx, [ecx + 1] */
  edx = (uint32_t)(ecx + 0x1u);
/* 41c2fc: cmp byte ptr [edx], 0x50 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x50u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41c2ff: jne 0x41c303 */
  if (!zf) goto L_41c303;
L_41c301: /* 41c301: mov ecx, edx */
  ecx = edx;
L_41c303: /* 41c303: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 41c304: mov dword ptr [0x44f478], ecx */
  W32((uint32_t)(0x44f478u), ecx);
/* 41c30a: movsx edx, byte ptr [ecx] */
  edx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx)));
/* 41c30d: add edx, -0x46 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffbau);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 41c310: cmp edx, 9 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x9u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 41c313: ja 0x41c541 */
  if ((!cf && !zf)) goto L_41c541;
L_41c319: /* 41c319: movzx edx, byte ptr [edx + 0x41c69b] */
  edx = (uint32_t)(R8((uint32_t)(edx + 0x41c69bu)));
/* 41c320: jmp dword ptr [edx*4 + 0x41c693] */
  switch (R32((uint32_t)(edx*4 + 0x41c693u))) {
    case 0x41c327u: goto L_41c327;
    case 0x41c32au: goto L_41c32a;
    default: guest_badjump(0x41c320, R32((uint32_t)(edx*4 + 0x41c693u))); return;
  }
L_41c327: /* 41c327: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 41c328: jmp 0x41c34a */
  goto L_41c34a;
L_41c32a: /* 41c32a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 41c32b: mov dword ptr [0x44f478], ecx */
  W32((uint32_t)(0x44f478u), ecx);
/* 41c331: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 41c333: cmp al, 0x30 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 41c335: jl 0x41c500 */
  if ((sf != of)) goto L_41c500;
L_41c33b: /* 41c33b: cmp al, 0x39 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x39u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 41c33d: jg 0x41c500 */
  if ((!zf && sf == of)) goto L_41c500;
L_41c343: /* 41c343: movsx eax, al */
  eax = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 41c346: lea ecx, [ecx + eax - 0x2f] */
  ecx = (uint32_t)(ecx + eax + 0xffffffd1u);
L_41c34a: /* 41c34a: mov dword ptr [0x44f478], ecx */
  W32((uint32_t)(0x44f478u), ecx);
/* 41c350: jmp 0x41c2a6 */
  goto L_41c2a6;
L_41c355: /* 41c355: movsx edx, byte ptr [ecx] */
  edx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx)));
/* 41c358: sub edx, 0x41 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x41u);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 41c35b: mov esi, 0x8000 */
  esi = 0x8000u;
/* 41c360: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 41c361: or eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 41c363: test dl, 1 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41c366: mov dword ptr [0x44f478], ecx */
  W32((uint32_t)(0x44f478u), ecx);
/* 41c36c: je 0x41c375 */
  if (zf) goto L_41c375;
L_41c36e: /* 41c36e: or eax, 0x2000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 41c373: jmp 0x41c37a */
  goto L_41c37a;
L_41c375: /* 41c375: and eax, 0xffffdfff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffdfffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_41c37a: /* 41c37a: cmp edx, 0x18 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41c37d: jge 0x41c68e */
  if ((sf == of)) goto L_41c68e;
L_41c383: /* 41c383: test esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41c385: mov ebp, 0xffff9fff */
  ebp = 0xffff9fffu;
/* 41c38a: mov ebx, 0xffffefff */
  ebx = 0xffffefffu;
/* 41c38f: mov edi, 0x800 */
  edi = 0x800u;
/* 41c394: je 0x41c39c */
  if (zf) goto L_41c39c;
L_41c396: /* 41c396: and eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41c398: or eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 41c39a: jmp 0x41c39e */
  goto L_41c39e;
L_41c39c: /* 41c39c: and eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_41c39e: /* 41c39e: mov ecx, edx */
  ecx = edx;
/* 41c3a0: and ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  ecx = r;
  }
/* 41c3a3: je 0x41c3df */
  if (zf) goto L_41c3df;
L_41c3a5: /* 41c3a5: cmp ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41c3a8: je 0x41c3c5 */
  if (zf) goto L_41c3c5;
L_41c3aa: /* 41c3aa: cmp ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41c3ad: jne 0x41c668 */
  if (!zf) goto L_41c668;
L_41c3b3: /* 41c3b3: test esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41c3b5: je 0x41c3be */
  if (zf) goto L_41c3be;
L_41c3b7: /* 41c3b7: and eax, 0xffffff3f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffff3fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41c3bc: jmp 0x41c3f1 */
  goto L_41c3f1;
L_41c3be: /* 41c3be: and eax, 0xffffe7ff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffe7ffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41c3c3: jmp 0x41c3f1 */
  goto L_41c3f1;
L_41c3c5: /* 41c3c5: test esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41c3c7: je 0x41c3d3 */
  if (zf) goto L_41c3d3;
L_41c3c9: /* 41c3c9: and eax, 0xffffffbf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffbfu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41c3cc: or eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 41c3d1: jmp 0x41c3f1 */
  goto L_41c3f1;
L_41c3d3: /* 41c3d3: and eax, 0xfffff7ff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffff7ffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41c3d8: or eax, 0x1000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 41c3dd: jmp 0x41c3f1 */
  goto L_41c3f1;
L_41c3df: /* 41c3df: test esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41c3e1: je 0x41c3ed */
  if (zf) goto L_41c3ed;
L_41c3e3: /* 41c3e3: and eax, 0xffffff7f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffff7fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41c3e8: or eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 41c3eb: jmp 0x41c3f1 */
  goto L_41c3f1;
L_41c3ed: /* 41c3ed: and eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41c3ef: or eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_41c3f1: /* 41c3f1: and edx, 6 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 41c3f4: sub edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  edx = r;
  }
/* 41c3f7: je 0x41c68e */
  if (zf) goto L_41c68e;
L_41c3fd: /* 41c3fd: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 41c3fe: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 41c3ff: je 0x41c42b */
  if (zf) goto L_41c42b;
L_41c401: /* 41c401: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 41c402: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 41c403: je 0x41c41c */
  if (zf) goto L_41c41c;
L_41c405: /* 41c405: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 41c406: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 41c407: jne 0x41c668 */
  if (!zf) goto L_41c668;
L_41c40d: /* 41c40d: and eax, 0xfffffcff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffcffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41c412: or eax, 0x400 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 41c417: jmp 0x41c68e */
  goto L_41c68e;
L_41c41c: /* 41c41c: and eax, 0xfffff9ff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffff9ffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41c421: or eax, 0x100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 41c426: jmp 0x41c68e */
  goto L_41c68e;
L_41c42b: /* 41c42b: test esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41c42d: je 0x41c43e */
  if (zf) goto L_41c43e;
L_41c42f: /* 41c42f: and eax, 0xfffffaff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffaffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41c434: or eax, 0x200 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 41c439: jmp 0x41c68e */
  goto L_41c68e;
L_41c43e: /* 41c43e: and eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41c440: jmp 0x41c68e */
  goto L_41c68e;
L_41c445: /* 41c445: cmp edx, 0x2f */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41c448: jle 0x41c668 */
  if ((zf || sf != of)) goto L_41c668;
L_41c44e: /* 41c44e: cmp edx, 0x35 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x35u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41c451: jle 0x41c46b */
  if ((zf || sf != of)) goto L_41c46b;
L_41c453: /* 41c453: cmp edx, 0x41 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x41u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41c456: jne 0x41c668 */
  if (!zf) goto L_41c668;
L_41c45c: /* 41c45c: and eax, 0xfffff4ff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffff4ffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41c461: or eax, 0x9000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x9000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 41c466: jmp 0x41c541 */
  goto L_41c541;
L_41c46b: /* 41c46b: movsx edx, byte ptr [ecx] */
  edx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx)));
/* 41c46e: mov esi, 0x8000 */
  esi = 0x8000u;
/* 41c473: or eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 41c475: sub edx, 0x30 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 41c478: test esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41c47a: mov ebx, 0xffffefff */
  ebx = 0xffffefffu;
/* 41c47f: mov edi, 0x800 */
  edi = 0x800u;
/* 41c484: je 0x41c48c */
  if (zf) goto L_41c48c;
L_41c486: /* 41c486: and eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41c488: or eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 41c48a: jmp 0x41c491 */
  goto L_41c491;
L_41c48c: /* 41c48c: and eax, 0xffff9fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffff9fffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_41c491: /* 41c491: and eax, 0xfffffdff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffdffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41c496: or eax, 0x500 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x500u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 41c49b: test dl, 1 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41c49e: je 0x41c4a7 */
  if (zf) goto L_41c4a7;
L_41c4a0: /* 41c4a0: or eax, 0x2000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 41c4a5: jmp 0x41c4ac */
  goto L_41c4ac;
L_41c4a7: /* 41c4a7: and eax, 0xffffdfff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffdfffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_41c4ac: /* 41c4ac: and edx, 6 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 41c4af: sub edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  edx = r;
  }
/* 41c4b2: je 0x41c4ec */
  if (zf) goto L_41c4ec;
L_41c4b4: /* 41c4b4: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 41c4b5: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 41c4b6: je 0x41c4d2 */
  if (zf) goto L_41c4d2;
L_41c4b8: /* 41c4b8: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 41c4b9: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 41c4ba: jne 0x41c668 */
  if (!zf) goto L_41c668;
L_41c4c0: /* 41c4c0: test esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41c4c2: je 0x41c4cb */
  if (zf) goto L_41c4cb;
L_41c4c4: /* 41c4c4: and eax, 0xffffff3f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffff3fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41c4c9: jmp 0x41c541 */
  goto L_41c541;
L_41c4cb: /* 41c4cb: and eax, 0xffffe7ff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffe7ffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41c4d0: jmp 0x41c541 */
  goto L_41c541;
L_41c4d2: /* 41c4d2: test esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41c4d4: je 0x41c4e0 */
  if (zf) goto L_41c4e0;
L_41c4d6: /* 41c4d6: and eax, 0xffffffbf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffbfu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41c4d9: or eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 41c4de: jmp 0x41c541 */
  goto L_41c541;
L_41c4e0: /* 41c4e0: and eax, 0xfffff7ff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffff7ffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41c4e5: or eax, 0x1000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 41c4ea: jmp 0x41c541 */
  goto L_41c541;
L_41c4ec: /* 41c4ec: test esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41c4ee: je 0x41c4fa */
  if (zf) goto L_41c4fa;
L_41c4f0: /* 41c4f0: and eax, 0xffffff7f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffff7fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41c4f5: or eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 41c4f8: jmp 0x41c541 */
  goto L_41c541;
L_41c4fa: /* 41c4fa: and eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41c4fc: or eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 41c4fe: jmp 0x41c541 */
  goto L_41c541;
L_41c500: /* 41c500: mov eax, 0xffff */
  eax = 0xffffu;
/* 41c505: jmp 0x41c541 */
  goto L_41c541;
L_41c507: /* 41c507: mov eax, 0xfffe */
  eax = 0xfffeu;
/* 41c50c: jmp 0x41c541 */
  goto L_41c541;
L_41c50e: /* 41c50e: or eax, 0x9800 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x9800u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 41c513: jmp 0x41c541 */
  goto L_41c541;
L_41c515: /* 41c515: sub edx, 0x43 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x43u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  edx = r;
  }
/* 41c518: je 0x41c53c */
  if (zf) goto L_41c53c;
L_41c51a: /* 41c51a: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 41c51b: je 0x41c530 */
  if (zf) goto L_41c530;
L_41c51d: /* 41c51d: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 41c51e: jne 0x41c668 */
  if (!zf) goto L_41c668;
L_41c524: /* 41c524: and eax, 0xfffff6ff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffff6ffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41c529: or eax, 0x9200 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x9200u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 41c52e: jmp 0x41c541 */
  goto L_41c541;
L_41c530: /* 41c530: and eax, 0xfffff5ff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffff5ffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41c535: or eax, 0x9100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x9100u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 41c53a: jmp 0x41c541 */
  goto L_41c541;
L_41c53c: /* 41c53c: or eax, 0x7c00 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7c00u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_41c541: /* 41c541: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 41c542: mov dword ptr [0x44f478], ecx */
  W32((uint32_t)(0x44f478u), ecx);
/* 41c548: jmp 0x41c68e */
  goto L_41c68e;
L_41c54d: /* 41c54d: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 41c54f: cmp dl, 0x30 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 41c552: jl 0x41c66f */
  if ((sf != of)) goto L_41c66f;
L_41c558: /* 41c558: cmp dl, 0x38 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x38u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 41c55b: jg 0x41c66f */
  if ((!zf && sf == of)) goto L_41c66f;
L_41c561: /* 41c561: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 41c562: movsx edx, dl */
  edx = (uint32_t)(int32_t)(int8_t)((edx & 0xffu));
/* 41c565: mov dword ptr [0x44f478], ecx */
  W32((uint32_t)(0x44f478u), ecx);
/* 41c56b: lea ecx, [edx - 0x30] */
  ecx = (uint32_t)(edx + 0xffffffd0u);
/* 41c56e: and eax, 0xffff7fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffff7fffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41c573: cmp ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 41c576: ja 0x41c668 */
  if ((!cf && !zf)) goto L_41c668;
L_41c57c: /* 41c57c: jmp dword ptr [ecx*4 + 0x41c6a5] */
  switch (R32((uint32_t)(ecx*4 + 0x41c6a5u))) {
    case 0x41c583u: goto L_41c583;
    case 0x41c5bdu: goto L_41c5bd;
    case 0x41c5f7u: goto L_41c5f7;
    case 0x41c623u: goto L_41c623;
    case 0x41c62cu: goto L_41c62c;
    case 0x41c638u: goto L_41c638;
    case 0x41c644u: goto L_41c644;
    case 0x41c650u: goto L_41c650;
    case 0x41c65cu: goto L_41c65c;
    default: guest_badjump(0x41c57c, R32((uint32_t)(ecx*4 + 0x41c6a5u))); return;
  }
L_41c583: /* 41c583: mov esi, 0x8000 */
  esi = 0x8000u;
/* 41c588: test esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41c58a: je 0x41c598 */
  if (zf) goto L_41c598;
L_41c58c: /* 41c58c: and eax, 0xfffffaff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffaffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41c591: or eax, 0x200 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 41c596: jmp 0x41c59d */
  goto L_41c59d;
L_41c598: /* 41c598: and eax, 0xffff9fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffff9fffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_41c59d: /* 41c59d: test esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41c59f: je 0x41c5ae */
  if (zf) goto L_41c5ae;
L_41c5a1: /* 41c5a1: and eax, 0xffffff7f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffff7fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41c5a6: or eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 41c5a9: jmp 0x41c68e */
  goto L_41c68e;
L_41c5ae: /* 41c5ae: and eax, 0xffffefff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffefffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41c5b3: or eax, 0x800 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x800u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 41c5b8: jmp 0x41c68e */
  goto L_41c68e;
L_41c5bd: /* 41c5bd: mov esi, 0x8000 */
  esi = 0x8000u;
/* 41c5c2: test esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41c5c4: je 0x41c5d2 */
  if (zf) goto L_41c5d2;
L_41c5c6: /* 41c5c6: and eax, 0xfffffaff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffaffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41c5cb: or eax, 0x200 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 41c5d0: jmp 0x41c5d7 */
  goto L_41c5d7;
L_41c5d2: /* 41c5d2: and eax, 0xffff9fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffff9fffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_41c5d7: /* 41c5d7: test esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41c5d9: je 0x41c5e8 */
  if (zf) goto L_41c5e8;
L_41c5db: /* 41c5db: and eax, 0xffffffbf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffbfu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41c5de: or eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 41c5e3: jmp 0x41c68e */
  goto L_41c68e;
L_41c5e8: /* 41c5e8: and eax, 0xfffff7ff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffff7ffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41c5ed: or eax, 0x1000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 41c5f2: jmp 0x41c68e */
  goto L_41c68e;
L_41c5f7: /* 41c5f7: mov esi, 0x8000 */
  esi = 0x8000u;
/* 41c5fc: test esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41c5fe: je 0x41c60c */
  if (zf) goto L_41c60c;
L_41c600: /* 41c600: and eax, 0xfffffaff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffaffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41c605: or eax, 0x200 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 41c60a: jmp 0x41c611 */
  goto L_41c611;
L_41c60c: /* 41c60c: and eax, 0xffff9fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffff9fffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_41c611: /* 41c611: test esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41c613: je 0x41c61c */
  if (zf) goto L_41c61c;
L_41c615: /* 41c615: and eax, 0xffffff3f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffff3fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41c61a: jmp 0x41c68e */
  goto L_41c68e;
L_41c61c: /* 41c61c: and eax, 0xffffe7ff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffe7ffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41c621: jmp 0x41c68e */
  goto L_41c68e;
L_41c623: /* 41c623: and eax, 0xffffdfff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffdfffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41c628: or eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 41c62a: jmp 0x41c68e */
  goto L_41c68e;
L_41c62c: /* 41c62c: and eax, 0xffffe3ff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffe3ffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41c631: or eax, 0x6000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 41c636: jmp 0x41c68e */
  goto L_41c68e;
L_41c638: /* 41c638: and eax, 0xffffbfff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffbfffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41c63d: or eax, 0x2000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 41c642: jmp 0x41c68e */
  goto L_41c68e;
L_41c644: /* 41c644: and eax, 0xffffebff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffebffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41c649: or eax, 0x6800 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6800u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 41c64e: jmp 0x41c68e */
  goto L_41c68e;
L_41c650: /* 41c650: and eax, 0xfffff3ff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffff3ffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41c655: or eax, 0x7000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 41c65a: jmp 0x41c68e */
  goto L_41c68e;
L_41c65c: /* 41c65c: and eax, 0xfffffbff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffbffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41c661: or eax, 0x7800 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7800u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 41c666: jmp 0x41c68e */
  goto L_41c68e;
L_41c668: /* 41c668: mov eax, 0xffff */
  eax = 0xffffu;
/* 41c66d: jmp 0x41c68e */
  goto L_41c68e;
L_41c66f: /* 41c66f: cmp dl, 0x39 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x39u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41c672: jne 0x41c682 */
  if (!zf) goto L_41c682;
L_41c674: /* 41c674: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 41c675: mov dword ptr [0x44f478], ecx */
  W32((uint32_t)(0x44f478u), ecx);
/* 41c67b: mov eax, 0xfffd */
  eax = 0xfffdu;
/* 41c680: jmp 0x41c68e */
  goto L_41c68e;
L_41c682: /* 41c682: xor eax, eax */
  eax = 0;
/* 41c684: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41c686: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 41c689: add eax, 0xfffe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffeu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_41c68e: /* 41c68e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 41c68f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41c690: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 41c691: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 41c692: ret  */
  esp += 4; SPILL(); return;
}

void f_41c6c9(void) {
  LOAD_REGS();
L_41c6c9: /* 41c6c9: mov eax, dword ptr [0x44f488] */
  eax = R32((uint32_t)(0x44f488u));
/* 41c6ce: not eax */
  eax = ~eax;
/* 41c6d0: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41c6d2: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 41c6d6: mov eax, dword ptr [eax*4 + 0x43fe60] */
  eax = R32((uint32_t)(eax*4 + 0x43fe60u));
/* 41c6dd: jne 0x41c6e1 */
  if (!zf) goto L_41c6e1;
L_41c6df: /* 41c6df: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 41c6e0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_41c6e1: /* 41c6e1: ret  */
  esp += 4; SPILL(); return;
}

void f_41c6e2(void) {
  LOAD_REGS();
L_41c6e2: /* 41c6e2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41c6e3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41c6e4: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 41c6e8: add edi, 7 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 41c6eb: and edi, 0xfffffff8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 41c6ee: cmp dword ptr [esp + 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41c6f3: mov esi, ecx */
  esi = ecx;
/* 41c6f5: je 0x41c6fd */
  if (zf) goto L_41c6fd;
L_41c6f7: /* 41c6f7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41c6f8: call dword ptr [esi] */
  { uint32_t t = R32((uint32_t)(esi)); esp -= 4; W32(esp, 0x41c6fau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 41c6fa: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41c6fb: jmp 0x41c761 */
  goto L_41c761;
L_41c6fd: /* 41c6fd: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41c6ff: jne 0x41c704 */
  if (!zf) goto L_41c704;
L_41c701: /* 41c701: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 41c703: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_41c704: /* 41c704: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 41c707: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 41c709: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41c70a: jae 0x41c751 */
  if (!cf) goto L_41c751;
L_41c70c: /* 41c70c: mov ebx, 0x1fc */
  ebx = 0x1fcu;
/* 41c711: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 41c713: jbe 0x41c719 */
  if ((cf | zf)) goto L_41c719;
L_41c715: /* 41c715: xor eax, eax */
  eax = 0;
/* 41c717: jmp 0x41c760 */
  goto L_41c760;
L_41c719: /* 41c719: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 41c71b: push 0x200 */
  { uint32_t v = 0x200u; esp -= 4; W32(esp, v); }
/* 41c720: mov ecx, 0x44f458 */
  ecx = 0x44f458u;
/* 41c725: call 0x41c6e2 */
  esp -= 4; W32(esp, 0x41c72au); SPILL(); f_41c6e2(); if (g_unwind) return; RELOAD();
/* 41c72a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41c72c: je 0x41c733 */
  if (zf) goto L_41c733;
L_41c72e: /* 41c72e: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 41c731: jmp 0x41c735 */
  goto L_41c735;
L_41c733: /* 41c733: xor eax, eax */
  eax = 0;
L_41c735: /* 41c735: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41c737: je 0x41c715 */
  if (zf) goto L_41c715;
L_41c739: /* 41c739: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 41c73c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41c73e: je 0x41c744 */
  if (zf) goto L_41c744;
L_41c740: /* 41c740: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 41c742: jmp 0x41c747 */
  goto L_41c747;
L_41c744: /* 41c744: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
L_41c747: /* 41c747: sub ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 41c749: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 41c74c: mov dword ptr [esi + 0x10], ebx */
  W32((uint32_t)(esi + 0x10u), ebx);
/* 41c74f: jmp 0x41c756 */
  goto L_41c756;
L_41c751: /* 41c751: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 41c753: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
L_41c756: /* 41c756: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 41c759: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 41c75c: lea eax, [eax + ecx + 4] */
  eax = (uint32_t)(eax + ecx + 0x4u);
L_41c760: /* 41c760: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_41c761: /* 41c761: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 41c762: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41c763: ret 8 */
  esp += 12; SPILL(); return;
}

void f_41c766(void) {
  LOAD_REGS();
L_41c766: /* 41c766: mov eax, ecx */
  eax = ecx;
/* 41c768: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 41c76c: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 41c76f: shl edx, 0x1c */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 28;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 41c772: sar edx, 0x1c */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 28;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 41c775: xor edx, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 41c778: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41c779: and edx, 0xf */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 41c77c: xor dword ptr [eax + 4], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  W32((uint32_t)(eax + 0x4u), r);
  }
/* 41c77f: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 41c782: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 41c785: xor edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 41c787: and edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 41c78a: xor edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 41c78c: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 41c78f: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 41c792: xor esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  esi = r;
  }
/* 41c794: and esi, 0x20 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 41c797: xor esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  esi = r;
  }
/* 41c799: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 41c79c: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 41c79f: xor edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 41c7a1: and edx, 0x40 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 41c7a4: xor edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 41c7a6: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 41c7a9: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 41c7ac: xor esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  esi = r;
  }
/* 41c7ae: and esi, 0x80 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 41c7b4: xor esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  esi = r;
  }
/* 41c7b6: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 41c7b9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 41c7bb: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 41c7bd: mov edx, esi */
  edx = esi;
/* 41c7bf: xor edx, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 41c7c2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41c7c3: and edx, 0x100 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 41c7c9: xor dword ptr [eax + 4], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  W32((uint32_t)(eax + 0x4u), r);
  }
/* 41c7cc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_41c7cf(void) {
  LOAD_REGS();
L_41c7cf: /* 41c7cf: mov eax, ecx */
  eax = ecx;
/* 41c7d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41c7d2: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 41c7d5: mov ecx, esi */
  ecx = esi;
/* 41c7d7: shl ecx, 0x1c */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 28;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 41c7da: sar ecx, 0x1c */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 28;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  zf = r == 0;
  ecx = r;
  }
/* 41c7dd: je 0x41c7e4 */
  if (zf) goto L_41c7e4;
L_41c7df: /* 41c7df: cmp ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41c7e2: jne 0x41c836 */
  if (!zf) goto L_41c836;
L_41c7e4: /* 41c7e4: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 41c7e8: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 41c7eb: shl edx, 0x1c */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 28;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 41c7ee: sar edx, 0x1c */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 28;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 41c7f1: xor edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 41c7f3: and edx, 0xf */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 41c7f6: xor edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 41c7f8: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 41c7fb: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 41c7fe: xor esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  esi = r;
  }
/* 41c800: and esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 41c803: xor esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  esi = r;
  }
/* 41c805: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 41c808: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 41c80b: xor edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 41c80d: and edx, 0x20 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 41c810: xor edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 41c812: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 41c815: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 41c818: xor esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  esi = r;
  }
/* 41c81a: and esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 41c81d: xor esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  esi = r;
  }
/* 41c81f: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 41c822: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 41c825: xor edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 41c827: and edx, 0x80 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 41c82d: xor edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 41c82f: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 41c832: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 41c834: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_41c836: /* 41c836: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41c837: ret 4 */
  esp += 8; SPILL(); return;
}

void f_41c83a(void) {
  LOAD_REGS();
L_41c83a: /* 41c83a: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 41c83e: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 41c840: jl 0x41c85d */
  if ((sf != of)) goto L_41c85d;
L_41c842: /* 41c842: cmp edx, 9 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x9u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41c845: jg 0x41c85d */
  if ((!zf && sf == of)) goto L_41c85d;
L_41c847: /* 41c847: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 41c849: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41c84c: je 0x41c858 */
  if (zf) goto L_41c858;
L_41c84e: /* 41c84e: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41c850: jg 0x41c858 */
  if ((!zf && sf == of)) goto L_41c858;
L_41c852: /* 41c852: mov eax, dword ptr [ecx + edx*4 + 4] */
  eax = R32((uint32_t)(ecx + edx*4 + 0x4u));
/* 41c856: jmp 0x41c860 */
  goto L_41c860;
L_41c858: /* 41c858: lea eax, [ecx + 0x34] */
  eax = (uint32_t)(ecx + 0x34u);
/* 41c85b: jmp 0x41c860 */
  goto L_41c860;
L_41c85d: /* 41c85d: lea eax, [ecx + 0x2c] */
  eax = (uint32_t)(ecx + 0x2cu);
L_41c860: /* 41c860: ret 4 */
  esp += 8; SPILL(); return;
}

void f_41c863(void) {
  LOAD_REGS();
L_41c863: /* 41c863: mov eax, ecx */
  eax = ecx;
/* 41c865: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 41c869: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41c86b: je 0x41c889 */
  if (zf) goto L_41c889;
L_41c86d: /* 41c86d: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 41c870: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41c872: je 0x41c886 */
  if (zf) goto L_41c886;
L_41c874: /* 41c874: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41c875: jmp 0x41c879 */
  goto L_41c879;
L_41c877: /* 41c877: mov edx, esi */
  edx = esi;
L_41c879: /* 41c879: mov esi, dword ptr [edx + 4] */
  esi = R32((uint32_t)(edx + 0x4u));
/* 41c87c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41c87e: jne 0x41c877 */
  if (!zf) goto L_41c877;
L_41c880: /* 41c880: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 41c883: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41c884: jmp 0x41c889 */
  goto L_41c889;
L_41c886: /* 41c886: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
L_41c889: /* 41c889: ret 4 */
  esp += 8; SPILL(); return;
}

void f_41c88c(void) {
  LOAD_REGS();
L_41c88c: /* 41c88c: xor eax, eax */
  eax = 0;
/* 41c88e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 41c88f: ret  */
  esp += 4; SPILL(); return;
}

void f_41c890(void) {
  LOAD_REGS();
L_41c890: /* 41c890: mov al, byte ptr [ecx + 8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x8u))) & 0xffu);
/* 41c893: ret  */
  esp += 4; SPILL(); return;
}

void f_41c894(void) {
  LOAD_REGS();
L_41c894: /* 41c894: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 41c898: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41c89a: je 0x41c8aa */
  if (zf) goto L_41c8aa;
L_41c89c: /* 41c89c: cmp dword ptr [esp + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41c8a1: je 0x41c8aa */
  if (zf) goto L_41c8aa;
L_41c8a3: /* 41c8a3: mov cl, byte ptr [ecx + 8] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x8u))) & 0xffu);
/* 41c8a6: mov byte ptr [eax], cl */
  W8((uint32_t)(eax), (ecx & 0xffu));
/* 41c8a8: jmp 0x41c8ac */
  goto L_41c8ac;
L_41c8aa: /* 41c8aa: xor eax, eax */
  eax = 0;
L_41c8ac: /* 41c8ac: ret 8 */
  esp += 12; SPILL(); return;
}

void f_41c8af(void) {
  LOAD_REGS();
L_41c8af: /* 41c8af: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 41c8b3: mov eax, ecx */
  eax = ecx;
/* 41c8b5: and dword ptr [eax + 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x4u), r);
  }
/* 41c8b9: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41c8bb: mov dword ptr [eax], 0x440498 */
  W32((uint32_t)(eax), 0x440498u);
/* 41c8c1: je 0x41c8d8 */
  if (zf) goto L_41c8d8;
L_41c8c3: /* 41c8c3: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 41c8c6: shl ecx, 0x1c */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 28;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 41c8c9: sar ecx, 0x1c */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 28;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 41c8cc: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41c8cf: je 0x41c8d6 */
  if (zf) goto L_41c8d6;
L_41c8d1: /* 41c8d1: cmp ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41c8d4: jne 0x41c8d8 */
  if (!zf) goto L_41c8d8;
L_41c8d6: /* 41c8d6: xor edx, edx */
  edx = 0;
L_41c8d8: /* 41c8d8: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 41c8db: ret 4 */
  esp += 8; SPILL(); return;
}

void f_41c8de(void) {
  LOAD_REGS();
L_41c8de: /* 41c8de: mov eax, ecx */
  eax = ecx;
/* 41c8e0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 41c8e4: and dword ptr [eax + 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x4u), r);
  }
/* 41c8e8: cmp ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41c8eb: mov dword ptr [eax], 0x4404a4 */
  W32((uint32_t)(eax), 0x4404a4u);
/* 41c8f1: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 41c8f4: jne 0x41c8fb */
  if (!zf) goto L_41c8fb;
L_41c8f6: /* 41c8f6: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 41c8f8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41c8f9: jmp 0x41c8fd */
  goto L_41c8fd;
L_41c8fb: /* 41c8fb: xor ecx, ecx */
  ecx = 0;
L_41c8fd: /* 41c8fd: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 41c900: ret 4 */
  esp += 8; SPILL(); return;
}

void f_41c903(void) {
  LOAD_REGS();
L_41c903: /* 41c903: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 41c906: ret  */
  esp += 4; SPILL(); return;
}

void f_41c907(void) {
  LOAD_REGS();
L_41c907: /* 41c907: cmp dword ptr [ecx + 8], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x8u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41c90b: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 41c90e: dec al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - 1);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 41c910: and eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41c913: ret  */
  esp += 4; SPILL(); return;
}

void f_41c914(void) {
  LOAD_REGS();
L_41c914: /* 41c914: cmp dword ptr [esp + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41c919: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 41c91d: je 0x41c92f */
  if (zf) goto L_41c92f;
L_41c91f: /* 41c91f: mov al, byte ptr [edx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* 41c921: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41c923: mov byte ptr [ecx], al */
  W8((uint32_t)(ecx), (eax & 0xffu));
/* 41c925: je 0x41c92f */
  if (zf) goto L_41c92f;
L_41c927: /* 41c927: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 41c928: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 41c929: dec dword ptr [esp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x8u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x8u), r);
  }
/* 41c92d: jne 0x41c91f */
  if (!zf) goto L_41c91f;
L_41c92f: /* 41c92f: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 41c933: ret  */
  esp += 4; SPILL(); return;
}

void f_41c934(void) {
  LOAD_REGS();
L_41c934: /* 41c934: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41c935: mov ebp, esp */
  ebp = esp;
/* 41c937: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 41c93a: xor ecx, ecx */
  ecx = 0;
/* 41c93c: mov eax, 0xfffffe00 */
  eax = 0xfffffe00u;
/* 41c941: and dword ptr [ebp - 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 41c944: and dword ptr [ebp - 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
/* 41c947: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41c948: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 41c94b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41c94c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41c94d: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 41c950: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41c951: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 41c954: mov dword ptr [ebp - 8], ecx */
  W32((uint32_t)(ebp + 0xfffffff8u), ecx);
/* 41c957: mov dword ptr [ebp - 0x10], ecx */
  W32((uint32_t)(ebp + 0xfffffff0u), ecx);
/* 41c95a: call 0x41fe0e */
  esp -= 4; W32(esp, 0x41c95fu); SPILL(); f_41fe0e(); if (g_unwind) return; RELOAD();
/* 41c95f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 41c962: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41c965: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 41c966: ret  */
  esp += 4; SPILL(); return;
}

void f_41c967(void) {
  LOAD_REGS();
L_41c967: /* 41c967: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41c968: mov ebp, esp */
  ebp = esp;
/* 41c96a: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 41c96d: mov eax, 0xfffffe00 */
  eax = 0xfffffe00u;
/* 41c972: and dword ptr [ebp - 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 41c975: and dword ptr [ebp - 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
/* 41c978: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 41c97a: xor ecx, ecx */
  ecx = 0;
/* 41c97c: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 41c97f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41c980: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41c981: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 41c984: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41c985: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 41c988: mov dword ptr [ebp - 8], ecx */
  W32((uint32_t)(ebp + 0xfffffff8u), ecx);
/* 41c98b: mov dword ptr [ebp - 0x10], ecx */
  W32((uint32_t)(ebp + 0xfffffff0u), ecx);
/* 41c98e: call 0x41fe0e */
  esp -= 4; W32(esp, 0x41c993u); SPILL(); f_41fe0e(); if (g_unwind) return; RELOAD();
/* 41c993: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 41c996: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41c999: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 41c99a: ret  */
  esp += 4; SPILL(); return;
}

void f_41c99b(void) {
  LOAD_REGS();
L_41c99b: /* 41c99b: cmp dword ptr [esp + 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41c9a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41c9a1: mov esi, ecx */
  esi = ecx;
/* 41c9a3: je 0x41c9dd */
  if (zf) goto L_41c9dd;
L_41c9a5: /* 41c9a5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 41c9a7: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 41c9a9: mov ecx, 0x44f458 */
  ecx = 0x44f458u;
/* 41c9ae: call 0x41c6e2 */
  esp -= 4; W32(esp, 0x41c9b3u); SPILL(); f_41c6e2(); if (g_unwind) return; RELOAD();
/* 41c9b3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41c9b5: je 0x41c9c4 */
  if (zf) goto L_41c9c4;
L_41c9b7: /* 41c9b7: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 41c9bb: mov ecx, eax */
  ecx = eax;
/* 41c9bd: call 0x41c8af */
  esp -= 4; W32(esp, 0x41c9c2u); SPILL(); f_41c8af(); if (g_unwind) return; RELOAD();
/* 41c9c2: jmp 0x41c9c6 */
  goto L_41c9c6;
L_41c9c4: /* 41c9c4: xor eax, eax */
  eax = 0;
L_41c9c6: /* 41c9c6: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 41c9c8: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 41c9ca: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 41c9cc: and eax, 0xfffffffd */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41c9cf: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 41c9d2: xor eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 41c9d5: and eax, 0xf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41c9d8: xor dword ptr [esi + 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 41c9db: jmp 0x41c9e4 */
  goto L_41c9e4;
L_41c9dd: /* 41c9dd: and dword ptr [esi + 4], 0xfffffff0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 41c9e1: and dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi), r);
  }
L_41c9e4: /* 41c9e4: and word ptr [esi + 4], 0xfe0f */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0x4u))); uint16_t b = (uint16_t)(0xfe0fu);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(esi + 0x4u), r);
  }
/* 41c9ea: mov eax, esi */
  eax = esi;
/* 41c9ec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41c9ed: ret 4 */
  esp += 8; SPILL(); return;
}

void f_41c9f0(void) {
  LOAD_REGS();
L_41c9f0: /* 41c9f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41c9f1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41c9f2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 41c9f6: cmp edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41c9f9: mov esi, ecx */
  esi = ecx;
/* 41c9fb: je 0x41ca06 */
  if (zf) goto L_41ca06;
L_41c9fd: /* 41c9fd: cmp edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41ca00: je 0x41ca06 */
  if (zf) goto L_41ca06;
L_41ca02: /* 41ca02: xor eax, eax */
  eax = 0;
/* 41ca04: jmp 0x41ca08 */
  goto L_41ca08;
L_41ca06: /* 41ca06: mov eax, edi */
  eax = edi;
L_41ca08: /* 41ca08: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 41ca0b: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 41ca0d: and ecx, 0xf */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 41ca10: xor dword ptr [esi + 4], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 41ca13: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 41ca15: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 41ca17: mov ecx, 0x44f458 */
  ecx = 0x44f458u;
/* 41ca1c: call 0x41c6e2 */
  esp -= 4; W32(esp, 0x41ca21u); SPILL(); f_41c6e2(); if (g_unwind) return; RELOAD();
/* 41ca21: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41ca23: je 0x41ca2f */
  if (zf) goto L_41ca2f;
L_41ca25: /* 41ca25: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41ca26: mov ecx, eax */
  ecx = eax;
/* 41ca28: call 0x41c8de */
  esp -= 4; W32(esp, 0x41ca2du); SPILL(); f_41c8de(); if (g_unwind) return; RELOAD();
/* 41ca2d: jmp 0x41ca31 */
  goto L_41ca31;
L_41ca2f: /* 41ca2f: xor eax, eax */
  eax = 0;
L_41ca31: /* 41ca31: and word ptr [esi + 4], 0xfe0f */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0x4u))); uint16_t b = (uint16_t)(0xfe0fu);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(esi + 0x4u), r);
  }
/* 41ca37: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41ca39: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 41ca3c: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 41ca3e: jne 0x41ca49 */
  if (!zf) goto L_41ca49;
L_41ca40: /* 41ca40: and ecx, 0xfffffff3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffff3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 41ca43: or ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 41ca46: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
L_41ca49: /* 41ca49: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 41ca4a: mov eax, esi */
  eax = esi;
/* 41ca4c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41ca4d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_41ca50(void) {
  LOAD_REGS();
L_41ca50: /* 41ca50: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 41ca53: shl eax, 0x1c */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 28;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 41ca56: sar eax, 0x1c */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 28;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  zf = r == 0;
  eax = r;
  }
/* 41ca59: je 0x41ca63 */
  if (zf) goto L_41ca63;
L_41ca5b: /* 41ca5b: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41ca5e: je 0x41ca63 */
  if (zf) goto L_41ca63;
L_41ca60: /* 41ca60: xor eax, eax */
  eax = 0;
/* 41ca62: ret  */
  esp += 4; SPILL(); return;
L_41ca63: /* 41ca63: xor eax, eax */
  eax = 0;
/* 41ca65: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 41ca66: ret  */
  esp += 4; SPILL(); return;
}

void f_41ca67(void) {
  LOAD_REGS();
L_41ca67: /* 41ca67: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41ca6a: je 0x41ca78 */
  if (zf) goto L_41ca78;
L_41ca6c: /* 41ca6c: call 0x41ca50 */
  esp -= 4; W32(esp, 0x41ca71u); SPILL(); f_41ca50(); if (g_unwind) return; RELOAD();
/* 41ca71: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41ca73: je 0x41ca78 */
  if (zf) goto L_41ca78;
L_41ca75: /* 41ca75: xor eax, eax */
  eax = 0;
/* 41ca77: ret  */
  esp += 4; SPILL(); return;
L_41ca78: /* 41ca78: xor eax, eax */
  eax = 0;
/* 41ca7a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 41ca7b: ret  */
  esp += 4; SPILL(); return;
}

void f_41ca7c(void) {
  LOAD_REGS();
L_41ca7c: /* 41ca7c: call 0x41ca67 */
  esp -= 4; W32(esp, 0x41ca81u); SPILL(); f_41ca67(); if (g_unwind) return; RELOAD();
/* 41ca81: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41ca83: jne 0x41ca8d */
  if (!zf) goto L_41ca8d;
L_41ca85: /* 41ca85: test byte ptr [ecx + 4], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x4u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41ca89: je 0x41ca8d */
  if (zf) goto L_41ca8d;
L_41ca8b: /* 41ca8b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 41ca8c: ret  */
  esp += 4; SPILL(); return;
L_41ca8d: /* 41ca8d: xor eax, eax */
  eax = 0;
/* 41ca8f: ret  */
  esp += 4; SPILL(); return;
}

void f_41ca90(void) {
  LOAD_REGS();
L_41ca90: /* 41ca90: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41ca91: xor edi, edi */
  edi = 0;
/* 41ca93: call 0x41ca67 */
  esp -= 4; W32(esp, 0x41ca98u); SPILL(); f_41ca67(); if (g_unwind) return; RELOAD();
/* 41ca98: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41ca9a: jne 0x41cab1 */
  if (!zf) goto L_41cab1;
L_41ca9c: /* 41ca9c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41ca9d: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 41ca9f: jmp 0x41caac */
  goto L_41caac;
L_41caa1: /* 41caa1: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 41caa3: mov ecx, esi */
  ecx = esi;
/* 41caa5: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x41caa7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 41caa7: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 41caaa: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_41caac: /* 41caac: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41caae: jne 0x41caa1 */
  if (!zf) goto L_41caa1;
L_41cab0: /* 41cab0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_41cab1: /* 41cab1: mov eax, edi */
  eax = edi;
/* 41cab3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 41cab4: ret  */
  esp += 4; SPILL(); return;
}

void f_41cab5(void) {
  LOAD_REGS();
L_41cab5: /* 41cab5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41cab6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41cab7: xor edi, edi */
  edi = 0;
/* 41cab9: call 0x41ca67 */
  esp -= 4; W32(esp, 0x41cabeu); SPILL(); f_41ca67(); if (g_unwind) return; RELOAD();
/* 41cabe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41cac0: jne 0x41cae8 */
  if (!zf) goto L_41cae8;
L_41cac2: /* 41cac2: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 41cac4: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41cac6: je 0x41cae8 */
  if (zf) goto L_41cae8;
L_41cac8: /* 41cac8: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 41caca: mov ecx, esi */
  ecx = esi;
/* 41cacc: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x41caceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 41cace: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41cad0: je 0x41cad4 */
  if (zf) goto L_41cad4;
L_41cad2: /* 41cad2: mov edi, esi */
  edi = esi;
L_41cad4: /* 41cad4: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 41cad7: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41cad9: jne 0x41cac8 */
  if (!zf) goto L_41cac8;
L_41cadb: /* 41cadb: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41cadd: je 0x41cae8 */
  if (zf) goto L_41cae8;
L_41cadf: /* 41cadf: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 41cae1: mov ecx, edi */
  ecx = edi;
/* 41cae3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 41cae4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41cae5: jmp dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); SPILL(); call_ind(t); return; }
L_41cae8: /* 41cae8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 41cae9: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 41caeb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41caec: ret  */
  esp += 4; SPILL(); return;
}

void f_41caed(void) {
  LOAD_REGS();
L_41caed: /* 41caed: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41caee: mov ebp, esp */
  ebp = esp;
/* 41caf0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41caf1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41caf2: mov edi, ecx */
  edi = ecx;
/* 41caf4: call 0x41ca67 */
  esp -= 4; W32(esp, 0x41caf9u); SPILL(); f_41ca67(); if (g_unwind) return; RELOAD();
/* 41caf9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41cafb: jne 0x41cb69 */
  if (!zf) goto L_41cb69;
L_41cafd: /* 41cafd: cmp dword ptr [ebp + 8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41cb00: jne 0x41cb20 */
  if (!zf) goto L_41cb20;
L_41cb02: /* 41cb02: call 0x41ca90 */
  esp -= 4; W32(esp, 0x41cb07u); SPILL(); f_41ca90(); if (g_unwind) return; RELOAD();
/* 41cb07: mov esi, eax */
  esi = eax;
/* 41cb09: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 41cb0b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 41cb0c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41cb0d: mov ecx, 0x44f458 */
  ecx = 0x44f458u;
/* 41cb12: call 0x41c6e2 */
  esp -= 4; W32(esp, 0x41cb17u); SPILL(); f_41c6e2(); if (g_unwind) return; RELOAD();
/* 41cb17: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41cb19: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 41cb1c: je 0x41cb75 */
  if (zf) goto L_41cb75;
L_41cb1e: /* 41cb1e: jmp 0x41cb23 */
  goto L_41cb23;
L_41cb20: /* 41cb20: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
L_41cb23: /* 41cb23: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 41cb26: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41cb27: mov ebx, esi */
  ebx = esi;
/* 41cb29: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 41cb2b: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 41cb2e: jmp 0x41cb5f */
  goto L_41cb5f;
L_41cb30: /* 41cb30: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 41cb32: jle 0x41cb63 */
  if ((zf || sf != of)) goto L_41cb63;
L_41cb34: /* 41cb34: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 41cb36: mov ecx, esi */
  ecx = esi;
/* 41cb38: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x41cb3au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 41cb3a: mov edi, eax */
  edi = eax;
/* 41cb3c: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41cb3e: je 0x41cb5c */
  if (zf) goto L_41cb5c;
L_41cb40: /* 41cb40: mov eax, ebx */
  eax = ebx;
/* 41cb42: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 41cb44: jns 0x41cb48 */
  if (!sf) goto L_41cb48;
L_41cb46: /* 41cb46: mov edi, ebx */
  edi = ebx;
L_41cb48: /* 41cb48: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 41cb4a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41cb4b: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 41cb4e: mov ecx, esi */
  ecx = esi;
/* 41cb50: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x41cb53u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 41cb53: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41cb55: je 0x41cb5c */
  if (zf) goto L_41cb5c;
L_41cb57: /* 41cb57: sub ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 41cb59: add dword ptr [ebp + 0xc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xcu), r);
  }
L_41cb5c: /* 41cb5c: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
L_41cb5f: /* 41cb5f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41cb61: jne 0x41cb30 */
  if (!zf) goto L_41cb30;
L_41cb63: /* 41cb63: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 41cb66: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 41cb67: jmp 0x41cb72 */
  goto L_41cb72;
L_41cb69: /* 41cb69: cmp dword ptr [ebp + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41cb6d: je 0x41cb75 */
  if (zf) goto L_41cb75;
L_41cb6f: /* 41cb6f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_41cb72: /* 41cb72: and byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(eax), r);
  }
L_41cb75: /* 41cb75: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 41cb78: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 41cb79: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41cb7a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 41cb7b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_41cb7e(void) {
  LOAD_REGS();
L_41cb7e: /* 41cb7e: mov edx, ecx */
  edx = ecx;
/* 41cb80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41cb81: mov esi, dword ptr [edx + 4] */
  esi = R32((uint32_t)(edx + 0x4u));
/* 41cb84: mov eax, esi */
  eax = esi;
/* 41cb86: and eax, 0xf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41cb89: cmp al, 3 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41cb8b: je 0x41cbad */
  if (zf) goto L_41cbad;
L_41cb8d: /* 41cb8d: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 41cb91: call 0x41ca50 */
  esp -= 4; W32(esp, 0x41cb96u); SPILL(); f_41ca50(); if (g_unwind) return; RELOAD();
/* 41cb96: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41cb98: jne 0x41cbad */
  if (!zf) goto L_41cbad;
L_41cb9a: /* 41cb9a: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 41cb9d: shl eax, 0x1c */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 28;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 41cba0: sar eax, 0x1c */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 28;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 41cba3: xor eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 41cba5: and eax, 0xf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41cba8: xor eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 41cbaa: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
L_41cbad: /* 41cbad: mov eax, edx */
  eax = edx;
/* 41cbaf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41cbb0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_41cbb3(void) {
  LOAD_REGS();
L_41cbb3: /* 41cbb3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41cbb4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41cbb5: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 41cbb9: cmp edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41cbbc: mov esi, ecx */
  esi = ecx;
/* 41cbbe: je 0x41cc11 */
  if (zf) goto L_41cc11;
L_41cbc0: /* 41cbc0: cmp edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41cbc3: je 0x41cc11 */
  if (zf) goto L_41cc11;
L_41cbc5: /* 41cbc5: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 41cbc8: mov ecx, eax */
  ecx = eax;
/* 41cbca: shl ecx, 0x1c */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 28;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 41cbcd: sar ecx, 0x1c */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 28;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  zf = r == 0;
  ecx = r;
  }
/* 41cbd0: je 0x41cbd7 */
  if (zf) goto L_41cbd7;
L_41cbd2: /* 41cbd2: cmp ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41cbd5: jne 0x41cc2d */
  if (!zf) goto L_41cc2d;
L_41cbd7: /* 41cbd7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 41cbd9: and eax, 0xffffff0f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffff0fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41cbde: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 41cbe0: mov ecx, 0x44f458 */
  ecx = 0x44f458u;
/* 41cbe5: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 41cbe8: call 0x41c6e2 */
  esp -= 4; W32(esp, 0x41cbedu); SPILL(); f_41c6e2(); if (g_unwind) return; RELOAD();
/* 41cbed: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41cbef: je 0x41cbfb */
  if (zf) goto L_41cbfb;
L_41cbf1: /* 41cbf1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41cbf2: mov ecx, eax */
  ecx = eax;
/* 41cbf4: call 0x41c8de */
  esp -= 4; W32(esp, 0x41cbf9u); SPILL(); f_41c8de(); if (g_unwind) return; RELOAD();
/* 41cbf9: jmp 0x41cbfd */
  goto L_41cbfd;
L_41cbfb: /* 41cbfb: xor eax, eax */
  eax = 0;
L_41cbfd: /* 41cbfd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41cbff: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 41cc01: jne 0x41cc2d */
  if (!zf) goto L_41cc2d;
L_41cc03: /* 41cc03: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 41cc06: and eax, 0xfffffff3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff3u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41cc09: or eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 41cc0c: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 41cc0f: jmp 0x41cc2d */
  goto L_41cc2d;
L_41cc11: /* 41cc11: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 41cc14: and dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi), r);
  }
/* 41cc17: mov ecx, eax */
  ecx = eax;
/* 41cc19: and ecx, 0xf */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 41cc1c: cmp cl, 3 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41cc1f: je 0x41cc2d */
  if (zf) goto L_41cc2d;
L_41cc21: /* 41cc21: mov ecx, eax */
  ecx = eax;
/* 41cc23: xor ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 41cc25: and ecx, 0xf */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 41cc28: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 41cc2a: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
L_41cc2d: /* 41cc2d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 41cc2e: mov eax, esi */
  eax = esi;
/* 41cc30: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41cc31: ret 4 */
  esp += 8; SPILL(); return;
}

void f_41cc34(void) {
  LOAD_REGS();
L_41cc34: /* 41cc34: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41cc35: mov esi, ecx */
  esi = ecx;
/* 41cc37: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 41cc39: lea ecx, [esi + 0x2c] */
  ecx = (uint32_t)(esi + 0x2cu);
/* 41cc3c: call 0x41c9f0 */
  esp -= 4; W32(esp, 0x41cc41u); SPILL(); f_41c9f0(); if (g_unwind) return; RELOAD();
/* 41cc41: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 41cc43: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
/* 41cc46: call 0x41c9f0 */
  esp -= 4; W32(esp, 0x41cc4bu); SPILL(); f_41c9f0(); if (g_unwind) return; RELOAD();
/* 41cc4b: or dword ptr [esi], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi), r);
  }
/* 41cc4e: mov eax, esi */
  eax = esi;
/* 41cc50: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41cc51: ret  */
  esp += 4; SPILL(); return;
}

void f_41cc52(void) {
  LOAD_REGS();
L_41cc52: /* 41cc52: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41cc53: mov esi, ecx */
  esi = ecx;
/* 41cc55: cmp dword ptr [esi], 9 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x9u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41cc58: je 0x41cc93 */
  if (zf) goto L_41cc93;
L_41cc5a: /* 41cc5a: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 41cc5e: call 0x41ca67 */
  esp -= 4; W32(esp, 0x41cc63u); SPILL(); f_41ca67(); if (g_unwind) return; RELOAD();
/* 41cc63: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41cc65: jne 0x41cc93 */
  if (!zf) goto L_41cc93;
L_41cc67: /* 41cc67: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41cc68: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 41cc6a: mov ecx, 0x44f458 */
  ecx = 0x44f458u;
/* 41cc6f: call 0x41c6e2 */
  esp -= 4; W32(esp, 0x41cc74u); SPILL(); f_41c6e2(); if (g_unwind) return; RELOAD();
/* 41cc74: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41cc76: je 0x41cc85 */
  if (zf) goto L_41cc85;
L_41cc78: /* 41cc78: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 41cc7c: mov ecx, eax */
  ecx = eax;
/* 41cc7e: call 0x41c766 */
  esp -= 4; W32(esp, 0x41cc83u); SPILL(); f_41c766(); if (g_unwind) return; RELOAD();
/* 41cc83: jmp 0x41cc87 */
  goto L_41cc87;
L_41cc85: /* 41cc85: xor eax, eax */
  eax = 0;
L_41cc87: /* 41cc87: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41cc89: je 0x41cc93 */
  if (zf) goto L_41cc93;
L_41cc8b: /* 41cc8b: inc dword ptr [esi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi), r);
  }
/* 41cc8d: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 41cc8f: mov dword ptr [esi + ecx*4 + 4], eax */
  W32((uint32_t)(esi + ecx*4 + 0x4u), eax);
L_41cc93: /* 41cc93: mov eax, esi */
  eax = esi;
/* 41cc95: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41cc96: ret 4 */
  esp += 8; SPILL(); return;
}

void f_41cc99(void) {
  LOAD_REGS();
L_41cc99: /* 41cc99: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41cc9a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41cc9b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41cc9c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 41cc9e: mov edi, ecx */
  edi = ecx;
/* 41cca0: mov esi, 0x44f458 */
  esi = 0x44f458u;
/* 41cca5: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 41cca7: mov ecx, esi */
  ecx = esi;
/* 41cca9: call 0x41c6e2 */
  esp -= 4; W32(esp, 0x41ccaeu); SPILL(); f_41c6e2(); if (g_unwind) return; RELOAD();
/* 41ccae: mov ebx, eax */
  ebx = eax;
/* 41ccb0: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41ccb2: je 0x41ccd9 */
  if (zf) goto L_41ccd9;
L_41ccb4: /* 41ccb4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 41ccb6: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 41ccb8: mov ecx, esi */
  ecx = esi;
/* 41ccba: call 0x41c6e2 */
  esp -= 4; W32(esp, 0x41ccbfu); SPILL(); f_41c6e2(); if (g_unwind) return; RELOAD();
/* 41ccbf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41ccc1: je 0x41cccd */
  if (zf) goto L_41cccd;
L_41ccc3: /* 41ccc3: and word ptr [eax + 4], 0xfe00 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x4u))); uint16_t b = (uint16_t)(0xfe00u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(eax + 0x4u), r);
  }
/* 41ccc9: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 41cccb: jmp 0x41cccf */
  goto L_41cccf;
L_41cccd: /* 41cccd: xor eax, eax */
  eax = 0;
L_41cccf: /* 41cccf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41ccd0: mov ecx, ebx */
  ecx = ebx;
/* 41ccd2: call 0x41c8af */
  esp -= 4; W32(esp, 0x41ccd7u); SPILL(); f_41c8af(); if (g_unwind) return; RELOAD();
/* 41ccd7: jmp 0x41ccdb */
  goto L_41ccdb;
L_41ccd9: /* 41ccd9: xor eax, eax */
  eax = 0;
L_41ccdb: /* 41ccdb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 41ccdc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41ccdd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 41ccde: ret  */
  esp += 4; SPILL(); return;
}

void f_41ccdf(void) {
  LOAD_REGS();
L_41ccdf: /* 41ccdf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41cce0: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 41cce4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41cce5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41cce6: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 41ccea: xor eax, eax */
  eax = 0;
/* 41ccec: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41ccee: mov esi, ecx */
  esi = ecx;
/* 41ccf0: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 41ccf3: mov dword ptr [esi], 0x4404b0 */
  W32((uint32_t)(esi), 0x4404b0u);
/* 41ccf9: jne 0x41cd11 */
  if (!zf) goto L_41cd11;
L_41ccfb: /* 41ccfb: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41ccfd: je 0x41cd38 */
  if (zf) goto L_41cd38;
L_41ccff: /* 41ccff: xor edi, edi */
  edi = 0;
/* 41cd01: cmp byte ptr [ebx], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41cd04: je 0x41cd0d */
  if (zf) goto L_41cd0d;
L_41cd06: /* 41cd06: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 41cd07: cmp byte ptr [edi + ebx], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + ebx))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41cd0b: jne 0x41cd06 */
  if (!zf) goto L_41cd06;
L_41cd0d: /* 41cd0d: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41cd0f: je 0x41cd38 */
  if (zf) goto L_41cd38;
L_41cd11: /* 41cd11: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41cd13: je 0x41cd38 */
  if (zf) goto L_41cd38;
L_41cd15: /* 41cd15: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41cd16: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41cd17: mov ecx, 0x44f458 */
  ecx = 0x44f458u;
/* 41cd1c: call 0x41c6e2 */
  esp -= 4; W32(esp, 0x41cd21u); SPILL(); f_41c6e2(); if (g_unwind) return; RELOAD();
/* 41cd21: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41cd23: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 41cd26: mov dword ptr [esi + 0xc], edi */
  W32((uint32_t)(esi + 0xcu), edi);
/* 41cd29: je 0x41cd3e */
  if (zf) goto L_41cd3e;
L_41cd2b: /* 41cd2b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41cd2c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41cd2d: mov edx, ebx */
  edx = ebx;
/* 41cd2f: call 0x41c914 */
  esp -= 4; W32(esp, 0x41cd34u); SPILL(); f_41c914(); if (g_unwind) return; RELOAD();
/* 41cd34: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41cd35: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41cd36: jmp 0x41cd3e */
  goto L_41cd3e;
L_41cd38: /* 41cd38: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 41cd3b: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
L_41cd3e: /* 41cd3e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 41cd3f: mov eax, esi */
  eax = esi;
/* 41cd41: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41cd42: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 41cd43: ret 8 */
  esp += 12; SPILL(); return;
}

void f_41cd46(void) {
  LOAD_REGS();
L_41cd46: /* 41cd46: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 41cd49: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41cd4b: je 0x41cd55 */
  if (zf) goto L_41cd55;
L_41cd4d: /* 41cd4d: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 41cd50: mov al, byte ptr [ecx + eax - 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + eax + 0xffffffffu))) & 0xffu);
/* 41cd54: ret  */
  esp += 4; SPILL(); return;
L_41cd55: /* 41cd55: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 41cd57: ret  */
  esp += 4; SPILL(); return;
}

void f_41cd58(void) {
  LOAD_REGS();
L_41cd58: /* 41cd58: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 41cd5b: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 41cd5f: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41cd61: jle 0x41cd65 */
  if ((zf || sf != of)) goto L_41cd65;
L_41cd63: /* 41cd63: mov edx, eax */
  edx = eax;
L_41cd65: /* 41cd65: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 41cd68: xor eax, eax */
  eax = 0;
/* 41cd6a: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41cd6c: je 0x41cd86 */
  if (zf) goto L_41cd86;
L_41cd6e: /* 41cd6e: cmp dword ptr [esp + 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41cd72: je 0x41cd86 */
  if (zf) goto L_41cd86;
L_41cd74: /* 41cd74: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41cd76: je 0x41cd86 */
  if (zf) goto L_41cd86;
L_41cd78: /* 41cd78: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 41cd79: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 41cd7d: mov edx, ecx */
  edx = ecx;
/* 41cd7f: call 0x41c914 */
  esp -= 4; W32(esp, 0x41cd84u); SPILL(); f_41c914(); if (g_unwind) return; RELOAD();
/* 41cd84: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41cd85: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_41cd86: /* 41cd86: ret 8 */
  esp += 12; SPILL(); return;
}

void f_41cd89(void) {
  LOAD_REGS();
L_41cd89: /* 41cd89: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 41cd8c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41cd8e: jne 0x41ca90 */
  if (!zf) { SPILL(); f_41ca90(); return; }
L_41cd94: /* 41cd94: xor eax, eax */
  eax = 0;
/* 41cd96: ret  */
  esp += 4; SPILL(); return;
}

void f_41cd97(void) {
  LOAD_REGS();
L_41cd97: /* 41cd97: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 41cd9a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41cd9c: jne 0x41cab5 */
  if (!zf) { SPILL(); f_41cab5(); return; }
L_41cda2: /* 41cda2: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 41cda4: ret  */
  esp += 4; SPILL(); return;
}

void f_41cda5(void) {
  LOAD_REGS();
L_41cda5: /* 41cda5: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 41cda8: xor eax, eax */
  eax = 0;
/* 41cdaa: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41cdac: je 0x41cdbe */
  if (zf) goto L_41cdbe;
L_41cdae: /* 41cdae: cmp dword ptr [esp + 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41cdb2: je 0x41cdbe */
  if (zf) goto L_41cdbe;
L_41cdb4: /* 41cdb4: cmp dword ptr [esp + 8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41cdb8: jne 0x41caed */
  if (!zf) { SPILL(); f_41caed(); return; }
L_41cdbe: /* 41cdbe: ret 8 */
  esp += 12; SPILL(); return;
}

void f_41cdc1(void) {
  LOAD_REGS();
L_41cdc1: /* 41cdc1: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 41cdc4: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 41cdc8: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41cdca: jle 0x41cdce */
  if ((zf || sf != of)) goto L_41cdce;
L_41cdcc: /* 41cdcc: mov edx, eax */
  edx = eax;
L_41cdce: /* 41cdce: xor eax, eax */
  eax = 0;
/* 41cdd0: cmp dword ptr [ecx + 8], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x8u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41cdd4: jne 0x41cdf1 */
  if (!zf) goto L_41cdf1;
L_41cdd6: /* 41cdd6: cmp dword ptr [esp + 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41cdda: je 0x41cdf1 */
  if (zf) goto L_41cdf1;
L_41cddc: /* 41cddc: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41cdde: je 0x41cdf1 */
  if (zf) goto L_41cdf1;
L_41cde0: /* 41cde0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 41cde1: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 41cde5: mov edx, 0x4404bc */
  edx = 0x4404bcu;
/* 41cdea: call 0x41c914 */
  esp -= 4; W32(esp, 0x41cdefu); SPILL(); f_41c914(); if (g_unwind) return; RELOAD();
/* 41cdef: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41cdf0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_41cdf1: /* 41cdf1: ret 8 */
  esp += 12; SPILL(); return;
}

void f_41cdf4(void) {
  LOAD_REGS();
L_41cdf4: /* 41cdf4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41cdf5: mov ebp, esp */
  ebp = esp;
/* 41cdf7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41cdf8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41cdf9: mov esi, ecx */
  esi = ecx;
/* 41cdfb: call 0x41cc34 */
  esp -= 4; W32(esp, 0x41ce00u); SPILL(); f_41cc34(); if (g_unwind) return; RELOAD();
/* 41ce00: lea edi, [esi + 0x3c] */
  edi = (uint32_t)(esi + 0x3cu);
/* 41ce03: mov ecx, edi */
  ecx = edi;
/* 41ce05: call 0x41cc34 */
  esp -= 4; W32(esp, 0x41ce0au); SPILL(); f_41cc34(); if (g_unwind) return; RELOAD();
/* 41ce0a: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 41ce0d: mov dword ptr [0x44f47c], eax */
  W32((uint32_t)(0x44f47cu), eax);
/* 41ce12: mov dword ptr [0x44f478], eax */
  W32((uint32_t)(0x44f478u), eax);
/* 41ce17: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 41ce1a: xor ecx, ecx */
  ecx = 0;
/* 41ce1c: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41ce1e: je 0x41ce31 */
  if (zf) goto L_41ce31;
L_41ce20: /* 41ce20: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 41ce23: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 41ce24: mov dword ptr [0x44f484], edx */
  W32((uint32_t)(0x44f484u), edx);
/* 41ce2a: mov dword ptr [0x44f480], eax */
  W32((uint32_t)(0x44f480u), eax);
/* 41ce2f: jmp 0x41ce3d */
  goto L_41ce3d;
L_41ce31: /* 41ce31: mov dword ptr [0x44f480], ecx */
  W32((uint32_t)(0x44f480u), ecx);
/* 41ce37: mov dword ptr [0x44f484], ecx */
  W32((uint32_t)(0x44f484u), ecx);
L_41ce3d: /* 41ce3d: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 41ce40: mov dword ptr [0x44f488], eax */
  W32((uint32_t)(0x44f488u), eax);
/* 41ce45: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 41ce48: mov dword ptr [0x44f470], edi */
  W32((uint32_t)(0x44f470u), edi);
/* 41ce4e: mov dword ptr [0x44f48c], eax */
  W32((uint32_t)(0x44f48cu), eax);
/* 41ce53: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 41ce54: mov dword ptr [0x44f46c], esi */
  W32((uint32_t)(0x44f46cu), esi);
/* 41ce5a: mov eax, esi */
  eax = esi;
/* 41ce5c: mov byte ptr [0x44f490], cl */
  W8((uint32_t)(0x44f490u), (ecx & 0xffu));
/* 41ce62: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41ce63: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 41ce64: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_41ce67(void) {
  LOAD_REGS();
L_41ce67: /* 41ce67: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41ce68: mov ebp, esp */
  ebp = esp;
/* 41ce6a: mov eax, dword ptr [0x44f478] */
  eax = R32((uint32_t)(0x44f478u));
/* 41ce6f: cmp byte ptr [eax], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41ce72: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 41ce75: jne 0x41ce87 */
  if (!zf) goto L_41ce87;
L_41ce77: /* 41ce77: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 41ce7a: inc dword ptr [0x44f478] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f478u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0x44f478u), r);
  }
/* 41ce80: call 0x41c99b */
  esp -= 4; W32(esp, 0x41ce85u); SPILL(); f_41c99b(); if (g_unwind) return; RELOAD();
/* 41ce85: jmp 0x41ce91 */
  goto L_41ce91;
L_41ce87: /* 41ce87: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 41ce8a: call 0x420bd2 */
  esp -= 4; W32(esp, 0x41ce8fu); SPILL(); f_420bd2(); if (g_unwind) return; RELOAD();
/* 41ce8f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41ce90: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_41ce91: /* 41ce91: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 41ce94: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 41ce95: ret  */
  esp += 4; SPILL(); return;
}

void f_41ce96(void) {
  LOAD_REGS();
L_41ce96: /* 41ce96: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41ce97: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41ce98: mov esi, ecx */
  esi = ecx;
/* 41ce9a: call 0x41ca67 */
  esp -= 4; W32(esp, 0x41ce9fu); SPILL(); f_41ca67(); if (g_unwind) return; RELOAD();
/* 41ce9f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41cea1: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 41cea5: jne 0x41cf02 */
  if (!zf) goto L_41cf02;
L_41cea7: /* 41cea7: cmp edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41ceaa: je 0x41cf02 */
  if (zf) goto L_41cf02;
L_41ceac: /* 41ceac: cmp edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41ceaf: je 0x41cf02 */
  if (zf) goto L_41cf02;
L_41ceb1: /* 41ceb1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 41ceb3: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 41ceb5: mov ecx, 0x44f458 */
  ecx = 0x44f458u;
/* 41ceba: call 0x41c6e2 */
  esp -= 4; W32(esp, 0x41cebfu); SPILL(); f_41c6e2(); if (g_unwind) return; RELOAD();
/* 41cebf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41cec1: je 0x41cecf */
  if (zf) goto L_41cecf;
L_41cec3: /* 41cec3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41cec4: mov ecx, eax */
  ecx = eax;
/* 41cec6: call 0x41c8de */
  esp -= 4; W32(esp, 0x41cecbu); SPILL(); f_41c8de(); if (g_unwind) return; RELOAD();
/* 41cecb: mov edi, eax */
  edi = eax;
/* 41cecd: jmp 0x41ced1 */
  goto L_41ced1;
L_41cecf: /* 41cecf: xor edi, edi */
  edi = 0;
L_41ced1: /* 41ced1: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41ced3: je 0x41ceec */
  if (zf) goto L_41ceec;
L_41ced5: /* 41ced5: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 41ced7: call 0x41cc99 */
  esp -= 4; W32(esp, 0x41cedcu); SPILL(); f_41cc99(); if (g_unwind) return; RELOAD();
/* 41cedc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41cede: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 41cee0: je 0x41cef4 */
  if (zf) goto L_41cef4;
L_41cee2: /* 41cee2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41cee3: mov ecx, eax */
  ecx = eax;
/* 41cee5: call 0x41c863 */
  esp -= 4; W32(esp, 0x41ceeau); SPILL(); f_41c863(); if (g_unwind) return; RELOAD();
/* 41ceea: jmp 0x41ceef */
  goto L_41ceef;
L_41ceec: /* 41ceec: and dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi), r);
  }
L_41ceef: /* 41ceef: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41cef2: jne 0x41cf0a */
  if (!zf) goto L_41cf0a;
L_41cef4: /* 41cef4: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 41cef7: and eax, 0xfffffff3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff3u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41cefa: or eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 41cefd: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 41cf00: jmp 0x41cf0a */
  goto L_41cf0a;
L_41cf02: /* 41cf02: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41cf03: mov ecx, esi */
  ecx = esi;
/* 41cf05: call 0x41cbb3 */
  esp -= 4; W32(esp, 0x41cf0au); SPILL(); f_41cbb3(); if (g_unwind) return; RELOAD();
L_41cf0a: /* 41cf0a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 41cf0b: mov eax, esi */
  eax = esi;
/* 41cf0d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41cf0e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_41cf11(void) {
  LOAD_REGS();
L_41cf11: /* 41cf11: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41cf12: mov esi, ecx */
  esi = ecx;
/* 41cf14: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 41cf17: mov ecx, eax */
  ecx = eax;
/* 41cf19: shl ecx, 0x1c */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 28;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 41cf1c: sar ecx, 0x1c */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 28;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 41cf1f: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41cf22: je 0x41cfb3 */
  if (zf) goto L_41cfb3;
L_41cf28: /* 41cf28: cmp ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41cf2b: je 0x41cfb3 */
  if (zf) goto L_41cfb3;
L_41cf31: /* 41cf31: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41cf32: xor ebx, ebx */
  ebx = 0;
/* 41cf34: cmp dword ptr [esi], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41cf36: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41cf37: je 0x41cf44 */
  if (zf) goto L_41cf44;
L_41cf39: /* 41cf39: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 41cf3b: mov ecx, esi */
  ecx = esi;
/* 41cf3d: call 0x41cbb3 */
  esp -= 4; W32(esp, 0x41cf42u); SPILL(); f_41cbb3(); if (g_unwind) return; RELOAD();
/* 41cf42: jmp 0x41cfb1 */
  goto L_41cfb1;
L_41cf44: /* 41cf44: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 41cf48: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41cf4a: je 0x41cfa8 */
  if (zf) goto L_41cfa8;
L_41cf4c: /* 41cf4c: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 41cf50: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41cf52: je 0x41cfa8 */
  if (zf) goto L_41cfa8;
L_41cf54: /* 41cf54: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* 41cf56: je 0x41cfa0 */
  if (zf) goto L_41cfa0;
L_41cf58: /* 41cf58: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 41cf59: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41cf5a: mov ecx, 0x44f458 */
  ecx = 0x44f458u;
/* 41cf5f: je 0x41cf7a */
  if (zf) goto L_41cf7a;
L_41cf61: /* 41cf61: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 41cf63: call 0x41c6e2 */
  esp -= 4; W32(esp, 0x41cf68u); SPILL(); f_41c6e2(); if (g_unwind) return; RELOAD();
/* 41cf68: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41cf6a: je 0x41cf95 */
  if (zf) goto L_41cf95;
L_41cf6c: /* 41cf6c: push dword ptr [esp + 0x14] */
  { uint32_t v = R32((uint32_t)(esp + 0x14u)); esp -= 4; W32(esp, v); }
/* 41cf70: mov ecx, eax */
  ecx = eax;
/* 41cf72: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41cf73: call 0x41ccdf */
  esp -= 4; W32(esp, 0x41cf78u); SPILL(); f_41ccdf(); if (g_unwind) return; RELOAD();
/* 41cf78: jmp 0x41cf97 */
  goto L_41cf97;
L_41cf7a: /* 41cf7a: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 41cf7c: call 0x41c6e2 */
  esp -= 4; W32(esp, 0x41cf81u); SPILL(); f_41c6e2(); if (g_unwind) return; RELOAD();
/* 41cf81: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41cf83: je 0x41cf95 */
  if (zf) goto L_41cf95;
L_41cf85: /* 41cf85: mov cl, byte ptr [edi] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 41cf87: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 41cf8a: mov dword ptr [eax], 0x44048c */
  W32((uint32_t)(eax), 0x44048cu);
/* 41cf90: mov byte ptr [eax + 8], cl */
  W8((uint32_t)(eax + 0x8u), (ecx & 0xffu));
/* 41cf93: jmp 0x41cf97 */
  goto L_41cf97;
L_41cf95: /* 41cf95: xor eax, eax */
  eax = 0;
L_41cf97: /* 41cf97: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41cf99: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 41cf9b: jne 0x41cfb1 */
  if (!zf) goto L_41cfb1;
L_41cf9d: /* 41cf9d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
L_41cfa0: /* 41cfa0: and eax, 0xfffffff3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff3u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41cfa3: or eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 41cfa6: jmp 0x41cfae */
  goto L_41cfae;
L_41cfa8: /* 41cfa8: and eax, 0xfffffff1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41cfab: or eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_41cfae: /* 41cfae: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
L_41cfb1: /* 41cfb1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 41cfb2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_41cfb3: /* 41cfb3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41cfb4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_41cfb7(void) {
  LOAD_REGS();
L_41cfb7: /* 41cfb7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41cfb8: mov esi, ecx */
  esi = ecx;
/* 41cfba: and dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi), r);
  }
/* 41cfbd: and word ptr [esi + 4], 0xfe00 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0x4u))); uint16_t b = (uint16_t)(0xfe00u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(esi + 0x4u), r);
  }
/* 41cfc3: cmp byte ptr [esp + 8], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41cfc8: je 0x41cfd6 */
  if (zf) goto L_41cfd6;
L_41cfca: /* 41cfca: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 41cfcc: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 41cfd0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41cfd1: call 0x41cf11 */
  esp -= 4; W32(esp, 0x41cfd6u); SPILL(); f_41cf11(); if (g_unwind) return; RELOAD();
L_41cfd6: /* 41cfd6: mov eax, esi */
  eax = esi;
/* 41cfd8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41cfd9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_41cfdc(void) {
  LOAD_REGS();
L_41cfdc: /* 41cfdc: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 41cfe0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41cfe1: mov esi, ecx */
  esi = ecx;
/* 41cfe3: and word ptr [esi + 4], 0xfe00 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0x4u))); uint16_t b = (uint16_t)(0xfe00u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(esi + 0x4u), r);
  }
/* 41cfe9: xor edx, edx */
  edx = 0;
/* 41cfeb: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41cfed: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 41cfef: je 0x41d006 */
  if (zf) goto L_41d006;
L_41cff1: /* 41cff1: xor ecx, ecx */
  ecx = 0;
/* 41cff3: cmp byte ptr [eax], dl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41cff5: je 0x41cffd */
  if (zf) goto L_41cffd;
L_41cff7: /* 41cff7: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 41cff8: cmp byte ptr [ecx + eax], dl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + eax))); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41cffb: jne 0x41cff7 */
  if (!zf) goto L_41cff7;
L_41cffd: /* 41cffd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41cffe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41cfff: mov ecx, esi */
  ecx = esi;
/* 41d001: call 0x41cf11 */
  esp -= 4; W32(esp, 0x41d006u); SPILL(); f_41cf11(); if (g_unwind) return; RELOAD();
L_41d006: /* 41d006: mov eax, esi */
  eax = esi;
/* 41d008: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41d009: ret 4 */
  esp += 8; SPILL(); return;
}

void f_41d00c(void) {
  LOAD_REGS();
L_41d00c: /* 41d00c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41d00d: mov ebp, esp */
  ebp = esp;
/* 41d00f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41d010: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41d011: mov esi, ecx */
  esi = ecx;
/* 41d013: and word ptr [esi + 4], 0xfe00 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0x4u))); uint16_t b = (uint16_t)(0xfe00u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(esi + 0x4u), r);
  }
/* 41d019: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 41d01c: xor ebx, ebx */
  ebx = 0;
/* 41d01e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41d01f: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 41d022: mov dword ptr [esi], ebx */
  W32((uint32_t)(esi), ebx);
/* 41d024: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 41d026: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41d028: je 0x41d0a4 */
  if (zf) goto L_41d0a4;
L_41d02a: /* 41d02a: cmp byte ptr [ecx], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41d02c: je 0x41d0c3 */
  if (zf) goto L_41d0c3;
L_41d032: /* 41d032: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
L_41d035: /* 41d035: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 41d037: mov dl, byte ptr [eax] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 41d039: cmp dl, byte ptr [ebp + 0xc] */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ebp + 0xcu)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41d03c: je 0x41d078 */
  if (zf) goto L_41d078;
L_41d03e: /* 41d03e: cmp dl, 0x5f */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x5fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41d041: je 0x41d06f */
  if (zf) goto L_41d06f;
L_41d043: /* 41d043: cmp dl, 0x24 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x24u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41d046: je 0x41d06f */
  if (zf) goto L_41d06f;
L_41d048: /* 41d048: cmp dl, 0x61 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x61u);
  uint8_t r = (uint8_t)(a - b);
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 41d04b: jl 0x41d052 */
  if ((sf != of)) goto L_41d052;
L_41d04d: /* 41d04d: cmp dl, 0x7a */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x7au);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 41d050: jle 0x41d06f */
  if ((zf || sf != of)) goto L_41d06f;
L_41d052: /* 41d052: cmp dl, 0x41 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a - b);
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 41d055: jl 0x41d05c */
  if ((sf != of)) goto L_41d05c;
L_41d057: /* 41d057: cmp dl, 0x5a */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x5au);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 41d05a: jle 0x41d06f */
  if ((zf || sf != of)) goto L_41d06f;
L_41d05c: /* 41d05c: cmp dl, 0x30 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 41d05f: jl 0x41d066 */
  if ((sf != of)) goto L_41d066;
L_41d061: /* 41d061: cmp dl, 0x39 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x39u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 41d064: jle 0x41d06f */
  if ((zf || sf != of)) goto L_41d06f;
L_41d066: /* 41d066: test byte ptr [0x44f48a], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0x44f48au))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41d06d: je 0x41d0a1 */
  if (zf) goto L_41d0a1;
L_41d06f: /* 41d06f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 41d070: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 41d071: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 41d073: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41d076: jne 0x41d035 */
  if (!zf) goto L_41d035;
L_41d078: /* 41d078: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41d079: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 41d07c: mov ecx, esi */
  ecx = esi;
/* 41d07e: call 0x41cf11 */
  esp -= 4; W32(esp, 0x41d083u); SPILL(); f_41cf11(); if (g_unwind) return; RELOAD();
/* 41d083: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 41d085: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 41d087: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41d089: je 0x41d0bc */
  if (zf) goto L_41d0bc;
L_41d08b: /* 41d08b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 41d08c: cmp cl, byte ptr [ebp + 0xc] */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ebp + 0xcu)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41d08f: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 41d091: je 0x41d0b6 */
  if (zf) goto L_41d0b6;
L_41d093: /* 41d093: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 41d096: and eax, 0xfffffff3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff3u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41d099: or eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 41d09c: and dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi), r);
  }
/* 41d09f: jmp 0x41d0aa */
  goto L_41d0aa;
L_41d0a1: /* 41d0a1: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
L_41d0a4: /* 41d0a4: and eax, 0xfffffff1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41d0a7: or eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_41d0aa: /* 41d0aa: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
L_41d0ad: /* 41d0ad: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 41d0ae: mov eax, esi */
  eax = esi;
/* 41d0b0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41d0b1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 41d0b2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 41d0b3: ret 8 */
  esp += 12; SPILL(); return;
L_41d0b6: /* 41d0b6: and dword ptr [esi + 4], 0xfffffff0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 41d0ba: jmp 0x41d0ad */
  goto L_41d0ad;
L_41d0bc: /* 41d0bc: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 41d0bf: test al, 0xf */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41d0c1: jne 0x41d0ad */
  if (!zf) goto L_41d0ad;
L_41d0c3: /* 41d0c3: and eax, 0xfffffff2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41d0c6: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 41d0c9: jmp 0x41d0aa */
  goto L_41d0aa;
}

void f_41d0cb(void) {
  LOAD_REGS();
L_41d0cb: /* 41d0cb: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41d0cc: mov ebp, esp */
  ebp = esp;
/* 41d0ce: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 41d0d1: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 41d0d6: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 41d0d9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41d0da: mov esi, ecx */
  esi = ecx;
/* 41d0dc: and dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi), r);
  }
/* 41d0df: and word ptr [esi + 4], 0xfe00 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0x4u))); uint16_t b = (uint16_t)(0xfe00u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(esi + 0x4u), r);
  }
/* 41d0e5: and byte ptr [ebp - 6], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffffau))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xfffffffau), r);
  }
/* 41d0e9: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 41d0ec: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41d0ed: lea ecx, [ebp - 6] */
  ecx = (uint32_t)(ebp + 0xfffffffau);
L_41d0f0: /* 41d0f0: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 41d0f3: xor edx, edx */
  edx = 0;
/* 41d0f5: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 41d0f7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 41d0f8: div edi */
  { uint32_t d = edi; if (!d) d = guest_divzero(0x41d0f8);
  uint64_t n = ((uint64_t)edx << 32) | eax; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
/* 41d0fa: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 41d0fb: add dl, 0x30 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a + b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 41d0fe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41d100: mov byte ptr [ecx], dl */
  W8((uint32_t)(ecx), (edx & 0xffu));
/* 41d102: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 41d105: jne 0x41d0f0 */
  if (!zf) goto L_41d0f0;
L_41d107: /* 41d107: lea eax, [ebp - 6] */
  eax = (uint32_t)(ebp + 0xfffffffau);
/* 41d10a: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 41d10c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41d10d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41d10e: mov ecx, esi */
  ecx = esi;
/* 41d110: call 0x41cf11 */
  esp -= 4; W32(esp, 0x41d115u); SPILL(); f_41cf11(); if (g_unwind) return; RELOAD();
/* 41d115: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 41d118: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 41d11b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 41d11c: mov eax, esi */
  eax = esi;
/* 41d11e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41d11f: call 0x4013ab */
  esp -= 4; W32(esp, 0x41d124u); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 41d124: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 41d125: ret 4 */
  esp += 8; SPILL(); return;
}

void f_41d128(void) {
  LOAD_REGS();
L_41d128: /* 41d128: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41d129: mov ebp, esp */
  ebp = esp;
/* 41d12b: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 41d12e: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 41d133: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 41d136: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41d137: mov esi, ecx */
  esi = ecx;
/* 41d139: and word ptr [esi + 4], 0xfe00 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0x4u))); uint16_t b = (uint16_t)(0xfe00u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(esi + 0x4u), r);
  }
/* 41d13f: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 41d142: xor eax, eax */
  eax = 0;
/* 41d144: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41d145: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 41d148: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41d14a: lea ecx, [ebp - 9] */
  ecx = (uint32_t)(ebp + 0xfffffff7u);
/* 41d14d: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 41d14f: mov byte ptr [ebp - 9], al */
  W8((uint32_t)(ebp + 0xfffffff7u), (eax & 0xffu));
/* 41d152: mov byte ptr [ebp - 5], al */
  W8((uint32_t)(ebp + 0xfffffffbu), (eax & 0xffu));
/* 41d155: jge 0x41d15d */
  if ((sf == of)) goto L_41d15d;
L_41d157: /* 41d157: mov byte ptr [ebp - 5], 1 */
  W8((uint32_t)(ebp + 0xfffffffbu), 0x1u);
/* 41d15b: neg edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(0 - a);
  edi = r;
  }
L_41d15d: /* 41d15d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
L_41d15e: /* 41d15e: mov eax, edi */
  eax = edi;
/* 41d160: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 41d162: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 41d163: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 41d164: idiv ebx */
  { int32_t d = (int32_t)ebx; if (!d) d = (int32_t)guest_divzero(0x41d164);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 41d166: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 41d167: mov eax, edi */
  eax = edi;
/* 41d169: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41d16a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 41d16b: add dl, 0x30 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a + b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 41d16e: mov byte ptr [ecx], dl */
  W8((uint32_t)(ecx), (edx & 0xffu));
/* 41d170: xor edx, edx */
  edx = 0;
/* 41d172: div edi */
  { uint32_t d = edi; if (!d) d = guest_divzero(0x41d172);
  uint64_t n = ((uint64_t)edx << 32) | eax; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
/* 41d174: mov edi, eax */
  edi = eax;
/* 41d176: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41d178: jne 0x41d15e */
  if (!zf) goto L_41d15e;
L_41d17a: /* 41d17a: cmp byte ptr [ebp - 5], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffffbu))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41d17d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 41d17e: je 0x41d184 */
  if (zf) goto L_41d184;
L_41d180: /* 41d180: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 41d181: mov byte ptr [ecx], 0x2d */
  W8((uint32_t)(ecx), 0x2du);
L_41d184: /* 41d184: lea eax, [ebp - 9] */
  eax = (uint32_t)(ebp + 0xfffffff7u);
/* 41d187: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 41d189: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41d18a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41d18b: mov ecx, esi */
  ecx = esi;
/* 41d18d: call 0x41cf11 */
  esp -= 4; W32(esp, 0x41d192u); SPILL(); f_41cf11(); if (g_unwind) return; RELOAD();
/* 41d192: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 41d195: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 41d198: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 41d199: mov eax, esi */
  eax = esi;
/* 41d19b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41d19c: call 0x4013ab */
  esp -= 4; W32(esp, 0x41d1a1u); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 41d1a1: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 41d1a2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_41d1a5(void) {
  LOAD_REGS();
L_41d1a5: /* 41d1a5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41d1a6: mov ebp, esp */
  ebp = esp;
/* 41d1a8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41d1a9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41d1aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41d1ab: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41d1ae: call 0x41c766 */
  esp -= 4; W32(esp, 0x41d1b3u); SPILL(); f_41c766(); if (g_unwind) return; RELOAD();
/* 41d1b3: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41d1b6: call 0x41ca67 */
  esp -= 4; W32(esp, 0x41d1bbu); SPILL(); f_41ca67(); if (g_unwind) return; RELOAD();
/* 41d1bb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41d1bd: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 41d1c0: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41d1c3: je 0x41d1cc */
  if (zf) goto L_41d1cc;
L_41d1c5: /* 41d1c5: call 0x41cbb3 */
  esp -= 4; W32(esp, 0x41d1cau); SPILL(); f_41cbb3(); if (g_unwind) return; RELOAD();
/* 41d1ca: jmp 0x41d1d1 */
  goto L_41d1d1;
L_41d1cc: /* 41d1cc: call 0x41ce96 */
  esp -= 4; W32(esp, 0x41d1d1u); SPILL(); f_41ce96(); if (g_unwind) return; RELOAD();
L_41d1d1: /* 41d1d1: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 41d1d4: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 41d1d7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41d1d8: call 0x41c766 */
  esp -= 4; W32(esp, 0x41d1ddu); SPILL(); f_41c766(); if (g_unwind) return; RELOAD();
/* 41d1dd: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 41d1e0: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 41d1e1: ret 8 */
  esp += 12; SPILL(); return;
}

void f_41d1e4(void) {
  LOAD_REGS();
L_41d1e4: /* 41d1e4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41d1e5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41d1e6: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 41d1ea: mov esi, ecx */
  esi = ecx;
/* 41d1ec: mov ecx, edi */
  ecx = edi;
/* 41d1ee: call 0x41ca67 */
  esp -= 4; W32(esp, 0x41d1f3u); SPILL(); f_41ca67(); if (g_unwind) return; RELOAD();
/* 41d1f3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41d1f5: mov ecx, esi */
  ecx = esi;
/* 41d1f7: je 0x41d20a */
  if (zf) goto L_41d20a;
L_41d1f9: /* 41d1f9: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 41d1fc: shl eax, 0x1c */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 28;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 41d1ff: sar eax, 0x1c */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 28;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 41d202: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41d203: call 0x41ce96 */
  esp -= 4; W32(esp, 0x41d208u); SPILL(); f_41ce96(); if (g_unwind) return; RELOAD();
/* 41d208: jmp 0x41d241 */
  goto L_41d241;
L_41d20a: /* 41d20a: call 0x41ca67 */
  esp -= 4; W32(esp, 0x41d20fu); SPILL(); f_41ca67(); if (g_unwind) return; RELOAD();
/* 41d20f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41d211: je 0x41d21d */
  if (zf) goto L_41d21d;
L_41d213: /* 41d213: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41d214: mov ecx, esi */
  ecx = esi;
/* 41d216: call 0x41c7cf */
  esp -= 4; W32(esp, 0x41d21bu); SPILL(); f_41c7cf(); if (g_unwind) return; RELOAD();
/* 41d21b: jmp 0x41d241 */
  goto L_41d241;
L_41d21d: /* 41d21d: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 41d21f: call 0x41cc99 */
  esp -= 4; W32(esp, 0x41d224u); SPILL(); f_41cc99(); if (g_unwind) return; RELOAD();
/* 41d224: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41d226: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 41d228: je 0x41d235 */
  if (zf) goto L_41d235;
L_41d22a: /* 41d22a: push dword ptr [edi] */
  { uint32_t v = R32((uint32_t)(edi)); esp -= 4; W32(esp, v); }
/* 41d22c: mov ecx, eax */
  ecx = eax;
/* 41d22e: call 0x41c863 */
  esp -= 4; W32(esp, 0x41d233u); SPILL(); f_41c863(); if (g_unwind) return; RELOAD();
/* 41d233: jmp 0x41d241 */
  goto L_41d241;
L_41d235: /* 41d235: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 41d238: and eax, 0xfffffff3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff3u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41d23b: or eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 41d23e: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
L_41d241: /* 41d241: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 41d242: mov eax, esi */
  eax = esi;
/* 41d244: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41d245: ret 4 */
  esp += 8; SPILL(); return;
}

void f_41d248(void) {
  LOAD_REGS();
L_41d248: /* 41d248: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41d249: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 41d24b: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 41d24f: mov esi, ecx */
  esi = ecx;
/* 41d251: and byte ptr [esi + 4], 0xf */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x4u))); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(esi + 0x4u), r);
  }
/* 41d255: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41d256: call 0x41cf11 */
  esp -= 4; W32(esp, 0x41d25bu); SPILL(); f_41cf11(); if (g_unwind) return; RELOAD();
/* 41d25b: mov eax, esi */
  eax = esi;
/* 41d25d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41d25e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_41d261(void) {
  LOAD_REGS();
L_41d261: /* 41d261: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 41d265: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41d266: mov esi, ecx */
  esi = ecx;
/* 41d268: and byte ptr [esi + 4], 0xf */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x4u))); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(esi + 0x4u), r);
  }
/* 41d26c: xor ecx, ecx */
  ecx = 0;
/* 41d26e: cmp byte ptr [eax], cl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41d270: je 0x41d279 */
  if (zf) goto L_41d279;
L_41d272: /* 41d272: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 41d273: cmp byte ptr [ecx + eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41d277: jne 0x41d272 */
  if (!zf) goto L_41d272;
L_41d279: /* 41d279: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41d27a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41d27b: mov ecx, esi */
  ecx = esi;
/* 41d27d: call 0x41cf11 */
  esp -= 4; W32(esp, 0x41d282u); SPILL(); f_41cf11(); if (g_unwind) return; RELOAD();
/* 41d282: mov eax, esi */
  eax = esi;
/* 41d284: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41d285: ret 4 */
  esp += 8; SPILL(); return;
}

void f_41d288(void) {
  LOAD_REGS();
L_41d288: /* 41d288: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41d289: mov ebp, esp */
  ebp = esp;
/* 41d28b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41d28c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41d28d: mov eax, dword ptr [0x44f478] */
  eax = R32((uint32_t)(0x44f478u));
/* 41d292: mov al, byte ptr [eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 41d294: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41d296: je 0x41d31e */
  if (zf) goto L_41d31e;
L_41d29c: /* 41d29c: movsx eax, al */
  eax = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 41d29f: sub eax, 0x41 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x41u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 41d2a2: inc dword ptr [0x44f478] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f478u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0x44f478u), r);
  }
/* 41d2a8: cmp eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 41d2ab: ja 0x41d31a */
  if ((!cf && !zf)) goto L_41d31a;
L_41d2ad: /* 41d2ad: mov ecx, dword ptr [0x44f488] */
  ecx = R32((uint32_t)(0x44f488u));
/* 41d2b3: and dword ptr [ebp - 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 41d2b7: and word ptr [ebp - 4], 0xfe00 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xfffffffcu))); uint16_t b = (uint16_t)(0xfe00u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 41d2bd: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 41d2bf: not ecx */
  ecx = ~ecx;
/* 41d2c1: test cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41d2c4: je 0x41d30c */
  if (zf) goto L_41d30c;
L_41d2c6: /* 41d2c6: and eax, 0xfffffffe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41d2c9: sub eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 41d2cc: je 0x41d2f9 */
  if (zf) goto L_41d2f9;
L_41d2ce: /* 41d2ce: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 41d2d0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41d2d1: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 41d2d3: je 0x41d2f6 */
  if (zf) goto L_41d2f6;
L_41d2d5: /* 41d2d5: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 41d2d7: je 0x41d2f2 */
  if (zf) goto L_41d2f2;
L_41d2d9: /* 41d2d9: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 41d2db: je 0x41d2ee */
  if (zf) goto L_41d2ee;
L_41d2dd: /* 41d2dd: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 41d2df: je 0x41d2ea */
  if (zf) goto L_41d2ea;
L_41d2e1: /* 41d2e1: sub eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 41d2e4: jne 0x41d30c */
  if (!zf) goto L_41d30c;
L_41d2e6: /* 41d2e6: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 41d2e8: jmp 0x41d2fb */
  goto L_41d2fb;
L_41d2ea: /* 41d2ea: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 41d2ec: jmp 0x41d2fb */
  goto L_41d2fb;
L_41d2ee: /* 41d2ee: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 41d2f0: jmp 0x41d2fb */
  goto L_41d2fb;
L_41d2f2: /* 41d2f2: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 41d2f4: jmp 0x41d2fb */
  goto L_41d2fb;
L_41d2f6: /* 41d2f6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41d2f7: jmp 0x41d2fb */
  goto L_41d2fb;
L_41d2f9: /* 41d2f9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
L_41d2fb: /* 41d2fb: call 0x41c6c9 */
  esp -= 4; W32(esp, 0x41d300u); SPILL(); f_41c6c9(); if (g_unwind) return; RELOAD();
/* 41d300: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41d303: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41d306: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41d307: call 0x41d261 */
  esp -= 4; W32(esp, 0x41d30cu); SPILL(); f_41d261(); if (g_unwind) return; RELOAD();
L_41d30c: /* 41d30c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 41d30f: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 41d312: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41d313: call 0x41c766 */
  esp -= 4; W32(esp, 0x41d318u); SPILL(); f_41c766(); if (g_unwind) return; RELOAD();
/* 41d318: jmp 0x41d328 */
  goto L_41d328;
L_41d31a: /* 41d31a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 41d31c: jmp 0x41d320 */
  goto L_41d320;
L_41d31e: /* 41d31e: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
L_41d320: /* 41d320: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 41d323: call 0x41c9f0 */
  esp -= 4; W32(esp, 0x41d328u); SPILL(); f_41c9f0(); if (g_unwind) return; RELOAD();
L_41d328: /* 41d328: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 41d32b: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 41d32c: ret  */
  esp += 4; SPILL(); return;
}

void f_41d32d(void) {
  LOAD_REGS();
L_41d32d: /* 41d32d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41d32e: mov ebp, esp */
  ebp = esp;
/* 41d330: mov eax, dword ptr [0x44f478] */
  eax = R32((uint32_t)(0x44f478u));
/* 41d335: mov al, byte ptr [eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 41d337: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41d339: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 41d33c: je 0x41d358 */
  if (zf) goto L_41d358;
L_41d33e: /* 41d33e: cmp al, 0x41 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41d340: je 0x41d346 */
  if (zf) goto L_41d346;
L_41d342: /* 41d342: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 41d344: jmp 0x41d35a */
  goto L_41d35a;
L_41d346: /* 41d346: inc dword ptr [0x44f478] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f478u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0x44f478u), r);
  }
/* 41d34c: push 0x4404c4 */
  { uint32_t v = 0x4404c4u; esp -= 4; W32(esp, v); }
/* 41d351: call 0x41cfdc */
  esp -= 4; W32(esp, 0x41d356u); SPILL(); f_41cfdc(); if (g_unwind) return; RELOAD();
/* 41d356: jmp 0x41d35f */
  goto L_41d35f;
L_41d358: /* 41d358: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
L_41d35a: /* 41d35a: call 0x41c9f0 */
  esp -= 4; W32(esp, 0x41d35fu); SPILL(); f_41c9f0(); if (g_unwind) return; RELOAD();
L_41d35f: /* 41d35f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 41d362: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 41d363: ret  */
  esp += 4; SPILL(); return;
}

void f_41d364(void) {
  LOAD_REGS();
L_41d364: /* 41d364: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41d365: mov ebp, esp */
  ebp = esp;
/* 41d367: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41d368: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41d369: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41d36a: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41d36d: call 0x41c766 */
  esp -= 4; W32(esp, 0x41d372u); SPILL(); f_41c766(); if (g_unwind) return; RELOAD();
/* 41d372: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41d375: call 0x41ca67 */
  esp -= 4; W32(esp, 0x41d37au); SPILL(); f_41ca67(); if (g_unwind) return; RELOAD();
/* 41d37a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41d37c: je 0x41d38b */
  if (zf) goto L_41d38b;
L_41d37e: /* 41d37e: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 41d381: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41d384: call 0x41c7cf */
  esp -= 4; W32(esp, 0x41d389u); SPILL(); f_41c7cf(); if (g_unwind) return; RELOAD();
/* 41d389: jmp 0x41d3b4 */
  goto L_41d3b4;
L_41d38b: /* 41d38b: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 41d38e: call 0x41ca67 */
  esp -= 4; W32(esp, 0x41d393u); SPILL(); f_41ca67(); if (g_unwind) return; RELOAD();
/* 41d393: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41d395: je 0x41d3ab */
  if (zf) goto L_41d3ab;
L_41d397: /* 41d397: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 41d39a: shl eax, 0x1c */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 28;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 41d39d: sar eax, 0x1c */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 28;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 41d3a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41d3a1: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41d3a4: call 0x41ce96 */
  esp -= 4; W32(esp, 0x41d3a9u); SPILL(); f_41ce96(); if (g_unwind) return; RELOAD();
/* 41d3a9: jmp 0x41d3b4 */
  goto L_41d3b4;
L_41d3ab: /* 41d3ab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41d3ac: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41d3af: call 0x41d1e4 */
  esp -= 4; W32(esp, 0x41d3b4u); SPILL(); f_41d1e4(); if (g_unwind) return; RELOAD();
L_41d3b4: /* 41d3b4: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 41d3b7: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 41d3ba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41d3bb: call 0x41c766 */
  esp -= 4; W32(esp, 0x41d3c0u); SPILL(); f_41c766(); if (g_unwind) return; RELOAD();
/* 41d3c0: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 41d3c3: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 41d3c4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_41d3c7(void) {
  LOAD_REGS();
L_41d3c7: /* 41d3c7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41d3c8: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 41d3cc: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41d3ce: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41d3cf: mov esi, ecx */
  esi = ecx;
/* 41d3d1: je 0x41d42a */
  if (zf) goto L_41d42a;
L_41d3d3: /* 41d3d3: call 0x41ca67 */
  esp -= 4; W32(esp, 0x41d3d8u); SPILL(); f_41ca67(); if (g_unwind) return; RELOAD();
/* 41d3d8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41d3da: je 0x41d3e4 */
  if (zf) goto L_41d3e4;
L_41d3dc: /* 41d3dc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41d3dd: call 0x41d248 */
  esp -= 4; W32(esp, 0x41d3e2u); SPILL(); f_41d248(); if (g_unwind) return; RELOAD();
/* 41d3e2: jmp 0x41d42a */
  goto L_41d42a;
L_41d3e4: /* 41d3e4: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 41d3e6: call 0x41cc99 */
  esp -= 4; W32(esp, 0x41d3ebu); SPILL(); f_41cc99(); if (g_unwind) return; RELOAD();
/* 41d3eb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41d3ed: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 41d3ef: je 0x41d41e */
  if (zf) goto L_41d41e;
L_41d3f1: /* 41d3f1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 41d3f3: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 41d3f5: mov ecx, 0x44f458 */
  ecx = 0x44f458u;
/* 41d3fa: call 0x41c6e2 */
  esp -= 4; W32(esp, 0x41d3ffu); SPILL(); f_41c6e2(); if (g_unwind) return; RELOAD();
/* 41d3ff: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41d401: je 0x41d412 */
  if (zf) goto L_41d412;
L_41d403: /* 41d403: and dword ptr [eax + 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x4u), r);
  }
/* 41d407: mov dword ptr [eax], 0x44048c */
  W32((uint32_t)(eax), 0x44048cu);
/* 41d40d: mov byte ptr [eax + 8], bl */
  W8((uint32_t)(eax + 0x8u), (ebx & 0xffu));
/* 41d410: jmp 0x41d414 */
  goto L_41d414;
L_41d412: /* 41d412: xor eax, eax */
  eax = 0;
L_41d414: /* 41d414: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 41d416: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41d417: call 0x41c863 */
  esp -= 4; W32(esp, 0x41d41cu); SPILL(); f_41c863(); if (g_unwind) return; RELOAD();
/* 41d41c: jmp 0x41d42a */
  goto L_41d42a;
L_41d41e: /* 41d41e: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 41d421: and eax, 0xfffffff3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff3u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41d424: or eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 41d427: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
L_41d42a: /* 41d42a: mov eax, esi */
  eax = esi;
/* 41d42c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41d42d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 41d42e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_41d431(void) {
  LOAD_REGS();
L_41d431: /* 41d431: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41d432: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41d433: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 41d437: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41d439: mov esi, ecx */
  esi = ecx;
/* 41d43b: je 0x41d496 */
  if (zf) goto L_41d496;
L_41d43d: /* 41d43d: cmp byte ptr [edi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41d440: je 0x41d496 */
  if (zf) goto L_41d496;
L_41d442: /* 41d442: call 0x41ca67 */
  esp -= 4; W32(esp, 0x41d447u); SPILL(); f_41ca67(); if (g_unwind) return; RELOAD();
/* 41d447: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41d449: je 0x41d453 */
  if (zf) goto L_41d453;
L_41d44b: /* 41d44b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41d44c: call 0x41d261 */
  esp -= 4; W32(esp, 0x41d451u); SPILL(); f_41d261(); if (g_unwind) return; RELOAD();
/* 41d451: jmp 0x41d496 */
  goto L_41d496;
L_41d453: /* 41d453: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 41d455: call 0x41cc99 */
  esp -= 4; W32(esp, 0x41d45au); SPILL(); f_41cc99(); if (g_unwind) return; RELOAD();
/* 41d45a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41d45c: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 41d45e: je 0x41d48a */
  if (zf) goto L_41d48a;
L_41d460: /* 41d460: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 41d462: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 41d464: mov ecx, 0x44f458 */
  ecx = 0x44f458u;
/* 41d469: call 0x41c6e2 */
  esp -= 4; W32(esp, 0x41d46eu); SPILL(); f_41c6e2(); if (g_unwind) return; RELOAD();
/* 41d46e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41d470: je 0x41d47e */
  if (zf) goto L_41d47e;
L_41d472: /* 41d472: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 41d474: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41d475: mov ecx, eax */
  ecx = eax;
/* 41d477: call 0x41ccdf */
  esp -= 4; W32(esp, 0x41d47cu); SPILL(); f_41ccdf(); if (g_unwind) return; RELOAD();
/* 41d47c: jmp 0x41d480 */
  goto L_41d480;
L_41d47e: /* 41d47e: xor eax, eax */
  eax = 0;
L_41d480: /* 41d480: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 41d482: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41d483: call 0x41c863 */
  esp -= 4; W32(esp, 0x41d488u); SPILL(); f_41c863(); if (g_unwind) return; RELOAD();
/* 41d488: jmp 0x41d496 */
  goto L_41d496;
L_41d48a: /* 41d48a: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 41d48d: and eax, 0xfffffff3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff3u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41d490: or eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 41d493: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
L_41d496: /* 41d496: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 41d497: mov eax, esi */
  eax = esi;
/* 41d499: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41d49a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_41d49d(void) {
  LOAD_REGS();
L_41d49d: /* 41d49d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41d49e: mov ebp, esp */
  ebp = esp;
/* 41d4a0: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 41d4a3: and dword ptr [ebp - 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 41d4a7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41d4a8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41d4a9: xor ebx, ebx */
  ebx = 0;
/* 41d4ab: mov esi, 0xfffffe00 */
  esi = 0xfffffe00u;
/* 41d4b0: and dword ptr [ebp - 4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 41d4b3: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 41d4b4: test byte ptr [ebp - 4], 0xf */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffffcu))); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41d4b8: jne 0x41d571 */
  if (!zf) goto L_41d571;
L_41d4be: /* 41d4be: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_41d4bf: /* 41d4bf: mov eax, dword ptr [0x44f478] */
  eax = R32((uint32_t)(0x44f478u));
/* 41d4c4: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 41d4c6: cmp cl, 0x40 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41d4c9: je 0x41d570 */
  if (zf) goto L_41d570;
L_41d4cf: /* 41d4cf: cmp cl, 0x5a */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x5au);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41d4d2: je 0x41d570 */
  if (zf) goto L_41d570;
L_41d4d8: /* 41d4d8: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41d4da: je 0x41d4e0 */
  if (zf) goto L_41d4e0;
L_41d4dc: /* 41d4dc: xor ebx, ebx */
  ebx = 0;
/* 41d4de: jmp 0x41d4ef */
  goto L_41d4ef;
L_41d4e0: /* 41d4e0: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 41d4e2: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41d4e5: call 0x41d3c7 */
  esp -= 4; W32(esp, 0x41d4eau); SPILL(); f_41d3c7(); if (g_unwind) return; RELOAD();
/* 41d4ea: mov eax, dword ptr [0x44f478] */
  eax = R32((uint32_t)(0x44f478u));
L_41d4ef: /* 41d4ef: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 41d4f1: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41d4f3: je 0x41d566 */
  if (zf) goto L_41d566;
L_41d4f5: /* 41d4f5: movsx ecx, cl */
  ecx = (uint32_t)(int32_t)(int8_t)((ecx & 0xffu));
/* 41d4f8: sub ecx, 0x30 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 41d4fb: js 0x41d516 */
  if (sf) goto L_41d516;
L_41d4fd: /* 41d4fd: cmp ecx, 9 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x9u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41d500: jg 0x41d516 */
  if ((!zf && sf == of)) goto L_41d516;
L_41d502: /* 41d502: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 41d503: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41d504: mov ecx, dword ptr [0x44f46c] */
  ecx = R32((uint32_t)(0x44f46cu));
/* 41d50a: mov dword ptr [0x44f478], eax */
  W32((uint32_t)(0x44f478u), eax);
/* 41d50f: call 0x41c83a */
  esp -= 4; W32(esp, 0x41d514u); SPILL(); f_41c83a(); if (g_unwind) return; RELOAD();
/* 41d514: jmp 0x41d551 */
  goto L_41d551;
L_41d516: /* 41d516: and dword ptr [ebp - 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff0u), r);
  }
/* 41d51a: and dword ptr [ebp - 0xc], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
/* 41d51d: mov edi, eax */
  edi = eax;
/* 41d51f: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 41d522: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41d523: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 41d526: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41d527: call 0x420aa2 */
  esp -= 4; W32(esp, 0x41d52cu); SPILL(); f_420aa2(); if (g_unwind) return; RELOAD();
/* 41d52c: mov eax, dword ptr [0x44f478] */
  eax = R32((uint32_t)(0x44f478u));
/* 41d531: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 41d533: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41d536: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41d537: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41d538: jle 0x41d54e */
  if ((zf || sf != of)) goto L_41d54e;
L_41d53a: /* 41d53a: mov ecx, dword ptr [0x44f46c] */
  ecx = R32((uint32_t)(0x44f46cu));
/* 41d540: cmp dword ptr [ecx], 9 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x9u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41d543: je 0x41d54e */
  if (zf) goto L_41d54e;
L_41d545: /* 41d545: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 41d548: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41d549: call 0x41cc52 */
  esp -= 4; W32(esp, 0x41d54eu); SPILL(); f_41cc52(); if (g_unwind) return; RELOAD();
L_41d54e: /* 41d54e: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
L_41d551: /* 41d551: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41d554: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41d555: call 0x41d1e4 */
  esp -= 4; W32(esp, 0x41d55au); SPILL(); f_41d1e4(); if (g_unwind) return; RELOAD();
/* 41d55a: test byte ptr [ebp - 4], 0xf */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffffcu))); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41d55e: je 0x41d4bf */
  if (zf) goto L_41d4bf;
L_41d564: /* 41d564: jmp 0x41d570 */
  goto L_41d570;
L_41d566: /* 41d566: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 41d568: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41d56b: call 0x41ce96 */
  esp -= 4; W32(esp, 0x41d570u); SPILL(); f_41ce96(); if (g_unwind) return; RELOAD();
L_41d570: /* 41d570: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_41d571: /* 41d571: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 41d574: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 41d577: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41d578: call 0x41c766 */
  esp -= 4; W32(esp, 0x41d57du); SPILL(); f_41c766(); if (g_unwind) return; RELOAD();
/* 41d57d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 41d580: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41d581: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 41d582: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 41d583: ret  */
  esp += 4; SPILL(); return;
}

void f_41d584(void) {
  LOAD_REGS();
L_41d584: /* 41d584: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41d585: mov ebp, esp */
  ebp = esp;
/* 41d587: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 41d58a: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 41d58d: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41d590: call 0x41c766 */
  esp -= 4; W32(esp, 0x41d595u); SPILL(); f_41c766(); if (g_unwind) return; RELOAD();
/* 41d595: push 0x4404cc */
  { uint32_t v = 0x4404ccu; esp -= 4; W32(esp, v); }
/* 41d59a: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41d59d: call 0x41d431 */
  esp -= 4; W32(esp, 0x41d5a2u); SPILL(); f_41d431(); if (g_unwind) return; RELOAD();
/* 41d5a2: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 41d5a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41d5a6: call 0x41f842 */
  esp -= 4; W32(esp, 0x41d5abu); SPILL(); f_41f842(); if (g_unwind) return; RELOAD();
/* 41d5ab: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41d5ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41d5ad: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41d5b0: call 0x41d1e4 */
  esp -= 4; W32(esp, 0x41d5b5u); SPILL(); f_41d1e4(); if (g_unwind) return; RELOAD();
/* 41d5b5: push 0x7d */
  { uint32_t v = 0x7du; esp -= 4; W32(esp, v); }
/* 41d5b7: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41d5ba: call 0x41d3c7 */
  esp -= 4; W32(esp, 0x41d5bfu); SPILL(); f_41d3c7(); if (g_unwind) return; RELOAD();
/* 41d5bf: mov eax, dword ptr [0x44f478] */
  eax = R32((uint32_t)(0x44f478u));
/* 41d5c4: cmp byte ptr [eax], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41d5c7: jne 0x41d5cf */
  if (!zf) goto L_41d5cf;
L_41d5c9: /* 41d5c9: inc dword ptr [0x44f478] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f478u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0x44f478u), r);
  }
L_41d5cf: /* 41d5cf: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 41d5d2: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 41d5d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41d5d6: call 0x41c766 */
  esp -= 4; W32(esp, 0x41d5dbu); SPILL(); f_41c766(); if (g_unwind) return; RELOAD();
/* 41d5db: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 41d5de: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 41d5df: ret  */
  esp += 4; SPILL(); return;
}

void f_41d5e0(void) {
  LOAD_REGS();
L_41d5e0: /* 41d5e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41d5e1: mov ebp, esp */
  ebp = esp;
/* 41d5e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41d5e4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41d5e5: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 41d5e8: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41d5eb: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 41d5ee: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 41d5f1: call 0x41cfb7 */
  esp -= 4; W32(esp, 0x41d5f6u); SPILL(); f_41cfb7(); if (g_unwind) return; RELOAD();
/* 41d5f6: mov ecx, eax */
  ecx = eax;
/* 41d5f8: call 0x41d364 */
  esp -= 4; W32(esp, 0x41d5fdu); SPILL(); f_41d364(); if (g_unwind) return; RELOAD();
/* 41d5fd: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 41d600: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 41d601: ret  */
  esp += 4; SPILL(); return;
}

void f_41d602(void) {
  LOAD_REGS();
L_41d602: /* 41d602: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41d603: mov ebp, esp */
  ebp = esp;
/* 41d605: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41d606: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41d607: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 41d60a: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41d60d: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 41d610: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 41d613: call 0x41c9f0 */
  esp -= 4; W32(esp, 0x41d618u); SPILL(); f_41c9f0(); if (g_unwind) return; RELOAD();
/* 41d618: mov ecx, eax */
  ecx = eax;
/* 41d61a: call 0x41d364 */
  esp -= 4; W32(esp, 0x41d61fu); SPILL(); f_41d364(); if (g_unwind) return; RELOAD();
/* 41d61f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 41d622: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 41d623: ret  */
  esp += 4; SPILL(); return;
}

void f_41d624(void) {
  LOAD_REGS();
L_41d624: /* 41d624: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41d625: mov ebp, esp */
  ebp = esp;
/* 41d627: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41d628: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41d629: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 41d62c: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41d62f: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 41d632: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 41d635: call 0x41cfdc */
  esp -= 4; W32(esp, 0x41d63au); SPILL(); f_41cfdc(); if (g_unwind) return; RELOAD();
/* 41d63a: mov ecx, eax */
  ecx = eax;
/* 41d63c: call 0x41d364 */
  esp -= 4; W32(esp, 0x41d641u); SPILL(); f_41d364(); if (g_unwind) return; RELOAD();
/* 41d641: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 41d644: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 41d645: ret  */
  esp += 4; SPILL(); return;
}

void f_41d646(void) {
  LOAD_REGS();
L_41d646: /* 41d646: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41d647: mov ebp, esp */
  ebp = esp;
/* 41d649: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41d64a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41d64b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41d64c: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41d64f: call 0x41c766 */
  esp -= 4; W32(esp, 0x41d654u); SPILL(); f_41c766(); if (g_unwind) return; RELOAD();
/* 41d654: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41d657: call 0x41ca67 */
  esp -= 4; W32(esp, 0x41d65cu); SPILL(); f_41ca67(); if (g_unwind) return; RELOAD();
/* 41d65c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41d65e: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 41d661: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41d664: je 0x41d66d */
  if (zf) goto L_41d66d;
L_41d666: /* 41d666: call 0x41d248 */
  esp -= 4; W32(esp, 0x41d66bu); SPILL(); f_41d248(); if (g_unwind) return; RELOAD();
/* 41d66b: jmp 0x41d672 */
  goto L_41d672;
L_41d66d: /* 41d66d: call 0x41d3c7 */
  esp -= 4; W32(esp, 0x41d672u); SPILL(); f_41d3c7(); if (g_unwind) return; RELOAD();
L_41d672: /* 41d672: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 41d675: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 41d678: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41d679: call 0x41c766 */
  esp -= 4; W32(esp, 0x41d67eu); SPILL(); f_41c766(); if (g_unwind) return; RELOAD();
/* 41d67e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 41d681: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 41d682: ret 8 */
  esp += 12; SPILL(); return;
}

void f_41d685(void) {
  LOAD_REGS();
L_41d685: /* 41d685: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41d686: mov ebp, esp */
  ebp = esp;
/* 41d688: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41d689: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41d68a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41d68b: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41d68e: call 0x41c766 */
  esp -= 4; W32(esp, 0x41d693u); SPILL(); f_41c766(); if (g_unwind) return; RELOAD();
/* 41d693: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41d696: call 0x41ca67 */
  esp -= 4; W32(esp, 0x41d69bu); SPILL(); f_41ca67(); if (g_unwind) return; RELOAD();
/* 41d69b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41d69d: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 41d6a0: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41d6a3: je 0x41d6ac */
  if (zf) goto L_41d6ac;
L_41d6a5: /* 41d6a5: call 0x41d261 */
  esp -= 4; W32(esp, 0x41d6aau); SPILL(); f_41d261(); if (g_unwind) return; RELOAD();
/* 41d6aa: jmp 0x41d6b1 */
  goto L_41d6b1;
L_41d6ac: /* 41d6ac: call 0x41d431 */
  esp -= 4; W32(esp, 0x41d6b1u); SPILL(); f_41d431(); if (g_unwind) return; RELOAD();
L_41d6b1: /* 41d6b1: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 41d6b4: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 41d6b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41d6b8: call 0x41c766 */
  esp -= 4; W32(esp, 0x41d6bdu); SPILL(); f_41c766(); if (g_unwind) return; RELOAD();
/* 41d6bd: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 41d6c0: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 41d6c1: ret 8 */
  esp += 12; SPILL(); return;
}

void f_41d6c4(void) {
  LOAD_REGS();
L_41d6c4: /* 41d6c4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41d6c5: mov ebp, esp */
  ebp = esp;
/* 41d6c7: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 41d6ca: mov eax, dword ptr [0x44f478] */
  eax = R32((uint32_t)(0x44f478u));
/* 41d6cf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41d6d0: xor esi, esi */
  esi = 0;
/* 41d6d2: cmp byte ptr [eax], 0x51 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x51u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41d6d5: jne 0x41d6e2 */
  if (!zf) goto L_41d6e2;
L_41d6d7: /* 41d6d7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 41d6d8: mov esi, 0x4404d4 */
  esi = 0x4404d4u;
/* 41d6dd: mov dword ptr [0x44f478], eax */
  W32((uint32_t)(0x44f478u), eax);
L_41d6e2: /* 41d6e2: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 41d6e4: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41d6e6: jne 0x41d6ec */
  if (!zf) goto L_41d6ec;
L_41d6e8: /* 41d6e8: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 41d6ea: jmp 0x41d74c */
  goto L_41d74c;
L_41d6ec: /* 41d6ec: cmp cl, 0x30 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 41d6ef: jl 0x41d714 */
  if ((sf != of)) goto L_41d714;
L_41d6f1: /* 41d6f1: cmp cl, 0x39 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x39u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 41d6f4: jg 0x41d714 */
  if ((!zf && sf == of)) goto L_41d714;
L_41d6f6: /* 41d6f6: movsx ecx, byte ptr [eax] */
  ecx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(eax)));
/* 41d6f9: sub ecx, 0x2f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fu);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 41d6fc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 41d6fd: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41d6ff: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41d700: mov dword ptr [0x44f478], eax */
  W32((uint32_t)(0x44f478u), eax);
/* 41d705: je 0x41d70c */
  if (zf) goto L_41d70c;
L_41d707: /* 41d707: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41d70a: jmp 0x41d78a */
  goto L_41d78a;
L_41d70c: /* 41d70c: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 41d70f: jmp 0x41d794 */
  goto L_41d794;
L_41d714: /* 41d714: xor edx, edx */
  edx = 0;
/* 41d716: jmp 0x41d738 */
  goto L_41d738;
L_41d718: /* 41d718: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41d71a: je 0x41d6e8 */
  if (zf) goto L_41d6e8;
L_41d71c: /* 41d71c: cmp cl, 0x41 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a - b);
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 41d71f: jl 0x41d74a */
  if ((sf != of)) goto L_41d74a;
L_41d721: /* 41d721: cmp cl, 0x50 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x50u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 41d724: jg 0x41d74a */
  if ((!zf && sf == of)) goto L_41d74a;
L_41d726: /* 41d726: movsx ecx, cl */
  ecx = (uint32_t)(int32_t)(int8_t)((ecx & 0xffu));
/* 41d729: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 41d72c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 41d72d: lea edx, [edx + ecx - 0x41] */
  edx = (uint32_t)(edx + ecx + 0xffffffbfu);
/* 41d731: mov dword ptr [0x44f478], eax */
  W32((uint32_t)(0x44f478u), eax);
/* 41d736: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
L_41d738: /* 41d738: cmp cl, 0x40 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41d73b: jne 0x41d718 */
  if (!zf) goto L_41d718;
L_41d73d: /* 41d73d: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 41d73f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 41d740: cmp cl, 0x40 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41d743: mov dword ptr [0x44f478], eax */
  W32((uint32_t)(0x44f478u), eax);
/* 41d748: je 0x41d756 */
  if (zf) goto L_41d756;
L_41d74a: /* 41d74a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
L_41d74c: /* 41d74c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 41d74f: call 0x41c9f0 */
  esp -= 4; W32(esp, 0x41d754u); SPILL(); f_41c9f0(); if (g_unwind) return; RELOAD();
/* 41d754: jmp 0x41d7a2 */
  goto L_41d7a2;
L_41d756: /* 41d756: cmp byte ptr [ebp + 0xc], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xcu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41d75a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 41d75b: je 0x41d783 */
  if (zf) goto L_41d783;
L_41d75d: /* 41d75d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41d75f: je 0x41d779 */
  if (zf) goto L_41d779;
L_41d761: /* 41d761: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 41d764: call 0x41d128 */
  esp -= 4; W32(esp, 0x41d769u); SPILL(); f_41d128(); if (g_unwind) return; RELOAD();
L_41d769: /* 41d769: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41d76a: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 41d76d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41d76e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41d76f: call 0x41d624 */
  esp -= 4; W32(esp, 0x41d774u); SPILL(); f_41d624(); if (g_unwind) return; RELOAD();
/* 41d774: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41d777: jmp 0x41d799 */
  goto L_41d799;
L_41d779: /* 41d779: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41d77c: call 0x41d128 */
  esp -= 4; W32(esp, 0x41d781u); SPILL(); f_41d128(); if (g_unwind) return; RELOAD();
/* 41d781: jmp 0x41d799 */
  goto L_41d799;
L_41d783: /* 41d783: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41d785: je 0x41d791 */
  if (zf) goto L_41d791;
L_41d787: /* 41d787: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
L_41d78a: /* 41d78a: call 0x41d0cb */
  esp -= 4; W32(esp, 0x41d78fu); SPILL(); f_41d0cb(); if (g_unwind) return; RELOAD();
/* 41d78f: jmp 0x41d769 */
  goto L_41d769;
L_41d791: /* 41d791: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
L_41d794: /* 41d794: call 0x41d0cb */
  esp -= 4; W32(esp, 0x41d799u); SPILL(); f_41d0cb(); if (g_unwind) return; RELOAD();
L_41d799: /* 41d799: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 41d79c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41d79d: call 0x41c766 */
  esp -= 4; W32(esp, 0x41d7a2u); SPILL(); f_41c766(); if (g_unwind) return; RELOAD();
L_41d7a2: /* 41d7a2: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 41d7a5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41d7a6: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 41d7a7: ret  */
  esp += 4; SPILL(); return;
}

void f_41d7a8(void) {
  LOAD_REGS();
L_41d7a8: /* 41d7a8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41d7a9: mov ebp, esp */
  ebp = esp;
/* 41d7ab: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 41d7ae: mov eax, dword ptr [0x44f478] */
  eax = R32((uint32_t)(0x44f478u));
/* 41d7b3: mov al, byte ptr [eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 41d7b5: and dword ptr [ebp - 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 41d7b9: and word ptr [ebp - 4], 0xfe00 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xfffffffcu))); uint16_t b = (uint16_t)(0xfe00u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 41d7bf: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41d7c1: je 0x41d84a */
  if (zf) goto L_41d84a;
L_41d7c7: /* 41d7c7: movsx eax, al */
  eax = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 41d7ca: add eax, -0x30 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffd0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 41d7cd: cmp eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 41d7d0: ja 0x41d846 */
  if ((!cf && !zf)) goto L_41d846;
L_41d7d2: /* 41d7d2: jmp dword ptr [eax*4 + 0x41d859] */
  switch (R32((uint32_t)(eax*4 + 0x41d859u))) {
    case 0x41d7d9u: goto L_41d7d9;
    case 0x41d7e0u: goto L_41d7e0;
    case 0x41d7e7u: goto L_41d7e7;
    case 0x41d7eeu: goto L_41d7ee;
    case 0x41d7fbu: goto L_41d7fb;
    default: guest_badjump(0x41d7d2, R32((uint32_t)(eax*4 + 0x41d859u))); return;
  }
L_41d7d9: /* 41d7d9: push 0x440518 */
  { uint32_t v = 0x440518u; esp -= 4; W32(esp, v); }
/* 41d7de: jmp 0x41d7f3 */
  goto L_41d7f3;
L_41d7e0: /* 41d7e0: push 0x440510 */
  { uint32_t v = 0x440510u; esp -= 4; W32(esp, v); }
/* 41d7e5: jmp 0x41d7f3 */
  goto L_41d7f3;
L_41d7e7: /* 41d7e7: push 0x440508 */
  { uint32_t v = 0x440508u; esp -= 4; W32(esp, v); }
/* 41d7ec: jmp 0x41d7f3 */
  goto L_41d7f3;
L_41d7ee: /* 41d7ee: push 0x440500 */
  { uint32_t v = 0x440500u; esp -= 4; W32(esp, v); }
L_41d7f3: /* 41d7f3: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41d7f6: call 0x41d261 */
  esp -= 4; W32(esp, 0x41d7fbu); SPILL(); f_41d261(); if (g_unwind) return; RELOAD();
L_41d7fb: /* 41d7fb: mov eax, dword ptr [0x44f478] */
  eax = R32((uint32_t)(0x44f478u));
/* 41d800: movsx eax, byte ptr [eax] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(eax)));
/* 41d803: inc dword ptr [0x44f478] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f478u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0x44f478u), r);
  }
/* 41d809: sub eax, 0x31 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x31u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 41d80c: je 0x41d81a */
  if (zf) goto L_41d81a;
L_41d80e: /* 41d80e: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 41d80f: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 41d810: je 0x41d81a */
  if (zf) goto L_41d81a;
L_41d812: /* 41d812: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 41d813: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 41d814: je 0x41d81a */
  if (zf) goto L_41d81a;
L_41d816: /* 41d816: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 41d817: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 41d818: jne 0x41d838 */
  if (!zf) goto L_41d838;
L_41d81a: /* 41d81a: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 41d81d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41d81e: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 41d821: push 0x4404f4 */
  { uint32_t v = 0x4404f4u; esp -= 4; W32(esp, v); }
/* 41d826: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41d827: call 0x41d624 */
  esp -= 4; W32(esp, 0x41d82cu); SPILL(); f_41d624(); if (g_unwind) return; RELOAD();
/* 41d82c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41d82f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41d830: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41d833: call 0x41c7cf */
  esp -= 4; W32(esp, 0x41d838u); SPILL(); f_41c7cf(); if (g_unwind) return; RELOAD();
L_41d838: /* 41d838: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 41d83b: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 41d83e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41d83f: call 0x41c766 */
  esp -= 4; W32(esp, 0x41d844u); SPILL(); f_41c766(); if (g_unwind) return; RELOAD();
/* 41d844: jmp 0x41d854 */
  goto L_41d854;
L_41d846: /* 41d846: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 41d848: jmp 0x41d84c */
  goto L_41d84c;
L_41d84a: /* 41d84a: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
L_41d84c: /* 41d84c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 41d84f: call 0x41c9f0 */
  esp -= 4; W32(esp, 0x41d854u); SPILL(); f_41c9f0(); if (g_unwind) return; RELOAD();
L_41d854: /* 41d854: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 41d857: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 41d858: ret  */
  esp += 4; SPILL(); return;
}
