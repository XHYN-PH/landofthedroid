#include "recomp.h"
#include "rec_mod.h"

void f_8a954d(void) {
  LOAD_REGS();
  goto L_8a954d;
L_8a9460: /* 8a9460: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8a9463: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a9465: je 0x8a962e */
  if (zf) goto L_8a962e;
L_8a946b: /* 8a946b: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8a946e: or esi, 0xffffffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 8a9471: xor eax, eax */
  eax = 0;
L_8a9473: /* 8a9473: cmp eax, dword ptr [ebx + 0xe4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0xe4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a9479: jge 0x8a9487 */
  if ((sf == of)) goto L_8a9487;
L_8a947b: /* 8a947b: cmp dword ptr [ecx + eax*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a947f: jl 0x8a9510 */
  if ((sf != of)) goto L_8a9510;
L_8a9485: /* 8a9485: mov esi, eax */
  esi = eax;
L_8a9487: /* 8a9487: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8a9489: jl 0x8a962e */
  if ((sf != of)) goto L_8a962e;
L_8a948f: /* 8a948f: mov edx, dword ptr [ebx + 0xe0] */
  edx = R32((uint32_t)(ebx + 0xe0u));
/* 8a9495: movzx eax, word ptr [edx + esi*8 + 6] */
  eax = (uint32_t)(R16((uint32_t)(edx + esi*8 + 0x6u)));
/* 8a949a: mov edi, dword ptr [ecx + esi*4] */
  edi = R32((uint32_t)(ecx + esi*4));
/* 8a949d: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a949f: mov dword ptr [ecx + esi*4], 0xfffffffe */
  W32((uint32_t)(ecx + esi*4), 0xfffffffeu);
/* 8a94a6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8a94a8: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 8a94ab: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8a94ae: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a94b4u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a94b4: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8a94b7: mov dword ptr [ecx + eax*4], esi */
  W32((uint32_t)(ecx + eax*4), esi);
/* 8a94ba: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8a94bd: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8a94c0: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8a94c1: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 8a94c4: xor esi, esi */
  esi = 0;
L_8a94c6: /* 8a94c6: cmp esi, dword ptr [ebx + 0xe4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0xe4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a94cc: jge 0x8a9516 */
  if ((sf == of)) goto L_8a9516;
L_8a94ce: /* 8a94ce: mov eax, dword ptr [ecx + esi*4] */
  eax = R32((uint32_t)(ecx + esi*4));
/* 8a94d1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8a94d3: jl 0x8a950d */
  if ((sf != of)) goto L_8a950d;
L_8a94d5: /* 8a94d5: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a94d7: jne 0x8a950d */
  if (!zf) goto L_8a950d;
L_8a94d9: /* 8a94d9: mov edx, dword ptr [ebx + 0xe0] */
  edx = R32((uint32_t)(ebx + 0xe0u));
/* 8a94df: movzx eax, word ptr [edx + esi*8 + 6] */
  eax = (uint32_t)(R16((uint32_t)(edx + esi*8 + 0x6u)));
/* 8a94e4: cmp eax, dword ptr [ebp - 0x24] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a94e7: jne 0x8a950d */
  if (!zf) goto L_8a950d;
L_8a94e9: /* 8a94e9: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a94eb: mov dword ptr [ecx + esi*4], 0xfffffffe */
  W32((uint32_t)(ecx + esi*4), 0xfffffffeu);
/* 8a94f2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8a94f4: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 8a94f7: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a94fdu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a94fd: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8a9500: mov dword ptr [ecx + eax*4], esi */
  W32((uint32_t)(ecx + eax*4), esi);
/* 8a9503: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8a9506: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8a9509: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8a950a: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
L_8a950d: /* 8a950d: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8a950e: jmp 0x8a94c6 */
  goto L_8a94c6;
L_8a9510: /* 8a9510: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a9511: jmp 0x8a9473 */
  goto L_8a9473;
L_8a9516: /* 8a9516: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8a9518: jl 0x8a961c */
  if ((sf != of)) goto L_8a961c;
L_8a951e: /* 8a951e: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8a9521: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8a9524: cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a9527: jle 0x8a961c */
  if ((zf || sf != of)) goto L_8a961c;
L_8a952d: /* 8a952d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8a952f: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8a9531: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 8a9534: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x8a953au); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 8a953a: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8a953d: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 8a9540: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8a9543: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8a9546: mov dword ptr [eax + ecx], edi */
  W32((uint32_t)(eax + ecx), edi);
/* 8a9549: xor esi, esi */
  esi = 0;
/* 8a954b: jmp 0x8a9550 */
  goto L_8a9550;
L_8a954d: /* 8a954d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8a9550: /* 8a9550: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8a9553: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a9555: jge 0x8a95dd */
  if ((sf == of)) goto L_8a95dd;
L_8a955b: /* 8a955b: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8a955e: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 8a9561: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8a9564: mov dword ptr [ecx + eax*4], 0xfffffffd */
  W32((uint32_t)(ecx + eax*4), 0xfffffffdu);
/* 8a956b: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8a956e: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 8a9571: mov ecx, dword ptr [ebx + 0xe0] */
  ecx = R32((uint32_t)(ebx + 0xe0u));
/* 8a9577: mov dx, word ptr [ecx + eax*8] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + eax*8))) & 0xffffu);
/* 8a957b: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 8a957e: mov cx, word ptr [eax + 2] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x2u))) & 0xffffu);
/* 8a9582: mov word ptr [ebp - 0x30], dx */
  W16((uint32_t)(ebp + 0xffffffd0u), (edx & 0xffffu));
/* 8a9586: mov dx, word ptr [eax + 4] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x4u))) & 0xffffu);
/* 8a958a: mov ax, word ptr [eax + 6] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x6u))) & 0xffffu);
/* 8a958e: mov word ptr [ebp - 0x2e], cx */
  W16((uint32_t)(ebp + 0xffffffd2u), (ecx & 0xffffu));
/* 8a9592: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8a9595: mov word ptr [ebp - 0x2c], dx */
  W16((uint32_t)(ebp + 0xffffffd4u), (edx & 0xffffu));
/* 8a9599: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8a959c: lea edi, [edx + ecx + 8] */
  edi = (uint32_t)(edx + ecx + 0x8u);
/* 8a95a0: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8a95a2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8a95a4: mov ecx, edi */
  ecx = edi;
/* 8a95a6: mov word ptr [ebp - 0x2a], ax */
  W16((uint32_t)(ebp + 0xffffffd6u), (eax & 0xffffu));
/* 8a95aa: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a95b0u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a95b0: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8a95b2: mov dx, word ptr [ebp - 0x30] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xffffffd0u))) & 0xffffu);
/* 8a95b6: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 8a95b9: mov cx, word ptr [ebp - 0x2e] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xffffffd2u))) & 0xffffu);
/* 8a95bd: mov word ptr [eax], dx */
  W16((uint32_t)(eax), (edx & 0xffffu));
/* 8a95c0: mov dx, word ptr [ebp - 0x2c] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xffffffd4u))) & 0xffffu);
/* 8a95c4: mov word ptr [eax + 2], cx */
  W16((uint32_t)(eax + 0x2u), (ecx & 0xffffu));
/* 8a95c8: mov cx, word ptr [ebp - 0x2a] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xffffffd6u))) & 0xffffu);
/* 8a95cc: mov word ptr [eax + 4], dx */
  W16((uint32_t)(eax + 0x4u), (edx & 0xffffu));
/* 8a95d0: mov word ptr [eax + 6], cx */
  W16((uint32_t)(eax + 0x6u), (ecx & 0xffffu));
/* 8a95d4: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8a95d7: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8a95d8: jmp 0x8a9550 */
  goto L_8a9550;
L_8a95dd: /* 8a95dd: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8a95e0: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8a95e2: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8a95e5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a95e7: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* 8a95ea: je 0x8a961c */
  if (zf) goto L_8a961c;
L_8a95ec: /* 8a95ec: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8a95ef: mov esi, dword ptr [eax + ecx + 8] */
  esi = R32((uint32_t)(eax + ecx + 0x8u));
/* 8a95f3: mov edx, dword ptr [eax + ecx + 0xc] */
  edx = R32((uint32_t)(eax + ecx + 0xcu));
/* 8a95f7: movzx esi, word ptr [esi + 6] */
  esi = (uint32_t)(R16((uint32_t)(esi + 0x6u)));
/* 8a95fb: mov eax, dword ptr [eax + ecx] */
  eax = R32((uint32_t)(eax + ecx));
/* 8a95fe: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8a9601: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a9602: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a9603: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a9604: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 8a960a: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8a960c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a960d: push 0xae93b8 */
  { uint32_t v = 0xae93b8u; esp -= 4; W32(esp, v); }
/* 8a9612: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a9613: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8a9619u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8a9619: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8a961c: /* 8a961c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a961e: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a9620: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 8a9623: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a9629u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a9629: jmp 0x8a9460 */
  goto L_8a9460;
L_8a962e: /* 8a962e: xor esi, esi */
  esi = 0;
/* 8a9630: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a9631: lea ecx, [ebp - 0xd0] */
  ecx = (uint32_t)(ebp + 0xffffff30u);
/* 8a9637: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 8a963a: call 0x6c8378 */
  esp -= 4; W32(esp, 0x8a963fu); SPILL(); f_6c8378(); if (g_unwind) return; RELOAD();
/* 8a963f: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8a9642: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a9643: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8a9645: lea ecx, [ebx + 0x28] */
  ecx = (uint32_t)(ebx + 0x28u);
/* 8a9648: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 8a964c: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x8a9652u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 8a9652: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
L_8a9655: /* 8a9655: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8a9658: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8a965b: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a965d: jge 0x8a9755 */
  if ((sf == of)) goto L_8a9755;
L_8a9663: /* 8a9663: mov esi, dword ptr [ebx + 0x28] */
  esi = R32((uint32_t)(ebx + 0x28u));
/* 8a9666: mov eax, dword ptr [ebx + 0x58] */
  eax = R32((uint32_t)(ebx + 0x58u));
/* 8a9669: mov edi, ecx */
  edi = ecx;
/* 8a966b: lea edi, [edi + edi*4] */
  edi = (uint32_t)(edi + edi*4);
/* 8a966e: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 8a9671: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8a9673: mov word ptr [esi + 2], ax */
  W16((uint32_t)(esi + 0x2u), (eax & 0xffffu));
/* 8a9677: mov eax, dword ptr [ebx + 0x90] */
  eax = R32((uint32_t)(ebx + 0x90u));
/* 8a967d: xor ecx, ecx */
  ecx = 0;
/* 8a967f: mov word ptr [esi + 4], ax */
  W16((uint32_t)(esi + 0x4u), (eax & 0xffffu));
/* 8a9683: mov word ptr [esi + 6], cx */
  W16((uint32_t)(esi + 0x6u), (ecx & 0xffffu));
/* 8a9687: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8a968a: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 8a968d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8a9690: /* 8a9690: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8a9693: cmp edx, dword ptr [edi + eax + 0xc] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + eax + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a9697: jge 0x8a96fc */
  if ((sf == of)) goto L_8a96fc;
L_8a9699: /* 8a9699: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 8a969c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8a96a0: /* 8a96a0: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8a96a3: cmp ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a96a6: jge 0x8a96f5 */
  if ((sf == of)) goto L_8a96f5;
L_8a96a8: /* 8a96a8: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8a96ab: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 8a96ae: mov edx, dword ptr [edi + eax + 8] */
  edx = R32((uint32_t)(edi + eax + 0x8u));
/* 8a96b2: xor eax, eax */
  eax = 0;
/* 8a96b4: mov ax, word ptr [edx + ecx*2] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edx + ecx*2))) & 0xffffu);
/* 8a96b8: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 8a96bb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a96bc: lea ecx, [ebx + 0x54] */
  ecx = (uint32_t)(ebx + 0x54u);
/* 8a96bf: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 8a96c2: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8a96c8u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8a96c8: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8a96cb: xor eax, eax */
  eax = 0;
/* 8a96cd: mov ax, word ptr [esi + 4] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0x4u))) & 0xffffu);
/* 8a96d1: cmp ax, cx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8a96d4: jbe 0x8a96d8 */
  if ((cf | zf)) goto L_8a96d8;
L_8a96d6: /* 8a96d6: mov eax, ecx */
  eax = ecx;
L_8a96d8: /* 8a96d8: mov word ptr [esi + 4], ax */
  W16((uint32_t)(esi + 0x4u), (eax & 0xffffu));
/* 8a96dc: xor eax, eax */
  eax = 0;
/* 8a96de: mov ax, word ptr [esi + 6] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0x6u))) & 0xffffu);
/* 8a96e2: cmp ax, cx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 8a96e5: jae 0x8a96e9 */
  if (!cf) goto L_8a96e9;
L_8a96e7: /* 8a96e7: mov eax, ecx */
  eax = ecx;
L_8a96e9: /* 8a96e9: mov word ptr [esi + 6], ax */
  W16((uint32_t)(esi + 0x6u), (eax & 0xffffu));
/* 8a96ed: inc dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 8a96f0: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8a96f3: jmp 0x8a96a0 */
  goto L_8a96a0;
L_8a96f5: /* 8a96f5: inc dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 8a96f8: xor ecx, ecx */
  ecx = 0;
/* 8a96fa: jmp 0x8a9690 */
  goto L_8a9690;
L_8a96fc: /* 8a96fc: mov dx, word ptr [edi + eax + 0xc] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + eax + 0xcu))) & 0xffffu);
/* 8a9701: imul dx, dx, 3 */
  { int32_t r = (int32_t)(int16_t)((edx & 0xffffu)) * (int32_t)(int16_t)(0x3u);
  edx = (edx & 0xffff0000u) | ((uint32_t)((uint32_t)r) & 0xffffu);
  }
/* 8a9705: mov word ptr [esi + 8], dx */
  W16((uint32_t)(esi + 0x8u), (edx & 0xffffu));
/* 8a9709: mov word ptr [esi + 0xa], cx */
  W16((uint32_t)(esi + 0xau), (ecx & 0xffffu));
/* 8a970d: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8a9710: mov dx, word ptr [edi + eax] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + eax))) & 0xffffu);
/* 8a9714: mov word ptr [esi + 0xc], dx */
  W16((uint32_t)(esi + 0xcu), (edx & 0xffffu));
/* 8a9718: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8a971b: cmp dword ptr [edi + eax + 0xc], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + eax + 0xcu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a971f: je 0x8a972b */
  if (zf) goto L_8a972b;
L_8a9721: /* 8a9721: mov eax, dword ptr [edi + eax + 8] */
  eax = R32((uint32_t)(edi + eax + 0x8u));
/* 8a9725: movzx eax, word ptr [eax + 6] */
  eax = (uint32_t)(R16((uint32_t)(eax + 0x6u)));
/* 8a9729: jmp 0x8a972d */
  goto L_8a972d;
L_8a972b: /* 8a972b: xor eax, eax */
  eax = 0;
L_8a972d: /* 8a972d: mov word ptr [esi], ax */
  W16((uint32_t)(esi), (eax & 0xffffu));
/* 8a9730: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8a9733: mov word ptr [esi + 0x10], ax */
  W16((uint32_t)(esi + 0x10u), (eax & 0xffffu));
/* 8a9737: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8a973a: mov dx, word ptr [edi + ecx + 0xc] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + ecx + 0xcu))) & 0xffffu);
/* 8a973f: mov word ptr [esi + 0x12], dx */
  W16((uint32_t)(esi + 0x12u), (edx & 0xffffu));
/* 8a9743: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8a9746: add eax, dword ptr [edi + ecx + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + ecx + 0xcu)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8a974a: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8a974d: inc dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 8a9750: jmp 0x8a9655 */
  goto L_8a9655;
L_8a9755: /* 8a9755: cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a9758: jg 0x8a9916 */
  if ((!zf && sf == of)) goto L_8a9916;
L_8a975e: /* 8a975e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8a9760: jle 0x8a9916 */
  if ((zf || sf != of)) goto L_8a9916;
L_8a9766: /* 8a9766: mov edi, dword ptr [ebp - 0x34] */
  edi = R32((uint32_t)(ebp + 0xffffffccu));
/* 8a9769: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a976b: je 0x8a978f */
  if (zf) goto L_8a978f;
L_8a976d: /* 8a976d: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8a9770: mov ecx, dword ptr [ebx + 0xe4] */
  ecx = R32((uint32_t)(ebx + 0xe4u));
/* 8a9776: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a9777: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 8a977c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a977d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a977e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8a9780: push 0xae9438 */
  { uint32_t v = 0xae9438u; esp -= 4; W32(esp, v); }
/* 8a9785: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a9786: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8a978cu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8a978c: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8a978f: /* 8a978f: mov dword ptr [ebx + 0x18], 0 */
  W32((uint32_t)(ebx + 0x18u), 0x0u);
/* 8a9796: lea ecx, [ebx + 0x1c] */
  ecx = (uint32_t)(ebx + 0x1cu);
/* 8a9799: xor eax, eax */
  eax = 0;
/* 8a979b: jmp 0x8a97a0 */
  goto L_8a97a0;
L_8a97a0: /* 8a97a0: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a97a3: jge 0x8a97a8 */
  if ((sf == of)) goto L_8a97a8;
L_8a97a5: /* 8a97a5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a97a6: jmp 0x8a97a0 */
  goto L_8a97a0;
L_8a97a8: /* 8a97a8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a97aa: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8a97ac: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a97b2u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a97b2: lea ecx, [ebx + 0xc] */
  ecx = (uint32_t)(ebx + 0xcu);
/* 8a97b5: xor eax, eax */
  eax = 0;
L_8a97b7: /* 8a97b7: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a97ba: jge 0x8a97bf */
  if ((sf == of)) goto L_8a97bf;
L_8a97bc: /* 8a97bc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a97bd: jmp 0x8a97b7 */
  goto L_8a97b7;
L_8a97bf: /* 8a97bf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a97c1: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 8a97c3: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a97c9u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a97c9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a97cb: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a97cd: mov ecx, ebx */
  ecx = ebx;
/* 8a97cf: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a97d5u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a97d5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a97d7: lea ecx, [ebx + 0x38] */
  ecx = (uint32_t)(ebx + 0x38u);
/* 8a97da: call dword ptr [0xcfa3a0] */
  esp -= 4; W32(esp, 0x8a97e0u); SPILL(); f_4e264e(); if (g_unwind) return; /* Core!?Empty@?$TArray@G@@QAEXH@Z */ RELOAD();
/* 8a97e0: cmp dword ptr [ebp + 0x14], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a97e4: jne 0x8a9954 */
  if (!zf) goto L_8a9954;
L_8a97ea: /* 8a97ea: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a97ec: je 0x8a980c */
  if (zf) goto L_8a980c;
L_8a97ee: /* 8a97ee: mov eax, dword ptr [ebx + 0xe4] */
  eax = R32((uint32_t)(ebx + 0xe4u));
/* 8a97f4: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 8a97fa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a97fb: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8a97fd: push 0xae94d4 */
  { uint32_t v = 0xae94d4u; esp -= 4; W32(esp, v); }
/* 8a9802: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a9803: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8a9809u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8a9809: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8a980c: /* 8a980c: mov eax, dword ptr [ebx + 0xe4] */
  eax = R32((uint32_t)(ebx + 0xe4u));
/* 8a9812: lea esi, [eax - 1] */
  esi = (uint32_t)(eax + 0xffffffffu);
L_8a9815: /* 8a9815: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8a9817: jl 0x8a988e */
  if ((sf != of)) goto L_8a988e;
L_8a9819: /* 8a9819: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8a981c: cmp dword ptr [ecx + esi*4], -3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + esi*4))); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a9820: jne 0x8a9888 */
  if (!zf) goto L_8a9888;
L_8a9822: /* 8a9822: cmp esi, dword ptr [ebx + 0xe4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0xe4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a9828: jle 0x8a9842 */
  if ((zf || sf != of)) goto L_8a9842;
L_8a982a: /* 8a982a: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 8a982f: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8a9834: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 8a9839: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8a983fu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8a983f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8a9842: /* 8a9842: mov eax, dword ptr [ebx + 0xe4] */
  eax = R32((uint32_t)(ebx + 0xe4u));
/* 8a9848: lea edi, [esi + 1] */
  edi = (uint32_t)(esi + 0x1u);
/* 8a984b: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a984d: jle 0x8a9867 */
  if ((zf || sf != of)) goto L_8a9867;
L_8a984f: /* 8a984f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 8a9854: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8a9859: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 8a985e: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8a9864u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8a9864: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8a9867: /* 8a9867: mov eax, esi */
  eax = esi;
/* 8a9869: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8a9870: /* 8a9870: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a9872: jge 0x8a9877 */
  if ((sf == of)) goto L_8a9877;
L_8a9874: /* 8a9874: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a9875: jmp 0x8a9870 */
  goto L_8a9870;
L_8a9877: /* 8a9877: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8a9879: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8a987b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a987c: lea ecx, [ebx + 0xe0] */
  ecx = (uint32_t)(ebx + 0xe0u);
/* 8a9882: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x8a9888u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
L_8a9888: /* 8a9888: mov edi, dword ptr [ebp - 0x34] */
  edi = R32((uint32_t)(ebp + 0xffffffccu));
/* 8a988b: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 8a988c: jmp 0x8a9815 */
  goto L_8a9815;
L_8a988e: /* 8a988e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a9890: je 0x8a98b0 */
  if (zf) goto L_8a98b0;
L_8a9892: /* 8a9892: mov eax, dword ptr [ebx + 0xe4] */
  eax = R32((uint32_t)(ebx + 0xe4u));
/* 8a9898: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 8a989e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a989f: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8a98a1: push 0xae9508 */
  { uint32_t v = 0xae9508u; esp -= 4; W32(esp, v); }
/* 8a98a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a98a7: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8a98adu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8a98ad: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8a98b0: /* 8a98b0: mov eax, dword ptr [ebx + 0xe4] */
  eax = R32((uint32_t)(ebx + 0xe4u));
/* 8a98b6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a98b8: je 0x8a9954 */
  if (zf) goto L_8a9954;
L_8a98be: /* 8a98be: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a98bf: call 0x6c5e66 */
  esp -= 4; W32(esp, 0x8a98c4u); SPILL(); f_6c5e66(); if (g_unwind) return; RELOAD();
/* 8a98c4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a98c7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a98c8: call 0x6c8eef */
  esp -= 4; W32(esp, 0x8a98cdu); SPILL(); f_6c8eef(); if (g_unwind) return; RELOAD();
/* 8a98cd: mov ecx, dword ptr [ebp - 0x64] */
  ecx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 8a98d0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a98d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a98d4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a98d5: call 0x6c35f3 */
  esp -= 4; W32(esp, 0x8a98dau); SPILL(); f_6c35f3(); if (g_unwind) return; RELOAD();
/* 8a98da: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a98dd: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a98df: je 0x8a9954 */
  if (zf) goto L_8a9954;
L_8a98e1: /* 8a98e1: mov eax, dword ptr [ebx + 0xb4] */
  eax = R32((uint32_t)(ebx + 0xb4u));
/* 8a98e7: mov ecx, dword ptr [ebx + 0xcc] */
  ecx = R32((uint32_t)(ebx + 0xccu));
/* 8a98ed: mov edx, dword ptr [ebx + 0xfc] */
  edx = R32((uint32_t)(ebx + 0xfcu));
/* 8a98f3: mov esi, dword ptr [ebx + 0xe4] */
  esi = R32((uint32_t)(ebx + 0xe4u));
/* 8a98f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a98fa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a98fb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a98fc: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 8a9902: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8a9904: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a9905: push 0xae9578 */
  { uint32_t v = 0xae9578u; esp -= 4; W32(esp, v); }
/* 8a990a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a990b: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8a9911u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8a9911: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a9914: jmp 0x8a9954 */
  goto L_8a9954;
L_8a9916: /* 8a9916: lea ecx, [ebx + 0x8c] */
  ecx = (uint32_t)(ebx + 0x8cu);
/* 8a991c: xor eax, eax */
  eax = 0;
/* 8a991e: mov edi, edi */
  edi = edi;
L_8a9920: /* 8a9920: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a9923: jge 0x8a9928 */
  if ((sf == of)) goto L_8a9928;
L_8a9925: /* 8a9925: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a9926: jmp 0x8a9920 */
  goto L_8a9920;
L_8a9928: /* 8a9928: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a992a: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 8a992c: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a9932u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a9932: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a9934: lea ecx, [ebx + 0x54] */
  ecx = (uint32_t)(ebx + 0x54u);
/* 8a9937: call dword ptr [0xcfa3a0] */
  esp -= 4; W32(esp, 0x8a993du); SPILL(); f_4e264e(); if (g_unwind) return; /* Core!?Empty@?$TArray@G@@QAEXH@Z */ RELOAD();
/* 8a993d: lea ecx, [ebx + 0x28] */
  ecx = (uint32_t)(ebx + 0x28u);
/* 8a9940: xor eax, eax */
  eax = 0;
L_8a9942: /* 8a9942: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a9945: jge 0x8a994a */
  if ((sf == of)) goto L_8a994a;
L_8a9947: /* 8a9947: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a9948: jmp 0x8a9942 */
  goto L_8a9942;
L_8a994a: /* 8a994a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a994c: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8a994e: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a9954u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
L_8a9954: /* 8a9954: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a9955: lea ecx, [ebp - 0xd0] */
  ecx = (uint32_t)(ebp + 0xffffff30u);
/* 8a995b: call 0x6c803f */
  esp -= 4; W32(esp, 0x8a9960u); SPILL(); f_6c803f(); if (g_unwind) return; RELOAD();
/* 8a9960: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 8a9966: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 8a996a: call 0x6c9543 */
  esp -= 4; W32(esp, 0x8a996fu); SPILL(); f_6c9543(); if (g_unwind) return; RELOAD();
/* 8a996f: lea ecx, [ebp - 0xac] */
  ecx = (uint32_t)(ebp + 0xffffff54u);
/* 8a9975: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 8a9979: call 0x6c9543 */
  esp -= 4; W32(esp, 0x8a997eu); SPILL(); f_6c9543(); if (g_unwind) return; RELOAD();
/* 8a997e: lea ecx, [ebp - 0xb8] */
  ecx = (uint32_t)(ebp + 0xffffff48u);
/* 8a9984: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 8a9988: call 0x6c1730 */
  esp -= 4; W32(esp, 0x8a998du); SPILL(); f_6c1730(); if (g_unwind) return; RELOAD();
/* 8a998d: lea ecx, [ebp - 0xc4] */
  ecx = (uint32_t)(ebp + 0xffffff3cu);
/* 8a9993: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 8a9997: call 0x6c39cc */
  esp -= 4; W32(esp, 0x8a999cu); SPILL(); f_6c39cc(); if (g_unwind) return; RELOAD();
/* 8a999c: lea ecx, [ebp - 0xd0] */
  ecx = (uint32_t)(ebp + 0xffffff30u);
/* 8a99a2: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 8a99a6: call 0x6cad0d */
  esp -= 4; W32(esp, 0x8a99abu); SPILL(); f_6cad0d(); if (g_unwind) return; RELOAD();
/* 8a99ab: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 8a99ae: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 8a99b2: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x8a99b7u); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 8a99b7: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 8a99ba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a99bb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a99bd: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 8a99c0: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 8a99c4: call 0x6cab19 */
  esp -= 4; W32(esp, 0x8a99c9u); SPILL(); f_6cab19(); if (g_unwind) return; RELOAD();
/* 8a99c9: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 8a99cc: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 8a99d0: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x8a99d6u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 8a99d6: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8a99d9: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8a99dd: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x8a99e2u); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 8a99e2: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8a99e5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a99e6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a99e8: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 8a99eb: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 8a99ef: call 0x6c5079 */
  esp -= 4; W32(esp, 0x8a99f4u); SPILL(); f_6c5079(); if (g_unwind) return; RELOAD();
/* 8a99f4: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 8a99f7: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8a99fb: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x8a9a01u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 8a9a01: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 8a9a04: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8a9a08: call 0x6c9543 */
  esp -= 4; W32(esp, 0x8a9a0du); SPILL(); f_6c9543(); if (g_unwind) return; RELOAD();
/* 8a9a0d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8a9a10: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a9a11: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a9a12: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a9a19: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a9a1a: mov esp, ebp */
  esp = ebp;
/* 8a9a1c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a9a1d: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_8a979d(void) {
  LOAD_REGS();
L_8a979d: /* 8a979d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8a97a0: /* 8a97a0: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a97a3: jge 0x8a97a8 */
  if ((sf == of)) goto L_8a97a8;
L_8a97a5: /* 8a97a5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a97a6: jmp 0x8a97a0 */
  goto L_8a97a0;
L_8a97a8: /* 8a97a8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a97aa: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8a97ac: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a97b2u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a97b2: lea ecx, [ebx + 0xc] */
  ecx = (uint32_t)(ebx + 0xcu);
/* 8a97b5: xor eax, eax */
  eax = 0;
L_8a97b7: /* 8a97b7: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a97ba: jge 0x8a97bf */
  if ((sf == of)) goto L_8a97bf;
L_8a97bc: /* 8a97bc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a97bd: jmp 0x8a97b7 */
  goto L_8a97b7;
L_8a97bf: /* 8a97bf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a97c1: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 8a97c3: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a97c9u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a97c9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a97cb: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a97cd: mov ecx, ebx */
  ecx = ebx;
/* 8a97cf: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a97d5u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a97d5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a97d7: lea ecx, [ebx + 0x38] */
  ecx = (uint32_t)(ebx + 0x38u);
/* 8a97da: call dword ptr [0xcfa3a0] */
  esp -= 4; W32(esp, 0x8a97e0u); SPILL(); f_4e264e(); if (g_unwind) return; /* Core!?Empty@?$TArray@G@@QAEXH@Z */ RELOAD();
/* 8a97e0: cmp dword ptr [ebp + 0x14], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a97e4: jne 0x8a9954 */
  if (!zf) goto L_8a9954;
L_8a97ea: /* 8a97ea: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a97ec: je 0x8a980c */
  if (zf) goto L_8a980c;
L_8a97ee: /* 8a97ee: mov eax, dword ptr [ebx + 0xe4] */
  eax = R32((uint32_t)(ebx + 0xe4u));
/* 8a97f4: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 8a97fa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a97fb: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8a97fd: push 0xae94d4 */
  { uint32_t v = 0xae94d4u; esp -= 4; W32(esp, v); }
/* 8a9802: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a9803: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8a9809u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8a9809: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8a980c: /* 8a980c: mov eax, dword ptr [ebx + 0xe4] */
  eax = R32((uint32_t)(ebx + 0xe4u));
/* 8a9812: lea esi, [eax - 1] */
  esi = (uint32_t)(eax + 0xffffffffu);
L_8a9815: /* 8a9815: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8a9817: jl 0x8a988e */
  if ((sf != of)) goto L_8a988e;
L_8a9819: /* 8a9819: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8a981c: cmp dword ptr [ecx + esi*4], -3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + esi*4))); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a9820: jne 0x8a9888 */
  if (!zf) goto L_8a9888;
L_8a9822: /* 8a9822: cmp esi, dword ptr [ebx + 0xe4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0xe4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a9828: jle 0x8a9842 */
  if ((zf || sf != of)) goto L_8a9842;
L_8a982a: /* 8a982a: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 8a982f: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8a9834: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 8a9839: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8a983fu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8a983f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8a9842: /* 8a9842: mov eax, dword ptr [ebx + 0xe4] */
  eax = R32((uint32_t)(ebx + 0xe4u));
/* 8a9848: lea edi, [esi + 1] */
  edi = (uint32_t)(esi + 0x1u);
/* 8a984b: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a984d: jle 0x8a9867 */
  if ((zf || sf != of)) goto L_8a9867;
L_8a984f: /* 8a984f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 8a9854: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8a9859: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 8a985e: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8a9864u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8a9864: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8a9867: /* 8a9867: mov eax, esi */
  eax = esi;
/* 8a9869: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8a9870: /* 8a9870: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a9872: jge 0x8a9877 */
  if ((sf == of)) goto L_8a9877;
L_8a9874: /* 8a9874: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a9875: jmp 0x8a9870 */
  goto L_8a9870;
L_8a9877: /* 8a9877: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8a9879: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8a987b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a987c: lea ecx, [ebx + 0xe0] */
  ecx = (uint32_t)(ebx + 0xe0u);
/* 8a9882: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x8a9888u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
L_8a9888: /* 8a9888: mov edi, dword ptr [ebp - 0x34] */
  edi = R32((uint32_t)(ebp + 0xffffffccu));
/* 8a988b: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 8a988c: jmp 0x8a9815 */
  goto L_8a9815;
L_8a988e: /* 8a988e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a9890: je 0x8a98b0 */
  if (zf) goto L_8a98b0;
L_8a9892: /* 8a9892: mov eax, dword ptr [ebx + 0xe4] */
  eax = R32((uint32_t)(ebx + 0xe4u));
/* 8a9898: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 8a989e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a989f: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8a98a1: push 0xae9508 */
  { uint32_t v = 0xae9508u; esp -= 4; W32(esp, v); }
/* 8a98a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a98a7: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8a98adu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8a98ad: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8a98b0: /* 8a98b0: mov eax, dword ptr [ebx + 0xe4] */
  eax = R32((uint32_t)(ebx + 0xe4u));
/* 8a98b6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a98b8: je 0x8a9954 */
  if (zf) goto L_8a9954;
L_8a98be: /* 8a98be: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a98bf: call 0x6c5e66 */
  esp -= 4; W32(esp, 0x8a98c4u); SPILL(); f_6c5e66(); if (g_unwind) return; RELOAD();
/* 8a98c4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a98c7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a98c8: call 0x6c8eef */
  esp -= 4; W32(esp, 0x8a98cdu); SPILL(); f_6c8eef(); if (g_unwind) return; RELOAD();
/* 8a98cd: mov ecx, dword ptr [ebp - 0x64] */
  ecx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 8a98d0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a98d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a98d4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a98d5: call 0x6c35f3 */
  esp -= 4; W32(esp, 0x8a98dau); SPILL(); f_6c35f3(); if (g_unwind) return; RELOAD();
/* 8a98da: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a98dd: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a98df: je 0x8a9954 */
  if (zf) goto L_8a9954;
L_8a98e1: /* 8a98e1: mov eax, dword ptr [ebx + 0xb4] */
  eax = R32((uint32_t)(ebx + 0xb4u));
/* 8a98e7: mov ecx, dword ptr [ebx + 0xcc] */
  ecx = R32((uint32_t)(ebx + 0xccu));
/* 8a98ed: mov edx, dword ptr [ebx + 0xfc] */
  edx = R32((uint32_t)(ebx + 0xfcu));
/* 8a98f3: mov esi, dword ptr [ebx + 0xe4] */
  esi = R32((uint32_t)(ebx + 0xe4u));
/* 8a98f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a98fa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a98fb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a98fc: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 8a9902: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8a9904: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a9905: push 0xae9578 */
  { uint32_t v = 0xae9578u; esp -= 4; W32(esp, v); }
/* 8a990a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a990b: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8a9911u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8a9911: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a9914: jmp 0x8a9954 */
  goto L_8a9954;
L_8a9954: /* 8a9954: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a9955: lea ecx, [ebp - 0xd0] */
  ecx = (uint32_t)(ebp + 0xffffff30u);
/* 8a995b: call 0x6c803f */
  esp -= 4; W32(esp, 0x8a9960u); SPILL(); f_6c803f(); if (g_unwind) return; RELOAD();
/* 8a9960: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 8a9966: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 8a996a: call 0x6c9543 */
  esp -= 4; W32(esp, 0x8a996fu); SPILL(); f_6c9543(); if (g_unwind) return; RELOAD();
/* 8a996f: lea ecx, [ebp - 0xac] */
  ecx = (uint32_t)(ebp + 0xffffff54u);
/* 8a9975: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 8a9979: call 0x6c9543 */
  esp -= 4; W32(esp, 0x8a997eu); SPILL(); f_6c9543(); if (g_unwind) return; RELOAD();
/* 8a997e: lea ecx, [ebp - 0xb8] */
  ecx = (uint32_t)(ebp + 0xffffff48u);
/* 8a9984: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 8a9988: call 0x6c1730 */
  esp -= 4; W32(esp, 0x8a998du); SPILL(); f_6c1730(); if (g_unwind) return; RELOAD();
/* 8a998d: lea ecx, [ebp - 0xc4] */
  ecx = (uint32_t)(ebp + 0xffffff3cu);
/* 8a9993: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 8a9997: call 0x6c39cc */
  esp -= 4; W32(esp, 0x8a999cu); SPILL(); f_6c39cc(); if (g_unwind) return; RELOAD();
/* 8a999c: lea ecx, [ebp - 0xd0] */
  ecx = (uint32_t)(ebp + 0xffffff30u);
/* 8a99a2: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 8a99a6: call 0x6cad0d */
  esp -= 4; W32(esp, 0x8a99abu); SPILL(); f_6cad0d(); if (g_unwind) return; RELOAD();
/* 8a99ab: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 8a99ae: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 8a99b2: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x8a99b7u); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 8a99b7: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 8a99ba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a99bb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a99bd: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 8a99c0: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 8a99c4: call 0x6cab19 */
  esp -= 4; W32(esp, 0x8a99c9u); SPILL(); f_6cab19(); if (g_unwind) return; RELOAD();
/* 8a99c9: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 8a99cc: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 8a99d0: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x8a99d6u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 8a99d6: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8a99d9: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8a99dd: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x8a99e2u); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 8a99e2: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8a99e5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a99e6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a99e8: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 8a99eb: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 8a99ef: call 0x6c5079 */
  esp -= 4; W32(esp, 0x8a99f4u); SPILL(); f_6c5079(); if (g_unwind) return; RELOAD();
/* 8a99f4: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 8a99f7: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8a99fb: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x8a9a01u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 8a9a01: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 8a9a04: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8a9a08: call 0x6c9543 */
  esp -= 4; W32(esp, 0x8a9a0du); SPILL(); f_6c9543(); if (g_unwind) return; RELOAD();
/* 8a9a0d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8a9a10: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a9a11: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a9a12: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a9a19: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a9a1a: mov esp, ebp */
  esp = ebp;
/* 8a9a1c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a9a1d: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_8a9a20(void) {
  LOAD_REGS();
L_8a9a20: /* 8a9a20: mov eax, dword ptr [ebp - 0x94] */
  eax = R32((uint32_t)(ebp + 0xffffff6cu));
/* 8a9a26: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8a9a2b: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 8a9a2e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a9a2f: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
/* 8a9a32: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8a9a37u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8a9a37(); return;
}

void f_8a9a37(void) {
  LOAD_REGS();
L_8a9a37: /* 8a9a37: push 0xa1b0d0 */
  { uint32_t v = 0xa1b0d0u; esp -= 4; W32(esp, v); }
/* 8a9a3c: push 0xae9630 */
  { uint32_t v = 0xae9630u; esp -= 4; W32(esp, v); }
/* 8a9a41: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8a9a47u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8a9a47: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a9a4a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a9a4c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a9a4e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8a9a53u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8a9a53: guest_badaddr(0x8a9a53); return;
}

void f_8a9cb0(void) {
  LOAD_REGS();
L_8a9cb0: /* 8a9cb0: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8a9cb6: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8a9cb8: push 0x9d64ba */
  { uint32_t v = 0x9d64bau; esp -= 4; W32(esp, v); }
/* 8a9cbd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a9cbe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8a9cc5: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a9cc8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a9cc9: mov esi, ecx */
  esi = ecx;
/* 8a9ccb: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* 8a9cce: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a9cd1: jl 0x8a9efb */
  if ((sf != of)) goto L_8a9efb;
L_8a9cd7: /* 8a9cd7: cmp eax, dword ptr [esi + 0x3c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x3cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a9cda: jne 0x8a9efb */
  if (!zf) goto L_8a9efb;
L_8a9ce0: /* 8a9ce0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a9ce1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8a9ce2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a9ce3: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 8a9ce7: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8a9cedu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8a9ced: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 8a9cf0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a9cf1: xor edi, edi */
  edi = 0;
/* 8a9cf3: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* 8a9cf5: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 8a9cf9: mov dword ptr [esp + 0x4c], edi */
  W32((uint32_t)(esp + 0x4cu), edi);
/* 8a9cfd: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x8a9d03u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 8a9d03: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 8a9d07: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8a9d0du); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8a9d0d: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 8a9d10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a9d11: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 8a9d13: lea ecx, [esp + 0x38] */
  ecx = (uint32_t)(esp + 0x38u);
/* 8a9d17: mov byte ptr [esp + 0x4c], 1 */
  W8((uint32_t)(esp + 0x4cu), 0x1u);
/* 8a9d1c: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x8a9d22u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 8a9d22: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 8a9d26: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8a9d2cu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8a9d2c: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 8a9d2f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a9d30: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8a9d32: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 8a9d36: mov byte ptr [esp + 0x4c], 2 */
  W8((uint32_t)(esp + 0x4cu), 0x2u);
/* 8a9d3b: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x8a9d41u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 8a9d41: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 8a9d44: xor ebp, ebp */
  ebp = 0;
/* 8a9d46: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a9d48: jle 0x8a9dc2 */
  if ((zf || sf != of)) goto L_8a9dc2;
L_8a9d4a: /* 8a9d4a: xor ebx, ebx */
  ebx = 0;
/* 8a9d4c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8a9d50: /* 8a9d50: mov eax, dword ptr [esi + 0x44] */
  eax = R32((uint32_t)(esi + 0x44u));
/* 8a9d53: mov ecx, dword ptr [ebx + eax] */
  ecx = R32((uint32_t)(ebx + eax));
/* 8a9d56: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 8a9d5a: mov dword ptr [edx + ebp*8], ecx */
  W32((uint32_t)(edx + ebp*8), ecx);
/* 8a9d5d: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 8a9d61: mov dword ptr [eax + ebp*8 + 4], ebp */
  W32((uint32_t)(eax + ebp*8 + 0x4u), ebp);
/* 8a9d65: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 8a9d68: mov eax, dword ptr [ecx + edi + 0x5c] */
  eax = R32((uint32_t)(ecx + edi + 0x5cu));
/* 8a9d6c: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 8a9d70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a9d71: lea ecx, [edi + edx + 0x58] */
  ecx = (uint32_t)(edi + edx + 0x58u);
/* 8a9d75: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a9d77: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x8a9d7du); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 8a9d7d: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 8a9d80: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 8a9d84: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8a9d86: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a9d87: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a9d89: call 0x6cb217 */
  esp -= 4; W32(esp, 0x8a9d8eu); SPILL(); f_6cb217(); if (g_unwind) return; RELOAD();
/* 8a9d8e: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 8a9d91: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a9d93: call 0x6c33c3 */
  esp -= 4; W32(esp, 0x8a9d98u); SPILL(); f_6c33c3(); if (g_unwind) return; RELOAD();
/* 8a9d98: mov edx, dword ptr [esi + 0x44] */
  edx = R32((uint32_t)(esi + 0x44u));
/* 8a9d9b: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 8a9d9f: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8a9da1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a9da2: lea ecx, [ebx + eax] */
  ecx = (uint32_t)(ebx + eax);
/* 8a9da5: call 0x6c72b1 */
  esp -= 4; W32(esp, 0x8a9daau); SPILL(); f_6c72b1(); if (g_unwind) return; RELOAD();
/* 8a9daa: mov ecx, dword ptr [esi + 0x44] */
  ecx = R32((uint32_t)(esi + 0x44u));
/* 8a9dad: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a9daf: call 0x6c51c3 */
  esp -= 4; W32(esp, 0x8a9db4u); SPILL(); f_6c51c3(); if (g_unwind) return; RELOAD();
/* 8a9db4: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 8a9db7: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 8a9db8: add edi, 0x64 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8a9dbb: add ebx, 0x2c */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8a9dbe: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a9dc0: jl 0x8a9d50 */
  if ((sf != of)) goto L_8a9d50;
L_8a9dc2: /* 8a9dc2: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 8a9dc6: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 8a9dca: push 0x8a36f0 */
  { uint32_t v = 0x8a36f0u; esp -= 4; W32(esp, v); }
/* 8a9dcf: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8a9dd1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a9dd2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a9dd3: call dword ptr [0xcfaa7c] */
  esp -= 4; W32(esp, 0x8a9dd9u); SPILL(); f_4e1785(); if (g_unwind) return; /* Core!?appQsort@@YAXPAXHHP6AHPBX1@Z@Z */ RELOAD();
/* 8a9dd9: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 8a9ddc: xor ebx, ebx */
  ebx = 0;
/* 8a9dde: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a9de1: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a9de3: jle 0x8a9e5e */
  if ((zf || sf != of)) goto L_8a9e5e;
L_8a9de5: /* 8a9de5: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 8a9de9: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 8a9ded: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8a9df0: /* 8a9df0: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 8a9df4: mov ebp, dword ptr [eax + ebx*8 + 4] */
  ebp = R32((uint32_t)(eax + ebx*8 + 0x4u));
/* 8a9df8: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 8a9dfc: mov edi, ebp */
  edi = ebp;
/* 8a9dfe: imul edi, edi, 0x64 */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x64u);
  edi = (uint32_t)r;
  }
/* 8a9e01: lea edx, [edi + ecx] */
  edx = (uint32_t)(edi + ecx);
/* 8a9e04: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 8a9e07: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a9e08: add ecx, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a9e0c: call 0x6cb217 */
  esp -= 4; W32(esp, 0x8a9e11u); SPILL(); f_6cb217(); if (g_unwind) return; RELOAD();
/* 8a9e11: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 8a9e15: lea ecx, [edi + eax] */
  ecx = (uint32_t)(edi + eax);
/* 8a9e18: call 0x6c33c3 */
  esp -= 4; W32(esp, 0x8a9e1du); SPILL(); f_6c33c3(); if (g_unwind) return; RELOAD();
/* 8a9e1d: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 8a9e21: mov edi, ebp */
  edi = ebp;
/* 8a9e23: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 8a9e27: imul edi, edi, 0x2c */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x2cu);
  edi = (uint32_t)r;
  }
/* 8a9e2a: lea edx, [edi + ecx] */
  edx = (uint32_t)(edi + ecx);
/* 8a9e2d: mov ecx, dword ptr [esi + 0x44] */
  ecx = R32((uint32_t)(esi + 0x44u));
/* 8a9e30: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a9e31: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a9e33: call 0x6c72b1 */
  esp -= 4; W32(esp, 0x8a9e38u); SPILL(); f_6c72b1(); if (g_unwind) return; RELOAD();
/* 8a9e38: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 8a9e3c: lea ecx, [edi + eax] */
  ecx = (uint32_t)(edi + eax);
/* 8a9e3f: call 0x6c51c3 */
  esp -= 4; W32(esp, 0x8a9e44u); SPILL(); f_6c51c3(); if (g_unwind) return; RELOAD();
/* 8a9e44: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 8a9e48: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 8a9e4b: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8a9e4c: add edx, 0x64 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8a9e4f: add ebp, 0x2c */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 8a9e52: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a9e54: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 8a9e58: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 8a9e5c: jl 0x8a9df0 */
  if ((sf != of)) goto L_8a9df0;
L_8a9e5e: /* 8a9e5e: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 8a9e62: xor ebx, ebx */
  ebx = 0;
/* 8a9e64: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8a9e66: jle 0x8a9e87 */
  if ((zf || sf != of)) goto L_8a9e87;
L_8a9e68: /* 8a9e68: xor edi, edi */
  edi = 0;
/* 8a9e6a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8a9e70: /* 8a9e70: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 8a9e74: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a9e76: call 0x6c33c3 */
  esp -= 4; W32(esp, 0x8a9e7bu); SPILL(); f_6c33c3(); if (g_unwind) return; RELOAD();
/* 8a9e7b: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 8a9e7f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8a9e80: add edi, 0x64 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8a9e83: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a9e85: jl 0x8a9e70 */
  if ((sf != of)) goto L_8a9e70;
L_8a9e87: /* 8a9e87: mov esi, dword ptr [esi + 0x3c] */
  esi = R32((uint32_t)(esi + 0x3cu));
/* 8a9e8a: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 8a9e8e: mov byte ptr [esp + 0x44], 1 */
  W8((uint32_t)(esp + 0x44u), 0x1u);
/* 8a9e93: call 0x6c4133 */
  esp -= 4; W32(esp, 0x8a9e98u); SPILL(); f_6c4133(); if (g_unwind) return; RELOAD();
/* 8a9e98: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 8a9e9c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a9e9d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a9e9f: lea ecx, [esp + 0x38] */
  ecx = (uint32_t)(esp + 0x38u);
/* 8a9ea3: mov byte ptr [esp + 0x4c], 3 */
  W8((uint32_t)(esp + 0x4cu), 0x3u);
/* 8a9ea8: call 0x6c51cd */
  esp -= 4; W32(esp, 0x8a9eadu); SPILL(); f_6c51cd(); if (g_unwind) return; RELOAD();
/* 8a9ead: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 8a9eb1: mov byte ptr [esp + 0x44], 0 */
  W8((uint32_t)(esp + 0x44u), 0x0u);
/* 8a9eb6: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x8a9ebcu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 8a9ebc: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 8a9ec0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a9ec1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a9ec3: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 8a9ec7: mov dword ptr [esp + 0x4c], 4 */
  W32((uint32_t)(esp + 0x4cu), 0x4u);
/* 8a9ecf: call 0x6c9eee */
  esp -= 4; W32(esp, 0x8a9ed4u); SPILL(); f_6c9eee(); if (g_unwind) return; RELOAD();
/* 8a9ed4: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 8a9ed8: mov dword ptr [esp + 0x44], 0xffffffff */
  W32((uint32_t)(esp + 0x44u), 0xffffffffu);
/* 8a9ee0: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x8a9ee6u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 8a9ee6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a9ee7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a9ee8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a9ee9: mov eax, esi */
  eax = esi;
/* 8a9eeb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a9eec: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 8a9ef0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a9ef7: add esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a9efa: ret  */
  esp += 4; SPILL(); return;
L_8a9efb: /* 8a9efb: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 8a9eff: xor eax, eax */
  eax = 0;
/* 8a9f01: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a9f02: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a9f09: add esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a9f0c: ret  */
  esp += 4; SPILL(); return;
}

void f_8a9fb0(void) {
  LOAD_REGS();
L_8a9fb0: /* 8a9fb0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8a9fb1: mov ebp, esp */
  ebp = esp;
/* 8a9fb3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8a9fb5: push 0x9d654d */
  { uint32_t v = 0x9d654du; esp -= 4; W32(esp, v); }
/* 8a9fba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8a9fc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a9fc1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8a9fc8: sub esp, 0x58 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a9fcb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a9fcc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a9fcd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a9fce: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8a9fd1: xor eax, eax */
  eax = 0;
/* 8a9fd3: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a9fd5: mov esi, ecx */
  esi = ecx;
/* 8a9fd7: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8a9fda: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 8a9fdd: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 8a9fe0: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8a9fe3: je 0x8aa54e */
  if (zf) goto L_8aa54e;
L_8a9fe9: /* 8a9fe9: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 8a9fec: mov eax, dword ptr [edi + 0x30] */
  eax = R32((uint32_t)(edi + 0x30u));
/* 8a9fef: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a9ff1: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 8a9ff4: je 0x8a9ffd */
  if (zf) goto L_8a9ffd;
L_8a9ff6: /* 8a9ff6: mov dword ptr [ebp - 0x14], 1 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x1u);
L_8a9ffd: /* 8a9ffd: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 8aa000: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8aa006u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8aa006: mov eax, dword ptr [edi + 0x30] */
  eax = R32((uint32_t)(edi + 0x30u));
/* 8aa009: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8aa00a: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8aa00c: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 8aa00f: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8aa013: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x8aa019u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 8aa019: xor ebx, ebx */
  ebx = 0;
/* 8aa01b: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 8aa01e: mov edi, edi */
  edi = edi;
L_8aa020: /* 8aa020: cmp ebx, dword ptr [ebp - 0x50] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8aa023: jge 0x8aa077 */
  if ((sf == of)) goto L_8aa077;
L_8aa025: /* 8aa025: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 8aa028: mov dword ptr [eax + ebx*4], 0xffffffff */
  W32((uint32_t)(eax + ebx*4), 0xffffffffu);
/* 8aa02f: xor edi, edi */
  edi = 0;
L_8aa031: /* 8aa031: cmp edi, dword ptr [esi + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8aa034: jge 0x8aa071 */
  if ((sf == of)) goto L_8aa071;
L_8aa036: /* 8aa036: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 8aa039: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 8aa03c: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 8aa03f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8aa042: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8aa043: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 8aa046: lea ecx, [ebx + ebx*2] */
  ecx = (uint32_t)(ebx + ebx*2);
/* 8aa049: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 8aa04c: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x8aa052u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 8aa052: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8aa054: je 0x8aa06e */
  if (zf) goto L_8aa06e;
L_8aa056: /* 8aa056: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8aa059: mov dword ptr [ecx + ebx*4], edi */
  W32((uint32_t)(ecx + ebx*4), edi);
/* 8aa05c: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8aa05f: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8aa060: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8aa062: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8aa065: je 0x8aa06e */
  if (zf) goto L_8aa06e;
L_8aa067: /* 8aa067: mov dword ptr [ebp - 0x14], 1 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x1u);
L_8aa06e: /* 8aa06e: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8aa06f: jmp 0x8aa031 */
  goto L_8aa031;
L_8aa071: /* 8aa071: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8aa074: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8aa075: jmp 0x8aa020 */
  goto L_8aa020;
L_8aa077: /* 8aa077: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8aa07a: cmp edx, dword ptr [esi + 0x30] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8aa07d: jne 0x8aa08a */
  if (!zf) goto L_8aa08a;
L_8aa07f: /* 8aa07f: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8aa082: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8aa084: je 0x8aa542 */
  if (zf) goto L_8aa542;
L_8aa08a: /* 8aa08a: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8aa08d: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8aa093u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8aa093: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8aa097: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8aa09e: mov edi, edi */
  edi = edi;
L_8aa0a0: /* 8aa0a0: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8aa0a3: cmp eax, dword ptr [esi + 0x3c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x3cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8aa0a6: jge 0x8aa38c */
  if ((sf == of)) goto L_8aa38c;
L_8aa0ac: /* 8aa0ac: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8aa0ae: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* 8aa0b0: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8aa0b3: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x8aa0b9u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 8aa0b9: imul eax, eax, 0x64 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x64u);
  eax = (uint32_t)r;
  }
/* 8aa0bc: mov edi, dword ptr [ebp - 0x3c] */
  edi = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8aa0bf: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8aa0c2: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8aa0c4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8aa0c5: mov ebx, eax */
  ebx = eax;
/* 8aa0c7: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 8aa0c9: lea ecx, [ebx + 0x24] */
  ecx = (uint32_t)(ebx + 0x24u);
/* 8aa0cc: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x8aa0d2u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 8aa0d2: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8aa0d5: mov edx, dword ptr [esi + 0x38] */
  edx = R32((uint32_t)(esi + 0x38u));
/* 8aa0d8: imul eax, eax, 0x64 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x64u);
  eax = (uint32_t)r;
  }
/* 8aa0db: mov ecx, dword ptr [eax + edx + 0x14] */
  ecx = R32((uint32_t)(eax + edx + 0x14u));
/* 8aa0df: mov dword ptr [ebx + 0x14], ecx */
  W32((uint32_t)(ebx + 0x14u), ecx);
/* 8aa0e2: mov edx, dword ptr [esi + 0x38] */
  edx = R32((uint32_t)(esi + 0x38u));
/* 8aa0e5: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8aa0e7: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 8aa0e9: mov ecx, ebx */
  ecx = ebx;
/* 8aa0eb: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 8aa0ed: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* 8aa0f0: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 8aa0f3: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8aa0f6: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8aa0f9: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 8aa0fc: mov edx, dword ptr [eax + ecx + 0x10] */
  edx = R32((uint32_t)(eax + ecx + 0x10u));
/* 8aa100: mov dword ptr [ebx + 0x10], edx */
  W32((uint32_t)(ebx + 0x10u), edx);
/* 8aa103: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 8aa106: mov edx, dword ptr [eax + ecx + 0xc] */
  edx = R32((uint32_t)(eax + ecx + 0xcu));
/* 8aa10a: mov dword ptr [ebx + 0xc], edx */
  W32((uint32_t)(ebx + 0xcu), edx);
/* 8aa10d: xor edi, edi */
  edi = 0;
/* 8aa10f: nop  */
L_8aa110: /* 8aa110: cmp edi, dword ptr [ebx + 0x28] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x28u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8aa113: jge 0x8aa37d */
  if ((sf == of)) goto L_8aa37d;
L_8aa119: /* 8aa119: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 8aa11c: mov eax, dword ptr [eax + edi*4] */
  eax = R32((uint32_t)(eax + edi*4));
/* 8aa11f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8aa121: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8aa124: jge 0x8aa244 */
  if ((sf == of)) goto L_8aa244;
L_8aa12a: /* 8aa12a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8aa12c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8aa12e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8aa130: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8aa132: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 8aa135: call dword ptr [0xcfa358] */
  esp -= 4; W32(esp, 0x8aa13bu); SPILL(); f_4e3864(); if (g_unwind) return; /* Core!??0FQuat@@QAE@MMMM@Z */ RELOAD();
/* 8aa13b: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 8aa13e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8aa140: mov dword ptr [ebp - 0x48], 0 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x0u);
/* 8aa147: mov dword ptr [ebp - 0x44], 0 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x0u);
/* 8aa14e: mov dword ptr [ebp - 0x40], 0 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x0u);
/* 8aa155: je 0x8aa1b4 */
  if (zf) goto L_8aa1b4;
L_8aa157: /* 8aa157: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8aa159: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8aa15b: mov ecx, esi */
  ecx = esi;
/* 8aa15d: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x8aa163u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8aa163: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8aa166: mov edx, dword ptr [edx + 0x2c] */
  edx = R32((uint32_t)(edx + 0x2cu));
/* 8aa169: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 8aa16c: mov ecx, dword ptr [edx + ecx*4] */
  ecx = R32((uint32_t)(edx + ecx*4));
/* 8aa16f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8aa170: mov ecx, eax */
  ecx = eax;
/* 8aa172: call 0x6cceaa */
  esp -= 4; W32(esp, 0x8aa177u); SPILL(); f_6cceaa(); if (g_unwind) return; RELOAD();
/* 8aa177: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8aa179: jle 0x8aa1b4 */
  if ((zf || sf != of)) goto L_8aa1b4;
L_8aa17b: /* 8aa17b: mov edx, dword ptr [esi + 0x1dc] */
  edx = R32((uint32_t)(esi + 0x1dcu));
/* 8aa181: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8aa184: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8aa186: lea ecx, [eax + 8] */
  ecx = (uint32_t)(eax + 0x8u);
/* 8aa189: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8aa18b: mov dword ptr [ebp - 0x64], edx */
  W32((uint32_t)(ebp + 0xffffff9cu), edx);
/* 8aa18e: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 8aa191: mov dword ptr [ebp - 0x60], edx */
  W32((uint32_t)(ebp + 0xffffffa0u), edx);
/* 8aa194: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 8aa197: mov dword ptr [ebp - 0x5c], edx */
  W32((uint32_t)(ebp + 0xffffffa4u), edx);
/* 8aa19a: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 8aa19d: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 8aa1a0: add eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8aa1a3: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8aa1a5: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8aa1a8: mov dword ptr [ebp - 0x48], edx */
  W32((uint32_t)(ebp + 0xffffffb8u), edx);
/* 8aa1ab: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 8aa1ae: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 8aa1b1: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
L_8aa1b4: /* 8aa1b4: mov eax, dword ptr [ebx + 0x24] */
  eax = R32((uint32_t)(ebx + 0x24u));
/* 8aa1b7: lea esi, [edi + edi*4] */
  esi = (uint32_t)(edi + edi*4);
/* 8aa1ba: shl esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 8aa1bd: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 8aa1bf: lea ecx, [esi + eax + 4] */
  ecx = (uint32_t)(esi + eax + 0x4u);
/* 8aa1c3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8aa1c5: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 8aa1c8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8aa1ceu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8aa1ce: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8aa1d1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8aa1d3: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8aa1d6: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8aa1d8: mov edx, dword ptr [ebp - 0x64] */
  edx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 8aa1db: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 8aa1dd: mov ecx, dword ptr [ebp - 0x60] */
  ecx = R32((uint32_t)(ebp + 0xffffffa0u));
/* 8aa1e0: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 8aa1e3: mov edx, dword ptr [ebp - 0x5c] */
  edx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 8aa1e6: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 8aa1e9: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 8aa1ec: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 8aa1ef: mov edx, dword ptr [ebx + 0x24] */
  edx = R32((uint32_t)(ebx + 0x24u));
/* 8aa1f2: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8aa1f4: lea ecx, [esi + edx + 0x10] */
  ecx = (uint32_t)(esi + edx + 0x10u);
/* 8aa1f8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8aa1fa: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 8aa1fd: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8aa203u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8aa203: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8aa206: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8aa208: mov ecx, dword ptr [ebp - 0x48] */
  ecx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 8aa20b: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8aa20e: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 8aa211: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8aa214: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8aa216: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8aa219: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8aa21c: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8aa21f: mov edx, dword ptr [ebx + 0x24] */
  edx = R32((uint32_t)(ebx + 0x24u));
/* 8aa222: lea esi, [esi + edx + 0x1c] */
  esi = (uint32_t)(esi + edx + 0x1cu);
/* 8aa226: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8aa228: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8aa22a: mov ecx, esi */
  ecx = esi;
/* 8aa22c: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8aa232u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8aa232: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8aa234: mov dword ptr [ecx + eax*4], 0 */
  W32((uint32_t)(ecx + eax*4), 0x0u);
L_8aa23b: /* 8aa23b: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8aa23e: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8aa23f: jmp 0x8aa110 */
  goto L_8aa110;
L_8aa244: /* 8aa244: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 8aa24b: jmp 0x8aa250 */
  goto L_8aa250;
L_8aa250: /* 8aa250: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8aa253: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 8aa256: imul edx, edx, 0x64 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x64u);
  edx = (uint32_t)r;
  }
/* 8aa259: mov ecx, dword ptr [edx + ecx + 0x24] */
  ecx = R32((uint32_t)(edx + ecx + 0x24u));
/* 8aa25d: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8aa260: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 8aa263: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 8aa266: cmp edx, dword ptr [eax + 8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8aa269: jge 0x8aa2b7 */
  if ((sf == of)) goto L_8aa2b7;
L_8aa26b: /* 8aa26b: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8aa26e: mov esi, edx */
  esi = edx;
/* 8aa270: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 8aa273: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8aa275: mov ecx, dword ptr [ebx + 0x24] */
  ecx = R32((uint32_t)(ebx + 0x24u));
/* 8aa278: lea eax, [edi + edi*4] */
  eax = (uint32_t)(edi + edi*4);
/* 8aa27b: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 8aa27d: lea ecx, [ecx + eax*8 + 4] */
  ecx = (uint32_t)(ecx + eax*8 + 0x4u);
/* 8aa281: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8aa283: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 8aa286: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8aa28cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8aa28c: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8aa28f: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8aa291: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8aa294: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8aa296: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8aa298: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8aa29a: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 8aa29d: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8aa2a0: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 8aa2a3: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8aa2a6: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 8aa2a9: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8aa2ac: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 8aa2af: inc dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8aa2b2: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8aa2b5: jmp 0x8aa250 */
  goto L_8aa250;
L_8aa2b7: /* 8aa2b7: xor esi, esi */
  esi = 0;
/* 8aa2b9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8aa2c0: /* 8aa2c0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8aa2c3: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8aa2c6: imul ecx, ecx, 0x64 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x64u);
  ecx = (uint32_t)r;
  }
/* 8aa2c9: mov edx, dword ptr [edx + 0x38] */
  edx = R32((uint32_t)(edx + 0x38u));
/* 8aa2cc: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8aa2cf: mov ecx, dword ptr [ecx + edx + 0x24] */
  ecx = R32((uint32_t)(ecx + edx + 0x24u));
/* 8aa2d3: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 8aa2d6: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 8aa2d9: cmp esi, dword ptr [eax + 0x14] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8aa2dc: jge 0x8aa322 */
  if ((sf == of)) goto L_8aa322;
L_8aa2de: /* 8aa2de: mov eax, dword ptr [eax + 0x10] */
  eax = R32((uint32_t)(eax + 0x10u));
/* 8aa2e1: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 8aa2e4: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8aa2e7: mov eax, dword ptr [ebx + 0x24] */
  eax = R32((uint32_t)(ebx + 0x24u));
/* 8aa2ea: lea edx, [edi + edi*4] */
  edx = (uint32_t)(edi + edi*4);
/* 8aa2ed: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8aa2f0: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8aa2f2: lea ecx, [eax + edx*8 + 0x10] */
  ecx = (uint32_t)(eax + edx*8 + 0x10u);
/* 8aa2f6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8aa2f8: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 8aa2fb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8aa301u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8aa301: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8aa304: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 8aa307: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8aa309: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 8aa30c: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8aa30f: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8aa311: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8aa313: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8aa316: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8aa319: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8aa31c: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 8aa31f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8aa320: jmp 0x8aa2c0 */
  goto L_8aa2c0;
L_8aa322: /* 8aa322: xor ecx, ecx */
  ecx = 0;
/* 8aa324: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
L_8aa327: /* 8aa327: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8aa32a: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8aa32d: imul edx, edx, 0x64 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x64u);
  edx = (uint32_t)r;
  }
/* 8aa330: mov esi, dword ptr [eax + 0x38] */
  esi = R32((uint32_t)(eax + 0x38u));
/* 8aa333: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8aa336: mov edx, dword ptr [edx + esi + 0x24] */
  edx = R32((uint32_t)(edx + esi + 0x24u));
/* 8aa33a: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 8aa33d: lea eax, [edx + eax*8] */
  eax = (uint32_t)(edx + eax*8);
/* 8aa340: cmp ecx, dword ptr [eax + 0x20] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8aa343: jge 0x8aa23b */
  if ((sf == of)) goto L_8aa23b;
L_8aa349: /* 8aa349: mov eax, dword ptr [eax + 0x1c] */
  eax = R32((uint32_t)(eax + 0x1cu));
/* 8aa34c: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 8aa34f: mov eax, dword ptr [ebx + 0x24] */
  eax = R32((uint32_t)(ebx + 0x24u));
/* 8aa352: lea edx, [edi + edi*4] */
  edx = (uint32_t)(edi + edi*4);
/* 8aa355: lea esi, [eax + edx*8 + 0x1c] */
  esi = (uint32_t)(eax + edx*8 + 0x1cu);
/* 8aa359: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8aa35b: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 8aa35e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8aa360: mov ecx, esi */
  ecx = esi;
/* 8aa362: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8aa368u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8aa368: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8aa36b: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8aa36d: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 8aa36f: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 8aa372: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8aa375: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8aa376: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8aa379: mov ecx, eax */
  ecx = eax;
/* 8aa37b: jmp 0x8aa327 */
  goto L_8aa327;
L_8aa37d: /* 8aa37d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8aa380: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8aa383: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8aa384: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8aa387: jmp 0x8aa0a0 */
  goto L_8aa0a0;
L_8aa38c: /* 8aa38c: lea ecx, [esi + 0x2c] */
  ecx = (uint32_t)(esi + 0x2cu);
/* 8aa38f: xor eax, eax */
  eax = 0;
L_8aa391: /* 8aa391: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8aa394: jge 0x8aa399 */
  if ((sf == of)) goto L_8aa399;
L_8aa396: /* 8aa396: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8aa397: jmp 0x8aa391 */
  goto L_8aa391;
L_8aa399: /* 8aa399: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8aa39b: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8aa39d: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8aa3a3u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8aa3a3: mov eax, dword ptr [edi + 0x30] */
  eax = R32((uint32_t)(edi + 0x30u));
/* 8aa3a6: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8aa3a8: lea ebx, [esi + 0x2c] */
  ebx = (uint32_t)(esi + 0x2cu);
/* 8aa3ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8aa3ac: mov ecx, ebx */
  ecx = ebx;
/* 8aa3ae: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8aa3b4u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8aa3b4: xor ecx, ecx */
  ecx = 0;
L_8aa3b6: /* 8aa3b6: cmp ecx, dword ptr [edi + 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8aa3b9: jge 0x8aa3e0 */
  if ((sf == of)) goto L_8aa3e0;
L_8aa3bb: /* 8aa3bb: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 8aa3be: mov edi, dword ptr [ebx] */
  edi = R32((uint32_t)(ebx));
/* 8aa3c0: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 8aa3c3: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8aa3c6: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8aa3c8: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8aa3ca: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8aa3cc: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 8aa3ce: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 8aa3d1: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* 8aa3d4: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8aa3d7: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 8aa3da: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8aa3dd: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8aa3de: jmp 0x8aa3b6 */
  goto L_8aa3b6;
L_8aa3e0: /* 8aa3e0: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8aa3e3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8aa3e5: jle 0x8aa523 */
  if ((zf || sf != of)) goto L_8aa523;
L_8aa3eb: /* 8aa3eb: xor edi, edi */
  edi = 0;
/* 8aa3ed: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8aa3f0: /* 8aa3f0: cmp edi, dword ptr [esi + 0x3c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x3cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8aa3f3: jge 0x8aa407 */
  if ((sf == of)) goto L_8aa407;
L_8aa3f5: /* 8aa3f5: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 8aa3f8: mov ecx, edi */
  ecx = edi;
/* 8aa3fa: imul ecx, ecx, 0x64 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x64u);
  ecx = (uint32_t)r;
  }
/* 8aa3fd: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8aa3ff: call 0x6c33c3 */
  esp -= 4; W32(esp, 0x8aa404u); SPILL(); f_6c33c3(); if (g_unwind) return; RELOAD();
/* 8aa404: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8aa405: jmp 0x8aa3f0 */
  goto L_8aa3f0;
L_8aa407: /* 8aa407: xor edi, edi */
  edi = 0;
/* 8aa409: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* 8aa40c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8aa410: /* 8aa410: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 8aa413: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8aa415: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 8aa418: jge 0x8aa4bd */
  if ((sf == of)) goto L_8aa4bd;
L_8aa41e: /* 8aa41e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8aa420: imul edi, edi, 0x64 */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x64u);
  edi = (uint32_t)r;
  }
/* 8aa423: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8aa425: mov dword ptr [ebp + 0xc], edi */
  W32((uint32_t)(ebp + 0xcu), edi);
/* 8aa428: mov ecx, edi */
  ecx = edi;
/* 8aa42a: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 8aa42e: call 0x6c33c3 */
  esp -= 4; W32(esp, 0x8aa433u); SPILL(); f_6c33c3(); if (g_unwind) return; RELOAD();
/* 8aa433: lea ebx, [edi + 0x58] */
  ebx = (uint32_t)(edi + 0x58u);
/* 8aa436: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 8aa439: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 8aa43c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8aa43d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8aa43f: mov ecx, ebx */
  ecx = ebx;
/* 8aa441: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 8aa445: call 0x6c231a */
  esp -= 4; W32(esp, 0x8aa44au); SPILL(); f_6c231a(); if (g_unwind) return; RELOAD();
/* 8aa44a: mov ecx, ebx */
  ecx = ebx;
/* 8aa44c: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 8aa450: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x8aa456u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 8aa456: lea ebx, [edi + 0x30] */
  ebx = (uint32_t)(edi + 0x30u);
/* 8aa459: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 8aa45c: lea ecx, [ebx + 0x1c] */
  ecx = (uint32_t)(ebx + 0x1cu);
/* 8aa45f: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 8aa463: call 0x6c2ed2 */
  esp -= 4; W32(esp, 0x8aa468u); SPILL(); f_6c2ed2(); if (g_unwind) return; RELOAD();
/* 8aa468: lea ecx, [ebx + 0x10] */
  ecx = (uint32_t)(ebx + 0x10u);
/* 8aa46b: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 8aa46f: call 0x6c9543 */
  esp -= 4; W32(esp, 0x8aa474u); SPILL(); f_6c9543(); if (g_unwind) return; RELOAD();
/* 8aa474: lea ecx, [ebx + 4] */
  ecx = (uint32_t)(ebx + 0x4u);
/* 8aa477: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 8aa47b: call 0x6c4499 */
  esp -= 4; W32(esp, 0x8aa480u); SPILL(); f_6c4499(); if (g_unwind) return; RELOAD();
/* 8aa480: lea ebx, [edi + 0x24] */
  ebx = (uint32_t)(edi + 0x24u);
/* 8aa483: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 8aa486: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 8aa489: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8aa48a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8aa48c: mov ecx, ebx */
  ecx = ebx;
/* 8aa48e: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 8aa492: call 0x6c87ce */
  esp -= 4; W32(esp, 0x8aa497u); SPILL(); f_6c87ce(); if (g_unwind) return; RELOAD();
/* 8aa497: mov ecx, ebx */
  ecx = ebx;
/* 8aa499: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 8aa49d: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x8aa4a3u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 8aa4a3: lea ecx, [edi + 0x18] */
  ecx = (uint32_t)(edi + 0x18u);
/* 8aa4a6: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8aa4aa: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x8aa4afu); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 8aa4af: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8aa4b2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8aa4b3: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 8aa4b6: mov edi, eax */
  edi = eax;
/* 8aa4b8: jmp 0x8aa410 */
  goto L_8aa410;
L_8aa4bd: /* 8aa4bd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8aa4bf: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* 8aa4c1: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8aa4c7u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8aa4c7: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8aa4ca: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8aa4cb: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 8aa4ce: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* 8aa4d0: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x8aa4d6u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 8aa4d6: xor ebx, ebx */
  ebx = 0;
L_8aa4d8: /* 8aa4d8: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8aa4db: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8aa4dd: jge 0x8aa503 */
  if ((sf == of)) goto L_8aa503;
L_8aa4df: /* 8aa4df: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8aa4e2: mov edi, ebx */
  edi = ebx;
/* 8aa4e4: imul edi, edi, 0x64 */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x64u);
  edi = (uint32_t)r;
  }
/* 8aa4e7: lea ecx, [edi + eax] */
  ecx = (uint32_t)(edi + eax);
/* 8aa4ea: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8aa4eb: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 8aa4ee: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8aa4f0: call 0x6cb217 */
  esp -= 4; W32(esp, 0x8aa4f5u); SPILL(); f_6cb217(); if (g_unwind) return; RELOAD();
/* 8aa4f5: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8aa4f8: lea ecx, [edi + edx] */
  ecx = (uint32_t)(edi + edx);
/* 8aa4fb: call 0x6c33c3 */
  esp -= 4; W32(esp, 0x8aa500u); SPILL(); f_6c33c3(); if (g_unwind) return; RELOAD();
/* 8aa500: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8aa501: jmp 0x8aa4d8 */
  goto L_8aa4d8;
L_8aa503: /* 8aa503: mov esi, dword ptr [esi + 0x30] */
  esi = R32((uint32_t)(esi + 0x30u));
/* 8aa506: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8aa509: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 8aa50f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8aa510: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8aa511: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8aa512: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8aa514: push 0xae9650 */
  { uint32_t v = 0xae9650u; esp -= 4; W32(esp, v); }
/* 8aa519: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8aa51a: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8aa520u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8aa520: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8aa523: /* 8aa523: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8aa526: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8aa527: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8aa529: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8aa52c: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 8aa530: call 0x6c9eee */
  esp -= 4; W32(esp, 0x8aa535u); SPILL(); f_6c9eee(); if (g_unwind) return; RELOAD();
/* 8aa535: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8aa538: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8aa53c: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x8aa542u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
L_8aa542: /* 8aa542: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 8aa545: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8aa549: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x8aa54eu); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
L_8aa54e: /* 8aa54e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8aa551: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8aa552: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8aa553: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8aa55a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8aa55b: mov esp, ebp */
  esp = ebp;
/* 8aa55d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8aa55e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8aa24d(void) {
  LOAD_REGS();
  goto L_8aa24d;
L_8aa0a0: /* 8aa0a0: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8aa0a3: cmp eax, dword ptr [esi + 0x3c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x3cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8aa0a6: jge 0x8aa38c */
  if ((sf == of)) goto L_8aa38c;
L_8aa0ac: /* 8aa0ac: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8aa0ae: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* 8aa0b0: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8aa0b3: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x8aa0b9u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 8aa0b9: imul eax, eax, 0x64 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x64u);
  eax = (uint32_t)r;
  }
/* 8aa0bc: mov edi, dword ptr [ebp - 0x3c] */
  edi = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8aa0bf: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8aa0c2: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8aa0c4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8aa0c5: mov ebx, eax */
  ebx = eax;
/* 8aa0c7: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 8aa0c9: lea ecx, [ebx + 0x24] */
  ecx = (uint32_t)(ebx + 0x24u);
/* 8aa0cc: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x8aa0d2u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 8aa0d2: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8aa0d5: mov edx, dword ptr [esi + 0x38] */
  edx = R32((uint32_t)(esi + 0x38u));
/* 8aa0d8: imul eax, eax, 0x64 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x64u);
  eax = (uint32_t)r;
  }
/* 8aa0db: mov ecx, dword ptr [eax + edx + 0x14] */
  ecx = R32((uint32_t)(eax + edx + 0x14u));
/* 8aa0df: mov dword ptr [ebx + 0x14], ecx */
  W32((uint32_t)(ebx + 0x14u), ecx);
/* 8aa0e2: mov edx, dword ptr [esi + 0x38] */
  edx = R32((uint32_t)(esi + 0x38u));
/* 8aa0e5: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8aa0e7: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 8aa0e9: mov ecx, ebx */
  ecx = ebx;
/* 8aa0eb: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 8aa0ed: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* 8aa0f0: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 8aa0f3: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8aa0f6: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8aa0f9: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 8aa0fc: mov edx, dword ptr [eax + ecx + 0x10] */
  edx = R32((uint32_t)(eax + ecx + 0x10u));
/* 8aa100: mov dword ptr [ebx + 0x10], edx */
  W32((uint32_t)(ebx + 0x10u), edx);
/* 8aa103: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 8aa106: mov edx, dword ptr [eax + ecx + 0xc] */
  edx = R32((uint32_t)(eax + ecx + 0xcu));
/* 8aa10a: mov dword ptr [ebx + 0xc], edx */
  W32((uint32_t)(ebx + 0xcu), edx);
/* 8aa10d: xor edi, edi */
  edi = 0;
/* 8aa10f: nop  */
L_8aa110: /* 8aa110: cmp edi, dword ptr [ebx + 0x28] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x28u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8aa113: jge 0x8aa37d */
  if ((sf == of)) goto L_8aa37d;
L_8aa119: /* 8aa119: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 8aa11c: mov eax, dword ptr [eax + edi*4] */
  eax = R32((uint32_t)(eax + edi*4));
/* 8aa11f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8aa121: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8aa124: jge 0x8aa244 */
  if ((sf == of)) goto L_8aa244;
L_8aa12a: /* 8aa12a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8aa12c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8aa12e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8aa130: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8aa132: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 8aa135: call dword ptr [0xcfa358] */
  esp -= 4; W32(esp, 0x8aa13bu); SPILL(); f_4e3864(); if (g_unwind) return; /* Core!??0FQuat@@QAE@MMMM@Z */ RELOAD();
/* 8aa13b: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 8aa13e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8aa140: mov dword ptr [ebp - 0x48], 0 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x0u);
/* 8aa147: mov dword ptr [ebp - 0x44], 0 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x0u);
/* 8aa14e: mov dword ptr [ebp - 0x40], 0 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x0u);
/* 8aa155: je 0x8aa1b4 */
  if (zf) goto L_8aa1b4;
L_8aa157: /* 8aa157: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8aa159: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8aa15b: mov ecx, esi */
  ecx = esi;
/* 8aa15d: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x8aa163u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8aa163: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8aa166: mov edx, dword ptr [edx + 0x2c] */
  edx = R32((uint32_t)(edx + 0x2cu));
/* 8aa169: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 8aa16c: mov ecx, dword ptr [edx + ecx*4] */
  ecx = R32((uint32_t)(edx + ecx*4));
/* 8aa16f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8aa170: mov ecx, eax */
  ecx = eax;
/* 8aa172: call 0x6cceaa */
  esp -= 4; W32(esp, 0x8aa177u); SPILL(); f_6cceaa(); if (g_unwind) return; RELOAD();
/* 8aa177: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8aa179: jle 0x8aa1b4 */
  if ((zf || sf != of)) goto L_8aa1b4;
L_8aa17b: /* 8aa17b: mov edx, dword ptr [esi + 0x1dc] */
  edx = R32((uint32_t)(esi + 0x1dcu));
/* 8aa181: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8aa184: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8aa186: lea ecx, [eax + 8] */
  ecx = (uint32_t)(eax + 0x8u);
/* 8aa189: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8aa18b: mov dword ptr [ebp - 0x64], edx */
  W32((uint32_t)(ebp + 0xffffff9cu), edx);
/* 8aa18e: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 8aa191: mov dword ptr [ebp - 0x60], edx */
  W32((uint32_t)(ebp + 0xffffffa0u), edx);
/* 8aa194: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 8aa197: mov dword ptr [ebp - 0x5c], edx */
  W32((uint32_t)(ebp + 0xffffffa4u), edx);
/* 8aa19a: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 8aa19d: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 8aa1a0: add eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8aa1a3: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8aa1a5: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8aa1a8: mov dword ptr [ebp - 0x48], edx */
  W32((uint32_t)(ebp + 0xffffffb8u), edx);
/* 8aa1ab: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 8aa1ae: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 8aa1b1: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
L_8aa1b4: /* 8aa1b4: mov eax, dword ptr [ebx + 0x24] */
  eax = R32((uint32_t)(ebx + 0x24u));
/* 8aa1b7: lea esi, [edi + edi*4] */
  esi = (uint32_t)(edi + edi*4);
/* 8aa1ba: shl esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 8aa1bd: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 8aa1bf: lea ecx, [esi + eax + 4] */
  ecx = (uint32_t)(esi + eax + 0x4u);
/* 8aa1c3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8aa1c5: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 8aa1c8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8aa1ceu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8aa1ce: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8aa1d1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8aa1d3: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8aa1d6: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8aa1d8: mov edx, dword ptr [ebp - 0x64] */
  edx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 8aa1db: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 8aa1dd: mov ecx, dword ptr [ebp - 0x60] */
  ecx = R32((uint32_t)(ebp + 0xffffffa0u));
/* 8aa1e0: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 8aa1e3: mov edx, dword ptr [ebp - 0x5c] */
  edx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 8aa1e6: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 8aa1e9: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 8aa1ec: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 8aa1ef: mov edx, dword ptr [ebx + 0x24] */
  edx = R32((uint32_t)(ebx + 0x24u));
/* 8aa1f2: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8aa1f4: lea ecx, [esi + edx + 0x10] */
  ecx = (uint32_t)(esi + edx + 0x10u);
/* 8aa1f8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8aa1fa: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 8aa1fd: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8aa203u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8aa203: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8aa206: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8aa208: mov ecx, dword ptr [ebp - 0x48] */
  ecx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 8aa20b: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8aa20e: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 8aa211: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8aa214: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8aa216: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8aa219: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8aa21c: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8aa21f: mov edx, dword ptr [ebx + 0x24] */
  edx = R32((uint32_t)(ebx + 0x24u));
/* 8aa222: lea esi, [esi + edx + 0x1c] */
  esi = (uint32_t)(esi + edx + 0x1cu);
/* 8aa226: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8aa228: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8aa22a: mov ecx, esi */
  ecx = esi;
/* 8aa22c: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8aa232u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8aa232: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8aa234: mov dword ptr [ecx + eax*4], 0 */
  W32((uint32_t)(ecx + eax*4), 0x0u);
L_8aa23b: /* 8aa23b: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8aa23e: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8aa23f: jmp 0x8aa110 */
  goto L_8aa110;
L_8aa244: /* 8aa244: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 8aa24b: jmp 0x8aa250 */
  goto L_8aa250;
L_8aa24d: /* 8aa24d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8aa250: /* 8aa250: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8aa253: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 8aa256: imul edx, edx, 0x64 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x64u);
  edx = (uint32_t)r;
  }
/* 8aa259: mov ecx, dword ptr [edx + ecx + 0x24] */
  ecx = R32((uint32_t)(edx + ecx + 0x24u));
/* 8aa25d: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8aa260: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 8aa263: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 8aa266: cmp edx, dword ptr [eax + 8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8aa269: jge 0x8aa2b7 */
  if ((sf == of)) goto L_8aa2b7;
L_8aa26b: /* 8aa26b: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8aa26e: mov esi, edx */
  esi = edx;
/* 8aa270: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 8aa273: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8aa275: mov ecx, dword ptr [ebx + 0x24] */
  ecx = R32((uint32_t)(ebx + 0x24u));
/* 8aa278: lea eax, [edi + edi*4] */
  eax = (uint32_t)(edi + edi*4);
/* 8aa27b: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 8aa27d: lea ecx, [ecx + eax*8 + 4] */
  ecx = (uint32_t)(ecx + eax*8 + 0x4u);
/* 8aa281: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8aa283: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 8aa286: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8aa28cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8aa28c: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8aa28f: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8aa291: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8aa294: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8aa296: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8aa298: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8aa29a: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 8aa29d: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8aa2a0: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 8aa2a3: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8aa2a6: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 8aa2a9: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8aa2ac: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 8aa2af: inc dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8aa2b2: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8aa2b5: jmp 0x8aa250 */
  goto L_8aa250;
L_8aa2b7: /* 8aa2b7: xor esi, esi */
  esi = 0;
/* 8aa2b9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8aa2c0: /* 8aa2c0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8aa2c3: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8aa2c6: imul ecx, ecx, 0x64 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x64u);
  ecx = (uint32_t)r;
  }
/* 8aa2c9: mov edx, dword ptr [edx + 0x38] */
  edx = R32((uint32_t)(edx + 0x38u));
/* 8aa2cc: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8aa2cf: mov ecx, dword ptr [ecx + edx + 0x24] */
  ecx = R32((uint32_t)(ecx + edx + 0x24u));
/* 8aa2d3: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 8aa2d6: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 8aa2d9: cmp esi, dword ptr [eax + 0x14] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8aa2dc: jge 0x8aa322 */
  if ((sf == of)) goto L_8aa322;
L_8aa2de: /* 8aa2de: mov eax, dword ptr [eax + 0x10] */
  eax = R32((uint32_t)(eax + 0x10u));
/* 8aa2e1: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 8aa2e4: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8aa2e7: mov eax, dword ptr [ebx + 0x24] */
  eax = R32((uint32_t)(ebx + 0x24u));
/* 8aa2ea: lea edx, [edi + edi*4] */
  edx = (uint32_t)(edi + edi*4);
/* 8aa2ed: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8aa2f0: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8aa2f2: lea ecx, [eax + edx*8 + 0x10] */
  ecx = (uint32_t)(eax + edx*8 + 0x10u);
/* 8aa2f6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8aa2f8: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 8aa2fb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8aa301u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8aa301: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8aa304: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 8aa307: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8aa309: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 8aa30c: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8aa30f: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8aa311: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8aa313: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8aa316: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8aa319: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8aa31c: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 8aa31f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8aa320: jmp 0x8aa2c0 */
  goto L_8aa2c0;
L_8aa322: /* 8aa322: xor ecx, ecx */
  ecx = 0;
/* 8aa324: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
L_8aa327: /* 8aa327: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8aa32a: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8aa32d: imul edx, edx, 0x64 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x64u);
  edx = (uint32_t)r;
  }
/* 8aa330: mov esi, dword ptr [eax + 0x38] */
  esi = R32((uint32_t)(eax + 0x38u));
/* 8aa333: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8aa336: mov edx, dword ptr [edx + esi + 0x24] */
  edx = R32((uint32_t)(edx + esi + 0x24u));
/* 8aa33a: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 8aa33d: lea eax, [edx + eax*8] */
  eax = (uint32_t)(edx + eax*8);
/* 8aa340: cmp ecx, dword ptr [eax + 0x20] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8aa343: jge 0x8aa23b */
  if ((sf == of)) goto L_8aa23b;
L_8aa349: /* 8aa349: mov eax, dword ptr [eax + 0x1c] */
  eax = R32((uint32_t)(eax + 0x1cu));
/* 8aa34c: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 8aa34f: mov eax, dword ptr [ebx + 0x24] */
  eax = R32((uint32_t)(ebx + 0x24u));
/* 8aa352: lea edx, [edi + edi*4] */
  edx = (uint32_t)(edi + edi*4);
/* 8aa355: lea esi, [eax + edx*8 + 0x1c] */
  esi = (uint32_t)(eax + edx*8 + 0x1cu);
/* 8aa359: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8aa35b: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 8aa35e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8aa360: mov ecx, esi */
  ecx = esi;
/* 8aa362: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8aa368u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8aa368: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8aa36b: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8aa36d: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 8aa36f: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 8aa372: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8aa375: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8aa376: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8aa379: mov ecx, eax */
  ecx = eax;
/* 8aa37b: jmp 0x8aa327 */
  goto L_8aa327;
L_8aa37d: /* 8aa37d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8aa380: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8aa383: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8aa384: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8aa387: jmp 0x8aa0a0 */
  goto L_8aa0a0;
L_8aa38c: /* 8aa38c: lea ecx, [esi + 0x2c] */
  ecx = (uint32_t)(esi + 0x2cu);
/* 8aa38f: xor eax, eax */
  eax = 0;
L_8aa391: /* 8aa391: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8aa394: jge 0x8aa399 */
  if ((sf == of)) goto L_8aa399;
L_8aa396: /* 8aa396: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8aa397: jmp 0x8aa391 */
  goto L_8aa391;
L_8aa399: /* 8aa399: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8aa39b: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8aa39d: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8aa3a3u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8aa3a3: mov eax, dword ptr [edi + 0x30] */
  eax = R32((uint32_t)(edi + 0x30u));
/* 8aa3a6: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8aa3a8: lea ebx, [esi + 0x2c] */
  ebx = (uint32_t)(esi + 0x2cu);
/* 8aa3ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8aa3ac: mov ecx, ebx */
  ecx = ebx;
/* 8aa3ae: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8aa3b4u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8aa3b4: xor ecx, ecx */
  ecx = 0;
L_8aa3b6: /* 8aa3b6: cmp ecx, dword ptr [edi + 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8aa3b9: jge 0x8aa3e0 */
  if ((sf == of)) goto L_8aa3e0;
L_8aa3bb: /* 8aa3bb: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 8aa3be: mov edi, dword ptr [ebx] */
  edi = R32((uint32_t)(ebx));
/* 8aa3c0: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 8aa3c3: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8aa3c6: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8aa3c8: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8aa3ca: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8aa3cc: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 8aa3ce: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 8aa3d1: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* 8aa3d4: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8aa3d7: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 8aa3da: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8aa3dd: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8aa3de: jmp 0x8aa3b6 */
  goto L_8aa3b6;
L_8aa3e0: /* 8aa3e0: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8aa3e3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8aa3e5: jle 0x8aa523 */
  if ((zf || sf != of)) goto L_8aa523;
L_8aa3eb: /* 8aa3eb: xor edi, edi */
  edi = 0;
/* 8aa3ed: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8aa3f0: /* 8aa3f0: cmp edi, dword ptr [esi + 0x3c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x3cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8aa3f3: jge 0x8aa407 */
  if ((sf == of)) goto L_8aa407;
L_8aa3f5: /* 8aa3f5: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 8aa3f8: mov ecx, edi */
  ecx = edi;
/* 8aa3fa: imul ecx, ecx, 0x64 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x64u);
  ecx = (uint32_t)r;
  }
/* 8aa3fd: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8aa3ff: call 0x6c33c3 */
  esp -= 4; W32(esp, 0x8aa404u); SPILL(); f_6c33c3(); if (g_unwind) return; RELOAD();
/* 8aa404: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8aa405: jmp 0x8aa3f0 */
  goto L_8aa3f0;
L_8aa407: /* 8aa407: xor edi, edi */
  edi = 0;
/* 8aa409: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* 8aa40c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8aa410: /* 8aa410: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 8aa413: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8aa415: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 8aa418: jge 0x8aa4bd */
  if ((sf == of)) goto L_8aa4bd;
L_8aa41e: /* 8aa41e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8aa420: imul edi, edi, 0x64 */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x64u);
  edi = (uint32_t)r;
  }
/* 8aa423: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8aa425: mov dword ptr [ebp + 0xc], edi */
  W32((uint32_t)(ebp + 0xcu), edi);
/* 8aa428: mov ecx, edi */
  ecx = edi;
/* 8aa42a: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 8aa42e: call 0x6c33c3 */
  esp -= 4; W32(esp, 0x8aa433u); SPILL(); f_6c33c3(); if (g_unwind) return; RELOAD();
/* 8aa433: lea ebx, [edi + 0x58] */
  ebx = (uint32_t)(edi + 0x58u);
/* 8aa436: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 8aa439: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 8aa43c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8aa43d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8aa43f: mov ecx, ebx */
  ecx = ebx;
/* 8aa441: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 8aa445: call 0x6c231a */
  esp -= 4; W32(esp, 0x8aa44au); SPILL(); f_6c231a(); if (g_unwind) return; RELOAD();
/* 8aa44a: mov ecx, ebx */
  ecx = ebx;
/* 8aa44c: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 8aa450: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x8aa456u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 8aa456: lea ebx, [edi + 0x30] */
  ebx = (uint32_t)(edi + 0x30u);
/* 8aa459: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 8aa45c: lea ecx, [ebx + 0x1c] */
  ecx = (uint32_t)(ebx + 0x1cu);
/* 8aa45f: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 8aa463: call 0x6c2ed2 */
  esp -= 4; W32(esp, 0x8aa468u); SPILL(); f_6c2ed2(); if (g_unwind) return; RELOAD();
/* 8aa468: lea ecx, [ebx + 0x10] */
  ecx = (uint32_t)(ebx + 0x10u);
/* 8aa46b: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 8aa46f: call 0x6c9543 */
  esp -= 4; W32(esp, 0x8aa474u); SPILL(); f_6c9543(); if (g_unwind) return; RELOAD();
/* 8aa474: lea ecx, [ebx + 4] */
  ecx = (uint32_t)(ebx + 0x4u);
/* 8aa477: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 8aa47b: call 0x6c4499 */
  esp -= 4; W32(esp, 0x8aa480u); SPILL(); f_6c4499(); if (g_unwind) return; RELOAD();
/* 8aa480: lea ebx, [edi + 0x24] */
  ebx = (uint32_t)(edi + 0x24u);
/* 8aa483: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 8aa486: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 8aa489: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8aa48a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8aa48c: mov ecx, ebx */
  ecx = ebx;
/* 8aa48e: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 8aa492: call 0x6c87ce */
  esp -= 4; W32(esp, 0x8aa497u); SPILL(); f_6c87ce(); if (g_unwind) return; RELOAD();
/* 8aa497: mov ecx, ebx */
  ecx = ebx;
/* 8aa499: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 8aa49d: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x8aa4a3u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 8aa4a3: lea ecx, [edi + 0x18] */
  ecx = (uint32_t)(edi + 0x18u);
/* 8aa4a6: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8aa4aa: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x8aa4afu); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 8aa4af: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8aa4b2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8aa4b3: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 8aa4b6: mov edi, eax */
  edi = eax;
/* 8aa4b8: jmp 0x8aa410 */
  goto L_8aa410;
L_8aa4bd: /* 8aa4bd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8aa4bf: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* 8aa4c1: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8aa4c7u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8aa4c7: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8aa4ca: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8aa4cb: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 8aa4ce: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* 8aa4d0: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x8aa4d6u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 8aa4d6: xor ebx, ebx */
  ebx = 0;
L_8aa4d8: /* 8aa4d8: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8aa4db: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8aa4dd: jge 0x8aa503 */
  if ((sf == of)) goto L_8aa503;
L_8aa4df: /* 8aa4df: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8aa4e2: mov edi, ebx */
  edi = ebx;
/* 8aa4e4: imul edi, edi, 0x64 */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x64u);
  edi = (uint32_t)r;
  }
/* 8aa4e7: lea ecx, [edi + eax] */
  ecx = (uint32_t)(edi + eax);
/* 8aa4ea: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8aa4eb: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 8aa4ee: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8aa4f0: call 0x6cb217 */
  esp -= 4; W32(esp, 0x8aa4f5u); SPILL(); f_6cb217(); if (g_unwind) return; RELOAD();
/* 8aa4f5: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8aa4f8: lea ecx, [edi + edx] */
  ecx = (uint32_t)(edi + edx);
/* 8aa4fb: call 0x6c33c3 */
  esp -= 4; W32(esp, 0x8aa500u); SPILL(); f_6c33c3(); if (g_unwind) return; RELOAD();
/* 8aa500: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8aa501: jmp 0x8aa4d8 */
  goto L_8aa4d8;
L_8aa503: /* 8aa503: mov esi, dword ptr [esi + 0x30] */
  esi = R32((uint32_t)(esi + 0x30u));
/* 8aa506: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8aa509: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 8aa50f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8aa510: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8aa511: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8aa512: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8aa514: push 0xae9650 */
  { uint32_t v = 0xae9650u; esp -= 4; W32(esp, v); }
/* 8aa519: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8aa51a: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8aa520u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8aa520: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8aa523: /* 8aa523: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8aa526: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8aa527: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8aa529: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8aa52c: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 8aa530: call 0x6c9eee */
  esp -= 4; W32(esp, 0x8aa535u); SPILL(); f_6c9eee(); if (g_unwind) return; RELOAD();
/* 8aa535: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8aa538: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8aa53c: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x8aa542u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 8aa542: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 8aa545: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8aa549: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x8aa54eu); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 8aa54e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8aa551: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8aa552: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8aa553: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8aa55a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8aa55b: mov esp, ebp */
  esp = ebp;
/* 8aa55d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8aa55e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8aa561(void) {
  LOAD_REGS();
L_8aa561: /* 8aa561: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8aa564: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8aa569: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 8aa56c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8aa56d: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 8aa570: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8aa575u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8aa575(); return;
}

void f_8aa575(void) {
  LOAD_REGS();
L_8aa575: /* 8aa575: push 0xa1b120 */
  { uint32_t v = 0xa1b120u; esp -= 4; W32(esp, v); }
/* 8aa57a: push 0xae96f8 */
  { uint32_t v = 0xae96f8u; esp -= 4; W32(esp, v); }
/* 8aa57f: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8aa585u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8aa585: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8aa588: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8aa58a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8aa58c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8aa591u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8aa591: guest_badaddr(0x8aa591); return;
}

void f_8aa720(void) {
  LOAD_REGS();
L_8aa720: /* 8aa720: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8aa721: mov esi, ecx */
  esi = ecx;
/* 8aa723: call 0x6c51ff */
  esp -= 4; W32(esp, 0x8aa728u); SPILL(); f_6c51ff(); if (g_unwind) return; RELOAD();
/* 8aa728: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8aa72a: mov ecx, esi */
  ecx = esi;
/* 8aa72c: call dword ptr [eax + 0x6c] */
  { uint32_t t = R32((uint32_t)(eax + 0x6cu)); esp -= 4; W32(esp, 0x8aa72fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8aa72f: mov eax, dword ptr [esi + 0xf8] */
  eax = R32((uint32_t)(esi + 0xf8u));
/* 8aa735: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8aa737: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8aa738: mov ecx, esi */
  ecx = esi;
/* 8aa73a: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0x8aa73du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8aa73d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8aa73e: ret  */
  esp += 4; SPILL(); return;
}

void f_8aa750(void) {
  LOAD_REGS();
L_8aa750: /* 8aa750: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8aa751: mov ebp, esp */
  ebp = esp;
/* 8aa753: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8aa755: push 0x9d6580 */
  { uint32_t v = 0x9d6580u; esp -= 4; W32(esp, v); }
/* 8aa75a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8aa760: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8aa761: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8aa768: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8aa76b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8aa76e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8aa76f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8aa770: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8aa771: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8aa774: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8aa775: mov esi, ecx */
  esi = ecx;
/* 8aa777: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8aa77e: call 0x6ccb12 */
  esp -= 4; W32(esp, 0x8aa783u); SPILL(); f_6ccb12(); if (g_unwind) return; RELOAD();
/* 8aa783: mov ecx, dword ptr [esi + 0x46c] */
  ecx = R32((uint32_t)(esi + 0x46cu));
/* 8aa789: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8aa78a: lea edx, [ebp - 0x34] */
  edx = (uint32_t)(ebp + 0xffffffccu);
/* 8aa78d: lea edi, [esi + 0x414] */
  edi = (uint32_t)(esi + 0x414u);
/* 8aa793: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8aa794: mov ecx, edi */
  ecx = edi;
/* 8aa796: mov ebx, eax */
  ebx = eax;
/* 8aa798: call dword ptr [0xcfa60c] */
  esp -= 4; W32(esp, 0x8aa79eu); SPILL(); f_4e3332(); if (g_unwind) return; /* Core!?ExpandBy@FBox@@QBE?AV1@M@Z */ RELOAD();
/* 8aa79e: mov esi, eax */
  esi = eax;
/* 8aa7a0: mov ecx, 7 */
  ecx = 0x7u;
/* 8aa7a5: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8aa7a7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8aa7aa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8aa7ab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8aa7ac: mov eax, ebx */
  eax = ebx;
/* 8aa7ae: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8aa7b5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8aa7b6: mov esp, ebp */
  esp = ebp;
/* 8aa7b8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8aa7b9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8aa7bc(void) {
  LOAD_REGS();
L_8aa7bc: /* 8aa7bc: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8aa7bf: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8aa7c4: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8aa7c7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8aa7c8: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8aa7cb: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8aa7d0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8aa7d0(); return;
}

void f_8aa7d0(void) {
  LOAD_REGS();
L_8aa7d0: /* 8aa7d0: push 0xa1b168 */
  { uint32_t v = 0xa1b168u; esp -= 4; W32(esp, v); }
/* 8aa7d5: push 0xae9944 */
  { uint32_t v = 0xae9944u; esp -= 4; W32(esp, v); }
/* 8aa7da: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8aa7e0u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8aa7e0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8aa7e3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8aa7e5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8aa7e7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8aa7ecu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8aa7ec: guest_badaddr(0x8aa7ec); return;
}

void f_8aa820(void) {
  LOAD_REGS();
L_8aa820: /* 8aa820: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8aa824: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 8aa826: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8aa827: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8aa82du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8aa82d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8aa840(void) {
  LOAD_REGS();
L_8aa840: /* 8aa840: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8aa841: mov esi, ecx */
  esi = ecx;
/* 8aa843: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8aa849u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8aa849: mov eax, esi */
  eax = esi;
/* 8aa84b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8aa84c: ret  */
  esp += 4; SPILL(); return;
}

void f_8aa860(void) {
  LOAD_REGS();
L_8aa860: /* 8aa860: mov eax, 1 */
  eax = 0x1u;
/* 8aa865: ret  */
  esp += 4; SPILL(); return;
}

void f_8aa880(void) {
  LOAD_REGS();
L_8aa880: /* 8aa880: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8aa881: mov ebp, esp */
  ebp = esp;
/* 8aa883: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8aa885: push 0x9d6590 */
  { uint32_t v = 0x9d6590u; esp -= 4; W32(esp, v); }
/* 8aa88a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8aa890: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8aa891: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8aa898: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8aa89b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8aa89c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8aa89d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8aa89e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8aa8a1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8aa8a4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8aa8a5: mov esi, ecx */
  esi = ecx;
/* 8aa8a7: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8aa8ae: call 0x6ca62d */
  esp -= 4; W32(esp, 0x8aa8b3u); SPILL(); f_6ca62d(); if (g_unwind) return; RELOAD();
/* 8aa8b3: lea ecx, [esi + 0x494] */
  ecx = (uint32_t)(esi + 0x494u);
/* 8aa8b9: call dword ptr [0xcfa63c] */
  esp -= 4; W32(esp, 0x8aa8bfu); SPILL(); f_4e3585(); if (g_unwind) return; /* Core!?GetMax@FRange@@QBEMXZ */ RELOAD();
/* 8aa8bf: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 8aa8c2: fld dword ptr [0xa0b130] */
  { double v = F32((uint32_t)(0xa0b130u)); FPUSH(v); }
/* 8aa8c8: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 8aa8ca: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8aa8cc: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8aa8cf: jne 0x8aa8d9 */
  if (!zf) goto L_8aa8d9;
L_8aa8d1: /* 8aa8d1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8aa8d3: fld dword ptr [0xa0b130] */
  { double v = F32((uint32_t)(0xa0b130u)); FPUSH(v); }
L_8aa8d9: /* 8aa8d9: call 0x99c958 */
  esp -= 4; W32(esp, 0x8aa8deu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8aa8de: lea ecx, [eax + eax] */
  ecx = (uint32_t)(eax + eax);
/* 8aa8e1: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 8aa8e3: mov dword ptr [esi + 0x4c4], ecx */
  W32((uint32_t)(esi + 0x4c4u), ecx);
/* 8aa8e9: mov dword ptr [esi + 0x4c8], ecx */
  W32((uint32_t)(esi + 0x4c8u), ecx);
/* 8aa8ef: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8aa8f0: lea ecx, [esi + 0x4ac] */
  ecx = (uint32_t)(esi + 0x4acu);
/* 8aa8f6: mov dword ptr [esi + 0x4c0], eax */
  W32((uint32_t)(esi + 0x4c0u), eax);
/* 8aa8fc: mov dword ptr [esi + 0x4cc], eax */
  W32((uint32_t)(esi + 0x4ccu), eax);
/* 8aa902: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8aa908u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8aa908: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8aa90b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8aa90c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8aa90d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8aa914: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8aa915: mov esp, ebp */
  esp = ebp;
/* 8aa917: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8aa918: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8aa91b(void) {
  LOAD_REGS();
L_8aa91b: /* 8aa91b: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8aa91e: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8aa923: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8aa926: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8aa927: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8aa92a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8aa92fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8aa92f(); return;
}

void f_8aa92f(void) {
  LOAD_REGS();
L_8aa92f: /* 8aa92f: push 0xa1b1b4 */
  { uint32_t v = 0xa1b1b4u; esp -= 4; W32(esp, v); }
/* 8aa934: push 0xae993c */
  { uint32_t v = 0xae993cu; esp -= 4; W32(esp, v); }
/* 8aa939: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8aa93fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8aa93f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8aa942: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8aa944: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8aa946: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8aa94bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8aa94b: guest_badaddr(0x8aa94b); return;
}

void f_8aa990(void) {
  LOAD_REGS();
L_8aa990: /* 8aa990: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8aa991: mov ebp, esp */
  ebp = esp;
/* 8aa993: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8aa995: push 0x9d65a0 */
  { uint32_t v = 0x9d65a0u; esp -= 4; W32(esp, v); }
/* 8aa99a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8aa9a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8aa9a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8aa9a8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8aa9ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8aa9ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8aa9ad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8aa9ae: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8aa9b1: mov esi, ecx */
  esi = ecx;
/* 8aa9b3: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8aa9ba: call 0x6c7414 */
  esp -= 4; W32(esp, 0x8aa9bfu); SPILL(); f_6c7414(); if (g_unwind) return; RELOAD();
/* 8aa9bf: lea ecx, [esi + 0x4ac] */
  ecx = (uint32_t)(esi + 0x4acu);
/* 8aa9c5: xor eax, eax */
  eax = 0;
L_8aa9c7: /* 8aa9c7: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8aa9ca: jge 0x8aa9cf */
  if ((sf == of)) goto L_8aa9cf;
L_8aa9cc: /* 8aa9cc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8aa9cd: jmp 0x8aa9c7 */
  goto L_8aa9c7;
L_8aa9cf: /* 8aa9cf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8aa9d1: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 8aa9d3: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8aa9d9u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8aa9d9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8aa9dc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8aa9dd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8aa9de: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8aa9e5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8aa9e6: mov esp, ebp */
  esp = ebp;
/* 8aa9e8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8aa9e9: ret  */
  esp += 4; SPILL(); return;
}

void f_8aa9ea(void) {
  LOAD_REGS();
L_8aa9ea: /* 8aa9ea: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8aa9ed: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8aa9f2: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8aa9f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8aa9f6: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8aa9f9: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8aa9feu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8aa9fe(); return;
}

void f_8aa9fe(void) {
  LOAD_REGS();
L_8aa9fe: /* 8aa9fe: push 0xa1b1f4 */
  { uint32_t v = 0xa1b1f4u; esp -= 4; W32(esp, v); }
/* 8aaa03: push 0xae994c */
  { uint32_t v = 0xae994cu; esp -= 4; W32(esp, v); }
/* 8aaa08: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8aaa0eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8aaa0e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8aaa11: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8aaa13: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8aaa15: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8aaa1au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8aaa1a: guest_badaddr(0x8aaa1a); return;
}

void f_8aaa50(void) {
  LOAD_REGS();
L_8aaa50: /* 8aaa50: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8aaa51: mov ebp, esp */
  ebp = esp;
/* 8aaa53: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8aaa55: push 0x9d65b0 */
  { uint32_t v = 0x9d65b0u; esp -= 4; W32(esp, v); }
/* 8aaa5a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8aaa60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8aaa61: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8aaa68: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8aaa6b: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 8aaa6e: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 8aaa71: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8aaa72: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8aaa73: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8aaa74: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8aaa77: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8aaa7a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8aaa7b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8aaa7e: mov esi, ecx */
  esi = ecx;
/* 8aaa80: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 8aaa83: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8aaa84: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8aaa85: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8aaa86: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8aaa87: mov ecx, esi */
  ecx = esi;
/* 8aaa89: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8aaa90: call 0x6cba0f */
  esp -= 4; W32(esp, 0x8aaa95u); SPILL(); f_6cba0f(); if (g_unwind) return; RELOAD();
/* 8aaa95: mov ebx, dword ptr [esi + 0x4ac] */
  ebx = R32((uint32_t)(esi + 0x4acu));
/* 8aaa9b: shl edi, 5 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 8aaa9e: lea ecx, [esi + 0x49c] */
  ecx = (uint32_t)(esi + 0x49cu);
/* 8aaaa4: add ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8aaaa6: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x8aaaacu); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 8aaaac: fstp dword ptr [ebp + 0x18] */
  WF32((uint32_t)(ebp + 0x18u), ST0); FPOP();
/* 8aaaaf: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 8aaab2: mov dword ptr [ebx], ecx */
  W32((uint32_t)(ebx), ecx);
/* 8aaab4: mov ebx, dword ptr [esi + 0x4ac] */
  ebx = R32((uint32_t)(esi + 0x4acu));
/* 8aaaba: lea ecx, [esi + 0x4a4] */
  ecx = (uint32_t)(esi + 0x4a4u);
/* 8aaac0: add ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8aaac2: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x8aaac8u); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 8aaac8: fstp dword ptr [ebp + 0x18] */
  WF32((uint32_t)(ebp + 0x18u), ST0); FPOP();
/* 8aaacb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8aaace: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 8aaad1: imul eax, eax, 0xc8 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0xc8u);
  eax = (uint32_t)r;
  }
/* 8aaad7: mov dword ptr [ebx + 4], edx */
  W32((uint32_t)(ebx + 0x4u), edx);
/* 8aaada: mov ecx, dword ptr [esi + 0x3fc] */
  ecx = R32((uint32_t)(esi + 0x3fcu));
/* 8aaae0: mov edx, dword ptr [esi + 0x4ac] */
  edx = R32((uint32_t)(esi + 0x4acu));
/* 8aaae6: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8aaae8: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 8aaaea: lea edx, [edi + edx + 8] */
  edx = (uint32_t)(edi + edx + 0x8u);
/* 8aaaee: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 8aaaf0: mov ebx, dword ptr [ecx + 4] */
  ebx = R32((uint32_t)(ecx + 0x4u));
/* 8aaaf3: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 8aaaf6: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8aaaf9: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8aaafc: mov edx, dword ptr [esi + 0x3fc] */
  edx = R32((uint32_t)(esi + 0x3fcu));
/* 8aab02: mov ecx, dword ptr [esi + 0x4ac] */
  ecx = R32((uint32_t)(esi + 0x4acu));
/* 8aab08: lea eax, [edx + eax + 0x18] */
  eax = (uint32_t)(edx + eax + 0x18u);
/* 8aab0c: lea edx, [edi + ecx + 0x14] */
  edx = (uint32_t)(edi + ecx + 0x14u);
/* 8aab10: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8aab12: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 8aab14: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8aab17: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8aab1a: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8aab1d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8aab20: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8aab21: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8aab22: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8aab25: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8aab2c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8aab2d: mov esp, ebp */
  esp = ebp;
/* 8aab2f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8aab30: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_8aab33(void) {
  LOAD_REGS();
L_8aab33: /* 8aab33: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8aab36: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8aab3b: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 8aab3e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8aab3f: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8aab42: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8aab47u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8aab47(); return;
}

void f_8aab47(void) {
  LOAD_REGS();
L_8aab47: /* 8aab47: push 0xa1b22c */
  { uint32_t v = 0xa1b22cu; esp -= 4; W32(esp, v); }
/* 8aab4c: push 0xae9954 */
  { uint32_t v = 0xae9954u; esp -= 4; W32(esp, v); }
/* 8aab51: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8aab57u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8aab57: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8aab5a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8aab5c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8aab5e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8aab63u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8aab63: guest_badaddr(0x8aab63); return;
}

void f_8aabc0(void) {
  LOAD_REGS();
L_8aabc0: /* 8aabc0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8aabc1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8aabc2: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 8aabc8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8aabc9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8aabca: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 8aabce: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8aabd0: mov esi, ecx */
  esi = ecx;
/* 8aabd2: jge 0x8aabe8 */
  if ((sf == of)) goto L_8aabe8;
L_8aabd4: /* 8aabd4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 8aabd9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8aabde: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 8aabe3: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x8aabe5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8aabe5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8aabe8: /* 8aabe8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8aabeb: jle 0x8aac01 */
  if ((zf || sf != of)) goto L_8aac01;
L_8aabed: /* 8aabed: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 8aabf2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8aabf7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 8aabfc: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x8aabfeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8aabfe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8aac01: /* 8aac01: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 8aac05: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8aac08: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 8aac0b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8aac0d: jle 0x8aac23 */
  if ((zf || sf != of)) goto L_8aac23;
L_8aac0f: /* 8aac0f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 8aac14: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8aac19: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 8aac1e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x8aac20u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8aac20: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8aac23: /* 8aac23: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 8aac25: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8aac26: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8aac27: mov ecx, esi */
  ecx = esi;
/* 8aac29: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x8aac2fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 8aac2f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8aac30: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8aac31: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8aac32: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8aac33: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8aac60(void) {
  LOAD_REGS();
L_8aac60: /* 8aac60: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8aac62: push 0x9d65c9 */
  { uint32_t v = 0x9d65c9u; esp -= 4; W32(esp, v); }
/* 8aac67: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8aac6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8aac6e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8aac75: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8aac76: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8aac77: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8aac78: mov esi, ecx */
  esi = ecx;
/* 8aac7a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8aac7b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 8aac7f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 8aac82: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8aac84: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 8aac8a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 8aac92: jge 0x8aaca8 */
  if ((sf == of)) goto L_8aaca8;
L_8aac94: /* 8aac94: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 8aac99: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8aac9e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 8aaca3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8aaca5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8aaca5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8aaca8: /* 8aaca8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8aacab: jle 0x8aacc1 */
  if ((zf || sf != of)) goto L_8aacc1;
L_8aacad: /* 8aacad: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 8aacb2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8aacb7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 8aacbc: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8aacbeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8aacbe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8aacc1: /* 8aacc1: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 8aacc3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8aacc4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8aacc6: mov ecx, esi */
  ecx = esi;
/* 8aacc8: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x8aacceu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 8aacce: mov ecx, esi */
  ecx = esi;
/* 8aacd0: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 8aacd8: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x8aacdeu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 8aacde: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8aace2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8aace3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8aace4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8aace5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8aacec: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8aacef: ret  */
  esp += 4; SPILL(); return;
}

void f_8aad20(void) {
  LOAD_REGS();
L_8aad20: /* 8aad20: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8aad23: jmp 0x6c1401 */
  SPILL(); f_6c1401(); return;
}

void f_8aad40(void) {
  LOAD_REGS();
L_8aad40: /* 8aad40: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8aad43: jmp 0x6c1401 */
  SPILL(); f_6c1401(); return;
}

void f_8aad60(void) {
  LOAD_REGS();
L_8aad60: /* 8aad60: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8aad61: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8aad62: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8aad63: mov esi, ecx */
  esi = ecx;
/* 8aad65: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8aad66: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 8aad69: mov dword ptr [esi], 0xa1b274 */
  W32((uint32_t)(esi), 0xa1b274u);
/* 8aad6f: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8aad75u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8aad75: mov ebp, dword ptr [0xcfa1b0] */
  ebp = R32((uint32_t)(0xcfa1b0u));
/* 8aad7b: mov ebx, dword ptr [ebp + 4] */
  ebx = R32((uint32_t)(ebp + 0x4u));
/* 8aad7e: mov edi, dword ptr [ebp] */
  edi = R32((uint32_t)(ebp));
/* 8aad81: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8aad83: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 8aad88: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8aad89: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8aad8a: call 0x99c910 */
  esp -= 4; W32(esp, 0x8aad8fu); SPILL(); f_99c910(); if (g_unwind) return; RELOAD();
/* 8aad8f: add eax, 0xe1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 8aad94: adc edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 8aad97: add edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edi = r;
  }
/* 8aad9a: mov dword ptr [ebp], edi */
  W32((uint32_t)(ebp), edi);
/* 8aad9d: mov ecx, dword ptr [0xcfa1b0] */
  ecx = R32((uint32_t)(0xcfa1b0u));
/* 8aada3: adc ebx, 0 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ebx = r;
  }
/* 8aada6: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 8aada9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8aadaa: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 8aadad: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 8aadb0: mov eax, esi */
  eax = esi;
/* 8aadb2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8aadb3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8aadb4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8aadb5: ret  */
  esp += 4; SPILL(); return;
}

void f_8aade0(void) {
  LOAD_REGS();
L_8aade0: /* 8aade0: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 8aade3: mov edx, dword ptr [ecx + 0x14] */
  edx = R32((uint32_t)(ecx + 0x14u));
/* 8aade6: ret  */
  esp += 4; SPILL(); return;
}

void f_8aae00(void) {
  LOAD_REGS();
L_8aae00: /* 8aae00: mov eax, 1 */
  eax = 0x1u;
/* 8aae05: ret  */
  esp += 4; SPILL(); return;
}

void f_8aae20(void) {
  LOAD_REGS();
L_8aae20: /* 8aae20: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 8aae23: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8aae26: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8aae29: ret  */
  esp += 4; SPILL(); return;
}

void f_8aae40(void) {
  LOAD_REGS();
L_8aae40: /* 8aae40: mov eax, 0x18 */
  eax = 0x18u;
/* 8aae45: ret  */
  esp += 4; SPILL(); return;
}

void f_8aae60(void) {
  LOAD_REGS();
L_8aae60: /* 8aae60: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8aae64: mov edx, 4 */
  edx = 0x4u;
/* 8aae69: mov ecx, 2 */
  ecx = 0x2u;
/* 8aae6e: mov dword ptr [eax], 1 */
  W32((uint32_t)(eax), 0x1u);
/* 8aae74: mov dword ptr [eax + 4], 0 */
  W32((uint32_t)(eax + 0x4u), 0x0u);
/* 8aae7b: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 8aae7e: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 8aae81: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 8aae84: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 8aae87: mov eax, 3 */
  eax = 0x3u;
/* 8aae8c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8aaea0(void) {
  LOAD_REGS();
L_8aaea0: /* 8aaea0: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 8aaea3: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 8aaea6: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 8aaeaa: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8aaead: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8aaeb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8aaeb1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8aaeb2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8aaeb3: call 0x6ca83f */
  esp -= 4; W32(esp, 0x8aaeb8u); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 8aaeb8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8aaebb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8aaed0(void) {
  LOAD_REGS();
L_8aaed0: /* 8aaed0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 8aaed4: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 8aaed7: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8aaeda: lea edx, [ecx + eax*8] */
  edx = (uint32_t)(ecx + eax*8);
/* 8aaedd: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8aaee1: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 8aaee3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8aaf00(void) {
  LOAD_REGS();
L_8aaf00: /* 8aaf00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8aaf01: mov esi, ecx */
  esi = ecx;
/* 8aaf03: call 0x6c9106 */
  esp -= 4; W32(esp, 0x8aaf08u); SPILL(); f_6c9106(); if (g_unwind) return; RELOAD();
/* 8aaf08: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 8aaf0c: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 8aaf10: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 8aaf13: mov dword ptr [esi], 0xa1b2a0 */
  W32((uint32_t)(esi), 0xa1b2a0u);
/* 8aaf19: mov dword ptr [esi + 0x1c], ecx */
  W32((uint32_t)(esi + 0x1cu), ecx);
/* 8aaf1c: mov eax, esi */
  eax = esi;
/* 8aaf1e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8aaf1f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8aaf40(void) {
  LOAD_REGS();
L_8aaf40: /* 8aaf40: mov eax, dword ptr [ecx + 0x18] */
  eax = R32((uint32_t)(ecx + 0x18u));
/* 8aaf43: mov eax, dword ptr [eax + 0x4c4] */
  eax = R32((uint32_t)(eax + 0x4c4u));
/* 8aaf49: imul eax, dword ptr [ecx + 0x1c] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ecx + 0x1cu)));
  eax = (uint32_t)r;
  }
/* 8aaf4d: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8aaf50: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8aaf53: ret  */
  esp += 4; SPILL(); return;
}

void f_8aaf70(void) {
  LOAD_REGS();
L_8aaf70: /* 8aaf70: sub esp, 0x98 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x98u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8aaf76: mov edx, dword ptr [ecx + 0x18] */
  edx = R32((uint32_t)(ecx + 0x18u));
/* 8aaf79: mov eax, dword ptr [edx + 0x4c0] */
  eax = R32((uint32_t)(edx + 0x4c0u));
/* 8aaf7f: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 8aaf83: fild dword ptr [esp + 4] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 8aaf87: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8aaf88: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8aaf89: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8aaf8a: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 8aaf90: mov edi, dword ptr [edx + 0x40c] */
  edi = R32((uint32_t)(edx + 0x40cu));
/* 8aaf96: xor esi, esi */
  esi = 0;
/* 8aaf98: xor ebp, ebp */
  ebp = 0;
/* 8aaf9a: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8aaf9c: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 8aafa0: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 8aafa4: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 8aafa8: jle 0x8ab20b */
  if ((zf || sf != of)) goto L_8ab20b;
L_8aafae: /* 8aafae: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8aafaf: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
L_8aafb3: /* 8aafb3: mov ebx, dword ptr [edx + 0x3fc] */
  ebx = R32((uint32_t)(edx + 0x3fcu));
/* 8aafb9: add ebx, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8aafbd: test byte ptr [ebx + 0xbc], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0xbcu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8aafc4: je 0x8ab1e6 */
  if (zf) goto L_8ab1e6;
L_8aafca: /* 8aafca: xor edi, edi */
  edi = 0;
/* 8aafcc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8aafce: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 8aafd2: jle 0x8ab1e6 */
  if ((zf || sf != of)) goto L_8ab1e6;
L_8aafd8: /* 8aafd8: mov eax, esi */
  eax = esi;
/* 8aafda: mov esi, dword ptr [esp + 0xac] */
  esi = R32((uint32_t)(esp + 0xacu));
/* 8aafe1: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8aafe4: lea ecx, [ebp + ebp*2] */
  ecx = (uint32_t)(ebp + ebp*2);
/* 8aafe8: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 8aafec: lea esi, [esi + ecx*8] */
  esi = (uint32_t)(esi + ecx*8);
/* 8aafef: jmp 0x8ab000 */
  goto L_8ab000;
L_8aaff1: /* 8aaff1: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 8aaff5: jmp 0x8ab000 */
  goto L_8ab000;
L_8ab000: /* 8ab000: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 8ab004: mov ecx, dword ptr [edx + 0x4ac] */
  ecx = R32((uint32_t)(edx + 0x4acu));
/* 8ab00a: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8ab00c: fst dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0);
/* 8ab010: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 8ab013: fsubr dword ptr [ebx + 0xac] */
  ST0 = (F32((uint32_t)(ebx + 0xacu))) - ST0;
/* 8ab019: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 8ab01f: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 8ab021: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ab023: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8ab026: jne 0x8ab030 */
  if (!zf) goto L_8ab030;
L_8ab028: /* 8ab028: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8ab02a: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_8ab030: /* 8ab030: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8ab032: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8ab033: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 8ab036: mov dword ptr [esp + 0x30], edi */
  W32((uint32_t)(esp + 0x30u), edi);
/* 8ab03a: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8ab03c: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 8ab03f: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8ab041: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 8ab044: fstp dword ptr [esp + 0x80] */
  WF32((uint32_t)(esp + 0x80u), ST0); FPOP();
/* 8ab04b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8ab04d: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8ab04f: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 8ab053: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ab055: fld dword ptr [esp + 0x80] */
  { double v = F32((uint32_t)(esp + 0x80u)); FPUSH(v); }
/* 8ab05c: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8ab05e: fstp dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 8ab062: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8ab064: fmul dword ptr [ecx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x14u)));
/* 8ab067: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8ab069: fmul dword ptr [ecx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x18u)));
/* 8ab06c: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8ab06e: fmul dword ptr [ecx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x1cu)));
/* 8ab071: fstp dword ptr [esp + 0x98] */
  WF32((uint32_t)(esp + 0x98u), ST0); FPOP();
/* 8ab078: fadd dword ptr [ecx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x8u)));
/* 8ab07b: fstp dword ptr [esp + 0x60] */
  WF32((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 8ab07f: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8ab081: fadd dword ptr [ecx + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xcu)));
/* 8ab084: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8ab086: fld dword ptr [esp + 0x98] */
  { double v = F32((uint32_t)(esp + 0x98u)); FPUSH(v); }
/* 8ab08d: fadd dword ptr [ecx + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x10u)));
/* 8ab090: fstp dword ptr [esp + 0x68] */
  WF32((uint32_t)(esp + 0x68u), ST0); FPOP();
/* 8ab094: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 8ab098: fadd dword ptr [esp + 0x48] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x48u)));
/* 8ab09c: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 8ab0a0: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8ab0a2: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 8ab0a4: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 8ab0a8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8ab0aa: fld dword ptr [esp + 0x68] */
  { double v = F32((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* 8ab0ae: fadd dword ptr [esp + 0x50] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x50u)));
/* 8ab0b2: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 8ab0b6: fild dword ptr [esp + 0x30] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 8ab0ba: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 8ab0bd: fsubr dword ptr [ebx + 0xac] */
  ST0 = (F32((uint32_t)(ebx + 0xacu))) - ST0;
/* 8ab0c3: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 8ab0c9: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 8ab0cb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ab0cd: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8ab0d0: jne 0x8ab0da */
  if (!zf) goto L_8ab0da;
L_8ab0d2: /* 8ab0d2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8ab0d4: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_8ab0da: /* 8ab0da: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8ab0dc: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 8ab0df: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8ab0e1: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 8ab0e4: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8ab0e6: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 8ab0e9: lea edx, [esp + 0x38] */
  edx = (uint32_t)(esp + 0x38u);
/* 8ab0ed: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ab0ee: fstp dword ptr [esp + 0x90] */
  WF32((uint32_t)(esp + 0x90u), ST0); FPOP();
/* 8ab0f5: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8ab0f7: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8ab0f9: fstp dword ptr [esp + 0x70] */
  WF32((uint32_t)(esp + 0x70u), ST0); FPOP();
/* 8ab0fd: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ab0ff: fld dword ptr [esp + 0x90] */
  { double v = F32((uint32_t)(esp + 0x90u)); FPUSH(v); }
/* 8ab106: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8ab108: fstp dword ptr [esp + 0x78] */
  WF32((uint32_t)(esp + 0x78u), ST0); FPOP();
/* 8ab10c: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8ab10e: fmul dword ptr [ecx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x14u)));
/* 8ab111: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8ab113: fmul dword ptr [ecx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x18u)));
/* 8ab116: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8ab118: fmul dword ptr [ecx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x1cu)));
/* 8ab11b: fstp dword ptr [esp + 0xa8] */
  WF32((uint32_t)(esp + 0xa8u), ST0); FPOP();
/* 8ab122: fadd dword ptr [ecx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x8u)));
/* 8ab125: fstp dword ptr [esp + 0x58] */
  WF32((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 8ab129: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8ab12b: fadd dword ptr [ecx + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xcu)));
/* 8ab12e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8ab130: fld dword ptr [esp + 0xa8] */
  { double v = F32((uint32_t)(esp + 0xa8u)); FPUSH(v); }
/* 8ab137: fadd dword ptr [ecx + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x10u)));
/* 8ab13a: lea ecx, [ebx + 0xa8] */
  ecx = (uint32_t)(ebx + 0xa8u);
/* 8ab140: fstp dword ptr [esp + 0x60] */
  WF32((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 8ab144: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 8ab148: fadd dword ptr [esp + 0x70] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x70u)));
/* 8ab14c: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 8ab150: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8ab152: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 8ab154: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 8ab158: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8ab15a: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 8ab15e: fadd dword ptr [esp + 0x78] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x78u)));
/* 8ab162: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 8ab166: call 0x6c1d93 */
  esp -= 4; W32(esp, 0x8ab16bu); SPILL(); f_6c1d93(); if (g_unwind) return; RELOAD();
/* 8ab16b: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 8ab16f: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 8ab173: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 8ab177: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 8ab17b: mov eax, esi */
  eax = esi;
/* 8ab17d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8ab17f: fst dword ptr [esi + 0x14] */
  WF32((uint32_t)(esi + 0x14u), ST0);
/* 8ab182: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 8ab186: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8ab189: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8ab18c: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 8ab190: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 8ab194: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 8ab197: mov dword ptr [esi + 0x10], 0 */
  W32((uint32_t)(esi + 0x10u), 0x0u);
/* 8ab19e: fstp dword ptr [esi + 0x2c] */
  WF32((uint32_t)(esi + 0x2cu), ST0); FPOP();
/* 8ab1a1: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8ab1a4: mov edx, esi */
  edx = esi;
/* 8ab1a6: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 8ab1a8: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 8ab1ac: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 8ab1ad: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8ab1b0: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 8ab1b4: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 8ab1b7: mov dword ptr [esi + 0x10], 0x3f800000 */
  W32((uint32_t)(esi + 0x10u), 0x3f800000u);
/* 8ab1be: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 8ab1bf: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8ab1c2: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8ab1c5: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 8ab1c9: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 8ab1cd: mov edx, dword ptr [edx + 0x18] */
  edx = R32((uint32_t)(edx + 0x18u));
/* 8ab1d0: mov eax, dword ptr [edx + 0x4c0] */
  eax = R32((uint32_t)(edx + 0x4c0u));
/* 8ab1d6: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ab1d8: jl 0x8aaff1 */
  if ((sf != of)) goto L_8aaff1;
L_8ab1de: /* 8ab1de: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 8ab1e2: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
L_8ab1e6: /* 8ab1e6: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 8ab1ea: mov edx, dword ptr [ecx + 0x18] */
  edx = R32((uint32_t)(ecx + 0x18u));
/* 8ab1ed: mov edi, dword ptr [edx + 0x40c] */
  edi = R32((uint32_t)(edx + 0x40cu));
/* 8ab1f3: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8ab1f4: add ebx, 0xc8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8ab1fa: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ab1fc: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 8ab200: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 8ab204: jl 0x8aafb3 */
  if ((sf != of)) goto L_8aafb3;
L_8ab20a: /* 8ab20a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_8ab20b: /* 8ab20b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8ab20c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ab20d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8ab20e: add esp, 0x98 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x98u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ab214: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8aaff7(void) {
  LOAD_REGS();
  goto L_8aaff7;
L_8aafb3: /* 8aafb3: mov ebx, dword ptr [edx + 0x3fc] */
  ebx = R32((uint32_t)(edx + 0x3fcu));
/* 8aafb9: add ebx, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8aafbd: test byte ptr [ebx + 0xbc], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0xbcu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8aafc4: je 0x8ab1e6 */
  if (zf) goto L_8ab1e6;
L_8aafca: /* 8aafca: xor edi, edi */
  edi = 0;
/* 8aafcc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8aafce: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 8aafd2: jle 0x8ab1e6 */
  if ((zf || sf != of)) goto L_8ab1e6;
L_8aafd8: /* 8aafd8: mov eax, esi */
  eax = esi;
/* 8aafda: mov esi, dword ptr [esp + 0xac] */
  esi = R32((uint32_t)(esp + 0xacu));
/* 8aafe1: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8aafe4: lea ecx, [ebp + ebp*2] */
  ecx = (uint32_t)(ebp + ebp*2);
/* 8aafe8: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 8aafec: lea esi, [esi + ecx*8] */
  esi = (uint32_t)(esi + ecx*8);
/* 8aafef: jmp 0x8ab000 */
  goto L_8ab000;
L_8aaff1: /* 8aaff1: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 8aaff5: jmp 0x8ab000 */
  goto L_8ab000;
L_8aaff7: /* 8aaff7: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 8aaffe: mov edi, edi */
  edi = edi;
L_8ab000: /* 8ab000: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 8ab004: mov ecx, dword ptr [edx + 0x4ac] */
  ecx = R32((uint32_t)(edx + 0x4acu));
/* 8ab00a: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8ab00c: fst dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0);
/* 8ab010: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 8ab013: fsubr dword ptr [ebx + 0xac] */
  ST0 = (F32((uint32_t)(ebx + 0xacu))) - ST0;
/* 8ab019: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 8ab01f: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 8ab021: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ab023: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8ab026: jne 0x8ab030 */
  if (!zf) goto L_8ab030;
L_8ab028: /* 8ab028: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8ab02a: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_8ab030: /* 8ab030: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8ab032: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8ab033: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 8ab036: mov dword ptr [esp + 0x30], edi */
  W32((uint32_t)(esp + 0x30u), edi);
/* 8ab03a: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8ab03c: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 8ab03f: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8ab041: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 8ab044: fstp dword ptr [esp + 0x80] */
  WF32((uint32_t)(esp + 0x80u), ST0); FPOP();
/* 8ab04b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8ab04d: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8ab04f: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 8ab053: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ab055: fld dword ptr [esp + 0x80] */
  { double v = F32((uint32_t)(esp + 0x80u)); FPUSH(v); }
/* 8ab05c: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8ab05e: fstp dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 8ab062: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8ab064: fmul dword ptr [ecx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x14u)));
/* 8ab067: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8ab069: fmul dword ptr [ecx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x18u)));
/* 8ab06c: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8ab06e: fmul dword ptr [ecx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x1cu)));
/* 8ab071: fstp dword ptr [esp + 0x98] */
  WF32((uint32_t)(esp + 0x98u), ST0); FPOP();
/* 8ab078: fadd dword ptr [ecx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x8u)));
/* 8ab07b: fstp dword ptr [esp + 0x60] */
  WF32((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 8ab07f: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8ab081: fadd dword ptr [ecx + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xcu)));
/* 8ab084: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8ab086: fld dword ptr [esp + 0x98] */
  { double v = F32((uint32_t)(esp + 0x98u)); FPUSH(v); }
/* 8ab08d: fadd dword ptr [ecx + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x10u)));
/* 8ab090: fstp dword ptr [esp + 0x68] */
  WF32((uint32_t)(esp + 0x68u), ST0); FPOP();
/* 8ab094: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 8ab098: fadd dword ptr [esp + 0x48] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x48u)));
/* 8ab09c: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 8ab0a0: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8ab0a2: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 8ab0a4: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 8ab0a8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8ab0aa: fld dword ptr [esp + 0x68] */
  { double v = F32((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* 8ab0ae: fadd dword ptr [esp + 0x50] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x50u)));
/* 8ab0b2: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 8ab0b6: fild dword ptr [esp + 0x30] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 8ab0ba: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 8ab0bd: fsubr dword ptr [ebx + 0xac] */
  ST0 = (F32((uint32_t)(ebx + 0xacu))) - ST0;
/* 8ab0c3: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 8ab0c9: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 8ab0cb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ab0cd: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8ab0d0: jne 0x8ab0da */
  if (!zf) goto L_8ab0da;
L_8ab0d2: /* 8ab0d2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8ab0d4: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_8ab0da: /* 8ab0da: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8ab0dc: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 8ab0df: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8ab0e1: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 8ab0e4: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8ab0e6: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 8ab0e9: lea edx, [esp + 0x38] */
  edx = (uint32_t)(esp + 0x38u);
/* 8ab0ed: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ab0ee: fstp dword ptr [esp + 0x90] */
  WF32((uint32_t)(esp + 0x90u), ST0); FPOP();
/* 8ab0f5: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8ab0f7: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8ab0f9: fstp dword ptr [esp + 0x70] */
  WF32((uint32_t)(esp + 0x70u), ST0); FPOP();
/* 8ab0fd: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ab0ff: fld dword ptr [esp + 0x90] */
  { double v = F32((uint32_t)(esp + 0x90u)); FPUSH(v); }
/* 8ab106: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8ab108: fstp dword ptr [esp + 0x78] */
  WF32((uint32_t)(esp + 0x78u), ST0); FPOP();
/* 8ab10c: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8ab10e: fmul dword ptr [ecx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x14u)));
/* 8ab111: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8ab113: fmul dword ptr [ecx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x18u)));
/* 8ab116: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8ab118: fmul dword ptr [ecx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x1cu)));
/* 8ab11b: fstp dword ptr [esp + 0xa8] */
  WF32((uint32_t)(esp + 0xa8u), ST0); FPOP();
/* 8ab122: fadd dword ptr [ecx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x8u)));
/* 8ab125: fstp dword ptr [esp + 0x58] */
  WF32((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 8ab129: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8ab12b: fadd dword ptr [ecx + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xcu)));
/* 8ab12e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8ab130: fld dword ptr [esp + 0xa8] */
  { double v = F32((uint32_t)(esp + 0xa8u)); FPUSH(v); }
/* 8ab137: fadd dword ptr [ecx + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x10u)));
/* 8ab13a: lea ecx, [ebx + 0xa8] */
  ecx = (uint32_t)(ebx + 0xa8u);
/* 8ab140: fstp dword ptr [esp + 0x60] */
  WF32((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 8ab144: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 8ab148: fadd dword ptr [esp + 0x70] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x70u)));
/* 8ab14c: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 8ab150: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8ab152: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 8ab154: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 8ab158: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8ab15a: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 8ab15e: fadd dword ptr [esp + 0x78] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x78u)));
/* 8ab162: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 8ab166: call 0x6c1d93 */
  esp -= 4; W32(esp, 0x8ab16bu); SPILL(); f_6c1d93(); if (g_unwind) return; RELOAD();
/* 8ab16b: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 8ab16f: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 8ab173: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 8ab177: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 8ab17b: mov eax, esi */
  eax = esi;
/* 8ab17d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8ab17f: fst dword ptr [esi + 0x14] */
  WF32((uint32_t)(esi + 0x14u), ST0);
/* 8ab182: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 8ab186: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8ab189: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8ab18c: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 8ab190: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 8ab194: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 8ab197: mov dword ptr [esi + 0x10], 0 */
  W32((uint32_t)(esi + 0x10u), 0x0u);
/* 8ab19e: fstp dword ptr [esi + 0x2c] */
  WF32((uint32_t)(esi + 0x2cu), ST0); FPOP();
/* 8ab1a1: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8ab1a4: mov edx, esi */
  edx = esi;
/* 8ab1a6: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 8ab1a8: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 8ab1ac: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 8ab1ad: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8ab1b0: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 8ab1b4: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 8ab1b7: mov dword ptr [esi + 0x10], 0x3f800000 */
  W32((uint32_t)(esi + 0x10u), 0x3f800000u);
/* 8ab1be: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 8ab1bf: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8ab1c2: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8ab1c5: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 8ab1c9: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 8ab1cd: mov edx, dword ptr [edx + 0x18] */
  edx = R32((uint32_t)(edx + 0x18u));
/* 8ab1d0: mov eax, dword ptr [edx + 0x4c0] */
  eax = R32((uint32_t)(edx + 0x4c0u));
/* 8ab1d6: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ab1d8: jl 0x8aaff1 */
  if ((sf != of)) goto L_8aaff1;
L_8ab1de: /* 8ab1de: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 8ab1e2: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
L_8ab1e6: /* 8ab1e6: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 8ab1ea: mov edx, dword ptr [ecx + 0x18] */
  edx = R32((uint32_t)(ecx + 0x18u));
/* 8ab1ed: mov edi, dword ptr [edx + 0x40c] */
  edi = R32((uint32_t)(edx + 0x40cu));
/* 8ab1f3: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8ab1f4: add ebx, 0xc8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8ab1fa: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ab1fc: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 8ab200: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 8ab204: jl 0x8aafb3 */
  if ((sf != of)) goto L_8aafb3;
L_8ab20a: /* 8ab20a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8ab20b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8ab20c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ab20d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8ab20e: add esp, 0x98 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x98u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ab214: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8ab2d0(void) {
  LOAD_REGS();
L_8ab2d0: /* 8ab2d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8ab2d1: mov ebp, esp */
  ebp = esp;
/* 8ab2d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8ab2d5: push 0x9d6616 */
  { uint32_t v = 0x9d6616u; esp -= 4; W32(esp, v); }
/* 8ab2da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8ab2e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ab2e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8ab2e8: sub esp, 0x138 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x138u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ab2ee: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8ab2f1: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8ab2f4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ab2f5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ab2f6: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 8ab2f9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ab2fa: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8ab2fd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ab2fe: mov ebx, ecx */
  ebx = ecx;
/* 8ab300: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8ab303: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ab304: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ab305: xor edi, edi */
  edi = 0;
/* 8ab307: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ab308: mov ecx, ebx */
  ecx = ebx;
/* 8ab30a: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 8ab30d: call 0x6c20b8 */
  esp -= 4; W32(esp, 0x8ab312u); SPILL(); f_6c20b8(); if (g_unwind) return; RELOAD();
/* 8ab312: cmp dword ptr [ebx + 0x318], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x318u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8ab318: jne 0x8ab32f */
  if (!zf) goto L_8ab32f;
L_8ab31a: /* 8ab31a: xor eax, eax */
  eax = 0;
/* 8ab31c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8ab31f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8ab326: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8ab327: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ab328: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8ab329: mov esp, ebp */
  esp = ebp;
/* 8ab32b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8ab32c: ret 0x10 */
  esp += 20; SPILL(); return;
L_8ab32f: /* 8ab32f: mov ecx, dword ptr [ebx + 0x40c] */
  ecx = R32((uint32_t)(ebx + 0x40cu));
/* 8ab335: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ab337: mov dword ptr [ebp + 0x10], edi */
  W32((uint32_t)(ebp + 0x10u), edi);
/* 8ab33a: jle 0x8ab686 */
  if ((zf || sf != of)) goto L_8ab686;
L_8ab340: /* 8ab340: xor eax, eax */
  eax = 0;
L_8ab342: /* 8ab342: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ab344: jge 0x8ab364 */
  if ((sf == of)) goto L_8ab364;
L_8ab346: /* 8ab346: mov edi, dword ptr [ebx + 0x3fc] */
  edi = R32((uint32_t)(ebx + 0x3fcu));
/* 8ab34c: mov edx, eax */
  edx = eax;
/* 8ab34e: imul edx, edx, 0xc8 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0xc8u);
  edx = (uint32_t)r;
  }
/* 8ab354: test byte ptr [edi + edx + 0xbc], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + edx + 0xbcu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8ab35c: je 0x8ab361 */
  if (zf) goto L_8ab361;
L_8ab35e: /* 8ab35e: inc dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x10u), r);
  }
L_8ab361: /* 8ab361: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8ab362: jmp 0x8ab342 */
  goto L_8ab342;
L_8ab364: /* 8ab364: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 8ab367: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ab369: je 0x8ab31a */
  if (zf) goto L_8ab31a;
L_8ab36b: /* 8ab36b: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 8ab371: call 0x6c9106 */
  esp -= 4; W32(esp, 0x8ab376u); SPILL(); f_6c9106(); if (g_unwind) return; RELOAD();
/* 8ab376: mov dword ptr [ebp - 0x84], 0xa1b2a0 */
  W32((uint32_t)(ebp + 0xffffff7cu), 0xa1b2a0u);
/* 8ab380: mov dword ptr [ebp - 0x6c], ebx */
  W32((uint32_t)(ebp + 0xffffff94u), ebx);
/* 8ab383: mov dword ptr [ebp - 0x68], edi */
  W32((uint32_t)(ebp + 0xffffff98u), edi);
/* 8ab386: cmp byte ptr [ebx + 0xf4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0xf4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8ab38d: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8ab391: jne 0x8ab4cd */
  if (!zf) goto L_8ab4cd;
L_8ab397: /* 8ab397: mov eax, dword ptr [ebx + 0x3f0] */
  eax = R32((uint32_t)(ebx + 0x3f0u));
/* 8ab39d: lea ecx, [eax + 0x170] */
  ecx = (uint32_t)(eax + 0x170u);
/* 8ab3a3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8ab3a5: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 8ab3a8: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 8ab3ab: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8ab3ae: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8ab3b1: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8ab3b4: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8ab3b7: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8ab3ba: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 8ab3bd: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8ab3c0: mov dword ptr [ebp - 0x60], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x3f800000u);
/* 8ab3c7: mov dword ptr [ebp - 0x5c], 0 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x0u);
/* 8ab3ce: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
/* 8ab3d5: mov dword ptr [ebp - 0x54], 0 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x0u);
/* 8ab3dc: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
/* 8ab3e3: mov dword ptr [ebp - 0x4c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x3f800000u);
/* 8ab3ea: mov dword ptr [ebp - 0x48], 0 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x0u);
/* 8ab3f1: mov dword ptr [ebp - 0x44], 0 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x0u);
/* 8ab3f8: mov dword ptr [ebp - 0x40], 0 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x0u);
/* 8ab3ff: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* 8ab406: mov dword ptr [ebp - 0x38], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x3f800000u);
/* 8ab40d: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 8ab414: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 8ab417: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 8ab41a: mov dword ptr [ebp - 0x24], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x3f800000u);
/* 8ab421: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8ab426: lea esi, [ebp - 0x60] */
  esi = (uint32_t)(ebp + 0xffffffa0u);
/* 8ab429: lea edi, [ebp - 0x144] */
  edi = (uint32_t)(ebp + 0xfffffebcu);
/* 8ab42f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8ab431: add eax, 0x17c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8ab436: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8ab438: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ab43b: mov ecx, esp */
  ecx = esp;
/* 8ab43d: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8ab43f: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8ab442: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8ab445: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8ab448: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 8ab44b: lea ecx, [ebp - 0x104] */
  ecx = (uint32_t)(ebp + 0xfffffefcu);
/* 8ab451: call 0x6c9160 */
  esp -= 4; W32(esp, 0x8ab456u); SPILL(); f_6c9160(); if (g_unwind) return; RELOAD();
/* 8ab456: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ab459: mov edi, esp */
  edi = esp;
/* 8ab45b: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8ab460: lea esi, [ebp - 0x60] */
  esi = (uint32_t)(ebp + 0xffffffa0u);
/* 8ab463: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8ab465: lea ecx, [ebp - 0xc4] */
  ecx = (uint32_t)(ebp + 0xffffff3cu);
/* 8ab46b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ab46c: mov ecx, eax */
  ecx = eax;
/* 8ab46e: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 8ab472: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x8ab478u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 8ab478: lea ecx, [ebp - 0x104] */
  ecx = (uint32_t)(ebp + 0xfffffefcu);
/* 8ab47e: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 8ab482: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8ab488u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8ab488: lea ecx, [ebp - 0x144] */
  ecx = (uint32_t)(ebp + 0xfffffebcu);
/* 8ab48e: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 8ab492: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8ab498u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8ab498: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 8ab49b: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 8ab49f: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8ab4a5u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8ab4a5: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 8ab4a8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8ab4aa: lea eax, [ebp - 0xc4] */
  eax = (uint32_t)(ebp + 0xffffff3cu);
/* 8ab4b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ab4b1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ab4b3: call dword ptr [edx + 0x38] */
  { uint32_t t = R32((uint32_t)(edx + 0x38u)); esp -= 4; W32(esp, 0x8ab4b6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ab4b6: lea ecx, [ebp - 0xc4] */
  ecx = (uint32_t)(ebp + 0xffffff3cu);
/* 8ab4bc: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8ab4c0: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8ab4c6u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8ab4c6: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 8ab4c9: xor edi, edi */
  edi = 0;
/* 8ab4cb: jmp 0x8ab4dd */
  goto L_8ab4dd;
L_8ab4cd: /* 8ab4cd: mov eax, dword ptr [0xcfa350] */
  eax = R32((uint32_t)(0xcfa350u));
/* 8ab4d2: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8ab4d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ab4d5: xor edi, edi */
  edi = 0;
/* 8ab4d7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ab4d8: mov ecx, esi */
  ecx = esi;
/* 8ab4da: call dword ptr [edx + 0x38] */
  { uint32_t t = R32((uint32_t)(edx + 0x38u)); esp -= 4; W32(esp, 0x8ab4ddu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8ab4dd: /* 8ab4dd: mov edx, dword ptr [ebx + 0x3f0] */
  edx = R32((uint32_t)(ebx + 0x3f0u));
/* 8ab4e3: mov eax, dword ptr [edx + 0x3ac] */
  eax = R32((uint32_t)(edx + 0x3acu));
/* 8ab4e9: movzx ecx, byte ptr [ebx + 0x314] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + 0x314u)));
/* 8ab4f0: mov dword ptr [eax + 0x38], ecx */
  W32((uint32_t)(eax + 0x38u), ecx);
/* 8ab4f3: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8ab4f6: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 8ab4f9: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 8ab4fc: cmp dword ptr [eax + 0x540], 7 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x540u))); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8ab503: mov edx, dword ptr [ebx + 0x3f0] */
  edx = R32((uint32_t)(ebx + 0x3f0u));
/* 8ab509: mov eax, dword ptr [edx + 0x3ac] */
  eax = R32((uint32_t)(edx + 0x3acu));
/* 8ab50f: jne 0x8ab516 */
  if (!zf) goto L_8ab516;
L_8ab511: /* 8ab511: mov dword ptr [eax + 0x48], edi */
  W32((uint32_t)(eax + 0x48u), edi);
/* 8ab514: jmp 0x8ab51f */
  goto L_8ab51f;
L_8ab516: /* 8ab516: mov edx, dword ptr [ebx + 0x318] */
  edx = R32((uint32_t)(ebx + 0x318u));
/* 8ab51c: mov dword ptr [eax + 0x48], edx */
  W32((uint32_t)(eax + 0x48u), edx);
L_8ab51f: /* 8ab51f: mov eax, dword ptr [ebx + 0x3f0] */
  eax = R32((uint32_t)(ebx + 0x3f0u));
/* 8ab525: mov edx, dword ptr [eax + 0x3ac] */
  edx = R32((uint32_t)(eax + 0x3acu));
/* 8ab52b: mov dword ptr [edx + 0x3c], edi */
  W32((uint32_t)(edx + 0x3cu), edi);
/* 8ab52e: mov eax, dword ptr [ebx + 0x3f0] */
  eax = R32((uint32_t)(ebx + 0x3f0u));
/* 8ab534: mov edx, dword ptr [eax + 0x3ac] */
  edx = R32((uint32_t)(eax + 0x3acu));
/* 8ab53a: mov dword ptr [edx + 0x40], 1 */
  W32((uint32_t)(edx + 0x40u), 0x1u);
/* 8ab541: mov eax, dword ptr [ebx + 0x3f0] */
  eax = R32((uint32_t)(ebx + 0x3f0u));
/* 8ab547: mov edx, dword ptr [eax + 0x3ac] */
  edx = R32((uint32_t)(eax + 0x3acu));
/* 8ab54d: mov dword ptr [edx + 0x44], edi */
  W32((uint32_t)(edx + 0x44u), edi);
/* 8ab550: mov eax, dword ptr [ebx + 0x1c8] */
  eax = R32((uint32_t)(ebx + 0x1c8u));
/* 8ab556: mov edx, dword ptr [ebx + 0x3f0] */
  edx = R32((uint32_t)(ebx + 0x3f0u));
/* 8ab55c: mov edx, dword ptr [edx + 0x3ac] */
  edx = R32((uint32_t)(edx + 0x3acu));
/* 8ab562: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8ab565: mov dword ptr [edx + 0x4c], eax */
  W32((uint32_t)(edx + 0x4cu), eax);
/* 8ab568: mov eax, dword ptr [ebx + 0x3f0] */
  eax = R32((uint32_t)(ebx + 0x3f0u));
/* 8ab56e: mov edx, dword ptr [eax + 0x3ac] */
  edx = R32((uint32_t)(eax + 0x3acu));
/* 8ab574: mov eax, dword ptr [ebx + 0x1c4] */
  eax = R32((uint32_t)(ebx + 0x1c4u));
/* 8ab57a: mov dword ptr [edx + 0x50], eax */
  W32((uint32_t)(edx + 0x50u), eax);
/* 8ab57d: mov edx, dword ptr [ebx + 0x3f0] */
  edx = R32((uint32_t)(ebx + 0x3f0u));
/* 8ab583: mov eax, dword ptr [edx + 0x3ac] */
  eax = R32((uint32_t)(edx + 0x3acu));
/* 8ab589: mov edx, dword ptr [ebx + 0x1c8] */
  edx = R32((uint32_t)(ebx + 0x1c8u));
/* 8ab58f: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 8ab591: xor edx, dword ptr [eax + 0x60] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x60u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 8ab594: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8ab597: xor dword ptr [eax + 0x60], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x60u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  W32((uint32_t)(eax + 0x60u), r);
  }
/* 8ab59a: mov eax, dword ptr [ebx + 0x1c8] */
  eax = R32((uint32_t)(ebx + 0x1c8u));
/* 8ab5a0: mov edx, dword ptr [ebx + 0x3f0] */
  edx = R32((uint32_t)(ebx + 0x3f0u));
/* 8ab5a6: mov edx, dword ptr [edx + 0x3ac] */
  edx = R32((uint32_t)(edx + 0x3acu));
/* 8ab5ac: shr eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 8ab5af: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8ab5b2: mov dword ptr [edx + 0x54], eax */
  W32((uint32_t)(edx + 0x54u), eax);
/* 8ab5b5: mov eax, dword ptr [ebx + 0x1c8] */
  eax = R32((uint32_t)(ebx + 0x1c8u));
/* 8ab5bb: mov edx, dword ptr [ebx + 0x3f0] */
  edx = R32((uint32_t)(ebx + 0x3f0u));
/* 8ab5c1: mov edx, dword ptr [edx + 0x3ac] */
  edx = R32((uint32_t)(edx + 0x3acu));
/* 8ab5c7: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 8ab5ca: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8ab5cd: mov dword ptr [edx + 0x58], eax */
  W32((uint32_t)(edx + 0x58u), eax);
/* 8ab5d0: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 8ab5d3: call 0x6c84a9 */
  esp -= 4; W32(esp, 0x8ab5d8u); SPILL(); f_6c84a9(); if (g_unwind) return; RELOAD();
/* 8ab5d8: mov ecx, dword ptr [ebx + 0x3f0] */
  ecx = R32((uint32_t)(ebx + 0x3f0u));
/* 8ab5de: mov edx, dword ptr [ecx + 0x3ac] */
  edx = R32((uint32_t)(ecx + 0x3acu));
/* 8ab5e4: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ab5e7: mov dword ptr [edx + 0x5c], eax */
  W32((uint32_t)(edx + 0x5cu), eax);
/* 8ab5ea: mov ecx, esp */
  ecx = esp;
/* 8ab5ec: mov dword ptr [ebp + 0x14], esp */
  W32((uint32_t)(ebp + 0x14u), esp);
/* 8ab5ef: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ab5f0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ab5f3: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 8ab5fa: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8ab5fd: mov eax, esp */
  eax = esp;
/* 8ab5ff: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 8ab601: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 8ab608: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8ab60b: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8ab60e: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8ab615: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8ab618: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 8ab61b: call dword ptr [0xcfa5a0] */
  esp -= 4; W32(esp, 0x8ab621u); SPILL(); f_4e3a21(); if (g_unwind) return; /* Core!??0FSphere@@QAE@VFVector@@M@Z */ RELOAD();
/* 8ab621: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8ab623: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ab624: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ab625: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ab626: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8ab628: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ab629: mov ecx, esi */
  ecx = esi;
/* 8ab62b: call dword ptr [eax + 0x24] */
  { uint32_t t = R32((uint32_t)(eax + 0x24u)); esp -= 4; W32(esp, 0x8ab62eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ab62e: mov eax, dword ptr [ebx + 0x3f0] */
  eax = R32((uint32_t)(ebx + 0x3f0u));
/* 8ab634: mov ecx, dword ptr [eax + 0x3ac] */
  ecx = R32((uint32_t)(eax + 0x3acu));
/* 8ab63a: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8ab63c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ab63d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ab63e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ab63f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ab640: mov ecx, esi */
  ecx = esi;
/* 8ab642: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x8ab645u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ab645: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8ab647: lea eax, [ebp - 0x84] */
  eax = (uint32_t)(ebp + 0xffffff7cu);
/* 8ab64d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ab64e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ab64f: mov ecx, esi */
  ecx = esi;
/* 8ab651: call dword ptr [edx + 0x50] */
  { uint32_t t = R32((uint32_t)(edx + 0x50u)); esp -= 4; W32(esp, 0x8ab654u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ab654: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8ab656: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ab658: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ab65a: mov ecx, esi */
  ecx = esi;
/* 8ab65c: mov edi, eax */
  edi = eax;
/* 8ab65e: call dword ptr [edx + 0x54] */
  { uint32_t t = R32((uint32_t)(edx + 0x54u)); esp -= 4; W32(esp, 0x8ab661u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ab661: mov ecx, dword ptr [ebx + 0x4cc] */
  ecx = R32((uint32_t)(ebx + 0x4ccu));
/* 8ab667: imul ecx, dword ptr [ebp + 0x10] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0x10u)));
  ecx = (uint32_t)r;
  }
/* 8ab66b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8ab66d: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8ab66f: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8ab671: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ab672: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ab673: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8ab675: mov ecx, esi */
  ecx = esi;
/* 8ab677: call dword ptr [eax + 0x5c] */
  { uint32_t t = R32((uint32_t)(eax + 0x5cu)); esp -= 4; W32(esp, 0x8ab67au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ab67a: lea ecx, [ebp - 0x80] */
  ecx = (uint32_t)(ebp + 0xffffff80u);
/* 8ab67d: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8ab681: call 0x6c1401 */
  esp -= 4; W32(esp, 0x8ab686u); SPILL(); f_6c1401(); if (g_unwind) return; RELOAD();
L_8ab686: /* 8ab686: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8ab689: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8ab68c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8ab68d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ab68e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8ab695: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8ab696: mov esp, ebp */
  esp = ebp;
/* 8ab698: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8ab699: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_8ab69c(void) {
  LOAD_REGS();
L_8ab69c: /* 8ab69c: mov edx, dword ptr [ebp - 0x64] */
  edx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 8ab69f: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8ab6a4: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 8ab6a7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ab6a8: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 8ab6ab: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8ab6b0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8ab6b0(); return;
}

void f_8ab6b0(void) {
  LOAD_REGS();
L_8ab6b0: /* 8ab6b0: push 0xa1b2cc */
  { uint32_t v = 0xa1b2ccu; esp -= 4; W32(esp, v); }
/* 8ab6b5: push 0xae995c */
  { uint32_t v = 0xae995cu; esp -= 4; W32(esp, v); }
/* 8ab6ba: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8ab6c0u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8ab6c0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ab6c3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ab6c5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ab6c7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8ab6ccu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8ab6cc: guest_badaddr(0x8ab6cc); return;
}

void f_8ab7d0(void) {
  LOAD_REGS();
L_8ab7d0: /* 8ab7d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ab7d1: mov esi, ecx */
  esi = ecx;
/* 8ab7d3: call 0x6c51ff */
  esp -= 4; W32(esp, 0x8ab7d8u); SPILL(); f_6c51ff(); if (g_unwind) return; RELOAD();
/* 8ab7d8: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8ab7da: mov ecx, esi */
  ecx = esi;
/* 8ab7dc: call dword ptr [eax + 0x6c] */
  { uint32_t t = R32((uint32_t)(eax + 0x6cu)); esp -= 4; W32(esp, 0x8ab7dfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ab7df: mov eax, dword ptr [esi + 0xf8] */
  eax = R32((uint32_t)(esi + 0xf8u));
/* 8ab7e5: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8ab7e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ab7e8: mov ecx, esi */
  ecx = esi;
/* 8ab7ea: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0x8ab7edu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ab7ed: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ab7ee: ret  */
  esp += 4; SPILL(); return;
}

void f_8ab800(void) {
  LOAD_REGS();
L_8ab800: /* 8ab800: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8ab801: mov ebp, esp */
  ebp = esp;
/* 8ab803: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8ab805: push 0x9d6630 */
  { uint32_t v = 0x9d6630u; esp -= 4; W32(esp, v); }
/* 8ab80a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8ab810: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ab811: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8ab818: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ab81b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8ab81e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ab81f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ab820: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ab821: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8ab824: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ab825: mov esi, ecx */
  esi = ecx;
/* 8ab827: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8ab82e: call 0x6ca62d */
  esp -= 4; W32(esp, 0x8ab833u); SPILL(); f_6ca62d(); if (g_unwind) return; RELOAD();
/* 8ab833: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8ab836: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ab837: lea ecx, [esi + 0x498] */
  ecx = (uint32_t)(esi + 0x498u);
/* 8ab83d: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x8ab843u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 8ab843: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8ab845: lea edx, [esi + 0x4a4] */
  edx = (uint32_t)(esi + 0x4a4u);
/* 8ab84b: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 8ab84d: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8ab850: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8ab853: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8ab856: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8ab859: mov eax, dword ptr [esi + 0x2b4] */
  eax = R32((uint32_t)(esi + 0x2b4u));
/* 8ab85f: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8ab861: jne 0x8ab871 */
  if (!zf) goto L_8ab871;
L_8ab863: /* 8ab863: mov cl, byte ptr [esi + 0x494] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x494u))) & 0xffu);
/* 8ab869: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8ab86b: je 0x8ab871 */
  if (zf) goto L_8ab871;
L_8ab86d: /* 8ab86d: xor ecx, ecx */
  ecx = 0;
/* 8ab86f: jmp 0x8ab876 */
  goto L_8ab876;
L_8ab871: /* 8ab871: mov ecx, 1 */
  ecx = 0x1u;
L_8ab876: /* 8ab876: mov edx, eax */
  edx = eax;
/* 8ab878: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 8ab87a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8ab87d: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8ab880: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 8ab882: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8ab883: mov dword ptr [esi + 0x2b4], edx */
  W32((uint32_t)(esi + 0x2b4u), edx);
/* 8ab889: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ab88a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8ab891: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8ab892: mov esp, ebp */
  esp = ebp;
/* 8ab894: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8ab895: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8ab898(void) {
  LOAD_REGS();
L_8ab898: /* 8ab898: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8ab89b: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8ab8a0: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8ab8a3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ab8a4: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8ab8a7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8ab8acu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8ab8ac(); return;
}

void f_8ab8ac(void) {
  LOAD_REGS();
L_8ab8ac: /* 8ab8ac: push 0xa1b318 */
  { uint32_t v = 0xa1b318u; esp -= 4; W32(esp, v); }
/* 8ab8b1: push 0xae9990 */
  { uint32_t v = 0xae9990u; esp -= 4; W32(esp, v); }
/* 8ab8b6: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8ab8bcu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8ab8bc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ab8bf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ab8c1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ab8c3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8ab8c8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8ab8c8: guest_badaddr(0x8ab8c8); return;
}

void f_8ab910(void) {
  LOAD_REGS();
L_8ab910: /* 8ab910: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8ab911: mov ebp, esp */
  ebp = esp;
/* 8ab913: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8ab915: push 0x9d6640 */
  { uint32_t v = 0x9d6640u; esp -= 4; W32(esp, v); }
/* 8ab91a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8ab920: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ab921: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8ab928: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ab92b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ab92c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ab92d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ab92e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8ab931: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8ab938: call 0x6c7414 */
  esp -= 4; W32(esp, 0x8ab93du); SPILL(); f_6c7414(); if (g_unwind) return; RELOAD();
/* 8ab93d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8ab940: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8ab941: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ab942: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8ab949: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8ab94a: mov esp, ebp */
  esp = ebp;
/* 8ab94c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8ab94d: ret  */
  esp += 4; SPILL(); return;
}

void f_8ab94e(void) {
  LOAD_REGS();
L_8ab94e: /* 8ab94e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8ab951: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8ab956: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8ab959: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ab95a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8ab95d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8ab962u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8ab962(); return;
}

void f_8ab962(void) {
  LOAD_REGS();
L_8ab962: /* 8ab962: push 0xa1b358 */
  { uint32_t v = 0xa1b358u; esp -= 4; W32(esp, v); }
/* 8ab967: push 0xae99a0 */
  { uint32_t v = 0xae99a0u; esp -= 4; W32(esp, v); }
/* 8ab96c: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8ab972u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8ab972: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ab975: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ab977: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ab979: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8ab97eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8ab97e: guest_badaddr(0x8ab97e); return;
}

void f_8ab9a0(void) {
  LOAD_REGS();
L_8ab9a0: /* 8ab9a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ab9a1: mov esi, ecx */
  esi = ecx;
/* 8ab9a3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8ab9a9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8ab9a9: mov eax, esi */
  eax = esi;
/* 8ab9ab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ab9ac: ret  */
  esp += 4; SPILL(); return;
}

void f_8ab9c0(void) {
  LOAD_REGS();
L_8ab9c0: /* 8ab9c0: mov eax, 1 */
  eax = 0x1u;
/* 8ab9c5: ret  */
  esp += 4; SPILL(); return;
}

void f_8ab9e0(void) {
  LOAD_REGS();
L_8ab9e0: /* 8ab9e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8ab9e1: mov ebp, esp */
  ebp = esp;
/* 8ab9e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8ab9e5: push 0x9d6650 */
  { uint32_t v = 0x9d6650u; esp -= 4; W32(esp, v); }
/* 8ab9ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8ab9f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ab9f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8ab9f8: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ab9fb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8ab9fe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ab9ff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8aba00: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8aba01: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8aba04: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8aba05: mov esi, ecx */
  esi = ecx;
/* 8aba07: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8aba0e: call 0x6ccb12 */
  esp -= 4; W32(esp, 0x8aba13u); SPILL(); f_6ccb12(); if (g_unwind) return; RELOAD();
/* 8aba13: mov ecx, dword ptr [esi + 0x46c] */
  ecx = R32((uint32_t)(esi + 0x46cu));
/* 8aba19: mov ebx, eax */
  ebx = eax;
/* 8aba1b: test byte ptr [esi + 0x2b4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x2b4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8aba22: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 8aba25: je 0x8aba38 */
  if (zf) goto L_8aba38;
L_8aba27: /* 8aba27: lea ecx, [esi + 0x29c] */
  ecx = (uint32_t)(esi + 0x29cu);
/* 8aba2d: call dword ptr [0xcfa63c] */
  esp -= 4; W32(esp, 0x8aba33u); SPILL(); f_4e3585(); if (g_unwind) return; /* Core!?GetMax@FRange@@QBEMXZ */ RELOAD();
/* 8aba33: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 8aba36: jmp 0x8aba6b */
  goto L_8aba6b;
L_8aba38: /* 8aba38: lea ecx, [esi + 0x2a4] */
  ecx = (uint32_t)(esi + 0x2a4u);
/* 8aba3e: call dword ptr [0xcfa63c] */
  esp -= 4; W32(esp, 0x8aba44u); SPILL(); f_4e3585(); if (g_unwind) return; /* Core!?GetMax@FRange@@QBEMXZ */ RELOAD();
/* 8aba44: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8aba47: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8aba4a: lea ecx, [esi + 0x29c] */
  ecx = (uint32_t)(esi + 0x29cu);
/* 8aba50: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8aba53: call dword ptr [0xcfa63c] */
  esp -= 4; W32(esp, 0x8aba59u); SPILL(); f_4e3585(); if (g_unwind) return; /* Core!?GetMax@FRange@@QBEMXZ */ RELOAD();
/* 8aba59: fcom dword ptr [ebp - 0x14] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffecu)));
/* 8aba5c: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 8aba5f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8aba61: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8aba64: je 0x8aba6b */
  if (zf) goto L_8aba6b;
L_8aba66: /* 8aba66: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8aba68: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
L_8aba6b: /* 8aba6b: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 8aba6e: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8aba71: lea edi, [esi + 0x414] */
  edi = (uint32_t)(esi + 0x414u);
/* 8aba77: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 8aba7a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8aba7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8aba7e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8aba7f: mov ecx, edi */
  ecx = edi;
/* 8aba81: call dword ptr [0xcfa60c] */
  esp -= 4; W32(esp, 0x8aba87u); SPILL(); f_4e3332(); if (g_unwind) return; /* Core!?ExpandBy@FBox@@QBE?AV1@M@Z */ RELOAD();
/* 8aba87: mov esi, eax */
  esi = eax;
/* 8aba89: mov ecx, 7 */
  ecx = 0x7u;
/* 8aba8e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8aba90: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8aba93: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8aba94: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8aba95: mov eax, ebx */
  eax = ebx;
/* 8aba97: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8aba9e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8aba9f: mov esp, ebp */
  esp = ebp;
/* 8abaa1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8abaa2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8abaa5(void) {
  LOAD_REGS();
L_8abaa5: /* 8abaa5: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8abaa8: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8abaad: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 8abab0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8abab1: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 8abab4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8abab9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8abab9(); return;
}

void f_8abab9(void) {
  LOAD_REGS();
L_8abab9: /* 8abab9: push 0xa1b398 */
  { uint32_t v = 0xa1b398u; esp -= 4; W32(esp, v); }
/* 8ababe: push 0xae9998 */
  { uint32_t v = 0xae9998u; esp -= 4; W32(esp, v); }
/* 8abac3: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8abac9u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8abac9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8abacc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8abace: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8abad0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8abad5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8abad5: guest_badaddr(0x8abad5); return;
}

void f_8abb20(void) {
  LOAD_REGS();
L_8abb20: /* 8abb20: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8abb24: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8abb25: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8abb26: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8abb27: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8abb28: mov esi, ecx */
  esi = ecx;
/* 8abb2a: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 8abb2d: mov dword ptr [esi], 0xa1b3e4 */
  W32((uint32_t)(esi), 0xa1b3e4u);
/* 8abb33: mov ebp, dword ptr [0xcfa1b0] */
  ebp = R32((uint32_t)(0xcfa1b0u));
/* 8abb39: mov ebx, dword ptr [ebp + 4] */
  ebx = R32((uint32_t)(ebp + 0x4u));
/* 8abb3c: mov edi, dword ptr [ebp] */
  edi = R32((uint32_t)(ebp));
/* 8abb3f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8abb41: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 8abb46: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8abb47: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8abb48: call 0x99c910 */
  esp -= 4; W32(esp, 0x8abb4du); SPILL(); f_99c910(); if (g_unwind) return; RELOAD();
/* 8abb4d: add eax, 0xe2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe2u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 8abb52: adc edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 8abb55: add edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edi = r;
  }
/* 8abb58: mov dword ptr [ebp], edi */
  W32((uint32_t)(ebp), edi);
/* 8abb5b: mov ecx, dword ptr [0xcfa1b0] */
  ecx = R32((uint32_t)(0xcfa1b0u));
/* 8abb61: adc ebx, 0 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ebx = r;
  }
/* 8abb64: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 8abb67: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8abb68: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 8abb6b: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 8abb6e: mov eax, esi */
  eax = esi;
/* 8abb70: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8abb71: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8abb72: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8abb73: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8abba0(void) {
  LOAD_REGS();
L_8abba0: /* 8abba0: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 8abba3: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 8abba6: ret  */
  esp += 4; SPILL(); return;
}

void f_8abbc0(void) {
  LOAD_REGS();
L_8abbc0: /* 8abbc0: mov eax, 1 */
  eax = 0x1u;
/* 8abbc5: ret  */
  esp += 4; SPILL(); return;
}

void f_8abbe0(void) {
  LOAD_REGS();
L_8abbe0: /* 8abbe0: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8abbe3: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8abbe6: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8abbe9: ret  */
  esp += 4; SPILL(); return;
}

void f_8abc00(void) {
  LOAD_REGS();
L_8abc00: /* 8abc00: mov eax, 2 */
  eax = 0x2u;
/* 8abc05: ret  */
  esp += 4; SPILL(); return;
}

void f_8abc20(void) {
  LOAD_REGS();
L_8abc20: /* 8abc20: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 8abc23: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8abc27: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8abc28: xor esi, esi */
  esi = 0;
/* 8abc2a: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8abc2c: jle 0x8abc6e */
  if ((zf || sf != of)) goto L_8abc6e;
L_8abc2e: /* 8abc2e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8abc2f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_8abc30: /* 8abc30: lea edx, [esi*4] */
  edx = (uint32_t)(esi*4);
/* 8abc37: mov word ptr [eax], dx */
  W16((uint32_t)(eax), (edx & 0xffffu));
/* 8abc3a: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8abc3d: lea edi, [edx + 1] */
  edi = (uint32_t)(edx + 0x1u);
/* 8abc40: mov word ptr [eax], di */
  W16((uint32_t)(eax), (edi & 0xffffu));
/* 8abc43: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8abc46: lea ebx, [edx + 2] */
  ebx = (uint32_t)(edx + 0x2u);
/* 8abc49: mov word ptr [eax], bx */
  W16((uint32_t)(eax), (ebx & 0xffffu));
/* 8abc4c: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8abc4f: mov word ptr [eax], bx */
  W16((uint32_t)(eax), (ebx & 0xffffu));
/* 8abc52: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8abc55: mov word ptr [eax], di */
  W16((uint32_t)(eax), (edi & 0xffffu));
/* 8abc58: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8abc5b: add edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8abc5e: mov word ptr [eax], dx */
  W16((uint32_t)(eax), (edx & 0xffffu));
/* 8abc61: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 8abc64: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8abc67: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8abc68: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8abc6a: jl 0x8abc30 */
  if ((sf != of)) goto L_8abc30;
L_8abc6c: /* 8abc6c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8abc6d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_8abc6e: /* 8abc6e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8abc6f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8abca0(void) {
  LOAD_REGS();
L_8abca0: /* 8abca0: sub esp, 0x2a4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2a4u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8abca6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8abca7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8abca8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8abca9: mov esi, dword ptr [esp + 0x2b8] */
  esi = R32((uint32_t)(esp + 0x2b8u));
/* 8abcb0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8abcb1: mov edi, ecx */
  edi = ecx;
/* 8abcb3: lea eax, [esi + 0x194] */
  eax = (uint32_t)(esi + 0x194u);
/* 8abcb9: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8abcbb: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8abcbe: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8abcc1: mov dword ptr [esp + 0xb8], ecx */
  W32((uint32_t)(esp + 0xb8u), ecx);
/* 8abcc8: mov dword ptr [esp + 0xc0], eax */
  W32((uint32_t)(esp + 0xc0u), eax);
/* 8abccf: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8abcd2: mov eax, esp */
  eax = esp;
/* 8abcd4: mov dword ptr [esp + 0xcc], edx */
  W32((uint32_t)(esp + 0xccu), edx);
/* 8abcdb: lea ecx, [esp + 0x108] */
  ecx = (uint32_t)(esp + 0x108u);
/* 8abce2: xor ebp, ebp */
  ebp = 0;
/* 8abce4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8abce5: mov ebx, 0x3f800000 */
  ebx = 0x3f800000u;
/* 8abcea: mov ecx, esi */
  ecx = esi;
/* 8abcec: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
/* 8abcee: mov dword ptr [eax + 4], ebp */
  W32((uint32_t)(eax + 0x4u), ebp);
/* 8abcf1: mov dword ptr [eax + 8], ebp */
  W32((uint32_t)(eax + 0x8u), ebp);
/* 8abcf4: mov dword ptr [eax + 0xc], ebx */
  W32((uint32_t)(eax + 0xcu), ebx);
/* 8abcf7: call 0x6c7018 */
  esp -= 4; W32(esp, 0x8abcfcu); SPILL(); f_6c7018(); if (g_unwind) return; RELOAD();
/* 8abcfc: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8abcff: mov eax, esp */
  eax = esp;
/* 8abd01: lea edx, [esp + 0xec] */
  edx = (uint32_t)(esp + 0xecu);
/* 8abd08: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8abd09: mov ecx, esi */
  ecx = esi;
/* 8abd0b: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
/* 8abd0d: mov dword ptr [eax + 4], 0xc47a0000 */
  W32((uint32_t)(eax + 0x4u), 0xc47a0000u);
/* 8abd14: mov dword ptr [eax + 8], ebp */
  W32((uint32_t)(eax + 0x8u), ebp);
/* 8abd17: mov dword ptr [eax + 0xc], ebx */
  W32((uint32_t)(eax + 0xcu), ebx);
/* 8abd1a: call 0x6c7018 */
  esp -= 4; W32(esp, 0x8abd1fu); SPILL(); f_6c7018(); if (g_unwind) return; RELOAD();
/* 8abd1f: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 8abd22: fsub dword ptr [esp + 0x100] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x100u)));
/* 8abd29: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8abd2c: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8abd2f: mov ecx, esi */
  ecx = esi;
/* 8abd31: fsub dword ptr [esp + 0x10c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10cu)));
/* 8abd38: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 8abd3a: mov eax, esp */
  eax = esp;
/* 8abd3c: fsub dword ptr [esp + 0x108] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x108u)));
/* 8abd43: fstp dword ptr [esp + 0x70] */
  WF32((uint32_t)(esp + 0x70u), ST0); FPOP();
/* 8abd47: fstp dword ptr [esp + 0x74] */
  WF32((uint32_t)(esp + 0x74u), ST0); FPOP();
/* 8abd4b: fstp dword ptr [esp + 0x78] */
  WF32((uint32_t)(esp + 0x78u), ST0); FPOP();
/* 8abd4f: mov dword ptr [eax], 0x447a0000 */
  W32((uint32_t)(eax), 0x447a0000u);
/* 8abd55: mov dword ptr [eax + 4], ebp */
  W32((uint32_t)(eax + 0x4u), ebp);
/* 8abd58: mov dword ptr [eax + 8], ebp */
  W32((uint32_t)(eax + 0x8u), ebp);
/* 8abd5b: mov dword ptr [eax + 0xc], ebx */
  W32((uint32_t)(eax + 0xcu), ebx);
/* 8abd5e: lea eax, [esp + 0xec] */
  eax = (uint32_t)(esp + 0xecu);
/* 8abd65: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8abd66: call 0x6c7018 */
  esp -= 4; W32(esp, 0x8abd6bu); SPILL(); f_6c7018(); if (g_unwind) return; RELOAD();
/* 8abd6b: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 8abd6e: fsub dword ptr [esp + 0x100] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x100u)));
/* 8abd75: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8abd78: fsub dword ptr [esp + 0xfc] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0xfcu)));
/* 8abd7f: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 8abd81: fsub dword ptr [esp + 0xf8] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0xf8u)));
/* 8abd88: fstp dword ptr [esp + 0x74] */
  WF32((uint32_t)(esp + 0x74u), ST0); FPOP();
/* 8abd8c: fst dword ptr [esp + 0x78] */
  WF32((uint32_t)(esp + 0x78u), ST0);
/* 8abd90: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8abd92: fstp dword ptr [esp + 0x7c] */
  WF32((uint32_t)(esp + 0x7cu), ST0); FPOP();
/* 8abd96: fld dword ptr [esp + 0x68] */
  { double v = F32((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* 8abd9a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8abd9c: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 8abda0: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 8abda2: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8abda4: fstp dword ptr [esp + 0xac] */
  WF32((uint32_t)(esp + 0xacu), ST0); FPOP();
/* 8abdab: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8abdad: fmul dword ptr [esp + 0x60] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x60u)));
/* 8abdb1: fld dword ptr [esp + 0x68] */
  { double v = F32((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* 8abdb5: fmul dword ptr [esp + 0x74] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x74u)));
/* 8abdb9: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8abdbb: fstp dword ptr [esp + 0xb0] */
  WF32((uint32_t)(esp + 0xb0u), ST0); FPOP();
/* 8abdc2: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 8abdc6: fmul dword ptr [esp + 0x74] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x74u)));
/* 8abdca: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8abdcc: fmul dword ptr [esp + 0x60] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x60u)));
/* 8abdd0: mov al, byte ptr [edi + 0xf4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0xf4u))) & 0xffu);
/* 8abdd6: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8abdd8: cmp al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8abdda: fstp dword ptr [esp + 0xb4] */
  WF32((uint32_t)(esp + 0xb4u), ST0); FPOP();
/* 8abde1: jne 0x8abf43 */
  if (!zf) goto L_8abf43;
L_8abde7: /* 8abde7: mov eax, dword ptr [edi + 0x3f0] */
  eax = R32((uint32_t)(edi + 0x3f0u));
/* 8abded: lea ecx, [eax + 0x170] */
  ecx = (uint32_t)(eax + 0x170u);
/* 8abdf3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8abdf4: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 8abdfa: lea edx, [esp + 0x288] */
  edx = (uint32_t)(esp + 0x288u);
/* 8abe01: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8abe02: add eax, 0x17c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8abe07: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8abe08: lea eax, [esp + 0x230] */
  eax = (uint32_t)(esp + 0x230u);
/* 8abe0f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8abe10: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8abe13: call dword ptr [0xcfa1d0] */
  esp -= 4; W32(esp, 0x8abe19u); SPILL(); f_4e2086(); if (g_unwind) return; /* Core!??KFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 8abe19: mov ecx, eax */
  ecx = eax;
/* 8abe1b: call dword ptr [0xcfa2cc] */
  esp -= 4; W32(esp, 0x8abe21u); SPILL(); f_4e398b(); if (g_unwind) return; /* Core!??KFCoords@@QBE?AV0@ABVFVector@@@Z */ RELOAD();
/* 8abe21: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8abe22: lea ecx, [esp + 0xe0] */
  ecx = (uint32_t)(esp + 0xe0u);
/* 8abe29: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8abe2a: lea ecx, [esp + 0xc0] */
  ecx = (uint32_t)(esp + 0xc0u);
/* 8abe31: call dword ptr [0xcfa364] */
  esp -= 4; W32(esp, 0x8abe37u); SPILL(); f_4e1af5(); if (g_unwind) return; /* Core!?TransformPointBy@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 8abe37: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8abe39: mov dword ptr [esp + 0xb8], edx */
  W32((uint32_t)(esp + 0xb8u), edx);
/* 8abe40: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8abe43: mov dword ptr [esp + 0xbc], ecx */
  W32((uint32_t)(esp + 0xbcu), ecx);
/* 8abe4a: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 8abe4d: mov eax, dword ptr [edi + 0x3f0] */
  eax = R32((uint32_t)(edi + 0x3f0u));
/* 8abe53: add eax, 0x17c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8abe58: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8abe59: lea ecx, [esp + 0x228] */
  ecx = (uint32_t)(esp + 0x228u);
/* 8abe60: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8abe61: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 8abe67: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8abe6a: mov dword ptr [esp + 0xc8], edx */
  W32((uint32_t)(esp + 0xc8u), edx);
/* 8abe71: call dword ptr [0xcfa1d0] */
  esp -= 4; W32(esp, 0x8abe77u); SPILL(); f_4e2086(); if (g_unwind) return; /* Core!??KFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 8abe77: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8abe78: lea edx, [esp + 0xe0] */
  edx = (uint32_t)(esp + 0xe0u);
/* 8abe7f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8abe80: lea ecx, [esp + 0x68] */
  ecx = (uint32_t)(esp + 0x68u);
/* 8abe84: call dword ptr [0xcfa888] */
  esp -= 4; W32(esp, 0x8abe8au); SPILL(); f_4e24e6(); if (g_unwind) return; /* Core!?TransformVectorBy@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 8abe8a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8abe8c: mov dword ptr [esp + 0x60], ecx */
  W32((uint32_t)(esp + 0x60u), ecx);
/* 8abe90: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8abe93: mov ecx, dword ptr [edi + 0x3f0] */
  ecx = R32((uint32_t)(edi + 0x3f0u));
/* 8abe99: add ecx, 0x17c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8abe9f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8abea0: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 8abea6: mov dword ptr [esp + 0x68], edx */
  W32((uint32_t)(esp + 0x68u), edx);
/* 8abeaa: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8abead: lea edx, [esp + 0x228] */
  edx = (uint32_t)(esp + 0x228u);
/* 8abeb4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8abeb5: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8abeb8: mov dword ptr [esp + 0x70], eax */
  W32((uint32_t)(esp + 0x70u), eax);
/* 8abebc: call dword ptr [0xcfa1d0] */
  esp -= 4; W32(esp, 0x8abec2u); SPILL(); f_4e2086(); if (g_unwind) return; /* Core!??KFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 8abec2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8abec3: lea eax, [esp + 0xe0] */
  eax = (uint32_t)(esp + 0xe0u);
/* 8abeca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8abecb: lea ecx, [esp + 0x7c] */
  ecx = (uint32_t)(esp + 0x7cu);
/* 8abecf: call dword ptr [0xcfa888] */
  esp -= 4; W32(esp, 0x8abed5u); SPILL(); f_4e24e6(); if (g_unwind) return; /* Core!?TransformVectorBy@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 8abed5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8abed7: mov dword ptr [esp + 0x74], ecx */
  W32((uint32_t)(esp + 0x74u), ecx);
/* 8abedb: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8abede: mov ecx, dword ptr [edi + 0x3f0] */
  ecx = R32((uint32_t)(edi + 0x3f0u));
/* 8abee4: add ecx, 0x17c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8abeea: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8abeeb: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 8abef1: mov dword ptr [esp + 0x7c], edx */
  W32((uint32_t)(esp + 0x7cu), edx);
/* 8abef5: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8abef8: lea edx, [esp + 0x228] */
  edx = (uint32_t)(esp + 0x228u);
/* 8abeff: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8abf00: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8abf03: mov dword ptr [esp + 0x84], eax */
  W32((uint32_t)(esp + 0x84u), eax);
/* 8abf0a: call dword ptr [0xcfa1d0] */
  esp -= 4; W32(esp, 0x8abf10u); SPILL(); f_4e2086(); if (g_unwind) return; /* Core!??KFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 8abf10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8abf11: lea eax, [esp + 0xe0] */
  eax = (uint32_t)(esp + 0xe0u);
/* 8abf18: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8abf19: lea ecx, [esp + 0xb4] */
  ecx = (uint32_t)(esp + 0xb4u);
/* 8abf20: call dword ptr [0xcfa888] */
  esp -= 4; W32(esp, 0x8abf26u); SPILL(); f_4e24e6(); if (g_unwind) return; /* Core!?TransformVectorBy@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 8abf26: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8abf28: mov dword ptr [esp + 0xac], ecx */
  W32((uint32_t)(esp + 0xacu), ecx);
/* 8abf2f: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8abf32: mov dword ptr [esp + 0xb0], edx */
  W32((uint32_t)(esp + 0xb0u), edx);
/* 8abf39: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8abf3c: mov dword ptr [esp + 0xb4], eax */
  W32((uint32_t)(esp + 0xb4u), eax);
L_8abf43: /* 8abf43: lea eax, [edi + 0x4a4] */
  eax = (uint32_t)(edi + 0x4a4u);
/* 8abf49: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8abf4b: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8abf4e: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8abf51: mov dword ptr [esp + 0xcc], eax */
  W32((uint32_t)(esp + 0xccu), eax);
/* 8abf58: cmp byte ptr [edi + 0x210], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x210u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8abf5f: mov dword ptr [esp + 0xc4], ecx */
  W32((uint32_t)(esp + 0xc4u), ecx);
/* 8abf66: mov dword ptr [esp + 0xc8], edx */
  W32((uint32_t)(esp + 0xc8u), edx);
/* 8abf6d: jne 0x8abfc9 */
  if (!zf) goto L_8abfc9;
L_8abf6f: /* 8abf6f: mov eax, dword ptr [edi + 0x3f0] */
  eax = R32((uint32_t)(edi + 0x3f0u));
/* 8abf75: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8abf77: je 0x8abfc9 */
  if (zf) goto L_8abfc9;
L_8abf79: /* 8abf79: add eax, 0x17c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8abf7e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8abf7f: lea ecx, [esp + 0x228] */
  ecx = (uint32_t)(esp + 0x228u);
/* 8abf86: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8abf87: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 8abf8d: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8abf90: call dword ptr [0xcfa2d0] */
  esp -= 4; W32(esp, 0x8abf96u); SPILL(); f_4e1bd1(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 8abf96: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8abf97: lea edx, [esp + 0xe0] */
  edx = (uint32_t)(esp + 0xe0u);
/* 8abf9e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8abf9f: lea ecx, [esp + 0xcc] */
  ecx = (uint32_t)(esp + 0xccu);
/* 8abfa6: call dword ptr [0xcfa888] */
  esp -= 4; W32(esp, 0x8abfacu); SPILL(); f_4e24e6(); if (g_unwind) return; /* Core!?TransformVectorBy@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 8abfac: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8abfae: mov dword ptr [esp + 0xc4], ecx */
  W32((uint32_t)(esp + 0xc4u), ecx);
/* 8abfb5: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8abfb8: mov dword ptr [esp + 0xc8], edx */
  W32((uint32_t)(esp + 0xc8u), edx);
/* 8abfbf: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8abfc2: mov dword ptr [esp + 0xcc], eax */
  W32((uint32_t)(esp + 0xccu), eax);
L_8abfc9: /* 8abfc9: lea ecx, [esp + 0x60] */
  ecx = (uint32_t)(esp + 0x60u);
/* 8abfcd: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x8abfd3u); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 8abfd3: lea ecx, [esp + 0x74] */
  ecx = (uint32_t)(esp + 0x74u);
/* 8abfd7: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x8abfddu); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 8abfdd: lea ecx, [esp + 0xac] */
  ecx = (uint32_t)(esp + 0xacu);
/* 8abfe4: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x8abfeau); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 8abfea: cmp dword ptr [edi + 0x40c], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x40cu))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8abff0: mov ebx, dword ptr [esp + 0x2b8] */
  ebx = R32((uint32_t)(esp + 0x2b8u));
/* 8abff7: mov dword ptr [esp + 0xe8], ebp */
  W32((uint32_t)(esp + 0xe8u), ebp);
/* 8abffe: jle 0x8ace2b */
  if ((zf || sf != of)) goto L_8ace2b;
L_8ac004: /* 8ac004: mov dword ptr [esp + 0x9c], ebp */
  W32((uint32_t)(esp + 0x9cu), ebp);
/* 8ac00b: jmp 0x8ac010 */
  goto L_8ac010;
L_8ac010: /* 8ac010: mov esi, dword ptr [edi + 0x3fc] */
  esi = R32((uint32_t)(edi + 0x3fcu));
/* 8ac016: mov ecx, dword ptr [esp + 0x9c] */
  ecx = R32((uint32_t)(esp + 0x9cu));
/* 8ac01d: mov al, byte ptr [esi + ecx + 0xbc] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + ecx + 0xbcu))) & 0xffu);
/* 8ac024: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8ac026: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8ac028: je 0x8acdfa */
  if (zf) goto L_8acdfa;
L_8ac02e: /* 8ac02e: fld dword ptr [esi + 0xb0] */
  { double v = F32((uint32_t)(esi + 0xb0u)); FPUSH(v); }
/* 8ac034: mov ecx, dword ptr [esi + 0xa8] */
  ecx = R32((uint32_t)(esi + 0xa8u));
/* 8ac03a: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8ac040: mov edx, dword ptr [esi + 0xac] */
  edx = R32((uint32_t)(esi + 0xacu));
/* 8ac046: mov dword ptr [esp + 0x58], ecx */
  W32((uint32_t)(esp + 0x58u), ecx);
/* 8ac04a: mov dword ptr [esp + 0x90], edx */
  W32((uint32_t)(esp + 0x90u), edx);
/* 8ac051: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ac053: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8ac056: jnp 0x8ac074 */
  if (!pf) goto L_8ac074;
L_8ac058: /* 8ac058: fld dword ptr [esp + 0x90] */
  { double v = F32((uint32_t)(esp + 0x90u)); FPUSH(v); }
/* 8ac05f: fdiv dword ptr [esi + 0xb0] */
  ST0 = ST0 / (F32((uint32_t)(esi + 0xb0u)));
/* 8ac065: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 8ac06b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ac06d: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8ac070: jp 0x8ac0ac */
  if (pf) goto L_8ac0ac;
L_8ac072: /* 8ac072: fstp st(0) */
  STI(0) = ST0; FPOP();
L_8ac074: /* 8ac074: mov dword ptr [esp + 0x44], 0 */
  W32((uint32_t)(esp + 0x44u), 0x0u);
L_8ac07c: /* 8ac07c: mov al, byte ptr [edi + 0x494] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x494u))) & 0xffu);
/* 8ac082: cmp al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8ac084: jne 0x8ac0cb */
  if (!zf) goto L_8ac0cb;
L_8ac086: /* 8ac086: mov eax, dword ptr [esp + 0xc4] */
  eax = R32((uint32_t)(esp + 0xc4u));
/* 8ac08d: mov ecx, dword ptr [esp + 0xc8] */
  ecx = R32((uint32_t)(esp + 0xc8u));
/* 8ac094: mov edx, dword ptr [esp + 0xcc] */
  edx = R32((uint32_t)(esp + 0xccu));
/* 8ac09b: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 8ac09f: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 8ac0a3: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 8ac0a7: jmp 0x8ac2a0 */
  goto L_8ac2a0;
L_8ac0ac: /* 8ac0ac: fcom dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
/* 8ac0b2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ac0b4: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8ac0b7: jp 0x8ac0bf */
  if (pf) goto L_8ac0bf;
L_8ac0b9: /* 8ac0b9: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 8ac0bd: jmp 0x8ac07c */
  goto L_8ac07c;
L_8ac0bf: /* 8ac0bf: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8ac0c1: mov dword ptr [esp + 0x44], 0x3f800000 */
  W32((uint32_t)(esp + 0x44u), 0x3f800000u);
/* 8ac0c9: jmp 0x8ac07c */
  goto L_8ac07c;
L_8ac0cb: /* 8ac0cb: cmp al, 3 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8ac0cd: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8ac0cf: fsub dword ptr [esi + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xcu)));
/* 8ac0d2: jne 0x8ac125 */
  if (!zf) goto L_8ac125;
L_8ac0d4: /* 8ac0d4: fstp dword ptr [esp + 0x1a0] */
  WF32((uint32_t)(esp + 0x1a0u), ST0); FPOP();
/* 8ac0db: mov eax, dword ptr [esp + 0x1a0] */
  eax = R32((uint32_t)(esp + 0x1a0u));
/* 8ac0e2: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8ac0e5: fsub dword ptr [esi + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x10u)));
/* 8ac0e8: fstp dword ptr [esp + 0x1a4] */
  WF32((uint32_t)(esp + 0x1a4u), ST0); FPOP();
/* 8ac0ef: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8ac0f2: mov ecx, dword ptr [esp + 0x1a4] */
  ecx = R32((uint32_t)(esp + 0x1a4u));
/* 8ac0f9: fsub dword ptr [esi + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x14u)));
/* 8ac0fc: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 8ac100: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 8ac104: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 8ac108: fstp dword ptr [esp + 0x1a8] */
  WF32((uint32_t)(esp + 0x1a8u), ST0); FPOP();
/* 8ac10f: mov edx, dword ptr [esp + 0x1a8] */
  edx = R32((uint32_t)(esp + 0x1a8u));
/* 8ac116: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 8ac11a: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x8ac120u); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 8ac120: jmp 0x8ac2a0 */
  goto L_8ac2a0;
L_8ac125: /* 8ac125: fstp dword ptr [esp + 0x17c] */
  WF32((uint32_t)(esp + 0x17cu), ST0); FPOP();
/* 8ac12c: mov eax, dword ptr [esp + 0x17c] */
  eax = R32((uint32_t)(esp + 0x17cu));
/* 8ac133: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8ac136: fsub dword ptr [esi + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x10u)));
/* 8ac139: fstp dword ptr [esp + 0x180] */
  WF32((uint32_t)(esp + 0x180u), ST0); FPOP();
/* 8ac140: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8ac143: mov ecx, dword ptr [esp + 0x180] */
  ecx = R32((uint32_t)(esp + 0x180u));
/* 8ac14a: fsub dword ptr [esi + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x14u)));
/* 8ac14d: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 8ac151: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 8ac155: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 8ac159: fstp dword ptr [esp + 0x184] */
  WF32((uint32_t)(esp + 0x184u), ST0); FPOP();
/* 8ac160: mov edx, dword ptr [esp + 0x184] */
  edx = R32((uint32_t)(esp + 0x184u));
/* 8ac167: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 8ac16b: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x8ac171u); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 8ac171: mov al, byte ptr [edi + 0x494] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x494u))) & 0xffu);
/* 8ac177: cmp al, 5 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8ac179: je 0x8ac21f */
  if (zf) goto L_8ac21f;
L_8ac17f: /* 8ac17f: cmp al, 6 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x6u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8ac181: je 0x8ac21f */
  if (zf) goto L_8ac21f;
L_8ac187: /* 8ac187: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8ac189: fsub dword ptr [esp + 0xb8] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0xb8u)));
/* 8ac190: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8ac193: fsub dword ptr [esp + 0xbc] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0xbcu)));
/* 8ac19a: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8ac19d: fsub dword ptr [esp + 0xc0] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0xc0u)));
/* 8ac1a4: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 8ac1a8: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ac1aa: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 8ac1ae: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 8ac1b0: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ac1b2: fstp dword ptr [esp + 0x11c] */
  WF32((uint32_t)(esp + 0x11cu), ST0); FPOP();
/* 8ac1b9: mov eax, dword ptr [esp + 0x11c] */
  eax = R32((uint32_t)(esp + 0x11cu));
/* 8ac1c0: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 8ac1c4: mov dword ptr [esp + 0x84], eax */
  W32((uint32_t)(esp + 0x84u), eax);
/* 8ac1cb: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 8ac1cd: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8ac1cf: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 8ac1d3: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ac1d5: fstp dword ptr [esp + 0x120] */
  WF32((uint32_t)(esp + 0x120u), ST0); FPOP();
/* 8ac1dc: mov ecx, dword ptr [esp + 0x120] */
  ecx = R32((uint32_t)(esp + 0x120u));
/* 8ac1e3: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 8ac1e7: mov dword ptr [esp + 0x88], ecx */
  W32((uint32_t)(esp + 0x88u), ecx);
/* 8ac1ee: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 8ac1f2: lea ecx, [esp + 0x84] */
  ecx = (uint32_t)(esp + 0x84u);
/* 8ac1f9: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8ac1fb: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ac1fd: fstp dword ptr [esp + 0x124] */
  WF32((uint32_t)(esp + 0x124u), ST0); FPOP();
/* 8ac204: mov edx, dword ptr [esp + 0x124] */
  edx = R32((uint32_t)(esp + 0x124u));
/* 8ac20b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8ac20d: mov dword ptr [esp + 0x8c], edx */
  W32((uint32_t)(esp + 0x8cu), edx);
/* 8ac214: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x8ac21au); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 8ac21a: jmp 0x8ac2a0 */
  goto L_8ac2a0;
L_8ac21f: /* 8ac21f: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 8ac223: fmul dword ptr [edi + 0x4ac] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4acu)));
/* 8ac229: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 8ac22d: fmul dword ptr [edi + 0x4a8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4a8u)));
/* 8ac233: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ac235: fstp dword ptr [esp + 0x194] */
  WF32((uint32_t)(esp + 0x194u), ST0); FPOP();
/* 8ac23c: mov eax, dword ptr [esp + 0x194] */
  eax = R32((uint32_t)(esp + 0x194u));
/* 8ac243: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 8ac247: mov dword ptr [esp + 0x84], eax */
  W32((uint32_t)(esp + 0x84u), eax);
/* 8ac24e: fmul dword ptr [edi + 0x4a4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4a4u)));
/* 8ac254: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 8ac258: fmul dword ptr [edi + 0x4ac] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4acu)));
/* 8ac25e: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ac260: fstp dword ptr [esp + 0x198] */
  WF32((uint32_t)(esp + 0x198u), ST0); FPOP();
/* 8ac267: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 8ac26b: mov ecx, dword ptr [esp + 0x198] */
  ecx = R32((uint32_t)(esp + 0x198u));
/* 8ac272: fmul dword ptr [edi + 0x4a8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4a8u)));
/* 8ac278: mov dword ptr [esp + 0x88], ecx */
  W32((uint32_t)(esp + 0x88u), ecx);
/* 8ac27f: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 8ac283: fmul dword ptr [edi + 0x4a4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4a4u)));
/* 8ac289: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ac28b: fstp dword ptr [esp + 0x19c] */
  WF32((uint32_t)(esp + 0x19cu), ST0); FPOP();
/* 8ac292: mov edx, dword ptr [esp + 0x19c] */
  edx = R32((uint32_t)(esp + 0x19cu));
/* 8ac299: mov dword ptr [esp + 0x8c], edx */
  W32((uint32_t)(esp + 0x8cu), edx);
L_8ac2a0: /* 8ac2a0: mov eax, dword ptr [esp + 0xac] */
  eax = R32((uint32_t)(esp + 0xacu));
/* 8ac2a7: mov ecx, dword ptr [esp + 0xb0] */
  ecx = R32((uint32_t)(esp + 0xb0u));
/* 8ac2ae: mov edx, dword ptr [esp + 0xb4] */
  edx = R32((uint32_t)(esp + 0xb4u));
/* 8ac2b5: mov dword ptr [esp + 0xec], eax */
  W32((uint32_t)(esp + 0xecu), eax);
/* 8ac2bc: movzx eax, byte ptr [edi + 0x494] */
  eax = (uint32_t)(R8((uint32_t)(edi + 0x494u)));
/* 8ac2c3: cmp eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8ac2c6: mov dword ptr [esp + 0xf0], ecx */
  W32((uint32_t)(esp + 0xf0u), ecx);
/* 8ac2cd: mov dword ptr [esp + 0xf4], edx */
  W32((uint32_t)(esp + 0xf4u), edx);
/* 8ac2d4: ja 0x8ac709 */
  if ((!cf && !zf)) goto L_8ac709;
L_8ac2da: /* 8ac2da: jmp dword ptr [eax*4 + 0x8ace3c] */
  switch (R32((uint32_t)(eax*4 + 0x8ace3cu))) {
    case 0x8ac2e1u: goto L_8ac2e1;
    case 0x8ac380u: goto L_8ac380;
    case 0x8ac41fu: goto L_8ac41f;
    case 0x8ac4c7u: goto L_8ac4c7;
    case 0x8ac56fu: goto L_8ac56f;
    default: guest_badjump(0x8ac2da, R32((uint32_t)(eax*4 + 0x8ace3cu))); return;
  }
L_8ac2e1: /* 8ac2e1: fld dword ptr [esi + 0x6c] */
  { double v = F32((uint32_t)(esi + 0x6cu)); FPUSH(v); }
/* 8ac2e4: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 8ac2e8: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ac2ea: fstp dword ptr [esp + 0x134] */
  WF32((uint32_t)(esp + 0x134u), ST0); FPOP();
/* 8ac2f1: mov eax, dword ptr [esp + 0x134] */
  eax = R32((uint32_t)(esp + 0x134u));
/* 8ac2f8: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 8ac2fc: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 8ac300: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ac302: fstp dword ptr [esp + 0x138] */
  WF32((uint32_t)(esp + 0x138u), ST0); FPOP();
/* 8ac309: fld dword ptr [esp + 0x68] */
  { double v = F32((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* 8ac30d: mov ecx, dword ptr [esp + 0x138] */
  ecx = R32((uint32_t)(esp + 0x138u));
/* 8ac314: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ac316: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 8ac31a: fstp dword ptr [esp + 0x13c] */
  WF32((uint32_t)(esp + 0x13cu), ST0); FPOP();
/* 8ac321: mov edx, dword ptr [esp + 0x13c] */
  edx = R32((uint32_t)(esp + 0x13cu));
/* 8ac328: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8ac32a: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 8ac32e: fld dword ptr [esi + 0x6c] */
  { double v = F32((uint32_t)(esi + 0x6cu)); FPUSH(v); }
/* 8ac331: fld dword ptr [esp + 0x74] */
  { double v = F32((uint32_t)(esp + 0x74u)); FPUSH(v); }
/* 8ac335: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ac337: fstp dword ptr [esp + 0x1ac] */
  WF32((uint32_t)(esp + 0x1acu), ST0); FPOP();
/* 8ac33e: mov eax, dword ptr [esp + 0x1ac] */
  eax = R32((uint32_t)(esp + 0x1acu));
/* 8ac345: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 8ac349: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 8ac34d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ac34f: fstp dword ptr [esp + 0x1b0] */
  WF32((uint32_t)(esp + 0x1b0u), ST0); FPOP();
/* 8ac356: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 8ac35a: mov ecx, dword ptr [esp + 0x1b0] */
  ecx = R32((uint32_t)(esp + 0x1b0u));
/* 8ac361: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ac363: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 8ac367: fstp dword ptr [esp + 0x1b4] */
  WF32((uint32_t)(esp + 0x1b4u), ST0); FPOP();
/* 8ac36e: mov edx, dword ptr [esp + 0x1b4] */
  edx = R32((uint32_t)(esp + 0x1b4u));
/* 8ac375: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8ac377: mov dword ptr [esp + 0x2c], edx */
  W32((uint32_t)(esp + 0x2cu), edx);
/* 8ac37b: jmp 0x8ac78d */
  goto L_8ac78d;
L_8ac380: /* 8ac380: fld dword ptr [esi + 0x70] */
  { double v = F32((uint32_t)(esi + 0x70u)); FPUSH(v); }
/* 8ac383: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 8ac387: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ac389: fstp dword ptr [esp + 0x14c] */
  WF32((uint32_t)(esp + 0x14cu), ST0); FPOP();
/* 8ac390: mov eax, dword ptr [esp + 0x14c] */
  eax = R32((uint32_t)(esp + 0x14cu));
/* 8ac397: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 8ac39b: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 8ac39f: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ac3a1: fstp dword ptr [esp + 0x150] */
  WF32((uint32_t)(esp + 0x150u), ST0); FPOP();
/* 8ac3a8: fld dword ptr [esp + 0x68] */
  { double v = F32((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* 8ac3ac: mov ecx, dword ptr [esp + 0x150] */
  ecx = R32((uint32_t)(esp + 0x150u));
/* 8ac3b3: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ac3b5: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 8ac3b9: fstp dword ptr [esp + 0x154] */
  WF32((uint32_t)(esp + 0x154u), ST0); FPOP();
/* 8ac3c0: mov edx, dword ptr [esp + 0x154] */
  edx = R32((uint32_t)(esp + 0x154u));
/* 8ac3c7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8ac3c9: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 8ac3cd: fld dword ptr [esi + 0x6c] */
  { double v = F32((uint32_t)(esi + 0x6cu)); FPUSH(v); }
/* 8ac3d0: fld dword ptr [esp + 0x74] */
  { double v = F32((uint32_t)(esp + 0x74u)); FPUSH(v); }
/* 8ac3d4: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ac3d6: fstp dword ptr [esp + 0x1c4] */
  WF32((uint32_t)(esp + 0x1c4u), ST0); FPOP();
/* 8ac3dd: mov eax, dword ptr [esp + 0x1c4] */
  eax = R32((uint32_t)(esp + 0x1c4u));
/* 8ac3e4: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 8ac3e8: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 8ac3ec: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ac3ee: fstp dword ptr [esp + 0x1c8] */
  WF32((uint32_t)(esp + 0x1c8u), ST0); FPOP();
/* 8ac3f5: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 8ac3f9: mov ecx, dword ptr [esp + 0x1c8] */
  ecx = R32((uint32_t)(esp + 0x1c8u));
/* 8ac400: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ac402: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 8ac406: fstp dword ptr [esp + 0x1cc] */
  WF32((uint32_t)(esp + 0x1ccu), ST0); FPOP();
/* 8ac40d: mov edx, dword ptr [esp + 0x1cc] */
  edx = R32((uint32_t)(esp + 0x1ccu));
/* 8ac414: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8ac416: mov dword ptr [esp + 0x2c], edx */
  W32((uint32_t)(esp + 0x2cu), edx);
/* 8ac41a: jmp 0x8ac78d */
  goto L_8ac78d;
L_8ac41f: /* 8ac41f: fld dword ptr [esi + 0x70] */
  { double v = F32((uint32_t)(esi + 0x70u)); FPUSH(v); }
/* 8ac422: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 8ac426: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ac428: fstp dword ptr [esp + 0x1dc] */
  WF32((uint32_t)(esp + 0x1dcu), ST0); FPOP();
/* 8ac42f: mov eax, dword ptr [esp + 0x1dc] */
  eax = R32((uint32_t)(esp + 0x1dcu));
/* 8ac436: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 8ac43a: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 8ac43e: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ac440: fstp dword ptr [esp + 0x1e0] */
  WF32((uint32_t)(esp + 0x1e0u), ST0); FPOP();
/* 8ac447: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 8ac44b: mov ecx, dword ptr [esp + 0x1e0] */
  ecx = R32((uint32_t)(esp + 0x1e0u));
/* 8ac452: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ac454: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 8ac458: fstp dword ptr [esp + 0x1e4] */
  WF32((uint32_t)(esp + 0x1e4u), ST0); FPOP();
/* 8ac45f: mov edx, dword ptr [esp + 0x1e4] */
  edx = R32((uint32_t)(esp + 0x1e4u));
/* 8ac466: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8ac468: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 8ac46c: fld dword ptr [esi + 0x6c] */
  { double v = F32((uint32_t)(esi + 0x6cu)); FPUSH(v); }
/* 8ac46f: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 8ac476: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ac478: fstp dword ptr [esp + 0x170] */
  WF32((uint32_t)(esp + 0x170u), ST0); FPOP();
/* 8ac47f: mov eax, dword ptr [esp + 0x170] */
  eax = R32((uint32_t)(esp + 0x170u));
/* 8ac486: fld dword ptr [esp + 0x88] */
  { double v = F32((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 8ac48d: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 8ac491: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ac493: fstp dword ptr [esp + 0x174] */
  WF32((uint32_t)(esp + 0x174u), ST0); FPOP();
/* 8ac49a: fld dword ptr [esp + 0x8c] */
  { double v = F32((uint32_t)(esp + 0x8cu)); FPUSH(v); }
/* 8ac4a1: mov ecx, dword ptr [esp + 0x174] */
  ecx = R32((uint32_t)(esp + 0x174u));
/* 8ac4a8: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ac4aa: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 8ac4ae: fstp dword ptr [esp + 0x178] */
  WF32((uint32_t)(esp + 0x178u), ST0); FPOP();
/* 8ac4b5: mov edx, dword ptr [esp + 0x178] */
  edx = R32((uint32_t)(esp + 0x178u));
/* 8ac4bc: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8ac4be: mov dword ptr [esp + 0x2c], edx */
  W32((uint32_t)(esp + 0x2cu), edx);
/* 8ac4c2: jmp 0x8ac78d */
  goto L_8ac78d;
L_8ac4c7: /* 8ac4c7: fld dword ptr [esi + 0x70] */
  { double v = F32((uint32_t)(esi + 0x70u)); FPUSH(v); }
/* 8ac4ca: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 8ac4d1: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ac4d3: fstp dword ptr [esp + 0x1d0] */
  WF32((uint32_t)(esp + 0x1d0u), ST0); FPOP();
/* 8ac4da: mov eax, dword ptr [esp + 0x1d0] */
  eax = R32((uint32_t)(esp + 0x1d0u));
/* 8ac4e1: fld dword ptr [esp + 0x88] */
  { double v = F32((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 8ac4e8: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 8ac4ec: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ac4ee: fstp dword ptr [esp + 0x1d4] */
  WF32((uint32_t)(esp + 0x1d4u), ST0); FPOP();
/* 8ac4f5: fld dword ptr [esp + 0x8c] */
  { double v = F32((uint32_t)(esp + 0x8cu)); FPUSH(v); }
/* 8ac4fc: mov ecx, dword ptr [esp + 0x1d4] */
  ecx = R32((uint32_t)(esp + 0x1d4u));
/* 8ac503: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ac505: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 8ac509: fstp dword ptr [esp + 0x1d8] */
  WF32((uint32_t)(esp + 0x1d8u), ST0); FPOP();
/* 8ac510: mov edx, dword ptr [esp + 0x1d8] */
  edx = R32((uint32_t)(esp + 0x1d8u));
/* 8ac517: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8ac519: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 8ac51d: fld dword ptr [esi + 0x6c] */
  { double v = F32((uint32_t)(esi + 0x6cu)); FPUSH(v); }
/* 8ac520: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 8ac524: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ac526: fstp dword ptr [esp + 0x188] */
  WF32((uint32_t)(esp + 0x188u), ST0); FPOP();
/* 8ac52d: mov eax, dword ptr [esp + 0x188] */
  eax = R32((uint32_t)(esp + 0x188u));
/* 8ac534: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 8ac538: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 8ac53c: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ac53e: fstp dword ptr [esp + 0x18c] */
  WF32((uint32_t)(esp + 0x18cu), ST0); FPOP();
/* 8ac545: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 8ac549: mov ecx, dword ptr [esp + 0x18c] */
  ecx = R32((uint32_t)(esp + 0x18cu));
/* 8ac550: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ac552: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 8ac556: fstp dword ptr [esp + 0x190] */
  WF32((uint32_t)(esp + 0x190u), ST0); FPOP();
/* 8ac55d: mov edx, dword ptr [esp + 0x190] */
  edx = R32((uint32_t)(esp + 0x190u));
/* 8ac564: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8ac566: mov dword ptr [esp + 0x2c], edx */
  W32((uint32_t)(esp + 0x2cu), edx);
/* 8ac56a: jmp 0x8ac78d */
  goto L_8ac78d;
L_8ac56f: /* 8ac56f: lea eax, [esp + 0x254] */
  eax = (uint32_t)(esp + 0x254u);
/* 8ac576: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ac577: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 8ac57b: call dword ptr [0xcfabc4] */
  esp -= 4; W32(esp, 0x8ac581u); SPILL(); f_4e1f2d(); if (g_unwind) return; /* Core!?GetNonParallel@FVector@@QAE?AV1@XZ */ RELOAD();
/* 8ac581: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 8ac585: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 8ac588: mov ecx, dword ptr [esi + 0x70] */
  ecx = R32((uint32_t)(esi + 0x70u));
/* 8ac58b: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 8ac58f: mov dword ptr [esp + 0x94], ecx */
  W32((uint32_t)(esp + 0x94u), ecx);
/* 8ac596: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 8ac599: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ac59b: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 8ac59f: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 8ac5a1: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 8ac5a5: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 8ac5a8: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ac5aa: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 8ac5ae: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 8ac5b1: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 8ac5b5: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 8ac5b7: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ac5b9: fstp dword ptr [esp + 0x220] */
  WF32((uint32_t)(esp + 0x220u), ST0); FPOP();
/* 8ac5c0: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8ac5c2: fmul dword ptr [esp + 0x94] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x94u)));
/* 8ac5c9: fstp dword ptr [esp + 0xa0] */
  WF32((uint32_t)(esp + 0xa0u), ST0); FPOP();
/* 8ac5d0: mov edx, dword ptr [esp + 0xa0] */
  edx = R32((uint32_t)(esp + 0xa0u));
/* 8ac5d7: mov dword ptr [esp + 0x38], edx */
  W32((uint32_t)(esp + 0x38u), edx);
/* 8ac5db: fmul dword ptr [esp + 0x94] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x94u)));
/* 8ac5e2: fstp dword ptr [esp + 0xa4] */
  WF32((uint32_t)(esp + 0xa4u), ST0); FPOP();
/* 8ac5e9: fld dword ptr [esp + 0x220] */
  { double v = F32((uint32_t)(esp + 0x220u)); FPUSH(v); }
/* 8ac5f0: mov eax, dword ptr [esp + 0xa4] */
  eax = R32((uint32_t)(esp + 0xa4u));
/* 8ac5f7: fmul dword ptr [esp + 0x94] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x94u)));
/* 8ac5fe: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 8ac602: lea eax, [esp + 0x26c] */
  eax = (uint32_t)(esp + 0x26cu);
/* 8ac609: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ac60a: fstp dword ptr [esp + 0xac] */
  WF32((uint32_t)(esp + 0xacu), ST0); FPOP();
/* 8ac611: fld dword ptr [esp + 0xac] */
  { double v = F32((uint32_t)(esp + 0xacu)); FPUSH(v); }
/* 8ac618: mov ecx, dword ptr [esp + 0xac] */
  ecx = R32((uint32_t)(esp + 0xacu));
/* 8ac61f: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 8ac623: mov dword ptr [esp + 0x44], ecx */
  W32((uint32_t)(esp + 0x44u), ecx);
/* 8ac627: fld dword ptr [esp + 0xa8] */
  { double v = F32((uint32_t)(esp + 0xa8u)); FPUSH(v); }
/* 8ac62e: mov edx, dword ptr [esi + 0x6c] */
  edx = R32((uint32_t)(esi + 0x6cu));
/* 8ac631: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 8ac635: lea ecx, [esp + 0x1ec] */
  ecx = (uint32_t)(esp + 0x1ecu);
/* 8ac63c: mov dword ptr [esp + 0x9c], edx */
  W32((uint32_t)(esp + 0x9cu), edx);
/* 8ac643: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ac645: fstp dword ptr [esp + 0x1ec] */
  WF32((uint32_t)(esp + 0x1ecu), ST0); FPOP();
/* 8ac64c: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 8ac650: fmul dword ptr [esp + 0xa4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xa4u)));
/* 8ac657: fld dword ptr [esp + 0xac] */
  { double v = F32((uint32_t)(esp + 0xacu)); FPUSH(v); }
/* 8ac65e: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 8ac662: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ac664: fstp dword ptr [esp + 0x1f0] */
  WF32((uint32_t)(esp + 0x1f0u), ST0); FPOP();
/* 8ac66b: fld dword ptr [esp + 0xa8] */
  { double v = F32((uint32_t)(esp + 0xa8u)); FPUSH(v); }
/* 8ac672: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 8ac676: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 8ac67a: fmul dword ptr [esp + 0xa4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xa4u)));
/* 8ac681: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ac683: fstp dword ptr [esp + 0x1f4] */
  WF32((uint32_t)(esp + 0x1f4u), ST0); FPOP();
/* 8ac68a: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x8ac690u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 8ac690: fld dword ptr [esp + 0x98] */
  { double v = F32((uint32_t)(esp + 0x98u)); FPUSH(v); }
/* 8ac697: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 8ac699: fstp dword ptr [esp + 0x1b8] */
  WF32((uint32_t)(esp + 0x1b8u), ST0); FPOP();
/* 8ac6a0: mov ecx, dword ptr [esp + 0x1b8] */
  ecx = R32((uint32_t)(esp + 0x1b8u));
/* 8ac6a7: fld dword ptr [esp + 0x98] */
  { double v = F32((uint32_t)(esp + 0x98u)); FPUSH(v); }
/* 8ac6ae: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 8ac6b1: fstp dword ptr [esp + 0x1bc] */
  WF32((uint32_t)(esp + 0x1bcu), ST0); FPOP();
/* 8ac6b8: fld dword ptr [esp + 0x98] */
  { double v = F32((uint32_t)(esp + 0x98u)); FPUSH(v); }
/* 8ac6bf: mov edx, dword ptr [esp + 0x1bc] */
  edx = R32((uint32_t)(esp + 0x1bcu));
/* 8ac6c6: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 8ac6c9: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 8ac6cd: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 8ac6d1: fstp dword ptr [esp + 0x1c0] */
  WF32((uint32_t)(esp + 0x1c0u), ST0); FPOP();
/* 8ac6d8: mov eax, dword ptr [esp + 0x1c0] */
  eax = R32((uint32_t)(esp + 0x1c0u));
/* 8ac6df: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8ac6e3: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 8ac6e7: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 8ac6eb: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 8ac6ef: mov dword ptr [esp + 0xec], ecx */
  W32((uint32_t)(esp + 0xecu), ecx);
/* 8ac6f6: mov dword ptr [esp + 0xf0], edx */
  W32((uint32_t)(esp + 0xf0u), edx);
/* 8ac6fd: mov dword ptr [esp + 0xf4], eax */
  W32((uint32_t)(esp + 0xf4u), eax);
/* 8ac704: jmp 0x8ac78d */
  goto L_8ac78d;
L_8ac709: /* 8ac709: mov dword ptr [esp + 0x158], 0 */
  W32((uint32_t)(esp + 0x158u), 0x0u);
/* 8ac714: mov ecx, dword ptr [esp + 0x158] */
  ecx = R32((uint32_t)(esp + 0x158u));
/* 8ac71b: mov dword ptr [esp + 0x15c], 0 */
  W32((uint32_t)(esp + 0x15cu), 0x0u);
/* 8ac726: mov edx, dword ptr [esp + 0x15c] */
  edx = R32((uint32_t)(esp + 0x15cu));
/* 8ac72d: mov dword ptr [esp + 0x160], 0 */
  W32((uint32_t)(esp + 0x160u), 0x0u);
/* 8ac738: mov eax, dword ptr [esp + 0x160] */
  eax = R32((uint32_t)(esp + 0x160u));
/* 8ac73f: mov dword ptr [esp + 0x38], ecx */
  W32((uint32_t)(esp + 0x38u), ecx);
/* 8ac743: mov dword ptr [esp + 0x3c], edx */
  W32((uint32_t)(esp + 0x3cu), edx);
/* 8ac747: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* 8ac74b: mov dword ptr [esp + 0x164], 0 */
  W32((uint32_t)(esp + 0x164u), 0x0u);
/* 8ac756: mov ecx, dword ptr [esp + 0x164] */
  ecx = R32((uint32_t)(esp + 0x164u));
/* 8ac75d: mov dword ptr [esp + 0x168], 0 */
  W32((uint32_t)(esp + 0x168u), 0x0u);
/* 8ac768: mov edx, dword ptr [esp + 0x168] */
  edx = R32((uint32_t)(esp + 0x168u));
/* 8ac76f: mov dword ptr [esp + 0x16c], 0 */
  W32((uint32_t)(esp + 0x16cu), 0x0u);
/* 8ac77a: mov eax, dword ptr [esp + 0x16c] */
  eax = R32((uint32_t)(esp + 0x16cu));
/* 8ac781: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 8ac785: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 8ac789: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
L_8ac78d: /* 8ac78d: test byte ptr [edi + 0x214], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x214u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8ac794: je 0x8ac847 */
  if (zf) goto L_8ac847;
L_8ac79a: /* 8ac79a: fld dword ptr [esi + 0x30] */
  { double v = F32((uint32_t)(esi + 0x30u)); FPUSH(v); }
/* 8ac79d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ac79e: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8ac7a4: fld dword ptr [esp + 0x94] */
  { double v = F32((uint32_t)(esp + 0x94u)); FPUSH(v); }
/* 8ac7ab: fmul dword ptr [esi + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x30u)));
/* 8ac7ae: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ac7b0: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8ac7b3: jp 0x8ac7d2 */
  if (pf) goto L_8ac7d2;
L_8ac7b5: /* 8ac7b5: fsubr dword ptr [esi + 0x3c] */
  ST0 = (F32((uint32_t)(esi + 0x3cu))) - ST0;
/* 8ac7b8: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8ac7bb: call dword ptr [0xcfa5d8] */
  esp -= 4; W32(esp, 0x8ac7c1u); SPILL(); f_4e15aa(); if (g_unwind) return; /* Core!?appRound@@YAHM@Z */ RELOAD();
/* 8ac7c1: and eax, 0xffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8ac7c6: mov ebp, 0xffff */
  ebp = 0xffffu;
/* 8ac7cb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ac7ce: sub ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 8ac7d0: jmp 0x8ac7e9 */
  goto L_8ac7e9;
L_8ac7d2: /* 8ac7d2: fadd dword ptr [esi + 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x3cu)));
/* 8ac7d5: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8ac7d8: call dword ptr [0xcfa5d8] */
  esp -= 4; W32(esp, 0x8ac7deu); SPILL(); f_4e15aa(); if (g_unwind) return; /* Core!?appRound@@YAHM@Z */ RELOAD();
/* 8ac7de: mov ebp, eax */
  ebp = eax;
/* 8ac7e0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ac7e3: and ebp, 0xffff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
L_8ac7e9: /* 8ac7e9: lea ecx, [esp + 0xec] */
  ecx = (uint32_t)(esp + 0xecu);
/* 8ac7f0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ac7f1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8ac7f2: lea edx, [esp + 0x280] */
  edx = (uint32_t)(esp + 0x280u);
/* 8ac7f9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ac7fa: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 8ac7fe: call dword ptr [0xcfa648] */
  esp -= 4; W32(esp, 0x8ac804u); SPILL(); f_4e27b6(); if (g_unwind) return; /* Core!?RotateAngleAxis@FVector@@QBE?AV1@HABV1@@Z */ RELOAD();
/* 8ac804: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8ac806: mov dword ptr [esp + 0x38], ecx */
  W32((uint32_t)(esp + 0x38u), ecx);
/* 8ac80a: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8ac80d: lea ecx, [esp + 0xec] */
  ecx = (uint32_t)(esp + 0xecu);
/* 8ac814: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ac815: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 8ac819: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8ac81c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8ac81d: lea edx, [esp + 0x268] */
  edx = (uint32_t)(esp + 0x268u);
/* 8ac824: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ac825: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 8ac829: mov dword ptr [esp + 0x4c], eax */
  W32((uint32_t)(esp + 0x4cu), eax);
/* 8ac82d: call dword ptr [0xcfa648] */
  esp -= 4; W32(esp, 0x8ac833u); SPILL(); f_4e27b6(); if (g_unwind) return; /* Core!?RotateAngleAxis@FVector@@QBE?AV1@HABV1@@Z */ RELOAD();
/* 8ac833: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8ac835: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 8ac839: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8ac83c: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 8ac840: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8ac843: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
L_8ac847: /* 8ac847: mov edx, dword ptr [edi + 0x31c] */
  edx = R32((uint32_t)(edi + 0x31cu));
/* 8ac84d: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 8ac853: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ac855: mov eax, dword ptr [esi + 0xc0] */
  eax = R32((uint32_t)(esi + 0xc0u));
/* 8ac85b: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 8ac863: mov dword ptr [esp + 0x50], 0 */
  W32((uint32_t)(esp + 0x50u), 0x0u);
/* 8ac86b: mov dword ptr [esp + 0x48], 0 */
  W32((uint32_t)(esp + 0x48u), 0x0u);
/* 8ac873: mov dword ptr [esp + 0x5c], 0x3f800000 */
  W32((uint32_t)(esp + 0x5cu), 0x3f800000u);
/* 8ac87b: mov dword ptr [esp + 0x54], 0x3f800000 */
  W32((uint32_t)(esp + 0x54u), 0x3f800000u);
/* 8ac883: mov dword ptr [esp + 0x70], 0 */
  W32((uint32_t)(esp + 0x70u), 0x0u);
/* 8ac88b: mov dword ptr [esp + 0x80], 0x3f800000 */
  W32((uint32_t)(esp + 0x80u), 0x3f800000u);
/* 8ac896: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 8ac89a: je 0x8acb84 */
  if (zf) goto L_8acb84;
L_8ac8a0: /* 8ac8a0: mov ecx, dword ptr [edi + 0x320] */
  ecx = R32((uint32_t)(edi + 0x320u));
/* 8ac8a6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ac8a8: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
/* 8ac8ac: je 0x8acb84 */
  if (zf) goto L_8acb84;
L_8ac8b2: /* 8ac8b2: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8ac8b5: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 8ac8b9: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 8ac8bf: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 8ac8c3: fild dword ptr [esp + 0x30] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 8ac8c7: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 8ac8cd: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 8ac8d1: je 0x8ac943 */
  if (zf) goto L_8ac943;
L_8ac8d3: /* 8ac8d3: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8ac8d4: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8ac8d6: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x8ac8d6);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 8ac8d8: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 8ac8dc: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 8ac8e0: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 8ac8e4: fmul dword ptr [esp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x30u)));
/* 8ac8e8: fstp dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 8ac8ec: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 8ac8f0: fadd dword ptr [esp + 0x50] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x50u)));
/* 8ac8f4: fcom dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
/* 8ac8fa: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ac8fc: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8ac8ff: jp 0x8ac907 */
  if (pf) goto L_8ac907;
L_8ac901: /* 8ac901: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
/* 8ac905: jmp 0x8ac911 */
  goto L_8ac911;
L_8ac907: /* 8ac907: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8ac909: mov dword ptr [esp + 0x54], 0x3f800000 */
  W32((uint32_t)(esp + 0x54u), 0x3f800000u);
L_8ac911: /* 8ac911: fild dword ptr [esp + 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 8ac915: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 8ac919: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 8ac91d: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 8ac921: fadd dword ptr [esp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x20u)));
/* 8ac925: fcom dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
/* 8ac92b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ac92d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8ac930: jnp 0x8acb84 */
  if (!pf) goto L_8acb84;
L_8ac936: /* 8ac936: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8ac938: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 8ac93e: jmp 0x8acb84 */
  goto L_8acb84;
L_8ac943: /* 8ac943: fld dword ptr [esi + 0xb0] */
  { double v = F32((uint32_t)(esi + 0xb0u)); FPUSH(v); }
/* 8ac949: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8ac94f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ac951: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8ac954: jnp 0x8acb84 */
  if (!pf) goto L_8acb84;
L_8ac95a: /* 8ac95a: mov al, byte ptr [edi + 0x324] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x324u))) & 0xffu);
/* 8ac960: imul ecx, edx */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edx);
  ecx = (uint32_t)r;
  }
/* 8ac963: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8ac965: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8ac967: mov dword ptr [esp + 0x4c], ecx */
  W32((uint32_t)(esp + 0x4cu), ecx);
/* 8ac96b: je 0x8ac998 */
  if (zf) goto L_8ac998;
L_8ac96d: /* 8ac96d: mov edx, dword ptr [edi + 0x32c] */
  edx = R32((uint32_t)(edi + 0x32cu));
/* 8ac973: xor ecx, ecx */
  ecx = 0;
/* 8ac975: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8ac977: jle 0x8ac9f1 */
  if ((zf || sf != of)) goto L_8ac9f1;
L_8ac979: /* 8ac979: mov ebp, dword ptr [edi + 0x328] */
  ebp = R32((uint32_t)(edi + 0x328u));
/* 8ac97f: nop  */
L_8ac980: /* 8ac980: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 8ac984: fcomp dword ptr [ebp] */
  fpu_com(ST0, F32((uint32_t)(ebp)));
  FPOP();
/* 8ac987: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ac989: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8ac98c: jnp 0x8ac9f1 */
  if (!pf) goto L_8ac9f1;
L_8ac98e: /* 8ac98e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8ac98f: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 8ac992: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ac994: jl 0x8ac980 */
  if ((sf != of)) goto L_8ac980;
L_8ac996: /* 8ac996: jmp 0x8ac9f1 */
  goto L_8ac9f1;
L_8ac998: /* 8ac998: mov eax, dword ptr [edi + 0x338] */
  eax = R32((uint32_t)(edi + 0x338u));
/* 8ac99e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ac9a0: je 0x8ac9da */
  if (zf) goto L_8ac9da;
L_8ac9a2: /* 8ac9a2: sub eax, dword ptr [edi + 0x334] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x334u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8ac9a8: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ac9ab: mov dword ptr [esp + 0x4c], 1 */
  W32((uint32_t)(esp + 0x4cu), 0x1u);
/* 8ac9b3: jle 0x8ac9b9 */
  if ((zf || sf != of)) goto L_8ac9b9;
L_8ac9b5: /* 8ac9b5: mov dword ptr [esp + 0x4c], eax */
  W32((uint32_t)(esp + 0x4cu), eax);
L_8ac9b9: /* 8ac9b9: fild dword ptr [esp + 0x4c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 8ac9bd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ac9be: fmul dword ptr [esp + 0x48] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x48u)));
/* 8ac9c2: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8ac9c5: call dword ptr [0xcfa3dc] */
  esp -= 4; W32(esp, 0x8ac9cbu); SPILL(); f_4e392c(); if (g_unwind) return; /* Core!?appFloor@@YAHM@Z */ RELOAD();
/* 8ac9cb: mov ecx, eax */
  ecx = eax;
/* 8ac9cd: mov eax, dword ptr [edi + 0x334] */
  eax = R32((uint32_t)(edi + 0x334u));
/* 8ac9d3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ac9d6: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8ac9d8: jmp 0x8ac9f1 */
  goto L_8ac9f1;
L_8ac9da: /* 8ac9da: fild dword ptr [esp + 0x4c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 8ac9de: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ac9df: fmul dword ptr [esp + 0x48] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x48u)));
/* 8ac9e3: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8ac9e6: call dword ptr [0xcfa3dc] */
  esp -= 4; W32(esp, 0x8ac9ecu); SPILL(); f_4e392c(); if (g_unwind) return; /* Core!?appFloor@@YAHM@Z */ RELOAD();
/* 8ac9ec: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ac9ef: mov ecx, eax */
  ecx = eax;
L_8ac9f1: /* 8ac9f1: mov ebp, dword ptr [edi + 0x320] */
  ebp = R32((uint32_t)(edi + 0x320u));
/* 8ac9f7: mov eax, dword ptr [edi + 0x31c] */
  eax = R32((uint32_t)(edi + 0x31cu));
/* 8ac9fd: imul eax, ebp */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ebp);
  eax = (uint32_t)r;
  }
/* 8aca00: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8aca01: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8aca03: jge 0x8aca09 */
  if ((sf == of)) goto L_8aca09;
L_8aca05: /* 8aca05: xor ecx, ecx */
  ecx = 0;
/* 8aca07: jmp 0x8aca0f */
  goto L_8aca0f;
L_8aca09: /* 8aca09: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8aca0b: jl 0x8aca0f */
  if ((sf != of)) goto L_8aca0f;
L_8aca0d: /* 8aca0d: mov ecx, eax */
  ecx = eax;
L_8aca0f: /* 8aca0f: mov eax, ecx */
  eax = ecx;
/* 8aca11: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8aca12: idiv ebp */
  { int32_t d = (int32_t)ebp; if (!d) d = (int32_t)guest_divzero(0x8aca12);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 8aca14: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 8aca18: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 8aca1c: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 8aca20: fmul dword ptr [esp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x30u)));
/* 8aca24: fstp dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 8aca28: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 8aca2c: fadd dword ptr [esp + 0x50] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x50u)));
/* 8aca30: fcom dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
/* 8aca36: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8aca38: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8aca3b: jp 0x8aca43 */
  if (pf) goto L_8aca43;
L_8aca3d: /* 8aca3d: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
/* 8aca41: jmp 0x8aca4d */
  goto L_8aca4d;
L_8aca43: /* 8aca43: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8aca45: mov dword ptr [esp + 0x54], 0x3f800000 */
  W32((uint32_t)(esp + 0x54u), 0x3f800000u);
L_8aca4d: /* 8aca4d: fild dword ptr [esp + 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 8aca51: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 8aca55: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 8aca59: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 8aca5d: fadd dword ptr [esp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x20u)));
/* 8aca61: fcom dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
/* 8aca67: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8aca69: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8aca6c: jnp 0x8aca76 */
  if (!pf) goto L_8aca76;
L_8aca6e: /* 8aca6e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8aca70: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_8aca76: /* 8aca76: mov al, byte ptr [edi + 0x324] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x324u))) & 0xffu);
/* 8aca7c: fst dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0);
/* 8aca80: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8aca82: je 0x8acb84 */
  if (zf) goto L_8acb84;
L_8aca88: /* 8aca88: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 8aca8c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8aca8d: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8aca8f: je 0x8acad1 */
  if (zf) goto L_8acad1;
L_8aca91: /* 8aca91: mov eax, ecx */
  eax = ecx;
/* 8aca93: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8aca95: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8aca96: idiv ebp */
  { int32_t d = (int32_t)ebp; if (!d) d = (int32_t)guest_divzero(0x8aca96);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 8aca98: mov dword ptr [esp + 0x5c], edx */
  W32((uint32_t)(esp + 0x5cu), edx);
/* 8aca9c: fild dword ptr [esp + 0x5c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 8acaa0: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 8acaa4: fmul dword ptr [esp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x30u)));
/* 8acaa8: fstp dword ptr [esp + 0x70] */
  WF32((uint32_t)(esp + 0x70u), ST0); FPOP();
/* 8acaac: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 8acab0: fadd dword ptr [esp + 0x70] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x70u)));
/* 8acab4: fstp dword ptr [esp + 0x80] */
  WF32((uint32_t)(esp + 0x80u), ST0); FPOP();
/* 8acabb: fild dword ptr [esp + 0x48] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 8acabf: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 8acac3: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 8acac7: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 8acacb: fadd dword ptr [esp + 0x48] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x48u)));
/* 8acacf: jmp 0x8acaec */
  goto L_8acaec;
L_8acad1: /* 8acad1: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 8acad5: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* 8acad9: mov dword ptr [esp + 0x70], edx */
  W32((uint32_t)(esp + 0x70u), edx);
/* 8acadd: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 8acae1: mov dword ptr [esp + 0x80], eax */
  W32((uint32_t)(esp + 0x80u), eax);
/* 8acae8: mov dword ptr [esp + 0x48], edx */
  W32((uint32_t)(esp + 0x48u), edx);
L_8acaec: /* 8acaec: mov al, byte ptr [edi + 0x324] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x324u))) & 0xffu);
/* 8acaf2: fstp dword ptr [esp + 0x5c] */
  WF32((uint32_t)(esp + 0x5cu), ST0); FPOP();
/* 8acaf6: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8acaf8: je 0x8acb4b */
  if (zf) goto L_8acb4b;
L_8acafa: /* 8acafa: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 8acafe: cmp dword ptr [edi + 0x32c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x32cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8acb04: jle 0x8acb4b */
  if ((zf || sf != of)) goto L_8acb4b;
L_8acb06: /* 8acb06: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 8acb07: jne 0x8acb11 */
  if (!zf) goto L_8acb11;
L_8acb09: /* 8acb09: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 8acb0f: jmp 0x8acb1b */
  goto L_8acb1b;
L_8acb11: /* 8acb11: mov edx, dword ptr [edi + 0x328] */
  edx = R32((uint32_t)(edi + 0x328u));
/* 8acb17: fld dword ptr [edx + ecx*4 - 4] */
  { double v = F32((uint32_t)(edx + ecx*4 + 0xfffffffcu)); FPUSH(v); }
L_8acb1b: /* 8acb1b: mov eax, dword ptr [edi + 0x328] */
  eax = R32((uint32_t)(edi + 0x328u));
/* 8acb21: fld dword ptr [eax + ecx*4] */
  { double v = F32((uint32_t)(eax + ecx*4)); FPUSH(v); }
/* 8acb24: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 8acb2a: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 8acb2c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8acb2e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8acb31: jp 0x8acb3b */
  if (pf) goto L_8acb3b;
L_8acb33: /* 8acb33: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8acb35: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_8acb3b: /* 8acb3b: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 8acb3f: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 8acb41: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8acb43: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 8acb45: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 8acb47: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 8acb49: jmp 0x8acb71 */
  goto L_8acb71;
L_8acb4b: /* 8acb4b: fild dword ptr [esp + 0x4c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 8acb4f: fmul dword ptr [esp + 0x44] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x44u)));
/* 8acb53: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 8acb57: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 8acb5b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8acb5c: call dword ptr [0xcfa3dc] */
  esp -= 4; W32(esp, 0x8acb62u); SPILL(); f_4e392c(); if (g_unwind) return; /* Core!?appFloor@@YAHM@Z */ RELOAD();
/* 8acb62: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 8acb66: fild dword ptr [esp + 0x34] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 8acb6a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8acb6d: fsubr dword ptr [esp + 0x34] */
  ST0 = (F32((uint32_t)(esp + 0x34u))) - ST0;
L_8acb71: /* 8acb71: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 8acb77: call 0x99c958 */
  esp -= 4; W32(esp, 0x8acb7cu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8acb7c: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 8acb80: mov byte ptr [esp + 0x5b], al */
  W8((uint32_t)(esp + 0x5bu), (eax & 0xffu));
L_8acb84: /* 8acb84: mov edx, dword ptr [0xcfa278] */
  edx = R32((uint32_t)(0xcfa278u));
/* 8acb8a: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8acb8d: je 0x8acbb5 */
  if (zf) goto L_8acbb5;
L_8acb8f: /* 8acb8f: mov al, byte ptr [esp + 0x5a] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x5au))) & 0xffu);
/* 8acb93: mov cl, byte ptr [esp + 0x59] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x59u))) & 0xffu);
/* 8acb97: mov dl, byte ptr [esp + 0x58] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x58u))) & 0xffu);
/* 8acb9b: mov byte ptr [esp + 0x6c], al */
  W8((uint32_t)(esp + 0x6cu), (eax & 0xffu));
/* 8acb9f: mov al, byte ptr [esp + 0x5b] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x5bu))) & 0xffu);
/* 8acba3: mov byte ptr [esp + 0x6d], cl */
  W8((uint32_t)(esp + 0x6du), (ecx & 0xffu));
/* 8acba7: mov byte ptr [esp + 0x6e], dl */
  W8((uint32_t)(esp + 0x6eu), (edx & 0xffu));
/* 8acbab: mov byte ptr [esp + 0x6f], al */
  W8((uint32_t)(esp + 0x6fu), (eax & 0xffu));
/* 8acbaf: mov eax, dword ptr [esp + 0x6c] */
  eax = R32((uint32_t)(esp + 0x6cu));
/* 8acbb3: jmp 0x8acbbd */
  goto L_8acbbd;
L_8acbb5: /* 8acbb5: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* 8acbb9: mov dword ptr [esp + 0x6c], eax */
  W32((uint32_t)(esp + 0x6cu), eax);
L_8acbbd: /* 8acbbd: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8acbbf: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 8acbc2: mov dword ptr [esp + 0xd0], ecx */
  W32((uint32_t)(esp + 0xd0u), ecx);
/* 8acbc9: fld dword ptr [esp + 0xd0] */
  { double v = F32((uint32_t)(esp + 0xd0u)); FPUSH(v); }
/* 8acbd0: fsub dword ptr [esp + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x38u)));
/* 8acbd4: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 8acbd7: mov dword ptr [esp + 0xd4], edx */
  W32((uint32_t)(esp + 0xd4u), edx);
/* 8acbde: mov dword ptr [esp + 0xd8], ecx */
  W32((uint32_t)(esp + 0xd8u), ecx);
/* 8acbe5: fst dword ptr [esp + 0x20c] */
  WF32((uint32_t)(esp + 0x20cu), ST0);
/* 8acbec: mov edx, ebx */
  edx = ebx;
/* 8acbee: fld dword ptr [esp + 0xd4] */
  { double v = F32((uint32_t)(esp + 0xd4u)); FPUSH(v); }
/* 8acbf5: mov dword ptr [ebx + 0xc], eax */
  W32((uint32_t)(ebx + 0xcu), eax);
/* 8acbf8: fsub dword ptr [esp + 0x3c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x3cu)));
/* 8acbfc: add ebx, 0x20 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8acbff: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8acc01: fld dword ptr [esp + 0xd8] */
  { double v = F32((uint32_t)(esp + 0xd8u)); FPUSH(v); }
/* 8acc08: fsub dword ptr [esp + 0x40] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x40u)));
/* 8acc0c: fst dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0);
/* 8acc10: fld dword ptr [esp + 0x20c] */
  { double v = F32((uint32_t)(esp + 0x20cu)); FPUSH(v); }
/* 8acc17: fsub dword ptr [esp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x24u)));
/* 8acc1b: fstp dword ptr [esp + 0x104] */
  WF32((uint32_t)(esp + 0x104u), ST0); FPOP();
/* 8acc22: mov ecx, dword ptr [esp + 0x104] */
  ecx = R32((uint32_t)(esp + 0x104u));
/* 8acc29: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8acc2b: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 8acc2d: fsub dword ptr [esp + 0x28] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x28u)));
/* 8acc31: fstp dword ptr [esp + 0x108] */
  WF32((uint32_t)(esp + 0x108u), ST0); FPOP();
/* 8acc38: mov ecx, dword ptr [esp + 0x108] */
  ecx = R32((uint32_t)(esp + 0x108u));
/* 8acc3f: fsub dword ptr [esp + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x2cu)));
/* 8acc43: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8acc46: fstp dword ptr [esp + 0x10c] */
  WF32((uint32_t)(esp + 0x10cu), ST0); FPOP();
/* 8acc4d: mov ecx, dword ptr [esp + 0x10c] */
  ecx = R32((uint32_t)(esp + 0x10cu));
/* 8acc54: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8acc56: fstp dword ptr [esp + 0x200] */
  WF32((uint32_t)(esp + 0x200u), ST0); FPOP();
/* 8acc5d: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8acc60: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 8acc64: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 8acc68: fld dword ptr [esp + 0x200] */
  { double v = F32((uint32_t)(esp + 0x200u)); FPUSH(v); }
/* 8acc6f: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 8acc73: fadd dword ptr [esp + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x24u)));
/* 8acc77: mov dword ptr [ebx - 8], ecx */
  W32((uint32_t)(ebx + 0xfffffff8u), ecx);
/* 8acc7a: mov ecx, dword ptr [esp + 0x80] */
  ecx = R32((uint32_t)(esp + 0x80u));
/* 8acc81: mov dword ptr [ebx - 0x10], edx */
  W32((uint32_t)(ebx + 0xfffffff0u), edx);
/* 8acc84: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 8acc88: fstp dword ptr [esp + 0x110] */
  WF32((uint32_t)(esp + 0x110u), ST0); FPOP();
/* 8acc8f: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8acc91: mov dword ptr [ebx - 4], ecx */
  W32((uint32_t)(ebx + 0xfffffffcu), ecx);
/* 8acc94: fadd dword ptr [esp + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x28u)));
/* 8acc98: mov ecx, dword ptr [esp + 0x110] */
  ecx = R32((uint32_t)(esp + 0x110u));
/* 8acc9f: mov dword ptr [ebx - 0xc], edx */
  W32((uint32_t)(ebx + 0xfffffff4u), edx);
/* 8acca2: mov edx, ebx */
  edx = ebx;
/* 8acca4: fstp dword ptr [esp + 0x114] */
  WF32((uint32_t)(esp + 0x114u), ST0); FPOP();
/* 8accab: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 8accad: fadd dword ptr [esp + 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x2cu)));
/* 8accb1: mov ecx, dword ptr [esp + 0x114] */
  ecx = R32((uint32_t)(esp + 0x114u));
/* 8accb8: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8accbb: mov dword ptr [ebx + 0xc], eax */
  W32((uint32_t)(ebx + 0xcu), eax);
/* 8accbe: fstp dword ptr [esp + 0x118] */
  WF32((uint32_t)(esp + 0x118u), ST0); FPOP();
/* 8accc5: mov ecx, dword ptr [esp + 0x118] */
  ecx = R32((uint32_t)(esp + 0x118u));
/* 8acccc: fst dword ptr [ebx + 0x10] */
  WF32((uint32_t)(ebx + 0x10u), ST0);
/* 8acccf: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8accd2: fld dword ptr [esp + 0xd0] */
  { double v = F32((uint32_t)(esp + 0xd0u)); FPUSH(v); }
/* 8accd9: mov edx, dword ptr [esp + 0x5c] */
  edx = R32((uint32_t)(esp + 0x5cu));
/* 8accdd: fadd dword ptr [esp + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x38u)));
/* 8acce1: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 8acce5: mov dword ptr [ebx + 0x18], edx */
  W32((uint32_t)(ebx + 0x18u), edx);
/* 8acce8: mov edx, dword ptr [esp + 0x80] */
  edx = R32((uint32_t)(esp + 0x80u));
/* 8accef: fst dword ptr [esp + 0x1f4] */
  WF32((uint32_t)(esp + 0x1f4u), ST0);
/* 8accf6: mov dword ptr [ebx + 0x14], ecx */
  W32((uint32_t)(ebx + 0x14u), ecx);
/* 8accf9: fld dword ptr [esp + 0xd4] */
  { double v = F32((uint32_t)(esp + 0xd4u)); FPUSH(v); }
/* 8acd00: mov dword ptr [ebx + 0x1c], edx */
  W32((uint32_t)(ebx + 0x1cu), edx);
/* 8acd03: fadd dword ptr [esp + 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x3cu)));
/* 8acd07: add ebx, 0x20 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8acd0a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8acd0c: fld dword ptr [esp + 0xd8] */
  { double v = F32((uint32_t)(esp + 0xd8u)); FPUSH(v); }
/* 8acd13: fadd dword ptr [esp + 0x40] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x40u)));
/* 8acd17: fst dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0);
/* 8acd1b: fld dword ptr [esp + 0x1f4] */
  { double v = F32((uint32_t)(esp + 0x1f4u)); FPUSH(v); }
/* 8acd22: fsub dword ptr [esp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x24u)));
/* 8acd26: mov ecx, ebx */
  ecx = ebx;
/* 8acd28: mov dword ptr [ebx + 0xc], eax */
  W32((uint32_t)(ebx + 0xcu), eax);
/* 8acd2b: add ebx, 0x20 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8acd2e: fstp dword ptr [esp + 0x128] */
  WF32((uint32_t)(esp + 0x128u), ST0); FPOP();
/* 8acd35: mov edx, dword ptr [esp + 0x128] */
  edx = R32((uint32_t)(esp + 0x128u));
/* 8acd3c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8acd3e: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8acd40: fsub dword ptr [esp + 0x28] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x28u)));
/* 8acd44: fstp dword ptr [esp + 0x12c] */
  WF32((uint32_t)(esp + 0x12cu), ST0); FPOP();
/* 8acd4b: mov edx, dword ptr [esp + 0x12c] */
  edx = R32((uint32_t)(esp + 0x12cu));
/* 8acd52: fsub dword ptr [esp + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x2cu)));
/* 8acd56: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8acd59: fstp dword ptr [esp + 0x130] */
  WF32((uint32_t)(esp + 0x130u), ST0); FPOP();
/* 8acd60: mov edx, dword ptr [esp + 0x130] */
  edx = R32((uint32_t)(esp + 0x130u));
/* 8acd67: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8acd69: fstp dword ptr [esp + 0xdc] */
  WF32((uint32_t)(esp + 0xdcu), ST0); FPOP();
/* 8acd70: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8acd73: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 8acd77: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 8acd7b: fld dword ptr [esp + 0xdc] */
  { double v = F32((uint32_t)(esp + 0xdcu)); FPUSH(v); }
/* 8acd82: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 8acd86: fadd dword ptr [esp + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x24u)));
/* 8acd8a: mov dword ptr [ebx - 8], edx */
  W32((uint32_t)(ebx + 0xfffffff8u), edx);
/* 8acd8d: mov edx, dword ptr [esp + 0x70] */
  edx = R32((uint32_t)(esp + 0x70u));
/* 8acd91: mov dword ptr [ebx - 0x10], ecx */
  W32((uint32_t)(ebx + 0xfffffff0u), ecx);
/* 8acd94: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 8acd98: fstp dword ptr [esp + 0x140] */
  WF32((uint32_t)(esp + 0x140u), ST0); FPOP();
/* 8acd9f: mov dword ptr [ebx - 4], edx */
  W32((uint32_t)(ebx + 0xfffffffcu), edx);
/* 8acda2: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8acda4: fadd dword ptr [esp + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x28u)));
/* 8acda8: mov edx, dword ptr [esp + 0x140] */
  edx = R32((uint32_t)(esp + 0x140u));
/* 8acdaf: mov dword ptr [ebx - 0xc], ecx */
  W32((uint32_t)(ebx + 0xfffffff4u), ecx);
/* 8acdb2: mov ecx, ebx */
  ecx = ebx;
/* 8acdb4: fstp dword ptr [esp + 0x144] */
  WF32((uint32_t)(esp + 0x144u), ST0); FPOP();
/* 8acdbb: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8acdbd: fadd dword ptr [esp + 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x2cu)));
/* 8acdc1: mov edx, dword ptr [esp + 0x144] */
  edx = R32((uint32_t)(esp + 0x144u));
/* 8acdc8: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8acdcb: mov dword ptr [ebx + 0xc], eax */
  W32((uint32_t)(ebx + 0xcu), eax);
/* 8acdce: mov eax, dword ptr [esp + 0x5c] */
  eax = R32((uint32_t)(esp + 0x5cu));
/* 8acdd2: fstp dword ptr [esp + 0x148] */
  WF32((uint32_t)(esp + 0x148u), ST0); FPOP();
/* 8acdd9: mov edx, dword ptr [esp + 0x148] */
  edx = R32((uint32_t)(esp + 0x148u));
/* 8acde0: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8acde3: fstp dword ptr [ebx + 0x10] */
  WF32((uint32_t)(ebx + 0x10u), ST0); FPOP();
/* 8acde6: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 8acdea: mov edx, dword ptr [esp + 0x70] */
  edx = R32((uint32_t)(esp + 0x70u));
/* 8acdee: mov dword ptr [ebx + 0x18], eax */
  W32((uint32_t)(ebx + 0x18u), eax);
/* 8acdf1: mov dword ptr [ebx + 0x14], ecx */
  W32((uint32_t)(ebx + 0x14u), ecx);
/* 8acdf4: mov dword ptr [ebx + 0x1c], edx */
  W32((uint32_t)(ebx + 0x1cu), edx);
/* 8acdf7: add ebx, 0x20 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_8acdfa: /* 8acdfa: mov eax, dword ptr [esp + 0xe8] */
  eax = R32((uint32_t)(esp + 0xe8u));
/* 8ace01: mov edx, dword ptr [esp + 0x9c] */
  edx = R32((uint32_t)(esp + 0x9cu));
/* 8ace08: mov ecx, dword ptr [edi + 0x40c] */
  ecx = R32((uint32_t)(edi + 0x40cu));
/* 8ace0e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8ace0f: add edx, 0xc8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8ace15: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ace17: mov dword ptr [esp + 0xe8], eax */
  W32((uint32_t)(esp + 0xe8u), eax);
/* 8ace1e: mov dword ptr [esp + 0x9c], edx */
  W32((uint32_t)(esp + 0x9cu), edx);
/* 8ace25: jl 0x8ac010 */
  if ((sf != of)) goto L_8ac010;
L_8ace2b: /* 8ace2b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8ace2c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ace2d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8ace2e: xor eax, eax */
  eax = 0;
/* 8ace30: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8ace31: add esp, 0x2a4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2a4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ace37: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8ac00d(void) {
  LOAD_REGS();
L_8ac00d: /* 8ac00d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8ac010: /* 8ac010: mov esi, dword ptr [edi + 0x3fc] */
  esi = R32((uint32_t)(edi + 0x3fcu));
/* 8ac016: mov ecx, dword ptr [esp + 0x9c] */
  ecx = R32((uint32_t)(esp + 0x9cu));
/* 8ac01d: mov al, byte ptr [esi + ecx + 0xbc] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + ecx + 0xbcu))) & 0xffu);
/* 8ac024: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8ac026: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8ac028: je 0x8acdfa */
  if (zf) goto L_8acdfa;
L_8ac02e: /* 8ac02e: fld dword ptr [esi + 0xb0] */
  { double v = F32((uint32_t)(esi + 0xb0u)); FPUSH(v); }
/* 8ac034: mov ecx, dword ptr [esi + 0xa8] */
  ecx = R32((uint32_t)(esi + 0xa8u));
/* 8ac03a: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8ac040: mov edx, dword ptr [esi + 0xac] */
  edx = R32((uint32_t)(esi + 0xacu));
/* 8ac046: mov dword ptr [esp + 0x58], ecx */
  W32((uint32_t)(esp + 0x58u), ecx);
/* 8ac04a: mov dword ptr [esp + 0x90], edx */
  W32((uint32_t)(esp + 0x90u), edx);
/* 8ac051: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ac053: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8ac056: jnp 0x8ac074 */
  if (!pf) goto L_8ac074;
L_8ac058: /* 8ac058: fld dword ptr [esp + 0x90] */
  { double v = F32((uint32_t)(esp + 0x90u)); FPUSH(v); }
/* 8ac05f: fdiv dword ptr [esi + 0xb0] */
  ST0 = ST0 / (F32((uint32_t)(esi + 0xb0u)));
/* 8ac065: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 8ac06b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ac06d: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8ac070: jp 0x8ac0ac */
  if (pf) goto L_8ac0ac;
L_8ac072: /* 8ac072: fstp st(0) */
  STI(0) = ST0; FPOP();
L_8ac074: /* 8ac074: mov dword ptr [esp + 0x44], 0 */
  W32((uint32_t)(esp + 0x44u), 0x0u);
L_8ac07c: /* 8ac07c: mov al, byte ptr [edi + 0x494] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x494u))) & 0xffu);
/* 8ac082: cmp al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8ac084: jne 0x8ac0cb */
  if (!zf) goto L_8ac0cb;
L_8ac086: /* 8ac086: mov eax, dword ptr [esp + 0xc4] */
  eax = R32((uint32_t)(esp + 0xc4u));
/* 8ac08d: mov ecx, dword ptr [esp + 0xc8] */
  ecx = R32((uint32_t)(esp + 0xc8u));
/* 8ac094: mov edx, dword ptr [esp + 0xcc] */
  edx = R32((uint32_t)(esp + 0xccu));
/* 8ac09b: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 8ac09f: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 8ac0a3: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 8ac0a7: jmp 0x8ac2a0 */
  goto L_8ac2a0;
L_8ac0ac: /* 8ac0ac: fcom dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
/* 8ac0b2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ac0b4: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8ac0b7: jp 0x8ac0bf */
  if (pf) goto L_8ac0bf;
L_8ac0b9: /* 8ac0b9: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 8ac0bd: jmp 0x8ac07c */
  goto L_8ac07c;
L_8ac0bf: /* 8ac0bf: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8ac0c1: mov dword ptr [esp + 0x44], 0x3f800000 */
  W32((uint32_t)(esp + 0x44u), 0x3f800000u);
/* 8ac0c9: jmp 0x8ac07c */
  goto L_8ac07c;
L_8ac0cb: /* 8ac0cb: cmp al, 3 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8ac0cd: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8ac0cf: fsub dword ptr [esi + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xcu)));
/* 8ac0d2: jne 0x8ac125 */
  if (!zf) goto L_8ac125;
L_8ac0d4: /* 8ac0d4: fstp dword ptr [esp + 0x1a0] */
  WF32((uint32_t)(esp + 0x1a0u), ST0); FPOP();
/* 8ac0db: mov eax, dword ptr [esp + 0x1a0] */
  eax = R32((uint32_t)(esp + 0x1a0u));
/* 8ac0e2: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8ac0e5: fsub dword ptr [esi + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x10u)));
/* 8ac0e8: fstp dword ptr [esp + 0x1a4] */
  WF32((uint32_t)(esp + 0x1a4u), ST0); FPOP();
/* 8ac0ef: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8ac0f2: mov ecx, dword ptr [esp + 0x1a4] */
  ecx = R32((uint32_t)(esp + 0x1a4u));
/* 8ac0f9: fsub dword ptr [esi + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x14u)));
/* 8ac0fc: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 8ac100: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 8ac104: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 8ac108: fstp dword ptr [esp + 0x1a8] */
  WF32((uint32_t)(esp + 0x1a8u), ST0); FPOP();
/* 8ac10f: mov edx, dword ptr [esp + 0x1a8] */
  edx = R32((uint32_t)(esp + 0x1a8u));
/* 8ac116: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 8ac11a: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x8ac120u); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 8ac120: jmp 0x8ac2a0 */
  goto L_8ac2a0;
L_8ac125: /* 8ac125: fstp dword ptr [esp + 0x17c] */
  WF32((uint32_t)(esp + 0x17cu), ST0); FPOP();
/* 8ac12c: mov eax, dword ptr [esp + 0x17c] */
  eax = R32((uint32_t)(esp + 0x17cu));
/* 8ac133: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8ac136: fsub dword ptr [esi + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x10u)));
/* 8ac139: fstp dword ptr [esp + 0x180] */
  WF32((uint32_t)(esp + 0x180u), ST0); FPOP();
/* 8ac140: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8ac143: mov ecx, dword ptr [esp + 0x180] */
  ecx = R32((uint32_t)(esp + 0x180u));
/* 8ac14a: fsub dword ptr [esi + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x14u)));
/* 8ac14d: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 8ac151: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 8ac155: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 8ac159: fstp dword ptr [esp + 0x184] */
  WF32((uint32_t)(esp + 0x184u), ST0); FPOP();
/* 8ac160: mov edx, dword ptr [esp + 0x184] */
  edx = R32((uint32_t)(esp + 0x184u));
/* 8ac167: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 8ac16b: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x8ac171u); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 8ac171: mov al, byte ptr [edi + 0x494] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x494u))) & 0xffu);
/* 8ac177: cmp al, 5 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8ac179: je 0x8ac21f */
  if (zf) goto L_8ac21f;
L_8ac17f: /* 8ac17f: cmp al, 6 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x6u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8ac181: je 0x8ac21f */
  if (zf) goto L_8ac21f;
L_8ac187: /* 8ac187: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8ac189: fsub dword ptr [esp + 0xb8] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0xb8u)));
/* 8ac190: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8ac193: fsub dword ptr [esp + 0xbc] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0xbcu)));
/* 8ac19a: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8ac19d: fsub dword ptr [esp + 0xc0] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0xc0u)));
/* 8ac1a4: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 8ac1a8: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ac1aa: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 8ac1ae: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 8ac1b0: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ac1b2: fstp dword ptr [esp + 0x11c] */
  WF32((uint32_t)(esp + 0x11cu), ST0); FPOP();
/* 8ac1b9: mov eax, dword ptr [esp + 0x11c] */
  eax = R32((uint32_t)(esp + 0x11cu));
/* 8ac1c0: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 8ac1c4: mov dword ptr [esp + 0x84], eax */
  W32((uint32_t)(esp + 0x84u), eax);
/* 8ac1cb: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 8ac1cd: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8ac1cf: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 8ac1d3: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ac1d5: fstp dword ptr [esp + 0x120] */
  WF32((uint32_t)(esp + 0x120u), ST0); FPOP();
/* 8ac1dc: mov ecx, dword ptr [esp + 0x120] */
  ecx = R32((uint32_t)(esp + 0x120u));
/* 8ac1e3: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 8ac1e7: mov dword ptr [esp + 0x88], ecx */
  W32((uint32_t)(esp + 0x88u), ecx);
/* 8ac1ee: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 8ac1f2: lea ecx, [esp + 0x84] */
  ecx = (uint32_t)(esp + 0x84u);
/* 8ac1f9: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8ac1fb: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ac1fd: fstp dword ptr [esp + 0x124] */
  WF32((uint32_t)(esp + 0x124u), ST0); FPOP();
/* 8ac204: mov edx, dword ptr [esp + 0x124] */
  edx = R32((uint32_t)(esp + 0x124u));
/* 8ac20b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8ac20d: mov dword ptr [esp + 0x8c], edx */
  W32((uint32_t)(esp + 0x8cu), edx);
/* 8ac214: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x8ac21au); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 8ac21a: jmp 0x8ac2a0 */
  goto L_8ac2a0;
L_8ac21f: /* 8ac21f: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 8ac223: fmul dword ptr [edi + 0x4ac] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4acu)));
/* 8ac229: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 8ac22d: fmul dword ptr [edi + 0x4a8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4a8u)));
/* 8ac233: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ac235: fstp dword ptr [esp + 0x194] */
  WF32((uint32_t)(esp + 0x194u), ST0); FPOP();
/* 8ac23c: mov eax, dword ptr [esp + 0x194] */
  eax = R32((uint32_t)(esp + 0x194u));
/* 8ac243: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 8ac247: mov dword ptr [esp + 0x84], eax */
  W32((uint32_t)(esp + 0x84u), eax);
/* 8ac24e: fmul dword ptr [edi + 0x4a4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4a4u)));
/* 8ac254: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 8ac258: fmul dword ptr [edi + 0x4ac] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4acu)));
/* 8ac25e: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ac260: fstp dword ptr [esp + 0x198] */
  WF32((uint32_t)(esp + 0x198u), ST0); FPOP();
/* 8ac267: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 8ac26b: mov ecx, dword ptr [esp + 0x198] */
  ecx = R32((uint32_t)(esp + 0x198u));
/* 8ac272: fmul dword ptr [edi + 0x4a8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4a8u)));
/* 8ac278: mov dword ptr [esp + 0x88], ecx */
  W32((uint32_t)(esp + 0x88u), ecx);
/* 8ac27f: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 8ac283: fmul dword ptr [edi + 0x4a4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4a4u)));
/* 8ac289: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ac28b: fstp dword ptr [esp + 0x19c] */
  WF32((uint32_t)(esp + 0x19cu), ST0); FPOP();
/* 8ac292: mov edx, dword ptr [esp + 0x19c] */
  edx = R32((uint32_t)(esp + 0x19cu));
/* 8ac299: mov dword ptr [esp + 0x8c], edx */
  W32((uint32_t)(esp + 0x8cu), edx);
L_8ac2a0: /* 8ac2a0: mov eax, dword ptr [esp + 0xac] */
  eax = R32((uint32_t)(esp + 0xacu));
/* 8ac2a7: mov ecx, dword ptr [esp + 0xb0] */
  ecx = R32((uint32_t)(esp + 0xb0u));
/* 8ac2ae: mov edx, dword ptr [esp + 0xb4] */
  edx = R32((uint32_t)(esp + 0xb4u));
/* 8ac2b5: mov dword ptr [esp + 0xec], eax */
  W32((uint32_t)(esp + 0xecu), eax);
/* 8ac2bc: movzx eax, byte ptr [edi + 0x494] */
  eax = (uint32_t)(R8((uint32_t)(edi + 0x494u)));
/* 8ac2c3: cmp eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8ac2c6: mov dword ptr [esp + 0xf0], ecx */
  W32((uint32_t)(esp + 0xf0u), ecx);
/* 8ac2cd: mov dword ptr [esp + 0xf4], edx */
  W32((uint32_t)(esp + 0xf4u), edx);
/* 8ac2d4: ja 0x8ac709 */
  if ((!cf && !zf)) goto L_8ac709;
L_8ac2da: /* 8ac2da: jmp dword ptr [eax*4 + 0x8ace3c] */
  switch (R32((uint32_t)(eax*4 + 0x8ace3cu))) {
    case 0x8ac2e1u: goto L_8ac2e1;
    case 0x8ac380u: goto L_8ac380;
    case 0x8ac41fu: goto L_8ac41f;
    case 0x8ac4c7u: goto L_8ac4c7;
    case 0x8ac56fu: goto L_8ac56f;
    default: guest_badjump(0x8ac2da, R32((uint32_t)(eax*4 + 0x8ace3cu))); return;
  }
L_8ac2e1: /* 8ac2e1: fld dword ptr [esi + 0x6c] */
  { double v = F32((uint32_t)(esi + 0x6cu)); FPUSH(v); }
/* 8ac2e4: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 8ac2e8: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ac2ea: fstp dword ptr [esp + 0x134] */
  WF32((uint32_t)(esp + 0x134u), ST0); FPOP();
/* 8ac2f1: mov eax, dword ptr [esp + 0x134] */
  eax = R32((uint32_t)(esp + 0x134u));
/* 8ac2f8: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 8ac2fc: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 8ac300: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ac302: fstp dword ptr [esp + 0x138] */
  WF32((uint32_t)(esp + 0x138u), ST0); FPOP();
/* 8ac309: fld dword ptr [esp + 0x68] */
  { double v = F32((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* 8ac30d: mov ecx, dword ptr [esp + 0x138] */
  ecx = R32((uint32_t)(esp + 0x138u));
/* 8ac314: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ac316: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 8ac31a: fstp dword ptr [esp + 0x13c] */
  WF32((uint32_t)(esp + 0x13cu), ST0); FPOP();
/* 8ac321: mov edx, dword ptr [esp + 0x13c] */
  edx = R32((uint32_t)(esp + 0x13cu));
/* 8ac328: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8ac32a: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 8ac32e: fld dword ptr [esi + 0x6c] */
  { double v = F32((uint32_t)(esi + 0x6cu)); FPUSH(v); }
/* 8ac331: fld dword ptr [esp + 0x74] */
  { double v = F32((uint32_t)(esp + 0x74u)); FPUSH(v); }
/* 8ac335: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ac337: fstp dword ptr [esp + 0x1ac] */
  WF32((uint32_t)(esp + 0x1acu), ST0); FPOP();
/* 8ac33e: mov eax, dword ptr [esp + 0x1ac] */
  eax = R32((uint32_t)(esp + 0x1acu));
/* 8ac345: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 8ac349: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 8ac34d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ac34f: fstp dword ptr [esp + 0x1b0] */
  WF32((uint32_t)(esp + 0x1b0u), ST0); FPOP();
/* 8ac356: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 8ac35a: mov ecx, dword ptr [esp + 0x1b0] */
  ecx = R32((uint32_t)(esp + 0x1b0u));
/* 8ac361: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ac363: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 8ac367: fstp dword ptr [esp + 0x1b4] */
  WF32((uint32_t)(esp + 0x1b4u), ST0); FPOP();
/* 8ac36e: mov edx, dword ptr [esp + 0x1b4] */
  edx = R32((uint32_t)(esp + 0x1b4u));
/* 8ac375: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8ac377: mov dword ptr [esp + 0x2c], edx */
  W32((uint32_t)(esp + 0x2cu), edx);
/* 8ac37b: jmp 0x8ac78d */
  goto L_8ac78d;
L_8ac380: /* 8ac380: fld dword ptr [esi + 0x70] */
  { double v = F32((uint32_t)(esi + 0x70u)); FPUSH(v); }
/* 8ac383: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 8ac387: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ac389: fstp dword ptr [esp + 0x14c] */
  WF32((uint32_t)(esp + 0x14cu), ST0); FPOP();
/* 8ac390: mov eax, dword ptr [esp + 0x14c] */
  eax = R32((uint32_t)(esp + 0x14cu));
/* 8ac397: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 8ac39b: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 8ac39f: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ac3a1: fstp dword ptr [esp + 0x150] */
  WF32((uint32_t)(esp + 0x150u), ST0); FPOP();
/* 8ac3a8: fld dword ptr [esp + 0x68] */
  { double v = F32((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* 8ac3ac: mov ecx, dword ptr [esp + 0x150] */
  ecx = R32((uint32_t)(esp + 0x150u));
/* 8ac3b3: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ac3b5: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 8ac3b9: fstp dword ptr [esp + 0x154] */
  WF32((uint32_t)(esp + 0x154u), ST0); FPOP();
/* 8ac3c0: mov edx, dword ptr [esp + 0x154] */
  edx = R32((uint32_t)(esp + 0x154u));
/* 8ac3c7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8ac3c9: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 8ac3cd: fld dword ptr [esi + 0x6c] */
  { double v = F32((uint32_t)(esi + 0x6cu)); FPUSH(v); }
/* 8ac3d0: fld dword ptr [esp + 0x74] */
  { double v = F32((uint32_t)(esp + 0x74u)); FPUSH(v); }
/* 8ac3d4: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ac3d6: fstp dword ptr [esp + 0x1c4] */
  WF32((uint32_t)(esp + 0x1c4u), ST0); FPOP();
/* 8ac3dd: mov eax, dword ptr [esp + 0x1c4] */
  eax = R32((uint32_t)(esp + 0x1c4u));
/* 8ac3e4: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 8ac3e8: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 8ac3ec: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ac3ee: fstp dword ptr [esp + 0x1c8] */
  WF32((uint32_t)(esp + 0x1c8u), ST0); FPOP();
/* 8ac3f5: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 8ac3f9: mov ecx, dword ptr [esp + 0x1c8] */
  ecx = R32((uint32_t)(esp + 0x1c8u));
/* 8ac400: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ac402: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 8ac406: fstp dword ptr [esp + 0x1cc] */
  WF32((uint32_t)(esp + 0x1ccu), ST0); FPOP();
/* 8ac40d: mov edx, dword ptr [esp + 0x1cc] */
  edx = R32((uint32_t)(esp + 0x1ccu));
/* 8ac414: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8ac416: mov dword ptr [esp + 0x2c], edx */
  W32((uint32_t)(esp + 0x2cu), edx);
/* 8ac41a: jmp 0x8ac78d */
  goto L_8ac78d;
L_8ac41f: /* 8ac41f: fld dword ptr [esi + 0x70] */
  { double v = F32((uint32_t)(esi + 0x70u)); FPUSH(v); }
/* 8ac422: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 8ac426: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ac428: fstp dword ptr [esp + 0x1dc] */
  WF32((uint32_t)(esp + 0x1dcu), ST0); FPOP();
/* 8ac42f: mov eax, dword ptr [esp + 0x1dc] */
  eax = R32((uint32_t)(esp + 0x1dcu));
/* 8ac436: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 8ac43a: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 8ac43e: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ac440: fstp dword ptr [esp + 0x1e0] */
  WF32((uint32_t)(esp + 0x1e0u), ST0); FPOP();
/* 8ac447: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 8ac44b: mov ecx, dword ptr [esp + 0x1e0] */
  ecx = R32((uint32_t)(esp + 0x1e0u));
/* 8ac452: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ac454: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 8ac458: fstp dword ptr [esp + 0x1e4] */
  WF32((uint32_t)(esp + 0x1e4u), ST0); FPOP();
/* 8ac45f: mov edx, dword ptr [esp + 0x1e4] */
  edx = R32((uint32_t)(esp + 0x1e4u));
/* 8ac466: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8ac468: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 8ac46c: fld dword ptr [esi + 0x6c] */
  { double v = F32((uint32_t)(esi + 0x6cu)); FPUSH(v); }
/* 8ac46f: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 8ac476: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ac478: fstp dword ptr [esp + 0x170] */
  WF32((uint32_t)(esp + 0x170u), ST0); FPOP();
/* 8ac47f: mov eax, dword ptr [esp + 0x170] */
  eax = R32((uint32_t)(esp + 0x170u));
/* 8ac486: fld dword ptr [esp + 0x88] */
  { double v = F32((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 8ac48d: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 8ac491: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ac493: fstp dword ptr [esp + 0x174] */
  WF32((uint32_t)(esp + 0x174u), ST0); FPOP();
/* 8ac49a: fld dword ptr [esp + 0x8c] */
  { double v = F32((uint32_t)(esp + 0x8cu)); FPUSH(v); }
/* 8ac4a1: mov ecx, dword ptr [esp + 0x174] */
  ecx = R32((uint32_t)(esp + 0x174u));
/* 8ac4a8: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ac4aa: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 8ac4ae: fstp dword ptr [esp + 0x178] */
  WF32((uint32_t)(esp + 0x178u), ST0); FPOP();
/* 8ac4b5: mov edx, dword ptr [esp + 0x178] */
  edx = R32((uint32_t)(esp + 0x178u));
/* 8ac4bc: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8ac4be: mov dword ptr [esp + 0x2c], edx */
  W32((uint32_t)(esp + 0x2cu), edx);
/* 8ac4c2: jmp 0x8ac78d */
  goto L_8ac78d;
L_8ac4c7: /* 8ac4c7: fld dword ptr [esi + 0x70] */
  { double v = F32((uint32_t)(esi + 0x70u)); FPUSH(v); }
/* 8ac4ca: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 8ac4d1: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ac4d3: fstp dword ptr [esp + 0x1d0] */
  WF32((uint32_t)(esp + 0x1d0u), ST0); FPOP();
/* 8ac4da: mov eax, dword ptr [esp + 0x1d0] */
  eax = R32((uint32_t)(esp + 0x1d0u));
/* 8ac4e1: fld dword ptr [esp + 0x88] */
  { double v = F32((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 8ac4e8: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 8ac4ec: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ac4ee: fstp dword ptr [esp + 0x1d4] */
  WF32((uint32_t)(esp + 0x1d4u), ST0); FPOP();
/* 8ac4f5: fld dword ptr [esp + 0x8c] */
  { double v = F32((uint32_t)(esp + 0x8cu)); FPUSH(v); }
/* 8ac4fc: mov ecx, dword ptr [esp + 0x1d4] */
  ecx = R32((uint32_t)(esp + 0x1d4u));
/* 8ac503: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ac505: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 8ac509: fstp dword ptr [esp + 0x1d8] */
  WF32((uint32_t)(esp + 0x1d8u), ST0); FPOP();
/* 8ac510: mov edx, dword ptr [esp + 0x1d8] */
  edx = R32((uint32_t)(esp + 0x1d8u));
/* 8ac517: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8ac519: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 8ac51d: fld dword ptr [esi + 0x6c] */
  { double v = F32((uint32_t)(esi + 0x6cu)); FPUSH(v); }
/* 8ac520: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 8ac524: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ac526: fstp dword ptr [esp + 0x188] */
  WF32((uint32_t)(esp + 0x188u), ST0); FPOP();
/* 8ac52d: mov eax, dword ptr [esp + 0x188] */
  eax = R32((uint32_t)(esp + 0x188u));
/* 8ac534: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 8ac538: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 8ac53c: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ac53e: fstp dword ptr [esp + 0x18c] */
  WF32((uint32_t)(esp + 0x18cu), ST0); FPOP();
/* 8ac545: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 8ac549: mov ecx, dword ptr [esp + 0x18c] */
  ecx = R32((uint32_t)(esp + 0x18cu));
/* 8ac550: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ac552: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 8ac556: fstp dword ptr [esp + 0x190] */
  WF32((uint32_t)(esp + 0x190u), ST0); FPOP();
/* 8ac55d: mov edx, dword ptr [esp + 0x190] */
  edx = R32((uint32_t)(esp + 0x190u));
/* 8ac564: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8ac566: mov dword ptr [esp + 0x2c], edx */
  W32((uint32_t)(esp + 0x2cu), edx);
/* 8ac56a: jmp 0x8ac78d */
  goto L_8ac78d;
L_8ac56f: /* 8ac56f: lea eax, [esp + 0x254] */
  eax = (uint32_t)(esp + 0x254u);
/* 8ac576: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ac577: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 8ac57b: call dword ptr [0xcfabc4] */
  esp -= 4; W32(esp, 0x8ac581u); SPILL(); f_4e1f2d(); if (g_unwind) return; /* Core!?GetNonParallel@FVector@@QAE?AV1@XZ */ RELOAD();
/* 8ac581: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 8ac585: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 8ac588: mov ecx, dword ptr [esi + 0x70] */
  ecx = R32((uint32_t)(esi + 0x70u));
/* 8ac58b: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 8ac58f: mov dword ptr [esp + 0x94], ecx */
  W32((uint32_t)(esp + 0x94u), ecx);
/* 8ac596: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 8ac599: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ac59b: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 8ac59f: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 8ac5a1: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 8ac5a5: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 8ac5a8: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ac5aa: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 8ac5ae: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 8ac5b1: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 8ac5b5: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 8ac5b7: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ac5b9: fstp dword ptr [esp + 0x220] */
  WF32((uint32_t)(esp + 0x220u), ST0); FPOP();
/* 8ac5c0: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8ac5c2: fmul dword ptr [esp + 0x94] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x94u)));
/* 8ac5c9: fstp dword ptr [esp + 0xa0] */
  WF32((uint32_t)(esp + 0xa0u), ST0); FPOP();
/* 8ac5d0: mov edx, dword ptr [esp + 0xa0] */
  edx = R32((uint32_t)(esp + 0xa0u));
/* 8ac5d7: mov dword ptr [esp + 0x38], edx */
  W32((uint32_t)(esp + 0x38u), edx);
/* 8ac5db: fmul dword ptr [esp + 0x94] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x94u)));
/* 8ac5e2: fstp dword ptr [esp + 0xa4] */
  WF32((uint32_t)(esp + 0xa4u), ST0); FPOP();
/* 8ac5e9: fld dword ptr [esp + 0x220] */
  { double v = F32((uint32_t)(esp + 0x220u)); FPUSH(v); }
/* 8ac5f0: mov eax, dword ptr [esp + 0xa4] */
  eax = R32((uint32_t)(esp + 0xa4u));
/* 8ac5f7: fmul dword ptr [esp + 0x94] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x94u)));
/* 8ac5fe: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 8ac602: lea eax, [esp + 0x26c] */
  eax = (uint32_t)(esp + 0x26cu);
/* 8ac609: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ac60a: fstp dword ptr [esp + 0xac] */
  WF32((uint32_t)(esp + 0xacu), ST0); FPOP();
/* 8ac611: fld dword ptr [esp + 0xac] */
  { double v = F32((uint32_t)(esp + 0xacu)); FPUSH(v); }
/* 8ac618: mov ecx, dword ptr [esp + 0xac] */
  ecx = R32((uint32_t)(esp + 0xacu));
/* 8ac61f: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 8ac623: mov dword ptr [esp + 0x44], ecx */
  W32((uint32_t)(esp + 0x44u), ecx);
/* 8ac627: fld dword ptr [esp + 0xa8] */
  { double v = F32((uint32_t)(esp + 0xa8u)); FPUSH(v); }
/* 8ac62e: mov edx, dword ptr [esi + 0x6c] */
  edx = R32((uint32_t)(esi + 0x6cu));
/* 8ac631: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 8ac635: lea ecx, [esp + 0x1ec] */
  ecx = (uint32_t)(esp + 0x1ecu);
/* 8ac63c: mov dword ptr [esp + 0x9c], edx */
  W32((uint32_t)(esp + 0x9cu), edx);
/* 8ac643: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ac645: fstp dword ptr [esp + 0x1ec] */
  WF32((uint32_t)(esp + 0x1ecu), ST0); FPOP();
/* 8ac64c: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 8ac650: fmul dword ptr [esp + 0xa4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xa4u)));
/* 8ac657: fld dword ptr [esp + 0xac] */
  { double v = F32((uint32_t)(esp + 0xacu)); FPUSH(v); }
/* 8ac65e: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 8ac662: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ac664: fstp dword ptr [esp + 0x1f0] */
  WF32((uint32_t)(esp + 0x1f0u), ST0); FPOP();
/* 8ac66b: fld dword ptr [esp + 0xa8] */
  { double v = F32((uint32_t)(esp + 0xa8u)); FPUSH(v); }
/* 8ac672: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 8ac676: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 8ac67a: fmul dword ptr [esp + 0xa4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xa4u)));
/* 8ac681: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ac683: fstp dword ptr [esp + 0x1f4] */
  WF32((uint32_t)(esp + 0x1f4u), ST0); FPOP();
/* 8ac68a: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x8ac690u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 8ac690: fld dword ptr [esp + 0x98] */
  { double v = F32((uint32_t)(esp + 0x98u)); FPUSH(v); }
/* 8ac697: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 8ac699: fstp dword ptr [esp + 0x1b8] */
  WF32((uint32_t)(esp + 0x1b8u), ST0); FPOP();
/* 8ac6a0: mov ecx, dword ptr [esp + 0x1b8] */
  ecx = R32((uint32_t)(esp + 0x1b8u));
/* 8ac6a7: fld dword ptr [esp + 0x98] */
  { double v = F32((uint32_t)(esp + 0x98u)); FPUSH(v); }
/* 8ac6ae: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 8ac6b1: fstp dword ptr [esp + 0x1bc] */
  WF32((uint32_t)(esp + 0x1bcu), ST0); FPOP();
/* 8ac6b8: fld dword ptr [esp + 0x98] */
  { double v = F32((uint32_t)(esp + 0x98u)); FPUSH(v); }
/* 8ac6bf: mov edx, dword ptr [esp + 0x1bc] */
  edx = R32((uint32_t)(esp + 0x1bcu));
/* 8ac6c6: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 8ac6c9: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 8ac6cd: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 8ac6d1: fstp dword ptr [esp + 0x1c0] */
  WF32((uint32_t)(esp + 0x1c0u), ST0); FPOP();
/* 8ac6d8: mov eax, dword ptr [esp + 0x1c0] */
  eax = R32((uint32_t)(esp + 0x1c0u));
/* 8ac6df: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8ac6e3: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 8ac6e7: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 8ac6eb: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 8ac6ef: mov dword ptr [esp + 0xec], ecx */
  W32((uint32_t)(esp + 0xecu), ecx);
/* 8ac6f6: mov dword ptr [esp + 0xf0], edx */
  W32((uint32_t)(esp + 0xf0u), edx);
/* 8ac6fd: mov dword ptr [esp + 0xf4], eax */
  W32((uint32_t)(esp + 0xf4u), eax);
/* 8ac704: jmp 0x8ac78d */
  goto L_8ac78d;
L_8ac709: /* 8ac709: mov dword ptr [esp + 0x158], 0 */
  W32((uint32_t)(esp + 0x158u), 0x0u);
/* 8ac714: mov ecx, dword ptr [esp + 0x158] */
  ecx = R32((uint32_t)(esp + 0x158u));
/* 8ac71b: mov dword ptr [esp + 0x15c], 0 */
  W32((uint32_t)(esp + 0x15cu), 0x0u);
/* 8ac726: mov edx, dword ptr [esp + 0x15c] */
  edx = R32((uint32_t)(esp + 0x15cu));
/* 8ac72d: mov dword ptr [esp + 0x160], 0 */
  W32((uint32_t)(esp + 0x160u), 0x0u);
/* 8ac738: mov eax, dword ptr [esp + 0x160] */
  eax = R32((uint32_t)(esp + 0x160u));
/* 8ac73f: mov dword ptr [esp + 0x38], ecx */
  W32((uint32_t)(esp + 0x38u), ecx);
/* 8ac743: mov dword ptr [esp + 0x3c], edx */
  W32((uint32_t)(esp + 0x3cu), edx);
/* 8ac747: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* 8ac74b: mov dword ptr [esp + 0x164], 0 */
  W32((uint32_t)(esp + 0x164u), 0x0u);
/* 8ac756: mov ecx, dword ptr [esp + 0x164] */
  ecx = R32((uint32_t)(esp + 0x164u));
/* 8ac75d: mov dword ptr [esp + 0x168], 0 */
  W32((uint32_t)(esp + 0x168u), 0x0u);
/* 8ac768: mov edx, dword ptr [esp + 0x168] */
  edx = R32((uint32_t)(esp + 0x168u));
/* 8ac76f: mov dword ptr [esp + 0x16c], 0 */
  W32((uint32_t)(esp + 0x16cu), 0x0u);
/* 8ac77a: mov eax, dword ptr [esp + 0x16c] */
  eax = R32((uint32_t)(esp + 0x16cu));
/* 8ac781: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 8ac785: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 8ac789: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
L_8ac78d: /* 8ac78d: test byte ptr [edi + 0x214], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x214u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8ac794: je 0x8ac847 */
  if (zf) goto L_8ac847;
L_8ac79a: /* 8ac79a: fld dword ptr [esi + 0x30] */
  { double v = F32((uint32_t)(esi + 0x30u)); FPUSH(v); }
/* 8ac79d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ac79e: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8ac7a4: fld dword ptr [esp + 0x94] */
  { double v = F32((uint32_t)(esp + 0x94u)); FPUSH(v); }
/* 8ac7ab: fmul dword ptr [esi + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x30u)));
/* 8ac7ae: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ac7b0: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8ac7b3: jp 0x8ac7d2 */
  if (pf) goto L_8ac7d2;
L_8ac7b5: /* 8ac7b5: fsubr dword ptr [esi + 0x3c] */
  ST0 = (F32((uint32_t)(esi + 0x3cu))) - ST0;
/* 8ac7b8: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8ac7bb: call dword ptr [0xcfa5d8] */
  esp -= 4; W32(esp, 0x8ac7c1u); SPILL(); f_4e15aa(); if (g_unwind) return; /* Core!?appRound@@YAHM@Z */ RELOAD();
/* 8ac7c1: and eax, 0xffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8ac7c6: mov ebp, 0xffff */
  ebp = 0xffffu;
/* 8ac7cb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ac7ce: sub ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 8ac7d0: jmp 0x8ac7e9 */
  goto L_8ac7e9;
L_8ac7d2: /* 8ac7d2: fadd dword ptr [esi + 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x3cu)));
/* 8ac7d5: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8ac7d8: call dword ptr [0xcfa5d8] */
  esp -= 4; W32(esp, 0x8ac7deu); SPILL(); f_4e15aa(); if (g_unwind) return; /* Core!?appRound@@YAHM@Z */ RELOAD();
/* 8ac7de: mov ebp, eax */
  ebp = eax;
/* 8ac7e0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ac7e3: and ebp, 0xffff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
L_8ac7e9: /* 8ac7e9: lea ecx, [esp + 0xec] */
  ecx = (uint32_t)(esp + 0xecu);
/* 8ac7f0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ac7f1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8ac7f2: lea edx, [esp + 0x280] */
  edx = (uint32_t)(esp + 0x280u);
/* 8ac7f9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ac7fa: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 8ac7fe: call dword ptr [0xcfa648] */
  esp -= 4; W32(esp, 0x8ac804u); SPILL(); f_4e27b6(); if (g_unwind) return; /* Core!?RotateAngleAxis@FVector@@QBE?AV1@HABV1@@Z */ RELOAD();
/* 8ac804: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8ac806: mov dword ptr [esp + 0x38], ecx */
  W32((uint32_t)(esp + 0x38u), ecx);
/* 8ac80a: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8ac80d: lea ecx, [esp + 0xec] */
  ecx = (uint32_t)(esp + 0xecu);
/* 8ac814: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ac815: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 8ac819: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8ac81c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8ac81d: lea edx, [esp + 0x268] */
  edx = (uint32_t)(esp + 0x268u);
/* 8ac824: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ac825: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 8ac829: mov dword ptr [esp + 0x4c], eax */
  W32((uint32_t)(esp + 0x4cu), eax);
/* 8ac82d: call dword ptr [0xcfa648] */
  esp -= 4; W32(esp, 0x8ac833u); SPILL(); f_4e27b6(); if (g_unwind) return; /* Core!?RotateAngleAxis@FVector@@QBE?AV1@HABV1@@Z */ RELOAD();
/* 8ac833: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8ac835: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 8ac839: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8ac83c: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 8ac840: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8ac843: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
L_8ac847: /* 8ac847: mov edx, dword ptr [edi + 0x31c] */
  edx = R32((uint32_t)(edi + 0x31cu));
/* 8ac84d: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 8ac853: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ac855: mov eax, dword ptr [esi + 0xc0] */
  eax = R32((uint32_t)(esi + 0xc0u));
/* 8ac85b: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 8ac863: mov dword ptr [esp + 0x50], 0 */
  W32((uint32_t)(esp + 0x50u), 0x0u);
/* 8ac86b: mov dword ptr [esp + 0x48], 0 */
  W32((uint32_t)(esp + 0x48u), 0x0u);
/* 8ac873: mov dword ptr [esp + 0x5c], 0x3f800000 */
  W32((uint32_t)(esp + 0x5cu), 0x3f800000u);
/* 8ac87b: mov dword ptr [esp + 0x54], 0x3f800000 */
  W32((uint32_t)(esp + 0x54u), 0x3f800000u);
/* 8ac883: mov dword ptr [esp + 0x70], 0 */
  W32((uint32_t)(esp + 0x70u), 0x0u);
/* 8ac88b: mov dword ptr [esp + 0x80], 0x3f800000 */
  W32((uint32_t)(esp + 0x80u), 0x3f800000u);
/* 8ac896: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 8ac89a: je 0x8acb84 */
  if (zf) goto L_8acb84;
L_8ac8a0: /* 8ac8a0: mov ecx, dword ptr [edi + 0x320] */
  ecx = R32((uint32_t)(edi + 0x320u));
/* 8ac8a6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ac8a8: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
/* 8ac8ac: je 0x8acb84 */
  if (zf) goto L_8acb84;
L_8ac8b2: /* 8ac8b2: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8ac8b5: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 8ac8b9: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 8ac8bf: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 8ac8c3: fild dword ptr [esp + 0x30] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 8ac8c7: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 8ac8cd: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 8ac8d1: je 0x8ac943 */
  if (zf) goto L_8ac943;
L_8ac8d3: /* 8ac8d3: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8ac8d4: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8ac8d6: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x8ac8d6);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 8ac8d8: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 8ac8dc: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 8ac8e0: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 8ac8e4: fmul dword ptr [esp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x30u)));
/* 8ac8e8: fstp dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 8ac8ec: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 8ac8f0: fadd dword ptr [esp + 0x50] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x50u)));
/* 8ac8f4: fcom dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
/* 8ac8fa: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ac8fc: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8ac8ff: jp 0x8ac907 */
  if (pf) goto L_8ac907;
L_8ac901: /* 8ac901: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
/* 8ac905: jmp 0x8ac911 */
  goto L_8ac911;
L_8ac907: /* 8ac907: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8ac909: mov dword ptr [esp + 0x54], 0x3f800000 */
  W32((uint32_t)(esp + 0x54u), 0x3f800000u);
L_8ac911: /* 8ac911: fild dword ptr [esp + 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 8ac915: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 8ac919: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 8ac91d: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 8ac921: fadd dword ptr [esp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x20u)));
/* 8ac925: fcom dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
/* 8ac92b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ac92d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8ac930: jnp 0x8acb84 */
  if (!pf) goto L_8acb84;
L_8ac936: /* 8ac936: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8ac938: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 8ac93e: jmp 0x8acb84 */
  goto L_8acb84;
L_8ac943: /* 8ac943: fld dword ptr [esi + 0xb0] */
  { double v = F32((uint32_t)(esi + 0xb0u)); FPUSH(v); }
/* 8ac949: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8ac94f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ac951: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8ac954: jnp 0x8acb84 */
  if (!pf) goto L_8acb84;
L_8ac95a: /* 8ac95a: mov al, byte ptr [edi + 0x324] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x324u))) & 0xffu);
/* 8ac960: imul ecx, edx */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edx);
  ecx = (uint32_t)r;
  }
/* 8ac963: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8ac965: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8ac967: mov dword ptr [esp + 0x4c], ecx */
  W32((uint32_t)(esp + 0x4cu), ecx);
/* 8ac96b: je 0x8ac998 */
  if (zf) goto L_8ac998;
L_8ac96d: /* 8ac96d: mov edx, dword ptr [edi + 0x32c] */
  edx = R32((uint32_t)(edi + 0x32cu));
/* 8ac973: xor ecx, ecx */
  ecx = 0;
/* 8ac975: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8ac977: jle 0x8ac9f1 */
  if ((zf || sf != of)) goto L_8ac9f1;
L_8ac979: /* 8ac979: mov ebp, dword ptr [edi + 0x328] */
  ebp = R32((uint32_t)(edi + 0x328u));
/* 8ac97f: nop  */
L_8ac980: /* 8ac980: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 8ac984: fcomp dword ptr [ebp] */
  fpu_com(ST0, F32((uint32_t)(ebp)));
  FPOP();
/* 8ac987: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ac989: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8ac98c: jnp 0x8ac9f1 */
  if (!pf) goto L_8ac9f1;
L_8ac98e: /* 8ac98e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8ac98f: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 8ac992: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ac994: jl 0x8ac980 */
  if ((sf != of)) goto L_8ac980;
L_8ac996: /* 8ac996: jmp 0x8ac9f1 */
  goto L_8ac9f1;
L_8ac998: /* 8ac998: mov eax, dword ptr [edi + 0x338] */
  eax = R32((uint32_t)(edi + 0x338u));
/* 8ac99e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ac9a0: je 0x8ac9da */
  if (zf) goto L_8ac9da;
L_8ac9a2: /* 8ac9a2: sub eax, dword ptr [edi + 0x334] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x334u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8ac9a8: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ac9ab: mov dword ptr [esp + 0x4c], 1 */
  W32((uint32_t)(esp + 0x4cu), 0x1u);
/* 8ac9b3: jle 0x8ac9b9 */
  if ((zf || sf != of)) goto L_8ac9b9;
L_8ac9b5: /* 8ac9b5: mov dword ptr [esp + 0x4c], eax */
  W32((uint32_t)(esp + 0x4cu), eax);
L_8ac9b9: /* 8ac9b9: fild dword ptr [esp + 0x4c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 8ac9bd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ac9be: fmul dword ptr [esp + 0x48] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x48u)));
/* 8ac9c2: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8ac9c5: call dword ptr [0xcfa3dc] */
  esp -= 4; W32(esp, 0x8ac9cbu); SPILL(); f_4e392c(); if (g_unwind) return; /* Core!?appFloor@@YAHM@Z */ RELOAD();
/* 8ac9cb: mov ecx, eax */
  ecx = eax;
/* 8ac9cd: mov eax, dword ptr [edi + 0x334] */
  eax = R32((uint32_t)(edi + 0x334u));
/* 8ac9d3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ac9d6: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8ac9d8: jmp 0x8ac9f1 */
  goto L_8ac9f1;
L_8ac9da: /* 8ac9da: fild dword ptr [esp + 0x4c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 8ac9de: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ac9df: fmul dword ptr [esp + 0x48] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x48u)));
/* 8ac9e3: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8ac9e6: call dword ptr [0xcfa3dc] */
  esp -= 4; W32(esp, 0x8ac9ecu); SPILL(); f_4e392c(); if (g_unwind) return; /* Core!?appFloor@@YAHM@Z */ RELOAD();
/* 8ac9ec: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ac9ef: mov ecx, eax */
  ecx = eax;
L_8ac9f1: /* 8ac9f1: mov ebp, dword ptr [edi + 0x320] */
  ebp = R32((uint32_t)(edi + 0x320u));
/* 8ac9f7: mov eax, dword ptr [edi + 0x31c] */
  eax = R32((uint32_t)(edi + 0x31cu));
/* 8ac9fd: imul eax, ebp */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ebp);
  eax = (uint32_t)r;
  }
/* 8aca00: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8aca01: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8aca03: jge 0x8aca09 */
  if ((sf == of)) goto L_8aca09;
L_8aca05: /* 8aca05: xor ecx, ecx */
  ecx = 0;
/* 8aca07: jmp 0x8aca0f */
  goto L_8aca0f;
L_8aca09: /* 8aca09: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8aca0b: jl 0x8aca0f */
  if ((sf != of)) goto L_8aca0f;
L_8aca0d: /* 8aca0d: mov ecx, eax */
  ecx = eax;
L_8aca0f: /* 8aca0f: mov eax, ecx */
  eax = ecx;
/* 8aca11: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8aca12: idiv ebp */
  { int32_t d = (int32_t)ebp; if (!d) d = (int32_t)guest_divzero(0x8aca12);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 8aca14: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 8aca18: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 8aca1c: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 8aca20: fmul dword ptr [esp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x30u)));
/* 8aca24: fstp dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 8aca28: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 8aca2c: fadd dword ptr [esp + 0x50] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x50u)));
/* 8aca30: fcom dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
/* 8aca36: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8aca38: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8aca3b: jp 0x8aca43 */
  if (pf) goto L_8aca43;
L_8aca3d: /* 8aca3d: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
/* 8aca41: jmp 0x8aca4d */
  goto L_8aca4d;
L_8aca43: /* 8aca43: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8aca45: mov dword ptr [esp + 0x54], 0x3f800000 */
  W32((uint32_t)(esp + 0x54u), 0x3f800000u);
L_8aca4d: /* 8aca4d: fild dword ptr [esp + 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 8aca51: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 8aca55: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 8aca59: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 8aca5d: fadd dword ptr [esp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x20u)));
/* 8aca61: fcom dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
/* 8aca67: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8aca69: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8aca6c: jnp 0x8aca76 */
  if (!pf) goto L_8aca76;
L_8aca6e: /* 8aca6e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8aca70: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_8aca76: /* 8aca76: mov al, byte ptr [edi + 0x324] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x324u))) & 0xffu);
/* 8aca7c: fst dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0);
/* 8aca80: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8aca82: je 0x8acb84 */
  if (zf) goto L_8acb84;
L_8aca88: /* 8aca88: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 8aca8c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8aca8d: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8aca8f: je 0x8acad1 */
  if (zf) goto L_8acad1;
L_8aca91: /* 8aca91: mov eax, ecx */
  eax = ecx;
/* 8aca93: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8aca95: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8aca96: idiv ebp */
  { int32_t d = (int32_t)ebp; if (!d) d = (int32_t)guest_divzero(0x8aca96);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 8aca98: mov dword ptr [esp + 0x5c], edx */
  W32((uint32_t)(esp + 0x5cu), edx);
/* 8aca9c: fild dword ptr [esp + 0x5c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 8acaa0: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 8acaa4: fmul dword ptr [esp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x30u)));
/* 8acaa8: fstp dword ptr [esp + 0x70] */
  WF32((uint32_t)(esp + 0x70u), ST0); FPOP();
/* 8acaac: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 8acab0: fadd dword ptr [esp + 0x70] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x70u)));
/* 8acab4: fstp dword ptr [esp + 0x80] */
  WF32((uint32_t)(esp + 0x80u), ST0); FPOP();
/* 8acabb: fild dword ptr [esp + 0x48] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 8acabf: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 8acac3: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 8acac7: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 8acacb: fadd dword ptr [esp + 0x48] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x48u)));
/* 8acacf: jmp 0x8acaec */
  goto L_8acaec;
L_8acad1: /* 8acad1: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 8acad5: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* 8acad9: mov dword ptr [esp + 0x70], edx */
  W32((uint32_t)(esp + 0x70u), edx);
/* 8acadd: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 8acae1: mov dword ptr [esp + 0x80], eax */
  W32((uint32_t)(esp + 0x80u), eax);
/* 8acae8: mov dword ptr [esp + 0x48], edx */
  W32((uint32_t)(esp + 0x48u), edx);
L_8acaec: /* 8acaec: mov al, byte ptr [edi + 0x324] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x324u))) & 0xffu);
/* 8acaf2: fstp dword ptr [esp + 0x5c] */
  WF32((uint32_t)(esp + 0x5cu), ST0); FPOP();
/* 8acaf6: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8acaf8: je 0x8acb4b */
  if (zf) goto L_8acb4b;
L_8acafa: /* 8acafa: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 8acafe: cmp dword ptr [edi + 0x32c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x32cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8acb04: jle 0x8acb4b */
  if ((zf || sf != of)) goto L_8acb4b;
L_8acb06: /* 8acb06: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 8acb07: jne 0x8acb11 */
  if (!zf) goto L_8acb11;
L_8acb09: /* 8acb09: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 8acb0f: jmp 0x8acb1b */
  goto L_8acb1b;
L_8acb11: /* 8acb11: mov edx, dword ptr [edi + 0x328] */
  edx = R32((uint32_t)(edi + 0x328u));
/* 8acb17: fld dword ptr [edx + ecx*4 - 4] */
  { double v = F32((uint32_t)(edx + ecx*4 + 0xfffffffcu)); FPUSH(v); }
L_8acb1b: /* 8acb1b: mov eax, dword ptr [edi + 0x328] */
  eax = R32((uint32_t)(edi + 0x328u));
/* 8acb21: fld dword ptr [eax + ecx*4] */
  { double v = F32((uint32_t)(eax + ecx*4)); FPUSH(v); }
/* 8acb24: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 8acb2a: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 8acb2c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8acb2e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8acb31: jp 0x8acb3b */
  if (pf) goto L_8acb3b;
L_8acb33: /* 8acb33: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8acb35: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_8acb3b: /* 8acb3b: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 8acb3f: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 8acb41: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8acb43: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 8acb45: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 8acb47: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 8acb49: jmp 0x8acb71 */
  goto L_8acb71;
L_8acb4b: /* 8acb4b: fild dword ptr [esp + 0x4c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 8acb4f: fmul dword ptr [esp + 0x44] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x44u)));
/* 8acb53: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 8acb57: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 8acb5b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8acb5c: call dword ptr [0xcfa3dc] */
  esp -= 4; W32(esp, 0x8acb62u); SPILL(); f_4e392c(); if (g_unwind) return; /* Core!?appFloor@@YAHM@Z */ RELOAD();
/* 8acb62: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 8acb66: fild dword ptr [esp + 0x34] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 8acb6a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8acb6d: fsubr dword ptr [esp + 0x34] */
  ST0 = (F32((uint32_t)(esp + 0x34u))) - ST0;
L_8acb71: /* 8acb71: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 8acb77: call 0x99c958 */
  esp -= 4; W32(esp, 0x8acb7cu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8acb7c: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 8acb80: mov byte ptr [esp + 0x5b], al */
  W8((uint32_t)(esp + 0x5bu), (eax & 0xffu));
L_8acb84: /* 8acb84: mov edx, dword ptr [0xcfa278] */
  edx = R32((uint32_t)(0xcfa278u));
/* 8acb8a: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8acb8d: je 0x8acbb5 */
  if (zf) goto L_8acbb5;
L_8acb8f: /* 8acb8f: mov al, byte ptr [esp + 0x5a] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x5au))) & 0xffu);
/* 8acb93: mov cl, byte ptr [esp + 0x59] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x59u))) & 0xffu);
/* 8acb97: mov dl, byte ptr [esp + 0x58] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x58u))) & 0xffu);
/* 8acb9b: mov byte ptr [esp + 0x6c], al */
  W8((uint32_t)(esp + 0x6cu), (eax & 0xffu));
/* 8acb9f: mov al, byte ptr [esp + 0x5b] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x5bu))) & 0xffu);
/* 8acba3: mov byte ptr [esp + 0x6d], cl */
  W8((uint32_t)(esp + 0x6du), (ecx & 0xffu));
/* 8acba7: mov byte ptr [esp + 0x6e], dl */
  W8((uint32_t)(esp + 0x6eu), (edx & 0xffu));
/* 8acbab: mov byte ptr [esp + 0x6f], al */
  W8((uint32_t)(esp + 0x6fu), (eax & 0xffu));
/* 8acbaf: mov eax, dword ptr [esp + 0x6c] */
  eax = R32((uint32_t)(esp + 0x6cu));
/* 8acbb3: jmp 0x8acbbd */
  goto L_8acbbd;
L_8acbb5: /* 8acbb5: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* 8acbb9: mov dword ptr [esp + 0x6c], eax */
  W32((uint32_t)(esp + 0x6cu), eax);
L_8acbbd: /* 8acbbd: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8acbbf: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 8acbc2: mov dword ptr [esp + 0xd0], ecx */
  W32((uint32_t)(esp + 0xd0u), ecx);
/* 8acbc9: fld dword ptr [esp + 0xd0] */
  { double v = F32((uint32_t)(esp + 0xd0u)); FPUSH(v); }
/* 8acbd0: fsub dword ptr [esp + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x38u)));
/* 8acbd4: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 8acbd7: mov dword ptr [esp + 0xd4], edx */
  W32((uint32_t)(esp + 0xd4u), edx);
/* 8acbde: mov dword ptr [esp + 0xd8], ecx */
  W32((uint32_t)(esp + 0xd8u), ecx);
/* 8acbe5: fst dword ptr [esp + 0x20c] */
  WF32((uint32_t)(esp + 0x20cu), ST0);
/* 8acbec: mov edx, ebx */
  edx = ebx;
/* 8acbee: fld dword ptr [esp + 0xd4] */
  { double v = F32((uint32_t)(esp + 0xd4u)); FPUSH(v); }
/* 8acbf5: mov dword ptr [ebx + 0xc], eax */
  W32((uint32_t)(ebx + 0xcu), eax);
/* 8acbf8: fsub dword ptr [esp + 0x3c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x3cu)));
/* 8acbfc: add ebx, 0x20 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8acbff: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8acc01: fld dword ptr [esp + 0xd8] */
  { double v = F32((uint32_t)(esp + 0xd8u)); FPUSH(v); }
/* 8acc08: fsub dword ptr [esp + 0x40] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x40u)));
/* 8acc0c: fst dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0);
/* 8acc10: fld dword ptr [esp + 0x20c] */
  { double v = F32((uint32_t)(esp + 0x20cu)); FPUSH(v); }
/* 8acc17: fsub dword ptr [esp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x24u)));
/* 8acc1b: fstp dword ptr [esp + 0x104] */
  WF32((uint32_t)(esp + 0x104u), ST0); FPOP();
/* 8acc22: mov ecx, dword ptr [esp + 0x104] */
  ecx = R32((uint32_t)(esp + 0x104u));
/* 8acc29: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8acc2b: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 8acc2d: fsub dword ptr [esp + 0x28] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x28u)));
/* 8acc31: fstp dword ptr [esp + 0x108] */
  WF32((uint32_t)(esp + 0x108u), ST0); FPOP();
/* 8acc38: mov ecx, dword ptr [esp + 0x108] */
  ecx = R32((uint32_t)(esp + 0x108u));
/* 8acc3f: fsub dword ptr [esp + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x2cu)));
/* 8acc43: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8acc46: fstp dword ptr [esp + 0x10c] */
  WF32((uint32_t)(esp + 0x10cu), ST0); FPOP();
/* 8acc4d: mov ecx, dword ptr [esp + 0x10c] */
  ecx = R32((uint32_t)(esp + 0x10cu));
/* 8acc54: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8acc56: fstp dword ptr [esp + 0x200] */
  WF32((uint32_t)(esp + 0x200u), ST0); FPOP();
/* 8acc5d: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8acc60: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 8acc64: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 8acc68: fld dword ptr [esp + 0x200] */
  { double v = F32((uint32_t)(esp + 0x200u)); FPUSH(v); }
/* 8acc6f: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 8acc73: fadd dword ptr [esp + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x24u)));
/* 8acc77: mov dword ptr [ebx - 8], ecx */
  W32((uint32_t)(ebx + 0xfffffff8u), ecx);
/* 8acc7a: mov ecx, dword ptr [esp + 0x80] */
  ecx = R32((uint32_t)(esp + 0x80u));
/* 8acc81: mov dword ptr [ebx - 0x10], edx */
  W32((uint32_t)(ebx + 0xfffffff0u), edx);
/* 8acc84: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 8acc88: fstp dword ptr [esp + 0x110] */
  WF32((uint32_t)(esp + 0x110u), ST0); FPOP();
/* 8acc8f: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8acc91: mov dword ptr [ebx - 4], ecx */
  W32((uint32_t)(ebx + 0xfffffffcu), ecx);
/* 8acc94: fadd dword ptr [esp + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x28u)));
/* 8acc98: mov ecx, dword ptr [esp + 0x110] */
  ecx = R32((uint32_t)(esp + 0x110u));
/* 8acc9f: mov dword ptr [ebx - 0xc], edx */
  W32((uint32_t)(ebx + 0xfffffff4u), edx);
/* 8acca2: mov edx, ebx */
  edx = ebx;
/* 8acca4: fstp dword ptr [esp + 0x114] */
  WF32((uint32_t)(esp + 0x114u), ST0); FPOP();
/* 8accab: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 8accad: fadd dword ptr [esp + 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x2cu)));
/* 8accb1: mov ecx, dword ptr [esp + 0x114] */
  ecx = R32((uint32_t)(esp + 0x114u));
/* 8accb8: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8accbb: mov dword ptr [ebx + 0xc], eax */
  W32((uint32_t)(ebx + 0xcu), eax);
/* 8accbe: fstp dword ptr [esp + 0x118] */
  WF32((uint32_t)(esp + 0x118u), ST0); FPOP();
/* 8accc5: mov ecx, dword ptr [esp + 0x118] */
  ecx = R32((uint32_t)(esp + 0x118u));
/* 8acccc: fst dword ptr [ebx + 0x10] */
  WF32((uint32_t)(ebx + 0x10u), ST0);
/* 8acccf: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8accd2: fld dword ptr [esp + 0xd0] */
  { double v = F32((uint32_t)(esp + 0xd0u)); FPUSH(v); }
/* 8accd9: mov edx, dword ptr [esp + 0x5c] */
  edx = R32((uint32_t)(esp + 0x5cu));
/* 8accdd: fadd dword ptr [esp + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x38u)));
/* 8acce1: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 8acce5: mov dword ptr [ebx + 0x18], edx */
  W32((uint32_t)(ebx + 0x18u), edx);
/* 8acce8: mov edx, dword ptr [esp + 0x80] */
  edx = R32((uint32_t)(esp + 0x80u));
/* 8accef: fst dword ptr [esp + 0x1f4] */
  WF32((uint32_t)(esp + 0x1f4u), ST0);
/* 8accf6: mov dword ptr [ebx + 0x14], ecx */
  W32((uint32_t)(ebx + 0x14u), ecx);
/* 8accf9: fld dword ptr [esp + 0xd4] */
  { double v = F32((uint32_t)(esp + 0xd4u)); FPUSH(v); }
/* 8acd00: mov dword ptr [ebx + 0x1c], edx */
  W32((uint32_t)(ebx + 0x1cu), edx);
/* 8acd03: fadd dword ptr [esp + 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x3cu)));
/* 8acd07: add ebx, 0x20 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8acd0a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8acd0c: fld dword ptr [esp + 0xd8] */
  { double v = F32((uint32_t)(esp + 0xd8u)); FPUSH(v); }
/* 8acd13: fadd dword ptr [esp + 0x40] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x40u)));
/* 8acd17: fst dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0);
/* 8acd1b: fld dword ptr [esp + 0x1f4] */
  { double v = F32((uint32_t)(esp + 0x1f4u)); FPUSH(v); }
/* 8acd22: fsub dword ptr [esp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x24u)));
/* 8acd26: mov ecx, ebx */
  ecx = ebx;
/* 8acd28: mov dword ptr [ebx + 0xc], eax */
  W32((uint32_t)(ebx + 0xcu), eax);
/* 8acd2b: add ebx, 0x20 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8acd2e: fstp dword ptr [esp + 0x128] */
  WF32((uint32_t)(esp + 0x128u), ST0); FPOP();
/* 8acd35: mov edx, dword ptr [esp + 0x128] */
  edx = R32((uint32_t)(esp + 0x128u));
/* 8acd3c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8acd3e: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8acd40: fsub dword ptr [esp + 0x28] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x28u)));
/* 8acd44: fstp dword ptr [esp + 0x12c] */
  WF32((uint32_t)(esp + 0x12cu), ST0); FPOP();
/* 8acd4b: mov edx, dword ptr [esp + 0x12c] */
  edx = R32((uint32_t)(esp + 0x12cu));
/* 8acd52: fsub dword ptr [esp + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x2cu)));
/* 8acd56: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8acd59: fstp dword ptr [esp + 0x130] */
  WF32((uint32_t)(esp + 0x130u), ST0); FPOP();
/* 8acd60: mov edx, dword ptr [esp + 0x130] */
  edx = R32((uint32_t)(esp + 0x130u));
/* 8acd67: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8acd69: fstp dword ptr [esp + 0xdc] */
  WF32((uint32_t)(esp + 0xdcu), ST0); FPOP();
/* 8acd70: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8acd73: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 8acd77: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 8acd7b: fld dword ptr [esp + 0xdc] */
  { double v = F32((uint32_t)(esp + 0xdcu)); FPUSH(v); }
/* 8acd82: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 8acd86: fadd dword ptr [esp + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x24u)));
/* 8acd8a: mov dword ptr [ebx - 8], edx */
  W32((uint32_t)(ebx + 0xfffffff8u), edx);
/* 8acd8d: mov edx, dword ptr [esp + 0x70] */
  edx = R32((uint32_t)(esp + 0x70u));
/* 8acd91: mov dword ptr [ebx - 0x10], ecx */
  W32((uint32_t)(ebx + 0xfffffff0u), ecx);
/* 8acd94: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 8acd98: fstp dword ptr [esp + 0x140] */
  WF32((uint32_t)(esp + 0x140u), ST0); FPOP();
/* 8acd9f: mov dword ptr [ebx - 4], edx */
  W32((uint32_t)(ebx + 0xfffffffcu), edx);
/* 8acda2: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8acda4: fadd dword ptr [esp + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x28u)));
/* 8acda8: mov edx, dword ptr [esp + 0x140] */
  edx = R32((uint32_t)(esp + 0x140u));
/* 8acdaf: mov dword ptr [ebx - 0xc], ecx */
  W32((uint32_t)(ebx + 0xfffffff4u), ecx);
/* 8acdb2: mov ecx, ebx */
  ecx = ebx;
/* 8acdb4: fstp dword ptr [esp + 0x144] */
  WF32((uint32_t)(esp + 0x144u), ST0); FPOP();
/* 8acdbb: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8acdbd: fadd dword ptr [esp + 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x2cu)));
/* 8acdc1: mov edx, dword ptr [esp + 0x144] */
  edx = R32((uint32_t)(esp + 0x144u));
/* 8acdc8: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8acdcb: mov dword ptr [ebx + 0xc], eax */
  W32((uint32_t)(ebx + 0xcu), eax);
/* 8acdce: mov eax, dword ptr [esp + 0x5c] */
  eax = R32((uint32_t)(esp + 0x5cu));
/* 8acdd2: fstp dword ptr [esp + 0x148] */
  WF32((uint32_t)(esp + 0x148u), ST0); FPOP();
/* 8acdd9: mov edx, dword ptr [esp + 0x148] */
  edx = R32((uint32_t)(esp + 0x148u));
/* 8acde0: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8acde3: fstp dword ptr [ebx + 0x10] */
  WF32((uint32_t)(ebx + 0x10u), ST0); FPOP();
/* 8acde6: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 8acdea: mov edx, dword ptr [esp + 0x70] */
  edx = R32((uint32_t)(esp + 0x70u));
/* 8acdee: mov dword ptr [ebx + 0x18], eax */
  W32((uint32_t)(ebx + 0x18u), eax);
/* 8acdf1: mov dword ptr [ebx + 0x14], ecx */
  W32((uint32_t)(ebx + 0x14u), ecx);
/* 8acdf4: mov dword ptr [ebx + 0x1c], edx */
  W32((uint32_t)(ebx + 0x1cu), edx);
/* 8acdf7: add ebx, 0x20 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_8acdfa: /* 8acdfa: mov eax, dword ptr [esp + 0xe8] */
  eax = R32((uint32_t)(esp + 0xe8u));
/* 8ace01: mov edx, dword ptr [esp + 0x9c] */
  edx = R32((uint32_t)(esp + 0x9cu));
/* 8ace08: mov ecx, dword ptr [edi + 0x40c] */
  ecx = R32((uint32_t)(edi + 0x40cu));
/* 8ace0e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8ace0f: add edx, 0xc8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8ace15: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ace17: mov dword ptr [esp + 0xe8], eax */
  W32((uint32_t)(esp + 0xe8u), eax);
/* 8ace1e: mov dword ptr [esp + 0x9c], edx */
  W32((uint32_t)(esp + 0x9cu), edx);
/* 8ace25: jl 0x8ac010 */
  if ((sf != of)) goto L_8ac010;
L_8ace2b: /* 8ace2b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8ace2c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ace2d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8ace2e: xor eax, eax */
  eax = 0;
/* 8ace30: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8ace31: add esp, 0x2a4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2a4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ace37: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8ad2d0(void) {
  LOAD_REGS();
L_8ad2d0: /* 8ad2d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ad2d1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8ad2d2: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 8ad2d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ad2d9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ad2da: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 8ad2de: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8ad2e0: mov esi, ecx */
  esi = ecx;
/* 8ad2e2: jge 0x8ad2f8 */
  if ((sf == of)) goto L_8ad2f8;
L_8ad2e4: /* 8ad2e4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 8ad2e9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8ad2ee: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 8ad2f3: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x8ad2f5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ad2f5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8ad2f8: /* 8ad2f8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ad2fb: jle 0x8ad311 */
  if ((zf || sf != of)) goto L_8ad311;
L_8ad2fd: /* 8ad2fd: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 8ad302: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8ad307: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 8ad30c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x8ad30eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ad30e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8ad311: /* 8ad311: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 8ad315: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8ad318: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 8ad31b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ad31d: jle 0x8ad333 */
  if ((zf || sf != of)) goto L_8ad333;
L_8ad31f: /* 8ad31f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 8ad324: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8ad329: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 8ad32e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x8ad330u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ad330: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8ad333: /* 8ad333: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 8ad335: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ad336: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ad337: mov ecx, esi */
  ecx = esi;
/* 8ad339: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x8ad33fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 8ad33f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8ad340: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ad341: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8ad342: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8ad343: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8ad370(void) {
  LOAD_REGS();
L_8ad370: /* 8ad370: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8ad372: push 0x9d6669 */
  { uint32_t v = 0x9d6669u; esp -= 4; W32(esp, v); }
/* 8ad377: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8ad37d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ad37e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8ad385: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ad386: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ad387: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ad388: mov esi, ecx */
  esi = ecx;
/* 8ad38a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ad38b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 8ad38f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 8ad392: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8ad394: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 8ad39a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 8ad3a2: jge 0x8ad3b8 */
  if ((sf == of)) goto L_8ad3b8;
L_8ad3a4: /* 8ad3a4: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 8ad3a9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8ad3ae: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 8ad3b3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8ad3b5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ad3b5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8ad3b8: /* 8ad3b8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ad3bb: jle 0x8ad3d1 */
  if ((zf || sf != of)) goto L_8ad3d1;
L_8ad3bd: /* 8ad3bd: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 8ad3c2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8ad3c7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 8ad3cc: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8ad3ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ad3ce: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8ad3d1: /* 8ad3d1: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 8ad3d3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ad3d4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ad3d6: mov ecx, esi */
  ecx = esi;
/* 8ad3d8: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x8ad3deu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 8ad3de: mov ecx, esi */
  ecx = esi;
/* 8ad3e0: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 8ad3e8: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x8ad3eeu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 8ad3ee: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8ad3f2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8ad3f3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ad3f4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8ad3f5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8ad3fc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ad3ff: ret  */
  esp += 4; SPILL(); return;
}

void f_8ad430(void) {
  LOAD_REGS();
L_8ad430: /* 8ad430: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8ad433: jmp 0x6c8166 */
  SPILL(); f_6c8166(); return;
}

void f_8ad450(void) {
  LOAD_REGS();
L_8ad450: /* 8ad450: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8ad453: jmp 0x6c8166 */
  SPILL(); f_6c8166(); return;
}

void f_8ad470(void) {
  LOAD_REGS();
L_8ad470: /* 8ad470: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ad471: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8ad472: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ad473: mov esi, ecx */
  esi = ecx;
/* 8ad475: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ad476: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 8ad479: mov dword ptr [esi], 0xa1b3fc */
  W32((uint32_t)(esi), 0xa1b3fcu);
/* 8ad47f: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8ad485u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8ad485: mov ebp, dword ptr [0xcfa1b0] */
  ebp = R32((uint32_t)(0xcfa1b0u));
/* 8ad48b: mov ebx, dword ptr [ebp + 4] */
  ebx = R32((uint32_t)(ebp + 0x4u));
/* 8ad48e: mov edi, dword ptr [ebp] */
  edi = R32((uint32_t)(ebp));
/* 8ad491: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ad493: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 8ad498: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ad499: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ad49a: call 0x99c910 */
  esp -= 4; W32(esp, 0x8ad49fu); SPILL(); f_99c910(); if (g_unwind) return; RELOAD();
/* 8ad49f: add eax, 0xe1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 8ad4a4: adc edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 8ad4a7: add edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edi = r;
  }
/* 8ad4aa: mov dword ptr [ebp], edi */
  W32((uint32_t)(ebp), edi);
/* 8ad4ad: mov ecx, dword ptr [0xcfa1b0] */
  ecx = R32((uint32_t)(0xcfa1b0u));
/* 8ad4b3: adc ebx, 0 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ebx = r;
  }
/* 8ad4b6: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 8ad4b9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8ad4ba: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 8ad4bd: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 8ad4c0: mov eax, esi */
  eax = esi;
/* 8ad4c2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ad4c3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8ad4c4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8ad4c5: ret  */
  esp += 4; SPILL(); return;
}

void f_8ad4f0(void) {
  LOAD_REGS();
L_8ad4f0: /* 8ad4f0: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 8ad4f3: mov edx, dword ptr [ecx + 0x14] */
  edx = R32((uint32_t)(ecx + 0x14u));
/* 8ad4f6: ret  */
  esp += 4; SPILL(); return;
}

void f_8ad510(void) {
  LOAD_REGS();
L_8ad510: /* 8ad510: mov eax, 1 */
  eax = 0x1u;
/* 8ad515: ret  */
  esp += 4; SPILL(); return;
}

void f_8ad530(void) {
  LOAD_REGS();
L_8ad530: /* 8ad530: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 8ad533: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8ad536: ret  */
  esp += 4; SPILL(); return;
}

void f_8ad550(void) {
  LOAD_REGS();
L_8ad550: /* 8ad550: mov eax, 0x20 */
  eax = 0x20u;
/* 8ad555: ret  */
  esp += 4; SPILL(); return;
}

void f_8ad570(void) {
  LOAD_REGS();
L_8ad570: /* 8ad570: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8ad574: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ad575: call 0x6c8161 */
  esp -= 4; W32(esp, 0x8ad57au); SPILL(); f_6c8161(); if (g_unwind) return; RELOAD();
/* 8ad57a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ad57d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8ad590(void) {
  LOAD_REGS();
L_8ad590: /* 8ad590: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 8ad594: mov edx, 2 */
  edx = 0x2u;
/* 8ad599: mov eax, 4 */
  eax = 0x4u;
/* 8ad59e: mov dword ptr [ecx], 1 */
  W32((uint32_t)(ecx), 0x1u);
/* 8ad5a4: mov dword ptr [ecx + 4], 0 */
  W32((uint32_t)(ecx + 0x4u), 0x0u);
/* 8ad5ab: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 8ad5ae: mov dword ptr [ecx + 0xc], edx */
  W32((uint32_t)(ecx + 0xcu), edx);
/* 8ad5b1: mov dword ptr [ecx + 0x10], edx */
  W32((uint32_t)(ecx + 0x10u), edx);
/* 8ad5b4: mov dword ptr [ecx + 0x14], eax */
  W32((uint32_t)(ecx + 0x14u), eax);
/* 8ad5b7: mov dword ptr [ecx + 0x18], edx */
  W32((uint32_t)(ecx + 0x18u), edx);
/* 8ad5ba: mov dword ptr [ecx + 0x1c], 5 */
  W32((uint32_t)(ecx + 0x1cu), 0x5u);
/* 8ad5c1: ret  */
  esp += 4; SPILL(); return;
}

void f_8ad5e0(void) {
  LOAD_REGS();
L_8ad5e0: /* 8ad5e0: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 8ad5e3: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 8ad5e6: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 8ad5ea: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8ad5ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ad5ee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ad5ef: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ad5f0: call 0x6ca83f */
  esp -= 4; W32(esp, 0x8ad5f5u); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 8ad5f5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ad5f8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8ad610(void) {
  LOAD_REGS();
L_8ad610: /* 8ad610: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 8ad614: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 8ad617: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 8ad61b: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8ad61e: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8ad620: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 8ad622: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8ad640(void) {
  LOAD_REGS();
L_8ad640: /* 8ad640: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ad641: mov esi, ecx */
  esi = ecx;
/* 8ad643: call 0x6cbf3c */
  esp -= 4; W32(esp, 0x8ad648u); SPILL(); f_6cbf3c(); if (g_unwind) return; RELOAD();
/* 8ad648: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 8ad64c: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 8ad650: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 8ad654: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 8ad657: mov dword ptr [esi], 0xa1b428 */
  W32((uint32_t)(esi), 0xa1b428u);
/* 8ad65d: mov dword ptr [esi + 0x1c], ecx */
  W32((uint32_t)(esi + 0x1cu), ecx);
/* 8ad660: mov dword ptr [esi + 0x20], edx */
  W32((uint32_t)(esi + 0x20u), edx);
/* 8ad663: mov eax, esi */
  eax = esi;
/* 8ad665: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ad666: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_8ad680(void) {
  LOAD_REGS();
L_8ad680: /* 8ad680: mov eax, dword ptr [ecx + 0x1c] */
  eax = R32((uint32_t)(ecx + 0x1cu));
/* 8ad683: shl eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 7;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8ad686: ret  */
  esp += 4; SPILL(); return;
}

void f_8ad6a0(void) {
  LOAD_REGS();
L_8ad6a0: /* 8ad6a0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ad6a1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ad6a2: mov dword ptr [esp + 4], ecx */
  W32((uint32_t)(esp + 0x4u), ecx);
/* 8ad6a6: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 8ad6a8: mov esi, eax */
  esi = eax;
/* 8ad6aa: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8ad6ae: mov ecx, dword ptr [eax + 0x18] */
  ecx = R32((uint32_t)(eax + 0x18u));
/* 8ad6b1: mov eax, dword ptr [eax + 0x20] */
  eax = R32((uint32_t)(eax + 0x20u));
/* 8ad6b4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8ad6b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ad6b7: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 8ad6bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ad6bc: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x8ad6c2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ad6c2: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 8ad6c8: mov edx, dword ptr [0xce83e0] */
  edx = R32((uint32_t)(0xce83e0u));
/* 8ad6ce: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 8ad6d1: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 8ad6d3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8ad6d5: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8ad6d7: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8ad6d9: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8ad6db: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ad6dc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 8ad6dd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8ad6f0(void) {
  LOAD_REGS();
L_8ad6f0: /* 8ad6f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8ad6f1: mov ebp, esp */
  ebp = esp;
/* 8ad6f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8ad6f5: push 0x9d66b6 */
  { uint32_t v = 0x9d66b6u; esp -= 4; W32(esp, v); }
/* 8ad6fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8ad700: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ad701: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8ad708: sub esp, 0x14c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ad70e: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 8ad711: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8ad714: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ad715: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ad716: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ad717: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8ad71a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ad71b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8ad71e: mov ebx, ecx */
  ebx = ecx;
/* 8ad720: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 8ad723: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ad724: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ad725: xor esi, esi */
  esi = 0;
/* 8ad727: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ad728: mov ecx, ebx */
  ecx = ebx;
/* 8ad72a: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 8ad72d: call 0x6c20b8 */
  esp -= 4; W32(esp, 0x8ad732u); SPILL(); f_6c20b8(); if (g_unwind) return; RELOAD();
/* 8ad732: cmp dword ptr [ebx + 0x318], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x318u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8ad738: jne 0x8ad74f */
  if (!zf) goto L_8ad74f;
L_8ad73a: /* 8ad73a: xor eax, eax */
  eax = 0;
/* 8ad73c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8ad73f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8ad746: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8ad747: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ad748: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8ad749: mov esp, ebp */
  esp = ebp;
/* 8ad74b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8ad74c: ret 0x10 */
  esp += 20; SPILL(); return;
L_8ad74f: /* 8ad74f: mov ecx, dword ptr [ebx + 0x40c] */
  ecx = R32((uint32_t)(ebx + 0x40cu));
/* 8ad755: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ad757: mov dword ptr [ebp + 0x10], esi */
  W32((uint32_t)(ebp + 0x10u), esi);
/* 8ad75a: jle 0x8adb27 */
  if ((zf || sf != of)) goto L_8adb27;
L_8ad760: /* 8ad760: xor eax, eax */
  eax = 0;
L_8ad762: /* 8ad762: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ad764: jge 0x8ad785 */
  if ((sf == of)) goto L_8ad785;
L_8ad766: /* 8ad766: mov edi, dword ptr [ebx + 0x3fc] */
  edi = R32((uint32_t)(ebx + 0x3fcu));
/* 8ad76c: mov edx, eax */
  edx = eax;
/* 8ad76e: imul edx, edx, 0xc8 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0xc8u);
  edx = (uint32_t)r;
  }
/* 8ad774: test byte ptr [edi + edx + 0xbc], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + edx + 0xbcu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8ad77c: je 0x8ad782 */
  if (zf) goto L_8ad782;
L_8ad77e: /* 8ad77e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8ad77f: mov dword ptr [ebp + 0x10], esi */
  W32((uint32_t)(ebp + 0x10u), esi);
L_8ad782: /* 8ad782: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8ad783: jmp 0x8ad762 */
  goto L_8ad762;
L_8ad785: /* 8ad785: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ad787: je 0x8ad73a */
  if (zf) goto L_8ad73a;
L_8ad789: /* 8ad789: lea ecx, [ebp - 0x98] */
  ecx = (uint32_t)(ebp + 0xffffff68u);
/* 8ad78f: call 0x6cbf3c */
  esp -= 4; W32(esp, 0x8ad794u); SPILL(); f_6cbf3c(); if (g_unwind) return; RELOAD();
/* 8ad794: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8ad797: mov dword ptr [ebp - 0x98], 0xa1b428 */
  W32((uint32_t)(ebp + 0xffffff68u), 0xa1b428u);
/* 8ad7a1: mov dword ptr [ebp - 0x80], ebx */
  W32((uint32_t)(ebp + 0xffffff80u), ebx);
/* 8ad7a4: mov dword ptr [ebp - 0x7c], esi */
  W32((uint32_t)(ebp + 0xffffff84u), esi);
/* 8ad7a7: mov dword ptr [ebp - 0x78], eax */
  W32((uint32_t)(ebp + 0xffffff88u), eax);
/* 8ad7aa: mov eax, dword ptr [0xcfa1b0] */
  eax = R32((uint32_t)(0xcfa1b0u));
/* 8ad7af: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ad7b1: mov dword ptr [ebp - 0x30], 0xa1b3e4 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0xa1b3e4u);
/* 8ad7b8: mov dword ptr [ebp - 0x2c], esi */
  W32((uint32_t)(ebp + 0xffffffd4u), esi);
/* 8ad7bb: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 8ad7be: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 8ad7c0: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 8ad7c5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ad7c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ad7c7: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8ad7cb: call 0x99c910 */
  esp -= 4; W32(esp, 0x8ad7d0u); SPILL(); f_99c910(); if (g_unwind) return; RELOAD();
/* 8ad7d0: mov ecx, dword ptr [0xcfa1b0] */
  ecx = R32((uint32_t)(0xcfa1b0u));
/* 8ad7d6: add eax, 0xe2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe2u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 8ad7db: adc edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 8ad7de: add esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  esi = r;
  }
/* 8ad7e1: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 8ad7e3: mov ecx, dword ptr [0xcfa1b0] */
  ecx = R32((uint32_t)(0xcfa1b0u));
/* 8ad7e9: adc edi, 0 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edi = r;
  }
/* 8ad7ec: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 8ad7ef: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 8ad7f2: cmp byte ptr [ebx + 0xf4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0xf4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8ad7f9: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 8ad7fc: jne 0x8ad936 */
  if (!zf) goto L_8ad936;
L_8ad802: /* 8ad802: mov eax, dword ptr [ebx + 0x3f0] */
  eax = R32((uint32_t)(ebx + 0x3f0u));
/* 8ad808: lea edx, [eax + 0x170] */
  edx = (uint32_t)(eax + 0x170u);
/* 8ad80e: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8ad810: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 8ad813: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 8ad816: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8ad819: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8ad81c: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8ad81f: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8ad822: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8ad825: mov dword ptr [ebp - 0x40], ecx */
  W32((uint32_t)(ebp + 0xffffffc0u), ecx);
/* 8ad828: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8ad82b: mov dword ptr [ebp - 0x70], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff90u), 0x3f800000u);
/* 8ad832: mov dword ptr [ebp - 0x6c], 0 */
  W32((uint32_t)(ebp + 0xffffff94u), 0x0u);
/* 8ad839: mov dword ptr [ebp - 0x68], 0 */
  W32((uint32_t)(ebp + 0xffffff98u), 0x0u);
/* 8ad840: mov dword ptr [ebp - 0x64], 0 */
  W32((uint32_t)(ebp + 0xffffff9cu), 0x0u);
/* 8ad847: mov dword ptr [ebp - 0x60], 0 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x0u);
/* 8ad84e: mov dword ptr [ebp - 0x5c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x3f800000u);
/* 8ad855: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
/* 8ad85c: mov dword ptr [ebp - 0x54], 0 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x0u);
/* 8ad863: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
/* 8ad86a: mov dword ptr [ebp - 0x4c], 0 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x0u);
/* 8ad871: mov dword ptr [ebp - 0x48], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x3f800000u);
/* 8ad878: mov dword ptr [ebp - 0x44], 0 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x0u);
/* 8ad87f: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 8ad882: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 8ad885: mov dword ptr [ebp - 0x34], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x3f800000u);
/* 8ad88c: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8ad891: lea esi, [ebp - 0x70] */
  esi = (uint32_t)(ebp + 0xffffff90u);
/* 8ad894: lea edi, [ebp - 0x158] */
  edi = (uint32_t)(ebp + 0xfffffea8u);
/* 8ad89a: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8ad89c: add eax, 0x17c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8ad8a1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8ad8a3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ad8a6: mov edx, esp */
  edx = esp;
/* 8ad8a8: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 8ad8aa: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8ad8ad: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8ad8b0: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8ad8b3: lea ecx, [ebp - 0x118] */
  ecx = (uint32_t)(ebp + 0xfffffee8u);
/* 8ad8b9: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8ad8bc: call 0x6c9160 */
  esp -= 4; W32(esp, 0x8ad8c1u); SPILL(); f_6c9160(); if (g_unwind) return; RELOAD();
/* 8ad8c1: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ad8c4: mov edi, esp */
  edi = esp;
/* 8ad8c6: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8ad8cb: lea esi, [ebp - 0x70] */
  esi = (uint32_t)(ebp + 0xffffff90u);
/* 8ad8ce: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8ad8d0: lea ecx, [ebp - 0xd8] */
  ecx = (uint32_t)(ebp + 0xffffff28u);
/* 8ad8d6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ad8d7: mov ecx, eax */
  ecx = eax;
/* 8ad8d9: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 8ad8dd: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x8ad8e3u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 8ad8e3: lea ecx, [ebp - 0x118] */
  ecx = (uint32_t)(ebp + 0xfffffee8u);
/* 8ad8e9: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 8ad8ed: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8ad8f3u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8ad8f3: lea ecx, [ebp - 0x158] */
  ecx = (uint32_t)(ebp + 0xfffffea8u);
/* 8ad8f9: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 8ad8fd: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8ad903u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8ad903: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 8ad906: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 8ad90a: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8ad910u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8ad910: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 8ad913: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8ad915: lea eax, [ebp - 0xd8] */
  eax = (uint32_t)(ebp + 0xffffff28u);
/* 8ad91b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ad91c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ad91e: call dword ptr [edx + 0x38] */
  { uint32_t t = R32((uint32_t)(edx + 0x38u)); esp -= 4; W32(esp, 0x8ad921u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ad921: lea ecx, [ebp - 0xd8] */
  ecx = (uint32_t)(ebp + 0xffffff28u);
/* 8ad927: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8ad92b: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8ad931u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8ad931: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 8ad934: jmp 0x8ad948 */
  goto L_8ad948;
L_8ad936: /* 8ad936: mov eax, dword ptr [0xcfa350] */
  eax = R32((uint32_t)(0xcfa350u));
/* 8ad93b: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 8ad93e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8ad940: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ad941: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ad943: mov ecx, esi */
  ecx = esi;
/* 8ad945: call dword ptr [edx + 0x38] */
  { uint32_t t = R32((uint32_t)(edx + 0x38u)); esp -= 4; W32(esp, 0x8ad948u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8ad948: /* 8ad948: mov edx, dword ptr [ebx + 0x3f0] */
  edx = R32((uint32_t)(ebx + 0x3f0u));
/* 8ad94e: mov eax, dword ptr [edx + 0x3ac] */
  eax = R32((uint32_t)(edx + 0x3acu));
/* 8ad954: movzx ecx, byte ptr [ebx + 0x314] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + 0x314u)));
/* 8ad95b: mov dword ptr [eax + 0x38], ecx */
  W32((uint32_t)(eax + 0x38u), ecx);
/* 8ad95e: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8ad961: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 8ad964: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 8ad967: cmp dword ptr [eax + 0x540], 7 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x540u))); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8ad96e: mov edx, dword ptr [ebx + 0x3f0] */
  edx = R32((uint32_t)(ebx + 0x3f0u));
/* 8ad974: mov eax, dword ptr [edx + 0x3ac] */
  eax = R32((uint32_t)(edx + 0x3acu));
/* 8ad97a: jne 0x8ad985 */
  if (!zf) goto L_8ad985;
L_8ad97c: /* 8ad97c: mov dword ptr [eax + 0x48], 0 */
  W32((uint32_t)(eax + 0x48u), 0x0u);
/* 8ad983: jmp 0x8ad98e */
  goto L_8ad98e;
L_8ad985: /* 8ad985: mov edx, dword ptr [ebx + 0x318] */
  edx = R32((uint32_t)(ebx + 0x318u));
/* 8ad98b: mov dword ptr [eax + 0x48], edx */
  W32((uint32_t)(eax + 0x48u), edx);
L_8ad98e: /* 8ad98e: test byte ptr [ebx + 0x324], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x324u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8ad995: je 0x8ad9a7 */
  if (zf) goto L_8ad9a7;
L_8ad997: /* 8ad997: test byte ptr [ebx + 0x33c], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x33cu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8ad99e: jne 0x8ad9a7 */
  if (!zf) goto L_8ad9a7;
L_8ad9a0: /* 8ad9a0: mov eax, 1 */
  eax = 0x1u;
/* 8ad9a5: jmp 0x8ad9a9 */
  goto L_8ad9a9;
L_8ad9a7: /* 8ad9a7: xor eax, eax */
  eax = 0;
L_8ad9a9: /* 8ad9a9: mov edx, dword ptr [ebx + 0x3f0] */
  edx = R32((uint32_t)(ebx + 0x3f0u));
/* 8ad9af: mov edx, dword ptr [edx + 0x3ac] */
  edx = R32((uint32_t)(edx + 0x3acu));
/* 8ad9b5: mov dword ptr [edx + 0x3c], eax */
  W32((uint32_t)(edx + 0x3cu), eax);
/* 8ad9b8: mov eax, dword ptr [ebx + 0x3f0] */
  eax = R32((uint32_t)(ebx + 0x3f0u));
/* 8ad9be: mov edx, dword ptr [eax + 0x3ac] */
  edx = R32((uint32_t)(eax + 0x3acu));
/* 8ad9c4: mov dword ptr [edx + 0x40], 1 */
  W32((uint32_t)(edx + 0x40u), 0x1u);
/* 8ad9cb: mov eax, dword ptr [ebx + 0x3f0] */
  eax = R32((uint32_t)(ebx + 0x3f0u));
/* 8ad9d1: mov edx, dword ptr [eax + 0x3ac] */
  edx = R32((uint32_t)(eax + 0x3acu));
/* 8ad9d7: mov dword ptr [edx + 0x44], 0 */
  W32((uint32_t)(edx + 0x44u), 0x0u);
/* 8ad9de: mov eax, dword ptr [ebx + 0x1c8] */
  eax = R32((uint32_t)(ebx + 0x1c8u));
/* 8ad9e4: mov edx, dword ptr [ebx + 0x3f0] */
  edx = R32((uint32_t)(ebx + 0x3f0u));
/* 8ad9ea: mov edx, dword ptr [edx + 0x3ac] */
  edx = R32((uint32_t)(edx + 0x3acu));
/* 8ad9f0: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8ad9f3: mov dword ptr [edx + 0x4c], eax */
  W32((uint32_t)(edx + 0x4cu), eax);
/* 8ad9f6: mov eax, dword ptr [ebx + 0x3f0] */
  eax = R32((uint32_t)(ebx + 0x3f0u));
/* 8ad9fc: mov edx, dword ptr [eax + 0x3ac] */
  edx = R32((uint32_t)(eax + 0x3acu));
/* 8ada02: mov eax, dword ptr [ebx + 0x1c4] */
  eax = R32((uint32_t)(ebx + 0x1c4u));
/* 8ada08: mov dword ptr [edx + 0x50], eax */
  W32((uint32_t)(edx + 0x50u), eax);
/* 8ada0b: mov edx, dword ptr [ebx + 0x3f0] */
  edx = R32((uint32_t)(ebx + 0x3f0u));
/* 8ada11: mov eax, dword ptr [edx + 0x3ac] */
  eax = R32((uint32_t)(edx + 0x3acu));
/* 8ada17: mov edi, dword ptr [eax + 0x60] */
  edi = R32((uint32_t)(eax + 0x60u));
/* 8ada1a: mov edx, dword ptr [ebx + 0x1c8] */
  edx = R32((uint32_t)(ebx + 0x1c8u));
/* 8ada20: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 8ada22: xor edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 8ada24: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8ada27: xor edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 8ada29: mov dword ptr [eax + 0x60], edi */
  W32((uint32_t)(eax + 0x60u), edi);
/* 8ada2c: mov eax, dword ptr [ebx + 0x1c8] */
  eax = R32((uint32_t)(ebx + 0x1c8u));
/* 8ada32: mov edx, dword ptr [ebx + 0x3f0] */
  edx = R32((uint32_t)(ebx + 0x3f0u));
/* 8ada38: mov edx, dword ptr [edx + 0x3ac] */
  edx = R32((uint32_t)(edx + 0x3acu));
/* 8ada3e: shr eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 8ada41: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8ada44: mov dword ptr [edx + 0x54], eax */
  W32((uint32_t)(edx + 0x54u), eax);
/* 8ada47: mov eax, dword ptr [ebx + 0x1c8] */
  eax = R32((uint32_t)(ebx + 0x1c8u));
/* 8ada4d: mov edx, dword ptr [ebx + 0x3f0] */
  edx = R32((uint32_t)(ebx + 0x3f0u));
/* 8ada53: mov edx, dword ptr [edx + 0x3ac] */
  edx = R32((uint32_t)(edx + 0x3acu));
/* 8ada59: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 8ada5c: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8ada5f: mov dword ptr [edx + 0x58], eax */
  W32((uint32_t)(edx + 0x58u), eax);
/* 8ada62: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 8ada65: call 0x6c84a9 */
  esp -= 4; W32(esp, 0x8ada6au); SPILL(); f_6c84a9(); if (g_unwind) return; RELOAD();
/* 8ada6a: mov ecx, dword ptr [ebx + 0x3f0] */
  ecx = R32((uint32_t)(ebx + 0x3f0u));
/* 8ada70: mov edx, dword ptr [ecx + 0x3ac] */
  edx = R32((uint32_t)(ecx + 0x3acu));
/* 8ada76: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ada79: mov dword ptr [edx + 0x5c], eax */
  W32((uint32_t)(edx + 0x5cu), eax);
/* 8ada7c: mov ecx, esp */
  ecx = esp;
/* 8ada7e: mov dword ptr [ebp + 0x14], esp */
  W32((uint32_t)(ebp + 0x14u), esp);
/* 8ada81: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ada83: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ada86: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 8ada8d: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8ada90: mov eax, esp */
  eax = esp;
/* 8ada92: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 8ada94: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 8ada9b: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8ada9e: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8adaa1: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8adaa8: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8adaab: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 8adaae: call dword ptr [0xcfa5a0] */
  esp -= 4; W32(esp, 0x8adab4u); SPILL(); f_4e3a21(); if (g_unwind) return; /* Core!??0FSphere@@QAE@VFVector@@M@Z */ RELOAD();
/* 8adab4: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8adab6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8adab8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8adaba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8adabc: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8adabe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8adac0: mov ecx, esi */
  ecx = esi;
/* 8adac2: call dword ptr [eax + 0x24] */
  { uint32_t t = R32((uint32_t)(eax + 0x24u)); esp -= 4; W32(esp, 0x8adac5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8adac5: mov eax, dword ptr [ebx + 0x3f0] */
  eax = R32((uint32_t)(ebx + 0x3f0u));
/* 8adacb: mov ecx, dword ptr [eax + 0x3ac] */
  ecx = R32((uint32_t)(eax + 0x3acu));
/* 8adad1: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8adad3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8adad5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8adad7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8adad9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8adada: mov ecx, esi */
  ecx = esi;
/* 8adadc: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x8adadfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8adadf: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8adae1: lea eax, [ebp - 0x98] */
  eax = (uint32_t)(ebp + 0xffffff68u);
/* 8adae7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8adae8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8adaea: mov ecx, esi */
  ecx = esi;
/* 8adaec: call dword ptr [edx + 0x50] */
  { uint32_t t = R32((uint32_t)(edx + 0x50u)); esp -= 4; W32(esp, 0x8adaefu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8adaef: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8adaf1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8adaf2: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 8adaf5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8adaf6: mov ecx, esi */
  ecx = esi;
/* 8adaf8: call dword ptr [edx + 0x58] */
  { uint32_t t = R32((uint32_t)(edx + 0x58u)); esp -= 4; W32(esp, 0x8adafbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8adafb: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 8adafe: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8adb00: lea edi, [ecx*4 - 1] */
  edi = (uint32_t)(ecx*4 + 0xffffffffu);
/* 8adb07: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8adb08: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8adb0a: add ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8adb0c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8adb0d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8adb0e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8adb10: mov ecx, esi */
  ecx = esi;
/* 8adb12: call dword ptr [edx + 0x5c] */
  { uint32_t t = R32((uint32_t)(edx + 0x5cu)); esp -= 4; W32(esp, 0x8adb15u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8adb15: lea ecx, [ebp - 0x94] */
  ecx = (uint32_t)(ebp + 0xffffff6cu);
/* 8adb1b: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8adb1f: call 0x6c8166 */
  esp -= 4; W32(esp, 0x8adb24u); SPILL(); f_6c8166(); if (g_unwind) return; RELOAD();
/* 8adb24: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
L_8adb27: /* 8adb27: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8adb2a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8adb2b: mov eax, esi */
  eax = esi;
/* 8adb2d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8adb2e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8adb35: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8adb36: mov esp, ebp */
  esp = ebp;
/* 8adb38: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8adb39: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_8adb3c(void) {
  LOAD_REGS();
L_8adb3c: /* 8adb3c: mov edx, dword ptr [ebp - 0x74] */
  edx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 8adb3f: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8adb44: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 8adb47: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8adb48: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 8adb4b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8adb50u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8adb50(); return;
}

void f_8adb50(void) {
  LOAD_REGS();
L_8adb50: /* 8adb50: push 0xa1b458 */
  { uint32_t v = 0xa1b458u; esp -= 4; W32(esp, v); }
/* 8adb55: push 0xae99a8 */
  { uint32_t v = 0xae99a8u; esp -= 4; W32(esp, v); }
/* 8adb5a: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8adb60u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8adb60: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8adb63: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8adb65: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8adb67: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8adb6cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8adb6c: guest_badaddr(0x8adb6c); return;
}

void f_8adc90(void) {
  LOAD_REGS();
L_8adc90: /* 8adc90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8adc91: mov esi, ecx */
  esi = ecx;
/* 8adc93: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8adc99u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8adc99: mov eax, esi */
  eax = esi;
/* 8adc9b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8adc9c: ret  */
  esp += 4; SPILL(); return;
}

void f_8adcb0(void) {
  LOAD_REGS();
L_8adcb0: /* 8adcb0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8adcb1: mov esi, ecx */
  esi = ecx;
/* 8adcb3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8adcb9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8adcb9: mov eax, esi */
  eax = esi;
/* 8adcbb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8adcbc: ret  */
  esp += 4; SPILL(); return;
}

void f_8adcd0(void) {
  LOAD_REGS();
L_8adcd0: /* 8adcd0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8adcd4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8adcd5: mov esi, ecx */
  esi = ecx;
/* 8adcd7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8adcd8: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 8adcdb: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8adce1u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8adce1: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 8adce5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8adce7: mov dword ptr [esi + 0x10], edx */
  W32((uint32_t)(esi + 0x10u), edx);
/* 8adcea: mov eax, esi */
  eax = esi;
/* 8adcec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8adced: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8add00(void) {
  LOAD_REGS();
L_8add00: /* 8add00: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8add06: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8add08: push 0x9d66d9 */
  { uint32_t v = 0x9d66d9u; esp -= 4; W32(esp, v); }
/* 8add0d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8add0e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8add15: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8add16: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8add17: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8add18: mov eax, dword ptr [0xce8248] */
  eax = R32((uint32_t)(0xce8248u));
/* 8add1d: xor edi, edi */
  edi = 0;
/* 8add1f: or ebx, 0xffffffff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 8add22: xor esi, esi */
  esi = 0;
/* 8add24: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8add26: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 8add2a: jle 0x8add5b */
  if ((zf || sf != of)) goto L_8add5b;
L_8add2c: /* 8add2c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8add30: /* 8add30: cmp ebx, -1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8add33: jne 0x8add5b */
  if (!zf) goto L_8add5b;
L_8add35: /* 8add35: mov ecx, dword ptr [0xce8244] */
  ecx = R32((uint32_t)(0xce8244u));
/* 8add3b: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* 8add3f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8add40: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8add42: call dword ptr [0xcfa8b8] */
  esp -= 4; W32(esp, 0x8add48u); SPILL(); f_4e3b43(); if (g_unwind) return; /* Core!??8FString@@QBEHABV0@@Z */ RELOAD();
/* 8add48: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8add4a: je 0x8add4e */
  if (zf) goto L_8add4e;
L_8add4c: /* 8add4c: mov ebx, esi */
  ebx = esi;
L_8add4e: /* 8add4e: mov eax, dword ptr [0xce8248] */
  eax = R32((uint32_t)(0xce8248u));
/* 8add53: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8add54: add edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8add57: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8add59: jl 0x8add30 */
  if ((sf != of)) goto L_8add30;
L_8add5b: /* 8add5b: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 8add5f: mov dword ptr [esp + 0x14], 0xffffffff */
  W32((uint32_t)(esp + 0x14u), 0xffffffffu);
/* 8add67: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8add6du); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8add6d: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 8add71: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8add72: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8add73: mov eax, ebx */
  eax = ebx;
/* 8add75: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8add7c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8add7d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8add80: ret  */
  esp += 4; SPILL(); return;
}

void f_8addc0(void) {
  LOAD_REGS();
L_8addc0: /* 8addc0: mov ecx, dword ptr [ebx + 0x20] */
  ecx = R32((uint32_t)(ebx + 0x20u));
/* 8addc3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8addc6: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8addc7: xor eax, eax */
  eax = 0;
/* 8addc9: xor ebp, ebp */
  ebp = 0;
/* 8addcb: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8addcd: jle 0x8adfed */
  if ((zf || sf != of)) goto L_8adfed;
L_8addd3: /* 8addd3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8addd4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8addd5: xor edi, edi */
  edi = 0;
L_8addd7: /* 8addd7: mov ecx, dword ptr [ebx + 0x1c] */
  ecx = R32((uint32_t)(ebx + 0x1cu));
/* 8addda: mov edx, dword ptr [ecx + edi + 0x30] */
  edx = R32((uint32_t)(ecx + edi + 0x30u));
/* 8addde: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8adde0: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8adde2: je 0x8adfdc */
  if (zf) goto L_8adfdc;
L_8adde8: /* 8adde8: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 8addeb: mov dword ptr [ecx + 0x24], eax */
  W32((uint32_t)(ecx + 0x24u), eax);
/* 8addee: mov dword ptr [ecx + 0x28], eax */
  W32((uint32_t)(ecx + 0x28u), eax);
/* 8addf1: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8addf4: mov esi, 0x20 */
  esi = 0x20u;
/* 8addf9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8ade00: /* 8ade00: fld dword ptr [edx - 8] */
  { double v = F32((uint32_t)(edx + 0xfffffff8u)); FPUSH(v); }
/* 8ade03: fld dword ptr [ecx + 0x24] */
  { double v = F32((uint32_t)(ecx + 0x24u)); FPUSH(v); }
/* 8ade06: fst dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0);
/* 8ade0a: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 8ade0c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ade0e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8ade11: jp 0x8ade19 */
  if (pf) goto L_8ade19;
L_8ade13: /* 8ade13: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8ade15: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
L_8ade19: /* 8ade19: fst dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0);
/* 8ade1d: fstp dword ptr [ecx + 0x24] */
  WF32((uint32_t)(ecx + 0x24u), ST0); FPOP();
/* 8ade20: fld dword ptr [edx - 8] */
  { double v = F32((uint32_t)(edx + 0xfffffff8u)); FPUSH(v); }
/* 8ade23: fld dword ptr [ecx + 0x28] */
  { double v = F32((uint32_t)(ecx + 0x28u)); FPUSH(v); }
/* 8ade26: fst dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0);
/* 8ade2a: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 8ade2c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ade2e: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8ade31: jne 0x8ade39 */
  if (!zf) goto L_8ade39;
L_8ade33: /* 8ade33: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8ade35: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
L_8ade39: /* 8ade39: fst dword ptr [ecx + 0x28] */
  WF32((uint32_t)(ecx + 0x28u), ST0);
/* 8ade3c: fld dword ptr [edx - 4] */
  { double v = F32((uint32_t)(edx + 0xfffffffcu)); FPUSH(v); }
/* 8ade3f: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 8ade43: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 8ade45: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ade47: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8ade4a: jnp 0x8ade52 */
  if (!pf) goto L_8ade52;
L_8ade4c: /* 8ade4c: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 8ade50: jmp 0x8ade54 */
  goto L_8ade54;
L_8ade52: /* 8ade52: fstp st(0) */
  STI(0) = ST0; FPOP();
L_8ade54: /* 8ade54: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 8ade58: mov dword ptr [ecx + 0x24], eax */
  W32((uint32_t)(ecx + 0x24u), eax);
/* 8ade5b: mov eax, dword ptr [edx - 4] */
  eax = R32((uint32_t)(edx + 0xfffffffcu));
/* 8ade5e: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 8ade62: fcom dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
/* 8ade66: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ade68: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8ade6b: je 0x8ade73 */
  if (zf) goto L_8ade73;
L_8ade6d: /* 8ade6d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8ade6f: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
L_8ade73: /* 8ade73: fst dword ptr [ecx + 0x28] */
  WF32((uint32_t)(ecx + 0x28u), ST0);
/* 8ade76: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 8ade78: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 8ade7c: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 8ade7e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ade80: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8ade83: jnp 0x8ade8b */
  if (!pf) goto L_8ade8b;
L_8ade85: /* 8ade85: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 8ade89: jmp 0x8ade8d */
  goto L_8ade8d;
L_8ade8b: /* 8ade8b: fstp st(0) */
  STI(0) = ST0; FPOP();
L_8ade8d: /* 8ade8d: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 8ade91: mov dword ptr [ecx + 0x24], eax */
  W32((uint32_t)(ecx + 0x24u), eax);
/* 8ade94: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8ade96: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 8ade9a: fcom dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
/* 8ade9e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8adea0: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8adea3: je 0x8adeab */
  if (zf) goto L_8adeab;
L_8adea5: /* 8adea5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8adea7: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
L_8adeab: /* 8adeab: fst dword ptr [ecx + 0x28] */
  WF32((uint32_t)(ecx + 0x28u), ST0);
/* 8adeae: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 8adeb1: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 8adeb5: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 8adeb7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8adeb9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8adebc: jnp 0x8adec4 */
  if (!pf) goto L_8adec4;
L_8adebe: /* 8adebe: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 8adec2: jmp 0x8adec6 */
  goto L_8adec6;
L_8adec4: /* 8adec4: fstp st(0) */
  STI(0) = ST0; FPOP();
L_8adec6: /* 8adec6: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 8adeca: mov dword ptr [ecx + 0x24], eax */
  W32((uint32_t)(ecx + 0x24u), eax);
/* 8adecd: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 8aded0: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 8aded4: fcom dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
/* 8aded8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8adeda: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8adedd: je 0x8adee5 */
  if (zf) goto L_8adee5;
L_8adedf: /* 8adedf: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8adee1: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
L_8adee5: /* 8adee5: fst dword ptr [ecx + 0x28] */
  WF32((uint32_t)(ecx + 0x28u), ST0);
/* 8adee8: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 8adeeb: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 8adeef: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 8adef1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8adef3: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8adef6: jnp 0x8adefe */
  if (!pf) goto L_8adefe;
L_8adef8: /* 8adef8: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 8adefc: jmp 0x8adf00 */
  goto L_8adf00;
L_8adefe: /* 8adefe: fstp st(0) */
  STI(0) = ST0; FPOP();
L_8adf00: /* 8adf00: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 8adf04: mov dword ptr [ecx + 0x24], eax */
  W32((uint32_t)(ecx + 0x24u), eax);
/* 8adf07: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
/* 8adf0a: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 8adf0e: fcom dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
/* 8adf12: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8adf14: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8adf17: je 0x8adf1f */
  if (zf) goto L_8adf1f;
L_8adf19: /* 8adf19: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8adf1b: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
L_8adf1f: /* 8adf1f: fst dword ptr [ecx + 0x28] */
  WF32((uint32_t)(ecx + 0x28u), ST0);
/* 8adf22: fld dword ptr [edx + 0xc] */
  { double v = F32((uint32_t)(edx + 0xcu)); FPUSH(v); }
/* 8adf25: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 8adf29: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 8adf2b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8adf2d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8adf30: jnp 0x8adf38 */
  if (!pf) goto L_8adf38;
L_8adf32: /* 8adf32: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 8adf36: jmp 0x8adf3a */
  goto L_8adf3a;
L_8adf38: /* 8adf38: fstp st(0) */
  STI(0) = ST0; FPOP();
L_8adf3a: /* 8adf3a: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 8adf3e: mov dword ptr [ecx + 0x24], eax */
  W32((uint32_t)(ecx + 0x24u), eax);
/* 8adf41: mov eax, dword ptr [edx + 0xc] */
  eax = R32((uint32_t)(edx + 0xcu));
/* 8adf44: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 8adf48: fcom dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
/* 8adf4c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8adf4e: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8adf51: je 0x8adf59 */
  if (zf) goto L_8adf59;
L_8adf53: /* 8adf53: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8adf55: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
L_8adf59: /* 8adf59: fst dword ptr [ecx + 0x28] */
  WF32((uint32_t)(ecx + 0x28u), ST0);
/* 8adf5c: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 8adf5f: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 8adf63: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 8adf65: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8adf67: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8adf6a: jnp 0x8adf72 */
  if (!pf) goto L_8adf72;
L_8adf6c: /* 8adf6c: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 8adf70: jmp 0x8adf74 */
  goto L_8adf74;
L_8adf72: /* 8adf72: fstp st(0) */
  STI(0) = ST0; FPOP();
L_8adf74: /* 8adf74: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 8adf78: mov dword ptr [ecx + 0x24], eax */
  W32((uint32_t)(ecx + 0x24u), eax);
/* 8adf7b: mov eax, dword ptr [edx + 0x10] */
  eax = R32((uint32_t)(edx + 0x10u));
/* 8adf7e: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 8adf82: fcom dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
/* 8adf86: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8adf88: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8adf8b: je 0x8adf93 */
  if (zf) goto L_8adf93;
L_8adf8d: /* 8adf8d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8adf8f: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
L_8adf93: /* 8adf93: fst dword ptr [ecx + 0x28] */
  WF32((uint32_t)(ecx + 0x28u), ST0);
/* 8adf96: fld dword ptr [edx + 0x14] */
  { double v = F32((uint32_t)(edx + 0x14u)); FPUSH(v); }
/* 8adf99: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 8adf9d: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 8adf9f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8adfa1: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8adfa4: jnp 0x8adfac */
  if (!pf) goto L_8adfac;
L_8adfa6: /* 8adfa6: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 8adfaa: jmp 0x8adfae */
  goto L_8adfae;
L_8adfac: /* 8adfac: fstp st(0) */
  STI(0) = ST0; FPOP();
L_8adfae: /* 8adfae: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 8adfb2: mov dword ptr [ecx + 0x24], eax */
  W32((uint32_t)(ecx + 0x24u), eax);
/* 8adfb5: mov eax, dword ptr [edx + 0x14] */
  eax = R32((uint32_t)(edx + 0x14u));
/* 8adfb8: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 8adfbc: fcom dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
/* 8adfc0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8adfc2: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8adfc5: je 0x8adfcd */
  if (zf) goto L_8adfcd;
L_8adfc7: /* 8adfc7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8adfc9: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
L_8adfcd: /* 8adfcd: add edx, 0x20 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8adfd0: fstp dword ptr [ecx + 0x28] */
  WF32((uint32_t)(ecx + 0x28u), ST0); FPOP();
/* 8adfd3: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 8adfd4: jne 0x8ade00 */
  if (!zf) goto L_8ade00;
L_8adfda: /* 8adfda: xor eax, eax */
  eax = 0;
L_8adfdc: /* 8adfdc: mov ecx, dword ptr [ebx + 0x20] */
  ecx = R32((uint32_t)(ebx + 0x20u));
/* 8adfdf: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 8adfe0: add edi, 0x34 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8adfe3: cmp ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8adfe5: jl 0x8addd7 */
  if ((sf != of)) goto L_8addd7;
L_8adfeb: /* 8adfeb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8adfec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_8adfed: /* 8adfed: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8adfee: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8adff1: ret  */
  esp += 4; SPILL(); return;
}

void f_8ae090(void) {
  LOAD_REGS();
L_8ae090: /* 8ae090: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ae091: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8ae092: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 8ae096: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ae097: mov ebx, ecx */
  ebx = ecx;
/* 8ae099: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ae09a: mov ecx, ebp */
  ecx = ebp;
/* 8ae09c: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8ae0a2u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8ae0a2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ae0a3: call 0x6cca40 */
  esp -= 4; W32(esp, 0x8ae0a8u); SPILL(); f_6cca40(); if (g_unwind) return; RELOAD();
/* 8ae0a8: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* 8ae0ab: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 8ae0ae: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ae0b1: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 8ae0b2: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8ae0b4: mov esi, dword ptr [edx + eax*4] */
  esi = R32((uint32_t)(edx + eax*4));
/* 8ae0b7: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8ae0ba: je 0x8ae0e1 */
  if (zf) goto L_8ae0e1;
L_8ae0bc: /* 8ae0bc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8ae0c0: /* 8ae0c0: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8ae0c2: lea edi, [esi + esi*4] */
  edi = (uint32_t)(esi + esi*4);
/* 8ae0c5: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 8ae0c8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8ae0c9: lea ecx, [edi + eax + 4] */
  ecx = (uint32_t)(edi + eax + 0x4u);
/* 8ae0cd: call dword ptr [0xcfa8b8] */
  esp -= 4; W32(esp, 0x8ae0d3u); SPILL(); f_4e3b43(); if (g_unwind) return; /* Core!??8FString@@QBEHABV0@@Z */ RELOAD();
/* 8ae0d3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ae0d5: jne 0x8ae0ea */
  if (!zf) goto L_8ae0ea;
L_8ae0d7: /* 8ae0d7: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8ae0d9: mov esi, dword ptr [edi + ecx] */
  esi = R32((uint32_t)(edi + ecx));
/* 8ae0dc: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8ae0df: jne 0x8ae0c0 */
  if (!zf) goto L_8ae0c0;
L_8ae0e1: /* 8ae0e1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8ae0e2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ae0e3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8ae0e4: xor eax, eax */
  eax = 0;
/* 8ae0e6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8ae0e7: ret 4 */
  esp += 8; SPILL(); return;
L_8ae0ea: /* 8ae0ea: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8ae0ec: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8ae0ed: lea edx, [esi + esi*4] */
  edx = (uint32_t)(esi + esi*4);
/* 8ae0f0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ae0f1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8ae0f2: lea eax, [eax + edx*4 + 0x10] */
  eax = (uint32_t)(eax + edx*4 + 0x10u);
/* 8ae0f6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8ae0f7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8ae120(void) {
  LOAD_REGS();
L_8ae120: /* 8ae120: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8ae121: mov ebp, esp */
  ebp = esp;
/* 8ae123: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8ae125: push 0x9d6702 */
  { uint32_t v = 0x9d6702u; esp -= 4; W32(esp, v); }
/* 8ae12a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8ae130: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ae131: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8ae138: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ae13b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ae13c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ae13d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ae13e: mov edi, dword ptr [0xcfa5b8] */
  edi = R32((uint32_t)(0xcfa5b8u));
/* 8ae144: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8ae147: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 8ae14a: push 0xae9a70 */
  { uint32_t v = 0xae9a70u; esp -= 4; W32(esp, v); }
/* 8ae14f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ae150: mov esi, ecx */
  esi = ecx;
/* 8ae152: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8ae159: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8ae15bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ae15b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ae15e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ae160: je 0x8ae320 */
  if (zf) goto L_8ae320;
L_8ae166: /* 8ae166: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 8ae169: push 0xae9a7c */
  { uint32_t v = 0xae9a7cu; esp -= 4; W32(esp, v); }
/* 8ae16e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ae16f: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8ae171u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ae171: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ae174: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ae176: je 0x8ae19b */
  if (zf) goto L_8ae19b;
L_8ae178: /* 8ae178: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8ae17a: xor edx, edx */
  edx = 0;
/* 8ae17c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ae17e: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 8ae181: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
L_8ae183: /* 8ae183: mov eax, 1 */
  eax = 0x1u;
/* 8ae188: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8ae18b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8ae192: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8ae193: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ae194: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8ae195: mov esp, ebp */
  esp = ebp;
/* 8ae197: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8ae198: ret 8 */
  esp += 12; SPILL(); return;
L_8ae19b: /* 8ae19b: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 8ae19e: push 0xae9a88 */
  { uint32_t v = 0xae9a88u; esp -= 4; W32(esp, v); }
/* 8ae1a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ae1a4: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8ae1a6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ae1a6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ae1a9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ae1ab: je 0x8ae1bc */
  if (zf) goto L_8ae1bc;
L_8ae1ad: /* 8ae1ad: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* 8ae1b0: xor ecx, ecx */
  ecx = 0;
/* 8ae1b2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ae1b4: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 8ae1b7: mov dword ptr [esi + 0x48], ecx */
  W32((uint32_t)(esi + 0x48u), ecx);
/* 8ae1ba: jmp 0x8ae183 */
  goto L_8ae183;
L_8ae1bc: /* 8ae1bc: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 8ae1bf: push 0xae9a90 */
  { uint32_t v = 0xae9a90u; esp -= 4; W32(esp, v); }
/* 8ae1c4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ae1c5: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8ae1c7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ae1c7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ae1ca: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ae1cc: je 0x8ae1dd */
  if (zf) goto L_8ae1dd;
L_8ae1ce: /* 8ae1ce: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8ae1d1: xor eax, eax */
  eax = 0;
/* 8ae1d3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ae1d5: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 8ae1d8: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 8ae1db: jmp 0x8ae183 */
  goto L_8ae183;
L_8ae1dd: /* 8ae1dd: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 8ae1e0: push 0xae9aa4 */
  { uint32_t v = 0xae9aa4u; esp -= 4; W32(esp, v); }
/* 8ae1e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ae1e6: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8ae1e8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ae1e8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ae1eb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ae1ed: je 0x8ae1f8 */
  if (zf) goto L_8ae1f8;
L_8ae1ef: /* 8ae1ef: mov ebx, esi */
  ebx = esi;
/* 8ae1f1: call 0x8addc0 */
  esp -= 4; W32(esp, 0x8ae1f6u); SPILL(); f_8addc0(); if (g_unwind) return; RELOAD();
/* 8ae1f6: jmp 0x8ae183 */
  goto L_8ae183;
L_8ae1f8: /* 8ae1f8: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8ae1fb: lea edx, [esi + 0x44] */
  edx = (uint32_t)(esi + 0x44u);
/* 8ae1fe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ae1ff: push 0xae9ab4 */
  { uint32_t v = 0xae9ab4u; esp -= 4; W32(esp, v); }
/* 8ae204: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ae205: call dword ptr [0xcfaa54] */
  esp -= 4; W32(esp, 0x8ae20bu); SPILL(); f_4e43fe(); if (g_unwind) return; /* Core!?Parse@@YAHPBG0AAH@Z */ RELOAD();
/* 8ae20b: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8ae20e: mov edi, dword ptr [0xcfaa58] */
  edi = R32((uint32_t)(0xcfaa58u));
/* 8ae214: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ae217: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
/* 8ae21a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ae21b: push 0xae9ac4 */
  { uint32_t v = 0xae9ac4u; esp -= 4; W32(esp, v); }
/* 8ae220: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ae221: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8ae223u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ae223: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8ae226: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ae229: lea eax, [esi + 0x38] */
  eax = (uint32_t)(esi + 0x38u);
/* 8ae22c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ae22d: push 0xae9ad4 */
  { uint32_t v = 0xae9ad4u; esp -= 4; W32(esp, v); }
/* 8ae232: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ae233: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8ae235u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ae235: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8ae238: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ae23b: lea edx, [esi + 0x3c] */
  edx = (uint32_t)(esi + 0x3cu);
/* 8ae23e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ae23f: push 0xae9ae4 */
  { uint32_t v = 0xae9ae4u; esp -= 4; W32(esp, v); }
/* 8ae244: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ae245: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8ae247u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ae247: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8ae24a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ae24d: lea ecx, [esi + 0x40] */
  ecx = (uint32_t)(esi + 0x40u);
/* 8ae250: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ae251: push 0xae9af0 */
  { uint32_t v = 0xae9af0u; esp -= 4; W32(esp, v); }
/* 8ae256: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ae257: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8ae259u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ae259: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8ae25c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ae25f: lea eax, [esi + 0x50] */
  eax = (uint32_t)(esi + 0x50u);
/* 8ae262: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ae263: push 0xae9afc */
  { uint32_t v = 0xae9afcu; esp -= 4; W32(esp, v); }
/* 8ae268: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ae269: call dword ptr [0xcfabcc] */
  esp -= 4; W32(esp, 0x8ae26fu); SPILL(); f_4e4381(); if (g_unwind) return; /* Core!?Parse@@YAHPBG0AAE@Z */ RELOAD();
/* 8ae26f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8ae272: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ae275: lea edi, [esi + 0x54] */
  edi = (uint32_t)(esi + 0x54u);
/* 8ae278: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ae279: push 0xae9b0c */
  { uint32_t v = 0xae9b0cu; esp -= 4; W32(esp, v); }
/* 8ae27e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ae27f: call dword ptr [0xcfabc8] */
  esp -= 4; W32(esp, 0x8ae285u); SPILL(); f_4e1a5a(); if (g_unwind) return; /* Core!?Parse@@YAHPBG0AAVFString@@@Z */ RELOAD();
/* 8ae285: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ae288: push 0xae9b1c */
  { uint32_t v = 0xae9b1cu; esp -= 4; W32(esp, v); }
/* 8ae28d: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 8ae290: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8ae296u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8ae296: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ae297: mov ecx, edi */
  ecx = edi;
/* 8ae299: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8ae29d: call dword ptr [0xcfa8b8] */
  esp -= 4; W32(esp, 0x8ae2a3u); SPILL(); f_4e3b43(); if (g_unwind) return; /* Core!??8FString@@QBEHABV0@@Z */ RELOAD();
/* 8ae2a3: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 8ae2a6: mov ebx, eax */
  ebx = eax;
/* 8ae2a8: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8ae2ac: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8ae2b2u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8ae2b2: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ae2b4: je 0x8ae2c3 */
  if (zf) goto L_8ae2c3;
L_8ae2b6: /* 8ae2b6: push 0xce6f08 */
  { uint32_t v = 0xce6f08u; esp -= 4; W32(esp, v); }
/* 8ae2bb: mov ecx, edi */
  ecx = edi;
/* 8ae2bd: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8ae2c3u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
L_8ae2c3: /* 8ae2c3: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8ae2c6: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x8ae2ccu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 8ae2cc: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8ae2cf: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 8ae2d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ae2d3: push 0xae9b28 */
  { uint32_t v = 0xae9b28u; esp -= 4; W32(esp, v); }
/* 8ae2d8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ae2d9: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8ae2dd: call dword ptr [0xcfabc8] */
  esp -= 4; W32(esp, 0x8ae2e3u); SPILL(); f_4e1a5a(); if (g_unwind) return; /* Core!?Parse@@YAHPBG0AAVFString@@@Z */ RELOAD();
/* 8ae2e3: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 8ae2e6: mov ecx, esp */
  ecx = esp;
/* 8ae2e8: mov dword ptr [ebp - 0x14], esp */
  W32((uint32_t)(ebp + 0xffffffecu), esp);
/* 8ae2eb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ae2ec: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x8ae2f2u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 8ae2f2: call 0x8add00 */
  esp -= 4; W32(esp, 0x8ae2f7u); SPILL(); f_8add00(); if (g_unwind) return; RELOAD();
/* 8ae2f7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ae2fa: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8ae2fd: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8ae300: je 0x8ae30e */
  if (zf) goto L_8ae30e;
L_8ae302: /* 8ae302: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 8ae305: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ae306: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 8ae309: call 0x6c5993 */
  esp -= 4; W32(esp, 0x8ae30eu); SPILL(); f_6c5993(); if (g_unwind) return; RELOAD();
L_8ae30e: /* 8ae30e: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8ae311: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8ae315: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8ae31bu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8ae31b: jmp 0x8ae183 */
  goto L_8ae183;
L_8ae320: /* 8ae320: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8ae323: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8ae324: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ae325: xor eax, eax */
  eax = 0;
/* 8ae327: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8ae32e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8ae32f: mov esp, ebp */
  esp = ebp;
/* 8ae331: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8ae332: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8ae335(void) {
  LOAD_REGS();
L_8ae335: /* 8ae335: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8ae338: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8ae33d: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 8ae340: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ae341: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8ae344: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8ae349u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8ae349(); return;
}

void f_8ae349(void) {
  LOAD_REGS();
L_8ae349: /* 8ae349: push 0xa1b4a4 */
  { uint32_t v = 0xa1b4a4u; esp -= 4; W32(esp, v); }
/* 8ae34e: push 0xae9b3c */
  { uint32_t v = 0xae9b3cu; esp -= 4; W32(esp, v); }
/* 8ae353: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8ae359u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8ae359: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ae35c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ae35e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ae360: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8ae365u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8ae365: guest_badaddr(0x8ae365); return;
}

void f_8ae410(void) {
  LOAD_REGS();
L_8ae410: /* 8ae410: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ae411: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ae413: mov esi, ecx */
  esi = ecx;
/* 8ae415: call 0x6c8026 */
  esp -= 4; W32(esp, 0x8ae41au); SPILL(); f_6c8026(); if (g_unwind) return; RELOAD();
/* 8ae41a: mov dword ptr [esi + 0x10], 8 */
  W32((uint32_t)(esi + 0x10u), 0x8u);
/* 8ae421: mov ecx, esi */
  ecx = esi;
/* 8ae423: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ae424: jmp 0x6c5fce */
  SPILL(); f_6c5fce(); return;
}

void f_8ae440(void) {
  LOAD_REGS();
L_8ae440: /* 8ae440: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ae441: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ae442: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8ae444: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8ae446: mov esi, ecx */
  esi = ecx;
/* 8ae448: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8ae44eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8ae44e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8ae450: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 8ae453: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 8ae456: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ae458: je 0x8ae46d */
  if (zf) goto L_8ae46d;
L_8ae45a: /* 8ae45a: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 8ae45e: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 8ae462: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ae463: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ae464: call 0x6c4cc8 */
  esp -= 4; W32(esp, 0x8ae469u); SPILL(); f_6c4cc8(); if (g_unwind) return; RELOAD();
/* 8ae469: mov edi, eax */
  edi = eax;
/* 8ae46b: jmp 0x8ae46f */
  goto L_8ae46f;
L_8ae46d: /* 8ae46d: xor edi, edi */
  edi = 0;
L_8ae46f: /* 8ae46f: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 8ae472: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8ae478u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8ae478: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ae479: call 0x6cca40 */
  esp -= 4; W32(esp, 0x8ae47eu); SPILL(); f_6cca40(); if (g_unwind) return; RELOAD();
/* 8ae47e: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 8ae481: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 8ae484: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ae487: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 8ae488: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8ae48a: mov ecx, dword ptr [edx + eax*4] */
  ecx = R32((uint32_t)(edx + eax*4));
/* 8ae48d: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 8ae48f: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 8ae492: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 8ae495: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 8ae496: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 8ae499: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 8ae49c: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8ae49f: lea edx, [eax + eax + 8] */
  edx = (uint32_t)(eax + eax + 0x8u);
/* 8ae4a3: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ae4a5: jge 0x8ae4b3 */
  if ((sf == of)) goto L_8ae4b3;
L_8ae4a7: /* 8ae4a7: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8ae4a9: mov ecx, esi */
  ecx = esi;
/* 8ae4ab: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 8ae4ae: call 0x6c5fce */
  esp -= 4; W32(esp, 0x8ae4b3u); SPILL(); f_6c5fce(); if (g_unwind) return; RELOAD();
L_8ae4b3: /* 8ae4b3: lea eax, [edi + 0x10] */
  eax = (uint32_t)(edi + 0x10u);
/* 8ae4b6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8ae4b7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ae4b8: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8ae4e0(void) {
  LOAD_REGS();
L_8ae4e0: /* 8ae4e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8ae4e2: push 0x9d672b */
  { uint32_t v = 0x9d672bu; esp -= 4; W32(esp, v); }
/* 8ae4e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8ae4ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ae4ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8ae4f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ae4f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ae4f7: mov esi, ecx */
  esi = ecx;
/* 8ae4f9: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 8ae4fc: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 8ae500: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8ae506u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8ae506: lea ecx, [esi + 0x18] */
  ecx = (uint32_t)(esi + 0x18u);
/* 8ae509: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 8ae511: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x8ae517u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 8ae517: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 8ae51b: mov eax, esi */
  eax = esi;
/* 8ae51d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ae51e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8ae525: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ae528: ret  */
  esp += 4; SPILL(); return;
}
